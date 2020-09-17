void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iVar0 = get_game_timer();
	func_1();
	iVar1 = (get_game_timer() - iVar0);
	while (!func_2(0, 0) && func_3())
	{
		Global_1210161->f_1.f_718 = (1 + Global_1210161->f_1.f_718);
		if (Global_1210161->f_1.f_718 >= 3)
		{
			Global_1210161->f_1.f_718 = 0;
		}
		switch (Global_1210161->f_1.f_718)
		{
			case 0:
				func_4();
				break;
			case 1:
				func_5();
				break;
			case 2:
				func_6();
				break;
		}
		wait(0);
	}
	func_7();
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_8();
}

void func_1()
{
	network_set_this_script_is_network_script(32, false, -1);
	func_9();
	if (func_10())
	{
		func_8();
	}
	func_11();
	func_12(0);
	set_this_script_can_be_paused(false);
	_0xb711eb4bc8d06013();
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3()
{
	return !func_14(func_13(), 0, 0);
}

void func_4()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1210161->f_1.f_715++;
		if (Global_1210161->f_1.f_715 < 0 || Global_1210161->f_1.f_715 >= Global_1198046->f_2505.f_499)
		{
			Global_1210161->f_1.f_715 = 0;
		}
		if (Global_1210161->f_1.f_715 >= Global_1198046->f_2505.f_499)
		{
			return;
		}
		if (!func_15(&(Global_1198046->f_2505.f_427[Global_1210161->f_1.f_715])))
		{
			return;
		}
		if (is_bit_set(iVar1, Global_1210161->f_1.f_715))
		{
			return;
		}
		set_bit(&iVar1, Global_1210161->f_1.f_715);
		func_16(&(Global_1198046->f_2505.f_427[Global_1210161->f_1.f_715]), -1);
		iVar0++;
	}
}

void func_5()
{
	if (func_17())
	{
		func_18();
	}
	if (&Global_1198046 < 1)
	{
		return;
	}
	func_19();
}

void func_6()
{
	if (&Global_1198046 < 1)
	{
		return;
	}
	func_20((*Global_1201051)[&Global_1296859], &(Global_1210161->f_1.f_719));
	func_21();
	if (!func_17())
	{
		return;
	}
	func_22(&(Global_1198046->f_28), Global_1210161->f_1.f_717, 5, Global_1210161->f_1.f_716);
}

void func_7()
{
	iVar1 = player_id();
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (!func_23(iVar0, iVar1, 0))
		{
		}
		else if (!func_23(iVar0, iVar1, 1))
		{
		}
		else
		{
			func_24(iVar0);
		}
		iVar0++;
	}
}

void func_8()
{
	terminate_this_thread();
}

int func_9()
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
			func_8();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_8();
		}
		if (!network_is_game_in_progress())
		{
			func_8();
		}
		if (!network_is_signed_online())
		{
			func_8();
		}
		if (func_25() == 0)
		{
			if (func_26())
			{
				func_8();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	return 1;
}

bool func_10()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

void func_11()
{
	func_27(Global_1198046);
	network_register_host_broadcast_variables(Global_1198046, 3005, 27);
	func_28(_0xba24095ea96dfe17(Global_1198046), 3005, "g_mpACEHostData");
	func_29(&(Global_1210161->f_1));
	if (func_30())
	{
		func_31(Global_1201051);
		network_register_player_broadcast_variables(Global_1201051, 6529, 28);
		func_32(_0x690806bc83bc8ca2((*Global_1201051)[0]), 6529, "g_mpACEPlayerData");
		func_33(Global_1207784);
		network_register_player_broadcast_variables(Global_1207784, 2305, 29);
		func_32(_0x690806bc83bc8ca2((*Global_1207784)[0]), 2305, "g_mpACELauncherPlayerData");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1201051, 6529, 28);
		func_32(_0x690806bc83bc8ca2((*Global_1201051)[0]), 6529, "g_mpACEPlayerData");
		network_register_player_broadcast_variables(Global_1207784, 2305, 29);
		func_32(_0x690806bc83bc8ca2((*Global_1207784)[0]), 2305, "g_mpACELauncherPlayerData");
	}
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
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
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
			func_8();
			return;
		}
		wait(0);
	}
}

struct<2> func_13()
{
	return Global_1130592->f_5.f_3;
}

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_34(*Global_1051213) && !func_35(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_36(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_37(iParam3, 255))
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
	if (func_38())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_34(*Global_1051213))
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

