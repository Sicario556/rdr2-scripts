void __EntryFunction__()
{
	fLocal_221 = 1f;
	fLocal_222 = 1f;
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
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
	network_register_host_broadcast_variables(&Local_13, 21, 54);
	func_10(_0xba24095ea96dfe17(&Local_13), 21, "m_hostData");
	network_register_player_broadcast_variables(&Local_34, 129, 55);
	func_11(_0x690806bc83bc8ca2(Local_34[0]), 129, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(int iParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(iParam0);
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
	else if (func_17(Local_163.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_163.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_163.f_12), Local_163.f_9))
	{
		return true;
	}
	else if (Local_163.f_8 == 6)
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

void func_13(int iParam0)
{
	iVar0 = 255;
	_copy_memory(&Local_163, iParam0, 5);
	iVar2 = func_30(&bVar1, Local_163.f_1, Local_163.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_163.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_163.f_1, Local_163.f_2, Local_163.f_3, iVar0);
	Local_163.f_9 = { func_32(Var3.f_5, 8) };
	Local_163.f_14 = Var3.f_5;
	Local_163.f_15 = { Var3.f_11 };
	Local_163.f_18 = Var3.f_7;
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
	if (Local_13 <= 5)
	{
		func_40();
	}
	switch (Local_13)
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
	if (Local_163.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_163.f_8)
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
		if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_13.f_3.f_1);
		}
	}
	func_57();
}

void func_26()
{
	func_58();
}

void func_27()
{
	if (Local_163.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_59(Local_163.f_12, 4);
		}
	}
	func_60();
	if (func_61(64))
	{
		func_62(Local_13.f_6);
	}
	func_63();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051252->f_8;
}

int func_30(bool bParam0, int iParam1, int iParam2)
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
	func_64(&Var0, Var26.f_5);
	iVar25 = func_65(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_66(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*bParam0 = 1;
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
			func_67(uParam0, iParam2);
			break;
		case 2:
			func_68(uParam0, iParam2);
			break;
		case 3:
			func_69(uParam0, iParam2);
			break;
		case 4:
			func_70(uParam0, iParam2);
			break;
		case 12:
			func_71(uParam0, iParam2);
			break;
		case 6:
			func_72(uParam0, iParam2, -1);
			break;
		case 7:
			func_73(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_74(uParam0, iParam2);
			break;
		case 11:
			func_75(uParam0, iParam2);
			break;
		case 9:
			func_76(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_77(uParam0, iParam2);
			break;
		case 8:
			func_78(uParam0, iParam2);
			break;
		case 13:
			func_79(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_80(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_81(uParam0, iParam2);
			break;
		case 16:
			func_82(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_83(uParam0, iParam2);
			break;
		case 21:
			func_84(uParam0, iParam2);
			break;
		case 28:
			func_85(uParam0, iParam2);
			break;
		case 25:
			func_86(uParam0, iParam2);
			break;
		case 24:
			func_87(uParam0, iParam2);
			break;
		case 22:
			func_88(uParam0, iParam2);
			break;
		case 23:
			func_89(uParam0, iParam2);
			break;
		case 29:
			func_90(uParam0, iParam2);
			break;
		case 26:
			func_91(uParam0, iParam2);
			break;
		case 30:
			func_92(uParam0, iParam2);
			break;
		case 27:
			func_93(uParam0, iParam2);
			break;
		case 32:
			func_94(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_95(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_96(uParam0, iParam2);
			break;
		case 17:
			func_97(uParam0, iParam2);
			break;
		case 18:
			func_98(uParam0, iParam2);
			break;
		case 19:
			func_99(uParam0, iParam2);
			break;
		case 20:
			func_100(uParam0, iParam2);
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
			func_101(uParam0, iParam1, iParam2);
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
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636), func_102(iParam1));
			break;
		case 3:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_602), func_102(iParam1));
			break;
		case 4:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_2104), func_102(iParam1));
			break;
		case 5:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_12606), func_102(iParam1));
			break;
		case 6:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_12908), func_102(iParam1));
			break;
		case 7:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_15910), func_102(iParam1));
			break;
		case 8:
			Var0.f_1 = func_103(iParam0, &(Global_1071686->f_636.f_16512), func_102(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_104();
	}
	return Var0;
}

void func_33()
{
}

void func_34()
{
	_text_database_request("NBEGP");
	_0x73f0d0327bfa0812(func_105());
	func_107(0, 0, func_106(), 5f, -1, 1, 0);
	request_collision_at_coord(func_106());
	request_ptfx_asset();
	reserve_network_mission_peds(1);
}

void func_35()
{
	func_108();
}

bool func_36(struct<2> Param0)
{
	if (!func_109(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_102(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_163.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_163.f_1, Local_163.f_2, Local_163.f_3, iVar0);
	if (!func_110(&Var1, 1))
	{
		func_111(1);
		return;
	}
	Local_13.f_6 = func_112(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_113(256);
	if (func_114(Local_13.f_6))
	{
		func_115(5);
		func_111(6);
	}
	else
	{
		func_111(1);
	}
}

void func_42()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_163.f_1, Local_163.f_2, -1, 255);
	if (func_110(&Var0, 1))
	{
		func_111(2);
		return;
	}
	if (func_116(Var0, &bVar31))
	{
		clear_area(Local_163.f_15, Var0.f_10, 2442122);
		func_111(2);
	}
	else if (bVar31)
	{
		func_115(3);
		func_111(6);
	}
	if (!func_117(Local_13.f_3.f_2))
	{
		func_118(&(Local_13.f_3.f_2));
	}
	else if (func_119(Local_13.f_3.f_2) > 45000)
	{
		func_115(4);
		func_111(6);
	}
}

void func_43()
{
	if (func_120(1, 255))
	{
		if (!func_121(1))
		{
			if (func_122())
			{
				func_113(1);
			}
		}
		else
		{
			func_123();
			func_111(3);
		}
	}
}

void func_44()
{
	if (func_120(2, 255))
	{
		if (!func_121(2))
		{
			bVar0 = true;
			if (!func_124())
			{
				bVar0 = false;
			}
			if (!func_125())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_113(2);
			}
		}
		else
		{
			func_126();
			func_111(4);
		}
	}
}

void func_45()
{
	func_127();
	func_128();
	func_129();
	if (func_130() || Local_13.f_2 != 0)
	{
		func_131();
		func_111(5);
	}
}

void func_46()
{
	if (func_120(4, 255))
	{
		if (func_132())
		{
			func_113(4);
			func_111(6);
		}
	}
}

void func_47()
{
	if (!func_121(256))
	{
		return;
	}
	if (func_121(512))
	{
		if (func_61(64) && func_112(player_id()) == Local_13.f_6)
		{
			func_62(Local_13.f_6);
			func_133(64);
		}
	}
	else if (!func_61(64))
	{
		if (func_112(player_id()) == Local_13.f_6)
		{
			func_134(Local_13.f_6, 1, 1);
			func_135(64);
		}
	}
	else if (func_112(player_id()) != Local_13.f_6)
	{
		func_62(Local_13.f_6);
		func_133(64);
	}
}

void func_48()
{
	if (!Global_13)
	{
		if (func_120(8192, 255))
		{
			func_136(8192);
		}
	}
	else if (!func_120(8192, 255))
	{
		func_137(8192);
	}
}

void func_49()
{
	func_138();
}

void func_50()
{
	if (Local_13 == 6)
	{
		func_139(6);
	}
	else if (Local_13 > 0)
	{
		func_47();
		func_139(1);
	}
}

void func_51()
{
	if (Local_13 == 6)
	{
		func_139(6);
	}
	else if (Local_13 > 1)
	{
		func_139(2);
	}
}

