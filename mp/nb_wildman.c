void __EntryFunction__()
{
	fLocal_752 = 1f;
	fLocal_753 = 1f;
	iVar0 = iVar756;
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
	network_register_host_broadcast_variables(&Local_0, 102, 41);
	func_10(_0xba24095ea96dfe17(&Local_0), 102, "m_hostData");
	network_register_player_broadcast_variables(&Local_102, 417, 42);
	func_11(_0x690806bc83bc8ca2(Local_102[0]), 417, "m_clientData");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	if (Local_0 == 6)
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
	else if (func_17(Local_519.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_519.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_519.f_12), Local_519.f_9))
	{
		return true;
	}
	else if (Local_519.f_8 == 6)
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
	_copy_memory(&Local_519, uParam0, 5);
	iVar2 = func_30(&bVar1, Local_519.f_1, Local_519.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_519.f_12 = iVar2;
	iVar0 = Global_1198046->f_231.f_1066[iVar2]->f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_519.f_1, Local_519.f_2, Local_519.f_3, iVar0);
	Local_519.f_9 = { func_32(Var3.f_5, 8) };
	Local_519.f_14 = Var3.f_5;
	Local_519.f_15 = { Var3.f_11 };
	Local_519.f_18 = Var3.f_7;
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
	if (Local_0 <= 5)
	{
		func_41();
	}
	switch (Local_0)
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
	if (Local_519.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_519.f_8)
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
		if (_0xf6a8a652a6b186cd(Local_0.f_3.f_1))
		{
			_0xfdfecc6ee4491e11(Local_0.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
	func_61();
}

void func_27()
{
	if (Local_519.f_12 != -1)
	{
		if (network_is_game_in_progress() && network_get_num_participants() <= 1)
		{
			func_62(Local_519.f_12, 4);
		}
	}
	func_63();
	if (func_64(64))
	{
		func_65(Local_0.f_6);
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

struct<2> func_32(int iParam0, int iParam1)
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

void func_33()
{
	func_108();
}

void func_34()
{
	if (Local_519.f_12 >= 0 && Local_519.f_12 < 71)
	{
		Local_519.f_19.f_42 = Global_1198046->f_231.f_1066[Local_519.f_12]->f_5;
	}
	func_109(&(Local_519.f_19.f_7));
	func_110();
}

void func_35()
{
}

void func_36()
{
}

bool func_37(struct<2> Param0)
{
	if (!func_111(Param0))
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
	iVar0 = Global_1198046->f_231.f_1066[Local_519.f_12]->f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_519.f_1, Local_519.f_2, Local_519.f_3, iVar0);
	if (!func_112(&Var1, 1))
	{
		func_113(1);
		return;
	}
	Local_0.f_6 = func_114(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_115(256);
	if (func_116(Local_0.f_6))
	{
		func_117(5);
		func_113(6);
	}
	else
	{
		func_113(1);
	}
}

void func_43()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_519.f_1, Local_519.f_2, -1, 255);
	if (func_112(&Var0, 1))
	{
		func_113(2);
		return;
	}
	if (func_118(Var0, &bVar31))
	{
		clear_area(Local_519.f_15, Var0.f_10, 2442122);
		func_113(2);
	}
	else if (bVar31)
	{
		func_117(3);
		func_113(6);
	}
	if (!func_119(Local_0.f_3.f_2))
	{
		func_120(&(Local_0.f_3.f_2));
	}
	else if (func_121(Local_0.f_3.f_2) > 45000)
	{
		func_117(4);
		func_113(6);
	}
}

void func_44()
{
	if (func_122(1, 255))
	{
		if (!func_123(1))
		{
			if (func_124())
			{
				func_115(1);
			}
		}
		else
		{
			func_125();
			func_113(3);
		}
	}
}

void func_45()
{
	if (func_122(2, 255))
	{
		if (!func_123(2))
		{
			bVar0 = true;
			if (!func_126())
			{
				bVar0 = false;
			}
			if (!func_127())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_115(2);
			}
		}
		else
		{
			func_128();
			func_113(4);
		}
	}
}

void func_46()
{
	func_129();
	func_130();
	func_131();
	if (func_132() || Local_0.f_2 != 0)
	{
		func_133();
		func_113(5);
	}
}

void func_47()
{
	if (func_122(4, 255))
	{
		if (func_134())
		{
			func_115(4);
			func_113(6);
		}
	}
}

void func_48()
{
	if (!func_123(256))
	{
		return;
	}
	if (func_123(512))
	{
		if (func_64(64) && func_114(player_id()) == Local_0.f_6)
		{
			func_65(Local_0.f_6);
			func_135(64);
		}
	}
	else if (!func_64(64))
	{
		if (func_114(player_id()) == Local_0.f_6)
		{
			func_136(Local_0.f_6, 1, 1);
			func_137(64);
		}
	}
	else if (func_114(player_id()) != Local_0.f_6)
	{
		func_65(Local_0.f_6);
		func_135(64);
	}
}

void func_49()
{
	if (!Global_13)
	{
		if (func_122(8192, 255))
		{
			func_138(8192);
		}
	}
	else if (!func_122(8192, 255))
	{
		func_139(8192);
	}
}

void func_50()
{
}

void func_51()
{
	if (Local_0 == 6)
	{
		func_140(6);
	}
	else if (Local_0 > 0)
	{
		func_48();
		func_140(1);
	}
}

void func_52()
{
	if (Local_0 == 6)
	{
		func_140(6);
	}
	else if (Local_0 > 1)
	{
		func_140(2);
	}
}

