void __EntryFunction__()
{
	vLocal_13 = { 0f, 0f, 0f };
	fLocal_2094 = 1f;
	fLocal_2095 = 1f;
	iVar0 = iVar2098;
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
	network_register_host_broadcast_variables(&Local_16, 61, 43);
	func_10(_0xba24095ea96dfe17(&Local_16), 61, "m_hostData");
	network_register_player_broadcast_variables(&Local_77, 1409, 44);
	func_11(_0x690806bc83bc8ca2(Local_77[0]), 1409, "m_clientData");
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
	else if (func_17(Local_1486.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1486.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1486.f_12), Local_1486.f_9))
	{
		return true;
	}
	else if (Local_1486.f_8 == 6)
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
	_copy_memory(&Local_1486, uParam0, 5);
	iVar2 = func_31(&bVar1, Local_1486.f_1, Local_1486.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1486.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1486.f_1, Local_1486.f_2, Local_1486.f_3, iVar0);
	Local_1486.f_9 = { func_33(Var3.f_5, 8) };
	Local_1486.f_14 = Var3.f_5;
	Local_1486.f_15 = { Var3.f_11 };
	Local_1486.f_18 = Var3.f_7;
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
	if (Local_16 <= 5)
	{
		func_42();
	}
	switch (Local_16)
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
	if (Local_1486.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_1486.f_8)
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
		if (_0xf6a8a652a6b186cd(Local_16.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_16.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
}

void func_27()
{
	if (Local_1486.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_62(Local_1486.f_12, 4);
		}
	}
	func_63();
	if (func_64(64))
	{
		func_65(Local_16.f_6);
	}
	func_66();
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
	while (iVar0 < 10)
	{
		Local_16.f_38.f_1[iVar0] = 255;
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
	func_67(&Var0, Var26.f_5);
	iVar25 = func_68(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_69(iVar25) };
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
			func_70(uParam0, iParam2);
			break;
		case 2:
			func_71(uParam0, iParam2);
			break;
		case 3:
			func_72(uParam0, iParam2);
			break;
		case 4:
			func_73(uParam0, iParam2);
			break;
		case 12:
			func_74(uParam0, iParam2);
			break;
		case 6:
			func_75(uParam0, iParam2, -1);
			break;
		case 7:
			func_76(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_77(uParam0, iParam2);
			break;
		case 11:
			func_78(uParam0, iParam2);
			break;
		case 9:
			func_79(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_80(uParam0, iParam2);
			break;
		case 8:
			func_81(uParam0, iParam2);
			break;
		case 13:
			func_82(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_83(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_84(uParam0, iParam2);
			break;
		case 16:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_86(uParam0, iParam2);
			break;
		case 21:
			func_87(uParam0, iParam2);
			break;
		case 28:
			func_88(uParam0, iParam2);
			break;
		case 25:
			func_89(uParam0, iParam2);
			break;
		case 24:
			func_90(uParam0, iParam2);
			break;
		case 22:
			func_91(uParam0, iParam2);
			break;
		case 23:
			func_92(uParam0, iParam2);
			break;
		case 29:
			func_93(uParam0, iParam2);
			break;
		case 26:
			func_94(uParam0, iParam2);
			break;
		case 30:
			func_95(uParam0, iParam2);
			break;
		case 27:
			func_96(uParam0, iParam2);
			break;
		case 32:
			func_97(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_98(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_99(uParam0, iParam2);
			break;
		case 17:
			func_100(uParam0, iParam2);
			break;
		case 18:
			func_101(uParam0, iParam2);
			break;
		case 19:
			func_102(uParam0, iParam2);
			break;
		case 20:
			func_103(uParam0, iParam2);
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
			func_104(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636), func_105(iParam1));
			break;
		case 3:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_602), func_105(iParam1));
			break;
		case 4:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_2104), func_105(iParam1));
			break;
		case 5:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_12606), func_105(iParam1));
			break;
		case 6:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_12908), func_105(iParam1));
			break;
		case 7:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_15910), func_105(iParam1));
			break;
		case 8:
			Var0.f_1 = func_106(iParam0, &(Global_1071686->f_636.f_16512), func_105(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_107();
	}
	return Var0;
}

void func_34()
{
	func_108();
	func_109();
}

void func_35()
{
	reserve_network_mission_peds(10);
	reserve_network_mission_objects(1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_111(iVar0, func_110(iVar0));
		if (iVar0 < 7 || iVar0 > 9)
		{
			func_114(iVar0, func_112(iVar0), func_113(iVar0), 1);
		}
		else
		{
			func_115(iVar0);
		}
		iVar0++;
	}
	func_116(&(Local_1486.f_19.f_9), 5f);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_117(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_105(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_1486.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1486.f_1, Local_1486.f_2, Local_1486.f_3, iVar0);
	if (!func_118(&Var1, 1))
	{
		func_119(1);
		return;
	}
	Local_16.f_6 = func_120(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_121(256);
	if (func_122(Local_16.f_6))
	{
		func_123(5);
		func_119(6);
	}
	else
	{
		func_119(1);
	}
}

void func_44()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_1486.f_1, Local_1486.f_2, -1, 255);
	if (func_118(&Var0, 1))
	{
		func_119(2);
		return;
	}
	if (func_124(Var0, &bVar31))
	{
		clear_area(Local_1486.f_15, Var0.f_10, 2442122);
		func_119(2);
	}
	else if (bVar31)
	{
		func_123(3);
		func_119(6);
	}
	if (!func_125(Local_16.f_3.f_2))
	{
		func_126(&(Local_16.f_3.f_2));
	}
	else if (func_127(Local_16.f_3.f_2) > 45000)
	{
		func_123(4);
		func_119(6);
	}
}

void func_45()
{
	if (func_128(1, 255))
	{
		if (!func_129(1))
		{
			if (func_130())
			{
				func_121(1);
			}
		}
		else
		{
			func_131();
			func_119(3);
		}
	}
}

void func_46()
{
	if (func_128(2, 255))
	{
		if (!func_129(2))
		{
			bVar0 = true;
			if (!func_132())
			{
				bVar0 = false;
			}
			if (!func_133())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_121(2);
			}
		}
		else
		{
			func_134();
			func_119(4);
		}
	}
}

void func_47()
{
	func_135();
	func_136();
	func_137();
	if (func_138() || Local_16.f_2 != 0)
	{
		func_139();
		func_119(5);
	}
}

void func_48()
{
	if (func_128(4, 255))
	{
		if (func_140())
		{
			func_121(4);
			func_119(6);
		}
	}
}

void func_49()
{
	if (!func_129(256))
	{
		return;
	}
	if (func_129(512))
	{
		if (func_64(64) && func_120(player_id()) == Local_16.f_6)
		{
			func_65(Local_16.f_6);
			func_141(64);
		}
	}
	else if (!func_64(64))
	{
		if (func_120(player_id()) == Local_16.f_6)
		{
			func_142(Local_16.f_6, 1, 1);
			func_143(64);
		}
	}
	else if (func_120(player_id()) != Local_16.f_6)
	{
		func_65(Local_16.f_6);
		func_141(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_128(8192, 255))
		{
			func_144(8192);
		}
	}
	else if (!func_128(8192, 255))
	{
		func_145(8192);
	}
}

void func_51()
{
	func_146();
	func_147();
}

void func_52()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 0)
	{
		func_49();
		func_148(1);
	}
}

void func_53()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 1)
	{
		func_148(2);
	}
}

void func_54()
{
	if (!func_128(1, 255))
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
			func_145(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_125(Local_1486.f_11))
			{
				func_126(&(Local_1486.f_11));
			}
			if (func_127(Local_1486.f_11) >= iVar1)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 2)
	{
		func_151(&(Local_1486.f_11));
		func_152();
		func_148(3);
	}
}

