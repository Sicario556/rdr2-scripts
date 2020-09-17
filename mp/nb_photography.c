void __EntryFunction__()
{
	fLocal_1646 = 1f;
	fLocal_1647 = 1f;
	sLocal_1652 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_1653 = "facials@gen_male@portrait";
	iVar0 = iVar1652;
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
	network_register_host_broadcast_variables(&Local_13, 69, 42);
	func_10(_0xba24095ea96dfe17(&Local_13), 69, "m_hostData");
	network_register_player_broadcast_variables(&Local_82, 865, 43);
	func_11(_0x690806bc83bc8ca2(Local_82[0]), 865, "m_clientData");
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
	else if (func_17(Local_947.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_947.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_947.f_12), Local_947.f_9))
	{
		return true;
	}
	else if (Local_947.f_8 == 6)
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
	_copy_memory(&Local_947, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_947.f_1, Local_947.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_947.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
	Local_947.f_9 = { func_33(Var3.f_5, 8) };
	Local_947.f_14 = Var3.f_5;
	Local_947.f_15 = { Var3.f_11 };
	Local_947.f_18 = Var3.f_7;
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
	if (Local_947.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_947.f_8)
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
	if (Local_947.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_67(Local_947.f_12, 4);
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
	while (iVar0 < 3)
	{
		Local_13.f_49.f_1[iVar0] = 255;
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
	reserve_network_mission_peds(3);
	func_118(&(Local_947.f_19.f_12));
	func_119();
	func_120();
	if (!add_relationship_group("REL_OREPHT", &(Local_947.f_19.f_45)))
	{
	}
	else
	{
		func_121(134217728);
	}
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
	while (iVar0 < 3)
	{
		func_122(&(Local_13.f_58.f_10), iVar0, 3);
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
	iVar0 = Global_1198046->f_231.f_1066[Local_947.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
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
	func_32(&Var0, Local_947.f_1, Local_947.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		clear_area(Local_947.f_15, Var0.f_10, 2442122);
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
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_133(Local_947.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_947.f_11));
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
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_160(Local_947.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_947.f_11));
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
			func_67(Local_947.f_12, 4);
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
		while (iVar1 < 3)
		{
			if (network_does_network_id_exist(&(Local_13.f_38[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_38[iVar1]));
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
			while (iVar2 < 5)
			{
				if (func_176(iVar1, iVar2))
				{
				}
				else if (func_177(iVar1, iVar2))
				{
					iVar0 = &Local_947.f_329[iVar1]->f_5[iVar2];
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
				else if (network_does_network_id_exist(Local_13.f_42[iVar1][iVar2]))
				{
					iVar0 = net_to_obj(Local_13.f_42[iVar1][iVar2]);
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
	func_179(&(Local_947.f_537.f_13));
	if (_does_volume_exist(Local_947.f_537.f_11))
	{
		_delete_volume(Local_947.f_537.f_11);
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_181(func_180(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_182(iParam0, iVar0, iParam1))
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
	func_183(Local_947.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_184(Local_947.f_1, Local_947.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_185(Local_947.f_18, 1);
			}
			else
			{
				func_185(Local_947.f_18, 0);
			}
			func_149(256);
		}
	}
	else
	{
		func_185(Local_947.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_186(Local_947.f_7, iParam0);
}

void func_70(int iParam0)
{
	if (!func_187(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_71()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0))
	{
		if (((func_189() && !is_ped_dead_or_dying(iVar0, true)) && get_ped_index_from_entity_index(get_ped_source_of_death(iVar0)) != player_ped_id()) && !func_190(262144))
		{
			func_191(7, Local_947.f_4);
		}
		if (is_ped_dead_or_dying(iVar0, true))
		{
			if (func_190(262144))
			{
				func_192(0);
			}
		}
	}
	func_193();
	func_194(1);
	func_195();
	func_196();
	func_197();
	if (_does_volume_exist(Local_947.f_19.f_254))
	{
		_delete_volume(Local_947.f_19.f_254);
	}
	clear_sequence_task(&(Local_947.f_19.f_164));
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
	if (!func_198(uParam0))
	{
		return -1;
	}
	iVar0 = func_199(uParam0, uParam0->f_9);
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
			iVar0 = func_199(uParam0, iVar1);
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
	func_200(uParam0, iParam1);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_202(uParam0);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
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
	func_201(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_202(uParam0);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_202(uParam0);
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
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 6);
			func_204(uParam0, 7);
			func_205(uParam0, 2);
			break;
		default:
			func_201(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_203(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_203(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_203(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_203(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_203(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_203(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_203(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_203(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_203(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_203(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_203(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_203(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_203(uParam0, 1);
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
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 8);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 7);
			func_203(uParam0, 8);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 6);
			func_203(uParam0, 7);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 5);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_202(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_202(uParam0);
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
	func_201(uParam0);
	func_205(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_202(uParam0);
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
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_207(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_207(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_207(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_207(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_207(uParam0, iParam2);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_202(uParam0);
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
	func_201(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_202(uParam0);
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
	func_201(uParam0);
	func_205(uParam0, 1);
	func_205(uParam0, 4);
	func_205(uParam0, 8);
	func_205(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_208(func_126(iParam2)) };
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
			func_209(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_209(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_209(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_209(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_209(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_209(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_209(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_209(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_209(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_209(uParam0, iParam2);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_202(uParam0);
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
	func_210(uParam0, iParam2);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_211(uParam0, iParam1);
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
			func_212(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_212(uParam0, iParam1);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_203(uParam0, 1);
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
	func_201(uParam0);
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
			func_203(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_203(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_203(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_203(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_203(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_203(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_203(uParam0, 1);
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
	func_201(uParam0);
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
			func_203(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_203(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_203(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_203(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_203(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_203(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_203(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_203(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_203(uParam0, 2);
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
			func_213(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_213(uParam0, iParam1);
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
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_214(uParam0, iParam1);
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
	func_201(uParam0);
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
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
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
			func_215(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_215(uParam0, iParam1);
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
	func_201(uParam0);
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
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_203(uParam0, 1);
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
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_216(uParam0, iParam1);
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
	func_217(uParam0, iParam1, iParam2);
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
	func_218(uParam0, iParam1, iParam2);
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
	func_201(uParam0);
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
			func_203(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_203(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_203(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_203(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_203(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_203(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_203(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_203(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_203(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_203(uParam0, 1);
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_202(uParam0);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_202(uParam0);
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
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
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
			func_219(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_219(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_219(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_219(uParam0, iParam1);
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
	iVar0 = func_220(iParam1);
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
	*uParam0 = func_221(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_205(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_223(func_222(iVar0), iParam2);
		uParam0->f_15[0] = func_224(func_222(iVar0), iParam2);
		uParam0->f_5 = func_225(iVar0, iParam2);
		uParam0->f_11 = { func_226(iVar0, iParam2) };
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
	reserve_network_mission_peds(3);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_82[iVar1]->f_4.f_2[iVar0] = -1f;
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
		while (iVar2 < 5)
		{
			if (func_177(iVar1, iVar2))
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
	bVar3 = func_227(&iVar2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_229(func_180(iVar0), func_228(func_180(iVar0)));
		Local_947.f_578[iVar0] = func_228(func_180(iVar0));
		if (bVar3)
		{
			func_122(&(Local_82[iVar2]->f_24.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_82[iVar1]->f_24.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	func_230(&(Local_947.f_406), &(Local_947.f_406.f_32));
	bVar2 = true;
	if (!func_227(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (network_is_host_of_this_script())
		{
			Local_13.f_49.f_5[iVar0] = 0;
			Local_13.f_49.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_82[iVar1]->f_10.f_9[iVar0] = 0;
		}
		iVar0++;
	}
	func_231(&(Local_947.f_406.f_78), 8, -1);
	if (bVar2)
	{
		func_231(&(Local_82[iVar1]->f_10), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_231(&(Local_82[iVar3]->f_10), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118(var uParam0)
{
	func_232(uParam0, 0);
	func_233(uParam0, 0);
	func_234(uParam0, 1);
	func_235(uParam0, 1);
	func_236(uParam0, 0);
	func_237(uParam0, 1);
	func_238(uParam0, 1, 1, 1);
}

void func_119()
{
	switch (func_239())
	{
		case 0:
			func_240(0, -1964611878);
			func_241(0, -668350768, -1989345804);
			func_240(1, func_242(997958153, 1));
			break;
		case 1:
		case 2:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, 1708527016);
				func_241(0, -1128853525, 1691628739);
			}
			func_240(1, 1772321403);
			break;
		case 3:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, -1964611878);
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(997958153, 1));
			func_240(2, -1124266369);
			func_121(4194304);
			break;
		case 4:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, -1964611878);
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(997958153, 1));
			func_240(2, -1963605336);
			func_121(8388608);
			break;
		case 5:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, -1964611878);
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(997958153, 1));
			func_240(2, 90264823);
			func_121(16777216);
			break;
		case 6:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, -1964611878);
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(997958153, 1));
			func_240(2, 480688259);
			func_121(33554432);
			break;
		case 7:
			if (func_243() == 2)
			{
				func_240(0, 1462825054);
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, -1964611878);
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(997958153, 1));
			func_240(2, -1143398950);
			func_121(67108864);
			break;
		case 8:
			func_240(0, 1708527016);
			func_241(0, -1128853525, 1691628739);
			func_240(1, func_242(997958153, 1));
			func_240(2, 122748261);
			break;
		case 9:
		case 10:
		case 11:
			func_240(0, 1708527016);
			func_241(0, -1128853525, 1691628739);
			func_240(1, func_242(997958153, 1));
			break;
		default:
			break;
	}
	switch (func_244())
	{
		case 0:
			func_245(0, 469.7219f, 59.7445f, 135.5631f, 76.14f, 1);
			func_245(1, 475.9219f, 54.46168f, 134.986f, 180f, 1);
			break;
		case 1:
			func_245(0, -409.2561f, 154.7292f, 41.8005f, 141.54f, 1);
			func_245(1, -405.0037f, 152.8974f, 41.46089f, -49.67f, 1);
			func_245(2, -416.5092f, 147.6119f, 40f, 0f, 1);
			break;
		case 2:
			func_245(0, -1928.554f, -1348.667f, 105.6326f, 18.99f, 1);
			func_245(1, -1935.187f, -1353.115f, 106.9843f, -51.4f, 1);
			if (func_190(4194304))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			break;
		case 3:
			func_245(0, -2003.943f, -2158.135f, 54.2301f, -134.78f, 1);
			func_245(1, -2005.132f, -2146.552f, 56.1274f, -45.27f, 1);
			break;
		case 4:
			func_245(0, -1281.655f, 110.9998f, 70.78191f, -64.75f, 1);
			func_245(1, -1276.128f, 104.356f, 70.63606f, -91.52f, 1);
			break;
		case 5:
			func_245(0, -2350.861f, -359.485f, 143.7474f, 98.86f, 1);
			func_245(1, -2354.687f, -347.2756f, 144.6231f, 91.52f, 1);
			if (func_190(4194304))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else
			{
				func_245(2, -2405.882f, -382.2583f, 133.5046f, 0f, 1);
			}
			break;
		case 6:
			func_245(0, -1736.757f, 306.2781f, 108.1355f, -140.26f, 1);
			func_245(1, -1729.253f, 303.9286f, 107.3634f, -145.75f, 1);
			if (func_190(4194304))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			break;
		case 7:
			func_245(0, -4964.499f, -3399.889f, 7.97322f, -124.92f, 1);
			func_245(1, -4965.817f, -3411.683f, 8.05074f, -162.81f, 1);
			if (func_190(4194304))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			break;
		case 8:
			func_245(0, -2192.805f, -2778.977f, 69.01174f, -158.91f, 1);
			func_245(1, -2199.156f, -2782.155f, 68.98679f, -162.81f, 1);
			break;
		case 9:
			func_245(0, -4603.166f, -2701.434f, -10.12116f, 3.38f, 1);
			func_245(1, -4595.557f, -2706.374f, -11.13519f, 5.26f, 1);
			if (func_190(4194304))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			break;
		default:
			break;
	}
}

void func_120()
{
	switch (func_239())
	{
		case 8:
			func_246(0, -53066424);
			func_247(0, 0f, 0f, 0f, get_random_float_in_range(0f, 360f), 1, 0);
			func_246(2, -1594634038);
			func_247(2, 1f, 0f, 0f, get_random_float_in_range(0f, 360f), 1, 0);
			func_246(1, 514240557);
			switch (func_244())
			{
				case 1:
					func_247(1, -12.7f, -0.05f, -0.35f, get_random_float_in_range(0f, 360f), 1, 0);
					break;
				case 5:
					func_247(1, -42.54f, -16.39f, -2.75f, get_random_float_in_range(0f, 360f), 1, 0);
					break;
				default:
					func_247(1, 0f, 1f, -1f, get_random_float_in_range(0f, 360f), 1, 0);
					break;
			}
			func_246(3, 391506844);
			func_247(3, -1f, 0f, 0f, get_random_float_in_range(0f, 360f), 1, 0);
			func_246(4, -294392875);
			func_247(4, -1f, 0f, 0f, get_random_float_in_range(0f, 360f), 1, 0);
			break;
	}
}

void func_121(int iParam0)
{
	func_248(&(Local_947.f_19.f_10), iParam0);
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
	return func_249(uParam0->f_25, iParam1);
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
		func_248(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return (func_250(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
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
	if (func_251(Local_947.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_947.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_252(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_253(Param0);
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
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_186(&(Local_82[iParam1]), iParam0);
}

bool func_135(int iParam0)
{
	return func_186(Local_13.f_1, iParam0);
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
	if (!func_254(&bVar0))
	{
		if (bVar0)
		{
			func_255();
		}
		return false;
	}
	if (!func_256(&bVar0))
	{
		if (bVar0)
		{
			func_255();
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
	if (!func_135(32) && func_257(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_257(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_258(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_257(2048)) && !func_257(4096))
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
	if (func_135(2048) && !func_257(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_259();
}

bool func_144()
{
	if (func_260())
	{
		return true;
	}
	func_261();
	func_262();
	func_263();
	switch (Local_13.f_7)
	{
		case 0:
			func_264();
			break;
		case 1:
			func_265();
			break;
		case 2:
			func_266();
			break;
		case 3:
			func_267();
			break;
		case 4:
			func_268();
			break;
		case 5:
			func_269();
			break;
		case 6:
			func_270();
			break;
		case 7:
			func_271();
			break;
		case 8:
			func_272();
			break;
		case 9:
			func_273();
			break;
		case 10:
			func_274();
			break;
		case 11:
			func_275();
			break;
		case 12:
			func_276();
			break;
		case 13:
			func_277();
			break;
		case 14:
			func_278();
			break;
		case 15:
			func_279();
			break;
		case 16:
			func_280();
			break;
		case 17:
			func_281();
			break;
		case 18:
			func_282();
			break;
		case 19:
			func_283();
			break;
		case 20:
			func_284();
			break;
		case 21:
			func_285();
			break;
		case 22:
			func_286();
			break;
		case 25:
			func_287();
			break;
		case 23:
			func_288();
			break;
		case 24:
			func_289();
			break;
		case 26:
			func_290();
			break;
		case 27:
			func_291();
			break;
		case 28:
			func_292();
			break;
		case 29:
			func_293();
			break;
		case 30:
			func_294();
			break;
		case 31:
			func_295();
			break;
		case 32:
			func_296();
			break;
		case 33:
			func_297();
			break;
		case 34:
			func_298();
			break;
		case 35:
			func_299();
			break;
		case 36:
			func_300();
			break;
		case 37:
			func_301();
			break;
		case 38:
			func_302();
			break;
		case 39:
			func_303();
			break;
		case 40:
			func_304();
			break;
		case 41:
			func_305();
			break;
		case 42:
			func_306();
			break;
		case 43:
			func_307();
			break;
		case 44:
			func_308();
			break;
		case 45:
			func_309();
			break;
		case 47:
			func_310();
			break;
		case 48:
			func_311();
			break;
		case 49:
			func_312();
			break;
		case 50:
			func_313();
			break;
		case 51:
			func_314();
			break;
		case 52:
			func_315();
			break;
		case 53:
			func_316();
			break;
		case 54:
			func_317();
			break;
		case 55:
			func_318();
			break;
		case 56:
			func_319();
			break;
		case 57:
			func_320();
			break;
		case 58:
			func_321();
			break;
		case 59:
			func_322();
			break;
		case 60:
			func_323();
			break;
		case 61:
			func_324();
			break;
		case 62:
			func_325();
			break;
		case 63:
			func_326();
			break;
		case 64:
			func_327();
			break;
		case 65:
			func_328();
			break;
		case 66:
			func_329();
			break;
		case 67:
			func_330();
			break;
		case 68:
			func_331();
			break;
		case 69:
			func_332();
			break;
		case 70:
			func_333();
			break;
		case 71:
			func_334();
			break;
		case 72:
			func_335();
			break;
		case 73:
			func_336();
			break;
		case 74:
			func_337();
			break;
	}
	switch (Local_13.f_7.f_1)
	{
		case 0:
			func_338();
			break;
		case 1:
			func_339();
			break;
		case 2:
			func_340();
			break;
		case 3:
			func_341();
			break;
		case 4:
			func_342();
			break;
		case 5:
			func_343();
			break;
		case 6:
			func_344();
			break;
		case 7:
			func_345();
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	iVar0 = func_188(0);
	if (((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || func_346(iVar0, 518218985)) || func_346(iVar0, 242628503))
	{
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	if (func_69(iParam0))
	{
		func_347(&(Local_947.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	iVar0 = func_348(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_349(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_350(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_248(&(Local_947.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_186(&(Local_82[participant_id_to_int()]), iParam0))
	{
		func_347(Local_82[participant_id_to_int()], iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_248(Local_82[participant_id_to_int()], iParam0);
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
				func_351(iVar0);
				break;
			case -1315570756:
				func_352(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_353(iVar0);
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_947.f_8 != iParam0)
	{
		Local_947.f_8 = iParam0;
	}
}

bool func_154()
{
	sVar0 = "OREPHT";
	sVar1 = "OREPAUD";
	switch (Local_947.f_19.f_11)
	{
		case 0:
			Local_947.f_19.f_11 = 1;
			break;
		case 1:
			if (_does_text_database_exist(sVar0))
			{
				_text_database_request(sVar0);
				if (_text_database_has_loaded(sVar0))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			if (_does_text_database_exist(sVar1))
			{
				_text_database_request(sVar1);
				if (_text_database_has_loaded(sVar1))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			break;
		case 2:
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				request_anim_dict(func_354(iVar4));
				if (!has_anim_dict_loaded(func_354(iVar4)))
				{
					return false;
				}
				else if (iVar4 == 11)
				{
					Local_947.f_19.f_11 = 3;
				}
				iVar4++;
			}
			break;
		case 3:
			switch (func_239())
			{
				case 8:
					if (func_357(func_355(0), &(Local_947.f_19.f_246), &(Local_13.f_7.f_26), 64, func_356(0)))
					{
						Local_947.f_19.f_11 = 6;
					}
					break;
				default:
					Local_947.f_19.f_11 = 6;
					break;
			}
			break;
		case 5:
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = func_358(iVar2);
				if (iVar3 != 0)
				{
					if (!_request_scenario_type(iVar3, 15, 0, 0))
					{
						return false;
					}
					if (!_has_scenario_type_loaded(iVar3, false))
					{
						return false;
					}
				}
				iVar2++;
			}
			func_359();
			Local_947.f_19.f_11 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_155()
{
	bVar0 = false;
	if (!func_360())
	{
		bVar0 = true;
	}
	if (!func_361())
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
	if (!func_362())
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
	if (!func_69(1))
	{
		func_363(Local_947.f_9);
		func_149(1);
	}
}

void func_162()
{
	func_364();
	func_365();
}

void func_163()
{
	iVar1 = func_188(0);
	if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
	{
		func_366(&iVar1, 0);
		func_367(iVar1);
		switch (func_239())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				_request_ped_emotional_preset(iVar1, "DEFAULT_SHOCKED");
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_MALE2", 0);
				}
				break;
			case 2:
			case 9:
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
					_give_weapon_to_ped_2(iVar1, 379542007, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
					_give_weapon_to_ped_2(iVar1, 379542007, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				}
				break;
			case 8:
				func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				if (!network_is_host_of_this_script())
				{
					if (network_does_network_id_exist(Local_13.f_7.f_26))
					{
						Local_947.f_19.f_246 = _net_to_anim_scene(Local_13.f_7.f_26);
						if (!_does_anim_scene_exist(Local_947.f_19.f_246))
						{
						}
					}
				}
				if (network_has_control_of_network_id(Local_13.f_7.f_26))
				{
					func_369();
					set_anim_scene_origin(Local_947.f_19.f_246, func_370(4), 0f, 0f, func_371(4), 2);
					start_anim_scene(Local_947.f_19.f_246);
				}
				break;
			default:
				break;
		}
	}
	iVar2 = func_188(2);
	if (does_entity_exist(iVar2) && !is_ped_dead_or_dying(iVar2, true))
	{
		func_372(iVar2);
		func_373(2, 0);
		if (network_has_control_of_entity(iVar2))
		{
			switch (func_239())
			{
				case 8:
					_set_ped_quality(iVar2, 2);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					_set_ped_quality(iVar2, 2);
					if (func_190(134217728))
					{
						set_ped_relationship_group_hash(iVar2, Local_947.f_19.f_45);
					}
					iVar0 = func_358(4);
					if (iVar0 != 0)
					{
						_task_start_scenario_in_place(iVar2, iVar0, 0, false, 0, -1f, false);
					}
					break;
			}
		}
	}
	iVar3 = func_188(1);
	if (does_entity_exist(iVar3) && !is_ped_dead_or_dying(iVar3, true))
	{
		func_374(&iVar3, 0);
		func_375(1, 3f);
	}
}

void func_164()
{
	func_376();
}

void func_165()
{
}

void func_166()
{
	if (func_251(Local_947.f_15))
	{
		return;
	}
	if (func_189())
	{
		return;
	}
	if (func_377(Local_947.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_947.f_15);
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
	func_378();
	func_379();
	func_380();
	func_381();
	func_382();
	func_383();
}

void func_168()
{
	if (func_384())
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
	func_385(Local_13.f_7);
	func_386(Local_13.f_7.f_1);
	func_387();
	func_388();
	func_389();
	func_390();
	func_391(0, 0);
	func_392();
	func_393();
	func_394();
	switch (Local_947.f_19)
	{
		case 0:
			func_395();
			break;
		case 1:
			func_396();
			break;
		case 2:
			func_397();
			break;
		case 3:
			func_398();
			break;
		case 4:
			func_399();
			break;
		case 5:
			func_400();
			break;
		case 6:
			func_401();
			break;
		case 7:
			func_402();
			break;
		case 8:
			func_403();
			break;
		case 9:
			func_404();
			break;
		case 10:
			func_405();
			break;
		case 11:
			func_406();
			break;
		case 12:
			func_407();
			break;
		case 13:
			func_408();
			break;
		case 14:
			func_409();
			break;
		case 15:
			func_410();
			break;
		case 16:
			func_411();
			break;
		case 17:
			func_412();
			break;
		case 18:
			func_413();
			break;
		case 19:
			func_414();
			break;
		case 20:
			func_415();
			break;
		case 21:
			func_416();
			break;
		case 22:
			func_417();
			break;
		case 25:
			func_418();
			break;
		case 23:
			func_419();
			break;
		case 24:
			func_420();
			break;
		case 26:
			func_421();
			break;
		case 27:
			func_422();
			break;
		case 28:
			func_423();
			break;
		case 29:
			func_424();
			break;
		case 30:
			func_425();
			break;
		case 31:
			func_426();
			break;
		case 32:
			func_427();
			break;
		case 33:
			func_428();
			break;
		case 35:
			func_429();
			break;
		case 34:
			func_430();
			break;
		case 36:
			func_431();
			break;
		case 37:
			func_432();
			break;
		case 38:
			func_433();
			break;
		case 39:
			func_434();
			break;
		case 40:
			func_435();
			break;
		case 41:
			func_436();
			break;
		case 42:
			func_437();
			break;
		case 43:
			func_438();
			break;
		case 44:
			func_439();
			break;
		case 45:
			func_440();
			break;
		case 47:
			func_441();
			break;
		case 48:
			func_442();
			break;
		case 49:
			func_443();
			break;
		case 50:
			func_444();
			break;
		case 51:
			func_445();
			break;
		case 52:
			func_446();
			break;
		case 53:
			func_447();
			break;
		case 54:
			func_448();
			break;
		case 55:
			func_449();
			break;
		case 56:
			func_450();
			break;
		case 57:
			func_451();
			break;
		case 58:
			func_452();
			break;
		case 59:
			func_453();
			break;
		case 60:
			func_454();
			break;
		case 61:
			func_455();
			break;
		case 62:
			func_456();
			break;
		case 63:
			func_457();
			break;
		case 64:
			func_458();
			break;
		case 65:
			func_459();
			break;
		case 66:
			func_460();
			break;
		case 67:
			func_461();
			break;
		case 68:
			func_462();
			break;
		case 69:
			func_463();
			break;
		case 70:
			func_464();
			break;
		case 71:
			func_465();
			break;
		case 72:
			func_466();
			break;
		case 73:
			func_467();
			break;
		case 74:
			func_468();
			break;
	}
	switch (Local_947.f_19.f_1)
	{
		case 0:
			func_469();
			break;
		case 1:
			func_470();
			break;
		case 2:
			func_471();
			break;
		case 3:
			func_472();
			break;
		case 4:
			func_473();
			break;
		case 5:
			func_474();
			break;
		case 6:
			func_475();
			break;
		case 7:
			func_476();
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
	Local_947.f_6 = -1;
	Local_947.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_947.f_5 = (Local_947.f_5 || Local_82[iVar0]) // PointerArith;
			Local_947.f_6 = (Local_947.f_6 && Local_82[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_172()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_dead_or_dying(iVar0, true))
		{
			if (!func_477(1073741824, 255))
			{
				iVar1 = get_ped_index_from_entity_index(get_ped_source_of_death(iVar0));
				iVar2 = _0xf49f14462f0ae27c(player_id());
				iVar3 = get_mount(player_ped_id());
				if ((iVar1 == player_ped_id() || (does_entity_exist(iVar2) && iVar1 == iVar2)) || (does_entity_exist(iVar3) && iVar1 == iVar3))
				{
					if (!func_190(131072))
					{
						func_192(1);
					}
				}
				else if (!func_190(262144) && func_189())
				{
					func_191(7, Local_947.f_4);
				}
				func_478(1073741824);
			}
		}
		else if (func_189())
		{
			func_191(7, Local_947.f_4);
			func_478(1073741824);
		}
	}
	else if (func_189())
	{
		func_191(7, Local_947.f_4);
		func_478(1073741824);
	}
	func_479();
	func_193();
	func_194(0);
	func_195();
	func_196();
	func_197();
	if (_does_volume_exist(Local_947.f_19.f_254))
	{
		_delete_volume(Local_947.f_19.f_254);
	}
	if (_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		if (_network_has_control_of_anim_scene(Local_947.f_19.f_246))
		{
			_delete_anim_scene(Local_947.f_19.f_246);
		}
	}
	clear_sequence_task(&(Local_947.f_19.f_164));
	return true;
}

void func_173()
{
	func_480();
}

void func_174(int iParam0)
{
	if (does_blip_exist(Local_947.f_274.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_947.f_274.f_7[iParam0]->f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_186(Local_947.f_274.f_7[iParam0]->f_2, iParam1);
}

bool func_176(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 1024);
}

bool func_177(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 8);
}

bool func_178(int iParam0, int iParam1)
{
	return is_bit_set(Local_947.f_329[iParam0]->f_4, iParam1);
}

void func_179(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0, bool bParam1)
{
	func_481(iParam0, 8);
	if (!func_482(iParam0, 1))
	{
		return;
	}
	iVar0 = func_483(iParam0);
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
	func_484(iParam0, bParam1);
	func_481(iParam0, 1);
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
	iVar0 = func_486(func_485(Param0));
	iVar1 = func_487(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_488(Param0, &Var2);
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
	iVar0 = func_489(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_490(iVar0);
}

void func_185(int iParam0, int iParam1)
{
	func_132(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_491(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_492(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_493(iParam0);
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

int func_188(int iParam0)
{
	return &(Local_947.f_274.f_7[iParam0]);
}

bool func_189()
{
	return (func_135(32) || func_134(32, 255));
}

bool func_190(int iParam0)
{
	return func_186(Local_947.f_19.f_10, iParam0);
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_495(iVar0, iParam0);
}

void func_192(bool bParam0)
{
	if (!func_190(131072))
	{
		if (!func_496(2, 255))
		{
			if (bParam0 || func_190(262144))
			{
				func_497(-1930919582, 0, 0);
				func_121(131072);
				func_498(7, Local_947.f_4);
			}
		}
	}
}

void func_193()
{
	if (func_239() != 8)
	{
		return;
	}
	iVar0 = func_188(2);
	if (does_entity_exist(iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
			if (func_499())
			{
				if (_0x3ab6c7b0bb0df4b1(iVar0, Local_947.f_19.f_246) || !_0xb89fcff19dafff28(Local_947.f_19.f_246, func_500(2)))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_500(2), iVar0);
				}
			}
			if (is_entity_attached_to_any_ped(iVar0))
			{
				detach_entity(iVar0, true, true);
				activate_physics(iVar0);
			}
		}
	}
	iVar1 = func_501(0);
	if (does_entity_exist(iVar1))
	{
		if (network_has_control_of_entity(iVar1))
		{
			if (func_499())
			{
				if (_0x3ab6c7b0bb0df4b1(iVar1, Local_947.f_19.f_246) || !_0xb89fcff19dafff28(Local_947.f_19.f_246, func_502(0)))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_502(0), iVar1);
				}
			}
			if (is_entity_attached_to_any_ped(iVar1))
			{
				detach_entity(iVar1, true, true);
				activate_physics(iVar1);
			}
		}
	}
	iVar2 = func_501(1);
	if (does_entity_exist(iVar2))
	{
		if (network_has_control_of_entity(iVar2))
		{
			if (func_499())
			{
				if (_0x3ab6c7b0bb0df4b1(iVar2, Local_947.f_19.f_246) || !_0xb89fcff19dafff28(Local_947.f_19.f_246, func_502(1)))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_502(1), iVar2);
				}
			}
		}
	}
}

void func_194(bool bParam0)
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && network_has_control_of_entity(iVar0))
	{
		stop_ped_speaking(iVar0, false);
		if (func_503(8388608))
		{
			set_ped_config_flag(iVar0, 6, false);
			func_504(8388608);
		}
		if (func_503(4194304))
		{
			set_ped_config_flag(iVar0, 169, false);
			set_ped_config_flag(iVar0, 340, false);
			set_ped_config_flag(iVar0, 137, false);
			set_ped_config_flag(iVar0, 26, false);
			func_504(4194304);
		}
		if (!is_ped_dead_or_dying(iVar0, true))
		{
			iVar1 = func_188(1);
			iVar2 = 6;
			if (func_503(2))
			{
				iVar1 = get_mount(iVar0);
				iVar2 = 3;
			}
			if (func_505(0))
			{
				iVar2 = 3;
			}
			if (bParam0)
			{
				clear_ped_tasks(iVar0, 1, 0);
			}
			if (bParam0 || func_506(iVar0, 518218985, 1, 0))
			{
				if ((does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true)) && func_507(0, 1) < 70f)
				{
					_task_smart_flee_style_coord(iVar0, func_508(0), iVar2, 0, -1f, -1, iVar1);
				}
				else
				{
					_task_smart_flee_style_coord(iVar0, func_508(0), iVar2, 0, -1f, -1, 0);
				}
			}
			set_ped_keep_task(iVar0, true);
		}
	}
	if (func_190(134217728))
	{
		remove_relationship_group(Local_947.f_19.f_45);
		func_509(134217728);
	}
}

void func_195()
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar0))
	{
		_0x67f7ceac2391e114(iVar0, 0);
	}
}

void func_196()
{
	iVar0 = participant_id_to_int();
	if (iVar0 != 255)
	{
		if (func_477(8388608, iVar0))
		{
			set_player_control(network_get_player_index(participant_id()), true, 0, false);
			clear_ped_tasks(get_player_ped(network_get_player_index(participant_id())), 1, 0);
			func_510(8388608);
		}
	}
}

void func_197()
{
	if (Local_947.f_19.f_247 != 0)
	{
		remove_shocking_event(Local_947.f_19.f_247);
		Local_947.f_19.f_247 = 0;
	}
	if (Local_947.f_19.f_248 != 0)
	{
		remove_shocking_event(Local_947.f_19.f_248);
		Local_947.f_19.f_248 = 0;
	}
	if (Local_947.f_19.f_249 != 0)
	{
		remove_shocking_event(Local_947.f_19.f_249);
		Local_947.f_19.f_249 = 0;
	}
}

bool func_198(var uParam0)
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

int func_199(var uParam0, int iParam1)
{
	iVar0 = func_511(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_512(iParam1)) - 1);
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

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_513(uParam0);
			break;
		case 1:
			func_513(uParam0);
			break;
		case 2:
			func_513(uParam0);
			break;
		case 3:
			func_514(uParam0);
			break;
		case 4:
			func_513(uParam0);
			break;
		case 5:
			func_513(uParam0);
			break;
		case 6:
			func_514(uParam0);
			break;
		case 7:
			func_514(uParam0);
			break;
		case 8:
			func_514(uParam0);
			break;
		case 9:
			func_513(uParam0);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

void func_201(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

void func_202(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_203(uParam0, iVar0);
		iVar0++;
	}
}

void func_203(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_204(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_205(var uParam0, int iParam1)
{
	func_349(&(uParam0->f_25), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			break;
		case 1:
		case 2:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			break;
		case 8:
			func_204(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_204(uParam0, 1);
			break;
		default:
			func_201(uParam0);
			break;
	}
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_515(uParam0);
			break;
		case 1:
			func_516(uParam0);
			break;
		case 2:
			func_517(uParam0);
			break;
		case 3:
			func_518(uParam0);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

Vector3 func_208(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_209(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_519(uParam0);
			break;
		case 1:
		case 2:
			func_520(uParam0);
			break;
		case 3:
		case 4:
			func_521(uParam0);
			break;
		default:
			func_201(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_210(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			break;
		case 1:
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

void func_211(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_203(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 0);
			break;
		default:
			func_203(uParam0, 0);
			break;
	}
	func_201(uParam0);
}

void func_212(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_203(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_203(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_203(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_203(uParam0, 0);
			func_204(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 1);
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 2);
			func_204(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_203(uParam0, 3);
			func_204(uParam0, 0);
			break;
	}
}

void func_214(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_203(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 2:
			func_203(uParam0, 1);
			func_204(uParam0, 0);
			break;
		case 3:
		case 4:
			func_203(uParam0, 2);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 3);
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 4);
			func_204(uParam0, 1);
			break;
	}
}

void func_215(var uParam0, int iParam1)
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
			func_203(uParam0, 3);
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
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
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
			func_203(uParam0, 3);
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
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
}

void func_217(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		default:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
	}
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
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			break;
		default:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
	}
}

void func_219(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_201(uParam0);
			func_202(uParam0);
			break;
		default:
			func_201(uParam0);
			func_202(uParam0);
			break;
	}
}

int func_220(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_221(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_223(int iParam0, int iParam1)
{
	if (func_522(&Var1, iParam0) && func_523(&Var1, iParam1))
	{
		func_524(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_224(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_522(&Var1, iParam0) && func_523(&Var1, iParam1))
	{
		func_524(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_225(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_525(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_226(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_525(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

bool func_227(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_526(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_228(int iParam0)
{
	return &(Local_13.f_58[iParam0]);
}

void func_229(int iParam0, var uParam1)
{
	if (iParam0 != 0)
	{
		return;
	}
	if (!func_527(255))
	{
		func_373(iParam0, 0);
		return;
	}
	switch (func_528(uParam1))
	{
		case 0:
			func_373(iParam0, 0);
			break;
		case 1:
			func_373(iParam0, 1);
			func_529(iParam0, 0, "GREET_POS", -163964935, 0, 1, 0, -1, 0);
			func_529(iParam0, 1, "GREET_NEG", 648122183, 0, 1, 0, -1, 0);
			break;
		case 2:
			func_373(iParam0, 1);
			if (func_530(2, 255))
			{
				func_529(iParam0, 0, "GREET_POS", -163964935, 0, 1, 0, -1, 1);
				func_529(iParam0, 1, "GREET_NEG", 648122183, 0, 1, 0, -1, 1);
			}
			else
			{
				func_529(iParam0, 0, "GREET_POS", -163964935, 0, 1, 0, -1, 0);
				func_529(iParam0, 1, "GREET_NEG", 648122183, 0, 1, 0, -1, 0);
			}
			break;
		case 3:
			func_373(iParam0, 1);
			func_529(iParam0, 0, "NB_PHOTOGRAPHY_ILO_POSE", -163964935, 0, 1, 0, -1, 0);
			func_529(iParam0, 1, "NB_PHOTOGRAPHY_ILO_STEP", 648122183, 0, 1, 0, -1, 0);
			break;
		case 4:
			func_373(iParam0, 1);
			func_531(iParam0, 0, 0, 1);
			func_531(iParam0, 1, 0, 1);
			break;
		case 5:
			func_373(iParam0, 0);
			func_532(iParam0, 0);
			func_532(iParam0, 1);
			break;
	}
}

void func_230(var uParam0, var uParam1)
{
	func_118(uParam0);
	func_533(uParam0);
	func_534(uParam0, 1);
	func_535(uParam1);
	func_533(uParam1);
	func_536(uParam1);
	func_537(uParam1, 1);
	func_538(uParam1, 1);
	func_539(uParam0, 2000);
}

int func_231(var uParam0, int iParam1, int iParam2)
{
	if (!func_540(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 16384);
	}
	else
	{
		func_248(&(uParam0->f_2), 16384);
	}
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 2048);
	}
	else
	{
		func_248(&(uParam0->f_2), 2048);
	}
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 256);
	}
	else
	{
		func_248(&(uParam0->f_2), 256);
	}
}

void func_235(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 16);
	}
	else
	{
		func_347(uParam0, 67108864);
		func_347(uParam0, 16);
	}
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 128);
	}
	else
	{
		func_248(&(uParam0->f_2), 128);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 256);
	}
	else
	{
		func_347(uParam0, 256);
	}
}

void func_238(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_248(uParam0, 268435456);
	}
	else
	{
		func_347(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_248(uParam0, 1073741824);
	}
	else
	{
		func_347(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_248(uParam0, 536870912);
	}
	else
	{
		func_347(uParam0, 536870912);
	}
}

int func_239()
{
	return func_542();
}

void func_240(int iParam0, int iParam1)
{
	Local_947.f_274.f_7[iParam0]->f_3 = iParam1;
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	switch (func_244())
	{
		case 4:
		case 5:
		case 6:
			func_543(iParam0, iParam1);
			break;
		default:
			func_543(iParam0, iParam2);
			break;
	}
}

int func_242(int iParam0, bool bParam1)
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

int func_243()
{
	switch (Local_947.f_4)
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
	return -1;
}

int func_244()
{
	return Local_947.f_2;
}

void func_245(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_947.f_274.f_7[iParam0]->f_6 = { vParam1 };
	Local_947.f_274.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_248(&(Local_947.f_274.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_347(&(Local_947.f_274.f_7[iParam0]->f_2), 2);
	}
}

void func_246(int iParam0, int iParam1)
{
	func_544(0, iParam0, iParam1);
}

void func_247(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_545(iParam0);
	}
	func_546(0, iParam0, vParam1, fParam4, iParam5);
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_249(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_250(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = func_547(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_251(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_252(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_253(struct<31> Param0)
{
	func_252(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_254(var uParam0)
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
				if (!func_548(iVar2, uParam0, &bVar1))
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
			if (func_549(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_38[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_38[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_38[iVar2]));
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

void func_255()
{
	func_129(2);
}

bool func_256(bool bParam0)
{
	if (!can_register_mission_objects(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_550(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (func_176(iVar0, iVar1))
			{
			}
			else if (is_bit_set(Local_947.f_329[iVar0]->f_2, iVar1))
			{
				if (func_551(iVar0, iVar1))
				{
					if (network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
					{
						if (network_request_control_of_network_id(Local_13.f_42[iVar0][iVar1]))
						{
							_0x7182edda1ee7db5a(Local_13.f_42[iVar0][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
				{
					if (!func_552(iVar0, iVar1))
					{
						vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_553(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_553(iVar0, iVar1) };
					}
					if (func_554(iVar0, iVar1))
					{
						if (!func_555(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_556(iVar0, iVar1))
							{
								iVar13 = _0x9641a9a20310f6b8(Local_947.f_329[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_42[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_557(iVar0, iVar1))
							{
								iVar13 = _create_weapon_object(Local_947.f_329[iVar0]->f_5[iVar1]->f_5, Local_947.f_329[iVar0]->f_5[iVar1]->f_4, func_553(iVar0, iVar1), true, 1f);
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									(*Local_13.f_42[iVar0])[iVar1] = obj_to_net(iVar13);
									if (!network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										set_network_id_exists_on_all_machines(Local_13.f_42[iVar0][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_558((*Local_13.f_42[iVar0])[iVar1], iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
							{
								iVar13 = net_to_obj(Local_13.f_42[iVar0][iVar1]);
								if (func_551(iVar0, iVar1))
								{
									if (network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
									{
										if (network_request_control_of_network_id(Local_13.f_42[iVar0][iVar1]))
										{
											_0x7182edda1ee7db5a(Local_13.f_42[iVar0][iVar1]);
										}
									}
								}
								if (!does_entity_exist(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								set_bit(&(Local_947.f_329[iVar0]->f_2), iVar1);
								if (func_559(iVar0, iVar1))
								{
									_0x78b4567e18b54480(iVar13);
									_set_pickup_object_glow_enabled(iVar13, true);
								}
								if (func_560(iVar0, iVar1))
								{
									_0xebdc12861d079aba(iVar13, 1);
								}
								if (func_561(iVar0, iVar1))
								{
									set_entity_visible(iVar13, false);
								}
								else
								{
									_0xa91e6cf94404e8c9(iVar13);
								}
								if (func_554(iVar0, iVar1))
								{
									_0x9587913b9e772d29(iVar13, 0);
								}
								vVar4 = { func_562(iVar0, iVar1) };
								if (!func_251(vVar4))
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
										if (!func_563(iVar0, iVar1, 32))
										{
											get_model_dimensions(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_564(vVar4.x)), absf(func_564(vVar4.y))) };
											vVar27 = { func_565(vVar24) * vVar21 };
											set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_566(iVar0, iVar1))
								{
									func_567(iVar0, iVar1, 1);
								}
								if (func_568(iVar0, iVar1))
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

bool func_257(int iParam0)
{
	return func_186(Local_947.f_5, iParam0);
}

bool func_258(int iParam0)
{
	return func_186(Local_947.f_6, iParam0);
}

void func_259()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_569(Local_13.f_58[iVar0], func_180(iVar0));
		iVar0++;
	}
}

bool func_260()
{
	if (Local_13.f_7 == 75)
	{
		return true;
	}
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		if (func_570())
		{
			iVar1 = func_188(2);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_261()
{
	if (func_496(1024, 255))
	{
		return;
	}
	if (func_571())
	{
		switch (func_239())
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (((!func_503(64) && !func_503(512)) && func_505(2)) && !func_572())
				{
					func_573(512);
					func_574(23);
				}
				if (func_505(0))
				{
					func_575(1, 0, 0);
					func_576();
					func_573(1024);
					func_574(74);
				}
				break;
			case 2:
				if (func_503(2))
				{
					func_573(1024);
				}
				else
				{
					func_575(1, 0, 0);
					func_576();
					func_573(1024);
					func_574(74);
				}
				break;
			default:
				func_575(1, 0, 0);
				func_576();
				func_573(1024);
				func_574(74);
				break;
		}
	}
}

void func_262()
{
	iVar0 = func_188(0);
	fVar5 = 999f;
	fVar6 = 999f;
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		iVar1 = int_to_participantindex(iVar7);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			iVar3 = get_player_ped(iVar2);
			if (!func_527(iVar7))
			{
			}
			else if (func_530(2, iVar7))
			{
			}
			else if (does_entity_exist(iVar3) && !is_ped_dead_or_dying(iVar3, true))
			{
				fVar4 = func_577(0, iVar7, 1);
				if (fVar4 != 0f)
				{
					if (fVar4 < fVar5)
					{
						fVar5 = fVar4;
						Local_13.f_7.f_20 = iVar2;
					}
					if ((is_ped_on_mount(iVar3) && fVar4 < 50f) && (fVar4 < fVar6 || !_network_is_player_index_valid(Local_13.f_7.f_23)))
					{
						bVar8 = true;
						fVar6 = fVar4;
						Local_13.f_7.f_23 = iVar2;
					}
				}
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		Local_13.f_7.f_23 = 255;
	}
	if (_network_is_player_index_valid(Local_13.f_7.f_20))
	{
	}
	if (_network_is_player_index_valid(Local_13.f_7.f_23))
	{
	}
}

void func_263()
{
	iVar1 = 255;
	if (_network_is_player_index_valid(Local_13.f_7.f_21))
	{
		if (network_is_player_active(Local_13.f_7.f_21))
		{
			iVar5 = network_get_participant_index(Local_13.f_7.f_21);
			if (func_526(iVar5, 1))
			{
				if (func_527(iVar5))
				{
					iVar2 = get_player_ped(Local_13.f_7.f_21);
					if (does_entity_exist(iVar2) && !is_ped_dead_or_dying(iVar2, true))
					{
						iVar4 = -1569615261;
						if (get_current_ped_weapon(iVar2, &iVar4, false, 0, false))
						{
							if (func_578(iVar4))
							{
								func_579(16);
								return;
							}
						}
					}
				}
			}
		}
	}
	Local_13.f_7.f_21 = 255;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar0 = int_to_participantindex(iVar3);
		if (network_is_participant_active(iVar0))
		{
			if (func_527(iVar3))
			{
				iVar1 = network_get_player_index(iVar0);
				iVar2 = get_player_ped(iVar1);
				if (does_entity_exist(iVar2) && !is_ped_dead_or_dying(iVar2, true))
				{
					iVar4 = -1569615261;
					if (get_current_ped_weapon(iVar2, &iVar4, false, 0, false))
					{
						if (func_578(iVar4))
						{
							iVar6 = func_188(0);
							fVar7 = vdist(get_entity_coords(iVar6, true, false), get_entity_coords(iVar2, true, false));
							if (fVar7 < 30f)
							{
								func_579(16);
								Local_13.f_7.f_21 = iVar1;
								return;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	func_580(16);
}

void func_264()
{
	if (func_581(0, 0))
	{
		switch (func_239())
		{
			case 8:
				func_574(48);
				break;
			default:
				func_574(1);
				break;
		}
	}
}

void func_265()
{
	if (func_189())
	{
		func_574(2);
		return;
	}
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_583(0, 15f, 0, 1) < 1)
	{
		func_584(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
	else if (func_583(0, 35f, 0, 1) < 2)
	{
		func_584(0, 65f, 10000, 0, 176, 177, 178, 179, -1, -1, 0, -1);
	}
}

void func_266()
{
	func_585();
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if ((func_346(iVar0, -875674219) || func_346(iVar0, -1162159953)) || !func_346(iVar0, 993674639))
	{
		func_574(3);
	}
}

void func_267()
{
	func_585();
	if (func_586())
	{
		func_579(512);
		func_574(72);
		return;
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if ((func_587(3) || func_587(5)) || func_587(4))
	{
		func_588(&(Local_13.f_7.f_12));
		switch (func_239())
		{
			case 1:
			case 2:
				vVar3 = { get_entity_coords(iVar0, true, false) };
				iVar2 = func_589(&uVar1, vVar3, 25f, 0, 1);
				if (iVar2 > 0)
				{
					func_574(5);
				}
				else
				{
					func_574(4);
				}
				break;
			default:
				func_574(5);
				break;
		}
	}
}

void func_268()
{
	func_585();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		vVar3 = { get_entity_coords(iVar0, true, false) };
		iVar2 = func_589(&uVar1, vVar3, 25f, 0, 1);
		if (iVar2 > 0)
		{
			if (!func_590(1))
			{
				func_591(0, 0, 108, 0);
			}
		}
		else
		{
			func_584(0, 65f, 5000, 0, 104, 105, 106, 107, -1, -1, 1, -1);
		}
		if (func_587(107))
		{
			func_574(9);
		}
		else if (func_587(108))
		{
			func_574(5);
		}
	}
}

void func_269()
{
	func_585();
	if (func_586())
	{
		func_579(512);
		func_574(72);
		return;
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!_0x54b187f111d9c6f8(iVar0, 0))
		{
			if (vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar0, false, false)) < 10f)
			{
				func_588(&(Local_13.f_7.f_12));
				func_574(6);
			}
			else
			{
				func_584(0, 65f, 5000, 0, 3, 7, 8, -1, -1, -1, 0, -1);
			}
		}
	}
}

void func_270()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_587(9))
	{
		if (func_228(0) != 1)
		{
			func_581(0, 1);
		}
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(8);
		}
	}
	else if (func_582(2))
	{
		if (func_581(0, 2))
		{
			iVar4 = func_188(0);
			if (does_entity_exist(iVar4) && !is_ped_dead_or_dying(iVar4, true))
			{
				vVar0 = { get_entity_coords(iVar4, false, false) };
			}
			else
			{
				vVar0 = { Local_947.f_15 };
			}
			iVar3 = func_592(vVar0, 25f);
			if (func_593(2) > 1)
			{
				func_574(9);
			}
			else if (iVar3 > 2)
			{
				func_579(256);
				func_574(7);
			}
			else if (iVar3 > 1)
			{
				func_579(128);
				func_574(7);
			}
			else
			{
				func_574(9);
			}
		}
	}
}

void func_271()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(8);
		}
	}
	else if (func_582(4) || func_593(2) > 1)
	{
		if (func_581(0, 0))
		{
			func_574(9);
		}
	}
}

void func_272()
{
	func_588(&(Local_13.f_7.f_12));
	if (func_593(2) > 0)
	{
		return;
	}
	switch (func_239())
	{
		case 0:
			func_574(10);
			break;
		case 1:
		case 2:
			func_574(31);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_574(10);
			break;
		case 9:
		case 10:
		case 11:
			func_574(62);
			break;
		default:
			func_574(31);
			break;
	}
}

void func_273()
{
	if (func_587(35))
	{
		switch (func_239())
		{
			case 0:
				func_574(21);
				break;
			case 1:
			case 2:
				func_574(41);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				func_574(21);
				break;
			case 9:
			case 10:
			case 11:
				func_574(68);
				break;
			default:
				func_574(21);
				break;
		}
	}
	func_591(0, 0, 35, 0);
}

void func_274()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_587(34))
	{
		if (func_594(64))
		{
			func_574(11);
		}
	}
	else if (func_595(Local_13.f_7.f_10, 1500))
	{
		func_591(0, 0, 34, 0);
	}
}

void func_275()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	switch (func_239())
	{
		case 0:
			vVar1 = { func_370(0) };
			break;
		default:
			vVar1 = { func_370(3) };
			break;
	}
	if (vdist(vVar1, get_entity_coords(iVar0, false, false)) < 2f)
	{
		if (func_581(0, 3))
		{
			func_574(12);
		}
	}
}

void func_276()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_228(0) != 3)
	{
		func_581(0, 3);
	}
	if (Local_13.f_7.f_18 > func_596())
	{
		func_573(64);
	}
	iVar0 = func_239();
	if (iVar0 == 0 && func_597())
	{
		func_574(19);
	}
	else if (func_503(64))
	{
		func_574(25);
	}
	else if (func_582(2048))
	{
		if (func_581(0, 0))
		{
			func_579(1);
			func_574(13);
		}
	}
	else if (func_582(8))
	{
		if (func_581(0, 4))
		{
			func_579(2);
			func_574(13);
		}
	}
	else if (func_582(16))
	{
		if (func_581(0, 4))
		{
			Local_13.f_7.f_18++;
			func_579(4);
			func_574(13);
		}
	}
}

void func_277()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_598(1))
	{
		func_580(1);
		func_574(18);
	}
	else if (func_598(2))
	{
		if (!func_582(8))
		{
			func_580(2);
			func_359();
			func_574(14);
		}
	}
	else if (func_598(4))
	{
		if (!func_582(16))
		{
			func_580(4);
			func_574(16);
		}
	}
}

void func_278()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_503(268435456))
		{
			func_574(15);
		}
	}
}

void func_279()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_503(268435456))
		{
			if (func_581(0, 3))
			{
				iVar1 = func_599();
				func_600(iVar1);
				func_574(12);
			}
		}
	}
}

void func_280()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (func_346(iVar0, -2017877118))
	{
		vVar1 = { func_370(1) };
		vVar4 = { func_370(0) };
		if (func_570())
		{
			vVar1 = { func_508(2) };
			vVar4 = { func_370(3) };
		}
		Local_13.f_7.f_27 = { func_565(vVar1 - vVar4) + vVar1 };
		func_574(17);
	}
}

void func_281()
{
	iVar0 = func_239();
	iVar1 = func_188(0);
	if (iVar0 == 0 && func_597())
	{
		func_574(19);
	}
	else if (func_503(64))
	{
		func_574(25);
	}
	else if (!func_346(iVar1, -2017877118))
	{
		if (!func_503(536870912))
		{
			if (func_581(0, 3))
			{
				func_574(12);
			}
		}
	}
}

void func_282()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_503(8192))
	{
		func_574(20);
	}
}

void func_283()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_602(func_601(86)))
		{
			if (!func_587(87))
			{
				func_591(0, 0, 87, 0);
			}
		}
	}
	if (is_entity_dead(iVar0))
	{
		func_574(22);
	}
}

void func_284()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(72);
	}
}

void func_285()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(22);
	}
}

void func_286()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_346(iVar0, -2017877118))
		{
			func_574(72);
		}
	}
}

void func_287()
{
	func_581(0, 0);
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		func_573(512);
		func_574(28);
		return;
	}
	else
	{
		if (func_503(32768) && func_507(0, 2) > func_603())
		{
			if (!func_587(97) && !func_587(98))
			{
				if (!func_598(131072))
				{
					func_579(131072);
					func_575(1, 0, 0);
				}
				func_584(0, 65f, 4000, 0, 97, 98, -1, -1, -1, -1, 1, -1);
			}
		}
		else
		{
			func_584(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
		}
		if (func_346(iVar0, 518218985))
		{
			func_574(30);
			return;
		}
	}
	iVar1 = func_188(2);
	if (((!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true)) || func_346(iVar1, 518218985)) || func_507(0, 2) > 100f)
	{
		func_573(512);
		func_574(26);
	}
}

void func_288()
{
	iVar0 = func_188(2);
	iVar1 = func_188(0);
	if ((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || func_346(iVar0, 518218985))
	{
		iVar2 = 1;
	}
	if ((!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true)) || func_346(iVar1, 2121492476))
	{
		iVar3 = 1;
	}
	func_604();
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		func_573(4096);
	}
	if (iVar2 && iVar3)
	{
		func_574(24);
	}
}

void func_289()
{
	if (func_587(99) || func_595(Local_13.f_7.f_10, 10000))
	{
		if (func_595(Local_13.f_7.f_10, 5000))
		{
			func_574(72);
		}
	}
	func_604();
}

void func_290()
{
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		func_574(28);
	}
	else
	{
		fVar2 = vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar0, false, false));
		if (func_595(Local_13.f_7.f_10, 2000))
		{
			if (fVar2 < 8f || func_595(Local_13.f_7.f_10, 10000))
			{
				func_574(27);
			}
		}
	}
}

void func_291()
{
	if (func_587(88))
	{
		func_574(72);
	}
	else
	{
		func_591(0, 0, 88, 0);
	}
}

void func_292()
{
	iVar0 = func_188(2);
	if (((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || func_346(iVar0, 518218985)) || func_346(iVar0, 1120685857))
	{
		func_574(29);
	}
}

void func_293()
{
	iVar0 = func_188(2);
	if ((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || func_583(2, 150f, 0, 1) < 1)
	{
		func_574(75);
	}
}

void func_294()
{
	func_581(0, 0);
	if (func_507(0, 2) < func_603() || !func_503(32768))
	{
		func_584(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
	}
}

void func_295()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 34, 0);
		}
	}
	if (func_587(34) && func_594(64))
	{
		func_574(32);
	}
}

void func_296()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	iVar0 = func_188(0);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && is_ped_on_mount(iVar0))
	{
		func_574(33);
	}
	if (func_503(1))
	{
	}
	else
	{
		func_574(33);
	}
}

void func_297()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	iVar0 = func_188(0);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && is_ped_on_mount(iVar0))
	{
		func_574(34);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	if (func_346(iVar0, 1868526510))
	{
		func_574(34);
	}
}

void func_298()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0))
	{
		if (_is_ped_getting_into_a_mount_seat(iVar0, true))
		{
			switch (func_239())
			{
				case 1:
					func_588(&(Local_13.f_7.f_12));
					func_574(35);
					break;
				case 2:
					func_574(43);
					break;
			}
			return;
		}
	}
}

void func_299()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (is_ped_on_mount(iVar0))
		{
			if (func_582(2048))
			{
				if (get_random_float_in_range(0f, 1f) < 0.1f)
				{
					func_574(36);
				}
				else
				{
					func_574(38);
				}
				return;
			}
		}
		else
		{
			func_574(32);
			return;
		}
	}
}

void func_300()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!is_ped_on_mount(iVar0))
		{
			func_574(37);
		}
	}
}

void func_301()
{
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		func_574(38);
		return;
	}
	if ((!does_entity_exist(Local_947.f_19.f_155) || is_ped_dead_or_dying(Local_947.f_19.f_155, true)) || ((!func_605(Local_947.f_19.f_155, 1041577989) && !is_ped_on_mount(iVar0)) && func_595(Local_13.f_7.f_10, 5000)))
	{
		func_574(38);
		return;
	}
	if (func_595(Local_13.f_7.f_10, 10000))
	{
		func_574(38);
	}
}

void func_302()
{
	func_579(2048);
	func_574(39);
}

void func_303()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(40);
	}
}

void func_304()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!is_ped_on_mount(iVar0))
		{
			func_574(72);
		}
	}
}

void func_305()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(42);
	}
}

void func_306()
{
	func_574(72);
}

void func_307()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_346(iVar0, 518218985))
		{
			func_574(44);
		}
	}
}

void func_308()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!is_ped_on_mount(iVar0))
		{
			func_574(45);
		}
	}
}

void func_309()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_346(iVar0, 518218985))
		{
			func_574(47);
		}
	}
}

void func_310()
{
	iVar0 = func_188(0);
	if ((func_606(0) || !does_entity_exist(iVar0)) || is_ped_dead_or_dying(iVar0, true))
	{
		func_574(75);
		return;
	}
}

void func_311()
{
	if (func_189())
	{
		func_574(49);
	}
}

void func_312()
{
	if (func_607(262144))
	{
		func_574(50);
	}
}

void func_313()
{
	if (func_607(524288))
	{
		func_574(51);
	}
}

void func_314()
{
	if (func_608(1))
	{
		func_574(52);
	}
}

void func_315()
{
	if (func_503(65536) && func_607(1048576))
	{
		func_574(53);
	}
	else if (func_503(131072))
	{
		func_574(58);
	}
}

void func_316()
{
	if (func_586())
	{
		if (func_581(0, 0))
		{
			func_579(512);
			func_574(58);
			return;
		}
	}
	if (func_587(9))
	{
		if (func_228(0) != 1)
		{
			func_581(0, 1);
		}
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(54);
		}
	}
	else if (func_582(2))
	{
		if (func_581(0, 0))
		{
			func_574(55);
		}
	}
	else if (func_503(131072))
	{
		func_574(58);
	}
}

void func_317()
{
	func_588(&(Local_13.f_7.f_12));
	if (func_594(64))
	{
		func_574(56);
	}
}

void func_318()
{
	func_574(58);
}

void func_319()
{
	func_574(57);
}

void func_320()
{
	if (func_586())
	{
		if (func_581(0, 0))
		{
			func_579(512);
			func_574(58);
			return;
		}
	}
	if (func_582(2048))
	{
		func_574(58);
	}
}

void func_321()
{
	if (func_608(3))
	{
		func_574(59);
	}
}

void func_322()
{
	if (func_582(2048))
	{
		iVar0 = func_609();
		if (!func_587(iVar0))
		{
			if (!func_590(1))
			{
				func_591(0, 4, iVar0, 0);
			}
		}
	}
	else if (func_582(2))
	{
		if (!func_587(35))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 35, 0);
			}
		}
	}
	iVar1 = func_188(0);
	if ((!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true)) || !func_499())
	{
		func_579(1024);
		if (func_598(512))
		{
			func_574(71);
		}
		else if (func_572())
		{
			func_574(60);
		}
		else
		{
			func_574(61);
		}
	}
}

void func_323()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(61);
	}
}

void func_324()
{
	func_574(72);
}

void func_325()
{
	if (!func_587(34))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 34, 0);
		}
	}
	if (func_587(34) && func_594(64))
	{
		func_574(63);
	}
}

void func_326()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!_0x54b187f111d9c6f8(iVar0, 0))
		{
			switch (func_239())
			{
				case 9:
					if (!func_587(131))
					{
						func_591(0, 0, 131, 0);
					}
					break;
				case 10:
					if (!func_587(133))
					{
						func_591(0, 0, 133, 0);
					}
					break;
				case 11:
					if (!func_587(135))
					{
						func_591(0, 0, 135, 0);
					}
					break;
			}
		}
		if (vdist(get_entity_coords(iVar0, true, false), func_370(5)) < 5f && ((func_587(131) || func_587(133)) || func_587(135)))
		{
			iVar1 = func_239();
			switch (iVar1)
			{
				case 10:
					func_579(4096);
					break;
				case 11:
					func_579(8192);
					break;
			}
			func_574(64);
		}
	}
}

void func_327()
{
	func_574(65);
}

void func_328()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_582(2048))
	{
		func_574(66);
	}
}

void func_329()
{
	if (func_572())
	{
		func_580(4096);
		if (func_239() == 11)
		{
			func_574(67);
		}
		else
		{
			func_574(69);
		}
	}
}

void func_330()
{
	iVar0 = func_188(0);
	if (((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && !_is_ped_lassoed(iVar0)) && !_is_ped_hogtied(iVar0))
	{
		func_580(8192);
		func_579(16384);
		func_574(69);
	}
	if (func_587(173))
	{
		func_580(8192);
	}
}

void func_331()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(70);
	}
}

void func_332()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(70);
	}
}

void func_333()
{
	func_574(72);
}

void func_334()
{
	if (func_228(0) != 0)
	{
		func_581(0, 0);
	}
	if (((func_587(72) || func_587(73)) || func_587(174)) || func_587(175))
	{
		func_574(72);
	}
}

void func_335()
{
	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_507(0, 1) > 70f)
	{
		func_579(-2147483648);
	}
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	if (does_entity_exist(iVar0))
	{
		if (((!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true)) || (is_ped_on_mount(iVar0) && get_mount(iVar0) == iVar1)) || func_598(-2147483648))
		{
			func_574(73);
		}
	}
}

void func_336()
{
	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_606(0))
	{
		func_574(75);
		return;
	}
	iVar0 = func_188(0);
	if ((does_entity_exist(iVar0) && !is_ped_on_mount(iVar0)) && !func_598(-2147483648))
	{
		func_574(72);
	}
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && !func_505(0))
	{
		if (func_610(10f, 128, 0))
		{
			func_584(0, 10f, 10000, 0, 101, 102, 103, -1, -1, -1, 0, -1);
		}
		else if (func_611(10f, 2048, 4096))
		{
			if (func_582(512) || func_582(1024))
			{
				func_584(0, 10f, 10000, 0, 25, 26, 27, -1, -1, -1, 0, -1);
			}
			else if (func_582(256))
			{
				func_584(0, 10f, 10000, 0, 28, 29, 30, -1, -1, -1, 0, -1);
			}
		}
		else if (func_611(10f, 8192, 0) || func_611(10f, 128, 0))
		{
			func_584(0, 10f, 10000, 0, 31, 32, 33, -1, -1, -1, 0, -1);
		}
	}
}

void func_337()
{
	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if ((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || !does_entity_exist(iVar1))
	{
		func_574(75);
	}
	else
	{
		if (func_606(0))
		{
			func_574(75);
			return;
		}
		bVar2 = true;
		if (func_587(79))
		{
			bVar2 = false;
		}
		if (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))
		{
			func_584(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, bVar2, -1);
		}
		else if (func_587(79) && !func_587(82))
		{
			func_591(0, 3, 82, 0);
		}
		else if (func_582(1048576))
		{
			func_584(0, 65f, 4000, 3, 77, 74, 75, 76, -1, -1, 1, -1);
		}
		else
		{
			func_584(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, bVar2, -1);
		}
	}
}

void func_338()
{
	if (func_582(2048))
	{
		switch (func_239())
		{
			case 1:
				if (func_598(2048))
				{
					func_612(1);
				}
				break;
			case 8:
				if (func_598(1024))
				{
					func_612(1);
				}
				break;
			case 11:
				if (func_598(16384))
				{
					func_612(1);
				}
				break;
			default:
				func_612(1);
				break;
		}
	}
}

void func_339()
{
	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (func_595(Local_13.f_7.f_10, 1000))
	{
		func_612(2);
	}
}

void func_340()
{
	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!is_ped_on_mount(iVar0) || func_346(iVar0, 501393341))
		{
			func_612(3);
		}
	}
}

void func_341()
{
	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	iVar0 = func_609();
	if (!func_587(iVar0))
	{
		if (!func_590(1))
		{
			func_591(0, 4, iVar0, 0);
		}
	}
	iVar1 = network_get_participant_index(Local_13.f_7.f_22);
	if (func_614(0, 2.5f, iVar1, 0))
	{
		func_579(262144);
		func_612(4);
	}
	else if (!func_614(0, 30f, iVar1, 0))
	{
		func_612(6);
	}
}

void func_342()
{
	if (!func_613())
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (func_595(Local_13.f_7.f_13, 9000))
	{
		func_612(7);
		return;
	}
	if (!func_587(71))
	{
		if (!func_590(1))
		{
			func_591(0, 4, 71, 0);
		}
	}
	if (func_587(71) && func_582(4194304))
	{
		if (func_595(Local_13.f_7.f_13, 6000))
		{
			func_579(262144);
			func_612(5);
		}
	}
}

void func_343()
{
	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(7);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (!func_590(1))
	{
		func_591(0, 4, func_615(), 0);
	}
	iVar0 = get_player_ped(Local_13.f_7.f_22);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_605(iVar0, -1162159953) || _get_entity_anim_current_time(iVar0, func_354(7), func_616(7)) > 0.9f)
		{
			func_612(7);
		}
	}
}

void func_344()
{
}

void func_345()
{
	func_478(16777216);
}

bool func_346(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_348(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_349(var uParam0, int iParam1)
{
	func_617(uParam0, iParam1);
}

void func_350(var uParam0, int iParam1)
{
	func_618(uParam0, iParam1);
}

void func_351(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_619(&Var0, iParam0))
			{
				func_620(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_352(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	iVar32 = get_ped_index_from_entity_index(Var0.f_1);
	if (!is_ped_a_player(iVar32))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	iVar33 = get_ped_index_from_entity_index(Var0);
	if (is_ped_dead_or_dying(iVar33, true))
	{
		return;
	}
	uVar34 = Var0.f_5;
}

void func_353(int iParam0)
{
	if (get_event_at_index(0, iParam0) != 1387172233)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	iVar12 = vVar0.z;
	if (!does_entity_exist(iVar12))
	{
		return;
	}
	if (!is_entity_a_ped(iVar12))
	{
		return;
	}
	iVar13 = get_ped_index_from_entity_index(iVar12);
	if (is_entity_dead(iVar13) || is_ped_injured(iVar13))
	{
		return;
	}
	if (iVar13 != func_188(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_478(134217728);
			break;
		default:
			return;
	}
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_loco_m@generic@reaction@avoid@unarmed@soft@walk_backwards";
		case 1:
			return "script_re@photography";
		case 2:
			return "script_re@photography";
		case 3:
			return "script_re@photography";
		case 4:
			return "script_re@photography";
		case 5:
			return "script_re@photography";
		case 6:
			return "script_re@photography";
		case 7:
			return "script_mp@common@handovers@satchel";
		case 8:
			return "script_mp@common@handovers@satchel";
		case 9:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 10:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 11:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		default:
			break;
	}
	return "";
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@wilderness@photography@fishing@fishing";
		default:
			break;
	}
	return "script@beat@wilderness@photography@fishing@fishing";
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_INITIAL";
		case 1:
			return "PBL_CATCH";
		case 2:
			return "PBL_IDLE";
		case 3:
			return "PBL_KEEP";
		default:
			break;
	}
	return "";
}

bool func_357(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
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

int func_358(int iParam0)
{
	switch (func_239())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				case 1:
					return 2087366558;
				case 2:
					return 1904532698;
				case 3:
					return 1446817251;
				default:
					break;
			}
			break;
		case 3:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_359()
{
	Local_13.f_7.f_19++;
	if (Local_13.f_7.f_19 < 1 || Local_13.f_7.f_19 > 3)
	{
		Local_13.f_7.f_19 = 1;
	}
}

bool func_360()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (is_bit_set(Local_947.f_274.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_621(iVar0);
			if (iVar2 == 0)
			{
				Jump @132; //curOff = 54
			}
			else
			{
				if (!is_bit_set(Local_947.f_274.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_947.f_274.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @132; //curOff = 112
				}
				else
				{
					set_bit(&(Local_947.f_274.f_3), iVar0);
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

bool func_361()
{
	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (is_bit_set(Local_947.f_329[iVar0]->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_550(iVar0, iVar1);
				if (func_622(iVar1))
				{
					if (Local_947.f_329[iVar0]->f_5[iVar1]->f_6 == 0 || !_0x93ffd92f05ec32fd(Local_947.f_329[iVar0]->f_5[iVar1]->f_6))
					{
						Local_947.f_329[iVar0]->f_5[iVar1]->f_6 = _0x91fe941f9fcfb702(Local_947.f_329[iVar0]->f_5[iVar1]->f_3, 0);
						bVar2 = true;
					}
					else if (!_0xb0b2c6d170b0e8e5(Local_947.f_329[iVar0]->f_5[iVar1]->f_6))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_947.f_329[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_947.f_329[iVar0]->f_1), iVar1);
					}
				}
				else if (func_623(iVar1))
				{
					_0x72d4cb5db927009c(Local_947.f_329[iVar0]->f_5[iVar1]->f_5, -1, 0);
					if (!_0xff07cf465f48b830(Local_947.f_329[iVar0]->f_5[iVar1]->f_5))
					{
						bVar2 = true;
					}
					else if (!is_bit_set(Local_947.f_329[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_947.f_329[iVar0]->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!is_bit_set(&(Local_947.f_329[iVar0]), iVar1))
					{
						request_model(iVar3, false);
						set_bit(Local_947.f_329[iVar0], iVar1);
					}
					if (!has_model_loaded(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!is_bit_set(Local_947.f_329[iVar0]->f_1, iVar1))
					{
						set_bit(&(Local_947.f_329[iVar0]->f_1), iVar1);
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

bool func_362()
{
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_550(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (!func_177(iVar0, iVar1))
			{
				if (network_is_host_of_this_script())
				{
					if (is_bit_set(Local_947.f_329[iVar0]->f_2, iVar1))
					{
						if (func_551(iVar0, iVar1))
						{
							if (network_does_network_id_exist(Local_13.f_42[iVar0][iVar1]))
							{
								if (network_request_control_of_network_id(Local_13.f_42[iVar0][iVar1]))
								{
									_0x7182edda1ee7db5a(Local_13.f_42[iVar0][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (is_bit_set(Local_947.f_329[iVar0]->f_2, iVar1))
			{
			}
			else
			{
				if (!func_552(iVar0, iVar1))
				{
					vVar7 = { _get_object_offset_from_coords(vVar10, 0f, func_553(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_553(iVar0, iVar1) };
				}
				if (func_554(iVar0, iVar1))
				{
					if (!func_555(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_556(iVar0, iVar1))
						{
							iVar13 = _0x9641a9a20310f6b8(Local_947.f_329[iVar0]->f_5[iVar1]->f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!does_entity_exist(iVar13))
							{
								return false;
							}
						}
						else if (func_557(iVar0, iVar1))
						{
							iVar13 = _create_weapon_object(Local_947.f_329[iVar0]->f_5[iVar1]->f_5, Local_947.f_329[iVar0]->f_5[iVar1]->f_4, func_553(iVar0, iVar1), true, 1f);
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
						set_bit(&(Local_947.f_329[iVar0]->f_2), iVar1);
						if (func_559(iVar0, iVar1))
						{
							_0x78b4567e18b54480(iVar13);
							_set_pickup_object_glow_enabled(iVar13, true);
						}
						if (func_560(iVar0, iVar1))
						{
							_0xebdc12861d079aba(iVar13, 1);
						}
						if (func_561(iVar0, iVar1))
						{
							set_entity_visible(iVar13, false);
						}
						else
						{
							_0xa91e6cf94404e8c9(iVar13);
						}
						if (func_554(iVar0, iVar1))
						{
							_0x9587913b9e772d29(iVar13, 0);
						}
						vVar4 = { func_562(iVar0, iVar1) };
						if (!func_251(vVar4))
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
								if (!func_563(iVar0, iVar1, 32))
								{
									get_model_dimensions(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, absf(func_564(vVar4.x)), absf(func_564(vVar4.y))) };
									vVar27 = { func_565(vVar24) * vVar21 };
									set_entity_coords(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_947.f_329[iVar0]->f_5[iVar1] = iVar13;
						if (func_566(iVar0, iVar1))
						{
							func_567(iVar0, iVar1, 1);
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

void func_363(struct<2> Param0)
{
	if (func_487(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_487(Param0)))
	{
		_0x99230691875fc218(func_485(Param0), func_487(Param0), Global_35);
	}
}

void func_364()
{
	if (!func_227(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_624(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_365()
{
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_177(iVar1, iVar2))
			{
			}
			else if (func_176(iVar1, iVar2))
			{
			}
			else if (network_does_network_id_exist(Local_13.f_42[iVar1][iVar2]))
			{
				iVar0 = net_to_obj(Local_13.f_42[iVar1][iVar2]);
				Local_947.f_329[iVar1]->f_5[iVar2] = iVar0;
				if (func_551(iVar1, iVar2))
				{
					if (network_does_network_id_exist(Local_13.f_42[iVar1][iVar2]))
					{
						if (network_request_control_of_network_id(Local_13.f_42[iVar1][iVar2]))
						{
							_0x7182edda1ee7db5a(Local_13.f_42[iVar1][iVar2]);
						}
					}
				}
				if (func_559(iVar1, iVar2))
				{
					_0x78b4567e18b54480(iVar0);
					_set_pickup_object_glow_enabled(iVar0, true);
				}
			}
			else if (0 != func_550(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_366(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam0))
	{
	}
	else
	{
		func_625(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_367(int iParam0)
{
	if (Local_947.f_19.f_247 == 0)
	{
		Local_947.f_19.f_247 = add_shocking_event_for_entity(func_626(), iParam0, -1f, 20f, 30f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_368(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_627(uParam0, iParam1, sParam2))
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

void func_369()
{
	set_anim_scene_entity(Local_947.f_19.f_246, func_500(0), func_188(0), 0);
	set_anim_scene_entity(Local_947.f_19.f_246, func_500(2), func_188(2), 0);
	set_anim_scene_entity(Local_947.f_19.f_246, func_502(0), func_501(0), 0);
	set_anim_scene_entity(Local_947.f_19.f_246, func_502(1), func_501(1), 0);
	set_anim_scene_entity(Local_947.f_19.f_246, func_502(2), func_501(2), 0);
}

Vector3 func_370(int iParam0)
{
	switch (func_244())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 463.0012f, 62.19994f, 133.9577f;
				case 1:
					return 459.5367f, 63.82849f, 133.9809f;
				case 6:
					return 473.8049f, 58.08183f, 134.8966f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 4:
					return -413.7405f, 160.7715f, 40.60635f;
				case 6:
					return -405.5906f, 156.8669f, 42.05116f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -1930.864f, -1335.484f, 106.3758f;
				case 6:
					return -1928.29f, -1351.451f, 105.5744f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -2008.653f, -2164.204f, 53.22349f;
				case 1:
					return -2008.814f, -2169.677f, 52.54388f;
				case 6:
					return -2004.192f, -2158.109f, 54.32602f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1264.347f, 114.8426f, 70.64063f;
				case 1:
					return -1257.814f, 116.7969f, 70.42671f;
				case 6:
					return -1284.743f, 110.389f, 70.77811f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -2360.554f, -362.1568f, 144.5925f;
				case 4:
					return -2383.904f, -370.4672f, 141.1333f;
				case 6:
					return -2347.193f, -359.7904f, 143.6934f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -1732.791f, 300.1196f, 107.8627f;
				case 6:
					return -1737.243f, 310.5743f, 108.0522f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return -4956.618f, -3405.884f, 8.00939f;
				case 6:
					return -4966.197f, -3394.001f, 7.7957f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -2187.949f, -2790.927f, 68.51616f;
				case 1:
					return -2182.352f, -2792.112f, 67.62013f;
				case 6:
					return -2193.045f, -2774.715f, 69.19832f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return -4602.944f, -2692.327f, -7.3729f;
				case 6:
					return -4606.675f, -2703.876f, -10.85025f;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 2:
			return func_508(0);
		case 5:
			return func_508(0);
		default:
			break;
	}
	return func_508(0);
}

float func_371(int iParam0)
{
	switch (func_244())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -108.36f;
				case 2:
					return -108.36f;
				case 5:
					return -108.36f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 44.46f;
				case 5:
					return 44.46f;
				case 4:
					return 145.54f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -38.13f;
				case 2:
					return -157.37f;
				case 5:
					return -157.37f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.14f;
				case 2:
					return -63.55f;
				case 5:
					return -63.55f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 105.07f;
				case 2:
					return 91.77f;
				case 5:
					return 105.07f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -80.16f;
				case 2:
					return -92.87f;
				case 5:
					return -92.87f;
				case 4:
					return 117.75f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -50.3f;
				case 2:
					return 119.22f;
				case 5:
					return 119.22f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return 88.08f;
				case 2:
					return -2.53f;
				case 5:
					return -2.53f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 75.17f;
				case 2:
					return 105.53f;
				case 5:
					return 75.17f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return 174.62f;
				case 2:
					return 174.62f;
				case 5:
					return 174.62f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_372(int iParam0)
{
	if (Local_947.f_19.f_248 == 0)
	{
		Local_947.f_19.f_248 = add_shocking_event_for_entity(func_628(), iParam0, -1f, 25f, 35f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_373(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_482(iParam0, 4))
		{
			func_629(iParam0, 4);
		}
	}
	else if (func_482(iParam0, 4))
	{
		func_481(iParam0, 4);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam0))
	{
	}
	else
	{
		func_630(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_375(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_947.f_578[iParam0]->f_2 = fParam1;
	}
}

void func_376()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_632(func_631(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				if (!network_has_control_of_entity(Var1))
				{
				}
				else
				{
					_0xbb1e41dd3d3c6250(Var1, "MpRandomEvent", 1);
					func_633(&(Local_947.f_406), Var1);
					func_634(func_631(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_377(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_635(iParam0, 1178968787) };
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

void func_378()
{
	func_636();
	func_637();
	func_638();
}

void func_379()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_639(iVar0, bVar1, iVar2);
		func_640(iVar0, bVar1, iVar2);
		func_641(iVar0, bVar1, iVar2);
		func_642(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_380()
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
	if (!func_227(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_947.f_274.f_54)
	{
		bVar8 = true;
		Local_947.f_274.f_54 = !Local_947.f_274.f_54;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_947.f_274.f_41 >= 3)
		{
			Local_947.f_274.f_41 = 0;
		}
		iVar0 = Local_947.f_274.f_41;
		Local_947.f_274.f_41++;
		iVar9 = func_643(iVar0);
		iVar1 = &Local_947.f_274.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_175(iVar9, 4))
		{
			func_624(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_82[iVar3]->f_4.f_2[iVar0] > -1f)
			{
				Local_82[iVar3]->f_4.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_947.f_274.f_5, iVar0))
			{
				clear_bit(&(Local_947.f_274.f_5), iVar0);
				clear_bit(&(Local_947.f_274.f_6), iVar0);
				clear_bit(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else
		{
			bVar7 = func_644(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_947.f_274.f_42, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_947.f_274.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_82[iVar3]->f_4.f_1, iVar0))
				{
					set_bit(&(Local_82[iVar3]->f_4.f_1), iVar0);
				}
				func_645(Local_947.f_274.f_43[iVar0]);
			}
		}
		if (is_bit_set(Local_82[iVar3]->f_4.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_646(Local_947.f_274.f_43[iVar0]) || func_647(Local_947.f_274.f_43[iVar0], 0.5f))))
			{
				func_648(Local_947.f_274.f_43[iVar0]);
				clear_bit(&(Local_82[iVar3]->f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_947.f_274.f_54, 0, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_649(iVar9))
						{
							if (!func_548(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_650(iVar9, 4);
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
				if (!func_649(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_947.f_274.f_42 != 0)
	{
		if (!func_651(1, 255))
		{
			func_652(1);
		}
	}
	else if (func_651(1, 255))
	{
		func_653(1);
	}
}

void func_381()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_227(&iVar25))
	{
		return;
	}
	func_654();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_947.f_406.f_64 = 0;
		Local_82[iVar25]->f_10.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_947.f_406.f_125 >= 3)
		{
			Local_947.f_406.f_125 = 0;
		}
		iVar1 = Local_947.f_406.f_125;
		Local_947.f_406.f_125++;
		iVar22++;
		iVar18 = func_631(iVar1);
		if (!func_655(iVar18))
		{
		}
		else if (func_656(iVar18, &Var5))
		{
			if (func_657(&Var5, iVar18))
			{
				if (func_658(&(Local_82[iVar25]->f_10), 8, iVar1))
				{
					func_659(&(Local_82[iVar25]->f_10), 8, iVar1);
				}
			}
			else if (!func_658(&(Local_82[iVar25]->f_10), 8, iVar1))
			{
				func_660(&(Local_82[iVar25]->f_10), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_661(iVar18);
				if (func_662(iVar18))
				{
					if (func_663(iVar18))
					{
						if (!func_664(iVar18))
						{
							func_665(iVar18);
						}
					}
					if (func_666(iVar18))
					{
						func_667(iVar18);
					}
				}
				else
				{
					if (func_668(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_669(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_633(&(Local_947.f_406), Var5);
						}
					}
					if (!func_670(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_671(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_672(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_673(Var5, Var5.f_1, &(Local_947.f_406), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_947.f_406.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_947.f_406.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_674(player_ped_id(), Var5, 1060437492) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_675(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									set_bit(&(Local_947.f_406.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_676(iVar18) || !_0x83d43f0fd5276e4d(Var5, 1))
								{
									bVar30 = false;
									if (network_has_control_of_entity(Var5))
									{
										_0xbb1e41dd3d3c6250(Var5, "MpRandomEvent", 1);
										func_634(iVar18);
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
														if (func_677(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															set_bit(&(Local_947.f_406.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_947.f_406.f_2 & 4 != 0)
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
									if (func_678(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										set_bit(&(Local_947.f_406.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_679(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_658(&(Local_82[iVar25]->f_10), 8, iVar1))
								{
									func_659(&(Local_82[iVar25]->f_10), 8, iVar1);
								}
								func_680(iVar18, 1);
								if (func_505(iVar18))
								{
									if (!func_681(iVar18, 255))
									{
										if (network_has_control_of_entity(Var5))
										{
											if (!func_682(iVar18))
											{
											}
											else
											{
												func_683(iVar18);
												func_684(iVar18);
												Jump @1396; //curOff = 1201
												if (func_685(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 2)
														{
															if (&Local_947.f_406.f_127[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_947.f_406.f_127[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_947.f_406.f_127[iVar18];
																Local_947.f_406.f_127[iVar18] = &Local_947.f_406.f_127[iVar18] + 1;
															}
															iVar24++;
															if (func_686(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_687(iVar18, iVar20))
																{
																	if (func_670(iVar18, iVar0))
																	{
																		if (!func_688(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_689(iVar18, iVar20);
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

void func_382()
{
	fVar0 = func_690();
	if (Local_947.f_537.f_4)
	{
		return;
	}
	if (!func_227(&iVar1))
	{
		return;
	}
	if (func_186(Local_82[iVar1]->f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
		return;
	}
	iVar2 = get_player_ped(player_id());
	if (func_691(iVar2, 0))
	{
		return;
	}
	fVar3 = vdist(get_entity_coords(iVar2, true, false), Local_947.f_15);
	fVar4 = Local_947.f_537.f_9;
	fVar5 = Local_947.f_537.f_10;
	if (func_186(Local_947.f_537.f_12, 2))
	{
		bVar6 = false;
		fVar7 = get_entity_speed(iVar2);
		fVar8 = (fVar0 * (1f / Local_947.f_537.f_7));
		if (fVar7 > 0f)
		{
			if (func_692(Local_947.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_947.f_537.f_6 < 1f)
			{
				Local_947.f_537.f_6 = (Local_947.f_537.f_6 + fVar8);
				if (Local_947.f_537.f_6 > 1f)
				{
					Local_947.f_537.f_6 = 1f;
				}
			}
		}
		else if (Local_947.f_537.f_6 > 0f)
		{
			Local_947.f_537.f_6 = (Local_947.f_537.f_6 - fVar8);
			if (Local_947.f_537.f_6 < 0f)
			{
				Local_947.f_537.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_947.f_537.f_5) * Local_947.f_537.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_248(&(Local_82[iVar1]->f_23), 1);
	}
	else if (_does_volume_exist(Local_947.f_537.f_11) && is_entity_in_volume(iVar2, Local_947.f_537.f_11, false, 0))
	{
		func_248(&(Local_82[iVar1]->f_23), 1);
	}
	else if (Local_947.f_537 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_693(Local_947.f_537.f_13[iVar10], fVar5, 1082130432, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_694(&(Local_947.f_537.f_13), Local_947.f_537, Local_947.f_537.f_8))
		{
			func_248(&(Local_82[iVar1]->f_23), 1);
		}
	}
	if (func_186(Local_82[iVar1]->f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
	}
}

void func_383()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_695(Local_13.f_58[iVar0], Local_947.f_578[iVar0], func_180(iVar0));
		iVar0++;
	}
}

bool func_384()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_947.f_14))
	{
		return false;
	}
	if (func_696())
	{
		return false;
	}
	if (func_697(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_385(int iParam0)
{
	if (Local_947.f_19 != iParam0)
	{
		Local_947.f_19 = iParam0;
	}
}

void func_386(int iParam0)
{
	if (Local_947.f_19.f_1 != iParam0)
	{
		Local_947.f_19.f_1 = iParam0;
	}
}

void func_387()
{
	Local_947.f_19.f_250 = -1;
	Local_947.f_19.f_251 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_947.f_19.f_251 = (Local_947.f_19.f_251 || Local_82[iVar0]->f_1);
			Local_947.f_19.f_250 = (Local_947.f_19.f_250 && Local_82[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_388()
{
	Local_947.f_19.f_252 = -1;
	Local_947.f_19.f_253 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_947.f_19.f_253 = (Local_947.f_19.f_253 || Local_82[iVar0]->f_1.f_1);
			Local_947.f_19.f_252 = (Local_947.f_19.f_252 && Local_82[iVar0]->f_1.f_1);
		}
		iVar0++;
	}
}

void func_389()
{
	if (!network_is_player_a_participant(int_to_playerindex(participant_id_to_int())))
	{
		return;
	}
	if (!func_477(64, 255))
	{
		return;
	}
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return;
	}
	fVar1 = vdist(Local_947.f_15, get_entity_coords(player_ped_id(), false, false));
	if (fVar1 > 50f)
	{
		return;
	}
	if (!func_190(1))
	{
		func_699(func_698(), 10000, 0, 0, 0, 1);
		func_121(1);
		return;
	}
	else if (!func_190(2))
	{
		func_699(func_700(), 10000, 0, 0, 0, 1);
		func_121(2);
		return;
	}
	if (func_598(1048576) && !func_190(4))
	{
		sVar2 = func_701(1048576);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(4);
			return;
		}
	}
	else if (func_598(2097152) && !func_190(8))
	{
		sVar2 = func_701(2097152);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(8);
			return;
		}
	}
	else if (func_598(4194304) && !func_190(16))
	{
		sVar2 = func_701(4194304);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(16);
			return;
		}
	}
	else if (func_598(8388608) && !func_190(32))
	{
		sVar2 = func_701(8388608);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(32);
			return;
		}
	}
	else if (func_598(16777216) && !func_190(64))
	{
		sVar2 = func_701(16777216);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(64);
			return;
		}
	}
	else if (func_598(33554432) && !func_190(128))
	{
		sVar2 = func_701(33554432);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(128);
			return;
		}
	}
	else if (func_598(67108864) && !func_190(256))
	{
		sVar2 = func_701(67108864);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(256);
			return;
		}
	}
	else if (func_598(134217728) && !func_190(512))
	{
		sVar2 = func_701(134217728);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(512);
			return;
		}
	}
	else if (func_598(268435456) && !func_190(1024))
	{
		sVar2 = func_701(268435456);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(1024);
			return;
		}
	}
	else if (func_598(536870912) && !func_190(2048))
	{
		sVar2 = func_701(536870912);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(2048);
			return;
		}
	}
	else if (func_598(1073741824) && !func_190(4096))
	{
		sVar2 = func_701(1073741824);
		if (!is_string_null_or_empty(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(4096);
			return;
		}
	}
}

void func_390()
{
	if (!func_570())
	{
		return;
	}
	if ((func_503(64) || func_503(512)) || func_503(256))
	{
		return;
	}
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	iVar2 = get_player_ped(func_702(2, 0, 1, 1));
	if ((((((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || !does_entity_exist(iVar1)) || is_entity_dead(iVar1)) || !network_has_control_of_entity(iVar1)) || !does_entity_exist(iVar2)) || is_entity_dead(iVar2))
	{
		return;
	}
	if (Local_13.f_7.f_18 > func_596() || func_507(0, 2) < func_603())
	{
		iVar3 = 4;
	}
	else if (Local_13.f_7.f_18 > func_703())
	{
		iVar3 = 3;
	}
	else if (Local_13.f_7.f_18 > func_704())
	{
		iVar3 = 2;
	}
	else if (Local_13.f_7.f_18 > func_705())
	{
		iVar3 = 1;
	}
	iVar4 = func_706(2, 0, 1, 1);
	if (network_is_participant_active(iVar4))
	{
		fVar5 = func_707(iVar4, 2, 0);
		if (fVar5 != 0f)
		{
			iVar6 = func_708(fVar5);
			if (iVar6 > iVar3)
			{
				iVar3 = iVar6;
				if (iVar3 == 4)
				{
					func_573(32768);
				}
			}
		}
	}
	switch (Local_947.f_19.f_2)
	{
		case 0:
			Local_947.f_19.f_2 = 1;
			break;
		case 1:
			switch (iVar3)
			{
				case 1:
					Local_947.f_19.f_2 = 2;
					break;
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			break;
		case 2:
			switch (iVar3)
			{
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -875674219, 1, 0))
			{
				task_turn_ped_to_face_entity(iVar1, iVar0, -1, -1082130432, -1082130432, -1082130432);
			}
			break;
		case 3:
			switch (iVar3)
			{
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -1389117756, 1, 0))
			{
				task_combat_animal_warn(iVar1, iVar0, 0);
			}
			break;
		case 4:
			switch (iVar3)
			{
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -1952598043, 1, 0))
			{
				task_ambient_animal_stalk(iVar1, iVar0, 0);
			}
			break;
		case 5:
			func_573(64);
			break;
	}
}

void func_391(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_629(iParam0, 16);
	}
	else
	{
		func_481(iParam0, 16);
	}
}

void func_392()
{
	if (Local_13.f_7.f_21 == 255 || Local_13.f_7.f_21 != player_id())
	{
		if (_does_volume_exist(Local_947.f_19.f_254))
		{
			_delete_volume(Local_947.f_19.f_254);
		}
		func_504(1073741824);
		func_510(16384);
		func_510(32768);
		func_510(65536);
		func_510(131072);
		func_510(262144);
		return;
	}
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		func_504(1073741824);
		func_510(16384);
		func_510(32768);
		func_510(65536);
		func_510(131072);
		func_510(262144);
		return;
	}
	if (func_709())
	{
		func_573(1073741824);
	}
	else if (func_496(1073741824, 255))
	{
		func_504(1073741824);
	}
	vVar1 = { get_ped_bone_coords(iVar0, 21030, 0f, 0f, 0f) };
	if (func_710(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
	{
		func_478(32768);
	}
	else
	{
		func_510(32768);
	}
	if (func_477(32768, 255))
	{
		if (func_711(iVar0))
		{
			func_510(32768);
		}
	}
	iVar4 = func_239();
	iVar5 = func_188(2);
	if (iVar4 == 1)
	{
		iVar5 = get_mount(iVar0);
	}
	if (does_entity_exist(iVar5) && !is_ped_dead_or_dying(iVar5, true))
	{
		vVar6 = { get_ped_bone_coords(iVar5, 21030, 0f, 0f, 0f) };
		if (func_710(vVar6, 0.1f, 0.9f, 0.1f, 0.9f))
		{
			func_478(65536);
		}
		else
		{
			func_510(65536);
		}
	}
	else
	{
		func_478(65536);
	}
	if (func_712() || is_entity_on_screen(player_ped_id()))
	{
		func_478(16384);
	}
	else
	{
		func_510(16384);
	}
	if (func_713())
	{
		iVar9 = 0;
		while (iVar9 < 32)
		{
			if (_0x72b2e00c9bac6789(&(Local_13.f_7.f_7), iVar9))
			{
				if (iVar9 != participant_id_to_int())
				{
					iVar11++;
				}
			}
			if (_0x72b2e00c9bac6789(&(Local_13.f_7.f_6), iVar9))
			{
				iVar12 = int_to_participantindex(iVar9);
				if (network_is_participant_active(iVar12))
				{
					iVar13 = network_get_player_index(iVar12);
					iVar14 = get_player_ped(iVar13);
					if (does_entity_exist(iVar14) && !is_ped_dead_or_dying(iVar14, true))
					{
						vVar1 = { get_ped_bone_coords(iVar14, 21030, 0f, 0f, 0f) };
						if (func_710(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
						{
							iVar10++;
						}
					}
				}
			}
			iVar9++;
		}
		if (iVar10 < iVar11 || iVar10 == 0)
		{
			if (iVar11 > 1)
			{
				func_510(131072);
				func_510(262144);
			}
			else
			{
				func_510(131072);
				func_478(262144);
			}
		}
		else
		{
			func_478(131072);
			func_478(262144);
		}
	}
	else
	{
		func_478(131072);
		func_478(262144);
	}
}

void func_393()
{
	if (func_477(-2147483648, 255))
	{
		return;
	}
	iVar0 = 180;
	while (Local_947.f_19.f_151 < iVar0)
	{
		cVar1 = func_601(Local_947.f_19.f_151);
		if (!is_string_null_or_empty(cVar1))
		{
			_0xef51242e35242b47(cVar1);
		}
		Local_947.f_19.f_151++;
		if (Local_947.f_19.f_151 > (iVar0 - 1))
		{
			func_478(-2147483648);
		}
	}
}

void func_394()
{
	switch (Local_947.f_19)
	{
		case 0:
			return;
		case 1:
			return;
		case 48:
			return;
		default:
			break;
	}
	if (func_577(0, 255, 1) < 30f)
	{
		func_714();
	}
}

void func_395()
{
}

void func_396()
{
	iVar0 = func_188(0);
	iVar1 = get_player_ped(player_id());
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		return;
	}
	if (!func_527(255))
	{
		func_715(0);
		return;
	}
	vVar2 = { get_entity_coords(iVar1, true, false) };
	fVar5 = vdist(vVar2, get_entity_coords(iVar0, false, false));
	switch (func_239())
	{
		case 9:
		case 10:
		case 11:
			if (func_530(8, 255))
			{
				func_715(0);
			}
			else
			{
				func_716(1123680256);
			}
			break;
		default:
			func_716(1123680256);
			break;
	}
	if (fVar5 < 35f)
	{
		switch (func_239())
		{
			case 9:
			case 10:
			case 11:
				if (func_583(0, 35f, 1, 1) > 1)
				{
					_0x463803429297117c(iVar0, vVar2, 1, 0);
					func_714();
				}
				else
				{
					if (Local_947.f_19.f_161 == 0)
					{
						func_717(&(Local_947.f_19.f_161));
					}
					else if ((get_time_difference(Local_947.f_19.f_161, get_network_time_accurate()) + Local_947.f_19.f_163) > 60000)
					{
						func_478(536870912);
					}
					iVar6 = _0xc17f69e1418cd11f(1);
					if (network_is_participant_active(participant_id()))
					{
						if (iVar6 == 0)
						{
							if (!func_530(8, 255))
							{
								func_699("NB_PHOTOGRAPHY_H_MORE_FS", 10000, 0, 0, 0, 1);
								func_718(8);
							}
							else if (!func_530(16, 255))
							{
								if (func_587(179) || (get_time_difference(Local_947.f_19.f_161, get_network_time_accurate()) + Local_947.f_19.f_163) > 30000)
								{
									func_699("NB_PHOTOGRAPHY_H_RETURN_FS", 10000, 0, 0, 0, 1);
									func_718(16);
								}
							}
						}
					}
					if (func_583(0, 15f, 0, 1) > 0)
					{
						func_719(100);
					}
				}
				break;
			default:
				_0x463803429297117c(iVar0, vVar2, 1, 0);
				func_714();
				break;
		}
	}
	else
	{
		if (Local_947.f_19.f_161 != 0)
		{
			Local_947.f_19.f_163 = (Local_947.f_19.f_163 + get_time_difference(Local_947.f_19.f_161, get_network_time_accurate()));
			Local_947.f_19.f_161 = 0;
		}
		func_720(8);
		func_720(16);
	}
	func_721();
}

void func_397()
{
	func_722();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_716(1123680256);
		func_719(100);
		func_724(func_723());
	}
}

void func_398()
{
	func_716(1123680256);
	func_722();
	func_719(100);
	func_724(func_723());
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if (player_ped_id() != iVar1)
	{
		return;
	}
	if (!func_527(255))
	{
		return;
	}
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!is_ped_active_in_scenario(iVar0, 1))
		{
			fVar2 = vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar0, false, false));
			if (fVar2 < 25f)
			{
				if (func_725(7, Local_947.f_4) || func_726(7, Local_947.f_4))
				{
					if (!func_587(5))
					{
						if (!func_590(1))
						{
							func_591(0, 0, 5, 0);
						}
					}
				}
				else if (func_727(7, Local_947.f_4))
				{
					if (!func_587(4))
					{
						if (!func_590(1))
						{
							func_591(0, 0, 4, 0);
						}
					}
				}
				else if (!func_587(3))
				{
					if (!func_590(1))
					{
						func_591(0, 0, 3, 0);
					}
				}
			}
		}
	}
}

void func_399()
{
	func_716(1123680256);
	func_722();
	func_719(100);
	func_724(-1);
}

void func_400()
{
	func_716(1123680256);
	func_722();
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if (vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar0, false, false)) < 15f)
	{
		func_719(100);
		func_724(func_728());
	}
	else
	{
		func_719(100);
		func_724(func_729());
	}
}

void func_401()
{
	func_719(100);
	func_724(-1);
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_716(1123680256);
		func_584(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
	}
}

void func_402()
{
	func_719(100);
	func_724(-1);
	if ((_network_is_player_index_valid(Local_13.f_7.f_20) && player_id() == Local_13.f_7.f_20) && func_530(2, 255))
	{
		func_478(4);
		return;
	}
	if (func_593(2) > 1)
	{
		return;
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_716(1123680256);
		if (func_598(256))
		{
			func_584(0, 65f, 5000, 0, 14, 15, -1, -1, -1, -1, 1, -1);
		}
		else
		{
			func_584(0, 65f, 5000, 0, 12, 13, -1, -1, -1, -1, 1, -1);
		}
	}
}

void func_403()
{
	func_720(2);
}

void func_404()
{
	func_715(0);
	func_720(2);
}

void func_405()
{
	func_478(64);
	func_573(2048);
}

void func_406()
{
	func_730();
	func_731();
	iVar0 = func_188(0);
	switch (func_239())
	{
		case 0:
			vVar1 = { func_370(0) };
			fVar4 = func_371(0);
			break;
		default:
			vVar1 = { func_370(3) };
			fVar4 = func_371(3);
			break;
	}
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			task_follow_nav_mesh_to_coord(iVar0, vVar1, 1f, -1, 0.25f, 0, fVar4);
		}
	}
}

void func_407()
{
	func_732();
	func_504(268435456);
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_733())
		{
			func_734();
			func_478(2048);
		}
		if (Local_13.f_7.f_10 != 0)
		{
			if (!func_587(16))
			{
				if (!func_590(1))
				{
					if (func_587(16))
					{
						func_588(&(Local_13.f_7.f_10));
					}
					else
					{
						func_591(0, 0, 16, 0);
					}
				}
			}
			else
			{
				func_735();
			}
		}
		else
		{
			func_588(&(Local_13.f_7.f_10));
		}
		func_736(iVar0);
	}
}

void func_408()
{
	func_510(8);
	func_510(16);
}

void func_409()
{
	func_737();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_730();
		if (!func_590(1))
		{
			if (func_595(Local_13.f_7.f_9, 1000))
			{
				iVar1 = func_599();
				if (!func_587(iVar1))
				{
					func_591(0, 0, iVar1, 0);
				}
			}
		}
		if (func_346(iVar0, 993674639))
		{
			iVar2 = func_358(func_738());
			if (iVar2 == 0 || (_is_ped_using_scenario_hash(iVar0, iVar2) && is_ped_active_in_scenario(iVar0, 0)))
			{
				func_573(268435456);
			}
		}
	}
}

void func_410()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_730();
		if (func_346(iVar0, 993674639))
		{
			iVar1 = func_358(func_738());
			if (iVar1 == 0 || (_is_ped_using_scenario_hash(iVar0, iVar1) && is_ped_active_in_scenario(iVar0, 0)))
			{
				func_573(268435456);
			}
		}
	}
}

void func_411()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		func_730();
		if (func_736(iVar0))
		{
			if (func_506(iVar0, -2017877118, 1, 0))
			{
				task_play_anim(iVar0, func_354(0), func_616(0), 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
	}
}

void func_412()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_503(536870912))
		{
			func_730();
			if (!func_590(1))
			{
				func_584(0, 65f, 5000, 0, 83, 84, 85, -1, -1, -1, 0, -1);
			}
		}
		if (func_239() == 0)
		{
			if (network_has_control_of_entity(iVar0))
			{
				if (func_346(iVar0, -2017877118))
				{
					if (is_entity_playing_anim(iVar0, func_354(0), func_616(0), 1))
					{
						if (_get_entity_anim_current_time(iVar0, func_354(0), func_616(0)) > 0.5f)
						{
							stop_anim_task(iVar0, func_354(0), func_616(0), -4f);
						}
					}
				}
			}
		}
		if (!func_570())
		{
			if (network_has_control_of_entity(iVar0))
			{
				if (func_503(536870912))
				{
					if (Local_947.f_19.f_162 == 0)
					{
						func_717(&(Local_947.f_19.f_162));
					}
					if (func_595(Local_947.f_19.f_162, 200))
					{
						set_ped_to_ragdoll(iVar0, 2000, 5000, 0, false, false, false);
						vVar1 = { get_entity_forward_vector(iVar0) };
						apply_force_to_entity(iVar0, 3, -vVar1 * Vector(0.75f, 0.75f, 0.75f), 0f, 0f, 0f, _0xc5303f460a40d21d(iVar0, 21030), false, false, true, false, true);
					}
				}
				else if (!is_ped_ragdoll(iVar0))
				{
					vVar4 = { get_entity_coords(iVar0, false, false) };
					vVar7 = { func_370(1) };
					if (vVar4.z < vVar7.z || vdist(vVar4, Local_13.f_7.f_27) < (vdist(vVar4, vVar7) + 0.25f))
					{
						if (!func_587(86))
						{
							func_591(0, 0, 86, 1);
						}
						func_573(536870912);
					}
				}
			}
		}
	}
}

void func_413()
{
	func_739();
	func_740();
	if (!func_570())
	{
		func_573(8192);
	}
	else if (!func_503(8192))
	{
		iVar0 = func_188(2);
		iVar1 = func_188(0);
		iVar2 = get_player_ped(Local_13.f_7.f_20);
		if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
		{
			if (network_has_control_of_entity(iVar0))
			{
				if (func_741())
				{
					if (func_506(iVar0, 518218985, 1, 0) && !func_346(iVar0, 518218985))
					{
						if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
						{
							task_smart_flee_ped(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
							func_573(8192);
							func_573(256);
						}
						else if (does_entity_exist(iVar2) && !is_ped_dead_or_dying(iVar2, true))
						{
							task_smart_flee_ped(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
							func_573(8192);
							func_573(256);
						}
					}
				}
				else if (func_346(iVar0, -1952598043) || func_346(iVar0, -1442466670))
				{
					func_573(8192);
					func_573(256);
				}
				else
				{
					iVar3 = func_358(4);
					if (iVar3 != 0)
					{
						_task_start_scenario_in_place(iVar0, iVar3, 0, false, 0, -1f, false);
					}
					func_573(8192);
					func_573(256);
				}
			}
		}
	}
}

void func_414()
{
	func_739();
	func_510(64);
	func_192(0);
	iVar0 = func_188(0);
	func_742(iVar0);
}

void func_415()
{
	func_739();
	func_510(64);
	func_743();
}

void func_416()
{
	iVar0 = func_188(0);
	func_739();
	func_715(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			task_follow_nav_mesh_to_coord(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_417()
{
}

void func_418()
{
	func_478(64);
	func_510(4096);
	func_745(1123680256);
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	iVar2 = func_188(1);
	if (((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && does_entity_exist(iVar1)) && !is_ped_dead_or_dying(iVar1, true))
	{
		if (is_ped_on_mount(iVar0))
		{
			if (network_has_control_of_entity(iVar0))
			{
				if (func_506(iVar0, 518218985, 1, 0))
				{
					task_smart_flee_ped(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
				}
			}
		}
		else if (func_506(iVar0, 242628503, 1, 0))
		{
			clear_sequence_task(&(Local_947.f_19.f_164));
			_0x23767d80c7eed7c6(&(Local_947.f_19.f_164), -1556253261);
			vVar3 = { get_entity_coords(iVar1, true, false) };
			if (is_ped_using_any_scenario(iVar0))
			{
				_0xeeed8fafec331a70(0, vVar3, 3);
			}
			else
			{
				task_stand_still(0, 750);
				task_react(0, iVar1, vVar3, "DEFAULT_SHOCKED", 3f, 0f, 4);
			}
			task_smart_flee_ped(0, iVar1, 500f, -1, 0, 2f, iVar2);
			close_sequence_task(Local_947.f_19.f_164);
			if (network_has_control_of_entity(iVar0))
			{
				task_perform_sequence(iVar0, Local_947.f_19.f_164);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		func_742(iVar0);
	}
	if (!func_190(268435456))
	{
		if (func_190(134217728))
		{
			func_121(268435456);
			set_relationship_between_groups(6, Local_947.f_19.f_45, get_ped_relationship_group_hash(iVar0));
			set_relationship_between_groups(6, Local_947.f_19.f_45, 1609284507);
		}
	}
	if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
	{
		if (func_672(2, 255))
		{
			func_573(16384);
		}
		if (network_has_control_of_entity(iVar1))
		{
			if (func_506(iVar1, -1442466670, 1, 0))
			{
				task_combat_hated_targets_around_ped(iVar1, 100f, 0, 0);
			}
		}
	}
	else
	{
		func_573(128);
	}
	iVar6 = player_ped_id();
	iVar7 = int_to_playerindex(participant_id_to_int());
	if (network_is_player_a_participant(iVar7))
	{
		if (!func_190(262144))
		{
			if (vdist(get_entity_coords(iVar6, false, false), get_entity_coords(iVar0, false, false)) < 30f)
			{
				func_121(262144);
			}
		}
	}
}

void func_419()
{
	iVar0 = func_188(2);
	iVar1 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (network_has_control_of_entity(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				if (does_entity_exist(iVar1))
				{
					task_smart_flee_ped(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					vVar2 = { get_entity_coords(iVar0, false, false) };
					task_smart_flee_coord(iVar0, vVar2, 500f, -1, false, 1077936128);
				}
			}
		}
	}
	if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
	{
		if (network_has_control_of_entity(iVar1))
		{
			if (_network_is_player_index_valid(Local_13.f_7.f_24))
			{
				iVar5 = get_player_ped(Local_13.f_7.f_24);
				if (does_entity_exist(iVar5))
				{
					if (func_506(iVar1, 2121492476, 1, 0))
					{
						task_react(iVar1, iVar5, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
			}
			else if (func_496(4096, 255))
			{
				if (does_entity_exist(iVar0))
				{
					if (func_506(iVar1, 2121492476, 1, 0))
					{
						task_react(iVar1, iVar0, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
				else if (func_506(iVar1, 2121492476, 1, 0))
				{
					task_react(iVar1, 0, get_entity_coords(iVar1, false, false), "DEFAULT_SHOCKED", 2000f, 1000f, 4);
				}
			}
		}
	}
}

void func_420()
{
	if (!func_590(1))
	{
		func_591(0, 0, 99, 0);
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_346(iVar0, 2121492476))
		{
			func_746(-1);
			func_747();
		}
	}
}

void func_421()
{
	func_573(128);
	func_504(64);
	func_174(2);
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_20);
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		if (func_496(16384, 255))
		{
			func_748();
		}
		if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
		{
			if (func_506(iVar0, 1227113341, 1, 0))
			{
				task_go_to_entity(iVar0, iVar1, -1, 5f, 2f, 2f, 0);
			}
		}
	}
}

void func_422()
{
	func_174(2);
	iVar0 = int_to_playerindex(participant_id_to_int());
	if (func_749(2, iVar0))
	{
		func_748();
	}
}

void func_423()
{
	func_192(0);
	func_745(1123680256);
	func_504(64);
	iVar0 = func_188(2);
	iVar1 = get_player_ped(player_id());
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		vVar2 = { get_entity_coords(iVar0, false, false) };
		switch (func_239())
		{
			case 3:
			case 5:
				if (func_506(iVar0, 1120685857, 1, 0))
				{
					task_combat_hated_targets_in_area(iVar0, vVar2, 100f, 0, 16);
				}
				break;
			default:
				if (func_506(iVar0, 518218985, 1, 0))
				{
					task_smart_flee_ped(iVar0, iVar1, 100f, -1, 0, 1077936128, 0);
				}
				break;
		}
	}
}

void func_424()
{
	func_192(0);
	func_745(1123680256);
}

void func_425()
{
	func_745(1123680256);
	func_715(0);
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && does_entity_exist(iVar1))
	{
		if (network_has_control_of_entity(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				task_smart_flee_ped(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
			}
		}
	}
}

void func_426()
{
	func_478(64);
}

void func_427()
{
	func_750(2, 10f, 10f, 1f);
	iVar0 = func_706(0, 0, 1, 1);
	if (iVar0 == participant_id())
	{
		vVar2 = { func_370(2) };
		iVar5 = func_589(&uVar1, vVar2, 10f, 0, 0);
		if (iVar5 < 1)
		{
			func_573(1);
		}
		else
		{
			func_504(1);
			return;
		}
	}
	else
	{
		func_504(1);
	}
	iVar6 = func_188(0);
	if (does_entity_exist(iVar6) && !is_ped_dead_or_dying(iVar6, true))
	{
		if (vdist(get_entity_coords(iVar6, true, false), func_370(2)) > 5f)
		{
			if (func_506(iVar6, 713668775, 1, 0))
			{
				task_follow_nav_mesh_to_coord(iVar6, func_370(2), 1f, -1, 0.25f, 0, func_371(2));
			}
		}
		else
		{
			func_751();
			func_752();
		}
		func_584(0, 65f, 5000, 0, 109, 110, 111, -1, -1, -1, 1, 112);
	}
}

void func_428()
{
	func_739();
	iVar0 = func_188(0);
	iVar2 = func_706(0, 0, 1, 1);
	if (iVar2 == participant_id())
	{
		vVar3 = { func_370(2) };
		iVar6 = func_589(&iVar1, vVar3, 10f, 0, 0);
		if (iVar6 < 1)
		{
			func_573(1);
			return;
		}
		else
		{
			func_504(1);
		}
	}
	if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
	{
		Local_947.f_19.f_155 = iVar1;
		if (network_has_control_of_entity(Local_947.f_19.f_155))
		{
			_0x67f7ceac2391e114(Local_947.f_19.f_155, 1);
		}
	}
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (does_entity_exist(Local_947.f_19.f_155) && !is_ped_dead_or_dying(Local_947.f_19.f_155, true))
		{
			if (vdist(get_entity_coords(Local_947.f_19.f_155, true, false), func_370(2)) < 20f)
			{
				if (_get_rider_of_mount(Local_947.f_19.f_155, true) == 0)
				{
					if (network_has_control_of_entity(Local_947.f_19.f_155))
					{
						_0x67f7ceac2391e114(Local_947.f_19.f_155, 1);
					}
					if (network_has_control_of_entity(iVar0))
					{
						if (func_506(iVar0, 1868526510, 1, 0))
						{
							task_mount_animal(iVar0, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
							return;
						}
					}
				}
				else
				{
					func_751();
					func_752();
					func_584(0, 65f, 5000, 0, 113, 114, 115, -1, -1, -1, 1, 116);
				}
			}
		}
	}
}

void func_429()
{
	func_735();
	func_739();
	if (func_733())
	{
		func_734();
		func_478(2048);
	}
	if ((does_entity_exist(Local_947.f_19.f_155) && network_has_control_of_entity(Local_947.f_19.f_155)) && is_ped_dead_or_dying(Local_947.f_19.f_155, true))
	{
		func_573(1);
		return;
	}
	func_732();
	iVar0 = func_188(0);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0))
	{
		fVar1 = func_753(0, func_370(2));
		iVar2 = get_mount(iVar0);
		if ((does_entity_exist(iVar2) && _0xac5045ab7f1a34fd(iVar2)) && fVar1 > (10f + 5f))
		{
			func_478(536870912);
		}
		else if (fVar1 > 6f)
		{
			if (func_506(iVar0, 713668775, 1, 0))
			{
				task_follow_nav_mesh_to_coord(iVar0, func_370(2), 1.5f, -1, 0.5f, 0, 40000f);
			}
		}
		else
		{
			func_754(-1);
		}
	}
}

void func_430()
{
	func_730();
	func_731();
	iVar0 = func_706(0, 0, 1, 1);
	if (iVar0 == participant_id())
	{
		vVar2 = { func_370(2) };
		iVar5 = func_589(&uVar1, vVar2, (10f + 2f), 0, 0);
		if (iVar5 < 1)
		{
			func_573(1);
			return;
		}
	}
	iVar6 = func_188(0);
	if ((does_entity_exist(Local_947.f_19.f_155) && !is_ped_dead_or_dying(Local_947.f_19.f_155, true)) && network_has_control_of_entity(Local_947.f_19.f_155))
	{
		_0x67f7ceac2391e114(Local_947.f_19.f_155, 1);
	}
	if ((does_entity_exist(iVar6) && !is_ped_dead_or_dying(iVar6, true)) && network_has_control_of_entity(iVar6))
	{
		if (does_entity_exist(Local_947.f_19.f_155) && !is_ped_dead_or_dying(Local_947.f_19.f_155, true))
		{
			fVar7 = vdist(get_entity_coords(Local_947.f_19.f_155, false, false), func_370(2));
			if (fVar7 > 20f)
			{
				func_573(1);
				return;
			}
			iVar8 = _get_rider_of_mount(Local_947.f_19.f_155, true);
			if (iVar8 != 0 && iVar8 != iVar6)
			{
				func_573(1);
				return;
			}
			if (func_506(iVar6, 1868526510, 1, 0))
			{
				task_mount_animal(iVar6, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
			}
		}
		else
		{
			func_573(1);
		}
	}
}

void func_431()
{
	iVar0 = func_188(0);
	iVar1 = get_mount(iVar0);
	iVar2 = player_id();
	iVar3 = get_player_ped(iVar2);
	if (((((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && does_entity_exist(iVar1)) && !is_ped_dead_or_dying(iVar1, true)) && does_entity_exist(iVar3)) && !is_ped_dead_or_dying(iVar3, true))
	{
		if (network_has_control_of_entity(iVar1))
		{
			if (func_506(iVar1, 1041577989, 1, 0))
			{
				task_horse_action(iVar1, 2, 0, 0);
				func_591(0, 0, 117, 0);
			}
		}
	}
}

void func_432()
{
}

void func_433()
{
}

void func_434()
{
	func_510(64);
	if (!func_477(4096, 255))
	{
		if (does_entity_exist(Local_947.f_19.f_155) && !is_ped_dead_or_dying(Local_947.f_19.f_155, true))
		{
			iVar0 = player_ped_id();
			if (_0xf103823ffe72bb49(Local_947.f_19.f_155) == iVar0 || (_network_is_player_index_valid(Local_13.f_7.f_25) && Local_13.f_7.f_25 == player_id()))
			{
				func_478(4096);
			}
		}
	}
}

void func_435()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (is_ped_on_mount(iVar0))
		{
			if (func_506(iVar0, 501393341, 1, 0))
			{
				task_dismount_animal(iVar0, 1, 0, 0, 0, 0);
			}
		}
	}
	if (does_entity_exist(Local_947.f_19.f_155))
	{
		if (network_has_control_of_entity(Local_947.f_19.f_155))
		{
			_0x67f7ceac2391e114(Local_947.f_19.f_155, 0);
		}
	}
}

void func_436()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			task_follow_nav_mesh_to_coord(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_437()
{
	iVar0 = func_188(0);
	if (func_506(iVar0, 923520851, 1, 0))
	{
		task_wander_in_area(iVar0, func_508(0), 5f, 10f, 20f, 0);
	}
}

void func_438()
{
	func_573(2);
	func_739();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		iVar1 = get_ped_relationship_group_hash(iVar0);
		if (iVar1 != 1269650476)
		{
			set_ped_relationship_group_hash(iVar0, 1269650476);
		}
		if (!get_ped_config_flag(iVar0, 6, false))
		{
			set_ped_config_flag(iVar0, 6, true);
		}
		if (does_entity_exist(iVar0))
		{
			func_742(iVar0);
		}
		if (is_ped_on_mount(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				if (_network_is_player_index_valid(Local_13.f_7.f_20))
				{
					iVar2 = get_player_ped(Local_13.f_7.f_20);
					if (does_entity_exist(iVar2))
					{
						task_smart_flee_ped(iVar0, iVar2, 500f, -1, 0, 2f, 0);
					}
					else
					{
						task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 2f);
					}
				}
				else
				{
					task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 2f);
				}
			}
		}
	}
	if (!func_582(33554432))
	{
		iVar3 = func_188(1);
		if ((does_entity_exist(iVar3) && !is_ped_dead_or_dying(iVar3, true)) && network_has_control_of_entity(iVar3))
		{
			func_478(33554432);
			set_ped_config_flag(iVar3, 467, true);
		}
	}
}

void func_439()
{
	func_739();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		iVar1 = get_ped_relationship_group_hash(iVar0);
		if (iVar1 != 1269650476)
		{
			set_ped_relationship_group_hash(iVar0, 1269650476);
		}
		if (!get_ped_config_flag(iVar0, 6, false))
		{
			set_ped_config_flag(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (_network_is_player_index_valid(Local_13.f_7.f_20))
			{
				iVar2 = get_player_ped(Local_13.f_7.f_20);
				if (does_entity_exist(iVar2))
				{
					task_smart_flee_ped(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 17039632, 1077936128);
				}
			}
			else
			{
				task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 17039632, 1077936128);
			}
		}
		iVar3 = get_mount(iVar0);
		iVar4 = player_id();
		iVar5 = get_player_ped(iVar4);
		if (does_entity_exist(iVar3) && !is_ped_dead_or_dying(iVar3, true))
		{
			if (!_0xac5045ab7f1a34fd(iVar3))
			{
				iVar6 = network_get_participant_index(Local_13.f_7.f_20);
				fVar7 = 999f;
				if (iVar6 != 255)
				{
					fVar7 = func_577(0, iVar6, 1);
				}
				if (func_505(0) && fVar7 < 25f)
				{
					func_584(0, 65f, 4000, 0, 125, 126, 127, 118, 119, 120, 0, -1);
				}
				else if (func_587(118) && fVar7 < 15f)
				{
					func_584(0, 65f, 4000, 0, 121, 122, 123, 118, 119, 120, 0, -1);
				}
				else
				{
					func_584(0, 65f, 4000, 0, 118, 119, 120, -1, -1, -1, 0, -1);
				}
			}
			if (does_entity_exist(iVar5) && !is_ped_dead_or_dying(iVar5, true))
			{
				if (_0xefc4303ddc6e60d3(iVar5) && _0xed1f514af4732258(iVar5) == iVar3)
				{
					_0xed27560703f37258(iVar5);
				}
				if (_0xf49f14462f0ae27c(iVar4) == iVar3 || Local_13.f_7.f_25 == iVar4)
				{
					if (func_755(iVar5))
					{
						if (vdist(get_entity_coords(iVar3, false, false), get_entity_coords(iVar5, false, false)) < 50f)
						{
							func_573(4);
						}
					}
				}
				if (network_has_control_of_entity(iVar3))
				{
					if (func_503(4))
					{
						if (func_506(iVar3, 1041577989, 1, 0))
						{
							task_horse_action(iVar3, 2, 0, 0);
							func_591(0, 0, 124, 0);
						}
					}
				}
			}
		}
	}
}

void func_440()
{
	func_756();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		iVar1 = get_ped_relationship_group_hash(iVar0);
		if (iVar1 != 1269650476)
		{
			set_ped_relationship_group_hash(iVar0, 1269650476);
		}
		if (!get_ped_config_flag(iVar0, 6, false))
		{
			set_ped_config_flag(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (_network_is_player_index_valid(Local_13.f_7.f_20))
			{
				iVar2 = get_player_ped(Local_13.f_7.f_20);
				if (does_entity_exist(iVar2))
				{
					task_smart_flee_ped(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 1077936128);
			}
		}
	}
}

void func_441()
{
	func_756();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		iVar1 = get_ped_relationship_group_hash(iVar0);
		if (iVar1 != 1269650476)
		{
			set_ped_relationship_group_hash(iVar0, 1269650476);
		}
		if (!get_ped_config_flag(iVar0, 6, false))
		{
			set_ped_config_flag(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (_network_is_player_index_valid(Local_13.f_7.f_20))
			{
				iVar2 = get_player_ped(Local_13.f_7.f_20);
				if (does_entity_exist(iVar2))
				{
					task_smart_flee_ped(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				task_smart_flee_coord(iVar0, func_370(2), 500f, -1, 272, 1077936128);
			}
		}
		if (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))
		{
			func_584(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, 1, -1);
		}
		else if (func_587(79) && !func_587(82))
		{
			func_591(0, 3, 82, 0);
		}
		else
		{
			func_584(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, !func_587(79), -1);
		}
	}
}

void func_442()
{
	iVar0 = func_188(0);
	iVar1 = get_player_ped(player_id());
	if (!func_527(255))
	{
		return;
	}
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		fVar2 = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(iVar0, false, false));
		func_716(1123680256);
		if (fVar2 < 35f)
		{
			func_714();
		}
		func_584(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
}

void func_443()
{
	func_757(1);
	if (!func_758("BOOL_INITIAL"))
	{
		func_759("BOOL_INITIAL");
	}
	if (func_499())
	{
		if (_0x8d81e7824b7753f7(Local_947.f_19.f_246, "REEL_SLOW", 1))
		{
			func_573(262144);
		}
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0))
	{
		func_742(iVar0);
	}
}

void func_444()
{
	if (!func_758("BOOL_REEL_SLOW"))
	{
		func_759("BOOL_REEL_SLOW");
	}
	if (func_499())
	{
		if (_0x8d81e7824b7753f7(Local_947.f_19.f_246, "REEL_FAST", 1))
		{
			func_573(524288);
		}
	}
}

void func_445()
{
	func_591(0, 0, 129, 0);
	if (func_757(1))
	{
		if (func_587(129))
		{
			func_760(1);
		}
	}
}

void func_446()
{
	iVar0 = func_188(0);
	iVar1 = get_player_ped(player_id());
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (!func_587(130))
		{
			func_591(0, 0, 130, 0);
		}
		if (!func_496(65536, 255))
		{
			if (func_527(255))
			{
				fVar2 = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(iVar0, false, false));
				if (fVar2 < 10f)
				{
					func_573(65536);
				}
			}
		}
	}
	if (func_499())
	{
		if (func_608(2))
		{
			if (!func_496(1048576, 255))
			{
				func_573(1048576);
			}
		}
		else if (_0x8d81e7824b7753f7(Local_947.f_19.f_246, "Idle", 1))
		{
			if (func_761() > 0.45f)
			{
				if (func_757(2))
				{
					func_760(2);
				}
			}
		}
	}
	if (func_595(Local_13.f_7.f_10, 120000))
	{
		func_573(131072);
	}
}

void func_447()
{
	func_719(100);
	func_724(-1);
	if ((func_587(3) || func_587(5)) || func_587(4))
	{
		func_584(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
		return;
	}
	iVar0 = get_player_ped(Local_13.f_7.f_20);
	if (player_ped_id() != iVar0)
	{
		return;
	}
	if (func_725(7, Local_947.f_4) || func_726(7, Local_947.f_4))
	{
		if (!func_587(5))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 5, 0);
			}
		}
	}
	else if (func_727(7, Local_947.f_4))
	{
		if (!func_587(4))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 4, 0);
			}
		}
	}
	else if (!func_587(3))
	{
		if (!func_590(1))
		{
			func_591(0, 0, 3, 0);
		}
	}
}

void func_448()
{
	func_478(64);
}

void func_449()
{
	func_715(0);
}

void func_450()
{
}

void func_451()
{
	func_732();
	func_754(-1);
	func_735();
	if (func_733())
	{
		func_734();
		func_478(2048);
	}
}

void func_452()
{
	func_760(3);
}

void func_453()
{
	if (func_582(2048))
	{
		func_613();
		func_762(1);
		func_763();
	}
	if (func_598(512))
	{
		if (func_477(128, 255))
		{
			if (!func_587(73) && !func_587(72))
			{
				iVar0 = func_188(0);
				vVar1 = { func_508(0) };
				if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
				{
					vVar1 = { get_entity_coords(iVar0, false, false) };
				}
				if (func_592(vVar1, 35f) > 1)
				{
					func_591(0, 0, 73, 0);
				}
				else
				{
					func_591(0, 0, 72, 0);
				}
			}
		}
		else if (func_707(participant_id(), 0, 1) < 35f)
		{
			func_478(128);
		}
	}
	func_764();
}

void func_454()
{
	func_510(64);
}

void func_455()
{
}

void func_456()
{
	func_478(64);
}

void func_457()
{
	func_730();
	func_731();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (vdist(get_entity_coords(iVar0, true, false), func_370(5)) > 4f)
		{
			if (func_506(iVar0, 713668775, 1, 0))
			{
				task_follow_nav_mesh_to_coord(iVar0, func_370(5), 1f, -1, 0.25f, 0, func_371(5));
			}
		}
	}
}

void func_458()
{
}

void func_459()
{
	if (func_733())
	{
		func_734();
		func_478(2048);
	}
	func_732();
	func_735();
	iVar0 = func_188(0);
	iVar9 = 0;
	switch (func_239())
	{
		case 11:
			if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
			{
				if (!func_496(4194304, 255))
				{
					set_ped_config_flag(iVar0, 169, true);
					set_ped_config_flag(iVar0, 340, true);
					set_ped_config_flag(iVar0, 137, true);
					set_ped_config_flag(iVar0, 26, true);
					func_573(4194304);
				}
				if (!func_496(2097152, 255))
				{
					stop_ped_speaking(iVar0, true);
					func_573(2097152);
				}
				if (network_has_control_of_entity(iVar0))
				{
					if (!func_503(8388608))
					{
						set_ped_config_flag(iVar0, 6, true);
						func_573(8388608);
					}
				}
			}
			func_754(-1);
			if (Local_13.f_7.f_14 != 0)
			{
				iVar9 = get_time_difference(Local_13.f_7.f_14, get_network_time_accurate());
			}
			if ((iVar9 + Local_13.f_7.f_17) > 15000)
			{
				if (_network_is_player_index_valid(Local_13.f_7.f_20) && Local_13.f_7.f_20 == network_get_player_index(participant_id()))
				{
					func_478(67108864);
				}
			}
			break;
		case 9:
			if (func_496(67108864, 255))
			{
				if (func_577(0, 255, 1) > (3f + 1f))
				{
					func_765(&(Local_947.f_406), 500);
					func_539(&(Local_947.f_406), 4000);
					func_504(67108864);
				}
			}
			else if (func_577(0, 255, 1) < 3.5f)
			{
				func_765(&(Local_947.f_406), 8000);
				func_539(&(Local_947.f_406), 8000);
				func_573(67108864);
			}
			if (((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0)) && !func_503(4194304))
			{
				set_ped_config_flag(iVar0, 26, true);
				func_573(4194304);
			}
			if (get_current_ped_weapon(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 == -1569615261)
				{
					if (func_506(iVar0, 716706914, 1, 0))
					{
						iVar2 = get_best_ped_weapon(iVar0, false, false);
						set_current_ped_weapon(iVar0, iVar2, false, 0, false, false);
						task_swap_weapon(iVar0, 1, 1, 0, 0);
					}
				}
				else if (!func_496(33554432, 255))
				{
					if (func_736(iVar0))
					{
						func_573(33554432);
					}
				}
				else if (func_506(iVar0, 1237250926, 1, 0))
				{
					vVar6 = { get_entity_forward_vector(iVar0) };
					func_565(vVar6);
					vVar6 = { vVar6 * Vector(25f, 25f, 25f) };
					vVar3 = { get_entity_coords(iVar0, false, false) + vVar6 };
					vVar3 = { vVar3 + Vector(25f, 0f, 0f) };
					task_aim_gun_at_coord(iVar0, vVar3, -1, false, true);
				}
			}
			break;
		case 10:
			if (((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0)) && !func_503(4194304))
			{
				set_ped_config_flag(iVar0, 26, true);
				func_573(4194304);
			}
			func_766(Local_13.f_7.f_21, 16777216, 9, 10);
			break;
	}
}

void func_460()
{
	func_765(&(Local_947.f_406), 500);
	func_539(&(Local_947.f_406), 1000);
}

void func_461()
{
	if (func_587(173) && !func_590(1))
	{
		if (_network_is_player_index_valid(Local_13.f_7.f_20) && Local_13.f_7.f_20 == network_get_player_index(participant_id()))
		{
			func_478(67108864);
		}
	}
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (_is_ped_lassoed(iVar0) || _is_ped_hogtied(iVar0))
		{
			func_584(0, 65f, 5000, 0, 168, 169, 170, 171, 172, 173, 1, -1);
		}
	}
}

void func_462()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			task_follow_nav_mesh_to_coord(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_463()
{
	func_510(64);
	iVar0 = func_188(0);
	if (!func_477(4096, 255) && !func_477(2048, 255))
	{
		if (vdist(get_entity_coords(iVar0, false, false), get_entity_coords(player_ped_id(), true, false)) < 3f)
		{
			func_478(4096);
		}
	}
}

void func_464()
{
	func_767();
}

void func_465()
{
	func_510(4096);
	func_510(2048);
	iVar0 = func_188(0);
	vVar1 = { func_508(0) };
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		vVar1 = { get_entity_coords(iVar0, false, false) };
	}
	if (func_707(participant_id(), 0, 1) < 35f)
	{
		func_478(128);
	}
	if (func_598(32768))
	{
		func_591(0, 0, 174, 0);
	}
	else if (func_598(65536))
	{
		func_591(0, 0, 175, 0);
	}
	else if (func_592(vVar1, 35f) > 1)
	{
		func_591(0, 0, 73, 0);
	}
	else
	{
		func_591(0, 0, 72, 0);
	}
}

void func_466()
{
	func_739();
	func_767();
	func_768();
	func_769();
	func_770();
	func_743();
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	func_715(0);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0))
	{
		iVar2 = func_239();
		if (iVar2 == 10)
		{
			if (func_503(16777216) && func_346(iVar0, 242628503))
			{
				func_478(2097152);
				task_play_anim(iVar0, func_354(11), func_616(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
			}
		}
		else if (iVar2 == 9)
		{
			if (get_current_ped_weapon(iVar0, &iVar3, false, 0, false))
			{
				if (iVar3 != -1569615261)
				{
					set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
					task_swap_weapon(iVar0, 1, 1, 0, 0);
				}
			}
		}
	}
	if (func_506(iVar0, 1868526510, 1, 0) && does_entity_exist(iVar1))
	{
		task_mount_animal(iVar0, iVar1, -1, -1, 1f, 1033, 0, 0);
	}
}

void func_467()
{
	func_767();
	func_768();
	func_769();
	func_770();
	func_743();
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (network_has_control_of_entity(iVar0))
		{
			if (func_506(iVar0, -1665583462, 1, 0))
			{
				_task_move_in_traffic(iVar0, 1f, 6152, 0);
			}
			if (func_503(8388608))
			{
				set_ped_config_flag(iVar0, 6, false);
				func_504(8388608);
			}
			if (func_503(4194304))
			{
				set_ped_config_flag(iVar0, 169, false);
				set_ped_config_flag(iVar0, 340, false);
				set_ped_config_flag(iVar0, 137, false);
				set_ped_config_flag(iVar0, 26, false);
				func_504(4194304);
			}
		}
	}
}

void func_468()
{
	func_196();
	func_739();
	func_715(0);
	func_743();
	func_771();
	func_193();
	if (func_598(262144) && !func_670(0, 255))
	{
		func_768();
	}
	if (func_496(2, 255))
	{
		if (func_670(0, participant_id_to_int()))
		{
			func_772();
		}
	}
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	iVar2 = func_239();
	bVar3 = true;
	bVar4 = false;
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if ((does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true)) && _is_ped_getting_into_a_mount_seat(iVar0, true))
		{
			if (_0xefc4303ddc6e60d3(player_ped_id()) && _0xed1f514af4732258(player_ped_id()) == iVar1)
			{
				_0xed27560703f37258(player_ped_id());
			}
		}
		if (network_has_control_of_entity(iVar0))
		{
			if (!func_477(2097152, 255))
			{
				switch (iVar2)
				{
					case 10:
						if (func_503(16777216))
						{
							clear_ped_tasks(iVar0, 1, 0);
						}
						break;
					case 9:
						if (get_current_ped_weapon(iVar0, &iVar5, false, 0, false))
						{
							if (iVar5 != -1569615261)
							{
								_0xcef4c65de502d367(iVar0, 0, 0, 1, 0);
							}
						}
						break;
				}
				func_478(2097152);
			}
			if (!func_496(2097152, 255))
			{
				if (_is_ped_hogtied(iVar0))
				{
					stop_ped_speaking(iVar0, true);
					func_573(2097152);
				}
			}
			if (func_503(8388608))
			{
				set_ped_config_flag(iVar0, 6, false);
				func_504(8388608);
			}
			if (func_503(4194304))
			{
				set_ped_config_flag(iVar0, 169, false);
				set_ped_config_flag(iVar0, 340, false);
				set_ped_config_flag(iVar0, 137, false);
				set_ped_config_flag(iVar0, 26, false);
				func_504(4194304);
			}
			if (((!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true)) || get_mount(iVar0) == iVar1) || vdist(get_entity_coords(iVar0, false, false), get_entity_coords(iVar1, false, false)) > 50f)
			{
				bVar3 = false;
				iVar1 = 0;
			}
			if (iVar2 == 8)
			{
				if (func_499())
				{
					if (!_0xb89fcff19dafff28(Local_947.f_19.f_246, func_500(0)))
					{
						bVar4 = true;
					}
				}
			}
		}
		if (func_506(iVar0, 242628503, 1, 0) || !func_496(8, 255))
		{
			clear_sequence_task(&(Local_947.f_19.f_164));
			_0x23767d80c7eed7c6(&(Local_947.f_19.f_164), -949818134);
			if (bVar4)
			{
				task_play_anim(0, func_354(11), func_616(11), 4f, -8f, 300, 24, 0f, false, 0, false, 0, false);
			}
			if (bVar3)
			{
				task_mount_animal(0, iVar1, -1, -1, 2f, 8, 0, 0);
			}
			_task_smart_flee_style_coord(0, get_entity_coords(iVar0, false, false), 3, 0, -1f, -1, iVar1);
			close_sequence_task(Local_947.f_19.f_164);
			if (network_has_control_of_entity(iVar0))
			{
				task_perform_sequence(iVar0, Local_947.f_19.f_164);
				func_573(8);
				set_ped_keep_task(iVar0, true);
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
	}
	iVar6 = func_188(2);
	if (func_570())
	{
		if (does_entity_exist(iVar6) && !is_ped_dead_or_dying(iVar6, true))
		{
			if (network_has_control_of_entity(iVar6))
			{
				if (!func_505(2))
				{
					if (func_506(iVar6, 518218985, 1, 0))
					{
						_task_smart_flee_style_coord(iVar6, get_entity_coords(iVar6, false, false), 3, 0, -1f, -1, 0);
						set_ped_keep_task(iVar6, true);
						set_blocking_of_non_temporary_events(iVar6, false);
					}
				}
			}
		}
	}
}

void func_469()
{
}

void func_470()
{
	func_762(0);
}

void func_471()
{
	func_762(0);
	iVar0 = func_188(0);
	if ((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0))
	{
		if (is_ped_on_mount(iVar0))
		{
			if (func_506(iVar0, 501393341, 1, 0))
			{
				task_dismount_animal(iVar0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_472()
{
	func_762(0);
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_22);
	if ((((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0)) && does_entity_exist(iVar1)) && !is_ped_dead_or_dying(iVar1, true))
	{
		if (!func_346(iVar0, 501393341))
		{
			iVar2 = func_239();
			if (iVar2 == 10)
			{
				if (func_503(16777216) && func_346(iVar0, 242628503))
				{
					func_478(2097152);
					task_play_anim(iVar0, func_354(11), func_616(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
				}
			}
			else if (iVar2 == 9)
			{
				if (get_current_ped_weapon(iVar0, &iVar3, false, 0, false))
				{
					if (iVar3 != -1569615261)
					{
						set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
						task_swap_weapon(iVar0, 1, 1, 0, 0);
					}
				}
			}
			if (func_506(iVar0, 1227113341, 1, 0))
			{
				task_go_to_entity(iVar0, iVar1, -1, (2.5f / 2f), 1f, 2f, 0);
			}
		}
	}
}

void func_473()
{
	iVar0 = func_188(0);
	iVar1 = get_player_ped(Local_13.f_7.f_22);
	if (network_is_participant_active(participant_id()) && network_get_player_index(participant_id()) == Local_13.f_7.f_22)
	{
		func_773(0);
		if (func_763())
		{
			if (func_506(iVar1, -1162159953, 1, 0))
			{
				if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
				{
					task_play_upper_anim_facing_entity(iVar1, func_354(7), func_616(7), iVar0, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
				}
			}
		}
	}
	if ((((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && network_has_control_of_entity(iVar0)) && does_entity_exist(iVar1)) && !is_ped_dead_or_dying(iVar1, true))
	{
		if (func_506(iVar0, -1162159953, 1, 0))
		{
			func_478(4194304);
			task_turn_ped_to_face_entity(iVar0, iVar1, 0, -1082130432, -1082130432, -1082130432);
			task_play_upper_anim_facing_entity(iVar0, func_354(8), func_616(8), iVar1, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_474()
{
}

void func_475()
{
	if (!func_503(64))
	{
		func_478(536870912);
	}
	func_196();
	func_478(16777216);
}

void func_476()
{
	if (!func_477(268435456, 255))
	{
		if (!func_505(0))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				func_774(7, Local_947.f_4);
				func_775(7, Local_947.f_4);
				func_478(268435456);
			}
		}
	}
	func_196();
	func_478(16777216);
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1]->f_1, iParam0);
}

void func_478(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0]->f_1), iParam0);
}

void func_479()
{
	if (func_503(2))
	{
		if (func_776(0))
		{
			func_777(1);
		}
	}
}

void func_480()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_632(func_631(iVar0), &Var1))
		{
			if (does_entity_exist(Var1))
			{
				_0xad8f2424c6e1e3a8(Var1);
			}
		}
		iVar0++;
	}
}

void func_481(int iParam0, int iParam1)
{
	func_347(&(Local_947.f_578[iParam0]->f_5), iParam1);
}

bool func_482(int iParam0, int iParam1)
{
	return func_186(Local_947.f_578[iParam0]->f_5, iParam1);
}

int func_483(int iParam0)
{
	return func_188(iParam0);
}

void func_484(int iParam0, bool bParam1)
{
	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_778(&(Local_947.f_578[iParam0]->f_6[iVar0])))
		{
			func_779(Local_947.f_578[iParam0]->f_6[iVar0], 1, 1);
			if (bParam1)
			{
				_copy_memory(Local_947.f_578[iParam0]->f_6[iVar0], &Var1, 8);
			}
		}
		iVar0++;
	}
	func_481(iParam0, 2);
}

int func_485(var uParam0, var uParam1)
{
	return uParam0;
}

int func_486(int iParam0)
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

int func_487(struct<2> Param0)
{
	return func_780(Param0);
}

void func_488(struct<2> Param0, var uParam2)
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
	switch (func_485(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_782(func_781(Param0));
			iVar5 = func_783(iVar4);
			if (!func_784(iVar5, 0))
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

int func_489(int iParam0, int iParam1)
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

void func_490(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_785(&Var0);
}

var func_491(int iParam0)
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

var func_492(int iParam0)
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

var func_493(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947->f_236.f_58;
			return Global_1901947->f_236.f_54;
		}

int func_494(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + func_787(iParam0)));
}

void func_495(int iParam0, int iParam1)
{
	Var0 = { func_635(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return;
	}
	if (!is_bit_set(iVar2, iParam0))
	{
		return;
	}
	clear_bit(&iVar2, iParam0);
	if (!stat_id_set_int(&Var0, iVar2, true))
	{
	}
}

bool func_496(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1]->f_1.f_1, iParam0);
}

void func_497(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_788())
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
		if (!&Global_1139381->f_3876.f_2[func_789(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_789(iParam0, 1)])->f_2++;
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
	func_790(&Var0, uVar7);
}

void func_498(int iParam0, int iParam1)
{
	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_791(iVar0, iParam0);
}

bool func_499()
{
	if (_does_anim_scene_exist(Local_947.f_19.f_246) && _is_anim_scene_started(Local_947.f_19.f_246, false))
	{
		return true;
	}
	return false;
}

char* func_500(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Female";
		case 2:
			return "Fish";
		default:
			break;
	}
	return "Female";
}

int func_501(int iParam0)
{
	return func_792(0, iParam0);
}

char* func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POLE";
		case 1:
			return "BOBBER";
		case 2:
			return "RAG";
		default:
			break;
	}
	return "POLE";
}

bool func_503(int iParam0)
{
	return func_186(Local_947.f_19.f_253, iParam0);
}

void func_504(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0]->f_1.f_1), iParam0);
}

bool func_505(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 1, iParam0);
}

bool func_506(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_346(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

float func_507(int iParam0, int iParam1)
{
	return vdist(func_793(iParam0), func_793(iParam1));
}

Vector3 func_508(int iParam0)
{
	return Local_947.f_274.f_7[iParam0]->f_6;
}

void func_509(int iParam0)
{
	func_347(&(Local_947.f_19.f_10), iParam0);
}

void func_510(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0]->f_1), iParam0);
}

int func_511(int iParam0)
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

int func_512(int iParam0)
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

void func_513(var uParam0)
{
	func_203(uParam0, 0);
	func_203(uParam0, 1);
	func_203(uParam0, 3);
	func_201(uParam0);
}

void func_514(var uParam0)
{
	func_202(uParam0);
	func_794(uParam0, 0, 3);
}

void func_515(var uParam0)
{
	func_203(uParam0, 0);
	func_204(uParam0, 0);
	func_204(uParam0, 1);
	func_204(uParam0, 2);
}

void func_516(var uParam0)
{
	func_203(uParam0, 1);
	func_201(uParam0);
}

void func_517(var uParam0)
{
	func_203(uParam0, 2);
	func_204(uParam0, 3);
}

void func_518(var uParam0)
{
	func_203(uParam0, 3);
	func_204(uParam0, 4);
}

void func_519(var uParam0)
{
	func_204(uParam0, 0);
	func_204(uParam0, 1);
}

void func_520(var uParam0)
{
	func_204(uParam0, 2);
	func_204(uParam0, 3);
}

void func_521(var uParam0)
{
	func_204(uParam0, 4);
	func_204(uParam0, 5);
}

bool func_522(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_523(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_524(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_525(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

bool func_526(int iParam0, bool bParam1)
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

bool func_527(int iParam0)
{
	return func_134(8, iParam0);
}

int func_528(int iParam0)
{
	return iParam0;
}

void func_529(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_947.f_578[iParam0]->f_6[iParam1]->f_2 = sParam2;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_3 = iParam3;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_6 = iParam4;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_4 = iParam5;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_5 = iParam6;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_7 = iParam7;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_1 = iParam8;
	if (func_795(iParam0))
	{
		func_796(iParam0, iParam1, 16);
	}
}

bool func_530(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = participant_id_to_int();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1]->f_1.f_2, iParam0);
}

void func_531(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x375f5870a7b8bec1(Local_947.f_578[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_796(iParam0, iParam1, 1);
	}
	else
	{
		func_797(iParam0, iParam1, 1);
	}
	if (bParam3 && func_795(iParam0))
	{
		func_798(&(Local_947.f_578[iParam0]->f_6[iParam1]), bParam2, 1, 1);
	}
}

void func_532(int iParam0, int iParam1)
{
	Local_947.f_578[iParam0]->f_6[iParam1]->f_2 = "";
	Local_947.f_578[iParam0]->f_6[iParam1]->f_3 = 0;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_6 = 0;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_4 = 1;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_5 = 0;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_7 = -1;
	Local_947.f_578[iParam0]->f_6[iParam1]->f_1 = 0;
	if (func_778(&(Local_947.f_578[iParam0]->f_6[iParam1])))
	{
		func_779(Local_947.f_578[iParam0]->f_6[iParam1], 1, 1);
	}
}

void func_533(var uParam0)
{
	func_232(uParam0, 0);
	func_233(uParam0, 0);
	func_234(uParam0, 0);
	func_236(uParam0, 0);
	func_238(uParam0, 1, 1, 1);
}

void func_534(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 4);
	}
	else
	{
		func_248(&(uParam0->f_2), 4);
	}
}

void func_535(var uParam0)
{
	func_800(uParam0, (func_799(uParam0) - 6f));
	func_801(uParam0, 1);
}

void func_536(var uParam0)
{
	func_802(uParam0, 1);
	func_803(uParam0, 1);
	func_804(uParam0, 1);
}

void func_537(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 131072);
	}
	else
	{
		func_248(&(uParam0->f_2), 131072);
	}
}

void func_538(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 4);
	}
	else
	{
		func_347(uParam0, 4);
	}
}

void func_539(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

bool func_540(int iParam0, var uParam1)
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

int func_541(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

var func_542()
{
	return Local_947.f_3;
}

void func_543(int iParam0, int iParam1)
{
	Local_947.f_274.f_7[iParam0]->f_4 = iParam1;
}

void func_544(int iParam0, int iParam1, int iParam2)
{
	Local_947.f_329[iParam0]->f_5[iParam1]->f_2 = iParam2;
}

void func_545(int iParam0)
{
	func_805(0, iParam0);
}

void func_546(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_947.f_329[iParam0]->f_5[iParam1]->f_7 = { vParam2 };
	Local_947.f_329[iParam0]->f_5[iParam1]->f_10 = { 0f, 0f, fParam5 };
	Local_947.f_329[iParam0]->f_5[iParam1]->f_13 = iParam6;
}

int func_547(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_548(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_947.f_15 };
	iVar7 = 0;
	iVar8 = func_621(iParam0);
	iVar9 = func_806(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_38[iParam0])))
		{
			iVar9 = func_806(iParam0);
			fVar0 = func_744(iParam0);
			if (!func_186(Local_947.f_274.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_508(iParam0)) };
			}
			else
			{
				vVar1 = { func_508(iParam0) };
			}
			if (!func_807(Local_13.f_38[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_38[iParam0]));
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
						func_808(iVar7, 1);
					}
					if (func_809(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_810(iParam0))
						{
							if (func_809(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_549(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_38[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_38[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_38[iParam0]))))
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

bool func_549(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_550(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0]->f_5[iParam1]->f_2;
}

bool func_551(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 64);
}

bool func_552(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 16);
}

Vector3 func_553(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0]->f_5[iParam1]->f_7;
}

bool func_554(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0]->f_5[iParam1]->f_13;
}

bool func_555(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_811(*uParam0, 0f, 0f, 0f))
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

bool func_556(int iParam0, int iParam1)
{
	return is_bit_set(Local_947.f_329[iParam0]->f_3, iParam1);
}

bool func_557(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 1);
}

bool func_558(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_812(iParam1))
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

bool func_559(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 2);
}

bool func_560(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 4);
}

bool func_561(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 128);
}

Vector3 func_562(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0]->f_5[iParam1]->f_10;
}

bool func_563(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, iParam2);
}

float func_564(float fParam0)
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

Vector3 func_565(vector3 vParam0)
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

bool func_566(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 256);
}

void func_567(int iParam0, int iParam1, bool bParam2)
{
	freeze_entity_position(&(Local_947.f_329[iParam0]->f_5[iParam1]), bParam2);
}

bool func_568(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0]->f_5[iParam1]->f_1, 512);
}

void func_569(var uParam0, int iParam1)
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
			if (!func_813(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_814(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_816(iParam1, func_815(Local_13.f_58.f_10, iParam1), func_228(iParam1));
				func_122(&(Local_13.f_58.f_10), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_570()
{
	switch (func_239())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

bool func_571()
{
	return (func_135(64) || func_134(64, 255));
}

bool func_572()
{
	return ((func_582(256) || func_582(512)) || func_582(1024));
}

void func_573(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0]->f_1.f_1), iParam0);
}

void func_574(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		func_588(&(Local_13.f_7.f_10));
		Local_13.f_7 = iParam0;
	}
}

void func_575(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_576()
{
	iVar0 = func_188(0);
	if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
	{
		if (is_ped_using_any_scenario(iVar0))
		{
			iVar1 = func_817(0);
			if (_network_is_player_index_valid(iVar1))
			{
				iVar2 = get_player_ped(iVar1);
				if (does_entity_exist(iVar2))
				{
					vVar3 = { get_entity_coords(iVar2, true, false) };
					_0xeeed8fafec331a70(iVar0, vVar3, 3);
				}
			}
		}
	}
}

float func_577(int iParam0, int iParam1, bool bParam2)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (&Local_82[iParam1]->f_4.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &(Local_82[iParam1]->f_4.f_2[iParam0]);
}

bool func_578(int iParam0)
{
	if (iParam0 == -1016714371 || iParam0 == 332793555)
	{
		return true;
	}
	return false;
}

void func_579(int iParam0)
{
	func_248(&(Local_13.f_7.f_30), iParam0);
}

void func_580(int iParam0)
{
	func_347(&(Local_13.f_7.f_30), iParam0);
}

bool func_581(int iParam0, int iParam1)
{
	return func_818(iParam0, iParam1);
}

bool func_582(int iParam0)
{
	return func_186(Local_947.f_19.f_251, iParam0);
}

int func_583(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam3 || func_527(iVar0))
			{
				if (!bParam2 || func_819(iVar0))
				{
					if (func_614(iParam0, fParam1, iVar0, 0))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_584(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	iVar0 = func_188(iParam0);
	iVar3 = 255;
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	switch (iParam3)
	{
		case 0:
			iVar3 = Local_13.f_7.f_20;
			break;
		case 1:
			if (_network_is_player_index_valid(Local_13.f_7.f_21))
			{
				iVar3 = Local_13.f_7.f_21;
			}
			else
			{
				iVar3 = Local_13.f_7.f_20;
			}
			break;
		case 2:
			iVar3 = func_702(2, 99f, 1, 1);
			break;
		case 3:
			iVar3 = func_821(0, 119101, 99f, 1, 1);
			break;
		case 4:
			iVar3 = Local_13.f_7.f_22;
			break;
		case -1:
		case 5:
			iParam3 = 5;
			iVar1 = iVar0;
			break;
	}
	if (iVar1 == 0)
	{
		if (_network_is_player_index_valid(iVar3))
		{
			iVar2 = network_get_participant_index(iVar3);
			if (network_is_participant_active(iVar2))
			{
				iVar1 = get_player_ped(iVar3);
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	if (func_590(1))
	{
		return;
	}
	if (Local_13.f_7.f_9 != 0)
	{
		if (!func_598(32) || Local_13.f_7.f_15 < 1)
		{
			func_822(&(Local_13.f_7.f_15), iParam2);
			func_579(32);
			func_588(&(Local_13.f_7.f_9));
		}
		iVar4 = Local_13.f_7.f_15;
		if (bParam10 && !func_587(iParam4))
		{
			iVar4 = 1500;
		}
		if (func_595(Local_13.f_7.f_9, iVar4))
		{
			iVar5 = network_get_participant_index(iVar3);
			if (iVar5 != 255)
			{
				if (!_network_is_player_index_valid(iVar3) || func_614(0, fParam1, iVar5, 1))
				{
					if (!func_587(iParam4))
					{
						func_591(iParam0, iParam3, iParam4, 0);
					}
					else if (!func_587(iParam5))
					{
						func_591(iParam0, iParam3, iParam5, 0);
					}
					else if (iParam6 != -1 && !func_587(iParam6))
					{
						func_591(iParam0, iParam3, iParam6, 0);
					}
					else if (iParam7 != -1 && !func_587(iParam7))
					{
						func_591(iParam0, iParam3, iParam7, 0);
					}
					else if (iParam8 != -1 && !func_587(iParam8))
					{
						func_591(iParam0, iParam3, iParam8, 0);
					}
					else if (iParam9 != -1 && !func_587(iParam9))
					{
						func_591(iParam0, iParam3, iParam9, 0);
					}
					else if (iParam11 != -1)
					{
						func_823(iParam11);
					}
				}
			}
		}
	}
	else
	{
		func_588(&(Local_13.f_7.f_9));
	}
}

void func_585()
{
	if (Local_13.f_7.f_11 == 0)
	{
		func_588(&(Local_13.f_7.f_11));
		func_822(&(Local_13.f_7.f_16), 12000);
		return;
	}
	if (func_582(524288))
	{
		func_588(&(Local_13.f_7.f_11));
		func_822(&(Local_13.f_7.f_16), 12000);
	}
}

bool func_586()
{
	if (func_582(536870912))
	{
		return true;
	}
	if (Local_13.f_7.f_12 == 0)
	{
		func_588(&(Local_13.f_7.f_12));
	}
	if (func_595(Local_13.f_7.f_12, 100000))
	{
		if (!func_595(Local_13.f_7.f_9, 10000))
		{
			return false;
		}
		iVar0 = func_188(0);
		if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
		{
			if (_0x54b187f111d9c6f8(iVar0, 1))
			{
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_587(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	return is_bit_set(&(Local_947.f_19.f_46[iVar1]), iVar2);
}

void func_588(var uParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	*uParam0 = get_network_time_accurate();
}

int func_589(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	iVar3 = func_188(1);
	fVar7 = fParam4;
	iVar0 = create_itemset(true);
	iVar5 = _0x59b57c4b06531e1e(vParam1, fParam4, iVar0, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (!is_entity_dead(iVar2))
		{
			if (func_824(iVar2))
			{
				iVar8 = _0xe4770da1b8ff4fd1(iVar2);
				if (!does_entity_exist(iVar8))
				{
					if (!does_entity_exist(iVar3) || iVar2 != iVar3)
					{
						if (!bParam5 || _get_rider_of_mount(iVar2, false) == 0)
						{
							bVar9 = false;
							if (!bParam6)
							{
								bVar9 = true;
							}
							if (!bVar9)
							{
								iVar10 = func_188(0);
								if (does_entity_exist(iVar10) && !is_ped_dead_or_dying(iVar10, true))
								{
									if (func_825(iVar10, iVar2, 0, fParam4, 0))
									{
										bVar9 = true;
									}
								}
							}
							if (bVar9)
							{
								fVar11 = vdist(get_entity_coords(iVar2, false, false), vParam1);
								if (fVar11 < 50f && fVar11 < fVar7)
								{
									fVar7 = fVar11;
									*iParam0 = iVar2;
									iVar12 = _get_rider_of_mount(*iParam0, true);
									if (does_entity_exist(iVar12))
									{
										iVar13 = network_get_player_index_from_ped(iVar12);
										if (_network_is_player_index_valid(iVar13))
										{
											Local_13.f_7.f_25 = iVar13;
										}
									}
								}
								iVar6++;
							}
						}
					}
				}
			}
		}
		iVar4++;
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return iVar6;
}

bool func_590(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_591(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Var0 = { func_826(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	if (bParam3)
	{
		Var0.f_14 = 1;
	}
	else
	{
		Var0.f_14 = -1;
	}
	func_827(&Var0);
}

int func_592(vector3 vParam0, float fParam3)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar2))
		{
			if (func_527(iVar0))
			{
				iVar3 = network_get_player_index(iVar2);
				if (_network_is_player_index_valid(iVar3))
				{
					iVar4 = get_player_ped(iVar3);
					if (does_entity_exist(iVar4) && !is_ped_dead_or_dying(iVar4, true))
					{
						if (vdist(get_entity_coords(iVar4, true, false), vParam0) < fParam3)
						{
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_593(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_186(Local_82[iVar0]->f_1.f_2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_594(int iParam0)
{
	return func_186(Local_947.f_19.f_250, iParam0);
}

bool func_595(int iParam0, int iParam1)
{
	iVar0 = get_network_time_accurate();
	if (iParam0 != 0)
	{
		if (get_time_difference(iParam0, iVar0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

int func_596()
{
	switch (func_239())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		default:
			break;
	}
	return 4;
}

bool func_597()
{
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return false;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar4 = { func_370(1) };
	fVar7 = (vVar4.z - vVar1.z);
	if (fVar7 > 5f)
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0)
{
	return func_186(Local_13.f_7.f_30, iParam0);
}

int func_599()
{
	iVar0 = Local_13.f_7.f_19;
	switch (iVar0)
	{
		case 1:
			return 21;
		case 2:
			return 22;
		case 3:
			return 23;
		default:
			break;
	}
	return 21;
}

void func_600(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	clear_bit(Local_947.f_19.f_46[iVar1], iVar2);
}

char[] func_601(int iParam0)
{
	switch (func_239())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_CL_IDLE";
				case 1:
					return "OREPHT_CL_IDLE";
				case 2:
					return "OREPHT_CL_IDLE";
				case 3:
					return "OREPHT_CL_CALL1";
				case 4:
					return "OREPHT_CL_CAL1M";
				case 5:
					return "OREPHT_CL_CAL1A";
				case 6:
					return "OREPHT_CL_CAL1R";
				case 7:
					return "OREPHT_CL_CALL2";
				case 8:
					return "OREPHT_CL_CALL2";
				case 9:
					return "OREPHT_CL_OFFR1";
				case 10:
					return "OREPHT_CL_OFFR2";
				case 11:
					return "OREPHT_CL_OFFR3";
				case 16:
					return "OREPHT_CL_TODO";
				case 21:
					return "OREPHT_CL_POSE1";
				case 22:
					return "OREPHT_CL_POSE2";
				case 23:
					return "OREPHT_CL_POSE3";
				case 24:
					return "OREPHT_CL_POSE4";
				case 83:
					return "OREPHT_CL_BACK1";
				case 84:
					return "OREPHT_CL_BACK1";
				case 85:
					return "OREPHT_CL_BACK1";
				case 86:
					return "OREPHT_CL_FALL";
				case 87:
					return "OREPHT_CL_SCRM";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_243() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DA_IDLE";
					case 1:
						return "OREPHT_DA_IDLE";
					case 2:
						return "OREPHT_DA_IDLE";
					case 3:
						return "OREPHT_DA_CALL1";
					case 4:
						return "OREPHT_DA_CAL1M";
					case 5:
						return "OREPHT_DA_CAL1A";
					case 6:
						return "OREPHT_DA_CAL1R";
					case 7:
						return "OREPHT_DA_CALL2";
					case 8:
						return "OREPHT_DA_CALL2";
					case 9:
						return "OREPHT_DA_OFFR1";
					case 10:
						return "OREPHT_DA_OFFR2";
					case 11:
						return "OREPHT_DA_OFFR3";
					case 16:
						return "OREPHT_DA_TODO";
					case 48:
						return "OREPHT_DA_PHFRM";
					case 49:
						return "OREPHT_DA_PHFRM";
					case 50:
						return "OREPHT_DA_PHFRM";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 83:
						return "OREPHT_DA_BACK1";
					case 84:
						return "OREPHT_DA_BACK1";
					case 85:
						return "OREPHT_DA_BACK1";
					case 88:
						return "OREPHT_DA_SAVED";
					case 89:
						return "OREPHT_DA_OFFRB";
					case 90:
						return "OREPHT_DA_OFFRK";
					case 91:
						return "OREPHT_DA_OFFRO";
					case 92:
						return "OREPHT_DA_OFFRC";
					case 93:
						return "OREPHT_DA_OFFRW";
					case 94:
						return "OREPHT_DA_ATTCK";
					case 95:
						return "OREPHT_DA_ATTCK";
					case 96:
						return "OREPHT_DA_ATTCK";
					case 97:
						return "OREPHT_DA_PLCLS";
					case 98:
						return "OREPHT_DA_PLCLS";
					case 99:
						return "OREPHT_DA_PLSCR";
					case 100:
						return "OREPHT_DA_PLSCR";
					case 101:
						return "OREPHT_DA_SVRD1";
					case 102:
						return "OREPHT_DA_SVRD2";
					case 103:
						return "OREPHT_DA_SVRD3";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_AN_IDLE";
					case 1:
						return "OREPHT_AN_IDLE";
					case 2:
						return "OREPHT_AN_IDLE";
					case 3:
						return "OREPHT_AN_CALL1";
					case 4:
						return "OREPHT_AN_CAL1M";
					case 5:
						return "OREPHT_AN_CAL1A";
					case 6:
						return "OREPHT_AN_CAL1R";
					case 7:
						return "OREPHT_AN_CALL2";
					case 8:
						return "OREPHT_AN_CALL2";
					case 9:
						return "OREPHT_AN_OFFR1";
					case 10:
						return "OREPHT_AN_OFFR2";
					case 11:
						return "OREPHT_AN_OFFR3";
					case 16:
						return "OREPHT_AN_TODO";
					case 48:
						return "OREPHT_AN_PHFRM";
					case 49:
						return "OREPHT_AN_PHFRM";
					case 50:
						return "OREPHT_AN_PHFRM";
					case 21:
						return "OREPHT_CL_POSE1";
					case 22:
						return "OREPHT_CL_POSE2";
					case 23:
						return "OREPHT_CL_POSE3";
					case 24:
						return "OREPHT_CL_POSE4";
					case 83:
						return "OREPHT_AN_BACK1";
					case 84:
						return "OREPHT_AN_BACK1";
					case 85:
						return "OREPHT_AN_BACK1";
					case 88:
						return "OREPHT_AN_SAVED";
					case 89:
						return "OREPHT_AN_OFFRB";
					case 90:
						return "OREPHT_AN_OFFRK";
					case 91:
						return "OREPHT_AN_OFFRO";
					case 92:
						return "OREPHT_AN_OFFRC";
					case 93:
						return "OREPHT_AN_OFFRW";
					case 94:
						return "OREPHT_AN_ATTCK";
					case 95:
						return "OREPHT_AN_ATTCK";
					case 96:
						return "OREPHT_AN_ATTCK";
					case 97:
						return "OREPHT_AN_PLCLS";
					case 98:
						return "OREPHT_AN_PLCLS";
					case 99:
						return "OREPHT_AN_PLSCR";
					case 100:
						return "OREPHT_AN_PLSCR";
					case 101:
						return "OREPHT_AN_SVRD1";
					case 102:
						return "OREPHT_AN_SVRD2";
					case 103:
						return "OREPHT_AN_SVRD3";
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_243() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 48:
						return "OREPHT_HR_PHFRM";
					case 49:
						return "OREPHT_HR_PHFRM";
					case 50:
						return "OREPHT_HR_PHFRM";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_243() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 118:
						return "OREPHT_DT_TNT1";
					case 119:
						return "OREPHT_DT_TNT2";
					case 120:
						return "OREPHT_DT_TNT3";
					case 121:
						return "OREPHT_DT_CHS1";
					case 122:
						return "OREPHT_DT_CHS1";
					case 123:
						return "OREPHT_DT_CHS1";
					case 124:
						return "OREPHT_DT_THRN1";
					case 125:
						return "OREPHT_DT_AGATK";
					case 126:
						return "OREPHT_DT_AGATK";
					case 127:
						return "OREPHT_DT_AGATK";
					case 82:
						return "OREPHT_DT_FLEE";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 118:
						return "OREPHT_ST_TNT1";
					case 119:
						return "OREPHT_ST_TNT2";
					case 120:
						return "OREPHT_ST_TNT3";
					case 121:
						return "OREPHT_ST_CHS1";
					case 122:
						return "OREPHT_ST_CHS1";
					case 123:
						return "OREPHT_ST_CHS1";
					case 124:
						return "OREPHT_ST_THRN1";
					case 125:
						return "OREPHT_ST_AGATK";
					case 126:
						return "OREPHT_ST_AGATK";
					case 127:
						return "OREPHT_ST_AGATK";
					case 82:
						return "OREPHT_ST_FLEE";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_FH_IDLE";
				case 1:
					return "OREPHT_FH_IDLE";
				case 2:
					return "OREPHT_FH_IDLE";
				case 128:
					return "OREPHT_FH_REEL";
				case 129:
					return "OREPHT_FH_WHOO";
				case 130:
					return "OREPHT_FH_CATCH";
				case 9:
					return "OREPHT_FH_OFFR1";
				case 10:
					return "OREPHT_FH_OFFR2";
				case 11:
					return "OREPHT_FH_OFFR3";
				case 48:
					return "OREPHT_FH_PHFRM";
				case 49:
					return "OREPHT_FH_PHFRM";
				case 50:
					return "OREPHT_FH_PHFRM";
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_GN_IDLE";
				case 1:
					return "OREPHT_GN_IDLE";
				case 2:
					return "OREPHT_GN_IDLE";
				case 9:
					return "OREPHT_GN_OFFR1";
				case 10:
					return "OREPHT_GN_OFFR2";
				case 11:
					return "OREPHT_GN_OFFR3";
				case 131:
					return "OREPHT_GN_TDUP1";
				case 132:
					return "OREPHT_GN_TDUP2";
				case 133:
					return "OREPHT_GN_TDAT1";
				case 134:
					return "OREPHT_GN_TDAT2";
				case 135:
					return "OREPHT_GN_TDHG1";
				case 136:
					return "OREPHT_GN_TDHG2";
				case 137:
					return "OREPHT_GN_GTHR1";
				case 138:
					return "OREPHT_GN_GTHR1";
				case 139:
					return "OREPHT_GN_GTHR1";
				case 140:
					return "OREPHT_GN_GTHR2";
				case 141:
					return "OREPHT_GN_GTHR2";
				case 142:
					return "OREPHT_GN_GTHR2";
				case 144:
					return "OREPHT_GN_NOCAM";
				case 145:
					return "OREPHT_GN_NOCAM";
				case 146:
					return "OREPHT_GN_NOCAM";
				case 147:
					return "OREPHT_GN_PSEUP";
				case 148:
					return "OREPHT_GN_PSEUP";
				case 149:
					return "OREPHT_GN_PSEUP";
				case 150:
					return "OREPHT_GN_PSEAT";
				case 151:
					return "OREPHT_GN_PSEAT";
				case 152:
					return "OREPHT_GN_PSEAT";
				case 154:
					return "OREPHT_GN_PSHOG";
				case 155:
					return "OREPHT_GN_PSHOG";
				case 156:
					return "OREPHT_GN_PSHOG";
				case 158:
					return "OREPHT_GN_PHFR1";
				case 159:
					return "OREPHT_GN_PHFR1";
				case 160:
					return "OREPHT_GN_PHFR1";
				case 161:
					return "OREPHT_GN_PHFR2";
				case 162:
					return "OREPHT_GN_PHFR2";
				case 163:
					return "OREPHT_GN_PHFR2";
				case 165:
					return "OREPHT_GN_HOGCR";
				case 166:
					return "OREPHT_GN_HOGCR";
				case 167:
					return "OREPHT_GN_HOGCR";
				case 168:
					return "OREPHT_GN_HOGCT";
				case 169:
					return "OREPHT_GN_HOGCT";
				case 170:
					return "OREPHT_GN_HOGCT";
				case 171:
					return "OREPHT_GN_HOGRL";
				case 172:
					return "OREPHT_GN_HOGRL";
				case 173:
					return "OREPHT_GN_HOGRL";
				case 174:
					return "OREPHT_GN_NOPED";
				case 175:
					return "OREPHT_GN_NOPSE";
				default:
					break;
			}
			break;
	}
	if (func_243() == 2)
	{
		switch (iParam0)
		{
			case 3:
				return "OREPHT_DA_CALL1";
			case 4:
				return "OREPHT_DA_CAL1M";
			case 5:
				return "OREPHT_DA_CAL1A";
			case 6:
				return "OREPHT_DA_CAL1R";
			case 7:
				return "OREPHT_DA_CALL2";
			case 8:
				return "OREPHT_DA_CALL2";
			case 34:
				return "OREPHT_DS_ACCPT";
			case 35:
				return "OREPHT_DS_DECLN";
			case 12:
				return "OREPHT_DS_OFFR4";
			case 13:
				return "OREPHT_DS_OFFR4";
			case 14:
				return "OREPHT_DS_OFFR5";
			case 15:
				return "OREPHT_DS_OFFR5";
			case 36:
				return "OREPHT_DS_PHCAM";
			case 37:
				return "OREPHT_DS_PHCAM";
			case 38:
				return "OREPHT_DS_PHCAM";
			case 40:
				return "OREPHT_DS_PHFAR";
			case 41:
				return "OREPHT_DS_PHFAR";
			case 42:
				return "OREPHT_DS_PHFAR";
			case 44:
				return "OREPHT_DS_PHFRM";
			case 45:
				return "OREPHT_DS_PHFRM";
			case 46:
				return "OREPHT_DS_PHFRM";
			case 52:
				return "OREPHT_DS_PHCLS";
			case 53:
				return "OREPHT_DS_PHCLS";
			case 54:
				return "OREPHT_DS_PHCLS";
			case 17:
				return "OREPHT_DS_WAIT";
			case 18:
				return "OREPHT_DS_WAIT";
			case 19:
				return "OREPHT_DS_WAIT";
			case 59:
				return "OREPHT_DS_PHWAT";
			case 60:
				return "OREPHT_DS_PHWAT";
			case 61:
				return "OREPHT_DS_PHWAT";
			case 56:
				return "OREPHT_DS_PHRDY";
			case 57:
				return "OREPHT_DS_PHRDY";
			case 58:
				return "OREPHT_DS_PHRDY";
			case 62:
				return "OREPHT_DS_PHNOW";
			case 63:
				return "OREPHT_DS_PHNOW";
			case 64:
				return "OREPHT_DS_PHNOW";
			case 65:
				return "OREPHT_DS_PHBAD";
			case 68:
				return "OREPHT_DS_PHRWB";
			case 66:
				return "OREPHT_DS_PHOK";
			case 69:
				return "OREPHT_DS_PHRWO";
			case 67:
				return "OREPHT_DS_PHGOD";
			case 70:
				return "OREPHT_DS_PHRWG";
			case 71:
				return "OREPHT_DS_FILM";
			case 25:
				return "OREPHT_DS_RIDE1";
			case 26:
				return "OREPHT_DS_RIDE2";
			case 27:
				return "OREPHT_DS_RIDE3";
			case 28:
				return "OREPHT_DS_RIDB1";
			case 29:
				return "OREPHT_DS_RIDB2";
			case 30:
				return "OREPHT_DS_RIDB3";
			case 31:
				return "OREPHT_DS_FAIL1";
			case 32:
				return "OREPHT_DS_FAIL2";
			case 33:
				return "OREPHT_DS_FAIL3";
			case 72:
				return "OREPHT_DS_ANNOY";
			case 73:
				return "OREPHT_DS_ANPOS";
			case 74:
				return "OREPHT_DS_AGGRO";
			case 75:
				return "OREPHT_DS_AGGRO";
			case 76:
				return "OREPHT_DS_AGGRO";
			case 77:
				return "OREPHT_DS_AGGHR";
			case 78:
				return "OREPHT_DS_AGGHR";
			case 79:
				return "OREPHT_DS_HOGTD";
			case 80:
				return "OREPHT_DS_HOGTD";
			case 81:
				return "OREPHT_DS_HOGTD";
			case 82:
				return "OREPHT_DS_HOGUT";
			default:
				break;
		}
	}
	switch (func_239())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 34:
					return "OREPHT_TS_ACCPT";
				case 35:
					return "OREPHT_TS_DECLN";
				case 12:
					return "OREPHT_TS_OFFR4";
				case 13:
					return "OREPHT_TS_OFFR4";
				case 14:
					return "OREPHT_TS_OFFR5";
				case 15:
					return "OREPHT_TS_OFFR5";
				case 36:
					return "OREPHT_TS_PHCAM";
				case 37:
					return "OREPHT_TS_PHCAM";
				case 38:
					return "OREPHT_TS_PHCAM";
				case 40:
					return "OREPHT_TS_PHFAR";
				case 41:
					return "OREPHT_TS_PHFAR";
				case 42:
					return "OREPHT_TS_PHFAR";
				case 44:
					return "OREPHT_TS_PHFRM";
				case 45:
					return "OREPHT_TS_PHFRM";
				case 46:
					return "OREPHT_TS_PHFRM";
				case 52:
					return "OREPHT_TS_PHCLS";
				case 53:
					return "OREPHT_TS_PHCLS";
				case 54:
					return "OREPHT_TS_PHCLS";
				case 17:
					return "OREPHT_TS_WAIT";
				case 18:
					return "OREPHT_TS_WAIT";
				case 19:
					return "OREPHT_TS_WAIT";
				case 59:
					return "OREPHT_TS_PHWAT";
				case 60:
					return "OREPHT_TS_PHWAT";
				case 61:
					return "OREPHT_TS_PHWAT";
				case 56:
					return "OREPHT_TS_PHRDY";
				case 57:
					return "OREPHT_TS_PHRDY";
				case 58:
					return "OREPHT_TS_PHRDY";
				case 62:
					return "OREPHT_TS_PHNOW";
				case 63:
					return "OREPHT_TS_PHNOW";
				case 64:
					return "OREPHT_TS_PHNOW";
				case 65:
					return "OREPHT_TS_PHBAD";
				case 68:
					return "OREPHT_TS_PHRWB";
				case 66:
					return "OREPHT_TS_PHOK";
				case 69:
					return "OREPHT_TS_PHRWO";
				case 67:
					return "OREPHT_TS_PHGOD";
				case 70:
					return "OREPHT_TS_PHRWG";
				case 71:
					return "OREPHT_TS_FILM";
				case 25:
					return "OREPHT_TS_RIDE1";
				case 26:
					return "OREPHT_TS_RIDE2";
				case 27:
					return "OREPHT_TS_RIDE3";
				case 28:
					return "OREPHT_TS_RIDB1";
				case 29:
					return "OREPHT_TS_RIDB2";
				case 30:
					return "OREPHT_TS_RIDB3";
				case 31:
					return "OREPHT_TS_FAIL1";
				case 32:
					return "OREPHT_TS_FAIL2";
				case 33:
					return "OREPHT_TS_FAIL3";
				case 72:
					return "OREPHT_TS_ANNOY";
				case 73:
					return "OREPHT_TS_ANPOS";
				case 74:
					return "OREPHT_TS_AGGRO";
				case 75:
					return "OREPHT_TS_AGGRO";
				case 76:
					return "OREPHT_TS_AGGRO";
				case 77:
					return "OREPHT_TS_AGGHR";
				case 78:
					return "OREPHT_TS_AGGHR";
				case 79:
					return "OREPHT_TS_HOGTD";
				case 80:
					return "OREPHT_TS_HOGTD";
				case 81:
					return "OREPHT_TS_HOGTD";
				case 82:
					return "OREPHT_TS_HOGUT";
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 3:
					return "OREPHT_FS_CALL1";
				case 4:
					return "OREPHT_FS_CAL1M";
				case 5:
					return "OREPHT_FS_CAL1A";
				case 6:
					return "OREPHT_FS_CAL1R";
				case 7:
					return "OREPHT_FS_CALL2";
				case 8:
					return "OREPHT_FS_CALL2";
				case 34:
					return "OREPHT_FS_ACCPT";
				case 35:
					return "OREPHT_FS_DECLN";
				case 12:
					return "OREPHT_FS_OFFR4";
				case 13:
					return "OREPHT_FS_OFFR4";
				case 14:
					return "OREPHT_FS_OFFR5";
				case 15:
					return "OREPHT_FS_OFFR5";
				case 36:
					return "OREPHT_FS_PHCAM";
				case 37:
					return "OREPHT_FS_PHCAM";
				case 38:
					return "OREPHT_FS_PHCAM";
				case 40:
					return "OREPHT_FS_PHFAR";
				case 41:
					return "OREPHT_FS_PHFAR";
				case 42:
					return "OREPHT_FS_PHFAR";
				case 44:
					return "OREPHT_FS_PHFRM";
				case 45:
					return "OREPHT_FS_PHFRM";
				case 46:
					return "OREPHT_FS_PHFRM";
				case 52:
					return "OREPHT_FS_PHCLS";
				case 53:
					return "OREPHT_FS_PHCLS";
				case 54:
					return "OREPHT_FS_PHCLS";
				case 17:
					return "OREPHT_FS_WAIT";
				case 18:
					return "OREPHT_FS_WAIT";
				case 19:
					return "OREPHT_FS_WAIT";
				case 59:
					return "OREPHT_FS_PHWAT";
				case 60:
					return "OREPHT_FS_PHWAT";
				case 61:
					return "OREPHT_FS_PHWAT";
				case 56:
					return "OREPHT_FS_PHRDY";
				case 57:
					return "OREPHT_FS_PHRDY";
				case 58:
					return "OREPHT_FS_PHRDY";
				case 62:
					return "OREPHT_FS_PHNOW";
				case 63:
					return "OREPHT_FS_PHNOW";
				case 64:
					return "OREPHT_FS_PHNOW";
				case 65:
					return "OREPHT_FS_PHBAD";
				case 68:
					return "OREPHT_FS_PHRWB";
				case 66:
					return "OREPHT_FS_PHOK";
				case 69:
					return "OREPHT_FS_PHRWO";
				case 67:
					return "OREPHT_FS_PHGOD";
				case 70:
					return "OREPHT_FS_PHRWG";
				case 71:
					return "OREPHT_FS_FILM";
				case 25:
					return "OREPHT_FS_RIDE1";
				case 26:
					return "OREPHT_FS_RIDE2";
				case 27:
					return "OREPHT_FS_RIDE3";
				case 28:
					return "OREPHT_FS_RIDB1";
				case 29:
					return "OREPHT_FS_RIDB2";
				case 30:
					return "OREPHT_FS_RIDB3";
				case 31:
					return "OREPHT_FS_FAIL1";
				case 32:
					return "OREPHT_FS_FAIL2";
				case 33:
					return "OREPHT_FS_FAIL3";
				case 72:
					return "OREPHT_FS_ANNOY";
				case 73:
					return "OREPHT_FS_ANPOS";
				case 74:
					return "OREPHT_FS_AGGRO";
				case 75:
					return "OREPHT_FS_AGGRO";
				case 76:
					return "OREPHT_FS_AGGRO";
				case 77:
					return "OREPHT_FS_AGGHR";
				case 78:
					return "OREPHT_FS_AGGHR";
				case 79:
					return "OREPHT_FS_HOGTD";
				case 80:
					return "OREPHT_FS_HOGTD";
				case 81:
					return "OREPHT_FS_HOGTD";
				case 82:
					return "OREPHT_FS_HOGUT";
				case 176:
					return "PLAYER_LOITERING";
				case 177:
					return "BLOCKED_GENERIC";
				case 178:
					return "INSULT_RESPONSE";
				case 179:
					return "GET_OUT";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_602(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

float func_603()
{
	switch (func_239())
	{
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 10f;
		case 6:
			return 10f;
		case 7:
			return 10f;
		default:
			break;
	}
	return 10f;
}

void func_604()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_24))
	{
		iVar0 = func_817(2);
		if (_network_is_player_index_valid(iVar0))
		{
			Local_13.f_7.f_24 = iVar0;
		}
	}
}

bool func_605(int iParam0, int iParam1)
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

bool func_606(int iParam0)
{
	iVar0 = func_188(iParam0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		return true;
	}
	if (func_753(0, func_508(0)) > 100f)
	{
		return true;
	}
	if (func_583(0, 100f, 0, 1) < 1)
	{
		return true;
	}
	return false;
}

bool func_607(int iParam0)
{
	return func_186(Local_947.f_19.f_252, iParam0);
}

bool func_608(int iParam0)
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_356(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return false;
	}
	return _0x1f0e401031e20146(Local_947.f_19.f_246, sVar0);
}

int func_609()
{
	if (func_582(512))
	{
		return 66;
	}
	if (func_582(1024))
	{
		return 67;
	}
	return 65;
}

bool func_610(float fParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_577(0, iVar0, 1) < fParam0)
			{
				if (func_496(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_496(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_611(float fParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_577(0, iVar0, 1) < fParam0)
			{
				if (func_477(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_477(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_612(int iParam0)
{
	func_588(&(Local_13.f_7.f_13));
	if (Local_13.f_7.f_1 != iParam0)
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_613()
{
	if (Local_13.f_7.f_22 != 255)
	{
		iVar1 = get_player_ped(Local_13.f_7.f_22);
		if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
		{
			iVar2 = network_get_participant_index(Local_13.f_7.f_22);
			if (func_526(iVar2, 1) && func_527(iVar2))
			{
				return true;
			}
			else
			{
				Local_13.f_7.f_22 = 255;
			}
		}
		else
		{
			Local_13.f_7.f_22 = 255;
		}
	}
	if (Local_13.f_7.f_22 == 255)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			if (network_is_participant_active(int_to_participantindex(iVar3)))
			{
				if (func_477(2048, iVar3))
				{
					if (func_527(iVar3))
					{
						iVar0 = network_get_player_index(int_to_participantindex(iVar3));
						if (_network_is_player_index_valid(iVar0))
						{
							iVar1 = get_player_ped(Local_13.f_7.f_22);
							if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
							{
								Local_13.f_7.f_22 = iVar0;
								return true;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	Local_13.f_7.f_22 = 255;
	return false;
}

bool func_614(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_526(iParam2, 0))
	{
		if (!func_227(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_82[iParam2]->f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_188(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_828(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_82[iParam2]->f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_615()
{
	if (func_582(512))
	{
		return 69;
	}
	if (func_582(1024))
	{
		return 70;
	}
	return 68;
}

char* func_616(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move";
		case 1:
			return "FRONT_BKN";
		case 2:
			return "FRONT_BKN";
		case 3:
			return "FRONT_CO";
		case 4:
			return "FRONT_CO";
		case 5:
			return "CALLOVER_N";
		case 6:
			return "CALLOVER_N";
		case 7:
			return "give_recieve_letter_plyr";
		case 8:
			return "give_recieve_letter_mp";
		case 9:
			return "intro";
		case 10:
			return "loop";
		case 11:
			return "outro";
		default:
			break;
	}
	return "";
}

void func_617(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_618(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_619(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_947.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar943)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_947.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_947.f_3)
	{
		return false;
	}
	return true;
}

void func_620(int iParam0)
{
	iVar3 = 255;
	bVar7 = false;
	switch (iParam0->f_9)
	{
		case 377515857:
			iVar0 = iParam0->f_11;
			iVar1 = func_188(iVar0);
			if (iParam0->f_12 == -1)
			{
				iVar4 = iVar1;
			}
			else
			{
				iVar6 = iParam0->f_12;
				switch (iVar6)
				{
					case 0:
						iVar3 = Local_13.f_7.f_20;
						break;
					case 1:
						iVar3 = Local_13.f_7.f_21;
						break;
					case 5:
						iVar4 = iVar1;
						break;
				}
				if (iVar4 == 0)
				{
					if (_network_is_player_index_valid(iVar3))
					{
						iVar2 = network_get_participant_index(iVar3);
						if (network_is_participant_active(iVar2))
						{
							iVar4 = get_player_ped(iVar3);
						}
						else
						{
							iVar4 = iVar1;
						}
					}
					else
					{
						iVar4 = iVar1;
					}
				}
			}
			iVar5 = iParam0->f_13;
			if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
			{
				if (iParam0->f_12 == -1)
				{
				}
				if (iParam0->f_14 != -1)
				{
					bVar7 = true;
				}
				if (func_829(iVar1, iVar4, iVar5, 0, bVar7))
				{
					if (func_830(iVar5))
					{
						func_831(1891783641, iVar1, 1);
					}
					Local_947.f_19.f_152 = iVar0;
					Local_947.f_19.f_153 = iVar5;
					if (network_is_host_of_this_script())
					{
						func_580(32);
					}
				}
			}
			break;
	}
}

int func_621(int iParam0)
{
	return Local_947.f_274.f_7[iParam0]->f_3;
}

bool func_622(int iParam0)
{
	return func_556(0, iParam0);
}

bool func_623(int iParam0)
{
	return func_557(0, iParam0);
}

void func_624(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_621(iParam0);
	bVar3 = func_526(iParam1, 1);
	if (!is_bit_set(Local_947.f_274.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_38[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_38[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_947.f_274.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_82[iParam1]->f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_82[iParam1]->f_4.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_549(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_38[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_38[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_38[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_832(iVar1, 1f, 0);
					sVar0 = func_833(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_834(iVar1, sVar0, 1);
					}
				}
				if (func_809(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_810(iParam0))
					{
						if (func_809(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_947.f_274.f_5), iParam0);
				if (bParam2)
				{
					func_835(iParam0);
				}
			}
		}
	}
}

void func_625(var uParam0, int iParam1, int iParam2)
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

int func_626()
{
	iVar0 = func_239();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

bool func_627(var uParam0, int iParam1, char* sParam2)
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

int func_628()
{
	iVar0 = func_239();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

void func_629(int iParam0, int iParam1)
{
	func_248(&(Local_947.f_578[iParam0]->f_5), iParam1);
}

void func_630(var uParam0, int iParam1, int iParam2)
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

int func_631(int iParam0)
{
	return iParam0;
}

bool func_632(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_188(iParam0);
	if (does_entity_exist(*uParam1))
	{
		uParam1->f_2 = func_577(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_633(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_634(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0]->f_10), 0, iParam0);
}

struct<2> func_635(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_836(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_837(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_636()
{
	Local_947.f_274.f_6 = 0;
	Local_947.f_274.f_2 = 0;
	Local_947.f_274.f_1 = -1;
}

void func_637()
{
	func_231(&(Local_947.f_406.f_78), 2, 0);
	func_231(&(Local_947.f_406.f_78), 1, 0);
	func_231(&(Local_947.f_406.f_78), 4, 0);
	func_231(&(Local_947.f_406.f_78), 5, 0);
	func_231(&(Local_947.f_406.f_78), 8, -1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_0xde544b7ec0c187cc(Local_947.f_406.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_947.f_406.f_74[iVar0]);
		_0xde544b7ec0c187cc(Local_947.f_406.f_70[iVar0]);
		func_838(iVar0);
		iVar0++;
	}
}

void func_638()
{
	iVar1 = 0;
	iVar2 = func_839(0, 0);
	if (!does_entity_exist(iVar2) || !is_entity_a_ped(iVar2))
	{
		func_840();
	}
	else
	{
		iVar1 = get_ped_index_from_entity_index(iVar2);
	}
	bVar3 = false;
	Local_947.f_578.f_118 = 0;
	Local_947.f_578.f_119 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!bVar3 && does_entity_exist(iVar1))
		{
			if (func_841(func_180(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_840();
	}
}

void func_639(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_947.f_274.f_2 = (Local_947.f_274.f_2 || Local_82[iParam0]->f_4);
		Local_947.f_274.f_1 = (Local_947.f_274.f_1 && Local_82[iParam0]->f_4);
		Local_947.f_274.f_6 = (Local_947.f_274.f_6 || Local_82[iParam0]->f_4.f_1);
	}
}

void func_640(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 2);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 1);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 4);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 5);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 6);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 7);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 0);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 3);
		func_843(&(Local_947.f_406.f_78), &(Local_82[iParam0]->f_10), 8);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			_0xffddf802279be128(Local_82[iParam0]->f_10.f_5[iVar0], Local_947.f_406.f_66[iVar0], Local_947.f_406.f_66[iVar0]);
			_0xffddf802279be128(Local_82[iParam0]->f_10.f_5[iVar0], Local_947.f_406.f_66[iVar0], Local_947.f_406.f_70[iVar0]);
			_0xe4abe20dce7c7cfe(Local_82[iParam0]->f_10.f_5[iVar0], Local_947.f_406.f_66[iVar0], Local_947.f_406.f_74[iVar0]);
			func_844(func_631(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_641(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_82[iParam2]->f_23 = (Local_82[iParam2]->f_23 || Local_82[iParam0]->f_23);
	}
}

void func_642(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_947.f_578.f_118 = (Local_947.f_578.f_118 || Local_82[iParam0]->f_24.f_2);
	Local_947.f_578.f_119 = (Local_947.f_578.f_119 && Local_82[iParam0]->f_24.f_2);
	func_845(iParam0);
}

int func_643(int iParam0)
{
	return iParam0;
}

int func_644(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_82[iParam3]->f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_947.f_274.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_645(var uParam0)
{
	func_846(uParam0, 0f);
}

bool func_646(var uParam0)
{
	return func_847(*uParam0, 1);
}

bool func_647(var uParam0, float fParam1)
{
	if (!func_646(uParam0))
	{
		return false;
	}
	if (func_848(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_648(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_649(int iParam0)
{
	return true;
}

void func_650(int iParam0, int iParam1)
{
	func_347(&(Local_947.f_274.f_7[iParam0]->f_2), iParam1);
}

bool func_651(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_82[iParam1]->f_4, iParam0);
}

void func_652(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0]->f_4), iParam0);
}

void func_653(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0]->f_4), iParam0);
}

void func_654()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_227(&iVar15))
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
		iVar14 = func_631(iVar0);
		if (!func_655(iVar14))
		{
		}
		else if (!func_656(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_947.f_406.f_65), iVar14);
			}
			if (func_672(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_849(iVar14);
				func_850(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_655(int iParam0)
{
	return !func_658(&(Local_947.f_406.f_78), 5, iParam0);
}

bool func_656(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_947.f_406.f_122, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_947.f_406.f_82[iParam0];
	uParam1->f_1 = Local_947.f_406.f_82[iParam0]->f_1;
	uParam1->f_2 = Local_947.f_406.f_82[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_657(var uParam0, int iParam1)
{
	if (!func_851(iParam1))
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
	if (func_852(*uParam0, &(Local_947.f_406.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_658(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_540(iParam1, &Var0))
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

int func_659(var uParam0, int iParam1, int iParam2)
{
	if (!func_540(iParam1, &Var0))
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

int func_660(var uParam0, int iParam1, int iParam2)
{
	if (!func_540(iParam1, &Var0))
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

void func_661(int iParam0)
{
}

bool func_662(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 4, iParam0);
}

bool func_663(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return false;
	}
	return func_658(&(Local_82[iVar0]->f_10), 4, iParam0);
}

bool func_664(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_947.f_406.f_70[iParam0]);
}

void func_665(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_659(&(Local_82[iVar0]->f_10), 4, iParam0);
}

bool func_666(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_82[iVar0]->f_10.f_5[iParam0]);
}

void func_667(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_82[iVar0]->f_10.f_5[iParam0]);
}

bool func_668(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 6, iParam0);
}

bool func_669(int iParam0)
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

bool func_670(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_658(&(Local_82[iParam1]->f_10), 1, iParam0);
}

bool func_671(int iParam0)
{
	if (!func_527(255))
	{
		return false;
	}
	if (func_477(67108864, 255))
	{
		return true;
	}
	if (func_477(134217728, 255))
	{
		func_478(1048576);
		return true;
	}
	if (func_496(134217728, 255))
	{
		if (func_595(Local_947.f_19.f_159, 500))
		{
			func_504(134217728);
		}
	}
	iVar0 = func_188(iParam0);
	switch (func_853(iParam0))
	{
		case 0:
			iVar1 = _0xef2d9ed7ce684f08(iVar0);
			if (does_entity_exist(iVar1))
			{
				if (iVar1 == player_ped_id())
				{
					func_478(67108864);
				}
			}
			if (!func_598(8192))
			{
				if (_0x833f0053340ef413(iVar0))
				{
					vVar2 = { get_entity_coords(iVar0, true, false) };
					if (Global_1940258->f_40 == 1151374672)
					{
						if (is_projectile_type_within_distance(vVar2, 1151374672, 2f, true))
						{
							func_478(67108864);
						}
					}
				}
			}
			break;
		case 1:
			if (((does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true)) && _0xefc4303ddc6e60d3(player_ped_id())) && _0xed1f514af4732258(player_ped_id()) == iVar0)
			{
				func_478(134217728);
			}
			break;
	}
	return false;
}

bool func_672(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	if (!func_854(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_658(&(Local_82[iParam1]->f_10), 3, iParam0);
}

bool func_673(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_855(uParam2, 1, iVar0);
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
			if (func_856(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_858(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_859(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_860(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_861(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_862(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_863(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_864(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_865(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_865(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_866(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_867(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_868(uParam2, 4000))
				{
					if ((func_869(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_870(uParam2, iParam0)) && func_871(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_869(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_870(uParam2, iParam0)) && func_871(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_872(iParam0, Global_1940258->f_35))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_874(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_875() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_876())
				{
					if (func_872(iParam0, Global_1940258->f_36))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_877(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_878(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_857(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_879(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_880(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_881(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_882(uParam2, 4000))
				{
					if (func_883(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_884(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_885(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_674(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_886(iParam0, vVar0, iParam2);
}

bool func_675(int iParam0, int iParam1, int iParam2)
{
	if (!func_887(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_888(&iVar4, iParam1->f_12);
	func_890(&(Local_947.f_274.f_7[iParam0]), &uVar0, iParam1->f_3, func_889(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_891(&iVar4, &uVar0);
}

bool func_676(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return false;
	}
	return func_658(&(Local_82[iVar0]->f_10), 0, iParam0);
}

bool func_677(int iParam0, int iParam1)
{
	if (is_bit_set(Local_947.f_406.f_64, iParam0))
	{
		return false;
	}
	if (func_186(Local_947.f_406.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_892(&(Local_947.f_406))))
	{
		return false;
	}
	return true;
}

bool func_678(int iParam0, int iParam1, int iParam2)
{
	if (!func_677(iParam0, iParam1))
	{
		return false;
	}
	if (Local_82[iParam2]->f_10.f_4 != 0 && get_time_difference(Local_82[iParam2]->f_10.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_679(int iParam0, int iParam1, int iParam2)
{
	if (!func_189())
	{
		func_714();
	}
	if (func_477(67108864, 255) || func_477(134217728, 255))
	{
		if (!func_571())
		{
			func_893(0);
		}
		return true;
	}
	switch (func_853(iParam0))
	{
		case 0:
			switch (func_239())
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (func_503(64))
					{
						if ((!func_503(128) || Local_947.f_19.f_159 == 0) || get_time_difference(Local_947.f_19.f_159, get_network_time_accurate()) <= 3000)
						{
							if (func_503(128))
							{
								if (Local_947.f_19.f_159 == 0)
								{
									Local_947.f_19.f_159 = get_network_time_accurate();
								}
							}
							if (!func_894(iParam1, 0, 0, 0, 0))
							{
								return false;
							}
						}
					}
					else if ((func_503(16) || func_503(32)) || func_496(2048, 255))
					{
						if (Local_947.f_19.f_159 == 0 || get_time_difference(Local_947.f_19.f_159, get_network_time_accurate()) <= 3000)
						{
							if (Local_947.f_19.f_159 == 0)
							{
								Local_947.f_19.f_159 = get_network_time_accurate();
							}
							if (!func_894(iParam1, 0, 1, 0, 0) || iParam1 == 256)
							{
								return false;
							}
						}
					}
					break;
				case 10:
					if (iParam1 == 8)
					{
						if (_0xcb690f680a3ea971(player_ped_id(), 4))
						{
							func_573(134217728);
						}
						else
						{
							func_504(134217728);
						}
					}
					if (func_598(4096))
					{
						Local_947.f_19.f_159 = get_network_time_accurate();
					}
					if ((!func_598(4096) || Local_947.f_19.f_159 == 0) || get_time_difference(Local_947.f_19.f_159, get_network_time_accurate()) <= 3000)
					{
						if (!func_894(iParam1, 1, 0, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 11:
					if (func_598(8192))
					{
						Local_947.f_19.f_159 = get_network_time_accurate();
					}
					if ((!func_598(8192) || Local_947.f_19.f_159 == 0) || get_time_difference(Local_947.f_19.f_159, get_network_time_accurate()) <= 3000)
					{
						if (func_598(8192))
						{
							switch (iParam1)
							{
								case 2:
								case 4:
								case 8:
									if (get_current_ped_weapon(player_ped_id(), &iVar0, false, 0, false))
									{
										if ((iVar0 == 2055893578 || iVar0 == -680302000) || iVar0 == 1151374672)
										{
											return false;
										}
									}
									break;
							}
						}
						if (!func_894(iParam1, 1, 1, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 2:
					if (func_496(2, 255))
					{
						if (iParam1 == 1024)
						{
							return false;
						}
					}
					break;
			}
			if (iParam1 == 1024)
			{
				func_497(1250422342, 0, 0);
				func_478(1048576);
			}
			break;
		case 2:
			if (func_496(64, 255))
			{
				return false;
			}
			break;
		case 1:
			if (!func_894(iParam1, 0, 0, 0, 0))
			{
				return false;
			}
			func_478(1048576);
			break;
	}
	if (!func_571())
	{
		func_893(0);
	}
	return true;
}

void func_680(int iParam0, bool bParam1)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0]->f_10), 1, iParam0);
	if (bParam1)
	{
		Local_82[iVar0]->f_10.f_9[iParam0] = get_network_time_accurate();
	}
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_658(&(Local_82[iParam1]->f_10), 2, iParam0);
}

bool func_682(int iParam0)
{
	return true;
}

void func_683(int iParam0)
{
}

void func_684(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0]->f_10), 2, iParam0);
}

bool func_685(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_947.f_406.f_74[iParam0], &uVar0);
	return !_0x179a6f0ee2e79026(&uVar0);
}

bool func_686(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_687(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return _0x72b2e00c9bac6789(Local_947.f_406.f_66[iParam0], iParam1);
}

bool func_688(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_689(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_227(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_82[iVar0]->f_10.f_5[iParam0], iParam1);
}

float func_690()
{
	if (Local_947.f_537.f_3 == 0)
	{
		Local_947.f_537.f_3 = get_game_timer();
		return 0.03125f;
	}
	iVar0 = get_game_timer();
	fVar1 = (to_float((iVar0 - Local_947.f_537.f_3)) * 0.001f);
	Local_947.f_537.f_3 = iVar0;
	return fVar1;
}

bool func_691(int iParam0, bool bParam1)
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

bool func_692(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_895(vVar0, vParam0) > func_895(vVar0, get_entity_coords(iParam3, true, false));
}

int func_693(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_896(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_897(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_898() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_694(var uParam0, int iParam1, float fParam2)
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
	func_179(uParam0);
	return true;
}

void func_695(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_483(iParam2);
	if (!does_entity_exist(iVar0))
	{
		if (func_899(iParam2))
		{
			func_484(iParam2, 0);
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
		func_229(iParam2, *uParam0);
		func_900(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_901(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_482(iParam2, 1))
			{
				return;
			}
			if (func_795(iParam2))
			{
				if (!func_899(iParam2))
				{
					func_902(iParam2);
				}
				if (func_482(iParam2, 16))
				{
					disable_control_action(0, -1292666904, false);
					disable_control_action(0, 578288361, false);
				}
				bVar3 = is_bit_set(Local_82[iVar1]->f_24, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_903(iParam2, iVar2, 16))
					{
						func_904(iParam2, iVar2, 1);
					}
					bVar4 = (func_903(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_903(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_903(iParam2, iVar2, 4))
						{
							if (func_905() < Local_947.f_578[iParam2]->f_6[iVar2]->f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_797(iParam2, iVar2, 8);
					}
					if (!func_778(&(Local_947.f_578[iParam2]->f_6[iVar2])))
					{
					}
					else if (func_906(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0))
					{
						if (bVar6)
						{
							func_798(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0, 1, 1);
						}
						else
						{
							if (!func_227(&iVar1))
							{
							}
							else
							{
								if (func_907(&(Local_947.f_578[iParam2]->f_6[iVar2]), 1))
								{
									if (!func_908(iParam2, iVar2, func_228(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										set_bit(&(Local_82[iVar1]->f_24), iParam2);
										func_122(&(Local_82[iVar1]->f_24.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_798(&(Local_947.f_578[iParam2]->f_6[iVar2]), 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_899(iParam2))
							{
								func_484(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_778(&(Local_947.f_578[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_906(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0))
								{
									func_798(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (!is_bit_set(Local_82[iVar1]->f_24.f_2, iParam2))
							{
								func_909(iParam2, func_815(Local_13.f_58.f_10, iParam2));
								set_bit(&(Local_82[iVar1]->f_24.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_778(&(Local_947.f_578[iParam2]->f_6[iVar2])))
								{
								}
								else if (func_906(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0))
								{
									func_798(&(Local_947.f_578[iParam2]->f_6[iVar2]), 0, 1, 1);
								}
								iVar2++;
							}
							if (is_bit_set(Local_82[iVar1]->f_24.f_2, iParam2))
							{
								clear_bit(&(Local_82[iVar1]->f_24.f_2), iParam2);
								clear_bit(&(Local_82[iVar1]->f_24), iParam2);
								func_122(&(Local_82[iVar1]->f_24.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_696()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_697(int iParam0)
{
	if (func_910(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

char* func_698()
{
	iVar0 = func_239();
	iVar1 = func_243();
	switch (iVar1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 1:
			switch (iVar0)
			{
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 8:
					return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
				case 10:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 9:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 11:
					return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			switch (iVar0)
			{
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
	}
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
		case 1:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 8:
			return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
		case 10:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 9:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 11:
			return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
	}
	return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
}

var func_699(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_700()
{
	iVar0 = func_243();
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_REWARD_TS";
		case 1:
			return "NB_PHOTOGRAPHY_H_REWARD_FS";
		case 2:
			if (func_570())
			{
				return "NB_PHOTOGRAPHY_H_REWARD_ANIMAL_DS";
			}
			else
			{
				return "NB_PHOTOGRAPHY_H_REWARD_HORSE_DS";
			}
			break;
	}
	return "NB_PHOTOGRAPHY_H_REWARD_TS";
}

char* func_701(int iParam0)
{
	iVar0 = func_239();
	iVar1 = func_243();
	iVar2 = network_get_player_index(participant_id());
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_570())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_TS";
					}
					else if (iVar0 == 0)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_CLIFF_TS";
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 8388608:
					return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_FS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_FS";
				case 268435456:
					return "NB_PHOTOGRAPHY_H_HOGTIE";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_713())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
					}
					else if (iVar0 == 8)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_FISH_FS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_FS";
					}
					break;
				case 67108864:
					if ((_network_is_player_index_valid(iVar2) && _network_is_player_index_valid(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GATHER_CAMERAMAN";
					}
					else
					{
						return "NB_PHOTOGRAPHY_H_GATHER";
					}
					break;
				case 134217728:
					if ((_network_is_player_index_valid(iVar2) && _network_is_player_index_valid(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GUNS_CAMERAMAN";
					}
					else if (iVar0 == 9)
					{
						return "NB_PHOTOGRAPHY_H_GUNSUP";
					}
					else if (iVar0 == 10)
					{
						return "NB_PHOTOGRAPHY_H_GUNSAIMED";
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_DS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_DS";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_570())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_DS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_DS";
					}
					break;
			}
			break;
	}
	return "";
}

int func_702(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (!does_entity_exist(&(Local_947.f_274.f_7[iParam0])))
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
		else if (&Local_82[iVar0]->f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_527(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_82[iVar0]->f_4.f_2[iParam0] > &Local_82[iVar1]->f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_82[iVar0]->f_4.f_2[iParam0] > fParam1)
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

int func_703()
{
	switch (func_239())
	{
		case 5:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 99;
}

int func_704()
{
	switch (func_239())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 4;
}

int func_705()
{
	switch (func_239())
	{
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		default:
			break;
	}
	return 4;
}

int func_706(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_702(iParam0, fParam1, bParam2, bParam3);
	if (_network_is_player_index_valid(iVar0))
	{
		return network_get_participant_index(iVar0);
	}
	return 255;
}

float func_707(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!network_is_participant_active(iParam0))
		{
			return 0f;
		}
	}
	return &(Local_82[iParam0]->f_4.f_2[iParam1]);
}

int func_708(float fParam0)
{
	if (fParam0 < func_603())
	{
		return 4;
	}
	if (fParam0 < func_911())
	{
		return 2;
	}
	if (fParam0 < func_912())
	{
		return 1;
	}
	return 0;
}

bool func_709()
{
	return func_913(1);
}

bool func_710(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_711(int iParam0)
{
	iVar0 = player_ped_id();
	vVar1 = { get_final_rendered_cam_coord() };
	vVar4 = { get_entity_coords(iParam0, true, false) };
	fVar7 = func_914((func_577(0, 255, 1) * 0.95f), 0f, 20f);
	vVar8 = { func_565(vVar4 - vVar1) };
	vVar11 = { vVar1 + vVar8 * Vector(fVar7, fVar7, fVar7) / Vector(2f, 2f, 2f) };
	vVar14 = { func_915(vVar8, 0f, 0f, 1f) };
	if (!_does_volume_exist(Local_947.f_19.f_254))
	{
		Local_947.f_19.f_254 = _create_volume_box_with_custom_name(vVar11, vVar14, fVar7, 1f, 2f, "PHOTO_CAM_VOL");
	}
	_0x541b8576615c33de(Local_947.f_19.f_254, vVar11);
	_0xa07cf1b21b56f041(Local_947.f_19.f_254, vVar14);
	_0xa46e98bdc407e23d(Local_947.f_19.f_254, fVar7, 1f, 1.75f);
	if (!func_530(32, 255))
	{
		request_ped_visibility_tracking(iParam0);
		func_718(32);
	}
	if (_0x5102307ce88798eb(iParam0))
	{
		if (!_0x164cecc59e70df86(iParam0, 0.75f))
		{
			return true;
		}
		if (!is_tracked_ped_visible(iParam0))
		{
			return true;
		}
	}
	if (is_entity_occluded(iParam0))
	{
		return true;
	}
	iVar17 = create_itemset(true);
	iVar18 = _0x886171a12f400b89(Local_947.f_19.f_254, iVar17, 1);
	iVar21 = func_239();
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		iVar20 = _get_entity_from_item(get_indexed_item_in_itemset(iVar19, iVar17));
		if (does_entity_exist(iVar20))
		{
			if (is_entity_a_ped(iVar20))
			{
				iVar22 = get_ped_index_from_entity_index(iVar20);
				if ((!func_712() || iVar22 != iVar0) && iVar22 != iParam0)
				{
					iVar23 = get_mount(iParam0);
					if (iVar23 == 0 || iVar23 != iVar22)
					{
						if (iVar21 == 8)
						{
							iVar24 = func_188(2);
						}
						if (iVar24 == 0 || iVar24 != iVar22)
						{
							_0x20a4bf0e09bee146(iVar17);
							destroy_itemset(iVar17);
							return true;
						}
					}
				}
			}
		}
		iVar19++;
	}
	_0x20a4bf0e09bee146(iVar17);
	destroy_itemset(iVar17);
	return false;
}

bool func_712()
{
	return &Global_1958006;
}

bool func_713()
{
	switch (func_239())
	{
		case 9:
		case 10:
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

void func_714()
{
	if (!func_134(32, 255))
	{
		func_916(Local_947.f_1, Local_947.f_3);
		if (!func_134(1024, 255))
		{
			func_917(Local_947.f_1);
			func_151(1024);
		}
		iVar0 = func_489(Local_947.f_1, Local_947.f_2);
		func_918(iVar0);
		func_919(iVar0);
		func_149(2);
		func_920(Local_947.f_9);
		func_921(Local_947.f_1);
		func_922(Local_947.f_1, Local_947.f_2, Local_947.f_3);
		func_151(32);
	}
}

void func_715(int iParam0)
{
	if (!does_blip_exist(&(Local_947.f_19.f_3[iParam0])))
	{
		return;
	}
	remove_blip(Local_947.f_19.f_3[iParam0]);
}

void func_716(float fParam0)
{
	if (!func_527(255))
	{
		func_715(0);
		return;
	}
	iVar0 = get_player_ped(player_id());
	fVar1 = vdist(get_entity_coords(iVar0, true, false), func_508(0));
	if (fVar1 < fParam0)
	{
		func_923(0, 0);
	}
	else
	{
		func_715(0);
	}
}

void func_717(var uParam0)
{
	*uParam0 = get_network_time_accurate();
}

void func_718(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0]->f_1.f_2), iParam0);
}

void func_719(int iParam0)
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_20))
	{
		return;
	}
	func_924(Local_13.f_7.f_20, iParam0);
}

void func_720(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0]->f_1.f_2), iParam0);
}

void func_721()
{
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		return;
	}
	if (func_506(iVar0, 993674639, 1, 0))
	{
		iVar1 = func_358(0);
		sVar2 = func_925(0);
		if (iVar1 != 0)
		{
			if (is_string_null_or_empty(sVar2))
			{
				_task_start_scenario_in_place(iVar0, iVar1, 0, false, 0, -1f, false);
			}
			else
			{
				_task_start_scenario_in_place(iVar0, iVar1, 0, false, get_hash_key(sVar2), -1f, false);
			}
		}
	}
}

void func_722()
{
	if (func_477(524288, 255) && !func_595(Local_13.f_7.f_11, Local_13.f_7.f_16))
	{
		func_510(524288);
	}
}

int func_723()
{
	return 6;
}

void func_724(int iParam0)
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_20))
	{
		return;
	}
	func_926(Local_13.f_7.f_20, iParam0);
}

bool func_725(int iParam0, int iParam1)
{
	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_927(iVar0, iParam0);
}

bool func_726(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_928(iParam1);
	return func_927(iVar0, iParam0);
}

bool func_727(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return false;
	}
	return func_927(iParam1, iParam0);
}

int func_728()
{
	return 2;
}

int func_729()
{
	return 4;
}

void func_730()
{
	if (func_733())
	{
		if ((func_602(func_601(56)) || func_602(func_601(57))) || func_602(func_601(58)))
		{
			return;
		}
		func_575(1, 0, 0);
		if (!func_587(56))
		{
			func_591(0, 0, 56, 0);
		}
		else if (!func_587(57))
		{
			func_591(0, 0, 57, 0);
		}
		else if (!func_587(58))
		{
			func_591(0, 0, 58, 0);
		}
	}
}

void func_731()
{
	if (!func_590(1))
	{
		if (!func_587(59))
		{
			if (func_595(Local_13.f_7.f_9, 5000))
			{
				func_591(0, 0, 59, 0);
			}
		}
	}
}

void func_732()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_21))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_21, 100);
}

bool func_733()
{
	if (func_577(0, 255, 1) > 50f)
	{
		return false;
	}
	iVar0 = get_player_ped(player_id());
	if (does_entity_exist(iVar0))
	{
		if ((decor_exist_on(iVar0, "camera_takingPic") && decor_get_bool(iVar0, "camera_takingPic")) || func_503(1073741824))
		{
			return true;
		}
	}
	return false;
}

void func_734()
{
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		func_478(256);
		return;
	}
	iVar1 = get_mount(iVar0);
	iVar2 = get_player_ped(player_id());
	iVar19 = 255;
	if (func_711(iVar0))
	{
		iVar8 -= 5;
	}
	else
	{
		iVar8 = (iVar8 + func_929(iVar0));
	}
	if (func_930(iVar0, iVar2, 0))
	{
		iVar8++;
	}
	vVar4 = { get_entity_coords(iVar2, true, false) };
	if (func_931(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else if (func_932(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else
	{
		iVar9++;
	}
	iVar20 = func_239();
	switch (iVar20)
	{
		case 0:
			vVar4 = { func_370(1) };
			fVar7 = vdist(vVar4, get_entity_coords(iVar0, false, false));
			if (fVar7 < 2f)
			{
				iVar10 += 3;
			}
			else if (fVar7 < 4f)
			{
				iVar10 += 2;
			}
			else
			{
				iVar10 = iVar10;
			}
			break;
		case 1:
		case 2:
			iVar11 = (iVar11 + func_929(iVar1));
			if (func_930(iVar1, iVar2, 0))
			{
				iVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar3 = func_188(2);
			iVar12 = (iVar12 + func_929(iVar3));
			if (func_930(iVar3, iVar2, 0))
			{
				iVar12++;
			}
			if (Local_13.f_7.f_18 >= func_933())
			{
				iVar12 += 3;
			}
			else if (Local_13.f_7.f_18 >= func_934())
			{
				iVar12 += 2;
			}
			else
			{
				iVar12 = iVar12;
			}
			break;
		case 8:
			iVar3 = func_188(2);
			iVar12 = (iVar12 + func_929(iVar3));
			break;
		case 9:
		case 10:
		case 11:
			uVar15 = func_935(get_entity_coords(iVar0, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
			iVar16 = count_player_bits(&uVar15);
			if (iVar16 == 0)
			{
				iVar13 = -10;
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 32)
				{
					if (_0x72b2e00c9bac6789(&uVar15, iVar17))
					{
						iVar19 = int_to_playerindex(iVar17);
						iVar18 = get_player_ped(iVar19);
						if (!is_entity_dead(iVar18))
						{
							iVar13 = (iVar13 + func_929(iVar18));
							switch (iVar20)
							{
								case 9:
									if (!_0xcb690f680a3ea971(iVar18, 4) || (!is_player_free_aiming(iVar19) && !_0x8e7ce19219669aeb(iVar19)))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 10:
									if (!func_496(134217728, iVar17) && (!_0xcb690f680a3ea971(iVar18, 4) || (!is_player_targetting_entity(iVar19, iVar0, false) && !is_player_free_aiming_at_entity(iVar19, iVar0))))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 11:
									if (_is_ped_hogtied(iVar0))
									{
										iVar13++;
									}
									else
									{
										iVar13 = -10;
									}
									if (func_930(iVar18, iVar2, 0))
									{
										iVar13++;
									}
									break;
							}
						}
					}
					iVar17++;
				}
			}
			break;
	}
	iVar14 = (iVar14 + (((((iVar8 + iVar9) + iVar10) + iVar11) + iVar12) + iVar13));
	iVar21 = 7;
	iVar22 = 4;
	switch (iVar20)
	{
		case 0:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 1:
		case 2:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar21 = 9;
			iVar22 = 6;
			break;
		case 8:
			iVar21 = 6;
			iVar22 = 4;
			break;
		case 9:
		case 10:
		case 11:
			iVar21 = 7;
			iVar22 = 4;
			break;
	}
	if (!func_477(2048, 255))
	{
		if (iVar14 >= iVar21)
		{
			func_478(1024);
			func_510(512);
			func_510(256);
		}
		else if (iVar14 >= iVar22)
		{
			func_478(512);
			func_510(1024);
			func_510(256);
		}
		else
		{
			func_478(256);
			func_510(1024);
			func_510(512);
		}
	}
}

void func_735()
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	iVar0 = func_239();
	iVar1 = func_188(0);
	if (!does_entity_exist(iVar1) || is_ped_dead_or_dying(iVar1, true))
	{
		return;
	}
	if (iVar0 == 11)
	{
		if (_is_ped_lassoed(iVar1) && !_is_ped_hogtied(iVar1))
		{
			func_584(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
			return;
		}
		iVar2 = _0x61914209c36efddb(iVar1);
		switch (iVar2)
		{
			case 4:
			case 5:
			case 7:
			case 8:
				func_584(0, 65f, 5000, 0, 165, 166, 167, -1, -1, -1, 0, -1);
				if (func_587(167))
				{
					if (Local_13.f_7.f_14 == 0)
					{
						func_588(&(Local_13.f_7.f_14));
					}
				}
				return;
			default:
				break;
		}
	}
	if (Local_13.f_7.f_14 != 0)
	{
		Local_13.f_7.f_17 = (Local_13.f_7.f_17 + get_time_difference(Local_13.f_7.f_14, get_network_time_accurate()));
		Local_13.f_7.f_14 = 0;
	}
	if (func_570())
	{
		if (func_936())
		{
			return;
		}
	}
	Local_13.f_7.f_6 = func_935(get_entity_coords(iVar1, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
	iVar3 = count_player_bits(&(Local_13.f_7.f_6));
	Local_13.f_7.f_7 = func_935(get_entity_coords(iVar1, false, false), 0f, 0f, 0f, 30f, 30f, 30f, -432403087, 0, 8);
	iVar4 = count_player_bits(&(Local_13.f_7.f_7));
	if (func_713())
	{
		if (iVar3 < 1)
		{
			func_579(32768);
			if (iVar4 > 2)
			{
				func_584(0, 65f, 5000, 1, 140, 141, 142, -1, -1, -1, 0, 143);
				return;
			}
			else
			{
				func_584(0, 65f, 5000, 1, 137, 138, 139, -1, -1, -1, 0, 143);
				return;
			}
		}
	}
	func_580(32768);
	if (iVar0 == 10 || iVar0 == 9)
	{
		bVar6 = false;
		iVar8 = 255;
		iVar5 = 0;
		while (iVar5 < 32)
		{
			if (_0x72b2e00c9bac6789(&(Local_13.f_7.f_6), iVar5))
			{
				iVar8 = int_to_playerindex(iVar5);
				iVar7 = get_player_ped(iVar8);
				if (!is_entity_dead(iVar7) && Local_13.f_7.f_21 != iVar8)
				{
					switch (iVar0)
					{
						case 9:
							if (_0xcb690f680a3ea971(iVar7, 4) && ((is_player_free_aiming(iVar8) || _0x8e7ce19219669aeb(iVar8)) || _0x8785e6e40c7a8819(iVar7)))
							{
								bVar6 = true;
							}
							else
							{
								Jump @687; //curOff = 620
								if (func_496(134217728, iVar5) || (_0xcb690f680a3ea971(iVar7, 4) && (is_player_targetting_entity(iVar8, iVar1, false) || is_player_free_aiming_at_entity(iVar8, iVar1))))
								{
									bVar6 = true;
								}
								else
								{
									iVar5++;
								}
							}
							if (!bVar6)
							{
								func_579(65536);
								switch (iVar0)
								{
									case 9:
										func_584(0, 65f, 5000, 0, 147, 148, 149, -1, -1, -1, 0, 153);
										break;
									case 10:
										func_584(0, 65f, 5000, 0, 150, 151, 152, -1, -1, -1, 0, 153);
										break;
								}
								return;
							}
							func_742(iVar1);
							func_580(65536);
							if (iVar0 == 11)
							{
								if (!_is_ped_hogtied(iVar1))
								{
									func_584(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
									return;
								}
								func_742(iVar1);
							}
							if (!func_598(16))
							{
								if ((iVar0 == 10 || iVar0 == 9) || iVar0 == 11)
								{
									func_584(0, 65f, 5000, 0, 144, 145, 146, -1, -1, -1, 0, 39);
								}
								else
								{
									func_584(0, 65f, 5000, 0, 36, 37, 38, -1, -1, -1, 0, 39);
								}
								return;
							}
							iVar9 = get_player_ped(Local_13.f_7.f_21);
							if (iVar9 == 0)
							{
								return;
							}
							vVar10 = { get_entity_coords(iVar9, false, false) };
							if (func_931(vVar10))
							{
								func_584(0, 65f, 5000, 1, 52, 53, 54, -1, -1, -1, 0, 55);
								return;
							}
							else if (func_932(vVar10))
							{
								func_584(0, 65f, 5000, 1, 40, 41, 42, -1, -1, -1, 0, 43);
								return;
							}
							if (!func_582(32768))
							{
								func_584(0, 65f, 5000, 1, 44, 45, 46, -1, -1, -1, 0, 47);
								return;
							}
							if (func_713())
							{
								if (!func_582(262144))
								{
									func_584(0, 65f, 5000, 1, 161, 162, 163, -1, -1, -1, 0, 164);
									return;
								}
								else if (!func_582(131072))
								{
									func_584(0, 65f, 5000, 1, 158, 159, 160, -1, -1, -1, 0, 164);
									return;
								}
							}
							if ((func_570() || iVar0 == 1) || iVar0 == 8)
							{
								if (!func_582(65536))
								{
									iVar13 = 48;
									switch (iVar0)
									{
										case 3:
											iVar13 = 89;
											break;
										case 4:
											iVar13 = 90;
											break;
										case 5:
											iVar13 = 91;
											break;
										case 6:
											iVar13 = 92;
											break;
										case 7:
											iVar13 = 93;
											break;
									}
									func_584(0, 65f, 5000, 1, iVar13, 48, 49, 50, -1, -1, 0, 51);
									return;
								}
							}
							func_584(0, 65f, 5000, 1, 62, 63, 64, 17, 18, 19, 0, 20);
							default:
								break;
					}
				}
			}
		}
	}
}

bool func_736(int iParam0)
{
	vVar3 = { func_370(1) };
	vVar6 = { func_370(0) };
	if (func_570())
	{
		vVar3 = { func_508(2) };
		vVar6 = { func_370(3) };
	}
	else if (func_239() == 9)
	{
		vVar3 = { func_370(5) };
		vVar6 = { func_370(6) };
	}
	vVar0 = { func_565(vVar6 - vVar3) * Vector(10f, 10f, 10f) + vVar6 };
	if (!func_937(iParam0, vVar0, 0.95f))
	{
		if (func_506(iParam0, 1464580341, 1, 0))
		{
			task_turn_ped_to_face_coord(iParam0, vVar0, -1);
		}
	}
	else
	{
		if (func_239() != 9)
		{
			if (Local_13.f_7.f_19 != -1)
			{
				if (func_506(iParam0, 993674639, 1, 0))
				{
					func_737();
				}
			}
		}
		return true;
	}
	return false;
}

void func_737()
{
	if (Local_13.f_7.f_19 == -1)
	{
		return;
	}
	iVar0 = func_188(0);
	if ((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || !network_has_control_of_entity(iVar0))
	{
		return;
	}
	iVar1 = func_738();
	iVar2 = func_358(iVar1);
	sVar3 = func_925(iVar1);
	if (!_is_ped_using_scenario_hash(iVar0, iVar2))
	{
		if (iVar2 != 0)
		{
			_0xa3a9299c4f2adb98(iVar0);
			if (is_string_null_or_empty(sVar3))
			{
				_task_start_scenario_in_place(iVar0, iVar2, 0, true, 0, -1f, false);
			}
			else
			{
				_task_start_scenario_in_place(iVar0, iVar2, 0, true, get_hash_key(sVar3), -1f, false);
			}
		}
	}
}

int func_738()
{
	return Local_13.f_7.f_19;
}

void func_739()
{
	if (does_blip_exist(Local_947.f_19.f_154))
	{
		func_938(&(Local_947.f_19.f_154));
	}
}

void func_740()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_22))
	{
		func_719(5000);
		return;
	}
	func_924(Local_13.f_7.f_22, 5000);
}

bool func_741()
{
	fVar0 = 0f;
	switch (func_239())
	{
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.9f;
			break;
		case 5:
			fVar0 = 0.2f;
			break;
		case 6:
			fVar0 = 0.6f;
			break;
		case 7:
			fVar0 = 0.6f;
			break;
	}
	return get_random_float_in_range(0f, 1f) < fVar0;
}

void func_742(int iParam0)
{
	if (Local_947.f_19.f_249 == 0)
	{
		Local_947.f_19.f_249 = add_shocking_event_for_entity(func_939(), iParam0, -1f, 35f, 50f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_743()
{
	if (!func_570())
	{
		return;
	}
	iVar0 = func_188(2);
	if ((!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true)) || !network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (func_346(iVar0, 518218985))
	{
		return;
	}
	if (func_346(iVar0, -1442466670) || func_346(iVar0, -1952598043))
	{
		if (func_507(0, 2) < func_603())
		{
			if (network_is_host_of_this_script())
			{
				func_573(64);
				func_574(25);
			}
		}
		return;
	}
	iVar1 = func_706(2, func_603(), 1, 1);
	if (func_940(iVar1))
	{
		if (!func_190(268435456))
		{
			if (func_190(134217728))
			{
				func_121(268435456);
				iVar2 = func_188(0);
				if (does_entity_exist(iVar2))
				{
					set_relationship_between_groups(6, Local_947.f_19.f_45, get_ped_relationship_group_hash(iVar2));
				}
				set_relationship_between_groups(6, Local_947.f_19.f_45, 1609284507);
			}
		}
		if (func_506(iVar0, -1442466670, 1, 0))
		{
			task_combat_hated_targets_around_ped(iVar0, 100f, 0, 0);
		}
	}
	if (func_505(2))
	{
		if (func_506(iVar0, 518218985, 1, 0))
		{
			iVar3 = func_817(2);
			if (_network_is_player_index_valid(iVar3))
			{
				iVar4 = get_player_ped(iVar3);
				if (does_entity_exist(iVar4) && !is_ped_dead_or_dying(iVar4, true))
				{
					task_smart_flee_ped(iVar0, iVar4, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					task_smart_flee_coord(iVar0, func_508(2), 500f, -1, false, 1077936128);
				}
			}
			else
			{
				task_smart_flee_coord(iVar0, func_508(2), 500f, -1, false, 1077936128);
			}
		}
	}
}

float func_744(int iParam0)
{
	return Local_947.f_274.f_7[iParam0]->f_5;
}

void func_745(float fParam0)
{
	if (!func_941(2) || func_942(2, 0))
	{
		func_715(2);
		return;
	}
	if (!func_527(255))
	{
		func_715(2);
		return;
	}
	fVar0 = func_577(2, 255, 1);
	if (fVar0 < fParam0 && fVar0 != 0f)
	{
		if (!func_943(2))
		{
			func_944(2, 831283580, 580546400, 0, "NB_PHOTOGRAPHY_BLIP_NAME_ANIMAL");
		}
	}
	else
	{
		func_174(2);
	}
}

void func_746(int iParam0)
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_24))
	{
		func_724(-1);
		return;
	}
	func_926(Local_13.f_7.f_24, iParam0);
}

void func_747()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_24))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_24, 100);
}

void func_748()
{
	if (func_598(512))
	{
		return;
	}
	if (!func_190(16384))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			func_121(16384);
		}
	}
}

bool func_749(int iParam0, int iParam1)
{
	if (_network_is_player_index_valid(iParam1))
	{
		return func_672(iParam0, network_get_participant_index(iParam1));
	}
	return false;
}

void func_750(int iParam0, vector3 vParam1)
{
	if (does_blip_exist(Local_947.f_19.f_154))
	{
		return;
	}
	if (!func_527(255))
	{
		return;
	}
	Local_947.f_19.f_154 = _blip_add_for_area(1247852480, func_370(iParam0), vParam1, 0);
	_blip_set_modifier(Local_947.f_19.f_154, 1679075994);
	set_blip_name_from_text_file(Local_947.f_19.f_154, "NB_PHOTOGRAPHY_BLIP_NAME_OBJ");
}

void func_751()
{
	if (_network_is_player_index_valid(Local_13.f_7.f_23))
	{
		func_926(Local_13.f_7.f_23, -1);
		return;
	}
	if (!does_entity_exist(Local_947.f_19.f_155) || is_entity_dead(Local_947.f_19.f_155))
	{
		func_724(-1);
		return;
	}
	iVar0 = _get_rider_of_mount(Local_947.f_19.f_155, true);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		func_724(-1);
		return;
	}
	iVar1 = 255;
	if (is_ped_a_player(iVar0))
	{
		iVar1 = network_get_player_index_from_ped(iVar0);
	}
	if (!_network_is_player_index_valid(iVar1))
	{
		func_724(-1);
		return;
	}
	func_926(iVar1, -1);
}

void func_752()
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_23))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_23, 100);
}

float func_753(int iParam0, vector3 vParam1)
{
	return vdist(func_793(iParam0), vParam1);
}

void func_754(int iParam0)
{
	if (!_network_is_player_index_valid(Local_13.f_7.f_21))
	{
		func_724(-1);
		return;
	}
	func_926(Local_13.f_7.f_21, iParam0);
}

bool func_755(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

void func_756()
{
	func_777(1);
}

bool func_757(int iParam0)
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return false;
	}
	if (!_network_has_control_of_anim_scene(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_356(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(Local_947.f_19.f_246, sVar0))
	{
		if (!_0x0df57f86fe71dbe5(Local_947.f_19.f_246, sVar0))
		{
			_0xdf7b5144e25cd3fe(Local_947.f_19.f_246, sVar0);
		}
		return false;
	}
	return true;
}

bool func_758(char* sParam0)
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return false;
	}
	return get_anim_scene_bool(Local_947.f_19.f_246, sParam0);
}

void func_759(char* sParam0)
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(Local_947.f_19.f_246))
	{
		return;
	}
	set_anim_scene_bool(Local_947.f_19.f_246, sParam0, true, true);
}

void func_760(int iParam0)
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(Local_947.f_19.f_246))
	{
		return;
	}
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return;
	}
	sVar0 = func_356(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(Local_947.f_19.f_246, sVar0))
	{
		if (!_0x0df57f86fe71dbe5(Local_947.f_19.f_246, sVar0))
		{
			_0xdf7b5144e25cd3fe(Local_947.f_19.f_246, sVar0);
		}
		return;
	}
	_set_anim_scene_playback_list_bool(Local_947.f_19.f_246, sVar0, true);
}

float func_761()
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return -1f;
	}
	return _get_anim_scene_progress(Local_947.f_19.f_246);
}

void func_762(bool bParam0)
{
	if (!network_is_participant_active(participant_id()))
	{
		return;
	}
	if (network_get_player_index(participant_id()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (func_530(4, 255))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_595(Local_13.f_7.f_13, 2000))
		{
			return;
		}
	}
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return;
	}
	switch (func_243())
	{
		case 0:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_TS";
			break;
		case 1:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_FS";
			break;
		case 2:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_DS";
			break;
	}
	func_699(sVar1, 10000, 0, 0, 0, 1);
	func_718(4);
}

bool func_763()
{
	if ((Local_13.f_7.f_22 == 255 || !network_is_participant_active(participant_id())) || network_get_player_index(participant_id()) != Local_13.f_7.f_22)
	{
		return false;
	}
	iVar0 = get_player_ped(Local_13.f_7.f_22);
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		if (does_entity_exist(iVar0) && !is_ped_dead_or_dying(iVar0, true))
		{
			if (get_current_ped_weapon(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 != -1569615261)
				{
					if (func_506(iVar0, 716706914, 1, 0))
					{
						set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
						task_swap_weapon(iVar0, 1, 0, 0, 0);
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_764()
{
	if (!_does_anim_scene_exist(Local_947.f_19.f_246))
	{
		return;
	}
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_ped_dead_or_dying(iVar0, true))
	{
		return;
	}
	if (has_anim_event_fired(iVar0, -1019754709))
	{
		iVar1 = func_188(2);
		if (does_entity_exist(iVar1))
		{
			if (network_has_control_of_entity(iVar1))
			{
				if (_0x3ab6c7b0bb0df4b1(iVar1, Local_947.f_19.f_246))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_500(2), iVar1);
				}
				delete_ped(&iVar1);
			}
		}
		iVar2 = func_501(2);
		if (does_entity_exist(iVar2))
		{
			if (network_has_control_of_entity(iVar2))
			{
				if (_0x3ab6c7b0bb0df4b1(iVar2, Local_947.f_19.f_246))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_502(2), iVar2);
				}
				delete_object(&iVar2);
			}
		}
	}
	if (has_anim_event_fired(iVar0, -1066693069))
	{
		iVar3 = func_501(0);
		if (does_entity_exist(iVar3))
		{
			if (network_has_control_of_entity(iVar3))
			{
				if (_0x3ab6c7b0bb0df4b1(iVar3, Local_947.f_19.f_246))
				{
					remove_anim_scene_entity(Local_947.f_19.f_246, func_502(0), iVar3);
				}
				delete_object(&iVar3);
			}
		}
	}
}

void func_765(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_766(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_188(0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = Local_13.f_7.f_20;
		if (!_network_is_player_index_valid(iParam0))
		{
			return;
		}
	}
	iVar1 = get_player_ped(iParam0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = is_entity_playing_anim(iVar0, func_354(iParam3), func_616(iParam3), 1);
	bVar4 = is_entity_playing_anim(iVar0, func_354(iParam2), func_616(iParam2), 1);
	if (!bVar3 && !bVar4)
	{
		func_504(iParam1);
		bVar2 = true;
	}
	if (bVar4)
	{
		bVar2 = true;
	}
	if (Local_947.f_19.f_156 != iParam0 && bVar3)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		Local_947.f_19.f_156 = iParam0;
		if (bVar3)
		{
			task_play_upper_anim_facing_entity(iVar0, func_354(iParam3), func_616(iParam3), get_player_ped(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
		}
		else if (bVar4)
		{
			fVar5 = _get_entity_anim_current_time(iVar0, func_354(iParam2), func_616(iParam2));
			if (fVar5 > 0.7f)
			{
				task_play_upper_anim_facing_entity(iVar0, func_354(iParam3), func_616(iParam3), get_player_ped(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
			}
		}
		else
		{
			func_573(iParam1);
			task_play_upper_anim_facing_entity(iVar0, func_354(iParam2), func_616(iParam2), get_player_ped(Local_947.f_19.f_156), 2000, 4f, -4f, 24, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_767()
{
	if (func_598(512))
	{
		return;
	}
	if (!func_190(8192))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				func_497(1872332830, 0, 0);
				func_121(8192);
			}
		}
	}
}

void func_768()
{
	if (func_598(512))
	{
		return;
	}
	if (!func_190(524288))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				iVar0 = 1356609994;
				if (func_582(512))
				{
					iVar0 = 783724279;
				}
				else if (func_582(1024))
				{
					iVar0 = -83587753;
				}
				if (func_945(iVar0, 0, 255, 0, 0))
				{
					func_121(524288);
				}
			}
		}
	}
}

void func_769()
{
	if (func_477(2048, 255) || func_477(4096, 255))
	{
		func_946();
	}
}

void func_770()
{
	if (func_477(2048, 255) || func_477(4096, 255))
	{
		func_777(1);
	}
}

void func_771()
{
	if (func_670(0, 255) || func_672(0, 255))
	{
		func_893(0);
		func_947(7, Local_947.f_4);
	}
}

void func_772()
{
	if (!func_190(131072))
	{
		if (!func_496(2, 255))
		{
			func_497(-1315007749, 0, 0);
			func_121(65536);
		}
	}
}

void func_773(bool bParam0)
{
	if ((Local_13.f_7.f_22 == 255 || !network_is_participant_active(participant_id())) || network_get_player_index(participant_id()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (bParam0)
	{
		if (func_477(8388608, 255))
		{
			set_player_control(network_get_player_index(participant_id()), true, 256, false);
			func_510(8388608);
		}
	}
	else if (!func_477(8388608, 255))
	{
		set_player_control(network_get_player_index(participant_id()), false, 256, false);
		func_478(8388608);
	}
}

void func_774(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	func_791(iParam1, iParam0);
}

void func_775(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_928(iParam1);
	func_495(iVar0, iParam0);
}

bool func_776(int iParam0)
{
	return is_bit_set(Local_947.f_406.f_123, iParam0);
}

void func_777(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_185(Local_947.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

bool func_778(int iParam0)
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

void func_779(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_778(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_948(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_949(iVar0);
	*uParam0 = 0;
}

int func_780(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_950(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_781(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_950(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_782(int iParam0)
{
	iVar0 = -1;
	if (func_522(&Var1, iParam0))
	{
		iVar0 = ((func_951() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_783(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_784(int iParam0, int iParam1)
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

void func_785(var uParam0)
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
	func_952(uParam0, uParam0->f_1);
}

bool func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_787(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_787(int iParam0)
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

bool func_788()
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

int func_789(int iParam0, int iParam1)
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

void func_790(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 7, &uParam1);
}

void func_791(int iParam0, int iParam1)
{
	Var0 = { func_635(iParam1, 896190569) };
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

var func_792(int iParam0, int iParam1)
{
	return &(Local_947.f_329[iParam0]->f_5[iParam1]);
}

Vector3 func_793(int iParam0)
{
	return get_entity_coords(&(Local_947.f_274.f_7[iParam0]), true, false);
}

void func_794(var uParam0, int iParam1, int iParam2)
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
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

bool func_795(int iParam0)
{
	if (Local_947.f_578.f_120 == iParam0)
	{
		return true;
	}
	return false;
}

void func_796(int iParam0, int iParam1, int iParam2)
{
	func_248(&(Local_947.f_578[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_797(int iParam0, int iParam1, int iParam2)
{
	func_347(&(Local_947.f_578[iParam0]->f_6[iParam1]->f_1), iParam2);
}

void func_798(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (bParam1)
	{
		func_953(iParam0, 4);
		if (bParam3)
		{
			func_954(iVar0, 1);
		}
		func_955(iVar0, 1);
	}
	else
	{
		func_956(iParam0, 4);
		func_955(iVar0, 0);
	}
}

float func_799(var uParam0)
{
	return uParam0->f_26;
}

void func_800(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_801(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 1);
	}
	else
	{
		func_347(uParam0, 1);
	}
}

void func_802(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 512);
	}
	else
	{
		func_347(uParam0, 512);
	}
}

void func_803(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 2);
	}
	else
	{
		func_347(uParam0, 2);
	}
}

void func_804(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 8);
	}
	else
	{
		func_347(uParam0, 8);
	}
}

void func_805(int iParam0, int iParam1)
{
	func_248(&(Local_947.f_329[iParam0]->f_5[iParam1]->f_1), 16);
}

int func_806(int iParam0)
{
	return Local_947.f_274.f_7[iParam0]->f_4;
}

bool func_807(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_812(iParam1))
	{
		return false;
	}
	iVar0 = func_957(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_808(int iParam0, bool bParam1)
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

bool func_809(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_810(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_811(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_812(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_813(int iParam0)
{
	return is_bit_set(Local_947.f_578.f_119, iParam0);
}

bool func_814(int iParam0)
{
	return is_bit_set(Local_947.f_578.f_118, iParam0);
}

int func_815(int iParam0, int iParam1)
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

var func_816(int iParam0, int iParam1, var uParam2)
{
	return uParam2;
}

int func_817(int iParam0)
{
	if (!_network_is_player_index_valid(&(Local_13.f_49.f_1[iParam0])))
	{
	}
	if (&Local_13.f_49.f_5[iParam0] == 0)
	{
		return 255;
	}
	return &(Local_13.f_49.f_1[iParam0]);
}

int func_818(int iParam0, int iParam1)
{
	if (func_958(iParam0))
	{
		return 0;
	}
	if (&Local_13.f_58[iParam0] == iParam1)
	{
		return 1;
	}
	Local_13.f_58[iParam0] = iParam1;
	return 1;
}

bool func_819(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

bool func_820(int iParam0, int iParam1)
{
	if (!network_is_participant_active(int_to_participantindex(iParam0)))
	{
		return false;
	}
	if (is_player_dead(network_get_player_index(int_to_participantindex(iParam0))))
	{
		return false;
	}
	return func_687(iParam1, network_get_player_index(int_to_participantindex(iParam0)));
}

int func_821(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!does_entity_exist(&(Local_947.f_274.f_7[iParam0])))
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
		else if (&Local_82[iVar0]->f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_527(iVar0))
		{
		}
		else if (iVar1 != -1 && &Local_82[iVar0]->f_4.f_2[iParam0] > &Local_82[iVar1]->f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && &Local_82[iVar0]->f_4.f_2[iParam0] > fParam2)
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

void func_822(var uParam0, int iParam1)
{
	iVar0 = (iParam1 - 1250);
	iVar1 = iParam1 + 1250;
	*uParam0 = get_random_int_in_range(iVar0, iVar1);
}

void func_823(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 39:
			iVar0 = 1048576;
			break;
		case 20:
			iVar0 = 2097152;
			break;
		case 47:
			iVar0 = 4194304;
			break;
		case 51:
			iVar0 = 4194304;
			break;
		case 112:
			iVar0 = 16777216;
			break;
		case 116:
			iVar0 = 33554432;
			break;
		case 143:
			iVar0 = 67108864;
			break;
		case 153:
			iVar0 = 134217728;
			break;
		case 157:
			iVar0 = 268435456;
			break;
		case 164:
			iVar0 = 8388608;
			break;
		case 55:
			iVar0 = 536870912;
			break;
		case 43:
			iVar0 = 1073741824;
			break;
	}
	if (iVar0 != 0)
	{
		func_579(iVar0);
	}
}

bool func_824(int iParam0)
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

bool func_825(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_930(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_959(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, false) == 1;
}

struct<15> func_826(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_947, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_827(var uParam0)
{
	func_961(uParam0, func_960(4, 117));
}

Vector3 func_828(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_829(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!bParam4 && _0x54b187f111d9c6f8(iParam0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		func_575(1, 0, 0);
	}
	if (func_962(iParam2))
	{
		if (!func_963(iParam0, func_601(iParam2), -1223286396, iParam1, 1, 0, 0, 1))
		{
			return false;
		}
	}
	else if (!func_965(&(Local_947.f_19.f_53), func_964(func_601(iParam2)), 0, -1, 0, 0))
	{
		return false;
	}
	if (!bParam3)
	{
		func_966(iParam2);
	}
	func_588(&(Local_13.f_7.f_9));
	return true;
}

bool func_830(int iParam0)
{
	if (!func_527(255))
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 128:
			return true;
		case 129:
			return true;
		case 130:
			return true;
		default:
			break;
	}
	return false;
}

void func_831(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_832(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_914(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_833(int iParam0)
{
	return Local_947.f_274.f_7[iParam0]->f_10;
}

void func_834(int iParam0, char* sParam1, bool bParam2)
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

void func_835(int iParam0)
{
}

int func_836(int iParam0)
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

struct<2> func_837(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_838(int iParam0)
{
	if (!func_632(func_631(iParam0), Local_947.f_406.f_82[iParam0]))
	{
		clear_bit(&(Local_947.f_406.f_122), iParam0);
		return;
	}
	set_bit(&(Local_947.f_406.f_122), iParam0);
}

int func_839(int iParam0, int iParam1)
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

void func_840()
{
	if (Local_947.f_578.f_120 < 0)
	{
		return;
	}
	func_484(func_180(Local_947.f_578.f_120), 0);
	Local_947.f_578.f_120 = -1;
	func_967(func_180(Local_947.f_578.f_120));
}

bool func_841(int iParam0, int iParam1)
{
	iVar0 = func_483(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_947.f_578.f_120 != iParam0)
		{
			func_840();
			func_902(iParam0);
			Local_947.f_578.f_120 = iParam0;
			func_968(iParam0);
		}
		return true;
	}
	return false;
}

int func_842(var uParam0, var uParam1, int iParam2)
{
	if (!func_540(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_843(var uParam0, var uParam1, int iParam2)
{
	if (!func_540(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_844(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_658(&(Local_82[iParam1]->f_10), 1, iParam0))
	{
		if (&Local_82[iParam1]->f_10.f_9[iParam0] == 0)
		{
			return;
		}
		iVar0 = network_get_player_index(int_to_participantindex(iParam1));
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (_network_is_player_index_valid(&(Local_13.f_49.f_1[iParam0])))
		{
			if (&Local_13.f_49.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_13.f_49.f_5[iParam0] == 0 || is_time_more_than(&(Local_82[iParam1]->f_10.f_9[iParam0]), &(Local_13.f_49.f_5[iParam0])))
		{
			Local_13.f_49.f_1[iParam0] = iVar0;
			Local_13.f_49.f_5[iParam0] = &Local_82[iParam1]->f_10.f_9[iParam0];
		}
	}
}

void func_845(int iParam0)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_13.f_58[iVar0]->f_2 != 0)
		{
		}
		else if (network_is_player_active(Local_13.f_58[iVar0]->f_1))
		{
		}
		else if (!is_bit_set(Local_82[iParam0]->f_24, iVar0))
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
				Local_13.f_58[iVar0]->f_1 = iVar1;
				func_122(&(Local_13.f_58.f_10), iVar0, func_815(Local_82[iParam0]->f_24.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_846(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_898() - fParam1);
	func_969(uParam0, 1);
	func_970(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_847(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_848(var uParam0)
{
	if (!func_646(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_971(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_898() - uParam0->f_1);
}

void func_849(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0]->f_10), 3, iParam0);
}

void func_850(int iParam0)
{
	if (0 == iParam0)
	{
		if (func_598(8192))
		{
			if (get_current_ped_weapon(player_ped_id(), &iVar0, false, 0, false))
			{
				if (iVar0 == 2055893578 || iVar0 == -680302000)
				{
					func_972(iParam0);
					func_973(iParam0);
					iVar1 = func_188(iParam0);
					if (does_entity_exist(iVar1))
					{
						clear_entity_last_damage_entity(iVar1);
					}
				}
			}
		}
	}
}

bool func_851(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 7, iParam0);
}

bool func_852(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_855(uParam1, 0, iVar0);
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
				if (func_868(uParam1, 4000))
				{
					if ((func_869(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_870(uParam1, iParam0)) && func_871(uParam1, iParam0))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_868(uParam1, 4000))
				{
					if ((func_869(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_870(uParam1, iParam0)) && func_871(uParam1, iParam0))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_872(iParam0, Global_1940258->f_35))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_876())
				{
					if (func_872(iParam0, Global_1940258->f_36))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_862(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_863(Global_34, iParam0, uParam1))
					{
						func_873();
						*uParam2 = 4;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_864(Global_34, iParam0, uParam1))
					{
						func_873();
						*uParam2 = 256;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_974(iParam0, uParam1))
			{
				func_873();
				*uParam2 = 131072;
				func_857(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_975(iParam0, uParam1))
			{
				func_873();
				*uParam2 = 262144;
				func_857(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_853(int iParam0)
{
	return iParam0;
}

bool func_854(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_855(var uParam0, bool bParam1, int iParam2)
{
	func_976(iParam2);
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
		uParam0->f_14 = func_977(0);
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
							func_248(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_978(1, 1))
						{
							func_248(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_978(1, 1) || *uParam0 & 8192 != 0))
				{
					func_347(uParam0, 33554432);
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
			if (func_979(uParam0))
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
	func_980(uParam0);
}

bool func_856(int iParam0, var uParam1)
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
			if (!func_981(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_982(iParam0, iVar2) <= func_983(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_857(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_894(iParam2, 1, 1, 1, 0))
	{
		func_248(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_984(uParam1, 1);
	func_985();
}

bool func_858(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_986(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_987(uParam1);
			if (func_988(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_989(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_984(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_990(uParam1))
						{
							func_984(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_859(int iParam0, int iParam1, var uParam2)
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
	if (func_991(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_987(uParam2);
		if (func_988(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_989(uParam2)
				{
					func_984(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_860(int iParam0, var uParam1)
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
	if (func_981(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_989(uParam1)
		{
			fVar3 = func_987(uParam1);
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

int func_861(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_992(bParam1, bParam2, bParam3);
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

bool func_862(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_863(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_993(uParam2);
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
			if (func_871(uParam2, iParam1))
			{
				func_984(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_864(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_892(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_871(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_984(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_865(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_994(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_995(iParam1, vVar0, vVar4))
					{
						func_984(uParam2, 1);
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
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_995(iParam1, vVar0, vVar7))
					{
						func_984(uParam2, 1);
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

bool func_866(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_981(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_996(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_824(&(Global_1940258->f_28[iVar0])))
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
			if (func_997(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_998(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_999(uParam1, iParam0, fVar1, iVar0))
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

bool func_867(int iParam0, var uParam1)
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

bool func_868(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_869(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1000(iVar0, &iVar2))
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
	if (func_1001(iVar0, iParam0))
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

int func_870(var uParam0, int iParam1)
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

bool func_871(var uParam0, int iParam1)
{
	if (func_1002(uParam0))
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

bool func_872(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_1003(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_873()
{
}

bool func_874(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1004(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_875();
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
						if (func_1005(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_875();
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

int func_875()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_876()
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
	if ((func_875() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_877(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_983(uParam0);
	if (uParam0->f_13 > func_799(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_1006(iParam1);
	iVar1 = func_1007(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_878(var uParam0, int iParam1)
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
	if (func_674(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_1008(vVar1, vVar4);
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

int func_879(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1009(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_880(int iParam0, var uParam1)
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
		if (func_1010(iParam0, uParam1, 1))
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
	if (!func_669(iParam0))
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
			if (func_1011(uParam1))
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
					if (!func_1012(uParam1, iParam0))
					{
						if (func_1005(iVar4, Global_35, 1) < 7f)
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

bool func_881(int iParam0, var uParam1)
{
	if (!func_1013(0))
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

bool func_882(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_883(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_884(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_875();
	}
	else if (func_875() - uParam1->f_5) > func_1014(uParam1)
	{
		return func_1015(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_885(var uParam0, int iParam1)
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

int func_886(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1016(vVar3, vVar6);
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
	if (func_1017(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_887(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_186(Local_947.f_406.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_947.f_406.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_947.f_406.f_65), iParam0);
	if (!bParam3 && Local_82[iParam2]->f_10.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_82[iParam2]->f_10.f_4, get_network_time_accurate()) > 750)
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
	iVar0 = func_1018(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_1019(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_888(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_889(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_890(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_1020(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_1021(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_1022(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_565(func_1023(get_rendering_cam())) };
	vVar13 = { func_1024(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_1024(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + floor((func_1025((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + floor((func_1025((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + floor((func_1025(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + floor(func_1025((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_891(int iParam0, var uParam1)
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

int func_892(var uParam0)
{
	return uParam0->f_23;
}

void func_893(bool bParam0)
{
	if (!func_134(64, 255))
	{
		iVar0 = func_489(Local_947.f_1, Local_947.f_2);
		func_918(iVar0);
		if (!func_134(1024, 255))
		{
			func_151(1024);
		}
		func_919(iVar0);
		if (bParam0)
		{
			func_947(Local_947.f_1, Local_947.f_4);
		}
		func_151(64);
	}
}

bool func_894(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_895(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_896(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_897(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_896(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_898() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_898()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_899(int iParam0)
{
	if (func_482(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_900(var uParam0, var uParam1)
{
}

void func_901(int iParam0)
{
	iVar0 = func_483(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_1026(iParam0))
	{
		func_181(iParam0, 0);
		return;
	}
	else if (func_482(iParam0, 8))
	{
		func_181(iParam0, 0);
	}
	bVar1 = vdist(get_entity_coords(iVar0, true, false), func_828(player_id())) <= Local_947.f_578[iParam0]->f_2;
	if (bVar1 != func_482(iParam0, 1))
	{
		func_181(iParam0, 0);
		if (bVar1)
		{
			if (!_0x870708a6e147a9ad(iVar0, Local_947.f_578[iParam0]->f_3, Local_947.f_578[iParam0]->f_2, 0, Local_947.f_578[iParam0]->f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_795(iParam0))
				{
					func_902(iParam0);
				}
				if (!_0x375f5870a7b8bec1(Local_947.f_578[iParam0]->f_3))
				{
					_0xfca8fb9e15fa80d3(iVar0, get_hash_key(Local_947.f_578[iParam0]->f_3));
				}
				if (network_has_control_of_entity(iVar0))
				{
					set_ped_config_flag(iVar0, 130, true);
					set_ped_config_flag(iVar0, 178, false);
					set_ped_config_flag(iVar0, 297, true);
					set_ped_config_flag(iVar0, 315, true);
					set_ped_config_flag(iVar0, 301, false);
				}
				func_629(iParam0, 1);
			}
		}
	}
}

void func_902(int iParam0)
{
	if (func_899(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_904(iParam0, iVar0, 1);
		iVar0++;
	}
	func_629(iParam0, 2);
}

bool func_903(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_947.f_578[iParam0]->f_6[iParam1]->f_1, iParam2);
}

void func_904(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_779(Local_947.f_578[iParam0]->f_6[iParam1], 1, 1);
	}
	if (_0x375f5870a7b8bec1(Local_947.f_578[iParam0]->f_6[iParam1]->f_2))
	{
		return;
	}
	if (Local_947.f_578[iParam0]->f_6[iParam1]->f_3 == 0)
	{
	}
	iVar0 = func_483(iParam0);
	iVar1 = func_1027(Local_947.f_578[iParam0]->f_6[iParam1]->f_2, Local_947.f_578[iParam0]->f_6[iParam1]->f_3, iVar0, Local_947.f_578[iParam0]->f_6[iParam1]->f_4, Local_947.f_578[iParam0]->f_6[iParam1]->f_5, 0, 0, Local_947.f_578[iParam0]->f_6[iParam1]->f_6, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_948(iVar1);
	func_1028(iVar1, 18, 0, 1);
	func_1028(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	if (func_903(iParam0, iParam1, 2))
	{
		func_1029(iVar1, Local_947.f_578[iParam0]->f_6[iParam1]->f_2, Local_947.f_578[iParam0]->f_6[iParam1]->f_7, 1);
	}
	if (!func_903(iParam0, iParam1, 1))
	{
		if (func_903(iParam0, iParam1, 4))
		{
			if (func_905() < Local_947.f_578[iParam0]->f_6[iParam1]->f_7)
			{
				if (func_906(&(Local_947.f_578[iParam0]->f_6[iParam1]), 0))
				{
					func_798(&(Local_947.f_578[iParam0]->f_6[iParam1]), 0, 1, 1);
				}
			}
			else if (!func_906(&(Local_947.f_578[iParam0]->f_6[iParam1]), 0))
			{
				func_798(&(Local_947.f_578[iParam0]->f_6[iParam1]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_798(iVar1, 0, 1, 1);
	}
	func_797(iParam0, iParam1, 16);
	Local_947.f_578[iParam0]->f_6[iParam1] = iVar1;
}

int func_905()
{
	if (func_28() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_906(int iParam0, bool bParam1)
{
	if (bParam1 && !func_778(iParam0))
	{
		return false;
	}
	return !func_1030(iParam0, 4);
}

bool func_907(int iParam0, bool bParam1)
{
	if (bParam1 && !func_778(iParam0))
	{
		return false;
	}
	iVar0 = func_948(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_908(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_909(int iParam0, int iParam1)
{
	iVar0 = func_188(iParam0);
	switch (func_528(func_228(iParam0)))
	{
		case 1:
			if (func_1031(iParam0) == player_id())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(1);
						func_718(1);
						func_1033();
						func_1034(0, 0, -822629770, 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(2);
						func_718(2);
						func_478(8192);
						func_1033();
						func_1034(0, 0, -653113914, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 2:
			if (func_1031(iParam0) == player_id())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(1);
						func_718(1);
						func_1033();
						func_1034(0, 0, -822629770, 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(4);
						func_718(2);
						func_478(8192);
						func_1033();
						func_1034(0, 0, -653113914, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 3:
			if (func_1031(iParam0) == player_id())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(8);
						func_1033();
						func_1034(0, 0, -653113914, 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(4096);
						func_121(262144);
						func_478(16);
						func_1033();
						func_963(player_ped_id(), "SILENT_PLAYER_MOVE_BACK", 291934926, iVar0, 1, 0, 0, 1);
						break;
				}
			}
			break;
	}
}

bool func_910(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_911()
{
	switch (func_239())
	{
		case 3:
			return 16f;
		case 4:
			return 16f;
		case 5:
			return 16f;
		case 6:
			return 16f;
		case 7:
			return 16f;
		default:
			break;
	}
	return 16f;
}

float func_912()
{
	switch (func_239())
	{
		case 3:
			return 25f;
		case 4:
			return 25f;
		case 5:
			return 25f;
		case 6:
			return 25f;
		case 7:
			return 25f;
		default:
			break;
	}
	return 25f;
}

bool func_913(int iParam0)
{
	return func_249(&Global_1301321, iParam0);
}

float func_914(float fParam0, float fParam1, float fParam2)
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

Vector3 func_915(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { func_565(vParam0) };
	vVar3 = { func_1024(func_1024(vVar0, func_565(vParam3)), vVar0) };
	fVar6 = atan2(vVar0.y, vVar0.x);
	fVar7 = -atan2(vVar0.z, sqrt(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	vVar8 = { -vVar0.y, vVar0.x, 0f };
	vVar11 = { func_1024(vVar8, vVar0) };
	fVar14 = (atan2((func_895(vVar8, vVar3) / vmag(vVar8)), (func_895(vVar11, vVar3) / vmag(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_916(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_635(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_1035(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_917(int iParam0)
{
	func_1036(iParam0);
}

void func_918(int iParam0)
{
	if (func_131(Global_1272030[iParam0]))
	{
		return;
	}
	func_1037(iParam0, &iVar0, &iVar1);
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
		Var34 = { func_1038(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_1038(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_1038(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_1038(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_919(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_785(&Var0);
}

void func_920(struct<2> Param0)
{
	if (func_487(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_487(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_487(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1039(Param0, &Var0))
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

void func_921(int iParam0)
{
	Var0 = { func_635(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_922(int iParam0, int iParam1, int iParam2)
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

void func_923(int iParam0, int iParam1)
{
	if (!func_527(255))
	{
		func_715(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_947.f_19.f_3[iParam0])))
	{
		Local_947.f_19.f_3[iParam0] = _blip_add_for_entity(-89429847, func_188(0));
		switch (func_239())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_243() == 2)
				{
					set_blip_name_from_text_file(&(Local_947.f_19.f_3[iParam0]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					set_blip_name_from_text_file(&(Local_947.f_19.f_3[iParam0]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				}
				break;
			case 1:
			case 2:
			case 8:
			case 9:
			case 10:
			case 11:
				if (func_243() == 2)
				{
					set_blip_name_from_text_file(&(Local_947.f_19.f_3[iParam0]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					set_blip_name_from_text_file(&(Local_947.f_19.f_3[iParam0]), "NB_PHOTOGRAPHY_BLIP_NAME_FS");
				}
				break;
			default:
				set_blip_name_from_text_file(&(Local_947.f_19.f_3[iParam0]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				break;
		}
	}
	if (iParam1 != 0)
	{
		_blip_set_modifier(&(Local_947.f_19.f_3[iParam0]), 942020339);
	}
}

void func_924(int iParam0, int iParam1)
{
	iVar1 = func_188(0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return;
	}
	if (_network_is_player_index_valid(Local_947.f_19.f_157))
	{
		iVar0 = get_player_ped(iParam0);
		if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
		{
			return;
		}
		if (Local_947.f_19.f_157 != iParam0)
		{
			Local_947.f_19.f_157 = iParam0;
		}
		func_1040(&(Local_947.f_19.f_221), get_player_ped(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_0x66f9eb44342bb4c5(iVar1, &(Local_947.f_19.f_221));
	}
	else
	{
		iVar0 = get_player_ped(iParam0);
		if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
		{
			return;
		}
		Local_947.f_19.f_157 = iParam0;
		func_1040(&(Local_947.f_19.f_221), get_player_ped(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_0x66f9eb44342bb4c5(iVar1, &(Local_947.f_19.f_221));
	}
}

char* func_925(int iParam0)
{
	switch (func_239())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_MALE_D";
				case 1:
					return "WORLD_HUMAN_STAND_WAITING_MALE_B";
				case 2:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 3:
					return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_FEMALE_A";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_FEMALE_A";
						case 2:
							return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
						case 3:
							return "WORLD_CAMP_FIRE_SIT_GROUND_FEMALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_C";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_MALE_B";
						case 2:
							return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
						case 3:
							return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_926(int iParam0, int iParam1)
{
	iVar1 = func_188(0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar1))
	{
		return;
	}
	if (Local_947.f_19.f_156 == iParam0 && func_346(iVar1, -875674219))
	{
		return;
	}
	if (_network_is_player_index_valid(Local_947.f_19.f_156))
	{
		if ((Local_947.f_19.f_160 == 0 || get_time_difference(Local_947.f_19.f_160, get_network_time_accurate()) >= 3000) || !func_346(iVar1, -875674219))
		{
			iVar0 = get_player_ped(iParam0);
			if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
			{
				return;
			}
			if (iParam1 != -1)
			{
				if (func_595(Local_13.f_7.f_11, Local_13.f_7.f_16))
				{
					func_478(524288);
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = get_network_time_accurate();
					sVar2 = func_1041(iParam1);
					task_play_upper_anim_facing_entity(iVar1, func_354(iParam1), func_616(iParam1), get_player_ped(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, sVar2, 0, -1f);
				}
				else if (Local_947.f_19.f_156 != iParam0)
				{
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = get_network_time_accurate();
					task_turn_ped_to_face_entity(iVar1, get_player_ped(Local_947.f_19.f_156), -1, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				Local_947.f_19.f_156 = iParam0;
				Local_947.f_19.f_160 = get_network_time_accurate();
				task_turn_ped_to_face_entity(iVar1, get_player_ped(Local_947.f_19.f_156), -1, -1082130432, -1082130432, -1082130432);
			}
		}
	}
	else
	{
		iVar0 = get_player_ped(iParam0);
		if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
		{
			return;
		}
		Local_947.f_19.f_156 = iParam0;
		Local_947.f_19.f_160 = get_network_time_accurate();
		if (iParam1 != -1)
		{
			func_478(524288);
			task_play_upper_anim_facing_entity(iVar1, func_354(iParam1), func_616(iParam1), get_player_ped(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			task_turn_ped_to_face_entity(iVar1, get_player_ped(Local_947.f_19.f_156), -1, -1082130432, -1082130432, -1082130432);
		}
	}
}

bool func_927(int iParam0, int iParam1)
{
	Var0 = { func_635(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	return is_bit_set(iVar2, iParam0);
}

int func_928(int iParam0)
{
	return iParam0 + 8;
}

int func_929(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_ped_dead_or_dying(iParam0, true))
	{
		return 0;
	}
	iVar0 = 0;
	fVar1 = 0.2f;
	fVar2 = 0.8f;
	fVar3 = 0.1f;
	fVar4 = 0.9f;
	vVar5 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	if (func_710(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	fVar1 = 0.4f;
	fVar2 = 0.6f;
	fVar3 = 0.3f;
	fVar4 = 0.7f;
	if (func_710(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_930(int iParam0, int iParam1, float fParam2)
{
	return func_937(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_931(vector3 vParam0)
{
	iVar0 = func_188(0);
	if (vdist(get_entity_coords(iVar0, false, false), vParam0) < 5f)
	{
		return true;
	}
	return false;
}

bool func_932(vector3 vParam0)
{
	iVar0 = func_188(0);
	if (vdist(get_entity_coords(iVar0, false, false), vParam0) > 20f)
	{
		return true;
	}
	return false;
}

int func_933()
{
	switch (func_239())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_934()
{
	switch (func_239())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_935(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1042() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1043());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1043());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1043());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1044(get_player_team(iVar5)));
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
			if (func_1045(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1046(iVar2) != 1)
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
					if (!func_1047(iVar10))
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

bool func_936()
{
	fVar0 = 16f;
	switch (func_239())
	{
		case 3:
			fVar0 = 16f;
			break;
		case 4:
			fVar0 = 16f;
			break;
		case 5:
			fVar0 = 16f;
			break;
		case 6:
			fVar0 = 16f;
			break;
		case 7:
			fVar0 = 16f;
			break;
	}
	if (func_1048(2, fVar0, 1))
	{
		func_584(0, 65f, 5000, 2, 97, 98, -1, -1, -1, -1, 0, -1);
		return true;
	}
	return false;
}

bool func_937(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_938(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_939()
{
	iVar0 = func_239();
	switch (iVar0)
	{
		case 0:
			return 697410695;
		case 1:
			return 161068336;
		case 2:
			return 697410695;
		case 3:
			return -1215290486;
		case 4:
			return -1227782948;
		case 5:
			return -1215290486;
		case 6:
			return -1215290486;
		case 7:
			return -1215290486;
		case 8:
			return 161068336;
		case 9:
			return -1130398329;
		case 10:
			return -1130398329;
		case 11:
			return 697410695;
		default:
			break;
	}
	return 161068336;
}

int func_940(int iParam0)
{
	return func_1049(iParam0);
}

bool func_941(int iParam0)
{
	return does_entity_exist(&(Local_947.f_274.f_7[iParam0]));
}

bool func_942(int iParam0, bool bParam1)
{
	if (!bParam1 || func_941(iParam0))
	{
		return is_entity_dead(&(Local_947.f_274.f_7[iParam0]));
	}
	return false;
}

bool func_943(int iParam0)
{
	return does_blip_exist(Local_947.f_274.f_7[iParam0]->f_1);
}

void func_944(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	func_174(iParam0);
	if (!does_entity_exist(&(Local_947.f_274.f_7[iParam0])))
	{
		return;
	}
	iVar0 = _blip_add_for_entity(iParam1, &(Local_947.f_274.f_7[iParam0]));
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
	Local_947.f_274.f_7[iParam0]->f_1 = iVar0;
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1050(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_946()
{
	if (!func_69(2))
	{
		return;
	}
	func_149(8);
}

void func_947(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_928(iParam1);
	func_791(iVar0, iParam0);
}

int func_948(int iParam0)
{
	return iParam0;
}

void func_949(int iParam0)
{
	if (!func_1051(iParam0))
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

bool func_950(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_1052(uParam2);
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

int func_951()
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

void func_952(var uParam0, var uParam1)
{
}

void func_953(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_954(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_1030(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_955(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_956(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_957(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_958(int iParam0)
{
	return Local_13.f_58[iParam0]->f_2 > 0;
}

bool func_959(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_1053(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

var func_960(int iParam0, int iParam1)
{
	return func_935(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_961(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

bool func_962(int iParam0)
{
	switch (iParam0)
	{
		case 176:
			return true;
		case 177:
			return true;
		case 178:
			return true;
		case 179:
			return true;
		default:
			break;
	}
	return false;
}

bool func_963(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1054(iParam0, &Var0);
}

Vector3 func_964(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_965(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1055(vParam1, uParam0);
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

void func_966(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	set_bit(Local_947.f_19.f_46[iVar1], iVar2);
}

void func_967(int iParam0)
{
}

void func_968(int iParam0)
{
}

void func_969(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_970(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_971(var uParam0)
{
	return func_847(*uParam0, 2);
}

void func_972(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0]->f_10), 4, iParam0);
}

void func_973(int iParam0)
{
	if (!func_227(&iVar0))
	{
		return;
	}
	func_659(&(Local_82[iVar0]->f_10), 3, iParam0);
}

bool func_974(int iParam0, var uParam1)
{
	fVar0 = func_1056(uParam1);
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
		fVar2 = func_1057(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_34, true, bVar3) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1940258->f_38))
		{
			if (_is_weapon_lantern(Global_1940258->f_38) || _is_weapon_torch(Global_1940258->f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_1058())
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

bool func_975(int iParam0, var uParam1)
{
	if (func_1059(iParam0))
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

void func_976(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_1060();
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
			func_1061(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_977(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_978(bool bParam0, bool bParam1)
{
	if (func_1062(bParam0, &iVar0, &iVar1))
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

bool func_979(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_1063(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_1063(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1007(iVar0) == -1)
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

void func_980(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1064(uParam0);
	}
}

bool func_981(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_1007(iParam2);
	}
	else
	{
		iVar1 = func_1006(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_1007(iParam0);
	}
	else
	{
		iVar0 = func_1006(iParam0);
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

float func_982(int iParam0, int iParam1)
{
	return func_1003(iParam0, iParam1, 1, 1);
}

float func_983(var uParam0)
{
	return uParam0->f_29;
}

void func_984(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 134217728);
	}
	else
	{
		func_347(uParam0, 134217728);
	}
}

void func_985()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_986(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_1003(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_1065(iVar0, 0)))
		{
			if (func_1066(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_987(var uParam0)
{
	return uParam0->f_18;
}

bool func_988(var uParam0, int iParam1, float fParam2, float fParam3)
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

int func_989(var uParam0)
{
	return uParam0->f_19;
}

int func_990(var uParam0)
{
	return uParam0->f_20;
}

bool func_991(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_1065(iVar0, 0)))
		{
			if (func_710(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_992(bool bParam0, bool bParam1, bool bParam2)
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

float func_993(var uParam0)
{
	return uParam0->f_25;
}

int func_994(var uParam0)
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

bool func_995(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_937(iParam0, vParam4, 0.5f))
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

int func_996(int iParam0)
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
	if (func_1067(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_997(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1059(iParam1))
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

bool func_998(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1059(iParam1))
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

bool func_999(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_1068(uParam0);
	if (func_1059(iParam1))
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

bool func_1000(int iParam0, int iParam1)
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

bool func_1001(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_1069(iParam0, 1, 0, 0)) && !func_1069(iParam0, 1, 0, 0) == 1151374672)
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

bool func_1002(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_1003(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1004(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_1005(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1005(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1006(int iParam0)
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

int func_1007(int iParam0)
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

float func_1008(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_1009(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_1000(Global_34, &iVar1))
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
		fVar2 = func_1003(iParam0, player_ped_id(), 0, 1);
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
		if (func_1003(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_1010(int iParam0, var uParam1, bool bParam2)
{
	func_1062(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1012(uParam1, iVar0))
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
				if (!bParam2 || !func_1012(uParam1, iVar1))
				{
					if (func_1005(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1011(var uParam0)
{
	return func_186(*uParam0, 131072);
}

bool func_1012(var uParam0, int iParam1)
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

bool func_1013(int iParam0)
{
	return false;
}

int func_1014(var uParam0)
{
	return uParam0->f_22;
}

int func_1015(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_1016(vector3 vParam0, vector3 vParam3)
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

bool func_1017(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1018(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_1019(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_1020(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_1021(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_1022(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_1023(int iParam0)
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
	return func_565((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_1024(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_1025(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_1026(int iParam0)
{
	return !func_482(iParam0, 4);
}

int func_1027(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1030(iVar0, 2))
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
				func_1071(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1028(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_1029(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

bool func_1030(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_1031(int iParam0)
{
	return Local_13.f_58[iParam0]->f_1;
}

void func_1032(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_180(iVar0);
		func_531(iVar1, 0, bParam0, bParam1);
		func_531(iVar1, 1, bParam0, bParam1);
		func_531(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_1033()
{
	func_946();
}

void func_1034(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (func_1018(iVar0, 0, 1, 0) != -1569615261)
	{
		return;
	}
	_task_emote_2(iVar0, iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, 0);
}

int func_1035(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_1036(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_635(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_1037(int iParam0, int iParam1, int iParam2)
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

struct<2> func_1038(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_1039(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_950(Param0, &vVar0);
	if (func_1072(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1040(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

char* func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RightArmOnly_filter";
		case 2:
			return "RightArmOnly_filter";
		case 3:
			return "RightArmOnly_filter";
		case 4:
			return "RightArmOnly_filter";
		case 5:
			return "LeftArmOnly_filter";
		case 6:
			return "LeftArmOnly_filter";
		default:
			break;
	}
	return "";
}

int func_1042()
{
	return Global_1051252->f_12;
}

char* func_1043()
{
	return "unnamed";
}

int func_1044(int iParam0)
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

bool func_1045(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_1073(36, iParam0);
}

int func_1046(int iParam0)
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

bool func_1047(int iParam0)
{
	if (func_1074(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_1075(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_1048(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam2 || func_527(iVar0))
			{
				if (func_614(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_1049(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

int func_1050(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1076(iParam2, -372840566);
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
	func_1077(uParam1, iParam0, Var3);
	return 1;
}

bool func_1051(int iParam0)
{
	return func_1030(iParam0, 2);
}

void func_1052(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

float func_1053(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_1054(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_1055(var uParam0, var uParam1, var uParam2, var uParam3)
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

float func_1056(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_799(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1078(uParam0);
	}
	return func_799(uParam0);
}

float func_1057(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1058()
{
	iVar0 = func_1080(func_1079());
	iVar1 = func_1081(func_1079());
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

bool func_1059(int iParam0)
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

bool func_1060()
{
	if (func_1082())
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

void func_1061(var uParam0, var uParam1)
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

bool func_1062(bool bParam0, int iParam1, int iParam2)
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

int func_1063(var uParam0)
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

void func_1064(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_347(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_248(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_1065(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1066(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_710(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1067(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_1068(var uParam0)
{
	return uParam0->f_28;
}

int func_1069(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_1070(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_1071(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_954(iParam0, 1);
	func_955(iParam0, 1);
	func_956(iParam0, 128);
}

bool func_1072(int iParam0, var uParam1, var uParam2)
{
	if (!func_1083(iParam0))
	{
		return false;
	}
	if (func_1084(iParam0, uParam1, &uVar0))
	{
		func_1085(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1073(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1086(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1087())
	{
		return func_1086(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_1086(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_1074(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1075(int iParam0)
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
		func_1088(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1089(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_1076(int iParam0, int iParam1)
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

void func_1077(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_1090(uParam0))
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

var func_1078(var uParam0)
{
	return uParam0->f_27;
}

int func_1079()
{
	return &Global_1902818;
}

int func_1080(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1081(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_1082()
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

bool func_1083(int iParam0)
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

bool func_1084(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1091(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1085(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1092(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1093(iVar0);
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
			uParam2->f_5 = func_1094(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1095(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1096(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1097(iVar0);
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

bool func_1086(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1087()
{
	return Global_1102219->f_3672;
}

void func_1088(int iParam0)
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
	func_1089(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1089(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1090(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1091(int iParam0)
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

int func_1092(int iParam0, var uParam1)
{
	if (func_1098(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1093(int iParam0)
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

int func_1094(int iParam0)
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

int func_1095(int iParam0)
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

int func_1096(int iParam0)
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

int func_1097(int iParam0)
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

bool func_1098(int iParam0, var uParam1, var uParam2)
{
	if (func_1099(iParam0, uParam1, &uVar0))
	{
		func_1100(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1099(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1091(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1100(var uParam0, int iParam1, var uParam2)
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

