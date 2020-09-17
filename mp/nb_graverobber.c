void __EntryFunction__()
{
	fLocal_417 = 1f;
	fLocal_418 = 1f;
	iVar0 = iVar418;
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
	network_register_host_broadcast_variables(&Local_16, 27, 41);
	func_10(_0xba24095ea96dfe17(&Local_16), 27, "m_hostData");
	network_register_player_broadcast_variables(&Local_43, 161, 42);
	func_11(_0x690806bc83bc8ca2(Local_43[0]), 161, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	if (Local_16 == 6)
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
	else if (func_17(Local_204.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_204.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_204.f_12), Local_204.f_9))
	{
		return true;
	}
	else if (Local_204.f_8 == 6)
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
	_copy_memory(&Local_204, uParam0, 5);
	iVar2 = func_30(&bVar1, Local_204.f_1, Local_204.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_204.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_204.f_1, Local_204.f_2, Local_204.f_3, iVar0);
	Local_204.f_9 = { func_32(Var3.f_5, 8) };
	Local_204.f_14 = Var3.f_5;
	Local_204.f_15 = { Var3.f_11 };
	Local_204.f_18 = Var3.f_7;
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
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
	if (func_36(*Global_1051213) && !func_21(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_37(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_38(iParam3, 255))
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
	if (func_39())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051213))
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
	if (Local_16 <= 5)
	{
		func_40();
	}
	switch (Local_16)
	{
		case 0:
			func_41();
			break;
		case 1:
			func_42();
			break;
		case 2:
			func_43();
			break;
		case 3:
			func_44();
			break;
		case 4:
			func_45();
			break;
		case 5:
			func_46();
			break;
	}
}

void func_23()
{
	func_47();
	func_48();
	if (Local_204.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_204.f_8)
	{
		case 0:
			func_50();
			break;
		case 1:
			func_51();
			break;
		case 2:
			func_52();
			break;
		case 3:
			func_53();
			break;
		case 4:
			func_54();
			break;
		case 5:
			func_55();
			break;
	}
}

void func_24()
{
}

void func_25()
{
	if (func_56())
	{
		if (_0xf6a8a652a6b186cd(Local_16.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_16.f_3.f_1);
		}
	}
	func_57();
}

void func_26()
{
}

void func_27()
{
	if (Local_204.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_58(Local_204.f_12, 4);
		}
	}
	func_59();
	if (func_60(64))
	{
		func_61(Local_16.f_6);
	}
	func_62();
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
	func_63(&Var0, Var26.f_5);
	iVar25 = func_64(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_65(iVar25) };
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
			func_66(uParam0, iParam2);
			break;
		case 2:
			func_67(uParam0, iParam2);
			break;
		case 3:
			func_68(uParam0, iParam2);
			break;
		case 4:
			func_69(uParam0, iParam2);
			break;
		case 12:
			func_70(uParam0, iParam2);
			break;
		case 6:
			func_71(uParam0, iParam2, -1);
			break;
		case 7:
			func_72(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_73(uParam0, iParam2);
			break;
		case 11:
			func_74(uParam0, iParam2);
			break;
		case 9:
			func_75(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_76(uParam0, iParam2);
			break;
		case 8:
			func_77(uParam0, iParam2);
			break;
		case 13:
			func_78(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_79(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_80(uParam0, iParam2);
			break;
		case 16:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_82(uParam0, iParam2);
			break;
		case 21:
			func_83(uParam0, iParam2);
			break;
		case 28:
			func_84(uParam0, iParam2);
			break;
		case 25:
			func_85(uParam0, iParam2);
			break;
		case 24:
			func_86(uParam0, iParam2);
			break;
		case 22:
			func_87(uParam0, iParam2);
			break;
		case 23:
			func_88(uParam0, iParam2);
			break;
		case 29:
			func_89(uParam0, iParam2);
			break;
		case 26:
			func_90(uParam0, iParam2);
			break;
		case 30:
			func_91(uParam0, iParam2);
			break;
		case 27:
			func_92(uParam0, iParam2);
			break;
		case 32:
			func_93(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_94(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_95(uParam0, iParam2);
			break;
		case 17:
			func_96(uParam0, iParam2);
			break;
		case 18:
			func_97(uParam0, iParam2);
			break;
		case 19:
			func_98(uParam0, iParam2);
			break;
		case 20:
			func_99(uParam0, iParam2);
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
			func_100(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636), func_101(iParam1));
			break;
		case 3:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_602), func_101(iParam1));
			break;
		case 4:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_2104), func_101(iParam1));
			break;
		case 5:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_12606), func_101(iParam1));
			break;
		case 6:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_12908), func_101(iParam1));
			break;
		case 7:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_15910), func_101(iParam1));
			break;
		case 8:
			Var0.f_1 = func_102(iParam0, &(Global_1071686->f_636.f_16512), func_101(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_103();
	}
	return Var0;
}

void func_33()
{
}

void func_34()
{
	reserve_network_mission_peds(5);
	reserve_network_mission_objects(1);
	func_104(&(Local_204.f_19.f_161));
	if (network_is_host_of_this_script())
	{
		Local_16.f_7.f_18 = get_random_int_in_range(0, 8);
	}
}

void func_35()
{
}

