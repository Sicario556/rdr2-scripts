void __EntryFunction__()
{
	fLocal_538 = 1f;
	fLocal_539 = 1f;
	iVar0 = iVar542;
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
	network_register_host_broadcast_variables(&Local_13, 65, 42);
	func_10(_0xba24095ea96dfe17(&Local_13), 65, "m_hostData");
	network_register_player_broadcast_variables(&Local_78, 225, 43);
	func_11(_0x690806bc83bc8ca2(Local_78[0]), 225, "m_clientData");
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
	else if (func_17(Local_303.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_303.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_303.f_12), Local_303.f_9))
	{
		return true;
	}
	else if (Local_303.f_8 == 6)
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
	_copy_memory(&Local_303, uParam0, 5);
	iVar2 = func_30(&bVar1, Local_303.f_1, Local_303.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_303.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar0);
	Local_303.f_9 = { func_32(Var3.f_5, 8) };
	Local_303.f_14 = Var3.f_5;
	Local_303.f_15 = { Var3.f_11 };
	Local_303.f_18 = Var3.f_7;
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
	if (func_37(*Global_1051213) && !func_21(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_38(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_39(iParam3, 255))
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
	if (func_40())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_37(*Global_1051213))
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
		func_41();
	}
	switch (Local_13)
	{
		case 0:
			func_42();
			break;
		case 1:
			func_43();
			break;
		case 2:
			func_44();
			break;
		case 3:
			func_45();
			break;
		case 4:
			func_46();
			break;
		case 5:
			func_47();
			break;
	}
}

void func_23()
{
	func_48();
	func_49();
	if (Local_303.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_303.f_8)
	{
		case 0:
			func_51();
			break;
		case 1:
			func_52();
			break;
		case 2:
			func_53();
			break;
		case 3:
			func_54();
			break;
		case 4:
			func_55();
			break;
		case 5:
			func_56();
			break;
	}
}

void func_24()
{
	func_57();
}

void func_25()
{
	if (func_58())
	{
		if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_13.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
}

void func_27()
{
	if (Local_303.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_61(Local_303.f_12, 4);
		}
	}
	func_62();
	if (func_63(64))
	{
		func_64(Local_13.f_6);
	}
	func_65();
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
	func_66(&Var0, Var26.f_5);
	iVar25 = func_67(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_68(iVar25) };
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
			func_69(uParam0, iParam2);
			break;
		case 2:
			func_70(uParam0, iParam2);
			break;
		case 3:
			func_71(uParam0, iParam2);
			break;
		case 4:
			func_72(uParam0, iParam2);
			break;
		case 12:
			func_73(uParam0, iParam2);
			break;
		case 6:
			func_74(uParam0, iParam2, -1);
			break;
		case 7:
			func_75(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_76(uParam0, iParam2);
			break;
		case 11:
			func_77(uParam0, iParam2);
			break;
		case 9:
			func_78(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_79(uParam0, iParam2);
			break;
		case 8:
			func_80(uParam0, iParam2);
			break;
		case 13:
			func_81(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_82(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_83(uParam0, iParam2);
			break;
		case 16:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_85(uParam0, iParam2);
			break;
		case 21:
			func_86(uParam0, iParam2);
			break;
		case 28:
			func_87(uParam0, iParam2);
			break;
		case 25:
			func_88(uParam0, iParam2);
			break;
		case 24:
			func_89(uParam0, iParam2);
			break;
		case 22:
			func_90(uParam0, iParam2);
			break;
		case 23:
			func_91(uParam0, iParam2);
			break;
		case 29:
			func_92(uParam0, iParam2);
			break;
		case 26:
			func_93(uParam0, iParam2);
			break;
		case 30:
			func_94(uParam0, iParam2);
			break;
		case 27:
			func_95(uParam0, iParam2);
			break;
		case 32:
			func_96(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_97(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_98(uParam0, iParam2);
			break;
		case 17:
			func_99(uParam0, iParam2);
			break;
		case 18:
			func_100(uParam0, iParam2);
			break;
		case 19:
			func_101(uParam0, iParam2);
			break;
		case 20:
			func_102(uParam0, iParam2);
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
			func_103(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636), func_104(iParam1));
			break;
		case 3:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_602), func_104(iParam1));
			break;
		case 4:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_2104), func_104(iParam1));
			break;
		case 5:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_12606), func_104(iParam1));
			break;
		case 6:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_12908), func_104(iParam1));
			break;
		case 7:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_15910), func_104(iParam1));
			break;
		case 8:
			Var0.f_1 = func_105(iParam0, &(Global_1071686->f_636.f_16512), func_104(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_106();
	}
	return Var0;
}

void func_33()
{
	func_107();
}

void func_34()
{
	func_108(&(Local_303.f_19.f_18));
	Local_303.f_19.f_16 = func_109();
}

void func_35()
{
	reserve_network_mission_peds(2);
	reserve_network_mission_vehicles(1);
	reserve_network_mission_objects(2);
}

void func_36()
{
}

