void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&uScriptParam_0);
	func_2(&uLocal_19, &Local_222, &uLocal_671, &uScriptParam_0);
	while (func_3(&uLocal_19, &uLocal_671, &uScriptParam_0))
	{
		func_4(&uLocal_19, &Local_222, &uLocal_671, &uScriptParam_0);
		wait(0);
	}
	func_5(&Local_222, &uLocal_671, &uScriptParam_0);
	func_6();
}

void func_1(var uParam0)
{
	func_7(32, uParam0->f_1);
	func_8();
	network_register_host_broadcast_variables(&uLocal_19, 203, 46);
	func_9(_0xba24095ea96dfe17(&uLocal_19), 203, "m_hostData");
	network_register_player_broadcast_variables(&Local_222, 449, 47);
	func_10(_0x690806bc83bc8ca2(Local_222[0]), 449, "m_clientData");
	func_11(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		func_6();
		return;
	}
	iVar0 = participant_id_to_int();
	if (!func_12(iVar0))
	{
		func_6();
		return;
	}
	if (network_is_host_of_this_script() && !func_13(&(uParam0->f_3), 2))
	{
		if (Global_1109804->f_16)
		{
			func_14(&(uParam0->f_3), 4, *uParam3);
		}
		func_14(&(uParam0->f_3), 2, *uParam3);
	}
	func_15(uParam1, uParam3, iVar0);
	func_16(uParam2);
	func_17(uParam2);
	func_19(func_18(*uParam3));
}