void func_53()
{
	if (!func_122(1, 255))
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
			func_139(1);
		}
		else
		{
			iVar1 = Global_1901947->f_236.f_68;
			if (!func_119(Local_519.f_11))
			{
				func_120(&(Local_519.f_11));
			}
			if (func_121(Local_519.f_11) >= iVar1)
			{
				func_140(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_143(&(Local_519.f_11));
		func_144();
		func_140(3);
	}
}

void func_54()
{
	if (!func_122(2, 255))
	{
		iVar0 = func_145();
		iVar1 = func_146();
		if (iVar0 && iVar1)
		{
			func_139(2);
		}
		else
		{
			iVar2 = Global_1901947->f_236.f_68;
			if (!func_119(Local_519.f_11))
			{
				func_120(&(Local_519.f_11));
			}
			if (func_147(Local_519.f_11) >= iVar2)
			{
				func_140(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_143(&(Local_519.f_11));
		func_148();
		func_149();
		func_150();
		func_151();
		func_140(4);
	}
}

void func_55()
{
	if (Local_0 >= 5)
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
	if (!func_122(4, 255))
	{
		if (func_159())
		{
			func_160();
			func_62(Local_519.f_12, 4);
			func_139(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_140(6);
	}
}

void func_57()
{
}

bool func_58()
{
	return (func_123(4) || (network_is_game_in_progress() && network_get_num_participants() <= 1));
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
			if (network_does_network_id_exist(&(Local_0.f_99[iVar1])))
			{
				iVar0 = net_to_ped(&(Local_0.f_99[iVar1]));
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

void func_61()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_163((*Local_519.f_210[iVar0])[iVar1]->f_3))
			{
				if (func_164((*Local_519.f_210[iVar0])[iVar1]))
				{
					_0x9cf1836c03fb67a2((*Local_519.f_210[iVar0])[iVar1], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_62(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_165(iParam0, iVar0, iParam1))
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
	func_166(Local_519.f_9, iVar0, 0, 255, 0);
	func_137(4);
	if (bVar1)
	{
		func_167(Local_519.f_1, Local_519.f_2);
		if (!func_64(256))
		{
			if (iVar0 == 1)
			{
				func_168(Local_519.f_18, 1);
			}
			else
			{
				func_168(Local_519.f_18, 0);
			}
			func_137(256);
		}
	}
	else
	{
		func_168(Local_519.f_18, 2);
	}
}

bool func_64(int iParam0)
{
	return func_169(Local_519.f_7, iParam0);
}

void func_65(int iParam0)
{
	if (!func_170(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_70 = iParam0;
	(*Global_1134390)[iVar0]->f_70.f_2 = 0;
}

void func_66()
{
	bVar0 = func_58();
	if (Local_519.f_19.f_42 == get_player_index())
	{
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	if (bVar0)
	{
		if (func_171(256))
		{
			if (func_172(7))
			{
				func_173(13, 0);
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		func_174(iVar1);
		if ((bVar0 && network_does_network_id_exist(&(Local_0.f_7.f_2[iVar1]))) && network_has_control_of_network_id(&(Local_0.f_7.f_2[iVar1])))
		{
			if (iVar1 == 1)
			{
				func_175(func_114(Local_519.f_19.f_42));
			}
			else
			{
				iVar2 = net_to_ent(&(Local_0.f_7.f_2[iVar1]));
				set_entity_as_no_longer_needed(&iVar2);
			}
		}
		iVar1++;
	}
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_68(var uParam0)
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

void func_71(var uParam0, int iParam1)
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

void func_72(var uParam0, int iParam1)
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

void func_73(var uParam0, int iParam1)
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

void func_74(var uParam0, int iParam1)
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

void func_75(var uParam0, int iParam1, int iParam2)
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

void func_76(var uParam0, int iParam1, int iParam2)
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

void func_77(var uParam0, int iParam1)
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

void func_78(var uParam0, int iParam1)
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

void func_79(var uParam0, int iParam1, int iParam2)
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

void func_80(var uParam0, int iParam1)
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

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1, int iParam2)
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
			uParam0->f_11 = { func_186(func_114(iParam2)) };
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

void func_84(var uParam0, int iParam1)
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

void func_85(var uParam0, int iParam1, int iParam2)
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

void func_89(var uParam0, int iParam1)
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

void func_90(var uParam0, int iParam1)
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

void func_93(var uParam0, int iParam1)
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

void func_95(var uParam0, int iParam1)
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

void func_99(var uParam0, int iParam1)
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

void func_100(var uParam0, int iParam1)
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

void func_101(var uParam0, int iParam1)
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

void func_102(var uParam0, int iParam1)
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

void func_103(var uParam0, int iParam1)
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
	reserve_network_mission_peds(2);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Local_102[iVar1]->f_8.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_109(var uParam0)
{
	func_205(uParam0, 0);
	func_206(uParam0, 0);
	func_207(uParam0, 1);
	func_208(uParam0, 1);
	func_209(uParam0, 0);
	func_210(uParam0, 1);
	func_211(uParam0, 1, 1, 1);
}

void func_110()
{
	func_213(0, 0, func_212(), 3f, -1, 1, 0);
}

bool func_111(int iParam0)
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

bool func_112(var uParam0, int iParam1)
{
	return func_214(uParam0->f_25, iParam1);
}

void func_113(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

int func_114(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_115(int iParam0)
{
	if (!func_123(iParam0))
	{
		func_215(&(Local_0.f_1), iParam0);
	}
}

bool func_116(int iParam0)
{
	if (!func_170(iParam0))
	{
		return false;
	}
	return (func_216(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

void func_117(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

bool func_118(struct<31> Param0, var uParam31)
{
	if (_0xf6a8a652a6b186cd(Local_0.f_3.f_1))
	{
		return true;
	}
	if (func_163(Local_519.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!_0xa4a4359320345b34(Local_0.f_3))
	{
		if (_0x397769175a7dbb30(Local_519.f_15, Param0.f_10, 0, 0, 0))
		{
			_0xfa15c9a320e707b0();
			*uParam31 = 1;
			return false;
		}
		func_217(&uVar1, Param0);
		Local_0.f_3 = _0x183c0b6cfeffcae4(&uVar1);
		func_139(128);
	}
	else if (!func_122(128, 255))
	{
		Local_0.f_3.f_1 = func_218(Param0);
		if (_0xf6a8a652a6b186cd(Local_0.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = _0xb33a604345f58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = _0x351d71b8b72b858b(Local_0.f_3);
			return true;
		case 4:
			Local_0.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_119(int iParam0)
{
	return iParam0 != 0;
}

void func_120(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_121(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

bool func_122(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_169(&(Local_102[iParam1]), iParam0);
}

bool func_123(int iParam0)
{
	return func_169(Local_0.f_1, iParam0);
}

bool func_124()
{
	return true;
}

void func_125()
{
}

bool func_126()
{
	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!network_does_network_id_exist(&(Local_0.f_7.f_2[iVar2])))
		{
			if (iVar2 == 1)
			{
				if (func_171(1))
				{
					iVar3 = 0;
					while (iVar3 < 32)
					{
						iVar4 = int_to_participantindex(iVar3);
						if (network_is_participant_active(iVar4))
						{
							if (&Local_102[iVar3]->f_1.f_2[iVar2] != 0)
							{
								Local_0.f_7.f_2[iVar2] = &Local_102[iVar3]->f_1.f_2[iVar2];
							}
						}
						iVar3++;
					}
				}
				iVar0 = 0;
				Jump @186; //curOff = 130
			}
			else if (network_does_network_id_exist(&(Local_0.f_7.f_2[1])))
			{
				if (func_220(iVar2, &bVar1) || bVar1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar2++;
				}
				if (network_does_network_id_exist(&(Local_0.f_7.f_2[0])))
				{
					vVar5 = { get_entity_coords(net_to_ent(&(Local_0.f_7.f_2[0])), true, false) };
				}
				if (bVar1)
				{
					func_221();
				}
				return iVar0;
			}
		}
	}
}

bool func_127()
{
	if (!func_222(&bVar0))
	{
		if (bVar0)
		{
			func_221();
		}
		return false;
	}
	return true;
}

void func_128()
{
}

void func_129()
{
	if (!func_123(32) && func_223(32))
	{
		func_115(32);
	}
	if (!func_123(64) && func_223(64))
	{
		func_115(64);
	}
	if (!func_123(16) && func_224(16))
	{
		func_115(16);
	}
	if ((!func_123(2048) && func_223(2048)) && !func_223(4096))
	{
		func_115(2048);
	}
}

void func_130()
{
	if (!bVar0 && func_123(16))
	{
		func_117(1);
		return;
	}
	if (func_123(2048) && !func_223(4096))
	{
		func_117(6);
		return;
	}
}

void func_131()
{
}

bool func_132()
{
	if (func_225())
	{
		return true;
	}
	func_226();
	func_227();
	switch (Local_0.f_7)
	{
		case 0:
			func_228();
			break;
		case 1:
			func_229();
			break;
		case 2:
			func_230();
			break;
		case 3:
			func_231();
			break;
		case 4:
			func_232();
			break;
		case 5:
			func_233();
			break;
		case 6:
			func_234();
			break;
	}
	return false;
}

void func_133()
{
}

bool func_134()
{
	return true;
}

void func_135(int iParam0)
{
	if (func_64(iParam0))
	{
		func_235(&(Local_519.f_7), iParam0);
	}
}

int func_136(int iParam0, int iParam1, bool bParam2)
{
	if (!func_170(iParam0))
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = player_id();
	(*Global_1134390)[iVar1]->f_70 = iParam0;
	(*Global_1134390)[iVar1]->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_237(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	else
	{
		func_238(&((*Global_1134390)[iVar1]->f_70.f_1), 1);
	}
	return 1;
}

void func_137(int iParam0)
{
	if (!func_64(iParam0))
	{
		func_215(&(Local_519.f_7), iParam0);
	}
}

void func_138(int iParam0)
{
	if (func_169(&(Local_102[participant_id_to_int()]), iParam0))
	{
		func_235(Local_102[participant_id_to_int()], iParam0);
	}
}

void func_139(int iParam0)
{
	if (!func_122(iParam0, 255))
	{
		func_215(Local_102[participant_id_to_int()], iParam0);
	}
}

void func_140(int iParam0)
{
	if (Local_519.f_8 != iParam0)
	{
		Local_519.f_8 = iParam0;
	}
}

bool func_141()
{
	sVar0 = "OREWM";
	sVar1 = "OREWMAU";
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
		if (!func_240(func_239(iVar3)))
		{
			iVar2 = 0;
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		request_anim_dict(func_241(iVar4));
		if (!has_anim_dict_loaded(func_241(iVar4)))
		{
			iVar2 = 0;
		}
		iVar4++;
	}
	if (!func_243(func_242(), &(Local_519.f_19.f_41), &(Local_0.f_7.f_90), 64, "pbl_handover"))
	{
		iVar2 = 0;
	}
	return iVar2;
}

bool func_142()
{
	bVar0 = false;
	if (!func_244())
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
	iVar0 = 1;
	func_245();
	if (Local_519.f_19.f_42 == get_player_index())
	{
		if (func_246(13, 0))
		{
			func_247(256);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			if (!func_171(1))
			{
				if (!does_entity_exist(Local_519.f_19.f_1[1]->f_1))
				{
					if (func_219(&iVar3) && func_248(func_114(Local_519.f_19.f_42), Local_102[iVar3]->f_1.f_2[1], 1))
					{
						set_blocking_of_non_temporary_events(net_to_ped(&(Local_102[iVar3]->f_1.f_2[1])), true);
						func_247(1);
					}
					else
					{
						iVar0 = 0;
					}
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
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
	if (!func_64(1))
	{
		func_249(Local_519.f_9);
		func_137(1);
	}
}

void func_149()
{
	func_250();
	func_251();
}

void func_150()
{
	func_245();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (network_does_network_id_exist(&(Local_0.f_7.f_2[iVar0])))
		{
			Local_519.f_19.f_1[iVar0]->f_1 = net_to_ped(&(Local_0.f_7.f_2[iVar0]));
			func_252(iVar0, Local_519.f_19.f_1[iVar0]->f_1);
			iVar1 = func_253(iVar0);
			func_255(&(Local_519.f_19.f_44), iVar1, func_254(iVar0), 0);
			if (does_entity_exist(iVar1) && network_has_control_of_entity(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						set_blocking_of_non_temporary_events(iVar1, true);
						remove_all_ped_weapons(iVar1, true, true);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_151()
{
}

void func_152()
{
}

void func_153()
{
	if (func_163(Local_519.f_15))
	{
		return;
	}
	if (func_256())
	{
		return;
	}
	if (func_257(Local_519.f_1, 600))
	{
		fVar0 = vdist(get_entity_coords(player_ped_id(), false, false), Local_519.f_15);
		if (fVar0 < 200f)
		{
			func_139(4096);
		}
		else if (fVar0 < 400f)
		{
			func_138(4096);
			func_139(2048);
		}
		else
		{
			func_138(4096);
			func_138(2048);
		}
	}
}

void func_154()
{
	func_258();
	func_259();
	func_260();
}

void func_155()
{
	if (func_261())
	{
		func_139(8);
	}
	else
	{
		func_138(8);
	}
}

void func_156()
{
	if (get_player_index() == Local_519.f_19.f_42)
	{
		func_262();
	}
	func_245();
	func_263();
	func_264();
	func_265(Local_0.f_7);
	func_266();
	func_267();
	func_268();
	switch (Local_519.f_19)
	{
		case 0:
			func_269();
			break;
		case 1:
			func_270();
			break;
		case 2:
			func_271();
			break;
		case 3:
			func_272();
			break;
		case 4:
			func_273();
			break;
		case 5:
			func_274();
			break;
		case 6:
			func_275();
			break;
	}
}

void func_157()
{
	if (!func_122(8, 255))
	{
		func_139(16);
	}
	else
	{
		func_138(16);
	}
}

void func_158()
{
	Local_519.f_6 = -1;
	Local_519.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_519.f_5 = (Local_519.f_5 || Local_102[iVar0]) // PointerArith;
			Local_519.f_6 = (Local_519.f_6 && Local_102[iVar0]) // PointerArith;
		}
		iVar0++;
	}
}

bool func_159()
{
	return true;
}

void func_160()
{
}

void func_161(int iParam0)
{
	if (does_blip_exist(Local_519.f_169.f_7[iParam0]->f_1))
	{
		remove_blip(&(Local_519.f_169.f_7[iParam0]->f_1));
	}
}

bool func_162(int iParam0, int iParam1)
{
	return func_169(Local_519.f_169.f_7[iParam0]->f_2, iParam1);
}

bool func_163(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_164(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_165(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_166(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_277(func_276(Param0));
	iVar1 = func_278(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_279(Param0, &Var2);
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

void func_167(int iParam0, int iParam1)
{
	iVar0 = func_280(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_281(iVar0);
}

void func_168(int iParam0, int iParam1)
{
	func_120(Global_1272030->f_3271[iParam0]);
	switch (iParam1)
	{
		case 0:
			Global_1272030->f_3275[iParam0] = func_282(iParam0);
			break;
		case 1:
			Global_1272030->f_3275[iParam0] = func_283(iParam0);
			break;
		case 2:
			Global_1272030->f_3275[iParam0] = func_284(iParam0);
			break;
	}
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_170(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0)
{
	return func_169(Local_519.f_19.f_147, iParam0);
}

bool func_172(int iParam0)
{
	return is_bit_set(Local_519.f_19.f_43, iParam0);
}

void func_173(int iParam0, int iParam1)
{
	if (!func_285(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_286(iParam1);
	func_287(iVar0, iParam0);
}

void func_174(int iParam0)
{
	if (!does_blip_exist(&(Local_519.f_19.f_1[iParam0])))
	{
		return;
	}
	remove_blip(Local_519.f_19.f_1[iParam0]);
}

int func_175(int iParam0)
{
	if (!func_170(iParam0))
	{
		return 0;
	}
	func_288(iParam0);
	return 1;
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
	iVar0 = func_289(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_290(iParam1)) - 1);
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
			func_291(uParam0);
			break;
		case 1:
			func_291(uParam0);
			break;
		case 2:
			func_291(uParam0);
			break;
		case 3:
			func_292(uParam0);
			break;
		case 4:
			func_291(uParam0);
			break;
		case 5:
			func_291(uParam0);
			break;
		case 6:
			func_292(uParam0);
			break;
		case 7:
			func_292(uParam0);
			break;
		case 8:
			func_292(uParam0);
			break;
		case 9:
			func_291(uParam0);
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
	func_237(&(uParam0->f_25), iParam1);
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
			func_293(uParam0);
			break;
		case 1:
			func_294(uParam0);
			break;
		case 2:
			func_295(uParam0);
			break;
		case 3:
			func_296(uParam0);
			break;
		default:
			func_180(uParam0);
			func_179(uParam0);
			break;
	}
}

Vector3 func_186(int iParam0)
{
	if (!func_170(iParam0))
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
			func_297(uParam0);
			break;
		case 1:
		case 2:
			func_298(uParam0);
			break;
		case 3:
		case 4:
			func_299(uParam0);
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
	if (func_300(&Var1, iParam0) && func_301(&Var1, iParam1))
	{
		func_302(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_202(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_300(&Var1, iParam0) && func_301(&Var1, iParam1))
	{
		func_302(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_203(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_303(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_204(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_303(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_205(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_2), 16384);
	}
	else
	{
		func_215(&(uParam0->f_2), 16384);
	}
}

void func_206(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_2), 2048);
	}
	else
	{
		func_215(&(uParam0->f_2), 2048);
	}
}

void func_207(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_2), 256);
	}
	else
	{
		func_215(&(uParam0->f_2), 256);
	}
}

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(uParam0, 16);
	}
	else
	{
		func_235(uParam0, 67108864);
		func_235(uParam0, 16);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_2), 128);
	}
	else
	{
		func_215(&(uParam0->f_2), 128);
	}
}

void func_210(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(uParam0, 256);
	}
	else
	{
		func_235(uParam0, 256);
	}
}

void func_211(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_215(uParam0, 268435456);
	}
	else
	{
		func_235(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_215(uParam0, 1073741824);
	}
	else
	{
		func_235(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_215(uParam0, 536870912);
	}
	else
	{
		func_235(uParam0, 536870912);
	}
}

Vector3 func_212()
{
	vVar0 = { func_186(func_114(Local_519.f_19.f_42)) };
	vVar0 = { func_304(vVar0, Global_1132288->f_2027.f_1, 2f) };
	vVar3 = { func_186(func_114(Local_519.f_19.f_42)) };
	return vVar0;
}

void func_213(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8)
{
	(*Local_519.f_210[iParam0])[iParam1]->f_1 = iParam6;
	(*Local_519.f_210[iParam0])[iParam1]->f_2 = iParam7;
	(*Local_519.f_210[iParam0])[iParam1]->f_3 = { vParam2 };
	(*Local_519.f_210[iParam0])[iParam1]->f_6 = fParam5;
	(*Local_519.f_210[iParam0])[iParam1]->f_7 = iParam8;
}

bool func_214(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_216(int iParam0)
{
	if (!func_170(iParam0))
	{
		return false;
	}
	iVar0 = func_305(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
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
	if (!func_306(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_220(int iParam0, var uParam1)
{
	if (!can_register_mission_peds(2))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_309(Local_0.f_7.f_2[iParam0], func_239(iParam0), func_307(iParam0), func_308(iParam0), 1, 0, 0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	iVar0 = net_to_ped(&(Local_0.f_7.f_2[iParam0]));
	_set_ped_body_component(iVar0, func_310(iParam0));
	_update_ped_variation(iVar0, true, true, true, true, true);
	vVar1 = { get_entity_coords(net_to_ent(&(Local_0.f_7.f_2[iParam0])), true, false) };
	return 1;
}

void func_221()
{
	func_117(2);
}

bool func_222(var uParam0)
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
				if (!func_311(iVar2, uParam0, &bVar1))
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
			if (func_312(iVar2))
			{
				if (network_does_network_id_exist(&(Local_0.f_99[iVar2])))
				{
					if (network_request_control_of_network_id(&(Local_0.f_99[iVar2])))
					{
						_0x7182edda1ee7db5a(&(Local_0.f_99[iVar2]));
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

bool func_223(int iParam0)
{
	return func_169(Local_519.f_5, iParam0);
}

bool func_224(int iParam0)
{
	return func_169(Local_519.f_6, iParam0);
}

bool func_225()
{
	if (Local_0.f_7 == 7)
	{
		return true;
	}
	iVar0 = func_253(0);
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_226()
{
	if (func_313())
	{
		func_314(0);
		func_315(6);
	}
}

void func_227()
{
	if (func_316(1))
	{
		if (!func_171(4))
		{
			func_317(1, 1);
		}
	}
}

void func_228()
{
	if (func_256())
	{
		func_315(1);
	}
}

void func_229()
{
	if (func_318(0))
	{
		if (!func_319(Local_0.f_7.f_7[1]))
		{
			func_320(1);
		}
	}
	if (func_171(256))
	{
		iVar0 = 7;
	}
	else
	{
		iVar0 = 6;
	}
	if (func_318(iVar0))
	{
		func_315(2);
	}
}

void func_230()
{
	iVar0 = func_253(0);
	iVar1 = func_253(1);
	if (((does_entity_exist(iVar0) && _0x916b8e075abc8b4e(iVar0, 1)) && func_318(10)) && !_0x916b8e075abc8b4e(iVar1, 1))
	{
		func_314(4);
		func_315(3);
	}
}

void func_231()
{
	iVar0 = func_321();
	if (!func_322(1))
	{
		if (!func_318(13))
		{
			if (func_319(Local_0.f_7.f_7[13]))
			{
			}
			if (func_323(Local_0.f_7.f_7[13], 15000))
			{
				func_324(13);
			}
		}
		else if (!func_318(14))
		{
			if (func_319(Local_0.f_7.f_7[14]))
			{
			}
			if (func_323(Local_0.f_7.f_7[14], 15000))
			{
				func_324(14);
			}
		}
	}
	if (_network_is_player_index_valid(iVar0))
	{
		iVar1 = network_get_participant_index(iVar0);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = iVar1;
			switch (Local_102[iVar2]->f_1.f_6)
			{
				case 0:
					Local_0.f_7.f_91 = iVar0;
					func_315(4);
					func_314(0);
					break;
				case 1:
					Local_0.f_7.f_91 = iVar0;
					func_315(5);
					func_314(0);
					break;
			}
		}
	}
}

void func_232()
{
	if (func_171(8) || func_171(16))
	{
		func_315(5);
	}
}

void func_233()
{
	iVar0 = func_253(0);
	if ((((does_entity_exist(iVar0) && func_318(17)) && func_318(18)) && func_325(64)) || func_325(64))
	{
		func_315(7);
	}
}

void func_234()
{
	if (func_325(64))
	{
		func_315(7);
	}
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_236(int iParam0)
{
	if (!func_170(iParam0))
	{
		return 0;
	}
	if (!func_216(iParam0))
	{
		return 0;
	}
	return (*Global_1131196)[iParam0]->f_18.f_1;
}

void func_237(var uParam0, int iParam1)
{
	func_326(uParam0, iParam1);
}

void func_238(var uParam0, int iParam1)
{
	func_327(uParam0, iParam1);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1086354818;
		default:
			break;
	}
	return 0;
}

bool func_240(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_common@handover@generic@player_handover@money";
		default:
			break;
	}
	return "";
}

char* func_242()
{
	return "script@beat@town@townrobbery@handover_money";
}

bool func_243(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
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

bool func_244()
{
	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (is_bit_set(Local_519.f_169.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_328(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!is_bit_set(Local_519.f_169.f_4, iVar0))
				{
					request_model(iVar2, false);
					set_bit(&(Local_519.f_169.f_4), iVar0);
				}
				if (!has_model_loaded(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					set_bit(&(Local_519.f_169.f_3), iVar0);
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

void func_245()
{
	Local_519.f_19.f_146 = -1;
	Local_519.f_19.f_147 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_519.f_19.f_146 = (Local_519.f_19.f_146 && Local_102[iVar0]->f_1);
			Local_519.f_19.f_147 = (Local_519.f_19.f_147 || Local_102[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_246(int iParam0, int iParam1)
{
	if (!func_285(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_286(iParam1);
	return func_329(iVar0, iParam0);
}

void func_247(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_215(&(Local_102[iVar0]->f_1), iParam0);
}

bool func_248(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_330(1))
	{
		return false;
	}
	if (!func_170(iParam0))
	{
		return false;
	}
	if (!func_331(iParam0, &iVar0))
	{
		return false;
	}
	if (func_332(iParam0, 128))
	{
		return false;
	}
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!_0xb07d3185e11657a5(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = _0xf260af6f43953316(iVar0);
	if (network_does_network_id_exist(iVar1))
	{
		*uParam1 = iVar1;
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		func_333(iParam0);
	}
	return true;
}

void func_249(struct<2> Param0)
{
	if (func_278(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_278(Param0)))
	{
		_0x99230691875fc218(func_276(Param0), func_278(Param0), Global_35);
	}
}

void func_250()
{
	if (!func_219(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_334(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_251()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_163((*Local_519.f_210[iVar0])[iVar1]->f_3))
			{
				if (!func_164((*Local_519.f_210[iVar0])[iVar1]))
				{
					if ((*Local_519.f_210[iVar0])[iVar1]->f_7)
					{
						vVar2 = { (*Local_519.f_210[iVar0])[iVar1]->f_3 };
					}
					else
					{
						vVar2 = { _get_object_offset_from_coords(Local_519.f_15, 0f, (*Local_519.f_210[iVar0])[iVar1]->f_3) };
					}
					(*Local_519.f_210[iVar0])[iVar1] = _0xfa50f79257745e74(vVar2, (*Local_519.f_210[iVar0])[iVar1]->f_6, (*Local_519.f_210[iVar0])[iVar1]->f_2, (*Local_519.f_210[iVar0])[iVar1]->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_252(int iParam0, var uParam1)
{
	Local_519.f_169.f_7[iParam0] = uParam1;
}

int func_253(int iParam0)
{
	return Local_519.f_19.f_1[iParam0]->f_1;
}

char* func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE005_MALE6";
		case 1:
			return "CRIPPS";
		default:
			break;
	}
	return "";
}

void func_255(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_335(uParam0, iParam1, sParam2))
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

bool func_256()
{
	return (func_123(32) || func_122(32, 255));
}

bool func_257(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_336(iParam0, 1178968787) };
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

void func_258()
{
	func_337();
}

void func_259()
{
	iVar2 = participant_id_to_int();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = network_is_participant_active(int_to_participantindex(iVar0));
		func_338(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_260()
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
	if (network_is_in_mp_cutscene() != Local_519.f_169.f_40)
	{
		bVar8 = true;
		Local_519.f_169.f_40 = !Local_519.f_169.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_519.f_169.f_30 >= 2)
		{
			Local_519.f_169.f_30 = 0;
		}
		iVar0 = Local_519.f_169.f_30;
		Local_519.f_169.f_30++;
		iVar9 = func_339(iVar0);
		iVar1 = &Local_519.f_169.f_7[iVar0];
		bVar4 = !does_entity_exist(iVar1);
		if (func_162(iVar9, 4))
		{
			func_334(iVar9, iVar3, 1);
			bVar4 = !does_entity_exist(iVar1);
		}
		if (bVar4)
		{
			if (&Local_102[iVar3]->f_8.f_2[iVar0] > -1f)
			{
				Local_102[iVar3]->f_8.f_2[iVar0] = -1f;
			}
			if (is_bit_set(Local_519.f_169.f_5, iVar0))
			{
				clear_bit(&(Local_519.f_169.f_5), iVar0);
				clear_bit(&(Local_519.f_169.f_6), iVar0);
				clear_bit(&(Local_519.f_169.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_340(iVar2, iVar1, iVar0, iVar3);
		}
		if (is_bit_set(Local_519.f_169.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				clear_bit(&(Local_519.f_169.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				set_bit(&(Local_519.f_169.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (is_any_speech_playing(iVar1))
			{
				if (!is_bit_set(Local_102[iVar3]->f_8.f_1, iVar0))
				{
					set_bit(&(Local_102[iVar3]->f_8.f_1), iVar0);
				}
				func_341(Local_519.f_169.f_32[iVar0]);
			}
		}
		if (is_bit_set(Local_102[iVar3]->f_8.f_1, iVar0))
		{
			if (bVar4 || (!is_any_speech_playing(iVar1) && (!func_342(Local_519.f_169.f_32[iVar0]) || func_343(Local_519.f_169.f_32[iVar0], 0.5f))))
			{
				func_344(Local_519.f_169.f_32[iVar0]);
				clear_bit(&(Local_102[iVar3]->f_8.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_162(iVar9, 256))
		{
			set_entity_visible_in_cutscene(iVar1, Local_519.f_169.f_40, 0, 256);
		}
		if (func_162(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (network_is_host_of_this_script())
					{
						if (func_345(iVar9))
						{
							if (!func_311(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_346(iVar9, 4);
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
				if (!func_345(iVar9))
				{
					_0x7043d0681285ba2d(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_519.f_169.f_31 != 0)
	{
		if (!func_347(1, 255))
		{
			func_348(1);
		}
	}
	else if (func_347(1, 255))
	{
		func_349(1);
	}
}

bool func_261()
{
	bVar0 = true;
	if (bVar0 && !_unlock_is_unlocked(Local_519.f_14))
	{
		return false;
	}
	if (func_350())
	{
		return false;
	}
	if (func_351(get_player_index()))
	{
		return false;
	}
	return true;
}

void func_262()
{
	Var0 = { func_352(-1591664384, -1591664384, 0, 0, 0, 0, -1, -1238310989, 0) };
	if (func_353(Var0, &iVar10, &iVar11, 0))
	{
		iVar13 = 99;
		iVar14 = network_get_participant_index(get_player_index());
		if (network_is_participant_active(iVar14))
		{
			iVar15 = iVar14;
			if (Local_102[iVar15]->f_1.f_5 != 0)
			{
				if (!func_354(Local_102[iVar15]->f_1.f_5, 1))
				{
					Local_102[iVar15]->f_1.f_5 = 0;
				}
			}
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				iVar16 = func_355(iVar12, iVar10);
				if (func_354(iVar16, 1))
				{
					if (func_356(iVar16) < iVar13)
					{
						iVar13 = func_356(iVar16);
						Local_102[iVar15]->f_1.f_5 = iVar16;
					}
				}
				iVar12++;
			}
		}
		func_357(iVar10);
	}
}

void func_263()
{
	Local_519.f_19.f_148 = -1;
	Local_519.f_19.f_149 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_519.f_19.f_148 = (Local_519.f_19.f_148 && Local_102[iVar0]->f_1.f_1);
			Local_519.f_19.f_149 = (Local_519.f_19.f_149 || Local_102[iVar0]->f_1.f_1);
		}
		iVar0++;
	}
}

void func_264()
{
	if (func_358(func_253(0), 0, &(Local_519.f_19.f_7), &(Local_519.f_19.f_39), 0, 0))
	{
		if (!func_313())
		{
			func_359(0);
			func_360(1, 0, 0);
			func_361();
		}
		if (Local_519.f_19.f_42 == get_player_index())
		{
			func_362(13, 0);
		}
	}
}

void func_265(int iParam0)
{
	if (Local_519.f_19 != iParam0)
	{
		if (iParam0 == 6)
		{
			func_161(0);
		}
		Local_519.f_19 = iParam0;
	}
}

void func_266()
{
	if (Local_519.f_19.f_42 != get_player_index())
	{
		return;
	}
	if (func_316(1))
	{
		if (func_363(4, 255))
		{
			func_364(4);
			if (func_219(&iVar0))
			{
				Local_102[iVar0]->f_1.f_6 = -1;
			}
		}
	}
	if (Local_0.f_7.f_5 != Local_519.f_19.f_40)
	{
		Local_519.f_19.f_40 = Local_0.f_7.f_5;
		if (func_363(2, 255))
		{
			func_365(Local_0.f_7.f_5);
		}
	}
}

void func_267()
{
	iVar0 = network_get_participant_index(Local_519.f_19.f_42);
	iVar1 = iVar0;
	iVar2 = get_player_ped(Local_519.f_19.f_42);
	switch (Local_0.f_7.f_5)
	{
		case 2:
			if (network_is_participant_active(iVar0))
			{
				if (network_is_host_of_this_script())
				{
					if (Local_102[iVar1]->f_1.f_5 != 0)
					{
						func_314(4);
					}
				}
			}
			break;
		case 3:
			if (network_is_participant_active(iVar0))
			{
				if (network_is_host_of_this_script())
				{
					if (Local_102[iVar1]->f_1.f_5 == 0)
					{
						func_314(2);
					}
					else if (!func_366(iVar2))
					{
						func_314(4);
					}
				}
			}
			break;
		case 4:
			if (network_is_participant_active(iVar0))
			{
				if (network_is_host_of_this_script())
				{
					if (Local_102[iVar1]->f_1.f_5 == 0)
					{
						func_314(2);
					}
					else if (func_366(iVar2))
					{
						func_314(3);
					}
				}
			}
			break;
	}
	if (Local_519.f_19.f_42 != get_player_index())
	{
		return;
	}
	iVar3 = func_253(0);
	if (func_363(2, 255))
	{
		if (!func_367(0, 10f, 255, 0) || Local_0.f_7.f_5 == 0)
		{
			if (func_369(func_368(0)))
			{
				_0xe98d55c5983f2509(func_253(0));
				set_ped_config_flag(iVar3, 297, true);
				func_370();
				func_364(2);
			}
		}
		else if (func_371(0, 0, 0))
		{
			if (!func_372(2))
			{
				if (func_369(func_368(0)))
				{
					func_365(Local_519.f_19.f_40);
					func_373(2);
				}
			}
		}
		else if (func_372(2))
		{
			if (func_369(func_368(0)))
			{
				func_365(Local_519.f_19.f_40);
				func_374(2);
			}
		}
	}
	else if (func_367(0, 10f, 255, 0) && Local_0.f_7.f_5 != 0)
	{
		if (does_entity_exist(iVar3) && !is_entity_dead(iVar3))
		{
			if (func_369(func_368(0)))
			{
				if (_0x870708a6e147a9ad(iVar3, "", 7f, 0, 16, 0, 0, 0, 0, -1))
				{
					set_ped_config_flag(iVar3, 130, true);
					set_ped_config_flag(iVar3, 178, false);
					set_ped_config_flag(iVar3, 297, true);
					set_ped_config_flag(iVar3, 301, false);
					func_247(2);
				}
			}
		}
	}
}

void func_268()
{
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		if (func_376(func_375(iVar0)))
		{
			if (!func_172(iVar0))
			{
				if (func_377(iVar0))
				{
					func_378(iVar0);
					func_360(1, 0, 0);
				}
				if (func_379(iVar0))
				{
					if (func_380(iVar0))
					{
						func_381(-296154796, func_253(0), 1);
					}
					func_382(iVar0);
					if (network_is_host_of_this_script())
					{
						func_383(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_269()
{
	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_253(iVar0);
		if (does_entity_exist(iVar1))
		{
			if (vdist(Global_35, get_entity_coords(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_19.f_42 == get_player_index())
				{
					switch (iVar0)
					{
						case 0:
							func_384();
							if (_0x916b8e075abc8b4e(iVar1, 1))
							{
								_0x541e5b41dca45828(iVar1, 1, 0);
							}
							break;
						case 1:
							func_384();
							break;
					}
				}
				else if (!func_172(19))
				{
					func_324(19);
				}
				else
				{
					func_385(20, 12000, 0);
				}
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						func_385(5, 12000, 1);
						break;
				}
			}
			if (iVar0 == 0)
			{
				if (func_386(iVar1, 993674639, 1, 0))
				{
					_set_entity_coords_and_heading(iVar1, func_307(iVar0), func_308(iVar0), true, false, true);
					_task_start_scenario_in_place(iVar1, -2118813809, 0, false, 0, -1f, false);
				}
				if (func_388(func_387(5)))
				{
					request_clip_set("AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM");
					set_ped_can_play_gesture_anims(iVar1, 1, 1);
					set_ped_reset_flag(iVar1, 209, true);
					set_ped_gesture_group(iVar1, "AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM", 1);
				}
				if (func_172(19))
				{
					iVar2 = func_389(get_entity_coords(iVar1, true, false), &uVar3, 1203982208, 0, 0, 0);
					if (!_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
					{
						_0xe7fa07624574b79a(iVar1, get_player_ped(iVar2), 3, 1, 1000f, 1, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_270()
{
	if (func_171(256))
	{
		iVar2 = 7;
	}
	else
	{
		iVar2 = 6;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_253(iVar0);
		if (does_entity_exist(iVar1))
		{
			if (vdist(Global_35, get_entity_coords(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_19.f_42 == get_player_index())
				{
					switch (iVar0)
					{
						case 0:
							if (!func_172(iVar2))
							{
								if (func_390(19))
								{
									func_391(19);
								}
								func_324(iVar2);
							}
							break;
						case 1:
							bVar3 = false;
							if (vdist(Global_35, get_entity_coords(func_253(0), false, false)) < 10f)
							{
								bVar3 = true;
							}
							if (((!func_172(0) && !func_172(iVar2)) && !func_390(iVar2)) && !bVar3)
							{
								func_324(0);
							}
							if (((((func_172(0) && !func_172(1)) && !func_172(iVar2)) && !func_390(iVar2)) && !bVar3) && !func_322(1))
							{
								if (func_392(1) > 11000)
								{
									func_324(1);
								}
							}
							break;
					}
				}
				switch (iVar0)
				{
					case 0:
						if (!_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
						{
							_0xe7fa07624574b79a(iVar1, get_player_ped(Local_519.f_19.f_42), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
					case 1:
						if (!_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
						{
							_0xe7fa07624574b79a(iVar1, get_player_ped(Local_519.f_19.f_42), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
				}
			}
		}
		iVar0++;
	}
	func_393(0, 0);
}

void func_271()
{
	iVar1 = func_253(0);
	iVar2 = func_253(1);
	iVar0 = get_player_ped(Local_519.f_19.f_42);
	if (func_171(256))
	{
		iVar3 = 7;
	}
	else
	{
		iVar3 = 6;
	}
	if (vdist(get_entity_coords(iVar0, true, false), get_entity_coords(iVar1, false, false)) < 10f)
	{
		if (!func_172(iVar3))
		{
			func_324(iVar3);
		}
		else if (!func_172(9))
		{
			func_324(9);
		}
		else if (!func_172(10))
		{
			func_324(10);
		}
		if ((func_172(iVar3) || func_172(9)) || func_172(10))
		{
			if (!_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
			{
				_0xe7fa07624574b79a(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
			}
		}
	}
	else if (func_172(iVar3) || func_172(9))
	{
		if (!func_172(8))
		{
			func_324(8);
		}
	}
	if (func_172(10))
	{
		if (_0x916b8e075abc8b4e(iVar2, 1) && network_has_control_of_entity(iVar2))
		{
			_0x541e5b41dca45828(iVar2, 1, 0);
		}
	}
}

void func_272()
{
	iVar1 = func_253(0);
	iVar2 = func_394();
	iVar0 = Global_34;
	if (vdist(Global_35, get_entity_coords(iVar1, false, false)) < 10f)
	{
		if (!_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
		{
			_0xe7fa07624574b79a(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
		}
		if (Local_519.f_19.f_42 == get_player_index())
		{
			if (!func_172(12))
			{
				if (func_395(2))
				{
					func_324(12);
				}
			}
		}
	}
	else if (_0x916b8e075abc8b4e(iVar1, 1) && network_has_control_of_entity(iVar1))
	{
		_0x541e5b41dca45828(iVar1, 1, 0);
	}
	switch (iVar2)
	{
		case 0:
			func_324(25);
			if (Local_519.f_19.f_42 == get_player_index())
			{
				func_396();
			}
			break;
		case 1:
			if (!func_318(15))
			{
				func_324(26);
				func_324(15);
			}
			if (!func_171(32))
			{
				func_247(32);
			}
			if (Local_519.f_19.f_42 == get_player_index())
			{
				func_396();
			}
			break;
	}
}

void func_273()
{
	iVar0 = func_253(0);
	iVar1 = get_player_ped(Local_519.f_19.f_42);
	if (Local_519.f_19.f_42 == get_player_index() && !_network_has_control_of_anim_scene(Local_519.f_19.f_41))
	{
		_network_request_control_of_anim_scene(Local_519.f_19.f_41);
	}
	if (network_has_control_of_entity(iVar0))
	{
		if (_is_ped_using_scenario_hash(iVar0, -2118813809))
		{
			func_397(iVar0, get_entity_coords(iVar1, true, false), 5, 1, 2);
			task_turn_ped_to_face_coord(iVar0, get_entity_coords(iVar1, true, false), 0);
		}
	}
	if (_does_anim_scene_exist(Local_519.f_19.f_41))
	{
		if (Local_519.f_19.f_42 == get_player_index() && _network_has_control_of_anim_scene(Local_519.f_19.f_41))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, 256, false);
			}
			disable_all_control_actions(0);
			enable_control_action(0, -771458680, true);
			enable_control_action(0, -1450761377, true);
			if (func_398(iVar0, 1464580341))
			{
			}
			if (_0x0c3cb2e600c8977d(iVar0, 1))
			{
			}
			if (_is_ped_using_scenario_hash(iVar0, -2118813809))
			{
			}
			if (is_ped_active_in_scenario(iVar0, 0))
			{
			}
			if (_is_anim_scene_started(Local_519.f_19.f_41, false))
			{
			}
			if (((((!_0x0c3cb2e600c8977d(iVar0, 1) && !_is_ped_using_scenario_hash(iVar0, -2118813809)) && !is_ped_active_in_scenario(iVar0, 0)) && !_is_anim_scene_started(Local_519.f_19.f_41, false)) && !_is_anim_scene_finished(Local_519.f_19.f_41, false)) && !func_398(iVar1, 1369124074))
			{
				if (is_ped_male(iVar1))
				{
					sVar2 = "pedPlayer";
				}
				else
				{
					sVar2 = "pedPlayer_female";
				}
				set_anim_scene_entity(Local_519.f_19.f_41, sVar2, iVar1, 0);
				set_anim_scene_entity(Local_519.f_19.f_41, "pedStranger", iVar0, 0);
				set_anim_scene_origin(Local_519.f_19.f_41, get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2) + Vector(180f, 180f, 180f), 2);
				task_enter_anim_scene(iVar1, Local_519.f_19.f_41, sVar2, "pbl_handover", 1069379748, 1, 8, 20000, -1082130432);
			}
			if (is_ped_injured(iVar1))
			{
				if (_is_anim_scene_started(Local_519.f_19.f_41, false))
				{
					abort_anim_scene(Local_519.f_19.f_41, true);
				}
				func_247(16);
			}
			if (_is_anim_scene_finished(Local_519.f_19.f_41, false))
			{
				if (!func_171(8))
				{
					if (get_player_index() == Local_519.f_19.f_42 && !func_363(16, 255))
					{
						iVar3 = network_get_participant_index(get_player_index());
						if (network_is_participant_active(iVar3))
						{
							iVar4 = iVar3;
							func_399(Local_102[iVar4]->f_1.f_5, 1, 0, -142743235);
						}
						func_400(1);
					}
					func_247(8);
				}
			}
		}
	}
}

void func_274()
{
	iVar0 = func_253(0);
	iVar1 = func_253(1);
	iVar2 = get_player_ped(Local_519.f_19.f_42);
	func_174(0);
	if (Local_519.f_19.f_42 == get_player_index())
	{
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	if (!func_171(32))
	{
		if (func_171(16))
		{
			if (!func_318(16))
			{
				func_324(16);
			}
		}
		else if (!func_318(17))
		{
			func_324(17);
			if (Local_519.f_19.f_42 == get_player_index())
			{
				func_401(-1330378740, 0, 0);
			}
		}
		else if (!func_318(18))
		{
			func_324(18);
		}
		else if (func_332(func_114(Local_519.f_19.f_42), 128))
		{
			if (!func_318(2))
			{
				func_324(2);
			}
		}
	}
	if (func_386(iVar0, -1665583462, 1, 0))
	{
		_task_move_in_traffic(iVar0, 1f, 0, 0);
		task_look_at_entity(iVar0, iVar2, 8000, 48, 51, 1);
	}
	fVar3 = vdist(get_entity_coords(iVar1, false, false), get_entity_coords(iVar0, false, false));
	if (fVar3 > 50f)
	{
		if (_0xb07d3185e11657a5(iVar1))
		{
			if (network_is_host_of_this_script())
			{
				func_175(func_114(Local_519.f_19.f_42));
				func_402();
			}
		}
		if (network_has_control_of_entity(iVar0))
		{
			set_ped_min_move_blend_ratio(iVar0, 2f);
		}
	}
	if (!func_363(64, 255))
	{
		fVar4 = vdist(Global_35, get_entity_coords(iVar0, false, false));
		if (fVar4 > 100f)
		{
			func_247(64);
		}
	}
}

void func_275()
{
	iVar1 = func_253(0);
	iVar2 = func_253(1);
	iVar4 = 255;
	iVar4 = func_389(get_entity_coords(iVar1, true, false), &uVar0, 80f, 0, 0, 1);
	iVar3 = get_player_ped(iVar4);
	func_174(0);
	if (_is_ped_lassoed(iVar1))
	{
		if (!func_172(24))
		{
			func_385(24, 12000, 0);
		}
	}
	else if (_is_ped_hogtied(iVar1))
	{
		if (!func_172(23))
		{
			func_385(23, 12000, 0);
		}
	}
	else if (func_403(Local_519.f_19.f_39, 1, 0, 0, 0))
	{
		if (!func_172(22))
		{
			func_324(22);
		}
	}
	else if (!func_172(21))
	{
		func_324(21);
	}
	if (_0xb07d3185e11657a5(iVar2))
	{
		if (Local_519.f_19.f_39 == 2)
		{
			if (!func_172(3))
			{
				func_324(3);
				if (!_0x916b8e075abc8b4e(iVar2, 1) && network_has_control_of_entity(iVar2))
				{
					_0xe7fa07624574b79a(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
		else if (Local_519.f_19.f_39 == 1)
		{
			if (!func_172(4))
			{
				func_324(4);
				if (!_0x916b8e075abc8b4e(iVar2, 1) && network_has_control_of_entity(iVar2))
				{
					_0xe7fa07624574b79a(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
	}
	if (!func_372(8))
	{
		if (func_404(iVar1, Global_34))
		{
			func_401(-1898294040, 0, 0);
			func_373(8);
		}
	}
	if (func_386(iVar1, 518218985, 1, 0) && !is_ped_injured(iVar1))
	{
		func_397(iVar1, get_entity_coords(iVar3, true, false), 2, 1, 1);
		_task_smart_flee_style_coord(iVar1, get_entity_coords(iVar1, false, false), 3, 0, -1082130432, -1, 0);
	}
	if (!func_363(64, 255))
	{
		fVar5 = vdist(Global_35, get_entity_coords(iVar1, false, false));
		if (fVar5 > 100f)
		{
			func_247(64);
		}
		if (is_ped_injured(iVar1))
		{
			bVar6 = true;
			if (_0xb07d3185e11657a5(iVar2))
			{
				if (func_390(3))
				{
					if (!func_172(3))
					{
						bVar6 = false;
					}
					else if (func_322(1))
					{
						bVar6 = false;
					}
				}
				if (func_390(4))
				{
					if (!func_172(4))
					{
						bVar6 = false;
					}
					else if (func_322(1))
					{
						bVar6 = false;
					}
				}
			}
			if (bVar6)
			{
				func_247(64);
			}
		}
	}
}

int func_276(var uParam0, var uParam1)
{
	return uParam0;
}

int func_277(int iParam0)
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

int func_278(struct<2> Param0)
{
	return func_405(Param0);
}

void func_279(struct<2> Param0, var uParam2)
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
	switch (func_276(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_407(func_406(Param0));
			iVar5 = func_408(iVar4);
			if (!func_409(iVar5, 0))
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

int func_280(int iParam0, int iParam1)
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

void func_281(int iParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_410(&Var0);
}

var func_282(int iParam0)
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

var func_283(int iParam0)
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

var func_284(int iParam0)
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

bool func_285(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_411(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_286(int iParam0)
{
	return iParam0 + 8;
}

void func_287(int iParam0, int iParam1)
{
	Var0 = { func_336(iParam1, 896190569) };
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

void func_288(int iParam0)
{
	Var0.f_8 = iParam0;
	func_413(2, Var0, func_412(0, 8));
}

int func_289(int iParam0)
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

int func_290(int iParam0)
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

void func_291(var uParam0)
{
	func_181(uParam0, 0);
	func_181(uParam0, 1);
	func_181(uParam0, 3);
	func_179(uParam0);
}

void func_292(var uParam0)
{
	func_180(uParam0);
	func_414(uParam0, 0, 3);
}

void func_293(var uParam0)
{
	func_181(uParam0, 0);
	func_182(uParam0, 0);
	func_182(uParam0, 1);
	func_182(uParam0, 2);
}

void func_294(var uParam0)
{
	func_181(uParam0, 1);
	func_179(uParam0);
}

void func_295(var uParam0)
{
	func_181(uParam0, 2);
	func_182(uParam0, 3);
}

void func_296(var uParam0)
{
	func_181(uParam0, 3);
	func_182(uParam0, 4);
}

void func_297(var uParam0)
{
	func_182(uParam0, 0);
	func_182(uParam0, 1);
}

void func_298(var uParam0)
{
	func_182(uParam0, 2);
	func_182(uParam0, 3);
}

void func_299(var uParam0)
{
	func_182(uParam0, 4);
	func_182(uParam0, 5);
}

bool func_300(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_301(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_302(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_303(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

Vector3 func_304(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vVar0 = { func_415(vParam0, vParam3, fParam6) };
	return vParam0 + vVar0;
}

int func_305(int iParam0)
{
	if (!func_170(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

bool func_306(int iParam0, bool bParam1)
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

Vector3 func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar2[0] = 1271647689;
			iVar4 = func_416(&uVar0, &iVar2, 1, func_186(func_114(Local_519.f_19.f_42)), 1101004800);
			if (iVar4 > 0)
			{
				iVar5 = 0;
				while (iVar5 < iVar4)
				{
					if (get_entity_model(&(uVar0[iVar5])) == &iVar2[0])
					{
						return get_offset_from_entity_in_world_coords(&(uVar0[iVar5]), -3.1316f, 0.9043f, 0.2994f);
					}
					iVar5++;
				}
			}
			else
			{
				return func_212();
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar2[0] = 1271647689;
			iVar4 = func_416(&uVar0, &iVar2, 1, func_186(func_114(Local_519.f_19.f_42)), 1101004800);
			if (iVar4 > 0)
			{
				iVar8 = 0;
				while (iVar8 < iVar4)
				{
					if (get_entity_model(&(uVar0[iVar8])) == &iVar2[0])
					{
						vVar5 = { get_offset_from_entity_in_world_coords(&(uVar0[iVar8]), -3.1316f, 0.9043f, 0.2994f) };
						return func_417(vVar5, func_186(func_114(Local_519.f_19.f_42)));
					}
					iVar8++;
				}
			}
			else
			{
				return func_418();
			}
			break;
	}
	return 0f;
}

bool func_309(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_240(iParam1))
	{
		return false;
	}
	iVar0 = func_419(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1703424209;
		default:
			break;
	}
	return 0;
}

bool func_311(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_519.f_15 };
	iVar7 = 0;
	iVar8 = func_328(iParam0);
	iVar9 = func_420(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!network_does_network_id_exist(&(Local_0.f_99[iParam0])))
		{
			iVar9 = func_420(iParam0);
			fVar0 = func_421(iParam0);
			if (!func_169(Local_519.f_169.f_7[iParam0]->f_2, 2))
			{
				vVar1 = { _get_object_offset_from_coords(vVar4, 0f, func_422(iParam0)) };
			}
			else
			{
				vVar1 = { func_422(iParam0) };
			}
			if (!func_309(Local_0.f_99[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || _is_this_model_a_horse(iVar8)), 1, 1))
			{
				*bParam1 = 1;
			}
			else
			{
				iVar7 = net_to_ped(&(Local_0.f_99[iParam0]));
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
						func_423(iVar7, 1);
					}
					if (func_424(iParam0))
					{
						set_ped_can_be_targetted(iVar7, false);
					}
					if (_is_this_model_a_horse(iVar8))
					{
						if (func_425(iParam0))
						{
							if (func_424(iParam0))
							{
							}
						}
						else
						{
							set_ped_can_be_targetted(iVar7, false);
						}
					}
					if (func_312(iParam0))
					{
						if (network_request_control_of_network_id(&(Local_0.f_99[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_0.f_99[iParam0]));
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
		else if (_0xa0bc8faed8cfeb3c(net_to_ped(&(Local_0.f_99[iParam0]))))
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

bool func_312(int iParam0)
{
	return func_162(iParam0, 128);
}

bool func_313()
{
	return (func_123(64) || func_122(64, 255));
}

void func_314(int iParam0)
{
	Local_0.f_7.f_5 = iParam0;
}

void func_315(int iParam0)
{
	if (Local_0.f_7 != iParam0)
	{
		Local_0.f_7 = iParam0;
	}
}

bool func_316(int iParam0)
{
	return func_169(Local_0.f_7.f_1, iParam0);
}

void func_317(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!network_is_host_of_this_script())
		{
			return;
		}
	}
	func_235(&(Local_0.f_7.f_1), iParam0);
}

bool func_318(int iParam0)
{
	return is_bit_set(Local_0.f_7.f_6, iParam0);
}

bool func_319(var uParam0)
{
	return func_426(*uParam0, 1);
}

void func_320(int iParam0)
{
	func_427(Local_0.f_7.f_7[iParam0]);
}

int func_321()
{
	if (!func_171(4))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (func_169(Local_102[iVar0]->f_1, 4))
			{
				if (Local_102[iVar0]->f_1.f_6 != -1)
				{
					return network_get_player_index(iVar1);
				}
			}
		}
		iVar0++;
	}
	return 255;
}

bool func_322(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_323(var uParam0, int iParam1)
{
	if (!func_319(uParam0))
	{
		func_428(uParam0, 0);
		return false;
	}
	if (func_429(uParam0, iParam1))
	{
		func_430(uParam0);
		return true;
	}
	return false;
}

void func_324(int iParam0)
{
	if (func_376(func_375(iParam0)))
	{
		return;
	}
	else
	{
		func_431(func_375(iParam0));
	}
}

bool func_325(int iParam0)
{
	return func_169(Local_519.f_19.f_146, iParam0);
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_328(int iParam0)
{
	return Local_519.f_169.f_7[iParam0]->f_3;
}

bool func_329(int iParam0, int iParam1)
{
	Var0 = { func_336(iParam1, 896190569) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	return is_bit_set(iVar2, iParam0);
}

bool func_330(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0, int iParam1)
{
	if (!func_170(iParam0))
	{
		return false;
	}
	vVar0 = { func_186(iParam0) };
	iVar3 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar4 = create_itemset(false);
	iVar5 = _0x84ccf9a12942c83d(iVar3, iVar4, 1, 1, 0, "iCampFollowerCamp");
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		iVar6 = _get_entity_from_item(get_indexed_item_in_itemset(iVar7, iVar4));
		if (does_entity_exist(iVar6) && decor_get_int(iVar6, "iCampFollowerCamp") == iParam0)
		{
			*iParam1 = iVar6;
		}
		else
		{
			iVar7++;
		}
	}
	_delete_volume(iVar3);
	destroy_itemset(iVar4);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_332(int iParam0, int iParam1)
{
	if (!func_170(iParam0))
	{
		return false;
	}
	return func_214((*Global_1131196)[iParam0]->f_7, iParam1);
}

void func_333(int iParam0)
{
	Var0.f_8 = iParam0;
	func_413(1, Var0, func_412(0, 8));
}

void func_334(int iParam0, int iParam1, bool bParam2)
{
	iVar2 = func_328(iParam0);
	bVar3 = func_306(iParam1, 1);
	if (!is_bit_set(Local_519.f_169.f_5, iParam0))
	{
		if (network_does_network_id_exist(&(Local_0.f_99[iParam0])))
		{
			iVar1 = net_to_ped(&(Local_0.f_99[iParam0]));
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			Local_519.f_169.f_7[iParam0] = iVar1;
			if (bVar3)
			{
				if (is_entity_dead(iVar1) || is_entity_dead(player_ped_id()))
				{
					Local_102[iParam1]->f_8.f_2[iParam0] = -1f;
				}
				else
				{
					Local_102[iParam1]->f_8.f_2[iParam0] = vdist(get_entity_coords(iVar1, true, false), get_entity_coords(player_ped_id(), true, false));
				}
			}
			if (network_is_host_of_this_script())
			{
				if (func_312(iParam0))
				{
					if (network_does_network_id_exist(&(Local_0.f_99[iParam0])))
					{
						if (network_request_control_of_network_id(&(Local_0.f_99[iParam0])))
						{
							_0x7182edda1ee7db5a(&(Local_0.f_99[iParam0]));
						}
					}
				}
			}
			if (does_entity_exist(iVar1))
			{
				if (network_has_control_of_entity(iVar1))
				{
					func_432(iVar1, 1f, 0);
					sVar0 = func_433(iParam0);
					if (!_0x375f5870a7b8bec1(sVar0))
					{
						func_434(iVar1, sVar0, 1);
					}
				}
				if (func_424(iParam0))
				{
					set_ped_can_be_targetted(iVar1, false);
				}
				if (_is_this_model_a_horse(iVar2))
				{
					if (func_425(iParam0))
					{
						if (func_424(iParam0))
						{
						}
					}
					else
					{
						set_ped_can_be_targetted(iVar1, false);
					}
				}
				set_bit(&(Local_519.f_169.f_5), iParam0);
				if (bParam2)
				{
					func_435(iParam0);
				}
			}
		}
	}
}

bool func_335(var uParam0, int iParam1, char* sParam2)
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

struct<2> func_336(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_436(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_437(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_337()
{
	Local_519.f_169.f_6 = 0;
	Local_519.f_169.f_2 = 0;
	Local_519.f_169.f_1 = -1;
}

void func_338(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_519.f_169.f_2 = (Local_519.f_169.f_2 || Local_102[iParam0]->f_8);
		Local_519.f_169.f_1 = (Local_519.f_169.f_1 && Local_102[iParam0]->f_8);
		Local_519.f_169.f_6 = (Local_519.f_169.f_6 || Local_102[iParam0]->f_8.f_1);
	}
}

int func_339(int iParam0)
{
	return iParam0;
}

int func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return 0;
	}
	fVar0 = vdist(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	Local_102[iParam3]->f_8.f_2[iParam2] = fVar0;
	if (fVar0 > Local_519.f_169.f_7[iParam2]->f_9)
	{
		return 0;
	}
	return 1;
}

void func_341(var uParam0)
{
	func_438(uParam0, 0f);
}

bool func_342(var uParam0)
{
	return func_426(*uParam0, 1);
}

bool func_343(var uParam0, float fParam1)
{
	if (!func_342(uParam0))
	{
		return false;
	}
	if (func_439(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_344(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_345(int iParam0)
{
	return true;
}

void func_346(int iParam0, int iParam1)
{
	func_235(&(Local_519.f_169.f_7[iParam0]->f_2), iParam1);
}

bool func_347(int iParam0, int iParam1)
{
	if (!func_306(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	return func_169(Local_102[iParam1]->f_8, iParam0);
}

void func_348(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_215(&(Local_102[iVar0]->f_8), iParam0);
}

void func_349(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_235(&(Local_102[iVar0]->f_8), iParam0);
}

bool func_350()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_351(int iParam0)
{
	if (func_440(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

struct<10> func_352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_353(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = _item_database_create_item_collection(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_354(int iParam0, int iParam1)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_442(iParam0);
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
			if (!func_443(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_444(iParam0))
			{
				return true;
			}
			break;
	}
	return func_445(iParam0, 0, 0, 0) >= iParam1;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 1927429448:
			iVar0 = 48;
			break;
		case -1761943215:
			iVar0 = 47;
			break;
		case 1850062231:
			iVar0 = 46;
			break;
		case 1610737930:
			iVar0 = 45;
			break;
		case 157844029:
			iVar0 = 44;
			break;
		case -1776228845:
			iVar0 = 43;
			break;
		case 891311852:
			iVar0 = 42;
			break;
		case 2060248942:
			iVar0 = 41;
			break;
		case -2072937086:
			iVar0 = 40;
			break;
		case -159965980:
			iVar0 = 39;
			break;
		case -230982446:
			iVar0 = 38;
			break;
		case -1056176476:
			iVar0 = 37;
			break;
		case -1109558441:
			iVar0 = 36;
			break;
		case -1353737667:
			iVar0 = 35;
			break;
		case -1361605241:
			iVar0 = 34;
			break;
		case -1818374673:
			iVar0 = 33;
			break;
		case -827300300:
			iVar0 = 32;
			break;
		case -330313895:
			iVar0 = 31;
			break;
		case -1876678165:
			iVar0 = 30;
			break;
		case -1648459215:
			iVar0 = 29;
			break;
		case -1282256419:
			iVar0 = 28;
			break;
		case -636938112:
			iVar0 = 27;
			break;
		case -1373103850:
			iVar0 = 26;
			break;
		case -1390787310:
			iVar0 = 25;
			break;
		case -689676822:
			iVar0 = 24;
			break;
		case 1338124689:
			iVar0 = 23;
			break;
		case 1590177017:
			iVar0 = 22;
			break;
		case -1980620421:
			iVar0 = 21;
			break;
		case -1059622646:
			iVar0 = 20;
			break;
		case -483015950:
			iVar0 = 19;
			break;
		case 488325262:
			iVar0 = 18;
			break;
		case 1781733473:
			iVar0 = 17;
			break;
		case 1635889277:
			iVar0 = 16;
			break;
		case -1140871111:
			iVar0 = 15;
			break;
		case 532201260:
			iVar0 = 14;
			break;
		case -348823399:
			iVar0 = 13;
			break;
		case -151108755:
			iVar0 = 12;
			break;
		case -1240620284:
			iVar0 = 11;
			break;
		case -1535978095:
			iVar0 = 10;
			break;
		case 1663095412:
			iVar0 = 9;
			break;
		case -546209848:
			iVar0 = 8;
			break;
		case -1277667710:
			iVar0 = 7;
			break;
		case 2058993648:
			iVar0 = 6;
			break;
		case 880496229:
			iVar0 = 5;
			break;
		case 166398389:
			iVar0 = 4;
			break;
		case -467118139:
			iVar0 = 3;
			break;
		case -1768405210:
			iVar0 = 2;
			break;
		case 524620511:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_357(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_358(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_446(uParam2, 1, iVar0);
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
			if (func_447(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_448(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_449(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_450(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_451(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_452(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_448(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_453(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_454(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_455(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_456(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_456(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_448(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_457(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_458(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_459(uParam2, 4000))
				{
					if ((func_460(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_461(uParam2, iParam0)) && func_462(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_460(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_461(uParam2, iParam0)) && func_462(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_463(iParam0, Global_1940258->f_35))
					{
						func_464();
						*uParam3 = 2;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_465(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_466() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_464();
						*uParam3 = 2;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_467())
				{
					if (func_463(iParam0, Global_1940258->f_36))
					{
						func_464();
						*uParam3 = 2;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_468(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_448(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_469(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_448(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_470(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_471(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_472(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_473(uParam2, 4000))
				{
					if (func_474(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_448(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_475(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_448(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_476(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_448(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_359(bool bParam0)
{
	if (!func_122(64, 255))
	{
		iVar0 = func_280(Local_519.f_1, Local_519.f_2);
		func_477(iVar0);
		if (!func_122(1024, 255))
		{
			func_139(1024);
		}
		func_478(iVar0);
		if (bParam0)
		{
			func_362(Local_519.f_1, Local_519.f_4);
		}
		func_139(64);
	}
}

void func_360(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_361()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			Local_102[iVar0]->f_1.f_1 = 0;
		}
		iVar0++;
	}
}

void func_362(int iParam0, int iParam1)
{
	if (!func_285(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_286(iParam1);
	func_479(iVar0, iParam0);
}

bool func_363(int iParam0, int iParam1)
{
	if (!func_306(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	if (!func_306(iParam1, 1))
	{
		return false;
	}
	return func_169(Local_102[iParam1]->f_1, iParam0);
}

void func_364(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_235(&(Local_102[iVar0]->f_1), iParam0);
}

void func_365(int iParam0)
{
	iVar0 = network_get_participant_index(get_player_index());
	iVar1 = network_get_participant_index(Local_519.f_19.f_42);
	iVar2 = iVar0;
	iVar3 = iVar1;
	switch (iParam0)
	{
		case 0:
			func_370();
			break;
		case 1:
			if (Local_519.f_19.f_42 == get_player_index())
			{
				func_480(0, "NB_WILD_MAN_GIVE_MEAT", -163964935, 3, 0);
				func_480(1, "NB_WILD_MAN_LEAVE_ILO", 648122183, 3, 0);
				if (network_is_participant_active(iVar0))
				{
					func_482(&(Local_519.f_19.f_143[0]), "ITEM_TITHE", func_481(Local_102[iVar2]->f_1.f_5), 1);
				}
				func_483(0);
			}
			break;
		case 2:
			if (network_is_participant_active(iVar1))
			{
			}
			if (Local_519.f_19.f_42 == get_player_index())
			{
				func_480(0, "NB_WILD_MAN_NO_MEAT", -163964935, 3, 0);
				func_480(1, "NB_WILD_MAN_LEAVE_ILO", 648122183, 3, 0);
				func_484(0, 0);
				func_484(1, 1);
				if (func_485(13) < 1)
				{
					func_486("NB_WILDMAN_GIVE_HELP", 10000, 0, 0, 0, 1);
					func_487(13);
				}
			}
			break;
		case 3:
			if (network_is_participant_active(iVar1))
			{
			}
			if (Local_519.f_19.f_42 == get_player_index() && network_is_participant_active(iVar0))
			{
				if (Local_102[iVar2]->f_1.f_5 != 0)
				{
					func_480(0, "NB_WILD_MAN_GIVE_MEAT", -163964935, 3, 0);
					func_480(1, "NB_WILD_MAN_LEAVE_ILO", 648122183, 3, 0);
					if (network_is_participant_active(iVar1))
					{
						func_482(&(Local_519.f_19.f_143[0]), "ITEM_TITHE", func_481(Local_102[iVar3]->f_1.f_5), 1);
					}
					func_484(0, 0);
					func_484(1, 1);
				}
			}
			break;
		case 4:
			if (network_is_participant_active(iVar1))
			{
			}
			if (Local_519.f_19.f_42 == get_player_index() && network_is_participant_active(iVar0))
			{
				if (Local_102[iVar2]->f_1.f_5 != 0)
				{
					func_480(0, "NB_WILD_MAN_GIVE_MEAT", -163964935, 3, 0);
					func_480(1, "NB_WILD_MAN_LEAVE_ILO", 648122183, 3, 0);
					if (network_is_participant_active(iVar1))
					{
						func_482(&(Local_519.f_19.f_143[0]), "ITEM_TITHE", func_481(Local_102[iVar3]->f_1.f_5), 1);
					}
					func_483(1);
				}
			}
			break;
	}
}

bool func_366(int iParam0)
{
	if (func_488(iParam0))
	{
		bVar0 = true;
	}
	if (_is_ped_using_scenario_hash(iParam0, -447259824))
	{
		bVar0 = true;
	}
	if (_is_ped_using_scenario_hash(iParam0, -229964281))
	{
		bVar0 = true;
	}
	if (_is_ped_using_scenario_hash(iParam0, 889554021))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_367(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (!func_306(iParam2, 0))
	{
		if (!func_219(&iParam2))
		{
			return false;
		}
	}
	fVar0 = &Local_102[iParam2]->f_8.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_489(iParam0);
			if (does_entity_exist(iVar1))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iParam2));
				if (_network_is_player_index_valid(iVar2))
				{
					fVar0 = vdist(get_entity_coords(iVar1, true, false), func_490(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_102[iParam2]->f_8.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_368(int iParam0)
{
	return &(Local_0.f_7.f_2[iParam0]);
}

bool func_369(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (network_has_control_of_network_id(iParam0) || (!network_has_control_of_network_id(iParam0) && network_is_host_of_this_script()))
		{
			if (func_491(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_370()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_492(&(Local_519.f_19.f_143[iVar0])))
		{
			func_493(Local_519.f_19.f_143[iVar0], 1, 1);
		}
		iVar0++;
	}
}

bool func_371(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam1, iParam2))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					return get_ped_index_from_entity_index(iVar0) == func_253(iParam0);
				}
			}
		}
	}
	return false;
}

bool func_372(int iParam0)
{
	return func_169(Local_519.f_19.f_6, iParam0);
}

void func_373(int iParam0)
{
	func_215(&(Local_519.f_19.f_6), iParam0);
}

void func_374(int iParam0)
{
	func_235(&(Local_519.f_19.f_6), iParam0);
}

int func_375(int iParam0)
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
			return 16777216;
		case 21:
			return 1048576;
		case 22:
			return 2097152;
		case 23:
			return 4194304;
		case 24:
			return 8388608;
		case 25:
			return 33554432;
		case 26:
			return 67108864;
		default:
			break;
	}
	return 1;
}

bool func_376(int iParam0)
{
	return func_169(Local_519.f_19.f_149, iParam0);
}

bool func_377(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 6:
		case 7:
			if (!func_388(func_387(0)) && !func_388(func_387(1)))
			{
				iVar0 = 1;
			}
			break;
		case 24:
			if ((!func_172(23) && !func_172(21)) && !func_172(22))
			{
				iVar0 = 1;
			}
			break;
		case 23:
			if ((!func_172(24) && !func_172(21)) && !func_172(22))
			{
				iVar0 = 1;
			}
			break;
		case 21:
			if ((!func_172(23) && !func_172(24)) && !func_172(22))
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if ((!func_172(23) && !func_172(21)) && !func_172(24))
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

void func_378(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (iVar0 != iParam0)
		{
			if (func_494(func_375(iVar0), 255))
			{
				func_495(func_375(iVar0));
			}
		}
		iVar0++;
	}
}

bool func_379(int iParam0)
{
	if (func_496(iParam0))
	{
		uVar1 = func_387(iParam0);
		iVar2 = get_player_ped(Local_519.f_19.f_42);
		iVar3 = func_253(0);
		bVar0 = func_497(iVar2, uVar1, 291934926, iVar3, 1, 0, 0, 1);
		return bVar0;
	}
	else if (!func_322(1))
	{
		StringCopy(&cVar4, func_387(iParam0), 24);
		bVar0 = func_498(&(Local_519.f_19.f_44), cVar4, 0, -1, 0, 0);
		return bVar0;
	}
	return false;
}

bool func_380(int iParam0)
{
	bVar0 = false;
	switch (iParam0)
	{
		case 5:
		case 6:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_253(0);
		func_389(get_entity_coords(iVar1, true, false), &fVar2, 1203982208, 0, 0, 0);
		if (fVar2 > 7f)
		{
			return true;
		}
	}
	return false;
}

void func_381(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_382(int iParam0)
{
	set_bit(&(Local_519.f_19.f_43), iParam0);
}

void func_383(int iParam0)
{
	set_bit(&(Local_0.f_7.f_6), iParam0);
}

void func_384()
{
	if (!func_122(32, 255))
	{
		func_499(Local_519.f_1, Local_519.f_3);
		if (!func_122(1024, 255))
		{
			func_500(Local_519.f_1);
			func_139(1024);
		}
		iVar0 = func_280(Local_519.f_1, Local_519.f_2);
		func_477(iVar0);
		func_478(iVar0);
		func_137(2);
		func_501(Local_519.f_9);
		func_502(Local_519.f_1);
		func_503(Local_519.f_1, Local_519.f_2, Local_519.f_3);
		func_139(32);
	}
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	if (func_429(Local_0.f_7.f_7[iParam0], iParam1))
	{
		if (!func_318(iParam0))
		{
			func_324(iParam0);
		}
		else
		{
			func_430(Local_0.f_7.f_7[iParam0]);
			if (network_is_host_of_this_script())
			{
				func_504(iParam0);
			}
			func_505(iParam0);
			func_506(func_375(iParam0));
			if (bParam2)
			{
				StringCopy(&cVar0, func_387(iParam0), 24);
				_0xef51242e35242b47(&cVar0);
			}
		}
	}
	else if (!func_319(Local_0.f_7.f_7[iParam0]))
	{
		if (network_is_host_of_this_script())
		{
			func_507(Local_0.f_7.f_7[iParam0], 0);
		}
	}
	if (func_319(Local_0.f_7.f_7[iParam0]))
	{
	}
}

bool func_386(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam2 && !network_has_control_of_entity(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_508(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && is_ped_being_jacked(iParam0))
	{
		return false;
	}
	return true;
}

var func_387(int iParam0)
{
	StringCopy(&cVar1, "OREWM_", 64);
	StringConCat(&cVar1, func_509(iParam0), 64);
	switch (iParam0)
	{
		case 0:
			sVar0 = "_CALLOUT";
			break;
		case 1:
			sVar0 = "_IDLE";
			break;
		case 2:
			sVar0 = "_CRIPPS";
			break;
		case 3:
			sVar0 = "_CATTCK1";
			break;
		case 4:
			sVar0 = "_CATTCK2";
			break;
		case 5:
			sVar0 = "_SIDLE";
			break;
		case 6:
			sVar0 = "_CALL";
			break;
		case 7:
			sVar0 = "_PREANT";
			break;
		case 8:
			sVar0 = "_NAPPRCH";
			break;
		case 9:
			sVar0 = "_APPRCH";
			break;
		case 10:
			sVar0 = "_HELP";
			break;
		case 11:
			sVar0 = "_RAW";
			break;
		case 12:
			sVar0 = "_COOKS";
			break;
		case 13:
			sVar0 = "_WAIT1";
			break;
		case 14:
			sVar0 = "_WAIT2";
			break;
		case 15:
			sVar0 = "_DECLINE";
			break;
		case 16:
			sVar0 = "_LEAVES";
			break;
		case 17:
			sVar0 = "_THANKS";
			break;
		case 18:
			sVar0 = "_ITLEAVE";
			break;
		case 19:
			sVar0 = "_OWNER";
			break;
		case 20:
			sVar0 = "_PASIDLE";
			break;
		case 21:
			sVar0 = "_ANTG1";
			break;
		case 22:
			sVar0 = "_ANTG2";
			break;
		case 23:
			sVar0 = "_HOGTIE1";
			break;
		case 24:
			sVar0 = "_HOGTIE2";
			break;
		case 25:
			sVar0 = "SILENT_GENERIC_AGREE";
			break;
		case 26:
			sVar0 = "SILENT_GENERIC_DISAGREE";
			break;
		case -1:
			return "";
	}
	StringConCat(&cVar1, sVar0, 64);
	if (func_496(iParam0))
	{
		StringCopy(&cVar1, sVar0, 64);
	}
	return func_510(cVar1);
}

bool func_388(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

int func_389(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		else if (bParam7 && !func_511(network_get_participant_index(iVar2), 1, 1))
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

bool func_390(int iParam0)
{
	return func_376(func_375(iParam0));
}

void func_391(int iParam0)
{
	if (func_376(func_375(iParam0)))
	{
		func_495(func_375(iParam0));
	}
}

int func_392(int iParam0)
{
	if (!func_319(Local_0.f_7.f_7[iParam0]))
	{
		return 0;
	}
	return func_512(Local_0.f_7.f_7[iParam0]);
}

void func_393(int iParam0, int iParam1)
{
	if (!func_513(255))
	{
		func_174(iParam0);
		return;
	}
	if (!does_blip_exist(&(Local_519.f_19.f_1[iParam0])))
	{
		Local_519.f_19.f_1[iParam0] = _blip_add_for_entity(-89429847, func_253(0));
		set_blip_name_from_text_file(&(Local_519.f_19.f_1[iParam0]), "NB_WILDMAN_BLIP_NAME");
	}
	if (iParam1 != 0)
	{
		_blip_set_modifier(&(Local_519.f_19.f_1[iParam0]), 942020339);
	}
}

int func_394()
{
	if (func_363(2, 255))
	{
		if (func_363(4, 255))
		{
			return Local_102[participant_id_to_int()]->f_1.f_6;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_514(&(Local_519.f_19.f_143[iVar0]), 1))
			{
				Local_102[participant_id_to_int()]->f_1.f_6 = iVar0;
				func_247(4);
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_395(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

void func_396()
{
	if (!func_64(2))
	{
		return;
	}
	func_137(8);
}

void func_397(int iParam0, vector3 vParam1, int iParam4, var uParam5, var uParam6)
{
	if (!func_515(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (uParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_163(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, uParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, uParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, uParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, uParam6);
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

bool func_398(int iParam0, int iParam1)
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

int func_399(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_516(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_517(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_518(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_354(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_519(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_445(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_445(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_399(iParam0, func_445(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_442(iParam0) == -427144552)
	{
		if (!func_520(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_521(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_522(iParam0, 0, 0) };
		if (func_523(0) && Var7.f_4 == 1084182731)
		{
			func_524(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_523(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_518(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_400(bool bParam0)
{
	if (!func_64(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_64(256))
		{
			func_168(Local_519.f_18, 0);
			func_137(256);
		}
	}
	func_137(16);
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	if (func_28() != 0)
	{
		return;
	}
	if (func_525())
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
		if (!&Global_1139381->f_3876.f_2[func_526(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_526(iParam0, 1)])->f_2++;
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
	func_527(&Var0, uVar7);
}

void func_402()
{
	if (!func_123(256))
	{
		return;
	}
	func_115(512);
}

bool func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_404(int iParam0, int iParam1)
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

int func_405(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_528(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_406(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_528(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_407(int iParam0)
{
	iVar0 = -1;
	if (func_300(&Var1, iParam0))
	{
		iVar0 = ((func_529() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_408(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_409(int iParam0, int iParam1)
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

void func_410(var uParam0)
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
	func_530(uParam0, uParam0->f_1);
}

int func_411(int iParam0)
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

var func_412(int iParam0, int iParam1)
{
	return func_531(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_413(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_330(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 6, &uParam15);
}

void func_414(var uParam0, int iParam1, int iParam2)
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

Vector3 func_415(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_532(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_416(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_533(uParam0, iParam1, iVar0, iParam2);
	func_534(iVar0);
	return iVar1;
}

float func_417(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

float func_418()
{
	fVar0 = func_417(Global_1132288->f_2027.f_1, func_186(func_114(Local_519.f_19.f_42)));
	vVar1 = { func_186(func_114(Local_519.f_19.f_42)) };
	return fVar0;
}

int func_419(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_420(int iParam0)
{
	return Local_519.f_169.f_7[iParam0]->f_4;
}

float func_421(int iParam0)
{
	return Local_519.f_169.f_7[iParam0]->f_5;
}

Vector3 func_422(int iParam0)
{
	return Local_519.f_169.f_7[iParam0]->f_6;
}

void func_423(int iParam0, bool bParam1)
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

bool func_424(int iParam0)
{
	return func_162(iParam0, 32);
}

bool func_425(int iParam0)
{
	return func_162(iParam0, 64);
}

bool func_426(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_427(var uParam0)
{
	func_507(uParam0, 0);
}

void func_428(var uParam0, bool bParam1)
{
	if (bParam1 || !func_319(uParam0))
	{
		func_427(uParam0);
	}
}

bool func_429(var uParam0, int iParam1)
{
	if (!func_319(uParam0))
	{
		return false;
	}
	if (func_512(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_430(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_431(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_215(&(Local_102[iVar0]->f_1.f_1), iParam0);
}

void func_432(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_535(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

char* func_433(int iParam0)
{
	return Local_519.f_169.f_7[iParam0]->f_10;
}

void func_434(int iParam0, char* sParam1, bool bParam2)
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

void func_435(int iParam0)
{
}

int func_436(int iParam0)
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

struct<2> func_437(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_438(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_536() - fParam1);
	func_537(uParam0, 1);
	func_538(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_439(var uParam0)
{
	if (!func_342(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_539(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_536() - uParam0->f_1);
}

bool func_440(int iParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_441(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_442(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_443(int iParam0, int iParam1)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_517(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_540("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_541(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_542(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_543(iVar1);
				return true;
			}
			iVar3++;
		}
		func_543(iVar1);
	}
	return false;
}

bool func_444(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_544(iParam0);
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
	iVar1 = func_545(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_546(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_547(iParam0);
	iVar2 = func_546(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_445(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_442(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_517(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_548(iParam0, 0);
	}
	if (func_549(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_550(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_551(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_550(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_446(var uParam0, bool bParam1, int iParam2)
{
	func_552(iParam2);
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
		uParam0->f_14 = func_553(0);
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
							func_215(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_554(1, 1))
						{
							func_215(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_554(1, 1) || *uParam0 & 8192 != 0))
				{
					func_235(uParam0, 33554432);
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
			if (func_555(uParam0))
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
	func_556(uParam0);
}

bool func_447(int iParam0, var uParam1)
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
			if (!func_557(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_558(iParam0, iVar2) <= func_559(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_448(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_403(iParam2, 1, 1, 1, 0))
	{
		func_215(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_560(uParam1, 1);
	func_561();
}

bool func_449(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_562(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_563(uParam1);
			if (func_564(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_3);
				iVar3 = func_565(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_560(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_566(uParam1))
						{
							func_560(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_450(int iParam0, int iParam1, var uParam2)
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
	if (func_567(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_563(uParam2);
		if (func_564(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = get_game_timer();
			}
			if (uParam2->f_3 != 0)
			{
				if (get_game_timer() - uParam2->f_3) > func_565(uParam2)
				{
					func_560(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_451(int iParam0, var uParam1)
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
	if (func_557(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_565(uParam1)
		{
			fVar3 = func_563(uParam1);
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

int func_452(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_568(bParam1, bParam2, bParam3);
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

bool func_453(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_466();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_454(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_569(uParam2);
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
			if (func_462(uParam2, iParam1))
			{
				func_560(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_455(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 < IntToFloat(func_570(uParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_462(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_560(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_456(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_571(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_24))
				{
					func_560(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_30))
				{
					func_560(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar4, 0, 0);
					if (func_572(iParam1, vVar0, vVar4))
					{
						func_560(uParam2, 1);
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
					func_560(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_29, &vVar7, 0, 0);
					if (func_572(iParam1, vVar0, vVar7))
					{
						func_560(uParam2, 1);
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

bool func_457(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_557(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_573(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_574(&(Global_1940258->f_28[iVar0])))
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
			if (func_575(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_576(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_577(uParam1, iParam0, fVar1, iVar0))
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

bool func_458(int iParam0, var uParam1)
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

bool func_459(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_466();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_460(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_578(iVar0, &iVar2))
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
	if (func_579(iVar0, iParam0))
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

int func_461(var uParam0, int iParam1)
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

bool func_462(var uParam0, int iParam1)
{
	if (func_580(uParam0))
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

bool func_463(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_581(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_464()
{
}

bool func_465(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_582(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_466();
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
						if (func_583(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_466();
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

int func_466()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_467()
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
	if ((func_466() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_468(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_559(uParam0);
	if (uParam0->f_13 > func_584(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_585(iParam1);
	iVar1 = func_586(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_469(var uParam0, int iParam1)
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
	if (func_587(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_588(vVar1, vVar4);
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

int func_470(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_589(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_471(int iParam0, var uParam1)
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
		if (func_590(iParam0, uParam1, 1))
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
	if (!func_591(iParam0))
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
			if (func_592(uParam1))
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
					if (!func_593(uParam1, iParam0))
					{
						if (func_583(iVar4, Global_35, 1) < 7f)
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

bool func_472(int iParam0, var uParam1)
{
	if (!func_594(0))
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

bool func_473(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_466();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_474(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_475(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_466();
	}
	else if (func_466() - uParam1->f_5) > func_595(uParam1)
	{
		return func_596(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_476(var uParam0, int iParam1)
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

void func_477(int iParam0)
{
	if (func_119(Global_1272030[iParam0]))
	{
		return;
	}
	func_597(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_120((*Global_1272030)[iParam0]);
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_598(153786159) };
		stat_id_set_int(&Var34, iVar33, true);
		Var34 = { func_598(217123284) };
		stat_id_set_int(&Var34, Global_1296859->f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_598(945205875) };
		stat_id_set_int(&Var37, iVar36, true);
		Var37 = { func_598(890183498) };
		stat_id_set_int(&Var37, Global_1296859->f_21, true);
	}
}

void func_478(int iParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_410(&Var0);
}

void func_479(int iParam0, int iParam1)
{
	Var0 = { func_336(iParam1, 896190569) };
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

void func_480(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	func_493(Local_519.f_19.f_143[iParam0], 1, 1);
	iVar0 = func_253(0);
	iVar1 = func_599(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	iVar2 = func_600(iVar1);
	func_601(iVar1, 18, 0, 1);
	func_601(iVar1, 17, 0, 1);
	_uiprompt_set_group((*Global_1951255)[iVar2]->f_3, _uiprompt_get_group_id_for_target_entity(iVar0), 0);
	func_603(iVar1, func_602(iParam0), 1, 1);
	Local_519.f_19.f_143[iParam0] = iVar1;
}

int func_481(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_604(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_482(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_492(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(10, sParam1, _create_var_string(0, sParam2)));
}

void func_483(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_484(iVar0, bParam0);
		iVar0++;
	}
}

void func_484(int iParam0, bool bParam1)
{
	func_603(&(Local_519.f_19.f_143[iParam0]), bParam1, 1, 1);
	if (bParam1)
	{
		set_bit(&(Local_519.f_19.f_142), iParam0);
	}
	else
	{
		clear_bit(&(Local_519.f_19.f_142), iParam0);
	}
}

int func_485(int iParam0)
{
	Var0 = { func_336(iParam0, -1557568325) };
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

var func_486(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_487(int iParam0)
{
	Var0 = { func_336(iParam0, -1557568325) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

bool func_488(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_489(int iParam0)
{
	return &(Local_519.f_169.f_7[iParam0]);
}

Vector3 func_490(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_491(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

bool func_492(int iParam0)
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

void func_493(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_492(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_600(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_605(iVar0);
	*uParam0 = 0;
}

bool func_494(int iParam0, int iParam1)
{
	if (!func_306(iParam1, 0))
	{
		if (!func_219(&iParam1))
		{
			return false;
		}
	}
	if (!func_306(iParam1, 1))
	{
		return false;
	}
	return func_169(Local_102[iParam1]->f_1.f_1, iParam0);
}

void func_495(int iParam0)
{
	if (!func_219(&iVar0))
	{
		return;
	}
	func_235(&(Local_102[iVar0]->f_1.f_1), iParam0);
}

bool func_496(int iParam0)
{
	if (iParam0 == 25 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

bool func_497(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_606(iParam0, &Var0);
}

bool func_498(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_607(cParam1, cParam0);
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

void func_499(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_336(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	set_bit(&iVar33, iParam1);
	if (!func_112(&Var0, 4) && func_608(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!stat_id_set_int(&Var31, iVar33, true))
	{
	}
	(*Global_1268861)[network_player_id_to_int()]->f_56[iParam0] = iVar33;
}

void func_500(int iParam0)
{
	func_609(iParam0);
}

void func_501(struct<2> Param0)
{
	if (func_278(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_278(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_278(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_610(Param0, &Var0))
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

void func_502(int iParam0)
{
	Var0 = { func_336(iParam0, -1797584255) };
	_0x6a0184e904cdf25e(&Var0, 1);
}

void func_503(int iParam0, int iParam1, int iParam2)
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

void func_504(int iParam0)
{
	clear_bit(&(Local_0.f_7.f_6), iParam0);
}

void func_505(int iParam0)
{
	clear_bit(&(Local_519.f_19.f_43), iParam0);
}

void func_506(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			func_235(&(Local_102[iVar0]->f_1.f_1), iParam0);
		}
		iVar0++;
	}
}

void func_507(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_537(uParam0, 1);
	func_538(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_508(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

var func_509(int iParam0)
{
	if (func_611(iParam0))
	{
		StringCopy(&cVar0, "G", 32);
	}
	else if (iParam0 == 8)
	{
		_int_to_string(1, "%i", &cVar0);
	}
	else
	{
		iVar4 = func_612();
		iVar4++;
		if (iVar4 <= 5)
		{
			_int_to_string(iVar4, "%i", &cVar0);
		}
		else
		{
			StringCopy(&cVar0, "G", 32);
		}
	}
	return func_613(cVar0);
}

var func_510(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_511(int iParam0, bool bParam1, bool bParam2)
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

int func_512(var uParam0)
{
	if (!func_319(uParam0))
	{
		return 0;
	}
	if (func_614(uParam0))
	{
		return uParam0->f_2;
	}
	return func_615(uParam0->f_1);
}

bool func_513(int iParam0)
{
	return func_122(8, iParam0);
}

bool func_514(int iParam0, bool bParam1)
{
	if (bParam1 && !func_492(iParam0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_515(int iParam0, int iParam1)
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
	if (func_214(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_214(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_214(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_214(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_214(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_214(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_214(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_214(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_516(int iParam0)
{
	return func_442(iParam0) == 2085633299;
}

int func_517(int iParam0, int iParam1)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_442(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_616(iParam0, 1399091007))
	{
		func_617(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_518(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_441(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_618() || bParam6)
	{
		func_619(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_620(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_620(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_621(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_442(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_544(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_622(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_616(iParam0, 474910316))
	{
		sVar17 = func_623(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_616(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_624(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_481(iParam0);
	if ((func_625(iVar12) && func_616(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_626(iParam0);
	}
	else if (func_442(iParam0) == -1037537535)
	{
		iVar19 = func_627(iParam0);
		if (func_441(iVar19, 0))
		{
			iVar18 = func_481(iVar19);
		}
	}
	if (func_628(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_629(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_630(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_631(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_632(iParam0, &cVar22))
		{
			sVar21 = func_634(func_633(cVar22), 109029619);
		}
	}
	func_635(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_519(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return Var0;
	}
	if (func_616(iParam0, -305066475))
	{
		if (func_28() == -1)
		{
			if (func_616(iParam0, -537818634))
			{
				return func_636(189951448);
			}
			else
			{
				return func_636(1176172851);
			}
		}
	}
	else if (func_616(iParam0, -537818634))
	{
		return func_636(-963660207);
	}
	if (func_616(iParam0, 2084895747))
	{
		return func_636(1694039471);
	}
	return Var2;
}

bool func_520(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_637(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_639(&Var0, func_638(0));
	}
	if (!func_640(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_541(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_641(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_543(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_521(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_549(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_642(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_522(iParam0, bParam4, 0) };
	Var6 = { func_643(iParam0, Var1, Var1.f_4, bParam4) };
	return func_641(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_522(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_644(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_442(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_643(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_638(bParam1) };
			if (bParam2 && func_645(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_646(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_646(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_647(iParam0, &Var6, 1728382685))
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
			Var0 = { func_648(bParam1) };
			switch (func_544(iParam0))
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
			if (func_649(iParam0, -1823706425))
			{
				Var0 = { func_643(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_649(iParam0, -1483207246))
			{
				Var0 = { func_643(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_643(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_649(iParam0, -1653629781))
			{
				Var0 = { func_643(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_650(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_649(iParam0, -1653629781))
			{
				Var0 = { func_643(1384535894, Var0, 1784584921, bParam1) };
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

bool func_523(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_550(bParam0));
}

void func_524(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_651() && iParam2 == 0))
	{
		func_652(1);
		func_653(1);
	}
}

bool func_525()
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

int func_526(int iParam0, int iParam1)
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

void func_527(var uParam0, var uParam1)
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

bool func_528(struct<2> Param0, var uParam2)
{
	if (!func_37(Param0))
	{
		return false;
	}
	func_654(uParam2);
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

int func_529()
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

void func_530(var uParam0, var uParam1)
{
}

var func_531(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_655() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_656());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_656());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_656());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_657(get_player_team(iVar5)));
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
			if (func_658(iVar2))
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
				if (iVar9 & 8192 != 0 && func_659(iVar2) != 1)
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
					if (!func_660(iVar10))
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

Vector3 func_532(vector3 vParam0)
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

int func_533(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_534(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

float func_535(float fParam0, float fParam1, float fParam2)
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

float func_536()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_537(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_538(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_539(var uParam0)
{
	return func_426(*uParam0, 2);
}

bool func_540(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_550(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_541(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_542(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_543(int iParam0)
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

int func_544(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_545(int iParam0)
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

int func_546(var uParam0, int iParam1)
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

int func_547(int iParam0)
{
	iVar0 = func_544(iParam0);
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

int func_548(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_637(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_639(&Var0, func_638(0));
	}
	if (!func_640(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_543(iVar14);
	return uVar15;
}

int func_549(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_550(bool bParam0)
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

struct<4> func_551(int iParam0, bool bParam1)
{
	Var0 = { func_522(iParam0, bParam1, 0) };
	return func_643(iParam0, Var0, Var0.f_4, bParam1);
}

void func_552(int iParam0)
{
	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258->f_32);
	Global_1940258->f_21 = func_661();
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
			func_662(&(Global_1940258->f_28), &(Global_1940258->f_33));
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

var func_553(int iParam0)
{
	return &(Global_1102219->f_3705[iParam0]);
}

bool func_554(bool bParam0, bool bParam1)
{
	if (func_663(bParam0, &iVar0, &iVar1))
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

bool func_555(var uParam0)
{
	iVar0 = Global_1940258->f_34;
	if (func_28() == -1)
	{
		if (Global_1940258->f_34 == 0)
		{
			iVar0 = func_664(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1940258->f_34) || !&Global_1956200->f_1716[4])
	{
		iVar0 = func_664(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_586(iVar0) == -1)
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

void func_556(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_665(uParam0);
	}
}

bool func_557(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_586(iParam2);
	}
	else
	{
		iVar1 = func_585(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_586(iParam0);
	}
	else
	{
		iVar0 = func_585(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_169(*uParam1, 8388608))
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

float func_558(int iParam0, int iParam1)
{
	return func_581(iParam0, iParam1, 1, 1);
}

float func_559(var uParam0)
{
	return uParam0->f_29;
}

void func_560(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(uParam0, 134217728);
	}
	else
	{
		func_235(uParam0, 134217728);
	}
}

void func_561()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_562(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_581(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_666(iVar0, 0)))
		{
			if (func_667(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_563(var uParam0)
{
	return uParam0->f_18;
}

bool func_564(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_169(*uParam0, 4194304))
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

int func_565(var uParam0)
{
	return uParam0->f_19;
}

int func_566(var uParam0)
{
	return uParam0->f_20;
}

bool func_567(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_666(iVar0, 0)))
		{
			if (func_668(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_568(bool bParam0, bool bParam1, bool bParam2)
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

float func_569(var uParam0)
{
	return uParam0->f_25;
}

int func_570(var uParam0)
{
	return uParam0->f_23;
}

int func_571(var uParam0)
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

bool func_572(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_669(iParam0, vParam4, 0.5f))
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

int func_573(int iParam0)
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
	if (func_670(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_574(int iParam0)
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

bool func_575(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_671(iParam1))
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

bool func_576(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_671(iParam1))
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

bool func_577(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = func_672(uParam0);
	if (func_671(iParam1))
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

bool func_578(int iParam0, int iParam1)
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

bool func_579(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(iParam0, iParam1))
	{
		return true;
	}
	if (!_is_weapon_lasso(func_673(iParam0, 1, 0, 0)) && !func_673(iParam0, 1, 0, 0) == 1151374672)
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

bool func_580(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_581(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_582(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_583(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_583(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_584(var uParam0)
{
	return uParam0->f_26;
}

int func_585(int iParam0)
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

int func_586(int iParam0)
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

int func_587(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_674(iParam0, vVar0, iParam2);
}

float func_588(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_589(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_578(Global_34, &iVar1))
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
		fVar2 = func_581(iParam0, player_ped_id(), 0, 1);
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
		if (func_581(iParam0, Global_1940258->f_34, 0, 1) < 2.5f)
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

bool func_590(int iParam0, var uParam1, bool bParam2)
{
	func_663(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_593(uParam1, iVar0))
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
				if (!bParam2 || !func_593(uParam1, iVar1))
				{
					if (func_583(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_591(int iParam0)
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

bool func_592(var uParam0)
{
	return func_169(*uParam0, 131072);
}

bool func_593(var uParam0, int iParam1)
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

bool func_594(int iParam0)
{
	return false;
}

int func_595(var uParam0)
{
	return uParam0->f_22;
}

int func_596(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_597(int iParam0, int iParam1, int iParam2)
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

struct<2> func_598(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_599(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_675(iVar0, 2))
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
				func_676(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_600(int iParam0)
{
	return iParam0;
}

void func_601(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_492(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_602(int iParam0)
{
	return is_bit_set(Local_519.f_19.f_142, iParam0);
}

void func_603(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_492(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (bParam1)
	{
		func_677(iParam0, 4);
		if (bParam3)
		{
			func_678(iVar0, 1);
		}
		func_679(iVar0, 1);
	}
	else
	{
		func_680(iParam0, 4);
		func_679(iVar0, 0);
	}
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_605(int iParam0)
{
	if (!func_681(iParam0))
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

bool func_606(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_607(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

int func_608(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_609(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	Var1 = { func_336(iParam0, 1178968787) };
	if (!stat_id_set_int(&Var1, iVar0, true))
	{
	}
}

bool func_610(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_528(Param0, &vVar0);
	if (func_682(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_611(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
		case 7:
		case 11:
		case 12:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			return true;
		case 1:
			if (func_612() >= 1)
			{
				return true;
			}
			if (func_372(16))
			{
				return true;
			}
			break;
		case -1:
			return false;
	}
	return false;
}

int func_612()
{
	return Local_519.f_3;
}

var func_613(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_614(var uParam0)
{
	return func_426(*uParam0, 2);
}

int func_615(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_616(int iParam0, int iParam1)
{
	if (!func_441(iParam0, 0))
	{
		return func_684(func_683(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, var uParam1, var uParam2)
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

bool func_618()
{
	return !&Global_1913504;
}

void func_619(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_620(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_621(int iParam0, int iParam1)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_622(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @228; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @228; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @228; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @228; //curOff = 184
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_623(int iParam0)
{
	if (func_616(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_616(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_616(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_616(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_616(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_616(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_616(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_616(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_616(iParam0, -352095726) || func_616(iParam0, -2014783736)) || func_616(iParam0, -545064757)) || func_616(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_624(int iParam0)
{
	if (func_616(iParam0, -189374246))
	{
		if (((func_685(iParam0, -1305775593) || func_685(iParam0, 1384151091)) || func_685(iParam0, 2075388272)) || func_685(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_616(iParam0, -753854379) || func_616(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_625(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_626(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_627(int iParam0)
{
	iVar0 = func_686(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_352(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_353(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_687(iVar14))
			{
				func_357(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_357(iVar11);
	}
	return 0;
}

bool func_628(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_441(iParam0, 0) && !func_688(func_683(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_630(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_631(int iParam0, int iParam1)
{
	iVar0 = func_689(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_632(int iParam0, char* sParam1)
{
	if (!func_441(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_690(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_691(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_692(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_633(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_634(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_630(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_635(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_693(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_636(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

struct<14> func_637(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_638(bool bParam0)
{
	iVar0 = func_550(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_643(923904168, func_644(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_643(923904168, func_644(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_643(923904168, func_644(bParam0), -740156546, 0);
}

void func_639(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_640(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_550(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_694(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_650(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_523(bParam6))
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
			iVar14 = func_695(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_696(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_550(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_642(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_694(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_549(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_523(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_697(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_698(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_695(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_696(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_550(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_643(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_441(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_550(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_644(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_550(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_643(1328661203, func_699(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_643(1328661203, func_699(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_643(1328661203, func_699(), -1591664384, bParam0);
}

bool func_645(int iParam0, bool bParam1)
{
	if (func_544(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_700();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_646(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_701(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_647(int iParam0, var uParam1, int iParam2)
{
	if (func_702(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_648(bool bParam0)
{
	iVar0 = func_550(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_643(271701509, func_644(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_643(271701509, func_644(bParam0), 12999093, 0);
}

bool func_649(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_544(iParam0);
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
			if (func_703(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_650(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_704(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_651()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_706(func_705(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_707();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_652(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_653(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

void func_654(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_655()
{
	return Global_1051252->f_12;
}

char* func_656()
{
	return "unnamed";
}

int func_657(int iParam0)
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

bool func_658(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_708(36, iParam0);
}

int func_659(int iParam0)
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

bool func_660(int iParam0)
{
	if (func_709(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_710(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_661()
{
	if (func_711())
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

void func_662(var uParam0, var uParam1)
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

bool func_663(bool bParam0, int iParam1, int iParam2)
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

int func_664(var uParam0)
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

void func_665(var uParam0)
{
	if (Global_1940258->f_32 == 0)
	{
		func_235(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258->f_33)
		{
			if (does_entity_exist(&(Global_1940258->f_28[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1940258->f_28[iVar0])))
				{
					func_215(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_666(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_667(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_668(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_668(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_669(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_670(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_671(int iParam0)
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

float func_672(var uParam0)
{
	return uParam0->f_28;
}

int func_673(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_674(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_712(vVar3, vVar6);
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
	if (func_713(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_675(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_676(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_678(iParam0, 1);
	func_679(iParam0, 1);
	func_680(iParam0, 128);
}

void func_677(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_678(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_675(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_679(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_680(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_681(int iParam0)
{
	return func_675(iParam0, 2);
}

bool func_682(int iParam0, var uParam1, var uParam2)
{
	if (!func_714(iParam0))
	{
		return false;
	}
	if (func_715(iParam0, uParam1, &uVar0))
	{
		func_716(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_683(int iParam0)
{
	return iParam0;
}

int func_684(int iParam0, int iParam1)
{
	if (!func_688(iParam0, 2))
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

int func_685(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_686(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

bool func_687(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
	}
	if (func_616(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

bool func_688(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_689(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_690(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_481(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_691(int iParam0)
{
	if (func_544(iParam0) == -126813555 || func_544(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_692(int iParam0)
{
	if (!func_441(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_626(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_693(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_694(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_695(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_717(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_719(func_718(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_720(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_696(int iParam0, struct<17> Param1)
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

bool func_697(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_549(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_721(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_698(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_643(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_699()
{
	return Var0;
}

bool func_700()
{
	return (func_722(-1185145312, 0, 0, 0) > 0 && func_723(func_643(889965687, func_644(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_701(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_441(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_549(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_643(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_550(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_550(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_702(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_550(0);
	*uParam1 = { func_643(iParam0, func_638(0), iParam3, 0) };
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

bool func_703(int iParam0, int iParam1, int iParam2)
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

bool func_704(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_550(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_705(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_706(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_445(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_724(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_725(iParam1, bParam4));
	}
	return iVar0;
}

void func_707()
{
	if (!func_441(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_726(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

bool func_708(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_727(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_728())
	{
		return func_727(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_727(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_709(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_710(int iParam0)
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
		func_729(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_730(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_711()
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

float func_712(vector3 vParam0, vector3 vParam3)
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

bool func_713(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_714(int iParam0)
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

bool func_715(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_731(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_716(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_732(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_733(iVar0);
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
			uParam2->f_5 = func_734(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_735(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_736(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_737(iVar0);
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

bool func_717(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_738(uParam1->f_8, iParam0, iVar0, 2048) || func_738(uParam1->f_8, iParam0, iVar0, 32768)) || func_738(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_738(uParam1->f_8, iParam0, iVar0, 4) || func_738(uParam1->f_8, iParam0, iVar0, 256)) || func_738(uParam1->f_8, iParam0, iVar0, 65536)) || func_738(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_738(uParam1->f_8, iParam0, iVar0, 1) || func_738(uParam1->f_8, iParam0, iVar0, 8)) || func_738(uParam1->f_8, iParam0, iVar0, 65536)) || func_738(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_738(uParam1->f_8, iParam0, iVar0, 1) || func_738(uParam1->f_8, iParam0, iVar0, 16)) || func_738(uParam1->f_8, iParam0, iVar0, 2)) || func_738(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_738(uParam1->f_8, iParam0, iVar0, 8) || func_738(uParam1->f_8, iParam0, iVar0, 4096)) || func_738(uParam1->f_8, iParam0, iVar0, 256)) || func_738(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_718(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_719(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_739(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_739(iParam1, 2, 0, 0);
	return -1;
}

int func_720(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_739(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_721(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_740((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_699() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_722(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_741(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_550(bParam1), iParam0, iParam3);
}

int func_723(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_742(&uParam0, iParam4, bParam5, iParam6);
}

int func_724(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_743(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_744(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_725(int iParam0, bool bParam1)
{
	if (!bParam1 || func_745())
	{
		return func_701(iParam0, func_644(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_726(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_727(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_728()
{
	return Global_1102219->f_3672;
}

void func_729(int iParam0)
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
	func_730(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_730(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_731(int iParam0)
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

int func_732(int iParam0, var uParam1)
{
	if (func_746(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_733(int iParam0)
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

int func_734(int iParam0)
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

int func_735(int iParam0)
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

int func_736(int iParam0)
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

int func_737(int iParam0)
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

int func_738(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_214(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_739(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_747(iParam0, iParam1, iParam2, iParam3);
}

bool func_740(var uParam0)
{
	if (!func_748(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_741(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_742(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_749(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_743(int iParam0)
{
	if (!func_628(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_750(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_744(int iParam0, int iParam1)
{
	if (!func_441(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_751(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_745()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_752(iVar0))
	{
		return false;
	}
	return true;
}

bool func_746(int iParam0, var uParam1, var uParam2)
{
	if (func_753(iParam0, uParam1, &uVar0))
	{
		func_754(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_755(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_748(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_749(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_550(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_704(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_750(int iParam0, int iParam1)
{
	iVar0 = func_756(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_751(int iParam0, int iParam1)
{
	Var0 = { func_757(iParam0) };
	return func_758(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_752(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

bool func_753(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_731(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_754(var uParam0, int iParam1, var uParam2)
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

void func_755(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_759(&(uParam0->f_4));
}

int func_756(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_757(int iParam0)
{
	Var0 = { func_758(iParam0, 1328661203, func_699(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_758(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_441(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_759(var uParam0)
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