bool func_37(struct<2> Param0)
{
	if (!func_110(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_104(Param0))
	{
		return false;
	}
	return true;
}

bool func_38(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_39(int iParam0, int iParam1)
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

bool func_40()
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
	if (!func_37(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_41()
{
}

void func_42()
{
	iVar0 = Global_1198046->f_231.f_1066[Local_303.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar0);
	if (!func_111(&Var1, 1))
	{
		func_112(1);
		return;
	}
	Local_13.f_6 = func_113(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_114(256);
	if (func_115(Local_13.f_6))
	{
		func_116(5);
		func_112(6);
	}
	else
	{
		func_112(1);
	}
}

void func_43()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_303.f_1, Local_303.f_2, -1, 255);
	if (func_111(&Var0, 1))
	{
		func_112(2);
		return;
	}
	if (func_117(Var0, &bVar31))
	{
		clear_area(Local_303.f_15, Var0.f_10, 2442122);
		func_112(2);
	}
	else if (bVar31)
	{
		func_116(3);
		func_112(6);
	}
	if (!func_118(Local_13.f_3.f_2))
	{
		func_119(&(Local_13.f_3.f_2));
	}
	else if (func_120(Local_13.f_3.f_2) > 45000)
	{
		func_116(4);
		func_112(6);
	}
}

void func_44()
{
	if (func_121(1, 255))
	{
		if (!func_122(1))
		{
			if (func_123())
			{
				func_114(1);
			}
		}
		else
		{
			func_124();
			func_112(3);
		}
	}
}

void func_45()
{
	if (func_121(2, 255))
	{
		if (!func_122(2))
		{
			bVar0 = true;
			if (!func_125())
			{
				bVar0 = false;
			}
			if (!func_126())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_114(2);
			}
		}
		else
		{
			func_127();
			func_112(4);
		}
	}
}

void func_46()
{
	func_128();
	func_129();
	func_130();
	if (func_131() || Local_13.f_2 != 0)
	{
		func_132();
		func_112(5);
	}
}

void func_47()
{
	if (func_121(4, 255))
	{
		if (func_133())
		{
			func_114(4);
			func_112(6);
		}
	}
}

void func_48()
{
	if (!func_122(256))
	{
		return;
	}
	if (func_122(512))
	{
		if (func_63(64) && func_113(player_id()) == Local_13.f_6)
		{
			func_64(Local_13.f_6);
			func_134(64);
		}
	}
	else if (!func_63(64))
	{
		if (func_113(player_id()) == Local_13.f_6)
		{
			func_135(Local_13.f_6, 1, 1);
			func_136(64);
		}
	}
	else if (func_113(player_id()) != Local_13.f_6)
	{
		func_64(Local_13.f_6);
		func_134(64);
	}
}

void func_49()
{
	if (!Global_13)
	{
		if (func_121(8192, 255))
		{
			func_137(8192);
		}
	}
	else if (!func_121(8192, 255))
	{
		func_138(8192);
	}
}

void func_50()
{
	func_139();
}

void func_51()
{
	if (Local_13 == 6)
	{
		func_140(6);
	}
	else if (Local_13 > 0)
	{
		func_48();
		func_140(1);
	}
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_140(6);
	}
	else if (Local_13 > 1)
	{
		func_140(2);
	}
}

void func_53()
{
	if (!func_121(1, 255))
	{
		bVar0 = true;
		if (!func_141())
		{
			bVar0 = false;
		}
		if (!func_142())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_138(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_118(Local_303.f_11))
			{
				func_119(&(Local_303.f_11));
			}
			if (func_120(Local_303.f_11) >= iVar1)
			{
				func_140(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_143(&(Local_303.f_11));
		func_144();
		func_140(3);
	}
}

void func_54()
{
	if (!func_121(2, 255))
	{
		iVar0 = func_145();
		iVar1 = func_146();
		if (iVar0 && iVar1)
		{
			func_138(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_118(Local_303.f_11))
			{
				func_119(&(Local_303.f_11));
			}
			if (func_147(Local_303.f_11) >= iVar2)
			{
				func_140(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_143(&(Local_303.f_11));
		func_148();
		func_149();
		func_150();
		func_151();
		func_140(4);
	}
}

void func_55()
{
	if (Local_13 >= 5)
	{
		func_152();
		func_140(5);
		return;
	}
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
}

void func_56()
{
	if (!func_121(4, 255))
	{
		if (func_159())
		{
			func_160();
			func_61(Local_303.f_12, 4);
			func_138(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_140(6);
	}
}

void func_57()
{
}

bool func_58()
{
	return (func_122(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_59()
{
}

void func_60()
{
	if (func_58())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (network_does_network_id_exist(&(Local_13.f_62[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_13.f_62[iVar1]));
				func_161(iVar1);
				if (network_has_control_of_entity(iVar0))
				{
					set_blocking_of_non_temporary_events(iVar0, false);
					if (!func_162(iVar1, 16))
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

void func_61(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_163(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_62()
{
	if (!func_63(1))
	{
		return;
	}
	if (func_63(4))
	{
		return;
	}
	if (!func_63(2))
	{
		iVar0 = -1;
	}
	else if (!func_63(8))
	{
		iVar0 = 2;
	}
	else if (func_63(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_63(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_164(Local_303.f_9, iVar0, 0, 255, 0);
	func_136(4);
	if (bVar1)
	{
		func_165(Local_303.f_1, Local_303.f_2);
		if (!func_63(256))
		{
			if (iVar0 == 1)
			{
				func_166(Local_303.f_18, 1);
			}
			else
			{
				func_166(Local_303.f_18, 0);
			}
			func_136(256);
		}
	}
	else
	{
		func_166(Local_303.f_18, 2);
	}
}

bool func_63(int iParam0)
{
	return func_167(Local_303.f_7, iParam0);
}

void func_64(int iParam0)
{
	if (!func_168(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_65()
{
	bVar0 = func_58();
	if (func_169(1) && !is_player_control_on(player_id()))
	{
		func_170(0, 1);
	}
	if (does_entity_exist(func_171(0)))
	{
		_0xba8818212633500a(func_171(0), 6, 0);
	}
	if (func_172(16777216, 255) || func_172(33554432, 255))
	{
		close_sequence_task(Local_303.f_19.f_174);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			set_entity_invincible(func_173(1), false);
		}
		func_174(iVar1);
		if ((bVar0 && network_does_network_id_exist(&(Local_13.f_7.f_1[iVar1]))) && network_has_control_of_network_id(&(Local_13.f_7.f_1[iVar1])))
		{
			if (iVar1 != 0 || !is_ped_fleeing(func_173(iVar1)))
			{
				iVar2 = net_to_ent(&(Local_13.f_7.f_1[iVar1]));
				set_entity_as_no_longer_needed(&iVar2);
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		func_175(iVar3);
		if ((bVar0 && network_does_network_id_exist(&(Local_13.f_7.f_4[iVar3]))) && network_has_control_of_network_id(&(Local_13.f_7.f_4[iVar3])))
		{
			iVar4 = net_to_ent(&(Local_13.f_7.f_4[iVar3]));
			set_entity_as_no_longer_needed(&iVar4);
		}
		iVar1++;
	}
}

void func_66(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_67(var uParam0)
{
	if (!func_176(uParam0))
	{
		return -1;
	}
	iVar0 = func_177(uParam0, uParam0->f_9);
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
			iVar0 = func_177(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_178(uParam0, iParam1);
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

void func_70(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_180(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_180(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_180(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_180(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_180(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_180(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_180(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_180(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_180(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			func_181(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_179(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_180(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_180(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_180(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_180(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_74(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			break;
		case 1:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 6);
			func_182(uParam0, 7);
			func_183(uParam0, 2);
			break;
		default:
			func_179(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_181(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_181(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_181(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_181(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_181(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_181(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_181(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_181(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_181(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_181(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_181(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_181(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_181(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_181(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_181(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_181(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 8);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 7);
			func_181(uParam0, 8);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			func_181(uParam0, 6);
			func_181(uParam0, 7);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			func_181(uParam0, 6);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			func_181(uParam0, 5);
			func_181(uParam0, 9);
			func_181(uParam0, 10);
			func_181(uParam0, 11);
			func_184(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_180(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_180(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_180(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_180(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_180(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_180(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_180(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_180(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_180(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_180(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_179(uParam0);
	func_183(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_185(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_185(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_185(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_185(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_185(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_180(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_180(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_180(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_180(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_180(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_180(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_180(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_180(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_180(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_179(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_179(uParam0);
	func_183(uParam0, 1);
	func_183(uParam0, 4);
	func_183(uParam0, 8);
	func_183(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_186(func_113(iParam2)) };
			break;
	}
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_187(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_187(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_187(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_187(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_180(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_188(uParam0, iParam2);
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

void func_85(var uParam0, int iParam1)
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
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_189(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_189(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_189(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
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
			func_190(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
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
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_181(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_181(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_179(uParam0);
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
			func_181(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_181(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_181(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_181(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_181(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_181(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_181(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_181(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_181(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_181(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_179(uParam0);
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
			func_181(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_181(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_181(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_181(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_181(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_181(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_181(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_181(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_181(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_181(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_181(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
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
			func_191(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
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
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_179(uParam0);
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
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_181(uParam0, 3);
			func_181(uParam0, 4);
			func_181(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_193(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
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
	uParam0->f_28[0] = -2109368060;
	func_179(uParam0);
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
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_181(uParam0, 2);
			func_181(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_181(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_181(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
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
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_96(var uParam0, int iParam1, int iParam2)
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
	func_195(uParam0, iParam1, iParam2);
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

void func_97(var uParam0, int iParam1, int iParam2)
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
	func_196(uParam0, iParam1, iParam2);
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

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_179(uParam0);
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
			func_181(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_181(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_181(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_181(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_181(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_181(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_181(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_181(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_181(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_181(uParam0, 1);
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_180(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_180(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_180(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_180(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_180(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_180(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_180(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_179(uParam0);
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_180(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_180(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_180(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_181(uParam0, 0);
			func_181(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_197(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_197(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_103(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_198(iParam1);
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
	*uParam0 = func_199(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_183(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_201(func_200(iVar0), iParam2);
		uParam0->f_15[0] = func_202(func_200(iVar0), iParam2);
		uParam0->f_5 = func_203(iVar0, iParam2);
		uParam0->f_11 = { func_204(iVar0, iParam2) };
	}
}

int func_104(int iParam0)
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

int func_105(int iParam0, var uParam1, int iParam2)
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

struct<2> func_106()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_107()
{
	reserve_network_mission_peds(2);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Local_78[iVar1]->f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_108(var uParam0)
{
	func_205(uParam0, 0);
	func_206(uParam0, 0);
	func_207(uParam0, 1);
	func_208(uParam0, 1);
	func_209(uParam0, 0);
	func_210(uParam0, 1);
	func_211(uParam0, 1, 1, 1);
}

int func_109()
{
	switch (func_212())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
	return -1;
}

bool func_110(int iParam0)
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

bool func_111(var uParam0, int iParam1)
{
	return func_213(uParam0->f_25, iParam1);
}

void func_112(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_113(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_114(int iParam0)
{
	if (!func_122(iParam0))
	{
		func_214(&(Local_13.f_1), iParam0);
	}
}

bool func_115(int iParam0)
{
	if (!func_168(iParam0))
	{
		return false;
	}
	return (func_215(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_116(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_117(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_216(Local_303.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_303.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_217(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_138(128);
	}
	else if (!func_121(128, 255))
	{
		Local_13.f_3.f_1 = func_218(Param0);
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

bool func_118(int iParam0)
{
	return iParam0 != 0;
}

void func_119(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_120(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_121(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_167(&(Local_78[iParam1]), iParam0);
}

bool func_122(int iParam0)
{
	return func_167(Local_13.f_1, iParam0);
}

bool func_123()
{
	return true;
}

void func_124()
{
}

bool func_125()
{
	iVar0 = 1;
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_7.f_4[iVar3])))
		{
			if (func_220(iVar3, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar3++;
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (iVar4 == 1)
				{
					switch (func_221())
					{
						case 2:
						case 3:
							Jump @152; //curOff = 106
						}
						if (!network_does_network_id_exist(&(Local_13.f_7.f_6[iVar4])))
						{
							if (func_222(iVar4, &bVar1) || bVar1)
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
					switch (func_221())
					{
						case 0:
						case 1:
							if (!network_does_network_id_exist(&(Local_13.f_7.f_1[0])))
							{
								if (func_223(0, &bVar1) || bVar1)
								{
									iVar0 = 0;
								}
							}
							break;
						case 2:
						case 3:
							iVar2 = 0;
							while (iVar2 <= 1)
							{
								if (!network_does_network_id_exist(&(Local_13.f_7.f_1[iVar2])))
								{
									if (func_223(iVar2, &bVar1) || bVar1)
									{
										iVar0 = 0;
									}
									else
									{
										iVar2++;
									}
									if (bVar1)
									{
										func_224();
									}
									return iVar0;
								}
							}
							default:
								break;
					}
				}
			}
		}

bool func_126()
{
	if (!func_225(&bVar0))
	{
		if (bVar0)
		{
			func_224();
		}
		return false;
	}
	return true;
}

void func_127()
{
}

void func_128()
{
	if (!func_122(32) && func_226(32))
	{
		func_114(32);
	}
	if (!func_122(64) && func_226(64))
	{
		func_114(64);
	}
	if (!func_122(16) && func_227(16))
	{
		func_114(16);
	}
	if ((!func_122(2048) && func_226(2048)) && !func_226(4096))
	{
		func_114(2048);
	}
}

void func_129()
{
	if (!bVar0 && func_122(16))
	{
		func_116(1);
		return;
	}
	if (func_122(2048) && !func_226(4096))
	{
		func_116(6);
		return;
	}
}

void func_130()
{
}

bool func_131()
{
	if (func_228())
	{
		return true;
	}
	func_229();
	func_230();
	switch (Local_13.f_7)
	{
		case 0:
			func_231();
			break;
		case 1:
			func_232();
			break;
		case 3:
			func_233();
			break;
		case 5:
			func_234();
			break;
		case 6:
			func_235();
			break;
		case 4:
			func_236();
			break;
		case 7:
			func_237();
			break;
		case 8:
			func_238();
			break;
		case 9:
			func_239();
			break;
		case 11:
			func_240();
			break;
		case 10:
			func_241();
			break;
		case 12:
			func_242();
			break;
		case 13:
			func_243();
			break;
		case 14:
			func_244();
			break;
	}
	return false;
}

void func_132()
{
}

bool func_133()
{
	iVar0 = func_173(0);
	if ((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || func_245(iVar0, 518218985))
	{
		return true;
	}
	return false;
}

void func_134(int iParam0)
{
	if (func_63(iParam0))
	{
		func_246(&(Local_303.f_7), iParam0);
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)
{
	if (!func_168(iParam0))
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_248(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_249(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_136(int iParam0)
{
	if (!func_63(iParam0))
	{
		func_214(&(Local_303.f_7), iParam0);
	}
}

void func_137(int iParam0)
{
	if (func_167(&(Local_78[participant_id_to_int()]), iParam0))
	{
		func_246(Local_78[participant_id_to_int()], iParam0);
	}
}

void func_138(int iParam0)
{
	if (!func_121(iParam0, 255))
	{
		func_214(Local_78[participant_id_to_int()], iParam0);
	}
}

void func_139()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_250(iVar0);
				break;
			case -1315570756:
				func_251(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_252(iVar0);
		iVar0++;
	}
}

void func_140(int iParam0)
{
	if (Local_303.f_8 != iParam0)
	{
		Local_303.f_8 = iParam0;
	}
}

bool func_141()
{
	sVar0 = "ORERW";
	iVar1 = 1;
	if (_does_text_database_exist(sVar0))
	{
		_text_database_request(sVar0);
		if (!_text_database_has_loaded(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!func_254(func_253(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_254(func_255(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!func_254(func_256(iVar4)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		request_anim_dict(func_257(iVar5));
		if (!has_anim_dict_loaded(func_257(iVar5)))
		{
			iVar1 = 0;
		}
		iVar5++;
	}
	return iVar1;
}

bool func_142()
{
	bVar0 = false;
	if (!func_258())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_143(var uParam0)
{
	*uParam0 = 0;
}

void func_144()
{
}

int func_145()
{
	return 1;
}

int func_146()
{
	return 1;
}

int func_147(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_148()
{
	if (!func_63(1))
	{
		func_259(Local_303.f_9);
		func_136(1);
	}
}

void func_149()
{
	func_260();
}

void func_150()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (network_does_network_id_exist(&(Local_13.f_7.f_1[iVar0])))
		{
			Local_303.f_19.f_1[iVar0]->f_1 = net_to_ped(&(Local_13.f_7.f_1[iVar0]));
			iVar1 = func_173(iVar0);
			if (network_has_control_of_entity(iVar1))
			{
				switch (func_221())
				{
					case 0:
					case 1:
						switch (iVar0)
						{
							case 0:
								set_blocking_of_non_temporary_events(iVar1, true);
								remove_all_ped_weapons(iVar1, true, true);
								break;
						}
						break;
					case 2:
					case 3:
						switch (iVar0)
						{
							case 0:
								set_blocking_of_non_temporary_events(iVar1, true);
								remove_all_ped_weapons(iVar1, true, true);
								break;
							case 1:
								set_ped_can_be_knocked_off_vehicle(iVar1, 1);
								set_ped_flee_attributes(iVar1, 2, false);
								break;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (network_does_network_id_exist(&(Local_13.f_7.f_6[iVar2])))
		{
			Local_303.f_19.f_13[iVar2] = net_to_obj(&(Local_13.f_7.f_6[iVar2]));
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (network_does_network_id_exist(&(Local_13.f_7.f_4[iVar3])))
		{
			Local_303.f_19.f_10[iVar3]->f_1 = net_to_veh(&(Local_13.f_7.f_4[iVar3]));
			iVar4 = func_171(iVar3);
			switch (iVar3)
			{
				case 0:
					if (does_entity_exist(iVar4))
					{
						if (network_has_control_of_entity(iVar4))
						{
							set_entity_heading(iVar4, func_261(iVar3));
							if (network_has_control_of_entity(&(Local_303.f_19.f_13[0])))
							{
								func_263(&(Local_303.f_19.f_13[0]), iVar4, func_262(iVar3), 0f, 0f, 90f, 0, 1, 0);
								if (get_clock_hours() >= 21 || get_clock_hours() < 6)
								{
									_0xebdc12861d079aba(&(Local_303.f_19.f_13[0]), 1);
									_set_lights_intensity_for_entity(&(Local_303.f_19.f_13[0]), 10f);
								}
							}
							if (does_entity_exist(&(Local_303.f_19.f_13[1])) && network_has_control_of_entity(&(Local_303.f_19.f_13[1])))
							{
								func_263(&(Local_303.f_19.f_13[1]), iVar4, func_264(iVar3), 0f, 0f, 0f, 0, 1, 0);
							}
						}
						_0xcbf88256e44d5d39(iVar4, 1);
						_0xc325a6baa62cf8a2(iVar4, 1);
						_0x13f138225c202f66(iVar4, 3);
						_0xba8818212633500a(iVar4, 12, 1);
					}
					break;
			}
		}
		iVar3++;
	}
	func_265();
}

void func_151()
{
}

void func_152()
{
}

void func_153()
{
	if (func_216(Local_303.f_15))
	{
		return;
	}
	if (func_266())
	{
		return;
	}
	if (func_267(Local_303.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_303.f_15);
		if (fVar0 < 200f)
		{
			func_138(4096);
		}
		else if (fVar0 < 400f)
		{
			func_137(4096);
			func_138(2048);
		}
		else
		{
			func_137(4096);
			func_137(2048);
		}
	}
}

void func_154()
{
	func_268();
	func_269();
	func_270();
}

void func_155()
{
	if (func_271())
	{
		func_138(8);
	}
	else
	{
		func_137(8);
	}
}

void func_156()
{
	func_272();
	func_273();
	func_274(Local_13.f_7);
	func_275();
	func_276();
	switch (Local_303.f_19)
	{
		case 0:
			func_277();
			break;
		case 1:
			func_278();
			break;
		case 3:
			func_279();
			break;
		case 6:
			func_280();
			break;
		case 5:
			func_281();
			break;
		case 4:
			func_282();
			break;
		case 7:
			func_283();
			break;
		case 8:
			func_284();
			break;
		case 9:
			func_285();
			break;
		case 11:
			func_286();
			break;
		case 10:
			func_287();
			break;
		case 12:
			func_288();
			break;
		case 13:
			func_289();
			break;
		case 14:
			func_290();
			break;
	}
}

void func_157()
{
	if (!func_121(8, 255))
	{
		func_138(16);
	}
	else
	{
		func_137(16);
	}
}

void func_158()
{
	Local_303.f_6 = -1;
	Local_303.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_303.f_5 = (Local_303.f_5 || Local_78[iVar0]) // PointerArith;
			Local_303.f_6 = (Local_303.f_6 && Local_78[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_159()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			set_entity_invincible(func_173(1), false);
		}
		func_174(iVar0);
		if (network_does_network_id_exist(&(Local_13.f_7.f_1[iVar0])) && network_has_control_of_network_id(&(Local_13.f_7.f_1[iVar0])))
		{
			set_ped_keep_task(func_173(iVar0), true);
			if (iVar0 != 0 || !is_ped_fleeing(func_173(iVar0)))
			{
				iVar1 = net_to_ent(&(Local_13.f_7.f_1[iVar0]));
				set_entity_as_no_longer_needed(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_175(iVar2);
		if (network_does_network_id_exist(&(Local_13.f_7.f_4[iVar2])) && network_has_control_of_network_id(&(Local_13.f_7.f_4[iVar2])))
		{
			iVar3 = net_to_ent(&(Local_13.f_7.f_4[iVar2]));
			set_entity_as_no_longer_needed(&iVar3);
		}
		iVar0++;
	}
	func_170(0, 1);
	return true;
}

void func_160()
{
}

void func_161(int iParam0)
{
	if (does_blip_exist(Local_303.f_194.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_303.f_194.f_7[iParam0]->f_1));
	}
}

bool func_162(int iParam0, int iParam1)
{
	return func_167(Local_303.f_194.f_7[iParam0]->f_2, iParam1);
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_164(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_292(func_291(Param0));
	iVar1 = func_293(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_294(Param0, &Var2);
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

void func_165(int iParam0, int iParam1)
{
	iVar0 = func_295(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_296(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	func_119(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_297(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_298(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_299(iParam0);
			break;
	}
}

bool func_167(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_168(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_169(int iParam0)
{
	return func_167(Local_303.f_19.f_161, iParam0);
}

void func_170(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (is_player_control_on(player_id()))
		{
			if (bParam1)
			{
				iVar0 = 256;
			}
			set_player_control(player_id(), false, iVar0, false);
			func_300(1);
		}
	}
	else if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
		func_301(1);
	}
}

int func_171(int iParam0)
{
	return Local_303.f_19.f_10[iParam0]->f_1;
}

bool func_172(int iParam0, int iParam1)
{
	if (!func_302(iParam1, 1))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	if (func_167(Local_78[iParam1]->f_1, iParam0))
	{
		return true;
	}
	return false;
}

int func_173(int iParam0)
{
	return Local_303.f_19.f_1[iParam0]->f_1;
}

void func_174(int iParam0)
{
	if (!does_blip_exist(&(Local_303.f_19.f_1[iParam0])))
	{
		return;
	}
	remove_blip(Local_303.f_19.f_1[iParam0]);
}

void func_175(int iParam0)
{
	if (!does_blip_exist(&(Local_303.f_19.f_10[iParam0])))
	{
		return;
	}
	remove_blip(Local_303.f_19.f_10[iParam0]);
}

bool func_176(var uParam0)
{
	if (func_37(*uParam0))
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

int func_177(var uParam0, int iParam1)
{
	iVar0 = func_303(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_304(iParam1)) - 1);
	}
	bVar2 = func_37(*uParam0);
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

void func_178(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_305(uParam0);
			break;
		case 1:
			func_305(uParam0);
			break;
		case 2:
			func_305(uParam0);
			break;
		case 3:
			func_306(uParam0);
			break;
		case 4:
			func_305(uParam0);
			break;
		case 5:
			func_305(uParam0);
			break;
		case 6:
			func_306(uParam0);
			break;
		case 7:
			func_306(uParam0);
			break;
		case 8:
			func_306(uParam0);
			break;
		case 9:
			func_305(uParam0);
			break;
		default:
			func_180(uParam0);
			func_179(uParam0);
			break;
	}
}

void func_179(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_182(uParam0, iVar0);
		iVar0++;
	}
}

void func_180(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_181(uParam0, iVar0);
		iVar0++;
	}
}

void func_181(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_182(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_183(var uParam0, int iParam1)
{
	func_248(&(uParam0->f_25), iParam1);
}

void func_184(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			break;
		case 1:
		case 2:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			break;
		case 8:
			func_182(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_182(uParam0, 1);
			break;
		default:
			func_179(uParam0);
			break;
	}
}

void func_185(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_307(uParam0);
			break;
		case 1:
			func_308(uParam0);
			break;
		case 2:
			func_309(uParam0);
			break;
		case 3:
			func_310(uParam0);
			break;
		default:
			func_180(uParam0);
			func_179(uParam0);
			break;
	}
}

Vector3 func_186(int iParam0)
{
	if (!func_168(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_187(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_311(uParam0);
			break;
		case 1:
		case 2:
			func_312(uParam0);
			break;
		case 3:
		case 4:
			func_313(uParam0);
			break;
		default:
			func_179(uParam0);
			break;
	}
	func_180(uParam0);
}

void func_188(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			break;
		case 1:
			func_182(uParam0, 1);
			func_182(uParam0, 3);
			break;
		default:
			func_180(uParam0);
			func_179(uParam0);
			break;
	}
}

void func_189(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_181(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_181(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_181(uParam0, 0);
			break;
		default:
			func_181(uParam0, 0);
			break;
	}
	func_179(uParam0);
}

void func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_181(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_181(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_181(uParam0, 2);
			break;
		default:
			func_180(uParam0);
			break;
	}
	func_179(uParam0);
}

void func_191(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_181(uParam0, 0);
			func_182(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_181(uParam0, 1);
			func_182(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_181(uParam0, 2);
			func_182(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_181(uParam0, 3);
			func_182(uParam0, 0);
			break;
	}
}

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_181(uParam0, 0);
			func_182(uParam0, 0);
			break;
		case 2:
			func_181(uParam0, 1);
			func_182(uParam0, 0);
			break;
		case 3:
		case 4:
			func_181(uParam0, 2);
			func_182(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_181(uParam0, 3);
			func_182(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_181(uParam0, 4);
			func_182(uParam0, 1);
			break;
	}
}

void func_193(var uParam0, int iParam1)
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
			func_181(uParam0, 3);
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
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			break;
		default:
			func_180(uParam0);
			break;
	}
	func_179(uParam0);
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
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_181(uParam0, 3);
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
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			break;
		default:
			func_180(uParam0);
			break;
	}
	func_179(uParam0);
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_182(uParam0, 0);
			func_181(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 1);
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			func_181(uParam0, 2);
			break;
		default:
			func_182(uParam0, 0);
			func_181(uParam0, 0);
			break;
	}
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_182(uParam0, 0);
			func_181(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 1);
			func_181(uParam0, 0);
			func_181(uParam0, 1);
			break;
		default:
			func_182(uParam0, 0);
			func_181(uParam0, 0);
			break;
	}
}

void func_197(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_179(uParam0);
			func_180(uParam0);
			break;
		default:
			func_179(uParam0);
			func_180(uParam0);
			break;
	}
}

int func_198(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_199(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_200(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_201(int iParam0, int iParam1)
{
	if (func_314(&Var1, iParam0) && func_315(&Var1, iParam1))
	{
		func_316(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_202(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_314(&Var1, iParam0) && func_315(&Var1, iParam1))
	{
		func_316(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_317(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_204(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_317(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_205(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(&(uParam0->f_2), 16384);
	}
	else
	{
		func_214(&(uParam0->f_2), 16384);
	}
}

void func_206(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(&(uParam0->f_2), 2048);
	}
	else
	{
		func_214(&(uParam0->f_2), 2048);
	}
}

void func_207(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(&(uParam0->f_2), 256);
	}
	else
	{
		func_214(&(uParam0->f_2), 256);
	}
}

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_214(uParam0, 16);
	}
	else
	{
		func_246(uParam0, 67108864);
		func_246(uParam0, 16);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(&(uParam0->f_2), 128);
	}
	else
	{
		func_214(&(uParam0->f_2), 128);
	}
}

void func_210(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_214(uParam0, 256);
	}
	else
	{
		func_246(uParam0, 256);
	}
}

void func_211(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_214(uParam0, 268435456);
	}
	else
	{
		func_246(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_214(uParam0, 1073741824);
	}
	else
	{
		func_246(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_214(uParam0, 536870912);
	}
	else
	{
		func_246(uParam0, 536870912);
	}
}

int func_212()
{
	uVar0 = func_318();
	return uVar0;
}

bool func_213(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_215(int iParam0)
{
	if (!func_168(iParam0))
	{
		return false;
	}
	iVar0 = func_319(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_216(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_217(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_218(struct<31> Param0)
{
	func_217(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_219(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_302(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_220(int iParam0, var uParam1)
{
	if (!can_register_mission_vehicles(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_321(Local_13.f_7.f_4[iParam0], func_255(iParam0), func_320(iParam0), func_261(iParam0), 1, 0, 0, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_221()
{
	return func_322();
}

int func_222(int iParam0, var uParam1)
{
	if (!can_register_mission_objects(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_323(Local_13.f_7.f_6[iParam0], func_256(iParam0), func_320(0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_223(int iParam0, var uParam1)
{
	if (!can_register_mission_peds(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_326(Local_13.f_7.f_1[iParam0], func_253(iParam0), func_324(iParam0), func_325(iParam0), 1, 0, 0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_224()
{
	func_116(2);
}

bool func_225(var uParam0)
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
	while (iVar2 < 2)
	{
		if (func_162(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_327(iVar2, uParam0, &bVar1))
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
			if (func_328(iVar2))
			{
				if (network_does_network_id_exist(&(Local_13.f_62[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_13.f_62[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_13.f_62[iVar2]));
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

bool func_226(int iParam0)
{
	return func_167(Local_303.f_5, iParam0);
}

bool func_227(int iParam0)
{
	return func_167(Local_303.f_6, iParam0);
}

bool func_228()
{
	if (Local_13.f_7 == 15)
	{
		return true;
	}
	return false;
}

void func_229()
{
	if (func_329())
	{
		if (Local_13.f_7 != 14)
		{
			_0x36559148b78853b3(1, 0, 0);
			func_330(14);
		}
	}
	if (func_331(4096))
	{
		func_330(14);
	}
}

void func_230()
{
	iVar0 = func_171(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	func_332(vVar1);
}

void func_231()
{
	if (func_266())
	{
		switch (func_221())
		{
			case 0:
			case 1:
				func_330(1);
				break;
			case 2:
			case 3:
				func_330(1);
				break;
			default:
				func_330(12);
				break;
		}
	}
}

void func_232()
{
	if (func_331(1) || func_331(2))
	{
		func_330(3);
	}
	if (func_331(16))
	{
		func_330(4);
	}
}

void func_233()
{
	func_333();
	func_334(0, func_171(0), 10f, 1, 0);
	if (!func_331(16))
	{
		if (func_331(2))
		{
			if (func_335(&(Local_303.f_19.f_55)))
			{
				func_336(&(Local_303.f_19.f_55));
			}
			if (func_335(&(Local_303.f_19.f_58)))
			{
				func_336(&(Local_303.f_19.f_58));
			}
			func_330(5);
		}
	}
	else
	{
		if (func_335(&(Local_303.f_19.f_55)))
		{
			func_336(&(Local_303.f_19.f_55));
		}
		if (func_335(&(Local_303.f_19.f_58)))
		{
			func_336(&(Local_303.f_19.f_58));
		}
		func_330(4);
	}
}

void func_234()
{
	func_334(0, func_171(0), 10f, 1, 0);
	if (!func_331(16))
	{
		if (func_331(4))
		{
			func_330(6);
		}
	}
	else
	{
		if (func_335(&(Local_303.f_19.f_55)))
		{
			func_336(&(Local_303.f_19.f_55));
		}
		if (func_335(&(Local_303.f_19.f_58)))
		{
			func_336(&(Local_303.f_19.f_58));
		}
		func_330(4);
	}
}

void func_235()
{
	if (Local_303.f_19.f_165 < 30f)
	{
		func_330(7);
	}
	if (func_331(8))
	{
		func_330(14);
	}
	if (func_331(16))
	{
		if (func_335(&(Local_303.f_19.f_55)))
		{
			func_336(&(Local_303.f_19.f_55));
		}
		if (func_335(&(Local_303.f_19.f_58)))
		{
			func_336(&(Local_303.f_19.f_58));
		}
		func_330(4);
	}
}

void func_236()
{
	if (func_331(32768))
	{
		func_330(10);
	}
}

void func_237()
{
	func_330(9);
}

void func_238()
{
	func_330(12);
}

void func_239()
{
	if (func_331(65536) || is_ped_in_vehicle(func_173(0), func_171(0), false))
	{
		func_330(11);
	}
}

void func_240()
{
	if ((func_331(32) && func_331(512)) && func_331(256))
	{
		func_170(0, 1);
		func_330(12);
	}
}

void func_241()
{
	if (func_331(128))
	{
		func_330(13);
	}
}

void func_242()
{
	if (func_337(8192))
	{
		func_330(13);
	}
}

void func_243()
{
	iVar0 = func_173(0);
	iVar1 = func_171(0);
	if (!is_ped_in_vehicle(player_ped_id(), iVar1, false) && !func_338(player_ped_id(), 451360105))
	{
		func_170(0, 1);
	}
	if (does_entity_exist(iVar0))
	{
		if (does_entity_exist(iVar1) && is_vehicle_driveable(iVar1, true, true))
		{
			if (!is_ped_in_vehicle(iVar0, iVar1, false))
			{
				func_330(12);
			}
		}
		else
		{
			func_330(13);
		}
	}
	if (func_331(4096))
	{
		func_330(14);
	}
	if (func_337(1024))
	{
		func_330(15);
	}
}

void func_244()
{
	iVar0 = func_173(0);
	if (is_entity_dead(iVar0) && func_337(4194304))
	{
		if (!does_entity_exist(func_173(1)))
		{
			func_330(15);
		}
		else if (is_entity_dead(func_173(1)) && func_337(8388608))
		{
			func_330(15);
		}
	}
}

bool func_245(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_247(int iParam0)
{
	if (!func_168(iParam0))
	{
		return 0;
	}
	if (!func_215(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_248(var uParam0, int iParam1)
{
	func_339(uParam0, iParam1);
}

void func_249(var uParam0, int iParam1)
{
	func_340(uParam0, iParam1);
}

void func_250(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_341(&Var0, iParam0))
			{
				func_342(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_251(int iParam0)
{
}

void func_252(int iParam0)
{
}

int func_253(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				case 1:
					return -644062535;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				case 1:
					return -99878679;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_254(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_255(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1347283941;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1758092337;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 93893176;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -136833353;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1588362795;
		case 1:
			switch (func_255(0))
			{
				case -1347283941:
					return -779334476;
				case -1758092337:
					return 840935990;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_257(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script_re@arms_deal";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "AMB_REST_SIT@WORLD_HUMAN_SIT_GROUND@FALL_ASLEEP@FEMALE_A@SLEEPING@base";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "AMB_MISC@WORLD_HUMAN_pee@MALE_A@idle_a";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
	}
	return "";
}

bool func_258()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (is_bit_set(Local_303.f_194.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_343(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_303.f_194.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_303.f_194.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_303.f_194.f_3), iVar0);
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

void func_259(struct<2> Param0)
{
	if (func_293(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_293(Param0)))
	{
		_0x99230691875fc218(func_291(Param0), func_293(Param0), Global_35);
	}
}

void func_260()
{
	if (!func_219(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_344(iVar0, iVar1, 0);
		iVar0++;
	}
}

float func_261(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_262(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (func_255(iParam0))
			{
				case -1758092337:
					return -0.85f, 0.9f, 1.4f;
				case -1347283941:
					return 0.6f, 0.7f, 0.65f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_263(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (is_entity_a_ped(iParam0))
			{
				if (is_ped_on_mount(get_ped_index_from_entity_index(iParam0)))
				{
					_remove_ped_from_mount(get_ped_index_from_entity_index(iParam0), true, false);
				}
			}
			if (!is_entity_attached(iParam0))
			{
				attach_entity_to_entity(iParam0, iParam1, 0, vParam2, vParam5, bParam8, bParam10, false, false, 2, true, bParam9, false);
			}
		}
	}
}

Vector3 func_264(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (func_255(iParam0))
			{
				case -1758092337:
					return 0f, -0.2f, 0.2f;
				case -1347283941:
					return 0f, 0f, 0.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_265()
{
	func_345(0);
	func_347(0, func_346(0));
	if (func_221() == 2 || func_221() == 3)
	{
		func_345(1);
		func_347(1, func_346(1));
	}
	if (func_221() == 2 || func_221() == 3)
	{
		func_347(1, func_346(1));
	}
	else
	{
		set_entity_coords(func_173(0), get_offset_from_entity_in_world_coords(func_171(0), func_348(0)), true, true, true, false);
	}
}

bool func_266()
{
	return (func_122(32) || func_121(32, 255));
}

bool func_267(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_349(iParam0, 1178968787) };
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

void func_268()
{
	func_350();
}

void func_269()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_351(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_270()
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
	if (network_is_in_mp_cutscene() != Local_303.f_194.f_40)
	{
		bVar8 = true;
		Local_303.f_194.f_40 = !Local_303.f_194.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_303.f_194.f_30 >= 2)
		{
			Local_303.f_194.f_30 = 0;
		}
		iVar0 = Local_303.f_194.f_30;
		Local_303.f_194.f_30++;
		iVar9 = func_352(iVar0);
		iVar1 = &Local_303.f_194.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_162(iVar9, 4))
		{
			func_344(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_78[iVar3]->f_2.f_2[iVar0] > -1f)
			{
				Local_78[iVar3]->f_2.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_303.f_194.f_5, iVar0))
			{
				clear_bit(&(Local_303.f_194.f_5), iVar0);
				clear_bit(&(Local_303.f_194.f_6), iVar0);
				clear_bit(&(Local_303.f_194.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_353(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_303.f_194.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_303.f_194.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_303.f_194.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_78[iVar3]->f_2.f_1, iVar0))
				{
					set_bit(&(Local_78[iVar3]->f_2.f_1), iVar0);
				}
				func_354(Local_303.f_194.f_32[iVar0]);
			}
		}
		if (is_bit_set(Local_78[iVar3]->f_2.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_335(Local_303.f_194.f_32[iVar0]) || func_355(Local_303.f_194.f_32[iVar0], 0.5f))))
			{
				func_336(Local_303.f_194.f_32[iVar0]);
				clear_bit(&(Local_78[iVar3]->f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_162(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_303.f_194.f_40, 0, 256);
		}
		if (func_162(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_356(iVar9))
						{
							if (!func_327(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_357(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((_0xb07d3185e11657a5(iVar1) && network_has_control_of_entity(iVar1)) && !func_162(iVar9, 8))
			{
				if (!func_356(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_303.f_194.f_31 != 0)
	{
		if (!func_358(1, 255))
		{
			func_359(1);
		}
	}
	else if (func_358(1, 255))
	{
		func_360(1);
	}
}

bool func_271()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_303.f_14))
	{
		return false;
	}
	if (func_361())
	{
		return false;
	}
	if (func_362(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_272()
{
	Local_303.f_19.f_159 = -1;
	Local_303.f_19.f_160 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_303.f_19.f_160 = (Local_303.f_19.f_160 || Local_78[iVar0]->f_1);
			Local_303.f_19.f_159 = (Local_303.f_19.f_159 && Local_78[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_273()
{
	if (func_329())
	{
		return;
	}
	if (func_363(func_173(0), 0, &(Local_303.f_19.f_18), &(Local_303.f_19.f_50), 0, 0))
	{
		func_364(0);
	}
	func_365();
}

void func_274(int iParam0)
{
	if (Local_303.f_19 != iParam0)
	{
		Local_303.f_19 = iParam0;
	}
}

void func_275()
{
	Local_303.f_19.f_165 = vdist(get_entity_coords(Local_303.f_19.f_1[0]->f_1, false, false), get_entity_coords(Local_303.f_19.f_10[0]->f_1, false, false));
	Local_303.f_19.f_166 = vdist(get_entity_coords(get_player_ped(player_id()), false, false), get_entity_coords(Local_303.f_19.f_1[0]->f_1, false, false));
	if (func_221() == 2 || func_221() == 3)
	{
		Local_303.f_19.f_167 = vdist(get_entity_coords(Local_303.f_19.f_1[1]->f_1, false, false), get_entity_coords(Local_303.f_19.f_10[0]->f_1, false, false));
	}
}

void func_276()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -1315570756:
				func_366(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_277()
{
	iVar1 = func_173(0);
	if (does_entity_exist(iVar1))
	{
		fVar2 = Local_303.f_19.f_166;
		if (fVar2 < 125f)
		{
			func_367();
		}
		if (fVar2 < 45f)
		{
			func_368();
		}
		if (fVar2 < 45f)
		{
			func_368();
		}
		switch (func_221())
		{
			case 2:
			case 3:
				iVar0 = func_173(1);
				if (!is_ped_in_vehicle(iVar0, func_171(0), false))
				{
					set_ped_into_vehicle(iVar0, func_171(0), 1);
				}
				break;
			case 0:
			case 1:
				set_entity_heading(iVar1, func_261(0));
				break;
		}
		if (func_369(iVar1, -2017877118, 1, 0))
		{
			task_play_anim(iVar1, func_257(0), func_370(0), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		}
	}
}

void func_278()
{
	iVar0 = func_173(0);
	iVar1 = get_player_ped(player_id());
	iVar2 = func_171(0);
	if (does_entity_exist(iVar0) && does_entity_exist(iVar2))
	{
		fVar3 = get_entity_speed(iVar2);
		if (fVar3 > 1f)
		{
			func_333();
			func_371(0, 0);
			if (is_ped_in_vehicle(iVar1, iVar2, false))
			{
				func_372(2);
			}
			if (!func_331(1))
			{
				if (func_221() == 2 || func_221() == 3)
				{
					func_373(func_173(1), 5, 1);
				}
				if (func_334(0, iVar2, 8f, 1, 0))
				{
					func_372(1);
				}
			}
			if (func_374(0, 0))
			{
				func_372(16);
			}
		}
		else if (fVar3 <= 0f)
		{
			if (does_entity_exist(iVar2) && is_vehicle_driveable(iVar2, true, true))
			{
				_task_vehicle_drive_to_point_2(iVar2, func_375(0), func_376(), 0.25f, 0);
				Local_303.f_19.f_163 = add_shocking_event_for_entity(1271374678, iVar2, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			}
		}
	}
}

void func_279()
{
	iVar0 = get_player_ped(player_id());
	iVar1 = func_171(0);
	func_333();
	func_174(0);
	func_371(0, 0);
	if (!func_172(4, 255))
	{
		if (is_vehicle_driveable(iVar1, true, true))
		{
			if (func_331(2))
			{
				func_377();
			}
			if (!func_374(0, 0) && is_ped_in_vehicle(iVar0, iVar1, false))
			{
				if (!func_172(2, 255))
				{
					func_372(2);
				}
			}
			if (Local_303.f_19.f_166 > 20f && !func_172(16384, 255))
			{
				func_372(16384);
			}
		}
		else
		{
			func_377();
			func_372(16);
		}
	}
}

void func_280()
{
	iVar0 = func_173(1);
	iVar1 = get_player_ped(player_id());
	if (is_vehicle_driveable(func_171(0), true, true))
	{
		func_378(0, 0);
		func_175(0);
		if (!func_331(4))
		{
			func_374(0, 0);
		}
		else if (func_169(4))
		{
			if (!func_169(8))
			{
				func_380(func_379(-1892463704, -400839231), 1);
				func_300(8);
			}
		}
	}
	else if (!func_331(16))
	{
		func_377();
		func_372(16);
	}
	if (!func_172(2048, 255) && is_ped_in_vehicle(iVar1, func_171(0), false))
	{
		switch (func_221())
		{
			case 0:
			case 1:
				Local_303.f_19.f_164 = func_381("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
			case 2:
			case 3:
				Local_303.f_19.f_164 = func_381("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_COACH", 10000, 0, 0, 0, 1);
				break;
			default:
				Local_303.f_19.f_164 = func_381("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
		}
		func_372(2048);
	}
	if (func_221() == 2 || func_221() == 3)
	{
		if (func_335(&(Local_303.f_19.f_58)) && (func_382(&(Local_303.f_19.f_58)) > 15000 || (!func_383(18) && func_382(&(Local_303.f_19.f_58)) > 2000)))
		{
			if (!func_384(1))
			{
				if (!func_383(18))
				{
					if (func_385(iVar0, iVar1, 18, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(19))
				{
					if (func_385(iVar0, iVar1, 19, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(20))
				{
					if (func_385(iVar0, iVar1, 20, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(21))
				{
					if (func_385(iVar0, iVar1, 21, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(22))
				{
					if (func_385(iVar0, iVar1, 22, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(23))
				{
					if (func_385(iVar0, iVar1, 23, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(24))
				{
					if (func_385(iVar0, iVar1, 24, 291934926, 0))
					{
						func_354(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_383(25))
				{
					func_385(iVar0, iVar1, 25, 291934926, 0);
				}
			}
			if (func_383(25) && func_382(&(Local_303.f_19.f_58)) > 17500)
			{
				if (!func_172(8, 255))
				{
					func_372(8);
					func_336(&(Local_303.f_19.f_58));
				}
			}
		}
		else if (!func_335(&(Local_303.f_19.f_58)))
		{
			func_386(&(Local_303.f_19.f_58), 0);
		}
	}
}

void func_281()
{
	iVar0 = func_173(1);
	iVar1 = get_player_ped(player_id());
	iVar2 = func_171(0);
	func_333();
	if (!func_172(4, 255))
	{
		if (!func_383(15))
		{
			_0x36559148b78853b3(1, 0, 0);
			if (func_385(iVar0, iVar1, 15, 291934926, 0))
			{
				func_354(&(Local_303.f_19.f_58));
			}
		}
		if (is_vehicle_driveable(iVar2, true, true))
		{
			if (!func_331(4))
			{
				func_374(0, 0);
			}
			if (is_ped_in_vehicle(iVar1, iVar2, false))
			{
				if (get_ped_in_vehicle_seat(iVar2, -1) == iVar1 && !func_172(4, 255))
				{
					func_372(4);
				}
			}
		}
		else
		{
			func_377();
			func_372(16);
		}
	}
}

void func_282()
{
	iVar0 = func_173(0);
	iVar1 = get_player_ped(player_id());
	func_374(0, 1);
	func_387();
	func_62();
	if (Local_303.f_19.f_165 < 45f)
	{
		if (func_369(iVar0, -2017877118, 1, 0) && !is_entity_playing_anim(iVar0, func_257(4), func_370(4), 1))
		{
			task_play_upper_anim_facing_entity(iVar0, func_257(4), func_370(4), iVar1, -1, 8f, -8f, 1, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
	func_174(0);
	func_175(0);
	if (Local_303.f_19.f_166 < 30f && !func_172(32768, 255))
	{
		func_372(32768);
	}
	switch (func_221())
	{
		case 2:
		case 3:
			iVar2 = func_173(1);
			if (!is_entity_dead(iVar2) && !is_vehicle_driveable(func_171(0), false, false))
			{
				switch (func_212())
				{
					case 7:
						if (!is_entity_dead(iVar2))
						{
							func_388(iVar2, 0, 0);
						}
						break;
					default:
						if (!func_172(16777216, 255))
						{
							clear_sequence_task(&(Local_303.f_19.f_174));
							_0x23767d80c7eed7c6(&(Local_303.f_19.f_174), 1085044014);
							task_leave_any_vehicle(0, 0, 64);
							task_walk_away(0, iVar0);
							task_wander_standard(0, 40000f, 1);
							close_sequence_task(Local_303.f_19.f_174);
							func_372(16777216);
						}
						else if (func_337(16777216) && !func_169(16))
						{
							if (func_369(iVar2, 242628503, 1, 0) && !func_384(1))
							{
								func_385(iVar2, iVar0, 36, 291934926, 0);
								task_perform_sequence(iVar2, Local_303.f_19.f_174);
								if (!func_335(&(Local_303.f_19.f_171)))
								{
									func_386(&(Local_303.f_19.f_171), 0);
								}
								func_300(16);
							}
						}
						break;
				}
			}
			break;
	}
}

void func_283()
{
}

void func_284()
{
}

void func_285()
{
	iVar0 = func_173(0);
	iVar1 = func_171(0);
	func_175(0);
	if (!func_383(8))
	{
		_0x36559148b78853b3(1, 0, 0);
		func_385(iVar0, get_player_ped(player_id()), 8, 291934926, 0);
	}
	if (!func_331(65536))
	{
		if (func_221() != 0)
		{
			if (func_369(iVar0, -1794415470, 1, 0))
			{
				task_enter_vehicle(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
				func_372(65536);
			}
		}
		else if (func_369(iVar0, -2015108952, 1, 0))
		{
			task_goto_entity_offset(iVar0, iVar1, -1, 0.5f, 0f, 1.5f, 0);
			func_372(65536);
		}
	}
	switch (func_221())
	{
		case 2:
		case 3:
			if ((!is_entity_dead(func_173(1)) && !is_vehicle_driveable(iVar1, false, false)) && get_entity_speed(iVar1) <= 0f)
			{
				if (!func_331(131072))
				{
					if (!func_172(33554432, 255))
					{
						clear_sequence_task(&(Local_303.f_19.f_174));
						_0x23767d80c7eed7c6(&(Local_303.f_19.f_174), 1654838428);
						task_leave_any_vehicle(0, 0, 64);
						task_walk_away(0, iVar0);
						task_wander_standard(0, 40000f, 0);
						close_sequence_task(Local_303.f_19.f_174);
						func_372(33554432);
					}
					else if (func_337(33554432))
					{
						if (func_369(func_173(1), 242628503, 1, 0))
						{
							task_perform_sequence(func_173(1), Local_303.f_19.f_174);
							func_385(func_173(1), iVar0, 36, 291934926, 0);
							func_372(131072);
						}
					}
				}
			}
			break;
	}
}

void func_286()
{
	iVar0 = func_173(0);
	iVar1 = func_171(0);
	iVar2 = func_173(1);
	iVar3 = get_player_ped(player_id());
	func_175(0);
	if (!is_ped_in_vehicle(iVar3, iVar1, false) && !func_338(iVar3, 451360105))
	{
		func_170(0, 1);
	}
	if (func_331(32))
	{
		func_389();
		func_62();
	}
	if (is_ped_in_vehicle(iVar0, iVar1, false))
	{
		func_174(0);
		if (is_ped_in_vehicle(iVar3, iVar1, false))
		{
			func_170(1, 1);
			if (!func_335(&(Local_303.f_19.f_55)))
			{
				func_386(&(Local_303.f_19.f_55), 0);
			}
			else if (func_382(&(Local_303.f_19.f_55)) >= 2000)
			{
				if (!func_172(256, 255))
				{
					if (func_369(iVar3, 451360105, 1, 0))
					{
						task_leave_vehicle(iVar3, iVar1, 1, 0);
						func_372(256);
					}
				}
				else if (!func_172(32, 255))
				{
					func_390();
				}
			}
		}
		else
		{
			if (get_ped_in_vehicle_seat(iVar1, -1) != iVar0)
			{
				if (func_369(iVar0, 355471868, 1, 0))
				{
					task_shuffle_to_next_vehicle_seat(iVar0, iVar1);
				}
			}
			else if (!func_172(32, 255))
			{
				_0xba8818212633500a(iVar1, 6, 0);
				func_390();
			}
			func_372(256);
		}
	}
	else
	{
		set_ped_relationship_group_hash(iVar0, get_ped_relationship_group_hash(iVar3));
		if ((get_entity_speed(iVar1) <= 0.1f && get_ped_in_vehicle_seat(iVar1, 0) == iVar3) && func_338(iVar0, -1794415470))
		{
			if (!_0x660639bc60157048(iVar3, iVar1) && !func_338(iVar3, 451360105))
			{
				if (is_player_control_on(player_id()))
				{
					func_170(1, 1);
				}
				else
				{
					task_leave_vehicle(iVar3, iVar1, 65, 0);
				}
			}
		}
		if (func_221() == 0)
		{
			if (get_entity_speed(iVar1) <= 0.1f && func_391(iVar3, iVar0, 5f, 1, 1))
			{
				if (is_ped_in_vehicle(iVar3, iVar1, false))
				{
					if (is_player_control_on(player_id()))
					{
						func_170(1, 1);
						func_392(256);
					}
					else if (!func_172(256, 255))
					{
						task_leave_vehicle(iVar3, iVar1, 65, 0);
						func_372(256);
					}
				}
				else
				{
					_0xba8818212633500a(iVar1, 6, 1);
					if (func_369(iVar0, -1794415470, 1, 0))
					{
						task_enter_vehicle(iVar0, iVar1, -1, -1, 1.5f, 8388673, 0);
					}
				}
			}
		}
		else if (func_369(iVar0, -1794415470, 1, 0))
		{
			task_enter_vehicle(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
		}
	}
	switch (func_221())
	{
		case 0:
		case 1:
			if (is_ped_in_vehicle(iVar0, iVar1, false) && !func_331(512))
			{
				if (!_0x54b187f111d9c6f8(iVar0, 1))
				{
					func_385(iVar0, iVar3, 33, 291934926, 0);
					func_372(512);
				}
			}
			break;
		case 2:
		case 3:
			if (!func_384(1))
			{
				if (!func_383(26))
				{
					func_385(iVar2, iVar0, 26, 291934926, 0);
				}
				else if (is_ped_in_vehicle(iVar0, iVar1, false) && !func_172(512, 255))
				{
					if (!_0x54b187f111d9c6f8(iVar0, 1))
					{
						func_385(iVar0, iVar3, 33, 291934926, 0);
						func_372(512);
					}
				}
			}
			break;
	}
}

void func_287()
{
	iVar0 = func_173(0);
	iVar1 = get_player_ped(player_id());
	if (does_blip_exist(&(Local_303.f_19.f_10[0])))
	{
		remove_blip(Local_303.f_19.f_10[0]);
	}
	func_387();
	if (Local_303.f_19.f_166 <= 20f)
	{
		if (!func_331(128))
		{
			if (!func_384(1))
			{
				if (func_172(16384, 255))
				{
					func_385(iVar0, iVar1, 11, 291934926, 0);
				}
				else
				{
					func_385(iVar0, iVar1, 41, 291934926, 0);
				}
				func_372(128);
			}
		}
	}
	else if (func_331(128))
	{
		if (!func_335(&(Local_303.f_19.f_55)))
		{
			func_354(&(Local_303.f_19.f_55));
		}
		else if (func_382(&(Local_303.f_19.f_55)) > 20000)
		{
			func_372(128);
		}
	}
}

void func_288()
{
	iVar0 = func_173(0);
	iVar1 = func_171(0);
	if (func_169(1))
	{
		func_170(0, 1);
	}
	if (!is_ped_in_vehicle(iVar0, iVar1, false))
	{
		if ((func_369(iVar0, -1794415470, 1, 0) && does_entity_exist(iVar1)) && is_vehicle_driveable(iVar1, true, true))
		{
			task_enter_vehicle(iVar0, iVar1, 20000, -1, 2f, 1, 0);
		}
	}
	else if (get_ped_in_vehicle_seat(iVar1, -1) != iVar0)
	{
		if (func_369(iVar0, 355471868, 1, 0))
		{
			task_shuffle_to_next_vehicle_seat(iVar0, iVar1);
		}
	}
	else if (!func_172(8192, 255))
	{
		if (!is_ped_in_vehicle(get_player_ped(player_id()), iVar1, false))
		{
			if (!func_384(1))
			{
				if (!func_383(9))
				{
					func_385(iVar0, get_player_ped(player_id()), 9, 291934926, 0);
				}
				func_372(8192);
			}
		}
	}
}

void func_289()
{
	iVar0 = func_173(0);
	iVar1 = func_171(0);
	iVar2 = func_173(1);
	iVar3 = get_player_ped(player_id());
	if (func_169(1))
	{
		func_170(0, 1);
	}
	func_387();
	if (!func_172(4096, 255))
	{
		if (is_ped_in_vehicle(iVar3, iVar1, false))
		{
			if (!func_384(1))
			{
				func_385(iVar0, iVar3, 37, 291934926, 0);
				if (does_entity_exist(iVar2))
				{
					func_385(iVar2, iVar3, 38, 291934926, 0);
				}
				func_372(4096);
			}
			else
			{
				_0x36559148b78853b3(1, 0, 0);
			}
		}
		if (does_entity_exist(iVar0))
		{
			if ((does_entity_exist(iVar1) && is_vehicle_driveable(iVar1, true, true)) && is_ped_in_vehicle(iVar0, iVar1, false))
			{
				if (get_ped_in_vehicle_seat(iVar1, -1) == iVar0)
				{
					if (func_369(iVar0, -258271821, 1, 0))
					{
						set_ped_relationship_group_hash(iVar0, -1976316465);
						func_174(0);
						task_vehicle_drive_wander(iVar0, iVar1, 3f, 67633287);
					}
					if (!func_335(&(Local_303.f_19.f_171)) && get_entity_speed(iVar1) > 0f)
					{
						func_386(&(Local_303.f_19.f_171), 0);
					}
				}
				else if (func_369(iVar0, 355471868, 1, 0))
				{
					task_shuffle_to_next_vehicle_seat(iVar0, iVar1);
				}
			}
			else if (func_369(iVar0, -1146898486, 1, 0) && !func_384(1))
			{
				if (!func_383(12))
				{
					func_385(iVar0, iVar3, 12, 291934926, 0);
				}
				func_174(0);
				if (!func_384(1) || func_383(12))
				{
					task_wander_standard(iVar0, 40000f, 0);
					if (!func_335(&(Local_303.f_19.f_171)) && get_entity_speed(iVar1) > 0f)
					{
						func_386(&(Local_303.f_19.f_171), 0);
					}
				}
			}
		}
		switch (func_221())
		{
			case 0:
			case 1:
				if (func_338(iVar0, -258271821))
				{
					if (vdist(get_entity_coords(iVar3, true, false), get_entity_coords(iVar0, true, false)) <= 20f)
					{
						if (get_entity_speed(iVar1) > 0f)
						{
							if (func_335(&(Local_303.f_19.f_171)))
							{
								if (func_382(&(Local_303.f_19.f_171)) >= 15000)
								{
									if (!func_383(13))
									{
										func_385(iVar0, iVar3, 13, 291934926, 0);
										func_354(&(Local_303.f_19.f_171));
									}
									else
									{
										func_372(4096);
									}
								}
							}
						}
					}
					else if (!func_172(1024, 255))
					{
						func_372(1024);
					}
				}
				break;
			case 2:
			case 3:
				if (does_entity_exist(iVar1) && is_vehicle_driveable(iVar1, true, true))
				{
					if (!func_384(1))
					{
						func_385(iVar2, iVar0, 35, 291934926, 0);
						if (!func_384(1))
						{
							if (vdist(get_entity_coords(iVar3, true, false), get_entity_coords(iVar0, true, false)) <= 20f)
							{
								if (get_entity_speed(iVar1) > 0f)
								{
									if (func_335(&(Local_303.f_19.f_171)))
									{
										if (func_382(&(Local_303.f_19.f_171)) >= 15000)
										{
											if (!func_383(13))
											{
												func_385(iVar0, iVar3, 13, 291934926, 0);
												func_354(&(Local_303.f_19.f_171));
											}
											else
											{
												func_372(4096);
											}
										}
									}
								}
							}
							else if (!func_172(1024, 255))
							{
								func_372(1024);
							}
						}
					}
				}
				break;
		}
	}
}

void func_290()
{
	iVar0 = func_173(0);
	iVar1 = func_173(1);
	func_62();
	func_365();
	if (does_entity_exist(func_171(0)))
	{
		_0xba8818212633500a(func_171(0), 6, 0);
	}
	if (func_169(1) && !is_player_control_on(player_id()))
	{
		func_170(0, 1);
	}
	func_175(0);
	if (!func_331(64))
	{
		if (func_121(64, 255))
		{
			if (func_331(32))
			{
				func_393(-1315007749, 1, 0);
			}
			func_393(-1315007749, 1, 0);
			func_372(64);
		}
	}
	if (!func_331(262144) && _0xa2cac9def0195e6f(1))
	{
		_0x36559148b78853b3(1, 0, 0);
	}
	switch (func_221())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_174(0);
			if (does_entity_exist(iVar1))
			{
				if (func_394(&(Local_303.f_19.f_18)) == iVar1 || func_172(16, 255))
				{
					if (is_ped_in_vehicle(iVar1, func_171(0), false))
					{
						func_385(iVar1, get_player_ped(player_id()), 40, 291934926, 0);
					}
					else
					{
						func_385(iVar1, get_player_ped(player_id()), 39, 291934926, 0);
					}
				}
				if (is_ped_in_vehicle(iVar1, func_171(0), false))
				{
					if (func_369(iVar1, -828834893, 1, 0))
					{
						task_leave_any_vehicle(iVar1, 0, 64);
					}
				}
				else if (func_369(iVar1, 518218985, 1, 0))
				{
					_task_smart_flee_style_coord(iVar1, get_entity_coords(iVar1, false, false), 3, 131072, -1082130432, -1, 0);
					set_ped_keep_task(iVar1, true);
				}
			}
			if (!func_331(262144))
			{
				if ((!func_172(262144, 255) && func_331(2097152)) && does_entity_exist(func_395(func_171(0), 4)))
				{
					if (is_entity_dead(func_395(func_171(0), 4)) && func_396(func_395(func_171(0), 4), player_ped_id()))
					{
						func_385(iVar0, get_player_ped(player_id()), 32, 291934926, 0);
						func_372(262144);
					}
					if (!func_172(262144, 255) && has_entity_been_damaged_by_entity(func_395(func_171(0), 4), get_player_ped(player_id()), 1, 1))
					{
						func_385(iVar0, get_player_ped(player_id()), 31, 291934926, 0);
						func_372(262144);
					}
				}
				if ((!func_172(262144, 255) && func_331(2097152)) && does_entity_exist(func_395(func_171(0), 5)))
				{
					if (is_entity_dead(func_395(func_171(0), 5)) && func_396(func_395(func_171(0), 5), player_ped_id()))
					{
						func_385(iVar0, get_player_ped(player_id()), 32, 291934926, 0);
						func_372(262144);
					}
					if (!func_172(262144, 255) && has_entity_been_damaged_by_entity(func_395(func_171(0), 5), get_player_ped(player_id()), 1, 1))
					{
						func_385(iVar0, get_player_ped(player_id()), 31, 291934926, 0);
						func_372(262144);
					}
				}
				if (func_331(1048576))
				{
					if (is_vehicle_driveable(func_171(0), false, false))
					{
						func_385(iVar0, get_player_ped(player_id()), 29, 291934926, 0);
						func_372(262144);
					}
					else
					{
						func_385(iVar0, get_player_ped(player_id()), 30, 291934926, 0);
						func_372(262144);
					}
				}
				if (!func_172(262144, 255))
				{
					if (Local_303.f_19.f_50 == 4 && is_ped_in_vehicle(iVar0, func_171(0), false))
					{
					}
					else
					{
						func_385(iVar0, get_player_ped(player_id()), 28, 291934926, 0);
						func_372(262144);
					}
				}
			}
			if (func_369(iVar0, 518218985, 1, 0))
			{
				_task_smart_flee_style_coord(iVar0, get_entity_coords(iVar0, false, false), 3, 0, -1082130432, -1, 0);
				set_ped_keep_task(iVar0, true);
			}
			break;
		default:
			func_378(0, 942020339);
			if (func_369(iVar0, -2117564886, 1, 0))
			{
				task_combat_hated_targets(iVar0, -1f);
			}
			break;
	}
}

int func_291(var uParam0, var uParam1)
{
	return uParam0;
}

int func_292(int iParam0)
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

int func_293(struct<2> Param0)
{
	return func_397(Param0);
}

void func_294(struct<2> Param0, var uParam2)
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
	switch (func_291(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_399(func_398(Param0));
			iVar5 = func_400(iVar4);
			if (!func_401(iVar5, 0))
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

int func_295(int iParam0, int iParam1)
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

void func_296(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_402(&Var0);
}

var func_297(int iParam0)
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

var func_298(int iParam0)
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

var func_299(int iParam0)
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

void func_300(int iParam0)
{
	func_214(&(Local_303.f_19.f_161), iParam0);
}

void func_301(int iParam0)
{
	func_246(&(Local_303.f_19.f_161), iParam0);
}

bool func_302(int iParam0, bool bParam1)
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

int func_303(int iParam0)
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

int func_304(int iParam0)
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

void func_305(var uParam0)
{
	func_181(uParam0, 0);
	func_181(uParam0, 1);
	func_181(uParam0, 3);
	func_179(uParam0);
}

void func_306(var uParam0)
{
	func_180(uParam0);
	func_403(uParam0, 0, 3);
}

void func_307(var uParam0)
{
	func_181(uParam0, 0);
	func_182(uParam0, 0);
	func_182(uParam0, 1);
	func_182(uParam0, 2);
}

void func_308(var uParam0)
{
	func_181(uParam0, 1);
	func_179(uParam0);
}

void func_309(var uParam0)
{
	func_181(uParam0, 2);
	func_182(uParam0, 3);
}

void func_310(var uParam0)
{
	func_181(uParam0, 3);
	func_182(uParam0, 4);
}

void func_311(var uParam0)
{
	func_182(uParam0, 0);
	func_182(uParam0, 1);
}

void func_312(var uParam0)
{
	func_182(uParam0, 2);
	func_182(uParam0, 3);
}

void func_313(var uParam0)
{
	func_182(uParam0, 4);
	func_182(uParam0, 5);
}

bool func_314(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_315(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_316(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_317(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

var func_318()
{
	return Local_303.f_2;
}

int func_319(int iParam0)
{
	if (!func_168(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

Vector3 func_320(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_321(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_254(iParam1))
	{
		return false;
	}
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (func_404(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_405(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && _0xb9d5bdda88e1bb66(iParam1))
	{
		*uParam0 = veh_to_net(_create_draft_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = veh_to_net(create_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

var func_322()
{
	return Local_303.f_3;
}

bool func_323(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_254(iParam1))
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

Vector3 func_324(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return get_offset_from_entity_in_world_coords(func_171(0), func_348(0));
				default:
					break;
			}
			break;
		case 2:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.194f, 416.5319f, 107.9176f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1459.162f, -816.478f, 50.8f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1067.848f, -660.8389f, 73.9091f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1478.645f, -1927.927f, 50.5109f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4978.948f, -3935.828f, -1.20681f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2792.854f, -2917.176f, 64.91064f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.247f, -1835.006f, 60.02811f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.842f, -567.6793f, 151.3843f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 779.8277f, -555.053f, 81.8032f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1789.877f, -1720.11f, 47.22703f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.25f, 416.0489f, 107.922f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1457.417f, -815.7565f, 51.4422f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1069.886f, -700.0854f, 69.16559f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1481.92f, -1931.187f, 50.5561f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4973.871f, -3908.567f, -0.00444f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2794.634f, -2913.186f, 64.5452f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.337f, -1834.095f, 60.10693f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.747f, -568.5468f, 151.2257f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 788.1982f, -572.1707f, 76.62916f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1791.243f, -1721.538f, 46.98846f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_325(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 185.2506f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 354.0873f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 345.4393f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 349.1927f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 314.2285f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 293.9746f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 330.3398f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 230.5268f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 193.5557f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 94.6824f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 8.2937f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 267.2346f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 331.738f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

bool func_326(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_254(iParam1))
	{
		return false;
	}
	iVar0 = func_406(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

bool func_327(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_303.f_15 };
	iVar7 = 0;
	iVar8 = func_343(iParam0);
	iVar9 = func_407(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_13.f_62[iParam0])))
		{
			iVar9 = func_407(iParam0);
			fVar0 = func_408(iParam0);
			if (!func_167(Local_303.f_194.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_409(iParam0)) };
			}
			else
			{
				vVar1 = { func_409(iParam0) };
			}
			if (!func_326(Local_13.f_62[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_13.f_62[iParam0]));
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
						_update_ped_variation(iVar7, func_162(iParam0, 1), true, true, true, false);
					}
					else if (_is_this_model_a_horse(iVar8))
					{
						if (_0xa0bc8faed8cfeb3c(iVar7))
						{
						}
						func_410(iVar7, 1);
					}
					if (func_411(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_412(iParam0))
						{
							if (func_411(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_328(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_13.f_62[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_62[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_13.f_62[iParam0]))))
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

bool func_328(int iParam0)
{
	return func_162(iParam0, 128);
}

bool func_329()
{
	return (func_122(64) || func_121(64, 255));
}

void func_330(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_331(int iParam0)
{
	return func_167(Local_303.f_19.f_160, iParam0);
}

void func_332(vector3 vParam0)
{
	if (!func_118(Local_303.f_13))
	{
		func_119(&(Local_303.f_13));
	}
	if (func_120(Local_303.f_13) < Global_1901947->f_236.f_69)
	{
		return;
	}
	func_413(Local_303.f_9, vParam0, 0, Local_303.f_12);
	func_143(&(Local_303.f_13));
}

void func_333()
{
	iVar0 = func_173(0);
	iVar2 = get_player_ped(player_id());
	fVar3 = Local_303.f_19.f_166;
	if (fVar3 < 45f || !func_383(5))
	{
		if (func_335(&(Local_303.f_19.f_55)))
		{
			if (!_0x54b187f111d9c6f8(iVar0, 0))
			{
				if (func_382(&(Local_303.f_19.f_55)) > 4000 || !func_383(5))
				{
					if (!func_383(0))
					{
						if (func_385(func_173(0), iVar2, 0, 291934926, 0))
						{
							func_354(&(Local_303.f_19.f_55));
						}
					}
					else if (!func_383(5))
					{
						if (func_373(iVar0, 2, 0))
						{
							if (func_385(iVar0, iVar2, 5, 1744022339, 1))
							{
								func_354(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (!func_383(6))
					{
						if (func_373(iVar0, 3, 0))
						{
							if (func_385(iVar0, iVar2, 6, 1744022339, 1))
							{
								func_354(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (!func_383(7))
					{
						if (func_373(iVar0, 3, 0))
						{
							if (func_385(iVar0, iVar2, 7, 1744022339, 1))
							{
								func_354(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (vdist(get_entity_coords(iVar2, true, false), get_entity_coords(iVar0, true, false)) <= 20f)
					{
						if (!func_383(34))
						{
							if (func_385(iVar0, iVar2, 34, 1744022339, 1))
							{
								func_336(&(Local_303.f_19.f_55));
							}
						}
					}
				}
			}
		}
		else
		{
			func_354(&(Local_303.f_19.f_55));
		}
	}
	if (func_221() == 2 || func_221() == 3)
	{
		iVar1 = func_173(1);
		fVar3 = Local_303.f_19.f_167;
		if (fVar3 < 45f)
		{
			if (func_335(&(Local_303.f_19.f_58)))
			{
				if (func_382(&(Local_303.f_19.f_58)) > 4000 || (!func_383(2) && func_382(&(Local_303.f_19.f_58)) > 1000))
				{
					if (!_0x54b187f111d9c6f8(iVar1, 1))
					{
						if (!func_331(1))
						{
							if (!func_383(1))
							{
								if (func_385(iVar1, iVar2, 1, 291934926, 0))
								{
									func_354(&(Local_303.f_19.f_58));
								}
							}
						}
						else if (vdist(get_entity_coords(func_171(0), false, false), func_375(0)) < 15f)
						{
							if (!func_383(17))
							{
								func_385(iVar1, iVar2, 17, 1744022339, 1);
							}
						}
						else if (!func_383(2))
						{
							if (func_385(iVar1, iVar2, 2, 1744022339, 1))
							{
								func_354(&(Local_303.f_19.f_58));
							}
						}
						else if (!func_383(3))
						{
							if (func_385(iVar1, iVar2, 3, 1744022339, 1))
							{
								func_354(&(Local_303.f_19.f_58));
							}
						}
						else if (!func_383(4))
						{
							if (func_385(iVar1, iVar2, 4, 1744022339, 1))
							{
								func_336(&(Local_303.f_19.f_58));
							}
						}
					}
				}
			}
			else
			{
				func_354(&(Local_303.f_19.f_58));
			}
		}
	}
}

bool func_334(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	iVar0 = func_173(iParam0);
	if (!func_331(1))
	{
		if (func_414(iVar0, func_324(iParam0), fParam2, 1, 1))
		{
			if (func_369(iVar0, 1227113341, 1, 0))
			{
				task_go_to_entity(iVar0, iParam1, -1, 0.01f, 3f, 0.1f, 0);
			}
		}
		else if (bParam4 || func_373(iVar0, iParam3, 0))
		{
			func_372(1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_335(var uParam0)
{
	return func_415(*uParam0, 1);
}

void func_336(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_337(int iParam0)
{
	return func_167(Local_303.f_19.f_159, iParam0);
}

bool func_338(int iParam0, int iParam1)
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

void func_339(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_340(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_341(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_303.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != iVar299)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_303.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_303.f_3)
	{
		return false;
	}
	return true;
}

void func_342(int iParam0)
{
	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1146780397:
			func_416(iParam0->f_11);
			break;
	}
}

int func_343(int iParam0)
{
	return Local_303.f_194.f_7[iParam0]->f_3;
}

void func_344(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_343(iParam0);
	bVar3 = func_302(iParam1, 1);
	if (!is_bit_set(Local_303.f_194.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_13.f_62[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_13.f_62[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_303.f_194.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_78[iParam1]->f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_78[iParam1]->f_2.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_328(iParam0))
				{
					if (network_does_network_id_exist(&(Local_13.f_62[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_13.f_62[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_13.f_62[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_417(iVar1, 1f, 0);
					sVar0 = func_418(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_419(iVar1, sVar0, 1);
					}
				}
				if (func_411(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_412(iParam0))
					{
						if (func_411(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_303.f_194.f_5), iParam0);
				if (bParam2)
				{
					func_420(iParam0);
				}
			}
		}
	}
}

void func_345(int iParam0)
{
	iVar0 = func_421(iParam0);
	iVar1 = func_173(iParam0);
	_set_ped_body_component(iVar1, iVar0);
	_update_ped_variation(iVar1, false, true, true, true, false);
}

char* func_346(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE4";
				case 1:
					return "RE005_MALE5";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE4";
				case 1:
					return "RE005_FEMALE6";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_347(int iParam0, char* sParam1)
{
	iVar0 = func_173(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_422(&(Local_303.f_19.f_61), iVar0, sParam1, 1);
	}
}

Vector3 func_348(int iParam0)
{
	iVar0 = func_255(iParam0);
	switch (iVar0)
	{
		case -1758092337:
			return 0.1f, -2.65f, 0f;
		case -1347283941:
			return 0f, -2.7f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<2> func_349(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_423(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_379(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_350()
{
	Local_303.f_194.f_6 = 0;
	Local_303.f_194.f_2 = 0;
	Local_303.f_194.f_1 = -1;
}

void func_351(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_303.f_194.f_2 = (Local_303.f_194.f_2 || Local_78[iParam0]->f_2);
		Local_303.f_194.f_1 = (Local_303.f_194.f_1 && Local_78[iParam0]->f_2);
		Local_303.f_194.f_6 = (Local_303.f_194.f_6 || Local_78[iParam0]->f_2.f_1);
	}
}

int func_352(int iParam0)
{
	return iParam0;
}

int func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_78[iParam3]->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_303.f_194.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_354(var uParam0)
{
	func_424(uParam0, 0f);
}

bool func_355(var uParam0, float fParam1)
{
	if (!func_335(uParam0))
	{
		return false;
	}
	if (func_425(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_356(int iParam0)
{
	return true;
}

void func_357(int iParam0, int iParam1)
{
	func_246(&(Local_303.f_194.f_7[iParam0]->f_2), iParam1);
}

bool func_358(int iParam0, int iParam1)
{
	if (!func_302(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_167(Local_78[iParam1]->f_2, iParam0);
}

void func_359(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_214(&(Local_78[iVar0]->f_2), iParam0);
}

void func_360(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_246(&(Local_78[iVar0]->f_2), iParam0);
}

bool func_361()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_362(int iParam0)
{
	if (func_426(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_363(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_427(uParam2, 1, iVar0);
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
			if (func_428(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_429(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_430(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_431(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_432(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_433(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_429(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_434(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_435(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_436(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_437(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_437(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_429(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_438(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_439(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_440(uParam2, 4000))
				{
					if ((func_441(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_442(uParam2, iParam0)) && func_443(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_441(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_442(uParam2, iParam0)) && func_443(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_444(iParam0, Global_1940258->f_35))
					{
						func_445();
						*uParam3 = 2;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_446(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_447() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_445();
						*uParam3 = 2;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_448())
				{
					if (func_444(iParam0, Global_1940258->f_36))
					{
						func_445();
						*uParam3 = 2;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_449(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_429(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_450(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_429(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_451(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_452(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_453(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_454(uParam2, 4000))
				{
					if (func_455(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_429(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_456(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_429(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_457(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_429(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_364(bool bParam0)
{
	if (!func_121(64, 255))
	{
		iVar0 = func_295(Local_303.f_1, Local_303.f_2);
		func_458(iVar0);
		if (!func_121(1024, 255))
		{
			func_138(1024);
		}
		func_459(iVar0);
		if (bParam0)
		{
			func_460(Local_303.f_1, Local_303.f_4);
		}
		func_138(64);
	}
}

void func_365()
{
	iVar0 = func_173(0);
	iVar1 = func_173(1);
	if (!func_172(4194304, 255))
	{
		if (does_entity_exist(iVar0))
		{
			if (is_entity_dead(iVar0))
			{
				if (func_396(iVar0, player_ped_id()))
				{
					func_393(151445061, 1, 0);
				}
				func_372(4194304);
			}
		}
		else
		{
			func_372(4194304);
		}
	}
	if (!func_172(8388608, 255))
	{
		if (does_entity_exist(iVar1))
		{
			if (is_entity_dead(iVar1))
			{
				if (func_396(iVar1, player_ped_id()))
				{
					func_393(151445061, 1, 0);
				}
				func_372(8388608);
			}
		}
		else
		{
			func_372(8388608);
		}
	}
}

void func_366(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	Var32.f_3 = 255;
	Var32.f_4 = -1;
	Var32.f_5 = 623901053;
	if (!func_461(Var0.f_1, &Var32))
	{
		return;
	}
	if (is_entity_a_vehicle(Var0))
	{
		if (net_to_ent(&(Local_13.f_7.f_4[0])) == Var0)
		{
			if (Var32.f_3 == player_id())
			{
				if (!func_172(1048576, 255))
				{
					func_372(1048576);
				}
			}
		}
	}
	else if (func_462(Var0))
	{
		if ((does_entity_exist(func_395(func_171(0), 4)) && func_395(func_171(0), 4) == get_ped_index_from_entity_index(Var0)) || (does_entity_exist(func_395(func_171(0), 5)) && func_395(func_171(0), 5) == get_ped_index_from_entity_index(Var0)))
		{
			if (Var32.f_3 == player_id())
			{
				if (!func_172(2097152, 255))
				{
					func_372(2097152);
				}
			}
		}
	}
}

void func_367()
{
	if (!func_463(255))
	{
		return;
	}
	if (!does_blip_exist(Local_303.f_19.f_162))
	{
		Local_303.f_19.f_162 = _blip_add_for_coord(1260140857, func_320(0));
	}
}

void func_368()
{
	if (!func_121(32, 255))
	{
		func_464(Local_303.f_1, Local_303.f_3);
		if (!func_121(1024, 255))
		{
			func_465(Local_303.f_1);
			func_138(1024);
		}
		iVar0 = func_295(Local_303.f_1, Local_303.f_2);
		func_458(iVar0);
		func_459(iVar0);
		func_136(2);
		func_466(Local_303.f_9);
		func_467(Local_303.f_1);
		func_468(Local_303.f_1, Local_303.f_2, Local_303.f_3);
		func_138(32);
	}
}

bool func_369(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_245(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

char* func_370(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "base_b_con01";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "base";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "idle_a";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
	}
	return "";
}

void func_371(int iParam0, int iParam1)
{
	if (!func_463(255) || func_469(Local_303.f_19.f_10[iParam0]->f_1, get_player_ped(player_id()), 1, 1) > 150f)
	{
		func_175(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_303.f_19.f_10[iParam0])))
	{
		Local_303.f_19.f_10[iParam0] = _blip_add_for_entity(-89429847, func_171(iParam0));
		set_blip_name_from_text_file(&(Local_303.f_19.f_10[iParam0]), "NB_RUNAWAY_WAGON_WAGON_BLIP");
	}
	if (iParam1 != 0)
	{
		_blip_set_modifier(&(Local_303.f_19.f_10[iParam0]), 942020339);
	}
}

void func_372(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_214(&(Local_78[iVar0]->f_1), iParam0);
}

bool func_373(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_playing_anim(iParam0, func_257(iParam1), func_370(iParam1), 1))
	{
		if (func_369(iParam0, -2017877118, 1, 1))
		{
			task_play_anim(iParam0, func_257(iParam1), func_370(iParam1), 8f, -8f, -1, iParam2, 0f, false, 0, false, 0, false);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_374(int iParam0, bool bParam1)
{
	iVar0 = func_171(iParam0);
	if (is_vehicle_driveable(iVar0, true, true))
	{
		if (((bParam1 || func_414(iVar0, func_375(0), 5f, 1, 1)) || (get_entity_speed(iVar0) <= 0f && _0x2963b5c1637e8a27(iVar0) == 0)) || (has_entity_collided_with_anything(iVar0) && _0x6d58167f62238284(iVar0) > 1300f))
		{
			_0xc372b6a88f6e4ad8(iVar0, 0, 100f);
			_0xc372b6a88f6e4ad8(iVar0, 1, 100f);
			_0xc372b6a88f6e4ad8(iVar0, 4, 100f);
			_0xc372b6a88f6e4ad8(iVar0, 5, 100f);
		}
	}
	else
	{
		if (func_172(2048, 255))
		{
			_0x2f901291ef177b02(Local_303.f_19.f_164, 0);
		}
		return true;
	}
	return false;
}

Vector3 func_375(int iParam0)
{
	switch (func_221())
	{
		case 0:
		case 1:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1597f, 399.2163f, 115.4505f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1518.894f, -918.9427f, 46.80691f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_212())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1113f, 398.5637f, 115.5872f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1520.362f, -922.1479f, 43.6722f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_376()
{
	switch (func_221())
	{
		case 0:
			return 8f;
		case 1:
			return 8f;
		case 2:
			return 8f;
		case 3:
			return 8f;
		default:
			break;
	}
	return 3f;
}

void func_377()
{
	if (!func_172(524288, 255))
	{
		if (vdist(get_entity_coords(player_ped_id(), true, false), get_entity_coords(func_171(0), true, false)) <= 15f)
		{
			func_300(4);
		}
		func_470();
		func_372(524288);
	}
}

void func_378(int iParam0, int iParam1)
{
	if (!func_463(255) || func_469(Local_303.f_19.f_1[iParam0]->f_1, get_player_ped(player_id()), 1, 1) > 150f)
	{
		func_174(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_303.f_19.f_1[iParam0])))
	{
		Local_303.f_19.f_1[iParam0] = _blip_add_for_entity(-89429847, func_173(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_RUNAWAY_WAGON_DRIVER_BLIP";
				break;
			case 1:
				sVar0 = "NB_RUNAWAY_WAGON_PASSENGER_BLIP";
				break;
		}
		set_blip_name_from_text_file(&(Local_303.f_19.f_1[iParam0]), sVar0);
	}
	if (iParam1 != 0)
	{
		_blip_set_modifier(&(Local_303.f_19.f_1[iParam0]), 942020339);
	}
}

struct<2> func_379(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_380(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

var func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_382(var uParam0)
{
	if (!func_335(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_471(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_447() - round((uParam0->f_1 * 1000f)));
}

bool func_383(int iParam0)
{
	return func_472(&(Local_303.f_19.f_51), iParam0, 2);
}

bool func_384(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	func_473(iParam0, iParam2);
	return true;
}

void func_386(var uParam0, bool bParam1)
{
	if (bParam1 || !func_335(uParam0))
	{
		func_354(uParam0);
	}
}

void func_387()
{
	if (((func_331(16) && !func_331(4096)) && does_entity_exist(func_173(1))) && !is_entity_dead(func_173(1)))
	{
		if (func_335(&(Local_303.f_19.f_171)))
		{
			if (func_382(&(Local_303.f_19.f_171)) >= 15000 && vdist(get_entity_coords(player_ped_id(), true, false), get_entity_coords(func_173(1), true, false)) < 20f)
			{
				if (!func_383(14))
				{
					func_385(func_173(1), player_ped_id(), 14, 291934926, 0);
					func_354(&(Local_303.f_19.f_171));
				}
				else
				{
					func_372(4096);
				}
			}
		}
	}
}

void func_388(int iParam0, bool bParam1, bool bParam2)
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

void func_389()
{
	if (!func_169(2))
	{
		if (func_169(4))
		{
			func_393(-326224139, 0, 0);
		}
		func_474(1);
		func_300(2);
	}
}

int func_390()
{
	if (!func_172(32, 255) && func_169(4))
	{
		func_475(-419165566, 0, 255, 0, 0);
		func_372(32);
		func_476();
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_391(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_477(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_392(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_246(&(Local_78[iVar0]->f_1), iParam0);
}

void func_393(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_478())
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
		if (!&Global_1139381->f_3876.f_2[func_479(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_479(iParam0, 1)])->f_2++;
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
	func_480(&Var0, uVar7);
}

int func_394(var uParam0)
{
	return uParam0->f_11;
}

int func_395(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (is_entity_dead(iVar0))
	{
	}
	return iVar0;
}

bool func_396(int iParam0, int iParam1)
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

int func_397(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_481(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_398(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_481(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_399(int iParam0)
{
	iVar0 = -1;
	if (func_314(&Var1, iParam0))
	{
		iVar0 = ((func_482() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_400(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_401(int iParam0, int iParam1)
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

void func_402(var uParam0)
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
	func_483(uParam0, uParam0->f_1);
}

void func_403(var uParam0, int iParam1, int iParam2)
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
		func_182(uParam0, iVar0);
		iVar0++;
	}
}

bool func_404(int iParam0)
{
	if ((iParam0 == 1493442814 || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_405(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_406(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_407(int iParam0)
{
	return Local_303.f_194.f_7[iParam0]->f_4;
}

float func_408(int iParam0)
{
	return Local_303.f_194.f_7[iParam0]->f_5;
}

Vector3 func_409(int iParam0)
{
	return Local_303.f_194.f_7[iParam0]->f_6;
}

void func_410(int iParam0, bool bParam1)
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

bool func_411(int iParam0)
{
	return func_162(iParam0, 32);
}

bool func_412(int iParam0)
{
	return func_162(iParam0, 64);
}

void func_413(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	if (func_216(vParam2))
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
	func_485(&Var0, func_484(0, 8));
}

bool func_414(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_477(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_415(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_416(int iParam0)
{
	if (func_472(&(Local_303.f_19.f_51), iParam0, 2))
	{
		return;
	}
	iVar0 = func_486(iParam0);
	if (Local_303.f_19.f_1[iVar0]->f_3 != -1 && func_488(func_487(Local_303.f_19.f_1[0]->f_3)))
	{
		return;
	}
	func_489(iParam0);
	if (func_491(&(Local_303.f_19.f_61), func_490(func_487(iParam0)), 0, -1, 0, 0))
	{
		func_492(&(Local_303.f_19.f_51), iParam0, 2);
	}
}

void func_417(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_493(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_418(int iParam0)
{
	return Local_303.f_194.f_7[iParam0]->f_10;
}

void func_419(int iParam0, char* sParam1, bool bParam2)
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

void func_420(int iParam0)
{
}

int func_421(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2051247205;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -479904964;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -509232723;
				case 1:
					return 149367980;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -490827428;
				case 1:
					return -1747475060;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_422(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_494(uParam0, iParam1, sParam2))
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

int func_423(int iParam0)
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

void func_424(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_495() - fParam1);
	func_496(uParam0, 1);
	func_497(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_425(var uParam0)
{
	if (!func_335(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_471(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_495() - uParam0->f_1);
}

bool func_426(int iParam0, var uParam1, var uParam2, bool bParam3)
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

void func_427(var uParam0, bool bParam1, int iParam2)
{
	func_498(iParam2);
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
		uParam0->f_14 = func_499(0);
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
							func_214(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_500(1, 1))
						{
							func_214(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_500(1, 1) || *uParam0 & 8192 != 0))
				{
					func_246(uParam0, 33554432);
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
			if (func_501(uParam0))
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
	func_502(uParam0);
}

bool func_428(int iParam0, var uParam1)
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
			if (!func_503(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_504(iParam0, iVar2) <= func_505(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_429(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_506(iParam2, 1, 1, 1, 0))
	{
		func_214(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_507(uParam1, 1);
	func_508();
}

bool func_430(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_509(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_510(uParam1);
			if (func_511(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_512(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_507(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_513(uParam1))
						{
							func_507(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_431(int iParam0, int iParam1, var uParam2)
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
	if (func_514(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_510(uParam2);
		if (func_511(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_512(uParam2)
				{
					func_507(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_432(int iParam0, var uParam1)
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
	if (func_503(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_512(uParam1)
		{
			fVar3 = func_510(uParam1);
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

int func_433(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_515(bParam1, bParam2, bParam3);
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

bool func_434(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_435(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_516(uParam2);
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
			if (func_443(uParam2, iParam1))
			{
				func_507(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_436(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_517(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_443(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_507(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_437(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_518(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_507(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_507(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_519(iParam1, vVar0, vVar4))
					{
						func_507(uParam2, 1);
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
					func_507(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_519(iParam1, vVar0, vVar7))
					{
						func_507(uParam2, 1);
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

bool func_438(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_503(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_520(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_521(&(Global_1940258->f_28[iVar0])))
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
			if (func_522(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_523(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_524(uParam1, iParam0, fVar1, iVar0))
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

bool func_439(int iParam0, var uParam1)
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

bool func_440(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_441(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_525(iVar0, &iVar2))
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
	if (func_526(iVar0, iParam0))
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

int func_442(var uParam0, int iParam1)
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

bool func_443(var uParam0, int iParam1)
{
	if (func_527(uParam0))
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

bool func_444(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_469(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_445()
{
}

bool func_446(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_528(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_447();
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
						if (func_529(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_447();
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

int func_447()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_448()
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
	if ((func_447() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_449(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_505(uParam0);
	if (uParam0->f_13 > func_530(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_531(iParam1);
	iVar1 = func_532(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_450(var uParam0, int iParam1)
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
	if (func_533(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_534(vVar1, vVar4);
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

int func_451(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_535(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_452(int iParam0, var uParam1)
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
		if (func_536(iParam0, uParam1, 1))
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
	if (!func_537(iParam0))
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
			if (func_538(uParam1))
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
					if (!func_539(uParam1, iParam0))
					{
						if (func_529(iVar4, Global_35, 1) < 7f)
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

bool func_453(int iParam0, var uParam1)
{
	if (!func_540(0))
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

bool func_454(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_455(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_456(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_447();
	}
	else if (func_447() - uParam1->f_5) > func_541(uParam1)
	{
		return func_542(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_457(var uParam0, int iParam1)
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

void func_458(int iParam0)
{
	if (func_118(Global_1272030[iParam0]))
	{
		return;
	}
	func_543(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_119((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_544(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_544(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_544(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_544(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_459(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_402(&Var0);
}

void func_460(int iParam0, int iParam1)
{
	if (!func_545(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_546(iParam1);
	func_547(iVar0, iParam0);
}

bool func_461(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 1;
		}
		else if (_is_this_model_a_horse(get_entity_model(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (is_ped_human(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		*uParam1 = 4;
	}
	else if (is_entity_an_object(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = network_get_player_index_from_ped(uParam1->f_2);
			uParam1->f_4 = get_player_team(uParam1->f_3);
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return true;
}

bool func_462(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_463(int iParam0)
{
	return func_121(8, iParam0);
}

void func_464(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_349(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_111(&Var0, 4) && func_548(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_465(int iParam0)
{
	func_549(iParam0);
}

void func_466(struct<2> Param0)
{
	if (func_293(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_293(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_293(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_550(Param0, &Var0))
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

void func_467(int iParam0)
{
	Var0 = { func_349(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_468(int iParam0, int iParam1, int iParam2)
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

float func_469(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_470()
{
	if (!func_63(2))
	{
		return;
	}
	func_136(8);
}

bool func_471(var uParam0)
{
	return func_415(*uParam0, 2);
}

bool func_472(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_473(int iParam0, int iParam1)
{
	if (func_472(&(Local_303.f_19.f_51), iParam1, 2))
	{
		return;
	}
	if (_0x54b187f111d9c6f8(iParam0, 1))
	{
		return;
	}
	uVar0 = func_551(get_entity_coords(iParam0, true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	Var1 = { func_552(1146780397) };
	Var1.f_11 = iParam1;
	func_553(&Var1, uVar0);
}

void func_474(bool bParam0)
{
	if (!func_63(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_63(256))
		{
			func_166(Local_303.f_18, 0);
			func_136(256);
		}
	}
	func_136(16);
}

int func_475(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_554(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_476()
{
	if (!func_169(2))
	{
		func_393(-326224139, 0, 0);
		func_474(1);
		func_300(2);
	}
}

float func_477(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_478()
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

int func_479(int iParam0, int iParam1)
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

void func_480(var uParam0, var uParam1)
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

bool func_481(struct<2> Param0, var uParam2)
{
	if (!func_37(Param0))
	{
		return false;
	}
	func_555(uParam2);
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

int func_482()
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

void func_483(var uParam0, var uParam1)
{
}

var func_484(int iParam0, int iParam1)
{
	return func_551(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_485(var uParam0, var uParam1)
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

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 35:
		case 36:
		case 38:
			return 1;
	}
	return 2;
}

char* func_487(int iParam0)
{
	switch (func_221())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTS_WSD1";
				case 5:
					return "ORERW_CTS_HLP1";
				case 6:
					return "ORERW_CTS_HLP2";
				case 7:
					return "ORERW_CTS_HLP3";
				case 8:
					return "ORERW_CTS_THK1";
				case 9:
					return "ORERW_CTS_BYE1";
				case 10:
					return "ORERW_CTS_STAY";
				case 11:
					return "ORERW_CTS_FAIL";
				case 12:
					return "ORERW_CTS_BYEF";
				case 13:
					return "ORERW_CTS_FOLW1";
				case 28:
					return "ORERW_CTS_AGGD";
				case 29:
					return "ORERW_CTS_AGGW";
				case 30:
					return "ORERW_CTS_DESW";
				case 32:
					return "ORERW_CTS_DESH";
				case 31:
					return "ORERW_CTS_AGGH";
				case 33:
					return "ORERW_CTS_TAKE";
				case 34:
					return "ORERW_CTS_STAY";
				case 37:
					return "ORERW_CTS_HOP";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTL_WSD1";
				case 5:
					return "ORERW_CTL_HLP1";
				case 6:
					return "ORERW_CTL_HLP2";
				case 7:
					return "ORERW_CTL_HLP3";
				case 8:
					return "ORERW_CTL_THK1";
				case 9:
					return "ORERW_CTL_BYE1";
				case 10:
					return "ORERW_CTL_STAY";
				case 11:
					return "ORERW_CTL_FAIL";
				case 12:
					return "ORERW_CTL_BYEF";
				case 13:
					return "ORERW_CTL_FOLW1";
				case 28:
					return "ORERW_CTL_AGGD";
				case 29:
					return "ORERW_CTL_AGGW";
				case 30:
					return "ORERW_CTL_DESW";
				case 32:
					return "ORERW_CTL_DESH";
				case 31:
					return "ORERW_CTL_AGGH";
				case 33:
					return "ORERW_CTL_TAKE";
				case 34:
					return "ORERW_CTL_STAY";
				case 37:
					return "ORERW_CTL_HOP";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHS_WSP";
				case 0:
					return "ORERW_CHS_WSD";
				case 5:
					return "ORERW_CHS_HLP1";
				case 6:
					return "ORERW_CHS_HLP2";
				case 7:
					return "ORERW_CHS_HLP3";
				case 2:
					return "ORERW_CHS_HPP1";
				case 3:
					return "ORERW_CHS_HPP2";
				case 4:
					return "ORERW_CHS_HPP3";
				case 15:
					return "ORERW_CHS_ONW";
				case 16:
					return "ORERW_CHS_ONWB";
				case 17:
					return "ORERW_CHS_DEAD";
				case 36:
					return "ORERW_CHS_CRSH";
				case 41:
					return "ORERW_CHS_CRSB";
				case 13:
					return "ORERW_CHS_FOLW1";
				case 14:
					return "ORERW_CHS_FOLP";
				case 18:
					return "ORERW_CHS_BCK1";
				case 19:
					return "ORERW_CHS_BCK2";
				case 20:
					return "ORERW_CHS_BCK3";
				case 21:
					return "ORERW_CHS_BCK4";
				case 22:
					return "ORERW_CHS_BCK5";
				case 23:
					return "ORERW_CHS_BCK6";
				case 24:
					return "ORERW_CHS_BCK7";
				case 25:
					return "ORERW_CHS_BCK8";
				case 8:
					return "ORERW_CHS_THK1";
				case 26:
					return "ORERW_CHS_SCLD";
				case 33:
					return "ORERW_CHS_TAKE";
				case 35:
					return "ORERW_CHS_BNTP1";
				case 31:
					return "ORERW_CHS_AGGH";
				case 9:
					return "ORERW_CHS_BYE1";
				case 11:
					return "ORERW_CHS_FAIL";
				case 12:
					return "ORERW_CHS_BYEF";
				case 28:
					return "ORERW_CHS_AGGD";
				case 29:
					return "ORERW_CHS_AGGW";
				case 30:
					return "ORERW_CHS_DESW";
				case 32:
					return "ORERW_CHS_DESH";
				case 37:
					return "ORERW_CHS_HOPD";
				case 38:
					return "ORERW_CHS_HOPP";
				case 39:
					return "ORERW_CHS_AGGP";
				case 40:
					return "ORERW_CHS_AGPW";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHL_WSP";
				case 0:
					return "ORERW_CHL_WSD";
				case 5:
					return "ORERW_CHL_HLP1";
				case 6:
					return "ORERW_CHL_HLP2";
				case 7:
					return "ORERW_CHL_HLP3";
				case 2:
					return "ORERW_CHL_HPP1";
				case 3:
					return "ORERW_CHL_HPP2";
				case 4:
					return "ORERW_CHL_HPP3";
				case 15:
					return "ORERW_CHL_ONW";
				case 16:
					return "ORERW_CHL_ONWB";
				case 17:
					return "ORERW_CHL_DEAD";
				case 36:
					return "ORERW_CHL_CRSH";
				case 41:
					return "ORERW_CHL_CRSB";
				case 13:
					return "ORERW_CHL_FOLW1";
				case 14:
					return "ORERW_CHL_FOLP";
				case 18:
					return "ORERW_CHL_BCK1";
				case 19:
					return "ORERW_CHL_BCK2";
				case 20:
					return "ORERW_CHL_BCK3";
				case 21:
					return "ORERW_CHL_BCK4";
				case 22:
					return "ORERW_CHL_BCK5";
				case 23:
					return "ORERW_CHL_BCK6";
				case 24:
					return "ORERW_CHL_BCK7";
				case 25:
					return "ORERW_CHL_BCK8";
				case 8:
					return "ORERW_CHL_THK1";
				case 26:
					return "ORERW_CHL_SCLD";
				case 33:
					return "ORERW_CHL_TAKE";
				case 35:
					return "ORERW_CHL_BNTP1";
				case 31:
					return "ORERW_CHL_AGGH";
				case 9:
					return "ORERW_CHL_BYE1";
				case 11:
					return "ORERW_CHK_FAIL";
				case 12:
					return "ORERW_CHL_BYEF";
				case 28:
					return "ORERW_CHL_AGGD";
				case 29:
					return "ORERW_CHL_AGGW";
				case 30:
					return "ORERW_CHL_DESW";
				case 32:
					return "ORERW_CHL_DESH";
				case 37:
					return "ORERW_CHL_HOPD";
				case 38:
					return "ORERW_CHL_HOPP";
				case 39:
					return "ORERW_CHL_AGGP";
				case 40:
					return "ORERW_CHL_AGPW";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_488(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_489(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			func_422(&(Local_303.f_19.f_61), Local_303.f_19.f_1[0]->f_1, func_346(0), 0);
			Local_303.f_19.f_1[0]->f_3 = iParam0;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 36:
		case 38:
			func_422(&(Local_303.f_19.f_61), Local_303.f_19.f_1[1]->f_1, func_346(1), 0);
			Local_303.f_19.f_1[1]->f_3 = iParam0;
			break;
		case 26:
		case 35:
			func_422(&(Local_303.f_19.f_61), Local_303.f_19.f_1[0]->f_1, func_346(0), 0);
			func_422(&(Local_303.f_19.f_61), Local_303.f_19.f_1[1]->f_1, func_346(1), 0);
			Local_303.f_19.f_1[0]->f_3 = iParam0;
			Local_303.f_19.f_1[1]->f_3 = iParam0;
			break;
	}
}

Vector3 func_490(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_491(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_556(vParam1, uParam0);
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

bool func_492(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

float func_493(float fParam0, float fParam1, float fParam2)
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

bool func_494(var uParam0, int iParam1, char* sParam2)
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

float func_495()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_496(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_497(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_498(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_557();
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
			func_558(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_499(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_500(bool bParam0, bool bParam1)
{
	if (func_559(bParam0, &iVar0, &iVar1))
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

bool func_501(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_560(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_560(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_532(iVar0) == -1)
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

void func_502(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_561(uParam0);
	}
}

bool func_503(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_532(iParam2);
	}
	else
	{
		iVar1 = func_531(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_532(iParam0);
	}
	else
	{
		iVar0 = func_531(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_167(*uParam1, 8388608))
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

float func_504(int iParam0, int iParam1)
{
	return func_469(iParam0, iParam1, 1, 1);
}

float func_505(var uParam0)
{
	return uParam0->f_29;
}

bool func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_507(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_214(uParam0, 134217728);
	}
	else
	{
		func_246(uParam0, 134217728);
	}
}

void func_508()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_509(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_469(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_562(iVar0, 0)))
		{
			if (func_563(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_510(var uParam0)
{
	return uParam0->f_18;
}

bool func_511(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_167(*uParam0, 4194304))
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

int func_512(var uParam0)
{
	return uParam0->f_19;
}

int func_513(var uParam0)
{
	return uParam0->f_20;
}

bool func_514(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_562(iVar0, 0)))
		{
			if (func_564(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_515(bool bParam0, bool bParam1, bool bParam2)
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

float func_516(var uParam0)
{
	return uParam0->f_25;
}

int func_517(var uParam0)
{
	return uParam0->f_23;
}

int func_518(var uParam0)
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

bool func_519(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_565(iParam0, vParam4, 0.5f))
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

int func_520(int iParam0)
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
	if (func_566(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_521(int iParam0)
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

bool func_522(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_567(iParam1))
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

bool func_523(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_567(iParam1))
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

bool func_524(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_568(uParam0);
	if (func_567(iParam1))
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

bool func_525(int iParam0, int iParam1)
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

bool func_526(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_569(iParam0, 1, 0, 0)) && !func_569(iParam0, 1, 0, 0) == 1151374672)
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

bool func_527(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_528(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_529(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_529(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_530(var uParam0)
{
	return uParam0->f_26;
}

int func_531(int iParam0)
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

int func_532(int iParam0)
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

int func_533(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_570(iParam0, vVar0, iParam2);
}

float func_534(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_535(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_525(Global_34, &iVar1))
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
		fVar2 = func_469(iParam0, player_ped_id(), 0, 1);
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
		if (func_469(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_536(int iParam0, var uParam1, bool bParam2)
{
	func_559(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_539(uParam1, iVar0))
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
				if (!bParam2 || !func_539(uParam1, iVar1))
				{
					if (func_529(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_537(int iParam0)
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

bool func_538(var uParam0)
{
	return func_167(*uParam0, 131072);
}

bool func_539(var uParam0, int iParam1)
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

bool func_540(int iParam0)
{
	return false;
}

int func_541(var uParam0)
{
	return uParam0->f_22;
}

int func_542(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_543(int iParam0, var uParam1, var uParam2)
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

struct<2> func_544(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_545(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_571(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_546(int iParam0)
{
	return iParam0 + 8;
}

void func_547(int iParam0, int iParam1)
{
	Var0 = { func_349(iParam1, 896190569) };
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

int func_548(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_549(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_349(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

bool func_550(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_481(Param0, &vVar0);
	if (func_572(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

var func_551(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_573() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_574());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_574());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_574());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_575(get_player_team(iVar5)));
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
			if (func_576(iVar2))
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
				if (iVar9 & 8192 != 0 && func_577(iVar2) != 1)
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
					if (!func_578(iVar10))
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

struct<15> func_552(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_303, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_553(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

int func_554(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_579(iParam2, -372840566);
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
	func_580(uParam1, iParam0, Var3);
	return 1;
}

void func_555(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_556(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_557()
{
	if (func_581())
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

void func_558(var uParam0, var uParam1)
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

bool func_559(bool bParam0, int iParam1, int iParam2)
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

int func_560(var uParam0)
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

void func_561(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_246(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_214(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_562(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_563(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_564(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_564(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_565(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_566(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_567(int iParam0)
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

float func_568(var uParam0)
{
	return uParam0->f_28;
}

int func_569(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_570(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_582(vVar3, vVar6);
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
	if (func_583(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_571(int iParam0)
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

bool func_572(int iParam0, var uParam1, var uParam2)
{
	if (!func_584(iParam0))
	{
		return false;
	}
	if (func_585(iParam0, uParam1, &uVar0))
	{
		func_586(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_573()
{
	return Global_1051252->f_12;
}

char* func_574()
{
	return "unnamed";
}

int func_575(int iParam0)
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

bool func_576(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_587(36, iParam0);
}

int func_577(int iParam0)
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

bool func_578(int iParam0)
{
	if (func_588(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_589(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_579(int iParam0, int iParam1)
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

void func_580(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_590(uParam0))
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

bool func_581()
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

float func_582(vector3 vParam0, vector3 vParam3)
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

bool func_583(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_584(int iParam0)
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

bool func_585(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_591(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_586(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_592(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_593(iVar0);
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
			uParam2->f_5 = func_594(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_595(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_596(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_597(iVar0);
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

bool func_587(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_472(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_598())
	{
		return func_472(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_472(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_588(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_589(int iParam0)
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
		func_599(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_600(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_590(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_591(int iParam0)
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

int func_592(int iParam0, var uParam1)
{
	if (func_601(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_593(int iParam0)
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

int func_594(int iParam0)
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

int func_595(int iParam0)
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

int func_596(int iParam0)
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

int func_597(int iParam0)
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

int func_598()
{
	return Global_1102219->f_3672;
}

void func_599(int iParam0)
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
	func_600(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_600(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_601(int iParam0, var uParam1, var uParam2)
{
	if (func_602(iParam0, uParam1, &uVar0))
	{
		func_603(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_602(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_591(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_603(var uParam0, int iParam1, var uParam2)
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