bool func_3(var uParam0, var uParam1, var uParam2)
{
	if (func_20(0, 0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if ((uParam2->f_2 != -1 && uParam2->f_2 == func_21()) || (uParam2->f_1 != -1 && uParam2->f_1 == func_22()))
	{
		Var0 = { func_23() };
	}
	if (func_25(func_24()))
	{
		if (!func_25(Var0))
		{
			if (func_26(func_24()) == 7)
			{
				if (func_28(func_27(func_24())))
				{
					Var0 = { func_24() };
				}
			}
		}
	}
	if (func_29(Var0, 1024, 0))
	{
		return false;
	}
	if (func_30() != 2)
	{
		return false;
	}
	if (!func_31(*uParam2, 2))
	{
		if (func_13(&(uParam0->f_3), 1))
		{
			return false;
		}
		if (func_32(&(uParam1->f_3), 2))
		{
			return false;
		}
	}
	if (func_33(2048) && !func_33(4096))
	{
		return false;
	}
	return true;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = uParam3->f_1;
	if (!func_34(iVar0))
	{
		return;
	}
	func_35(uParam0, uParam1, uParam2, uParam3);
	func_36(uParam0, uParam1, uParam2, uParam3);
	func_37(uParam2, uParam3);
	iVar1 = uParam3->f_2;
	if (func_38(&(uParam2->f_7.f_2.f_2), 1))
	{
		func_39(uParam0, uParam1, uParam2, uParam3, iVar0, iVar1);
	}
	func_40(uParam0, uParam1, uParam2, uParam3, iVar0, iVar1);
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	func_41(uParam1, uParam2);
	func_42();
	func_43(uParam1, uParam2);
	func_44(uParam1, uParam2);
	func_45(uParam1, uParam2);
	func_46(uParam1, uParam2);
	func_47(*uParam2, -1);
	func_48(*uParam2, 0);
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return;
	}
	iVar0 = participant_id_to_int();
	if (!func_12(iVar0))
	{
		func_6();
		return;
	}
	func_49(uParam0, uParam2, iVar0);
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
		if (func_50() == 0)
		{
			if (func_51())
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

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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

bool func_12(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return false;
	}
	return true;
}

bool func_13(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_14(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_15(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[iParam2]->f_5 = { func_52(uParam1->f_2) };
}

void func_16(var uParam0)
{
	uParam0->f_7 = player_id();
	uParam0->f_7.f_1 = uParam0->f_7;
}

void func_17(var uParam0)
{
	iVar0 = get_game_timer();
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		uParam0->f_208[iVar1] = iVar0;
		iVar1++;
	}
	uParam0->f_208.f_29 = iVar0;
	uParam0->f_208.f_30 = iVar0;
	uParam0->f_208.f_30.f_1 = iVar0;
}

int func_18(int iParam0)
{
	return Global_1120070[iParam0];
}

void func_19(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_53(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_54(iVar1));
		iVar0++;
	}
}

bool func_20(bool bParam0, bool bParam1)
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

int func_21()
{
	return Global_1130592->f_5.f_1;
}

int func_22()
{
	return Global_1130592->f_5;
}

struct<2> func_23()
{
	return Global_1130592->f_5.f_3;
}

struct<2> func_24()
{
	return *Global_1051213;
}

bool func_25(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return false;
	}
	return true;
}

int func_26(var uParam0, var uParam1)
{
	return uParam0;
}

int func_27(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_57(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_28(int iParam0)
{
	func_58(&uVar0);
	func_59(&uVar0);
	func_60(&uVar0, 45871012);
	return func_61(&uVar0, iParam0, 0);
}

bool func_29(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_25(*Global_1051213) && !func_62(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_63(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_64(iParam3, 255))
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
	if (func_65())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_25(*Global_1051213))
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

int func_30()
{
	if (!func_66(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

bool func_31(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_21 && iParam1) != 0;
}

bool func_32(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_33(int iParam0)
{
	return (Global_1130592->f_24.f_3 && iParam0) != 0;
}

bool func_34(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam2->f_7.f_31 = { uParam2->f_7.f_2 };
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_6 = 255;
	Var0.f_7 = 255;
	Var0.f_8 = 255;
	Var0.f_14 = -1;
	Var0.f_23 = -15;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_27 = -1;
	Var0.f_27.f_1 = -1;
	Var0 = participant_id_to_int();
	Var0.f_1 = func_67(uParam2->f_7, uParam2->f_7.f_31.f_1);
	Var0.f_7 = (uParam2->f_7.f_31.f_7 + 1 % 32);
	Var0.f_6 = int_to_playerindex(Var0.f_7);
	Var0.f_9 = get_player_ped(uParam2->f_7);
	Var0.f_10 = { get_entity_coords(Var0.f_9, false, false) };
	Var0.f_13 = _0x901e0dc25080c8b9(uParam2->f_7);
	Var0.f_5 = func_68(*uParam3);
	Var0.f_15 = { func_69(uParam1, Var0.f_13) };
	Var0.f_21 = get_game_timer();
	Var0.f_22 = get_network_time_accurate();
	Var0.f_23 = func_70();
	Var0.f_24 = (func_71(Var0.f_23) / 6);
	if (Var0.f_1 == -1)
	{
		func_72(&(Var0.f_2), 1024);
	}
	else if (&uParam0->f_4[Var0.f_1] == -1)
	{
		func_72(&(Var0.f_2), 2048);
	}
	else
	{
		Var0.f_27 = { func_73(*uParam3, &(uParam0->f_4[Var0.f_1])) };
	}
	Var0.f_25 = { func_74() };
	if (Var0.f_1 == -1)
	{
		func_47(*uParam3, -1);
	}
	else
	{
		func_47(*uParam3, &(uParam0->f_4[Var0.f_1]));
	}
	iVar29 = _0x4be6c13a45cca8ec(Var0.f_13);
	if (_network_is_player_index_valid(iVar29))
	{
		if (network_is_player_active(iVar29))
		{
			if (iVar29 == player_id())
			{
				if (func_75(*uParam3) != (*uParam1)[Var0]->f_3)
				{
					(*uParam1)[participant_id_to_int()]->f_3 = func_75(*uParam3);
				}
			}
			else if (network_is_player_a_participant(iVar29))
			{
				iVar30 = network_get_participant_index(iVar29);
				if (iVar30 < 0 || iVar30 >= 32)
				{
				}
				else
				{
					func_76(*uParam3, (*uParam1)[iVar30]->f_3);
				}
			}
		}
	}
	iVar31 = func_75(*uParam3);
	if ((*uParam1)[Var0]->f_3 != iVar31)
	{
		(*uParam1)[Var0]->f_3 = iVar31;
	}
	iVar32 = func_78(func_77(uParam3->f_2));
	if ((*uParam1)[Var0]->f_7 != iVar32)
	{
		(*uParam1)[Var0]->f_7 = iVar32;
	}
	Var33 = -1;
	Var33.f_1 = -1;
	Var33.f_2 = -1;
	Var33.f_4 = 10;
	Var33.f_15 = 4;
	Var33.f_15.f_5 = 4;
	Var33.f_25 = 1;
	Var33.f_28 = 2;
	Var33.f_28.f_1 = -1;
	Var33.f_28.f_1.f_1 = -1;
	Var33.f_31 = 493038497;
	Var33.f_31.f_1 = 493038497;
	func_79(&Var33);
	if ((*uParam1)[Var0]->f_8 != Var33.f_2.f_1)
	{
		(*uParam1)[Var0]->f_8 = Var33.f_2.f_1;
	}
	(*uParam1)[Var0]->f_9 = 1;
	if (func_80(player_id(), 1, 0))
	{
		Var0.f_14 = 1;
	}
	else
	{
		Var0.f_14 = 0;
	}
	uParam2->f_7.f_2 = { Var0 };
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_81(uParam2);
	func_82(uParam2);
	func_83(uParam2);
	func_84(uParam0, uParam1, uParam2, uParam3);
	func_85(uParam2, uParam3);
	func_86(uParam0, uParam1, uParam2, uParam3);
	func_87(uParam0, uParam2, uParam3);
	func_88(uParam0, uParam1, uParam2, uParam3);
	func_89(uParam1, uParam2, uParam3);
}

void func_37(var uParam0, var uParam1)
{
	if (func_90(&(uParam0->f_7.f_2.f_3), 2))
	{
		_0x94a3c1b804d291ec(uParam0->f_7.f_2.f_9, 0, 0, 1, 0);
	}
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (uParam2->f_1 < 2)
	{
		return;
	}
	func_91(uParam0, uParam1, uParam2, uParam3, iParam5);
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	func_92(uParam0, uParam1, uParam2, uParam3, iParam5);
}

void func_41(var uParam0, var uParam1)
{
	if (uParam0->f_99.f_12 != 493038497)
	{
		_0xe98d55c5983f2509(func_93(*uParam1, uParam0->f_99.f_12));
		uParam0->f_99.f_12 = 493038497;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_94(&(uParam0->f_99[iVar0])))
		{
			func_95(uParam0->f_99[iVar0], 0, 1);
		}
		iVar0++;
	}
}

void func_42()
{
	enable_control_action(0, -1304887797, true);
}

void func_43(var uParam0, var uParam1)
{
	if (uParam1->f_4 != -323664079)
	{
		return;
	}
	if (uParam0->f_99.f_18 != 0)
	{
		func_96(&(uParam0->f_99.f_18), 0, *uParam1, uParam1->f_3, uParam1->f_4);
	}
	func_97(*uParam1, 0);
	func_98(*uParam1, 0);
	func_99(*uParam1, 0);
	func_100(uParam1->f_1);
	func_45(uParam0, uParam1);
	func_46(uParam0, uParam1);
	func_101(uParam0);
}

void func_44(var uParam0, var uParam1)
{
	func_102(uParam0);
	func_100(uParam1->f_1);
}

void func_45(var uParam0, var uParam1)
{
	if (!func_103(uParam0, 1))
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
	func_104(uParam0, uParam1, 1);
}

void func_46(var uParam0, var uParam1)
{
	if (!func_103(uParam0, 2))
	{
		return;
	}
	set_player_control(player_id(), true, 0, false);
	func_104(uParam0, uParam1, 2);
}

void func_47(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_7 = iParam1;
}

void func_48(int iParam0, bool bParam1)
{
	(*Global_1120070)[iParam0]->f_8 = bParam1;
}

void func_49(var uParam0, var uParam1, int iParam2)
{
	func_105(uParam1->f_2, (*uParam0)[iParam2]->f_5);
}

int func_50()
{
	return Global_1572887->f_13;
}

bool func_51()
{
	return Global_1051252->f_8;
}

struct<2> func_52(int iParam0)
{
	if (!func_106(iParam0))
	{
		return func_107();
	}
	return func_108(iParam0);
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

bool func_55(int iParam0)
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

int func_56(int iParam0)
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

bool func_57(struct<2> Param0, var uParam2)
{
	if (!func_25(Param0))
	{
		return false;
	}
	func_109(uParam2);
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

int func_58(var uParam0)
{
	if (func_110() == 0)
	{
		return 0;
	}
	if (!_0x603ac35fd4602c76(func_110()))
	{
		return 0;
	}
	*uParam0 = func_110();
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
	return 1;
}

int func_59(var uParam0)
{
	uParam0->f_2 = 1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(var uParam0, int iParam1)
{
	uParam0->f_2 = 2;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

int func_61(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = 5;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_62(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_63(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_64(int iParam0, int iParam1)
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

bool func_65()
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
	if (!func_25(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_67(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (func_111(iParam1))
	{
		if (iVar0 == func_112(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_112(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

var func_68(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_19;
}

struct<6> func_69(var uParam0, int iParam1)
{
	iVar56 = _0xd1bf325c8252a982(iParam1, &Var6);
	iVar57 = 0;
	while (iVar57 <= (iVar56 - 1))
	{
		iVar59 = network_get_player_from_gamer_handle(Var6[iVar57]);
		if (!_network_is_player_index_valid(iVar59))
		{
		}
		else if (!network_is_player_active(iVar59))
		{
		}
		else if (!network_is_player_a_participant(iVar59))
		{
		}
		else
		{
			iVar58 = network_get_participant_index(iVar59);
			if (iVar58 < 0 || iVar58 >= 32)
			{
			}
			else
			{
				Var0 = (Var0 || uParam0[iVar58]);
				Var0.f_1 = (Var0.f_1 || (*uParam0)[iVar58]->f_1);
				Var0.f_2 = (Var0.f_2 || (*uParam0)[iVar58]->f_2);
				if (iVar57 == 0)
				{
					Var0.f_3 = uParam0[iVar58];
					Var0.f_3.f_1 = (*uParam0)[iVar58]->f_1;
					Var0.f_3.f_2 = (*uParam0)[iVar58]->f_2;
				}
				else
				{
					Var0.f_3 = (Var0.f_3 && uParam0[iVar58]);
					Var0.f_3.f_1 = (Var0.f_3.f_1 && (*uParam0)[iVar58]->f_1);
					Var0.f_3.f_2 = (Var0.f_3.f_2 && (*uParam0)[iVar58]->f_2);
				}
			}
		}
		iVar57++;
	}
	return Var0;
}

int func_70()
{
	return &Global_1902818;
}

int func_71(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_73(int iParam0, int iParam1)
{
	return *(*Global_1120070)[iParam0]->f_24.f_2[iParam1];
}

struct<2> func_74()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_113(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_113(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

int func_75(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_9;
}

void func_76(int iParam0, var uParam1)
{
	(*Global_1120070)[iParam0]->f_9 = uParam1;
}

int func_77(int iParam0)
{
	return Global_1118808[iParam0];
}

int func_78(int iParam0)
{
	Var0 = { func_115(-1808811965, func_114(iParam0)) };
	return func_116(Var0);
}

void func_79(var uParam0)
{
	_copy_memory(uParam0, &(Global_1109804->f_21.f_40.f_1), 33);
}

bool func_80(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

void func_81(var uParam0)
{
	if (network_is_host_of_this_script())
	{
		func_72(&(uParam0->f_7.f_2.f_2), 1);
	}
	else if (func_38(&(uParam0->f_7.f_31.f_2), 1))
	{
		func_117(&(uParam0->f_7.f_2.f_3), 1);
	}
}

void func_82(var uParam0)
{
	if (is_player_dead(uParam0->f_7))
	{
		func_72(&(uParam0->f_7.f_2.f_2), 4);
		func_118(&(uParam0->f_7.f_2.f_4), 1);
	}
}

void func_83(var uParam0)
{
	if (_network_is_player_index_valid(uParam0->f_7.f_2.f_6))
	{
		func_72(&(uParam0->f_7.f_2.f_2), 8);
		if (network_is_player_active(uParam0->f_7.f_2.f_6))
		{
			func_72(&(uParam0->f_7.f_2.f_2), 16);
			if (uParam0->f_7.f_2.f_6 == uParam0->f_7)
			{
				func_72(&(uParam0->f_7.f_2.f_2), 32);
				func_72(&(uParam0->f_7.f_2.f_2), 64);
				func_72(&(uParam0->f_7.f_2.f_2), 256);
				func_118(&(uParam0->f_7.f_2.f_4), 1);
				if (func_38(&(uParam0->f_7.f_2.f_2), 4))
				{
					func_72(&(uParam0->f_7.f_2.f_2), 128);
				}
			}
			else
			{
				if (network_is_player_a_participant(uParam0->f_7.f_2.f_6))
				{
					func_72(&(uParam0->f_7.f_2.f_2), 32);
					uParam0->f_7.f_2.f_8 = network_get_participant_index(uParam0->f_7.f_2.f_6);
				}
				if (_0x81fb74c83c2ed69f(uParam0->f_7.f_2.f_6))
				{
					func_72(&(uParam0->f_7.f_2.f_2), 64);
				}
				if (is_player_dead(uParam0->f_7.f_2.f_6))
				{
					func_72(&(uParam0->f_7.f_2.f_2), 128);
					func_118(&(uParam0->f_7.f_2.f_4), 1);
				}
			}
		}
		else
		{
			func_118(&(uParam0->f_7.f_2.f_4), 1);
		}
	}
	else
	{
		func_118(&(uParam0->f_7.f_2.f_4), 1);
	}
	if (_0x424b17a7dc5c90bc(uParam0->f_7))
	{
		func_72(&(uParam0->f_7.f_2.f_2), 512);
	}
	if (uParam0->f_7.f_2 < 0 || uParam0->f_7.f_2 >= 32)
	{
		func_72(&(uParam0->f_7.f_2.f_2), 4096);
	}
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_38(&(uParam2->f_7.f_2.f_2), 4096))
	{
		return;
	}
	if (func_38(&(uParam2->f_7.f_2.f_2), 1024))
	{
		func_119(&((*uParam1)[uParam2->f_7.f_2]->f_1), 11, *uParam3);
		func_72(&(uParam2->f_7.f_2.f_2), 2);
		return;
	}
	if (uParam2->f_7.f_2.f_13 != uParam2->f_7.f_31.f_13)
	{
		func_119(&((*uParam1)[uParam2->f_7.f_2]->f_1), 11, *uParam3);
		func_72(&(uParam2->f_7.f_2.f_2), 2);
	}
	if (func_120(&(uParam2->f_7.f_2.f_15.f_1), 1))
	{
		func_117(&(uParam2->f_7.f_2.f_3), 32);
		func_121(&((*uParam1)[uParam2->f_7.f_2]->f_1), 1, *uParam3);
	}
	if (func_120(&(uParam2->f_7.f_2.f_15.f_1), 2))
	{
		func_117(&(uParam2->f_7.f_2.f_3), 64);
	}
	iVar0 = uParam2->f_7.f_2.f_1;
	if (uParam0->f_4[iVar0]->f_3 < 5 || uParam0->f_4[iVar0]->f_3 > 9)
	{
		func_119(&((*uParam1)[uParam2->f_7.f_2]->f_1), 11, *uParam3);
	}
	func_48(*uParam3, uParam0->f_4[iVar0]->f_3 == 6);
}

void func_85(var uParam0, var uParam1)
{
	if (func_122(uParam0, uParam1))
	{
		func_117(&(uParam0->f_7.f_2.f_3), 2);
	}
}

void func_86(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_38(&(uParam2->f_7.f_2.f_2), 1024))
	{
		return;
	}
	if (func_38(&(uParam2->f_7.f_2.f_2), 4096))
	{
		return;
	}
	iVar0 = uParam2->f_7.f_2;
	iVar1 = uParam2->f_7.f_2.f_1;
	switch (uParam0->f_4[iVar1]->f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 10:
		case 12:
			if (func_123(&(uParam3->f_5), 4))
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 5:
		case 7:
		case 8:
			bVar2 = false;
			break;
		case 9:
			if (func_120(&((*uParam1)[iVar0]->f_1), 1) || func_120(&((*uParam1)[iVar0]->f_1), 2))
			{
				func_124(&(uParam2->f_3), 8, *uParam3);
			}
			if (func_25(func_113(0)) && !func_123(&(uParam3->f_5), 4))
			{
				bVar2 = true;
			}
			else
			{
				bVar2 = false;
			}
			break;
		default:
			break;
	}
	if (func_32(&(uParam2->f_3), 8))
	{
		if (bVar2)
		{
			func_119(&((*uParam1)[iVar0]->f_1), 11, *uParam3);
			func_125(&(uParam2->f_3), 8, *uParam3);
		}
	}
}

void func_87(var uParam0, var uParam1, var uParam2)
{
	if (func_38(&(uParam1->f_7.f_2.f_2), 1024))
	{
		return;
	}
	iVar0 = uParam1->f_7.f_2.f_1;
	switch (uParam0->f_4[iVar0]->f_3)
	{
		case 5:
		case 7:
		case 8:
		case 9:
			func_126(*uParam2, 4);
			break;
		default:
			func_127(*uParam2, 4);
			break;
	}
}

void func_88(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_38(&(uParam2->f_7.f_2.f_2), 7168))
	{
		return;
	}
	if (!func_25((*uParam1)[uParam2->f_7.f_2]->f_5))
	{
		(*uParam1)[uParam2->f_7.f_2]->f_5 = { func_73(*uParam3, &(uParam0->f_4[uParam2->f_7.f_2.f_1])) };
		return;
	}
	if (!func_62((*uParam1)[uParam2->f_7.f_2]->f_5, func_73(*uParam3, &(uParam0->f_4[uParam2->f_7.f_2.f_1]))))
	{
		(*uParam1)[uParam2->f_7.f_2]->f_5 = { func_73(*uParam3, &(uParam0->f_4[uParam2->f_7.f_2.f_1])) };
		return;
	}
}

void func_89(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0)[uParam1->f_7.f_2]->f_4 != func_128(*uParam2)
	{
		(*uParam0)[uParam1->f_7.f_2]->f_4 = func_128(*uParam2);
	}
}

bool func_90(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_91(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_106(iParam4))
	{
		return;
	}
	switch (uParam3->f_4)
	{
		case 0:
			break;
		case -1125105727:
			func_129(uParam0, uParam1, uParam2, uParam3);
			break;
		case -1683328900:
			func_130(uParam0, uParam1, uParam2, uParam3);
			break;
		case -800238780:
			func_131(uParam0, uParam1, uParam2, uParam3);
			break;
		case 1015970717:
			func_132(uParam0, uParam1, uParam2, uParam3);
			break;
		case -323664079:
			func_133(uParam0, uParam1, uParam2, uParam3);
			break;
		default:
			break;
	}
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_106(iParam4))
	{
		return;
	}
	switch (func_134(iParam4))
	{
		case 0:
			break;
		case -1125105727:
			func_135(uParam0, uParam1, uParam2, uParam3);
			break;
		case -1683328900:
			func_136(uParam0, uParam1, uParam2, uParam3);
			break;
		case -800238780:
			func_137(uParam0, uParam1, uParam2, uParam3);
			break;
		case 1015970717:
			func_138(uParam0, uParam1, uParam2, uParam3);
			break;
		case -323664079:
			func_139(uParam0, uParam1, uParam2, uParam3);
			break;
		default:
			break;
	}
}

int func_93(int iParam0, int iParam1)
{
	return Global_1120070->f_8461[iParam0][func_140(iParam1, 1)];
}

bool func_94(int iParam0)
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

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_94(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_141(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_142(iVar0);
	*uParam0 = 0;
}

void func_96(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

void func_97(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_14 = iParam1;
}

void func_98(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_12 = iParam1;
}

void func_99(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_11 = iParam1;
}

void func_100(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_143() == -1)
	{
		return;
	}
	if (func_143() != iParam0)
	{
		return;
	}
	Global_1130634->f_293 = 0;
	Global_1130634->f_293.f_1 = -1;
}

void func_101(var uParam0)
{
	if (does_cam_exist(uParam0->f_131.f_5))
	{
		set_cam_active(uParam0->f_131.f_5, false);
		bVar0 = true;
	}
	if (does_cam_exist(uParam0->f_131))
	{
		set_cam_active(uParam0->f_131, false);
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 <= (3 - 1))
	{
		if (does_cam_exist(&(uParam0->f_131.f_1[iVar1])))
		{
			set_cam_active(&(uParam0->f_131.f_1[iVar1]), false);
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
}

void func_102(var uParam0)
{
	if (does_cam_exist(uParam0->f_131))
	{
		if (is_cam_rendering(uParam0->f_131))
		{
			bVar0 = true;
		}
		destroy_cam(uParam0->f_131, false);
	}
	if (does_cam_exist(uParam0->f_131.f_5))
	{
		if (is_cam_rendering(uParam0->f_131.f_5))
		{
			bVar0 = true;
		}
		destroy_cam(uParam0->f_131.f_5, false);
	}
	iVar1 = 0;
	while (iVar1 <= (3 - 1))
	{
		if (does_cam_exist(&(uParam0->f_131.f_1[iVar1])))
		{
			if (is_cam_rendering(&(uParam0->f_131.f_1[iVar1])))
			{
				bVar0 = true;
			}
			destroy_cam(&(uParam0->f_131.f_1[iVar1]), false);
		}
		iVar1++;
	}
	if (bVar0)
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0->f_99.f_11 && iParam1) != 0;
}

void func_104(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_99.f_11 = (uParam0->f_99.f_11 - (uParam0->f_99.f_11 && iParam2));
}

void func_105(int iParam0, struct<2> Param1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	func_144(iParam0, Param1);
}

bool func_106(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

struct<2> func_107()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

struct<2> func_108(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_16;
}

void func_109(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_110()
{
	return Global_1071686->f_28448[28]->f_3;
}

bool func_111(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

int func_112(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

struct<2> func_113(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case 130824026:
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case -1239926065:
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_115(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

var func_116(struct<2> Param0)
{
	uVar0 = func_145(Param0, 0);
	return uVar0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_120(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_121(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_122(var uParam0, var uParam1)
{
	iVar0 = func_146(uParam0->f_7.f_2.f_9, 0, 1, 0);
	if (((iVar0 == 0 || iVar0 == -1569615261) || iVar0 == -1016714371) || iVar0 == 332793555)
	{
		return false;
	}
	if (is_ped_in_combat(uParam0->f_7.f_2.f_9, 0))
	{
		return false;
	}
	if (func_147(uParam0))
	{
		return false;
	}
	if (!func_148(uParam0, uParam1))
	{
		return false;
	}
	if (is_entity_visible(func_93(*uParam1, func_128(*uParam1))))
	{
		if (!func_149(uParam1->f_1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return func_150(uParam1);
}

bool func_123(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_124(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_125(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 || iParam1);
}

void func_127(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 - ((*Global_1120070)[iParam0]->f_21 && iParam1));
}

int func_128(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_10;
}

void func_129(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (func_151(uParam0, uParam3))
			{
				func_152(uParam0, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_153(uParam0, uParam3))
			{
				func_152(uParam0, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_154(uParam0, uParam1, uParam2, uParam3))
			{
				func_14(&(uParam0->f_3), 1, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (func_155(uParam0, uParam3))
			{
				func_152(uParam0, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_156(uParam0, uParam3))
			{
				func_152(uParam0, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_157(uParam0, uParam1, uParam2, uParam3))
			{
				func_14(&(uParam0->f_3), 1, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_131(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (func_158(uParam0, uParam3))
			{
				func_152(uParam0, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_159(uParam0, uParam3))
			{
				func_152(uParam0, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_160(uParam0, uParam1, uParam2, uParam3))
			{
				func_14(&(uParam0->f_3), 1, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (func_161(uParam0, uParam3))
			{
				func_152(uParam0, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_162(uParam0, uParam3))
			{
				func_152(uParam0, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_163(uParam0, uParam1, uParam2, uParam3))
			{
				func_14(&(uParam0->f_3), 1, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_133(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (func_164(uParam0, uParam3))
			{
				func_152(uParam0, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_165(uParam0, uParam3))
			{
				func_152(uParam0, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_166(uParam0, uParam1, uParam2, uParam3))
			{
				func_14(&(uParam0->f_3), 1, *uParam3);
			}
			break;
		default:
			break;
	}
}

int func_134(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

void func_135(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_167(uParam2, uParam3))
			{
				func_168(uParam2, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_169(uParam0, uParam2, uParam3))
			{
				func_168(uParam2, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_170(uParam0, uParam1, uParam2, uParam3))
			{
				func_124(&(uParam2->f_3), 2, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_136(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_171(uParam2, uParam3))
			{
				func_168(uParam2, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_172(uParam0, uParam2, uParam3))
			{
				func_168(uParam2, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_173(uParam0, uParam1, uParam2, uParam3))
			{
				func_124(&(uParam2->f_3), 2, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_137(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_174(uParam2, uParam3))
			{
				func_168(uParam2, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_175(uParam0, uParam2, uParam3))
			{
				func_168(uParam2, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_176(uParam0, uParam1, uParam2, uParam3))
			{
				func_124(&(uParam2->f_3), 2, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_138(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_177(uParam2, uParam3))
			{
				func_168(uParam2, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_178(uParam0, uParam2, uParam3))
			{
				func_168(uParam2, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_179(uParam0, uParam1, uParam2, uParam3))
			{
				func_124(&(uParam2->f_3), 2, *uParam3);
			}
			break;
		default:
			break;
	}
}

void func_139(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (func_180(uParam2, uParam3))
			{
				func_168(uParam2, 1, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 1:
			if (func_181(uParam0, uParam2, uParam3))
			{
				func_168(uParam2, 2, *uParam3, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_182(uParam0, uParam1, uParam2, uParam3))
			{
				func_124(&(uParam2->f_3), 2, *uParam3);
			}
			break;
		default:
			break;
	}
}

int func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -910931556:
			return 2;
		case 303108068:
			return 1;
		case 493038497:
			return 0;
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

int func_141(int iParam0)
{
	return iParam0;
}

void func_142(int iParam0)
{
	if (!func_183(iParam0))
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

int func_143()
{
	return Global_1130634->f_293.f_1;
}

void func_144(int iParam0, struct<2> Param1)
{
	(*Global_1118808)[iParam0]->f_16 = { Param1 };
}

int func_145(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return iParam2;
	}
	if (!stat_id_get_int(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

int func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_147(var uParam0)
{
	return func_184(uParam0->f_7, 1, 0, 1);
}

bool func_148(var uParam0, var uParam1)
{
	if (!func_25(uParam0->f_7.f_2.f_25))
	{
		return true;
	}
	if (!func_185() && !func_31(*uParam1, 1))
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0)
{
	return func_186(iParam0, 1);
}

int func_150(var uParam0)
{
	if (!func_187(*uParam0, 2))
	{
		return 0;
	}
	if (uParam0->f_4 == -323664079)
	{
		return 0;
	}
	return 1;
}

bool func_151(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_188(uParam1))
			{
				func_189(&(uParam0->f_1), 1, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

void func_152(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

bool func_153(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 1;
			break;
		case 1:
			return true;
		default:
			break;
	}
	func_190(uParam0, uParam1, iVar1, iVar0);
	return false;
}

bool func_154(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_191(uParam0, uParam1, uParam2, uParam3);
	return func_192(uParam0);
}

bool func_155(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_188(uParam1))
			{
				func_189(&(uParam0->f_1), 1, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_156(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 1;
			break;
		case 1:
			return true;
		default:
			break;
	}
	func_190(uParam0, uParam1, iVar1, iVar0);
	return false;
}

bool func_157(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_191(uParam0, uParam1, uParam2, uParam3);
	return func_192(uParam0);
}

bool func_158(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_188(uParam1))
			{
				func_189(&(uParam0->f_1), 1, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_159(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 1;
			break;
		case 1:
			return true;
		default:
			break;
	}
	func_190(uParam0, uParam1, iVar1, iVar0);
	return false;
}

bool func_160(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_191(uParam0, uParam1, uParam2, uParam3);
	return func_192(uParam0);
}

bool func_161(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_188(uParam1))
			{
				func_189(&(uParam0->f_1), 1, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_162(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 1;
			break;
		case 1:
			return true;
		default:
			break;
	}
	func_190(uParam0, uParam1, iVar1, iVar0);
	return false;
}

bool func_163(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_191(uParam0, uParam1, uParam2, uParam3);
	return func_192(uParam0);
}

bool func_164(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_188(uParam1))
			{
				func_189(&(uParam0->f_1), 1, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_165(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 1;
			break;
		case 1:
			return true;
		default:
			break;
	}
	func_190(uParam0, uParam1, iVar1, iVar0);
	return false;
}

bool func_166(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_191(uParam0, uParam1, uParam2, uParam3);
	return func_192(uParam0);
}

bool func_167(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_193(uParam0, uParam1))
			{
				func_194(&(uParam0->f_1), 2, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

void func_168(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

bool func_169(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 < 1)
	{
		return false;
	}
	switch (uParam1->f_2)
	{
		case 0:
			return true;
		default:
			break;
	}
	return false;
}

bool func_170(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_195(uParam2, uParam3);
	func_196(uParam1, uParam2, uParam3);
	func_197(uParam0, uParam1, uParam2, uParam3);
	func_198(uParam1, uParam2);
	func_199(uParam2, uParam3);
	return func_192(uParam0);
}

bool func_171(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_193(uParam0, uParam1))
			{
				func_194(&(uParam0->f_1), 2, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_172(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 < 1)
	{
		return false;
	}
	switch (uParam1->f_2)
	{
		case 0:
			return true;
		default:
			break;
	}
	return false;
}

bool func_173(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_195(uParam2, uParam3);
	func_196(uParam1, uParam2, uParam3);
	func_197(uParam0, uParam1, uParam2, uParam3);
	func_198(uParam1, uParam2);
	func_199(uParam2, uParam3);
	return func_192(uParam0);
}

bool func_174(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_193(uParam0, uParam1))
			{
				func_194(&(uParam0->f_1), 2, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_175(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 < 1)
	{
		return false;
	}
	switch (uParam1->f_2)
	{
		case 0:
			return true;
		default:
			break;
	}
	return false;
}

bool func_176(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_195(uParam2, uParam3);
	func_196(uParam1, uParam2, uParam3);
	func_197(uParam0, uParam1, uParam2, uParam3);
	func_198(uParam1, uParam2);
	func_199(uParam2, uParam3);
	return func_192(uParam0);
}

bool func_177(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_193(uParam0, uParam1))
			{
				func_194(&(uParam0->f_1), 2, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_178(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 < 1)
	{
		return false;
	}
	switch (uParam1->f_2)
	{
		case 0:
			return true;
		default:
			break;
	}
	return false;
}

bool func_179(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_195(uParam2, uParam3);
	func_196(uParam1, uParam2, uParam3);
	func_197(uParam0, uParam1, uParam2, uParam3);
	func_198(uParam1, uParam2);
	func_199(uParam2, uParam3);
	return func_192(uParam0);
}

bool func_180(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (func_193(uParam0, uParam1))
			{
				func_194(&(uParam0->f_1), 2, *uParam1, uParam1->f_3, uParam1->f_4);
			}
			break;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_181(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 < 1)
	{
		return false;
	}
	switch (uParam1->f_2)
	{
		case 0:
			return true;
		default:
			break;
	}
	return false;
}

bool func_182(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_195(uParam2, uParam3);
	func_196(uParam1, uParam2, uParam3);
	func_197(uParam0, uParam1, uParam2, uParam3);
	func_198(uParam1, uParam2);
	func_199(uParam2, uParam3);
	return func_192(uParam0);
}

bool func_183(int iParam0)
{
	return func_200(iParam0, 2);
}

int func_184(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_201(bParam1, bParam2, bParam3);
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

bool func_185()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_186(int iParam0, int iParam1)
{
	return func_202(Global_1109804->f_6371.f_3[iParam1], iParam0, 3);
}

bool func_187(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_19 && iParam1) != 0;
}

bool func_188(var uParam0)
{
	func_203(*uParam0, 1756071093);
	return true;
}

void func_189(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

void func_190(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			func_204(&(uParam0->f_201));
			func_205(&(uParam0->f_201));
			func_206(&(uParam0->f_2), iParam3, *uParam1, uParam1->f_3, uParam1->f_4);
			break;
		case 1:
			func_14(&(uParam0->f_3), 1, *uParam1);
			break;
		case 2:
			func_204(&(uParam0->f_201));
			func_207(&(uParam0->f_201));
			break;
		case 3:
			func_208(&(uParam0->f_201));
			break;
		default:
			func_14(&(uParam0->f_3), 1, *uParam1);
			break;
	}
}

void func_191(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar1 = &uParam2->f_240[1];
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = ((iVar1 + iVar0) % 32);
		iVar3 = func_209(iVar2);
		if (iVar3 == 0)
		{
			if (func_210(uParam0, iVar2))
			{
				func_211(uParam0, iVar2, *uParam3);
			}
			Jump @148; //curOff = 70
		}
		else if (_0x93a91a351a07360e(iVar3))
		{
			func_212(uParam0, uParam3, iVar2);
			if (func_13(&(uParam0->f_3), 4))
			{
				func_213(uParam0, uParam1, uParam2, uParam3, iVar2, iVar3);
			}
			else
			{
				func_214(uParam0, uParam1, uParam2, uParam3, iVar2, iVar3);
			}
		}
	else
	{
		}
		iVar0++;
	}
	uParam2->f_240[1] = (iVar2 + 1 % 32);
}

bool func_192(var uParam0)
{
	return func_13(&(uParam0->f_3), 1);
}

bool func_193(var uParam0, var uParam1)
{
	if (!func_215(&Var0, func_18(*uParam1)))
	{
		return false;
	}
	if (!func_216(Var0, uParam0, uParam1))
	{
		return false;
	}
	if (!func_217(Var0, uParam0, uParam1))
	{
		return false;
	}
	if (!func_218(Var0, uParam0, uParam1))
	{
		return false;
	}
	return true;
}

void func_194(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

void func_195(var uParam0, var uParam1)
{
	if (func_31(*uParam1, 2))
	{
		func_125(&(uParam0->f_3), 4, *uParam1);
		func_125(&(uParam0->f_3), 2, *uParam1);
		return;
	}
	if (func_219(uParam0->f_7.f_2.f_10))
	{
		return;
	}
	fVar0 = func_221(uParam0->f_7.f_2.f_10, func_220(uParam1->f_1));
	if (func_32(&(uParam0->f_3), 4))
	{
		if (fVar0 > uParam0->f_67)
		{
			func_124(&(uParam0->f_3), 2, *uParam1);
		}
		else if (fVar0 > uParam0->f_67.f_1)
		{
			if ((uParam0->f_7.f_2.f_21 - uParam0->f_208.f_30) > 10000)
			{
				func_124(&(uParam0->f_3), 2, *uParam1);
			}
		}
		else
		{
			func_125(&(uParam0->f_3), 4, *uParam1);
		}
	}
	else if (fVar0 > uParam0->f_67.f_1)
	{
		uParam0->f_208.f_30 = uParam0->f_7.f_2.f_21;
		func_124(&(uParam0->f_3), 4, *uParam1);
	}
}

void func_196(var uParam0, var uParam1, var uParam2)
{
	iVar0 = &uParam1->f_240.f_5[1];
	switch (iVar0)
	{
		case 0:
			if (func_222(uParam2))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 1:
			if (func_226(uParam1, uParam2))
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 2:
			if (func_147(uParam1))
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 3:
			func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			break;
		case 4:
			if (func_123(&(uParam2->f_5), 4))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else if (func_227(uParam1))
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 5:
			if (func_228(uParam1, uParam2))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
				func_229(uParam1, uParam2, 17);
			}
			else
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
				if (func_187(*uParam2, 4))
				{
					func_230(uParam1, uParam2);
				}
			}
			break;
		case 6:
			if (func_123(&(uParam2->f_5), 4))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else if (func_231())
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 7:
			if (func_123(&(uParam2->f_5), 4))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else if (func_232(uParam1, uParam2))
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		case 8:
			if (func_233(uParam1, uParam2))
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
				if (func_187(*uParam2, 2))
				{
					func_234(uParam1, uParam2);
				}
			}
			break;
		case 9:
			if (func_235(uParam2))
			{
				func_225(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			else
			{
				func_224(&(uParam1->f_4), func_223(iVar0), *uParam2);
			}
			break;
		default:
			break;
	}
	iVar0++;
	if (iVar0 > 9)
	{
		iVar0 = 0;
	}
	uParam1->f_240.f_5[1] = iVar0;
	if (uParam1->f_4 == 0)
	{
		func_236((*uParam0)[uParam1->f_7.f_2], 4096, *uParam2);
	}
	else
	{
		func_237((*uParam0)[uParam1->f_7.f_2], 4096, *uParam2);
	}
}

void func_197(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_238(uParam2, uParam3))
	{
		if (func_239(uParam2, uParam3))
		{
			if (!func_240(uParam0, uParam1, uParam2, uParam3))
			{
				func_96(&(uParam2->f_99.f_18), 0, *uParam3, uParam3->f_3, uParam3->f_4);
			}
		}
		if (func_241(uParam2, uParam3))
		{
			func_242(uParam2, uParam3);
		}
	}
	else
	{
		func_43(uParam2, uParam3);
		func_243(uParam2);
		func_244(uParam2, uParam3);
		if (uParam2->f_99.f_18 != 0)
		{
			func_96(&(uParam2->f_99.f_18), 0, *uParam3, uParam3->f_3, uParam3->f_4);
		}
	}
	bVar1 = true;
	while (bVar1)
	{
		bVar1 = false;
		func_245(uParam2, uParam3);
		switch (uParam2->f_99.f_18)
		{
			case 0:
				bVar2 = func_246(uParam2, uParam3, &iVar0);
				break;
			case 1:
				bVar2 = func_247(uParam2, uParam3, &iVar0);
				break;
			case 4:
				bVar2 = func_248(uParam0, uParam1, uParam2, uParam3, &iVar0);
				break;
			case 5:
				bVar2 = func_249(uParam1, uParam2, uParam3, &iVar0);
				break;
			case 3:
				bVar2 = func_250(uParam1, uParam2, uParam3, &iVar0);
				break;
			case 2:
				bVar2 = func_251(uParam2, uParam3, &iVar0);
				break;
			case 6:
				bVar2 = func_252(uParam0, uParam1, uParam2, uParam3, &iVar0);
				break;
			case 7:
				bVar2 = func_253(uParam1, uParam2, uParam3, &iVar0);
				break;
			case 8:
				bVar2 = func_254(uParam2, uParam3, &iVar0);
				break;
			case 9:
				bVar2 = func_255(uParam2, uParam3, &iVar0, 1);
				break;
			case 10:
				bVar2 = func_256(uParam1, uParam2, uParam3, &iVar0);
				break;
			case 18:
				bVar2 = func_257(uParam2, uParam3, &iVar0);
				break;
			case 11:
				bVar2 = func_258(uParam2, uParam3, &iVar0);
				break;
			case 12:
				bVar2 = func_259(uParam2, uParam3, &iVar0);
				break;
			case 13:
				bVar2 = func_260(uParam2, uParam3, &iVar0);
				break;
			case 15:
				bVar2 = func_261(uParam2, uParam3, &iVar0, 1);
				break;
			case 14:
				bVar2 = func_262(uParam2, uParam3, &iVar0);
				break;
			case 16:
				bVar2 = func_263(uParam2, uParam3, &iVar0, 1);
				break;
			case 17:
				bVar2 = func_264(uParam2, uParam3, &iVar0);
				break;
			default:
				break;
		}
		if (bVar2)
		{
			func_96(&(uParam2->f_99.f_18), iVar0, *uParam3, uParam3->f_3, uParam3->f_4);
			bVar1 = func_265(uParam2->f_99.f_18);
		}
	}
}

void func_198(var uParam0, var uParam1)
{
	uParam1->f_240.f_5[4] = (&uParam1->f_240.f_5[4] + 1 % 90);
}

void func_199(var uParam0, var uParam1)
{
	if (func_31(*uParam1, 128))
	{
		if (func_266(uParam0, uParam1, 0, 0))
		{
			func_127(*uParam1, 128);
		}
	}
}

bool func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_201(bool bParam0, bool bParam1, bool bParam2)
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

bool func_202(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_203(int iParam0, int iParam1)
{
	if (!func_268(&Var0, func_18(iParam0), func_267(iParam0)))
	{
		return;
	}
	if (!func_269(&Var0, 0))
	{
		return;
	}
	iVar5 = func_270(Var0, 416600242);
	if (iVar5 <= 0)
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 <= (iVar5 - 1))
	{
		func_271(Var0, iVar6, iParam1, iParam0);
		iVar6++;
	}
}

void func_204(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_205(var uParam0)
{
	*uParam0 = 0;
}

void func_206(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = iParam1;
}

void func_207(var uParam0)
{
	*uParam0++;
}

void func_208(var uParam0)
{
	uParam0->f_1++;
}

int func_209(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_112(iParam0);
}

bool func_210(var uParam0, int iParam1)
{
	return &uParam0->f_4[iParam1] != -1;
}

void func_211(var uParam0, int iParam1, var uParam2)
{
	iVar0 = &uParam0->f_4[iParam1];
	if (iVar0 != -1)
	{
		func_272(uParam0, iVar0, uParam2);
	}
	Var1 = -1;
	Var1.f_1 = -15;
	Var1.f_5 = 255;
	*uParam0->f_4[iParam1] = { Var1 };
}

void func_212(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_4[iParam2]->f_3 == 0)
	{
		func_273(&(uParam0->f_4[iParam2]->f_3), 1, *uParam1, iParam2, uParam1->f_3, uParam1->f_4);
	}
}

void func_213(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	Var0 = { func_69(uParam1, iParam5) };
	switch (uParam0->f_4[iParam4]->f_3)
	{
		case 1:
			bVar7 = func_274(uParam0, uParam1, uParam3, iParam4, iParam5, &Var0, &iVar6);
			break;
		case 3:
			bVar7 = func_275(uParam0, uParam1, uParam2, uParam3, iParam4, iParam5, &Var0, &iVar6);
			break;
		case 2:
			bVar7 = func_276(uParam0, uParam3, iParam4, iParam5, &Var0, &iVar6);
			break;
		case 4:
			bVar7 = func_277(uParam0, uParam3, iParam4, iParam5, &Var0, &iVar6);
			break;
		case 5:
			bVar7 = func_278(uParam0, uParam1, uParam2, uParam3, iParam4, iParam5, &Var0, &iVar6);
			break;
		case 6:
			bVar7 = func_279(uParam0, uParam3, iParam4, &iVar6);
			break;
		case 7:
			bVar7 = func_280(&Var0, &iVar6);
			break;
		case 8:
			bVar7 = func_281(uParam0, uParam3, iParam4, &iVar6);
			break;
		case 9:
			bVar7 = func_282(uParam0, uParam3, iParam4, &iVar6);
			break;
		case 10:
			bVar7 = func_283(uParam0, uParam3, iParam4, iParam5, &iVar6);
			break;
		case 11:
			bVar7 = func_284(uParam0, uParam3, iParam4, iParam5, &iVar6);
			break;
		default:
			break;
	}
	if (bVar7)
	{
		func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
	}
}

void func_214(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	Var0 = { func_69(uParam1, iParam5) };
	switch (uParam0->f_4[iParam4]->f_3)
	{
		case 0:
			break;
		case 1:
			if (func_285(uParam0, uParam1, uParam3, iParam4, iParam5, &Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 2:
			if (func_286(uParam0, uParam3, iParam4, iParam5, &Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 3:
			if (func_287(uParam0, uParam1, uParam2, uParam3, iParam4, iParam5, &Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 4:
			if (func_288(uParam0, uParam3, iParam4, iParam5, &Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 5:
			if (func_289(uParam0, uParam1, uParam2, uParam3, iParam4, iParam5, &Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 6:
			if (func_279(uParam0, uParam3, iParam4, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 7:
			if (func_280(&Var0, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 8:
			if (func_281(uParam0, uParam3, iParam4, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 9:
			if (func_282(uParam0, uParam3, iParam4, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 10:
			if (func_283(uParam0, uParam3, iParam4, iParam5, &iVar6))
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		case 12:
			if (func_290())
			{
				func_273(&(uParam0->f_4[iParam4]->f_3), iVar6, *uParam3, iParam4, uParam3->f_3, uParam3->f_4);
			}
			break;
		default:
			break;
	}
}

bool func_215(var uParam0, int iParam1)
{
	if (!func_291(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = -1782208300;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_216(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_268(&vParam0, func_18(*uParam6), func_267(*uParam6)))
	{
		return false;
	}
	vParam0.f_2 = 1319079466;
	if (!_datafile_get_float(&fVar0, &vParam0))
	{
		return false;
	}
	if (fVar0 <= 0f)
	{
		return false;
	}
	uParam5->f_67 = (fVar0 + 20f);
	uParam5->f_67.f_1 = (fVar0 + 10f);
	return true;
}

bool func_217(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_292(&Param0, func_18(*uParam6), func_77(uParam6->f_2)))
	{
		return false;
	}
	if (!func_293(Param0, uParam5, uParam6))
	{
		return false;
	}
	return true;
}

bool func_218(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_292(&vParam0, func_18(*uParam6), func_77(uParam6->f_2)))
	{
		return false;
	}
	if (!func_294(&vParam0))
	{
		return false;
	}
	vParam0.f_2 = -749877125;
	if (_datafile_get_hash(&iVar0, &vParam0))
	{
		if (iVar0 == 0)
		{
			uParam5->f_67.f_2 = -1530260698;
		}
		else
		{
			uParam5->f_67.f_2 = iVar0;
		}
	}
	else
	{
		uParam5->f_67.f_2 = -1530260698;
	}
	return true;
}

bool func_219(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_220(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return func_295(iParam0);
}

float func_221(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_222(var uParam0)
{
	return func_187(*uParam0, 1);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 128;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 32;
		case 4:
			return 4;
		case 5:
			return 16;
		case 6:
			return 64;
		case 7:
			return 8;
		case 8:
			return 256;
		case 9:
			return 512;
		default:
			break;
	}
	return 0;
}

void func_224(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_225(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_226(var uParam0, var uParam1)
{
	Var0 = { func_296(uParam0->f_7) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	if (func_297(func_134(uParam1->f_2)))
	{
		if (iVar7 > 0)
		{
			return true;
		}
	}
	else if (iVar7 >= Global_1901947->f_166.f_2)
	{
		return true;
	}
	return false;
}

bool func_227(var uParam0)
{
	return func_25(uParam0->f_7.f_2.f_25);
}

bool func_228(var uParam0, var uParam1)
{
	if (func_298(func_134(uParam1->f_2)))
	{
		return func_38(&(uParam0->f_7.f_2.f_2), 512);
	}
	else
	{
		return true;
	}
	return false;
}

void func_229(var uParam0, var uParam1, int iParam2)
{
	if (func_299(uParam0) != iParam2)
	{
		return;
	}
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return;
	}
	if (func_300(uParam0) != iVar0)
	{
		return;
	}
	_0x2f901291ef177b02(iVar0, 0);
	func_301(uParam0, uParam1, 0);
	func_302(uParam0, uParam1, -1);
}

void func_230(var uParam0, var uParam1)
{
	iVar0 = 17;
	if (!func_106(uParam1->f_2))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (!func_304(uParam0, uParam1, uParam1->f_4 != -323664079))
	{
		return;
	}
	if (!func_305(uParam0, uParam1, iVar0, 0))
	{
		return;
	}
	if (func_306())
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

bool func_231()
{
	if (_unlock_is_unlocked(2144034109))
	{
		if (_unlock_is_visible(2144034109))
		{
			return true;
		}
	}
	return false;
}

bool func_232(var uParam0, var uParam1)
{
	if (uParam1->f_4 == -323664079)
	{
		return false;
	}
	return func_310(uParam1->f_2);
}

bool func_233(var uParam0, var uParam1)
{
	if (func_123(&(uParam1->f_5), 4))
	{
		return true;
	}
	if (!func_106(uParam1->f_2))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(uParam0->f_7));
	if (uParam0->f_7 == iVar0)
	{
		iVar1 = func_77(uParam1->f_2);
		return (_unlock_is_unlocked(iVar1) && _unlock_is_visible(iVar1));
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	return func_311(iVar0, uParam1->f_2);
}

void func_234(var uParam0, var uParam1)
{
	iVar0 = 16;
	if (!func_106(uParam1->f_2))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (!func_305(uParam0, uParam1, iVar0, 0))
	{
		return;
	}
	if (func_306())
	{
		return;
	}
	iVar1 = player_id();
	if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar1)) != iVar1)
	{
		return;
	}
	iVar2 = func_307(uParam0, uParam1, iVar0);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = func_308(_create_var_string(0, iVar2), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar3);
}

bool func_235(var uParam0)
{
	if (func_123(&(uParam0->f_5), 4))
	{
		return false;
	}
	switch (uParam0->f_4)
	{
		case -800238780:
		case -323664079:
		case 1015970717:
			return false;
		default:
			break;
	}
	return !func_312(func_77(uParam0->f_2));
}

void func_236(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_237(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_238(var uParam0, var uParam1)
{
	if (!func_187(*uParam1, 4))
	{
		if (uParam1->f_4 == -323664079)
		{
			if (!func_187(*uParam1, 1))
			{
				return false;
			}
			if (func_313(*uParam1) != 1)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!_0x424b17a7dc5c90bc(uParam0->f_7))
	{
		return false;
	}
	if (!is_ped_on_foot(uParam0->f_7.f_2.f_9))
	{
		return false;
	}
	if (func_185())
	{
		if (!_unlock_is_unlocked(func_77(uParam1->f_2)))
		{
			return false;
		}
		if (!_unlock_is_visible(func_77(uParam1->f_2)))
		{
			return false;
		}
	}
	if (uParam1->f_4 == -323664079)
	{
		if (func_314())
		{
			return false;
		}
		iVar0 = _get_scenario_point_type_ped_is_using(uParam0->f_7.f_2.f_9);
		if (iVar0 == -1241981548)
		{
			return false;
		}
	}
	return true;
}

bool func_239(var uParam0, var uParam1)
{
	return uParam0->f_99.f_13 != func_128(*uParam1);
}

bool func_240(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = func_128(*uParam3);
	iVar1 = func_93(*uParam3, iVar0);
	if (uParam2->f_99.f_13 != iVar0)
	{
		func_243(uParam2);
	}
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	iVar3 = _uiprompt_get_group_id_for_target_entity(iVar1);
	switch (uParam3->f_4)
	{
		case -323664079:
			iVar2 = 3;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_EXIT", 814057702, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 0;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_TAKE_POSTER", 1138488863, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 7;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_READ", -69749786, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 4;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_MOVE_RIGHT", 1710877787, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 5;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_MOVE_LEFT", -1384133541, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 6;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_LEGENDARY", -711536720, iVar1, 3, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 2;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_320("GFH_INTERACT_BOUNTY_BOARD", -473983589, get_entity_coords(iVar1, true, false), 10f, 0, 1, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 8;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_ZOOM", 1395223413, iVar1, 3, 0, 0, 0, 3, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			iVar2 = 9;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_320("GFH_PURCHASE_BOUNTY_HUNTING_LICENSE", 1138488863, get_entity_coords(iVar1, true, false), 10f, 3, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -2018976333, 0);
			_uiprompt_set_group(func_316(&(uParam2->f_99[iVar2])), iVar3, 0);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
			}
			else
			{
				return false;
			}
			break;
		default:
			iVar2 = 0;
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_95(uParam2->f_99[iVar2], 1, 1);
			}
			uParam2->f_99[iVar2] = func_315("GFH_ACCEPT_NO_MISSION", -473983589, iVar1, 1, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_321(&(uParam2->f_99[iVar2]), iVar1, 0, 0, -1);
			func_317(&(uParam2->f_99[iVar2]), 10f, 0);
			func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
			func_319(&(uParam2->f_99[iVar2]), 0, 0);
			if (func_94(&(uParam2->f_99[iVar2])))
			{
				func_322(uParam0, uParam1, uParam2, uParam3, 0);
			}
			else
			{
				return false;
			}
			iVar2 = 1;
			if (func_323(uParam3))
			{
				if (func_94(&(uParam2->f_99[iVar2])))
				{
					func_95(uParam2->f_99[iVar2], 1, 1);
				}
				uParam2->f_99[iVar2] = func_315("GFH_GREET_NO_MISSION", -473983589, iVar1, 1, 0, 0, 0, 0, 10f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_321(&(uParam2->f_99[iVar2]), iVar1, 0, 0, -1);
				func_317(&(uParam2->f_99[iVar2]), 10f, 0);
				func_318(&(uParam2->f_99[iVar2]), 0, 0, 1);
				func_319(&(uParam2->f_99[iVar2]), 0, 0);
				if (func_94(&(uParam2->f_99[iVar2])))
				{
					func_324(uParam2, uParam3);
				}
				else
				{
					return false;
				}
			}
			break;
	}
	uParam2->f_99.f_13 = iVar0;
	return true;
}

bool func_241(var uParam0, var uParam1)
{
	return (uParam0->f_99.f_12 != func_128(*uParam1) && uParam1->f_4 != -323664079);
}

int func_242(var uParam0, var uParam1)
{
	iVar0 = func_128(*uParam1);
	iVar1 = func_93(*uParam1, iVar0);
	if (uParam0->f_99.f_12 != 493038497)
	{
		if (iVar0 == uParam0->f_99.f_12)
		{
			return 1;
		}
		else
		{
			func_244(uParam0, uParam1);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	iVar3 = 0;
	switch (uParam1->f_4)
	{
		case -323664079:
			sVar2 = "GEM_BOUNTY_BOARD";
			iVar3 |= 4;
			break;
	}
	_0x870708a6e147a9ad(iVar1, sVar2, 10f, 10f, iVar3, 0, 0, 0, 0, -1);
	switch (uParam1->f_4)
	{
		case -323664079:
			_0xd503d6f0986d58bc(get_object_index_from_entity_index(iVar1), 1162354276);
			break;
	}
	uParam0->f_99.f_12 = iVar0;
	return 1;
}

void func_243(var uParam0)
{
	if (uParam0->f_99.f_13 == 493038497)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_94(&(uParam0->f_99[iVar0])))
		{
			func_95(uParam0->f_99[iVar0], 0, 1);
		}
		iVar0++;
	}
	uParam0->f_99.f_13 = 493038497;
	uParam0->f_99.f_14 = -1;
	uParam0->f_99.f_29 = 0;
	uParam0->f_99.f_31 = -1;
}

int func_244(var uParam0, var uParam1)
{
	if (uParam0->f_99.f_12 == 493038497)
	{
		return 1;
	}
	iVar0 = func_93(*uParam1, uParam0->f_99.f_12);
	if (!does_entity_exist(iVar0))
	{
		return 1;
	}
	_0xe98d55c5983f2509(iVar0);
	uParam0->f_99.f_12 = 493038497;
	uParam0->f_99.f_15 = -1;
	return 1;
}

void func_245(var uParam0, var uParam1)
{
	switch (uParam0->f_99.f_18)
	{
		case 0:
			break;
		case 1:
			switch (uParam1->f_4)
			{
				case -323664079:
					func_325(uParam0);
					func_326(uParam0);
					func_327(uParam0);
					func_328(uParam0);
					func_329(uParam0);
					func_330(uParam0);
					func_331(uParam0);
					func_332(uParam0);
					func_333(uParam0);
					func_334(uParam0);
					func_335(uParam0);
					func_336(uParam0);
					func_337(uParam0);
					func_338(uParam0);
					func_339(uParam0);
					func_340(uParam0);
					break;
				default:
					func_341(uParam0);
					func_342(uParam0, 1);
					func_343(uParam0);
					func_344(uParam0, 1);
					break;
			}
			break;
		case 4:
			func_341(uParam0);
			func_343(uParam0);
			break;
		case 5:
			func_342(uParam0, 1);
			func_344(uParam0, 1);
			break;
		case 3:
			break;
		case 6:
			func_341(uParam0);
			func_342(uParam0, 1);
			func_343(uParam0);
			func_344(uParam0, 1);
			break;
		case 7:
			func_341(uParam0);
			func_342(uParam0, 1);
			func_343(uParam0);
			func_344(uParam0, 1);
			break;
		case 2:
		case 8:
		case 9:
		case 10:
		case 13:
		case 14:
		case 15:
		case 16:
			func_325(uParam0);
			func_326(uParam0);
			func_327(uParam0);
			func_328(uParam0);
			func_329(uParam0);
			func_330(uParam0);
			func_331(uParam0);
			func_332(uParam0);
			func_333(uParam0);
			func_334(uParam0);
			func_335(uParam0);
			func_336(uParam0);
			func_337(uParam0);
			func_338(uParam0);
			func_339(uParam0);
			func_340(uParam0);
			break;
		case 17:
			func_325(uParam0);
			func_327(uParam0);
			func_328(uParam0);
			func_329(uParam0);
			func_330(uParam0);
			func_331(uParam0);
			func_333(uParam0);
			func_335(uParam0);
			func_336(uParam0);
			func_337(uParam0);
			func_338(uParam0);
			func_339(uParam0);
			break;
	}
}

int func_246(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_99.f_13 == 493038497)
	{
		return 0;
	}
	if (uParam1->f_4 != -323664079 && uParam0->f_99.f_12 == 493038497)
	{
		return 0;
	}
	*iParam2 = 1;
	return 1;
}

int func_247(var uParam0, var uParam1, int iParam2)
{
	switch (uParam1->f_4)
	{
		case -323664079:
			if (!func_187(*uParam1, 4))
			{
				return 0;
			}
			func_345(uParam0, uParam1);
			break;
		default:
			if (!func_346(uParam0, uParam1))
			{
				return 0;
			}
			break;
	}
	func_347(uParam0, uParam1);
	*iParam2 = func_348(uParam1);
	return 1;
}

int func_248(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_346(uParam2, uParam3))
	{
		*iParam4 = 1;
		return 1;
	}
	iVar1 = uParam2->f_7.f_2.f_1;
	iVar0 = -1;
	func_322(uParam0, uParam1, uParam2, uParam3, 0);
	if (iVar1 != -1)
	{
		iVar0 = &uParam0->f_4[iVar1];
	}
	if (func_147(uParam2))
	{
		func_349(uParam2, uParam3, 1, 0);
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if (func_185())
	{
		if (func_25(uParam2->f_7.f_2.f_25))
		{
			func_344(uParam2, 1);
			func_342(uParam2, 1);
			func_322(uParam0, uParam1, uParam2, uParam3, 1);
			return 0;
		}
	}
	if (func_226(uParam2, uParam3))
	{
		func_266(uParam2, uParam3, 1, 0);
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if (func_310(uParam3->f_2))
	{
		func_351(uParam2, uParam3);
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if (func_120(&((*uParam1)[participant_id_to_int()]->f_1), 1))
	{
		func_344(uParam2, 1);
		func_342(uParam2, 1);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if (func_352(*uParam3))
	{
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 0);
		return 0;
	}
	if (!func_353(uParam2, uParam3))
	{
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if ((iVar0 == -1 && iVar1 != -1) && uParam0->f_4[iVar1]->f_3 == 6)
	{
		func_354(uParam2, uParam3, uParam0->f_4[iVar1]->f_3);
		func_350(uParam2, 1);
		func_344(uParam2, 1);
		func_322(uParam0, uParam1, uParam2, uParam3, 1);
		return 0;
	}
	if (func_31(*uParam3, 32))
	{
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 0);
		return 0;
	}
	if (uParam0->f_4[iVar1]->f_3 != 5)
	{
		func_354(uParam2, uParam3, uParam0->f_4[iVar1]->f_3);
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 0);
		return 0;
	}
	if (!func_355(uParam2, uParam3))
	{
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 0);
		return 0;
	}
	if (!func_356(uParam0, uParam1, uParam2, uParam3))
	{
		func_350(uParam2, 1);
		func_344(uParam2, 0);
		func_322(uParam0, uParam1, uParam2, uParam3, 0);
		return 0;
	}
	func_350(uParam2, 1);
	func_357(uParam2, 1);
	func_358(uParam2, uParam3);
	func_229(uParam2, uParam3, 18);
	func_359(uParam2, uParam3);
	func_360(uParam0, uParam2, uParam3);
	if (uParam2->f_7.f_2.f_14 == 1 && !func_361(*uParam3, iVar0, -890716772))
	{
		func_362(uParam2, uParam3);
	}
	func_363(uParam2, uParam3, iVar0);
	if (func_94(&(uParam2->f_99[0])))
	{
		if (func_364(&(uParam2->f_99[0]), 0))
		{
			*iParam4 = 6;
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_346(uParam1, uParam2))
	{
		*iParam3 = 1;
		return 1;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_4 = 10;
	Var1.f_15 = 4;
	Var1.f_15.f_5 = 4;
	Var1.f_25 = 1;
	Var1.f_28 = 2;
	Var1.f_28.f_1 = -1;
	Var1.f_28.f_1.f_1 = -1;
	Var1.f_31 = 493038497;
	Var1.f_31.f_1 = 493038497;
	Var34 = 3;
	iVar0 = func_365(*uParam2);
	func_324(uParam1, uParam2);
	if (!func_353(uParam1, uParam2))
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_352(*uParam2))
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_31(*uParam2, 64))
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_185())
	{
		if (func_25(uParam1->f_7.f_2.f_25))
		{
			func_343(uParam1);
			func_341(uParam1);
			return 0;
		}
	}
	if (func_120(&((*uParam0)[participant_id_to_int()]->f_1), 1))
	{
		func_343(uParam1);
		func_341(uParam1);
		return 0;
	}
	if (func_310(uParam2->f_2))
	{
		func_351(uParam1, uParam2);
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_147(uParam1))
	{
		func_349(uParam1, uParam2, 1, 0);
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_226(uParam1, uParam2))
	{
		func_266(uParam1, uParam2, 1, 0);
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (iVar0 == -1)
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (func_31(*uParam2, 32))
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	if (!func_355(uParam1, uParam2))
	{
		func_343(uParam1);
		func_366(uParam1);
		return 0;
	}
	Var1 = { func_367(*uParam2, iVar0) };
	Var34 = { func_368(*uParam2, uParam1->f_7.f_2.f_24) };
	iVar39 = 536877072;
	if (func_369(&Var1, iVar0, &Var34, uParam1->f_7.f_2.f_13, uParam1->f_7.f_2.f_1, uParam2->f_1, &iVar38, iVar39, -1))
	{
		switch (iVar38)
		{
			case 3:
			case 4:
			case 39:
			case 40:
				func_343(uParam1);
				func_366(uParam1);
				func_370(uParam1, uParam2, &Var1);
				func_372(uParam2->f_1, uParam2->f_2, -1323853848, func_371(uParam2), Var1, 1);
				return 0;
			case 25:
				func_373(uParam1, uParam2);
				func_343(uParam1);
				func_366(uParam1);
				return 0;
			case 44:
				func_343(uParam1);
				func_366(uParam1);
				func_374(uParam1, uParam2);
				return 0;
			default:
				break;
		}
	}
	if (uParam1->f_7.f_2.f_14 == 1 && !func_361(*uParam2, iVar0, -890716772))
	{
		func_362(uParam1, uParam2);
	}
	func_366(uParam1);
	func_375(uParam1);
	func_358(uParam1, uParam2);
	if (!func_364(&(uParam1->f_99[1]), 0))
	{
		return 0;
	}
	*iParam3 = 7;
	return 1;
}

int func_250(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (func_313(*uParam2))
	{
		case 0:
			func_328(uParam1);
			func_326(uParam1);
			func_329(uParam1);
			func_330(uParam1);
			func_327(uParam1);
			func_331(uParam1);
			func_332(uParam1);
			func_336(uParam1);
			func_334(uParam1);
			func_337(uParam1);
			func_338(uParam1);
			func_335(uParam1);
			func_339(uParam1);
			func_340(uParam1);
			if (!func_187(*uParam2, 4))
			{
				*iParam3 = 1;
				return 1;
			}
			if (is_ped_in_combat(get_player_ped(player_id()), 0))
			{
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (_0xec7e480ff8bd0bed(get_player_ped(player_id())))
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_314())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_377())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			iVar0 = func_378(uParam2);
			if (iVar0 == -1)
			{
				if (!func_379() || func_380())
				{
					func_351(uParam1, uParam2);
					func_325(uParam1);
					func_333(uParam1);
					return 0;
				}
			}
			if (!func_381())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (!func_353(uParam1, uParam2))
			{
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_185())
			{
				if (func_25(uParam1->f_7.f_2.f_25))
				{
					func_376(uParam1);
					func_333(uParam1);
					return 0;
				}
			}
			if (func_120(&((*uParam0)[participant_id_to_int()]->f_1), 1))
			{
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_147(uParam1))
			{
				func_349(uParam1, uParam2, 0, 1);
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_226(uParam1, uParam2))
			{
				func_266(uParam1, uParam2, 0, 1);
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_382())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_383())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_22() == uParam2->f_1)
			{
				func_384(uParam1, uParam2);
				func_376(uParam1);
				func_333(uParam1);
				return 0;
			}
			func_376(uParam1);
			func_385(uParam1);
			if (func_386(&(uParam1->f_99[2]), 0))
			{
				func_387(*uParam2, iVar0);
				func_388(uParam1);
				*iParam3 = 8;
				return 1;
			}
			break;
		case 1:
			_0x1c38c3577901af1f();
			func_325(uParam1);
			func_333(uParam1);
			func_388(uParam1);
			if (func_382())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			if (func_383())
			{
				func_325(uParam1);
				func_333(uParam1);
				return 0;
			}
			switch (uParam1->f_99.f_29)
			{
				case 0:
					return func_389(uParam1, uParam2, iParam3);
				case 1:
					return func_390(uParam0, uParam1, uParam2, iParam3);
				default:
					break;
			}
			return 0;
		}

int func_251(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	if (func_382())
	{
		func_391(uParam0, uParam1, 0, 0);
		func_392(uParam0, 0);
		func_100(uParam1->f_1);
		func_97(*uParam1, 0);
		func_45(uParam0, uParam1);
		func_46(uParam0, uParam1);
		func_393(-1);
		*iParam2 = 3;
		return 1;
	}
	if ((get_game_timer() - uParam0->f_99.f_28) >= 3000)
	{
		func_391(uParam0, uParam1, 0, 0);
		func_392(uParam0, 0);
		func_100(uParam1->f_1);
		func_97(*uParam1, 0);
		func_45(uParam0, uParam1);
		func_46(uParam0, uParam1);
		func_393(-1);
		*iParam2 = 3;
		return 1;
	}
	return 0;
}

int func_252(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_120(&((*uParam1)[participant_id_to_int()]->f_1), 1))
	{
		func_394(&(uParam2->f_99[0]), 1);
		*iParam4 = 4;
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	Var38.f_1 = -1;
	iVar34 = uParam2->f_7.f_2.f_1;
	if (iVar34 == -1)
	{
		func_394(&(uParam2->f_99[0]), 1);
		*iParam4 = 4;
		return 1;
	}
	iVar33 = &uParam0->f_4[iVar34];
	if (iVar33 == -1)
	{
		func_394(&(uParam2->f_99[0]), 1);
		*iParam4 = 4;
		return 1;
	}
	Var0 = { func_367(*uParam3, iVar33) };
	if (func_185())
	{
		switch (uParam2->f_99.f_13)
		{
			case 303108068:
				iVar36 = 0;
				break;
			case -910931556:
				iVar36 = 1;
				break;
			default:
				break;
		}
	}
	else
	{
		iVar36 = 2;
	}
	if (func_361(*uParam3, iVar33, 1859868723))
	{
		func_395(&uVar37, 2);
	}
	if (func_361(*uParam3, iVar33, 518798111))
	{
		bVar35 = true;
		func_396(uParam3->f_1, uParam3->f_2, uVar37, Var0.f_2, Var0, Var38, 0);
	}
	else
	{
		bVar35 = func_397(&Var0, uParam3->f_2, uParam3->f_1);
	}
	if (!bVar35)
	{
		func_394(&(uParam2->f_99[0]), 1);
		*iParam4 = 4;
		return 1;
	}
	func_398(*uParam3, uParam3->f_1, uParam3->f_2, &(uParam0->f_4[iVar34]), iVar36, Var0, uVar37);
	if (iVar36 != 2)
	{
		func_372(uParam3->f_1, uParam3->f_2, -79578972, func_371(uParam3), Var0, 1);
	}
	_uiprompt_enable_prompt_type_this_frame(6);
	_0xc9caeaeec1256e54(-1249243147);
	func_121(&((*uParam1)[participant_id_to_int()]->f_1), 9, *uParam3);
	func_394(&(uParam2->f_99[0]), 1);
	*iParam4 = 4;
	return 1;
}

int func_253(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_120(&((*uParam0)[participant_id_to_int()]->f_1), 1))
	{
		func_394(&(uParam1->f_99[1]), 1);
		*iParam3 = 5;
		return 1;
	}
	iVar0 = func_365(*uParam2);
	Var2.f_1 = -1;
	if (func_361(*uParam2, iVar0, 1859868723))
	{
		func_395(&uVar1, 2);
	}
	func_398(*uParam2, uParam2->f_1, uParam2->f_2, iVar0, 2, func_73(*uParam2, iVar0), uVar1);
	func_396(uParam2->f_1, uParam2->f_2, uVar1, func_399(*uParam2, iVar0), func_73(*uParam2, iVar0), Var2, 0);
	func_394(&(uParam1->f_99[1]), 1);
	func_121(&((*uParam0)[participant_id_to_int()]->f_1), 9, *uParam2);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0xc9caeaeec1256e54(-1249243147);
	*iParam3 = 5;
	return 1;
}

int func_254(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	_0x4b05b97ba46f419d(0);
	_0x94a3c1b804d291ec(get_player_ped(player_id()), 0, 0, 0, 0);
	_0x775b2ed944e44973(-1777724963, func_400(uParam1->f_1), func_402(func_401(), 0), Global_35);
	func_403(uParam0, uParam1);
	func_404(uParam0, uParam1);
	func_405(uParam1->f_1);
	func_406(uParam0);
	func_97(*uParam1, 1);
	func_394(&(uParam0->f_99[2]), 1);
	func_244(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_255(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	_0x1c38c3577901af1f();
	if (bParam3)
	{
		_0xe8eaff7b41edd291(1921928004, 483933850, 2);
	}
	_0xf78e669fdc202e73(0, 0);
	func_45(uParam0, uParam1);
	func_46(uParam0, uParam1);
	func_392(uParam0, 0);
	func_100(uParam1->f_1);
	func_97(*uParam1, 0);
	func_394(&(uParam0->f_99[3]), 1);
	*iParam2 = 3;
	return 1;
}

int func_256(var uParam0, var uParam1, var uParam2, int iParam3)
{
	_0x1c38c3577901af1f();
	if (func_407(*uParam2) == 2 && func_409(func_408(), 0))
	{
		if (func_410(uParam2, 0))
		{
			_0xe8eaff7b41edd291(-711531040, 483933850, 2);
			uParam1->f_99.f_28 = get_game_timer();
			*iParam3 = 2;
			return 1;
		}
	}
	else
	{
		func_411(uParam0, uParam1, uParam2);
	}
	func_391(uParam1, uParam2, 0, 0);
	func_392(uParam1, 0);
	func_100(uParam2->f_1);
	func_97(*uParam2, 0);
	func_45(uParam1, uParam2);
	func_46(uParam1, uParam2);
	*iParam3 = 3;
	return 1;
}

int func_257(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	if (func_409(func_412(), 1))
	{
		if (func_410(uParam1, 1))
		{
			uParam0->f_99.f_28 = get_game_timer();
			*iParam2 = 2;
			return 1;
		}
	}
	func_393(-1);
	*iParam2 = 3;
	return 1;
}

int func_258(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	func_394(&(uParam0->f_99[4]), 1);
	func_387(*uParam1, func_413(uParam1, 1));
	if (func_414(uParam1))
	{
		_0xe8eaff7b41edd291(1639311733, 483933850, 2);
	}
	else
	{
		_0xe8eaff7b41edd291(1279255015, 483933850, 2);
	}
	func_415(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_259(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	func_394(&(uParam0->f_99[5]), 1);
	func_387(*uParam1, func_413(uParam1, -1));
	if (func_414(uParam1))
	{
		_0xe8eaff7b41edd291(1639311733, 483933850, 2);
	}
	else
	{
		_0xe8eaff7b41edd291(1301921692, 483933850, 2);
	}
	func_415(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_260(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	_0xe8eaff7b41edd291(1155235276, 483933850, 2);
	func_394(&(uParam0->f_99[7]), 1);
	func_99(*uParam1, 1);
	func_415(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_261(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	_0x1c38c3577901af1f();
	if (bParam3)
	{
		_0xe8eaff7b41edd291(1921928004, 483933850, 2);
	}
	func_394(&(uParam0->f_99[3]), 1);
	func_99(*uParam1, 0);
	*iParam2 = 3;
	return 1;
}

int func_262(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	func_394(&(uParam0->f_99[6]), 1);
	func_98(*uParam1, 1);
	func_415(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_263(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	_0x1c38c3577901af1f();
	if (bParam3)
	{
		_0xe8eaff7b41edd291(1921928004, 483933850, 2);
	}
	func_416(uParam0);
	func_394(&(uParam0->f_99[3]), 1);
	func_98(*uParam1, 0);
	*iParam2 = 3;
	return 1;
}

int func_264(var uParam0, var uParam1, int iParam2)
{
	_0x1c38c3577901af1f();
	if (func_417(uParam0))
	{
		if (!func_419(&(uParam0->f_198), 2103384153, 1, 1, func_418(uParam0), -1, 1))
		{
		}
	}
	func_420(uParam0, uParam1);
	func_415(uParam0, uParam1);
	*iParam2 = 3;
	return 1;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_266(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = 14;
	if (!func_106(uParam1->f_2))
	{
		return false;
	}
	if (!func_304(uParam0, uParam1, bParam2))
	{
		return false;
	}
	if (!func_305(uParam0, uParam1, iVar0, 0))
	{
		return false;
	}
	if (bParam2)
	{
		if (!func_421(uParam0, uParam1))
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (!func_187(*uParam1, 4))
		{
			return false;
		}
	}
	if (func_306())
	{
		return false;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return false;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
	return true;
}

var func_267(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_4;
}

bool func_268(var uParam0, int iParam1, var uParam2)
{
	if (!func_422(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 1635370648;
	uParam0->f_3 = uParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_269(var uParam0, int iParam1)
{
	uParam0->f_2 = -690423049;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_270(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

void func_271(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_423(&vParam0, iParam5))
	{
		return;
	}
	vParam0.f_2 = -434046439;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar6 = iVar0;
	if (!func_424(&vParam0, iParam6))
	{
		return;
	}
	vParam0.f_2 = -809702995;
	_datafile_get_bool(&bVar3, &vParam0);
	vParam0.f_2 = -267638862;
	_datafile_get_bool(&bVar4, &vParam0);
	vParam0.f_2 = 1323614307;
	_datafile_get_bool(&uVar5, &vParam0);
	vParam0.f_2 = -1537888061;
	_datafile_get_float(&uVar1, &vParam0);
	vParam0.f_2 = 1417063580;
	_datafile_get_float(&uVar2, &vParam0);
	door_system_set_open_ratio(iVar6, uVar1, uVar5);
	door_system_set_automatic_rate(iVar6, uVar2);
	if (bVar3)
	{
		if (bVar4)
		{
			door_system_set_door_state(iVar6, 2);
		}
		else
		{
			door_system_set_door_state(iVar6, 1);
		}
	}
	else
	{
		door_system_set_door_state(iVar6, 0);
	}
}

void func_272(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	func_425(&(uParam0->f_197), iParam1, 3);
}

void func_273(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	*uParam0 = iParam1;
}

int func_274(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	if (func_426(_0x4be6c13a45cca8ec(iParam4), uParam2->f_2))
	{
		uParam0->f_4[iParam3] = func_428(*uParam2, func_427(iParam3));
		*uParam6 = 9;
		return 1;
	}
	if (func_429(uParam5, 4096))
	{
		*uParam6 = 3;
		return 1;
	}
	if (func_430(&(uParam0->f_4[iParam3]->f_4), 2))
	{
		*uParam6 = 10;
		return 1;
	}
	if (&uParam0->f_4[iParam3] != -1)
	{
		if (func_431(uParam0, &(uParam0->f_4[iParam3]), *uParam2))
		{
			func_272(uParam0, &(uParam0->f_4[iParam3]), *uParam2);
		}
		uParam0->f_4[iParam3] = -1;
	}
	return 0;
}

int func_275(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	if (func_432(iParam4) == -1)
	{
		return 0;
	}
	if (func_430(&(uParam0->f_4[iParam4]->f_4), 1))
	{
		iVar0 = func_433(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4, &(uParam0->f_4[iParam4]));
		func_434(&(uParam0->f_4[iParam4]->f_4), 1, *uParam3);
	}
	else
	{
		iVar0 = func_435(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4);
		if (iVar0 == -1)
		{
			iVar0 = func_433(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4, -1);
		}
	}
	if (iVar0 == -1)
	{
		uParam0->f_4[iParam4]->f_1 = uParam2->f_7.f_2.f_23;
		func_436(&(uParam0->f_4[iParam4]->f_1), 0, 0, 1, 0, 0, 0, 0);
		*uParam7 = 6;
		return 1;
	}
	func_437(uParam0, iVar0, *uParam3);
	uParam0->f_4[iParam4] = iVar0;
	uParam0->f_4[iParam4]->f_1 = uParam2->f_7.f_2.f_23;
	func_436(&(uParam0->f_4[iParam4]->f_1), 0, 0, 0, 1, 0, 0, 0);
	*uParam7 = 2;
	return 1;
}

int func_276(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_429(uParam4, 4096))
	{
		*uParam5 = 1;
		return 1;
	}
	if (&uParam0->f_4[iParam2] == -1)
	{
		*uParam5 = 1;
		return 1;
	}
	if (!func_34(uParam1->f_1))
	{
		*uParam5 = 1;
		return 1;
	}
	Var1 = -1;
	Var1.f_1 = -1;
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
	iVar0 = get_network_time_accurate();
	Var1 = 1;
	Var1.f_2 = 5;
	Var1.f_5 = 0;
	Var1.f_7 = iVar0;
	Var1.f_8 = 1;
	Var1.f_8.f_1 = 2;
	Var1.f_8.f_5.f_2 = iParam3;
	Var1.f_8.f_5.f_6 = { func_73(*uParam1, &(uParam0->f_4[iParam2])) };
	Var1.f_8.f_5.f_4 = uParam1->f_1;
	Var1.f_8.f_5.f_9 = 1;
	func_438(&Var1);
	func_439((*Global_1201051)[&Global_1296859], &Var1, 0, 0, 0, 0, 0);
	func_440(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
	uParam0->f_4[iParam2]->f_2 = iVar0;
	*uParam5 = 4;
	return 1;
}

int func_277(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	Var0.f_2 = iParam3;
	Var0.f_4 = uParam1->f_1;
	iVar25 = func_441(&Var0);
	iVar26 = get_network_time_accurate();
	if (func_442(iVar25))
	{
		Var10 = { func_443(iVar25) };
		if (Var10 == 1)
		{
			if (!func_429(uParam4, 4096))
			{
				*uParam5 = 10;
				return 1;
			}
			uParam0->f_4[iParam2]->f_2 = iVar26;
			*uParam5 = 5;
			return 1;
		}
		else
		{
			func_434(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
			*uParam5 = 2;
			return 1;
		}
	}
	else if (get_time_difference(uParam0->f_4[iParam2]->f_2, iVar26) >= 30000)
	{
		uParam0->f_4[iParam2]->f_2 = iVar26;
		func_272(uParam0, &(uParam0->f_4[iParam2]), *uParam1);
		*uParam5 = 11;
		return 1;
	}
	return 0;
}

int func_278(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	Var33 = 3;
	if (!func_429(uParam6, 4096))
	{
		*uParam7 = 10;
		return 1;
	}
	if (func_444(uParam0->f_4[iParam4]->f_1, 1))
	{
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		*uParam7 = 10;
		return 1;
	}
	Var0 = { func_367(*uParam3, &(uParam0->f_4[iParam4])) };
	Var33 = { func_368(*uParam3, uParam2->f_7.f_2.f_24) };
	iVar38 = 1073742987;
	if (!func_13(&(uParam0->f_3), 4))
	{
		iVar38 |= 4096;
	}
	if (func_369(&Var0, &(uParam0->f_4[iParam4]), &Var33, iParam5, iParam4, uParam3->f_1, &uVar37, iVar38, -1))
	{
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		*uParam7 = 10;
		return 1;
	}
	if (func_120(&(uParam6->f_1), 1))
	{
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		uParam0->f_4[iParam4]->f_2 = get_network_time_accurate();
		if (&uParam0->f_4[iParam4] == -1)
		{
			*uParam7 = 10;
			return 1;
		}
		if (func_361(*uParam3, &(uParam0->f_4[iParam4]), 518798111))
		{
			uParam0->f_4[iParam4]->f_5 = func_445(uParam1, iParam5, 1);
			*uParam7 = 8;
			return 1;
		}
		else
		{
			*uParam7 = 7;
			return 1;
		}
	}
	if (func_446(uParam3->f_2, iParam4))
	{
		*uParam7 = 9;
		return 1;
	}
	if (func_120(&(uParam6->f_1), 2))
	{
		func_440(&(uParam0->f_4[iParam4]->f_4), 1, *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		*uParam7 = 10;
		return 1;
	}
	return 0;
}

bool func_279(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_446(uParam1->f_2, iParam2))
	{
		*iParam3 = 9;
		return true;
	}
	if (func_444(uParam0->f_4[iParam2]->f_1, 1))
	{
		*iParam3 = 1;
		return true;
	}
	return false;
}

bool func_280(var uParam0, int iParam1)
{
	if (func_120(&(uParam0->f_3.f_1), 1))
	{
		*iParam1 = 9;
		return true;
	}
	return false;
}

bool func_281(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = get_network_time_accurate();
	iVar1 = get_time_difference(uParam0->f_4[iParam2]->f_2, iVar0);
	if (func_447(uParam0->f_4[iParam2]->f_5, 64))
	{
		*iParam3 = 9;
		return true;
	}
	return false;
}

bool func_282(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_446(uParam1->f_2, iParam2))
	{
		return false;
	}
	iVar0 = &uParam0->f_4[iParam2];
	if (iVar0 != -1)
	{
		func_272(uParam0, iVar0, *uParam1);
	}
	*iParam3 = 1;
	return true;
}

bool func_283(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	if (func_430(&(uParam0->f_4[iParam2]->f_4), 2))
	{
		func_448(uParam1->f_1, iParam3);
		uParam0->f_4[iParam2]->f_2 = get_network_time_accurate();
		func_434(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
	}
	else
	{
		Var0.f_2 = iParam3;
		Var0.f_4 = uParam1->f_1;
		iVar10 = func_441(&Var0);
		if (func_442(iVar10))
		{
			if (get_time_difference(uParam0->f_4[iParam2]->f_2, get_network_time_accurate()) > 30000)
			{
				func_440(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
			}
		}
		else
		{
			iVar11 = &uParam0->f_4[iParam2];
			if (iVar11 != -1)
			{
				func_272(uParam0, iVar11, *uParam1);
			}
			*iParam4 = 1;
			return true;
		}
	}
	return false;
}

int func_284(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	if (func_430(&(uParam0->f_4[iParam2]->f_4), 2))
	{
		func_448(uParam1->f_1, iParam3);
		uParam0->f_4[iParam2]->f_2 = get_network_time_accurate();
		func_434(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
	}
	else
	{
		Var0.f_2 = iParam3;
		Var0.f_4 = uParam1->f_1;
		iVar10 = func_441(&Var0);
		if (func_442(iVar10))
		{
			if (get_time_difference(uParam0->f_4[iParam2]->f_2, get_network_time_accurate()) > 30000)
			{
				func_440(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
			}
		}
		else
		{
			iVar11 = &uParam0->f_4[iParam2];
			if (iVar11 != -1)
			{
				func_272(uParam0, iVar11, *uParam1);
			}
			*uParam4 = 6;
			return 1;
		}
	}
	return 0;
}

bool func_285(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	if (func_426(_0x4be6c13a45cca8ec(iParam4), uParam2->f_2))
	{
		uParam0->f_4[iParam3] = func_428(*uParam2, func_427(iParam3));
		*uParam6 = 9;
		return true;
	}
	if (func_429(uParam5, 4096))
	{
		*uParam6 = 2;
		return true;
	}
	if (func_430(&(uParam0->f_4[iParam3]->f_4), 2))
	{
		*uParam6 = 10;
		return true;
	}
	if (&uParam0->f_4[iParam3] != -1)
	{
		if (func_431(uParam0, &(uParam0->f_4[iParam3]), *uParam2))
		{
			func_272(uParam0, &(uParam0->f_4[iParam3]), *uParam2);
		}
		uParam0->f_4[iParam3] = -1;
	}
	return false;
}

bool func_286(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	if (!func_429(uParam4, 4096))
	{
		*iParam5 = 1;
		return true;
	}
	Var1 = -1;
	Var1.f_1 = -1;
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
	iVar0 = get_network_time_accurate();
	Var1 = 1;
	Var1.f_2 = 5;
	Var1.f_5 = 0;
	Var1.f_7 = iVar0;
	Var1.f_8 = 1;
	Var1.f_8.f_1 = 2;
	Var1.f_8.f_5.f_2 = iParam3;
	Var1.f_8.f_5.f_4 = uParam1->f_1;
	Var1.f_8.f_5.f_9 = 1;
	func_438(&Var1);
	func_439((*Global_1201051)[&Global_1296859], &Var1, 0, 0, 0, 0, 0);
	func_440(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
	uParam0->f_4[iParam2]->f_2 = iVar0;
	*iParam5 = 3;
	return true;
}

bool func_287(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_429(uParam6, 4096))
	{
		*iParam7 = 1;
		return true;
	}
	if (func_430(&(uParam0->f_4[iParam4]->f_4), 1))
	{
		iVar0 = func_433(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4, &(uParam0->f_4[iParam4]));
		func_434(&(uParam0->f_4[iParam4]->f_4), 1, *uParam3);
	}
	else
	{
		iVar0 = func_435(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4);
		if (iVar0 == -1)
		{
			iVar0 = func_433(uParam0, uParam1, uParam2, uParam3, iParam5, iParam4, -1);
		}
	}
	if (iVar0 == -1)
	{
		uParam0->f_4[iParam4]->f_1 = uParam2->f_7.f_2.f_23;
		func_436(&(uParam0->f_4[iParam4]->f_1), 0, 0, 1, 0, 0, 0, 0);
		*iParam7 = 6;
		return true;
	}
	func_437(uParam0, iVar0, *uParam3);
	uParam0->f_4[iParam4] = iVar0;
	uParam0->f_4[iParam4]->f_1 = uParam2->f_7.f_2.f_23;
	func_436(&(uParam0->f_4[iParam4]->f_1), 0, 0, 0, 1, 0, 0, 0);
	*iParam7 = 4;
	return true;
}

bool func_288(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5)
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
	Var0.f_2 = iParam3;
	Var0.f_4 = uParam1->f_1;
	iVar25 = func_441(&Var0);
	iVar26 = get_network_time_accurate();
	if (func_442(iVar25))
	{
		Var10 = { func_443(iVar25) };
		if (Var10 == 1)
		{
			if (!func_429(uParam4, 4096))
			{
				*iParam5 = 10;
				return true;
			}
			uParam0->f_4[iParam2]->f_2 = iVar26;
			*iParam5 = 5;
			return true;
		}
		else
		{
			func_434(&(uParam0->f_4[iParam2]->f_4), 2, *uParam1);
			*iParam5 = 2;
			return true;
		}
	}
	else if (get_time_difference(uParam0->f_4[iParam2]->f_2, iVar26) >= 30000)
	{
		uParam0->f_4[iParam2]->f_2 = iVar26;
		func_272(uParam0, &(uParam0->f_4[iParam2]), *uParam1);
		*iParam5 = 10;
		return true;
	}
	return false;
}

bool func_289(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	Var33 = 3;
	if (!func_429(uParam6, 4096))
	{
		*iParam7 = 10;
		return true;
	}
	if (func_444(uParam0->f_4[iParam4]->f_1, 1))
	{
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		*iParam7 = 3;
		return true;
	}
	Var0 = { func_367(*uParam3, &(uParam0->f_4[iParam4])) };
	Var33 = { func_368(*uParam3, uParam2->f_7.f_2.f_24) };
	iVar38 = 1073742987;
	if (!func_13(&(uParam0->f_3), 4))
	{
		iVar38 |= 4096;
	}
	if (func_369(&Var0, &(uParam0->f_4[iParam4]), &Var33, iParam5, iParam4, uParam3->f_1, &uVar37, iVar38, -1))
	{
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		*iParam7 = 3;
		return true;
	}
	if (func_120(&(uParam6->f_1), 1))
	{
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		uParam0->f_4[iParam4]->f_2 = get_network_time_accurate();
		if (&uParam0->f_4[iParam4] != -1 && func_361(*uParam3, &(uParam0->f_4[iParam4]), 518798111))
		{
			uParam0->f_4[iParam4]->f_5 = func_445(uParam1, iParam5, 1);
			*iParam7 = 8;
			return true;
		}
		else
		{
			*iParam7 = 7;
			return true;
		}
	}
	if (func_446(uParam3->f_2, iParam4))
	{
		*iParam7 = 9;
		return true;
	}
	if (func_120(&(uParam6->f_1), 2))
	{
		func_440(&(uParam0->f_4[iParam4]->f_4), 1, *uParam3);
		func_434(&(uParam0->f_4[iParam4]->f_4), 4, *uParam3);
		func_272(uParam0, &(uParam0->f_4[iParam4]), *uParam3);
		*iParam7 = 3;
		return true;
	}
	return false;
}

bool func_290()
{
	return false;
}

bool func_291(var uParam0, int iParam1)
{
	if (!_0x603ac35fd4602c76(iParam1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = uVar0;
	return true;
}

bool func_292(var uParam0, int iParam1, int iParam2)
{
	if (!func_449(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 741518720;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_293(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_450(&Param0, 940344631))
	{
		return false;
	}
	iVar0 = func_270(Param0, 135103436);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (!func_451(Param0, uParam5, iVar1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_294(var uParam0)
{
	uParam0->f_2 = -150140702;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

Vector3 func_295(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

struct<7> func_296(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_297(int iParam0)
{
	switch (iParam0)
	{
		case -1683328900:
			return Global_1901947->f_308.f_42;
		default:
			break;
	}
	return false;
	return false;
}

bool func_298(int iParam0)
{
	return true;
}

int func_299(var uParam0)
{
	return uParam0->f_137.f_60;
}

int func_300(var uParam0)
{
	return uParam0->f_137.f_59;
}

void func_301(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_137.f_59 = iParam2;
}

void func_302(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_137.f_60 = iParam2;
}

int func_303(var uParam0, int iParam1)
{
	return uParam0->f_137[iParam1]->f_1;
}

bool func_304(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return false;
	}
	if (!func_187(*uParam1, 1))
	{
		return false;
	}
	if (func_452(uParam0) > 0)
	{
		if ((get_game_timer() - func_453(uParam0)) < 2000)
		{
			return false;
		}
	}
	if (bParam2)
	{
		iVar1 = func_93(*uParam1, func_128(*uParam1));
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_visible(iVar1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_305(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_303(uParam0, iParam2) <= 0)
	{
		return true;
	}
	if ((get_game_timer() - func_454(uParam0, iParam2)) < iParam3)
	{
		return false;
	}
	return true;
}

bool func_306()
{
	return func_25(func_74());
}

int func_307(var uParam0, var uParam1, int iParam2)
{
	iVar3 = func_128(*uParam1);
	if (!func_106(func_455(*uParam1)))
	{
		return 0;
	}
	iVar4 = func_456(*uParam1);
	if (uParam1->f_4 == -323664079)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_312(iVar4);
	}
	bVar1 = func_457() == player_id();
	if (uParam1->f_4 == -323664079)
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = func_458(iVar4);
	}
	switch (iParam2)
	{
		case 0:
			return func_459(bVar1, -1985714770, -1618573542);
		case 1:
			return 2035028058;
		case 2:
			return -2064065234;
		case 3:
			return -2043987916;
		case 4:
			return -449614661;
		case 5:
			return -1346918113;
		case 6:
			return -415121489;
		case 7:
			return 1551948790;
		case 8:
			return 175807201;
		case 9:
			return 2146971380;
		case 10:
			return -455824607;
		case 11:
			return 2119196621;
		case 12:
			return 1436916876;
		case 13:
			switch (iVar2)
			{
				case 1:
					if (bVar0)
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[14]);
							case -910931556:
								return &(uParam0->f_67.f_3[21]);
							default:
								break;
						}
					}
					else
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[0]);
							case -910931556:
								return &(uParam0->f_67.f_3[7]);
							default:
								break;
						}
					}
					break;
				case 3:
				case 4:
					if (bVar0)
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[15]);
							case -910931556:
								return &(uParam0->f_67.f_3[22]);
							default:
								break;
						}
					}
					else
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[1]);
							case -910931556:
								return &(uParam0->f_67.f_3[8]);
							default:
								break;
						}
					}
					break;
				default:
					if (bVar0)
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[20]);
							case -910931556:
								return &(uParam0->f_67.f_3[27]);
							default:
								break;
						}
					}
					else
					{
						switch (iVar3)
						{
							case 303108068:
								return &(uParam0->f_67.f_3[6]);
							case -910931556:
								return &(uParam0->f_67.f_3[13]);
							default:
								break;
						}
					}
					break;
			}
			break;
		case 14:
			if (bVar0)
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[16]);
					case -910931556:
						return &(uParam0->f_67.f_3[23]);
					default:
						break;
				}
			}
			else
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[2]);
					case -910931556:
						return &(uParam0->f_67.f_3[9]);
					default:
						break;
				}
			}
			break;
		case 15:
			if (bVar0)
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[17]);
					case -910931556:
						return &(uParam0->f_67.f_3[24]);
					default:
						break;
				}
			}
			else
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[3]);
					case -910931556:
						return &(uParam0->f_67.f_3[10]);
					default:
						break;
				}
			}
			break;
		case 16:
			if (bVar0)
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[19]);
					case -910931556:
						return &(uParam0->f_67.f_3[26]);
					default:
						break;
				}
			}
			else
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[5]);
					case -910931556:
						return &(uParam0->f_67.f_3[12]);
					default:
						break;
				}
			}
			break;
		case 17:
			if (bVar0)
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[18]);
					case -910931556:
						return &(uParam0->f_67.f_3[25]);
					default:
						break;
				}
			}
			else
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[4]);
					case -910931556:
						return &(uParam0->f_67.f_3[11]);
					default:
						break;
				}
			}
			break;
		case 18:
			if (bVar0)
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[20]);
					case -910931556:
						return &(uParam0->f_67.f_3[27]);
					default:
						break;
				}
			}
			else
			{
				switch (iVar3)
				{
					case 303108068:
						return &(uParam0->f_67.f_3[6]);
					case -910931556:
						return &(uParam0->f_67.f_3[13]);
					default:
						break;
				}
			}
			break;
		case 19:
			return 1512725514;
		case 20:
			return -758929557;
		case 21:
			return 198798182;
		case 22:
			return 1278892311;
		case 23:
			return 847375033;
		case 24:
			return 1726472702;
		case 25:
			return -1361088294;
		case 26:
			return 902652111;
		case 27:
			return 701812686;
		default:
			break;
	}
	return 0;
}

int func_308(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_309(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = get_game_timer();
	func_460(uParam0, uParam1, iParam2);
	func_461(uParam0, uParam1, iParam2, iVar0);
	func_301(uParam0, uParam1, iParam3);
	func_302(uParam0, uParam1, iParam2);
	func_462(uParam0, uParam1);
	func_463(uParam0, uParam1, iVar0);
}

bool func_310(int iParam0)
{
	return func_202(&(Global_1109804->f_247.f_6), iParam0, 2);
}

bool func_311(int iParam0, int iParam1)
{
	return func_202(&((*Global_1128574)[iParam0]->f_35), iParam1, 2);
}

bool func_312(int iParam0)
{
	Var0 = { func_115(-1684144076, func_114(iParam0)) };
	return func_464(Var0);
}

int func_313(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_14;
}

bool func_314()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

int func_315(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_200(iVar0, 2))
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
				func_465(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_316(int iParam0)
{
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

void func_317(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_94(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1951255)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1951255)[iVar0]->f_3, fParam1);
}

void func_318(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (bParam1)
	{
		func_466(iParam0, 4);
		if (bParam3)
		{
			func_467(iVar0, 1);
		}
		func_468(iVar0, 1);
	}
	else
	{
		func_469(iParam0, 4);
		func_468(iVar0, 0);
	}
}

void func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	func_467(iVar0, bParam1);
}

int func_320(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_219(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_200(iVar0, 2))
		{
			if (func_470(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_465(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_321(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_94(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	func_471(iParam0, 18, 0, 1);
	func_471(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam4, iParam2);
}

void func_322(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar1 = uParam2->f_7.f_2.f_1;
	iVar0 = -1;
	if (!func_94(&(uParam2->f_99[0])))
	{
		return;
	}
	if (iVar1 == -1)
	{
		if (func_185())
		{
			func_472(uParam2);
		}
		else
		{
			func_473(uParam2);
		}
	}
	else if (func_185())
	{
		if (bParam4)
		{
			func_472(uParam2);
		}
		else if (func_25(uParam2->f_7.f_2.f_25))
		{
			func_472(uParam2);
		}
		else if (uParam0->f_4[iVar1]->f_3 != 5)
		{
			func_472(uParam2);
		}
		else if (func_120(&((*uParam1)[participant_id_to_int()]->f_1), 1))
		{
			func_472(uParam2);
		}
		else
		{
			iVar0 = &uParam0->f_4[iVar1];
			if (iVar0 == -1)
			{
				func_472(uParam2);
			}
			else
			{
				func_474(uParam2, uParam3, iVar0);
			}
		}
	}
	else
	{
		func_473(uParam2);
	}
}

bool func_323(var uParam0)
{
	if (!func_185())
	{
		return false;
	}
	if (uParam0->f_3 != -628138157)
	{
		return false;
	}
	if (func_128(*uParam0) != 303108068)
	{
		return false;
	}
	iVar0 = func_77(uParam0->f_2);
	if (func_312(iVar0))
	{
		return false;
	}
	return true;
}

void func_324(var uParam0, var uParam1)
{
	if (!func_94(&(uParam0->f_99[1])))
	{
		return;
	}
	iVar0 = func_365(*uParam1);
	if (iVar0 == -1)
	{
		func_475(uParam0);
	}
	else
	{
		func_476(uParam0, uParam1, iVar0);
	}
}

void func_325(var uParam0)
{
	if (func_94(&(uParam0->f_99[2])))
	{
		if (func_477(&(uParam0->f_99[2]), 1))
		{
			func_319(&(uParam0->f_99[2]), 0, 0);
		}
	}
}

void func_326(var uParam0)
{
	if (func_94(&(uParam0->f_99[3])))
	{
		if (func_477(&(uParam0->f_99[3]), 1))
		{
			func_319(&(uParam0->f_99[3]), 0, 0);
		}
	}
}

void func_327(var uParam0)
{
	if (func_94(&(uParam0->f_99[5])))
	{
		if (func_477(&(uParam0->f_99[5]), 1))
		{
			func_319(&(uParam0->f_99[5]), 0, 0);
		}
	}
	if (func_94(&(uParam0->f_99[4])))
	{
		if (func_477(&(uParam0->f_99[4]), 1))
		{
			func_319(&(uParam0->f_99[4]), 0, 0);
		}
	}
}

void func_328(var uParam0)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (func_477(&(uParam0->f_99[0]), 1))
		{
			func_319(&(uParam0->f_99[0]), 0, 0);
		}
	}
}

void func_329(var uParam0)
{
	if (func_94(&(uParam0->f_99[6])))
	{
		if (func_477(&(uParam0->f_99[6]), 1))
		{
			func_319(&(uParam0->f_99[6]), 0, 0);
		}
	}
}

void func_330(var uParam0)
{
	if (func_94(&(uParam0->f_99[7])))
	{
		if (func_477(&(uParam0->f_99[7]), 1))
		{
			func_319(&(uParam0->f_99[7]), 0, 0);
		}
	}
}

void func_331(var uParam0)
{
	if (func_94(&(uParam0->f_99[8])))
	{
		if (func_477(&(uParam0->f_99[8]), 1))
		{
			func_319(&(uParam0->f_99[8]), 0, 0);
		}
	}
}

void func_332(var uParam0)
{
	if (func_94(&(uParam0->f_99[9])))
	{
		if (func_477(&(uParam0->f_99[9]), 1))
		{
			func_319(&(uParam0->f_99[9]), 0, 0);
		}
	}
}

void func_333(var uParam0)
{
	if (func_94(&(uParam0->f_99[2])))
	{
		if (func_478(&(uParam0->f_99[2]), 0))
		{
			func_318(&(uParam0->f_99[2]), 0, 0, 1);
		}
	}
}

void func_334(var uParam0)
{
	if (func_94(&(uParam0->f_99[3])))
	{
		if (func_478(&(uParam0->f_99[3]), 0))
		{
			func_318(&(uParam0->f_99[3]), 0, 0, 1);
		}
	}
}

void func_335(var uParam0)
{
	if (func_94(&(uParam0->f_99[5])))
	{
		if (func_478(&(uParam0->f_99[5]), 0))
		{
			func_318(&(uParam0->f_99[5]), 0, 0, 1);
		}
	}
	if (func_94(&(uParam0->f_99[4])))
	{
		if (func_478(&(uParam0->f_99[4]), 0))
		{
			func_318(&(uParam0->f_99[4]), 0, 0, 1);
		}
	}
}

void func_336(var uParam0)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (func_478(&(uParam0->f_99[0]), 0))
		{
			func_318(&(uParam0->f_99[0]), 0, 0, 1);
		}
	}
}

void func_337(var uParam0)
{
	if (func_94(&(uParam0->f_99[6])))
	{
		if (func_478(&(uParam0->f_99[6]), 0))
		{
			func_318(&(uParam0->f_99[6]), 0, 0, 1);
		}
	}
}

void func_338(var uParam0)
{
	if (func_94(&(uParam0->f_99[7])))
	{
		if (func_478(&(uParam0->f_99[7]), 0))
		{
			func_318(&(uParam0->f_99[7]), 0, 0, 1);
		}
	}
}

void func_339(var uParam0)
{
	if (func_94(&(uParam0->f_99[8])))
	{
		if (func_478(&(uParam0->f_99[8]), 0))
		{
			func_318(&(uParam0->f_99[8]), 0, 0, 1);
		}
	}
}

void func_340(var uParam0)
{
	if (func_94(&(uParam0->f_99[9])))
	{
		if (func_478(&(uParam0->f_99[9]), 0))
		{
			func_318(&(uParam0->f_99[9]), 0, 0, 1);
		}
	}
}

void func_341(var uParam0)
{
	if (func_94(&(uParam0->f_99[1])))
	{
		if (func_477(&(uParam0->f_99[1]), 1))
		{
			func_319(&(uParam0->f_99[1]), 0, 0);
		}
	}
}

void func_342(var uParam0, int iParam1)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (func_477(&(uParam0->f_99[0]), 1))
		{
			func_319(&(uParam0->f_99[0]), 0, 0);
		}
	}
}

void func_343(var uParam0)
{
	if (func_94(&(uParam0->f_99[1])))
	{
		if (func_478(&(uParam0->f_99[1]), 0))
		{
			func_318(&(uParam0->f_99[1]), 0, 0, 1);
		}
	}
}

void func_344(var uParam0, int iParam1)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (func_478(&(uParam0->f_99[0]), 0))
		{
			func_318(&(uParam0->f_99[0]), 0, 0, 1);
		}
	}
}

void func_345(var uParam0, var uParam1)
{
	func_479(uParam0, uParam1);
	func_480(uParam0, uParam1);
	func_481(uParam0, uParam1);
}

bool func_346(var uParam0, var uParam1)
{
	iVar0 = func_93(*uParam1, uParam0->f_99.f_12);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	return is_player_targetting_entity(uParam0->f_7, iVar0, false);
}

void func_347(var uParam0, var uParam1)
{
	func_482(uParam0, uParam1, 4);
	func_482(uParam0, uParam1, 3);
	func_482(uParam0, uParam1, 5);
	func_482(uParam0, uParam1, 7);
	func_482(uParam0, uParam1, 15);
	func_482(uParam0, uParam1, 14);
	func_482(uParam0, uParam1, 6);
	func_482(uParam0, uParam1, 13);
	func_482(uParam0, uParam1, 1);
	func_482(uParam0, uParam1, 0);
	func_482(uParam0, uParam1, 12);
	func_482(uParam0, uParam1, 19);
	func_482(uParam0, uParam1, 20);
	func_482(uParam0, uParam1, 21);
	func_482(uParam0, uParam1, 2);
	func_482(uParam0, uParam1, 22);
	func_482(uParam0, uParam1, 27);
}

int func_348(var uParam0)
{
	switch (uParam0->f_4)
	{
		case -800238780:
		case 1015970717:
			return 4;
		case -323664079:
			return 3;
		default:
			break;
	}
	if (func_312(func_77(uParam0->f_2)))
	{
		return 4;
	}
	if (uParam0->f_3 != -628138157)
	{
		return 4;
	}
	if (!func_185())
	{
		return 4;
	}
	return 5;
}

void func_349(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = 15;
	if (!func_106(uParam1->f_2))
	{
		return;
	}
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (!func_305(uParam0, uParam1, iVar0, 0))
	{
		return;
	}
	if (bParam2)
	{
		if (!func_421(uParam0, uParam1))
		{
			return;
		}
	}
	if (bParam3)
	{
		if (!func_187(*uParam1, 4))
		{
			return;
		}
	}
	if (func_306())
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_350(var uParam0, int iParam1)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (!func_477(&(uParam0->f_99[0]), 1))
		{
			func_319(&(uParam0->f_99[0]), 1, 0);
		}
	}
}

void func_351(var uParam0, var uParam1)
{
	iVar0 = 13;
	if (!func_106(uParam1->f_2))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (!func_304(uParam0, uParam1, uParam1->f_4 != -323664079))
	{
		return;
	}
	if (func_306())
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

bool func_352(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_16;
}

bool func_353(var uParam0, var uParam1)
{
	if (func_38(&(uParam0->f_7.f_2.f_2), 1024))
	{
		return false;
	}
	if (func_432(uParam0->f_7.f_2.f_1) > 0 && !func_25(func_74()))
	{
		if (func_483(uParam0->f_7.f_2.f_1, 4))
		{
			func_384(uParam0, uParam1);
		}
		else
		{
			func_373(uParam0, uParam1);
		}
		return false;
	}
	return true;
}

void func_354(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != 6)
	{
		return;
	}
	if (func_484(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		func_374(uParam0, uParam1);
	}
	else
	{
		func_485(uParam0, uParam1);
	}
}

bool func_355(var uParam0, var uParam1)
{
	iVar0 = func_93(*uParam1, uParam0->f_99.f_13);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	vVar1 = { func_486(get_entity_heading(iVar0)) };
	vVar4 = { func_488(get_entity_coords(iVar0, true, false) - func_487(uParam0->f_7)) };
	return func_489(vVar1, vVar4) <= -0.2f;
}

bool func_356(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_120(&((*uParam1)[participant_id_to_int()]->f_1), 1))
	{
		return false;
	}
	if (func_120(&((*uParam1)[participant_id_to_int()]->f_1), 2))
	{
		return false;
	}
	if (func_185())
	{
		if (func_25(func_113(0)))
		{
			return false;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	Var33 = 3;
	Var0 = { func_367(*uParam3, &(uParam0->f_4[uParam2->f_7.f_2.f_1])) };
	Var33 = { func_368(*uParam3, uParam2->f_7.f_2.f_24) };
	iVar38 = 0;
	if (func_369(&Var0, &(uParam0->f_4[uParam2->f_7.f_2.f_1]), &Var33, uParam2->f_7.f_2.f_13, uParam2->f_7.f_2.f_1, uParam3->f_1, &iVar37, iVar38, -1))
	{
		switch (iVar37)
		{
			case 3:
			case 4:
			case 39:
			case 40:
				func_370(uParam2, uParam3, &Var0);
				func_372(uParam3->f_1, uParam3->f_2, -1323853848, func_371(uParam3), Var0, 1);
				break;
			case 8:
				func_490(uParam2, uParam3);
				func_372(uParam3->f_1, uParam3->f_2, -1585401455, func_371(uParam3), Var0, 1);
				break;
			case 7:
				func_491(uParam2, uParam3);
				func_372(uParam3->f_1, uParam3->f_2, -56208354, func_371(uParam3), Var0, 1);
				break;
			case 27:
				func_492(uParam2, uParam3);
				func_372(uParam3->f_1, uParam3->f_2, 2091137887, func_371(uParam3), Var0, 1);
				break;
			case 44:
				func_374(uParam2, uParam3);
				break;
			default:
				break;
		}
		return false;
	}
	return true;
}

void func_357(var uParam0, int iParam1)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (!func_478(&(uParam0->f_99[0]), 0))
		{
			func_318(&(uParam0->f_99[0]), 1, 0, 0);
		}
	}
}

void func_358(var uParam0, var uParam1)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = get_player_ped(player_id());
	Var0.f_19 = 4;
	Var0.f_20 = 3;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0.f_8 = 4;
	Var0.f_7 = 500;
	func_493(&(Var0.f_5), 1);
	_0x66f9eb44342bb4c5(get_ped_index_from_entity_index(func_93(*uParam1, uParam0->f_99.f_12)), &Var0);
}

void func_359(var uParam0, var uParam1)
{
	iVar0 = 11;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar2 = player_id();
	Var4 = -1;
	Var4.f_1 = -1;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar3 = func_494(iVar1);
		if (!_network_is_player_index_valid(iVar3))
		{
		}
		else if (!network_is_player_active(iVar3))
		{
		}
		else if (iVar3 == iVar2)
		{
		}
		else if (!func_25((*Global_1056141)[iVar3]->f_2))
		{
		}
		else
		{
			Var4 = { (*Global_1056141)[iVar3]->f_2 };
			if (func_25(Var4))
			{
				iVar6 = func_307(uParam0, uParam1, iVar0);
				if (iVar6 == 0)
				{
					return;
				}
				iVar7 = func_308(_create_var_string(0, iVar6), 10000, 0, 0, 0, 1);
				func_309(uParam0, uParam1, iVar0, iVar7);
			}
		}
		iVar1++;
	}
}

void func_360(var uParam0, var uParam1, var uParam2)
{
	if (!func_304(uParam1, uParam2, 1))
	{
		return;
	}
	iVar1 = 10;
	iVar2 = 9;
	if (func_303(uParam1, iVar1) > 0 || func_303(uParam1, iVar2) > 0)
	{
		return;
	}
	iVar4 = uParam1->f_7.f_2.f_1;
	if (iVar4 == -1)
	{
		return;
	}
	iVar3 = &uParam0->f_4[iVar4];
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = func_495(*uParam2, iVar3);
	switch (iVar5)
	{
		case 493038497:
			return;
		case -1563022819:
			iVar0 = 9;
			if (func_497(func_496(-909181932)) > 2)
			{
				func_460(uParam1, uParam2, iVar0);
				return;
			}
			break;
		case -858967395:
			iVar0 = 10;
			if (func_497(func_496(1767412264)) > 2)
			{
				func_460(uParam1, uParam2, iVar0);
				return;
			}
			break;
		default:
			return;
	}
	iVar6 = func_307(uParam1, uParam2, iVar0);
	if (iVar6 == 0)
	{
		return;
	}
	if (!func_498(0))
	{
		func_499(0, 408396114);
		return;
	}
	func_500(0, -1906191545);
	func_501(0, 1699087565);
	func_502(0, -244815569);
	sVar7 = func_503(0);
	iVar8 = func_308(_create_var_string(0, iVar6, sVar7), 10000, 0, 0, 0, 1);
	func_309(uParam1, uParam2, iVar0, iVar8);
	switch (iVar5)
	{
		case -858967395:
			func_504(func_496(1767412264), 1);
			break;
		case -1563022819:
			func_504(func_496(-909181932), 1);
			break;
	}
}

bool func_361(int iParam0, int iParam1, int iParam2)
{
	return func_505((*Global_1120070)[iParam0]->f_24.f_2[iParam1], iParam2);
}

void func_362(var uParam0, var uParam1)
{
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, 12) > 0)
	{
		return;
	}
	iVar0 = func_307(uParam0, uParam1, 12);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_308(_create_var_string(0, iVar0), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, 12, iVar1);
}

void func_363(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 8;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (func_506(0))
	{
		return;
	}
	bVar1 = false;
	iVar2 = player_id();
	iVar3 = _0x901e0dc25080c8b9(iVar2);
	iVar4 = (_0x149a2751ab66ac02(iVar3) - 1);
	if (func_361(*uParam1, iParam2, 1992773981))
	{
		if (iVar4 > 1)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, -2010581984))
	{
		if (iVar4 > 2)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, -1824322988))
	{
		if (iVar4 > 3)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, -1518489911))
	{
		if (iVar4 > 4)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, -1348549877))
	{
		if (iVar4 > 5)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, -1040947274))
	{
		if (iVar4 > 6)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1 && func_361(*uParam1, iParam2, 1803795142))
	{
		if (iVar4 > 7)
		{
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		return;
	}
	iVar5 = func_307(uParam0, uParam1, iVar0);
	if (iVar5 == 0)
	{
		return;
	}
	if (!func_498(0))
	{
		func_499(0, 408396114);
		return;
	}
	func_500(0, -1906191545);
	func_501(0, 1699087565);
	func_502(0, -244815569);
	sVar6 = func_503(0);
	iVar7 = func_308(_create_var_string(0, iVar5, sVar6), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar7);
	func_507(0);
}

bool func_364(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return false;
	}
	iVar0 = func_141(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_365(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_24.f_1;
}

void func_366(var uParam0)
{
	if (func_94(&(uParam0->f_99[1])))
	{
		if (!func_477(&(uParam0->f_99[1]), 1))
		{
			func_319(&(uParam0->f_99[1]), 1, 0);
		}
	}
}

struct<33> func_367(int iParam0, int iParam1)
{
	return *(*Global_1120070)[iParam0]->f_24.f_2[iParam1];
}

struct<4> func_368(int iParam0, int iParam1)
{
	return *(*Global_1120070)[iParam0]->f_24.f_2074[iParam1];
}

bool func_369(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	iVar0 = func_508(uParam0->f_2);
	iVar1 = func_509(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_510(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*iParam6 = 0;
	*iParam6 = func_511(uParam0);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_512(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_513(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_514(uParam0, iParam1, uParam2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_515(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_516(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_517(uParam0, iVar2, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_518(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_519(iParam3, iParam4, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_520(iParam3);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_521(iParam3, uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_522(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_523(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_524(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_525(iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*iParam6 = func_526(uParam0, iParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*iParam6 = func_527(uParam0, iParam7);
			break;
		case 0:
			*iParam6 = func_528(uParam0, iParam7, iParam3);
			break;
		default:
			*iParam6 = 45;
			break;
	}
	return *iParam6 != 0;
}

void func_370(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 7;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	sVar2 = _create_var_string(0, &(uParam2->f_4[5]));
	iVar3 = func_308(_create_var_string(8, iVar1, sVar2), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar3);
}

int func_371(var uParam0)
{
	switch (func_128(*uParam0))
	{
		case 303108068:
			return -839267265;
		case -910931556:
			return -258540245;
		default:
			break;
	}
	return 0;
}

void func_372(var uParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, bool bParam6)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_529(32768, 8);
	if (!bParam6)
	{
		_0xd426e2e3288469d6(&uVar31, player_id());
	}
	Var0.f_10 = player_id();
	Var0.f_6 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 7;
	Var0.f_16 = iParam2;
	Var0.f_7 = { Param4 };
	Var0.f_15 = iParam3;
	func_530(&Var0, uVar31);
}

void func_373(var uParam0, var uParam1)
{
	iVar0 = 1;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_374(var uParam0, var uParam1)
{
	iVar0 = 2;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_375(var uParam0)
{
	if (func_94(&(uParam0->f_99[1])))
	{
		if (!func_478(&(uParam0->f_99[1]), 0))
		{
			func_318(&(uParam0->f_99[1]), 1, 0, 0);
		}
	}
}

void func_376(var uParam0)
{
	if (func_94(&(uParam0->f_99[2])))
	{
		if (!func_477(&(uParam0->f_99[2]), 1))
		{
			func_319(&(uParam0->f_99[2]), 1, 0);
		}
	}
}

bool func_377()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(872480335) > 0)
	{
		return true;
	}
	return false;
}

int func_378(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (is_entity_visible(func_531(*uParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_379()
{
	if (!func_532())
	{
		return false;
	}
	return func_533(1);
}

bool func_380()
{
	return func_534();
}

bool func_381()
{
	return func_535(3);
}

bool func_382()
{
	if (Global_1071686->f_28662.f_65.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_383()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

void func_384(var uParam0, var uParam1)
{
	iVar0 = 0;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_385(var uParam0)
{
	if (func_94(&(uParam0->f_99[2])))
	{
		if (!func_478(&(uParam0->f_99[2]), 0))
		{
			func_318(&(uParam0->f_99[2]), 1, 0, 0);
		}
	}
}

bool func_386(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return false;
	}
	iVar0 = func_141(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

void func_387(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_15 = iParam1;
}

void func_388(var uParam0)
{
	if (func_536())
	{
		uParam0->f_99.f_29 = 1;
	}
	else
	{
		uParam0->f_99.f_29 = 0;
	}
}

int func_389(var uParam0, var uParam1, int iParam2)
{
	func_328(uParam0);
	func_329(uParam0);
	func_330(uParam0);
	func_327(uParam0);
	func_331(uParam0);
	func_336(uParam0);
	func_337(uParam0);
	func_338(uParam0);
	func_335(uParam0);
	func_339(uParam0);
	func_537(uParam0, uParam1);
	func_415(uParam0, uParam1);
	func_538(uParam0);
	func_539(uParam0);
	func_540(uParam0);
	func_541(uParam0);
	if (func_364(&(uParam0->f_99[3]), 0))
	{
		*iParam2 = 9;
		return 1;
	}
	if (!func_417(uParam0))
	{
		func_331(uParam0);
		func_339(uParam0);
		func_340(uParam0);
		return 0;
	}
	func_542(uParam0, uParam1);
	func_543(uParam0);
	func_544(uParam0);
	if (func_545(2103384153, 1, func_418(uParam0), 0))
	{
		func_539(uParam0);
		if (func_386(&(uParam0->f_99[9]), 0))
		{
			*iParam2 = 17;
			return 1;
		}
	}
	else
	{
		func_539(uParam0);
		func_546(uParam0, uParam1);
		if (func_386(&(uParam0->f_99[9]), 0))
		{
			func_547(2103384153, 0, -1);
			func_548(1);
			return 0;
		}
	}
	return 0;
}

int func_390(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vVar0.f_1 = -1;
	func_537(uParam1, uParam2);
	func_415(uParam1, uParam2);
	func_332(uParam1);
	func_340(uParam1);
	func_549(uParam1);
	switch (func_550(*uParam2))
	{
		case 0:
			if ((((func_407(*uParam2) != -1 && does_entity_exist(func_531(*uParam2, func_407(*uParam2)))) && is_entity_visible(func_531(*uParam2, func_407(*uParam2)))) && func_551(*uParam2) == 0) && func_552(*uParam2) == 0)
			{
				func_553(uParam1);
				func_554(uParam1);
				if (func_555(&(uParam1->f_99[8]), 0))
				{
					func_327(uParam1);
					func_335(uParam1);
					func_330(uParam1);
					func_338(uParam1);
					func_329(uParam1);
					func_337(uParam1);
					func_328(uParam1);
					func_336(uParam1);
					func_326(uParam1);
					func_334(uParam1);
					func_556(uParam1, func_407(*uParam2));
					func_557(*uParam2, 1);
					return 0;
				}
			}
			else
			{
				func_331(uParam1);
				func_339(uParam1);
			}
			break;
		case 1:
			if (func_555(&(uParam1->f_99[8]), 0))
			{
				func_327(uParam1);
				func_335(uParam1);
				func_330(uParam1);
				func_338(uParam1);
				func_329(uParam1);
				func_337(uParam1);
				func_328(uParam1);
				func_336(uParam1);
				func_326(uParam1);
				func_334(uParam1);
				return 0;
			}
			else
			{
				func_558(uParam1, func_407(*uParam2));
				func_557(*uParam2, 0);
			}
			break;
		default:
			break;
	}
	func_540(uParam1);
	if (func_551(*uParam2) != 0 || func_552(*uParam2) != 0)
	{
		func_326(uParam1);
	}
	else
	{
		func_541(uParam1);
	}
	iVar4 = func_407(*uParam2);
	if (iVar4 != -1)
	{
		func_559(*uParam2, iVar4, &vVar0);
	}
	if ((func_551(*uParam2) == 0 && func_552(*uParam2) == 0) && func_364(&(uParam1->f_99[3]), 0))
	{
		*iParam3 = 9;
		return 1;
	}
	if (func_560(uParam2))
	{
		if (func_561(uParam2))
		{
			func_562(uParam1);
		}
		else
		{
			func_335(uParam1);
		}
		func_327(uParam1);
	}
	else
	{
		func_327(uParam1);
		func_335(uParam1);
	}
	if (func_364(&(uParam1->f_99[5]), 0))
	{
		*iParam3 = 12;
		return 1;
	}
	if (func_364(&(uParam1->f_99[4]), 0))
	{
		*iParam3 = 11;
		return 1;
	}
	switch (func_551(*uParam2))
	{
		case 0:
			if (iVar4 == -1)
			{
				func_563(uParam1);
				func_338(uParam1);
			}
			else if (does_entity_exist(func_531(*uParam2, func_407(*uParam2))) && is_entity_visible(func_531(*uParam2, func_407(*uParam2))))
			{
				if (func_552(*uParam2) == 0)
				{
					func_563(uParam1);
					func_564(uParam1);
				}
				else
				{
					func_330(uParam1);
					func_338(uParam1);
				}
			}
			else
			{
				func_563(uParam1);
				func_338(uParam1);
			}
			break;
		case 1:
			func_330(uParam1);
			func_338(uParam1);
			if (func_364(&(uParam1->f_99[3]), 0))
			{
				*iParam3 = 15;
				return 1;
			}
			break;
		default:
			break;
	}
	if (func_364(&(uParam1->f_99[7]), 0))
	{
		*iParam3 = 13;
		return 1;
	}
	switch (func_552(*uParam2))
	{
		case 0:
			if (func_532())
			{
				if (func_551(*uParam2) == 1)
				{
					func_329(uParam1);
					func_337(uParam1);
				}
				else if (func_379())
				{
					if (func_380())
					{
						func_565(uParam1);
						func_337(uParam1);
					}
					else
					{
						func_565(uParam1);
						func_566(uParam1);
					}
				}
				else
				{
					func_329(uParam1);
					func_337(uParam1);
				}
			}
			else
			{
				func_329(uParam1);
				func_337(uParam1);
			}
			break;
		case 1:
			func_329(uParam1);
			func_337(uParam1);
			break;
		case 2:
			func_329(uParam1);
			func_337(uParam1);
			if (func_364(&(uParam1->f_99[3]), 0))
			{
				func_98(*uParam2, 4);
				return 0;
			}
			break;
		case 5:
			func_329(uParam1);
			func_337(uParam1);
			func_567(uParam1);
			func_98(*uParam2, 2);
			break;
		case 4:
			func_329(uParam1);
			func_337(uParam1);
			*iParam3 = 16;
			return 1;
		case 3:
			func_329(uParam1);
			func_337(uParam1);
			*iParam3 = 18;
			return 1;
		default:
			break;
	}
	if (func_364(&(uParam1->f_99[6]), 0))
	{
		*iParam3 = 14;
		return 1;
	}
	if (!func_381())
	{
		func_542(uParam1, uParam2);
		func_568(uParam1);
		func_336(uParam1);
		func_391(uParam1, uParam2, 1, 0);
		return 0;
	}
	if (!func_353(uParam1, uParam2))
	{
		func_373(uParam1, uParam2);
		func_568(uParam1);
		func_336(uParam1);
		func_391(uParam1, uParam2, 1, 0);
		return 0;
	}
	if (func_185())
	{
		if (func_25(uParam1->f_7.f_2.f_25))
		{
			func_568(uParam1);
			func_336(uParam1);
			func_391(uParam1, uParam2, 1, 0);
			return 0;
		}
	}
	if (func_120(&((*uParam0)[participant_id_to_int()]->f_1), 1))
	{
		func_568(uParam1);
		func_336(uParam1);
		func_391(uParam1, uParam2, 1, 0);
		return 0;
	}
	if (func_147(uParam1))
	{
		func_349(uParam1, uParam2, 1, 0);
		func_568(uParam1);
		func_336(uParam1);
		func_391(uParam1, uParam2, 1, 0);
		return 0;
	}
	if (func_226(uParam1, uParam2))
	{
		func_266(uParam1, uParam2, 1, 0);
		func_568(uParam1);
		func_336(uParam1);
		func_391(uParam1, uParam2, 1, 0);
		return 0;
	}
	if (vVar0.x != 0 && func_570(func_569(uParam2->f_1), func_407(*uParam2)) == 0)
	{
		func_571(uParam1, uParam2);
		func_568(uParam1);
		func_336(uParam1);
		return 0;
	}
	if (!func_572(uParam2))
	{
		func_573(uParam1, uParam2);
	}
	func_574(uParam1, uParam2);
	func_575(uParam1, uParam2, vVar0.x);
	if (func_408() != -1)
	{
		if (func_407(*uParam2) == 2)
		{
			if (!func_103(uParam1, 4))
			{
				func_576(4);
				func_577(uParam1, uParam2, 4);
			}
		}
	}
	if (func_484(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		func_374(uParam1, uParam2);
		func_568(uParam1);
		func_336(uParam1);
		return 0;
	}
	if (func_552(*uParam2) != 0 || func_551(*uParam2) != 0)
	{
		func_328(uParam1);
		func_336(uParam1);
	}
	else
	{
		if (!_0x424b17a7dc5c90bc(uParam1->f_7))
		{
			func_230(uParam1, uParam2);
			func_568(uParam1);
			func_336(uParam1);
			return 0;
		}
		if (func_578(uParam2))
		{
			if (func_579())
			{
				func_580(uParam1, uParam2);
				func_568(uParam1);
				func_336(uParam1);
			}
			else
			{
				func_568(uParam1);
				func_581(uParam1);
			}
		}
		else
		{
			iVar6 = func_582(vVar0.z);
			switch (iVar6)
			{
				case 0:
					bVar5 = true;
					break;
				case 1:
					bVar5 = func_583();
					break;
				case 2:
					bVar5 = func_584();
					break;
				default:
					bVar5 = false;
					break;
			}
			if (!bVar5)
			{
				if (vVar0.x != 0)
				{
					func_585(uParam1, uParam2);
				}
				func_568(uParam1);
				func_336(uParam1);
				return 0;
			}
			func_568(uParam1);
			func_581(uParam1);
		}
	}
	if (func_364(&(uParam1->f_99[0]), 0))
	{
		*iParam3 = 10;
		return 1;
	}
	return 0;
}

void func_391(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (func_552(*uParam1) != 0)
	{
		func_263(uParam0, uParam1, &uVar0, bParam3);
	}
	if (func_551(*uParam1) != 0)
	{
		func_261(uParam0, uParam1, &uVar0, bParam3);
	}
	if (bParam2)
	{
		func_255(uParam0, uParam1, &uVar0, bParam3);
	}
}

void func_392(var uParam0, bool bParam1)
{
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	set_cam_active(uParam0->f_131, false);
	if (!bParam1)
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
}

void func_393(int iParam0)
{
	Global_1130634->f_291.f_1 = iParam0;
}

void func_394(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	_uiprompt_restart_modes((*Global_1951255)[iVar0]->f_3);
}

void func_395(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_396(int iParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_529(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	_copy_memory(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_295(iParam0) };
	uVar35 = func_586(iParam0);
	func_587(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_530(&Var0, uVar31);
}

int func_397(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = -1;
	return func_588(uParam0, uParam1, uParam2, &Var0);
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, var uParam7)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar32 = func_529(32768, 8);
	iVar33 = _0x901e0dc25080c8b9(player_id());
	Var0.f_10 = player_id();
	Var0.f_6 = iParam1;
	Var0.f_5 = iParam2;
	Var0.f_11 = iVar33;
	Var0.f_4 = 8;
	Var0.f_17 = iParam4;
	Var0.f_14 = uParam7;
	Var0.f_7 = { Param5 };
	vVar34 = { func_295(iParam1) };
	uVar37 = func_586(iParam1);
	switch (iParam4)
	{
		case 2:
			if (func_185())
			{
				Var0.f_18 = 0;
			}
			else if (is_ped_male(get_player_ped(player_id())))
			{
				switch (Global_1071686->f_28341.f_2)
				{
					case 0:
						Var0.f_18 = 7;
						break;
					case 1:
						Var0.f_18 = 1;
						break;
					case 2:
						Var0.f_18 = 3;
						break;
					case 3:
						Var0.f_18 = 5;
						break;
					default:
						break;
				}
			}
			else
			{
				switch (Global_1071686->f_28341.f_2)
				{
					case 0:
						Var0.f_18 = 8;
						break;
					case 1:
						Var0.f_18 = 2;
						break;
					case 2:
						Var0.f_18 = 4;
						break;
					case 3:
						Var0.f_18 = 6;
						break;
					default:
						break;
				}
			}
			break;
		default:
			switch (iParam4)
			{
				case 0:
					iVar31 = 1;
					break;
				case 1:
					iVar31 = 2;
					break;
			}
			Var0.f_18 = func_591(func_77(iParam2), func_400(iParam1), iVar31, func_589(iParam0, iParam3), func_590(iParam0));
			if (func_134(iParam2) == -800238780 || func_134(iParam2) == 1015970717)
			{
				if (Var0.f_18 == -1)
				{
					Var0.f_17 = 4;
				}
			}
			break;
	}
	func_587(&(Var0.f_19), iVar33, vVar34, uVar37);
	func_530(&Var0, uVar32);
}

var func_399(int iParam0, int iParam1)
{
	return (*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_2;
}

int func_400(int iParam0)
{
	return Global_1116202[iParam0];
}

int func_401()
{
	return Global_1893587->f_2;
}

int func_402(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

void func_403(var uParam0, var uParam1)
{
	if (func_103(uParam0, 1))
	{
		return;
	}
	network_set_in_mp_cutscene(true, true, 32, true);
	func_577(uParam0, uParam1, 1);
}

void func_404(var uParam0, var uParam1)
{
	if (func_103(uParam0, 2))
	{
		return;
	}
	set_player_control(player_id(), false, 0, false);
	func_577(uParam0, uParam1, 2);
}

void func_405(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_143() != -1)
	{
		if (func_143() == iParam0)
		{
			return;
		}
		return;
	}
	Global_1130634->f_293 = 1;
	Global_1130634->f_293.f_1 = iParam0;
}

void func_406(var uParam0)
{
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	bVar0 = !does_cam_exist(get_rendering_cam());
	set_cam_active(uParam0->f_131, true);
	if (bVar0)
	{
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

int func_407(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_15;
}

int func_408()
{
	return Global_1130634->f_291;
}

bool func_409(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_592(iParam0, iParam1);
	if (!_unlock_is_unlocked(iVar0))
	{
		return false;
	}
	if (!_unlock_is_visible(iVar0))
	{
		return false;
	}
	iVar0 = func_594(func_593(iParam0, iParam1));
	if (!_unlock_is_unlocked(iVar0))
	{
		return false;
	}
	if (!_unlock_is_visible(iVar0))
	{
		return false;
	}
	return true;
}

bool func_410(var uParam0, int iParam1)
{
	Var1 = 255;
	Var1.f_18 = 2147483647;
	Var1.f_21.f_2 = -504335712;
	Var1.f_21.f_4 = 3;
	Var1.f_26 = -1;
	Var1.f_30 = 1;
	Var1.f_31 = 1;
	Var1.f_32 = 1;
	Var1.f_33 = 32;
	Var1.f_34 = 1;
	Var1.f_35 = -2;
	Var1.f_47.f_5 = -1;
	Var1.f_53 = -1;
	Var1.f_53.f_1 = -1;
	Var1.f_55.f_3 = -1;
	iVar65 = 805307399;
	iVar66 = 1;
	switch (iParam1)
	{
		case 0:
			iVar0 = func_408();
			iVar67 = 14;
			break;
		case 1:
			iVar0 = func_412();
			iVar67 = 15;
			break;
		default:
			break;
	}
	if (!func_596(&Var1, func_595(iVar0), -1, -1, 3))
	{
		return false;
	}
	iVar68 = func_597(iVar0);
	Var1.f_53 = { func_598(iVar0) };
	func_599();
	func_601(iVar0, iVar68, func_600(func_400(uParam0->f_1)), iParam1);
	func_602(Var1, Var1.f_53, iVar65, iVar66, 0);
	func_603(iVar67);
	func_604(1, 1, 0, 0, 0, 0, 0, 0, 0);
	return true;
}

void func_411(var uParam0, var uParam1, var uParam2)
{
	func_394(&(uParam1->f_99[0]), 1);
	if (func_120(&((*uParam0)[participant_id_to_int()]->f_1), 1))
	{
		return;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	Var33.f_1 = -1;
	if (!func_605(uParam2, &Var0, func_407(*uParam2)))
	{
		return;
	}
	func_559(*uParam2, func_407(*uParam2), &Var33);
	if (func_606(&(Var0.f_25), 518798111))
	{
		if (func_606(&(Var0.f_25), 1859868723))
		{
			func_395(&uVar38, 2);
		}
		func_396(uParam2->f_1, uParam2->f_2, uVar38, Var0.f_2, Var0, Var33, 0);
		bVar37 = true;
	}
	else
	{
		bVar37 = func_588(&Var0, uParam2->f_2, uParam2->f_1, &Var33);
	}
	if (!bVar37)
	{
		return;
	}
	_uiprompt_enable_prompt_type_this_frame(6);
	_0xc9caeaeec1256e54(-1249243147);
	func_121(&((*uParam0)[participant_id_to_int()]->f_1), 9, *uParam2);
}

int func_412()
{
	return Global_1130634->f_291.f_1;
}

int func_413(var uParam0, int iParam1)
{
	iVar0 = 1;
	while (iVar0 <= (3 - 1))
	{
		iVar1 = func_607(uParam0, (iVar0 * iParam1));
		if (is_entity_visible(func_531(*uParam0, iVar1)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

bool func_414(var uParam0)
{
	return func_578(uParam0);
}

void func_415(var uParam0, var uParam1)
{
	iVar0 = _uiprompt_get_group_id_for_target_entity(func_93(*uParam1, 303108068));
	_uiprompt_set_active_group_this_frame(iVar0, &(uParam0->f_99.f_20), 1, 0, 0, 0);
}

void func_416(var uParam0)
{
	if (!does_cam_exist(uParam0->f_131.f_5))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	set_cam_active(uParam0->f_131, true);
	set_cam_active(uParam0->f_131.f_5, true);
	set_cam_active_with_interp(uParam0->f_131, uParam0->f_131.f_5, 750, 1, 1);
}

bool func_417(var uParam0)
{
	if (!func_608(&(uParam0->f_198), 0))
	{
		return false;
	}
	if (uParam0->f_198 == -1)
	{
		return true;
	}
	switch (func_609(&(uParam0->f_198)))
	{
		case 0:
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

int func_418(var uParam0)
{
	switch (uParam0->f_99.f_30)
	{
		case 1:
			return func_610(2103384153, 0, 1, -1, 1);
		default:
			break;
	}
	return 0;
}

int func_419(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_611(&iParam1);
	if (func_612(iParam1))
	{
		return func_615(iParam0, func_613(iParam1, 1), 1, 1, iParam3, 0, iParam4, iParam5, func_614(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_616(iParam1, 1, 1) };
	if (func_617(iParam1, &iVar21))
	{
		return func_615(iParam0, iVar21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_618(iParam1))
	{
		if (!func_619(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, iParam3))
		{
			return 0;
		}
	}
	else if (!func_620(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, iParam3, iParam4, iParam5, iParam6))
	{
		return 0;
	}
	func_621(Var0);
	return 1;
}

void func_420(var uParam0, var uParam1)
{
	iVar0 = 23;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	if (!func_498(1))
	{
		func_499(1, 1699087565);
	}
	func_500(1, -1636832113);
	func_501(1, 1699087565);
	func_502(1, -244815569);
	iVar2 = func_308(_create_var_string(0, iVar1, func_503(1)), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

bool func_421(var uParam0, var uParam1)
{
	if (!does_entity_exist(func_93(*uParam1, uParam0->f_99.f_12)))
	{
		return false;
	}
	return is_player_targetting_entity(uParam0->f_7, func_93(*uParam1, uParam0->f_99.f_12), false);
}

bool func_422(var uParam0, int iParam1)
{
	if (!func_215(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 466723622;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_423(var uParam0, int iParam1)
{
	uParam0->f_2 = 1465961145;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_424(var uParam0, int iParam1)
{
	uParam0->f_2 = 787092883;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_425(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_426(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = func_622(iParam0);
	iVar1 = func_67(iParam0, iVar0);
	if (iVar0 == iVar1)
	{
		if (!func_111(iVar0))
		{
			return false;
		}
	}
	else if (func_111(iVar1))
	{
		iVar0 = iVar1;
	}
	else
	{
		return false;
	}
	return func_623(iVar0) == iParam1;
}

struct<2> func_427(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return func_107();
	}
	return func_624(iParam0);
}

int func_428(int iParam0, struct<2> Param1)
{
	if (!func_25(Param1))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (func_62(Param1, func_73(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_429(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_430(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_431(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	return func_202(&(uParam0->f_197), iParam1, 3);
}

int func_432(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_2;
}

int func_433(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	Var71 = -1;
	Var71.f_1 = -1;
	Var71.f_2 = -1;
	Var71.f_4 = 10;
	Var71.f_15 = 4;
	Var71.f_15.f_5 = 4;
	Var71.f_25 = 1;
	Var71.f_28 = 2;
	Var71.f_28.f_1 = -1;
	Var71.f_28.f_1.f_1 = -1;
	Var71.f_31 = 493038497;
	Var71.f_31.f_1 = 493038497;
	Var104 = 3;
	iVar110 = 255;
	iVar111 = 255;
	iVar110 = _0x4be6c13a45cca8ec(iParam4);
	iVar6 = 0;
	iVar7 = 0;
	if (_network_is_player_index_valid(iVar110))
	{
		if (network_is_player_active(iVar110))
		{
			if (network_is_player_a_participant(iVar110))
			{
				iVar111 = network_get_participant_index(iVar110);
				if (func_625(iVar111))
				{
					if (network_is_participant_active(iVar111))
					{
						iVar2 = iVar111;
						if (func_12(iVar2))
						{
							if ((*uParam1)[iVar2]->f_9)
							{
								iVar6 = (*uParam1)[iVar2]->f_7;
								iVar7 = (*uParam1)[iVar2]->f_8;
							}
						}
					}
				}
			}
		}
	}
	Var104 = { func_368(*uParam3, uParam2->f_7.f_2.f_24) };
	func_626(&uVar8, 62, 1);
	iVar4 = (100 - get_random_int_in_range(0, 100));
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		iVar1 = &uVar8[iVar0];
		if (iVar1 < 0 || iVar1 >= func_627(*uParam3))
		{
		}
		else
		{
			iVar108 = 0;
			Var71 = { func_367(*uParam3, iVar1) };
			if (func_628(Var71.f_2, 1))
			{
			}
			else if (func_431(uParam0, iVar1, *uParam3))
			{
			}
			else if (Var71.f_2.f_1 == iVar6)
			{
			}
			else if (Var71.f_2.f_1 == iVar7)
			{
			}
			else
			{
				iVar109 = 1073742987;
				if (!func_13(&(uParam0->f_3), 4))
				{
					iVar109 |= 4096;
				}
				if (func_369(&Var71, iVar1, &Var104, iParam4, iParam5, uParam3->f_1, &iVar108, iVar109, -1))
				{
					switch (iVar108)
					{
						case 25:
							return -1;
						default:
							break;
					}
				}
				else
				{
					if (func_12(iVar2))
					{
						if (func_629(Var71.f_2))
						{
						}
					else
					{
						}
						else
						{
							Jump @536; //curOff = 529
							return -1;
							if (iVar5 < iVar4)
							{
								if (iVar3 == -1)
								{
									iVar3 = iVar1;
								}
							}
							else
							{
								return iVar1;
							}
						}
						iVar0++;
						return iVar3;
					}
				}
			}
		}
	}
}

void func_434(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_435(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	Var3 = -1;
	Var3.f_1 = -1;
	Var5 = -1;
	Var5.f_1 = -1;
	Var5.f_2 = -1;
	Var5.f_4 = 10;
	Var5.f_15 = 4;
	Var5.f_15.f_5 = 4;
	Var5.f_25 = 1;
	Var5.f_28 = 2;
	Var5.f_28.f_1 = -1;
	Var5.f_28.f_1.f_1 = -1;
	Var5.f_31 = 493038497;
	Var5.f_31.f_1 = 493038497;
	Var38 = 3;
	iVar0 = _0x4be6c13a45cca8ec(iParam4);
	Var38 = { func_368(*uParam3, uParam2->f_7.f_2.f_24) };
	if (!_network_is_player_index_valid(iVar0))
	{
		return -1;
	}
	if (!network_is_player_active(iVar0))
	{
		return -1;
	}
	if (!network_is_player_a_participant(iVar0))
	{
		return -1;
	}
	iVar1 = network_get_participant_index(iVar0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -1;
	}
	Var3 = { (*uParam1)[iVar1]->f_5 };
	if (!func_25(Var3))
	{
		return -1;
	}
	iVar2 = func_428(*uParam3, Var3);
	if (iVar2 == -1)
	{
		return -1;
	}
	Var5 = { func_367(*uParam3, iVar2) };
	if (func_628(Var5.f_2, 1))
	{
		return -1;
	}
	if (func_431(uParam0, iVar2, *uParam3))
	{
		return -1;
	}
	if ((*uParam1)[iVar1]->f_9)
	{
		if (Var5.f_2.f_1 == (*uParam1)[iVar1]->f_7 || Var5.f_2.f_1 == (*uParam1)[iVar1]->f_8)
		{
			return -1;
		}
	}
	iVar43 = 1073742987;
	if (!func_13(&(uParam0->f_3), 4))
	{
		iVar43 |= 4096;
	}
	if (func_369(&Var5, iVar2, &Var38, iParam4, iParam5, uParam3->f_1, &uVar42, iVar43, -1))
	{
		return -1;
	}
	return iVar2;
}

void func_436(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_630(*uParam0);
	iVar1 = func_631(*uParam0);
	iVar2 = func_632(*uParam0);
	iVar3 = func_71(*uParam0);
	iVar4 = func_633(*uParam0);
	iVar5 = func_634(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_635(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_635(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_636(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_437(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	func_637(&(uParam0->f_197), iParam1, 3);
}

void func_438(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_638(&Var0, func_529(0, 8));
}

int func_439(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_639(uParam0))
	{
		return 0;
	}
	if (!func_640(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = player_id();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_641(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_642(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = get_network_time_accurate();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*uParam0->f_3[iVar1] = { *uParam1 };
	func_643(uParam0->f_3[iVar1], 0);
	*uParam0++;
	return 1;
}

void func_440(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_441(var uParam0)
{
	if (!func_644(uParam0))
	{
		return -1;
	}
	iVar0 = func_645(uParam0, uParam0->f_9);
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
			iVar0 = func_645(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_442(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_443(int iParam0)
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
	if (!func_442(iParam0))
	{
		return Var0;
	}
	return *Global_1198046->f_231[iParam0];
}

bool func_444(int iParam0, bool bParam1)
{
	return func_646(func_70(), iParam0, bParam1);
}

int func_445(var uParam0, int iParam1, int iParam2)
{
	iVar50 = _0xd1bf325c8252a982(iParam1, &Var0);
	iVar51 = 0;
	while (iVar51 <= (iVar50 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar51]);
		if (!_network_is_player_index_valid(iVar53))
		{
		}
		else if (!network_is_player_active(iVar53))
		{
		}
		else if (!network_is_player_a_participant(iVar53))
		{
		}
		else
		{
			iVar52 = network_get_participant_index(iVar53);
			if (iVar52 < 0 || iVar52 >= 32)
			{
			}
			else if (func_120(&((*uParam0)[iVar52]->f_1), iParam2))
			{
				return iVar53;
			}
		}
		iVar51++;
	}
	return 255;
}

bool func_446(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return func_623(iParam1) == iParam0;
}

bool func_447(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_54 && iParam1) != 0;
}

void func_448(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_6 = uParam0;
	Var0.f_11 = iParam1;
	Var0.f_4 = 6;
	func_647(&Var0);
}

bool func_449(var uParam0, int iParam1)
{
	if (!func_215(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = -155807419;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_450(var uParam0, int iParam1)
{
	if (!func_648(uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1091365066;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_451(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_649(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = -1924253471;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar10 = iVar0;
	iVar1 = func_650(iVar10, 1);
	if (iVar1 == -1)
	{
		return false;
	}
	vParam0.f_2 = -904522836;
	if (!_datafile_get_string(&uVar2, &vParam0))
	{
		return false;
	}
	_datafile_get_hash(&iVar0, &vParam0);
	uParam5->f_67.f_3[iVar1] = iVar0;
	return true;
}

int func_452(var uParam0)
{
	return uParam0->f_137.f_58;
}

int func_453(var uParam0)
{
	return uParam0->f_137.f_57;
}

int func_454(var uParam0, int iParam1)
{
	return &(uParam0->f_137[iParam1]);
}

int func_455(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_5;
}

int func_456(int iParam0)
{
	return func_77(func_455(iParam0));
}

int func_457()
{
	return Global_1102219->f_3674;
}

var func_458(int iParam0)
{
	Var0 = { func_115(817387112, func_114(iParam0)) };
	return func_651(Var0);
}

int func_459(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_460(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_137[iParam2]->f_1++;
}

void func_461(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_137[iParam2] = iParam3;
}

void func_462(var uParam0, var uParam1)
{
	uParam0->f_137.f_58++;
}

void func_463(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_137.f_57 = iParam2;
}

int func_464(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return 0;
	}
	if (!stat_id_get_bool(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

void func_465(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_467(iParam0, 1);
	func_468(iParam0, 1);
	func_469(iParam0, 128);
}

void func_466(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_467(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_200(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_468(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_469(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_470(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_471(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_472(var uParam0)
{
	if (uParam0->f_99.f_14 == -1)
	{
		return;
	}
	func_652(&(uParam0->f_99[0]), _create_var_string(2, "GFH_ACCEPT_NO_MISSION"), 1);
	uParam0->f_99.f_14 = -1;
	uParam0->f_99.f_16 = -1;
}

void func_473(var uParam0)
{
	if (uParam0->f_99.f_14 == -2)
	{
		return;
	}
	func_652(&(uParam0->f_99[0]), _create_var_string(2, "GFH_GREET_NO_MISSION"), 1);
	uParam0->f_99.f_14 = -2;
	uParam0->f_99.f_16 = -1;
}

void func_474(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_99.f_14 == iParam2 && uParam0->f_99.f_16 == uParam0->f_7.f_2.f_14)
	{
		return;
	}
	iVar0 = func_495(*uParam1, iParam2);
	switch (iVar0)
	{
		case 493038497:
			iVar1 = 0;
			break;
		case -1563022819:
			iVar1 = _create_var_string(2, "GFH_BLIP_GUNSLINGER");
			break;
		case -858967395:
			iVar1 = _create_var_string(2, "GFH_BLIP_OUTLAW");
			break;
		default:
			break;
	}
	sVar2 = _create_var_string(0, func_653(*uParam1, iParam2));
	iVar3 = func_316(&(uParam0->f_99[0]));
	switch (uParam0->f_7.f_2.f_14)
	{
		case 1:
			if (func_361(*uParam1, iParam2, -890716772))
			{
				if (iVar0 == 493038497)
				{
					_uiprompt_set_text(iVar3, _create_var_string(10, "GFH_ACCEPT", sVar2));
				}
				else
				{
					_uiprompt_set_text(iVar3, _create_var_string(42, "GFH_ACCEPT_BLIP", iVar1, sVar2));
				}
			}
			else if (iVar0 == 493038497)
			{
				_uiprompt_set_text(iVar3, _create_var_string(42, "GFH_ACCEPT_BLIP", "GFH_BLIP_OFFENSIVE", sVar2));
			}
			else
			{
				_uiprompt_set_text(iVar3, _create_var_string(170, "GFH_ACCEPT_BLIP_TO_OFFENSIVE", "GFH_BLIP_OFFENSIVE", iVar1, sVar2));
			}
			break;
		default:
			if (iVar0 == 493038497)
			{
				_uiprompt_set_text(iVar3, _create_var_string(10, "GFH_ACCEPT", sVar2));
			}
			else
			{
				_uiprompt_set_text(iVar3, _create_var_string(42, "GFH_ACCEPT_BLIP", iVar1, sVar2));
			}
			break;
	}
	uParam0->f_99.f_14 = iParam2;
	uParam0->f_99.f_16 = uParam0->f_7.f_2.f_14;
}

void func_475(var uParam0)
{
	if (uParam0->f_99.f_15 == -1)
	{
		return;
	}
	func_652(&(uParam0->f_99[1]), _create_var_string(2, "GFH_GREET_NO_MISSION"), 1);
	uParam0->f_99.f_15 = -1;
	uParam0->f_99.f_17 = -1;
}

void func_476(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_99.f_15 == iParam2 && uParam0->f_99.f_17 == uParam0->f_7.f_2.f_14)
	{
		return;
	}
	iVar0 = func_495(*uParam1, iParam2);
	switch (iVar0)
	{
		case 493038497:
			iVar1 = 0;
			break;
		case -1563022819:
			iVar1 = _create_var_string(2, "GFH_BLIP_GUNSLINGER");
			break;
		case -858967395:
			iVar1 = _create_var_string(2, "GFH_BLIP_OUTLAW");
			break;
		default:
			break;
	}
	iVar2 = func_316(&(uParam0->f_99[1]));
	switch (uParam0->f_7.f_2.f_14)
	{
		case 1:
			if (func_361(*uParam1, iParam2, -890716772))
			{
				if (iVar0 == 493038497)
				{
					_uiprompt_set_text(iVar2, _create_var_string(2, "GFH_TALK"));
				}
				else
				{
					_uiprompt_set_text(iVar2, _create_var_string(10, "GFH_GREET_BLIP", iVar1));
				}
			}
			else if (iVar0 == 493038497)
			{
				_uiprompt_set_text(iVar2, _create_var_string(10, "GFH_GREET_BLIP", "GFH_BLIP_OFFENSIVE"));
			}
			else
			{
				_uiprompt_set_text(iVar2, _create_var_string(42, "GFH_GREET_BLIP_TO_OFFENSIVE", "GFH_BLIP_OFFENSIVE", iVar1));
			}
			break;
		default:
			if (iVar0 == 493038497)
			{
				_uiprompt_set_text(iVar2, _create_var_string(2, "GFH_TALK"));
			}
			else
			{
				_uiprompt_set_text(iVar2, _create_var_string(10, "GFH_GREET_BLIP", iVar1));
			}
			break;
	}
	uParam0->f_99.f_15 = iParam2;
	uParam0->f_99.f_17 = uParam0->f_7.f_2.f_14;
}

bool func_477(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return false;
	}
	iVar0 = func_141(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

bool func_478(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return false;
	}
	return !func_200(iParam0, 4);
}

void func_479(var uParam0, var uParam1)
{
	if (does_cam_exist(uParam0->f_131))
	{
		return;
	}
	fVar6 = 70f;
	if (!func_654(uParam0, uParam1, &vVar0, &vVar3))
	{
		return;
	}
	uParam0->f_131 = create_camera(26379945, false);
	set_cam_coord(uParam0->f_131, vVar0);
	set_cam_rot(uParam0->f_131, vVar3, 2);
	set_cam_fov(uParam0->f_131, fVar6);
	set_cam_active(uParam0->f_131, false);
}

void func_480(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		func_655(uParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_481(var uParam0, var uParam1)
{
	if (does_cam_exist(uParam0->f_131.f_5))
	{
		return;
	}
	fVar6 = 70f;
	if (!func_656(uParam1, &vVar0, &vVar3))
	{
		return;
	}
	uParam0->f_131.f_5 = create_camera(26379945, false);
	set_cam_coord(uParam0->f_131.f_5, vVar0);
	set_cam_rot(uParam0->f_131.f_5, vVar3, 2);
	set_cam_fov(uParam0->f_131.f_5, fVar6);
	set_cam_active(uParam0->f_131.f_5, false);
}

void func_482(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_137[iParam2]->f_1 = 0;
}

bool func_483(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

bool func_484(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_657(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

void func_485(var uParam0, var uParam1)
{
	iVar0 = 18;
	if (!func_106(uParam1->f_2))
	{
		return;
	}
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (!func_305(uParam0, uParam1, iVar0, 0))
	{
		return;
	}
	if (!func_421(uParam0, uParam1))
	{
		return;
	}
	if (func_306())
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

Vector3 func_486(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

Vector3 func_487(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

Vector3 func_488(vector3 vParam0)
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

float func_489(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_490(var uParam0, var uParam1)
{
	iVar0 = 4;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_491(var uParam0, var uParam1)
{
	iVar0 = 3;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_492(var uParam0, var uParam1)
{
	iVar0 = 5;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_493(var uParam0, int iParam1)
{
	func_658(uParam0, iParam1);
}

int func_494(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

int func_495(int iParam0, int iParam1)
{
	return (*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_31;
}

struct<2> func_496(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_497(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

bool func_498(int iParam0)
{
	if (!func_659(iParam0))
	{
		return false;
	}
	iVar0 = func_503(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return true;
}

void func_499(int iParam0, int iParam1)
{
	if (!func_659(iParam0))
	{
		return;
	}
	if (does_blip_exist(&(Global_1109804->f_260.f_5458[iParam0])))
	{
		remove_blip(Global_1109804->f_260.f_5458[iParam0]);
	}
	Global_1109804->f_260.f_5458[iParam0] = _0x3e593df9c2962ec6(iParam1);
}

void func_500(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_659(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return;
	}
	set_blip_sprite(iVar0, iParam1, true);
}

void func_501(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_659(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return;
	}
	if (_0xedd964b7984ac291(iVar0, iParam1))
	{
	}
}

void func_502(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_659(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return;
	}
	if (_blip_set_modifier(iVar0, iParam1))
	{
	}
}

char* func_503(int iParam0)
{
	return &(Global_1109804->f_260.f_5458[iParam0]);
}

void func_504(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_505(var uParam0, int iParam1)
{
	return func_202(&(uParam0->f_25), func_660(iParam1, 1), 19);
}

bool func_506(int iParam0)
{
	if (Global_1109804->f_21.f_122 != 1)
	{
		return false;
	}
	return func_202(&(Global_1109804->f_21.f_122), iParam0, 1);
}

void func_507(int iParam0)
{
	if (Global_1109804->f_21.f_122 != 1)
	{
		return;
	}
	if (func_637(&(Global_1109804->f_21.f_122), iParam0, 1))
	{
	}
}

int func_508(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

int func_509(int iParam0)
{
	return func_661(iParam0);
}

int func_510(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_1;
}

int func_511(var uParam0)
{
	if (func_25(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_512(int iParam0, int iParam1)
{
	if (!func_185())
	{
		return 0;
	}
	if (!func_106(iParam0))
	{
		return 15;
	}
	iVar0 = func_77(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_662(iParam1, 2))
	{
		if (!_unlock_is_visible(iVar0))
		{
			return 18;
		}
	}
	if (!func_662(iParam1, 1))
	{
		if (!_unlock_is_unlocked(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_513(var uParam0, int iParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_662(iParam1, 4))
	{
		if (!_unlock_is_unlocked(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_662(iParam1, 8))
	{
		if (!_unlock_is_visible(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_514(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_662(iParam3, 16))
	{
		return 0;
	}
	if (!func_185())
	{
		return 0;
	}
	if (func_628(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_663(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_515(var uParam0, int iParam1)
{
	if (func_662(iParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_71(func_70());
	if (is_bit_set(uParam0->f_25.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_516(int iParam0, int iParam1)
{
	if (func_662(iParam1, 1024))
	{
		return 0;
	}
	if (!func_106(iParam0))
	{
		return 15;
	}
	if (!func_298(func_134(iParam0)))
	{
		return 0;
	}
	iVar1 = player_id();
	iVar0 = _0x901e0dc25080c8b9(iVar1);
	if (_0x4be6c13a45cca8ec(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_517(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_106(iParam1))
	{
		return 15;
	}
	if (!func_185())
	{
		return 0;
	}
	if (func_662(iParam3, 32))
	{
		return 0;
	}
	if (func_628(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam2))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam2))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam2);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_664(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_518(var uParam0, int iParam1, int iParam2)
{
	if (!func_629(uParam0->f_2))
	{
		return 21;
	}
	if (!func_185())
	{
		return 0;
	}
	if (func_662(iParam2, 64))
	{
		return 0;
	}
	if (func_628(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam1))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam1))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_665(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_519(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_666(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_432(iParam1) != 0)
	{
		if (func_662(iParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (!func_185())
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam0))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_25((*Global_1056141)[iVar0]->f_2))
	{
		return 6;
	}
	return 0;
}

int func_521(int iParam0, var uParam1, int iParam2)
{
	if (func_662(iParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_31.f_1 == 493038497)
	{
		return 0;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (_network_is_player_index_valid(iVar0))
	{
		if (network_is_player_active(iVar0))
		{
			iVar1 = func_667(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_31.f_1)
	{
		case -1563022819:
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case -858967395:
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_522(var uParam0, int iParam1, int iParam2)
{
	if (func_662(iParam2, 512))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(iParam1) < &uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_523(var uParam0, int iParam1)
{
	if (func_662(iParam1, 128))
	{
		return 0;
	}
	if (func_628(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	func_79(&Var0);
	if (!func_25(Var0))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		iVar34 = (Var0.f_15[iVar33] || Var0.f_15.f_5[iVar33]) // PointerArith;
		if (iVar34 == 0)
		{
		}
		else
		{
			iVar35 = (uParam0->f_15.f_5[iVar33] && iVar34);
			if (iVar35 != 0)
			{
				return 9;
			}
		}
		iVar33++;
	}
	return 0;
}

int func_524(var uParam0, int iParam1)
{
	if (func_662(iParam1, 4096))
	{
		return 0;
	}
	if (&uParam0->f_4[1] > 0)
	{
		iVar1 = get_max_num_network_peds();
		iVar0 = get_num_reserved_mission_peds(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (&uParam0->f_4[2] > 0)
	{
		iVar1 = get_max_num_network_objects();
		iVar0 = get_num_reserved_mission_objects(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (&uParam0->f_4[3] > 0)
	{
		iVar1 = get_max_num_network_vehicles();
		iVar0 = get_num_reserved_mission_vehicles(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (&uParam0->f_4[4] > 0)
	{
		iVar1 = get_max_num_network_pickups();
		iVar0 = _0x62be3ecc79fbd004(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_525(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_484(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_526(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_106(iParam3))
	{
		return 15;
	}
	if (!func_34(iParam4))
	{
		return 20;
	}
	vVar0 = { func_295(iParam4) };
	bVar4 = func_66(iParam1, 536870912);
	if (func_606(&(uParam0->f_25), 2015728894) || func_606(&(uParam0->f_25), -1211373264))
	{
		if (!func_668(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_669(*uParam0);
	iVar6 = func_670(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_671(uParam0->f_2, iVar5, iVar7) };
			if (func_219(vVar8))
			{
			}
			else if (_0x397769175a7dbb30(vVar8, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_527(var uParam0, int iParam1)
{
	iVar0 = func_669(*uParam0);
	iVar1 = func_670(uParam0->f_2, iVar0);
	bVar2 = func_66(iParam1, 536870912);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_671(uParam0->f_2, iVar0, iVar3) };
			if (func_219(vVar4))
			{
			}
			else if (_0x397769175a7dbb30(vVar4, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_528(var uParam0, int iParam1, int iParam2)
{
	bVar3 = func_662(iParam1, 1073741824);
	bVar4 = func_662(iParam1, 536870912);
	if (func_662(iParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_487(_0x4be6c13a45cca8ec(iParam2)) };
	}
	func_672(*uParam0, &iVar1, &uVar2);
	iVar8 = func_674(iVar1, uVar2, func_673(iVar1), vVar5, !bVar3, bVar4, 1, -1082130432);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

var func_529(int iParam0, int iParam1)
{
	return func_675(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_530(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 33, &uParam1);
}

int func_531(int iParam0, int iParam1)
{
	return Global_1120070->f_8478[iParam0][iParam1];
}

bool func_532()
{
	return (_unlock_is_unlocked(-2062544048) && _unlock_is_visible(-2062544048));
}

int func_533(int iParam0)
{
	iVar0 = func_676(iParam0);
	while (iVar0 <= (func_677(iParam0) - 1))
	{
		if (!func_678(iVar0))
		{
		}
		else if (!func_679(iVar0))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_534()
{
	if (!_0x8faf4d262faba99c(&iVar0))
	{
		return true;
	}
	return Global_1296859->f_21 < iVar0;
}

int func_535(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	iVar0 = func_680(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_681(1, iParam0);
		if (iVar1 == 0)
		{
			return 0;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_536()
{
	if (func_682(2103384153, 1, 1, 0) == 0)
	{
		return false;
	}
	return true;
}

void func_537(var uParam0, var uParam1)
{
	iVar10 = func_407(*uParam1);
	if (iVar10 == -1)
	{
		iVar0 = -1896314993;
	}
	else
	{
		bVar9 = (does_entity_exist(func_531(*uParam1, iVar10)) && is_entity_visible(func_531(*uParam1, iVar10)));
		if (bVar9)
		{
			switch (uParam0->f_99.f_29)
			{
				case 1:
					iVar0 = func_683(uParam1, iVar10);
					break;
				case 0:
					iVar0 = -1896314993;
					break;
			}
		}
		else
		{
			iVar0 = -1896314993;
		}
	}
	if (iVar0 == uParam0->f_99.f_19)
	{
		return;
	}
	if (iVar10 == -1)
	{
		StringCopy(&cVar1, "GFH_INTERACT_BOUNTY_BOARD", 64);
	}
	else if (bVar9)
	{
		switch (uParam0->f_99.f_29)
		{
			case 1:
				cVar1 = { func_684(uParam1, iVar10) };
				break;
			case 0:
				StringCopy(&cVar1, "GFH_INTERACT_BOUNTY_BOARD", 64);
				break;
		}
	}
	else
	{
		StringCopy(&cVar1, "GFH_INTERACT_BOUNTY_BOARD", 64);
	}
	uParam0->f_99.f_19 = iVar0;
	uParam0->f_99.f_20 = { cVar1 };
}

void func_538(var uParam0)
{
	if (func_94(&(uParam0->f_99[9])))
	{
		if (!func_477(&(uParam0->f_99[9]), 1))
		{
			func_319(&(uParam0->f_99[9]), 1, 0);
		}
	}
}

void func_539(var uParam0)
{
	if (func_94(&(uParam0->f_99[9])))
	{
		if (!func_478(&(uParam0->f_99[9]), 0))
		{
			func_318(&(uParam0->f_99[9]), 1, 0, 0);
		}
	}
}

void func_540(var uParam0)
{
	if (func_94(&(uParam0->f_99[3])))
	{
		if (!func_478(&(uParam0->f_99[3]), 0))
		{
			func_318(&(uParam0->f_99[3]), 1, 0, 0);
		}
	}
}

void func_541(var uParam0)
{
	if (func_94(&(uParam0->f_99[3])))
	{
		if (!func_477(&(uParam0->f_99[3]), 1))
		{
			func_319(&(uParam0->f_99[3]), 1, 0);
		}
	}
}

void func_542(var uParam0, var uParam1)
{
	iVar0 = 19;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_543(var uParam0)
{
	uParam0->f_99.f_30 = 1;
}

void func_544(var uParam0)
{
	iVar0 = func_610(2103384153, 0, 1, -1, 1);
	iVar1 = func_685(2103384153, iVar0, 1, 0, 1);
	if (func_686(iVar0) || func_687(iVar0))
	{
		func_689(&(uParam0->f_99[9]), "CUTSCENE_ACTION_PURCHASE_OFFER", func_688(2103384153), iVar1, 1);
	}
	else
	{
		func_689(&(uParam0->f_99[9]), "CUTSCENE_ACTION_PURCHASE", func_688(2103384153), iVar1, 1);
	}
}

bool func_545(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_690(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

void func_546(var uParam0, var uParam1)
{
	iVar0 = 21;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (!func_381())
	{
		return;
	}
	if (func_25(uParam0->f_7.f_2.f_25))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_547(int iParam0, int iParam1, int iParam2)
{
	Global_1051439->f_4466.f_3 = iParam0;
	Global_1051439->f_4466.f_4 = iParam1;
	Global_1051439->f_4466.f_5 = iParam2;
}

void func_548(int iParam0)
{
	Global_1051439->f_4466 = iParam0;
}

void func_549(var uParam0)
{
	if (uParam0->f_99.f_31 == uParam0->f_99.f_29)
	{
		return;
	}
	iVar0 = func_316(&(uParam0->f_99[8]));
	switch (uParam0->f_99.f_29)
	{
		case 1:
			_uiprompt_set_text(iVar0, _create_var_string(2, "GFH_ZOOM"));
			break;
		case 0:
			_uiprompt_set_text(iVar0, _create_var_string(2, "SHOP_USE_GOLD"));
			break;
		default:
			break;
	}
	uParam0->f_99.f_31 = uParam0->f_99.f_29;
}

int func_550(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_13;
}

int func_551(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_11;
}

int func_552(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_12;
}

void func_553(var uParam0)
{
	if (func_94(&(uParam0->f_99[8])))
	{
		if (!func_477(&(uParam0->f_99[8]), 1))
		{
			func_319(&(uParam0->f_99[8]), 1, 0);
		}
	}
}

void func_554(var uParam0)
{
	if (func_94(&(uParam0->f_99[8])))
	{
		if (!func_478(&(uParam0->f_99[8]), 0))
		{
			func_318(&(uParam0->f_99[8]), 1, 0, 0);
		}
	}
}

bool func_555(int iParam0, bool bParam1)
{
	if (bParam1 && !func_94(iParam0))
	{
		return false;
	}
	iVar0 = func_141(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_556(var uParam0, int iParam1)
{
	if (!does_cam_exist(&(uParam0->f_131.f_1[iParam1])))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	set_cam_active(&(uParam0->f_131.f_1[iParam1]), true);
	set_cam_active(uParam0->f_131, true);
	set_cam_active_with_interp(&(uParam0->f_131.f_1[iParam1]), uParam0->f_131, 750, 1, 1);
}

void func_557(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_13 = iParam1;
}

void func_558(var uParam0, int iParam1)
{
	if (!does_cam_exist(&(uParam0->f_131.f_1[iParam1])))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	set_cam_active(uParam0->f_131, true);
	set_cam_active(&(uParam0->f_131.f_1[iParam1]), true);
	set_cam_active_with_interp(uParam0->f_131, &(uParam0->f_131.f_1[iParam1]), 750, 1, 1);
}

void func_559(int iParam0, int iParam1, var uParam2)
{
	_copy_memory(uParam2, (*Global_1120070)[iParam0]->f_24.f_2049[iParam1], 4);
}

bool func_560(var uParam0)
{
	if (func_313(*uParam0) == 0)
	{
		return false;
	}
	if (func_552(*uParam0) == 2)
	{
		return false;
	}
	return true;
}

bool func_561(var uParam0)
{
	return func_413(uParam0, 1) != -1;
}

void func_562(var uParam0)
{
	if (func_94(&(uParam0->f_99[5])))
	{
		if (!func_478(&(uParam0->f_99[5]), 0))
		{
			func_318(&(uParam0->f_99[5]), 1, 0, 0);
		}
	}
	if (func_94(&(uParam0->f_99[4])))
	{
		if (!func_478(&(uParam0->f_99[4]), 0))
		{
			func_318(&(uParam0->f_99[4]), 1, 0, 0);
		}
	}
}

void func_563(var uParam0)
{
	if (func_94(&(uParam0->f_99[7])))
	{
		if (!func_477(&(uParam0->f_99[7]), 1))
		{
			func_319(&(uParam0->f_99[7]), 1, 0);
		}
	}
}

void func_564(var uParam0)
{
	if (func_94(&(uParam0->f_99[7])))
	{
		if (!func_478(&(uParam0->f_99[7]), 0))
		{
			func_318(&(uParam0->f_99[7]), 1, 0, 0);
		}
	}
}

void func_565(var uParam0)
{
	if (func_94(&(uParam0->f_99[6])))
	{
		if (!func_477(&(uParam0->f_99[6]), 1))
		{
			func_319(&(uParam0->f_99[6]), 1, 0);
		}
	}
}

void func_566(var uParam0)
{
	if (func_94(&(uParam0->f_99[6])))
	{
		if (!func_478(&(uParam0->f_99[6]), 0))
		{
			func_318(&(uParam0->f_99[6]), 1, 0, 0);
		}
	}
}

void func_567(var uParam0)
{
	if (!does_cam_exist(uParam0->f_131.f_5))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_131))
	{
		return;
	}
	set_cam_active(uParam0->f_131.f_5, true);
	set_cam_active(uParam0->f_131, true);
	set_cam_active_with_interp(uParam0->f_131.f_5, uParam0->f_131, 750, 1, 1);
}

void func_568(var uParam0)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (!func_477(&(uParam0->f_99[0]), 1))
		{
			func_319(&(uParam0->f_99[0]), 1, 0);
		}
	}
}

int func_569(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_2;
}

int func_570(int iParam0, int iParam1)
{
	return &((*Global_1130634)[iParam0]->f_2[iParam1]);
}

void func_571(var uParam0, var uParam1)
{
	iVar0 = 20;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

bool func_572(var uParam0)
{
	iVar1 = func_569(uParam0->f_1);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		iVar2 = func_570(iVar1, iVar0);
		if (iVar2 != 0)
		{
			return true;
		}
		iVar0++;
	}
	if (func_408() != -1)
	{
		return true;
	}
	return false;
}

void func_573(var uParam0, var uParam1)
{
	iVar0 = 24;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_574(var uParam0, var uParam1)
{
	iVar0 = 25;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (func_497(func_496(-619416644)) >= 1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (10 - 1))
	{
		if (func_409(iVar1, 1))
		{
			bVar2 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	iVar3 = func_307(uParam0, uParam1, iVar0);
	if (iVar3 == 0)
	{
		return;
	}
	iVar4 = func_308(_create_var_string(0, iVar3), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar4);
	func_504(func_496(-619416644), 1);
}

void func_575(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 26;
	if (iParam2 == 0)
	{
		return;
	}
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (func_497(func_496(63391007)) >= 3)
	{
		return;
	}
	iVar1 = func_691(iParam2);
	if (iVar1 <= 1)
	{
		return;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) >= iVar1)
	{
		return;
	}
	iVar2 = func_307(uParam0, uParam1, iVar0);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = func_308(_create_var_string(0, iVar2), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar3);
	func_504(func_496(63391007), 1);
}

void func_576(int iParam0)
{
	Global_1130634->f_295 = (Global_1130634->f_295 || iParam0);
}

void func_577(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_99.f_11 = (uParam0->f_99.f_11 || iParam2);
}

bool func_578(var uParam0)
{
	if (func_407(*uParam0) != 2)
	{
		return false;
	}
	return func_409(func_408(), 0);
}

bool func_579()
{
	return func_692();
}

void func_580(var uParam0, var uParam1)
{
	iVar0 = 22;
	if (!func_304(uParam0, uParam1, 1))
	{
		return;
	}
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

void func_581(var uParam0)
{
	if (func_94(&(uParam0->f_99[0])))
	{
		if (!func_478(&(uParam0->f_99[0]), 0))
		{
			func_318(&(uParam0->f_99[0]), 1, 0, 0);
		}
	}
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2076061048:
			return 0;
		case 1960865708:
			return 1;
		case -717214561:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_583()
{
	return (_unlock_is_unlocked(1320158438) && _unlock_is_visible(1320158438));
}

bool func_584()
{
	return (_unlock_is_unlocked(1355693032) && _unlock_is_visible(1355693032));
}

void func_585(var uParam0, var uParam1)
{
	iVar0 = 27;
	if (func_303(uParam0, iVar0) > 0)
	{
		return;
	}
	if (!func_304(uParam0, uParam1, 0))
	{
		return;
	}
	if (func_306())
	{
		return;
	}
	iVar1 = func_307(uParam0, uParam1, iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_308(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
	func_309(uParam0, uParam1, iVar0, iVar2);
}

var func_586(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7;
}

void func_587(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar12))
		{
		}
		else if (!network_is_player_active(iVar12))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(iParam1, iVar12))
		{
		}
		else if (_0x424b17a7dc5c90bc(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_693(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = &iVar4[iVar2];
		iVar12 = int_to_playerindex(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

int func_588(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_694(uParam0, &uVar0, uParam2, 0, 0, *uParam3))
	{
		return 0;
	}
	func_695(uParam1, uParam2, *uParam0, uParam0->f_2, *uParam3, player_id(), 0, 0);
	return 1;
}

var func_589(int iParam0, int iParam1)
{
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_4[7]);
}

var func_590(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_3;
}

int func_591(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	iVar0 = func_696(iParam0, iParam1, iParam2, uParam3, uParam4);
	return func_697(iVar0);
}

int func_592(int iParam0, int iParam1)
{
	return (*Global_1297047)[iParam0][iParam1];
}

int func_593(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_3[iParam1]);
}

int func_594(int iParam0)
{
	return &(Global_1297047->f_371[iParam0]);
}

int func_595(int iParam0)
{
	return func_698(iParam0);
}

bool func_596(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_699(uParam0, 4194304);
		return true;
	}
	iVar0 = func_700(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_63755[iVar0];
	uParam0->f_61 = { Global_265377->f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_4[iVar0]->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_4[iVar0]->f_4}, 8);
	func_701(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_702(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_703(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_704(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_705(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_706(iVar1) };
	}
	else if (func_707(uParam0->f_17))
	{
		uParam0->f_53 = { func_598(func_708(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_709(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_710(uParam0->f_16) };
		if (!func_25(uParam0->f_53))
		{
			uParam0->f_53 = { func_712(func_711(uParam0->f_21.f_2)) };
		}
	}
	func_713(uParam0);
	func_699(uParam0, 4194304);
	return true;
}

int func_597(int iParam0)
{
	return func_714(iParam0);
}

struct<2> func_598(int iParam0)
{
	return func_715(iParam0);
}

void func_599()
{
	func_716(1);
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case -86207568:
			return 5;
		case 1896585330:
			return 2;
		case 769966168:
			return 3;
		case 1087736289:
			return 7;
		case -2032510574:
			return 2;
		case 860783980:
			return 0;
		case -953689515:
			return 6;
		case 1194107589:
			return 4;
		case -233841303:
			return 6;
		case 485557528:
			return 3;
		case -896565033:
			return 1;
		case -979677797:
			return 5;
		case 1184730938:
			return 1;
		default:
			break;
	}
	return 9;
}

void func_601(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_457() != player_id())
	{
		return;
	}
	func_717(iParam0);
	func_718(iParam1);
	func_719(iParam2);
	func_720(iParam3);
}

void func_602(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64, int iParam66, int iParam67, int iParam68)
{
	func_721(iParam67, Param0.f_33, 2, Param0.f_17, Param64, iParam66, -1, 0, 0, iParam68);
}

void func_603(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

void func_604(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686->f_28662.f_65.f_28 = 1;
		Global_1071686->f_28662.f_65.f_29 = iParam3;
		Global_1071686->f_28662.f_65.f_26 = iParam6;
		Global_1071686->f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			set_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686->f_28662.f_65.f_30 = 1;
		Global_1071686->f_28662.f_65.f_33 = !bParam1;
		Global_1071686->f_28662.f_65.f_31 = iParam2;
		Global_1071686->f_28662.f_65.f_32 = iParam4;
		Global_1071686->f_28662.f_65.f_35 = iParam5;
		if (is_bit_set(Global_1071686->f_28662.f_65.f_8, 18))
		{
			clear_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
}

bool func_605(var uParam0, var uParam1, int iParam2)
{
	vVar71.f_1 = -1;
	uVar77 = 13;
	uVar91 = 13;
	Var106 = -1;
	Var106.f_1 = -1;
	Var106.f_2 = -1;
	Var106.f_4 = 10;
	Var106.f_15 = 4;
	Var106.f_15.f_5 = 4;
	Var106.f_25 = 1;
	Var106.f_28 = 2;
	Var106.f_28.f_1 = -1;
	Var106.f_28.f_1.f_1 = -1;
	Var106.f_31 = 493038497;
	Var106.f_31.f_1 = 493038497;
	Var139 = -1;
	Var139.f_1 = -1;
	Var139.f_2 = -1;
	Var139.f_4 = 10;
	Var139.f_15 = 4;
	Var139.f_15.f_5 = 4;
	Var139.f_25 = 1;
	Var139.f_28 = 2;
	Var139.f_28.f_1 = -1;
	Var139.f_28.f_1.f_1 = -1;
	Var139.f_31 = 493038497;
	Var139.f_31.f_1 = 493038497;
	Var172 = -1;
	Var172.f_1 = -1;
	Var172.f_2 = -1;
	Var172.f_4 = 10;
	Var172.f_15 = 4;
	Var172.f_15.f_5 = 4;
	Var172.f_25 = 1;
	Var172.f_28 = 2;
	Var172.f_28.f_1 = -1;
	Var172.f_28.f_1.f_1 = -1;
	Var172.f_31 = 493038497;
	Var172.f_31.f_1 = 493038497;
	Var205 = -1;
	Var205.f_1 = -1;
	Var205.f_2 = -1;
	Var205.f_4 = 10;
	Var205.f_15 = 4;
	Var205.f_15.f_5 = 4;
	Var205.f_25 = 1;
	Var205.f_28 = 2;
	Var205.f_28.f_1 = -1;
	Var205.f_28.f_1.f_1 = -1;
	Var205.f_31 = 493038497;
	Var205.f_31.f_1 = 493038497;
	Var238 = -1;
	Var238.f_1 = -1;
	Var238.f_2 = -1;
	Var238.f_4 = 10;
	Var238.f_15 = 4;
	Var238.f_15.f_5 = 4;
	Var238.f_25 = 1;
	Var238.f_28 = 2;
	Var238.f_28.f_1 = -1;
	Var238.f_28.f_1.f_1 = -1;
	Var238.f_31 = 493038497;
	Var238.f_31.f_1 = 493038497;
	Var271 = -1;
	Var271.f_1 = -1;
	Var271.f_2 = -1;
	Var271.f_4 = 10;
	Var271.f_15 = 4;
	Var271.f_15.f_5 = 4;
	Var271.f_25 = 1;
	Var271.f_28 = 2;
	Var271.f_28.f_1 = -1;
	Var271.f_28.f_1.f_1 = -1;
	Var271.f_31 = 493038497;
	Var271.f_31.f_1 = 493038497;
	Var304 = -1;
	Var304.f_1 = -1;
	Var304.f_2 = -1;
	Var304.f_4 = 10;
	Var304.f_15 = 4;
	Var304.f_15.f_5 = 4;
	Var304.f_25 = 1;
	Var304.f_28 = 2;
	Var304.f_28.f_1 = -1;
	Var304.f_28.f_1.f_1 = -1;
	Var304.f_31 = 493038497;
	Var304.f_31.f_1 = 493038497;
	Var337 = -1;
	Var337.f_1 = -1;
	Var337.f_2 = -1;
	Var337.f_4 = 10;
	Var337.f_15 = 4;
	Var337.f_15.f_5 = 4;
	Var337.f_25 = 1;
	Var337.f_28 = 2;
	Var337.f_28.f_1 = -1;
	Var337.f_28.f_1.f_1 = -1;
	Var337.f_31 = 493038497;
	Var337.f_31.f_1 = 493038497;
	uVar370 = 3;
	func_626(&uVar8, 62, 1);
	iVar376 = _0x901e0dc25080c8b9(player_id());
	iVar2 = func_722(player_id());
	iVar6 = -1;
	func_559(*uParam0, iParam2, &vVar71);
	iVar75 = func_582(vVar71.z);
	iVar76 = vVar71.x;
	iVar3 = func_691(iVar76);
	if (iVar3 <= 0 || iVar3 > 6)
	{
		return false;
	}
	func_723(&uVar77);
	func_724(&uVar91);
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		iVar1 = &uVar8[iVar0];
		iVar5 = 0;
		iVar4 = 0;
		iVar105 = -1;
		if (iVar1 >= func_627(*uParam0))
		{
		}
		else
		{
			Var106 = { func_367(*uParam0, iVar1) };
			iVar105 = func_508(Var106.f_2);
			if (func_725(iVar105) != 7)
			{
			}
			else if (!func_727(iVar105, func_726(iVar75, 1)))
			{
			}
			else
			{
				iVar5 = func_728(iVar105, -1883278863, -1456364914);
				iVar4 = func_728(iVar105, -1883278863, 1237176269);
				if (iVar4 < iVar5)
				{
				}
				else if (iVar3 < iVar5 && iVar3 > iVar4)
				{
				}
				else if (Var205.f_2 != -1)
				{
					if (func_729(&uVar77, Var106.f_2.f_1))
					{
					}
					else
					{
						iVar374 = 48;
						if (func_369(&Var106, iVar1, &uVar370, iLocal_381, iVar2, uParam0->f_1, &uVar375, iLocal_379, -1))
						{
							if (Var139.f_2 == -1)
							{
								iVar374 = 48;
								iVar374 = iLocal_379 | 64;
								if (func_369(&Var106, iVar1, &uVar370, iLocal_381, iVar2, uParam0->f_1, &uVar375, iLocal_379, -1))
								{
								}
								else if (func_729(&uVar77, Var106.f_2.f_1))
								{
									if (Var304.f_2 == -1)
									{
										_copy_memory(&Var304, &Var106, 33);
									}
								}
								else
								{
									_copy_memory(&Var139, &Var106, 33);
								}
							}
							if (Var238.f_2 == -1)
							{
								iVar374 = 48;
								iVar374 = iLocal_379 | 536877104;
								if (func_369(&Var106, iVar1, &uVar370, iLocal_381, iVar2, uParam0->f_1, &uVar375, iLocal_379, -1))
								{
								}
								else if (func_729(&uVar77, Var106.f_2.f_1))
								{
									if (func_729(&uVar77, Var106.f_2.f_1))
									{
										if (Var337.f_2 == -1)
										{
											_copy_memory(&Var337, &Var106, 33);
											func_730(&(Var238.f_25), 518798111);
										}
									}
								}
								else
								{
									_copy_memory(&Var238, &Var106, 33);
									func_730(&(Var238.f_25), 518798111);
								}
							}
							if (Var271.f_2 == -1)
							{
								iVar374 = 48;
								iVar374 = iLocal_379 | 536877168;
								if (func_369(&Var106, iVar1, &uVar370, iLocal_381, iVar2, uParam0->f_1, &uVar375, iLocal_379, -1))
								{
								}
								else if (func_729(&uVar77, Var106.f_2.f_1))
								{
									if (func_729(&uVar77, Var106.f_2.f_1))
									{
										if (Var337.f_2 == -1)
										{
											_copy_memory(&Var337, &Var106, 33);
											func_730(&(Var238.f_25), 518798111);
										}
									}
								}
								else
								{
									_copy_memory(&Var271, &Var106, 33);
									func_730(&(Var271.f_25), 518798111);
								}
							}
						}
						else
						{
							if (Var205.f_2 == -1)
							{
								if (func_729(&uVar77, Var106.f_2.f_1))
								{
									if (Var304.f_2 == -1)
									{
										_copy_memory(&Var304, &Var106, 33);
									}
								}
								else
								{
									_copy_memory(&Var205, &Var106, 33);
								}
							}
							iVar7 = func_731(&uVar91, Var106.f_2);
							if (iVar6 == -1)
							{
								if (func_729(&uVar77, Var106.f_2.f_1))
								{
								}
								else
								{
									_copy_memory(&Var172, &Var106, 33);
									iVar6 = iVar7;
								}
							}
							else if (iVar7 < iVar6)
							{
								_copy_memory(&Var172, &Var106, 33);
							}
						}
					}
					iVar0++;
					_copy_memory(uParam1, &Var172, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var205, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var139, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var238, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var271, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var304, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					_copy_memory(uParam1, &Var337, 33);
					if (uParam1->f_2 != -1)
					{
						return true;
					}
					return false;
				}
			}
		}
	}
}

bool func_606(var uParam0, int iParam1)
{
	return func_202(uParam0, func_660(iParam1, 1), 1);
}

int func_607(var uParam0, int iParam1)
{
	return ((func_407(*uParam0) + iParam1) + 3 % 3);
}

bool func_608(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_732(iParam0))
		{
			return false;
		}
	}
	if (func_733(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_609(int* iParam0)
{
	return func_734(iParam0->f_1);
}

bool func_610(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0))
	{
		return func_736(func_613(iParam0, 0), bParam1, bParam2, iParam3, func_614(iParam0));
	}
	if (func_737(iParam0, bParam4) || func_738(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_614(iParam0) && (func_739(iParam0, &iVar0) || func_740(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_741(iParam0, -570078785);
		bVar2 = func_741(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_742())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_743(15) && func_741(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

int func_611(int iParam0)
{
	if (!func_735(*iParam0, 0))
	{
		return 0;
	}
	if (!func_744(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_612(int iParam0)
{
	if (func_745(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_613(int iParam0, bool bParam1)
{
	if (!func_735(iParam0, 0))
	{
		return func_747(func_746(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_614(int iParam0)
{
	if (!func_185() && func_748())
	{
		return true;
	}
	return func_745(iParam0, 1435272033);
}

int func_615(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_749(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return 0;
	}
	func_750(Var0);
	return 1;
}

struct<5> func_616(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_751(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_752(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_753(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_754(bParam1) };
			if (bParam2 && func_755(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_756(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_756(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_757(iParam0, &Var6, 1728382685))
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
			Var0 = { func_758(bParam1) };
			switch (func_759(iParam0))
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
			if (func_760(iParam0, -1823706425))
			{
				Var0 = { func_753(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_760(iParam0, -1483207246))
			{
				Var0 = { func_753(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_753(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_760(iParam0, -1653629781))
			{
				Var0 = { func_753(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_761(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_760(iParam0, -1653629781))
			{
				Var0 = { func_753(1384535894, Var0, 1784584921, bParam1) };
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

bool func_617(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (func_762(iParam0))
	{
		return false;
	}
	if (func_745(iParam0, 81450561) || func_745(iParam0, 1342455455))
	{
		return false;
	}
	if (func_612(iParam0))
	{
		return false;
	}
	iVar0 = func_613(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_763(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_616(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_618(int iParam0)
{
	return func_745(iParam0, 1166200945);
}

bool func_619(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (!func_735(iParam1, 0))
	{
		return false;
	}
	if (!func_608(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_610(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_743(15))
	{
		bVar0 = true;
	}
	func_764(&iParam9, 32);
	func_764(&iParam9, 64);
	func_764(&iParam9, 4);
	func_764(&iParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_765(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, iParam9, 1))
	{
		return false;
	}
	Var1 = { func_766(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*iParam7 = { Var1 };
	if (!func_767(iParam0, 1702063850))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715->f_20241.f_49;
	iVar20 = Global_1915715->f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_735(&(Global_1051439->f_47[iVar55]), 0))
		{
		}
		else if (!func_768(&(Global_1051439->f_47[iVar55]), iVar19, &iVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_753(&(Global_1051439->f_47[iVar55]), Var31, iVar21, 0) };
			if (func_769(&(Global_1051439->f_47[iVar55])))
			{
				if (!func_756(&(Global_1051439->f_47[iVar55]), &Var31, iVar21, 0, 0))
				{
					if (!&Global_1051439->f_47.f_7[iVar55])
					{
					}
					else if (func_770(&(Global_1051439->f_47[iVar55])))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_741(&(Global_1051439->f_47[iVar55]), 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_771(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, 1, &Var1, 0, bVar40, iParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_772(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, !bVar0, &Var1, 0, bVar40, 0, iParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!&Global_1051439->f_47.f_7[iVar55])
							{
								iVar39 = func_773(Var31, iVar21, 0, -1);
								if (!func_735(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_753(iVar39, Var35, iVar21, 0) };
									if (!func_774(Var35, &(Global_1051439->f_47.f_7[iVar55]), 0))
									{
										if (!func_761(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == &Global_1051439->f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_761(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != &Global_1051439->f_47.f_7[iVar55])
											{
												if (!func_774(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_775(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_776(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = _0x46f032b8ddf46cde(iVar19);
														if (!is_bit_set(&(Global_1051439->f_4461[(func_777(iVar56, 1) / 32)]), (func_777(iVar56, 1) % 32)))
														{
															func_504(func_115(1137323725, 1914305383), 1);
															set_bit(Global_1051439->f_4461[(func_777(iVar56, 1) / 32)], (func_777(iVar56, 1) % 32));
														}
													}
												}
												return true;
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

bool func_620(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_608(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_610(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_765(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_766(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_752(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_778(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_779(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_621(struct<14> Param0, var uParam14, var uParam15)
{
	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_780(iVar0, 773203532, iVar1, 1, 0) > 0)
	{
		func_781("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (_0x2bae4880dcdd560b(iVar0, 0))
	{
		iVar2 = func_782(iVar0, 0);
		if (!_0x6df942c4179be5ab(iVar2, -41291407))
		{
			play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			_0xe8eaff7b41edd291(iVar2, -41291407, 0);
		}
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_622(int iParam0)
{
	return Global_1128574[iParam0];
}

int func_623(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

struct<2> func_624(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_5;
}

bool func_625(int iParam0)
{
	return func_12(iParam0);
}

void func_626(var uParam0, int iParam1, bool bParam2)
{
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = get_random_int_in_range(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_627(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_24;
}

bool func_628(int iParam0, int iParam1)
{
	return func_783(&(Global_1109804->f_5737[iParam0]->f_2), iParam1);
}

bool func_629(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

int func_630(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_459(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_631(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_632(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_633(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_634(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_635(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_636(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_784(uParam0, iParam6);
	func_785(uParam0, iParam5);
	func_786(uParam0, iParam4);
	func_787(uParam0, iParam3);
	func_788(uParam0, iParam2);
	func_789(uParam0, iParam1);
}

bool func_637(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_638(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 45, 44, &uParam1);
}

bool func_639(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_640(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_644(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_641(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_790(uParam1, uParam0->f_3[iVar1]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_642(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = -1;
	Var33.f_1 = -1;
	if (func_25(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_25(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_219(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_791(func_27(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = get_num_reserved_mission_peds(1);
		iVar44 = get_num_reserved_mission_vehicles(1);
		iVar45 = get_num_reserved_mission_objects(1);
		iVar46 = _0x62be3ecc79fbd004(1);
	}
	else
	{
		_0x5e71e72a94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!&iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (get_max_num_network_peds() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (get_max_num_network_vehicles() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (get_max_num_network_objects() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (get_max_num_network_pickups() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

void func_643(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_644(var uParam0)
{
	if (func_25(*uParam0))
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

int func_645(var uParam0, int iParam1)
{
	iVar0 = func_792(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_793(iParam1)) - 1);
	}
	bVar2 = func_25(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_62(Global_1198046->f_231[iVar6]->f_5, *uParam0))
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

bool func_646(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_794(iParam1) || !func_794(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_647(var uParam0)
{
	if (&Global_1051252->f_16[0] == 0 || !_does_thread_exist(&(Global_1051252->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 31, 33, &(Global_1051252->f_16[0]));
}

bool func_648(var uParam0)
{
	uParam0->f_2 = 925148616;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_649(var uParam0, int iParam1)
{
	uParam0->f_2 = -586196356;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_650(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2143720214:
			return 11;
		case -2065343483:
			return 10;
		case -1940456649:
			return 2;
		case -1893546488:
			return 4;
		case -1817962691:
			return 13;
		case -1094727125:
			return 22;
		case -866980461:
			return 7;
		case -846566575:
			return 25;
		case -653541286:
			return 15;
		case -564732200:
			return 26;
		case -511489986:
			return 8;
		case -469515992:
			return 24;
		case -398980169:
			return 20;
		case -25043757:
			return 12;
		case 634826173:
			return 9;
		case 980822637:
			return 23;
		case 994072493:
			return 14;
		case 1100294018:
			return 1;
		case 1219698641:
			return 6;
		case 1333776312:
			return 19;
		case 1342967169:
			return 3;
		case 1373162615:
			return 0;
		case 1373746698:
			return 5;
		case 1553803896:
			return 21;
		case 1666130866:
			return 16;
		case 1759563362:
			return 27;
		case 1823897584:
			return 18;
		case 1831477950:
			return 17;
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

int func_651(struct<2> Param0)
{
	iVar0 = func_145(Param0, 0);
	return iVar0;
}

void func_652(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

var func_653(int iParam0, int iParam1)
{
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_4[5]);
}

bool func_654(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar35 = func_93(*uParam1, func_128(*uParam1));
	if (!does_entity_exist(iVar35))
	{
		return false;
	}
	vVar9 = { get_entity_coords(iVar35, true, false) };
	vVar18 = { get_entity_rotation(iVar35, 2) };
	vVar18.x = 0f;
	vVar18.f_1 = 0f;
	vVar0 = { func_795(vVar18) };
	vVar3 = { func_796(vVar0, 0f, 0f, 1f) };
	vVar6 = { func_796(vVar3, vVar0) };
	fVar30 = 0f;
	fVar31 = 0f;
	fVar32 = 0f;
	fVar33 = 0.612f;
	fVar34 = 0.226f;
	uParam3->f_2 = (get_heading_from_vector_2d(vVar0.x, vVar0.y) + 180f);
	vVar12 = { func_797(vVar0, fVar30) };
	vVar15 = { func_797(vVar3, fVar31) };
	vVar21 = { vVar12 * Vector(fVar33, fVar33, fVar33) };
	vVar24 = { vVar15 * Vector(fVar32, fVar32, fVar32) };
	vVar27 = { vVar6 * Vector(fVar34, fVar34, fVar34) };
	*uParam2 = { vVar9 + vVar21 + vVar24 + vVar27 };
	return true;
}

void func_655(var uParam0, var uParam1, int iParam2)
{
	if (does_cam_exist(&(uParam0->f_131.f_1[iParam2])))
	{
		return;
	}
	fVar6 = 70f;
	if (!func_798(uParam1, iParam2, &vVar0, &vVar3))
	{
		return;
	}
	uParam0->f_131.f_1[iParam2] = create_camera(26379945, false);
	set_cam_coord(&(uParam0->f_131.f_1[iParam2]), vVar0);
	set_cam_rot(&(uParam0->f_131.f_1[iParam2]), vVar3, 2);
	set_cam_fov(&(uParam0->f_131.f_1[iParam2]), fVar6);
	set_cam_active(&(uParam0->f_131.f_1[iParam2]), false);
}

bool func_656(var uParam0, var uParam1, var uParam2)
{
	iVar35 = 2;
	iVar36 = func_531(*uParam0, iVar35);
	if (!does_entity_exist(iVar36))
	{
		return false;
	}
	vVar9 = { get_entity_coords(iVar36, true, false) };
	vVar18 = { get_entity_rotation(iVar36, 2) };
	vVar18.x = 0f;
	vVar18.f_1 = 0f;
	vVar0 = { func_795(vVar18) };
	vVar3 = { func_796(vVar0, 0f, 0f, 1f) };
	vVar6 = { func_796(vVar3, vVar0) };
	fVar30 = 0f;
	fVar31 = 0f;
	fVar32 = 0.086f;
	fVar33 = 0.349f;
	fVar34 = 0.235f;
	uParam2->f_2 = (get_heading_from_vector_2d(vVar0.x, vVar0.y) + 180f);
	vVar12 = { func_797(vVar0, fVar30) };
	vVar15 = { func_797(vVar3, fVar31) };
	vVar21 = { vVar12 * Vector(fVar33, fVar33, fVar33) };
	vVar24 = { vVar15 * Vector(fVar32, fVar32, fVar32) };
	vVar27 = { vVar6 * Vector(fVar34, fVar34, fVar34) };
	*uParam1 = { vVar9 + vVar21 + vVar24 + vVar27 };
	return true;
}

bool func_657(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_658(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_659(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return false;
	}
	return true;
}

int func_660(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2010581984:
			return 9;
		case -2001405328:
			return 5;
		case -1824322988:
			return 10;
		case -1518489911:
			return 11;
		case -1348549877:
			return 12;
		case -1211373264:
			return 16;
		case -1067974651:
			return 18;
		case -1040947274:
			return 13;
		case -890716772:
			return 7;
		case -775927147:
			return 4;
		case -761617270:
			return 17;
		case 518798111:
			return 1;
		case 522505504:
			return 3;
		case 1042373141:
			return 6;
		case 1803795142:
			return 14;
		case 1806630731:
			return 0;
		case 1859868723:
			return 2;
		case 1992773981:
			return 8;
		case 2015728894:
			return 15;
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

var func_661(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_2;
}

bool func_662(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_663(var uParam0, int iParam1)
{
	return func_202(uParam0, iParam1, 3);
}

bool func_664(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 36)
	{
		return false;
	}
	return func_799(iParam0, iParam1);
}

bool func_665(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_629(iParam1))
	{
		return false;
	}
	return func_800(iParam0, iParam1);
}

int func_666(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_112(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_667(int iParam0)
{
	return (*Global_1128574)[iParam0]->f_47;
}

bool func_668(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) == iParam0)
		{
		}
		else if (func_801(iVar1))
		{
		}
		else if (!bParam4 && !func_802(iVar1, vParam1))
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

int func_669(struct<2> Param0)
{
	return func_27(Param0);
}

int func_670(int iParam0, int iParam1)
{
	if (func_219(func_803(iParam0, iParam1)))
	{
		return 0;
	}
	if (!func_804(iParam0, &vVar0, iParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return _datafile_get_num_children(vVar0.x, vVar0.y) + 1;
}

Vector3 func_671(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return func_803(iParam0, iParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_804(iParam0, &Var3, iParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!_datafile_get_data_node_index(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	_datafile_get_vector(&vVar0, &Var3);
	return vVar0;
}

void func_672(struct<2> Param0, int iParam2, var uParam3)
{
	*iParam2 = func_806(func_805(Param0));
	*uParam3 = func_669(Param0);
}

int func_673(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

int func_674(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_807())
	{
		return 2;
	}
	iVar1 = func_808(iParam0);
	iVar2 = func_809(iVar1, uParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_810(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_811(iVar1, uParam1))
	{
		vVar4 = { func_812(iVar1, uParam1) };
		iVar7 = func_813(iVar1, iVar2);
		if (!func_814(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_815(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_219(vParam3))
	{
		vVar8 = { func_816(iParam0, iVar2) };
		if (vdist(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_817(iParam2))
	{
		iVar11 = func_818(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		if (!func_819(iVar11))
		{
			return 13;
		}
		if (func_820(iVar11))
		{
			return 14;
		}
	}
	if (func_484(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_821(func_107(), func_107(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_822(iParam0, iVar2);
			if (!_unlock_is_unlocked(iVar13))
			{
				return 8;
			}
			if (!_unlock_is_visible(iVar13))
			{
				return 7;
			}
			iVar14 = func_823(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!_unlock_is_unlocked(iVar14))
				{
					return 10;
				}
				if (!_unlock_is_visible(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

var func_675(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_824() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_825());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_825());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_825());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_826(get_player_team(iVar5)));
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
			if (func_827(iVar2))
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
				if (iVar9 & 8192 != 0 && func_828(iVar2) != 1)
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
					if (!func_829(iVar10))
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

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_678(int iParam0)
{
	return _unlock_is_unlocked(func_594(iParam0));
}

bool func_679(int iParam0)
{
	return _unlock_is_visible(func_594(iParam0));
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_681(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_682(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_830(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_831(bParam1), iParam0, iParam3);
}

int func_683(var uParam0, int iParam1)
{
	if (func_408() != -1 && iParam1 == 2)
	{
		return func_832(func_408());
	}
	Var0.f_1 = -1;
	func_559(*uParam0, iParam1, &Var0);
	return func_833(Var0, Var0.f_1, 1, 4);
}

struct<8> func_684(var uParam0, int iParam1)
{
	if (func_408() != -1 && iParam1 == 2)
	{
		return func_834(func_408());
	}
	Var8.f_1 = -1;
	func_559(*uParam0, iParam1, &Var8);
	func_835(Var8, Var8.f_1, &Var0, 1, 4);
	return Var0;
}

int func_685(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_735(iParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_617(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_742() && bVar1) && iParam1 == 0))
	{
		if (func_763(iVar0, 997808187, 0) && !func_836(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
		else if (func_763(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_837(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_838(func_837(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_610(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_839(iParam0))
	{
		iVar4 = func_840(iParam0);
	}
	else if (func_841(iParam0))
	{
		iVar4 = func_842(iParam0);
	}
	else if (func_843(iParam0))
	{
		iVar4 = func_844(iParam0);
	}
	else if (func_845(iParam0))
	{
		iVar4 = func_846(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_837(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_687(iVar3))
		{
			if (func_847(iVar4, 773203532, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_838(iVar2);
		}
		Global_1051439->f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439->f_61 = iParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_848(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_687(iVar3))
		{
			if (func_780(iParam0, 773203532, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_838(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = iParam0;
		if (Global_1051439->f_62 != Global_1051439->f_61)
		{
			Global_1051439->f_62 = Global_1051439->f_61;
		}
		else
		{
			Global_1051439->f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439->f_46 = 0;
	return -1;
}

bool func_686(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

bool func_687(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_688(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_849(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_689(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_94(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	sVar1 = _create_var_string(0, sParam2);
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(10, sParam1, sVar1, sParam3));
}

bool func_690(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_612(iParam0))
	{
		return func_850(func_613(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_851(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_852(0)) && !func_853());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_854(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_855(iVar32)))
			{
			}
			else
			{
				iVar36 = func_856(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_857(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_858(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_859(&(Var0[iVar34])) || func_860(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_861(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_862(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_863(7, &(Var0[iVar34]))) + func_864(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_691(int iParam0)
{
	iVar5 = func_865(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_866(&uVar0))
	{
		return 0;
	}
	if (!func_867(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 7, func_868(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 16, 0, 0, 1))
	{
		return 1;
	}
	return func_869(&uVar0, 0) + 1;
}

bool func_692()
{
	return func_870(_0x901e0dc25080c8b9(player_id()));
}

bool func_693(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist(func_487(iParam0), vParam1) <= fParam4;
}

bool func_694(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	iVar0 = func_508(uParam0->f_2);
	iVar1 = func_509(iVar0);
	*uParam1 = 0;
	switch (iVar1)
	{
		case 2:
			*uParam1 = func_871();
			break;
		case 1:
			*uParam1 = func_872();
			break;
		case 0:
			*uParam1 = func_873(uParam0, bParam3, bParam4, &uParam5, uParam2);
			break;
		default:
			*uParam1 = 1;
			break;
	}
	return *uParam1 == 0;
}

void func_695(var uParam0, var uParam1, struct<2> Param2, var uParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam9 == 255)
	{
		iParam9 = player_id();
	}
	if (!func_25(Param2))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam9))
	{
		return;
	}
	if (!network_is_player_active(iParam9))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = uParam0;
	Var0.f_6 = uParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = uParam4;
	Var0.f_10 = iParam9;
	Var0.f_12 = iParam10;
	Var0.f_13 = iParam11;
	Var0.f_4 = 0;
	_copy_memory(&(Var0.f_27), &iParam5, 4);
	func_647(&Var0);
}

int func_696(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_874(&Var0, iParam0, iParam1, iParam2, uParam4))
	{
		return 0;
	}
	if (!func_875(&Var0))
	{
		return 0;
	}
	if (!func_876(&Var0, uParam3, 0))
	{
		return 0;
	}
	return func_877(Var0);
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case -1058720752:
			return 4;
		case -596140911:
			return 3;
		case 1667234773:
			return 8;
		case 302420629:
			return 7;
		case 58670941:
			return 6;
		case 323628355:
			return 5;
		case 18011253:
			return 2;
		case -358638071:
			return 1;
		case -1718522759:
			return 0;
		case 2055847821:
			return 9;
		case -1010216437:
			return 10;
		case -703138138:
			return 11;
		case -1407868742:
			return 12;
		case -1993182726:
			return 13;
		case 1320490705:
			return 14;
		case 1465672549:
			return 15;
		case 821981236:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_698(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

void func_699(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_700(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_2)
	{
		if (&Global_265377->f_63755[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_701(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_702(int iParam0)
{
	if (func_878(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_703(int iParam0)
{
	if (func_879(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_704(int iParam0)
{
	if (func_50() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_880(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_705(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_881(&Var0))
	{
		return vVar5;
	}
	if (!func_882(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_882(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_883(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_882(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_882(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_883(&Var0, 1);
			if (!func_882(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = _0xe13634bb6baf0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_706(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_107();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_707(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_708(iParam0) != -1;
}

int func_708(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_698(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_709(int iParam0)
{
	if (!func_881(&uVar0))
	{
		return func_107();
	}
	if (!func_882(&uVar0, 13, 0, 0, 1))
	{
		return func_107();
	}
	if (!func_882(&uVar0, 17, 0, 0, 1))
	{
		return func_107();
	}
	if (!func_882(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_107();
	}
	if (!func_882(&uVar0, 20, 0, 0, 1))
	{
		return func_107();
	}
	if (!func_882(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_107();
	}
	iVar5 = func_884(&uVar0);
	return func_712(iVar5);
}

struct<2> func_710(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_107();
	}
	if (!func_885(&uVar0, 7, iParam0, 76966722))
	{
		return func_107();
	}
	func_886(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_107();
	}
	return func_887(Var5.f_3, Var5.f_4);
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839;
		case 395262693:
			return -47596571;
		case -933924539:
			return 921725912;
		default:
			break;
	}
	return 0;
}

struct<2> func_712(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_887(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_887(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_107();
}

void func_713(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_714(int iParam0)
{
	if (!_0x85e4d7b225a30ed1(func_888(iParam0), &Var0))
	{
		return 0;
	}
	switch (Var0.f_1)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		default:
			break;
	}
	if (Var0.f_1 < 0)
	{
		return 0;
	}
	else
	{
		return 4;
	}
	return 6;
}

struct<2> func_715(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

void func_716(int iParam0)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (func_457() != iVar0)
	{
		return;
	}
	(*Global_1056141)[player_id()]->f_418 = ((*Global_1056141)[player_id()]->f_418 || iParam0);
}

void func_717(int iParam0)
{
	Global_1297047->f_374.f_2 = iParam0;
}

void func_718(int iParam0)
{
	Global_1297047->f_374.f_4 = iParam0;
}

void func_719(int iParam0)
{
	Global_1297047->f_374.f_3 = iParam0;
}

void func_720(int iParam0)
{
	Global_1297047->f_374.f_5 = iParam0;
}

int func_721(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_889(iParam2, iParam3))
	{
		return 0;
	}
	if (func_890() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_891(Global_1296859->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_892(&Var0);
	func_893(iParam2, iParam3, iParam7, 1);
	func_894(Param4, 1);
	func_895(iParam6);
	func_896(iParam9);
	func_897(iParam10, 1);
	if ((func_25(Param4) && !func_898()) && &Global_1211325 == -1)
	{
		func_899(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_900();
	}
	if (func_898())
	{
		func_901(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_902(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_903(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_596(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_904(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_905(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_907(func_906(), iParam3)), 64);
		}
		_databinding_write_data_string(Global_1572887->f_106.f_151, &cVar57);
		_databinding_write_data_string(Global_1572887->f_106.f_153, _create_var_string(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		_databinding_remove_data_entry(Global_1572887->f_106.f_154);
		_databinding_remove_data_entry(Global_1572887->f_106.f_155);
		_databinding_remove_data_entry(Global_1572887->f_106.f_156);
		_databinding_remove_data_entry(Global_1572887->f_106.f_157);
		_databinding_remove_data_entry(Global_1572887->f_106.f_158);
		_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	}
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_908(255, 0)) && !bParam8)
	{
		func_909("NM_MATCHMAKING_WARNING");
	}
	func_910(10);
	return 1;
}

int func_722(int iParam0)
{
	iVar0 = func_622(iParam0);
	iVar1 = func_67(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_111(iVar1))
		{
			func_911(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_723(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_912() - 1))
	{
		iVar1 = func_913(iVar0);
		if (func_34(iVar1))
		{
			iVar2 = func_510(iVar1);
			if (func_106(iVar2))
			{
				iVar4 = func_77(iVar2);
				iVar3 = func_78(iVar4);
			}
			else
			{
				iVar3 = 0;
			}
		}
		else
		{
			iVar3 = 0;
		}
		(*uParam0)[iVar0] = iVar3;
		iVar0++;
	}
}

void func_724(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_912() - 1))
	{
		iVar1 = func_913(iVar0);
		if (func_34(iVar1))
		{
			iVar2 = func_510(iVar1);
			if (func_106(iVar2))
			{
				iVar3 = func_77(iVar2);
				iVar4 = func_914(iVar3);
			}
			else
			{
				iVar4 = -1;
			}
		}
		else
		{
			iVar4 = -1;
		}
		(*uParam0)[iVar0] = iVar4;
		iVar0++;
	}
}

var func_725(int iParam0)
{
	return func_915(iParam0);
}

int func_726(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2076061048;
		case 1:
			return 1960865708;
		case 2:
			return -717214561;
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

bool func_727(int iParam0, int iParam1)
{
	if (!func_916(&Var0))
	{
		return false;
	}
	if (!func_917(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_917(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_917(Var0, &(Var0.f_1), 33, 0, 0, 0))
	{
		return true;
	}
	if (!func_917(Var0, &(Var0.f_1), 34, 1628150097, 0, 0))
	{
		return true;
	}
	return func_917(Var0, &(Var0.f_1), 36, iParam1, 0, 0);
}

var func_728(int iParam0, int iParam1, int iParam2)
{
	if (!func_916(&Var0))
	{
		return 0;
	}
	if (!func_917(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_917(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_917(Var0, &(Var0.f_1), 33, 0, 0, 0))
	{
		return 0;
	}
	if (!func_917(Var0, &(Var0.f_1), 34, iParam1, 0, 0))
	{
		return 0;
	}
	if (!func_917(Var0, &(Var0.f_1), 36, iParam2, 0, 0))
	{
		return 0;
	}
	return func_918(Var0, 55, 1);
}

bool func_729(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (uParam0[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_730(var uParam0, int iParam1)
{
	if (func_637(uParam0, func_660(iParam1, 1), 1))
	{
	}
}

int func_731(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (uParam0[iVar0] == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_732(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_609(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_733(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_734(int iParam0)
{
	iVar0 = func_919(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_920(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_920(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_735(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_736(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_921(iParam0))
	{
		return false;
	}
	bVar1 = func_66(iParam3, 2);
	bVar2 = func_763(iParam0, -570078785, bVar1);
	bVar3 = func_763(iParam0, -915411861, bVar1);
	if (func_763(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_922(iParam0, &iVar0) || func_923(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_742())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_743(15) && func_763(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_737(int iParam0, bool bParam1)
{
	return (func_741(iParam0, 997808187) && !func_924(iParam0, 997808187, bParam1));
}

bool func_738(int iParam0)
{
	iVar0 = func_613(iParam0, 1);
	if (iVar0 != 0 && func_763(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_739(int iParam0, int iParam1)
{
	*iParam1 = func_925(iParam0, 1);
	return *iParam1 != 0;
}

bool func_740(int iParam0, int iParam1)
{
	*iParam1 = func_926(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_741(int iParam0, bool bParam1)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0))
	{
		return func_763(func_613(iParam0, 0), bParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, bParam1) > 0;
}

bool func_742()
{
	return Global_1915715->f_22477;
}

bool func_743(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_927(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_744(int iParam0)
{
	return func_745(iParam0, 1279601681);
}

int func_745(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return func_928(func_746(iParam0), iParam1);
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

int func_746(int iParam0)
{
	return iParam0;
}

int func_747(int iParam0, bool bParam1)
{
	if (!func_929(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_748()
{
	return func_930(func_113(0));
}

bool func_749(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_608(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_736(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_931(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_932(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_750(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_847(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_781("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

struct<4> func_751(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_831(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_753(1328661203, func_933(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_753(1328661203, func_933(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_753(1328661203, func_933(), -1591664384, bParam0);
}

int func_752(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_753(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_735(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_831(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_754(bool bParam0)
{
	iVar0 = func_831(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_753(923904168, func_751(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_753(923904168, func_751(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_753(923904168, func_751(bParam0), -740156546, 0);
}

bool func_755(int iParam0, bool bParam1)
{
	if (func_759(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_934();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_756(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_935(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_757(int iParam0, var uParam1, int iParam2)
{
	if (func_936(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_758(bool bParam0)
{
	iVar0 = func_831(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_753(271701509, func_751(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_753(271701509, func_751(bParam0), 12999093, 0);
}

int func_759(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_760(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_759(iParam0);
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
			if (func_937(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_761(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_938(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_762(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_50() == -1)
	{
		if (func_939(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

bool func_763(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_921(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_836(iParam0, bParam1);
	}
	return true;
}

void func_764(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_765(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (func_66(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_761(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_937(iParam1, func_759(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_66(iParam9, 1))
	{
		if (!func_762(iParam1))
		{
			return 0;
		}
	}
	if (func_66(iParam9, 2))
	{
		if (func_924(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_66(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_935(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_940(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_941(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_942(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_66(iParam9, 8))
	{
		return func_943(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_766(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_753(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_944(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_933() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_767(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_768(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_759(iParam1);
		iVar5 = func_945(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (func_937(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_616(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_753(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_831(0);
			Var37 = { func_616(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_753(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_759(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (func_937(iParam0, iVar1, iVar2))
							{
								if (func_946(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_769(int iParam0)
{
	iVar0 = func_752(iParam0);
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		return true;
	}
	return false;
}

bool func_770(int iParam0)
{
	return func_745(iParam0, 1282106666);
}

bool func_771(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (!func_608(iParam0, 0))
	{
		return false;
	}
	if (!func_765(iParam0, iParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_766(iParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_947(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

bool func_772(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	if (!func_608(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_610(iParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_948(iParam0, iParam1, Param2, iParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = iParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_944(iParam1, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_933() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_779(iParam0, Var0, 2113164098, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

int func_773(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_949(&uParam0, iParam4, bParam5, iParam6);
}

bool func_774(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_852(0))
	{
		return func_950(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_761(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_831(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_775(int* iParam0)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		_cashinventory_transaction_delete(*iParam0);
		func_920(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_776(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_920(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_920(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_920(*iParam0, 2, 0, 0);
		return false;
	}
	func_920(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_777(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case 1993361168:
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

bool func_778(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_951(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_952(iParam0, iParam18))
	{
		return false;
	}
	if (func_953(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_954(iParam0, bParam19);
}

bool func_779(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_951(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_952(iParam0, iParam17))
	{
		return false;
	}
	if (func_955(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_954(iParam0, bParam18);
}

int func_780(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_612(iParam0))
	{
		return func_847(func_613(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_851(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

void func_781(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

int func_782(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (!_0x2bae4880dcdd560b(iParam0, iParam1))
	{
		return 0;
	}
	return _0x2e1cdc1ff3b8473e(iParam0, iParam1);
}

bool func_783(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_784(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_785(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_786(var uParam0, int iParam1)
{
	iVar0 = func_631(*uParam0);
	iVar1 = func_630(*uParam0);
	if (iParam1 < 1 || iParam1 > func_635(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_787(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_788(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_789(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_790(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_62(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_791(int iParam0, var uParam1)
{
	Var0 = { func_712(iParam0) };
	if (!func_25(Var0))
	{
		return false;
	}
	func_956(Var0, iParam0, uParam1);
	return true;
}

int func_792(int iParam0)
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

int func_793(int iParam0)
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

bool func_794(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_634(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_633(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_71(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_630(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_631(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_632(iParam0);
	if (iVar5 < 1 || iVar5 > func_635(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

Vector3 func_795(vector3 vParam0)
{
	fVar0 = sin(vParam0.z);
	fVar1 = cos(vParam0.z);
	fVar2 = sin(vParam0.x);
	fVar3 = cos(vParam0.x);
	return func_488((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

Vector3 func_796(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_797(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

bool func_798(var uParam0, int iParam1, var uParam2, var uParam3)
{
	iVar35 = func_531(*uParam0, iParam1);
	if (!does_entity_exist(iVar35))
	{
		return false;
	}
	vVar9 = { get_entity_coords(iVar35, true, false) };
	vVar18 = { get_entity_rotation(iVar35, 2) };
	vVar18.x = 0f;
	vVar18.f_1 = 0f;
	vVar0 = { func_795(vVar18) };
	vVar3 = { func_796(vVar0, 0f, 0f, 1f) };
	vVar6 = { func_796(vVar3, vVar0) };
	fVar30 = 0f;
	fVar31 = 0f;
	fVar32 = 0f;
	fVar33 = 0.349f;
	fVar34 = 0.235f;
	uParam3->f_2 = (get_heading_from_vector_2d(vVar0.x, vVar0.y) + 180f);
	vVar12 = { func_797(vVar0, fVar30) };
	vVar15 = { func_797(vVar3, fVar31) };
	vVar21 = { vVar12 * Vector(fVar33, fVar33, fVar33) };
	vVar24 = { vVar15 * Vector(fVar32, fVar32, fVar32) };
	vVar27 = { vVar6 * Vector(fVar34, fVar34, fVar34) };
	*uParam2 = { vVar9 + vVar21 + vVar24 + vVar27 };
	return true;
}

bool func_799(int iParam0, int iParam1)
{
	return func_202((*Global_1130367)[iParam0], iParam1, 2);
}

bool func_800(int iParam0, int iParam1)
{
	return func_202(&((*Global_1130367)[iParam0]->f_3), iParam1, 3);
}

bool func_801(int iParam0)
{
	if ((*Global_1056141)[iParam0]->f_2 != -1)
	{
		return true;
	}
	iVar0 = func_957(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_958(iParam0, 1))
	{
		return true;
	}
	if (func_959(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_802(int iParam0, vector3 vParam1)
{
	vVar0 = { func_487(iParam0) };
	if (!func_219(vParam1))
	{
		if (func_219(vVar0))
		{
			return false;
		}
		fVar3 = vdist(vVar0, vParam1);
		fVar4 = 1500f;
		fVar5 = 125f;
		if (fVar3 < fVar5)
		{
			return false;
		}
		if (fVar3 > fVar4)
		{
			return false;
		}
	}
	return true;
}

Vector3 func_803(int iParam0, int iParam1)
{
	if (!func_804(iParam0, &vVar3, iParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	_datafile_get_vector(&vVar0, &vVar3);
	return vVar0;
}

bool func_804(int iParam0, var uParam1, int iParam2)
{
	if (!func_960(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = _datafile_get_num_children(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!_datafile_get_data_node_index(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = iParam2;
			if (!_datafile_get_data_node_index(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

int func_805(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_57(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_806(int iParam0)
{
	iVar0 = -1;
	if (func_961(&Var1, iParam0))
	{
		iVar0 = ((func_962() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_807()
{
	if (func_65())
	{
		return false;
	}
	return true;
}

int func_808(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

int func_809(int iParam0, var uParam1)
{
	iVar0 = -1;
	if (func_961(&Var1, iParam0) && func_963(&Var1, uParam1))
	{
		iVar0 = ((func_964(iParam0) - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_810(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = func_965(iParam0, iParam1, 2);
	if (func_966(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_816(iParam0, iParam1) };
	if (func_219(vVar1))
	{
		return false;
	}
	uVar4 = func_967(func_808(iParam0), iParam1);
	if ((bParam2 && func_965(iParam0, iParam1, 1)) && func_968(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_969(vVar1, uVar4, bVar0);
}

bool func_811(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_961(&Var1, iParam0) && func_963(&Var1, uParam1))
	{
		func_970(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_812(int iParam0, var uParam1)
{
	if (func_961(&Var3, iParam0) && func_963(&Var3, uParam1))
	{
		func_971(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_813(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_961(&Var1, iParam0))
	{
		if (func_972(&Var1, iParam1))
		{
			func_973(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_974(iVar0);
	}
	return iVar6;
}

bool func_814(int iParam0, vector3 vParam1)
{
	if (func_219(vParam1))
	{
		return false;
	}
	if (func_975(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_976(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (is_sphere_visible_to_player(player_id(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (is_sphere_visible_to_another_machine(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = int_to_playerindex(iVar5);
		if (network_is_player_active(iVar2))
		{
			iVar3 = get_player_ped(iVar2);
			if (does_entity_exist(iVar3))
			{
				fVar4 = vdist(get_entity_coords(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_977(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_815(int iParam0)
{
	if (!func_978(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_979(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_816(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_980(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

bool func_817(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return true;
		default:
			break;
	}
	return false;
}

int func_818(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_819(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_820(int iParam0)
{
	if (!func_819(iParam0))
	{
		return false;
	}
	return (func_981(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

bool func_821(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	if (!bParam4)
	{
		if (func_65())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_25(Param2))
	{
		Var0 = { func_24() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_25(Var0)) && !func_62(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_74() };
	if (func_25(Var2) && (!func_25(Var2) || !func_62(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_822(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_980(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

int func_823(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_980(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_1;
}

int func_824()
{
	return Global_1051252->f_12;
}

char* func_825()
{
	return "unnamed";
}

int func_826(int iParam0)
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

bool func_827(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_982(36, iParam0);
}

int func_828(int iParam0)
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

bool func_829(int iParam0)
{
	if (func_983(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_984(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_830(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_831(bool bParam0)
{
	if (func_50() == -1)
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

var func_832(int iParam0)
{
	return func_985(iParam0);
}

int func_833(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar5 = func_865(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_866(&uVar0))
	{
		return 0;
	}
	if (!func_867(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 7, func_868(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 19, 0, 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 20, func_986(iParam2), 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 21, func_987(iParam3), 0, 1))
	{
		return 0;
	}
	if (!func_867(&uVar0, 22, iParam1, 0, 1))
	{
		return 0;
	}
	return func_988(&uVar0);
}

struct<8> func_834(int iParam0)
{
	return func_989(iParam0);
}

bool func_835(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar5 = func_865(iParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_866(&uVar0))
	{
		return false;
	}
	if (!func_867(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 7, func_868(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 9, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 19, 0, 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 20, func_986(iParam3), 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 21, func_987(iParam4), 0, 1))
	{
		return false;
	}
	if (!func_867(&uVar0, 22, iParam1, 0, 1))
	{
		return false;
	}
	*uParam2 = { func_990(&uVar0) };
	return !_0x375f5870a7b8bec1(uParam2);
}

bool func_836(int iParam0, bool bParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == bParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_837(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_991(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_838(int iParam0)
{
	return (iParam0 / 100);
}

bool func_839(int iParam0)
{
	return func_759(iParam0) == -999503751;
}

int func_840(int iParam0)
{
	if (!func_839(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111:
			return -705751660;
		case -1871922677:
			return 1364634153;
		case -905031115:
			return -388301838;
		case 1928115537:
			return 208175031;
		case 453281150:
			return -98968806;
		case 153739721:
			return -402606360;
		case 1167678119:
			return -709946811;
		case 736667462:
			return -362300646;
		case -673644764:
			return -65380737;
		case -980133221:
			return 100758093;
		case -209930641:
			return -1740761400;
		case -1735897526:
			return -27480348;
		case -482614352:
			return -257977494;
		case -1258944731:
			return -582914898;
		case 1536480356:
			return -814067424;
		case 1827632921:
			return -1179212391;
		case -1483084691:
			return -1407415707;
		case -1855140882:
			return -9237745;
		case -1605932637:
			return 296464256;
		case 838274308:
			return -1849217095;
		case 1423463110:
			return 1698584232;
		case 1722021469:
			return 1996257828;
		case 1293960018:
			return 1186175379;
		case 1084020314:
			return -1332741910;
		case 1384905272:
			return -1632447184;
		case 166258931:
			return -1930088011;
		case -285691117:
			return 2065632777;
		case -1506238056:
			return 937854865;
		case -141245365:
			return -1520409981;
		case 962175652:
			return 1356000914;
		case 687079897:
			return -423388555;
		case 373021801:
			return -188959129;
		case 75839740:
			return -93765184;
		case -208529642:
			return 401046716;
		case -504466477:
			return -845387737;
		case -1896067425:
			return -229247533;
		case -1732419039:
			return 57481217;
		case 1620668890:
			return 383434460;
		case 2095557238:
			return 404275544;
		case -700719823:
			return 721381157;
		case -520949089:
			return 1027509151;
		case 783963696:
			return -1688869940;
		case 477409701:
			return -97312371;
		case 325427079:
			return -870234774;
		case -2127824110:
			return -573609786;
		case -478920799:
			return -1336767027;
		case -784753876:
			return 1125692243;
		case -1991069642:
			return 1599850951;
		case 1534579841:
			return 1505836690;
		case 1755770591:
			return 1007026972;
		case 852591413:
			return -1271696523;
		case -1269692868:
			return -1501734903;
		case -1638540740:
			return -466660528;
		case 1404368072:
			return -1675392330;
		case 561909851:
			return -1377882579;
		case 1369829534:
			return 2136592667;
		case 669687080:
			return -1849788956;
		case 908671397:
			return -1561028528;
		case -50313388:
			return -1268368589;
		case 896138350:
			return -655694620;
		case -1347489546:
			return -882128410;
		case -1127937242:
			return -27217981;
		case -821055557:
			return 513863747;
		case -666844643:
			return 272520062;
		case 1507149124:
			return 1115043821;
		case 1797068311:
			return 434380030;
		case 1509389260:
			return -1994163333;
		case 1196052082:
			return 1445336445;
		case 914074837:
			return -1000181256;
		case 599099209:
			return -1601951172;
		case 774216741:
			return -1900673376;
		case 180232641:
			return -1722245291;
		case -1597878813:
			return -1550994497;
		case -895311481:
			return -1654216923;
		case -2075290374:
			return -956892603;
		case -1349063796:
			return 2044551183;
		case 1649135863:
			return 1816380636;
		case 10498108:
			return -1216565419;
		case 317576407:
			return -997045888;
		case -803057859:
			return -622430680;
		case -229076051:
			return -1279023141;
		case -1445559642:
			return -1036761924;
		case -1140185331:
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515:
			return 1379601741;
		case -1160690408:
			return -245138056;
		case -1763097043:
			return 115504824;
		case 912572382:
			return -1399728874;
		case 73391061:
			return -1090192900;
		case 332495544:
			return -1893000631;
		case -501475506:
			return -1583759578;
		case -280579677:
			return -204905596;
		case -814845497:
			return -974747713;
		case -1610902814:
			return -701454253;
		case -1313261987:
			return 678546644;
		case -668402627:
			return -1643732782;
		case -1436966753:
			return -1879178047;
		case -1105410003:
			return 2033604402;
		case -792302208:
			return 729201588;
		case -1544547372:
			return 1695854319;
		case -1268599623:
			return -2040860293;
		case 1281867320:
			return 430601343;
		case -1699226913:
			return 528449577;
		case -1610553999:
			return 836052180;
		case -1909243438:
			return 1126483827;
		case -1551799186:
			return 1432546287;
		case -1999554802:
			return 1721339484;
		case 723981565:
			return 1684533498;
		case 963752338:
			return 1404424086;
		case 372402960:
			return 69611632;
		case 989901996:
			return -221377088;
		case -239754729:
			return 1613326453;
		case 142266273:
			return 1307853835;
		case 911761394:
			return 2176663;
		case 1676688161:
			return -292908182;
		case 1907906229:
			return 1638955448;
		case -1621282302:
			return 1374083621;
		case -1801773954:
			return -1218075359;
		case -1003029579:
			return -1516043876;
		case 165089723:
			return -726135810;
		case 395586869:
			return -458052621;
		case 623560802:
			return -926911473;
		case 888203246:
			return -1761242982;
		case 1123550204:
			return -1388135148;
		case 1862360078:
			return -1644486999;
		case -1320869011:
			return -688485759;
		case -1078345642:
			return -381735150;
		case -571278136:
			return 2046513300;
		case -856663353:
			return -1943603989;
		case -632654469:
			return -1635706465;
		case -380562552:
			return -1338786556;
		case 1911459413:
			return -1434447686;
		case -1606456586:
			return -675714260;
		case -1888892597:
			return 249321841;
		case 1154823199:
			return -1070777324;
		case 856068226:
			return 2065543650;
		case 1786380136:
			return 1826887023;
		case 1943475930:
			return -1810703525;
		case 1697315198:
			return -1226563331;
		case -1787340262:
			return -1466006414;
		case -1341845703:
			return 724273546;
		case -1632670578:
			return 1512859531;
		case -932593662:
			return 1266305575;
		case -499308854:
			return 1937278961;
		case -785677145:
			return 971478216;
		case -18849776:
			return 1202597973;
		case -806059467:
			return 507698559;
		case 91876671:
			return 746355186;
		case -199538046:
			return 523755373;
		case -1754780383:
			return 1219798516;
		case -2050586146:
			return -1568843392;
		case -1622000367:
			return 1824681487;
		case -1930520502:
			return 933561301;
		case 1689602008:
			return -614970571;
		case 1384162159:
			return -310186102;
		case -733625577:
			return 1209768883;
		case -370348443:
			return 1834280485;
		case -1205728560:
			return 329528021;
		case 459985248:
			return 1778442129;
		case 834207228:
			return 805432208;
		case 1230744937:
			return -25950091;
		case 1859098900:
			return 922505133;
		case -2137310037:
			return 120975393;
		case 1086995730:
			return 426742932;
		case -1962290800:
			return 2081118674;
		case 1736084082:
			return -1914569345;
		case 2038967949:
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_841(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	return func_759(iParam0) == 153430294;
}

int func_842(int iParam0)
{
	if (!func_841(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1652808217:
			return 2113612788;
		case 475385282:
			return 1799751306;
		case -35942194:
			return 1444076568;
		case 48470838:
			return 1147680963;
		case 1997008874:
			return -2020336278;
		case 1729941524:
			return -1377900033;
		case -1856789375:
			return -1541941647;
		case -2086565603:
			return 1616727805;
		case -463888252:
			return -922666835;
		case -1967067820:
			return -855621461;
		case 2030324187:
			return -564862124;
		case 837041052:
			return 1955205056;
		case -351609819:
			return 1515886177;
		case -112363350:
			return 1212871226;
		case 1064633628:
			return 520003486;
		case 1811373600:
			return 214694713;
		case 293907485:
			return -1002555587;
		case 896201705:
			return -704816453;
		case -953837732:
			return -408748538;
		case -849861695:
			return 2080515794;
		case -1484084376:
			return -1438504284;
		case -1244280834:
			return -1663266855;
		case -939529134:
			return -977280609;
		case -302466993:
			return -1208924670;
		case -740134980:
			return 760352143;
		case -462384932:
			return 1528293658;
		case 1388866954:
			return 601619107;
		case 1124978197:
			return 309975007;
		case 773175735:
			return -1805872365;
		case -6365998:
			return 25128279;
		case 163836188:
			return -286209990;
		case -603318871:
			return 1269465524;
		case -866802112:
			return 66925801;
		case -1222804528:
			return -1897379743;
		case -2051565307:
			return 1963005075;
		case -1837321585:
			return -2037925984;
		case 973666748:
			return 1668961632;
		case 211230425:
			return 1358934123;
		case -1098349891:
			return -1141176732;
		case -801495520:
			return -1415813725;
		case -1186378964:
			return 11713414;
		case -1629350306:
			return 1307072000;
		case 245003725:
			return 1575941645;
		case -61091504:
			return 701926877;
		case -1579778179:
			return -766852067;
		case -1100138310:
			return -1076125889;
		case 271080495:
			return -1445170375;
		case -620695071:
			return -1685465452;
		case -724967739:
			return -1670121942;
		case -687545541:
			return 1790317231;
		case 1877447950:
			return 1889214097;
		case -2102805870:
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case -542471226:
			return 1570234737;
		case -185354664:
			return -288324636;
		case -1008937941:
			return 11282331;
		case -770543466:
			return 725318841;
		case 1382597333:
			return -949699437;
		case 1129882805:
			return 1306347914;
		case 883033928:
			return 1536910598;
		case -1225782302:
			return 1924797251;
		case 1377331935:
			return 9499074;
		case -136923555:
			return 483863122;
		case 98783862:
			return 237473007;
		case 363196923:
			return 1066004403;
		case 547298053:
			return 1559978137;
		case 796506298:
			return 1322239046;
		case -2078055928:
			return 1564631339;
		case 855162804:
			return -212824759;
		case -1550515886:
			return -274429432;
		case -699406649:
			return 570453695;
		case -1870177465:
			return 207242099;
		case 1121730546:
			return -1112267224;
		case -1606199964:
			return 1417685661;
		case -1366953495:
			return -2095478833;
		case 1493223136:
			return 1899947034;
		case 1732731757:
			return -1752321861;
		case -993297765:
			return 1413210443;
		case 1243186493:
			return 1182877142;
		case 1548003731:
			return -208887838;
		case 1853771270:
			return 21707615;
		case -456994495:
			return 857732585;
		case -1627994710:
			return 1087541582;
		case -2009556946:
			return 1451015330;
		case 849308921:
			return 1688754425;
		case 1779645445:
			return 1437777233;
		case 2112644023:
			return 1676958164;
		case -909575313:
			return -35123787;
		case 1534435018:
			return 195668280;
		case -83784299:
			return -2087370390;
		case 1681940497:
			return 888087567;
		case 1436861146:
			return 707399301;
		case 1192175023:
			return 1507847664;
		case -503349107:
			return -2018900297;
		case 424603435:
			return -626938711;
		case 1033779145:
			return -336900292;
		case 734729251:
			return -1124798132;
		case -1451110845:
			return 1051595054;
		case 1302861393:
			return 1338028883;
		case 2145483459:
			return 574052421;
		case 1916198766:
			return -1516904708;
		case 229873288:
			return -337288225;
		case 1056766234:
			return 432390051;
		case 1993402593:
			return 1094880924;
		case 1754221662:
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_843(int iParam0)
{
	return (func_992(iParam0) && func_745(iParam0, 1584357097));
}

int func_844(int iParam0)
{
	if (!func_843(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_845(int iParam0)
{
	return func_759(iParam0) == 1882579758;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case -756756912:
			return 174220197;
		case 380458460:
			return 468518590;
		case -1336702674:
			return -184567584;
		case -1481672726:
			return 140205975;
		case 1088924248:
			return 1664750935;
		case -1981006748:
			return 1960130701;
		case -1800252944:
			return 766061110;
		case -392037938:
			return 1364291974;
		case 2052037931:
			return 2076526201;
		case 683408729:
			return 292938556;
		default:
			break;
	}
	return 0;
}

int func_847(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_991(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_848(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && bParam1 == -915411861) && func_741(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_612(iParam0))
	{
		return func_837(func_613(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_851(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

int func_849(int iParam0)
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

bool func_850(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_991(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_854(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_855(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_856(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_857(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_858(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_851(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_993(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_852(bool bParam0)
{
	if (func_50() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_831(bParam0));
}

bool func_853()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_854(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_50() == 0)
	{
		return func_994(iParam0);
	}
	return iParam0 <= func_995();
}

bool func_855(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

int func_856(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_745(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_857(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_751(0) };
	Var0.f_4 = func_996(iParam1);
	Var5 = { func_753(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_831(0), &Var5, 0);
	return iVar9;
}

int func_858(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_752(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_997(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_998(iParam0, 0);
	}
	if (func_944(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_831(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_999(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_831(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_859(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (func_745(iParam0, -887064662))
	{
		return true;
	}
	return func_860(iParam0);
}

bool func_860(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (func_745(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_861(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_1000(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_735(iParam1, 0))
	{
		return 0;
	}
	if (!func_1001(iParam0))
	{
		return 0;
	}
	iVar0 = func_1002(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_1003(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_862(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (!func_859(iParam0) && !func_860(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_1004(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_1005(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_1006(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_1007(iVar15, iVar1);
			if (func_735(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_1008(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_857(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_1010(iVar16, func_1009(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_1011(iVar1);
	}
	return iVar0;
}

int func_863(int iParam0, int iParam1)
{
	iParam0 = func_1000(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_735(iParam1, 0))
	{
		return 0;
	}
	if (!func_1001(iParam0))
	{
		return 0;
	}
	iVar0 = func_1002(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_864(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

int func_865(int iParam0)
{
	if (!func_866(&uVar0))
	{
		return -1;
	}
	if (!func_867(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_867(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_867(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_867(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1012(&uVar0);
}

bool func_866(var uParam0)
{
	iVar5 = Global_1071686->f_28448[31]->f_3;
	if (!_0x7907969497ea92f5(iVar5))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(iVar5))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = iVar5;
	return true;
}

bool func_867(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -323664079;
		case 1:
			return 304473406;
		case 2:
			return 1428568385;
		case 3:
			return -710377432;
		default:
			break;
	}
	return 0;
}

int func_869(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uVar0 = _datafile_get_num_nodes(uParam0);
	return uVar0;
}

bool func_870(int iParam0)
{
	return _0x149a2751ab66ac02(iParam0) > 4;
}

int func_871()
{
	return 0;
}

int func_872()
{
	return 0;
}

int func_873(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4)
{
	if (bParam1)
	{
		iVar2 |= 8;
	}
	if (bParam2)
	{
		iVar2 |= 16;
	}
	func_672(*uParam0, &iVar0, &uVar1);
	func_1013(iVar0, &uVar3, uParam3);
	func_1014(uParam3, iVar0, &uVar3, uVar1, iVar2, uParam4);
	return 0;
}

bool func_874(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_1015(uParam0, uParam4, iParam1))
	{
		return false;
	}
	iVar1 = func_1016(*uParam0, 1333416092);
	uVar3 = uParam0->f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		uParam0->f_1 = uVar3;
		if (!func_1017(uParam0, iVar0))
		{
		}
		else
		{
			iVar2 = func_1018(*uParam0);
			if (iParam3 != func_1019(iVar2))
			{
			}
			else if (func_1020(*uParam0, iParam2))
			{
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

bool func_875(var uParam0)
{
	uParam0->f_2 = -34107655;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_876(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = 1808784790;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_877(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_878(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_879(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_880(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	if (func_50() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_881(var uParam0)
{
	iVar0 = Global_1071686->f_28448[29]->f_3;
	if (!_0x7907969497ea92f5(iVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(iVar0))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar1, 5);
	*uParam0 = iVar0;
	return true;
}

bool func_882(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_883(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

var func_884(var uParam0)
{
	return func_1022(uParam0, 60, 1);
}

bool func_885(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_1023(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_886(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1024(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1025(iVar0);
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
			uParam2->f_5 = func_1026(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1027(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1028(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1029(iVar0);
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

struct<2> func_887(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636), func_56(iParam1));
			break;
		case 3:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_602), func_56(iParam1));
			break;
		case 4:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_2104), func_56(iParam1));
			break;
		case 5:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_12606), func_56(iParam1));
			break;
		case 6:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_12908), func_56(iParam1));
			break;
		case 7:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_15910), func_56(iParam1));
			break;
		case 8:
			Var0.f_1 = func_1030(iParam0, &(Global_1071686->f_636.f_16512), func_56(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_107();
	}
	return Var0;
}

var func_888(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_8;
}

bool func_889(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_890()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_891(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_892(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_893(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_1031();
	}
}

void func_894(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_1031();
	}
}

void func_895(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_896(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_897(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_1031();
	}
}

bool func_898()
{
	if (func_906() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_899(struct<2> Param0)
{
	if (func_1032())
	{
		return 0;
	}
	if (!func_25(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_900()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_901(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_1033(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_1034(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_1035(iVar0);
	Var3 = { func_1036(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_902(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_903(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1037();
	}
	if (!func_1038(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_1039(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

char* func_904(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_1040(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_905(int iParam0)
{
	iVar0 = func_1041(iParam0);
	if (iVar0 == &Global_265354->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265354->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265354->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265354->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265354->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_906()
{
	return Global_1572887->f_106;
}

char* func_907(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_908(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_1042();
	}
	else if (iParam0 == func_1042())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

var func_909(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_1043(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_910(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_911(int iParam0)
{
	if (!func_111(iParam0))
	{
		return;
	}
	(*Global_1128574)[network_player_id_to_int()] = iParam0;
}

int func_912()
{
	return Global_1130634->f_235;
}

int func_913(int iParam0)
{
	return Global_1130634[iParam0];
}

var func_914(int iParam0)
{
	Var0 = { func_115(-746839750, func_114(iParam0)) };
	return func_1044(Var0);
}

var func_915(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_3;
}

bool func_916(var uParam0)
{
	iVar0 = func_1045();
	if (!_0x7907969497ea92f5(iVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(iVar0))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar1, 5);
	*uParam0 = iVar0;
	return true;
}

bool func_917(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

var func_918(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_int(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_919(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_920(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1046(iParam0, iParam1, iParam2, iParam3);
}

bool func_921(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_922(int iParam0, int iParam1)
{
	*iParam1 = func_1047(iParam0, 1);
	return *iParam1 != 0;
}

bool func_923(int iParam0, int iParam1)
{
	*iParam1 = func_1048(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_924(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_735(iParam0, 0))
	{
		return func_1049(func_746(iParam0), bParam1, bParam2);
	}
	if (func_612(iParam0))
	{
		return func_836(func_613(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_50() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_1050(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_925(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1051(iVar0, 1, 0);
		if (!func_851(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1052(&(Var2[iVar34])))
				{
					if (!bParam1 || func_858(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_926(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1051(iVar0, 0, 1);
		if (!func_851(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1053(&(Var9[iVar41])))
				{
					if (!bParam1 || func_858(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_927(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_928(int iParam0, int iParam1)
{
	if (!func_929(iParam0, 2))
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

bool func_929(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_930(struct<2> Param0)
{
	return func_1054(Param0, 5, 8);
}

int func_931(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_763(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_66(iParam2, 2))
	{
		if (func_836(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_66(iParam2, 8))
	{
		return func_1055(iParam0, iParam1);
	}
	return 1;
}

bool func_932(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_1056(Param1))
	{
		return false;
	}
	if (!func_952(iParam0, iParam18))
	{
		return false;
	}
	if (func_1057(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_954(iParam0, bParam19);
}

struct<4> func_933()
{
	return Var0;
}

bool func_934()
{
	return (func_682(-1185145312, 0, 0, 0) > 0 && func_773(func_753(889965687, func_751(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_935(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_944(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_753(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_831(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_831(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_936(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_831(0);
	*uParam1 = { func_753(iParam0, func_754(0), iParam3, 0) };
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

bool func_937(int iParam0, int iParam1, int iParam2)
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

bool func_938(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_831(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_939(int iParam0)
{
	return func_752(iParam0) == -427144552;
}

int func_940(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_735(iParam0, 0) && !func_929(func_746(iParam0), 2))
	{
		return 0;
	}
	if (func_752(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_944(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_831(bParam3), iParam0);
}

bool func_941(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_735(iParam0, 0) && !func_929(func_746(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_942(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_943(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_1058(iParam1, 1) && !func_1059(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_1060(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_848(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_855((iVar1 + func_1061(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1060(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_848(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_854((iVar3 + func_1061(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1060("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_929(func_746(iParam1), 2))
	{
		if (!func_1062(func_746(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_735(iParam1, 0))
	{
		if (!func_690(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_944(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_945(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_759(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_946(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_1063(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_947(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_851(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_1064(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_1065(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_1066(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_1067(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_1068(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_1069(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_1070(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_1071(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_1072(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_1073(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_1074(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_1075(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_1076(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_1077(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_1078(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_948(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8)
{
	if (!func_765(iParam0, iParam1, Param2, iParam6, bParam7, 1, iParam8, 1))
	{
		return false;
	}
	if (func_66(iParam8, 4) && func_756(iParam1, &Param2, iParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_949(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1063(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_950(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_761(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_752(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1079(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1080(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_1081(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1082(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_1083(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1084(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1085(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1086(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_951(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_735(uParam1->f_8, 0) && !func_929(func_746(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_66(iParam2, 128))
	{
		if (func_759(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_66(iParam2, 16))
	{
		if (!func_1087(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_952(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_767(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_776(iParam0))
		{
			return false;
		}
		if (!func_767(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_953(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_954(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_776(iParam0);
	}
	return true;
}

bool func_955(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_956(int iParam0, int iParam1, var uParam2)
{
	if (!func_1088(iParam0))
	{
		return 0;
	}
	if (func_1089(iParam0, iParam1, &uVar0))
	{
		func_886(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_957(int iParam0)
{
	if (!Global_1139381->f_5560)
	{
		return 0;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621.f_2;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return (*Global_1100469)[iVar0]->f_48;
}

bool func_958(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_1090((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_959(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

bool func_960(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_1091(iParam0))
	{
		return false;
	}
	iVar0 = func_1092(iParam0);
	if (!_0x603ac35fd4602c76(iVar0))
	{
		return false;
	}
	*uParam1 = iVar0;
	uParam1->f_2 = -678729477;
	if (!_datafile_get_data_node_index(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_961(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_962()
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

bool func_963(var uParam0, var uParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_964(int iParam0)
{
	iVar0 = 0;
	if (func_961(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

bool func_965(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_980(iParam0, iParam1);
	return func_1090(Global_1257541->f_451[iVar0]->f_2, iParam2);
}

bool func_966(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= (func_1093(iParam0, iParam1) - 1))
	{
		vVar1 = { func_1094(func_808(iParam0), iParam1, iVar0) };
		uVar4 = func_1095(func_808(iParam0), iParam1, iVar0);
		if (func_219(vVar1))
		{
		}
		else
		{
			if (func_969(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_967(int iParam0, int iParam1)
{
	uVar0 = Global_1901947->f_166.f_34;
	if (func_961(&Var1, iParam0) && func_972(&Var1, iParam1))
	{
		func_1096(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_968(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1) && vdist(get_entity_coords(get_player_ped(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_969(vector3 vParam0, float fParam3, bool bParam4)
{
	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return _0x397769175a7dbb30(vParam0, fParam3, 0, 0, iVar0);
}

int func_970(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_971(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_972(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_973(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return 0;
		case -910931556:
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

int func_975(int iParam0)
{
	return func_1097(iParam0, 4);
}

float func_976(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_977(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1138828->f_2[iParam0]->f_9 == iVar0 || Global_1138828->f_2[iParam0]->f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_978(int iParam0)
{
	iVar0 = func_1098(iParam0);
	if (iVar0 != 0 && func_63(iVar0))
	{
		return false;
	}
	if (iParam0 == 1717788883)
	{
		return func_1099();
	}
	return true;
}

bool func_979(int iParam0)
{
	return Global_1237665[iParam0] == -1;
}

int func_980(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

bool func_981(int iParam0)
{
	if (!func_819(iParam0))
	{
		return false;
	}
	iVar0 = func_1100(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_982(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_202(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1042())
	{
		return func_202(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_202(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_983(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_984(int iParam0)
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
		func_1101(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1102(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

var func_985(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_10;
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -893766361;
		case 1:
			return -2027639951;
		default:
			break;
	}
	return 0;
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 259767909;
		case 0:
			return 2063993476;
		case 1:
			return 1007867116;
		case 3:
			return -986826753;
		case 4:
			return 1461677252;
		default:
			break;
	}
	return 0;
}

int func_988(var uParam0)
{
	return func_1103(uParam0, 31, 1);
}

struct<8> func_989(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_11;
}

struct<8> func_990(var uParam0)
{
	return func_1104(uParam0, 31, 1);
}

bool func_991(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_921(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1105(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_992(int iParam0)
{
	return func_759(iParam0) == 1868067663;
}

void func_993(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_759(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_994(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_995()
{
	if (func_50() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_997(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_752(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_745(iParam0, 1399091007))
	{
		func_1106(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_998(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1107(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1108(&Var0, func_754(0));
	}
	if (!func_1109(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1110(iVar14);
	return uVar15;
}

struct<4> func_999(int iParam0, bool bParam1)
{
	Var0 = { func_616(iParam0, bParam1, 0) };
	return func_753(iParam0, Var0, Var0.f_4, bParam1);
}

int func_1000(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_1001(int iParam0)
{
	iParam0 = func_1000(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

int func_1002(int iParam0)
{
	iParam0 = func_1000(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_1003(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_1004(int iParam0, int iParam1)
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

struct<10> func_1005(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1006(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1007(int iParam0, int iParam1)
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

int func_1008(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_1009(int iParam0)
{
	if (func_745(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_745(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_745(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_1010(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_735(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_1011(int iParam0)
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

int func_1012(var uParam0)
{
	return func_1111(func_1103(uParam0, 34, 1));
}

void func_1013(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_673(iParam0);
	switch (iVar0)
	{
		case 1918154385:
			func_1112(uParam1);
			break;
		case 974227447:
			func_1113(uParam1, uParam2);
			break;
	}
}

void func_1014(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_1114(&Var0, iParam1, func_809(func_808(iParam1), uParam3), iParam4, uParam5);
	_copy_memory(&(Var0.f_14), uParam0, 4);
	_copy_memory(&(Var0.f_8), uParam2, 2);
	func_1115(&Var0);
}

bool func_1015(var uParam0, var uParam1, int iParam2)
{
	if (!func_1116(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1519814088;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1016(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

bool func_1017(var uParam0, int iParam1)
{
	uParam0->f_2 = 1969053457;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1018(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_1019(int iParam0)
{
	switch (iParam0)
	{
		case -628138157:
			return 0;
		case -360659748:
			return 1;
		case 1604231229:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_1020(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_1117(&uParam0))
	{
		return false;
	}
	if (!func_1118(&uParam0, iParam5))
	{
		return false;
	}
	return true;
}

bool func_1021(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_1022(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1023(int iParam0)
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

int func_1024(int iParam0, var uParam1)
{
	if (func_1119(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1025(int iParam0)
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

int func_1026(int iParam0)
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

int func_1027(int iParam0)
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

int func_1028(int iParam0)
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

int func_1029(int iParam0)
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

int func_1030(int iParam0, var uParam1, int iParam2)
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

void func_1031()
{
	if (func_50() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_66(Global_1572887->f_7, 1))
	{
		func_1120(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_764(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_902(1024))
	{
		func_1120(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_764(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_1032()
{
	return func_25(*Global_1051213);
}

int func_1033(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_62(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1034(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_1035(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_1036(int iParam0, var uParam1)
{
	if (((func_1121(&Var8, iParam0) && func_1122(&Var8)) && func_1123(&Var8, uParam1)) && func_1124(&Var8))
	{
		func_1125(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_1037()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_1038(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_1127(bParam2, func_1126(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_1039(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

char* func_1040(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1041(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_1042()
{
	return Global_1102219->f_3672;
}

var func_1043(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

var func_1044(struct<2> Param0)
{
	iVar0 = func_145(Param0, -1);
	return func_1128(iVar0);
}

int func_1045()
{
	return Global_1071686->f_28448[32]->f_3;
}

void func_1046(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1129(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_1047(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1051(iVar0, 1, 0);
		if (!func_991(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1052(&(Var2[iVar34])))
				{
					if (!bParam1 || func_858(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1048(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1051(iVar0, 0, 1);
		if (!func_991(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1053(&(Var9[iVar41])))
				{
					if (!bParam1 || func_858(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_1049(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_929(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_50() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_1130(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1050(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_1051(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_1052(int iParam0)
{
	return func_759(iParam0) == 1946043663;
}

bool func_1053(int iParam0)
{
	return func_759(iParam0) == -126813555;
}

bool func_1054(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_25(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1131(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_1055(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_837(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_855(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_1060(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_838(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_837(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_854(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_1060("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_850(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1056(struct<17> Param0)
{
	if (!func_921(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_1057(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_1058(int iParam0, bool bParam1)
{
	if (!func_745(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_745(iParam0, -1090933859))
		{
			return func_613(iParam0, 1) != 0;
		}
		if ((func_924(iParam0, -915411861, 0) || func_924(iParam0, 600942249, 0)) || func_924(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_1059(int iParam0, bool bParam1)
{
	iVar0 = func_1132(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_836(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_850(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1060(char* sParam0)
{
	Global_1915715->f_22470 = func_308(sParam0, 10000, 0, 0, 0, 1);
}

int func_1061(int* iParam0, bool bParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_848(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1062(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	if (!func_1133(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_852(0)) && !func_853());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && func_854(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_855(iVar32))
			{
			}
			else
			{
				iVar33 = func_858(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_1063(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_831(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_938(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1064(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1065(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1066(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1067(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1068(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1069(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1070(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1071(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1072(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1073(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1074(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1075(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1076(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1077(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_1078(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1134(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<28> func_1079(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_831(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1085(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1080(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1087(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1136(func_1135(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1137(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1081(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_831(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1085(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1082(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1136(func_1138(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1137(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1083(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_831(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1085(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1084(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1087(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1136(func_953(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1137(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1085(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_944(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_933() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1086(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1087(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1136(func_955(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1137(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_1087(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_1139(uParam1->f_8, iParam0, uVar0, 2048) || func_1139(uParam1->f_8, iParam0, uVar0, 32768)) || func_1139(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1139(uParam1->f_8, iParam0, uVar0, 4) || func_1139(uParam1->f_8, iParam0, uVar0, 256)) || func_1139(uParam1->f_8, iParam0, uVar0, 65536)) || func_1139(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_1139(uParam1->f_8, iParam0, uVar0, 1) || func_1139(uParam1->f_8, iParam0, uVar0, 8)) || func_1139(uParam1->f_8, iParam0, uVar0, 65536)) || func_1139(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_1139(uParam1->f_8, iParam0, uVar0, 1) || func_1139(uParam1->f_8, iParam0, uVar0, 16)) || func_1139(uParam1->f_8, iParam0, uVar0, 2)) || func_1139(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1139(uParam1->f_8, iParam0, uVar0, 8) || func_1139(uParam1->f_8, iParam0, uVar0, 4096)) || func_1139(uParam1->f_8, iParam0, uVar0, 256)) || func_1139(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1088(int iParam0)
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

bool func_1089(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1023(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

bool func_1090(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1091(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_508(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_509(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_1092(int iParam0)
{
	if (!func_1091(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_508(iParam0);
	iVar2 = func_509(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_1140(2);
		case 1:
			return func_1140(3);
		default:
			break;
	}
	return uVar0;
}

int func_1093(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_980(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_6;
}

Vector3 func_1094(int iParam0, int iParam1, int iParam2)
{
	if ((func_961(&Var3, iParam0) && func_972(&Var3, iParam1)) && func_1141(&Var3, iParam2))
	{
		func_971(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

var func_1095(int iParam0, int iParam1, int iParam2)
{
	uVar0 = Global_1901947->f_166.f_35;
	if ((func_961(&Var1, iParam0) && func_972(&Var1, iParam1)) && func_1141(&Var1, iParam2))
	{
		func_1096(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_1096(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1097(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_1090((*Global_1138411)[iVar0][iParam0], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1098(int iParam0)
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
		case 1427578635:
		case 1532822440:
		case 1539023636:
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_1099()
{
	return func_1142(func_113(0));
}

int func_1100(int iParam0)
{
	if (!func_819(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

void func_1101(int iParam0)
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
	func_1102(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1102(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_1103(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

struct<8> func_1104(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

void func_1105(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_759(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_1106(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_1108(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1109(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_831(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1110(int iParam0)
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

int func_1111(int iParam0)
{
	switch (iParam0)
	{
		case -323664079:
			return 0;
		case 304473406:
			return 1;
		case 1428568385:
			return 2;
		case -710377432:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_1112(var uParam0)
{
	iVar0 = 2;
	if (func_1143())
	{
		iVar0 = 8;
	}
	else if (func_1144())
	{
		iVar0 = 4;
	}
	iVar1 = func_1145();
	if (iVar1 <= 10)
	{
		func_1146(uParam0, 1);
	}
	else if (iVar1 <= 25 || iVar0 == 2)
	{
		func_1146(uParam0, 2);
		if (iVar1 > 25)
		{
			iVar1 = 25;
		}
	}
	else if (iVar1 <= 50 || iVar0 == 4)
	{
		func_1146(uParam0, 4);
		if (iVar1 > 50)
		{
			iVar1 = 50;
		}
	}
	else
	{
		func_1146(uParam0, 8);
	}
	func_1147(uParam0, iVar1);
}

void func_1113(var uParam0, var uParam1)
{
	if (func_1148(&Global_1296859, 4096))
	{
		func_1146(uParam0, 64);
	}
	else if (func_1148(&Global_1296859, 2048))
	{
		func_1146(uParam0, 32);
	}
	else
	{
		func_1146(uParam0, 16);
	}
	iVar0 = uParam1->f_2;
	iVar1 = func_1149();
	switch (iVar0)
	{
		case -1240530384:
			func_1146(uParam0, 512);
			break;
		case 1606989084:
			func_1146(uParam0, 1024);
			break;
		case -640645303:
			func_1146(uParam0, 2048);
			break;
		case 1103416334:
			func_1146(uParam0, 2048);
			break;
		default:
			if (iVar1 == 0)
			{
				func_1146(uParam0, 256);
			}
			else
			{
				func_1146(uParam0, 128);
			}
			break;
	}
	if (_unlock_is_unlocked(703286980) && !_unlock_is_visible(703286980))
	{
		func_1146(uParam0, 4096);
	}
}

void func_1114(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = uParam4;
	uParam0->f_13 = _0x901e0dc25080c8b9(player_id());
	*uParam0->f_21[0] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_1115(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[13] == 0 || !_does_thread_exist(&(Global_1051252->f_16[13])))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 40, 19, &(Global_1051252->f_16[13]));
	func_1150(uParam0, uParam0->f_1);
}

bool func_1116(var uParam0, var uParam1)
{
	if (!func_1151(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1854922634;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1117(var uParam0)
{
	uParam0->f_2 = 843787590;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1118(var uParam0, int iParam1)
{
	uParam0->f_2 = -789427168;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1119(int iParam0, var uParam1, var uParam2)
{
	if (func_1152(iParam0, uParam1, &uVar0))
	{
		func_1153(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1121(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_1154(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1122(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1123(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1124(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_1125(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_1126()
{
	return Global_1915715->f_20643;
}

int func_1127(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_1155())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_1128(int iParam0)
{
	iVar0 = func_1157(0, (func_1156() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1158(iVar0);
}

void func_1129(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1159(&(uParam0->f_4));
}

bool func_1130(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_929(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1160(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_1131(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_805(Param0);
	}
	return -1;
}

int func_1132(int iParam0, bool bParam1)
{
	if (!func_1058(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_613(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_613(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_613(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_613(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_613(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_613(-611782825, 1);
	}
	return func_613(iParam0, 1);
}

bool func_1133(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_929(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xb542632693d53408(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1161(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1134(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_1162(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1163(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

bool func_1135(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_1136(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_920(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_920(iParam1, 2, 0, 0);
	return -1;
}

int func_1137(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_920(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1138(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

int func_1139(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1090(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

var func_1140(int iParam0)
{
	return &(Global_1109804->f_21.f_2.f_1[iParam0]);
}

bool func_1141(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1142(struct<2> Param0)
{
	return func_1054(Param0, 1, 4);
}

bool func_1143()
{
	return func_1164(-1490861779, 1);
}

bool func_1144()
{
	return func_1164(1476279059, 1);
}

int func_1145()
{
	return func_935(-735397297, func_751(1), 1784584921, 1, 0, 0);
}

void func_1146(var uParam0, int iParam1)
{
	func_1120(uParam0, iParam1);
}

void func_1147(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_1148(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_1090((*Global_1298536)[iParam0]->f_19, iParam1);
}

int func_1149()
{
	if (!func_1165(&(Global_1298378->f_62)))
	{
		return 0;
	}
	iVar0 = func_1166(Global_1298378->f_62, -268973591, 0, 1);
	return iVar0;
}

void func_1150(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_1167(iVar0);
		if (func_66(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_1151(var uParam0, var uParam1)
{
	uParam0->f_1 = uVar0;
	*uParam0 = uParam1;
	uParam0->f_2 = 1372075093;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1152(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1023(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1153(var uParam0, int iParam1, var uParam2)
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

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_1155()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_1156()
{
	return Global_1109804->f_5737.f_632;
}

int func_1157(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1157(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1157(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1158(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

void func_1159(var uParam0)
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

bool func_1160(int iParam0, bool bParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1161(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_759(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1162(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_927(0))
	{
		iVar5 = func_856(func_1168(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_751(1) };
			Var0.f_4 = func_996(iVar5);
			*uParam2->f_1[0] = { func_753(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_944(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_1169(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_753(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_616(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_753(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_1163(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_951(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_952(iParam0, iParam3))
	{
		return false;
	}
	if (func_1170(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_954(iParam0, bParam4);
}

bool func_1164(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_752(iParam0);
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
			if (!func_1171(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1172(iParam0))
			{
				return true;
			}
			break;
	}
	return func_858(iParam0, 0, 0, 0) >= iParam1;
}

bool func_1165(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1166(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1173(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1167(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_1168()
{
	return Global_1915715->f_20241;
}

bool func_1169(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_944(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_1174(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

bool func_1170(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

bool func_1171(int iParam0, int iParam1)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_997(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1175("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1176(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1177(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1110(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1110(iVar1);
	}
	return false;
}

bool func_1172(int iParam0)
{
	if (!func_735(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_759(iParam0);
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
	iVar1 = func_1178(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1179(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1180(iParam0);
	iVar2 = func_1179(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

bool func_1173(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_831(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1174(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1181((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_933() };
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

bool func_1175(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_831(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1176(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1177(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_1178(int iParam0)
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

int func_1179(var uParam0, int iParam1)
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

int func_1180(int iParam0)
{
	iVar0 = func_759(iParam0);
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

bool func_1181(var uParam0)
{
	if (!func_1165(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

