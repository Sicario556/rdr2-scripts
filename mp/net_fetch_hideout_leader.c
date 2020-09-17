void __EntryFunction__()
{
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	func_1(ScriptParam_0.f_4);
	func_2(&ScriptParam_0);
	while (!func_3() && func_4())
	{
		wait(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	network_register_host_broadcast_variables(&uLocal_14, 1, 40);
	func_9(_0xba24095ea96dfe17(&uLocal_14), 1, "m_hostData");
	func_10(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	Local_0.f_2 = { uParam0->f_1 };
	iVar0 = uParam0->f_3;
	if (!does_entity_exist(iVar0))
	{
		func_11(2);
		return;
	}
	Local_0.f_1 = *uParam0;
	Local_0.f_4 = uParam0->f_4;
	Local_0.f_11 = uParam0->f_6;
	Local_0.f_13 = get_ped_index_from_entity_index(uParam0->f_3);
	Local_0.f_12 = _0x901e0dc25080c8b9(player_id());
	func_12(&(Local_0.f_5), 0);
	func_12(&(Local_0.f_8), 0);
}

bool func_3()
{
	if (func_13(0, 0))
	{
		return true;
	}
	if (func_14(Local_0.f_2, 1, 0))
	{
		return true;
	}
	if ((Local_0.f_4 == -1 || Local_0.f_11 == -1) || &Global_1237665->f_356[Local_0.f_4] != Local_0.f_11)
	{
		return true;
	}
	if (Local_0.f_12 != 0 && _0x901e0dc25080c8b9(player_id()) != Local_0.f_12)
	{
		return true;
	}
	return false;
}

bool func_4()
{
	switch (Local_0)
	{
		case 0:
			func_15();
			break;
		case 1:
			func_16();
			break;
		case 2:
			return false;
	}
	return true;
}

void func_5()
{
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
		if (func_17() == 0)
		{
			if (func_18())
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

void func_10(bool bParam0)
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

void func_11(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1 || !func_19(uParam0))
	{
		func_20(uParam0);
	}
}

bool func_13(bool bParam0, bool bParam1)
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

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_21(*Global_1051213) && !func_22(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_23(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_24(iParam3, 255))
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
	if (func_25())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_21(*Global_1051213))
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

void func_15()
{
	if (func_26())
	{
		func_11(1);
		return;
	}
	if (!does_entity_exist(Local_0.f_13))
	{
		func_11(2);
		return;
	}
	if (is_entity_dead(Local_0.f_13) && !get_ped_config_flag(Local_0.f_13, 11, false))
	{
		if (_is_ped_hogtied(Local_0.f_13) && _0x3d9f958834ab9c30(Local_0.f_13) == Global_34)
		{
			func_11(1);
			return;
		}
		else
		{
			func_11(2);
			return;
		}
	}
	if (network_is_host_of_this_script())
	{
		func_27();
	}
}

void func_16()
{
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (Local_0.f_1)
		{
			func_28(1951290581, 1, 1);
		}
		else
		{
			func_28(385589027, 1, 1);
		}
	}
	func_11(2);
}

int func_17()
{
	return Global_1572887->f_13;
}

bool func_18()
{
	return Global_1051252->f_8;
}

bool func_19(var uParam0)
{
	return func_29(*uParam0, 1);
}

void func_20(var uParam0)
{
	func_30(uParam0, 0);
}

bool func_21(struct<2> Param0)
{
	if (!func_31(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_32(Param0))
	{
		return false;
	}
	return true;
}

bool func_22(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_23(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_24(int iParam0, int iParam1)
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

bool func_25()
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
	if (!func_21(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_26()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -1315570756:
				if (!get_event_data(1, iVar0, &Var1, 32))
				{
					return false;
				}
				if (!does_entity_exist(Var1) || !does_entity_exist(Var1.f_1))
				{
					return false;
				}
				if (!is_entity_a_ped(Var1.f_1))
				{
					return false;
				}
				if (get_ped_index_from_entity_index(Var1) != Local_0.f_13)
				{
					return false;
				}
				if (!Var1.f_3 && !is_entity_dead(Var1))
				{
					return false;
				}
				if (Var1.f_24)
				{
					return false;
				}
				if (!is_ped_a_player(get_ped_index_from_entity_index(Var1.f_1)))
				{
					return false;
				}
				return _0x901e0dc25080c8b9(network_get_player_index_from_ped(get_ped_index_from_entity_index(Var1.f_1))) == _0x901e0dc25080c8b9(player_id());
		}
		iVar0++;
	}
	return false;
}

void func_27()
{
	if ((!func_33(uLocal_14, 1) && func_34(&(Local_0.f_5), 6000)) && func_35())
	{
		func_36(Local_0.f_13, "HIDEOUT_LEADER_FLEE", 1017772929, 0, 1, 0, 0, 1);
		func_37(&uLocal_14, 1);
	}
	if ((!func_33(uLocal_14, 2) && func_34(&(Local_0.f_8), 1000)) && _0x5203038ff8bae577(Local_0.f_13, 26, 750))
	{
		func_36(Local_0.f_13, "HIDEOUT_LEADER_TURN", 1017772929, 0, 1, 0, 0, 1);
		func_37(&uLocal_14, 2);
	}
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (func_17() != 0)
	{
		return;
	}
	if (func_38())
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
		if (!&Global_1139381->f_3876.f_2[func_39(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_39(iParam0, 1)])->f_2++;
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
	func_40(&Var0, uVar7);
}

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_31(int iParam0)
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

int func_32(int iParam0)
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

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_34(var uParam0, int iParam1)
{
	if (!func_19(uParam0))
	{
		return false;
	}
	if (func_43(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

bool func_35()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1) && _0x901e0dc25080c8b9(iVar1) == Local_0.f_12)
		{
			iVar2 = get_player_ped(iVar1);
			if ((!is_entity_dead(iVar2) && get_entity_speed(iVar2) > 0f) && vdist(get_entity_coords(iVar2, true, false), get_entity_coords(Local_0.f_13, true, false)) < 8f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_36(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_44(iParam0, &Var0);
}

void func_37(var uParam0, int iParam1)
{
	func_45(uParam0, iParam1);
}

bool func_38()
{
	if (func_17() != 0)
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

int func_39(int iParam0, int iParam1)
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

void func_40(var uParam0, var uParam1)
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

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(var uParam0)
{
	if (!func_19(uParam0))
	{
		return 0;
	}
	if (func_46(uParam0))
	{
		return uParam0->f_2;
	}
	return func_47(uParam0->f_1);
}

bool func_44(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_46(var uParam0)
{
	return func_29(*uParam0, 2);
}

int func_47(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