void func_55()
{
	if (!func_128(2, 255))
	{
		iVar0 = func_153();
		iVar1 = func_154();
		if (iVar0 && iVar1)
		{
			func_145(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_125(Local_1486.f_11))
			{
				func_126(&(Local_1486.f_11));
			}
			if (func_155(Local_1486.f_11) >= iVar2)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 3)
	{
		func_151(&(Local_1486.f_11));
		func_156();
		func_157();
		func_158();
		func_159();
		func_148(4);
	}
}

void func_56()
{
	if (Local_16 >= 5)
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
	if (!func_128(4, 255))
	{
		if (func_167())
		{
			func_168();
			func_62(Local_1486.f_12, 4);
			func_145(4);
		}
	}
	else if (Local_16 > 5)
	{
		func_148(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_129(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_60()
{
}

void func_61()
{
	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (network_does_network_id_exist(&(Local_16.f_27[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_16.f_27[iVar1]));
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

void func_62(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_171(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_63()
{
	if (!func_64(1))
	{
		return;
	}
	if (func_64(4))
	{
		return;
	}
	if (!func_64(2))
	{
		iVar0 = -1;
	}
	else if (!func_64(8))
	{
		iVar0 = 2;
	}
	else if (func_64(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_64(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_172(Local_1486.f_9, iVar0, 0, 255, 0);
	func_143(4);
	if (bVar1)
	{
		func_173(Local_1486.f_1, Local_1486.f_2);
		if (!func_64(256))
		{
			if (iVar0 == 1)
			{
				func_174(Local_1486.f_18, 1);
			}
			else
			{
				func_174(Local_1486.f_18, 0);
			}
			func_143(256);
		}
	}
	else
	{
		func_174(Local_1486.f_18, 2);
	}
}

bool func_64(int iParam0)
{
	return func_175(Local_1486.f_7, iParam0);
}

void func_65(int iParam0)
{
	if (!func_176(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_66()
{
	bVar0 = func_59();
	func_177(Local_1486.f_19.f_159, 0);
	if (func_178(-2147483648, -1, 1))
	{
		clear_sequence_task(&(Local_1486.f_19.f_143));
	}
	func_180(func_179(), 0, 0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		func_169(iVar1);
		iVar2 = func_181(iVar1);
		if (!does_entity_exist(iVar2))
		{
		}
		else if (bVar0 && network_has_control_of_entity(iVar2))
		{
			if (func_182(iVar1))
			{
				if (!is_entity_dead(iVar2) && !_is_ped_hogtied(iVar2))
				{
					task_smart_flee_ped(iVar2, Global_34, 1000f, -1, 0, 1077936128, 0);
					set_ped_keep_task(iVar2, true);
					set_ped_config_flag(iVar2, 230, true);
					_0x39a2fc5af55a52b1(iVar2, -1);
				}
			}
			set_ped_as_no_longer_needed(&iVar2);
		}
		iVar1++;
	}
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_68(var uParam0)
{
	if (!func_183(uParam0))
	{
		return -1;
	}
	iVar0 = func_184(uParam0, uParam0->f_9);
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
			iVar0 = func_184(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_69(int iParam0)
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

void func_70(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_185(uParam0, iParam1);
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

void func_71(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			func_188(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_186(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_189(uParam0, 0);
			func_189(uParam0, 1);
			func_189(uParam0, 4);
			func_189(uParam0, 5);
			break;
		case 1:
			func_189(uParam0, 2);
			func_189(uParam0, 3);
			func_189(uParam0, 6);
			func_189(uParam0, 7);
			func_190(uParam0, 2);
			break;
		default:
			func_186(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_188(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_188(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_188(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_188(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_188(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_188(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_188(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_188(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_188(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_188(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_188(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_188(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 8);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 7);
			func_188(uParam0, 8);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			func_188(uParam0, 6);
			func_188(uParam0, 7);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			func_188(uParam0, 6);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			func_188(uParam0, 5);
			func_188(uParam0, 9);
			func_188(uParam0, 10);
			func_188(uParam0, 11);
			func_191(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_187(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_186(uParam0);
	func_190(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_192(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_192(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_192(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_192(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_192(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_187(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_187(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_187(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_187(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_187(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_187(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_187(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_187(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_186(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_186(uParam0);
	func_190(uParam0, 1);
	func_190(uParam0, 4);
	func_190(uParam0, 8);
	func_190(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_193(func_120(iParam2)) };
			break;
	}
}

void func_83(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_194(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_194(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_194(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_194(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_187(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_195(uParam0, iParam2);
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

void func_86(var uParam0, int iParam1)
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
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_196(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_196(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
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
			func_197(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
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
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_188(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_188(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_188(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_188(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_188(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_188(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_188(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_188(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_188(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_188(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_188(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_188(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_188(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_188(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_188(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
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
			func_198(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
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
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_199(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_199(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_186(uParam0);
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
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_188(uParam0, 3);
			func_188(uParam0, 4);
			func_188(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
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
			func_200(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_200(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_200(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_186(uParam0);
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
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_188(uParam0, 2);
			func_188(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_188(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_188(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
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
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_201(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_201(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_97(var uParam0, int iParam1, int iParam2)
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
	func_202(uParam0, iParam1, iParam2);
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

void func_98(var uParam0, int iParam1, int iParam2)
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
	func_203(uParam0, iParam1, iParam2);
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

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_186(uParam0);
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
			func_188(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_188(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_188(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_188(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_188(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_188(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_188(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_188(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_188(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_188(uParam0, 1);
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_187(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_187(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_187(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_187(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_187(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_187(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_187(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_186(uParam0);
	switch (iParam1)
	{
		case 0:
			func_187(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_187(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_187(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_187(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_188(uParam0, 0);
			func_188(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_204(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_204(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_104(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_205(iParam1);
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
	*uParam0 = func_206(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_190(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_208(func_207(iVar0), iParam2);
		uParam0->f_15[0] = func_209(func_207(iVar0), iParam2);
		uParam0->f_5 = func_210(iVar0, iParam2);
		uParam0->f_11 = { func_211(iVar0, iParam2) };
	}
}

int func_105(int iParam0)
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

int func_106(int iParam0, var uParam1, int iParam2)
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

struct<2> func_107()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_108()
{
	reserve_network_mission_peds(10);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_77[iVar1]->f_4.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_109()
{
	func_212(&(Local_1486.f_332), &(Local_1486.f_332.f_32));
	bVar2 = true;
	if (!func_213(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (network_is_host_of_this_script())
		{
			Local_16.f_38.f_12[iVar0] = 0;
			Local_16.f_38.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_77[iVar1]->f_17.f_16[iVar0] = 0;
		}
		iVar0++;
	}
	func_214(&(Local_1486.f_332.f_99), 8, -1);
	if (bVar2)
	{
		func_214(&(Local_77[iVar1]->f_17), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_214(&(Local_77[iVar3]->f_17), 8, -1);
			iVar3++;
		}
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_215())
			{
				case 0:
					return -2035029611;
				case 1:
					return -1448273283;
				default:
					break;
			}
			break;
		case 1:
			return 401876763;
		case 2:
			return 1722511552;
		case 3:
			return 1722511552;
		case 4:
			return 401876763;
		case 5:
			return 401876763;
		case 6:
			return 401876763;
		case 7:
			return 401876763;
		case 8:
			return 401876763;
		case 9:
			return 401876763;
		default:
			return 0;
	}
	return 0;
}

void func_111(int iParam0, int iParam1)
{
	Local_1486.f_179.f_7[iParam0]->f_3 = iParam1;
}

Vector3 func_112(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1563.001f, -2045.494f, 47.40215f;
				case 1:
					return 1564.009f, -2046.205f, 47.38874f;
				case 2:
					return 1560.544f, -2044.128f, 47.36815f;
				case 3:
					return 1565.708f, -2050.429f, 47.24094f;
				case 4:
					return 1557.766f, -2051.627f, 47.49878f;
				case 5:
					return 1562.822f, -2056.044f, 47.48583f;
				case 6:
					return 1564.595f, -2041.504f, 47.49982f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1378.372f, -1696.135f, 66.87366f;
				case 1:
					return 1378.334f, -1695.127f, 66.86523f;
				case 2:
					return 1374.531f, -1695.165f, 66.89505f;
				case 3:
					return 1382.254f, -1689.932f, 66.58237f;
				case 4:
					return 1375.964f, -1702.699f, 66.89053f;
				case 5:
					return 1384.54f, -1701.691f, 66.71351f;
				case 6:
					return 1388.199f, -1695.534f, 66.42114f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1620.386f, -1649.888f, 56.0248f;
				case 1:
					return 1620.491f, -1648.925f, 56.02482f;
				case 2:
					return 1617.094f, -1649.619f, 56.025f;
				case 3:
					return 1621.092f, -1652.11f, 56.02486f;
				case 4:
					return 1624.054f, -1646.354f, 56.02502f;
				case 5:
					return 1626.288f, -1654.976f, 56.02556f;
				case 6:
					return 1617.7f, -1657.738f, 56.02635f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1504.89f, -1468.727f, 71.38737f;
				case 1:
					return 1506.201f, -1468.143f, 71.35004f;
				case 2:
					return 1505.608f, -1464.901f, 71.44698f;
				case 3:
					return 1502.297f, -1470.044f, 71.43334f;
				case 4:
					return 1499.141f, -1467.866f, 71.39942f;
				case 5:
					return 1509.982f, -1473.235f, 71.18302f;
				case 6:
					return 1498.737f, -1475.118f, 71.56422f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1081.057f, -1265.789f, 67.49545f;
				case 1:
					return 1081.038f, -1264.815f, 67.49545f;
				case 2:
					return 1078.039f, -1265.329f, 67.49545f;
				case 3:
					return 1081.392f, -1267.831f, 67.49545f;
				case 4:
					return 1084.854f, -1261.718f, 67.49545f;
				case 5:
					return 1079.662f, -1273.534f, 67.49545f;
				case 6:
					return 1088.149f, -1272.135f, 67.49545f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 681.3074f, -992.1173f, 52.42072f;
				case 1:
					return 681.3499f, -991.009f, 52.42072f;
				case 2:
					return 677.1426f, -991.3392f, 52.42072f;
				case 3:
					return 682.7988f, -995.3815f, 52.42072f;
				case 4:
					return 685.3489f, -987.9503f, 52.42072f;
				case 5:
					return 691.7525f, -991.6058f, 52.42072f;
				case 6:
					return 688.1611f, -998.6777f, 52.42072f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 707.892f, -884.1869f, 48.26218f;
				case 1:
					return 708.943f, -884.2095f, 48.26216f;
				case 2:
					return 708.8777f, -880.6065f, 48.41024f;
				case 3:
					return 704.9007f, -885.637f, 48.26198f;
				case 4:
					return 713.6194f, -888.502f, 48.26196f;
				case 5:
					return 700.8785f, -891.6036f, 48.26171f;
				case 6:
					return 707.6378f, -894.5347f, 48.26195f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 879.815f, -536.4342f, 88.03556f;
				case 1:
					return 881.1649f, -536.6054f, 88.03556f;
				case 2:
					return 880.9461f, -532.5448f, 88.03556f;
				case 3:
					return 876.8293f, -538.6234f, 88.03556f;
				case 4:
					return 887.773f, -538.3796f, 88.03556f;
				case 5:
					return 880.2193f, -547.4427f, 88.03556f;
				case 6:
					return 872.5983f, -544.4485f, 88.03556f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1011.536f, -395.7754f, 90.44735f;
				case 1:
					return 1010.475f, -395.1588f, 90.44116f;
				case 2:
					return 1007.957f, -400.366f, 90.66586f;
				case 3:
					return 1014.796f, -395.6366f, 90.44254f;
				case 4:
					return 1007.402f, -388.1241f, 90.55527f;
				case 5:
					return 1016.454f, -384.9804f, 90.65976f;
				case 6:
					return 1020.529f, -391.887f, 90.55995f;
				default:
					break;
			}
			break;
	}
	return vLocal_13;
}

float func_113(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 175.96f;
				case 1:
					return 134.72f;
				case 2:
					return -163.81f;
				case 3:
					return 79.29f;
				case 4:
					return 123.36f;
				case 5:
					return -168.2f;
				case 6:
					return -54.21f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -141.01f;
				case 1:
					return -141.01f;
				case 2:
					return 63f;
				case 3:
					return 179.5f;
				case 4:
					return -99.92f;
				case 5:
					return -145.64f;
				case 6:
					return -67.49f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -79f;
				case 1:
					return -129.26f;
				case 2:
					return 59.21f;
				case 3:
					return 19.43f;
				case 4:
					return -17.42f;
				case 5:
					return -134.84f;
				case 6:
					return 144.21f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 126.43f;
				case 1:
					return 178.89f;
				case 2:
					return -9.12f;
				case 3:
					return -48.59f;
				case 4:
					return 50.59f;
				case 5:
					return -98.46f;
				case 6:
					return 140.21f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -93.87f;
				case 1:
					return -140.52f;
				case 2:
					return 83.86f;
				case 3:
					return -11.14f;
				case 4:
					return -15.67f;
				case 5:
					return 168.36f;
				case 6:
					return -144.39f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -99.63f;
				case 1:
					return -152.61f;
				case 2:
					return 83.8f;
				case 3:
					return 22.02f;
				case 4:
					return -7.96f;
				case 5:
					return -90.05f;
				case 6:
					return -136.98f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -177.59f;
				case 1:
					return 145.4f;
				case 2:
					return -7.92f;
				case 3:
					return -66.65f;
				case 4:
					return -102.38f;
				case 5:
					return 144.2f;
				case 6:
					return 176.92f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 174.71f;
				case 1:
					return 119.68f;
				case 2:
					return -9.76f;
				case 3:
					return -47.53f;
				case 4:
					return -76.69f;
				case 5:
					return -170.89f;
				case 6:
					return 143.06f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -39.81f;
				case 1:
					return -81.83f;
				case 2:
					return 143.67f;
				case 3:
					return 95.58f;
				case 4:
					return 16.67f;
				case 5:
					return -20.54f;
				case 6:
					return -74.71f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_114(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1486.f_179.f_7[iParam0]->f_6 = { vParam1 };
	Local_1486.f_179.f_7[iParam0]->f_5 = fParam4;
	if (bParam5)
	{
		func_217(&(Local_1486.f_179.f_7[iParam0]->f_2), 2);
	}
	else
	{
		func_218(&(Local_1486.f_179.f_7[iParam0]->f_2), 2);
	}
}

void func_115(int iParam0)
{
	func_219(iParam0, 4);
}

void func_116(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

bool func_117(int iParam0)
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

bool func_118(var uParam0, int iParam1)
{
	return func_220(uParam0->f_25, iParam1);
}

void func_119(int iParam0)
{
	if (Local_16 != iParam0)
	{
		Local_16 = iParam0;
	}
}

int func_120(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_121(int iParam0)
{
	if (!func_129(iParam0))
	{
		func_217(&(Local_16.f_1), iParam0);
	}
}

bool func_122(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return (func_221(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_123(int iParam0)
{
	if (Local_16.f_2 != iParam0)
	{
		Local_16.f_2 = iParam0;
	}
}

bool func_124(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_16.f_3.f_1))
	{
		return true;
	}
	if (func_222(Local_1486.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_16.f_3))
	{
		if (_0x397769175a7dbb30(Local_1486.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_223(&uVar1, Param0);
		Local_16.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_145(128);
	}
	else if (!func_128(128, 255))
	{
		Local_16.f_3.f_1 = func_224(Param0);
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

bool func_125(int iParam0)
{
	return iParam0 != 0;
}

void func_126(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_127(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_128(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_175(&(Local_77[iParam1]), iParam0);
}

bool func_129(int iParam0)
{
	return func_175(Local_16.f_1, iParam0);
}

bool func_130()
{
	return true;
}

void func_131()
{
}

bool func_132()
{
	iVar0 = 1;
	bVar1 = false;
	_0xdf7b5144e25cd3fe(Local_1486.f_19.f_142, func_225());
	_0xdf7b5144e25cd3fe(Local_1486.f_19.f_142, "PB_CUT_FREE_DEAD_F");
	_0xdf7b5144e25cd3fe(Local_1486.f_19.f_142, "PB_CUT_FREE_DEAD_L");
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!network_does_network_id_exist(&(Local_16.f_7.f_4[iVar2])))
		{
			if (func_226(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_227();
			}
			return iVar0;
		}
	}
}

bool func_133()
{
	if (!func_228(&bVar0))
	{
		if (bVar0)
		{
			func_227();
		}
		return false;
	}
	return true;
}

void func_134()
{
}

void func_135()
{
	if (!func_129(32) && func_229(32))
	{
		func_121(32);
	}
	if (!func_129(64) && func_229(64))
	{
		func_121(64);
	}
	if (!func_129(16) && func_230(16))
	{
		func_121(16);
	}
	if ((!func_129(2048) && func_229(2048)) && !func_229(4096))
	{
		func_121(2048);
	}
}

void func_136()
{
	if (!bVar0 && func_129(16))
	{
		func_123(1);
		return;
	}
	if (func_129(2048) && !func_229(4096))
	{
		func_123(6);
		return;
	}
}

void func_137()
{
}

bool func_138()
{
	if (func_231())
	{
		return true;
	}
	Local_16.f_7.f_12 = func_232(0, 150f, 0, 0);
	func_233();
	func_234();
	func_235();
	func_236();
	if (!func_237(&(Local_16.f_7.f_6[0])))
	{
	}
	switch (Local_16.f_7)
	{
		case 0:
			func_238();
			break;
		case 1:
			func_239();
			break;
		case 2:
			func_240();
			break;
		case 3:
			func_241();
			break;
		case 4:
			func_242();
			break;
		case 5:
			func_243();
			break;
		case 6:
			func_244();
			break;
		case 7:
			func_245();
			break;
		case 8:
			func_246();
			break;
		case 9:
			func_247();
			break;
		case 10:
			func_248();
			break;
		case 11:
			func_249();
			break;
		case 12:
			func_250();
			break;
	}
	return false;
}

void func_139()
{
}

bool func_140()
{
	return true;
}

void func_141(int iParam0)
{
	if (func_64(iParam0))
	{
		func_218(&(Local_1486.f_7), iParam0);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	iVar0 = func_251(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_252(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_253(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_143(int iParam0)
{
	if (!func_64(iParam0))
	{
		func_217(&(Local_1486.f_7), iParam0);
	}
}

void func_144(int iParam0)
{
	if (func_175(&(Local_77[participant_id_to_int()]), iParam0))
	{
		func_218(Local_77[participant_id_to_int()], iParam0);
	}
}

void func_145(int iParam0)
{
	if (!func_128(iParam0, 255))
	{
		func_217(Local_77[participant_id_to_int()], iParam0);
	}
}

void func_146()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_254(iVar0);
				break;
			case -1315570756:
				func_255(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_256(iVar0);
		iVar0++;
	}
}

void func_147()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1486.f_582 >= 10)
		{
			Local_1486.f_582 = 0;
		}
		func_258(func_257(Local_1486.f_582));
		Local_1486.f_582++;
		iVar0++;
	}
}

void func_148(int iParam0)
{
	if (Local_1486.f_8 != iParam0)
	{
		Local_1486.f_8 = iParam0;
	}
}

bool func_149()
{
	sVar0 = "NBTIED";
	iVar1 = 1;
	if (_does_text_database_exist(sVar0))
	{
		_text_database_request(sVar0);
		if (!_text_database_has_loaded(sVar0))
		{
			iVar1 = 0;
		}
	}
	sVar2 = "BTUPAUD";
	if (_does_text_database_exist(sVar2))
	{
		_text_database_request(sVar2);
		if (!_text_database_has_loaded(sVar2))
		{
			iVar1 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_260(func_259(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	switch (Local_1486.f_19)
	{
		case 0:
			if (!network_is_host_of_this_script())
			{
				return true;
			}
			Local_1486.f_19.f_142 = _create_anim_scene(func_261(), 0, func_262(), true, true);
			if (!_does_anim_scene_exist(Local_1486.f_19.f_142))
			{
				func_227();
				return false;
			}
			else
			{
				load_anim_scene(Local_1486.f_19.f_142);
				Local_16.f_7.f_14 = _anim_scene_to_net(Local_1486.f_19.f_142);
			}
			func_263(1);
			return false;
		case 1:
			if (!_is_anim_scene_loaded(Local_1486.f_19.f_142, true, false))
			{
				return false;
			}
			break;
	}
	return iVar1;
}

bool func_150()
{
	bVar0 = false;
	if (!func_264())
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
	if (!func_64(1))
	{
		func_265(Local_1486.f_9);
		func_143(1);
	}
}

void func_157()
{
	func_266();
}

void func_158()
{
	func_267();
	func_268();
	func_269();
	func_180(func_179(), 1, 0);
	func_270(func_179());
	func_271(0, 1248971179);
	func_271(1, -114666387);
	func_272();
	func_273(0);
}

void func_159()
{
	func_274();
}

void func_160()
{
}

void func_161()
{
	if (func_222(Local_1486.f_15))
	{
		return;
	}
	if (func_275())
	{
		return;
	}
	if (func_276(Local_1486.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_1486.f_15);
		if (fVar0 < 200f)
		{
			func_145(4096);
		}
		else if (fVar0 < 400f)
		{
			func_144(4096);
			func_145(2048);
		}
		else
		{
			func_144(4096);
			func_144(2048);
		}
	}
}

void func_162()
{
	func_277();
	func_278();
	func_279();
	func_280();
}

void func_163()
{
	if (func_281())
	{
		func_145(8);
	}
	else
	{
		func_144(8);
	}
}

void func_164()
{
	func_282();
	iVar0 = func_284(func_283(), 1);
	fVar1 = func_285(iVar0, func_283(), 1);
	func_286(fVar1);
	func_287();
	func_288();
	func_289();
	func_290(Local_16.f_7);
	func_291(&(Local_1486.f_19.f_1));
	if (!func_178(1048576, -1, 1))
	{
		func_292();
		func_293();
	}
	func_294();
	func_295();
	func_296();
	func_297();
	func_298();
	func_299();
	func_300();
	func_301();
	func_302();
	func_303();
	switch (Local_1486.f_19.f_1)
	{
		case 0:
			func_304();
			break;
		case 1:
			func_305(&fVar1);
			break;
		case 2:
			func_306(&iVar0, &fVar1);
			break;
		case 3:
			func_307(&iVar0);
			break;
		case 4:
			func_308();
			break;
		case 5:
			func_309();
			break;
		case 6:
			func_310(&fVar1);
			break;
		case 7:
			func_311();
			break;
		case 8:
			func_312();
			break;
		case 9:
			func_313();
			break;
		case 10:
			func_314();
			break;
		case 11:
			func_315();
			break;
		case 12:
			func_316();
			break;
	}
}

void func_165()
{
	if (!func_128(8, 255))
	{
		func_145(16);
	}
	else
	{
		func_144(16);
	}
}

void func_166()
{
	Local_1486.f_6 = -1;
	Local_1486.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_1486.f_5 = (Local_1486.f_5 || Local_77[iVar0]) // PointerArith;
			Local_1486.f_6 = (Local_1486.f_6 && Local_77[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_167()
{
	func_282();
	func_294();
	func_295();
	func_296();
	if (func_317(67108864))
	{
		bVar0 = true;
	}
	else
	{
		fVar1 = func_285(player_ped_id(), func_283(), 1);
		if (fVar1 < 80f)
		{
			func_318(67108864);
		}
		else
		{
			func_319(67108864);
		}
	}
	if (func_320(128) || func_320(8388608))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_320(64))
		{
			set_player_control(player_id(), true, 256, false);
			func_318(64);
		}
		return true;
	}
	return false;
}

void func_168()
{
	func_321();
}

void func_169(int iParam0)
{
	if (does_blip_exist(Local_1486.f_179.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_1486.f_179.f_7[iParam0]->f_1));
	}
}

bool func_170(int iParam0, int iParam1)
{
	return func_175(Local_1486.f_179.f_7[iParam0]->f_2, iParam1);
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_172(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_323(func_322(Param0));
	iVar1 = func_324(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_325(Param0, &Var2);
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

void func_173(int iParam0, int iParam1)
{
	iVar0 = func_326(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_327(iVar0);
}

void func_174(int iParam0, int iParam1)
{
	func_126(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_328(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_329(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_330(iParam0);
			break;
	}
}

bool func_175(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_176(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_177(int iParam0, int iParam1)
{
	if (func_331(iParam0))
	{
		return;
	}
	if (func_332(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374]->f_1 = iParam1;
	Global_17353[Global_17374] = iParam0;
	Global_17374++;
}

bool func_178(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
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
	return (Local_77[iParam1]->f_1 && iParam0) != 0;
}

int func_179()
{
	switch (func_216())
	{
		case 0:
			return -812641169;
		case 1:
			return -554519756;
		case 2:
			return 865557632;
		case 3:
			return 1112996351;
		case 4:
			return -1608141409;
		case 5:
			return -311373772;
		case 6:
			return 61537448;
		case 7:
			return -925071604;
		case 8:
			return 1195508693;
		default:
			break;
	}
	return -1;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_333(1497516462);
			func_334(2016141805);
			func_334(1010885152);
			func_334(-502324015);
			break;
		case 2016141805:
			func_334(1497516462);
			func_333(2016141805);
			func_334(1010885152);
			func_334(-502324015);
			break;
		case 1010885152:
			func_334(1497516462);
			func_334(2016141805);
			func_333(1010885152);
			func_334(-502324015);
			break;
		case -502324015:
			func_334(1497516462);
			func_334(2016141805);
			func_334(1010885152);
			func_333(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_334(-538889627);
			func_334(-538880323);
			func_334(-1056767524);
			func_333(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_335();
			func_333(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_336();
			func_333(iParam0);
			break;
		case 2019386373:
			func_334(-664252410);
			func_334(2109952320);
			func_333(2019386373);
			break;
		case -664252410:
			func_334(2019386373);
			func_334(2109952320);
			func_333(-664252410);
			break;
		case 2109952320:
			func_334(2019386373);
			func_334(-664252410);
			func_333(2109952320);
			break;
		case -1674179981:
			func_334(-1835851517);
			func_334(-1838352012);
			func_333(-1674179981);
			break;
		case -1835851517:
			func_334(-1674179981);
			func_334(-1838352012);
			func_333(-1835851517);
			break;
		case -1838352012:
			func_334(-1674179981);
			func_334(-1835851517);
			func_333(-1838352012);
			break;
		case -1717960576:
			func_334(210001842);
			func_333(-1717960576);
			break;
		case 210001842:
			func_334(-1717960576);
			func_333(210001842);
			break;
		case -150493654:
			func_334(-1271608261);
			func_334(1846061697);
			func_334(-1145519186);
			func_333(-150493654);
			break;
		case -1271608261:
			func_334(-150493654);
			func_334(1846061697);
			func_334(-1145519186);
			func_333(-1271608261);
			break;
		case 1846061697:
			func_334(-150493654);
			func_334(-1271608261);
			func_334(-1145519186);
			func_333(1846061697);
			break;
		case -1145519186:
			func_334(-150493654);
			func_334(-1271608261);
			func_334(1846061697);
			func_333(-1145519186);
			break;
		case 1766284049:
			func_334(280705402);
			func_334(1926308480);
			func_333(1766284049);
			break;
		case 280705402:
			func_334(1766284049);
			func_334(1926308480);
			func_333(280705402);
			break;
		case 1926308480:
			func_334(1766284049);
			func_334(280705402);
			func_333(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_334(439465264);
				func_333(1609506757);
			}
			else
			{
				func_334(1609506757);
				func_334(439465264);
			}
			break;
		case 439465264:
			if (func_337(1609506757))
			{
				if (bParam1)
				{
					func_333(439465264);
				}
				else
				{
					func_334(439465264);
				}
			}
			break;
		case 1822001510:
			func_334(-1612662716);
			func_333(1822001510);
			break;
		case -1612662716:
			func_334(1822001510);
			func_333(-1612662716);
			break;
		case 1306158345:
			func_334(1952610440);
			func_334(-223469678);
			func_334(-404698347);
			func_334(1517904467);
			func_333(1306158345);
			break;
		case 1952610440:
			func_334(1306158345);
			func_334(-223469678);
			func_334(-404698347);
			func_334(1517904467);
			func_333(1952610440);
			break;
		case -223469678:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-404698347);
			func_334(1517904467);
			func_333(-223469678);
			break;
		case -404698347:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-223469678);
			func_334(1517904467);
			func_333(-404698347);
			break;
		case 1517904467:
			func_334(1306158345);
			func_334(1952610440);
			func_334(-223469678);
			func_334(-404698347);
			func_333(1517904467);
			break;
		case 1376646519:
			func_334(931649776);
			func_334(-434590080);
			func_334(1743048395);
			func_334(449774763);
			func_333(1376646519);
			break;
		case 931649776:
			func_334(1376646519);
			func_334(-434590080);
			func_334(1743048395);
			func_334(449774763);
			func_333(931649776);
			break;
		case -434590080:
			func_334(1376646519);
			func_334(931649776);
			func_334(1743048395);
			func_334(449774763);
			func_333(-434590080);
			break;
		case 1743048395:
			func_334(1376646519);
			func_334(931649776);
			func_334(-434590080);
			func_334(449774763);
			func_333(1743048395);
			break;
		case 449774763:
			func_334(1376646519);
			func_334(931649776);
			func_334(-434590080);
			func_334(1743048395);
			func_333(449774763);
			break;
		case -1414537028:
			func_334(38162571);
			func_334(1350391819);
			func_334(54073871);
			func_333(-1414537028);
			break;
		case 38162571:
			func_334(-1414537028);
			func_334(1350391819);
			func_334(54073871);
			func_333(38162571);
			break;
		case 1350391819:
			func_334(-1414537028);
			func_334(38162571);
			func_334(54073871);
			func_333(1350391819);
			break;
		case 54073871:
			func_334(-1414537028);
			func_334(38162571);
			func_334(1350391819);
			func_333(54073871);
			break;
		case 198200492:
			func_333(198200492);
			func_334(-1124061431);
			func_334(52706132);
			func_334(-259123672);
			break;
		case -1124061431:
			func_334(198200492);
			func_333(-1124061431);
			func_334(52706132);
			func_334(-259123672);
			break;
		case 52706132:
			func_334(198200492);
			func_334(-1124061431);
			func_333(52706132);
			func_334(-259123672);
			break;
		case -259123672:
			func_334(198200492);
			func_334(-1124061431);
			func_334(52706132);
			func_333(-259123672);
			break;
		case -919512195:
			func_333(-919512195);
			func_334(-1925798111);
			func_334(420709909);
			func_334(1703426636);
			break;
		case -1925798111:
			func_333(-1925798111);
			func_334(-919512195);
			func_334(420709909);
			func_334(1703426636);
			break;
		case 420709909:
			func_333(420709909);
			func_334(-919512195);
			func_334(-1925798111);
			func_334(1703426636);
			break;
		case 1703426636:
			func_333(1703426636);
			func_334(-919512195);
			func_334(-1925798111);
			func_334(420709909);
			break;
		case -1223121209:
			func_333(-1223121209);
			func_334(630808005);
			break;
		case 630808005:
			func_333(630808005);
			func_334(-1223121209);
			break;
		case 1453909576:
			func_333(1453909576);
			func_334(1643531967);
			break;
		case 1643531967:
			func_333(1643531967);
			func_334(1453909576);
			break;
		case 0:
			func_333(0);
			func_334(473295046);
			func_334(-1738165526);
			break;
		case 473295046:
			func_333(473295046);
			func_334(0);
			func_334(-1738165526);
			break;
		case -1738165526:
			func_333(-1738165526);
			func_334(0);
			func_334(473295046);
			break;
		case 932909855:
			func_333(932909855);
			func_334(2051822093);
			break;
		case 2051822093:
			func_333(2051822093);
			func_334(932909855);
			break;
		case 405586984:
			func_333(405586984);
			func_334(1509509592);
			func_334(-959357075);
			func_334(-1311865656);
			break;
		case 1509509592:
			func_333(1509509592);
			func_334(405586984);
			func_334(-959357075);
			func_334(-1311865656);
			break;
		case -959357075:
			func_333(-959357075);
			func_334(1509509592);
			func_334(405586984);
			func_334(-1311865656);
			break;
		case -1311865656:
			func_333(-1311865656);
			func_334(1509509592);
			func_334(-959357075);
			func_334(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_333(-524145696);
			}
			else
			{
				func_334(-524145696);
			}
			func_334(1626481264);
			func_334(282809459);
			break;
		case 282809459:
			func_333(282809459);
			func_334(1626481264);
			func_334(-524145696);
			break;
		case 1626481264:
			func_333(1626481264);
			func_334(-524145696);
			func_334(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_333(885203519);
			}
			else
			{
				func_334(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_333(-1080627546);
			}
			else
			{
				func_334(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_333(-510945576);
			}
			else
			{
				func_334(-510945576);
				func_338(385812466);
				func_338(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_333(iParam0);
			}
			else
			{
				func_334(iParam0);
			}
			break;
	}
}

int func_181(int iParam0)
{
	if (!func_339(iParam0))
	{
		return 0;
	}
	return func_340(iParam0);
}

bool func_182(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 9)
	{
		return true;
	}
	return false;
}

bool func_183(var uParam0)
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

int func_184(var uParam0, int iParam1)
{
	iVar0 = func_341(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_342(iParam1)) - 1);
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

void func_185(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_343(uParam0);
			break;
		case 1:
			func_343(uParam0);
			break;
		case 2:
			func_343(uParam0);
			break;
		case 3:
			func_344(uParam0);
			break;
		case 4:
			func_343(uParam0);
			break;
		case 5:
			func_343(uParam0);
			break;
		case 6:
			func_344(uParam0);
			break;
		case 7:
			func_344(uParam0);
			break;
		case 8:
			func_344(uParam0);
			break;
		case 9:
			func_343(uParam0);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_189(uParam0, iVar0);
		iVar0++;
	}
}

void func_187(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_188(uParam0, iVar0);
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_189(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_190(var uParam0, int iParam1)
{
	func_252(&(uParam0->f_25), iParam1);
}

void func_191(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_189(uParam0, 0);
			break;
		case 1:
		case 2:
			func_189(uParam0, 1);
			func_189(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_189(uParam0, 0);
			func_189(uParam0, 2);
			break;
		case 8:
			func_189(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_189(uParam0, 1);
			break;
		default:
			func_186(uParam0);
			break;
	}
}

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_345(uParam0);
			break;
		case 1:
			func_346(uParam0);
			break;
		case 2:
			func_347(uParam0);
			break;
		case 3:
			func_348(uParam0);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
			break;
	}
}

Vector3 func_193(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_349(uParam0);
			break;
		case 1:
		case 2:
			func_350(uParam0);
			break;
		case 3:
		case 4:
			func_351(uParam0);
			break;
		default:
			func_186(uParam0);
			break;
	}
	func_187(uParam0);
}

void func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_189(uParam0, 0);
			func_189(uParam0, 2);
			break;
		case 1:
			func_189(uParam0, 1);
			func_189(uParam0, 3);
			break;
		default:
			func_187(uParam0);
			func_186(uParam0);
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
			func_188(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 0);
			break;
		default:
			func_188(uParam0, 0);
			break;
	}
	func_186(uParam0);
}

void func_197(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_188(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_188(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_188(uParam0, 2);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
}

void func_198(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_188(uParam0, 0);
			func_189(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 1);
			func_189(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 2);
			func_189(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_188(uParam0, 3);
			func_189(uParam0, 0);
			break;
	}
}

void func_199(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_188(uParam0, 0);
			func_189(uParam0, 0);
			break;
		case 2:
			func_188(uParam0, 1);
			func_189(uParam0, 0);
			break;
		case 3:
		case 4:
			func_188(uParam0, 2);
			func_189(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 3);
			func_189(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_188(uParam0, 4);
			func_189(uParam0, 1);
			break;
	}
}

void func_200(var uParam0, int iParam1)
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
			func_188(uParam0, 3);
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
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
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
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_188(uParam0, 3);
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
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			break;
		default:
			func_187(uParam0);
			break;
	}
	func_186(uParam0);
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_189(uParam0, 1);
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			func_188(uParam0, 2);
			break;
		default:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
	}
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_189(uParam0, 1);
			func_188(uParam0, 0);
			func_188(uParam0, 1);
			break;
		default:
			func_189(uParam0, 0);
			func_188(uParam0, 0);
			break;
	}
}

void func_204(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_186(uParam0);
			func_187(uParam0);
			break;
		default:
			func_186(uParam0);
			func_187(uParam0);
			break;
	}
}

int func_205(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_206(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_207(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_208(int iParam0, int iParam1)
{
	if (func_352(&Var1, iParam0) && func_353(&Var1, iParam1))
	{
		func_354(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_209(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_352(&Var1, iParam0) && func_353(&Var1, iParam1))
	{
		func_354(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_355(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_211(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_355(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_212(var uParam0, var uParam1)
{
	func_356(uParam0);
	func_357(uParam0, 1);
	func_358(uParam0, 1);
	func_359(uParam1);
	func_360(uParam1);
	func_361(uParam1);
	func_362(uParam1, 1);
	func_363(uParam1, 1);
}

bool func_213(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_364(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_214(var uParam0, int iParam1, int iParam2)
{
	if (!func_365(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_left(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = (uParam0[Var0] && iVar5);
	(*uParam0)[Var0] = (uParam0[Var0] || (shift_left(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = (uParam0[Var0.f_1] || (shift_right(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_215()
{
	return func_367();
}

int func_216()
{
	return func_368();
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_219(int iParam0, int iParam1)
{
	func_217(&(Local_1486.f_179.f_7[iParam0]->f_2), iParam1);
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_221(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	iVar0 = func_369(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_222(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_223(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_224(struct<31> Param0)
{
	func_223(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

char* func_225()
{
	return "PB_DEAD";
	return "";
}

int func_226(int iParam0, int iParam1)
{
	if (!can_register_mission_objects(1))
	{
		*iParam1 = 1;
		return 0;
	}
	if (!func_371(Local_16.f_7.f_4[iParam0], func_259(iParam0), func_370(iParam0), 1, 0))
	{
		*iParam1 = 1;
		return 0;
	}
	return 1;
}

void func_227()
{
	func_123(2);
}

bool func_228(var uParam0)
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
	while (iVar2 < 10)
	{
		if (func_170(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_372(iVar2, uParam0, &bVar1))
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
			if (func_373(iVar2))
			{
				if (network_does_network_id_exist(&(Local_16.f_27[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_16.f_27[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_16.f_27[iVar2]));
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

bool func_229(int iParam0)
{
	return func_175(Local_1486.f_5, iParam0);
}

bool func_230(int iParam0)
{
	return func_175(Local_1486.f_6, iParam0);
}

bool func_231()
{
	if (Local_16.f_7 == 13)
	{
		func_374(0);
		return true;
	}
	iVar0 = func_181(0);
	if (!does_entity_exist(iVar0))
	{
		func_374(2);
		return true;
	}
	if (is_entity_dead(iVar0) && func_178(2048, -1, 1))
	{
		func_374(1);
		return true;
	}
	return false;
}

int func_232(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (!bParam3 || func_375(iVar0))
			{
				if (!bParam2 || func_376(iVar0))
				{
					if (func_377(iParam0, fParam1, iVar0, 0))
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

void func_233()
{
	if (func_320(2048))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar0))
		{
		}
		else
		{
			iVar1 = func_181(iVar0);
			if (!is_entity_dead(iVar1) && !_is_ped_hogtied(iVar1))
			{
				return;
			}
		}
		iVar0++;
	}
	func_319(2048);
	iVar2 = 0;
	while (iVar2 < Local_1486.f_179.f_7)
	{
		if (!func_378(iVar2))
		{
		}
		else
		{
			iVar3 = func_181(iVar2);
			if (is_entity_dead(iVar3) || !_is_ped_hogtied(iVar3))
			{
			}
		}
		iVar2++;
	}
}

void func_234()
{
	if (Local_16.f_7 >= 4)
	{
		return;
	}
	if (!func_379())
	{
		return;
	}
	func_380(4);
}

void func_235()
{
	if (!func_381(64))
	{
		return;
	}
	if (func_320(4194304))
	{
		return;
	}
	func_382(64);
}

void func_236()
{
	if (!func_317(2048))
	{
		return;
	}
	if (func_381(256))
	{
		return;
	}
	if (!func_381(2))
	{
		func_383(Local_16.f_7.f_6[2]);
		func_382(2);
		return;
	}
	if (!func_237(&(Local_16.f_7.f_6[2])))
	{
		func_383(Local_16.f_7.f_6[2]);
		func_384(2);
	}
	iVar0 = func_385(&(Local_16.f_7.f_6[2]));
	if (iVar0 > 4000)
	{
		func_386(Local_16.f_7.f_6[2]);
		func_382(256);
	}
}

bool func_237(int iParam0)
{
	return iParam0 != 0;
}

void func_238()
{
	if (!func_317(1))
	{
		return;
	}
	func_380(1);
}

void func_239()
{
	if (!func_317(2))
	{
		return;
	}
	func_380(2);
}

void func_240()
{
	if (!func_317(8))
	{
		return;
	}
	func_380(3);
}

void func_241()
{
	if (!func_317(32))
	{
		return;
	}
	func_387(0);
}

void func_242()
{
	if (!func_317(1024))
	{
		return;
	}
	func_383(Local_16.f_7.f_6[1]);
	func_380(5);
}

void func_243()
{
	if (!func_317(16384))
	{
		return;
	}
	func_388(2);
	func_380(6);
}

void func_244()
{
	iVar0 = func_389();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	iVar1 = network_get_participant_index(iVar0);
	if (!network_is_participant_active(iVar1))
	{
		return;
	}
	iVar2 = iVar1;
	switch (Local_77[iVar2]->f_1.f_2)
	{
		case 1:
			break;
		case 2:
			func_380(7);
			func_388(1);
			return;
	}
}

void func_245()
{
	if (!func_381(32))
	{
		Local_16.f_7.f_17 = func_389();
		if (!_network_is_player_index_valid(Local_16.f_7.f_17))
		{
			return;
		}
		iVar0 = get_player_ped(Local_16.f_7.f_17);
		iVar1 = func_181(0);
		_0x4820a6939d7cef28(iVar0, 0);
		_hide_ped_weapons(iVar0, 2, false);
		iVar2 = func_390(iVar1, iVar0, 1060437492);
		if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
		{
			bVar3 = true;
			func_382(128);
		}
		switch (iVar2)
		{
			case 0:
			case 1:
			case 2:
				if (!bVar3)
				{
					if (is_ped_male(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
			case 3:
				if (!bVar3)
				{
					if (is_ped_male(iVar0))
					{
						Local_16.f_7.f_15 = 4;
					}
					else
					{
						Local_16.f_7.f_15 = 5;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 6;
				}
				break;
			default:
				if (!bVar3)
				{
					if (is_ped_male(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
		}
		func_382(32);
		return;
	}
	if (!func_317(32768))
	{
		return;
	}
	func_380(8);
}

void func_246()
{
	if (!func_317(65536))
	{
		return;
	}
	func_380(9);
}

void func_247()
{
	if (!func_317(131072))
	{
		return;
	}
	func_380(10);
}

void func_248()
{
	if (!func_317(262144))
	{
		return;
	}
	func_380(11);
}

void func_249()
{
	if (!func_317(524288))
	{
		return;
	}
	func_383(Local_16.f_7.f_6[4]);
	func_380(12);
}

void func_250()
{
	if (!func_317(1048576))
	{
		return;
	}
	if (!func_320(128))
	{
		return;
	}
	func_380(13);
}

int func_251(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	if (!func_221(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_252(var uParam0, int iParam1)
{
	func_391(uParam0, iParam1);
}

void func_253(var uParam0, int iParam1)
{
	func_392(uParam0, iParam1);
}

void func_254(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_393(&Var0, iParam0))
			{
				func_394(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_255(int iParam0)
{
}

void func_256(int iParam0)
{
}

int func_257(int iParam0)
{
	return iParam0;
}

void func_258(int iParam0)
{
	if (func_395(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_396(iParam0, func_257(iVar0)))
			{
				if (!func_397(iParam0, func_257(iVar0)))
				{
					if (func_398(iParam0, iVar0))
					{
						func_399(&(Local_1486.f_582.f_23[iVar0]), 0, 0);
						func_400(iParam0, func_257(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2038507899;
		default:
			break;
	}
	return 0;
}

bool func_260(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

char* func_261()
{
	return "script@beat@wilderness@tied_up_ped@Help";
	return "";
}

char* func_262()
{
	return "PB_HELP";
	return "";
}

void func_263(int iParam0)
{
	if (Local_1486.f_19 == iParam0)
	{
		return;
	}
	Local_1486.f_19 = iParam0;
}

bool func_264()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (is_bit_set(Local_1486.f_179.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_401(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!is_bit_set(Local_1486.f_179.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_1486.f_179.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					set_bit(&(Local_1486.f_179.f_3), iVar0);
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

void func_265(struct<2> Param0)
{
	if (func_324(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_324(Param0)))
	{
		_0x99230691875fc218(func_322(Param0), func_324(Param0), Global_35);
	}
}

void func_266()
{
	if (!func_213(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_402(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_267()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = func_181(iVar0);
		if (func_403(iVar0))
		{
		}
		else if (!network_has_control_of_entity(iVar1))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					set_blocking_of_non_temporary_events(iVar1, true);
					set_ped_config_flag(iVar1, 178, false);
					set_ped_config_flag(iVar1, 317, true);
					set_ped_config_flag(iVar1, 277, true);
					set_ped_config_flag(iVar1, 6, true);
					set_ped_config_flag(iVar1, 494, true);
					set_ped_config_flag(iVar1, 148, true);
					set_ped_config_flag(iVar1, 26, true);
					_0xae6004120c18df97(iVar1, 0, 0);
					remove_all_ped_weapons(iVar1, true, true);
					break;
				case 1:
					func_404(1, -183018591);
					break;
				case 2:
					func_404(2, -183018591);
					break;
				case 3:
					func_404(3, 379542007);
					break;
				case 4:
					func_404(4, 379542007);
					break;
				case 5:
					func_404(5, -183018591);
					break;
				case 6:
					func_404(6, -183018591);
					break;
			}
		}
		iVar0++;
	}
}

void func_268()
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (!network_does_network_id_exist(&(Local_16.f_7.f_4[iVar0])))
		{
		}
		else
		{
			Local_1486.f_19.f_5[iVar0]->f_1 = net_to_obj(&(Local_16.f_7.f_4[iVar0]));
			iVar1 = func_405(iVar0);
			if (!network_has_control_of_entity(iVar1))
			{
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_269()
{
	if (!network_is_host_of_this_script())
	{
		if (network_does_network_id_exist(Local_16.f_7.f_14))
		{
			Local_1486.f_19.f_142 = _net_to_anim_scene(Local_16.f_7.f_14);
			if (!_does_anim_scene_exist(Local_1486.f_19.f_142))
			{
			}
		}
	}
	if (network_has_control_of_network_id(Local_16.f_7.f_14))
	{
		func_406();
		set_anim_scene_origin(Local_1486.f_19.f_142, func_407(), 0f, 0f, func_408(), 2);
		start_anim_scene(Local_1486.f_19.f_142);
	}
}

void func_270(int iParam0)
{
	switch (iParam0)
	{
		case -2043909922:
		case -1145153057:
			if (!func_41())
			{
				if (func_337(-2043909922))
				{
					func_409(-2127191462, 1, 0);
					func_410(-2127191462, 0, 0);
					door_system_set_automatic_rate(-2127191462, 2f);
					door_system_set_open_ratio(-2127191462, 1f, 0);
				}
				else if (func_337(-1145153057))
				{
					func_409(-2127191462, 1, 0);
					func_410(-2127191462, 1, 0);
					door_system_set_open_ratio(-2127191462, 0f, 1);
					_0x7f458b543006c8fe(-2127191462, 16);
				}
				else
				{
					func_338(-2127191462);
				}
			}
			break;
		case 468797819:
		case 589380360:
			if (!func_41())
			{
				if (func_337(589380360))
				{
					func_409(-2127191462, 1, 0);
					func_410(-929446589, 0, 0);
					door_system_set_automatic_rate(-929446589, 2f);
					door_system_set_open_ratio(-929446589, 1f, 0);
				}
				else if (func_337(468797819))
				{
					func_409(-2127191462, 1, 0);
					func_410(-929446589, 1, 0);
					door_system_set_open_ratio(-929446589, 0f, 1);
					_0x7f458b543006c8fe(-929446589, 16);
				}
				else
				{
					func_338(-929446589);
				}
			}
			break;
		case -632127260:
		case 965467037:
			if (!func_41())
			{
				if (func_337(-632127260))
				{
					func_409(-2127191462, 1, 0);
					func_410(1207903970, 0, 0);
					door_system_set_automatic_rate(1207903970, 2f);
					door_system_set_open_ratio(1207903970, 1f, 0);
				}
				else if (func_337(965467037))
				{
					func_409(-2127191462, 1, 0);
					func_410(1207903970, 1, 0);
					door_system_set_open_ratio(1207903970, 0f, 1);
					_0x7f458b543006c8fe(1207903970, 16);
				}
				else
				{
					func_338(1207903970);
				}
			}
			break;
		case -279765076:
		case -209894800:
			if (!func_41())
			{
				if (func_337(-209894800))
				{
					func_409(-2127191462, 1, 0);
					func_410(193903155, 0, 0);
					door_system_set_automatic_rate(193903155, 2f);
					door_system_set_open_ratio(193903155, 1f, 0);
				}
				else if (func_337(-279765076))
				{
					func_409(-2127191462, 1, 0);
					func_410(193903155, 1, 0);
					door_system_set_open_ratio(193903155, 0f, 1);
					_0x7f458b543006c8fe(193903155, 16);
				}
				else
				{
					func_338(193903155);
				}
			}
			break;
		case -1585840296:
		case -510945576:
			if (!func_41())
			{
				if (func_337(-510945576))
				{
					func_410(385812466, 0, 0);
					func_410(-1201452352, 0, 0);
					door_system_set_open_ratio(385812466, 1f, 1);
					door_system_set_open_ratio(-1201452352, -1f, 1);
				}
				else if (func_337(-1585840296))
				{
					func_410(385812466, 0, 0);
					func_410(-1201452352, 0, 0);
				}
				else
				{
					func_410(385812466, 1, 0);
					func_410(-1201452352, 1, 0);
				}
			}
			break;
		case 1238086793:
			if (func_337(1238086793))
			{
				func_411(-414301703);
				func_411(1423912753);
				func_412("nav_lakay_mp");
				func_413("MS_HIDOUT_LAKAY");
				func_414(-414301703);
			}
			else
			{
				func_415(-414301703);
				func_411(1423912753);
				func_412("MS_HIDOUT_LAKAY");
				func_413("nav_lakay_mp");
				func_416(-414301703);
			}
			break;
		case 1302228510:
			if (func_337(1302228510))
			{
				func_411(-1809365172);
				func_413("MS_HIDOUT_BEAVERHOLLOW");
				func_414(-1809365172);
			}
			else
			{
				func_415(-1809365172);
				func_412("MS_HIDOUT_BEAVERHOLLOW");
				func_416(-1809365172);
			}
			break;
		case -460024530:
			if (func_337(-460024530))
			{
				func_411(1092530042);
				func_413("MS_HIDOUT_MILLESANICLAIM");
			}
			else
			{
				func_415(1092530042);
				func_412("MS_HIDOUT_MILLESANICLAIM");
			}
			break;
		case -108780030:
			if (func_337(-108780030))
			{
				func_411(-2051059045);
				func_413("MS_HIDOUT_FARMHOUSE");
				func_414(-2051059045);
			}
			else
			{
				func_415(-2051059045);
				func_412("MS_HIDOUT_FARMHOUSE");
				func_416(-2051059045);
			}
			break;
		case -1340339190:
			if (func_337(-1340339190))
			{
				func_411(-612173099);
				func_413("MS_HIDOUT_ROCKYSEVEN");
				func_414(-612173099);
				if (!does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					Global_1939655->f_21 = add_navmesh_blocking_object(2986.267f, 2204.891f, 165.9559f, 2.793124f, 2.804754f, 2.088651f, 120f, false, 7);
				}
			}
			else
			{
				func_415(-612173099);
				func_412("MS_HIDOUT_ROCKYSEVEN");
				func_416(-612173099);
				if (does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					remove_navmesh_blocking_object(&(Global_1939655->f_21));
				}
			}
			break;
		case 1698972798:
			if (func_337(1698972798))
			{
				func_411(-1408478050);
				func_413("MS_HIDOUT_MOSSYFLATS");
				func_414(-1408478050);
			}
			else
			{
				func_415(-1408478050);
				func_412("MS_HIDOUT_MOSSYFLATS");
				func_416(-1408478050);
			}
			break;
		case -1296807958:
			if (func_337(-1296807958))
			{
				func_411(-1974746920);
				func_413("MS_HIDOUT_QUAKERSCOVE");
				func_414(1392405485);
			}
			else
			{
				func_415(-1974746920);
				func_412("MS_HIDOUT_QUAKERSCOVE");
				func_416(1392405485);
			}
			break;
		case -1283202000:
			if (func_337(-1283202000))
			{
				func_411(1171226610);
				func_413("MS_HIDOUT_THELOFT");
				func_414(-1563742078);
			}
			else
			{
				func_415(1171226610);
				func_412("MS_HIDOUT_THELOFT");
				func_416(-1563742078);
			}
			break;
		case -1610966108:
			if (func_337(-1610966108))
			{
				func_411(406701199);
				func_413("MS_HIDOUT_CUMBERLANDFALLS");
				func_414(1518168193);
			}
			else
			{
				func_415(406701199);
				func_412("MS_HIDOUT_CUMBERLANDFALLS");
				func_416(1518168193);
			}
			break;
		case 1321892118:
			if (func_337(1321892118))
			{
				func_411(-1151968796);
				func_413("MS_HIDOUT_STILLWATERSTRANDS");
				func_414(-604101326);
			}
			else
			{
				func_415(-1151968796);
				func_412("MS_HIDOUT_STILLWATERSTRANDS");
				func_416(-604101326);
			}
			break;
		case -61411516:
			if (func_337(-61411516))
			{
				func_411(1975720265);
				func_413("MS_HIDOUT_COLTER");
			}
			else
			{
				func_415(1975720265);
				func_412("MS_HIDOUT_COLTER");
			}
			break;
		case 582380806:
			if (func_337(582380806))
			{
				func_411(508578717);
				func_413("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			else
			{
				func_415(508578717);
				func_412("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			break;
		case 1932172605:
			if (func_337(1932172605))
			{
				func_411(-848533860);
				func_413("MS_HIDOUT_CLEMENSCOVE");
			}
			else
			{
				if (_is_imap_active(-848533860))
				{
					func_417(791.0508f, -1244.354f, 41.5894f, 25f, 0, 0, 0, 0, 0);
				}
				func_415(-848533860);
				func_412("MS_HIDOUT_CLEMENSCOVE");
			}
			break;
		case 1159471771:
			if (func_337(1159471771))
			{
				func_411(830856441);
				func_413("MS_HIDOUT_TALLTREES");
				func_414(830856441);
			}
			else
			{
				func_415(830856441);
				func_412("MS_HIDOUT_TALLTREES");
				func_416(830856441);
			}
			break;
		case 784360470:
			if (func_337(784360470))
			{
				func_411(-522767301);
				func_413("MS_HIDOUT_SHIPROCK");
				func_414(1057818333);
			}
			else
			{
				func_415(-522767301);
				func_412("MS_HIDOUT_SHIPROCK");
				func_416(1057818333);
			}
			break;
		case 1881028477:
			if (func_337(1881028477))
			{
				func_411(-2103414139);
				func_413("MS_HIDOUT_CAMP_BACCHUS");
			}
			else
			{
				func_415(-2103414139);
				func_412("MS_HIDOUT_CAMP_BACCHUS");
			}
			break;
		case 1703398561:
			if (func_337(1703398561))
			{
				func_411(771896020);
				func_413("MS_HIDOUT_SOLOMONSFOLLY");
				func_414(2122765318);
			}
			else
			{
				func_415(771896020);
				func_412("MS_HIDOUT_SOLOMONSFOLLY");
				func_416(2122765318);
			}
			break;
		case -1209597203:
			if (func_337(-1209597203))
			{
				func_411(895825612);
				func_413("MS_HIDOUT_TWINROCKS");
				func_414(453488895);
			}
			else
			{
				func_415(895825612);
				func_412("MS_HIDOUT_TWINROCKS");
				func_416(453488895);
			}
			break;
		case -897750037:
			if (func_337(-897750037))
			{
				func_411(1256749990);
				func_413("MS_HIDOUT_CUERASECO");
				func_414(621230359);
			}
			else
			{
				func_415(1256749990);
				func_412("MS_HIDOUT_CUERASECO");
				func_416(621230359);
			}
			break;
		case 929582877:
			if (func_337(929582877))
			{
				func_411(-1934886317);
				func_413("MS_HIDOUT_MANTECAFALLS");
				func_414(-1934886317);
			}
			else
			{
				func_415(-1934886317);
				func_412("MS_HIDOUT_MANTECAFALLS");
				func_416(-1934886317);
			}
			break;
		case -911126844:
			if (func_337(-911126844))
			{
				func_411(993438435);
				func_413("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_414(993438435);
			}
			else
			{
				func_415(993438435);
				func_412("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_416(993438435);
			}
			break;
		case -355531636:
			if (func_337(-355531636))
			{
				func_411(1495728629);
				func_413("MS_HIDOUT_REPENTANCE");
				func_414(1495728629);
			}
			else
			{
				func_415(1495728629);
				func_412("MS_HIDOUT_REPENTANCE");
				func_416(1495728629);
			}
			break;
		case -1455998786:
			if (func_337(-1455998786))
			{
				func_411(967935536);
				func_413("MS_HIDOUT_SEAOFCORONADO");
				func_414(245110571);
			}
			else
			{
				func_415(967935536);
				func_412("MS_HIDOUT_SEAOFCORONADO");
				func_416(245110571);
			}
			break;
		case -851626677:
			if (func_337(-851626677))
			{
				func_411(-773956478);
				func_413("MS_HIDOUT_CHOLLASPRINGS");
			}
			else
			{
				func_415(-773956478);
				func_412("MS_HIDOUT_CHOLLASPRINGS");
			}
			break;
		case -734416508:
			if (func_337(-734416508))
			{
				func_411(-1615749463);
				func_413("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			else
			{
				func_415(-1615749463);
				func_412("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			break;
		case -396624371:
			if (func_337(-396624371))
			{
				func_411(-361709910);
				func_413("MS_HIDOUT_CAMP_CHOLLA");
				func_414(2123181135);
			}
			else
			{
				func_415(-361709910);
				func_412("MS_HIDOUT_CAMP_CHOLLA");
				func_416(2123181135);
			}
			break;
		case 885777893:
			if (func_337(885777893))
			{
				func_411(-1323334072);
				func_413("MS_HIDOUT_CAMP_PIKES");
				func_414(968587226);
			}
			else
			{
				func_415(-1323334072);
				func_412("MS_HIDOUT_CAMP_PIKES");
				func_416(968587226);
			}
			break;
		case 619839857:
			if (func_337(619839857))
			{
				func_411(-1521897637);
				func_413("MS_HIDOUT_GAPTOOTH");
				func_414(-1521897637);
			}
			else
			{
				func_415(-1521897637);
				func_412("MS_HIDOUT_GAPTOOTH");
				func_416(-1521897637);
			}
			break;
		case 2113625508:
			if (func_337(2113625508))
			{
				func_411(-716370751);
				func_413("mp_intro_jessica_camp_rhodes");
				func_414(-716370751);
			}
			else
			{
				func_415(-716370751);
				func_412("mp_intro_jessica_camp_rhodes");
				func_416(-716370751);
			}
			break;
		case 1549124796:
			if (func_337(1549124796))
			{
				func_411(-2053832767);
				func_413("mp_intro_jessica_camp_valentine");
				func_414(-2053832767);
			}
			else
			{
				func_415(-2053832767);
				func_412("mp_intro_jessica_camp_valentine");
				func_416(-2053832767);
			}
			break;
		case -502473159:
			if (func_337(-502473159))
			{
				func_411(372806894);
				func_413("mp_intro_jessica_camp_blackwater");
				func_414(372806894);
			}
			else
			{
				func_415(372806894);
				func_412("mp_intro_jessica_camp_blackwater");
				func_416(372806894);
			}
			break;
		case 229371495:
			if (func_337(229371495))
			{
				func_411(-1534577778);
				func_413("mp_intro_jessica_camp_tumbleweed");
				func_414(-1534577778);
			}
			else
			{
				func_415(-1534577778);
				func_412("mp_intro_jessica_camp_tumbleweed");
				func_416(-1534577778);
			}
			break;
		case -781631220:
			if (func_337(-781631220))
			{
				func_411(-2024941402);
				func_413("mp_intro_hideout_rhodes");
				func_414(-2024941402);
			}
			else
			{
				func_415(-2024941402);
				func_412("mp_intro_hideout_rhodes");
				func_416(-2024941402);
			}
			break;
		case 1708045337:
			if (func_337(1708045337))
			{
				func_411(-50297425);
				func_413("mp_intro_hideout_valentine");
				func_414(-50297425);
			}
			else
			{
				func_415(-50297425);
				func_412("mp_intro_hideout_valentine");
				func_416(-50297425);
			}
			break;
		case 1166612791:
			if (func_337(1166612791))
			{
				func_411(536714458);
				func_413("mp_intro_hideout_blackwater");
				func_414(536714458);
			}
			else
			{
				func_415(536714458);
				func_412("mp_intro_hideout_blackwater");
				func_416(536714458);
			}
			break;
		case 74872959:
			if (func_337(74872959))
			{
				func_411(2068117822);
				func_413("mp_intro_hideout_tumbleweed");
				func_414(2068117822);
			}
			else
			{
				func_415(2068117822);
				func_412("mp_intro_hideout_tumbleweed");
				func_416(2068117822);
			}
			break;
		case 1744443559:
			if (func_337(1744443559))
			{
				func_411(-576687258);
				func_413("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_414(-576687258);
			}
			else
			{
				func_415(-576687258);
				func_412("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_416(-576687258);
			}
			break;
		case 509781469:
			if (func_337(509781469))
			{
				func_411(226557169);
				func_413("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_414(226557169);
			}
			else
			{
				func_415(226557169);
				func_412("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_416(226557169);
			}
			break;
		case 885378256:
			if (func_337(885378256))
			{
				func_411(476687617);
				func_413("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_414(476687617);
			}
			else
			{
				func_415(476687617);
				func_412("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_416(476687617);
			}
			break;
		case -524787708:
			if (func_337(-524787708))
			{
				func_411(1856368424);
				func_413("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_414(1856368424);
			}
			else
			{
				func_415(1856368424);
				func_412("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_416(1856368424);
			}
			break;
		case -1861414976:
			if (func_337(-1861414976))
			{
				func_411(568096966);
				func_413("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_414(568096966);
			}
			else
			{
				func_415(568096966);
				func_412("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_416(568096966);
			}
			break;
		case 747514327:
			if (func_337(747514327))
			{
				func_411(1104817207);
				func_413("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_414(1104817207);
			}
			else
			{
				func_415(1104817207);
				func_412("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_416(1104817207);
			}
			break;
		case -1042021329:
			if (func_337(-1042021329))
			{
				func_411(478888800);
				func_413("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_414(478888800);
			}
			else
			{
				func_415(478888800);
				func_412("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_416(478888800);
			}
			break;
		case -591815673:
			if (func_337(-591815673))
			{
				func_411(1955414013);
				func_413("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_414(1955414013);
			}
			else
			{
				func_415(1955414013);
				func_412("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_416(1955414013);
			}
			break;
		case 883901517:
			if (func_337(883901517))
			{
				func_411(-1207218596);
				func_413("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_414(-1207218596);
			}
			else
			{
				func_415(-1207218596);
				func_412("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_416(-1207218596);
			}
			break;
		case 1561093093:
			if (func_337(1561093093))
			{
				func_411(-116967529);
				func_413("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_414(-116967529);
			}
			else
			{
				func_415(-116967529);
				func_412("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_416(-116967529);
			}
			break;
		case 1287917122:
			if (func_337(1287917122))
			{
				func_412("pro_empty_nav_tu003");
				func_411(-605808708);
				func_413("WS_MP_CAMP_DEFEND_LITTLE_CREEK_AND_PRONGHORN");
				func_414(-605808708);
			}
			else
			{
				func_415(-605808708);
				func_412("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
				func_413("pro_empty_nav_tu003");
				func_416(-605808708);
			}
			break;
		case -1943367752:
			if (func_337(-1943367752))
			{
				func_411(-100150000);
				func_413("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_414(-100150000);
			}
			else
			{
				func_415(-100150000);
				func_412("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_416(-100150000);
			}
			break;
		case -371827125:
			if (func_337(-371827125))
			{
				func_411(-320403109);
				func_413("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_414(-320403109);
			}
			else
			{
				func_415(-320403109);
				func_412("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_416(-320403109);
			}
			break;
		case -889906510:
			if (func_337(-889906510))
			{
				func_411(18369533);
				func_413("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_414(18369533);
			}
			else
			{
				func_415(18369533);
				func_412("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_416(18369533);
			}
			break;
		case 64896505:
			if (func_337(64896505))
			{
				func_411(-331965904);
				func_413("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_414(-331965904);
			}
			else
			{
				func_415(-331965904);
				func_412("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_416(-331965904);
			}
			break;
		case -1161687045:
			if (func_337(-1161687045))
			{
				func_411(127191252);
				func_413("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_414(127191252);
			}
			else
			{
				func_415(127191252);
				func_412("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_416(127191252);
			}
			break;
		case 526003171:
			if (func_337(526003171))
			{
				func_411(-2074957003);
				func_413("MS_OTH_MAC");
			}
			else
			{
				func_415(-2074957003);
				func_412("MS_OTH_MAC");
			}
			break;
		case -895073533:
			if (func_337(-895073533))
			{
				func_411(-1226747327);
				func_411(-141795616);
				func_413("MS_OTH_SHEPHERDS_RISE");
			}
			else
			{
				func_415(-1226747327);
				func_415(-141795616);
				func_412("MS_OTH_SHEPHERDS_RISE");
			}
			break;
		case -2066272360:
			if (func_337(-2066272360))
			{
				func_411(-1973910443);
				func_413("MS_OTH_TALL_TREES");
			}
			else
			{
				func_415(-1973910443);
				func_412("MS_OTH_TALL_TREES");
			}
			break;
		case 93964309:
			if (func_337(93964309))
			{
				func_411(1707200698);
				func_413("MS_OTH_CASTORS");
			}
			else
			{
				func_415(1707200698);
				func_412("MS_OTH_CASTORS");
			}
			break;
		case 2103908624:
			if (func_337(2103908624))
			{
				func_411(1883767827);
				func_413("MS_AS_TRK_LAKE_ISABELLA");
			}
			else
			{
				func_415(1883767827);
				func_412("MS_AS_TRK_LAKE_ISABELLA");
			}
			break;
		case -812641169:
			if (func_337(-812641169))
			{
				func_411(104287396);
				func_413("gcexc_nav_scm_003");
				func_414(-1585767499);
			}
			else
			{
				func_415(104287396);
				func_412("gcexc_nav_scm_003");
				func_416(-1585767499);
			}
			break;
		case -554519756:
			if (func_337(-554519756))
			{
				func_411(715920781);
				func_413("gcexc_nav_scm_005");
				func_414(-1089087766);
			}
			else
			{
				func_415(715920781);
				func_412("gcexc_nav_scm_005");
				func_416(-1089087766);
			}
			break;
		case 865557632:
			if (func_337(865557632))
			{
				func_411(-900541220);
				func_413("gcexc_nav_scm_006");
				func_414(-1305559780);
			}
			else
			{
				func_415(-900541220);
				func_412("gcexc_nav_scm_006");
				func_416(-1305559780);
			}
			break;
		case 1112996351:
			if (func_337(1112996351))
			{
				func_411(-1199296193);
				func_413("gcexc_nav_scm_007");
				func_414(1751361927);
			}
			else
			{
				func_415(-1199296193);
				func_412("gcexc_nav_scm_007");
				func_416(1751361927);
			}
			break;
		case -1608141409:
			if (func_337(-1608141409))
			{
				func_411(546408124);
				func_413("gcexc_nav_scm_010");
				func_414(-198328307);
			}
			else
			{
				func_415(546408124);
				func_412("gcexc_nav_scm_010");
				func_416(-198328307);
			}
			break;
		case -311373772:
			if (func_337(-311373772))
			{
				func_411(-1232784731);
				func_413("gcexc_nav_scm_013");
				func_414(1092704755);
			}
			else
			{
				func_415(-1232784731);
				func_412("gcexc_nav_scm_013");
				func_416(1092704755);
			}
			break;
		case 61537448:
			if (func_337(61537448))
			{
				func_411(301558156);
				func_413("gcexc_nav_scm_015");
				func_414(473665576);
			}
			else
			{
				func_415(301558156);
				func_412("gcexc_nav_scm_015");
				func_416(473665576);
			}
			break;
		case -925071604:
			if (func_337(-925071604))
			{
				func_411(1683033662);
				func_413("gcexc_nav_scm_017");
				func_414(2037697181);
			}
			else
			{
				func_415(1683033662);
				func_412("gcexc_nav_scm_017");
				func_416(2037697181);
			}
			break;
		case 1195508693:
			if (func_337(1195508693))
			{
				func_411(-643041038);
				func_413("gcexc_nav_scm_019");
				func_414(1415118950);
			}
			else
			{
				func_415(-643041038);
				func_412("gcexc_nav_scm_019");
				func_416(1415118950);
			}
			break;
	}
}

void func_271(int iParam0, int iParam1)
{
	Local_1486.f_582.f_23[iParam0] = iParam1;
}

void func_272()
{
	switch (func_216())
	{
		case 0:
			Local_1486.f_19.f_159 = _create_volume_box(1567.49f, -2048.007f, 48.29533f, 0f, 0f, 35.60825f, 4.65819f, 5.95441f, 3.379627f);
			break;
		default:
			return;
	}
	func_177(Local_1486.f_19.f_159, 1);
}

void func_273(int iParam0)
{
	Local_1486.f_582.f_1[iParam0] = -1;
}

void func_274()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 9)
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
					func_420(&(Local_1486.f_332), Var1);
					func_421(func_418(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_275()
{
	return (func_129(32) || func_128(32, 255));
}

bool func_276(int iParam0, int iParam1)
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

void func_277()
{
	func_423();
	func_424();
}

void func_278()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_425(iVar0, bVar1, iVar2);
		func_426(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_279()
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
	if (!func_213(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (network_is_in_mp_cutscene() != Local_1486.f_179.f_152)
	{
		bVar8 = true;
		Local_1486.f_179.f_152 = !Local_1486.f_179.f_152;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar7 = false;
		if (Local_1486.f_179.f_118 >= 10)
		{
			Local_1486.f_179.f_118 = 0;
		}
		iVar0 = Local_1486.f_179.f_118;
		Local_1486.f_179.f_118++;
		iVar9 = func_427(iVar0);
		iVar1 = &Local_1486.f_179.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_170(iVar9, 4))
		{
			func_402(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_77[iVar3]->f_4.f_2[iVar0] > -1f)
			{
				Local_77[iVar3]->f_4.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_1486.f_179.f_5, iVar0))
			{
				clear_bit(&(Local_1486.f_179.f_5), iVar0);
				clear_bit(&(Local_1486.f_179.f_6), iVar0);
				clear_bit(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		else
		{
			bVar7 = func_428(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_1486.f_179.f_119, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_1486.f_179.f_119), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_77[iVar3]->f_4.f_1, iVar0))
				{
					set_bit(&(Local_77[iVar3]->f_4.f_1), iVar0);
				}
				func_429(Local_1486.f_179.f_120[iVar0]);
			}
		}
		if (is_bit_set(Local_77[iVar3]->f_4.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_430(Local_1486.f_179.f_120[iVar0]) || func_431(Local_1486.f_179.f_120[iVar0], 0.5f))))
			{
				func_432(Local_1486.f_179.f_120[iVar0]);
				clear_bit(&(Local_77[iVar3]->f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_170(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_1486.f_179.f_152, 0, 256);
		}
		if (func_170(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_433(iVar9))
						{
							if (!func_372(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_434(iVar9, 4);
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
				if (!func_433(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1486.f_179.f_119 != 0)
	{
		if (!func_435(1, 255))
		{
			func_436(1);
		}
	}
	else if (func_435(1, 255))
	{
		func_437(1);
	}
}

void func_280()
{
	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_213(&iVar25))
	{
		return;
	}
	func_438();
	bVar27 = get_current_ped_weapon(player_ped_id(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && is_ped_shooting(player_ped_id()));
	if ((bVar27 && bVar28) && _0x705be297eebdb95d(iVar26))
	{
		Local_1486.f_332.f_64 = 0;
		Local_77[iVar25]->f_17.f_4 = get_network_time_accurate();
	}
	bVar29 = (bVar28 && (iVar26 == -1361787316 || iVar26 == 1698907612));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1486.f_332.f_237 >= 10)
		{
			Local_1486.f_332.f_237 = 0;
		}
		iVar1 = Local_1486.f_332.f_237;
		Local_1486.f_332.f_237++;
		iVar22++;
		iVar18 = func_418(iVar1);
		if (!func_439(iVar18))
		{
		}
		else if (func_440(iVar18, &Var5))
		{
			if (func_441(&Var5, iVar18))
			{
				if (func_442(&(Local_77[iVar25]->f_17), 8, iVar1))
				{
					func_443(&(Local_77[iVar25]->f_17), 8, iVar1);
				}
			}
			else if (!func_442(&(Local_77[iVar25]->f_17), 8, iVar1))
			{
				func_444(&(Local_77[iVar25]->f_17), 8, iVar1);
			}
			if (!does_entity_exist(Var5))
			{
			}
			else
			{
				func_445(iVar18);
				if (func_446(iVar18))
				{
					if (func_447(iVar18))
					{
						if (!func_448(iVar18))
						{
							func_449(iVar18);
						}
					}
					if (func_450(iVar18))
					{
						func_451(iVar18);
					}
				}
				else
				{
					if (func_452(iVar18))
					{
						if ((does_entity_exist(Var5) && !is_entity_dead(Var5)) && network_has_control_of_entity(Var5))
						{
							set_ped_reset_flag(Var5, 42, true);
						}
					}
					if (!func_453(Var5))
					{
						if (network_has_control_of_entity(Var5))
						{
							func_420(&(Local_1486.f_332), Var5);
						}
					}
					if (!func_454(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_455(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_456(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_457(Var5, Var5.f_1, &(Local_1486.f_332), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!is_bit_set(Local_1486.f_332.f_64, iVar18))
									{
										bVar2 = true;
										set_bit(&(Local_1486.f_332.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_390(player_ped_id(), Var5, 1060437492) == 0)
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
									set_bit(&(Local_1486.f_332.f_64), iVar18);
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
															set_bit(&(Local_1486.f_332.f_64), iVar18);
														}
														break;
													case -1507090758:
													case -1102089407:
														if (!Local_1486.f_332.f_2 & 4 != 0)
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
										set_bit(&(Local_1486.f_332.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_462(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_442(&(Local_77[iVar25]->f_17), 8, iVar1))
								{
									func_443(&(Local_77[iVar25]->f_17), 8, iVar1);
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
												Jump @1398; //curOff = 1202
												if (func_469(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (network_has_control_of_entity(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (&Local_1486.f_332.f_239[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1486.f_332.f_239[iVar18] = 0;
															}
															else
															{
																iVar0 = &Local_1486.f_332.f_239[iVar18];
																Local_1486.f_332.f_239[iVar18] = &Local_1486.f_332.f_239[iVar18] + 1;
															}
															iVar24++;
															if (func_470(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_471(iVar18, iVar20))
																{
																	if (func_454(iVar18, iVar0))
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

bool func_281()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_1486.f_14))
	{
		return false;
	}
	if (func_474())
	{
		return false;
	}
	if (func_475(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_282()
{
	Local_1486.f_19.f_149 = -1;
	Local_1486.f_19.f_150 = 0;
	Local_1486.f_19.f_151 = -1;
	Local_1486.f_19.f_152 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_1486.f_19.f_150 = (Local_1486.f_19.f_150 || Local_77[iVar0]->f_1);
			Local_1486.f_19.f_149 = (Local_1486.f_19.f_149 && Local_77[iVar0]->f_1);
			Local_1486.f_19.f_152 = (Local_1486.f_19.f_152 || Local_77[iVar0]->f_1.f_1);
			Local_1486.f_19.f_151 = (Local_1486.f_19.f_151 && Local_77[iVar0]->f_1.f_1);
		}
		iVar0++;
	}
}

Vector3 func_283()
{
	switch (func_216())
	{
		case 0:
			return 1561.062f, -2047.581f, 47.34312f;
		case 1:
			return 1379.959f, -1696.265f, 67.08415f;
		case 2:
			return 1621.737f, -1650.322f, 56.35657f;
		case 3:
			return 1504.896f, -1470.001f, 71.60625f;
		case 4:
			return 1082.788f, -1266.084f, 67.83965f;
		case 5:
			return 682.6197f, -992.2823f, 52.73629f;
		case 6:
			return 707.7625f, -886.0159f, 48.30226f;
		case 7:
			return 879.6771f, -538.0999f, 88.07765f;
		case 8:
			return 1011.859f, -394.3894f, 90.43398f;
		default:
			break;
	}
	return vLocal_13;
}

int func_284(vector3 vParam0, bool bParam3)
{
	fVar0 = 9999f;
	iVar2 = 255;
	iVar3 = 255;
	iVar5 = iVar5;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar2 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
		}
		else if (bParam3 && !func_476(iVar4, 1, 1))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar2);
			fVar6 = vdist(get_entity_coords(iVar1, false, false), vParam0);
			if (fVar6 < fVar0)
			{
				iVar3 = iVar2;
				fVar0 = fVar6;
				iVar5 = iVar4;
			}
		}
		iVar4++;
	}
	if (_network_is_player_index_valid(iVar3))
	{
		return get_player_ped(iVar3);
	}
	return 0;
}

float func_285(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_286(float fParam0)
{
	if (func_379())
	{
		return;
	}
	if (fParam0 < func_477())
	{
		func_387(0);
		func_478();
	}
}

void func_287()
{
	func_479();
	func_480();
}

void func_288()
{
	if (func_178(4, -1, 1))
	{
		return;
	}
	if (!func_317(2))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	func_481(1515458263, iVar0, 1);
	func_319(4);
}

void func_289()
{
	if (!func_320(2048))
	{
		return;
	}
	if (func_178(2048, -1, 1))
	{
		return;
	}
	func_482(&(Local_1486.f_332), 0);
	func_319(2048);
}

void func_290(int iParam0)
{
	if (Local_1486.f_19.f_1 == iParam0)
	{
		return;
	}
	Local_1486.f_19.f_1 = iParam0;
}

void func_291(var uParam0)
{
	if (*uParam0 == Local_16.f_7)
	{
		return;
	}
	func_290(Local_16.f_7);
}

void func_292()
{
	if (func_381(64))
	{
		if (func_178(4194304, -1, 1))
		{
			func_318(4194304);
			Local_77[participant_id_to_int()]->f_1.f_2 = -1;
		}
	}
	if (Local_16.f_7.f_1 != Local_1486.f_19.f_2)
	{
		Local_1486.f_19.f_2 = Local_16.f_7.f_1;
		if (func_178(2097152, -1, 1))
		{
			func_483(Local_16.f_7.f_1);
		}
	}
}

void func_293()
{
	iVar0 = func_181(0);
	fVar1 = func_484(Global_34, iVar0, 1, 1);
	if (func_178(2097152, -1, 1))
	{
		if (fVar1 > 10f)
		{
			_0xe98d55c5983f2509(func_181(0));
			if (network_has_control_of_entity(iVar0))
			{
				set_ped_config_flag(iVar0, 297, true);
			}
			func_485();
			func_318(2097152);
		}
		else if (func_486(0, 0, 0))
		{
			if (!func_487(1))
			{
				func_483(Local_1486.f_19.f_2);
				func_488(1);
			}
		}
		else if (func_487(1))
		{
			func_485();
			func_489(1);
		}
	}
	else
	{
		if (fVar1 > 10f)
		{
			return;
		}
		if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
		{
			return;
		}
		if (!_0x870708a6e147a9ad(iVar0, "", 7f, 0, 16, 0, 0, 0, 0, -1))
		{
			return;
		}
		func_319(2097152);
		if (!network_has_control_of_entity(iVar0))
		{
			return;
		}
		set_ped_config_flag(iVar0, 130, true);
		set_ped_config_flag(iVar0, 178, false);
		set_ped_config_flag(iVar0, 297, true);
		set_ped_config_flag(iVar0, 301, false);
	}
}

void func_294()
{
	if (!func_178(1073741824, -1, 1))
	{
		return;
	}
	if (func_320(262144))
	{
		if (func_320(64))
		{
			set_player_control(player_id(), true, 256, false);
			func_318(64);
		}
	}
	else
	{
		disable_control_action(0, -473983589, false);
		disable_control_action(0, -719620017, false);
	}
}

void func_295()
{
	if (func_320(8388608))
	{
		return;
	}
	if (func_320(4096))
	{
		if (!func_317(4096))
		{
			func_319(4096);
		}
		return;
	}
	iVar0 = func_181(0);
	if (!is_entity_dead(iVar0) && !is_ped_injured(iVar0))
	{
		return;
	}
	func_169(0);
	if (!_0x3ab6c7b0bb0df4b1(iVar0, -1))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(Local_1486.f_19.f_142))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(Local_1486.f_19.f_142, func_225(), true);
	func_382(128);
	func_319(4096);
}

void func_296()
{
	iVar0 = func_181(0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	set_ped_reset_flag(iVar0, 269, true);
}

void func_297()
{
	func_491(&(Local_1486.f_19.f_153), func_490(), 1, -1082130432);
}

void func_298()
{
	if (Local_1486.f_19.f_1 <= 0)
	{
		return;
	}
	if (func_320(2048))
	{
		return;
	}
	iVar0 = func_181(0);
	if (_0x3ab6c7b0bb0df4b1(iVar0, Local_1486.f_19.f_142))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(Local_1486.f_19.f_142, func_262()))
	{
		_0xdf7b5144e25cd3fe(Local_1486.f_19.f_142, func_262());
		return;
	}
	set_anim_scene_entity(Local_1486.f_19.f_142, "vic", iVar0, 0);
	_set_anim_scene_playback_list_bool(Local_1486.f_19.f_142, func_262(), true);
}

void func_299()
{
	if (!func_317(2048) || func_320(32768))
	{
		return;
	}
	if (!func_381(256))
	{
		return;
	}
	if (func_492(256))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!is_entity_touching_entity(Global_34, iVar0))
	{
		func_318(256);
		return;
	}
	if (((((((func_494(func_493()) || func_494(func_495())) || func_494(func_496())) || func_494(func_497())) || func_494(func_498())) || func_494(func_499())) || func_494(func_500())) || func_494(func_501()))
	{
		return;
	}
	func_502(1048576);
	func_319(256);
}

void func_300()
{
	if (!func_492(1048576))
	{
		return;
	}
	if (func_492(256))
	{
		return;
	}
	func_504(func_503());
	func_504(func_505());
	func_507(func_506(), 0, 0);
	func_502(256);
}

void func_301()
{
	if (!func_492(8388608))
	{
		return;
	}
	if (func_492(512))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_507(func_496(), 0, 0);
	func_502(512);
}

void func_302()
{
	if (!func_492(2097152))
	{
		return;
	}
	if (func_492(1024))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_504(func_503());
	func_507(func_493(), 0, 0);
	func_502(1024);
}

void func_303()
{
	if (!func_492(4194304))
	{
		return;
	}
	if (func_492(2048))
	{
		return;
	}
	func_504(func_497());
	func_504(func_498());
	func_504(func_499());
	func_504(func_500());
	func_504(func_501());
	func_504(func_503());
	func_507(func_495(), 0, 0);
	func_502(2048);
}

void func_304()
{
	if (func_320(1))
	{
		func_319(1);
		return;
	}
	func_508();
	iVar0 = func_181(0);
	switch (func_215())
	{
		case 0:
			sVar1 = "ACFEX_SD_Official";
			break;
		case 1:
			sVar1 = "ACFEX_SD_Lawman";
			break;
	}
	func_509(&(Local_1486.f_19.f_42), iVar0, sVar1, 1);
	func_509(&(Local_1486.f_19.f_42), func_181(1), "EXC_OPED2", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(2), "EXC_YPED2", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(3), "EXC_YPED1", 1);
	func_509(&(Local_1486.f_19.f_42), func_181(4), "EXC_OPED3", 1);
	func_319(1);
}

void func_305(float fParam0)
{
	if (func_320(2))
	{
		func_319(2);
		return;
	}
	if (*fParam0 > func_510())
	{
		return;
	}
	func_507(func_511(), 1, 0);
	func_319(2);
}

void func_306(int iParam0, float fParam1)
{
	if (!func_275())
	{
		fVar0 = get_distance_between_coords(Global_35, func_283(), true);
		if (fVar0 < func_512())
		{
			func_513();
			func_514(&(Local_1486.f_19.f_4));
		}
		return;
	}
	else if (!func_515(iParam0, fParam1))
	{
		return;
	}
}

void func_307(int iParam0)
{
	if (!func_381(1))
	{
		func_383(Local_16.f_7.f_6[0]);
		func_382(1);
	}
	if (func_320(32))
	{
		func_319(32);
		return;
	}
	if (!func_320(16))
	{
		if (func_237(&(Local_16.f_7.f_6[0])))
		{
			fVar0 = func_285(*iParam0, func_283(), 1);
			iVar1 = func_385(&(Local_16.f_7.f_6[0]));
			if (iVar1 > 20000)
			{
				if (fVar0 < func_516())
				{
					func_507(6, Local_1486.f_19.f_141, 11);
					func_319(32);
				}
				else
				{
					func_517(iParam0);
				}
			}
			else if (fVar0 > func_516())
			{
				func_517(iParam0);
			}
			else if (iVar1 > 10000 && !func_518(2, -1, 1))
			{
				func_507(4, Local_1486.f_19.f_141, 11);
				func_502(2);
			}
		}
	}
	else if (func_285(get_player_ped(player_id()), func_283(), 1) < func_519())
	{
		func_507(7, Local_1486.f_19.f_141, 11);
		func_319(32);
	}
}

void func_308()
{
	if (func_320(1024))
	{
		func_478();
		func_319(1024);
		return;
	}
	func_520(Local_16.f_7.f_18[0], 0);
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		iVar1 = func_521(iVar0);
		iVar2 = func_181(iVar1);
		if (!func_182(iVar0))
		{
		}
		else
		{
			func_522(&iVar2, Local_16.f_7.f_18[0], 1, 0, 0, 1);
		}
		iVar0++;
	}
	func_478();
	func_319(1024);
}

void func_309()
{
	if (!func_317(2048))
	{
		return;
	}
	func_319(16384);
}

void func_310(float fParam0)
{
	if (!func_492(32))
	{
		if (*fParam0 < 20f && func_381(256))
		{
			func_507(func_497(), 0, 11);
			func_502(32);
		}
	}
	else if (!func_523(32))
	{
		func_502(32);
	}
	switch (func_524())
	{
		case 1:
			break;
		case 2:
			break;
	}
	func_525();
}

void func_311()
{
	if (!func_381(32))
	{
		return;
	}
	if (func_320(32768))
	{
		func_319(32768);
		return;
	}
	iVar0 = get_player_ped(Local_16.f_7.f_17);
	_0x4820a6939d7cef28(iVar0, 0);
	_hide_ped_weapons(iVar0, 2, false);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_ragdoll(iVar0))
	{
		return;
	}
	if (!func_526(iVar0, 242628503, 1, 0))
	{
		return;
	}
	iVar3 = func_181(0);
	if (func_527(iVar0) || _is_ped_carrying(iVar0))
	{
		iVar2 = _get_first_entity_ped_is_carrying(iVar0);
		if (does_entity_exist(iVar2))
		{
			bVar1 = true;
		}
	}
	open_sequence_task(&iVar4);
	task_swap_weapon(0, 0, 0, 0, 0);
	if (bVar1)
	{
		task_place_carried_entity_at_coord(0, iVar2, get_offset_from_entity_in_world_coords(iVar3, 1.85f, -0.25f, 0f), 1f, 0);
	}
	task_follow_nav_mesh_to_coord(0, func_528(Local_16.f_7.f_15), 1f, 20000, 0.1f, 0, 40000f);
	task_achieve_heading(0, func_529(Local_16.f_7.f_15), 0);
	func_530(iVar0, &iVar4, 0, 0, 1, 1);
	func_319(1073741824);
	func_319(32768);
}

void func_312()
{
	if (func_178(65536, -1, 1))
	{
		return;
	}
	iVar0 = get_player_ped(Local_16.f_7.f_17);
	if (!func_531(iVar0, func_528(Local_16.f_7.f_15), 0.15f, 1, 1))
	{
		return;
	}
	func_319(65536);
}

void func_313()
{
	iVar0 = get_player_ped(Local_16.f_7.f_17);
	if (func_320(131072))
	{
		func_319(131072);
		return;
	}
	if (!_does_anim_scene_exist(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!_network_has_control_of_anim_scene(Local_1486.f_19.f_142))
	{
		return;
	}
	if (!func_532(Local_16.f_7.f_15, &uVar1))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(Local_1486.f_19.f_142, &uVar1))
	{
		_0xdf7b5144e25cd3fe(Local_1486.f_19.f_142, &uVar1);
		return;
	}
	if (is_ped_male(iVar0))
	{
		set_anim_scene_entity(Local_1486.f_19.f_142, "player", iVar0, 0);
	}
	else
	{
		set_anim_scene_entity(Local_1486.f_19.f_142, "MP_Female", iVar0, 0);
	}
	iVar4 = func_181(0);
	if (!is_entity_dead(iVar4) && !is_ped_injured(iVar4))
	{
		_set_anim_scene_playback_list_bool(Local_1486.f_19.f_142, &uVar1, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
	func_319(131072);
}

void func_314()
{
	if (func_320(8388608))
	{
		return;
	}
	if (!func_492(64))
	{
		if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", 0.787f, 1))
		{
			func_507(func_503(), 0, 11);
			func_502(64);
		}
	}
	else if (!func_523(64))
	{
		func_502(64);
	}
	if (func_320(262144))
	{
		func_319(262144);
		return;
	}
	iVar0 = func_181(0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		if (!func_381(128))
		{
			if (_network_has_control_of_anim_scene(Local_1486.f_19.f_142))
			{
				if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", func_534(Local_16.f_7.f_15), 0))
				{
					remove_anim_scene_entity(Local_1486.f_19.f_142, "vic", iVar0);
					activate_physics(iVar0);
					func_319(8388608);
				}
				else
				{
					_set_anim_scene_playback_list_bool(Local_1486.f_19.f_142, func_225(), true);
					iVar1 = get_player_ped(Local_16.f_7.f_17);
					if (is_ped_male(iVar1))
					{
						remove_anim_scene_entity(Local_1486.f_19.f_142, "player", iVar1);
					}
					else
					{
						remove_anim_scene_entity(Local_1486.f_19.f_142, "MP_Female", iVar1);
					}
					func_382(128);
				}
			}
		}
		return;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return;
	}
	if (!func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", 0.99f, 1))
	{
		if (func_533(Local_1486.f_19.f_142, "SCENE_CAPTIVE", func_534(Local_16.f_7.f_15), 0))
		{
			func_535();
		}
		return;
	}
	func_319(262144);
}

void func_315()
{
	if (func_320(524288))
	{
		func_319(524288);
		return;
	}
	iVar0 = func_181(0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_ragdoll(iVar0))
	{
		return;
	}
	if (func_317(-2147483648))
	{
		if (func_320(2048))
		{
			if (!func_526(iVar0, 242628503, 1, 0))
			{
				return;
			}
			task_perform_sequence(iVar0, Local_1486.f_19.f_143);
			func_319(524288);
		}
		else
		{
			if (!func_526(iVar0, 518218985, 1, 0))
			{
				return;
			}
			_task_smart_flee_style_coord(iVar0, get_entity_coords(iVar0, false, false), 3, 0, -1082130432, -1, 0);
			func_319(524288);
		}
	}
	else if (!func_178(-2147483648, -1, 1))
	{
		clear_sequence_task(&(Local_1486.f_19.f_143));
		_0x23767d80c7eed7c6(&(Local_1486.f_19.f_143), -1994340061);
		task_turn_ped_to_face_entity(0, Global_34, 0, 3f, 0.25f, -1082130432);
		task_stand_still(0, 3000);
		_task_smart_flee_style_coord(0, func_283(), 1, 0, -1082130432, -1, 0);
		close_sequence_task(Local_1486.f_19.f_143);
		func_319(-2147483648);
	}
}

void func_316()
{
	if (!func_492(128))
	{
		if (!func_237(&(Local_16.f_7.f_6[4])))
		{
			func_383(Local_16.f_7.f_6[4]);
			return;
		}
		iVar0 = func_385(&(Local_16.f_7.f_6[4]));
		if (iVar0 > 4000)
		{
			func_507(func_505(), 0, 11);
			func_502(128);
		}
		return;
	}
	else if (!func_523(128))
	{
		func_502(128);
		return;
	}
	if (!func_178(1048576, -1, 1))
	{
		func_485();
		_0xe98d55c5983f2509(func_181(0));
		func_318(2097152);
		func_319(1048576);
		return;
	}
	if (!func_320(128))
	{
		iVar1 = func_181(0);
		if (!network_has_control_of_entity(iVar1))
		{
			return;
		}
		set_ped_keep_task(iVar1, true);
		set_ped_config_flag(iVar1, 26, false);
		set_blocking_of_non_temporary_events(iVar1, false);
		_0xae6004120c18df97(iVar1, 0, 1);
		set_ped_config_flag(iVar1, 178, true);
		set_ped_config_flag(iVar1, 467, false);
		set_ped_as_no_longer_needed(&iVar1);
		func_319(128);
	}
}

bool func_317(int iParam0)
{
	return (Local_1486.f_19.f_149 && iParam0) != 0;
}

void func_318(int iParam0)
{
	if (!func_178(iParam0, -1, 1))
	{
		return;
	}
	Local_77[participant_id_to_int()]->f_1 = (Local_77[participant_id_to_int()]->f_1 - (Local_77[participant_id_to_int()]->f_1 && iParam0));
}

void func_319(int iParam0)
{
	if (func_178(iParam0, -1, 1))
	{
		return;
	}
	Local_77[participant_id_to_int()]->f_1 = (Local_77[participant_id_to_int()]->f_1 || iParam0);
}

bool func_320(int iParam0)
{
	return (Local_1486.f_19.f_150 && iParam0) != 0;
}

void func_321()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 9)
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

int func_322(var uParam0, var uParam1)
{
	return uParam0;
}

int func_323(int iParam0)
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

int func_324(struct<2> Param0)
{
	return func_536(Param0);
}

void func_325(struct<2> Param0, var uParam2)
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
	switch (func_322(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_538(func_537(Param0));
			iVar5 = func_539(iVar4);
			if (!func_540(iVar5, 0))
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

int func_326(int iParam0, int iParam1)
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

void func_327(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_541(&Var0);
}

var func_328(int iParam0)
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

var func_329(int iParam0)
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

var func_330(int iParam0)
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

bool func_331(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_332(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return Global_17353[Global_17374]->f_1;
		}
		iVar0++;
	}
	return 5;
}

void func_333(int iParam0)
{
	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_334(int iParam0)
{
	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_335()
{
	func_334(-939420910);
	func_334(-1187950766);
	func_334(356365161);
	func_334(753127042);
	func_334(-2038424081);
	func_334(1884271742);
	func_334(459290420);
}

void func_336()
{
	func_334(704802028);
	func_334(588987611);
	func_334(2008888900);
	func_334(1649996811);
	func_334(227918160);
	func_334(168171957);
	func_334(1193080109);
	func_334(-491981251);
	func_334(-639037538);
	func_334(-618620429);
}

bool func_337(int iParam0)
{
	iVar0 = func_542(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_543(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_544(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

void func_338(int iParam0)
{
	if (func_545(iParam0) && func_546())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_339(int iParam0)
{
	if ((iParam0 == -1 || iParam0 == 10) || iParam0 > 9)
	{
		return false;
	}
	return true;
}

var func_340(int iParam0)
{
	return &(Local_1486.f_179.f_7[iParam0]);
}

int func_341(int iParam0)
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

int func_342(int iParam0)
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

void func_343(var uParam0)
{
	func_188(uParam0, 0);
	func_188(uParam0, 1);
	func_188(uParam0, 3);
	func_186(uParam0);
}

void func_344(var uParam0)
{
	func_187(uParam0);
	func_547(uParam0, 0, 3);
}

void func_345(var uParam0)
{
	func_188(uParam0, 0);
	func_189(uParam0, 0);
	func_189(uParam0, 1);
	func_189(uParam0, 2);
}

void func_346(var uParam0)
{
	func_188(uParam0, 1);
	func_186(uParam0);
}

void func_347(var uParam0)
{
	func_188(uParam0, 2);
	func_189(uParam0, 3);
}

void func_348(var uParam0)
{
	func_188(uParam0, 3);
	func_189(uParam0, 4);
}

void func_349(var uParam0)
{
	func_189(uParam0, 0);
	func_189(uParam0, 1);
}

void func_350(var uParam0)
{
	func_189(uParam0, 2);
	func_189(uParam0, 3);
}

void func_351(var uParam0)
{
	func_189(uParam0, 4);
	func_189(uParam0, 5);
}

bool func_352(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_353(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_354(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

void func_356(var uParam0)
{
	func_548(uParam0, 0);
	func_549(uParam0, 0);
	func_357(uParam0, 1);
	func_550(uParam0, 1);
	func_551(uParam0, 0);
	func_482(uParam0, 1);
	func_552(uParam0, 1, 1, 1);
}

void func_357(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 256);
	}
	else
	{
		func_217(&(uParam0->f_2), 256);
	}
}

void func_358(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 4);
	}
	else
	{
		func_217(&(uParam0->f_2), 4);
	}
}

void func_359(var uParam0)
{
	func_554(uParam0, (func_553(uParam0) - 6f));
	func_555(uParam0, 1);
}

void func_360(var uParam0)
{
	func_548(uParam0, 0);
	func_549(uParam0, 0);
	func_357(uParam0, 0);
	func_551(uParam0, 0);
	func_552(uParam0, 1, 1, 1);
}

void func_361(var uParam0)
{
	func_556(uParam0, 1);
	func_557(uParam0, 1);
	func_558(uParam0, 1);
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 131072);
	}
	else
	{
		func_217(&(uParam0->f_2), 131072);
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 4);
	}
	else
	{
		func_218(uParam0, 4);
	}
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

bool func_365(int iParam0, var uParam1)
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

int func_366(int iParam0, int iParam1)
{
	iVar0 = 0;
	set_bit(&iVar0, 31);
	iVar0 = shift_right(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = shift_left(iVar0, iParam0);
	return iVar0;
}

var func_367()
{
	return Local_1486.f_3;
}

var func_368()
{
	return Local_1486.f_2;
}

int func_369(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

Vector3 func_370(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1564.001f, -2045.494f, 47.40215f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1379.372f, -1696.135f, 66.87366f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1621.386f, -1649.888f, 56.0248f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1505.89f, -1468.727f, 71.38737f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1082.057f, -1265.789f, 67.49545f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 682.3074f, -992.1173f, 52.42072f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 708.892f, -884.1869f, 48.26218f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 880.815f, -536.4342f, 88.03556f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1012.536f, -395.7754f, 90.44735f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_371(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_260(iParam1))
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

bool func_372(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1486.f_15 };
	iVar7 = 0;
	iVar8 = func_401(iParam0);
	iVar9 = func_559(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_16.f_27[iParam0])))
		{
			iVar9 = func_559(iParam0);
			fVar0 = func_560(iParam0);
			if (!func_175(Local_1486.f_179.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_561(iParam0)) };
			}
			else
			{
				vVar1 = { func_561(iParam0) };
			}
			if (!func_562(Local_16.f_27[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_16.f_27[iParam0]));
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
						func_563(iVar7, 1);
					}
					if (func_564(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_565(iParam0))
						{
							if (func_564(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_373(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_16.f_27[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_16.f_27[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_16.f_27[iParam0]))))
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

bool func_373(int iParam0)
{
	return func_170(iParam0, 128);
}

void func_374(int iParam0)
{
	Local_16.f_7.f_2 = iParam0;
}

bool func_375(int iParam0)
{
	return func_128(8, iParam0);
}

bool func_376(int iParam0)
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

bool func_377(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_364(iParam2, 0))
	{
		if (!func_213(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_77[iParam2]->f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_340(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_566(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_77[iParam2]->f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_378(int iParam0)
{
	if (iParam0 < 1)
	{
		return true;
	}
	return false;
}

bool func_379()
{
	return (func_129(64) || func_128(64, 255));
}

void func_380(int iParam0)
{
	if (Local_16.f_7 == iParam0)
	{
		return;
	}
	Local_16.f_7 = iParam0;
}

bool func_381(int iParam0)
{
	return (Local_16.f_7.f_3 && iParam0) != 0;
}

void func_382(int iParam0)
{
	if (func_381(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 || iParam0);
}

void func_383(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

void func_384(int iParam0)
{
	if (!func_381(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 - (Local_16.f_7.f_3 && iParam0));
}

int func_385(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

void func_386(var uParam0)
{
	*uParam0 = 0;
}

void func_387(bool bParam0)
{
	if (!func_128(64, 255))
	{
		iVar0 = func_326(Local_1486.f_1, Local_1486.f_2);
		func_567(iVar0);
		if (!func_128(1024, 255))
		{
			func_145(1024);
		}
		func_568(iVar0);
		if (bParam0)
		{
			func_569(Local_1486.f_1, Local_1486.f_4);
		}
		func_145(64);
	}
}

void func_388(int iParam0)
{
	Local_16.f_7.f_1 = iParam0;
}

int func_389()
{
	if (!func_320(4194304))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (!func_175(Local_77[iVar0]->f_1, 4194304))
		{
		}
		else if (Local_77[iVar0]->f_1.f_2 != -1)
		{
			return network_get_player_index(iVar1);
		}
		iVar0++;
	}
	return 255;
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_570(iParam0, vVar0, iParam2);
}

void func_391(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_392(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_393(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_1486.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar1482)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_1486.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_1486.f_3)
	{
		return false;
	}
	return true;
}

void func_394(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 816343230:
			func_571(iParam0);
			break;
		case 753226:
			func_572(iParam0);
			break;
		case 398686063:
			add_shocking_event_for_entity(513747494, get_player_ped(iParam0->f_1), 20f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			break;
	}
}

bool func_395(int iParam0)
{
	return &Local_1486.f_582.f_1[iParam0] != 0;
}

bool func_396(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_1486.f_582.f_1[iParam0]), iParam1);
}

bool func_397(int iParam0, int iParam1)
{
	return is_bit_set(&(Local_1486.f_582.f_12[iParam0]), iParam1);
}

bool func_398(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (!func_317(262144))
			{
				return false;
			}
			if (!func_178(1073741824, -1, 1) && !func_178(536870912, -1, 1))
			{
				return false;
			}
			if (!func_178(1073741824, -1, 1) && func_178(134217728, -1, 1))
			{
				return false;
			}
			func_573(772680225, 0, 255, 0, 0);
			func_575(func_574(-1892463704, -400839231), 1);
			func_576(1);
			return true;
		case 1:
			if (!func_178(268435456, -1, 1))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_399(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_577())
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
		if (!&Global_1139381->f_3876.f_2[func_578(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_578(iParam0, 1)])->f_2++;
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
	func_579(&Var0, uVar7);
}

void func_400(int iParam0, int iParam1)
{
	set_bit(Local_1486.f_582.f_12[iParam0], iParam1);
}

int func_401(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0]->f_3;
}

void func_402(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_401(iParam0);
	bVar3 = func_364(iParam1, 1);
	if (!is_bit_set(Local_1486.f_179.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_16.f_27[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_16.f_27[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_1486.f_179.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_77[iParam1]->f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_77[iParam1]->f_4.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_373(iParam0))
				{
					if (network_does_network_id_exist(&(Local_16.f_27[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_16.f_27[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_16.f_27[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_580(iVar1, 1f, 0);
					sVar0 = func_581(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_582(iVar1, sVar0, 1);
					}
				}
				if (func_564(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_565(iParam0))
					{
						if (func_564(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_1486.f_179.f_5), iParam0);
				if (bParam2)
				{
					func_583(iParam0);
				}
			}
		}
	}
}

bool func_403(int iParam0)
{
	if (iParam0 >= 7 && iParam0 <= 9)
	{
		return true;
	}
	return false;
}

void func_404(int iParam0, int iParam1)
{
	iVar0 = func_181(iParam0);
	func_584(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	set_ped_combat_attributes(iVar0, 46, true);
	set_ped_combat_attributes(iVar0, 5, true);
	set_ped_relationship_group_hash(iVar0, 1222652248);
	set_ped_config_flag(iVar0, 6, true);
	set_blocking_of_non_temporary_events(iVar0, true);
	set_ped_config_flag(iVar0, 178, false);
	_0xfca8fb9e15fa80d3(iVar0, -1438536773);
}

var func_405(int iParam0)
{
	return Local_1486.f_19.f_5[iParam0]->f_1;
}

void func_406()
{
	set_anim_scene_entity(Local_1486.f_19.f_142, "vic", func_181(0), 0);
	set_anim_scene_entity(Local_1486.f_19.f_142, "rope", func_405(0), 0);
	set_anim_scene_bool(Local_1486.f_19.f_142, "WAKE_BOOL", false, false);
}

Vector3 func_407()
{
	return func_585();
}

float func_408()
{
	switch (func_216())
	{
		case 0:
			return -90.4f;
		case 1:
			return 0f;
		case 2:
			return 0f;
		case 3:
			return -90f;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return -90f;
		case 7:
			return -90f;
		case 8:
			return 66.079f;
		default:
			break;
	}
	return 0f;
}

int func_409(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	func_409(iParam0, 0, 0);
	if (func_545(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_411(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_586(iParam0);
	}
}

void func_412(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_413(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_414(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_415(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_587(iParam0);
	}
}

void func_416(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

void func_417(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_418(int iParam0)
{
	return iParam0;
}

bool func_419(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_588(iParam0);
	if (does_entity_exist(*uParam1))
	{
		uParam1->f_2 = func_484(player_ped_id(), *uParam1, 1, 1);
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
	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0]->f_17), 0, iParam0);
}

struct<2> func_422(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_589(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_574(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_423()
{
	Local_1486.f_179.f_6 = 0;
	Local_1486.f_179.f_2 = 0;
	Local_1486.f_179.f_1 = -1;
}

void func_424()
{
	func_214(&(Local_1486.f_332.f_99), 2, 0);
	func_214(&(Local_1486.f_332.f_99), 1, 0);
	func_214(&(Local_1486.f_332.f_99), 4, 0);
	func_214(&(Local_1486.f_332.f_99), 5, 0);
	func_214(&(Local_1486.f_332.f_99), 8, -1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_0xde544b7ec0c187cc(Local_1486.f_332.f_66[iVar0]);
		_0x20f4cb76689acdbc(Local_1486.f_332.f_88[iVar0]);
		_0xde544b7ec0c187cc(Local_1486.f_332.f_77[iVar0]);
		func_590(iVar0);
		iVar0++;
	}
}

void func_425(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1486.f_179.f_2 = (Local_1486.f_179.f_2 || Local_77[iParam0]->f_4);
		Local_1486.f_179.f_1 = (Local_1486.f_179.f_1 && Local_77[iParam0]->f_4);
		Local_1486.f_179.f_6 = (Local_1486.f_179.f_6 || Local_77[iParam0]->f_4.f_1);
	}
}

void func_426(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 2);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 1);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 4);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 5);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 6);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 7);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 0);
		func_591(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 3);
		func_592(&(Local_1486.f_332.f_99), &(Local_77[iParam0]->f_17), 8);
		iVar0 = 0;
		while (iVar0 < 10)
		{
			_0xffddf802279be128(Local_77[iParam0]->f_17.f_5[iVar0], Local_1486.f_332.f_66[iVar0], Local_1486.f_332.f_66[iVar0]);
			_0xffddf802279be128(Local_77[iParam0]->f_17.f_5[iVar0], Local_1486.f_332.f_66[iVar0], Local_1486.f_332.f_77[iVar0]);
			_0xe4abe20dce7c7cfe(Local_77[iParam0]->f_17.f_5[iVar0], Local_1486.f_332.f_66[iVar0], Local_1486.f_332.f_88[iVar0]);
			func_593(func_418(iVar0), iParam0);
			iVar0++;
		}
	}
}

int func_427(int iParam0)
{
	return iParam0;
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_77[iParam3]->f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1486.f_179.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_429(var uParam0)
{
	func_594(uParam0, 0f);
}

bool func_430(var uParam0)
{
	return func_595(*uParam0, 1);
}

bool func_431(var uParam0, float fParam1)
{
	if (!func_430(uParam0))
	{
		return false;
	}
	if (func_596(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_433(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = iVar0;
	iVar2 = func_181(iVar1);
	if (does_entity_exist(iVar2))
	{
		return true;
	}
	if (func_178(2048, -1, 1))
	{
		return false;
	}
	switch (iVar1)
	{
		case 7:
			if (Local_16.f_7.f_12 < 2)
			{
				return false;
			}
			break;
		case 8:
			if (Local_16.f_7.f_12 < 3)
			{
				return false;
			}
			break;
		case 9:
			if (Local_16.f_7.f_12 < 4)
			{
				return false;
			}
			break;
	}
	if (!func_237(&(Local_16.f_7.f_6[1])))
	{
		return false;
	}
	iVar3 = func_385(&(Local_16.f_7.f_6[1]));
	if (iVar3 < 30000)
	{
		return false;
	}
	StringCopy(&cVar4, func_597(iVar0), 64);
	Var12 = -1;
	Var12 = 44;
	Var12.f_1 = { func_585() };
	vVar22.f_3 = -1;
	iVar26 = func_598(cVar4, &Var12, &vVar22);
	switch (iVar26)
	{
		case 0:
			return false;
		case 2:
			if (!func_381(512))
			{
				func_382(1024);
			}
			return false;
		case 1:
			func_382(512);
			func_114(iVar1, vVar22, 0f, 1);
			return true;
	}
	return false;
}

void func_434(int iParam0, int iParam1)
{
	func_218(&(Local_1486.f_179.f_7[iParam0]->f_2), iParam1);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_175(Local_77[iParam1]->f_4, iParam0);
}

void func_436(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_217(&(Local_77[iVar0]->f_4), iParam0);
}

void func_437(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_218(&(Local_77[iVar0]->f_4), iParam0);
}

void func_438()
{
	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_213(&iVar15))
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
	while (iVar0 < 10)
	{
		iVar14 = func_418(iVar0);
		if (!func_439(iVar14))
		{
		}
		else if (!func_440(iVar14, &Var1))
		{
		}
		else
		{
			if (!is_entity_dead(Var1) && is_bullet_in_area(get_entity_coords(Var1, true, false), 4f, true))
			{
				set_bit(&(Local_1486.f_332.f_65), iVar14);
			}
			if (func_456(iVar14, iVar15))
			{
			}
			else if (has_entity_been_damaged_by_entity(Var1, iVar17, 0, 0))
			{
				func_599(iVar14);
				func_600(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_439(int iParam0)
{
	return !func_442(&(Local_1486.f_332.f_99), 5, iParam0);
}

bool func_440(int iParam0, var uParam1)
{
	if (!is_bit_set(Local_1486.f_332.f_234, iParam0))
	{
		return false;
	}
	*uParam1 = &Local_1486.f_332.f_103[iParam0];
	uParam1->f_1 = Local_1486.f_332.f_103[iParam0]->f_1;
	uParam1->f_2 = Local_1486.f_332.f_103[iParam0]->f_2;
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_441(var uParam0, int iParam1)
{
	if (!func_601(iParam1))
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
	if (func_602(*uParam0, &(Local_1486.f_332.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (is_entity_touching_entity(player_ped_id(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_365(iParam1, &Var0))
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

int func_443(var uParam0, int iParam1, int iParam2)
{
	if (!func_365(iParam1, &Var0))
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

int func_444(var uParam0, int iParam1, int iParam2)
{
	if (!func_365(iParam1, &Var0))
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

void func_445(int iParam0)
{
}

bool func_446(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 4, iParam0);
}

bool func_447(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_77[iVar0]->f_17), 4, iParam0);
}

bool func_448(int iParam0)
{
	return _0x179a6f0ee2e79026(Local_1486.f_332.f_77[iParam0]);
}

void func_449(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_443(&(Local_77[iVar0]->f_17), 4, iParam0);
}

bool func_450(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return false;
	}
	return _0x179a6f0ee2e79026(Local_77[iVar0]->f_17.f_5[iParam0]);
}

void func_451(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Local_77[iVar0]->f_17.f_5[iParam0]);
}

bool func_452(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 6, iParam0);
}

bool func_453(int iParam0)
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

bool func_454(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_77[iParam1]->f_17), 1, iParam0);
}

bool func_455(int iParam0)
{
	iVar0 = func_603(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_379())
	{
		return true;
	}
	return false;
}

bool func_456(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	if (!func_604(int_to_participantindex(iParam1)))
	{
		return false;
	}
	return func_442(&(Local_77[iParam1]->f_17), 3, iParam0);
}

bool func_457(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_605(uParam2, 1, iVar0);
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
			if (func_606(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_608(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_609(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_610(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_611(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_612(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_613(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_614(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_615(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_615(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_616(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_617(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_618(uParam2, 4000))
				{
					if ((func_619(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_620(uParam2, iParam0)) && func_621(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_619(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_620(uParam2, iParam0)) && func_621(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_622(iParam0, Global_1940258->f_35))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_624(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_625() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_626())
				{
					if (func_622(iParam0, Global_1940258->f_36))
					{
						func_623();
						*iParam3 = 2;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_627(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_628(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_607(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_629(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_630(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_631(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_632(uParam2, 4000))
				{
					if (func_633(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_607(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_634(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_607(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_635(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_607(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_458(int iParam0, int iParam1, int iParam2)
{
	if (!func_636(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_637(&iVar4, iParam1->f_12);
	func_639(&(Local_1486.f_179.f_7[iParam0]), &uVar0, iParam1->f_3, func_638(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_640(&iVar4, &uVar0);
}

bool func_459(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_77[iVar0]->f_17), 0, iParam0);
}

bool func_460(int iParam0, int iParam1)
{
	if (is_bit_set(Local_1486.f_332.f_64, iParam0))
	{
		return false;
	}
	if (func_175(Local_1486.f_332.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_641(&(Local_1486.f_332))))
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
	if (Local_77[iParam2]->f_17.f_4 != 0 && get_time_difference(Local_77[iParam2]->f_17.f_4, get_network_time_accurate()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_588(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = func_603(iParam0);
	fVar2 = func_484(player_ped_id(), iVar0, 1, 1);
	if (iParam1 == 256 && fVar2 > 40f)
	{
		return false;
	}
	switch (iVar1)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					if (!is_ped_injured(iVar0))
					{
						func_319(134217728);
					}
					else
					{
						func_319(268435456);
					}
					if (!func_492(8388608))
					{
						if (func_381(256))
						{
							if ((func_494(func_506()) || func_494(func_495())) || func_494(func_493()))
							{
								return false;
							}
							func_502(8388608);
						}
					}
					return false;
				case 2048:
					if (!func_492(1048576))
					{
						if (func_381(256))
						{
							if ((func_494(func_493()) || func_494(func_495())) || func_494(func_496()))
							{
								return false;
							}
							func_502(1048576);
						}
					}
					return false;
				case 8:
					if (!func_492(2097152))
					{
						if (func_381(256) && !func_317(262144))
						{
							if ((func_494(func_506()) || func_494(func_495())) || func_494(func_496()))
							{
								return false;
							}
							func_502(2097152);
						}
					}
					return false;
				case 4:
				case 256:
					if (func_215() != 0)
					{
						if (!func_492(4194304))
						{
							if (func_381(256))
							{
								if ((func_494(func_506()) || func_494(func_496())) || func_494(func_493()))
								{
									return false;
								}
								if (iParam1 == 256 && fVar2 > 30f)
								{
									return false;
								}
								func_502(4194304);
							}
						}
					}
					return false;
				default:
					break;
			}
			Jump @689; //curOff = 571
			if (!func_275())
			{
				func_513();
			}
			func_478();
			if (!func_379())
			{
				func_387(1);
			}
			if (!func_320(512))
			{
				Var3.f_10 = 255;
				Var3 = { func_642(398686063) };
				func_643(&Var3);
				func_319(512);
			}
			if (func_494(func_511()))
			{
				func_504(func_511());
			}
			if (iParam1 != 0)
			{
				func_319(536870912);
			}
			return true;
			return false;
		}

void func_463(int iParam0, bool bParam1)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0]->f_17), 1, iParam0);
	if (bParam1)
	{
		Local_77[iVar0]->f_17.f_16[iParam0] = get_network_time_accurate();
	}
}

bool func_464(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 1, iParam0);
}

bool func_465(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_213(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_77[iParam1]->f_17), 2, iParam0);
}

bool func_466(int iParam0)
{
	return true;
}

void func_467(int iParam0)
{
	iVar0 = func_588(iParam0);
	iVar1 = func_603(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			task_combat_hated_targets(iVar0, -1f);
			break;
		case 0:
			break;
	}
}

void func_468(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0]->f_17), 2, iParam0);
}

bool func_469(int iParam0)
{
	_0x20f4cb76689acdbc(&uVar0);
	_0x64f765d9a1f8f02c(&uVar0, Local_1486.f_332.f_88[iParam0], &uVar0);
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
	return _0x72b2e00c9bac6789(Local_1486.f_332.f_66[iParam0], iParam1);
}

bool func_472(int iParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = func_588(iParam0);
	iVar1 = func_603(iParam0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			register_target(iVar0, uParam3, 1);
			break;
	}
	return true;
}

void func_473(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!func_213(&iVar0))
	{
		return;
	}
	_0x31010318ba9897ac(Local_77[iVar0]->f_17.f_5[iParam0], iParam1);
}

bool func_474()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_475(int iParam0)
{
	if (func_644(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_476(int iParam0, bool bParam1, bool bParam2)
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

float func_477()
{
	return 12f;
}

void func_478()
{
	if (!func_64(2))
	{
		return;
	}
	func_143(8);
}

void func_479()
{
	if (!func_320(1024) && !func_320(8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar0))
		{
		}
		else if (func_403(iVar0))
		{
			if (!func_381(512))
			{
			}
			else
			{
				func_645(iVar0, 831283580, 942020339, 1);
			}
			iVar0++;
		}
	}
}

void func_480()
{
	if (!func_320(131072))
	{
		func_646();
		return;
	}
	if (func_178(33554432, -1, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1486.f_179.f_7)
	{
		if (!func_378(iVar0))
		{
		}
		else
		{
			func_169(iVar0);
		}
		iVar0++;
	}
	func_319(33554432);
}

void func_481(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_482(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 256);
	}
	else
	{
		func_218(uParam0, 256);
	}
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_485();
			break;
		case 1:
			func_647(2, "NB_NBTIED_INTERACT_CUT", -1616532217, 3, 0);
			func_648(0);
			break;
		case 2:
			func_647(2, "NB_NBTIED_INTERACT_CUT", -1616532217, 3, 0);
			func_648(1);
			break;
		default:
			break;
	}
}

float func_484(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_485()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_649(&(Local_1486.f_19.f_145[iVar0])))
		{
		}
		else
		{
			func_650(Local_1486.f_19.f_145[iVar0], 1, 1);
		}
		iVar0++;
	}
}

bool func_486(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(get_player_ped(player_id())))
	{
		return false;
	}
	if (!_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam1, iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	return get_ped_index_from_entity_index(iVar0) == func_181(iParam0);
}

bool func_487(int iParam0)
{
	return (Local_1486.f_19.f_8 && iParam0) != 0;
}

void func_488(int iParam0)
{
	if (func_487(iParam0))
	{
		return;
	}
	Local_1486.f_19.f_8 = (Local_1486.f_19.f_8 || iParam0);
}

void func_489(int iParam0)
{
	if (!func_487(iParam0))
	{
		return;
	}
	Local_1486.f_19.f_8 = (Local_1486.f_19.f_8 - (Local_1486.f_19.f_8 && iParam0));
}

Vector3 func_490()
{
	switch (func_216())
	{
		case 0:
			return 1562.239f, -2047.35f, 47.36497f;
		case 1:
			return 1379.845f, -1696.251f, 66.90226f;
		case 2:
			return 1621.773f, -1650.282f, 56.04998f;
		case 3:
			return 1504.962f, -1470.059f, 71.38501f;
		case 4:
			return 1082.787f, -1265.953f, 67.50075f;
		case 5:
			return 682.7037f, -992.2516f, 52.46186f;
		case 6:
			return 707.7961f, -885.7428f, 48.27122f;
		case 7:
			return 879.61f, -538.0069f, 88.09176f;
		case 8:
			return 1012.342f, -394.3301f, 90.45406f;
		default:
			break;
	}
	return vLocal_13;
}

int func_491(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_175(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_175(uParam0->f_1, 16))
			{
				func_651(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_652(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_175(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_653(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_655(func_654(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_656(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_657(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_658(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_217(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_217(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_492(int iParam0)
{
	return (Local_1486.f_19.f_152 && iParam0) != 0;
}

int func_493()
{
	switch (func_215())
	{
		case 0:
			return 24;
		case 1:
			return 25;
		default:
			break;
	}
	return 0;
}

bool func_494(int iParam0)
{
	if (!func_659(iParam0, &uVar0))
	{
		return false;
	}
	if (!func_660(&uVar0))
	{
		return false;
	}
	return true;
}

int func_495()
{
	switch (func_215())
	{
		case 1:
			return 26;
		default:
			break;
	}
	return 0;
}

int func_496()
{
	switch (func_215())
	{
		case 0:
			return 27;
		case 1:
			return 28;
		default:
			break;
	}
	return 0;
}

int func_497()
{
	switch (func_215())
	{
		case 0:
			return 8;
		case 1:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_498()
{
	switch (func_215())
	{
		case 0:
			return 10;
		case 1:
			return 14;
		default:
			break;
	}
	return 0;
}

int func_499()
{
	switch (func_215())
	{
		case 0:
			return 11;
		case 1:
			return 15;
		default:
			break;
	}
	return 0;
}

int func_500()
{
	switch (func_215())
	{
		case 0:
			return 12;
		case 1:
			return 16;
		default:
			break;
	}
	return 0;
}

int func_501()
{
	switch (func_215())
	{
		case 0:
			return 13;
		case 1:
			return 17;
		default:
			break;
	}
	return 0;
}

void func_502(int iParam0)
{
	if (func_518(iParam0, -1, 1))
	{
		return;
	}
	Local_77[participant_id_to_int()]->f_1.f_1 = (Local_77[participant_id_to_int()]->f_1.f_1 || iParam0);
}

int func_503()
{
	switch (func_215())
	{
		case 0:
			return 18;
		case 1:
			return 19;
		default:
			break;
	}
	return 0;
}

void func_504(int iParam0)
{
	Var0 = { func_642(753226) };
	Var0.f_11 = iParam0;
	func_643(&Var0);
}

int func_505()
{
	switch (func_215())
	{
		case 0:
			return 20;
		case 1:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_506()
{
	switch (func_215())
	{
		case 0:
			return 22;
		case 1:
			return 23;
		default:
			break;
	}
	return 0;
}

void func_507(int iParam0, int iParam1, int iParam2)
{
	Var0 = { func_642(816343230) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	func_643(&Var0);
}

void func_508()
{
	func_661(1, -258459266);
	func_661(2, -1124614608);
	func_661(3, 830847823);
	func_661(4, -1124614608);
	func_661(5, -258459266);
	func_661(6, 830847823);
}

void func_509(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_662(uParam0, iParam1, sParam2))
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

float func_510()
{
	return 40f;
}

int func_511()
{
	switch (func_215())
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_512()
{
	return (func_519() + 10f);
}

void func_513()
{
	if (!func_128(32, 255))
	{
		func_663(Local_1486.f_1, Local_1486.f_3);
		if (!func_128(1024, 255))
		{
			func_664(Local_1486.f_1);
			func_145(1024);
		}
		iVar0 = func_326(Local_1486.f_1, Local_1486.f_2);
		func_567(iVar0);
		func_568(iVar0);
		func_143(2);
		func_665(Local_1486.f_9);
		func_666(Local_1486.f_1);
		func_667(Local_1486.f_1, Local_1486.f_2, Local_1486.f_3);
		func_145(32);
	}
}

void func_514(int* iParam0)
{
	if (!does_blip_exist(*iParam0))
	{
		return;
	}
	remove_blip(iParam0);
}

bool func_515(int iParam0, float fParam1)
{
	if (func_320(8))
	{
		func_478();
		func_319(8);
		return true;
	}
	if (*fParam1 > func_519())
	{
		return false;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < Local_1486.f_179.f_7)
	{
		if (!func_182(iVar8) || func_403(iVar8))
		{
		}
		else
		{
			uVar0[iVar7] = &Local_1486.f_179.f_7[iVar8];
			iVar7++;
		}
		iVar8++;
	}
	iVar9 = func_668(*iParam0, &uVar0, &(Local_1486.f_19.f_140), &(Local_1486.f_19.f_141));
	if (!network_has_control_of_entity(iVar9))
	{
		return false;
	}
	func_509(&(Local_1486.f_19.f_42), iVar9, "EXC_OPED1", 1);
	task_turn_ped_to_face_entity(iVar9, *iParam0, 0, -1082130432, -1082130432, -1082130432);
	func_669();
	func_507(3, Local_1486.f_19.f_141, 11);
	Local_16.f_7.f_16 = network_get_player_index_from_ped(*iParam0);
	func_319(8);
	func_478();
	return true;
}

float func_516()
{
	return (func_519() + 5f);
}

void func_517(int iParam0)
{
	func_504(3);
	func_504(4);
	func_507(5, Local_1486.f_19.f_141, 0);
	func_386(Local_16.f_7.f_6[0]);
	func_319(16);
}

bool func_518(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
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
	return (Local_77[iParam1]->f_1.f_1 && iParam0) != 0;
}

float func_519()
{
	return 22f;
}

void func_520(var uParam0, int iParam1)
{
	switch (func_216())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1563.462f, -2047.287f, 47.43777f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1384.543f, -1696.767f, 76.03621f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1624.361f, -1652.599f, 49.90716f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1498.346f, -1466.856f, 71.26947f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1075.167f, -1267.896f, 71.26947f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 683.1252f, -996.1409f, 52.13353f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 705.7239f, -886.8f, 47.43777f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 879.509f, -538.902f, 83.05545f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1017.049f, -390.1011f, 89.35362f };
					vVar3 = { 0f, 0f, -53.52834f };
					vVar6 = { 79.23999f, 65.97919f, 26.779f };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
	}
	func_670(uParam0, vVar0, vVar3, vVar6, sVar9);
}

int func_521(int iParam0)
{
	return iParam0;
}

void func_522(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (bParam5 && !network_has_control_of_entity(*iParam0))
	{
		return;
	}
	_0xfc3db99c8144cd81(*iParam0, *uParam1, iParam3, iParam4, 0);
	if (bParam2)
	{
		set_ped_combat_movement(*iParam0, 2);
	}
}

bool func_523(int iParam0)
{
	return (Local_1486.f_19.f_151 && iParam0) != 0;
}

int func_524()
{
	if (!func_178(2097152, -1, 1))
	{
		return -1;
	}
	if (func_178(4194304, -1, 1))
	{
		return Local_77[participant_id_to_int()]->f_1.f_2;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_671(&(Local_1486.f_19.f_145[iVar0]), 1))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(participant_id_to_int());
			Local_16.f_7.f_17 = network_get_player_index(iVar1);
			Local_77[participant_id_to_int()]->f_1.f_2 = iVar0;
			func_319(4194304);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_525()
{
	if (!func_381(4))
	{
		func_383(Local_16.f_7.f_6[3]);
		func_382(4);
		return;
	}
	if (!func_237(&(Local_16.f_7.f_6[3])))
	{
		func_383(Local_16.f_7.f_6[3]);
	}
	iVar0 = func_385(&(Local_16.f_7.f_6[3]));
	if (iVar0 < 12000)
	{
		return;
	}
	switch (Local_1486.f_19.f_3)
	{
		case 0:
			if (func_672(32768))
			{
				func_673(1);
				func_386(Local_16.f_7.f_6[3]);
				func_384(4);
				return;
			}
			if (!func_674(32768))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_498(), 0, 0);
			func_502(32768);
			break;
		case 1:
			if (func_672(65536))
			{
				func_673(2);
				func_386(Local_16.f_7.f_6[3]);
				func_384(4);
				return;
			}
			if (!func_674(65536))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_499(), 0, 0);
			func_502(65536);
			break;
		case 2:
			if (func_672(131072))
			{
				func_673(3);
				func_386(Local_16.f_7.f_6[3]);
				func_384(4);
				return;
			}
			if (!func_674(131072))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_500(), 0, 0);
			func_502(131072);
			break;
		case 3:
			if (func_672(262144))
			{
				func_673(4);
				func_386(Local_16.f_7.f_6[3]);
				func_384(4);
				return;
			}
			if (!func_674(262144))
			{
				return;
			}
			if (func_675(1))
			{
				return;
			}
			func_507(func_501(), 0, 0);
			func_502(262144);
			break;
	}
}

bool func_526(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_676(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

bool func_527(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

Vector3 func_528(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 1562.99f, -2044.45f, 48.34f;
				case 2:
					return 1562.99f, -2044.45f, 48.34f;
				case 3:
					return 1563.32f, -2045.41f, 48.34f;
				case 4:
					return 1563.45f, -2045.38f, 48.34f;
				case 5:
					return 1563.45f, -2045.38f, 48.34f;
				case 6:
					return 1563.45f, -2045.38f, 48.34f;
				default:
					break;
			}
			return 1562.99f, -2044.45f, 48.34f;
		case 1:
			switch (iParam0)
			{
				case 1:
					return 1376.98f, -1695.52f, 67.86f;
				case 2:
					return 1376.98f, -1695.52f, 67.86f;
				case 3:
					return 1377.91f, -1695.2f, 67.86f;
				case 4:
					return 1377.91f, -1695.06f, 67.86f;
				case 5:
					return 1377.91f, -1695.06f, 67.86f;
				case 6:
					return 1377.91f, -1695.06f, 67.86f;
				default:
					break;
			}
			return 1376.98f, -1695.52f, 67.86f;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 1618.74f, -1649.64f, 57.03f;
				case 2:
					return 1618.74f, -1649.64f, 57.03f;
				case 3:
					return 1619.67f, -1649.31f, 57.03f;
				case 4:
					return 1619.66f, -1649.18f, 57.03f;
				case 5:
					return 1619.66f, -1649.18f, 57.03f;
				case 6:
					return 1619.66f, -1649.18f, 57.03f;
				default:
					break;
			}
			return 1618.74f, -1649.64f, 57.03f;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 1505.59f, -1467.06f, 72.38f;
				case 2:
					return 1505.59f, -1467.06f, 72.38f;
				case 3:
					return 1505.92f, -1467.99f, 72.38f;
				case 4:
					return 1506.06f, -1467.98f, 72.38f;
				case 5:
					return 1506.06f, -1467.98f, 72.38f;
				case 6:
					return 1506.06f, -1467.98f, 72.38f;
				default:
					break;
			}
			return 1505.59f, -1467.06f, 72.38f;
		case 4:
			switch (iParam0)
			{
				case 1:
					return 1079.72f, -1265.25f, 68.57f;
				case 2:
					return 1079.72f, -1265.25f, 68.57f;
				case 3:
					return 1080.65f, -1264.93f, 68.57f;
				case 4:
					return 1080.64f, -1264.79f, 68.57f;
				case 5:
					return 1080.64f, -1264.79f, 68.57f;
				case 6:
					return 1080.64f, -1264.79f, 68.57f;
				default:
					break;
			}
			return 1079.72f, -1265.25f, 68.57f;
		case 5:
			switch (iParam0)
			{
				case 1:
					return 679.67f, -991.53f, 53.42f;
				case 2:
					return 679.67f, -991.53f, 53.42f;
				case 3:
					return 680.59f, -991.21f, 53.42f;
				case 4:
					return 680.59f, -991.07f, 53.42f;
				case 5:
					return 680.59f, -991.07f, 53.42f;
				case 6:
					return 680.59f, -991.07f, 53.42f;
				default:
					break;
			}
			return 679.67f, -991.53f, 53.42f;
		case 6:
			switch (iParam0)
			{
				case 1:
					return 708.5f, -882.7f, 49.26f;
				case 2:
					return 708.5f, -882.7f, 49.26f;
				case 3:
					return 708.33f, -883.62f, 49.26f;
				case 4:
					return 708.96f, -883.62f, 49.26f;
				case 5:
					return 708.96f, -883.62f, 49.26f;
				case 6:
					return 708.96f, -883.62f, 49.26f;
				default:
					break;
			}
			return 708.5f, -882.7f, 49.26f;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 880.35f, -534.95f, 89.04f;
				case 2:
					return 880.35f, -534.95f, 89.04f;
				case 3:
					return 880.68f, -535.88f, 89.04f;
				case 4:
					return 880.82f, -535.87f, 89.04f;
				case 5:
					return 880.82f, -535.87f, 89.04f;
				case 6:
					return 880.82f, -535.87f, 89.04f;
				default:
					break;
			}
			return 880.35f, -534.95f, 89.04f;
		case 8:
			switch (iParam0)
			{
				case 1:
					return 1010.46f, -396.79f, 91.43f;
				case 2:
					return 1010.46f, -396.79f, 91.43f;
				case 3:
					return 1010.53f, -395.81f, 91.43f;
				case 4:
					return 1010.41f, -395.76f, 91.43f;
				case 5:
					return 1010.41f, -395.76f, 91.43f;
				case 6:
					return 1010.41f, -395.76f, 91.43f;
				default:
					break;
			}
			return 1010.53f, -395.81f, 91.43f;
	}
	return vLocal_13;
}

float func_529(int iParam0)
{
	switch (func_216())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 156.45f;
				case 2:
					return 156.45f;
				case 3:
					return 85.98f;
				case 4:
					return 85.98f;
				case 5:
					return 85.98f;
				case 6:
					return 85.98f;
				default:
					break;
			}
			return 156.45f;
		case 1:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 156.85f;
				case 2:
					return 156.85f;
				case 3:
					return 62.93f;
				case 4:
					return 86.38f;
				case 5:
					return 86.38f;
				case 6:
					return 86.38f;
				default:
					break;
			}
			return 156.85f;
		case 4:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 5:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 6:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 156.85f;
				case 2:
					return 156.85f;
				case 3:
					return 62.93f;
				case 4:
					return 86.38f;
				case 5:
					return 86.38f;
				case 6:
					return 86.38f;
				default:
					break;
			}
			return 156.85f;
		case 8:
			switch (iParam0)
			{
				case 1:
					return -113.15f;
				case 2:
					return -113.15f;
				case 3:
					return 152.93f;
				case 4:
					return 176.38f;
				case 5:
					return 176.38f;
				case 6:
					return 176.38f;
				default:
					break;
			}
			return -113.15f;
	}
	return 0f;
}

void func_530(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_531(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	fVar0 = func_285(iParam0, vParam1, 1);
	if (fVar0 <= fParam4)
	{
		return true;
	}
	if (bParam5)
	{
		if (!func_677(iParam0, 1435919172, 0))
		{
			if (bParam6)
			{
				fVar1 = 1f;
				if (fVar0 <= fVar1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_532(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "CUT_FREE_PLYR_F", 24);
			break;
		case 2:
			StringCopy(sParam1, "CUT_FREE_PLYR_F_FEMALE", 24);
			break;
		case 3:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_F", 24);
			break;
		case 4:
			StringCopy(sParam1, "CUT_FREE_PLYR_L", 24);
			break;
		case 5:
			StringCopy(sParam1, "CUT_FREE_PLYR_L_FEMALE", 24);
			break;
		case 6:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_L", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_533(int iParam0, char* sParam1, float fParam2, int iParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return iParam3;
	}
	else if (!_is_anim_scene_started(iParam0, false))
	{
		return iParam3;
	}
	fVar0 = _get_anim_scene_progress(iParam0);
	if (fVar0 >= fParam2)
	{
		return true;
	}
	return false;
}

float func_534(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0.301f;
		case 2:
			return 0.3024f;
		case 4:
			return 0.3004f;
		case 5:
			return 0.3004f;
		default:
			break;
	}
	return 0.301f;
	return 0.301f;
}

void func_535()
{
	if (!func_320(1073741824))
	{
		return;
	}
	if (func_320(8192))
	{
		return;
	}
	iVar0 = func_181(0);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	func_678(iVar0, 1);
	func_319(8192);
}

int func_536(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_679(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_537(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_679(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_538(int iParam0)
{
	iVar0 = -1;
	if (func_352(&Var1, iParam0))
	{
		iVar0 = ((func_680() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_539(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_540(int iParam0, int iParam1)
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

void func_541(var uParam0)
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
	_trigger_script_event_2(uParam0, 8, 16, &(Global_1051252->f_16[16]));
	func_681(uParam0, uParam0->f_1);
}

int func_542(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_543(int iParam0)
{
	iVar0 = func_682(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_545(int iParam0)
{
	if (func_683(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_546()
{
	return true;
}

void func_547(var uParam0, int iParam1, int iParam2)
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
		func_189(uParam0, iVar0);
		iVar0++;
	}
}

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 16384);
	}
	else
	{
		func_217(&(uParam0->f_2), 16384);
	}
}

void func_549(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 2048);
	}
	else
	{
		func_217(&(uParam0->f_2), 2048);
	}
}

void func_550(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 16);
	}
	else
	{
		func_218(uParam0, 67108864);
		func_218(uParam0, 16);
	}
}

void func_551(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_218(&(uParam0->f_2), 128);
	}
	else
	{
		func_217(&(uParam0->f_2), 128);
	}
}

void func_552(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_217(uParam0, 268435456);
	}
	else
	{
		func_218(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_217(uParam0, 1073741824);
	}
	else
	{
		func_218(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_217(uParam0, 536870912);
	}
	else
	{
		func_218(uParam0, 536870912);
	}
}

float func_553(var uParam0)
{
	return uParam0->f_26;
}

void func_554(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_555(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 1);
	}
	else
	{
		func_218(uParam0, 1);
	}
}

void func_556(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 512);
	}
	else
	{
		func_218(uParam0, 512);
	}
}

void func_557(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 2);
	}
	else
	{
		func_218(uParam0, 2);
	}
}

void func_558(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 8);
	}
	else
	{
		func_218(uParam0, 8);
	}
}

int func_559(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0]->f_4;
}

float func_560(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0]->f_5;
}

Vector3 func_561(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0]->f_6;
}

bool func_562(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_260(iParam1))
	{
		return false;
	}
	iVar0 = func_684(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_563(int iParam0, bool bParam1)
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

bool func_564(int iParam0)
{
	return func_170(iParam0, 32);
}

bool func_565(int iParam0)
{
	return func_170(iParam0, 64);
}

Vector3 func_566(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_567(int iParam0)
{
	if (func_125(Global_1272030[iParam0]))
	{
		return;
	}
	func_685(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_126((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_686(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_686(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_686(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_686(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_568(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_541(&Var0);
}

void func_569(int iParam0, int iParam1)
{
	if (!func_687(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_688(iParam1);
	func_689(iVar0, iParam0);
}

int func_570(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_690(vVar3, vVar6);
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
	if (func_691(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_571(int iParam0)
{
	func_692(iParam0->f_11, iParam0->f_12, iParam0->f_13, 0, 0, 0);
}

void func_572(int iParam0)
{
	func_693(iParam0->f_11, 0);
}

int func_573(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_694(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

struct<2> func_574(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_575(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_576(bool bParam0)
{
	if (!func_64(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_64(256))
		{
			func_174(Local_1486.f_18, 0);
			func_143(256);
		}
	}
	func_143(16);
}

bool func_577()
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

int func_578(int iParam0, int iParam1)
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

void func_579(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 14, &uParam1);
}

void func_580(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_695(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_581(int iParam0)
{
	return Local_1486.f_179.f_7[iParam0]->f_10;
}

void func_582(int iParam0, char* sParam1, bool bParam2)
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

void func_583(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = func_181(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (is_entity_dead(iVar1))
	{
		return;
	}
	func_404(iVar0, -183018591);
	task_combat_hated_targets(iVar1, -1f);
}

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_696(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_696(iVar4) && iVar4 != iVar0)
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
	if (func_28() == -1 && !func_697(iVar0))
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
				if (func_697(-183018591))
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
		if (iParam0 != Global_34 && func_696(iVar0))
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
		func_698(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_699(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_700(iVar0))
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

Vector3 func_585()
{
	return Local_1486.f_15;
}

int func_586(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_701())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_587(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_701())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

int func_588(int iParam0)
{
	return func_340(iParam0);
}

int func_589(int iParam0)
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

void func_590(int iParam0)
{
	if (!func_419(func_418(iParam0), Local_1486.f_332.f_103[iParam0]))
	{
		clear_bit(&(Local_1486.f_332.f_234), iParam0);
		return;
	}
	set_bit(&(Local_1486.f_332.f_234), iParam0);
}

int func_591(var uParam0, var uParam1, int iParam2)
{
	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] || uParam1[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] || uParam1[Var0.f_1]) && iVar4));
	return 1;
}

int func_592(var uParam0, var uParam1, int iParam2)
{
	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = ((uParam0[Var0] && iVar4 ^ -1) || ((uParam0[Var0] && uParam1[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = ((uParam0[Var0.f_1] && iVar4 ^ -1) || ((uParam0[Var0.f_1] && uParam1[Var0.f_1]) && iVar4));
	return 1;
}

void func_593(int iParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (func_442(&(Local_77[iParam1]->f_17), 1, iParam0))
	{
		if (&Local_77[iParam1]->f_17.f_16[iParam0] == 0)
		{
			return;
		}
		iVar0 = network_get_player_index(int_to_participantindex(iParam1));
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (_network_is_player_index_valid(&(Local_16.f_38.f_1[iParam0])))
		{
			if (&Local_16.f_38.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_16.f_38.f_12[iParam0] == 0 || is_time_more_than(&(Local_77[iParam1]->f_17.f_16[iParam0]), &(Local_16.f_38.f_12[iParam0])))
		{
			Local_16.f_38.f_1[iParam0] = iVar0;
			Local_16.f_38.f_12[iParam0] = &Local_77[iParam1]->f_17.f_16[iParam0];
		}
	}
}

void func_594(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_702() - fParam1);
	func_703(uParam0, 1);
	func_704(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_595(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_596(var uParam0)
{
	if (!func_430(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_705(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_702() - uParam0->f_1);
}

char* func_597(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

int func_598(char[32] cParam0, var uParam8, var uParam9)
{
	iVar0 = get_id_of_this_thread();
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1 = _get_hash_of_thread(iVar0);
	Var1.f_1 = _0xfb9eced5b68f3b78(iVar0);
	Var1.f_3 = { cParam0 };
	iVar12 = func_706(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1275441[iVar12])
		{
			case 4:
				*uParam9 = { (*Global_1275441)[iVar12]->f_22 };
				func_707(iVar12);
				return 2;
			case 3:
				*uParam9 = { (*Global_1275441)[iVar12]->f_22 };
				func_707(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_708())
		{
			return 0;
		}
		if (!func_709(&Var1))
		{
			return 0;
		}
		if (!func_710(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_711(uParam8, &Var1);
	}
	return 0;
}

void func_599(int iParam0)
{
	if (!func_213(&iVar0))
	{
		return;
	}
	func_444(&(Local_77[iVar0]->f_17), 3, iParam0);
}

void func_600(int iParam0)
{
}

bool func_601(int iParam0)
{
	return func_442(&(Local_1486.f_332.f_99), 7, iParam0);
}

bool func_602(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_6)
	{
		func_605(uParam1, 0, iVar0);
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
				if (func_618(uParam1, 4000))
				{
					if ((func_619(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_620(uParam1, iParam0)) && func_621(uParam1, iParam0))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_618(uParam1, 4000))
				{
					if ((func_619(iParam0, Global_1940258->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_620(uParam1, iParam0)) && func_621(uParam1, iParam0))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258->f_35 != 0)
			{
				if (Global_1940258->f_34 == 0)
				{
					if (func_622(iParam0, Global_1940258->f_35))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_626())
				{
					if (func_622(iParam0, Global_1940258->f_36))
					{
						func_623();
						*uParam2 = 2;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_612(uParam1, 1065353216))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_613(Global_34, iParam0, uParam1))
					{
						func_623();
						*uParam2 = 4;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_614(Global_34, iParam0, uParam1))
					{
						func_623();
						*uParam2 = 256;
						func_607(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_712(iParam0, uParam1))
			{
				func_623();
				*uParam2 = 131072;
				func_607(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_713(iParam0, uParam1))
			{
				func_623();
				*uParam2 = 262144;
				func_607(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_603(int iParam0)
{
	return iParam0;
}

bool func_604(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return network_is_participant_active(iParam0);
}

void func_605(var uParam0, bool bParam1, int iParam2)
{
	func_714(iParam2);
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
		uParam0->f_14 = func_715(0);
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
							func_217(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_716(1, 1))
						{
							func_217(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_716(1, 1) || *uParam0 & 8192 != 0))
				{
					func_218(uParam0, 33554432);
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
			if (func_717(uParam0))
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
	func_718(uParam0);
}

bool func_606(int iParam0, var uParam1)
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
			if (!func_719(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_720(iParam0, iVar2) <= func_721(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_607(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_722(iParam2, 1, 1, 1, 0))
	{
		func_217(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_723(uParam1, 1);
	func_724();
}

bool func_608(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_725(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_726(uParam1);
			if (func_727(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_728(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_723(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_729(uParam1))
						{
							func_723(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_609(int iParam0, int iParam1, var uParam2)
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
	if (func_730(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_726(uParam2);
		if (func_727(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_728(uParam2)
				{
					func_723(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_610(int iParam0, var uParam1)
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
	if (func_719(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_728(uParam1)
		{
			fVar3 = func_726(uParam1);
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

int func_611(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_731(bParam1, bParam2, bParam3);
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

bool func_612(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_613(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_732(uParam2);
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
			if (func_621(uParam2, iParam1))
			{
				func_723(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_614(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_641(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_621(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_723(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_615(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_733(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_734(iParam1, vVar0, vVar4))
					{
						func_723(uParam2, 1);
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
					func_723(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_734(iParam1, vVar0, vVar7))
					{
						func_723(uParam2, 1);
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

bool func_616(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_719(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_735(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_736(&(Global_1940258->f_28[iVar0])))
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
			if (func_737(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_738(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_739(uParam1, iParam0, fVar1, iVar0))
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

bool func_617(int iParam0, var uParam1)
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

bool func_618(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_619(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_740(iVar0, &iVar2))
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
	if (func_741(iVar0, iParam0))
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

int func_620(var uParam0, int iParam1)
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

bool func_621(var uParam0, int iParam1)
{
	if (func_742(uParam0))
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

bool func_622(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_484(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_623()
{
}

bool func_624(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_743(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_625();
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
						if (func_285(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_625();
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

int func_625()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_626()
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
	if ((func_625() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_627(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_721(uParam0);
	if (uParam0->f_13 > func_553(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_744(iParam1);
	iVar1 = func_745(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_628(var uParam0, int iParam1)
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
	if (func_390(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_746(vVar1, vVar4);
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

int func_629(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_747(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_630(int iParam0, var uParam1)
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
		if (func_748(iParam0, uParam1, 1))
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
	if (!func_453(iParam0))
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
			if (func_749(uParam1))
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
					if (!func_750(uParam1, iParam0))
					{
						if (func_285(iVar4, Global_35, 1) < 7f)
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

bool func_631(int iParam0, var uParam1)
{
	if (!func_751(0))
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

bool func_632(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_625();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_633(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_634(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_625();
	}
	else if (func_625() - uParam1->f_5) > func_752(uParam1)
	{
		return func_753(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_635(var uParam0, int iParam1)
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

bool func_636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_175(Local_1486.f_332.f_2, 4))
	{
		return false;
	}
	if (!is_bit_set(Local_1486.f_332.f_65, iParam0))
	{
		return false;
	}
	clear_bit(&(Local_1486.f_332.f_65), iParam0);
	if (!bParam3 && Local_77[iParam2]->f_17.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && get_time_difference(Local_77[iParam2]->f_17.f_4, get_network_time_accurate()) > 750)
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
	iVar0 = func_754(player_ped_id(), 0, 1, 0);
	if (!is_weapon_valid(iVar0) || !((_0x705be297eebdb95d(iVar0) || func_755(iVar0)) || _is_weapon_throwable(iVar0)))
	{
		return false;
	}
	if (_0x79b1a6e780266db0(player_ped_id()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_637(int* iParam0, var uParam1)
{
	get_screen_resolution(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_638(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_639(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_756(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_757(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_758(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_760(func_759(get_rendering_cam())) };
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

int func_640(int iParam0, var uParam1)
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

int func_641(var uParam0)
{
	return uParam0->f_23;
}

struct<15> func_642(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_1486, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_643(var uParam0)
{
	func_764(uParam0, func_763(4, 117));
}

bool func_644(int iParam0, var uParam1, var uParam2, bool bParam3)
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

int func_645(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_375(255))
	{
		func_169(iParam0);
		return 0;
	}
	iVar0 = func_181(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (is_entity_dead(iVar0) || _is_ped_hogtied(iVar0))
		{
			func_169(iParam0);
			return 0;
		}
	}
	if (func_484(player_ped_id(), &(Local_1486.f_179.f_7[iParam0]), 1, 1) > 100f)
	{
		return 0;
	}
	if (does_blip_exist(Local_1486.f_179.f_7[iParam0]->f_1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		iParam2 = 942020339;
	}
	if (func_182(iParam0))
	{
		func_765(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_ENE");
	}
	else
	{
		func_765(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_STR");
	}
	return 1;
}

void func_646()
{
	if (func_275())
	{
		return;
	}
	fVar0 = func_285(Global_34, func_283(), 1);
	if (fVar0 < 125f)
	{
		if (!does_blip_exist(Local_1486.f_19.f_4))
		{
			func_645(0, -89429847, 1679075994, 0);
		}
	}
	else if (does_blip_exist(Local_1486.f_19.f_4))
	{
		func_169(0);
	}
}

void func_647(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	func_650(Local_1486.f_19.f_145[iParam0], 1, 1);
	iVar0 = func_181(0);
	iVar1 = func_766(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_767(iVar1);
	func_768(iVar1, 18, 0, 1);
	func_768(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	func_770(iVar1, func_769(iParam0), 1, 1);
	Local_1486.f_19.f_145[iParam0] = iVar1;
}

void func_648(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_771(iVar0, bParam0);
		iVar0++;
	}
}

bool func_649(int iParam0)
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

void func_650(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_649(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_767(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_772(iVar0);
	*uParam0 = 0;
}

void func_651(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_773(vParam1, fParam5);
	fVar0 = func_774(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_652(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_217(&(uParam0->f_1), 16);
		func_651(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_773(vParam1, fParam5);
		fVar1 = func_774(fParam5, iParam4);
		fVar3 = func_775(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_775(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_653(float fParam0)
{
	fVar0 = func_776(fParam0);
	return fVar0;
}

float func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_655(float fParam0)
{
	fVar0 = func_776(fParam0);
	return fVar0;
}

float func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_658(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_759(0) };
	vVar3 = { func_760(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_659(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "BTUP_GX_KNOCK1", 24);
			break;
		case 2:
			StringCopy(sParam1, "BTUP_GX_KILL1", 24);
			break;
		case 3:
			StringCopy(sParam1, "BTUP_GX_WARN1", 24);
			break;
		case 4:
			StringCopy(sParam1, "BTUP_GX_WARN2", 24);
			break;
		case 5:
			StringCopy(sParam1, "BTUP_GX_LEFT", 24);
			break;
		case 6:
			StringCopy(sParam1, "BTUP_GX_DONEW", 24);
			break;
		case 7:
			StringCopy(sParam1, "BTUP_GX_RETURN", 24);
			break;
		case 8:
			StringCopy(sParam1, "BTUP_C2_CLEAR", 24);
			break;
		case 9:
			StringCopy(sParam1, "BTUP_C1_CLEAR", 24);
			break;
		case 10:
			StringCopy(sParam1, "BTUP_C2_HELP2", 24);
			break;
		case 11:
			StringCopy(sParam1, "BTUP_C2_HELP3", 24);
			break;
		case 12:
			StringCopy(sParam1, "BTUP_C2_HELP4", 24);
			break;
		case 13:
			StringCopy(sParam1, "BTUP_C2_GIVEUP", 24);
			break;
		case 14:
			StringCopy(sParam1, "BTUP_C1_LAW1", 24);
			break;
		case 15:
			StringCopy(sParam1, "BTUP_C1_HELP1", 24);
			break;
		case 16:
			StringCopy(sParam1, "BTUP_C1_HELP2", 24);
			break;
		case 17:
			StringCopy(sParam1, "BTUP_C1_HELP3", 24);
			break;
		case 18:
			StringCopy(sParam1, "BTUP_C2_THX", 24);
			break;
		case 19:
			StringCopy(sParam1, "BTUP_C1_THX", 24);
			break;
		case 20:
			StringCopy(sParam1, "BTUP_C2_THXBYE", 24);
			break;
		case 21:
			StringCopy(sParam1, "BTUP_C1_THXBYE", 24);
			break;
		case 22:
			StringCopy(sParam1, "BTUP_C2_BUMP", 24);
			break;
		case 23:
			StringCopy(sParam1, "BTUP_C1_BUMP", 24);
			break;
		case 24:
			StringCopy(sParam1, "BTUP_C2_AIM", 24);
			break;
		case 25:
			StringCopy(sParam1, "BTUP_C1_LAWAIM2", 24);
			break;
		case 26:
			StringCopy(sParam1, "BTUP_C1_LAW_GUN", 24);
			break;
		case 27:
			StringCopy(sParam1, "BTUP_C2_AGG", 24);
			break;
		case 28:
			StringCopy(sParam1, "BTUP_C1_AGG", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_660(var uParam0)
{
	if (_0xd89504d9d7d5057d(uParam0) && _0x1ecc76792f661cf5(uParam0))
	{
		return true;
	}
	return false;
}

void func_661(int iParam0, int iParam1)
{
	iVar0 = func_181(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_526(iVar0, 993674639, 1, 0))
	{
		return;
	}
	_task_start_scenario_in_place(iVar0, iParam1, 0, false, 0, -1f, false);
	_0xf1c03a5352243a30(iVar0);
}

bool func_662(var uParam0, int iParam1, char* sParam2)
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

void func_663(int iParam0, int iParam1)
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
	if (!func_118(&Var0, 4) && func_777(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_664(int iParam0)
{
	func_778(iParam0);
}

void func_665(struct<2> Param0)
{
	if (func_324(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_324(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_324(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_779(Param0, &Var0))
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

void func_666(int iParam0)
{
	Var0 = { func_422(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_667(int iParam0, int iParam1, int iParam2)
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

int func_668(int iParam0, var uParam1, var uParam2, var uParam3)
{
	fVar0 = 9999f;
	*uParam2 = -1;
	*uParam3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (is_entity_dead(uParam1[iVar2]))
		{
		}
		else
		{
			fVar3 = func_484(iParam0, uParam1[iVar2], 1, 1);
			if (fVar3 >= fVar0)
			{
				*uParam2 = iVar2;
			}
			else
			{
				uVar1 = uParam1[iVar2];
				fVar0 = fVar3;
				*uParam2 = iVar2;
				*uParam3 = iVar2;
			}
		}
		iVar2++;
	}
	return uVar1;
}

void func_669()
{
	func_504(1);
	func_504(2);
}

void func_670(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_671(int iParam0, bool bParam1)
{
	if (bParam1 && !func_649(iParam0))
	{
		return false;
	}
	iVar0 = func_767(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_672(int iParam0)
{
	if (func_523(iParam0))
	{
		return true;
	}
	return false;
}

void func_673(int iParam0)
{
	if (Local_1486.f_19.f_3 == iParam0)
	{
		return;
	}
	Local_1486.f_19.f_3 = iParam0;
}

bool func_674(int iParam0)
{
	if (!func_492(iParam0))
	{
		return true;
	}
	if (func_518(iParam0, -1, 1))
	{
		return false;
	}
	func_502(iParam0);
	return false;
}

bool func_675(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_676(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_677(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (get_script_task_status(iParam0, iParam1, true) == 1)
	{
		return true;
	}
	else if (bParam2)
	{
		if (get_script_task_status(iParam0, iParam1, true) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_678(int iParam0, bool bParam1)
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

bool func_679(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_780(uParam2);
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

int func_680()
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

void func_681(var uParam0, var uParam1)
{
}

int func_682(int iParam0)
{
	return func_781(iParam0) + 30;
}

bool func_683(int iParam0)
{
	return iParam0 != 0;
}

int func_684(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_685(int iParam0, int iParam1, int iParam2)
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

struct<2> func_686(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_687(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_782(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	return iParam0 + 8;
}

void func_689(int iParam0, int iParam1)
{
	Var0 = { func_422(iParam1, 896190569) };
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

float func_690(vector3 vParam0, vector3 vParam3)
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

bool func_691(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_692(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	iVar0 = func_181(iParam1);
	if (iParam2 != 11)
	{
		iVar1 = func_181(iParam2);
	}
	else
	{
		iVar1 = Global_34;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	fVar2 = func_484(iVar0, iVar1, 1, 1);
	if (fVar2 > 70f && !bParam5)
	{
		return 0;
	}
	if (!func_659(iParam0, &vVar3))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (iParam4 > 0)
	{
		iVar6 = 1;
	}
	if (_0xd89504d9d7d5057d(&vVar3))
	{
		if (func_783(&vVar3))
		{
			return 1;
		}
	}
	else if (func_784(&(Local_1486.f_19.f_42), vVar3, iVar6, iParam4, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_693(int iParam0, bool bParam1)
{
	if (!func_659(iParam0, &uVar0))
	{
		return 0;
	}
	func_785(&uVar0, bParam1, 0);
	return 1;
}

int func_694(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_786(iParam2, -372840566);
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
	func_787(uParam1, iParam0, Var3);
	return 1;
}

float func_695(float fParam0, float fParam1, float fParam2)
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

bool func_696(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_697(int iParam0)
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

int func_698(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_788(iParam0, 0, 1) };
		if (func_789(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_790(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_791(iParam0, Var0, Var0.f_4, 0) };
				func_792(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_793(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_794(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_795(iParam0, iParam1);
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

void func_699(int iParam0, int iParam1, float fParam2)
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

bool func_700(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_701()
{
	return func_796() == 4;
}

float func_702()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_703(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_704(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_705(var uParam0)
{
	return func_595(*uParam0, 2);
}

int func_706(var uParam0)
{
	if (!func_797(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_798(&((*Global_1275441)[iVar0]->f_1), uParam0))
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

void func_707(int iParam0)
{
	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_799(&Var0);
}

bool func_708()
{
	return Global_1276421->f_75.f_1 != -1;
}

bool func_709(var uParam0)
{
	if (!func_797(uParam0))
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

bool func_710(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_222(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_711(var uParam0, var uParam1)
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
	func_799(&Var0);
}

bool func_712(int iParam0, var uParam1)
{
	fVar0 = func_800(uParam1);
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
		fVar2 = func_801(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_802())
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

bool func_713(int iParam0, var uParam1)
{
	if (func_803(iParam0))
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

void func_714(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_804();
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
			func_805(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_715(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_716(bool bParam0, bool bParam1)
{
	if (func_806(bParam0, &iVar0, &iVar1))
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

bool func_717(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_807(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_807(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_745(iVar0) == -1)
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

void func_718(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_808(uParam0);
	}
}

bool func_719(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_745(iParam2);
	}
	else
	{
		iVar1 = func_744(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_745(iParam0);
	}
	else
	{
		iVar0 = func_744(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_175(*uParam1, 8388608))
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

float func_720(int iParam0, int iParam1)
{
	return func_484(iParam0, iParam1, 1, 1);
}

float func_721(var uParam0)
{
	return uParam0->f_29;
}

bool func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_723(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 134217728);
	}
	else
	{
		func_218(uParam0, 134217728);
	}
}

void func_724()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_725(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_484(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_809(iVar0, 0)))
		{
			if (func_810(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_726(var uParam0)
{
	return uParam0->f_18;
}

bool func_727(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_175(*uParam0, 4194304))
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

int func_728(var uParam0)
{
	return uParam0->f_19;
}

int func_729(var uParam0)
{
	return uParam0->f_20;
}

bool func_730(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_809(iVar0, 0)))
		{
			if (func_811(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_731(bool bParam0, bool bParam1, bool bParam2)
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

float func_732(var uParam0)
{
	return uParam0->f_25;
}

int func_733(var uParam0)
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

bool func_734(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_812(iParam0, vParam4, 0.5f))
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

int func_735(int iParam0)
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
	if (func_813(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_736(int iParam0)
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

bool func_737(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_803(iParam1))
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

bool func_738(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_803(iParam1))
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

bool func_739(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_814(uParam0);
	if (func_803(iParam1))
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

bool func_740(int iParam0, int iParam1)
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

bool func_741(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_815(iParam0, 1, 0, 0)) && !func_815(iParam0, 1, 0, 0) == 1151374672)
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

bool func_742(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_743(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_285(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_744(int iParam0)
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

int func_745(int iParam0)
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

float func_746(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_747(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_740(Global_34, &iVar1))
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
		fVar2 = func_484(iParam0, player_ped_id(), 0, 1);
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
		if (func_484(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_748(int iParam0, var uParam1, bool bParam2)
{
	func_806(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_750(uParam1, iVar0))
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
				if (!bParam2 || !func_750(uParam1, iVar1))
				{
					if (func_285(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_749(var uParam0)
{
	return func_175(*uParam0, 131072);
}

bool func_750(var uParam0, int iParam1)
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

bool func_751(int iParam0)
{
	return false;
}

int func_752(var uParam0)
{
	return uParam0->f_22;
}

int func_753(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_754(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_755(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_756(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.x, fVar0);
	fVar1 = func_801(vVar2.x, fVar1);
	return (fVar0 - fVar1);
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
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.y, fVar0);
	fVar1 = func_801(vVar2.y, fVar1);
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
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	vVar2 = { get_ped_bone_coords(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_816(vVar2.z, fVar0);
	fVar1 = func_801(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_759(int iParam0)
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
	return func_760((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_760(vector3 vParam0)
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

var func_763(int iParam0, int iParam1)
{
	return func_817(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_764(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

void func_765(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	func_169(iParam0);
	if (!does_entity_exist(&(Local_1486.f_179.f_7[iParam0])))
	{
		return;
	}
	iVar0 = _blip_add_for_entity(iParam1, &(Local_1486.f_179.f_7[iParam0]));
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
	Local_1486.f_179.f_7[iParam0]->f_1 = iVar0;
}

int func_766(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_818(iVar0, 2))
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
				func_819(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_767(int iParam0)
{
	return iParam0;
}

void func_768(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_649(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_769(int iParam0)
{
	return is_bit_set(Local_1486.f_19.f_144, iParam0);
}

void func_770(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_649(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0);
	if (bParam1)
	{
		func_820(iParam0, 4);
		if (bParam3)
		{
			func_821(iVar0, 1);
		}
		func_822(iVar0, 1);
	}
	else
	{
		func_823(iParam0, 4);
		func_822(iVar0, 0);
	}
}

void func_771(int iParam0, bool bParam1)
{
	func_770(&(Local_1486.f_19.f_145[iParam0]), bParam1, 1, 1);
	if (bParam1)
	{
		set_bit(&(Local_1486.f_19.f_144), iParam0);
	}
	else
	{
		clear_bit(&(Local_1486.f_19.f_144), iParam0);
	}
}

void func_772(int iParam0)
{
	if (!func_824(iParam0))
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

float func_773(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_35, vParam0, true);
}

float func_774(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_654(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_775(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_776(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

int func_777(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_778(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_422(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

bool func_779(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_679(Param0, &vVar0);
	if (func_825(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_780(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_781(int iParam0)
{
	return iParam0 * 31;
}

int func_782(int iParam0)
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

bool func_783(char* sParam0)
{
	if (!_0xd89504d9d7d5057d(sParam0))
	{
		return false;
	}
	start_preloaded_conversation(sParam0);
	return true;
}

bool func_784(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_826(vParam1, uParam0);
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

void func_785(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_786(int iParam0, int iParam1)
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

void func_787(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_827(uParam0))
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

struct<5> func_788(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_828(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_829(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_791(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_830(bParam1) };
			if (bParam2 && func_831(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_789(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_789(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_790(iParam0, &Var6, 1728382685))
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
			Var0 = { func_832(bParam1) };
			switch (func_833(iParam0))
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
			if (func_834(iParam0, -1823706425))
			{
				Var0 = { func_791(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_834(iParam0, -1483207246))
			{
				Var0 = { func_791(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_791(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_834(iParam0, -1653629781))
			{
				Var0 = { func_791(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_835(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_834(iParam0, -1653629781))
			{
				Var0 = { func_791(1384535894, Var0, 1784584921, bParam1) };
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

bool func_789(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_836(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_790(int iParam0, var uParam1, int iParam2)
{
	if (func_837(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_791(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_838(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_839(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_792(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_840(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_835(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_793(bParam6))
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
			iVar14 = func_841(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_842(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_839(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_793(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_839(bParam0));
}

int func_794(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_843(iParam0))
	{
		return 0;
	}
	if (!func_793(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_795(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_844(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_796()
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

bool func_797(var uParam0)
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

bool func_798(var uParam0, var uParam1)
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

void func_799(var uParam0)
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
	_trigger_script_event_2(uParam0, 27, 42, &(Global_1051252->f_16[17]));
	func_845(uParam0);
}

float func_800(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_553(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_846(uParam0);
	}
	return func_553(uParam0);
}

float func_801(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_802()
{
	iVar0 = func_848(func_847());
	iVar1 = func_849(func_847());
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

bool func_803(int iParam0)
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

bool func_804()
{
	if (func_850())
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

void func_805(var uParam0, var uParam1)
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

bool func_806(bool bParam0, int iParam1, int iParam2)
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

int func_807(var uParam0)
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

void func_808(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_218(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_217(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_809(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_810(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_811(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_811(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_812(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_813(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_814(var uParam0)
{
	return uParam0->f_28;
}

int func_815(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_816(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var func_817(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_851() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_852());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_852());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_852());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_853(get_player_team(iVar5)));
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
			if (func_854(iVar2))
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
				if (iVar9 & 8192 != 0 && func_855(iVar2) != 1)
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
					if (!func_856(iVar10))
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

bool func_818(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_819(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_821(iParam0, 1);
	func_822(iParam0, 1);
	func_823(iParam0, 128);
}

void func_820(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_821(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_818(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_822(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_823(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_824(int iParam0)
{
	return func_818(iParam0, 2);
}

bool func_825(int iParam0, var uParam1, var uParam2)
{
	if (!func_857(iParam0))
	{
		return false;
	}
	if (func_858(iParam0, uParam1, &uVar0))
	{
		func_859(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_826(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_827(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_828(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_839(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_791(1328661203, func_860(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_791(1328661203, func_860(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_791(1328661203, func_860(), -1591664384, bParam0);
}

int func_829(int iParam0)
{
	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_830(bool bParam0)
{
	iVar0 = func_839(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_791(923904168, func_828(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_791(923904168, func_828(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_791(923904168, func_828(bParam0), -740156546, 0);
}

bool func_831(int iParam0, bool bParam1)
{
	if (func_833(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_861();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_832(bool bParam0)
{
	iVar0 = func_839(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_791(271701509, func_828(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_791(271701509, func_828(bParam0), 12999093, 0);
}

int func_833(int iParam0)
{
	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_834(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_833(iParam0);
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
			if (func_862(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_835(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_863(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_836(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_838(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_864(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_791(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_839(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_839(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_837(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_839(0);
	*uParam1 = { func_791(iParam0, func_830(0), iParam3, 0) };
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

bool func_838(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_839(bool bParam0)
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

bool func_840(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_841(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_865(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_867(func_866(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_868(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_842(int iParam0, struct<17> Param1)
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

bool func_843(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_844(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_845(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_869(iVar0);
		if (func_175(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

var func_846(var uParam0)
{
	return uParam0->f_27;
}

int func_847()
{
	return &Global_1902818;
}

int func_848(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_849(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_850()
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

int func_851()
{
	return Global_1051252->f_12;
}

char* func_852()
{
	return "unnamed";
}

int func_853(int iParam0)
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

bool func_854(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_870(36, iParam0);
}

int func_855(int iParam0)
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

bool func_856(int iParam0)
{
	if (func_871(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_872(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_857(int iParam0)
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

bool func_858(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_873(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_859(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_874(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_875(iVar0);
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
			uParam2->f_5 = func_876(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_877(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_878(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_879(iVar0);
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

struct<4> func_860()
{
	return Var0;
}

bool func_861()
{
	return (func_880(-1185145312, 0, 0, 0) > 0 && func_881(func_791(889965687, func_828(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_862(int iParam0, int iParam1, int iParam2)
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

bool func_863(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_839(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_864(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_865(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_882(uParam1->f_8, iParam0, uVar0, 2048) || func_882(uParam1->f_8, iParam0, uVar0, 32768)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 4) || func_882(uParam1->f_8, iParam0, uVar0, 256)) || func_882(uParam1->f_8, iParam0, uVar0, 65536)) || func_882(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 1) || func_882(uParam1->f_8, iParam0, uVar0, 8)) || func_882(uParam1->f_8, iParam0, uVar0, 65536)) || func_882(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_882(uParam1->f_8, iParam0, uVar0, 1) || func_882(uParam1->f_8, iParam0, uVar0, 16)) || func_882(uParam1->f_8, iParam0, uVar0, 2)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_882(uParam1->f_8, iParam0, uVar0, 8) || func_882(uParam1->f_8, iParam0, uVar0, 4096)) || func_882(uParam1->f_8, iParam0, uVar0, 256)) || func_882(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_866(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_867(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_883(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_883(iParam1, 2, 0, 0);
	return -1;
}

int func_868(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_883(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_869(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_870(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_884(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_885())
	{
		return func_884(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_884(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_871(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_872(int iParam0)
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
		func_886(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_887(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_873(int iParam0)
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

int func_874(int iParam0, var uParam1)
{
	if (func_888(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_875(int iParam0)
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

int func_876(int iParam0)
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

int func_877(int iParam0)
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

int func_878(int iParam0)
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

int func_879(int iParam0)
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

int func_880(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_843(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_839(bParam1), iParam0, iParam3);
}

int func_881(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_889(&uParam0, iParam4, bParam5, iParam6);
}

int func_882(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_220(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_883(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_890(iParam0, iParam1, iParam2, iParam3);
}

bool func_884(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_885()
{
	return Global_1102219->f_3672;
}

void func_886(int iParam0)
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
	func_887(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_887(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_888(int iParam0, var uParam1, var uParam2)
{
	if (func_891(iParam0, uParam1, &uVar0))
	{
		func_892(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_889(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_893(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_890(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_894(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_891(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_873(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_892(var uParam0, int iParam1, var uParam2)
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

bool func_893(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_839(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_863(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_894(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_895(&(uParam0->f_4));
}

void func_895(var uParam0)
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

