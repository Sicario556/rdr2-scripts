void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iVar0 = get_game_timer();
	func_1();
	iVar1 = (get_game_timer() - iVar0);
	Global_1288655->f_24 = func_2("GFMP", 60, -1, 0, 0);
	Global_1288655->f_7 = participant_id_to_int();
	(*Global_1285390)[Global_1288655->f_7]->f_97 = player_id();
	while (!func_3(0, 0))
	{
		func_4();
		wait(0);
	}
	func_5();
}

void func_1()
{
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	set_this_script_can_be_paused(false);
	_0xb711eb4bc8d06013();
}

int func_2(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!_does_text_database_exist(sParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((_text_database_request(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_3(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_3(bParam3, bParam4);
	if (bVar1)
	{
		func_11();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!_text_database_has_loaded(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_3(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_3(bParam3, bParam4);
	if (bVar1)
	{
		func_11();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

bool func_3(bool bParam0, bool bParam1)
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

void func_4()
{
	if (!Global_1288655->f_24)
	{
		Global_1288655->f_24 = func_2("GFMP", 60, -1, 0, 0);
		return;
	}
	if ((func_12(2, 255) || !_unlock_is_visible(759426019)) || !_unlock_is_unlocked(759426019))
	{
		Global_1288655 = 0;
		return;
	}
	if (!(func_13() && func_14()))
	{
		Global_1288655 = 0;
		return;
	}
	if (!func_15())
	{
		Global_1288655 = 0;
		return;
	}
	Global_1288655 = 1;
	func_16();
	if (network_is_host_of_this_script())
	{
		func_17();
	}
	func_18();
}

void func_5()
{
	func_11();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_11();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_7()
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
			func_11();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_11();
					break;
				case 2:
					func_11();
					break;
				case 4:
					func_11();
					break;
				case 3:
					func_11();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_11();
		}
		if (!network_is_game_in_progress())
		{
			func_11();
		}
		if (!network_is_signed_online())
		{
			func_11();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_11();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_11();
	}
	return 1;
}

bool func_8()
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

void func_9()
{
	func_21(Global_1285260);
	network_register_host_broadcast_variables(Global_1285260, 130, 40);
	func_22(_0xba24095ea96dfe17(Global_1285260), 130, "g_mpGangfeudHostData");
	if (func_23())
	{
		func_24(Global_1285390);
		network_register_player_broadcast_variables(Global_1285390, 3265, 41);
		func_25(_0x690806bc83bc8ca2((*Global_1285390)[0]), 3265, "g_mpGangfeudPlayerData");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1285390, 3265, 41);
		func_25(_0x690806bc83bc8ca2((*Global_1285390)[0]), 3265, "g_mpGangfeudPlayerData");
		func_26(Global_1288655);
	}
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
					func_11();
					break;
				case 2:
					func_11();
					break;
				case 4:
					func_11();
					break;
				case 3:
					func_11();
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
			func_11();
			return;
		}
		wait(0);
	}
}

void func_11()
{
	terminate_this_thread();
}

bool func_12(int iParam0, int iParam1)
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

int func_13()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1071686->f_3;
}

int func_14()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1071686->f_5;
}

bool func_15()
{
	if (func_27() == 1)
	{
		return false;
	}
	if (func_28())
	{
		return false;
	}
	if (func_30(func_29(), 0, 0))
	{
		return false;
	}
	return true;
}

void func_16()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -507840394:
				func_31(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_17()
{
	switch (&Global_1285260)
	{
		case 0:
			func_32(1);
			break;
		case 1:
			func_33();
			break;
	}
}

void func_18()
{
	if (Global_1288655->f_7 == -1)
	{
		return;
	}
	func_34((*Global_1285390)[Global_1288655->f_7]);
	if ((Global_1940311->f_1433 == 1 || Global_1940311->f_1433 == 0) || Global_1940311->f_1433.f_2 == 1)
	{
		func_35();
	}
	func_36();
	if (Global_1288655->f_23 && !func_37(255))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			func_38("NG_CANNOT_SEND_CHALLENGE", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_38("NG_CANNOT_SEND_CHALLENGE_MEMBER", 10000, 0, 0, 0, 1);
		}
		Global_1288655->f_23 = 0;
	}
	switch ((*Global_1285390)[&Global_1296859]->f_99)
	{
		case 0:
			if (func_39())
			{
				func_40(1);
			}
			break;
		case 1:
			if (func_41())
			{
				if (_0x424b17a7dc5c90bc(player_id()))
				{
					func_40(2);
				}
				else
				{
					func_42(&(Global_1288655->f_2), 1);
					func_40(3);
				}
			}
			break;
		case 3:
			if (!func_43(&(Global_1288655->f_2)))
			{
				func_42(&(Global_1288655->f_2), 1);
			}
			if (func_44(&(Global_1288655->f_2)) > 60f)
			{
				func_40(1);
			}
			break;
		case 2:
			break;
		case 4:
			func_45();
			break;
	}
}

int func_19()
{
	return Global_1572887->f_13;
}

bool func_20()
{
	return Global_1051252->f_8;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
}

int func_22(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_23()
{
	return !Global_1572887->f_9;
}

void func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_46((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_25(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_26(var uParam0)
{
	uParam0->f_5 = 0;
}

int func_27()
{
	return Global_1572887->f_16;
}

bool func_28()
{
	return func_48(func_47(0));
}

struct<2> func_29()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_30(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_49(*Global_1051213) && !func_50(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_51(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_12(iParam3, 255))
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
	if (func_52())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_49(*Global_1051213))
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

void func_31(int iParam0)
{
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	if (!get_event_data(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0)
	{
		case 30:
			if (network_is_host_of_this_script())
			{
				func_53(Var0);
			}
			func_54(&Var0);
			break;
	}
}

void func_32(int iParam0)
{
	Global_1285260 = iParam0;
}

void func_33()
{
	uVar0 = 32;
	iVar34 = _0x53a94294fddcf98c(&uVar0, 1);
	if (iVar34 < 2)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < 1)
	{
		func_55();
		Global_1288655->f_80 = (Global_1288655->f_80 + 1 % 32);
		iVar33++;
	}
}

void func_34(var uParam0)
{
	if (((Global_1288655->f_16 != 255 && !_is_ped_hogtied(Global_34)) && !func_56()) || (Global_1288655->f_16 != 255 && !network_is_player_active(Global_1288655->f_16)))
	{
		Global_1288655->f_16 = 255;
	}
	if (uParam0->f_98 != Global_1296859->f_15)
	{
		uParam0->f_98 = Global_1296859->f_15;
		if (_0x149a2751ab66ac02(Global_1296859->f_15) > 1 && !_0x424b17a7dc5c90bc(Global_1296859->f_10))
		{
			func_57(uParam0);
		}
		else
		{
			func_58(uParam0);
		}
	}
	if ((*uParam0)[Global_1288655->f_30]->f_1 == -1)
	{
		return;
	}
	if (!_0xd6f6acf4392187fb(uParam0[Global_1288655->f_30]) || _0x149a2751ab66ac02(uParam0[Global_1288655->f_30]) < 1)
	{
		(*uParam0)[Global_1288655->f_30]->f_2 = -1;
		(*uParam0)[Global_1288655->f_30]->f_1 = -1;
		(*uParam0)[Global_1288655->f_30] = uVar0;
		if (Global_1288655->f_8 > Global_1288655->f_30)
		{
			Global_1288655->f_8 = Global_1288655->f_30;
		}
		return;
	}
	func_59((*uParam0)[Global_1288655->f_30]);
}

void func_35()
{
	iVar0 = &Global_1296859;
	Var1 = { func_60() };
	if (func_49(Var1) && !func_61())
	{
		func_62();
		return;
	}
	if ((*Global_1285390)[iVar0]->f_99 > 1 || Global_1108365->f_935.f_28 != -1)
	{
		func_62();
	}
	else
	{
		func_63();
	}
}

void func_36()
{
	iVar0 = &Global_1296859;
	if ((*Global_1285390)[iVar0]->f_99 > 1)
	{
		func_64(1);
		return;
	}
	if (&Global_1296859->f_22[&Global_1296859] == 0)
	{
		func_64(1);
		return;
	}
	Var1 = { func_60() };
	if (!func_61())
	{
		if (func_49(Var1))
		{
			func_64(1);
			return;
		}
		if (func_49((*Global_1056141)[iVar0]->f_2) && func_65((*Global_1056141)[iVar0]->f_2))
		{
			func_64(1);
			return;
		}
	}
	if (func_66((*Global_1285390)[iVar0], 1))
	{
		func_67(1);
	}
}

bool func_37(int iParam0)
{
	return func_68(1, iParam0);
}

var func_38(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_39()
{
	if (!_0x7907969497ea92f5(Global_1288655->f_75))
	{
		Global_1288655->f_75 = _0xd97d8d905f1562f2(-152187458);
	}
	if (!_0x603ac35fd4602c76(Global_1288655->f_75))
	{
		return false;
	}
	_datafile_register_query(Global_1288655->f_75, -761724091, "posse_feud_data/animosity_data(name=%x)");
	_datafile_register_query(Global_1288655->f_75, 1456495662, ":value");
	return true;
}

void func_40(int iParam0)
{
	iVar0 = player_id();
	(*Global_1285390)[iVar0]->f_99 = iParam0;
}

bool func_41()
{
	if (Global_1102219->f_26.f_3464.f_5)
	{
		func_69(*Global_1211181, 1);
		Global_1288655->f_5 = 0;
		Global_1288655->f_25 = 1;
		Var0.f_9 = 255;
		Var0.f_10 = 255;
		Var0.f_11 = 255;
		Var0 = 30;
		Var0.f_6 = 0;
		Var0.f_9 = player_id();
		Var0.f_10 = Global_1288655->f_15;
		Var0.f_11 = player_id();
		Var0.f_7 = _0x901e0dc25080c8b9(player_id());
		Var0.f_8 = _0x901e0dc25080c8b9(Global_1288655->f_15);
		func_70(&Var0);
	}
	return Global_1102219->f_26.f_3464.f_5;
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1 || !func_43(uParam0))
	{
		func_71(uParam0);
	}
}

bool func_43(var uParam0)
{
	return func_72(*uParam0, 1);
}

float func_44(var uParam0)
{
	if (!func_43(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_74() - uParam0->f_1);
}

void func_45()
{
	func_75();
	func_76();
}

void func_46(var uParam0)
{
	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_97 = 255;
	*uParam0 = { Var0 };
}

struct<2> func_47(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_48(struct<2> Param0)
{
	return func_77(Param0, 1, 4);
}

bool func_49(struct<2> Param0)
{
	if (!func_78(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_79(Param0))
	{
		return false;
	}
	return true;
}

bool func_50(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_51(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_52()
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
	if (!func_49(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_53(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (Param0.f_6)
	{
		case 0:
			func_80(&Param0);
			break;
		case 2:
			func_81(&Param0);
			break;
		case 3:
			func_82(&Param0);
			break;
		case 1:
			break;
	}
}

void func_54(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			func_83(uParam0);
			break;
		case 2:
			func_84(uParam0);
			break;
		case 3:
			func_85(uParam0);
			break;
	}
}

void func_55()
{
	if (get_time_difference(Global_1285260->f_1[Global_1288655->f_80]->f_3, get_network_time_accurate()) >= 60000)
	{
		Global_1285260->f_1[Global_1288655->f_80]->f_1 = 255;
		Global_1285260->f_1[Global_1288655->f_80] = 255;
		return;
	}
	if (_network_is_player_index_valid(&(Global_1285260->f_1[Global_1288655->f_80])) && !network_is_player_connected(&(Global_1285260->f_1[Global_1288655->f_80])))
	{
		Global_1285260->f_1[Global_1288655->f_80]->f_1 = 255;
		Global_1285260->f_1[Global_1288655->f_80] = 255;
		return;
	}
	if (_network_is_player_index_valid(Global_1285260->f_1[Global_1288655->f_80]->f_1) && !network_is_player_connected(Global_1285260->f_1[Global_1288655->f_80]->f_1))
	{
		Global_1285260->f_1[Global_1288655->f_80]->f_1 = 255;
		Global_1285260->f_1[Global_1288655->f_80] = 255;
		return;
	}
}

bool func_56()
{
	return func_68(1, 255);
}

void func_57(var uParam0)
{
	iVar2 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_a_participant(iVar2))
	{
		return;
	}
	iVar3 = network_get_participant_index(iVar2);
	if (!network_is_participant_active(iVar3) || !func_86(iVar3))
	{
		return;
	}
	iVar1 = iVar3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*uParam0)[iVar0] = { *(*(*Global_1285390)[iVar1])[iVar0] };
		iVar0++;
	}
	Global_1288655->f_20 = iVar3;
}

void func_58(var uParam0)
{
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*uParam0)[iVar0] = { vVar1 };
		iVar0++;
	}
	Global_1288655->f_20 = participant_id();
}

void func_59(var uParam0)
{
	if (uParam0->f_1 == -1 || uParam0->f_2 == -1)
	{
		return;
	}
	iVar0 = (Global_1901947->f_308.f_171 * 1000 - (get_game_timer() - uParam0->f_2));
	if (iVar0 <= 0)
	{
		uParam0->f_2 = -1;
	}
}

struct<2> func_60()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_47(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_47(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_61()
{
	return (func_87() != 0 || func_88(1));
}

void func_62()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_databinding_is_data_id_valid(&(Global_1288655->f_40[iVar0])))
		{
		}
		else if (_databinding_read_data_bool_from_parent(&(Global_1288655->f_40[iVar0]), func_89(0)))
		{
			_databinding_write_data_bool_from_parent(&(Global_1288655->f_40[iVar0]), func_89(0), 0);
		}
		iVar0++;
	}
}

void func_63()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_databinding_is_data_id_valid(&(Global_1288655->f_40[iVar0])))
		{
		}
		else if (!_databinding_read_data_bool_from_parent(&(Global_1288655->f_40[iVar0]), func_89(0)))
		{
			_databinding_write_data_bool_from_parent(&(Global_1288655->f_40[iVar0]), func_89(0), 1);
		}
		iVar0++;
	}
}

void func_64(int iParam0)
{
	iVar0 = &Global_1296859;
	func_90(&((*Global_1285390)[iVar0]->f_100), iParam0);
}

bool func_65(struct<2> Param0)
{
	iVar0 = func_91(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_66(var uParam0, int iParam1)
{
	return func_92(uParam0->f_100, iParam1);
}

void func_67(int iParam0)
{
	iVar0 = &Global_1296859;
	func_93(&((*Global_1285390)[iVar0]->f_100), iParam0);
}

bool func_68(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_94(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_95())
	{
		return func_94(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_94(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_69(struct<5> Param0, int iParam5)
{
	Var0.f_5 = -1;
	Var0.f_4 = 7;
	Var0.f_5 = { Param0 };
	Var0.f_11 = iParam5;
	func_97(&Var0, func_96(0, 8));
}

void func_70(var uParam0)
{
	uVar0 = func_96(0, 8);
	if (!_0x179a6f0ee2e79026(&uVar0))
	{
		return;
	}
	trigger_script_event(1, uParam0, 12, 37, &uVar0);
}

void func_71(var uParam0)
{
	func_98(uParam0, 0f);
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_73(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_74()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_75()
{
	iVar0 = &Global_1296859;
	(*Global_1285390)[iVar0]->f_100 = 0;
}

void func_76()
{
	Global_1288655->f_79 = 255;
	Global_1288655->f_18 = uVar0;
	func_40(1);
}

bool func_77(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_49(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_99(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_78(int iParam0)
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

int func_79(int iParam0)
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

void func_80(var uParam0)
{
	if (uParam0->f_4)
	{
		return;
	}
	uParam0->f_4 = 1;
	_0x31010318ba9897ac(&uVar0, uParam0->f_9);
	uParam0->f_9 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(uParam0->f_9));
	uParam0->f_10 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(uParam0->f_10));
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((&Global_1285260->f_1[iVar1] == uParam0->f_9 || &Global_1285260->f_1[iVar1] == uParam0->f_10) && get_time_difference(Global_1285260->f_1[iVar1]->f_3, get_network_time_accurate()) < 60000)
		{
			uParam0->f_5 = 0;
			func_100(uParam0, &uVar0);
			return;
		}
		if (iVar2 == -1)
		{
			if (Global_1285260->f_1[iVar1]->f_1 == 255 || &Global_1285260->f_1[iVar1] == 255)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1285260->f_1[iVar2] = uParam0->f_9;
	Global_1285260->f_1[iVar2]->f_1 = uParam0->f_10;
	Global_1285260->f_1[iVar2]->f_2 = uParam0->f_11;
	Global_1285260->f_1[iVar2]->f_3 = get_network_time_accurate();
	uParam0->f_5 = 1;
	func_100(uParam0, &uVar0);
	return;
}

void func_81(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1285260->f_1[iVar0] == uParam0->f_9 && Global_1285260->f_1[iVar0]->f_1 == uParam0->f_10)
		{
			Global_1285260->f_1[iVar0]->f_1 = 255;
			Global_1285260->f_1[iVar0] = 255;
			Global_1285260->f_1[iVar0]->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_82(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1285260->f_1[iVar0]->f_2 == uParam0->f_10)
		{
			Global_1285260->f_1[iVar0]->f_1 = 255;
			Global_1285260->f_1[iVar0] = 255;
			Global_1285260->f_1[iVar0]->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_83(var uParam0)
{
	if (!uParam0->f_4)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		Global_1288655->f_23 = 1;
		Global_1288655->f_25 = 1;
		func_101(Global_1211181);
		func_40(1);
		return;
	}
	func_102(uParam0);
}

void func_84(var uParam0)
{
	if (uParam0->f_9 == player_id())
	{
		Global_1288655->f_27 = 1;
	}
}

void func_85(var uParam0)
{
	if (uParam0->f_10 == player_id())
	{
		func_40(1);
	}
}

bool func_86(int iParam0)
{
	return func_103(iParam0);
}

int func_87()
{
	return Global_1301323->f_150;
}

bool func_88(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_90(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_91(struct<2> Param0)
{
	if (!func_49(Param0))
	{
		return -1;
	}
	iVar0 = func_104(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_92(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_94(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_95()
{
	return Global_1102219->f_3672;
}

var func_96(int iParam0, int iParam1)
{
	return func_105(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_97(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 12, 25, &uParam1);
}

void func_98(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_74() - fParam1);
	func_106(uParam0, 1);
	func_107(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_99(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_108(Param0);
	}
	return -1;
}

void func_100(var uParam0, float fParam1)
{
	trigger_script_event(1, uParam0, 12, 37, fParam1);
}

void func_101(var uParam0)
{
	if (*uParam0 == -1)
	{
		func_109(uParam0, 0);
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 3;
	Var0.f_5 = { *uParam0 };
	func_97(&Var0, func_96(0, 8));
	func_110(0);
	func_109(uParam0, 0);
}

void func_102(var uParam0)
{
	switch (Global_1288655->f_28)
	{
		case 1:
			func_111(uParam0->f_10, Global_1901947->f_308.f_172);
			func_112(uParam0->f_10);
			Global_1288655->f_5 = 0;
			func_113();
			return;
		case 4:
			iVar0 = 1;
			iVar1 = 4;
			break;
		case 5:
			iVar0 = 2;
			iVar1 = 5;
			break;
	}
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		func_114(iVar0, uParam0->f_8, Global_1901947->f_308.f_172);
		func_115(uParam0->f_8);
		func_116();
		func_113();
	}
	else
	{
		Var2.f_4 = iVar1;
		Var2.f_5 = uParam0->f_8;
		Var2.f_1 = player_id();
		Var2.f_9 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
		func_117(&Var2, _0x4be6c13a45cca8ec(Global_1296859->f_15));
		func_115(uParam0->f_8);
		func_113();
	}
}

int func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

int func_104(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_118(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_118(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

var func_105(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_119() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_120());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_121(get_player_team(iVar5)));
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
			if (func_122(iVar2))
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
				if (iVar9 & 8192 != 0 && func_123(iVar2) != 1)
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
					if (!func_124(iVar10))
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

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_108(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_118(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_109(var uParam0, bool bParam1)
{
	Var0 = -1;
	*uParam0 = { Var0 };
	if (bParam1)
	{
		func_110(0);
	}
}

void func_110(int iParam0)
{
	Global_1210882->f_211 = iParam0;
}

void func_111(int iParam0, var uParam1)
{
	if (!func_125(3))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var15.f_12 = -1;
	Var15.f_12.f_1 = -1;
	Var15.f_14 = 255;
	Var15.f_15 = 255;
	vVar34 = { 0f, 0f, 0f };
	Var0.f_5 = 3;
	Var0.f_10 = uParam1;
	iVar37 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	Var15.f_4 = 85;
	_0x31010318ba9897ac(&fVar14, iParam0);
	Var15 = 1;
	Var15.f_1 = player_id();
	Var15.f_14 = player_id();
	Var15.f_15 = iParam0;
	Var15.f_2 = get_network_time_accurate();
	Var15.f_6 = uParam1;
	Var15.f_9 = iVar37;
	Var15.f_16 = Global_1296859->f_15;
	func_128(func_127(1, func_126(0)), vVar34, 0f, 0, 0, fVar14, Var15);
	_0xde544b7ec0c187cc(&fVar14);
	_0x31010318ba9897ac(&fVar14, player_id());
	Var0.f_6 = player_id();
	Var0.f_8 = { func_127(1, func_126(0)) };
	Var0.f_7 = fVar14;
	Var0.f_11 = _0x901e0dc25080c8b9(iParam0);
	Var0.f_1 = iParam0;
	Var0.f_13 = 1;
	Var0.f_12 = iVar37;
	func_129(&Var0, &fVar14);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_130();
}

void func_112(int iParam0)
{
	if (!network_is_player_connected(iParam0))
	{
		return;
	}
	Global_1288655->f_79 = iParam0;
	Global_1288655->f_18 = _0x901e0dc25080c8b9(iParam0);
	func_40(2);
}

void func_113()
{
	switch (Global_1288655->f_28)
	{
		case 1:
			_0xf37a2149bc9a8a27(1403358139, player_id(), Global_1288655->f_15, func_131(Global_1288655->f_18), 0);
			break;
		case 4:
			_0xf37a2149bc9a8a27(-1522841992, player_id(), Global_1288655->f_15, func_131(Global_1288655->f_18), 0);
			break;
		case 5:
			_0xf37a2149bc9a8a27(2112282570, player_id(), Global_1288655->f_15, func_131(Global_1288655->f_18), 0);
			break;
	}
}

void func_114(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == Global_1296859->f_15)
	{
		return;
	}
	if (!func_125(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var14 = -1;
	Var14.f_1 = -1;
	Var17.f_12 = -1;
	Var17.f_12.f_1 = -1;
	Var17.f_14 = 255;
	Var17.f_15 = 255;
	vVar36 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1296859->f_15;
	iVar39 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	switch (iParam0)
	{
		case 2:
			Var14 = { func_127(5, func_126(0)) };
			Var17.f_4 = 80;
			break;
		case 1:
			Var14 = { func_127(4, func_126(0)) };
			Var17.f_4 = 81;
			break;
	}
	func_132(&fVar16, iParam1, 1);
	Var17 = 1;
	Var17.f_1 = player_id();
	Var17.f_2 = get_network_time_accurate();
	Var17.f_6 = uParam2;
	Var17.f_9 = iVar39;
	Var17.f_16 = Global_1296859->f_15;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_133(Var0.f_5))
	{
		return;
	}
	if (!func_134(iParam1))
	{
		return;
	}
	func_128(Var14, vVar36, 0f, 0, 0, fVar16, Var17);
	func_132(&fVar16, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var17.f_4 = 84;
			break;
		case 1:
			Var17.f_4 = 83;
			break;
	}
	Var17.f_7 = iParam1;
	Var17 = 0;
	func_135(Var17, fVar16, 0, 0);
	_0xde544b7ec0c187cc(&fVar16);
	func_136(Var0.f_5, &fVar16);
	if (!_0x179a6f0ee2e79026(&fVar16))
	{
		return;
	}
	Var0.f_6 = player_id();
	Var0.f_8 = { Var14 };
	Var0.f_7 = fVar16;
	Var0.f_11 = iParam1;
	Var0.f_13 = 1;
	Var0.f_12 = iVar39;
	func_129(&Var0, &fVar16);
	func_135(Var17, fVar16, 0, 0);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_130();
}

void func_115(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return;
	}
	Global_1288655->f_18 = iParam0;
	func_40(2);
}

void func_116()
{
	func_137(16);
	func_137(17);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = 22;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar0, iParam1);
	trigger_script_event(1, uParam0, 11, 6, &uVar0);
}

bool func_118(struct<2> Param0, var uParam2)
{
	if (!func_49(Param0))
	{
		return false;
	}
	func_138(uParam2);
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

int func_119()
{
	return Global_1051252->f_12;
}

char* func_120()
{
	return "unnamed";
}

int func_121(int iParam0)
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

bool func_122(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_68(36, iParam0);
}

int func_123(int iParam0)
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

bool func_124(int iParam0)
{
	if (func_139(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_140(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_125(int iParam0)
{
	if (func_141(func_47(0)) == 5)
	{
		return false;
	}
	if (func_141(func_47(0)) == 3)
	{
		if (!func_61())
		{
			return false;
		}
	}
	if (func_141(func_47(0)) == 4)
	{
		return false;
	}
	if (func_142())
	{
		return false;
	}
	if (func_143())
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	if ((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_144(iParam0, _0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 3 && !_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	return true;
}

int func_126(int iParam0)
{
	iVar0 = iParam0;
	if (!func_145(iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<2> func_127(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (((iVar0 < 0 || iVar0 >= 7) || iVar1 < 0) || iVar1 >= 16)
	{
		return func_29();
	}
	return func_146(Global_1108365->f_814.f_1[iParam0][iParam1], 3);
}

void func_128(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	if (!_0x179a6f0ee2e79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = get_player_index();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 27, 39, &fParam8);
}

void func_129(var uParam0, float fParam1)
{
	*uParam0 = 29;
	trigger_script_event(1, uParam0, 14, 38, fParam1);
}

void func_130()
{
	func_147(0);
}

int func_131(int iParam0)
{
	iVar0 = Global_1288655->f_20;
	iVar1 = 0;
	if (*Global_1285390)[iVar0]->f_97 != _0x4be6c13a45cca8ec(Global_1296859->f_15)
	{
	}
	Global_1288655->f_12 = Global_1288655->f_12;
	while (Global_1288655->f_12 <= 31)
	{
		if ((*Global_1285390)[iVar0][Global_1288655->f_12] != iParam0)
		{
		}
		else
		{
			iVar1 = (iVar1 + (*(*Global_1285390)[iVar0])[Global_1288655->f_12]->f_1);
		}
		Global_1288655->f_12++;
	}
	return iVar1;
}

void func_132(float fParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_connected(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar2) != iParam1)
		{
		}
		else if (bParam2)
		{
			if (!_0x424b17a7dc5c90bc(iVar2))
			{
			}
			else
			{
				bVar1 = true;
				_0x31010318ba9897ac(fParam0, iVar2);
			}
			iVar0++;
			if (!bVar1)
			{
				_0xde544b7ec0c187cc(fParam0);
			}
		}
	}
}

bool func_133(int iParam0)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	if (!func_125(iParam0))
	{
		return false;
	}
	if (func_149(player_id(), 1, 1) && !func_150(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		case 4:
		case 5:
			return func_151(iParam0);
		case 6:
			return func_152();
		case 7:
			return func_153();
		case 8:
		case 9:
		case 10:
			return func_154(iParam0);
		default:
			break;
	}
	return false;
}

bool func_134(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	if (_0x149a2751ab66ac02(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_135(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&fParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_155(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &fParam19);
}

void func_136(var uParam0, float fParam1)
{
	func_156(fParam1, 1);
}

void func_137(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var1 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar40 = _databinding_read_data_int(Var1.f_26);
		if (iParam0 == iVar40)
		{
			func_157(Var1);
		}
		iVar0++;
	}
}

void func_138(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_139(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_140(int iParam0)
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
		func_158(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_159(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_141(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_142()
{
	return func_92(Global_1572887->f_7, 1);
}

bool func_143()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_144(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 8:
			return bParam1;
		case 10:
			return bParam1;
		case 9:
			return bParam1;
		case 4:
			return bParam1;
		case 5:
			return bParam1;
		case 6:
			return bParam1;
		case 7:
			return bParam1;
		default:
			break;
	}
	return false;
}

bool func_145(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return false;
	}
	return true;
}

struct<2> func_146(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636), func_79(iParam1));
			break;
		case 3:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_602), func_79(iParam1));
			break;
		case 4:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_2104), func_79(iParam1));
			break;
		case 5:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_12606), func_79(iParam1));
			break;
		case 6:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_12908), func_79(iParam1));
			break;
		case 7:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_15910), func_79(iParam1));
			break;
		case 8:
			Var0.f_1 = func_160(iParam0, &(Global_1071686->f_636.f_16512), func_79(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_29();
	}
	return Var0;
}

void func_147(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

bool func_148(int iParam0)
{
	if (!_unlock_is_unlocked(956799153))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return _unlock_is_unlocked(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (_unlock_is_unlocked(1612825071) && _unlock_is_unlocked(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_149(int iParam0, bool bParam1, bool bParam2)
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

bool func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return true;
	}
	return false;
}

int func_151(int iParam0)
{
	if (!func_161(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_162())
	{
		return 0;
	}
	if (!func_163())
	{
		func_164();
		return 0;
	}
	if (func_165(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (func_166())
	{
		func_164();
		return 0;
	}
	if (!get_safe_coord_for_ped(Global_35, false, &uVar0, 16))
	{
		func_164();
		return 0;
	}
	iVar3 = _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id()));
	switch (iParam0)
	{
		case 4:
			if (iVar3 > 2 && func_167(1, 3))
			{
				return 1;
			}
			break;
		case 5:
			if (iVar3 > 1 && func_167(1, 2))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_152()
{
	if (!func_161(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_162())
	{
		return 0;
	}
	if (func_165(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_168())
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1)
	{
		return 1;
	}
	if (!func_167(1, 2))
	{
		return 0;
	}
	return 0;
}

int func_153()
{
	if (!func_170(func_169(7)))
	{
		return 0;
	}
	if (_0x2f7eb8b6f6afe79c(1) < 2)
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 == 8)
	{
		func_171(&(Global_1108365->f_935), 1);
	}
	if (!func_170(func_169(iParam0)))
	{
		return 0;
	}
	if (!func_161(Global_1296859->f_15))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) < 2)
	{
		return 0;
	}
	if (!func_167(1, 2))
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar2 = int_to_playerindex(iVar0);
			if ((!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
			{
			}
			else
			{
				if (func_92((*Global_1196567)[iVar0]->f_9, 1))
				{
					iVar1++;
				}
				if (iVar1 > 1)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar1 < 2)
				{
					func_172(&(Global_1108365->f_935), 1);
					return 0;
				}
				func_171(&(Global_1108365->f_935), 1);
				return 1;
			}
		}
	}
}

int func_155(var uParam0, struct<21> Param1)
{
	if (!func_173(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_156(float fParam0, bool bParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
		{
		}
		else if (!bParam1 && _0x424b17a7dc5c90bc(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) != iVar0)
		{
		}
		else
		{
			_0x31010318ba9897ac(fParam0, iVar1);
		}
		iVar2++;
	}
}

void func_157(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_174(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_175((Global_1940311->f_242.f_1186 - 1));
}

void func_158(int iParam0)
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
	func_159(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_159(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_160(int iParam0, var uParam1, int iParam2)
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

bool func_161(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_176(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

bool func_162()
{
	if (func_49(func_47(0)) && !func_61())
	{
		return true;
	}
	return false;
}

bool func_163()
{
	return func_177(Global_35) != -1;
}

void func_164()
{
	sVar0 = func_178(Global_1108365->f_935.f_27);
	Global_1108365->f_935.f_18 = 0;
	if (!are_strings_equal(sVar0, _databinding_read_data_string(Global_1940311->f_1433.f_54.f_5)))
	{
		func_179(sVar0, 1105014447);
	}
}

bool func_165(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_180(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_166()
{
	if (is_ped_in_any_boat(Global_34))
	{
		return true;
	}
	iVar0 = func_181(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_swimming(iVar0))
		{
			return true;
		}
	}
	return is_ped_swimming(Global_34);
}

bool func_167(bool bParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else
		{
			if ((func_182(iVar2) && func_49((*Global_1056141)[iVar0]->f_2)) || !func_49((*Global_1056141)[iVar0]->f_2))
			{
				if (bParam0 && !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_168()
{
	vVar0 = { _get_waypoint_coords() };
	func_42(&(Global_1108365->f_935.f_36), 1);
	Global_1108365->f_935.f_20 = 0;
	if (Global_1108365->f_935.f_27 == -1)
	{
		return false;
	}
	if (func_183(vVar0))
	{
		func_164();
		return false;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar4 = int_to_playerindex(iVar3);
		if ((!_network_is_player_index_valid(iVar4) || !network_is_player_active(iVar4)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar4))
		{
		}
		else if (iVar4 == player_id() && func_184(vVar0, Global_35) <= (150f * 2f))
		{
			Global_1108365->f_935.f_20 = 1;
			func_164();
			return false;
		}
		else if (func_184(vVar0, func_185(iVar4)) <= 150f)
		{
			Global_1108365->f_935.f_20 = 1;
			func_164();
			return false;
		}
		iVar3++;
	}
	vVar0.f_2 = _get_heightmap_bottom_z_for_position(vVar0.x, vVar0.y);
	request_collision_at_coord(vVar0);
	if (_0x6bfbdc46139c45ab(vVar0) && func_186(&vVar0, 9999f))
	{
	}
	else
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_164();
		}
		return false;
	}
	_0xcf213a5fc3abfc08(vVar0.x, vVar0.y, (50f * 2f));
	vVar5 = { 50f, 50f, 50f };
	if (!is_navmesh_loaded_in_area(vVar0 - vVar5, vVar0 + vVar5))
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_164();
		}
		return false;
	}
	Global_1108365->f_935.f_4 = 0;
	if (!get_safe_coord_for_ped(vVar0, false, &(Global_1108365->f_935.f_24), 16))
	{
		Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
		func_164();
		return false;
	}
	func_164();
	return true;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 18;
		case 10:
			return 15;
		case 8:
			return 16;
		case 9:
			return 17;
		default:
			break;
	}
	return -1;
}

bool func_170(int iParam0)
{
	if (func_162())
	{
		return false;
	}
	iVar0 = -1;
	iVar1 = func_187(iParam0, player_id(), &iVar0);
	if (iVar1 != 0)
	{
		return false;
	}
	iVar2 = 0;
	if (!func_188(iParam0))
	{
		iVar3 = func_190(func_189(iParam0));
		if (iVar3 == -1)
		{
			return false;
		}
		iVar2 = (iVar3 - 2);
		iVar2 = func_191(iParam0, iVar2);
	}
	else
	{
		iVar2 = func_192(iParam0, Global_35);
		iVar1 = func_193(iParam0, iVar2);
		if (iVar1 != 0)
		{
			return false;
		}
	}
	iVar4 = func_194(iParam0, iVar2);
	iVar1 = func_195(iVar4);
	if (iVar1 != 0)
	{
		return false;
	}
	Var5 = { func_196(iParam0, iVar2, iVar4) };
	iVar1 = func_197(Var5);
	if (iVar1 != 0)
	{
		return false;
	}
	return true;
}

void func_171(var uParam0, int iParam1)
{
	if (!func_92(*uParam0, iParam1))
	{
		return;
	}
	func_93(uParam0, iParam1);
}

void func_172(var uParam0, int iParam1)
{
	if (func_92(*uParam0, iParam1))
	{
		return;
	}
	func_90(uParam0, iParam1);
}

bool func_173(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

void func_174(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_89(91));
	if (func_198(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_175(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

struct<7> func_176(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_177(vector3 vParam0)
{
	return func_199(_get_map_zone_at_coords(vParam0, 10));
}

char* func_178(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	_copy_memory(&Var0, &(Global_1940311->f_1433.f_157.f_2), 95);
	if ((network_is_handle_valid(&(Var0.f_29)) && network_is_handle_valid(&(Global_1296859->f_1))) && network_are_handles_the_same(&(Var0.f_29), &(Global_1296859->f_1)))
	{
		if (Var0.f_3)
		{
			_0xc08aff658b2e51da(&iVar95);
			if (iVar95 != Var0.f_2)
			{
				return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
			}
		}
		else if (_0xd6f6acf4392187fb(Var0.f_1) && !_0x0f99f6436528a089(Var0.f_1))
		{
			return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}
	if (!func_161(Global_1296859->f_15) || !_0x424b17a7dc5c90bc(player_id()))
	{
		return _create_var_string(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");
	}
	if (((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_200(iParam0)) && func_201(iParam0))
	{
		iVar96 = (180 - (&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21));
		return _create_var_string(10, "POSSE_VERSUS_TIMER_FOOTER", func_203(func_202(iVar96 * 1000, 0, 0, 0, 0, 0), 109029619));
	}
	switch (iParam0)
	{
		case 4:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 2)
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_206())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_207())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_149(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_INFIGHTING_FOOTER";
			}
			break;
		case 5:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_206())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_207())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_149(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			}
			break;
		case 8:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_208(&(Global_1108365->f_935), 1))
			{
				sVar100 = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			}
			break;
		case 9:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			}
			break;
		case 10:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			}
			break;
		case 7:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HTPL_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_HTPL_TOO_FEW_AVAILABLE";
			}
			else if (_0x2f7eb8b6f6afe79c(1) < 2)
			{
				sVar100 = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (!func_209(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (func_149(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			}
			break;
		case 6:
			if (!func_204(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW";
			}
			else if (!func_205(1, 2))
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW_AVAILABLE";
			}
			else if (func_165(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_183(_get_waypoint_coords()))
			{
				sVar100 = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			}
			else if (Global_1108365->f_935.f_20 && func_210(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			}
			else if (func_183(Global_1108365->f_935.f_24) && func_210(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_RACE_FOOTER";
			}
			break;
		default:
			sVar100 = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}
	return _create_var_string(2, sVar100);
}

void func_179(char* sParam0, int iParam1)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_5, sParam0);
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_6, iParam1);
	}
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
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

int func_181(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_182(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = get_player_index();
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar1 = iParam0;
	if (!func_49((*Global_1056141)[iVar1]->f_2))
	{
		return false;
	}
	iVar0 = func_108((*Global_1056141)[iVar1]->f_2);
	iVar2 = func_141((*Global_1056141)[iVar1]->f_2);
	switch (iVar2)
	{
		case 3:
			switch (iVar0)
			{
				case 30:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_183(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_184(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

Vector3 func_185(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_186(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_211(iParam0) == -785841056)
	{
		if (func_212(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _0x901e0dc25080c8b9(iParam1);
		if (!_0xd6f6acf4392187fb(iVar0))
		{
			return 6;
		}
		if (!func_161(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_0x149a2751ab66ac02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_165(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_190(&(Global_1196898->f_1[iParam0]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if (Global_1196339->f_1[*iParam2]->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_213(&Var4, iParam0))
	{
		func_214(Var4, -1068020191, &iVar2, 0);
		func_214(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_216(func_215());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

bool func_188(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
		default:
			break;
	}
	return true;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return -785841056;
		default:
			break;
	}
	return -1125105727;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case 1232677007:
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1196339->f_1[iVar2] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_191(int iParam0, int iParam1)
{
	if (func_213(&Var0, iParam0) && func_217(&Var0))
	{
		Var5 = { Var0 };
		if (func_218(&Var5, iParam1))
		{
			iVar10 = 0;
			func_219(Var5, -1378896287, &iVar10, 1);
			return iVar10;
		}
	}
	return 0;
}

int func_192(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (func_213(&Var1, iParam0) && func_217(&Var1))
	{
		iVar11 = _datafile_get_num_children(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_218(&Var6, iVar23))
			{
				iVar20 = 0;
				func_219(Var6, -1378896287, &iVar20, 1);
				if (func_220(iParam0, iVar20) == -1 && func_193(iParam0, iVar20) == 0)
				{
					func_221(Var6, 2060397848, &vVar12, 1);
					if (func_183(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = vdist(vParam1, vVar12);
					}
					fVar15 = func_222(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_105(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (_0x72b2e00c9bac6789(&uVar19, iVar21))
						{
							iVar22 = int_to_playerindex(iVar21);
							if (network_is_player_active(iVar22) && !_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9(player_id()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_193(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_211(iParam0) == -785841056)
	{
		vVar0 = { func_223(iParam0, iParam1) };
		if (!func_183(vVar0) && (_0x769bb7626b8cdb06(vVar0, 100f, 0, 0, 0) || _0xaa9ee2aafc717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_194(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (((func_213(&Var1, iParam0) && func_217(&Var1)) && func_224(&Var1, iParam1)) && func_225(&Var1))
	{
		iVar6 = _datafile_get_num_children(Var1, Var1.f_1);
		iVar7 = (get_random_int_in_range(0, 65536) % iVar6);
		if (func_226(&Var1, iVar7))
		{
			func_219(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

int func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

struct<2> func_196(int iParam0, int iParam1, int iParam2)
{
	if ((((func_213(&Var0, iParam0) && func_217(&Var0)) && func_224(&Var0, iParam1)) && func_225(&Var0)) && func_227(&Var0, iParam2))
	{
		func_219(Var0, -605149915, &uVar5, 1);
		if (func_228(6, uVar5, &Var6))
		{
			return func_146(Var6.f_3, 6);
		}
	}
	return func_29();
}

int func_197(struct<2> Param0)
{
	if (!func_49(Param0))
	{
		return 5;
	}
	else if (func_229(Param0) != -1)
	{
		return 13;
	}
	else if (!func_230(Param0))
	{
		return 18;
	}
	else if (!func_231(Param0))
	{
		return 19;
	}
	else if (func_142())
	{
		return 14;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return iParam0 != 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 10:
			return true;
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

bool func_201(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 2;
		case 5:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 6:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 7:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 8:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 10:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 9:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		default:
			break;
	}
	return true;
	return true;
}

char* func_202(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_232((iVar5 / 60), 0, 180);
	iVar7 = func_232((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

char* func_203(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_233(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_204(int iParam0)
{
	if (func_49(func_47(0)) || Global_1108365->f_935.f_28 != -1)
	{
		return false;
	}
	if (func_234(player_id(), 1))
	{
		return false;
	}
	if (!func_235(iParam0))
	{
		return false;
	}
	return true;
}

bool func_205(bool bParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else
		{
			if (!func_49((*Global_1056141)[iVar0]->f_2))
			{
				if (bParam0 && !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_206()
{
	if (is_ped_in_any_boat(Global_34))
	{
		return true;
	}
	iVar0 = func_181(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_swimming(iVar0))
		{
			return true;
		}
	}
	return is_ped_swimming(Global_34);
}

bool func_207()
{
	return func_177(Global_35) != -1;
}

bool func_208(var uParam0, int iParam1)
{
	return func_92(*uParam0, iParam1);
}

bool func_209(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			iVar0 = 18;
			break;
		case 10:
			iVar0 = 15;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 17;
			break;
		default:
			return true;
	}
	iVar1 = -1;
	iVar2 = func_187(iVar0, player_id(), &iVar1);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar3 = func_192(iVar0, Global_35);
	iVar2 = func_193(iVar0, iVar3);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar4 = func_194(iVar0, iVar3);
	iVar2 = func_195(iVar4);
	if (iVar2 != 0)
	{
		return false;
	}
	Var5 = { func_196(iVar0, iVar3, iVar4) };
	iVar2 = func_197(Var5);
	if (iVar2 != 0)
	{
		return false;
	}
	return true;
}

int func_210(var uParam0)
{
	if (!func_43(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_73(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_236() - round((uParam0->f_1 * 1000f)));
}

int func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

bool func_212(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_237(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return true;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

bool func_213(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_238(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_214(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_215()
{
	return &Global_1902818;
}

int func_216(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_217(var uParam0)
{
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1782115362;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_218(var uParam0, int iParam1)
{
	uParam0->f_2 = 1574313466;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_219(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_220(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Global_1196339->f_1[iVar0]->f_1 == iParam0 && Global_1196339->f_1[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_221(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

float func_222(int iParam0, int iParam1)
{
	fVar0 = 200f;
	if ((func_213(&Var1, iParam0) && func_217(&Var1)) && func_224(&Var1, iParam1))
	{
		func_239(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

Vector3 func_223(int iParam0, int iParam1)
{
	if ((func_213(&Var3, iParam0) && func_217(&Var3)) && func_224(&Var3, iParam1))
	{
		func_221(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

bool func_224(var uParam0, int iParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_225(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_226(var uParam0, int iParam1)
{
	uParam0->f_2 = 1481789088;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_227(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_228(int iParam0, var uParam1, var uParam2)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	if (func_241(iParam0, uParam1, &uVar0))
	{
		func_242(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_229(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_50(Global_1196339->f_1[iVar0]->f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_230(struct<2> Param0)
{
	return _unlock_is_unlocked(func_243(Param0));
}

bool func_231(struct<2> Param0)
{
	return _unlock_is_visible(func_243(Param0));
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

char* func_233(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_234(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_244((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_235(int iParam0)
{
	if (!_unlock_is_unlocked(956799153))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return _unlock_is_unlocked(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (_unlock_is_unlocked(1612825071) && _unlock_is_unlocked(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

int func_236()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_237(int iParam0, int iParam1, int iParam2)
{
	return func_244((*Global_1196567)[iParam2][iParam0], iParam1);
}

int func_238(int iParam0)
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

int func_239(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_240(int iParam0)
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

bool func_241(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_245(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_242(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_246(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_247(iVar0);
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
			uParam2->f_5 = func_248(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_249(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_250(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_251(iVar0);
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

int func_243(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_118(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_244(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_245(int iParam0)
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

int func_246(int iParam0, var uParam1)
{
	if (func_252(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_247(int iParam0)
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

int func_248(int iParam0)
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

int func_249(int iParam0)
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

int func_250(int iParam0)
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

int func_251(int iParam0)
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

bool func_252(int iParam0, var uParam1, var uParam2)
{
	if (func_253(iParam0, uParam1, &uVar0))
	{
		func_254(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_253(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_245(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_254(var uParam0, int iParam1, var uParam2)
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