bool func_15(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_16(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_39(iParam0, 1))
	{
		return;
	}
	bVar0 = func_17();
	func_40(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_41(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_41(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_42(iParam0);
	}
}

bool func_17()
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (!network_is_in_session() || func_26())
	{
		return false;
	}
	if (!is_thread_active(&Global_1210161, false))
	{
		return false;
	}
	if (!network_is_script_active("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&Global_1210161);
}

void func_18()
{
	switch (&Global_1198046)
	{
		case -1:
			Global_1198046 = 0;
			return;
		case 0:
			Global_1198046->f_3[0] = 3;
			Global_1198046->f_3[1] = 10;
			Global_1198046->f_3[2] = 10;
			Global_1198046->f_3[3] = 16;
			Global_1198046->f_1 = get_network_time_accurate();
			Global_1198046 = 1;
			return;
		case 1:
			func_22(&(Global_1198046->f_28), Global_1210161->f_1.f_714, Global_1210161->f_1.f_711, -1);
			func_43(Global_1210161->f_1.f_713);
			func_44();
			break;
	}
}

void func_19()
{
	iVar0 = Global_1210161->f_1.f_711;
	iVar0++;
	if (iVar0 >= 8)
	{
		iVar0 = 0;
	}
	Global_1210161->f_1.f_711 = iVar0;
	Global_1210161->f_1.f_713++;
	if (!func_15(Global_1210161->f_1.f_713))
	{
		Global_1210161->f_1.f_713 = 0;
	}
	if (!func_17() && func_45(&(Global_1210161->f_1[Global_1210161->f_1.f_713]->f_7)))
	{
		func_46(&(Global_1210161->f_1[Global_1210161->f_1.f_713]->f_7));
	}
	Global_1210161->f_1.f_714++;
	if (Global_1210161->f_1.f_714 < 0 || Global_1210161->f_1.f_714 >= 5)
	{
		Global_1210161->f_1.f_714 = 0;
	}
}

void func_20(var uParam0, var uParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	if (uParam0->f_3[iVar0]->f_2 != -1)
	{
		Var1 = { func_47(&(Global_1198046->f_28), *uParam0->f_3[iVar0]) };
		func_48(Var1, uParam0, uParam0->f_3[iVar0]);
	}
}

void func_21()
{
	Global_1210161->f_1.f_716++;
	if (Global_1210161->f_1.f_716 < 0 || Global_1210161->f_1.f_716 >= 32)
	{
		Global_1210161->f_1.f_716 = 0;
	}
	Global_1210161->f_1.f_717++;
	if (Global_1210161->f_1.f_717 < 0 || Global_1210161->f_1.f_717 >= 5)
	{
		Global_1210161->f_1.f_717 = 0;
	}
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_49(uParam0))
	{
		if (iParam2 == 5 && iParam3 == -1)
		{
			return;
		}
		func_50(uParam0, iParam2, iParam3);
	}
	if (func_51(uParam0))
	{
		return;
	}
	if (uParam0->f_2[iParam1]->f_2 != -1)
	{
		Var0 = { func_52(uParam0->f_2[iParam1]) };
		if (Var0.f_2 == -1)
		{
			func_53(uParam0, iParam1);
		}
		else
		{
			func_54(uParam0, uParam0->f_2[iParam1], Var0);
		}
	}
}

bool func_23(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

void func_24(int iParam0)
{
	iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_55(iParam0, iVar0);
		func_56(iParam0, iVar0);
		iVar0++;
	}
	func_57(iParam0, 0);
	func_58(iParam0);
	func_59(iParam0);
}

int func_25()
{
	return Global_1572887->f_13;
}

bool func_26()
{
	return Global_1051252->f_8;
}

void func_27(var uParam0)
{
	func_60(uParam0);
	func_61(&(uParam0->f_231));
	func_62(&(uParam0->f_2505));
}

int func_28(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_29(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_4 = -1;
	Var0.f_4.f_1 = -1;
	iVar10 = 0;
	while (iVar10 < 71)
	{
		*(*uParam0)[iVar10] = { Var0 };
		iVar10++;
	}
	uParam0->f_711 = 0;
	uParam0->f_712 = 0;
	uParam0->f_713 = 0;
	uParam0->f_714 = 0;
	uParam0->f_715 = 0;
	uParam0->f_716 = 0;
	uParam0->f_717 = 0;
	uParam0->f_718 = 0;
	uParam0->f_719 = uVar11;
}

bool func_30()
{
	return !Global_1572887->f_9;
}

void func_31(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_63((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_32(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_33(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_64((*uParam0)[iVar0]);
		iVar0++;
	}
}

bool func_34(struct<2> Param0)
{
	if (!func_65(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_66(Param0))
	{
		return false;
	}
	return true;
}

bool func_35(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_36(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_37(int iParam0, int iParam1)
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

bool func_38()
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
	if (!func_34(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_39(int iParam0, int iParam1)
{
	return (Global_1198046->f_231.f_1066[iParam0]->f_6 && iParam1) != 0;
}

void func_40(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar4 = player_id();
	iVar5 = func_67(iParam0);
	if (!func_68(iParam0, &Var0))
	{
		if (iVar5 < 5)
		{
			func_69(iParam0, 5);
		}
	}
	switch (iVar5)
	{
		case 1:
			break;
		case 2:
			if (!func_39(iParam0, 2))
			{
				return;
			}
			if (!func_70(iParam0))
			{
				func_57(iParam0, 0);
				return;
			}
			bVar3 = func_71(Var0);
			bVar2 = func_72(Var0);
			if (!bVar3 && !bVar2)
			{
				if (!func_23(iParam0, iVar4, 2) && !func_23(iParam0, iVar4, 3))
				{
					if (func_73(iParam0, 3) || func_74(iParam0) == Global_1296859->f_15)
					{
						func_75(iParam0);
					}
				}
			}
			else if (!func_73(iParam0, 3) && func_74(iParam0) != Global_1296859->f_15)
			{
				func_57(iParam0, 0);
			}
			break;
		case 4:
			if (!func_39(iParam0, 2))
			{
				if (func_39(iParam0, 2048))
				{
					func_59(iParam0);
				}
				return;
			}
			if (func_71(Var0))
			{
				if (func_73(iParam0, 4))
				{
					func_76(iParam0, 0, 1, 1);
					func_77(iParam0, 0, 0);
				}
				else
				{
					func_76(iParam0, 0, 1, 1);
					func_78(iParam0, 0);
				}
			}
			else if (func_72(Var0))
			{
				func_78(iParam0, 0);
			}
			else
			{
				func_79(iParam0, 6);
			}
			if (func_80(iParam0))
			{
				func_59(iParam0);
			}
			break;
		case 5:
		case 6:
			if ((!func_34(Var0) || func_23(iParam0, iVar4, 0)) || func_81(iParam0, iVar4))
			{
				func_24(iParam0);
			}
			break;
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	func_82(iParam0, iParam1);
	if (!bParam2)
	{
		func_83(iParam0, iParam1);
	}
	else
	{
		func_84(iParam0, iParam1);
		func_85(iParam0, iParam1);
	}
}

void func_42(int iParam0)
{
	iVar0 = func_67(iParam0);
	if (func_86(iParam0, iVar0))
	{
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_34(func_87(iParam0)))
			{
				return;
			}
			if (func_39(iParam0, 32))
			{
				Global_1198046->f_231.f_1066[iParam0]->f_8[0]->f_1 = iParam0;
			}
			if (Global_1198046->f_231.f_1066[iParam0]->f_5 != 255)
			{
				func_88(iParam0, Global_1198046->f_231.f_1066[iParam0]->f_5);
				func_69(iParam0, 2);
			}
			else
			{
				func_69(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_89(iParam0) != 255)
			{
				func_69(iParam0, 2);
				return;
			}
			if (func_90(iParam0, 3))
			{
				func_69(iParam0, 2);
				return;
			}
			if (func_91(iParam0))
			{
				func_69(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_89(iParam0) == 255 && !func_90(iParam0, 3))
			{
				func_69(iParam0, 4);
				return;
			}
			if (func_92(iParam0))
			{
				func_69(iParam0, 5);
				return;
			}
			if (func_90(iParam0, 4) || func_90(iParam0, 5))
			{
				func_69(iParam0, 3);
				return;
			}
			func_93(iParam0);
			break;
		case 3:
			if (func_94(iParam0))
			{
				return;
			}
			func_69(iParam0, 4);
			break;
		case 4:
			if (func_95(iParam0, 7))
			{
				func_69(iParam0, 5);
			}
			else
			{
				return;
			}
			func_69(iParam0, 5);
			break;
		case 5:
			if (func_95(iParam0, 7))
			{
				if (func_96(iParam0) > 1)
				{
					func_97(iParam0, 1);
				}
				func_69(iParam0, 6);
			}
			else
			{
				return;
			}
			break;
		case 6:
			break;
	}
}

void func_43(int iParam0)
{
	if (Global_1198046->f_231[iParam0]->f_1 == -1)
	{
		return;
	}
	if (Global_1198046->f_231[iParam0]->f_1 == 0)
	{
		if (func_92(iParam0))
		{
			func_98(iParam0);
			Var0 = 1;
			Var0.f_1 = -1;
			Var0.f_1.f_1 = -1;
			Var0.f_5 = 255;
			Var6.f_1 = 1024;
			Var6.f_4 = -15;
			Var6.f_5 = 255;
			Var6.f_8 = 1;
			Var6.f_8.f_1.f_1 = 2147483647;
			Var6.f_13 = -1;
			*Global_1198046->f_2505[iParam0] = { Var0 };
			*Global_1198046->f_231.f_1066[iParam0] = { Var6 };
			Global_1198046->f_231[iParam0]->f_1 = -1;
		}
		return;
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_8 != 0)
	{
		if (func_36(Global_1198046->f_231[iParam0]->f_5.f_8))
		{
			func_99(iParam0);
			return;
		}
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_2 != 0 && Global_1198046->f_231[iParam0]->f_5.f_3 != -1)
	{
		iVar23 = func_100(Global_1198046->f_231[iParam0]->f_5.f_3);
		iVar24 = func_101(Global_1198046->f_231[iParam0]->f_5.f_3);
		if (iVar23 < 1 || iVar23 >= 4)
		{
			func_99(iParam0);
			return;
		}
		else if (iVar24 != Global_1198046->f_231[iParam0]->f_5.f_2)
		{
			func_99(iParam0);
			return;
		}
		else if (iVar23 == 1)
		{
			if (!_0x93a91a351a07360e(iVar24))
			{
				func_99(iParam0);
				return;
			}
			iVar25 = _0x4be6c13a45cca8ec(iVar24);
			if (!network_is_player_active(iVar25))
			{
				func_99(iParam0);
				return;
			}
		}
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_2 != 0 && Global_1198046->f_231[iParam0]->f_5.f_4 != -1)
	{
		iVar26 = Global_1198046->f_231[iParam0]->f_5.f_4;
		if (!_0x1b89bc43b6e69107(894914127, iVar26, 0, 0))
		{
			func_99(iParam0);
			return;
		}
		if (!_0x93a91a351a07360e(Global_1198046->f_231[iParam0]->f_5.f_2))
		{
			func_99(iParam0);
			return;
		}
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_2 != 0 && Global_1198046->f_231[iParam0]->f_5.f_5 != -1)
	{
	}
	if (func_39(iParam0, 2048))
	{
		iVar28 = Global_1198046->f_231.f_1066[iParam0]->f_7;
		iVar27 = 0;
		while (iVar27 < iVar28)
		{
			if (_0x1b89bc43b6e69107(func_102(iParam0), func_103(iParam0, iVar27), 0, 0))
			{
				bVar29 = true;
			}
			iVar27++;
		}
		if (!bVar29)
		{
			iVar31 = func_67(iParam0);
			if (iVar31 == 6)
			{
				func_99(iParam0);
				return;
			}
			if (func_67(iParam0) == 2)
			{
				bVar30 = true;
			}
		}
		if (bVar30)
		{
			if (!func_45(&(Global_1210161->f_1[iParam0]->f_7)))
			{
				func_104(&(Global_1210161->f_1[iParam0]->f_7), 0);
			}
			iVar32 = Global_1901947->f_236.f_67;
			if (iVar32 > 0 && func_105(&(Global_1210161->f_1[iParam0]->f_7)) > iVar32)
			{
				func_99(iParam0);
				return;
			}
		}
		else if (func_45(&(Global_1210161->f_1[iParam0]->f_7)))
		{
			func_46(&(Global_1210161->f_1[iParam0]->f_7));
		}
	}
}

void func_44()
{
	iVar0 = get_network_time_accurate();
	if (get_time_difference(Global_1198046->f_1, iVar0) < 30000)
	{
		return;
	}
	func_106(Global_1198046->f_2);
	Global_1198046->f_1 = iVar0;
	iVar1 = Global_1198046->f_2;
	iVar1++;
	if (iVar1 < 0 || iVar1 >= 4)
	{
		iVar1 = 0;
	}
	Global_1198046->f_2 = iVar1;
}

bool func_45(var uParam0)
{
	return func_107(*uParam0, 1);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<40> func_47(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	if (Param1.f_1 != -1)
	{
		return *uParam0->f_2[Param1.f_1];
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if (uParam0->f_2[iVar41]->f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41]->f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41]->f_4 != Param1.f_4)
		{
		}
		else
		{
			return *uParam0->f_2[iVar41];
		}
		iVar40++;
	}
	return Var0;
}

void func_48(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_108(uParam41))
	{
		case -1:
			func_109(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_110(&Param0, uParam41))
			{
				if ((get_network_time_accurate() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_111(uParam41, 3);
				}
				return;
			}
			if (func_112(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_111(uParam41, 1);
			break;
		case 1:
			if (!func_110(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_111(uParam41, 3);
				return;
			}
			if (func_112(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_111(uParam41, 2);
			break;
		case 2:
			if (!func_110(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_111(uParam41, 3);
				return;
			}
			if (func_112(&Param0) < 3)
			{
				return;
			}
			func_111(uParam41, 3);
			break;
		case 3:
			func_111(uParam41, -1);
			break;
	}
}

bool func_49(var uParam0)
{
	return *uParam0 == 5;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	Var0 = { func_113(uParam0, &iParam1, iParam2) };
	if (Var0.f_2 == -1)
	{
		return;
	}
	Var40 = -1;
	Var40.f_2 = -1;
	Var40.f_3 = 255;
	Var40.f_4 = -1;
	Var40.f_5 = -1;
	Var40.f_6 = -1;
	Var40.f_8 = 2;
	Var40.f_8.f_1 = -1;
	Var40.f_8.f_5 = -1;
	Var40.f_8.f_5.f_1 = -1;
	Var40.f_8.f_5.f_3 = -1;
	Var40.f_8.f_5.f_4 = -1;
	Var40.f_8.f_5.f_5 = -1;
	Var40.f_8.f_5.f_6 = -1;
	Var40.f_8.f_5.f_6.f_1 = -1;
	Var40.f_8.f_5.f_9 = 2;
	Var40.f_23.f_1 = 1024;
	Var40.f_23.f_4 = -15;
	Var40.f_23.f_5 = 255;
	Var40.f_23.f_8 = 1;
	Var40.f_23.f_8.f_1.f_1 = 2147483647;
	Var40.f_23.f_13 = -1;
	Var40.f_2 = Var0.f_2;
	Var40.f_3 = Var0.f_3;
	Var40.f_5 = Var0.f_5;
	Var40.f_4 = Var0.f_4;
	Var40.f_7 = Var0.f_7;
	Var40.f_8 = { Var0.f_8 };
	Var40.f_23 = { Var0.f_23 };
	func_114(uParam0, &Var40);
}

bool func_51(var uParam0)
{
	return *uParam0 == 0;
}

struct<40> func_52(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (uParam0->f_2)
	{
		case 0:
			return func_115(uParam0, &(Global_1107216->f_33.f_513));
		case 2:
			return func_115(uParam0, &(Global_1237665->f_367));
		case 5:
			if (!_network_is_player_index_valid(uParam0->f_3))
			{
				return Var0;
			}
			if (!network_is_player_active(uParam0->f_3))
			{
				return Var0;
			}
			return func_115(uParam0, (*Global_1201051)[uParam0->f_3]);
		default:
			break;
	}
	return Var0;
}

struct<40> func_53(var uParam0, int iParam1)
{
	Var0 = { func_116(uParam0, iParam1) };
	func_117(uParam0, iParam1);
	return Var0;
}

void func_54(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_112(uParam1))
	{
		case -1:
			func_53(uParam0, uParam1->f_1);
			break;
		case 0:
			if (!func_110(uParam1, &uParam2))
			{
				func_118(uParam1, 2);
				return;
			}
			if (func_108(&uParam2) < 1)
			{
				return;
			}
			uParam1->f_6 = func_119(&uParam2);
			func_118(uParam1, 1);
			break;
		case 1:
			if (!func_110(uParam1, &uParam2))
			{
				func_118(uParam1, 2);
				return;
			}
			if (func_108(&uParam2) < 2)
			{
				return;
			}
			func_118(uParam1, 3);
			break;
		case 2:
			func_118(uParam1, -1);
			break;
		case 3:
			if (!func_110(uParam1, &uParam2))
			{
				func_118(uParam1, -1);
				return;
			}
			if (func_108(&uParam2) < 3)
			{
				return;
			}
			func_118(uParam1, -1);
			break;
	}
}

void func_55(int iParam0, int iParam1)
{
	if (!func_120(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_121(iParam0, iParam1);
	if (!is_thread_active(iVar0, false))
	{
		return;
	}
	_0x7de4643157ad646c(iVar0);
}

void func_56(int iParam0, int iParam1)
{
	func_122(iParam0, iParam1);
	func_123(iParam0, iParam1, -1);
}

void func_57(int iParam0, int iParam1)
{
	Var0 = { func_124(iParam0) };
	if (!func_34(Var0))
	{
		return;
	}
	if (!func_71(Var0) && !func_72(Var0))
	{
		return;
	}
	func_125(iParam0, 2);
	func_125(iParam0, 3);
	func_79(iParam0, 6);
	func_126(Var0, 0, 2, iParam1, 0);
}

void func_58(int iParam0)
{
	func_127(&(Global_1210161->f_1[iParam0]->f_4));
	Global_1210161->f_1[iParam0]->f_6 = 0;
}

void func_59(int iParam0)
{
	iVar0 = get_player_index();
	(*(*Global_1207784)[iVar0])[iParam0] = 0;
}

void func_60(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_3[iVar0] = 0;
		uParam0->f_8[iVar0] = 0;
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 0;
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_28 = 0;
	uParam0->f_28.f_1 = 0;
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		*uParam0->f_28.f_2[iVar41] = { Var1 };
		iVar41++;
	}
}

void func_61(var uParam0)
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
	Var15.f_1 = 1024;
	Var15.f_4 = -15;
	Var15.f_5 = 255;
	Var15.f_8 = 1;
	Var15.f_8.f_1.f_1 = 2147483647;
	Var15.f_13 = -1;
	iVar32 = 0;
	while (iVar32 < 71)
	{
		*(*uParam0)[iVar32] = { Var0 };
		*uParam0->f_1066[iVar32] = { Var15 };
		iVar32++;
	}
}

void func_62(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	iVar6 = 0;
	while (iVar6 < 71)
	{
		*(*uParam0)[iVar6] = { Var0 };
		uParam0->f_427[iVar6] = 0;
		iVar6++;
	}
	uParam0->f_499 = 0;
}

void func_63(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	iVar40 = 0;
	while (iVar40 < 5)
	{
		*uParam0->f_3[iVar40] = { Var0 };
		iVar40++;
	}
}

void func_64(var uParam0)
{
	Var0 = 71;
	*uParam0 = { Var0 };
}

bool func_65(int iParam0)
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

int func_66(int iParam0)
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

int func_67(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_13;
}

bool func_68(int iParam0, var uParam1)
{
	iVar0 = player_id();
	*uParam1 = { func_87(iParam0) };
	if (func_96(iParam0) <= 0)
	{
		*uParam1 = { func_124(iParam0) };
		if (func_34(*uParam1))
		{
			func_24(iParam0);
		}
		return false;
	}
	else if (!func_34(*uParam1))
	{
		*uParam1 = { func_124(iParam0) };
		if (func_34(*uParam1))
		{
			func_24(iParam0);
			return false;
		}
	}
	else if (func_34(*uParam1))
	{
		if (func_67(iParam0) < 4)
		{
			if (!func_23(iParam0, iVar0, 0))
			{
				func_128(iParam0, *uParam1);
				func_79(iParam0, 0);
				if (func_39(iParam0, 256))
				{
					func_79(iParam0, 1);
				}
			}
		}
		if (func_72(*uParam1))
		{
			if (func_73(iParam0, 4))
			{
				func_77(iParam0, 0, 0);
				return false;
			}
			else if (func_73(iParam0, 5))
			{
				func_78(iParam0, 0);
				return false;
			}
		}
	}
	return true;
}

void func_69(int iParam0, int iParam1)
{
	Global_1198046->f_231.f_1066[iParam0]->f_13 = iParam1;
}

bool func_70(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	if (func_67(iParam0) >= 5)
	{
		return false;
	}
	if (func_67(iParam0) <= 0)
	{
		return false;
	}
	if (!func_23(iParam0, player_id(), 0))
	{
		return false;
	}
	return true;
}

bool func_71(struct<2> Param0)
{
	iVar0 = func_130(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_72(struct<2> Param0)
{
	iVar0 = func_130(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_73(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < func_131())
	{
		iVar0 = func_132(iVar1);
		if (func_23(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_23(iParam0, player_id(), iParam1);
}

int func_74(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_4;
}

void func_75(int iParam0)
{
	Var0 = { func_124(iParam0) };
	if (!func_34(Var0))
	{
		return;
	}
	if (func_71(Var0))
	{
		return;
	}
	if (func_72(Var0))
	{
		return;
	}
	func_79(iParam0, 2);
	func_125(iParam0, 3);
	func_125(iParam0, 6);
	func_133(Var0);
}

void func_76(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Var0 = { func_124(iParam0) };
	if (!func_34(Var0))
	{
		return;
	}
	if (!func_71(Var0))
	{
		return;
	}
	if (func_72(Var0))
	{
		return;
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	func_79(iParam0, 3);
	func_134(Var0, 1, bParam2, bParam3);
}

void func_77(int iParam0, bool bParam1, int iParam2)
{
	Var0 = { func_124(iParam0) };
	if (!func_34(Var0))
	{
		return;
	}
	if (func_71(Var0))
	{
		return;
	}
	if (!func_72(Var0))
	{
		return;
	}
	if (func_23(iParam0, player_id(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_126(Var0, 0, bVar2, iParam2, 0);
	func_79(iParam0, 4);
}

void func_78(int iParam0, int iParam1)
{
	Var0 = { func_124(iParam0) };
	if (!func_34(Var0))
	{
		return;
	}
	if (func_71(Var0))
	{
		return;
	}
	if (!func_72(Var0))
	{
		return;
	}
	if (func_23(iParam0, player_id(), 5))
	{
		return;
	}
	func_126(Var0, 0, 1, iParam1, 0);
	func_79(iParam0, 5);
}

void func_79(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_23(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

bool func_80(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_131())
	{
		iVar0 = func_132(iVar1);
		if (func_23(iParam0, iVar0, 2) && !((func_23(iParam0, iVar0, 4) || func_23(iParam0, iVar0, 5)) || func_23(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_124(iParam0) };
	return !(func_71(Var2) || func_72(Var2));
}

bool func_81(int iParam0, int iParam1)
{
	return (*Global_1207784)[iParam1][iParam0] == 0;
}

void func_82(int iParam0, int iParam1)
{
	iVar0 = func_102(iParam0);
	iVar1 = func_103(iParam0, iParam1);
	iVar2 = func_135(iParam0, iParam1);
	iVar3 = func_67(iParam0);
	switch (func_136(iParam0, iParam1))
	{
		case -1:
			if (!func_70(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_123(iParam0, iParam1, 6);
				}
				return;
			}
			func_123(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_70(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_123(iParam0, iParam1, 6);
				}
				return;
			}
			func_123(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_70(iParam0))
			{
				func_122(iParam0, iParam1);
				func_123(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				func_123(iParam0, iParam1, 6);
				return;
			}
			func_123(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_70(iParam0))
			{
				func_122(iParam0, iParam1);
				func_123(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_123(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_123(iParam0, iParam1, 6);
				return;
			}
			if (!func_137(iParam0, iParam1))
			{
				return;
			}
			func_138(iParam0, iParam1, 0);
			func_123(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_70(iParam0))
			{
				func_122(iParam0, iParam1);
				func_123(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_123(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_123(iParam0, iParam1, 6);
				return;
			}
			if (!func_139(iParam0, iParam1))
			{
				return;
			}
			func_123(iParam0, iParam1, 4);
			break;
		case 4:
			if (!_0x1b89bc43b6e69107(iVar0, iVar1, 1, 0))
			{
				if (!func_120(iParam0, iParam1))
				{
					func_140(iParam0, iParam1, 0);
					func_141(iParam0, iParam1, 0);
					func_123(iParam0, iParam1, 2);
				}
				return;
			}
			func_123(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_96(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_55(iParam0, iParam1);
			}
			if (func_142(iParam0, iParam1))
			{
				func_55(iParam0, iParam1);
			}
			if (_0x1b89bc43b6e69107(iVar0, iVar1, 1, 0))
			{
				return;
			}
			if (func_120(iParam0, iParam1))
			{
				return;
			}
			func_140(iParam0, iParam1, 0);
			if ((func_90(iParam0, 4) || func_90(iParam0, 5)) || (func_67(iParam0) > 2 && iVar2 == 3))
			{
				func_123(iParam0, iParam1, 6);
			}
			else
			{
				func_141(iParam0, iParam1, 0);
				func_123(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_80(iParam0))
			{
				return;
			}
			func_123(iParam0, iParam1, 7);
			break;
		case 7:
			func_122(iParam0, iParam1);
			func_123(iParam0, iParam1, 8);
			break;
		case 8:
			func_79(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_123(iParam0, iParam1, 1);
			func_125(iParam0, 7);
			break;
	}
}

bool func_83(int iParam0, int iParam1)
{
	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_0xa4a4359320345b34(iVar0))
	{
		func_144(iParam0, iParam1, 0);
		return true;
	}
	func_144(iParam0, iParam1, 0);
	return true;
}

void func_84(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 8))
	{
		return;
	}
	iVar0 = func_96(iParam0);
	iVar1 = func_145(iParam0, iParam1);
	iVar2 = func_67(iParam0);
	iVar3 = func_135(iParam0, iParam1);
	bVar4 = func_129(iParam0);
	if (!bVar4 || iVar2 >= 5)
	{
		if (iVar1 != 1)
		{
			func_146(iParam0, iParam1);
			func_147(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar1)
	{
		case -2:
			break;
		case -1:
			if (!func_34(func_87(iParam0)))
			{
			}
			else if (func_148(iParam0, iParam1) <= 0)
			{
				func_147(iParam0, iParam1, 0);
			}
			else if (iVar0 == 1)
			{
				func_147(iParam0, iParam1, 5);
			}
			else
			{
				func_147(iParam0, iParam1, 2);
			}
			break;
		case 0:
			if (func_148(iParam0, iParam1) > 0)
			{
				func_147(iParam0, iParam1, 2);
			}
			break;
		case 1:
			func_147(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_149(iParam0, iParam1) != 0)
			{
				func_147(iParam0, iParam1, 4);
				return;
			}
			func_150(iParam0, iParam1, 0);
			func_147(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_143(iParam0, iParam1) == 0)
			{
				func_147(iParam0, iParam1, 2);
				return;
			}
			if (func_151(iParam0, iParam1))
			{
				func_147(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar0 == 1)
			{
				_0xd4fa73fe628fec63(func_149(iParam0, iParam1), 160);
				func_147(iParam0, iParam1, 7);
			}
			else if (!_0xf6a8a652a6b186cd(func_149(iParam0, iParam1)))
			{
				func_152(iParam0, iParam1);
				func_147(iParam0, iParam1, 2);
			}
			break;
		case 5:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				func_147(iParam0, iParam1, 2);
			}
			break;
		case 6:
			break;
		case 7:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				_0xd4fa73fe628fec63(func_149(iParam0, iParam1), 32);
				func_147(iParam0, iParam1, 4);
			}
			else if (!_0xf6a8a652a6b186cd(func_149(iParam0, iParam1)))
			{
				func_152(iParam0, iParam1);
				func_147(iParam0, iParam1, 5);
			}
			break;
	}
}

void func_85(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 16))
	{
		return;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_103(iParam0, iParam1);
	iVar3 = func_135(iParam0, iParam1);
	if (iVar3 > 0 && !func_129(iParam0))
	{
		func_153(iParam0, iParam1, 0);
		return;
	}
	switch (iVar3)
	{
		case -1:
			if (!func_34(func_87(iParam0)))
			{
				return;
			}
			if (func_154(iParam0, iParam1) <= 0)
			{
				func_153(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_153(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_129(iParam0))
			{
				return;
			}
			if (func_154(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_155(iParam0);
			if (iVar2 != -15 && func_156(iVar2))
			{
				return;
			}
			func_153(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_157(iParam0, iParam1, 0))
			{
			}
			else
			{
				func_153(iParam0, iParam1, 2);
				func_97(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_157(iParam0, iParam1, 0))
			{
				if (!_0x1b89bc43b6e69107(iVar0, iVar1, 0, 0))
				{
					func_153(iParam0, iParam1, 3);
					return;
				}
			}
			if (func_67(iParam0) >= 3)
			{
				func_153(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_67(iParam0) >= 3)
			{
				return;
			}
			if (!func_158(iParam0, iParam1))
			{
				func_153(iParam0, iParam1, 2);
				return;
			}
			if (func_89(iParam0) != 255)
			{
				func_97(iParam0, 2);
			}
			else
			{
				func_97(iParam0, 1);
			}
			iVar2 = func_155(iParam0);
			if (iVar2 != -15 && func_156(iVar2))
			{
				func_153(iParam0, iParam1, 0);
				return;
			}
			if (func_67(iParam0) >= 4)
			{
				return;
			}
			if (func_159(iParam0, 7))
			{
				return;
			}
			func_153(iParam0, iParam1, 1);
			break;
	}
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 5)
	{
		if (!func_34(func_87(iParam0)))
		{
			func_69(iParam0, 5);
			return true;
		}
	}
	if (!func_129(iParam0) && iParam1 < 5)
	{
		func_99(iParam0);
		func_69(iParam0, 5);
		return true;
	}
	return false;
}

struct<2> func_87(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_160();
	}
	return Global_1198046->f_231[iParam0]->f_5;
}

void func_88(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Global_1198046->f_2505[iParam0]->f_4 = _0x901e0dc25080c8b9(iParam1);
	Global_1198046->f_2505[iParam0]->f_5 = iParam1;
}

int func_89(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_5;
}

bool func_90(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_23(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_91(int iParam0)
{
	if (!func_39(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_161(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_163(func_162(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return count_player_bits(&uVar1) <= 0;
}

bool func_92(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_81(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_93(int iParam0)
{
	if (Global_1198046->f_231.f_1066[iParam0]->f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1198046->f_2505[iParam0]->f_5;
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (network_is_player_active(iVar0))
	{
		iVar2 = _0x901e0dc25080c8b9(iVar0);
		if (Global_1198046->f_2505[iParam0]->f_4 != iVar2)
		{
			if ((_0xd6f6acf4392187fb(Global_1198046->f_2505[iParam0]->f_4) && _0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4)) && _0x149a2751ab66ac02(Global_1198046->f_2505[iParam0]->f_4) > 0)
			{
				iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
				func_88(iParam0, iVar1);
			}
			else if (_0x4be6c13a45cca8ec(iVar2) == iVar0)
			{
				Global_1198046->f_2505[iParam0]->f_4 = iVar2;
			}
			else
			{
				func_164(iParam0);
			}
		}
		return;
	}
	if (Global_1198046->f_2505[iParam0]->f_4 == 0)
	{
		func_164(iParam0);
		return;
	}
	if (!_0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4))
	{
		func_164(iParam0);
		return;
	}
	iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
	if (!_network_is_player_index_valid(iVar1))
	{
		func_164(iParam0);
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		func_164(iParam0);
		return;
	}
	func_88(iParam0, iVar1);
}

bool func_94(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if ((*Global_1207784)[iVar0][iParam0] > 255)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_95(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_23(iParam0, iVar0, iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

int func_96(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return Global_1198046->f_231[iParam0]->f_1;
}

void func_97(int iParam0, int iParam1)
{
	Global_1198046->f_231[iParam0]->f_1 = iParam1;
}

void func_98(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_152(iParam0, iVar0);
		iVar0++;
	}
}

int func_99(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
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
	Var15 = { *Global_1198046->f_231[iParam0] };
	Var0.f_1 = 0;
	*Global_1198046->f_231[iParam0] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046->f_13[iVar31] = (&Global_1198046->f_13[iVar31] - 1);
	Global_1198046->f_8[iVar30] = (&Global_1198046->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046->f_18[iVar30] = (&Global_1198046->f_18[iVar30] - 1);
	}
	if (func_165(iParam0))
	{
		Global_1198046->f_23[iVar30] = (&Global_1198046->f_23[iVar30] - 1);
	}
	return 1;
}

int func_100(int iParam0)
{
	return &(Global_1107216->f_752[iParam0]);
}

int func_101(int iParam0)
{
	return Global_1107216->f_752[iParam0]->f_1;
}

int func_102(int iParam0)
{
	return &(Global_1198046->f_231.f_1066[iParam0]);
}

int func_103(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_1;
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1 || !func_45(uParam0))
	{
		func_166(uParam0);
	}
}

int func_105(var uParam0)
{
	if (!func_45(uParam0))
	{
		return 0;
	}
	if (func_167(uParam0))
	{
		return uParam0->f_2;
	}
	return func_168(uParam0->f_1);
}

void func_106(int iParam0)
{
	iVar0 = func_169(iParam0);
	iVar1 = ((func_169(iParam0) + func_170(iParam0)) - 1);
	iVar2 = ((func_169(iParam0) + func_170(iParam0)) - 1);
	iVar3 = &Global_1198046->f_8[iParam0];
	iVar4 = &Global_1198046->f_18[iParam0];
	iVar5 = &Global_1198046->f_23[iParam0];
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = iVar0;
	while (iVar9 <= iVar2)
	{
		if (Global_1198046->f_231[iVar9]->f_1 <= 0)
		{
		}
		else
		{
			iVar6++;
			if (iParam0 != Global_1198046->f_231[iVar9]->f_5.f_9)
			{
				iVar7++;
			}
			if (iVar9 >= iVar1)
			{
				iVar8++;
			}
		}
		iVar9++;
	}
	if (iVar3 != iVar6)
	{
		Global_1198046->f_8[iParam0] = iVar6;
	}
	if (iVar4 != iVar7)
	{
		Global_1198046->f_18[iParam0] = iVar7;
	}
	if (iVar5 != iVar8)
	{
		Global_1198046->f_23[iParam0] = iVar8;
	}
}

bool func_107(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_108(var uParam0)
{
	return *uParam0;
}

struct<40> func_109(var uParam0, int iParam1)
{
	Var0 = { func_171(uParam0, iParam1) };
	func_172(uParam0, iParam1);
	return Var0;
}

bool func_110(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_35(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_35(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_112(var uParam0)
{
	return *uParam0;
}

struct<40> func_113(var uParam0, int iParam1, int iParam2)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (*iParam1)
	{
		case 0:
			return func_173(&(Global_1107216->f_33.f_513));
		case 2:
			return func_173(&(Global_1237665->f_367));
		case 5:
			if (iParam2 == -1)
			{
				return Var0;
			}
			if (!network_is_player_active(&(Global_1296859->f_154[iParam2])))
			{
				return Var0;
			}
			return func_173((*Global_1201051)[iParam2]);
		default:
			break;
	}
	return Var0;
}

int func_114(var uParam0, var uParam1)
{
	if (func_49(uParam0))
	{
		return 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam0) % 5);
	uParam1->f_1 = iVar0;
	*uParam0->f_2[iVar0] = { *uParam1 };
	func_118(uParam0->f_2[iVar0], 0);
	*uParam0++;
	return 1;
}

struct<40> func_115(var uParam0, var uParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (uParam0->f_4 == -1)
	{
		return Var0;
	}
	if (func_110(uParam0, uParam1->f_3[uParam0->f_4]))
	{
		return *uParam1->f_3[uParam0->f_4];
	}
	return Var0;
}

struct<40> func_116(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_174(iParam1))
	{
		return Var0;
	}
	Var40 = { *uParam0->f_2[iParam1] };
	*uParam0->f_2[iParam1] = { Var0 };
	return Var40;
}

void func_117(var uParam0, int iParam1)
{
	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % 5);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % 5);
			if (&uParam0->f_2[iVar3] != -1)
			{
			}
			else
			{
				if (uParam0->f_2[iVar3]->f_1 != -1)
				{
					func_116(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % 5);
			if (&uParam0->f_2[iVar4] != -1)
			{
			}
			else
			{
				func_116(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_119(var uParam0)
{
	if (!func_175(&(uParam0->f_8)))
	{
		return 2;
	}
	iVar0 = func_176(&(uParam0->f_8.f_5));
	switch (uParam0->f_5)
	{
		case 0:
			if (func_15(iVar0))
			{
				return 0;
			}
			if (uParam0->f_8.f_5.f_8 != 0)
			{
				if (func_36(uParam0->f_8.f_5.f_8))
				{
					return 1;
				}
			}
			if (func_177(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
			{
				return 0;
			}
			if (uParam0->f_8.f_1 > 1)
			{
				if (func_178(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			if (uParam0->f_8.f_1 > 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_179(iVar1))
					{
					}
					else if (iVar1 == uParam0->f_8)
					{
					}
					else if (func_177(&(uParam0->f_8), &(uParam0->f_23), iVar1))
					{
						return 0;
					}
					iVar1++;
				}
				if (func_180(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			return 1;
		case 1:
			if (!func_15(iVar0))
			{
				return 1;
			}
			func_97(iVar0, uParam0->f_8.f_1);
			func_181(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 2:
			if (!func_15(iVar0))
			{
				return 1;
			}
			func_97(iVar0, uParam0->f_8.f_1);
			return 0;
		case 4:
			if (!func_15(iVar0))
			{
				return 1;
			}
			func_182(iVar0, uParam0->f_8.f_5.f_6);
			func_181(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 5:
			if (!func_15(iVar0))
			{
				return 1;
			}
			func_183(iVar0, uParam0->f_23.f_6);
			return 0;
		case 6:
			if (!func_15(iVar0))
			{
				return 1;
			}
			if (!func_34(uParam0->f_8.f_5))
			{
				return 1;
			}
			if (func_184(&(uParam0->f_8.f_5)))
			{
				func_181(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
				return 0;
			}
			return 1;
		case 3:
			if (!func_15(iVar0))
			{
				return 1;
			}
			func_185(iVar0, uParam0->f_8);
			return 0;
		case 7:
			if (!func_15(iVar0))
			{
				return 0;
			}
			func_99(iVar0);
			return 0;
		default:
			break;
	}
	return 2;
}

bool func_120(int iParam0, int iParam1)
{
	return _does_thread_exist((*Global_1210161->f_1[iParam0])[iParam1]->f_2);
}

int func_121(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_2;
}

void func_122(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_141(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1] = iParam2;
}

struct<2> func_124(int iParam0)
{
	return Global_1210161->f_1[iParam0]->f_4;
}

void func_125(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	clear_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

void func_126(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_34(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_72(Param0) && !func_71(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_186(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_130(Param0) == 3)
		{
			func_187(1, -1706799532);
		}
		else if (func_130(Param0) == 4)
		{
			func_187(0, -1706799532);
		}
	}
	if ((func_130(Param0) == 3 || func_130(Param0) == 1) || ((bParam5 && func_130(Param0) == 4) && _0x01f4d242765c6b24(func_186(Param0))))
	{
		if (iParam3 != -1)
		{
			func_188(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_188(Param0, 2, iParam4, 255, 0);
		}
	}
	func_189(Param0, 0);
	if (func_35(func_190(0), Param0))
	{
		func_191(1);
		func_192(0);
		func_193(0);
		func_194(1);
	}
	func_195(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_196(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_127(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_128(int iParam0, struct<2> Param1)
{
	Global_1210161->f_1[iParam0]->f_4 = { Param1 };
	Global_1210161->f_1[iParam0]->f_6 = func_197(Param1);
}

bool func_129(int iParam0)
{
	bVar0 = !func_14(func_124(iParam0), func_198(iParam0), 0);
	return bVar0;
}

int func_130(struct<2> Param0)
{
	if (!func_34(Param0))
	{
		return -1;
	}
	iVar0 = func_199(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_131()
{
	return Global_1102219->f_3673;
}

int func_132(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

int func_133(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_200(Param0))
	{
		return -1;
	}
	iVar1 = func_201(Param0);
	if (iVar1 >= 0)
	{
		func_202(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_202(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_134(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_34(Param0))
	{
		return;
	}
	if (!func_71(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_203(Param0);
	}
	if (!func_34(func_190(0)))
	{
		func_189(Param0, 3);
		func_191(bParam3);
		func_192(!bParam4);
		func_204(Param0, -1);
		if (bParam2 && !func_205(2))
		{
			func_206(&Global_0, 1024);
		}
		func_194(1);
	}
	else
	{
		func_204(Param0, -1);
		func_189(Param0, 4);
		func_207(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_196(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_208(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_135(int iParam0, int iParam1)
{
	return Global_1198046->f_2505[iParam0][iParam1];
}

int func_136(int iParam0, int iParam1)
{
	return Global_1210161->f_1[iParam0][iParam1];
}

bool func_137(int iParam0, int iParam1)
{
	iVar0 = func_154(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_209(player_id()) };
	if (func_210(vVar1))
	{
		return false;
	}
	return func_211(vVar1, func_162(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	func_79(iParam0, func_212(iParam1, iParam2));
}

bool func_139(int iParam0, int iParam1)
{
	iVar0 = func_103(iParam0, iParam1);
	iVar1 = func_102(iParam0);
	if (func_120(iParam0, iParam1))
	{
		return false;
	}
	if (_0x1b89bc43b6e69107(iVar1, iVar0, 1, 0))
	{
		return false;
	}
	if (func_39(iParam0, 8))
	{
		if (func_145(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	request_script_with_name_hash(iVar1);
	if (has_script_with_name_hash_loaded(iVar1))
	{
		if (get_number_of_free_stacks_of_this_size(func_213(iParam0)) <= 0)
		{
			return false;
		}
		if (func_39(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_89(iParam0);
			Var3.f_1 = { func_162(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_124(iParam0) };
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var3, 10, func_213(iParam0));
		}
		else if (func_39(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_214(iVar1);
			Var13.f_2 = Global_1198046->f_231.f_1066[iParam0]->f_14;
			Var13.f_3 = Global_1198046->f_231.f_1066[iParam0]->f_15;
			Var13.f_4 = Global_1198046->f_231.f_1066[iParam0]->f_16;
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var13, 5, func_213(iParam0));
		}
		else
		{
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &uVar18, 1, func_213(iParam0));
		}
		func_140(iParam0, iParam1, iVar2);
		set_script_with_name_hash_as_no_longer_needed(iVar1);
		func_215(iVar1, iVar0);
		return true;
	}
	return false;
}

void func_140(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1]->f_2 = iParam2;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	func_125(iParam0, func_212(iParam1, iParam2));
}

bool func_142(int iParam0, int iParam1)
{
	if (!func_39(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_161(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_211(Global_35, func_162(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_143(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_1;
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	if (!_0xa4a4359320345b34(iParam2))
	{
		(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = 0;
		return;
	}
	(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = iParam2;
}

int func_145(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_1;
}

void func_146(int iParam0, int iParam1)
{
	func_152(iParam0, iParam1);
	func_83(iParam0, iParam1);
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_1 = iParam2;
}

int func_148(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_2;
}

int func_149(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_2;
}

void func_150(int iParam0, int iParam1, bool bParam2)
{
	if (func_143(iParam0, iParam1) != 0 && !func_216(func_143(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_83(iParam0, iParam1))
	{
		Var1 = { func_162(iParam0, iParam1) };
		Var1.f_4 = to_float(func_148(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_217(iParam0);
		Var10 = { func_124(iParam0) };
		iVar12 = 0;
		if (func_34(Var10))
		{
			iVar12 = func_197(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_144(iParam0, iParam1, _0x183c0b6cfeffcae4(&Var1));
	}
}

bool func_151(int iParam0, int iParam1)
{
	if (func_149(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_218(iParam0, iParam1);
	func_150(iParam0, iParam1, 1);
	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_219(iVar0))
	{
		return false;
	}
	func_220(iParam0, iParam1, _0x351d71b8b72b858b(func_143(iParam0, iParam1)));
	return true;
}

void func_152(int iParam0, int iParam1)
{
	iVar0 = func_149(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_0xf6a8a652a6b186cd(iVar0))
	{
		func_220(iParam0, iParam1, 0);
		return;
	}
	_0xfdfecc6ee4491e11(iVar0);
	func_220(iParam0, iParam1, 0);
	func_83(iParam0, iParam1);
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1] = iParam2;
}

int func_154(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_3;
}

int func_155(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_4;
}

bool func_156(int iParam0)
{
	return &Global_1902818 > iParam0;
}

bool func_157(int iParam0, int iParam1, int iParam2)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_221(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_158(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_222(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_159(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_23(iParam0, iVar0, 2))
		{
		}
		else if (!func_23(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

struct<2> func_160()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_161(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_2;
}

Vector3 func_162(int iParam0, int iParam1)
{
	return func_223(&(Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]));
}

var func_163(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_224() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_225());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_225());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_225());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_226(get_player_team(iVar5)));
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
			if (func_227(iVar2))
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
				if (iVar9 & 8192 != 0 && func_228(iVar2) != 1)
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
					if (!func_229(iVar10))
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

void func_164(int iParam0)
{
	Global_1198046->f_2505[iParam0]->f_4 = 0;
	Global_1198046->f_2505[iParam0]->f_5 = 255;
}

bool func_165(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[1] + 3))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35))
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35) + 16)
	{
		return false;
	}
	return true;
}

void func_166(var uParam0)
{
	func_230(uParam0, 0);
}

bool func_167(var uParam0)
{
	return func_107(*uParam0, 2);
}

int func_168(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_169(int iParam0)
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

int func_170(int iParam0)
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

struct<40> func_171(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_231(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *uParam0->f_3[iParam1] };
	*uParam0->f_3[iParam1] = { Var0 };
	return Var40;
}

void func_172(var uParam0, int iParam1)
{
	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3]->f_4 != -1)
				{
					func_171(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4] != -1)
			{
			}
			else
			{
				func_171(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

struct<40> func_173(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % uParam0->f_2);
		if (!func_232(*uParam0->f_3[iVar41]))
		{
			return *uParam0->f_3[iVar41];
		}
		iVar40++;
	}
	return Var0;
}

bool func_174(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 5);
}

bool func_175(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_233(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_176(var uParam0)
{
	if (!func_233(uParam0))
	{
		return -1;
	}
	iVar0 = func_234(uParam0, uParam0->f_9);
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
			iVar0 = func_234(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_177(var uParam0, var uParam1, int iParam2)
{
	if ((Global_1198046->f_23[iParam2] - Global_1198046->f_8[iParam2]) // PointerArith >= &Global_1198046->f_3[iParam2])
	{
		return false;
	}
	if (&Global_1198046->f_13[iParam2] >= &Global_1198046->f_3[iParam2])
	{
		return false;
	}
	iVar0 = func_169(iParam2);
	iVar1 = ((&Global_1198046->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (Global_1198046->f_231[iVar2]->f_1 == -1)
		{
			func_235(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_178(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_169(iParam2);
	iVar1 = ((&Global_1198046->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (Global_1198046->f_231[iVar2]->f_1 == -1 || Global_1198046->f_231[iVar2]->f_1 == 1)
		{
			func_235(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		default:
			break;
	}
	return true;
}

bool func_180(var uParam0, var uParam1, int iParam2)
{
	uVar0 = (&Global_1198046->f_3[iParam2] + func_169(iParam2));
	iVar1 = ((func_169(iParam2) + func_170(iParam2)) - 1);
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (Global_1198046->f_231[iVar2]->f_1 == -1)
		{
			func_235(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_181(int iParam0, var uParam1, var uParam2)
{
	if (func_39(iParam0, 1))
	{
		func_236(iParam0);
	}
	if (!func_34(Global_1198046->f_231[iParam0]->f_5))
	{
		Global_1198046->f_231[iParam0]->f_5 = { *uParam1 };
	}
	*Global_1198046->f_231.f_1066[iParam0] = { *uParam2 };
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	*Global_1198046->f_2505[iParam0] = { Var0 };
	if (func_39(iParam0, 1))
	{
		func_237(iParam0);
	}
}

void func_182(int iParam0, struct<2> Param1)
{
	Global_1198046->f_231[iParam0]->f_5.f_6 = { Param1 };
}

void func_183(int iParam0, var uParam1)
{
	Global_1198046->f_231.f_1066[iParam0]->f_6 = uParam1;
}

bool func_184(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = -1;
	Var10.f_1 = -1;
	Var10.f_3 = -1;
	Var10.f_4 = -1;
	Var10.f_5 = -1;
	Var10.f_6 = -1;
	Var10.f_6.f_1 = -1;
	Var10.f_9 = 2;
	Var0 = { Var10 };
	Var0 = { *uParam0 };
	iVar20 = func_176(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_3 = uParam0->f_3;
	iVar21 = func_176(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_4 = uParam0->f_4;
	iVar22 = func_176(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_5 = uParam0->f_5;
	iVar23 = func_176(&Var0);
	if ((!func_15(iVar21) && !func_15(iVar22)) && !func_15(iVar23))
	{
		return false;
	}
	iVar24 = -1;
	if (func_15(iVar21))
	{
		iVar24 = iVar21;
	}
	else if (func_15(iVar23))
	{
		iVar24 = iVar23;
	}
	else
	{
		iVar24 = iVar22;
	}
	if (!func_15(iVar20))
	{
		if (!func_15(iVar24))
		{
			return false;
		}
	}
	else
	{
		if (func_15(iVar24))
		{
			func_99(iVar24);
		}
		iVar24 = iVar20;
	}
	Global_1198046->f_231[iVar24]->f_5 = { *uParam0 };
	Global_1198046->f_231[iVar24]->f_5.f_2 = 0;
	Global_1198046->f_231[iVar24]->f_5.f_3 = -1;
	Global_1198046->f_231[iVar24]->f_5.f_4 = -1;
	Global_1198046->f_231[iVar24]->f_5.f_5 = -1;
	return true;
}

void func_185(int iParam0, int iParam1)
{
	if (Global_1198046->f_231[iParam0]->f_5.f_9 == iParam1)
	{
		return;
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_9 == &Global_1198046->f_231[iParam0] && &Global_1198046->f_231[iParam0] != iParam1)
	{
		Global_1198046->f_18[&Global_1198046->f_231[iParam0]] = &Global_1198046->f_18[&Global_1198046->f_231[iParam0]] + 1;
	}
	if (Global_1198046->f_231[iParam0]->f_5.f_9 != &Global_1198046->f_231[iParam0] && &Global_1198046->f_231[iParam0] == iParam1)
	{
		Global_1198046->f_18[&Global_1198046->f_231[iParam0]] = (&Global_1198046->f_18[&Global_1198046->f_231[iParam0]] - 1);
	}
	Global_1198046->f_13[Global_1198046->f_231[iParam0]->f_5.f_9] = (&Global_1198046->f_13[Global_1198046->f_231[iParam0]->f_5.f_9] - 1);
	Global_1198046->f_13[iParam1] = &Global_1198046->f_13[iParam1] + 1;
	Global_1198046->f_231[iParam0]->f_5.f_9 = iParam1;
}

int func_186(struct<2> Param0)
{
	return func_197(Param0);
}

int func_187(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_30())
	{
		return 0;
	}
	if (!func_238())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_206(&Global_0, 8);
	}
	func_206(&Global_0, 1);
	return 1;
}

void func_188(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_239(func_196(Param0));
	iVar1 = func_186(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_25() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_240(Param0, &Var2);
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

void func_189(struct<2> Param0, int iParam2)
{
	if (!func_34(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_241(Param0);
	}
	else
	{
		func_242(Param0, iParam2);
	}
	func_243();
}

struct<2> func_190(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_191(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_244(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_245(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_192(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_246(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_247(cVar2);
			}
			else
			{
				func_248();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_193(bool bParam0)
{
	if (!bParam0 && func_249(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_194(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_195(struct<2> Param0)
{
	return func_251(func_250(Param0));
}

int func_196(var uParam0, var uParam1)
{
	return uParam0;
}

int func_197(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_252(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_198(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	return Global_1198046->f_231[iParam0]->f_5.f_8;
}

int func_199(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_252(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_252(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

bool func_200(struct<2> Param0)
{
	return func_130(Param0) == 0;
}

int func_201(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_35(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_202(struct<2> Param0, bool bParam2)
{
	if (!func_34(Param0))
	{
		return;
	}
	if (!func_200(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_253(Param0);
	}
	func_189(Param0, 1);
	bParam2 = bParam2;
}

void func_203(struct<2> Param0)
{
	if (func_186(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_186(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_186(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_208(Param0, &Var0))
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

int func_204(struct<2> Param0, int iParam2)
{
	iVar0 = func_250(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_254(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_255(iVar0, iParam2);
	return iParam2;
}

bool func_205(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_207(struct<2> Param0, int iParam2)
{
	if (!func_34(Param0))
	{
		return 0;
	}
	iVar0 = func_250(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_256(Param0, func_190(0), iParam2))
	{
		func_189(func_190(0), 3);
		func_189(func_190(iVar0), 4);
		return 0;
	}
	func_255(iVar0, 0);
	func_189(func_190(0), 3);
	func_189(func_190(1), 4);
	return 1;
}

bool func_208(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_252(Param0, &vVar0);
	if (func_257(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

Vector3 func_209(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_210(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_211(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_212(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_213(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_1;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1881122909:
			return 1;
		case 1746254613:
			return 2;
		case -210940392:
			return 3;
		case -337883659:
			return 4;
		case -2127851115:
			return 6;
		case -1515832348:
			return 7;
		case -392050235:
			return 5;
		case -16753530:
			return 11;
		case -1210919694:
			return 8;
		case -1628357986:
			return 9;
		case -1054322328:
			return 10;
		case -1488065830:
			return 12;
		case 1903114091:
			return 13;
		case 1623440542:
			return 14;
		case -726533106:
			return 15;
		case 911021683:
			return 16;
		case 338631142:
			return 17;
		case -1896431036:
			return 18;
		case 1875318885:
			return 19;
		case 518160998:
			return 20;
		case 681896882:
			return 31;
		case 409019465:
			return 21;
		case -1877273045:
			return 28;
		case -510630761:
			return 24;
		case 1558203524:
			return 25;
		case -1347839684:
			return 22;
		case 569695338:
			return 23;
		case 617627179:
			return 29;
		case -721827460:
			return 26;
		case -502572877:
			return 30;
		case 1541283230:
			return 27;
		case 1773252799:
			return 32;
		case -1209093440:
			return 33;
		case 901959776:
			return 34;
		default:
			break;
	}
	return 0;
}

void func_215(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_258(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051252->f_80[Global_1051252->f_80.f_101], "HashOnlyScript", 64);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_8 = iParam0;
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_9 = iParam1;
	Global_1051252->f_80.f_101++;
	Global_1051252->f_45.f_1 = 1;
}

bool func_216(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return true;
	}
	if (_0xb33a604345f58202(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_217(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_3;
}

void func_218(int iParam0, int iParam1)
{
	if (func_143(iParam0, iParam1) != 0)
	{
		if (func_216(func_143(iParam0, iParam1)))
		{
			func_152(iParam0, iParam1);
			func_83(iParam0, iParam1);
		}
	}
}

bool func_219(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return false;
	}
	iVar0 = _0xb33a604345f58202(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	if (!_0xf6a8a652a6b186cd(iParam2))
	{
		(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = 0;
		return;
	}
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = iParam2;
}

bool func_221(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_23(iParam0, iParam2, func_212(iParam1, iParam3));
}

bool func_222(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_221(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_223(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_224()
{
	return Global_1051252->f_12;
}

char* func_225()
{
	return "unnamed";
}

int func_226(int iParam0)
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

bool func_227(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_259(36, iParam0);
}

int func_228(int iParam0)
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

bool func_229(int iParam0)
{
	if (func_260(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_261(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_230(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_262(uParam0, 1);
	func_263(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_231(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

bool func_232(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39)
{
	if (Param0.f_1 != -1)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1198046->f_28)
	{
		iVar1 = ((Global_1198046->f_28.f_1 + iVar0) % 5);
		if (Global_1198046->f_28.f_2[iVar1]->f_2 != Param0.f_2)
		{
		}
		else if (Global_1198046->f_28.f_2[iVar1]->f_4 != Param0.f_4)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_233(var uParam0)
{
	if (func_34(*uParam0))
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

int func_234(var uParam0, int iParam1)
{
	iVar0 = func_169(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_170(iParam1)) - 1);
	}
	bVar2 = func_34(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_35(Global_1198046->f_231[iVar6]->f_5, *uParam0))
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

void func_235(struct<15> Param0, struct<17> Param15, int iParam32, int iParam33)
{
	*Global_1198046->f_231[iParam33] = { Param0 };
	Global_1198046->f_231[iParam33] = iParam32;
	*Global_1198046->f_231.f_1066[iParam33] = { Param15 };
	if (iParam32 != Param0.f_5.f_9)
	{
		Global_1198046->f_18[iParam32] = &Global_1198046->f_18[iParam32] + 1;
	}
	if (func_165(iParam33))
	{
		Global_1198046->f_23[iParam32] = &Global_1198046->f_23[iParam32] + 1;
	}
	Global_1198046->f_8[iParam32] = &Global_1198046->f_8[iParam32] + 1;
	Global_1198046->f_13[Param0.f_5.f_9] = &Global_1198046->f_13[Param0.f_5.f_9] + 1;
	if (func_39(iParam33, 1))
	{
		func_237(iParam33);
	}
}

void func_236(int iParam0)
{
	if (!func_15(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1198046->f_2505.f_499)
	{
		if (&Global_1198046->f_2505.f_427[iVar0] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (Global_1198046->f_2505.f_499 == 1)
	{
		Global_1198046->f_2505.f_499 = 0;
		return;
	}
	iVar0 = iVar1;
	while (iVar0 <= (Global_1198046->f_2505.f_499 - 2))
	{
		Global_1198046->f_2505.f_427[iVar0] = &Global_1198046->f_2505.f_427[iVar0 + 1];
		iVar0++;
	}
	Global_1198046->f_2505.f_499 = (Global_1198046->f_2505.f_499 - 1);
}

int func_237(int iParam0)
{
	if (Global_1198046->f_2505.f_499 >= 71)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1198046->f_2505.f_499)
	{
		if (&Global_1198046->f_2505.f_427[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	Global_1198046->f_2505.f_427[Global_1198046->f_2505.f_499] = iParam0;
	Global_1198046->f_2505.f_499++;
	return 1;
}

bool func_238()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_239(int iParam0)
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

void func_240(struct<2> Param0, var uParam2)
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
	switch (func_196(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_265(func_264(Param0));
			iVar5 = func_266(iVar4);
			if (!func_267(iVar5, 0))
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

int func_241(struct<2> Param0)
{
	iVar0 = func_199(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_268(iVar0);
}

int func_242(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_252(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_252(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_269(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_243()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_252(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_245(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_246(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_247(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_248()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_249(int iParam0)
{
	iVar0 = func_270(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_271(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_272(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_250(struct<2> Param0)
{
	if (!func_34(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_35(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_251(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_127(Global_1900736->f_1[0]);
		return 1;
	}
	func_127(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_255(iParam0, Global_1900736->f_66);
	return 1;
}

bool func_252(struct<2> Param0, var uParam2)
{
	if (!func_34(Param0))
	{
		return false;
	}
	func_273(uParam2);
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

void func_253(struct<2> Param0)
{
	if (func_186(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_186(Param0)))
	{
		_0x99230691875fc218(func_196(Param0), func_186(Param0), Global_35);
	}
}

void func_254(struct<2> Param0, int iParam2)
{
	if (!func_34(Param0))
	{
		func_127(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_274(Param0, 0, 1, -1);
}

void func_255(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_275((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_275(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_34(*Global_1900736->f_1[0]))
	{
		func_189(*Global_1900736->f_1[0], 3);
	}
}

bool func_256(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_34(Param0))
	{
		return false;
	}
	if (!func_34(Param2))
	{
		return true;
	}
	iVar0 = func_196(Param0);
	iVar1 = func_196(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0, var uParam1, var uParam2)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	if (func_277(iParam0, uParam1, &uVar0))
	{
		func_278(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_258(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051252->f_80.f_101 - 1))
	{
		if (Global_1051252->f_80[iVar0]->f_8 == iParam0 && Global_1051252->f_80[iVar0]->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_259(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_279(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_280())
	{
		return func_279(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_279(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_260(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_261(int iParam0)
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
		func_281(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_282(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_262(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_264(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_252(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_265(int iParam0)
{
	iVar0 = -1;
	if (func_283(&Var1, iParam0))
	{
		iVar0 = ((func_284() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_266(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_267(int iParam0, int iParam1)
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

int func_268(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_269(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_270(int iParam0, int iParam1)
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

bool func_271(int iParam0)
{
	iVar0 = func_285(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_272(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_273(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_274(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_286(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_197(Param0);
	Var0.f_3 = iParam3;
	func_287(&Var0, bParam2, iParam4);
	return 1;
}

void func_275(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_276(int iParam0)
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

bool func_277(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_288(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_289(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_290(iVar0);
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
			uParam2->f_5 = func_291(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_292(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_293(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_294(iVar0);
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

bool func_279(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_280()
{
	return Global_1102219->f_3672;
}

void func_281(int iParam0)
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
	func_282(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_282(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_283(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_284()
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

int func_285(int iParam0)
{
	return func_295(iParam0) + 30;
}

int func_286(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_35((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_287(var uParam0, bool bParam1, int iParam2)
{
	func_296(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_297(func_286(uParam0->f_1));
	}
	else
	{
		func_298();
	}
}

int func_288(int iParam0)
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

int func_289(int iParam0, var uParam1)
{
	if (func_299(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_290(int iParam0)
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

int func_291(int iParam0)
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

int func_292(int iParam0)
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

int func_293(int iParam0)
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

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	return iParam0 * 31;
}

void func_296(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_297(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_298()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_300(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_299(int iParam0, var uParam1, var uParam2)
{
	if (func_301(iParam0, uParam1, &uVar0))
	{
		func_302(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_300(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_301(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_288(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_302(var uParam0, int iParam1, var uParam2)
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