void func_52()
{
	if (!func_120(1, 255))
	{
		bVar0 = true;
		if (!func_140())
		{
			bVar0 = false;
		}
		if (!func_141())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_137(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_117(Local_163.f_11))
			{
				func_118(&(Local_163.f_11));
			}
			if (func_119(Local_163.f_11) >= iVar1)
			{
				func_139(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_142(&(Local_163.f_11));
		func_143();
		func_139(3);
	}
}

void func_53()
{
	if (!func_120(2, 255))
	{
		iVar0 = func_144();
		iVar1 = func_145();
		if (iVar0 && iVar1)
		{
			func_137(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_117(Local_163.f_11))
			{
				func_118(&(Local_163.f_11));
			}
			if (func_146(Local_163.f_11) >= iVar2)
			{
				func_139(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_142(&(Local_163.f_11));
		func_147();
		func_148();
		func_149();
		func_150();
		func_139(4);
	}
}

void func_54()
{
	if (Local_13 >= 5)
	{
		func_151();
		func_139(5);
		return;
	}
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
}

void func_55()
{
	if (!func_120(4, 255))
	{
		if (func_158())
		{
			func_159();
			func_59(Local_163.f_12, 4);
			func_137(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_139(6);
	}
}

bool func_56()
{
	return (func_121(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
}

void func_57()
{
}

void func_58()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_160((*Local_163.f_48[iVar0])[iVar1]->f_3))
			{
				if (func_161((*Local_163.f_48[iVar0])[iVar1]))
				{
					_0x9cf1836c03fb67a2((*Local_163.f_48[iVar0])[iVar1], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_59(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_162(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_60()
{
	if (!func_61(1))
	{
		return;
	}
	if (func_61(4))
	{
		return;
	}
	if (!func_61(2))
	{
		iVar0 = -1;
	}
	else if (!func_61(8))
	{
		iVar0 = 2;
	}
	else if (func_61(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_61(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_163(Local_163.f_9, iVar0, 0, 255, 0);
	func_135(4);
	if (bVar1)
	{
		func_164(Local_163.f_1, Local_163.f_2);
		if (!func_61(256))
		{
			if (iVar0 == 1)
			{
				func_165(Local_163.f_18, 1);
			}
			else
			{
				func_165(Local_163.f_18, 0);
			}
			func_135(256);
		}
	}
	else
	{
		func_165(Local_163.f_18, 2);
	}
}

bool func_61(int iParam0)
{
	return func_166(Local_163.f_7, iParam0);
}

void func_62(int iParam0)
{
	if (!func_167(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_63()
{
	func_168(0);
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_65(var uParam0)
{
	if (!func_169(uParam0))
	{
		return -1;
	}
	iVar0 = func_170(uParam0, uParam0->f_9);
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
			iVar0 = func_170(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_66(int iParam0)
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

void func_67(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_171(uParam0, iParam1);
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

void func_68(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_173(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_173(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_173(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_173(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_173(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_173(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_173(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_173(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_173(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			func_174(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_172(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_173(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_173(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_173(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_173(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_72(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_175(uParam0, 0);
			func_175(uParam0, 1);
			func_175(uParam0, 4);
			func_175(uParam0, 5);
			break;
		case 1:
			func_175(uParam0, 2);
			func_175(uParam0, 3);
			func_175(uParam0, 6);
			func_175(uParam0, 7);
			func_176(uParam0, 2);
			break;
		default:
			func_172(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_174(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_174(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_174(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_174(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_174(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_174(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_174(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_174(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_174(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_174(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_174(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_174(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_174(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_174(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_174(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_73(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 8);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 7);
			func_174(uParam0, 8);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			func_174(uParam0, 6);
			func_174(uParam0, 7);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			func_174(uParam0, 6);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			func_174(uParam0, 5);
			func_174(uParam0, 9);
			func_174(uParam0, 10);
			func_174(uParam0, 11);
			func_177(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_173(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_173(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_173(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_173(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_173(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_173(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_173(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_173(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_173(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_173(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_172(uParam0);
	func_176(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_178(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_178(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_178(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_178(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_178(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_173(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_173(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_173(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_173(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_173(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_173(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_173(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_173(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_173(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_172(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_172(uParam0);
	func_176(uParam0, 1);
	func_176(uParam0, 4);
	func_176(uParam0, 8);
	func_176(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_179(func_112(iParam2)) };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_180(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_180(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_180(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_180(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_173(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_181(uParam0, iParam2);
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

void func_83(var uParam0, int iParam1)
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
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_84(var uParam0, int iParam1)
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
			func_183(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
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
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_174(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_174(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_172(uParam0);
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
			func_174(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_174(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_174(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_174(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_174(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_174(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_174(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_174(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_174(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_174(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_172(uParam0);
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
			func_174(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_174(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_174(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_174(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_174(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_174(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_174(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_174(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_174(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_174(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_174(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
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
			func_184(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
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
			func_185(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_185(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_185(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_185(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_185(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_185(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_185(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_172(uParam0);
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
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_174(uParam0, 3);
			func_174(uParam0, 4);
			func_174(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
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
			func_186(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_186(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_186(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_172(uParam0);
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
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_174(uParam0, 2);
			func_174(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_174(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_174(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
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
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
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
	func_188(uParam0, iParam1, iParam2);
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

void func_95(var uParam0, int iParam1, int iParam2)
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
	func_189(uParam0, iParam1, iParam2);
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

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_172(uParam0);
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
			func_174(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_174(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_174(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_174(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_174(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_174(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_174(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_174(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_174(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_174(uParam0, 1);
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_173(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_173(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_173(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_173(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_173(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_173(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_173(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_172(uParam0);
	switch (iParam1)
	{
		case 0:
			func_173(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_173(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_173(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_173(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_174(uParam0, 0);
			func_174(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_101(var uParam0, int iParam1, int iParam2)
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
	iVar0 = func_191(iParam1);
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
	*uParam0 = func_192(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_176(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_194(func_193(iVar0), iParam2);
		uParam0->f_15[0] = func_195(func_193(iVar0), iParam2);
		uParam0->f_5 = func_196(iVar0, iParam2);
		uParam0->f_11 = { func_197(iVar0, iParam2) };
	}
}

int func_102(int iParam0)
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

int func_103(int iParam0, var uParam1, int iParam2)
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

struct<2> func_104()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_105()
{
	switch (func_198())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 454325279;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1443632175;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -924706522;
		default:
			break;
	}
	return 0;
}

Vector3 func_106()
{
	switch (func_198())
	{
		case 0:
			return 2252.035f, 1342.706f, 84.5573f;
		case 1:
			return 2280.7f, 1608.79f, 84.32f;
		case 2:
			return 2438.612f, 960.3168f, 73.0963f;
		case 3:
			return 1130.541f, 575.7938f, 86.66257f;
		case 4:
			return -754.3893f, -399.1133f, 40.84306f;
		case 5:
			return -410.6756f, -63.938f, 40.7762f;
		case 6:
			return -2085.777f, -161.9067f, 208.0633f;
		case 7:
			return -1678.304f, -517.8369f, 140.867f;
		case 8:
			return -2624.881f, -339.7662f, 141.8102f;
		case 9:
			return -926.5729f, -924.4639f, 41.1771f;
		case 10:
			return -722.9517f, -1718.81f, 41.41f;
		case 11:
			return -1069.18f, -1919.616f, 42.3447f;
		case 12:
			return 1673.672f, 1440.046f, 146.0849f;
		case 13:
			return 1562.434f, 1445.237f, 145.2842f;
		case 14:
			return 1244.927f, 1177.251f, 148.2856f;
		case 15:
			return 1926.703f, -362.3477f, 42.4864f;
		case 16:
			return 2192.489f, -318.3198f, 40.7232f;
		case 17:
			return 2408.447f, -490.4562f, 40.9243f;
		case 18:
			return -3243.502f, -3187.141f, -9.3137f;
		case 19:
			return -1745.01f, -2929.141f, -12.3355f;
		case 20:
			return -1735.07f, -2378.355f, 41.289f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_107(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8)
{
	(*Local_163.f_48[iParam0])[iParam1]->f_1 = iParam6;
	(*Local_163.f_48[iParam0])[iParam1]->f_2 = iParam7;
	(*Local_163.f_48[iParam0])[iParam1]->f_3 = { vParam2 };
	(*Local_163.f_48[iParam0])[iParam1]->f_6 = fParam5;
	(*Local_163.f_48[iParam0])[iParam1]->f_7 = iParam8;
}

void func_108()
{
	switch (func_199())
	{
		case 0:
			Local_13.f_7.f_9 = 98537260;
			break;
		case 1:
			Local_13.f_7.f_9 = 1104697660;
			break;
		case 2:
			Local_13.f_7.f_9 = 1458540991;
			break;
		case 3:
			Local_13.f_7.f_9 = 480688259;
			break;
		case 4:
			Local_13.f_7.f_9 = -1143398950;
			break;
		case 5:
			Local_13.f_7.f_9 = 252669332;
			break;
		case 6:
			Local_13.f_7.f_9 = 90264823;
			break;
		case 7:
			Local_13.f_7.f_9 = 2028722809;
			break;
	}
}

bool func_109(int iParam0)
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

bool func_110(var uParam0, int iParam1)
{
	return func_200(uParam0->f_25, iParam1);
}

void func_111(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_112(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_113(int iParam0)
{
	if (!func_121(iParam0))
	{
		func_201(&(Local_13.f_1), iParam0);
	}
}

bool func_114(int iParam0)
{
	if (!func_167(iParam0))
	{
		return false;
	}
	return (func_202(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_115(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_116(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_160(Local_163.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_13.f_3))
	{
		if (_0x397769175a7dbb30(Local_163.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_203(&uVar1, Param0);
		Local_13.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_137(128);
	}
	else if (!func_120(128, 255))
	{
		Local_13.f_3.f_1 = func_204(Param0);
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

bool func_117(int iParam0)
{
	return iParam0 != 0;
}

void func_118(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_119(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_205(&iParam1))
		{
			return false;
		}
	}
	return func_166(&(Local_34[iParam1]), iParam0);
}

bool func_121(int iParam0)
{
	return func_166(Local_13.f_1, iParam0);
}

bool func_122()
{
	iVar0 = 1;
	if (!func_207(func_206()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_123()
{
}

bool func_124()
{
	iVar0 = 1;
	if (!func_208())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_125()
{
	return true;
}

void func_126()
{
}

void func_127()
{
	if (!func_121(32) && func_209(32))
	{
		func_113(32);
	}
	if (!func_121(64) && func_209(64))
	{
		func_113(64);
	}
	if (!func_121(16) && func_210(16))
	{
		func_113(16);
	}
	if ((!func_121(2048) && func_209(2048)) && !func_209(4096))
	{
		func_113(2048);
	}
}

void func_128()
{
	if (!bVar0 && func_121(16))
	{
		func_115(1);
		return;
	}
	if (func_121(2048) && !func_209(4096))
	{
		func_115(6);
		return;
	}
}

void func_129()
{
}

bool func_130()
{
	return func_211();
}

void func_131()
{
}

bool func_132()
{
	return true;
}

void func_133(int iParam0)
{
	if (func_61(iParam0))
	{
		func_212(&(Local_163.f_7), iParam0);
	}
}

int func_134(int iParam0, int iParam1, bool bParam2)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_214(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_215(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_135(int iParam0)
{
	if (!func_61(iParam0))
	{
		func_201(&(Local_163.f_7), iParam0);
	}
}

void func_136(int iParam0)
{
	if (func_166(&(Local_34[participant_id_to_int()]), iParam0))
	{
		func_212(Local_34[participant_id_to_int()], iParam0);
	}
}

void func_137(int iParam0)
{
	if (!func_120(iParam0, 255))
	{
		func_201(Local_34[participant_id_to_int()], iParam0);
	}
}

void func_138()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_216(iVar0);
				break;
			case -1315570756:
				func_217(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		func_218(iVar0);
		iVar0++;
	}
}

void func_139(int iParam0)
{
	if (Local_163.f_8 != iParam0)
	{
		Local_163.f_8 = iParam0;
	}
}

bool func_140()
{
	if (!_text_database_has_loaded("NBEGP"))
	{
		return false;
	}
	if (!_0x5e5d96be25e9df68(func_105()))
	{
		return false;
	}
	if (!has_ptfx_asset_loaded())
	{
		return false;
	}
	return true;
}

bool func_141()
{
	bVar0 = false;
	return !bVar0;
}

void func_142(var uParam0)
{
	*uParam0 = 0;
}

void func_143()
{
}

int func_144()
{
	iVar0 = 1;
	if (!_does_scenario_point_exist(Local_163.f_19.f_17))
	{
		iVar1 = func_219();
		if (iVar1 == 0)
		{
		}
		Local_163.f_19.f_17 = create_scenario_point(iVar1, _get_object_offset_from_coords(func_106(), func_220(), func_221()), func_220(), 0f, 0f, 1);
		iVar0 = 0;
	}
	return iVar0;
}

int func_145()
{
	return 1;
}

int func_146(int iParam0)
{
	return (iParam0 - Global_1296859->f_21) * 1000;
}

void func_147()
{
	if (!func_61(1))
	{
		func_222(Local_163.f_9);
		func_135(1);
	}
}

void func_148()
{
	func_223();
}

void func_149()
{
	func_224();
	Local_163.f_19.f_18 = func_225(func_106(), 2f, 2f, 2f);
}

void func_150()
{
}

void func_151()
{
}

void func_152()
{
	if (func_160(Local_163.f_15))
	{
		return;
	}
	if (func_226())
	{
		return;
	}
	if (func_227(Local_163.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_163.f_15);
		if (fVar0 < 200f)
		{
			func_137(4096);
		}
		else if (fVar0 < 400f)
		{
			func_136(4096);
			func_137(2048);
		}
		else
		{
			func_136(4096);
			func_136(2048);
		}
	}
}

void func_153()
{
	func_228();
	func_229();
}

void func_154()
{
	if (func_230())
	{
		func_137(8);
	}
	else
	{
		func_136(8);
	}
}

void func_155()
{
	func_231();
}

void func_156()
{
	if (!func_120(8, 255))
	{
		func_137(16);
	}
	else
	{
		func_136(16);
	}
}

void func_157()
{
	Local_163.f_6 = -1;
	Local_163.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_163.f_5 = (Local_163.f_5 || Local_34[iVar0]) // PointerArith;
			Local_163.f_6 = (Local_163.f_6 && Local_34[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_158()
{
	return true;
}

void func_159()
{
}

bool func_160(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_162(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_163(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_233(func_232(Param0));
	iVar1 = func_234(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_235(Param0, &Var2);
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

void func_164(int iParam0, int iParam1)
{
	iVar0 = func_236(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_237(iVar0);
}

void func_165(int iParam0, int iParam1)
{
	func_118(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_238(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_239(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_240(iParam0);
			break;
	}
}

bool func_166(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_167(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_168(bool bParam0)
{
	if (network_has_control_of_network_id(Local_13.f_7.f_13))
	{
		if (!is_entity_dead(Local_163.f_19.f_8))
		{
			if (func_241())
			{
				_task_smart_flee_style_coord(Local_163.f_19.f_8, func_106(), 3, 0, -1082130432, -1, 0);
				set_ped_keep_task(Local_163.f_19.f_8, true);
			}
			else
			{
				task_wander_in_area(Local_163.f_19.f_8, get_entity_coords(Local_163.f_19.f_8, true, false), 200f, 1077936128, 1086324736, 0);
				set_ped_keep_task(Local_163.f_19.f_8, true);
			}
		}
		if (bParam0)
		{
			func_242(&(Local_13.f_7.f_13), 0);
		}
		else
		{
			func_243(&(Local_13.f_7.f_13));
		}
	}
	_0x5758b1ee0c3fd4ac(Local_163.f_19.f_10, 1);
	if (does_blip_exist(Local_163.f_19.f_9))
	{
		remove_blip(&(Local_163.f_19.f_9));
	}
	if (_does_scenario_point_exist(Local_163.f_19.f_17))
	{
		_delete_scenario_point(Local_163.f_19.f_17);
	}
	remove_scenario_blocking_area(Local_163.f_19.f_18, false);
	if (network_is_host_of_this_script())
	{
	}
}

bool func_169(var uParam0)
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

int func_170(var uParam0, int iParam1)
{
	iVar0 = func_244(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_245(iParam1)) - 1);
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

void func_171(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_246(uParam0);
			break;
		case 1:
			func_246(uParam0);
			break;
		case 2:
			func_246(uParam0);
			break;
		case 3:
			func_247(uParam0);
			break;
		case 4:
			func_246(uParam0);
			break;
		case 5:
			func_246(uParam0);
			break;
		case 6:
			func_247(uParam0);
			break;
		case 7:
			func_247(uParam0);
			break;
		case 8:
			func_247(uParam0);
			break;
		case 9:
			func_246(uParam0);
			break;
		default:
			func_173(uParam0);
			func_172(uParam0);
			break;
	}
}

void func_172(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_175(uParam0, iVar0);
		iVar0++;
	}
}

void func_173(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_174(uParam0, iVar0);
		iVar0++;
	}
}

void func_174(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_175(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_176(var uParam0, int iParam1)
{
	func_214(&(uParam0->f_25), iParam1);
}

void func_177(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_175(uParam0, 0);
			break;
		case 1:
		case 2:
			func_175(uParam0, 1);
			func_175(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_175(uParam0, 0);
			func_175(uParam0, 2);
			break;
		case 8:
			func_175(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_175(uParam0, 1);
			break;
		default:
			func_172(uParam0);
			break;
	}
}

void func_178(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_248(uParam0);
			break;
		case 1:
			func_249(uParam0);
			break;
		case 2:
			func_250(uParam0);
			break;
		case 3:
			func_251(uParam0);
			break;
		default:
			func_173(uParam0);
			func_172(uParam0);
			break;
	}
}

Vector3 func_179(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_180(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_252(uParam0);
			break;
		case 1:
		case 2:
			func_253(uParam0);
			break;
		case 3:
		case 4:
			func_254(uParam0);
			break;
		default:
			func_172(uParam0);
			break;
	}
	func_173(uParam0);
}

void func_181(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_175(uParam0, 0);
			func_175(uParam0, 2);
			break;
		case 1:
			func_175(uParam0, 1);
			func_175(uParam0, 3);
			break;
		default:
			func_173(uParam0);
			func_172(uParam0);
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
			func_174(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_174(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_174(uParam0, 0);
			break;
		default:
			func_174(uParam0, 0);
			break;
	}
	func_172(uParam0);
}

void func_183(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_174(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_174(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_174(uParam0, 2);
			break;
		default:
			func_173(uParam0);
			break;
	}
	func_172(uParam0);
}

void func_184(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_174(uParam0, 0);
			func_175(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_174(uParam0, 1);
			func_175(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_174(uParam0, 2);
			func_175(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_174(uParam0, 3);
			func_175(uParam0, 0);
			break;
	}
}

void func_185(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_174(uParam0, 0);
			func_175(uParam0, 0);
			break;
		case 2:
			func_174(uParam0, 1);
			func_175(uParam0, 0);
			break;
		case 3:
		case 4:
			func_174(uParam0, 2);
			func_175(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_174(uParam0, 3);
			func_175(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_174(uParam0, 4);
			func_175(uParam0, 1);
			break;
	}
}

void func_186(var uParam0, int iParam1)
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
			func_174(uParam0, 3);
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
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			break;
		default:
			func_173(uParam0);
			break;
	}
	func_172(uParam0);
}

void func_187(var uParam0, int iParam1)
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
			func_174(uParam0, 3);
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
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			break;
		default:
			func_173(uParam0);
			break;
	}
	func_172(uParam0);
}

void func_188(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_175(uParam0, 0);
			func_174(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_175(uParam0, 1);
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			func_174(uParam0, 2);
			break;
		default:
			func_175(uParam0, 0);
			func_174(uParam0, 0);
			break;
	}
}

void func_189(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_175(uParam0, 0);
			func_174(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_175(uParam0, 1);
			func_174(uParam0, 0);
			func_174(uParam0, 1);
			break;
		default:
			func_175(uParam0, 0);
			func_174(uParam0, 0);
			break;
	}
}

void func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_172(uParam0);
			func_173(uParam0);
			break;
		default:
			func_172(uParam0);
			func_173(uParam0);
			break;
	}
}

int func_191(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

int func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_193(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_194(int iParam0, int iParam1)
{
	if (func_255(&Var1, iParam0) && func_256(&Var1, iParam1))
	{
		func_257(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_195(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_255(&Var1, iParam0) && func_256(&Var1, iParam1))
	{
		func_257(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_196(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_258(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_197(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_258(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

int func_198()
{
	return func_259();
}

var func_199()
{
	return func_260();
}

bool func_200(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_202(int iParam0)
{
	if (!func_167(iParam0))
	{
		return false;
	}
	iVar0 = func_261(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_203(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_204(struct<31> Param0)
{
	func_203(&uVar0, Param0);
	return _0x77a6e4ad0c496f81(&uVar0);
}

bool func_205(int iParam0)
{
	*iParam0 = participant_id_to_int();
	if (!func_262(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_206()
{
	return Local_13.f_7.f_9;
}

bool func_207(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_208()
{
	if (network_does_network_id_exist(Local_13.f_7.f_13) && does_entity_exist(net_to_ped(Local_13.f_7.f_13)))
	{
		return true;
	}
	if (!func_265(&(Local_13.f_7.f_13), func_206(), func_263(), func_264(), 1, 0, 1, 1, 1))
	{
		return false;
	}
	_set_ped_quality(net_to_ped(Local_13.f_7.f_13), 2);
	set_ped_config_flag(net_to_ped(Local_13.f_7.f_13), 297, true);
	return true;
}

bool func_209(int iParam0)
{
	return func_166(Local_163.f_5, iParam0);
}

bool func_210(int iParam0)
{
	return func_166(Local_163.f_6, iParam0);
}

int func_211()
{
	func_266();
	func_267();
	if (func_268())
	{
		if (Local_13.f_7 != 4)
		{
			func_269(4);
		}
	}
	switch (Local_13.f_7)
	{
		case 0:
			if (func_270())
			{
				func_269(1);
			}
			break;
		case 1:
			if (func_271())
			{
				func_269(2);
			}
			break;
		case 2:
			if (func_272())
			{
				func_269(3);
			}
			break;
		case 3:
			if (func_273())
			{
				func_269(4);
			}
			break;
		case 4:
			if (func_274())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_213(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	if (!func_202(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_214(var uParam0, int iParam1)
{
	func_275(uParam0, iParam1);
}

void func_215(var uParam0, int iParam1)
{
	func_276(uParam0, iParam1);
}

void func_216(int iParam0)
{
	Var0.f_10 = 255;
	get_event_data(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_277(&Var0, iParam0))
			{
				func_278(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_217(int iParam0)
{
}

void func_218(int iParam0)
{
}

int func_219()
{
	switch (func_206())
	{
		case 98537260:
			return 519635473;
		case 1458540991:
			return 1051774341;
		case 252669332:
			return 1935884576;
		case 2028722809:
			return -1638353519;
		case 1104697660:
			return -1415296020;
		case 480688259:
			return -1534116401;
		case -1143398950:
			return 1974927641;
		case 90264823:
			return -963073294;
		default:
			break;
	}
	return 0;
}

float func_220()
{
	fVar0 = -1f;
	switch (func_198())
	{
		case 0:
			fVar0 = 141f;
			break;
		case 1:
			fVar0 = 68.7f;
			break;
		case 2:
			fVar0 = 121.4f;
			break;
		case 3:
			fVar0 = 272.5f;
			break;
		case 4:
			fVar0 = 240f;
			break;
		case 5:
			fVar0 = 60.4f;
			break;
		case 6:
			fVar0 = 139.3f;
			break;
		case 7:
			fVar0 = 181f;
			break;
		case 8:
			fVar0 = 194.9f;
			break;
		case 9:
			fVar0 = 227.6f;
			break;
		case 10:
			fVar0 = 319.3f;
			break;
		case 11:
			fVar0 = 284.1f;
			break;
		case 12:
			fVar0 = 120.5f;
			break;
		case 13:
			fVar0 = 327.6f;
			break;
		case 14:
			fVar0 = 213f;
			break;
		case 15:
			fVar0 = 232f;
			break;
		case 16:
			fVar0 = 284.7f;
			break;
		case 17:
			fVar0 = 193.9f;
			break;
		case 18:
			fVar0 = 167.4f;
			break;
		case 19:
			fVar0 = 292.7f;
			break;
		case 20:
			fVar0 = 305.2f;
			break;
	}
	return fVar0;
}

Vector3 func_221()
{
	switch (func_206())
	{
		case 98537260:
			return -0.03f, -0.12f, 0f;
		case 1458540991:
			return 0f, -0.27f, 0f;
		case 252669332:
			return 0f, -0.444f, 0f;
		case 2028722809:
			return 0f, -0.71f, 0f;
		case 1104697660:
			return 0.03f, -0.2f, 0f;
		case 480688259:
			return 0.04f, -0.38f, 0f;
		case -1143398950:
			return 0f, -0.48f, 0f;
		case 90264823:
			return 0f, -0.63f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_222(struct<2> Param0)
{
	if (func_234(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_234(Param0)))
	{
		_0x99230691875fc218(func_232(Param0), func_234(Param0), Global_35);
	}
}

void func_223()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_160((*Local_163.f_48[iVar0])[iVar1]->f_3))
			{
				if (!func_161((*Local_163.f_48[iVar0])[iVar1]))
				{
					if ((*Local_163.f_48[iVar0])[iVar1]->f_7)
					{
						vVar2 = { (*Local_163.f_48[iVar0])[iVar1]->f_3 };
					}
					else
					{
						vVar2 = { _get_object_offset_from_coords(Local_163.f_15, 0f, (*Local_163.f_48[iVar0])[iVar1]->f_3) };
					}
					(*Local_163.f_48[iVar0])[iVar1] = _0xfa50f79257745e74(vVar2, (*Local_163.f_48[iVar0])[iVar1]->f_6, (*Local_163.f_48[iVar0])[iVar1]->f_2, (*Local_163.f_48[iVar0])[iVar1]->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_224()
{
	Local_163.f_19.f_8 = net_to_ped(Local_13.f_7.f_13);
	if (network_has_control_of_network_id(Local_13.f_7.f_13))
	{
		set_blocking_of_non_temporary_events(Local_163.f_19.f_8, true);
	}
}

int func_225(vector3 vParam0, vector3 vParam3)
{
	return add_scenario_blocking_area((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

bool func_226()
{
	return (func_121(32) || func_120(32, 255));
}

bool func_227(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_279(iParam0, 1178968787) };
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

void func_228()
{
}

void func_229()
{
}

bool func_230()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_163.f_14))
	{
		return false;
	}
	if (func_280())
	{
		return false;
	}
	if (func_281(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_231()
{
	if (!func_205(&iVar0))
	{
		return;
	}
	if ((!func_282(1) && func_283(player_ped_id(), func_106(), 100f, 0, 0)) && func_284())
	{
		func_285();
		func_286(1);
	}
	func_287();
	switch (Local_34[iVar0]->f_1)
	{
		case 0:
			if (func_288())
			{
				func_289(1);
			}
			break;
		case 1:
			if (func_290())
			{
				func_289(2);
			}
			break;
		case 2:
			if (func_291())
			{
				func_289(3);
			}
			break;
		case 3:
			if (func_292())
			{
				func_289(4);
			}
			break;
		case 4:
			break;
	}
}

int func_232(var uParam0, var uParam1)
{
	return uParam0;
}

int func_233(int iParam0)
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

int func_234(struct<2> Param0)
{
	return func_293(Param0);
}

void func_235(struct<2> Param0, var uParam2)
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
	switch (func_232(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_295(func_294(Param0));
			iVar5 = func_296(iVar4);
			if (!func_297(iVar5, 0))
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

int func_236(int iParam0, int iParam1)
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

void func_237(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_298(&Var0);
}

var func_238(int iParam0)
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

var func_239(int iParam0)
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

var func_240(int iParam0)
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

bool func_241()
{
	switch (func_206())
	{
		case 98537260:
		case 1104697660:
			return true;
		default:
			break;
	}
	return false;
}

void func_242(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		delete_entity(&iVar0);
	}
}

void func_243(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		set_entity_as_no_longer_needed(&iVar0);
	}
}

int func_244(int iParam0)
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

int func_245(int iParam0)
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

void func_246(var uParam0)
{
	func_174(uParam0, 0);
	func_174(uParam0, 1);
	func_174(uParam0, 3);
	func_172(uParam0);
}

void func_247(var uParam0)
{
	func_173(uParam0);
	func_299(uParam0, 0, 3);
}

void func_248(var uParam0)
{
	func_174(uParam0, 0);
	func_175(uParam0, 0);
	func_175(uParam0, 1);
	func_175(uParam0, 2);
}

void func_249(var uParam0)
{
	func_174(uParam0, 1);
	func_172(uParam0);
}

void func_250(var uParam0)
{
	func_174(uParam0, 2);
	func_175(uParam0, 3);
}

void func_251(var uParam0)
{
	func_174(uParam0, 3);
	func_175(uParam0, 4);
}

void func_252(var uParam0)
{
	func_175(uParam0, 0);
	func_175(uParam0, 1);
}

void func_253(var uParam0)
{
	func_175(uParam0, 2);
	func_175(uParam0, 3);
}

void func_254(var uParam0)
{
	func_175(uParam0, 4);
	func_175(uParam0, 5);
}

bool func_255(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_256(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_257(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_258(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

var func_259()
{
	return Local_163.f_2;
}

var func_260()
{
	return Local_163.f_3;
}

int func_261(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_262(int iParam0, bool bParam1)
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

Vector3 func_263()
{
	if (func_241())
	{
		switch (func_198())
		{
			case 0:
			case 1:
			case 14:
			case 15:
				return 0f, 0f, 0f;
			case 2:
				return 2499.929f, 921.9749f, 74.177f;
			case 3:
				return 1141.117f, 642.0093f, 94.421f;
			case 4:
				return -749.5237f, -296.766f, 43.3761f;
			case 5:
				return -329.0235f, -52.5757f, 45.8452f;
			case 6:
				return -2053.756f, -116.8186f, 230.0462f;
			case 7:
				return -1702.605f, -479.6481f, 146.3338f;
			case 8:
				return -2662.749f, -309.4969f, 151.3755f;
			case 9:
				return -980.2054f, -881.1652f, 41.6434f;
			case 10:
				return -756.0024f, -1652.032f, 52.6045f;
			case 11:
				return -1144.993f, -1901.913f, 43.5536f;
			case 12:
				return 1715.549f, 1432.565f, 149.1353f;
			case 13:
				return 1511.118f, 1464.94f, 149.3803f;
			case 16:
				return 2151.582f, -324.508f, 41.2257f;
			case 17:
				return 2418.005f, -454.8427f, 41.4962f;
			case 18:
				return -3221.346f, -3158.854f, -1.2424f;
			case 19:
				return -1821.95f, -2976.88f, -11.8508f;
			case 20:
				return -1787.927f, -2408.416f, 42.8006f;
			default:
				break;
		}
	}
	*vVar0[0] = { 0f, 0f, 0f };
	switch (func_198())
	{
		case 0:
			*vVar0[0] = { 2237.093f, 1380.931f, 85.2051f };
			*vVar0[1] = { 2281.359f, 1331.793f, 87.4576f };
			*vVar0[2] = { 2281.359f, 1331.793f, 87.4576f };
			break;
		case 1:
			*vVar0[0] = { 2309.382f, 1600.389f, 85.6999f };
			*vVar0[1] = { 2309.382f, 1600.389f, 85.6999f };
			*vVar0[2] = { 2278.347f, 1583.027f, 90.2505f };
			break;
		case 2:
			*vVar0[0] = { 2499.929f, 921.9749f, 74.177f };
			*vVar0[1] = { 2499.929f, 921.9749f, 74.177f };
			*vVar0[2] = { 2499.929f, 921.9749f, 74.177f };
			break;
		case 3:
			*vVar0[0] = { 1060.92f, 581.6669f, 97.0162f };
			*vVar0[1] = { 1060.92f, 581.6669f, 97.0162f };
			*vVar0[2] = { 1060.92f, 581.6669f, 97.0162f };
			break;
		case 4:
			*vVar0[0] = { -749.3711f, -366.9533f, 41.0892f };
			*vVar0[1] = { -749.3711f, -366.9533f, 41.0892f };
			*vVar0[2] = { -749.3711f, -366.9533f, 41.0892f };
			break;
		case 5:
			*vVar0[0] = { -389.5133f, -13.34f, 41.148f };
			*vVar0[1] = { -460.9073f, -152.8856f, 40.9957f };
			*vVar0[2] = { -396.0391f, -163.0576f, 48.4683f };
			break;
		case 6:
			*vVar0[0] = { -2112.213f, -183.2262f, 205.0876f };
			*vVar0[1] = { -2084.974f, -139.1795f, 216.9706f };
			*vVar0[2] = { -2084.974f, -139.1795f, 216.9706f };
			break;
		case 7:
			*vVar0[0] = { -1679.426f, -468.7442f, 152.9432f };
			*vVar0[1] = { -1679.426f, -468.7442f, 152.9432f };
			*vVar0[2] = { -1704.041f, -464.1898f, 147.6129f };
			break;
		case 8:
			*vVar0[0] = { -2669.562f, -330.1496f, 141.9721f };
			*vVar0[1] = { -2586.323f, -307.567f, 150.4258f };
			*vVar0[2] = { -2630.061f, -262.2281f, 163.2078f };
			break;
		case 9:
			*vVar0[0] = { -991.1825f, -898.5116f, 44.3542f };
			*vVar0[1] = { -991.1825f, -898.5116f, 44.3542f };
			*vVar0[2] = { -991.1825f, -898.5116f, 44.3542f };
			break;
		case 10:
			*vVar0[0] = { -758.0438f, -1712.119f, 43.3051f };
			*vVar0[1] = { -758.0438f, -1712.119f, 43.3051f };
			*vVar0[2] = { -743.8483f, -1743.072f, 43.7966f };
			break;
		case 12:
			*vVar0[0] = { 1718.777f, 1512.462f, 147.2264f };
			*vVar0[1] = { 1759.737f, 1452.263f, 156.6534f };
			*vVar0[2] = { 1715.549f, 1432.565f, 149.1353f };
			break;
		case 14:
			*vVar0[0] = { 1218.487f, 1216.578f, 155.7601f };
			*vVar0[1] = { 1218.487f, 1216.578f, 155.7601f };
			*vVar0[2] = { 1218.487f, 1216.578f, 155.7601f };
			break;
		case 15:
			*vVar0[0] = { 1898.424f, -373.1028f, 42.3333f };
			*vVar0[1] = { 1898.424f, -373.1028f, 42.3333f };
			*vVar0[2] = { 1898.424f, -373.1028f, 42.3333f };
			break;
		case 16:
			*vVar0[0] = { 2151.582f, -324.508f, 41.2257f };
			*vVar0[1] = { 2175.533f, -291.4925f, 41.669f };
			*vVar0[2] = { 2202.655f, -353.7488f, 42.0224f };
			break;
		case 17:
			*vVar0[0] = { 2418.005f, -454.8427f, 41.4962f };
			*vVar0[1] = { 2418.005f, -454.8427f, 41.4962f };
			*vVar0[2] = { 2418.005f, -454.8427f, 41.4962f };
			break;
		case 18:
			*vVar0[0] = { -3249.258f, -3132.819f, -7.0835f };
			*vVar0[1] = { -3221.346f, -3158.854f, -1.2424f };
			*vVar0[2] = { -3208.264f, -3174.166f, -6.574f };
			break;
		case 20:
			*vVar0[0] = { -1749.76f, -2354.581f, 41.8165f };
			*vVar0[1] = { -1740.252f, -2428.295f, 41.2845f };
			*vVar0[2] = { -1787.927f, -2408.416f, 42.8006f };
			break;
	}
	if (func_300(*vVar0[0], 0f, 0f, 0f))
	{
		return 0f, 0f, 0f;
	}
	vVar10 = { 0f, 0f, 0f };
	iVar13 = 0;
	while (iVar13 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar13)) && func_283(get_player_ped(network_get_player_index(int_to_participantindex(iVar13))), func_106(), 200f, 0, 1))
		{
			vVar10 = { vVar10 + get_entity_coords(get_player_ped(network_get_player_index(int_to_participantindex(iVar13))), true, false) };
			iVar14++;
		}
		iVar13++;
	}
	vVar10 = { vVar10 / FtoV(IntToFloat(iVar14)) };
	fVar15 = 0f;
	fVar16 = 0f;
	iVar17 = -1;
	iVar13 = 0;
	while (iVar13 <= 2)
	{
		fVar15 = vdist2(*vVar0[iVar13], vVar10);
		if (fVar15 > fVar16)
		{
			fVar16 = fVar15;
			iVar17 = iVar13;
		}
		iVar13++;
	}
	return *vVar0[iVar17];
}

float func_264()
{
	return 0f;
}

bool func_265(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_207(iParam1))
	{
		return false;
	}
	iVar0 = func_301(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

void func_266()
{
	Local_163.f_19.f_1++;
	if (Local_163.f_19.f_1 >= network_get_max_num_participants())
	{
		Local_163.f_19.f_1 = 0;
	}
	iVar0 = Local_163.f_19.f_1;
	if (!func_302(4) && func_303(iVar0, 1))
	{
		func_304(4);
	}
	if (!func_302(16) && func_303(iVar0, 2))
	{
		func_304(16);
	}
	if (!func_302(32) && func_303(iVar0, 4))
	{
		func_304(32);
	}
	if (Local_13.f_7 == 2 && Local_34[iVar0]->f_1 == 4)
	{
		func_269(4);
	}
}

void func_267()
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		iVar0++;
	}
}

bool func_268()
{
	if (func_302(16) && Local_13.f_7.f_10 != 9)
	{
		func_305(9);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			func_305(1);
			break;
		case 1:
			if (func_302(4))
			{
				func_305(2);
			}
			break;
		case 2:
			if (func_241())
			{
				if (func_283(Local_163.f_19.f_8, func_306(), 5f, 1, 1) || func_307(16))
				{
					func_305(3);
				}
			}
			else if (func_283(Local_163.f_19.f_8, func_306(), 10f, 1, 1) || func_307(16))
			{
				func_305(3);
			}
			break;
		case 3:
			if (func_241())
			{
				func_305(4);
			}
			else if (func_283(Local_163.f_19.f_8, func_306(), 4f, 1, 1) || func_307(32))
			{
				func_305(4);
			}
			break;
		case 4:
			if (func_283(Local_163.f_19.f_8, _get_scenario_point_coords(Local_163.f_19.f_17, true), 2f, 1, 1) && is_ped_using_any_scenario(Local_163.f_19.f_8))
			{
				func_305(5);
			}
			break;
		case 5:
			if (Local_13.f_7 >= 4)
			{
				if (func_308(&(Local_13.f_7.f_6), 3000))
				{
					func_309();
					func_305(8);
				}
			}
			else if (func_308(&(Local_13.f_7.f_6), 30000))
			{
				func_309();
				func_305(8);
			}
			break;
		case 6:
			break;
		case 7:
			if (func_308(&(Local_13.f_7.f_6), 10000))
			{
				func_305(9);
			}
			break;
		case 8:
			return true;
		case 9:
			break;
	}
	return false;
}

void func_269(int iParam0)
{
	if (Local_13.f_7 == iParam0)
	{
		return;
	}
	Local_13.f_7 = iParam0;
	func_310(&(Local_13.f_7.f_3));
}

bool func_270()
{
	return true;
}

bool func_271()
{
	if (func_302(4))
	{
		return true;
	}
	return false;
}

bool func_272()
{
	if (func_302(32))
	{
		return true;
	}
	return false;
}

bool func_273()
{
	if (func_307(8))
	{
		return true;
	}
	return false;
}

bool func_274()
{
	return true;
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_277(int* iParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_163.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_163)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_163.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_163.f_3)
	{
		return false;
	}
	return true;
}

void func_278(int iParam0)
{
	if (!func_205(&iVar0))
	{
		return;
	}
	switch (iParam0->f_9)
	{
		case -713336544:
			if (network_is_host_of_this_script())
			{
				if (Local_13.f_7.f_11 == -1)
				{
					Local_13.f_7.f_11 = iParam0->f_11;
					func_311();
				}
			}
			break;
		case -1213418800:
			if (get_unique_int_for_player(player_id()) == iParam0->f_11)
			{
				func_286(32);
			}
			else
			{
				func_286(64);
			}
			if (func_282(8))
			{
				func_312(8);
			}
			break;
		case 851346657:
			if (func_282(64))
			{
				func_312(64);
			}
			if (network_is_host_of_this_script())
			{
				Local_13.f_7.f_11 = -1;
			}
			break;
		case -1571564170:
			if (does_entity_exist(&(Local_163.f_19.f_11[0])))
			{
				func_313();
			}
			start_particle_fx_non_looped_at_coord("scr_egg_break", func_106(), func_314(), 1f, false, false, false);
			break;
		case 1241867137:
			if (!func_303(iVar0, 4))
			{
				func_286(2);
				func_315();
			}
			if (network_is_host_of_this_script())
			{
				if (Local_13.f_7.f_12 == -1)
				{
					Local_13.f_7.f_12 = iParam0->f_11;
				}
			}
			break;
		case 1649314687:
			bVar1 = func_316();
			Local_163.f_19.f_7 = iParam0->f_1;
			if (bVar1)
			{
				Local_163.f_19.f_9 = _blip_add_for_entity(831283580, Local_163.f_19.f_8);
			}
			if (network_has_control_of_entity(Local_163.f_19.f_8))
			{
				if (is_ped_using_any_scenario(Local_163.f_19.f_8))
				{
					_0xf1c03a5352243a30(Local_163.f_19.f_8);
				}
				if (bVar1)
				{
					task_combat_ped(Local_163.f_19.f_8, get_player_ped(Local_163.f_19.f_7), 0, 0);
				}
				else
				{
					_task_smart_flee_style_ped(Local_163.f_19.f_8, get_player_ped(Local_163.f_19.f_7), 3, 0, -1082130432, -1, 0);
				}
			}
			func_286(4);
			if (network_is_host_of_this_script())
			{
				func_304(8);
				if (bVar1)
				{
					func_305(7);
				}
				else
				{
					func_305(6);
				}
			}
			break;
	}
}

struct<2> func_279(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_317(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_318(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

bool func_280()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_281(int iParam0)
{
	if (func_319(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_282(int iParam0)
{
	return func_200(Local_163.f_19, iParam0);
}

bool func_283(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_320(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_284()
{
	Local_163.f_19.f_10 = _0x5b4bbe80ad5972dc(func_105(), func_106(), 0f, 0, &uVar0, -1);
	return true;
}

void func_285()
{
	iVar1[0] = func_321();
	if (func_323(&(Local_163.f_19.f_11), &iVar1, func_322(), func_106(), 5f) > 0)
	{
		iVar0 = 0;
		while (iVar0 < func_322())
		{
			if (does_entity_exist(&(Local_163.f_19.f_11[iVar0])))
			{
				_0x7563cbca99253d1a(&(Local_163.f_19.f_11[iVar0]), 187984275);
				_0x543dfe14be720027(player_id(), &(Local_163.f_19.f_11[iVar0]), 0);
				_0x6ecfc621a168424c(&(Local_163.f_19.f_11[iVar0]), &(Local_163.f_19.f_11[iVar0]), 0, 0);
			}
			iVar0++;
		}
	}
	iVar1[0] = func_324();
	if (func_323(&uVar3, &iVar1, 1, func_106(), 5f) > 0)
	{
		_0x7563cbca99253d1a(&(uVar3[0]), 187984275);
	}
}

void func_286(int iParam0)
{
	func_214(&(Local_163.f_19), iParam0);
}

void func_287()
{
	if (!func_205(&iVar0))
	{
		return;
	}
	bVar1 = Local_163.f_19.f_6 != Local_13.f_7.f_10;
	Local_163.f_19.f_6 = Local_13.f_7.f_10;
	func_325(bVar1);
	if ((!func_282(4) && !func_302(8)) && func_326())
	{
		func_286(4);
		func_327();
	}
	if ((Local_13.f_7.f_10 == 4 || Local_13.f_7.f_10 == 5) || Local_13.f_7.f_10 == 8)
	{
		remove_particle_fx_from_entity(Local_163.f_19.f_8);
		func_328(Local_163.f_19.f_8);
	}
	if ((Local_13.f_7.f_10 == 6 && !func_329(player_ped_id(), Local_163.f_19.f_8, 50f, 1, 1)) && does_blip_exist(Local_163.f_19.f_9))
	{
		remove_blip(&(Local_163.f_19.f_9));
	}
	if (!network_has_control_of_entity(Local_163.f_19.f_8))
	{
		return;
	}
	if (!func_303(iVar0, 2) && is_entity_dead(Local_163.f_19.f_8))
	{
		if (does_blip_exist(Local_163.f_19.f_9))
		{
			remove_blip(&(Local_163.f_19.f_9));
		}
		func_330(2);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			break;
		case 1:
			if (func_241())
			{
				if (!func_331(Local_163.f_19.f_8, 475934052))
				{
					task_flying_circle(Local_163.f_19.f_8, 1f, func_263() + Vector(40f, 0f, 0f), 0f, 2f);
				}
			}
			else if (!func_331(Local_163.f_19.f_8, 923520851))
			{
				task_wander_in_area(Local_163.f_19.f_8, get_entity_coords(Local_163.f_19.f_8, true, false), 10f, 1077936128, 1086324736, 0);
			}
			break;
		case 2:
			if (bVar1)
			{
				if (func_241())
				{
					task_fly_to_coord(Local_163.f_19.f_8, func_332(), func_306(), 1, 0);
				}
				else
				{
					task_follow_nav_mesh_to_coord(Local_163.f_19.f_8, func_306(), func_332(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_283(Local_163.f_19.f_8, func_306(), 5f, 1, 1) && (get_frame_count() % 30) == 0)
			{
				if (func_241())
				{
					if (!func_331(Local_163.f_19.f_8, -708058584))
					{
						task_fly_to_coord(Local_163.f_19.f_8, func_332(), func_306(), 1, 0);
					}
				}
				else if (!func_331(Local_163.f_19.f_8, 713668775))
				{
					task_follow_nav_mesh_to_coord(Local_163.f_19.f_8, func_306(), func_332(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_303(iVar0, 16) && func_283(Local_163.f_19.f_8, func_306(), 10f, 1, 1))
			{
				func_330(16);
			}
			break;
		case 3:
			if (bVar1)
			{
				if (!func_241())
				{
					task_follow_nav_mesh_to_coord(Local_163.f_19.f_8, func_306(), func_333(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_303(iVar0, 32) && func_283(Local_163.f_19.f_8, func_306(), 4f, 1, 1))
			{
				func_330(32);
			}
			break;
		case 4:
			if (bVar1)
			{
				_task_use_scenario_point(Local_163.f_19.f_8, Local_163.f_19.f_17, 0, 0, true, false, 0, false, -1f, false);
			}
			break;
		case 5:
			if (bVar1)
			{
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (network_has_control_of_entity(Local_163.f_19.f_8))
			{
				func_243(&(Local_13.f_7.f_13));
			}
			break;
		case 9:
			if (network_has_control_of_entity(Local_163.f_19.f_8))
			{
				func_243(&(Local_13.f_7.f_13));
			}
			break;
	}
}

bool func_288()
{
	return true;
}

void func_289(int iParam0)
{
	if (!func_205(&iVar0))
	{
		return;
	}
	if (Local_34[iVar0]->f_1 == iParam0)
	{
		return;
	}
	Local_34[iVar0]->f_1 = iParam0;
	func_310(&(Local_163.f_19.f_2));
}

bool func_290()
{
	if (func_283(player_ped_id(), func_106(), 60f, 1, 1))
	{
		func_330(1);
		return true;
	}
	return false;
}

bool func_291()
{
	if (!func_205(&iVar0))
	{
		return false;
	}
	if (!func_282(2) && Local_13.f_7.f_10 == 8)
	{
		if (!func_282(256))
		{
			if (func_334(3) < 3)
			{
				func_335("NBEGP_H_FAIL");
			}
			func_286(256);
		}
		func_286(2);
	}
	if (!func_303(iVar0, 4) && !func_282(2))
	{
		func_336(&(Local_163.f_19.f_19), func_106(), 1, 1, 1, 0);
		if (func_283(Global_34, func_106(), 7f, 1, 1))
		{
			func_337(&(Local_163.f_19.f_28));
		}
		if ((get_frame_count() % 5) == 0)
		{
			bVar1 = ((Global_1940258->f_38 == 1652431022 && is_first_person_aim_cam_active()) || func_338());
			func_339(bVar1);
		}
	}
	if (!func_282(16))
	{
		if (((func_329(player_ped_id(), &(Local_163.f_19.f_11[0]), 30f, 1, 1) && !is_entity_occluded(&(Local_163.f_19.f_11[0]))) || (func_329(player_ped_id(), Local_163.f_19.f_8, 30f, 1, 1) && !is_entity_occluded(Local_163.f_19.f_8))) || func_329(player_ped_id(), &(Local_163.f_19.f_11[0]), 3f, 1, 1))
		{
			func_340();
			func_341();
			func_286(16);
		}
	}
	func_342();
	if (func_282(2))
	{
		if (does_entity_exist(&(Local_163.f_19.f_11[0])))
		{
			func_313();
		}
	}
	if (!func_282(2) && func_343())
	{
		if (!func_303(iVar0, 4) && !func_282(2))
		{
			func_344();
			return true;
		}
	}
	return false;
}

bool func_292()
{
	if (!func_205(&iVar0))
	{
		return false;
	}
	if (!func_303(iVar0, 8) && func_307(8))
	{
		func_315();
		func_313();
	}
	if (!func_303(iVar0, 8) && get_unique_int_for_player(player_id()) == Local_13.f_7.f_12)
	{
		func_345(1);
		func_347(func_346(), 0);
		func_330(8);
		return true;
	}
	return false;
}

int func_293(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_348(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_294(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_348(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_295(int iParam0)
{
	iVar0 = -1;
	if (func_255(&Var1, iParam0))
	{
		iVar0 = ((func_349() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_296(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_297(int iParam0, int iParam1)
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

void func_298(var uParam0)
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
	_trigger_script_event_2(uParam0, 8, 18, &(Global_1051252->f_16[16]));
	func_350(uParam0, uParam0->f_1);
}

void func_299(var uParam0, int iParam1, int iParam2)
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
		func_175(uParam0, iVar0);
		iVar0++;
	}
}

bool func_300(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_301(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_302(int iParam0)
{
	return func_200(Local_13.f_7.f_1, iParam0);
}

bool func_303(int iParam0, int iParam1)
{
	return func_200(Local_34[iParam0]->f_1.f_1, iParam1);
}

void func_304(int iParam0)
{
	func_214(&(Local_13.f_7.f_1), iParam0);
}

void func_305(int iParam0)
{
	if (Local_13.f_7.f_10 == iParam0)
	{
		return;
	}
	Local_13.f_7.f_10 = iParam0;
}

Vector3 func_306()
{
	if (func_241())
	{
		vVar0 = { _get_object_offset_from_coords(func_106(), func_351(), 4f, 0f, 10f) };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(func_106(), func_351(), 8f, 0f, 10f) };
	}
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		vVar0 = { vVar0.x, vVar0.y, uVar3 };
	}
	return vVar0;
}

bool func_307(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_303(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_308(var uParam0, int iParam1)
{
	if (!func_352(uParam0))
	{
		func_353(uParam0, 0);
		return false;
	}
	if (func_354(uParam0, iParam1))
	{
		func_355(uParam0);
		return true;
	}
	return false;
}

void func_309()
{
	Var0 = { func_356(-1571564170) };
	Var0.f_11 = get_unique_int_for_player(player_id());
	func_357(&Var0);
}

void func_310(var uParam0)
{
	func_358(uParam0, 0);
}

void func_311()
{
	Var0 = { func_356(-1213418800) };
	Var0.f_11 = Local_13.f_7.f_11;
	func_357(&Var0);
}

void func_312(int iParam0)
{
	func_215(&(Local_163.f_19), iParam0);
}

void func_313()
{
	iVar0 = 0;
	while (iVar0 < func_322())
	{
		if (does_entity_exist(&(Local_163.f_19.f_11[iVar0])))
		{
			delete_object(Local_163.f_19.f_11[iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_314()
{
	return 0f, 0f, 0f;
}

void func_315()
{
	iVar0 = 0;
	while (iVar0 < func_322())
	{
		if (does_entity_exist(&(Local_163.f_19.f_11[iVar0])))
		{
			_0x9dae1380cc5c6451(player_id(), &(Local_163.f_19.f_11[iVar0]));
			_0xdc5e09d012d759c4(&(Local_163.f_19.f_11[iVar0]), &(Local_163.f_19.f_11[iVar0]), 0);
		}
		iVar0++;
	}
}

bool func_316()
{
	iVar0 = get_random_int_in_range(0, 100);
	switch (func_206())
	{
		case 98537260:
		case 252669332:
		case 1104697660:
		case 1458540991:
		case 2028722809:
			return false;
		case 480688259:
			return iVar0 < 50;
		case -1143398950:
			return iVar0 < 100;
		case 90264823:
			return iVar0 < 100;
		default:
			break;
	}
	return false;
}

int func_317(int iParam0)
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

struct<2> func_318(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_319(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_320(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_321()
{
	switch (func_198())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return -946816685;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 1390217426;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 755040865;
		default:
			break;
	}
	return 0;
}

int func_322()
{
	switch (func_198())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 5;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 4;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 3;
		default:
			break;
	}
	return 1;
}

int func_323(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_359(uParam0, iParam1, iVar0, iParam2);
	func_360(iVar0);
	return iVar1;
}

int func_324()
{
	switch (func_198())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 420299933;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1824227939;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -235579763;
		default:
			break;
	}
	return 0;
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		if ((Local_13.f_7.f_10 == 2 || Local_13.f_7.f_10 == 4) || Local_13.f_7.f_10 == 5)
		{
			if (!func_282(128))
			{
				if (func_334(3) < 3)
				{
					func_335("NBEGP_H_INVESTIGATE");
				}
				func_286(128);
			}
			func_340();
			func_361(-342321975, Local_163.f_19.f_8, 1);
		}
	}
	if (Local_13.f_7.f_10 == 5)
	{
		if (func_352(&(Local_13.f_7.f_6)) && func_362(&(Local_13.f_7.f_6)) > (4000 * Local_163.f_19.f_5 + 1))
		{
			Local_163.f_19.f_5++;
			func_361(-342321975, Local_163.f_19.f_8, 1);
		}
	}
}

bool func_326()
{
	if (!func_329(player_ped_id(), Local_163.f_19.f_8, 75f, 1, 1))
	{
		return false;
	}
	if (func_329(player_ped_id(), Local_163.f_19.f_8, 4f, 1, 1))
	{
		return true;
	}
	if ((!func_241() && func_329(player_ped_id(), Local_163.f_19.f_8, 8f, 1, 1)) && has_entity_clear_los_to_entity(Local_163.f_19.f_8, player_ped_id(), 17))
	{
		return true;
	}
	if (_0x285d36c5c72b0569(player_ped_id()) < 0.5f)
	{
		if (func_241())
		{
			return true;
		}
		else if (func_329(player_ped_id(), Local_163.f_19.f_8, 60f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_327()
{
	Var0 = { func_356(1649314687) };
	func_357(&Var0);
}

void func_328(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_329(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_320(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_330(int iParam0)
{
	if (!func_205(&iVar0))
	{
		return;
	}
	func_214(&(Local_34[iVar0]->f_1.f_1), iParam0);
}

bool func_331(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

float func_332()
{
	switch (func_199())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1.5f;
		case 2:
		case 5:
			return 2f;
		default:
			break;
	}
	return 1.5f;
}

float func_333()
{
	switch (func_199())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1f;
		case 2:
		case 5:
			return 1.5f;
		default:
			break;
	}
	return 1f;
}

int func_334(int iParam0)
{
	Var0 = { func_279(iParam0, -1797584255) };
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

var func_335(char* sParam0)
{
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	return func_363(sParam0, 10000, 0, 0, 0, 1);
}

void func_336(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_364(-1733092640, 1))
	{
		return;
	}
	if (func_365(0))
	{
		return;
	}
	if (func_366())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_280())
	{
		return;
	}
	if (!is_player_control_on(get_player_index()))
	{
		return;
	}
	if (!is_entity_dead(get_player_ped(player_id())) && _0xec7e480ff8bd0bed(get_player_ped(player_id())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_160(*Global_1212889) && get_distance_between_coords(*Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_367(get_player_ped(player_id()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_368()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = get_sound_id();
						if (func_369(get_player_ped(player_id()), 0, 1, 0) != -862059856)
						{
							_0xdcf5ba95bbf0faba(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_370(uParam0, 1);
					}
				}
				else
				{
					func_370(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = floor((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = floor((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = absi(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (fVar1 < 3f && bParam7)
			{
				func_371(250);
			}
			set_pad_shake(0, iVar3, iVar4);
			func_372(&(uParam0->f_2));
			func_370(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_373(uParam0);
				}
				func_370(uParam0, 0);
			}
			else if (func_374(&(uParam0->f_2)) >= 2f)
			{
				func_370(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_371(250);
			}
			break;
	}
}

void func_337(var uParam0)
{
	if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (_uiprompt_is_control_action_active(668058244))
		{
			if (!*uParam0)
			{
				play_sound_frontend("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

bool func_338()
{
	return Global_1146212->f_21645[53]->f_208;
}

void func_339(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < func_322())
	{
		if (does_entity_exist(&(Local_163.f_19.f_11[iVar0])))
		{
			if (bParam0)
			{
				_0x907b16b3834c69e2(&(Local_163.f_19.f_11[iVar0]), 500f);
			}
			else
			{
				_0x907b16b3834c69e2(&(Local_163.f_19.f_11[iVar0]), 100f);
			}
		}
		iVar0++;
	}
}

void func_340()
{
	if (!func_120(32, 255))
	{
		func_375(Local_163.f_1, Local_163.f_3);
		if (!func_120(1024, 255))
		{
			func_376(Local_163.f_1);
			func_137(1024);
		}
		iVar0 = func_236(Local_163.f_1, Local_163.f_2);
		func_377(iVar0);
		func_378(iVar0);
		func_135(2);
		func_379(Local_163.f_9);
		func_380(Local_163.f_1);
		func_381(Local_163.f_1, Local_163.f_2, Local_163.f_3);
		func_137(32);
	}
}

void func_341()
{
	if (!func_61(2))
	{
		return;
	}
	func_135(8);
}

void func_342()
{
	if ((!func_282(32) && !func_282(64)) && !func_282(8))
	{
		if (func_382())
		{
			func_383();
			func_286(8);
		}
	}
	if (func_282(32) && !func_382())
	{
		func_384();
		func_312(32);
	}
	if (func_282(64) || func_282(2))
	{
		_0x082c043c7afc3747(Local_163.f_19.f_10, 1);
	}
}

bool func_343()
{
	if (get_entity_model(func_385(player_ped_id(), 0)) != func_324())
	{
		return false;
	}
	if (_0x5463c962bc7777c3(player_ped_id(), 0, &uVar0, 1, 1) != 8)
	{
		return false;
	}
	return true;
}

void func_344()
{
	func_330(4);
	Var0 = { func_356(1241867137) };
	Var0.f_11 = get_unique_int_for_player(player_id());
	func_357(&Var0);
}

void func_345(bool bParam0)
{
	if (!func_61(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_61(256))
		{
			func_165(Local_163.f_18, 0);
			func_135(256);
		}
	}
	func_135(16);
}

int func_346()
{
	switch (func_198())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 1510925660;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1390165137;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 1824947548;
		default:
			break;
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_386(&Var4, 1356624740);
	return func_387(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_348(struct<2> Param0, var uParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_388(uParam2);
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

int func_349()
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

void func_350(var uParam0, var uParam1)
{
}

float func_351()
{
	return (func_220() - 90f);
}

bool func_352(var uParam0)
{
	return func_389(*uParam0, 1);
}

void func_353(var uParam0, bool bParam1)
{
	if (bParam1 || !func_352(uParam0))
	{
		func_310(uParam0);
	}
}

bool func_354(var uParam0, int iParam1)
{
	if (!func_352(uParam0))
	{
		return false;
	}
	if (func_362(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_355(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<15> func_356(int iParam0)
{
	Var0.f_10 = 255;
	_copy_memory(&(Var0.f_4), &Local_163, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	return Var0;
}

void func_357(var uParam0)
{
	func_391(uParam0, func_390(4, 117));
}

void func_358(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_392(uParam0, 1);
	func_393(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_359(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (is_entity_an_object(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if (iParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (get_entity_model(iVar2) == iParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			destroy_itemset(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

void func_360(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_361(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_362(var uParam0)
{
	if (!func_352(uParam0))
	{
		return 0;
	}
	if (func_394(uParam0))
	{
		return uParam0->f_2;
	}
	return func_395(uParam0->f_1);
}

var func_363(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_364(int iParam0, int iParam1)
{
	if (!func_396(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_397(iParam0);
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
			if (!func_398(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_399(iParam0))
			{
				return true;
			}
			break;
	}
	return func_400(iParam0, 0, 0, 0) >= iParam1;
}

bool func_365(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_366()
{
	return func_401() != -1;
}

float func_367(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_368()
{
	return Global_1146212->f_2169[89]->f_201;
}

int func_369(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_370(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_371(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_372(var uParam0)
{
	func_402(uParam0, 0f);
}

void func_373(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		_0x0f2a2175734926d8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		release_sound_id(uParam0->f_5);
		stop_pad_shake(0);
		uParam0->f_5 = -1;
	}
	_0x531a78d6bf27014b("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

float func_374(var uParam0)
{
	if (!func_403(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_404(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_405() - uParam0->f_1);
}

void func_375(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_279(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_110(&Var0, 4) && func_406(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_376(int iParam0)
{
	func_407(iParam0);
}

void func_377(int iParam0)
{
	if (func_117(Global_1272030[iParam0]))
	{
		return;
	}
	func_408(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_118((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_409(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_409(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_409(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_409(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_378(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_298(&Var0);
}

void func_379(struct<2> Param0)
{
	if (func_234(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_234(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_234(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_410(Param0, &Var0))
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

void func_380(int iParam0)
{
	Var0 = { func_279(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_381(int iParam0, int iParam1, int iParam2)
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

bool func_382()
{
	iVar1 = _0x5463c962bc7777c3(player_ped_id(), 0, &iVar0, 1, 0);
	if (get_entity_model(iVar0) != func_324())
	{
		return false;
	}
	if ((iVar1 != 4 && iVar1 != 6) && iVar1 != 8)
	{
		return false;
	}
	return true;
}

void func_383()
{
	Var0 = { func_356(-713336544) };
	Var0.f_11 = get_unique_int_for_player(player_id());
	func_357(&Var0);
}

void func_384()
{
	Var0 = { func_356(851346657) };
	func_357(&Var0);
}

int func_385(int iParam0, int iParam1)
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

void func_386(var uParam0, int iParam1)
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

int func_387(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_411(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_412(uParam2, iParam0, Var1);
	return 1;
}

void func_388(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_389(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_390(int iParam0, int iParam1)
{
	return func_413(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_391(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 15, 41, &uParam1);
}

void func_392(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_393(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_394(var uParam0)
{
	return func_389(*uParam0, 2);
}

int func_395(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_396(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_397(int iParam0)
{
	if (!func_396(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_398(int iParam0, int iParam1)
{
	if (!func_396(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_414(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_415("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_416(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_417(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_418(iVar1);
				return true;
			}
			iVar3++;
		}
		func_418(iVar1);
	}
	return false;
}

bool func_399(int iParam0)
{
	if (!func_396(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_419(iParam0);
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
	iVar1 = func_420(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_421(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_422(iParam0);
	iVar2 = func_421(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_400(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_396(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_397(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_414(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_423(iParam0, 0);
	}
	if (func_424(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_425(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_426(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_425(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_401()
{
	return Global_1138962->f_137;
}

void func_402(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_405() - fParam1);
	func_392(uParam0, 1);
	func_393(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_403(var uParam0)
{
	return func_389(*uParam0, 1);
}

bool func_404(var uParam0)
{
	return func_389(*uParam0, 2);
}

float func_405()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_406(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_407(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_279(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

int func_408(int iParam0, var uParam1, var uParam2)
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

struct<2> func_409(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_410(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_348(Param0, &vVar0);
	if (func_427(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_411(var uParam0)
{
	func_386(uParam0, 143479330);
	if (func_428() == 2026485318)
	{
		func_386(uParam0, 617531372);
	}
	else
	{
		func_386(uParam0, 291123060);
	}
}

void func_412(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_429(uParam0))
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

var func_413(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_430() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_431());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_431());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_431());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_432(get_player_team(iVar5)));
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
			if (func_433(iVar2))
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
				if (iVar9 & 8192 != 0 && func_434(iVar2) != 1)
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
					if (!func_435(iVar10))
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

int func_414(int iParam0, int iParam1)
{
	if (!func_396(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_436(iParam0, 1399091007))
	{
		func_437(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_415(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_425(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_416(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_417(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_418(int iParam0)
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

int func_419(int iParam0)
{
	if (!func_396(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_420(int iParam0)
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

int func_421(var uParam0, int iParam1)
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

int func_422(int iParam0)
{
	iVar0 = func_419(iParam0);
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

int func_423(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_438(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_440(&Var0, func_439(0));
	}
	if (!func_441(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_418(iVar14);
	return uVar15;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_425(bool bParam0)
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

struct<4> func_426(int iParam0, bool bParam1)
{
	Var0 = { func_442(iParam0, bParam1, 0) };
	return func_443(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_427(int iParam0, var uParam1, var uParam2)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if (func_445(iParam0, uParam1, &uVar0))
	{
		func_446(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_428()
{
	return Global_1952637->f_1;
}

bool func_429(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_430()
{
	return Global_1051252->f_12;
}

char* func_431()
{
	return "unnamed";
}

int func_432(int iParam0)
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

bool func_433(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_447(36, iParam0);
}

int func_434(int iParam0)
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

bool func_435(int iParam0)
{
	if (func_448(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_449(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_436(int iParam0, int iParam1)
{
	if (!func_396(iParam0, 0))
	{
		return func_451(func_450(iParam0), iParam1);
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

void func_437(int iParam0, var uParam1, var uParam2)
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

struct<14> func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_439(bool bParam0)
{
	iVar0 = func_425(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_443(923904168, func_452(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_443(923904168, func_452(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_443(923904168, func_452(bParam0), -740156546, 0);
}

void func_440(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_441(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_425(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_442(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_452(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_397(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_443(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_439(bParam1) };
			if (bParam2 && func_453(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_454(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_454(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_455(iParam0, &Var6, 1728382685))
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
			Var0 = { func_456(bParam1) };
			switch (func_419(iParam0))
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
			if (func_457(iParam0, -1823706425))
			{
				Var0 = { func_443(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_457(iParam0, -1483207246))
			{
				Var0 = { func_443(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_443(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_457(iParam0, -1653629781))
			{
				Var0 = { func_443(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_458(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_457(iParam0, -1653629781))
			{
				Var0 = { func_443(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_443(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_396(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_425(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_444(int iParam0)
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

bool func_445(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_459(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_446(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_460(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_461(iVar0);
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
			uParam2->f_5 = func_462(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_463(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_464(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_465(iVar0);
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

bool func_447(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_466(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_467())
	{
		return func_466(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_466(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_448(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_449(int iParam0)
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
		func_468(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_469(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_450(int iParam0)
{
	return iParam0;
}

int func_451(int iParam0, int iParam1)
{
	if (!func_470(iParam0, 2))
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

struct<4> func_452(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_425(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_443(1328661203, func_471(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_443(1328661203, func_471(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_443(1328661203, func_471(), -1591664384, bParam0);
}

bool func_453(int iParam0, bool bParam1)
{
	if (func_419(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_472();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_454(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_473(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_455(int iParam0, var uParam1, int iParam2)
{
	if (func_474(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_456(bool bParam0)
{
	iVar0 = func_425(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_443(271701509, func_452(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_443(271701509, func_452(bParam0), 12999093, 0);
}

bool func_457(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_419(iParam0);
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
			if (func_475(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_458(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_476(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_459(int iParam0)
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

int func_460(int iParam0, var uParam1)
{
	if (func_477(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_461(int iParam0)
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

int func_462(int iParam0)
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

int func_463(int iParam0)
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

int func_464(int iParam0)
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

int func_465(int iParam0)
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

bool func_466(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_467()
{
	return Global_1102219->f_3672;
}

void func_468(int iParam0)
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
	func_469(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_469(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_470(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_471()
{
	return Var0;
}

bool func_472()
{
	return (func_478(-1185145312, 0, 0, 0) > 0 && func_479(func_443(889965687, func_452(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_473(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_396(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_424(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_443(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_425(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_425(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_474(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_425(0);
	*uParam1 = { func_443(iParam0, func_439(0), iParam3, 0) };
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

bool func_475(int iParam0, int iParam1, int iParam2)
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

bool func_476(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_425(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_477(int iParam0, var uParam1, var uParam2)
{
	if (func_480(iParam0, uParam1, &uVar0))
	{
		func_481(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_478(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_482(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_425(bParam1), iParam0, iParam3);
}

int func_479(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_483(&uParam0, iParam4, bParam5, iParam6);
}

bool func_480(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_459(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_481(var uParam0, int iParam1, var uParam2)
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

bool func_482(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_483(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_484(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_484(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_425(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_476(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