bool func_36(struct<2> Param0)
{
	if (!func_105(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_101(Param0))
	{
		return false;
	}
	return true;
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_38(int iParam0, int iParam1)
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

bool func_39()
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
	if (!func_36(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_40()
{
}

void func_41()
{
	iVar0 = Global_1198046->f_231.f_1066[Local_204.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_204.f_1, Local_204.f_2, Local_204.f_3, iVar0);
	if (!func_106(&Var1, 1))
	{
		func_107(1);
		return;
	}
	Local_16.f_6 = func_108(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_109(256);
	if (func_110(Local_16.f_6))
	{
		func_111(5);
		func_107(6);
	}
	else
	{
		func_107(1);
	}
}

void func_42()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_204.f_1, Local_204.f_2, -1, 255);
	if (func_106(&Var0, 1))
	{
		func_107(2);
		return;
	}
	if (func_112(Var0, &bVar31))
	{
		clear_area(Local_204.f_15, Var0.f_10, 2442122);
		func_107(2);
	}
	else if (bVar31)
	{
		func_111(3);
		func_107(6);
	}
	if (!func_113(Local_16.f_3.f_2))
	{
		func_114(&(Local_16.f_3.f_2));
	}
	else if (func_115(Local_16.f_3.f_2) > 45000)
	{
		func_111(4);
		func_107(6);
	}
}

void func_43()
{
	if (func_116(1, 255))
	{
		if (!func_117(1))
		{
			if (func_118())
			{
				func_109(1);
			}
		}
		else
		{
			func_119();
			func_107(3);
		}
	}
}

void func_44()
{
	if (func_116(2, 255))
	{
		if (!func_117(2))
		{
			bVar0 = true;
			if (!func_120())
			{
				bVar0 = false;
			}
			if (!func_121())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_109(2);
			}
		}
		else
		{
			func_122();
			func_107(4);
		}
	}
}

void func_45()
{
	func_123();
	func_124();
	func_125();
	if (func_126() || Local_16.f_2 != 0)
	{
		func_127();
		func_107(5);
	}
}

void func_46()
{
	if (func_116(4, 255))
	{
		if (func_128())
		{
			func_109(4);
			func_107(6);
		}
	}
}

void func_47()
{
	if (!func_117(256))
	{
		return;
	}
	if (func_117(512))
	{
		if (func_60(64) && func_108(player_id()) == Local_16.f_6)
		{
			func_61(Local_16.f_6);
			func_129(64);
		}
	}
	else if (!func_60(64))
	{
		if (func_108(player_id()) == Local_16.f_6)
		{
			func_130(Local_16.f_6, 1, 1);
			func_131(64);
		}
	}
	else if (func_108(player_id()) != Local_16.f_6)
	{
		func_61(Local_16.f_6);
		func_129(64);
	}
}

void func_48()
{
	if (!Global_13)
	{
		if (func_116(8192, 255))
		{
			func_132(8192);
		}
	}
	else if (!func_116(8192, 255))
	{
		func_133(8192);
	}
}

void func_49()
{
}

void func_50()
{
	if (Local_16 == 6)
	{
		func_134(6);
	}
	else if (Local_16 > 0)
	{
		func_47();
		func_134(1);
	}
}

void func_51()
{
	if (Local_16 == 6)
	{
		func_134(6);
	}
	else if (Local_16 > 1)
	{
		func_134(2);
	}
}

void func_52()
{
	if (!func_116(1, 255))
	{
		bVar0 = true;
		if (!func_135())
		{
			bVar0 = false;
		}
		if (!func_136())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_133(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_113(Local_204.f_11))
			{
				func_114(&(Local_204.f_11));
			}
			if (func_115(Local_204.f_11) >= iVar1)
			{
				func_134(6);
			}
		}
	}
	else if (Local_16 > 2)
	{
		func_137(&(Local_204.f_11));
		func_138();
		func_134(3);
	}
}

void func_53()
{
	if (!func_116(2, 255))
	{
		iVar0 = func_139();
		iVar1 = func_140();
		if (iVar0 && iVar1)
		{
			func_133(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_113(Local_204.f_11))
			{
				func_114(&(Local_204.f_11));
			}
			if (func_141(Local_204.f_11) >= iVar2)
			{
				func_134(6);
			}
		}
	}
	else if (Local_16 > 3)
	{
		func_137(&(Local_204.f_11));
		func_142();
		func_143();
		func_144();
		func_145();
		func_134(4);
	}
}

void func_54()
{
	if (Local_16 >= 5)
	{
		func_146();
		func_134(5);
		return;
	}
	func_147();
	func_148();
	func_149();
	func_150();
	func_151();
	func_152();
}

void func_55()
{
	if (!func_116(4, 255))
	{
		if (func_153())
		{
			func_154();
			func_58(Local_204.f_12, 4);
			func_133(4);
		}
	}
	else if (Local_16 > 5)
	{
		func_134(6);
	}
}

bool func_56()
{
	return (func_117(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_57()
{
}

void func_58(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_155(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_59()
{
	if (!func_60(1))
	{
		return;
	}
	if (func_60(4))
	{
		return;
	}
	if (!func_60(2))
	{
		iVar0 = -1;
	}
	else if (!func_60(8))
	{
		iVar0 = 2;
	}
	else if (func_60(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_60(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_156(Local_204.f_9, iVar0, 0, 255, 0);
	func_131(4);
	if (bVar1)
	{
		func_157(Local_204.f_1, Local_204.f_2);
		if (!func_60(256))
		{
			if (iVar0 == 1)
			{
				func_158(Local_204.f_18, 1);
			}
			else
			{
				func_158(Local_204.f_18, 0);
			}
			func_131(256);
		}
	}
	else
	{
		func_158(Local_204.f_18, 2);
	}
}

bool func_60(int iParam0)
{
	return func_159(Local_204.f_7, iParam0);
}

void func_61(int iParam0)
{
	if (!func_160(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_62()
{
	bVar0 = func_56();
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		func_161(iVar1);
		if ((bVar0 && network_does_network_id_exist(&(Local_16.f_7.f_8[iVar1]))) && network_has_control_of_network_id(&(Local_16.f_7.f_8[iVar1])))
		{
			iVar2 = net_to_ent(&(Local_16.f_7.f_8[iVar1]));
			set_entity_as_no_longer_needed(&iVar2);
		}
		iVar1++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if ((bVar0 && network_does_network_id_exist(&(Local_16.f_7.f_14[iVar3]))) && network_has_control_of_network_id(&(Local_16.f_7.f_14[iVar3])))
		{
			iVar4 = net_to_ent(&(Local_16.f_7.f_14[iVar3]));
			set_entity_as_no_longer_needed(&iVar4);
		}
		iVar3++;
	}
	remove_relationship_group(Local_204.f_19.f_25);
	iVar5 = 0;
	while (iVar5 < 8)
	{
		func_162(iVar5);
		iVar5++;
	}
	iVar6 = 0;
	while (iVar6 < 27)
	{
		_0xef51242e35242b47(func_163(iVar6));
		iVar6++;
	}
	_delete_scenario_point(Local_204.f_19.f_24);
	iVar5 = 0;
	while (iVar5 < 8)
	{
		if (_does_scenario_point_exist(Local_204.f_19.f_130[iVar5]->f_2))
		{
			_delete_scenario_point(Local_204.f_19.f_130[iVar5]->f_2);
		}
		iVar5++;
	}
	clear_sequence_task(&(Local_204.f_19.f_159));
	clear_sequence_task(&(Local_204.f_19.f_160));
	func_164();
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_64(var uParam0)
{
	if (!func_165(uParam0))
	{
		return -1;
	}
	iVar0 = func_166(uParam0, uParam0->f_9);
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
			iVar0 = func_166(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_65(int iParam0)
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

void func_66(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_167(uParam0, iParam1);
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

void func_67(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_68(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_168(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_71(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_171(uParam0, 0);
			func_171(uParam0, 1);
			func_171(uParam0, 4);
			func_171(uParam0, 5);
			break;
		case 1:
			func_171(uParam0, 2);
			func_171(uParam0, 3);
			func_171(uParam0, 6);
			func_171(uParam0, 7);
			func_172(uParam0, 2);
			break;
		default:
			func_168(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_170(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_170(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_170(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_170(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_170(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_170(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_170(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_170(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_170(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_170(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_170(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_170(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_72(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 8);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 7);
			func_170(uParam0, 8);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 6);
			func_170(uParam0, 7);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 5);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_169(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_168(uParam0);
	func_172(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_168(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_168(uParam0);
	func_172(uParam0, 1);
	func_172(uParam0, 4);
	func_172(uParam0, 8);
	func_172(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_175(func_108(iParam2)) };
			break;
	}
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_176(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_176(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_176(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_176(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			Jump @589; //curOff = 391
			func_169(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			Jump @589; //curOff = 430
			func_169(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			Jump @589; //curOff = 469
			func_169(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			Jump @589; //curOff = 508
			func_169(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			Jump @589; //curOff = 547
			func_169(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
		}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_177(uParam0, iParam2);
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

void func_82(var uParam0, int iParam1)
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
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_178(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_178(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_178(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
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
			func_179(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_179(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_179(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
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
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_168(uParam0);
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
			func_170(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_170(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_170(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_170(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_170(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_170(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_168(uParam0);
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
			func_170(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_170(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_170(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_170(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_170(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_170(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_170(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_170(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_170(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
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
			func_180(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
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
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_168(uParam0);
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
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
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
			func_182(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
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
	uParam0->f_28[0] = -2109368060;
	func_168(uParam0);
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
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
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
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_93(var uParam0, int iParam1, int iParam2)
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
	func_184(uParam0, iParam1, iParam2);
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

void func_94(var uParam0, int iParam1, int iParam2)
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
	func_185(uParam0, iParam1, iParam2);
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

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_168(uParam0);
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
			func_170(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_170(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_170(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_170(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_170(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_170(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_170(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_170(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_170(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_170(uParam0, 1);
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_100(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_187(iParam1);
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
	*uParam0 = func_188(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_172(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_190(func_189(iVar0), iParam2);
		uParam0->f_15[0] = func_191(func_189(iVar0), iParam2);
		uParam0->f_5 = func_192(iVar0, iParam2);
		uParam0->f_11 = { func_193(iVar0, iParam2) };
	}
}

int func_101(int iParam0)
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

int func_102(int iParam0, var uParam1, int iParam2)
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

struct<2> func_103()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_104(var uParam0)
{
	func_194(uParam0, 0);
	func_195(uParam0, 0);
	func_196(uParam0, 1);
	func_197(uParam0, 1);
	func_198(uParam0, 0);
	func_199(uParam0, 1);
	func_200(uParam0, 1, 1, 1);
}

bool func_105(int iParam0)
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

bool func_106(var uParam0, int iParam1)
{
	return func_201(uParam0->f_25, iParam1);
}

void func_107(int iParam0)
{
	if (Local_16 != iParam0)
	{
		Local_16 = iParam0;
	}
}

int func_108(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_109(int iParam0)
{
	if (!func_117(iParam0))
	{
		func_202(&(Local_16.f_1), iParam0);
	}
}

bool func_110(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	return (func_203(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_111(int iParam0)
{
	if (Local_16.f_2 != iParam0)
	{
		Local_16.f_2 = iParam0;
	}
}

bool func_112(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_16.f_3.f_1))
	{
		return true;
	}
	if (func_204(Local_204.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_16.f_3))
	{
		if (_0x397769175a7dbb30(Local_204.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_205(&uVar1, Param0);
		Local_16.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_133(128);
	}
	else if (!func_116(128, 255))
	{
		Local_16.f_3.f_1 = func_206(Param0);
		if (_0xf6a8a652a6b186cd(Local_16.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = _0xb33a604345f58202(Local_16.f_3);
	switch (iVar0)
	{
		case 3:
			Local_16.f_3.f_1 = _0x351d71b8b72b858b(Local_16.f_3);
			return true;
		case 4:
			Local_16.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_113(int iParam0)
{
	return iParam0 != 0;
}

void func_114(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_115(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_116(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_159(&(Local_43[iParam1]), iParam0);
}

bool func_117(int iParam0)
{
	return func_159(Local_16.f_1, iParam0);
}

bool func_118()
{
	return true;
}

void func_119()
{
}

bool func_120()
{
	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!network_does_network_id_exist(&(Local_16.f_7.f_8[iVar2])))
		{
			if (func_208(iVar2, &bVar1, 0, 0) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 <= 0)
			{
				if (!network_does_network_id_exist(&(Local_16.f_7.f_14[iVar3])))
				{
					if (func_209(iVar3, &bVar1) || bVar1)
					{
						iVar0 = 0;
					}
					else
					{
						iVar3++;
					}
					if (bVar1)
					{
						func_210();
					}
					return iVar0;
				}
			}
		}
	}
}

bool func_121()
{
	return true;
}

void func_122()
{
}

void func_123()
{
	if (!func_117(32) && func_211(32))
	{
		func_109(32);
	}
	if (!func_117(64) && func_211(64))
	{
		func_109(64);
	}
	if (!func_117(16) && func_212(16))
	{
		func_109(16);
	}
	if ((!func_117(2048) && func_211(2048)) && !func_211(4096))
	{
		func_109(2048);
	}
}

void func_124()
{
	if (!bVar0 && func_117(16))
	{
		func_111(1);
		return;
	}
	if (func_117(2048) && !func_211(4096))
	{
		func_111(6);
		return;
	}
}

void func_125()
{
}

bool func_126()
{
	if (func_213())
	{
		return true;
	}
	func_214();
	func_215();
	func_216();
	switch (Local_16.f_7)
	{
		case 0:
			func_217();
			break;
		case 1:
			func_218();
			break;
		case 2:
			func_219();
			break;
		case 3:
			func_220();
			break;
		case 4:
			func_221();
			break;
		case 5:
			func_222();
			break;
		case 6:
			func_223();
			break;
		case 7:
			func_224();
			break;
	}
	return false;
}

void func_127()
{
}

bool func_128()
{
	iVar0 = func_225(0);
	if ((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || func_226(iVar0, 518218985))
	{
		return true;
	}
	return false;
}

void func_129(int iParam0)
{
	if (func_60(iParam0))
	{
		func_227(&(Local_204.f_7), iParam0);
	}
}

int func_130(int iParam0, int iParam1, bool bParam2)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_229(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_230(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_131(int iParam0)
{
	if (!func_60(iParam0))
	{
		func_202(&(Local_204.f_7), iParam0);
	}
}

void func_132(int iParam0)
{
	if (func_159(&(Local_43[participant_id_to_int()]), iParam0))
	{
		func_227(Local_43[participant_id_to_int()], iParam0);
	}
}

void func_133(int iParam0)
{
	if (!func_116(iParam0, 255))
	{
		func_202(Local_43[participant_id_to_int()], iParam0);
	}
}

void func_134(int iParam0)
{
	if (Local_204.f_8 != iParam0)
	{
		Local_204.f_8 = iParam0;
	}
}

bool func_135()
{
	sVar0 = "GRVR";
	sVar1 = "OREGRAU";
	iVar2 = 1;
	if (_does_text_database_exist(sVar0) && _does_text_database_exist(sVar1))
	{
		_text_database_request(sVar0);
		_text_database_request(sVar1);
		if (!_text_database_has_loaded(sVar0) || !_text_database_has_loaded(sVar1))
		{
			iVar2 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_232(func_231(iVar3)))
		{
			iVar2 = 0;
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		if (!func_232(func_233(iVar4)))
		{
			iVar2 = 0;
		}
		iVar4++;
	}
	if (!_request_scenario_type(855887031, 15, 0, 0) || !_request_scenario_type(-1907387938, 15, 0, 0))
	{
		iVar2 = 0;
	}
	if (!_has_scenario_type_loaded(855887031, false) || !_has_scenario_type_loaded(-1907387938, false))
	{
		iVar2 = 0;
	}
	return iVar2;
}

bool func_136()
{
	bVar0 = false;
	return !bVar0;
}

void func_137(var uParam0)
{
	*uParam0 = 0;
}

void func_138()
{
}

int func_139()
{
	return 1;
}

int func_140()
{
	return 1;
}

int func_141(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_142()
{
	if (!func_60(1))
	{
		func_234(Local_204.f_9);
		func_131(1);
	}
}

void func_143()
{
}

void func_144()
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (network_does_network_id_exist(&(Local_16.f_7.f_8[iVar0])))
		{
			Local_204.f_19.f_11[iVar0]->f_1 = net_to_ped(&(Local_16.f_7.f_8[iVar0]));
			iVar1 = func_225(iVar0);
			func_236(&(Local_204.f_19.f_26), iVar1, func_235(iVar0), 0);
			if (network_has_control_of_entity(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						set_blocking_of_non_temporary_events(iVar1, true);
						set_ped_config_flag(iVar1, 330, true);
						set_ped_config_flag(iVar1, 331, true);
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (network_does_network_id_exist(&(Local_16.f_7.f_14[iVar2])))
		{
			Local_204.f_19.f_22[iVar2] = net_to_obj(&(Local_16.f_7.f_14[iVar2]));
		}
		iVar2++;
	}
	Local_204.f_19.f_24 = create_scenario_point(855887031, func_237(0), func_238(0), 0, 0, 0);
	_set_scenario_point_flag(Local_204.f_19.f_24, 25, true);
	_set_scenario_point_flag(Local_204.f_19.f_24, 23, true);
}

void func_145()
{
}

void func_146()
{
}

void func_147()
{
	if (func_204(Local_204.f_15))
	{
		return;
	}
	if (func_239())
	{
		return;
	}
	if (func_240(Local_204.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_204.f_15);
		if (fVar0 < 200f)
		{
			func_133(4096);
		}
		else if (fVar0 < 400f)
		{
			func_132(4096);
			func_133(2048);
		}
		else
		{
			func_132(4096);
			func_132(2048);
		}
	}
}

void func_148()
{
	func_241();
	func_242();
}

void func_149()
{
	if (func_243())
	{
		func_133(8);
	}
	else
	{
		func_132(8);
	}
}

void func_150()
{
	func_244();
	func_245();
	func_246();
	func_247();
	func_248(Local_16.f_7);
	func_249();
	func_250();
	func_251();
	if (!func_252())
	{
		func_253(256);
	}
	else if (func_254(256, 255))
	{
		func_255(256);
	}
	switch (Local_204.f_19)
	{
		case 0:
			func_256();
			break;
		case 1:
			func_257();
			break;
		case 2:
			func_258();
			break;
		case 3:
			func_259();
			break;
		case 4:
			func_260();
			break;
		case 5:
			func_261();
			break;
		case 6:
			func_262();
			break;
		case 7:
			func_263();
			break;
	}
}

void func_151()
{
	if (!func_116(8, 255))
	{
		func_133(16);
	}
	else
	{
		func_132(16);
	}
}

void func_152()
{
	Local_204.f_6 = -1;
	Local_204.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_204.f_5 = (Local_204.f_5 || Local_43[iVar0]) // PointerArith;
			Local_204.f_6 = (Local_204.f_6 && Local_43[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_153()
{
	iVar0 = func_225(0);
	iVar1 = func_225(3);
	iVar2 = func_225(4);
	if ((is_entity_dead(iVar0) && !get_ped_config_flag(iVar0, 11, true)) && func_264(iVar0, Global_34))
	{
		func_265(-1376314322, get_player_index());
		func_266(4, Local_204.f_4);
	}
	if (func_267(iVar0, 518218985, 1, 0))
	{
		if (is_ped_using_any_scenario(iVar0))
		{
			_0xeeed8fafec331a70(iVar0, get_entity_coords(get_player_ped(func_268(get_entity_coords(iVar0, false, false), &uVar3, 1203982208, 0, 0, 0)), true, false), 3);
		}
		_task_smart_flee_style_coord_via(iVar0, get_entity_coords(iVar0, false, false), 3, func_269(), 0, -1082130432, -1, 0);
	}
	if (func_267(iVar1, 518218985, 1, 0))
	{
		_task_smart_flee_style_coord(iVar1, get_entity_coords(iVar1, false, false), 3, 0, -1082130432, -1, 0);
	}
	if (func_267(iVar2, 518218985, 1, 0))
	{
		_task_smart_flee_style_coord(iVar2, get_entity_coords(iVar2, false, false), 3, 0, -1082130432, -1, 0);
	}
	return true;
}

void func_154()
{
}

bool func_155(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_156(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_271(func_270(Param0));
	iVar1 = func_272(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_273(Param0, &Var2);
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

void func_157(int iParam0, int iParam1)
{
	iVar0 = func_274(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_275(iVar0);
}

void func_158(int iParam0, int iParam1)
{
	func_114(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_276(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_277(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_278(iParam0);
			break;
	}
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_160(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_161(int iParam0)
{
	if (!does_blip_exist(&(Local_204.f_19.f_11[iParam0])))
	{
		return;
	}
	remove_blip(Local_204.f_19.f_11[iParam0]);
}

void func_162(int iParam0)
{
	if (!does_blip_exist(Local_204.f_19.f_130[iParam0]->f_1))
	{
		return;
	}
	remove_blip(&(Local_204.f_19.f_130[iParam0]->f_1));
}

char* func_163(int iParam0)
{
	iVar4 = Local_204.f_4;
	if (iVar4 == 0)
	{
		StringCopy(&cVar0, "OREGR_1_", 32);
	}
	else if (iVar4 == 1)
	{
		StringCopy(&cVar0, "OREGR_2_", 32);
	}
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "DIGGING", 32);
			break;
		case 1:
			StringConCat(&cVar0, "CALLFIR", 32);
			break;
		case 2:
			StringConCat(&cVar0, "CALLRET", 32);
			break;
		case 3:
			StringConCat(&cVar0, "PREANT", 32);
			break;
		case 4:
			StringConCat(&cVar0, "PRESHOT", 32);
			break;
		case 5:
			StringConCat(&cVar0, "NAPPRCH", 32);
			break;
		case 6:
			StringConCat(&cVar0, "LEAVE", 32);
			break;
		case 7:
			StringConCat(&cVar0, "SHOVEL", 32);
			break;
		case 8:
			StringConCat(&cVar0, "NSHOVEL", 32);
			break;
		case 9:
			StringConCat(&cVar0, "ASKPOSS", 32);
			break;
		case 10:
			StringConCat(&cVar0, "RETHELP", 32);
			break;
		case 11:
			StringConCat(&cVar0, "GETSHVE", 32);
			break;
		case 12:
			StringConCat(&cVar0, "AGREE", 32);
			break;
		case 13:
			StringConCat(&cVar0, "PAGREE", 32);
			break;
		case 14:
			StringConCat(&cVar0, "HURRY", 32);
			break;
		case 15:
			StringConCat(&cVar0, "RETDIG", 32);
			break;
		case 16:
			StringConCat(&cVar0, "DIDLE", 32);
			break;
		case 17:
			StringConCat(&cVar0, "NFIND", 32);
			break;
		case 18:
			StringConCat(&cVar0, "NFINDF", 32);
			break;
		case 19:
			StringConCat(&cVar0, "FOUND", 32);
			break;
		case 20:
			StringConCat(&cVar0, "LAWFIND", 32);
			break;
		case 21:
			StringConCat(&cVar0, "LAWTIME", 32);
			break;
		case 22:
			StringConCat(&cVar0, "LARRIVE", 32);
			break;
		case 23:
			StringConCat(&cVar0, "FLEE", 32);
			break;
		case 24:
			StringConCat(&cVar0, "FOLFLEE", 32);
			break;
		case 25:
			StringConCat(&cVar0, "ATTACK", 32);
			break;
		case 26:
			StringConCat(&cVar0, "IDLE", 32);
			break;
	}
	return func_279(&cVar0);
}

void func_164()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_162(iVar0);
		iVar0++;
	}
	if (func_280("NB_GRAVEROBBER_OBJ_GOTO_DIG", 1))
	{
		func_281(32768);
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

bool func_165(var uParam0)
{
	if (func_36(*uParam0))
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

int func_166(var uParam0, int iParam1)
{
	iVar0 = func_282(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_283(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
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

void func_167(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_284(uParam0);
			break;
		case 1:
			func_284(uParam0);
			break;
		case 2:
			func_284(uParam0);
			break;
		case 3:
			func_285(uParam0);
			break;
		case 4:
			func_284(uParam0);
			break;
		case 5:
			func_284(uParam0);
			break;
		case 6:
			func_285(uParam0);
			break;
		case 7:
			func_285(uParam0);
			break;
		case 8:
			func_285(uParam0);
			break;
		case 9:
			func_284(uParam0);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

void func_168(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_171(uParam0, iVar0);
		iVar0++;
	}
}

void func_169(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_170(uParam0, iVar0);
		iVar0++;
	}
}

void func_170(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_171(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_172(var uParam0, int iParam1)
{
	func_229(&(uParam0->f_25), iParam1);
}

void func_173(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_171(uParam0, 0);
			break;
		case 1:
		case 2:
			func_171(uParam0, 1);
			func_171(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_171(uParam0, 0);
			func_171(uParam0, 2);
			break;
		case 8:
			func_171(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_171(uParam0, 1);
			break;
		default:
			func_168(uParam0);
			break;
	}
}

void func_174(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_286(uParam0);
			break;
		case 1:
			func_287(uParam0);
			break;
		case 2:
			func_288(uParam0);
			break;
		case 3:
			func_289(uParam0);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

Vector3 func_175(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_176(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_290(uParam0);
			break;
		case 1:
		case 2:
			func_291(uParam0);
			break;
		case 3:
		case 4:
			func_292(uParam0);
			break;
		default:
			func_168(uParam0);
			break;
	}
	func_169(uParam0);
}

void func_177(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_171(uParam0, 0);
			func_171(uParam0, 2);
			break;
		case 1:
			func_171(uParam0, 1);
			func_171(uParam0, 3);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

void func_178(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_170(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 0);
			break;
		default:
			func_170(uParam0, 0);
			break;
	}
	func_168(uParam0);
}

void func_179(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_170(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_170(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_170(uParam0, 2);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_180(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_170(uParam0, 0);
			func_171(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 1);
			func_171(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 2);
			func_171(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_170(uParam0, 3);
			func_171(uParam0, 0);
			break;
	}
}

void func_181(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_170(uParam0, 0);
			func_171(uParam0, 0);
			break;
		case 2:
			func_170(uParam0, 1);
			func_171(uParam0, 0);
			break;
		case 3:
		case 4:
			func_170(uParam0, 2);
			func_171(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 3);
			func_171(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 4);
			func_171(uParam0, 1);
			break;
	}
}

void func_182(var uParam0, int iParam1)
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
			func_170(uParam0, 3);
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
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_183(var uParam0, int iParam1)
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
			func_170(uParam0, 3);
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
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_184(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_171(uParam0, 1);
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		default:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
	}
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_171(uParam0, 1);
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			break;
		default:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
	}
}

void func_186(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_168(uParam0);
			func_169(uParam0);
			break;
		default:
			func_168(uParam0);
			func_169(uParam0);
			break;
	}
}

int func_187(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_189(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_190(int iParam0, int iParam1)
{
	if (func_293(&Var1, iParam0) && func_294(&Var1, iParam1))
	{
		func_295(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_191(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_293(&Var1, iParam0) && func_294(&Var1, iParam1))
	{
		func_295(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_192(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_296(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_193(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_296(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_194(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 16384);
	}
	else
	{
		func_202(&(uParam0->f_2), 16384);
	}
}

void func_195(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 2048);
	}
	else
	{
		func_202(&(uParam0->f_2), 2048);
	}
}

void func_196(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 256);
	}
	else
	{
		func_202(&(uParam0->f_2), 256);
	}
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 16);
	}
	else
	{
		func_227(uParam0, 67108864);
		func_227(uParam0, 16);
	}
}

void func_198(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_227(&(uParam0->f_2), 128);
	}
	else
	{
		func_202(&(uParam0->f_2), 128);
	}
}

void func_199(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 256);
	}
	else
	{
		func_227(uParam0, 256);
	}
}

void func_200(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_202(uParam0, 268435456);
	}
	else
	{
		func_227(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_202(uParam0, 1073741824);
	}
	else
	{
		func_227(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_202(uParam0, 536870912);
	}
	else
	{
		func_227(uParam0, 536870912);
	}
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_202(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_203(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	iVar0 = func_297(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_204(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_205(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_206(struct<31> Param0)
{
	func_205(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_207(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_298(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

bool func_208(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (network_does_network_id_exist(&(Local_16.f_7.f_8[iParam0])))
	{
		return true;
	}
	if (!can_register_mission_peds(1))
	{
		*uParam1 = 1;
		return false;
	}
	if (bParam2)
	{
		if (!network_has_control_of_network_id(iParam3) && !network_request_control_of_network_id(iParam3))
		{
			*uParam1 = 1;
			return false;
		}
		if (!func_299(Local_16.f_7.f_8[iParam0], iParam3, func_231(iParam0), -1, 1, 1, 1, 0))
		{
			*uParam1 = 1;
			return false;
		}
	}
	else
	{
		if (iParam0 == 3)
		{
			if (!func_300(&vVar0, &fVar3))
			{
				*uParam1 = 1;
				return false;
			}
		}
		else if (iParam0 == 4)
		{
			vVar0 = { get_entity_coords(func_225(3), true, false) + _0x935a30aa88fb1014(func_225(3)) * Vector(1.5f, 1.5f, 1.5f) - Vector(1f, 0f, 0f) };
			fVar3 = get_entity_heading(func_225(3));
		}
		else
		{
			vVar0 = { func_237(iParam0) };
			fVar3 = func_238(iParam0);
		}
		if (!func_301(Local_16.f_7.f_8[iParam0], func_231(iParam0), vVar0, fVar3, 1, 0, 1, 1, 1))
		{
			*uParam1 = 1;
			return false;
		}
	}
	Local_204.f_19.f_11[iParam0]->f_1 = net_to_ped(&(Local_16.f_7.f_8[iParam0]));
	if (!_0xa0bc8faed8cfeb3c(Local_204.f_19.f_11[iParam0]->f_1))
	{
		return false;
	}
	return true;
}

int func_209(int iParam0, var uParam1)
{
	if (!can_register_mission_objects(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_303(Local_16.f_7.f_14[iParam0], func_233(iParam0), func_302(iParam0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	else
	{
		set_entity_rotation(net_to_obj(&(Local_16.f_7.f_14[iParam0])), func_304(iParam0), 2, true);
	}
	return 1;
}

void func_210()
{
	func_111(2);
}

bool func_211(int iParam0)
{
	return func_159(Local_204.f_5, iParam0);
}

bool func_212(int iParam0)
{
	return func_159(Local_204.f_6, iParam0);
}

bool func_213()
{
	if (Local_16.f_7 == 8)
	{
		return true;
	}
	iVar0 = func_225(0);
	if (!does_entity_exist(iVar0) || (is_entity_dead(iVar0) && !get_ped_config_flag(iVar0, 11, true)))
	{
		return true;
	}
	return false;
}

void func_214()
{
	if (func_305() && Local_16.f_7 != 6)
	{
		func_306(5);
	}
}

void func_215()
{
	switch (Local_16.f_7.f_6)
	{
		case 0:
			func_307(1);
			break;
		case 1:
			if (func_308(&(Local_16.f_7.f_2)) > (45f - func_309()) || func_310(32))
			{
				func_307(2);
			}
			break;
		case 2:
			if (!func_208(3, &uVar0, 0, 0))
			{
				return;
			}
			if (!func_208(4, &uVar0, 0, 0))
			{
				return;
			}
			func_307(3);
			break;
		case 3:
			if (!func_208(1, &uVar0, 1, &(Local_16.f_7.f_8[3])))
			{
				return;
			}
			if (!func_208(2, &uVar0, 1, &(Local_16.f_7.f_8[4])))
			{
				return;
			}
			func_307(4);
			break;
		case 4:
			if (Local_204.f_19.f_158 < 0f)
			{
				func_307(5);
			}
			if (func_312(func_225(3), func_311(), 5f, 1, 1) || func_312(func_225(4), func_311(), 5f, 1, 1))
			{
				func_307(5);
			}
			break;
		case 5:
			if (!is_any_speech_playing(func_225(1)) || !func_312(func_225(3), func_311(), 30f, 1, 1))
			{
				func_307(6);
			}
			break;
		case 6:
			if (func_308(&(Local_204.f_19.f_3)) > 2f || !func_312(func_225(3), func_311(), 30f, 1, 1))
			{
				func_307(7);
			}
			break;
	}
}

void func_216()
{
	if (func_310(8))
	{
		if (!func_313(4))
		{
			func_314(8);
		}
	}
}

void func_217()
{
	if (func_239())
	{
		func_315(1);
		Local_16.f_7.f_17 = func_316(0, 0);
		func_306(1);
	}
}

void func_218()
{
	if ((func_317(7) || func_317(10)) && !func_318(1))
	{
		Local_16.f_7.f_17 = func_316(0, 1);
		func_306(2);
	}
	if (func_317(8) || func_317(11))
	{
		func_319(&(Local_16.f_7.f_2));
		Local_16.f_7.f_5 = 45f;
		func_306(7);
	}
	if (func_317(4))
	{
		func_306(5);
	}
}

void func_219()
{
	if (!func_318(1))
	{
		func_315(2);
	}
	if (func_317(12) || func_317(13))
	{
		func_315(0);
		Local_16.f_7.f_19 = get_random_int_in_range(200, 249);
		func_306(3);
	}
	if (func_317(15))
	{
		func_315(0);
		func_306(7);
		func_320(1024);
		func_319(&(Local_16.f_7.f_2));
		Local_16.f_7.f_5 = 45f;
	}
}

void func_220()
{
	if (func_317(20) || func_317(21))
	{
		func_321(&(Local_16.f_7.f_2));
		func_322();
		func_306(4);
	}
	if (!func_310(32))
	{
		if (func_317(19))
		{
			func_319(&(Local_16.f_7.f_2));
			Local_16.f_7.f_5 = 5f;
			func_320(32);
		}
		else if (func_313(8192))
		{
			func_319(&(Local_16.f_7.f_2));
		}
	}
	if (!func_323(&(Local_16.f_7.f_2)) && func_324(0))
	{
		func_319(&(Local_16.f_7.f_2));
		Local_16.f_7.f_5 = 45f;
	}
}

void func_221()
{
	iVar0 = func_225(0);
	if (func_226(iVar0, 518218985))
	{
		func_306(6);
	}
}

void func_222()
{
	func_315(0);
	iVar0 = func_225(0);
	if (func_226(iVar0, 518218985))
	{
		func_320(512);
		func_306(6);
	}
}

void func_223()
{
	iVar0 = func_225(0);
	if (does_entity_exist(iVar0) && vdist(get_entity_coords(func_325(0), true, false), get_entity_coords(iVar0, false, false)) > 100f)
	{
		func_306(8);
	}
}

void func_224()
{
	if (func_317(22))
	{
		func_322();
		func_306(4);
	}
}

int func_225(int iParam0)
{
	return Local_204.f_19.f_11[iParam0]->f_1;
}

bool func_226(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_228(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_229(var uParam0, int iParam1)
{
	func_326(uParam0, iParam1);
}

void func_230(var uParam0, int iParam1)
{
	func_327(uParam0, iParam1);
}

int func_231(int iParam0)
{
	iVar0 = Local_204.f_4;
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return 1438071047;
				case 1:
					return 2087484445;
				default:
					break;
			}
			break;
		case 3:
		case 4:
			return 2030804811;
		case 1:
		case 2:
			return func_328();
	}
	return 0;
}

bool func_232(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1935100224;
		default:
			break;
	}
	return 0;
}

void func_234(struct<2> Param0)
{
	if (func_272(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_272(Param0)))
	{
		_0x99230691875fc218(func_270(Param0), func_272(Param0), Global_35);
	}
}

char* func_235(int iParam0)
{
	iVar0 = Local_204.f_4;
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE005_MALE4";
				case 1:
					return "RE005_FEMALE5";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_236(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_329(uParam0, iParam1, sParam2))
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

Vector3 func_237(int iParam0)
{
	switch (func_330())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -228.7198f, 824.1839f, 123.3019f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1274.578f, -1218.286f, 80.6496f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -954.4733f, -1203.246f, 54.5241f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -5442.537f, -2904.509f, -0.0668f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -4438.908f, -2693.073f, -12.033f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -3339.601f, -2869.283f, -6.9507f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1396.14f, -643.1758f, 70.4818f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1735.865f, -422.7769f, 47.1349f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1978.501f, -1902.647f, 41.0487f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 2757.999f, -1078.666f, 45.8905f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1762.115f, -237.9833f, 181.9701f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_238(int iParam0)
{
	switch (func_330())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 75f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 209f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 171f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 157f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 212f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 309f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 333f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 275f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 36f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 87f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 165f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_239()
{
	return (func_117(32) || func_116(32, 255));
}

bool func_240(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_331(iParam0, 1178968787) };
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

void func_241()
{
}

void func_242()
{
}

bool func_243()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_204.f_14))
	{
		return false;
	}
	if (func_332())
	{
		return false;
	}
	if (func_333(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_244()
{
	if (func_305())
	{
		return;
	}
	if (func_334(func_225(0), 0, &(Local_204.f_19.f_161), &(Local_204.f_19.f_193), 0, 0))
	{
		func_335(4, Local_204.f_4);
		func_336(0);
	}
}

void func_245()
{
	func_337(Local_16.f_7.f_6, &bVar0);
	switch (Local_16.f_7.f_6)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (bVar0)
			{
				Local_204.f_19.f_11[3]->f_1 = net_to_ped(&(Local_16.f_7.f_8[3]));
				Local_204.f_19.f_11[4]->f_1 = net_to_ped(&(Local_16.f_7.f_8[4]));
				if (network_has_control_of_entity(func_225(3)))
				{
					set_blocking_of_non_temporary_events(func_225(3), true);
					task_stand_still(func_225(3), -1);
				}
				if (network_has_control_of_entity(func_225(4)))
				{
					set_blocking_of_non_temporary_events(func_225(4), true);
					task_stand_still(func_225(4), -1);
				}
			}
			break;
		case 4:
			if (bVar0)
			{
				Local_204.f_19.f_11[1]->f_1 = net_to_ped(&(Local_16.f_7.f_8[1]));
				Local_204.f_19.f_11[2]->f_1 = net_to_ped(&(Local_16.f_7.f_8[2]));
				if (network_has_control_of_entity(func_225(1)))
				{
					set_blocking_of_non_temporary_events(func_225(1), true);
					_task_move_in_traffic_2(func_225(1), func_311(), 2f, 1f, 0, 0);
					set_ped_as_cop(func_225(1), true);
					_0x819add5ef1742f47(func_225(1), 7);
				}
				if (network_has_control_of_entity(func_225(2)))
				{
					set_blocking_of_non_temporary_events(func_225(2), true);
					_task_move_in_traffic_2(func_225(2), func_311(), 2f, 1f, 0, 0);
					set_ped_as_cop(func_225(2), true);
					_0x819add5ef1742f47(func_225(2), 7);
				}
			}
			if (Local_204.f_19.f_158 > 5f)
			{
				if (!func_312(func_225(1), func_311(), 100f, 1, 1))
				{
					fVar1 = 2f;
				}
				else if (!func_312(func_225(1), func_311(), 60f, 1, 1))
				{
					fVar1 = 1.75f;
				}
				else if (!func_312(func_225(1), func_311(), 40f, 1, 1))
				{
					fVar1 = 1.5f;
				}
				else if (!func_312(func_225(1), func_311(), 20f, 1, 1))
				{
					fVar1 = 1.25f;
				}
				else if (!func_312(func_225(1), func_311(), 10f, 1, 1))
				{
					fVar1 = 1f;
				}
				else
				{
					fVar1 = 0.5f;
				}
			}
			else if (!func_312(func_225(1), func_311(), 40f, 1, 1))
			{
				fVar1 = 2f;
			}
			else if (!func_312(func_225(1), func_311(), 20f, 1, 1))
			{
				fVar1 = 1.5f;
			}
			else if (!func_312(func_225(1), func_311(), 10f, 1, 1))
			{
				fVar1 = 1f;
			}
			else
			{
				fVar1 = 0.5f;
			}
			if (Local_204.f_19.f_158 > 5f)
			{
				if (!func_312(func_225(2), func_311(), 100f, 1, 1))
				{
					fVar2 = 2f;
				}
				else if (!func_312(func_225(2), func_311(), 60f, 1, 1))
				{
					fVar2 = 1.75f;
				}
				else if (!func_312(func_225(2), func_311(), 40f, 1, 1))
				{
					fVar2 = 1.5f;
				}
				else if (!func_312(func_225(2), func_311(), 20f, 1, 1))
				{
					fVar2 = 1.25f;
				}
				else if (!func_312(func_225(2), func_311(), 10f, 1, 1))
				{
					fVar2 = 1f;
				}
				else
				{
					fVar2 = 0.5f;
				}
			}
			else if (!func_312(func_225(2), func_311(), 40f, 1, 1))
			{
				fVar2 = 2f;
			}
			else if (!func_312(func_225(2), func_311(), 20f, 1, 1))
			{
				fVar2 = 1.5f;
			}
			else if (!func_312(func_225(2), func_311(), 10f, 1, 1))
			{
				fVar2 = 1f;
			}
			else
			{
				fVar2 = 0.5f;
			}
			if ((get_frame_count() % 15) == 0)
			{
				if (network_has_control_of_entity(func_225(1)))
				{
					_task_move_in_traffic_2(func_225(1), func_311(), 2f, fVar1, 0, 0);
				}
				if (network_has_control_of_entity(func_225(2)))
				{
					_task_move_in_traffic_2(func_225(2), func_311(), 2f, fVar2, 0, 0);
				}
			}
			if (network_has_control_of_entity(func_225(1)))
			{
				if (!func_338(func_225(1), 150319005))
				{
					if (func_312(func_225(1), func_311(), 20f, 1, 1) || Local_204.f_19.f_158 < 5f)
					{
						task_look_at_entity(func_225(1), func_225(0), 5000, 0, 51, 0);
					}
				}
			}
			if (network_has_control_of_entity(func_225(2)))
			{
				if (!func_338(func_225(2), 150319005))
				{
					if (func_312(func_225(2), func_311(), 20f, 1, 1) || Local_204.f_19.f_158 < 5f)
					{
						task_look_at_entity(func_225(2), func_225(0), 5000, 0, 51, 0);
					}
				}
			}
			break;
		case 5:
			if (bVar0)
			{
				if (Local_204.f_4 == 0)
				{
					func_339(func_225(1), "ALERT_POSSIBLE_SUSPECT_MALE", 291934926, 0, 1, 0, 0, 1);
				}
				else
				{
					func_339(func_225(1), "ALERT_POSSIBLE_SUSPECT_NEUTRAL", 291934926, 0, 1, 0, 0, 1);
				}
				func_340(39724151, func_225(1), 1);
				func_341(1, -1595050198, 0, 0);
				func_341(2, -1595050198, 0, 0);
				clear_sequence_task(&(Local_204.f_19.f_159));
				_0x23767d80c7eed7c6(&(Local_204.f_19.f_159), -748931393);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				task_turn_ped_to_face_entity(0, func_225(0), 0, -1082130432, -1082130432, -1082130432);
				close_sequence_task(Local_204.f_19.f_159);
				if (network_has_control_of_entity(func_225(1)))
				{
					_task_perform_sequence_2(func_225(1), Local_204.f_19.f_159, 0.5f, 1f);
				}
				clear_sequence_task(&(Local_204.f_19.f_160));
				_0x23767d80c7eed7c6(&(Local_204.f_19.f_160), 1648976982);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				task_turn_ped_to_face_entity(0, func_225(0), 0, -1082130432, -1082130432, -1082130432);
				close_sequence_task(Local_204.f_19.f_160);
				if (network_has_control_of_entity(func_225(2)))
				{
					_task_perform_sequence_2(func_225(2), Local_204.f_19.f_160, 0.5f, 1f);
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (bVar0)
			{
				func_339(func_225(1), "ITS_THEM", 1808677283, 0, 1, 0, 0, 1);
				if (network_has_control_of_entity(func_225(1)))
				{
					set_ped_accuracy(func_225(1), 0);
					task_combat_ped(func_225(1), func_225(0), 0, 0);
				}
				if (network_has_control_of_entity(func_225(2)))
				{
					task_grapple(func_225(2), func_225(0), 0, 1, 2f, 1, 0);
				}
				if (func_342())
				{
					func_341(1, -1595050198, 942020339, 0);
					func_341(2, -1595050198, 942020339, 0);
				}
				iVar3 = func_225(3);
				iVar4 = func_225(4);
				if (func_267(iVar3, 518218985, 1, 0))
				{
					_task_smart_flee_style_coord(iVar3, get_entity_coords(iVar3, false, false), 3, 0, -1082130432, -1, 0);
				}
				if (func_267(iVar4, 518218985, 1, 0))
				{
					_task_smart_flee_style_coord(iVar4, get_entity_coords(iVar4, false, false), 3, 0, -1082130432, -1, 0);
				}
			}
			if (is_entity_dead(func_225(0)))
			{
				iVar5 = func_225(1);
				if (network_has_control_of_entity(iVar5))
				{
					set_blocking_of_non_temporary_events(func_225(1), false);
					set_entity_as_no_longer_needed(&iVar5);
				}
				iVar6 = func_225(2);
				if (network_has_control_of_entity(iVar6))
				{
					set_blocking_of_non_temporary_events(func_225(2), false);
					set_entity_as_no_longer_needed(&iVar6);
				}
			}
			else
			{
				if (func_267(func_225(1), 780511057, 1, 0))
				{
					set_ped_accuracy(func_225(1), 0);
					task_combat_ped(func_225(1), func_225(0), 0, 0);
				}
				if (func_267(func_225(2), 1469008894, 1, 0))
				{
					task_grapple(func_225(2), func_225(0), 0, 1, 2f, 1, 0);
				}
			}
			break;
	}
}

void func_246()
{
	Local_204.f_19.f_128 = -1;
	Local_204.f_19.f_129 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_204.f_19.f_128 = (Local_204.f_19.f_128 && Local_43[iVar0]->f_1);
			Local_204.f_19.f_129 = (Local_204.f_19.f_129 || Local_43[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_247()
{
	Local_204.f_19.f_125 = -1;
	Local_204.f_19.f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_204.f_19.f_125 = (Local_204.f_19.f_125 && Local_43[iVar0]->f_1.f_2);
			Local_204.f_19.f_126 = (Local_204.f_19.f_126 || Local_43[iVar0]->f_1.f_2);
		}
		iVar0++;
	}
}

void func_248(int iParam0)
{
	if (Local_204.f_19 != iParam0)
	{
		Local_204.f_19 = iParam0;
	}
}

void func_249()
{
	if (func_310(8))
	{
		if (func_254(4, 255))
		{
			func_255(4);
			Local_43[participant_id_to_int()]->f_1.f_3 = -1;
		}
	}
	if (Local_16.f_7.f_7 != Local_204.f_19.f_6)
	{
		Local_204.f_19.f_6 = Local_16.f_7.f_7;
		if (func_254(2, 255))
		{
			func_343(Local_16.f_7.f_7);
		}
	}
}

void func_250()
{
	iVar0 = func_225(0);
	if (func_254(2, 255))
	{
		if (!func_344(0, 10f))
		{
			_0xe98d55c5983f2509(func_225(0));
			if (network_has_control_of_entity(iVar0))
			{
				set_ped_config_flag(iVar0, 297, true);
			}
			func_345();
			func_255(2);
		}
		else if (func_346(0, 0, 0))
		{
			if (!func_347(16))
			{
				func_343(Local_204.f_19.f_6);
				func_348(16);
			}
		}
		else if (func_347(16))
		{
			func_343(Local_204.f_19.f_6);
			func_281(16);
		}
	}
	else if (func_344(0, 10f))
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			if (_0x870708a6e147a9ad(iVar0, "", 7f, 0, 0, 0, 0, 0, 0, -1))
			{
				if (network_has_control_of_entity(iVar0))
				{
					set_ped_config_flag(iVar0, 130, true);
					set_ped_config_flag(iVar0, 178, false);
					set_ped_config_flag(iVar0, 297, true);
					set_ped_config_flag(iVar0, 301, false);
				}
				func_253(2);
			}
		}
	}
}

void func_251()
{
	bVar0 = true;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (func_350(func_349(iVar2)))
		{
			if (!func_351(iVar2))
			{
				switch (iVar2)
				{
					case 5:
					case 6:
					case 14:
					case 24:
					case 25:
					case 26:
						bVar0 = false;
						break;
					case 0:
						bVar0 = false;
						bVar1 = true;
						break;
				}
				func_352(iVar2, bVar0, bVar1);
			}
		}
		iVar2++;
	}
}

bool func_252()
{
	return func_353(85134332, 1);
}

void func_253(int iParam0)
{
	if (!func_207(&iVar0))
	{
		return;
	}
	func_202(&(Local_43[iVar0]->f_1), iParam0);
}

bool func_254(int iParam0, int iParam1)
{
	if (!func_298(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	if (!func_298(iParam1, 1))
	{
		return false;
	}
	if (func_159(Local_43[iParam1]->f_1, iParam0))
	{
		return true;
	}
	return false;
}

void func_255(int iParam0)
{
	if (!func_207(&iVar0))
	{
		return;
	}
	func_227(&(Local_43[iVar0]->f_1), iParam0);
}

void func_256()
{
	iVar0 = func_225(0);
	if (does_entity_exist(iVar0))
	{
		if (((!func_347(16384) && network_does_network_id_exist(&(Local_16.f_7.f_8[0]))) && network_has_control_of_entity(iVar0)) && _0xa0bc8faed8cfeb3c(iVar0))
		{
			if (Local_204.f_4 == 0)
			{
				_set_ped_body_component(iVar0, 67362891);
			}
			else
			{
				_set_ped_body_component(iVar0, -1704391393);
			}
			_update_ped_variation(iVar0, true, true, true, true, true);
			func_348(16384);
		}
		func_354(0, 0);
		if (vdist(Global_35, get_entity_coords(iVar0, false, false)) < 20f)
		{
			func_355();
		}
		if (func_267(iVar0, -76381094, 1, 0))
		{
			_task_use_scenario_point(iVar0, Local_204.f_19.f_24, 0, 0, false, true, 0, false, -1f, false);
		}
		func_356(iVar0, Global_35, 2, 1, 3);
	}
}

void func_257()
{
	iVar0 = func_225(0);
	func_356(iVar0, Global_35, 2, 1, 3);
	if (!func_342())
	{
		func_345();
	}
	else if (!func_347(1))
	{
		func_348(1);
		func_340(-296154796, iVar0, 1);
		func_341(0, -89429847, 0, "NB_GRAVEROBBER_BLIP_NAME");
		func_357(808, 0);
	}
	if (!_0x916b8e075abc8b4e(iVar0, 1))
	{
		_0xe7fa07624574b79a(iVar0, get_player_ped(Local_16.f_7.f_17), 2, 1, -1f, 1, 0, 1, 0);
		if (func_358())
		{
			switch (func_359())
			{
				case 0:
					func_354(1, 1);
					break;
				case 1:
					func_354(2, 1);
					break;
				case 2:
					func_354(3, 1);
					break;
				case 3:
					func_360(4, Local_204.f_4);
					func_335(4, Local_204.f_4);
					func_354(4, 1);
					return;
			}
		}
	}
	else if (func_344(0, 10f))
	{
		if (!func_318(1))
		{
			func_361(&(Local_204.f_19.f_155));
			if (func_252())
			{
				if (func_359() == 0)
				{
					func_354(7, 1);
				}
				else
				{
					func_354(10, 1);
				}
			}
			else
			{
				func_357(809, 0);
				if (!func_362(get_entity_coords(iVar0, false, false), 1101004800, 1, 0, 1, 1))
				{
					if (func_359() == 0)
					{
						func_354(8, 1);
					}
					else
					{
						func_354(11, 1);
					}
					func_315(0);
					func_363(&(Local_204.f_19.f_155));
				}
			}
		}
	}
	else if (Local_204.f_19.f_127 > 3)
	{
		func_364(6, &(Local_204.f_19.f_155), 1092616192);
	}
	else if (func_364(5, &(Local_204.f_19.f_155), 1092616192))
	{
		Local_204.f_19.f_127++;
	}
}

void func_258()
{
	if (func_254(128, 255) || !func_342())
	{
		func_345();
		return;
	}
	iVar0 = func_225(0);
	iVar1 = func_365();
	func_364(26, &(Local_204.f_19.f_155), 1092616192);
	switch (iVar1)
	{
		case 0:
			func_339(Global_34, "SILENT_GENERIC_AGREE", 291934926, iVar0, 1, 0, 0, 1);
			func_366(4, Local_204.f_4);
			func_367(4, Local_204.f_4);
			if (func_362(get_entity_coords(iVar0, false, false), 1101004800, 0, 1, 1, 1))
			{
				func_354(13, 1);
			}
			else
			{
				func_354(12, 1);
			}
			func_363(&(Local_204.f_19.f_155));
			break;
		case 1:
			func_339(Global_34, "SILENT_GENERIC_DISAGREE", 291934926, iVar0, 1, 0, 0, 1);
			func_253(128);
			if (func_362(get_entity_coords(iVar0, false, false), 1101004800, 1, 1, 1, 1))
			{
				func_354(9, 1);
			}
			else
			{
				func_354(15, 1);
			}
			func_363(&(Local_204.f_19.f_155));
			break;
	}
}

void func_259()
{
	Local_204.f_19.f_158 = (Local_16.f_7.f_5 - func_308(&(Local_16.f_7.f_2)));
	Var0 = { func_368() };
	if ((func_36(Var0) && !func_21(Local_204.f_9, Var0)) || !func_342())
	{
		func_164();
		if (!func_347(2048))
		{
			if ((!func_252() || !_0x3f59fe6f37869576(Local_16.f_7.f_17, get_player_index())) && func_369(Global_34, func_225(0), 35f, 0, 1))
			{
				func_348(2048);
				func_357(812, 1);
			}
		}
		return;
	}
	bVar2 = (is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@chest_01", "enter_rf", 1) || is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@nothing_01", "enter_rf", 1));
	bVar3 = (is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@chest_01", "exit", 1) || is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@nothing_01", "exit", 1));
	if (func_370(0))
	{
		bVar2 = true;
	}
	if (((bVar2 || bVar3) || is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@chest_01", "base", 1)) || is_entity_playing_anim(Global_34, "mech_pickup@mp_treasure@nothing_01", "base", 1))
	{
		func_253(4096);
	}
	else
	{
		func_255(4096);
	}
	if (func_324(0))
	{
		func_361(&(Local_204.f_19.f_155));
	}
	else if (!func_371(&(Local_204.f_19.f_155)))
	{
		func_363(&(Local_204.f_19.f_155));
	}
	if (!func_347(64))
	{
		func_372();
		func_357(810, 0);
		func_363(&(Local_204.f_19.f_155));
		func_265(-1258163578, player_id());
		func_373();
		func_374(1);
		func_348(64);
	}
	else if (!func_347(32768))
	{
		func_372();
		func_374(0);
		func_374(1);
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (!&Local_204.f_19.f_130[iVar4])
		{
			func_375(iVar4);
			if (!func_376(iVar4, 1))
			{
				Local_204.f_19.f_130[iVar4] = 1;
				func_162(iVar4);
				func_377(iVar4, 0);
			}
			else
			{
				if (bVar2 && func_378(iVar4, 1070386381, 0))
				{
					if (func_207(&iVar5))
					{
						set_bit(&(Local_43[iVar5]->f_1.f_1), iVar4);
					}
					if (iVar4 == Local_16.f_7.f_18)
					{
						func_253(8192);
					}
				}
				if (bVar3)
				{
					if (func_378(iVar4, 1070386381, 0))
					{
						Local_204.f_19.f_130[iVar4] = 1;
						func_162(iVar4);
						if (iVar4 == Local_16.f_7.f_18)
						{
							func_348(32);
							func_379(1);
							func_354(19, 1);
							func_164();
						}
						else if (!func_350(func_349(19)))
						{
							func_380(17);
							func_381(func_349(17));
							func_354(17, 0);
							func_357(811, 0);
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (func_317(19))
	{
		func_164();
	}
	else if (!func_324(0))
	{
		func_364(14, &(Local_204.f_19.f_155), 1092616192);
	}
	if (func_347(32))
	{
		if (Local_204.f_19.f_2 > 5 && !func_382(func_163(19)))
		{
			func_354(20, 1);
		}
	}
	else if (Local_204.f_19.f_2 > 5)
	{
		func_354(21, 1);
	}
}

void func_260()
{
	func_164();
	func_374(0);
	iVar0 = func_225(0);
	iVar1 = get_player_index();
	if (func_267(iVar0, 518218985, 1, 0))
	{
		if (is_ped_using_any_scenario(iVar0))
		{
			_0xeeed8fafec331a70(iVar0, get_entity_coords(Global_34, true, false), 3);
		}
		_task_smart_flee_style_coord_via(iVar0, get_entity_coords(iVar0, false, false), 3, func_269(), 0, -1082130432, -1, 0);
		set_ped_keep_task(iVar0, true);
	}
	if (!func_342() || func_310(1024))
	{
		return;
	}
	if (_0xad401c63158acbaa(iVar1))
	{
		_0xbd944a3d36e992de();
		report_police_spotted_player(iVar1);
	}
	else
	{
		if (network_is_host_of_this_script())
		{
			func_321(&(Local_16.f_7.f_2));
		}
		func_361(&(Local_204.f_19.f_155));
		_report_crime(get_player_index(), -1759599185, 0, 0, true);
		_0x75cbf20ba47e4f89(Global_35, func_383());
		clear_ped_tasks(Global_34, 1, 0);
	}
}

void func_261()
{
	iVar0 = func_225(0);
	func_161(0);
	if (func_267(iVar0, 518218985, 1, 0))
	{
		if (!func_351(4))
		{
			func_354(23, 1);
		}
		func_363(&(Local_204.f_19.f_155));
		if (is_ped_using_any_scenario(iVar0))
		{
			_0xeeed8fafec331a70(iVar0, get_entity_coords(Global_34, true, false), 3);
		}
		_task_smart_flee_style_ped_via(iVar0, Global_34, 3, func_269(), 0, -1082130432, -1, 0);
		set_ped_keep_task(iVar0, true);
	}
	func_164();
	func_374(0);
}

void func_262()
{
	func_161(0);
	func_164();
	func_374(0);
	if (func_310(512))
	{
		iVar0 = func_225(0);
		if (func_344(0, 30f) && get_entity_speed(iVar0) > 2f)
		{
			func_364(24, &(Local_204.f_19.f_155), 1092616192);
		}
		if (func_334(iVar0, 0, &(Local_204.f_19.f_161), &(Local_204.f_19.f_193), 0, 0))
		{
			func_354(25, 1);
		}
	}
}

void func_263()
{
	iVar0 = func_225(0);
	func_161(0);
	if (does_entity_exist(iVar0))
	{
		if (_0x916b8e075abc8b4e(iVar0, 1))
		{
			_0x541e5b41dca45828(iVar0, 2, 0);
		}
		func_354(0, 0);
		if (func_267(iVar0, -76381094, 1, 0))
		{
			_task_use_scenario_point(iVar0, Local_204.f_19.f_24, 0, 0, true, false, 0, false, -1f, false);
		}
		func_356(iVar0, Global_35, 2, 1, 1);
	}
	Local_204.f_19.f_158 = (Local_16.f_7.f_5 - func_308(&(Local_16.f_7.f_2)));
	if (Local_204.f_19.f_2 > 5 && func_362(get_entity_coords(iVar0, false, false), 1101004800, 0, 0, 0, 0))
	{
		func_354(22, 1);
	}
	func_364(16, &(Local_204.f_19.f_155), 1092616192);
}

bool func_264(int iParam0, int iParam1)
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

void func_265(int iParam0, int iParam1)
{
	if (func_28() != 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	Var0.f_6 = 0;
	_0x31010318ba9897ac(&uVar7, iParam1);
	func_384(&Var0, uVar7);
}

void func_266(int iParam0, int iParam1)
{
	iVar0 = func_385(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_386(iVar0, iParam0);
}

bool func_267(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_226(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

int func_268(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else if (bParam7 && !func_387(network_get_participant_index(iVar2), 1, 1))
		{
		}
		else
		{
			iVar4 = get_player_ped(iVar2);
			if ((iParam5 == 0 || iParam6 == 0) || get_relationship_between_peds(iParam6, iVar4) == iParam5)
			{
				fVar1 = vdist(get_entity_coords(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_269()
{
	switch (func_330())
	{
		case 0:
			return -233.4617f, 844.6315f, 122.6129f;
		case 1:
			return 1288.032f, -1189.977f, 78.9045f;
		case 2:
			return -950.2823f, -1199.22f, 54.5304f;
		case 3:
			return -5419.091f, -2927.675f, 0.1211f;
		case 4:
			return -4425.149f, -2669.405f, -10.1974f;
		case 5:
			return -3307f, -2875.213f, -6.9422f;
		case 6:
			return 1403.18f, -657.7051f, 71.3621f;
		case 7:
			return 1733.608f, -408.0414f, 47.4222f;
		case 8:
			return 1907.281f, -1837.189f, 42.4591f;
		case 9:
			return 2672.125f, -1071.982f, 46.4491f;
		case 10:
			return -1750.545f, -205.9765f, 186.3376f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_270(var uParam0, var uParam1)
{
	return uParam0;
}

int func_271(int iParam0)
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

int func_272(struct<2> Param0)
{
	return func_388(Param0);
}

void func_273(struct<2> Param0, var uParam2)
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
	switch (func_270(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_390(func_389(Param0));
			iVar5 = func_391(iVar4);
			if (!func_392(iVar5, 0))
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

int func_274(int iParam0, int iParam1)
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

void func_275(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_393(&Var0);
}

var func_276(int iParam0)
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

var func_277(int iParam0)
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

var func_278(int iParam0)
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

char[] func_279(char[4] cParam0)
{
	return cParam0;
}

bool func_280(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	return func_394(_0x4e88a65968a55c78(&Var0, iParam1));
}

void func_281(int iParam0)
{
	func_227(&(Local_204.f_19.f_1), iParam0);
}

int func_282(int iParam0)
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

int func_283(int iParam0)
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

void func_284(var uParam0)
{
	func_170(uParam0, 0);
	func_170(uParam0, 1);
	func_170(uParam0, 3);
	func_168(uParam0);
}

void func_285(var uParam0)
{
	func_169(uParam0);
	func_395(uParam0, 0, 3);
}

void func_286(var uParam0)
{
	func_170(uParam0, 0);
	func_171(uParam0, 0);
	func_171(uParam0, 1);
	func_171(uParam0, 2);
}

void func_287(var uParam0)
{
	func_170(uParam0, 1);
	func_168(uParam0);
}

void func_288(var uParam0)
{
	func_170(uParam0, 2);
	func_171(uParam0, 3);
}

void func_289(var uParam0)
{
	func_170(uParam0, 3);
	func_171(uParam0, 4);
}

void func_290(var uParam0)
{
	func_171(uParam0, 0);
	func_171(uParam0, 1);
}

void func_291(var uParam0)
{
	func_171(uParam0, 2);
	func_171(uParam0, 3);
}

void func_292(var uParam0)
{
	func_171(uParam0, 4);
	func_171(uParam0, 5);
}

bool func_293(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_294(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_295(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_296(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

int func_297(int iParam0)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_298(int iParam0, bool bParam1)
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

bool func_299(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_232(iParam2))
	{
		return false;
	}
	if (network_does_network_id_exist(iParam1))
	{
		iVar0 = net_to_ped(iParam1);
		iVar1 = func_396(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = ped_to_net(iVar1);
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam5)
			{
				_0x899a04afcc725d04(iVar1, _0xd42514c182121c23(iParam2));
			}
			if (bParam6)
			{
				set_ped_relationship_group_hash(iVar1, _get_default_relationship_group_hash(iParam2));
			}
			set_ped_random_component_variation(iVar1, 0);
			if (bParam4)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_300(var uParam0, float fParam1)
{
	switch (func_330())
	{
		case 0:
			*vVar0[0] = { -251.2197f, 758.0592f, 115.5893f };
			fVar10[0] = 21.09f;
			*vVar0[1] = { -266.963f, 878.2334f, 120.5908f };
			fVar10[1] = 144.01f;
			*vVar0[2] = { -344.5984f, 811.1165f, 115.7648f };
			fVar10[2] = 329f;
			break;
		case 1:
			*vVar0[0] = { 1277.565f, -1323.123f, 75.8876f };
			fVar10[0] = 53.1f;
			*vVar0[1] = { 1336.855f, -1312.174f, 75.5199f };
			fVar10[1] = 77.5f;
			*vVar0[2] = { 1329.518f, -1227.91f, 77.646f };
			fVar10[2] = 184.6f;
			break;
		case 2:
			*vVar0[0] = { -886.6879f, -1280.982f, 42.2734f };
			fVar10[0] = 5.6f;
			*vVar0[1] = { -831.2667f, -1255.728f, 42.3974f };
			fVar10[1] = 85.7f;
			*vVar0[2] = { -1013.165f, -1171.962f, 56.1873f };
			fVar10[2] = 277.1f;
			break;
		case 3:
			*vVar0[0] = { -5542.001f, -2871.902f, -5.3496f };
			fVar10[0] = 203.6f;
			*vVar0[1] = { -5403.203f, -2941.581f, -0.0103f };
			fVar10[1] = 94.6f;
			*vVar0[2] = { -5471.689f, -3032.933f, 1.345f };
			fVar10[2] = 342.8f;
			break;
		case 4:
			*vVar0[0] = { -4287.314f, -2708.227f, -0.2234f };
			fVar10[0] = 82f;
			*vVar0[1] = { -4597.123f, -2717.029f, -11.5793f };
			fVar10[1] = 277.8f;
			*vVar0[2] = { -4635.525f, -2726.111f, -11.7536f };
			fVar10[2] = 314.1f;
			break;
		case 5:
			*vVar0[0] = { -3396.749f, -2682.489f, -12.4196f };
			fVar10[0] = 209.3f;
			*vVar0[1] = { -3447.191f, -2624.067f, -13.3552f };
			fVar10[1] = 251.6f;
			*vVar0[2] = { -3517.623f, -2671.865f, -14.1462f };
			fVar10[2] = 327.7f;
			break;
		case 6:
			*vVar0[0] = { 1378.358f, -613.4116f, 68.2414f };
			fVar10[0] = 208.5f;
			*vVar0[1] = { 1436.938f, -679.8315f, 62.7299f };
			fVar10[1] = 70.9f;
			*vVar0[2] = { 1475.628f, -768.3727f, 49.6484f };
			fVar10[2] = 337.6f;
			break;
		case 7:
			*vVar0[0] = { 1594.255f, -614.9232f, 45.9416f };
			fVar10[0] = 327.7f;
			*vVar0[1] = { 1853.993f, -513.3081f, 42.0455f };
			fVar10[1] = 352.5f;
			*vVar0[2] = { 1885.757f, -506.7173f, 43.733f };
			fVar10[2] = 44.5f;
			break;
		case 8:
			*vVar0[0] = { 1870.178f, -1984.848f, 42.0783f };
			fVar10[0] = 269.8f;
			*vVar0[1] = { 2043.423f, -1913.978f, 40.5587f };
			fVar10[1] = 162.2f;
			*vVar0[2] = { 1810.613f, -1990.338f, 44.2861f };
			fVar10[2] = 280.2f;
			break;
		case 9:
			*vVar0[0] = { 2810.06f, -1132.781f, 45.6887f };
			fVar10[0] = 10f;
			*vVar0[1] = { 2835.656f, -1080.886f, 44.4807f };
			fVar10[1] = 103.5f;
			*vVar0[2] = { 2823.559f, -1065.006f, 43.9139f };
			fVar10[2] = 196.4f;
			break;
		case 10:
			*vVar0[0] = { -1655.833f, -277.4428f, 165.5705f };
			fVar10[0] = 121.3f;
			*vVar0[1] = { -1815.646f, -296.1807f, 171.4802f };
			fVar10[1] = 20.5f;
			*vVar0[2] = { -1801.109f, -332.2063f, 165.231f };
			fVar10[2] = 4.6f;
			break;
	}
	iVar14 = 0;
	while (iVar14 <= 2)
	{
		if (!func_397(*vVar0[iVar14], 1f, 150f))
		{
			*uParam0 = { *vVar0[iVar14] };
			*fParam1 = &fVar10[iVar14];
			return true;
		}
		iVar14++;
	}
	return false;
}

bool func_301(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_232(iParam1))
	{
		return false;
	}
	iVar0 = func_398(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

Vector3 func_302(int iParam0)
{
	switch (func_330())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -229.48f, 825.49f, 123.3f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1274.2f, -1219.43f, 80.41f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -955.6f, -1204.26f, 54.45f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -5444.22f, -2904.69f, -0.06f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -4439.59f, -2694.38f, -12.03f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -3338.17f, -2869.64f, -7.09f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1397.61f, -643.65f, 70.41f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1736.6f, -423.89f, 47.11f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1978.98f, -1901.6f, 41.03f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 2757.2f, -1080.49f, 46.69f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1763.27f, -238.25f, 181.76f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_303(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_232(iParam1))
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

Vector3 func_304(int iParam0)
{
	switch (func_330())
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
		case 10:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_305()
{
	return (func_117(64) || func_116(64, 255));
}

void func_306(int iParam0)
{
	if (Local_16.f_7 != iParam0)
	{
		Local_16.f_7 = iParam0;
	}
}

void func_307(int iParam0)
{
	if (Local_16.f_7.f_6 != iParam0)
	{
		Local_16.f_7.f_6 = iParam0;
	}
}

float func_308(var uParam0)
{
	if (!func_323(uParam0))
	{
		return 0f;
	}
	return (to_float(func_399(uParam0)) * 0.001f);
}

float func_309()
{
	switch (func_330())
	{
		case 0:
			return 22f;
		case 1:
			return 25f;
		case 2:
			return 25f;
		case 3:
			return 27f;
		case 4:
			return 27f;
		case 5:
			return 30f;
		case 6:
			return 15f;
		case 7:
			return 33f;
		case 8:
			return 20f;
		case 9:
			return 22f;
		case 10:
			return 23f;
		default:
			break;
	}
	return 30f;
}

bool func_310(int iParam0)
{
	return func_159(Local_16.f_7.f_1, iParam0);
}

Vector3 func_311()
{
	switch (func_330())
	{
		case 0:
			return -254.8877f, 830.9952f, 120.8842f;
		case 1:
			return 1230.443f, -1206.172f, 77.1858f;
		case 2:
			return -973.561f, -1222.889f, 54.9246f;
		case 3:
			return -5452.097f, -2944.441f, -0.5281f;
		case 4:
			return -4435.973f, -2716.111f, -11.5401f;
		case 5:
			return -3343.929f, -2822.948f, -7.4856f;
		case 6:
			return 1407.78f, -631.7525f, 65.3752f;
		case 7:
			return 1742.721f, -448.9362f, 47.9597f;
		case 8:
			return 1966.153f, -1952.845f, 43.0797f;
		case 9:
			return 2779.967f, -1090.223f, 46.7408f;
		case 10:
			return -1778.214f, -248.149f, 180.8537f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_312(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_400(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_313(int iParam0)
{
	return func_159(Local_204.f_19.f_129, iParam0);
}

void func_314(int iParam0)
{
	func_227(&(Local_16.f_7.f_1), iParam0);
}

void func_315(int iParam0)
{
	Local_16.f_7.f_7 = iParam0;
}

int func_316(int iParam0, bool bParam1)
{
	fVar3 = 80f;
	fVar4 = fVar3;
	iVar6 = 255;
	fVar0 = fVar3;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar5 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar5))
		{
		}
		else if (!network_is_player_a_participant(iVar5))
		{
		}
		else
		{
			iVar2 = network_get_participant_index(iVar5);
			if (!func_387(iVar2, 1, 1))
			{
			}
			else if (bParam1 && func_254(128, iVar2))
			{
			}
			else
			{
				iVar7 = get_player_ped(iVar5);
				fVar4 = vdist(get_entity_coords(iVar7, false, false), get_entity_coords(func_225(iParam0), true, false));
				if (fVar4 < fVar0)
				{
					iVar6 = iVar5;
					fVar0 = fVar4;
				}
			}
		}
		iVar1++;
	}
	return iVar6;
}

bool func_317(int iParam0)
{
	return is_bit_set(Local_16.f_7.f_16, iParam0);
}

bool func_318(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_319(var uParam0)
{
	func_401(uParam0, 0);
}

void func_320(int iParam0)
{
	func_202(&(Local_16.f_7.f_1), iParam0);
}

void func_321(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_322()
{
	add_relationship_group("NB_GRAVEROBBER_GRAVEROBBER", &(Local_204.f_19.f_25));
	if (does_entity_exist(func_225(0)))
	{
		set_ped_relationship_group_hash(func_225(0), Local_204.f_19.f_25);
	}
	set_relationship_between_groups(6, Local_204.f_19.f_25, 707888648);
}

bool func_323(var uParam0)
{
	return func_402(*uParam0, 1);
}

bool func_324(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 255;
		iVar1 = int_to_playerindex(iVar0);
		if (bParam0 && iVar1 == get_player_index())
		{
		}
		else if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_254(4096, iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_325(int iParam0)
{
	return get_player_ped(func_316(iParam0, 0));
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_328()
{
	switch (func_330())
	{
		case 0:
		case 1:
		case 10:
			return 1830978939;
		case 2:
			return -1891246613;
		case 3:
			return -1300496362;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return -369841376;
		case 9:
			return -4539399;
		default:
			break;
	}
	return -4539399;
}

bool func_329(var uParam0, int iParam1, char* sParam2)
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

int func_330()
{
	return Local_204.f_2;
}

struct<2> func_331(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_403(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_404(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

bool func_332()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_333(int iParam0)
{
	if (func_405(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_334(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_406(uParam2, 1, iVar0);
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
			if (func_407(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_409(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_410(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_411(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_412(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_413(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_414(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_415(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_416(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_416(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_417(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_418(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_419(uParam2, 4000))
				{
					if ((func_420(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_421(uParam2, iParam0)) && func_422(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_420(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_421(uParam2, iParam0)) && func_422(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_423(iParam0, Global_1940258->f_35))
					{
						func_424();
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_425(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_426() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_424();
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_427())
				{
					if (func_423(iParam0, Global_1940258->f_36))
					{
						func_424();
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_428(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_429(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_408(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_430(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_431(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_432(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_433(uParam2, 4000))
				{
					if (func_434(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_435(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_436(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_335(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_438(iParam1);
	func_386(iVar0, iParam0);
}

void func_336(bool bParam0)
{
	if (!func_116(64, 255))
	{
		iVar0 = func_274(Local_204.f_1, Local_204.f_2);
		func_439(iVar0);
		if (!func_116(1024, 255))
		{
			func_133(1024);
		}
		func_440(iVar0);
		if (bParam0)
		{
			func_335(Local_204.f_1, Local_204.f_4);
		}
		func_133(64);
	}
}

void func_337(int iParam0, bool bParam1)
{
	if (Local_204.f_19.f_2 != iParam0)
	{
		*bParam1 = 1;
		Local_204.f_19.f_2 = iParam0;
		func_319(&(Local_204.f_19.f_3));
	}
}

bool func_338(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_441(iParam0, &Var0);
}

void func_340(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_341(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!func_442(255))
	{
		func_161(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_204.f_19.f_11[iParam0])))
	{
		Local_204.f_19.f_11[iParam0] = _blip_add_for_entity(iParam1, func_225(iParam0));
		if (!is_string_null_or_empty(sParam3))
		{
			set_blip_name_from_text_file(&(Local_204.f_19.f_11[iParam0]), sParam3);
		}
	}
	if (iParam2 != 0)
	{
		_blip_set_modifier(&(Local_204.f_19.f_11[iParam0]), iParam2);
	}
}

bool func_342()
{
	if (Local_204.f_19 < 1)
	{
		return true;
	}
	if (!func_369(Global_34, func_225(0), 35f, 0, 1))
	{
		return false;
	}
	if (!func_252())
	{
		return false;
	}
	if (func_254(128, 255))
	{
		return false;
	}
	if (Local_204.f_19 > 2 && !_0x3f59fe6f37869576(Local_16.f_7.f_17, get_player_index()))
	{
		return false;
	}
	return true;
}

void func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_345();
			break;
		case 1:
			func_443(0, "NB_GRAVEROBBER_ILO_HELP_DIG", -163964935, 3, 0);
			func_443(1, "GREET_NEG", 648122183, 3, 0);
			func_444(0);
			break;
		case 2:
			func_443(0, "NB_GRAVEROBBER_ILO_HELP_DIG", -163964935, 3, 0);
			func_443(1, "GREET_NEG", 648122183, 3, 0);
			func_444(1);
			break;
	}
}

bool func_344(int iParam0, float fParam1)
{
	iVar0 = func_225(iParam0);
	return vdist(Global_35, get_entity_coords(iVar0, false, false)) < fParam1;
}

void func_345()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_445(&(Local_204.f_19.f_8[iVar0])))
		{
			func_446(Local_204.f_19.f_8[iVar0], 1, 1);
		}
		iVar0++;
	}
}

bool func_346(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam1, iParam2))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					return get_ped_index_from_entity_index(iVar0) == func_225(iParam0);
				}
			}
		}
	}
	return false;
}

bool func_347(int iParam0)
{
	return func_159(Local_204.f_19.f_1, iParam0);
}

void func_348(int iParam0)
{
	func_202(&(Local_204.f_19.f_1), iParam0);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		case 22:
			return 4194304;
		case 23:
			return 8388608;
		case 24:
			return 16777216;
		case 25:
			return 33554432;
		case 26:
			return 67108864;
		default:
			break;
	}
	return 1;
}

bool func_350(int iParam0)
{
	return func_159(Local_204.f_19.f_126, iParam0);
}

bool func_351(int iParam0)
{
	return is_bit_set(Local_204.f_19.f_124, iParam0);
}

bool func_352(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_447(1, 0, 0);
	}
	if (!func_318(1))
	{
		StringCopy(&cVar0, func_163(iParam0), 24);
		bVar3 = func_448(&(Local_204.f_19.f_26), cVar0, 0, -1, 0, 0);
		if (bVar3)
		{
			set_bit(&(Local_16.f_7.f_16), iParam0);
			set_bit(&(Local_204.f_19.f_124), iParam0);
		}
		if (bParam2)
		{
			_0xef51242e35242b47(&cVar0);
		}
		return bVar3;
	}
	return false;
}

bool func_353(int iParam0, int iParam1)
{
	if (!func_449(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_450(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_451(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_452(iParam0))
			{
				return true;
			}
			break;
	}
	return func_453(iParam0, 0, 0, 0) >= iParam1;
}

void func_354(int iParam0, bool bParam1)
{
	if (bParam1 && func_350(func_349(iParam0)))
	{
		return;
	}
	else
	{
		func_454(func_349(iParam0));
	}
}

void func_355()
{
	if (!func_116(32, 255))
	{
		func_455(Local_204.f_1, Local_204.f_3);
		if (!func_116(1024, 255))
		{
			func_456(Local_204.f_1);
			func_133(1024);
		}
		iVar0 = func_274(Local_204.f_1, Local_204.f_2);
		func_439(iVar0);
		func_440(iVar0);
		func_131(2);
		func_457(Local_204.f_9);
		func_458(Local_204.f_1);
		func_459(Local_204.f_1, Local_204.f_2, Local_204.f_3);
		func_133(32);
	}
}

void func_356(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_460(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_204(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

void func_357(int iParam0, bool bParam1)
{
	func_461(iParam0, &iVar0, &iVar1);
	if (!func_462(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_463(iVar0, iVar1);
}

bool func_358()
{
	return Local_16.f_7.f_17 == get_player_index();
}

int func_359()
{
	if (func_464(4, Local_204.f_4))
	{
		return 3;
	}
	else if (func_465(4, Local_204.f_4))
	{
		return 2;
	}
	else if (func_466(4, Local_204.f_4))
	{
		return 1;
	}
	return 0;
}

void func_360(int iParam0, int iParam1)
{
	iVar0 = func_385(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_467(iVar0, iParam0);
}

void func_361(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_362(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (!network_is_player_a_participant(iVar1))
		{
		}
		else if (bParam7 && iVar1 == get_player_index())
		{
		}
		else if (bParam4 && func_254(128, iVar0))
		{
		}
		else if (bParam6 && func_254(256, iVar0))
		{
		}
		else if (vdist(func_468(iVar1), vParam0) < fParam3)
		{
			if (bParam5 && !_0x3f59fe6f37869576(iVar1, get_player_index()))
			{
				Jump @167; //curOff = 157
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_363(var uParam0)
{
	func_469(uParam0, 0f);
}

bool func_364(int iParam0, var uParam1, float fParam2)
{
	if (!func_371(uParam1))
	{
		func_470(iParam0);
		func_380(iParam0);
		func_381(func_349(iParam0));
		func_363(uParam1);
	}
	else if (func_471(uParam1) > fParam2)
	{
		if (!func_351(iParam0))
		{
			func_354(iParam0, 1);
			func_361(uParam1);
			return true;
		}
	}
	return false;
}

int func_365()
{
	if (func_254(2, 255))
	{
		if (func_254(4, 255))
		{
			return Local_43[participant_id_to_int()]->f_1.f_3;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_472(&(Local_204.f_19.f_8[iVar0]), 1))
			{
				Local_43[participant_id_to_int()]->f_1.f_3 = iVar0;
				func_253(4);
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_366(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_438(iParam1);
	func_467(iVar0, iParam0);
}

void func_367(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return;
	}
	func_386(iParam1, iParam0);
}

struct<2> func_368()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_473(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_473(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_369(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_400(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_370(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_34;
	}
	if (func_226(iParam0, 1369124074))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_378(iVar0, 1070386381, 0))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_371(var uParam0)
{
	return func_402(*uParam0, 1);
}

void func_372()
{
	Var0 = { func_368() };
	if (!func_36(Var0) || func_21(Local_204.f_9, Var0))
	{
		func_348(32768);
		func_474("NB_GRAVEROBBER_OBJ_GOTO_DIG", -1, 0, 0, 0, 1);
	}
}

void func_373()
{
	if (!func_60(2))
	{
		return;
	}
	func_131(8);
}

void func_374(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_377(iVar0, bParam0);
		iVar0++;
	}
}

void func_375(int iParam0)
{
	if (!func_442(255))
	{
		func_162(iParam0);
		return;
	}
	if (!does_blip_exist(Local_204.f_19.f_130[iParam0]->f_1))
	{
		Local_204.f_19.f_130[iParam0]->f_1 = _blip_add_for_coord(408396114, func_475(iParam0));
		set_blip_name_from_text_file(Local_204.f_19.f_130[iParam0]->f_1, "NB_GRAVEROBBER_BLIP_OBJ");
	}
}

bool func_376(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && int_to_playerindex(iVar0) == get_player_index())
		{
		}
		else if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (is_bit_set(Local_43[iVar0]->f_1.f_1, iParam0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_377(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_does_scenario_point_exist(Local_204.f_19.f_130[iParam0]->f_2) && !&Local_204.f_19.f_130[iParam0])
		{
			Local_204.f_19.f_130[iParam0]->f_2 = create_scenario_point(-1907387938, func_475(iParam0), 0f, 0, 0, 0);
			_0xc47d9080a9a8856a(Local_204.f_19.f_130[iParam0]->f_2, 0f);
			if (iParam0 == Local_16.f_7.f_18)
			{
				_0xc47d9080a9a8856a(Local_204.f_19.f_130[iParam0]->f_2, to_float(Local_16.f_7.f_19));
			}
		}
	}
	else if (_does_scenario_point_exist(Local_204.f_19.f_130[iParam0]->f_2))
	{
		_delete_scenario_point(Local_204.f_19.f_130[iParam0]->f_2);
	}
}

bool func_378(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_34;
	}
	return func_476(iParam2, func_475(iParam0), 1) < fParam1;
}

void func_379(bool bParam0)
{
	if (!func_60(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_60(256))
		{
			func_158(Local_204.f_18, 0);
			func_131(256);
		}
	}
	func_131(16);
}

void func_380(int iParam0)
{
	clear_bit(&(Local_204.f_19.f_124), iParam0);
}

void func_381(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			func_227(&(Local_43[participant_id_to_int()]->f_1.f_2), iParam0);
		}
		iVar0++;
	}
}

bool func_382(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

int func_383()
{
	switch (func_330())
	{
		case 0:
			return 1868990101;
		case 1:
			return -2046129249;
		case 2:
			return 1802224400;
		case 3:
			return 377571106;
		case 4:
			return 854108678;
		case 5:
			return 921278225;
		case 6:
			return -1627063602;
		case 7:
			return -1627063602;
		case 8:
			return 1017205426;
		case 9:
			return 1000443839;
		case 10:
			return 446476115;
		default:
			break;
	}
	return 1868990101;
}

void func_384(var uParam0, var uParam1)
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

int func_385(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + func_477(iParam0)));
}

void func_386(int iParam0, int iParam1)
{
	Var0 = { func_331(iParam1, 896190569) };
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

bool func_387(int iParam0, bool bParam1, bool bParam2)
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

int func_388(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_478(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_389(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_478(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_390(int iParam0)
{
	iVar0 = -1;
	if (func_293(&Var1, iParam0))
	{
		iVar0 = ((func_479() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_391(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_392(int iParam0, int iParam1)
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

void func_393(var uParam0)
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
	func_480(uParam0, uParam0->f_1);
}

bool func_394(int iParam0)
{
	if (func_481(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_395(var uParam0, int iParam1, int iParam2)
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
		func_171(uParam0, iVar0);
		iVar0++;
	}
}

int func_396(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = create_ped_on_mount(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

bool func_397(vector3 vParam0, float fParam3, float fParam4)
{
	if (func_312(Global_34, vParam0, fParam4, 1, 1) && is_sphere_visible(vParam0, fParam3))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1) && is_sphere_visible_to_player(network_get_player_index(iVar1), vParam0, fParam3, fParam4))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_398(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_399(var uParam0)
{
	if (!func_323(uParam0))
	{
		return 0;
	}
	if (func_482(uParam0))
	{
		return uParam0->f_2;
	}
	return func_483(uParam0->f_1);
}

float func_400(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_401(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_484(uParam0, 1);
	func_485(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_402(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_403(int iParam0)
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

struct<2> func_404(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_405(int iParam0, var uParam1, var uParam2, bool bParam3)
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

void func_406(var uParam0, bool bParam1, int iParam2)
{
	func_486(iParam2);
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
		uParam0->f_14 = func_487(0);
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
							func_202(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_488(1, 1))
						{
							func_202(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_488(1, 1) || *uParam0 & 8192 != 0))
				{
					func_227(uParam0, 33554432);
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
			if (func_489(uParam0))
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
	func_490(uParam0);
}

bool func_407(int iParam0, var uParam1)
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
			if (!func_491(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_492(iParam0, iVar2) <= func_493(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_408(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_494(iParam2, 1, 1, 1, 0))
	{
		func_202(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_495(uParam1, 1);
	func_496();
}

bool func_409(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_497(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_498(uParam1);
			if (func_499(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_500(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_495(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_501(uParam1))
						{
							func_495(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_410(int iParam0, int iParam1, var uParam2)
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
	if (func_502(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_498(uParam2);
		if (func_499(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_500(uParam2)
				{
					func_495(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_411(int iParam0, var uParam1)
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
	if (func_491(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_500(uParam1)
		{
			fVar3 = func_498(uParam1);
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

int func_412(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_503(bParam1, bParam2, bParam3);
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

bool func_413(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_426();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_414(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_504(uParam2);
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
			if (func_422(uParam2, iParam1))
			{
				func_495(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_415(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_505(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_422(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_495(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_416(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_506(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_495(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_495(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_507(iParam1, vVar0, vVar4))
					{
						func_495(uParam2, 1);
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
					func_495(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_507(iParam1, vVar0, vVar7))
					{
						func_495(uParam2, 1);
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

bool func_417(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_491(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_508(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_509(&(Global_1940258->f_28[iVar0])))
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
			if (func_510(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_511(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_512(uParam1, iParam0, fVar1, iVar0))
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

bool func_418(int iParam0, var uParam1)
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

bool func_419(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_426();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_420(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_513(iVar0, &iVar2))
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
	if (func_514(iVar0, iParam0))
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

int func_421(var uParam0, int iParam1)
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

bool func_422(var uParam0, int iParam1)
{
	if (func_515(uParam0))
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

bool func_423(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_516(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_424()
{
}

bool func_425(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_517(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_426();
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
						if (func_476(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_426();
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

int func_426()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_427()
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
	if ((func_426() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_428(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_493(uParam0);
	if (uParam0->f_13 > func_518(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_519(iParam1);
	iVar1 = func_520(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_429(var uParam0, int iParam1)
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
	if (func_521(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_522(vVar1, vVar4);
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

int func_430(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_523(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_431(int iParam0, var uParam1)
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
		if (func_524(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_34, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_34, 1, 0) == 1)
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
	if (!func_525(iParam0))
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
			if (func_526(uParam1))
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
					if (!func_527(uParam1, iParam0))
					{
						if (func_476(iVar4, Global_35, 1) < 7f)
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

bool func_432(int iParam0, var uParam1)
{
	if (!func_528(0))
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

bool func_433(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_426();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_434(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_435(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_426();
	}
	else if (func_426() - uParam1->f_5) > func_529(uParam1)
	{
		return func_530(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_436(var uParam0, int iParam1)
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

bool func_437(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_477(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_438(int iParam0)
{
	return iParam0 + 8;
}

void func_439(int iParam0)
{
	if (func_113(Global_1272030[iParam0]))
	{
		return;
	}
	func_531(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_114((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_532(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_532(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_532(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_532(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_440(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_393(&Var0);
}

bool func_441(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_442(int iParam0)
{
	return func_116(8, iParam0);
}

void func_443(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	func_446(Local_204.f_19.f_8[iParam0], 1, 1);
	iVar0 = func_225(0);
	iVar1 = func_533(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_534(iVar1);
	func_535(iVar1, 18, 0, 1);
	func_535(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	func_537(iVar1, func_536(iParam0), 1, 1);
	Local_204.f_19.f_8[iParam0] = iVar1;
}

void func_444(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_538(iVar0, bParam0);
		iVar0++;
	}
}

bool func_445(int iParam0)
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

void func_446(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_445(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_534(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_539(iVar0);
	*uParam0 = 0;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_448(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_540(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_449(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_450(int iParam0)
{
	if (!func_449(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_451(int iParam0, int iParam1)
{
	if (!func_449(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_541(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_542("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_543(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_544(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_545(iVar1);
				return true;
			}
			iVar3++;
		}
		func_545(iVar1);
	}
	return false;
}

bool func_452(int iParam0)
{
	if (!func_449(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_546(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_547(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_548(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_549(iParam0);
	iVar2 = func_548(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_453(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_449(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_450(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_541(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_550(iParam0, 0);
	}
	if (func_551(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_552(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_553(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_552(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_454(int iParam0)
{
	if (!func_207(&iVar0))
	{
		return;
	}
	func_202(&(Local_43[iVar0]->f_1.f_2), iParam0);
}

void func_455(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_331(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_106(&Var0, 4) && func_554(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_456(int iParam0)
{
	func_555(iParam0);
}

void func_457(struct<2> Param0)
{
	if (func_272(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_272(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_272(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_556(Param0, &Var0))
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

void func_458(int iParam0)
{
	Var0 = { func_331(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_459(int iParam0, int iParam1, int iParam2)
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

bool func_460(int iParam0, int iParam1)
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
	if (func_201(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_201(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_201(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_201(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_201(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_201(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_201(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_201(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_462(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_557(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_558(iParam0))
	{
		return false;
	}
	if (func_559(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_560(iParam0, 1)) || func_561(32768))
	{
		if (!func_560(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_562())
	{
		return false;
	}
	return true;
}

void func_463(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_464(int iParam0, int iParam1)
{
	iVar0 = func_385(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_563(iVar0, iParam0);
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_438(iParam1);
	return func_563(iVar0, iParam0);
}

bool func_466(int iParam0, int iParam1)
{
	if (!func_437(iParam0, iParam1))
	{
		return false;
	}
	return func_563(iParam1, iParam0);
}

void func_467(int iParam0, int iParam1)
{
	Var0 = { func_331(iParam1, 896190569) };
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

Vector3 func_468(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_469(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_564() - fParam1);
	func_484(uParam0, 1);
	func_485(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_470(int iParam0)
{
	clear_bit(&(Local_16.f_7.f_16), iParam0);
}

float func_471(var uParam0)
{
	if (!func_371(uParam0))
	{
		return 0f;
	}
	if (func_565(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_564() - uParam0->f_1);
}

bool func_472(int iParam0, bool bParam1)
{
	if (bParam1 && !func_445(iParam0))
	{
		return false;
	}
	iVar0 = func_534(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

struct<2> func_473(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

var func_474(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

Vector3 func_475(int iParam0)
{
	switch (func_330())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -227.98f, 835.44f, 123.23f;
				case 1:
					return -232.77f, 838.21f, 122.4f;
				case 2:
					return -230.83f, 833.48f, 123.02f;
				case 3:
					return -238.86f, 829.42f, 122.57f;
				case 4:
					return -241.39f, 818.73f, 122.49f;
				case 5:
					return -239.33f, 815.04f, 122.76f;
				case 6:
					return -244.52f, 817.91f, 122.01f;
				case 7:
					return -246.38f, 812.61f, 121.56f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1279.78f, -1214.93f, 80.86f;
				case 1:
					return 1276.01f, -1208.58f, 81.59f;
				case 2:
					return 1272.65f, -1223.84f, 79.94f;
				case 3:
					return 1273.55f, -1229.06f, 79.57f;
				case 4:
					return 1267.34f, -1231.7f, 78.97f;
				case 5:
					return 1276.81f, -1235.86f, 79.38f;
				case 6:
					return 1281.19f, -1240.9f, 79.22f;
				case 7:
					return 1285.23f, -1245.66f, 78.73f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -956.71f, -1208.13f, 54.17f;
				case 1:
					return -961.43f, -1202.47f, 55.01f;
				case 2:
					return -955.58f, -1197.73f, 54.42f;
				case 3:
					return -959.7f, -1197.75f, 55.29f;
				case 4:
					return -962.88f, -1208.46f, 54.44f;
				case 5:
					return -954.41f, -1192.25f, 55.13f;
				case 6:
					return -960.46f, -1191.77f, 56.29f;
				case 7:
					return -966.26f, -1197.14f, 57.06f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -5451.39f, -2924.75f, -0.24f;
				case 1:
					return -5449.23f, -2900.09f, 0.03f;
				case 2:
					return -5440.36f, -2907.94f, -0.13f;
				case 3:
					return -5454.56f, -2895.75f, -0.06f;
				case 4:
					return -5457.69f, -2902.68f, -0.05f;
				case 5:
					return -5461.82f, -2911.28f, -0.24f;
				case 6:
					return -5456.13f, -2911.96f, -0.27f;
				case 7:
					return -5451.66f, -2918.74f, -0.26f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -4438.69f, -2698.93f, -12.06f;
				case 1:
					return -4429.74f, -2690.97f, -12.01f;
				case 2:
					return -4427.75f, -2686.12f, -11.5f;
				case 3:
					return -4434.07f, -2677.88f, -11.87f;
				case 4:
					return -4443.21f, -2686.22f, -12.09f;
				case 5:
					return -4451.12f, -2685.1f, -12.13f;
				case 6:
					return -4451.1f, -2702.02f, -12.16f;
				case 7:
					return -4458.32f, -2698.13f, -12.15f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -3317.78f, -2875.02f, -6.85f;
				case 1:
					return -3321.99f, -2870.63f, -6.97f;
				case 2:
					return -3325.05f, -2874.46f, -6.98f;
				case 3:
					return -3332.23f, -2875.01f, -6.97f;
				case 4:
					return -3337.12f, -2871.24f, -6.96f;
				case 5:
					return -3339.37f, -2865.76f, -6.96f;
				case 6:
					return -3344.18f, -2868.02f, -6.95f;
				case 7:
					return -3341.96f, -2860.74f, -7.1f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1395.71f, -654.21f, 70.95f;
				case 1:
					return 1390.25f, -654.09f, 70.78f;
				case 2:
					return 1390.45f, -650.68f, 70.77f;
				case 3:
					return 1389.94f, -647.19f, 70.69f;
				case 4:
					return 1392.85f, -643.8f, 70.59f;
				case 5:
					return 1393.6f, -648.54f, 70.67f;
				case 6:
					return 1402.39f, -647.9f, 70.34f;
				case 7:
					return 1398.9f, -646.42f, 70.44f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1735.97f, -420.6f, 47.1f;
				case 1:
					return 1735.63f, -423.79f, 47.13f;
				case 2:
					return 1735.52f, -426.76f, 47.14f;
				case 3:
					return 1735.42f, -429.83f, 47.15f;
				case 4:
					return 1732.11f, -430.14f, 47.33f;
				case 5:
					return 1731.83f, -427.05f, 47.26f;
				case 6:
					return 1731.9f, -424.09f, 47.09f;
				case 7:
					return 1732.32f, -420.93f, 47.09f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1985.55f, -1910.05f, 40.81f;
				case 1:
					return 1988.76f, -1908.88f, 40.66f;
				case 2:
					return 1986.91f, -1906.15f, 40.72f;
				case 3:
					return 1984.12f, -1907.21f, 40.88f;
				case 4:
					return 1981.52f, -1908.94f, 41.07f;
				case 5:
					return 1979.69f, -1905.5f, 41.08f;
				case 6:
					return 1982.91f, -1903.8f, 40.96f;
				case 7:
					return 1980.95f, -1901.26f, 40.99f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 2760.48f, -1078.73f, 45.89f;
				case 1:
					return 2765.15f, -1078.8f, 45.89f;
				case 2:
					return 2751.58f, -1074.58f, 45.89f;
				case 3:
					return 2744.95f, -1076.49f, 45.89f;
				case 4:
					return 2743.48f, -1081.02f, 45.89f;
				case 5:
					return 2749.78f, -1080.93f, 45.89f;
				case 6:
					return 2750.58f, -1085.79f, 45.89f;
				case 7:
					return 2759.92f, -1072.69f, 45.89f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1766.12f, -240.86f, 181.45f;
				case 1:
					return -1763.15f, -241.71f, 181.57f;
				case 2:
					return -1757.04f, -240.59f, 181.9f;
				case 3:
					return -1764.89f, -237.73f, 182f;
				case 4:
					return -1758.86f, -237.31f, 182.18f;
				case 5:
					return -1751.89f, -236.61f, 182.44f;
				case 6:
					return -1763.57f, -232.78f, 182.3f;
				case 7:
					return -1760.67f, -233.29f, 182.39f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_476(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_477(int iParam0)
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

bool func_478(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_566(uParam2);
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

int func_479()
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

void func_480(var uParam0, var uParam1)
{
}

bool func_481(int iParam0)
{
	return iParam0 != 0;
}

bool func_482(var uParam0)
{
	return func_402(*uParam0, 2);
}

int func_483(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_484(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_485(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_486(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_567();
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
			func_568(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_487(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_488(bool bParam0, bool bParam1)
{
	if (func_569(bParam0, &iVar0, &iVar1))
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

bool func_489(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_570(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_570(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_520(iVar0) == -1)
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

void func_490(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_571(uParam0);
	}
}

bool func_491(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_520(iParam2);
	}
	else
	{
		iVar1 = func_519(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_520(iParam0);
	}
	else
	{
		iVar0 = func_519(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_159(*uParam1, 8388608))
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

float func_492(int iParam0, int iParam1)
{
	return func_516(iParam0, iParam1, 1, 1);
}

float func_493(var uParam0)
{
	return uParam0->f_29;
}

bool func_494(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_495(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(uParam0, 134217728);
	}
	else
	{
		func_227(uParam0, 134217728);
	}
}

void func_496()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_497(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_516(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_572(iVar0, 0)))
		{
			if (func_573(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_498(var uParam0)
{
	return uParam0->f_18;
}

bool func_499(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_159(*uParam0, 4194304))
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

int func_500(var uParam0)
{
	return uParam0->f_19;
}

int func_501(var uParam0)
{
	return uParam0->f_20;
}

bool func_502(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_572(iVar0, 0)))
		{
			if (func_574(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_503(bool bParam0, bool bParam1, bool bParam2)
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

float func_504(var uParam0)
{
	return uParam0->f_25;
}

int func_505(var uParam0)
{
	return uParam0->f_23;
}

int func_506(var uParam0)
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

bool func_507(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_575(iParam0, vParam4, 0.5f))
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

int func_508(int iParam0)
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
	if (func_576(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_509(int iParam0)
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

bool func_510(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_577(iParam1))
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

bool func_511(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_577(iParam1))
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

bool func_512(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_578(uParam0);
	if (func_577(iParam1))
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

bool func_513(int iParam0, int iParam1)
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

bool func_514(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_579(iParam0, 1, 0, 0)) && !func_579(iParam0, 1, 0, 0) == 1151374672)
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

bool func_515(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_516(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_517(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_476(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_518(var uParam0)
{
	return uParam0->f_26;
}

int func_519(int iParam0)
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

int func_520(int iParam0)
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

int func_521(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_580(iParam0, vVar0, iParam2);
}

float func_522(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_523(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_513(Global_34, &iVar1))
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
		fVar2 = func_516(iParam0, player_ped_id(), 0, 1);
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
		if (func_516(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_524(int iParam0, var uParam1, bool bParam2)
{
	func_569(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_527(uParam1, iVar0))
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
				if (!bParam2 || !func_527(uParam1, iVar1))
				{
					if (func_476(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_525(int iParam0)
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

bool func_526(var uParam0)
{
	return func_159(*uParam0, 131072);
}

bool func_527(var uParam0, int iParam1)
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

bool func_528(int iParam0)
{
	return false;
}

int func_529(var uParam0)
{
	return uParam0->f_22;
}

int func_530(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_531(int iParam0, var uParam1, var uParam2)
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
		func_31(&Var2, *uParam1, -1, -1, 255);
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

struct<2> func_532(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_533(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_581(iVar0, 2))
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
				func_582(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_534(int iParam0)
{
	return iParam0;
}

void func_535(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_445(iParam0))
	{
		return;
	}
	iVar0 = func_534(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_536(int iParam0)
{
	return is_bit_set(Local_204.f_19.f_7, iParam0);
}

void func_537(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_445(iParam0))
	{
		return;
	}
	iVar0 = func_534(iParam0);
	if (bParam1)
	{
		func_583(iParam0, 4);
		if (bParam3)
		{
			func_584(iVar0, 1);
		}
		func_585(iVar0, 1);
	}
	else
	{
		func_586(iParam0, 4);
		func_585(iVar0, 0);
	}
}

void func_538(int iParam0, bool bParam1)
{
	func_537(&(Local_204.f_19.f_8[iParam0]), bParam1, 1, 1);
	if (bParam1)
	{
		set_bit(&(Local_204.f_19.f_7), iParam0);
	}
	else
	{
		clear_bit(&(Local_204.f_19.f_7), iParam0);
	}
}

void func_539(int iParam0)
{
	if (!func_587(iParam0))
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

void func_540(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&cParam0, cParam3[iVar0], 0))
				{
					add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_541(int iParam0, int iParam1)
{
	if (!func_449(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_450(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_588(iParam0, 1399091007))
	{
		func_589(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_542(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_552(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_543(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_545(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_546(int iParam0)
{
	if (!func_449(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_548(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_549(int iParam0)
{
	iVar0 = func_546(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_550(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_590(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_592(&Var0, func_591(0));
	}
	if (!func_593(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_545(iVar14);
	return uVar15;
}

int func_551(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_552(bool bParam0)
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

struct<4> func_553(int iParam0, bool bParam1)
{
	Var0 = { func_594(iParam0, bParam1, 0) };
	return func_595(iParam0, Var0, Var0.f_4, bParam1);
}

int func_554(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_555(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_331(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

bool func_556(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_478(Param0, &vVar0);
	if (func_596(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_557(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_558(int iParam0)
{
	if (func_560(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_559(int iParam0)
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

bool func_560(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_561(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_562()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_563(int iParam0, int iParam1)
{
	Var0 = { func_331(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	return is_bit_set(iVar2, iParam0);
}

float func_564()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_565(var uParam0)
{
	return func_402(*uParam0, 2);
}

void func_566(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_567()
{
	if (func_597())
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

void func_568(var uParam0, var uParam1)
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

bool func_569(bool bParam0, int iParam1, int iParam2)
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

int func_570(var uParam0)
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

void func_571(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_227(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_202(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_572(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_573(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_574(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_574(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_575(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_576(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_577(int iParam0)
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

float func_578(var uParam0)
{
	return uParam0->f_28;
}

int func_579(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_580(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_598(vVar3, vVar6);
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
	if (func_599(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_581(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_582(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
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
	_uiprompt_set_transport_mode(iVar0, iParam5);
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
	func_584(iParam0, 1);
	func_585(iParam0, 1);
	func_586(iParam0, 128);
}

void func_583(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_584(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_581(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_585(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_586(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_587(int iParam0)
{
	return func_581(iParam0, 2);
}

int func_588(int iParam0, int iParam1)
{
	if (!func_449(iParam0, 0))
	{
		return func_601(func_600(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_589(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_591(bool bParam0)
{
	iVar0 = func_552(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_595(923904168, func_602(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_595(923904168, func_602(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_595(923904168, func_602(bParam0), -740156546, 0);
}

void func_592(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_593(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_552(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_594(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_602(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_450(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_595(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_591(bParam1) };
			if (bParam2 && func_603(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_604(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_604(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_605(iParam0, &Var6, 1728382685))
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
			Var0 = { func_606(bParam1) };
			switch (func_546(iParam0))
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
			if (func_607(iParam0, -1823706425))
			{
				Var0 = { func_595(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_607(iParam0, -1483207246))
			{
				Var0 = { func_595(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_595(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_607(iParam0, -1653629781))
			{
				Var0 = { func_595(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_608(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_607(iParam0, -1653629781))
			{
				Var0 = { func_595(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_595(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_449(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_552(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_596(int iParam0, var uParam1, var uParam2)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	if (func_610(iParam0, uParam1, &uVar0))
	{
		func_611(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_597()
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

float func_598(vector3 vParam0, vector3 vParam3)
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

bool func_599(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_600(int iParam0)
{
	return iParam0;
}

int func_601(int iParam0, int iParam1)
{
	if (!func_612(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

struct<4> func_602(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_552(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_595(1328661203, func_613(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_595(1328661203, func_613(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_595(1328661203, func_613(), -1591664384, bParam0);
}

bool func_603(int iParam0, bool bParam1)
{
	if (func_546(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_614();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_604(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_615(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_605(int iParam0, var uParam1, int iParam2)
{
	if (func_616(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_606(bool bParam0)
{
	iVar0 = func_552(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_595(271701509, func_602(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_595(271701509, func_602(bParam0), 12999093, 0);
}

bool func_607(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_546(iParam0);
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
			if (func_617(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_608(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_618(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_609(int iParam0)
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

bool func_610(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_619(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_611(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_620(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_621(iVar0);
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
			uParam2->f_5 = func_622(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_623(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_624(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_625(iVar0);
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

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_613()
{
	return Var0;
}

bool func_614()
{
	return (func_626(-1185145312, 0, 0, 0) > 0 && func_627(func_595(889965687, func_602(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_615(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_449(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_551(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_595(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_552(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_552(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_616(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_552(0);
	*uParam1 = { func_595(iParam0, func_591(0), iParam3, 0) };
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

bool func_617(int iParam0, int iParam1, int iParam2)
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

bool func_618(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_552(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_619(int iParam0)
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

int func_620(int iParam0, var uParam1)
{
	if (func_628(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_621(int iParam0)
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

int func_622(int iParam0)
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

int func_623(int iParam0)
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

int func_624(int iParam0)
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

int func_625(int iParam0)
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

int func_626(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_629(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_552(bParam1), iParam0, iParam3);
}

int func_627(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_630(&uParam0, iParam4, bParam5, iParam6);
}

bool func_628(int iParam0, var uParam1, var uParam2)
{
	if (func_631(iParam0, uParam1, &uVar0))
	{
		func_632(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_629(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_630(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_633(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_631(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_619(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_632(var uParam0, int iParam1, var uParam2)
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

bool func_633(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_552(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_618(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

