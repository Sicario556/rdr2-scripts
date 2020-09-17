void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (func_1(0))
	{
		func_2();
	}
	func_3(ScriptParam_0.f_7);
	func_4(ScriptParam_0);
	func_5(ScriptParam_0);
	func_6(ScriptParam_0);
	func_7(&Local_500);
	iVar0 = participant_id_to_int();
	if (Global_1108365->f_935.f_21)
	{
		Local_149[iVar0]->f_24 = 1;
	}
	while (!func_8(iVar0, &uLocal_19, &Local_149))
	{
		func_9(iVar0, &uLocal_19, &Local_149, &Local_500);
		wait(0);
	}
	if (func_10(Local_500.f_1093, 4) && !func_10(Local_500.f_1093, 8))
	{
		_0xdd1232b332cbb9e7(11, 1, 0);
		func_12(iVar0, &uLocal_19, &Local_149, &Local_500, (func_11(Local_500.f_1047) || Local_500.f_1047 == 1), 0);
	}
	func_13(iVar0, &uLocal_19, &Local_149, &Local_500);
	func_14();
}

bool func_1(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_2()
{
	if (func_1(0))
	{
		Global_1051439->f_43 = 1;
	}
}

void func_3(struct<2> Param0)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (func_16(Param0))
	{
		return;
	}
	if (!func_17(Param0))
	{
		return;
	}
	func_18(Param0, 1, 1, 1);
}

void func_4(struct<8> Param0, var uParam8, var uParam9)
{
	Local_500.f_1047 = func_20(func_19(Param0.f_7));
	if (Local_500.f_1047 == -1 || Local_500.f_1047 >= 6)
	{
		func_14();
	}
	switch (Local_500.f_1047)
	{
		case 1:
			func_22(func_21(1691118765, -2027482694), 1);
			break;
		case 4:
			func_22(func_21(1691118765, -2027482694), 1);
			break;
		case 5:
			func_22(func_21(1691118765, -2027482694), 1);
			break;
		case 3:
			func_22(func_21(1691118765, -785841056), 1);
			break;
	}
}

void func_5(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	func_23(14, iParam0);
	func_24();
	network_register_host_broadcast_variables(&uLocal_19, 130, 45);
	func_25(_0xba24095ea96dfe17(&uLocal_19), 130, "m_NET_IN_WORLD_DEATHMATCH_HostData");
	network_register_player_broadcast_variables(&Local_149, 351, 46);
	func_26(_0x690806bc83bc8ca2(Local_149[0]), 351, "m_NET_IN_WORLD_DEATHMATCH_ClientData");
	func_27(0);
	set_this_script_can_be_paused(true);
	register_script_with_audio(1);
	if (network_is_host_of_this_script())
	{
	}
}

void func_6(struct<8> Param0, var uParam8, var uParam9)
{
	Local_500.f_1048 = Param0;
	Local_500.f_1042.f_1 = func_28(Local_500.f_1047);
	Local_500.f_1057 = Global_1288655->f_19;
	Local_500.f_1055 = _0x149a2751ab66ac02(Global_1296859->f_15);
	Local_500.f_1058 = Global_1296859->f_15;
	Local_500.f_1049 = { Param0.f_7 };
	func_29(Local_500.f_1047);
	func_30("GEIWD", 30, Param0, 0, 0);
	if (func_31(-721674440, &(Local_500.f_1042), 600, -1, 0, 0))
	{
	}
	func_32(2);
	_0x009cf9a29972c298(582557506);
}

void func_7(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_33(uParam0->f_1114[iVar0]);
		iVar0++;
	}
	func_34(uParam0);
}

bool func_8(int iParam0, var uParam1, var uParam2)
{
	if (func_35(0, 0))
	{
		return true;
	}
	if (func_37(func_36(), 1, 0))
	{
		return true;
	}
	if (uParam2[iParam0] == 2)
	{
		return true;
	}
	if (func_38(uParam1, 4))
	{
		return true;
	}
	return false;
}

void func_9(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (network_is_host_of_this_script())
	{
		func_39(uParam1, uParam2, uParam3, iParam0);
	}
	func_40(iParam0, uParam1, uParam2, uParam3);
	func_41(uParam3, (*uParam2)[iParam0]->f_1 > 11);
	func_42(iParam0, uParam1, uParam2, uParam3, (func_11(uParam3->f_1047) || uParam3->f_1047 == 1));
	func_43(iParam0, uParam1, uParam2, uParam3, (func_11(uParam3->f_1047) || uParam3->f_1047 == 1));
	func_44(uParam3);
}

bool func_10(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_11(int iParam0)
{
	return ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5);
}

void func_12(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (is_control_pressed(0, 255439828))
	{
		return;
	}
	if (func_45())
	{
		return;
	}
	_0xdd1232b332cbb9e7(11, 1, 0);
	if (!func_46(uParam2, 64, iParam0))
	{
		func_47(uParam1, uParam2, uParam3, uParam1->f_114);
		if (uParam3->f_1047 == 1)
		{
			if (uParam1->f_107)
			{
				uParam3->f_1154 = func_49(func_48(uParam3->f_1047), "NET_IWD_COMPLETE_D_PF_BODY", "", 0);
			}
			else if ((!uParam1->f_114 && uParam1->f_92 == (*uParam2)[iParam0]->f_6) || (uParam1->f_114 && uParam1->f_113 == player_id()))
			{
				if (_0xd6f6acf4392187fb(uParam3->f_1057) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam3->f_1057)))
				{
					uParam3->f_1154 = func_49(func_50(uParam3->f_1047), _create_var_string(10, "NET_IWD_COMPLETE_W_F_BODY", func_52(func_51(uParam3->f_1057), 109029619)), "NET_IWD_VIEW_SCORES", bParam5);
				}
				else
				{
					uParam3->f_1154 = func_49(func_50(uParam3->f_1047), _create_var_string(2, "NET_IWD_COMPLETE_W_F_BODY_NO_RIVAL"), "NET_IWD_VIEW_SCORES", bParam5);
				}
			}
			else if (_0xd6f6acf4392187fb(uParam3->f_1057) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam3->f_1057)))
			{
				uParam3->f_1154 = func_49(func_53(uParam3->f_1047), _create_var_string(10, "NET_IWD_COMPLETE_L_F_BODY", func_52(func_51(uParam3->f_1057), 109029619)), "NET_IWD_VIEW_SCORES", bParam5);
			}
			else
			{
				uParam3->f_1154 = func_49(func_53(uParam3->f_1047), _create_var_string(2, "NET_IWD_COMPLETE_L_F_BODY_NO_RIVAL"), "NET_IWD_VIEW_SCORES", bParam5);
			}
		}
		else if (bParam4)
		{
			if (uParam1->f_107)
			{
				uParam3->f_1154 = func_49(func_48(uParam3->f_1047), "NET_IWD_COMPLETE_D_PF_BODY", "", 0);
			}
			else if (uParam1->f_92 == (*uParam2)[iParam0]->f_6)
			{
				_0xdd1232b332cbb9e7(11, 1, 0);
				if (_0xd6f6acf4392187fb(uParam3->f_1057) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam3->f_1057)))
				{
					uParam3->f_1154 = func_49(func_50(uParam3->f_1047), _create_var_string(10, "NET_IWD_COMPLETE_W_PF_BODY", func_54(uParam3->f_1057, 1, 0)), "NET_IWD_VIEW_SCORES", bParam5);
				}
				else
				{
					uParam3->f_1154 = func_49(func_50(uParam3->f_1047), _create_var_string(2, "NET_IWD_COMPLETE_W_PF_BODY_NO_RIVAL"), "NET_IWD_VIEW_SCORES", bParam5);
				}
			}
			else
			{
				_0xdd1232b332cbb9e7(11, 1, 0);
				if (_0xd6f6acf4392187fb(uParam3->f_1057) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam3->f_1057)))
				{
					uParam3->f_1154 = func_49(func_53(uParam3->f_1047), _create_var_string(10, "NET_IWD_COMPLETE_L_PF_BODY", func_54(uParam3->f_1057, 1, 0)), "NET_IWD_VIEW_SCORES", bParam5);
				}
				else
				{
					uParam3->f_1154 = func_49(func_53(uParam3->f_1047), _create_var_string(2, "NET_IWD_COMPLETE_L_PF_BODY_NO_RIVAL"), "NET_IWD_VIEW_SCORES", bParam5);
				}
			}
		}
		else if (uParam3->f_1047 == 3)
		{
			if (uParam1->f_107)
			{
				uParam3->f_1154 = func_49("NET_IWD_COMPLETE_D_INF", "NET_IWD_COMPLETE_D_PF_BODY", "", 0);
			}
			else if ((!uParam1->f_114 && uParam1->f_92 == (*uParam2)[iParam0]->f_6) || (uParam1->f_114 && uParam1->f_113 == player_id()))
			{
				if (uParam1->f_114)
				{
					uParam3->f_1154 = func_49("NET_IWD_COMPLETE_W_INF", _create_var_string(2, "NET_IWD_COMPLETE_W_INF_FFA_BODY", uParam1->f_106), "NET_IWD_VIEW_SCORES", bParam5);
				}
				else
				{
					uParam3->f_1154 = func_49("NET_IWD_COMPLETE_W_INF", _create_var_string(2, "NET_IWD_COMPLETE_W_INF_BODY", uParam1->f_106), "NET_IWD_VIEW_SCORES", bParam5);
				}
			}
			else if (uParam1->f_114)
			{
				if (_network_is_player_index_valid(uParam1->f_113) && network_is_player_connected(uParam1->f_113))
				{
					uParam3->f_1154 = func_49("NET_IWD_COMPLETE_L_INF", _create_var_string(10, "NET_IWD_COMPLETE_L_INF_FFA_BODY", func_52(get_player_name(uParam1->f_113), 109029619)), "NET_IWD_VIEW_SCORES", bParam5);
				}
				else
				{
					uParam3->f_1154 = func_49("NET_IWD_COMPLETE_L_INF", "NET_IWD_COMPLETE_L_INF_FFA_BODY_NULL", "NET_IWD_VIEW_SCORES", bParam5);
				}
			}
			else
			{
				uParam3->f_1154 = func_49("NET_IWD_COMPLETE_L_INF", _create_var_string(2, "NET_IWD_COMPLETE_L_INF_BODY"), "NET_IWD_VIEW_SCORES", bParam5);
			}
		}
		if (uParam3->f_1154 != 0)
		{
			func_55(&(uParam3->f_1093), 8);
			func_56(uParam2, 64, iParam0);
		}
	}
}

void func_13(int iParam0, var uParam1, var uParam2, var uParam3)
{
	clear_ped_damage_decal_by_zone(Global_34, 1, "ALL");
	func_57(0);
	func_58();
	func_59(1048576);
	Global_1288655->f_27 = 0;
	Global_1108365->f_935.f_19 = 0;
	Global_1108365->f_935.f_23 = 0;
	Global_1108365->f_935.f_21 = 0;
	bVar0 = (*uParam2)[iParam0]->f_6 == true;
	bVar1 = func_60(uParam1, uParam2) == player_id();
	if (func_61() || func_62())
	{
		func_63(uParam3->f_1049, bVar0);
	}
	else if (func_38(uParam1, 4) || uParam3->f_1051)
	{
		func_65(uParam1, uParam3, func_64(uParam2, 524288));
		func_66(uParam3->f_1049, bVar0);
		func_67(0);
	}
	else if (uParam1->f_92 == (*uParam2)[iParam0]->f_6 || (uParam1->f_114 && uParam1->f_113 == player_id()))
	{
		func_68(uParam3->f_1049, bVar0);
		func_67(1);
	}
	else if ((func_46(uParam2, 4, iParam0) || uParam1->f_92 != (*uParam2)[iParam0]->f_6) || (uParam1->f_114 && !bVar1))
	{
		func_63(uParam3->f_1049, bVar0);
		func_67(0);
	}
	else
	{
		func_66(uParam3->f_1049, bVar0);
		func_67(0);
	}
	if (uParam3->f_1047 != 3)
	{
		func_69();
	}
	else
	{
		func_70(4);
		func_70(5);
		_0x50b72a754ee64a71(784116709);
	}
	func_71(uParam3);
	func_72(&(uParam3->f_15));
	func_73(uParam3, 1);
	func_74(&(uParam3->f_1107), 1, 1);
	func_75();
	func_76(uParam3);
	func_77(uParam3);
	func_78(uParam3);
	func_79();
	func_80();
	func_81();
	func_82("MP_FM_END", 1, 1);
	_datafile_unload(uParam3->f_1042);
	if (does_blip_exist(uParam3->f_1101))
	{
		remove_blip(&(uParam3->f_1101));
	}
	if (does_blip_exist(uParam3->f_1100))
	{
		remove_blip(&(uParam3->f_1100));
	}
	func_83();
	*(*Global_1050984)[0] = { Var2 };
	*(*Global_1050984)[1] = { Var2 };
	if (func_84(3))
	{
		func_85(0);
	}
	set_ped_config_flag(Global_1296859->f_8, 176, true);
	set_player_team(player_id(), -1, true);
	func_86();
	if (func_87(2))
	{
		func_88(2);
	}
	func_89();
	func_90();
	Global_1288655->f_19 = uVar10;
	_0x009cf9a29972c298(0);
	_0x981c7d863980fa51();
	if (_does_volume_exist(uParam3->f_1102))
	{
		_delete_volume(uParam3->f_1102);
	}
}

void func_14()
{
	terminate_this_thread();
}

bool func_15(struct<2> Param0)
{
	if (!func_91(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_92(Param0))
	{
		return false;
	}
	return true;
}

bool func_16(struct<2> Param0)
{
	iVar0 = func_93(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_17(struct<2> Param0)
{
	iVar0 = func_93(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_18(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (!func_17(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_94(Param0);
	}
	if (!func_15(func_95(0)))
	{
		func_96(Param0, 3);
		func_97(bParam3);
		func_98(!bParam4);
		func_99(Param0, -1);
		if (bParam2 && !func_100(2))
		{
			func_101(&Global_0, 1024);
		}
		func_102(1);
	}
	else
	{
		func_99(Param0, -1);
		func_96(Param0, 4);
		func_103(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_104(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_105(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_19(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_106(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 0;
		case 18:
			return 2;
		case 20:
			return 4;
		case 21:
			return 5;
		case 28:
			return 1;
		case 19:
			return 3;
		default:
			break;
	}
	return -1;
}

struct<2> func_21(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_22(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_23(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_14();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_24()
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
			func_14();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_14();
					break;
				case 2:
					func_14();
					break;
				case 4:
					func_14();
					break;
				case 3:
					func_14();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_14();
		}
		if (!network_is_game_in_progress())
		{
			func_14();
		}
		if (!network_is_signed_online())
		{
			func_14();
		}
		if (func_107() == 0)
		{
			if (func_108())
			{
				func_14();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_14();
	}
	return 1;
}

int func_25(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_26(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_27(bool bParam0)
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
					func_14();
					break;
				case 2:
					func_14();
					break;
				case 4:
					func_14();
					break;
				case 3:
					func_14();
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
			func_14();
			return;
		}
		wait(0);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 2;
		case 2:
		case 4:
		case 5:
			return 14;
		case 3:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			func_109(1);
			break;
		case 5:
			func_109(2);
			break;
		case 1:
			func_109(3);
			break;
		case 3:
			func_109(4);
			break;
	}
}

int func_30(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
		bVar1 = func_35(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_35(bParam3, bParam4);
	if (bVar1)
	{
		func_14();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!_text_database_has_loaded(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_35(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_35(bParam3, bParam4);
	if (bVar1)
	{
		func_14();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

bool func_31(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_35(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_35(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_14();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_32(int iParam0)
{
	iVar0 = player_id();
	(*Global_1285390)[iVar0]->f_99 = iParam0;
}

void func_33(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_34(var uParam0)
{
	if (!func_31(func_110(), &(uParam0->f_1174), 600, -1, 0, 0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		_datafile_register_query(uParam0->f_1174, iVar0, func_111(iVar0));
		iVar0++;
	}
}

bool func_35(bool bParam0, bool bParam1)
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

struct<2> func_36()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_37(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_15(*Global_1051213) && !func_112(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_113(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_114(iParam3, 255))
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
	if (func_115())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_15(*Global_1051213))
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

bool func_38(var uParam0, int iParam1)
{
	return func_10(uParam0->f_3, iParam1);
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_105 = get_network_time_accurate();
			func_116(uParam0, 1);
			uParam0->f_90 = Global_1296859->f_15;
			if (uParam2->f_1047 != 3)
			{
				uParam0->f_91 = Global_1288655->f_19;
			}
			if ((uParam2->f_1047 != 3 && _0xd6f6acf4392187fb(uParam0->f_90)) && _0xd6f6acf4392187fb(uParam0->f_91))
			{
				uParam0->f_93 = (_0x149a2751ab66ac02(uParam0->f_90) + _0x149a2751ab66ac02(uParam0->f_91));
			}
			else if (uParam2->f_1047 == 3 && _0xd6f6acf4392187fb(uParam0->f_90))
			{
				uParam0->f_93 = _0x149a2751ab66ac02(uParam0->f_90);
			}
			break;
		case 1:
			func_117(uParam0, uParam1, uParam2, uParam3);
			if (uParam0->f_1 == 15)
			{
				*uParam0 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_40(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam2[iParam0])
	{
		case 0:
			func_118(uParam3);
			func_119((*uParam2)[iParam0], 1);
			break;
		case 1:
			if ((*uParam2)[iParam0]->f_1 == 15)
			{
				func_119((*uParam2)[iParam0], 2);
				return;
			}
			func_120(iParam0, uParam1, uParam2, uParam3);
			break;
		case 2:
			break;
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (network_get_max_num_participants() - 1))
		{
			iVar1 = int_to_participantindex(iVar0);
			if (!network_is_participant_active(iVar1))
			{
			}
			else
			{
				iVar2 = network_get_player_index(iVar1);
				if (!network_is_player_active(iVar2))
				{
				}
				else
				{
					func_121(iVar2);
				}
			}
			iVar0++;
		}
	}
	if (func_122(0, 0, 0))
	{
		if (!func_123(&(uParam0->f_1090)))
		{
			func_124(&(uParam0->f_1090), 1);
		}
	}
	else if (func_123(&(uParam0->f_1090)))
	{
		func_125(&(uParam0->f_1090));
		_0x009cf9a29972c298(582557506);
	}
}

void func_42(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_10(uParam3->f_1093, 1) && !func_10(uParam3->f_1093, 2))
	{
		func_126(uParam1, uParam3);
		func_55(&(uParam3->f_1093), 16);
	}
	if (((_0x59fa676177dbe4c9(uParam3->f_1154) == 4 && !func_10(uParam3->f_1093, 4)) && !func_10(uParam3->f_1093, 32)) && func_10(uParam3->f_1093, 16))
	{
		func_82("MC_ATTACKING", 1, 0);
		func_127(uParam3);
		func_55(&(uParam3->f_1093), 32);
	}
	if (func_10(uParam3->f_1093, 4) && !func_10(uParam3->f_1093, 8))
	{
		func_12(iParam0, uParam1, uParam2, uParam3, bParam4, 1);
	}
}

void func_43(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if ((func_45() || func_128()) || !_text_database_has_loaded("GEIWD"))
	{
		return;
	}
	if (!func_46(uParam2, 2048, iParam0) && (*uParam2)[iParam0]->f_1 >= 8)
	{
		if (func_46(uParam2, 4096, iParam0) && uParam3->f_1089)
		{
			if (func_129(_create_var_string(2, "NET_IWD_FAST_F_LATE"), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 2048, iParam0);
				return;
			}
		}
		else if (!func_46(uParam2, 4096, iParam0))
		{
			if (func_129(_create_var_string(2, "NET_IWD_FAST_F"), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 2048, iParam0);
				return;
			}
		}
	}
	if ((!func_46(uParam2, 4194304, iParam0) && uParam3->f_1089) && (*uParam2)[iParam0]->f_1 > 11)
	{
		if (func_129(_create_var_string(2, "NET_IWD_FAST_RETURN"), 10000, 0, 0, 0, 1) != 0)
		{
			func_56(uParam2, 4194304, iParam0);
			return;
		}
	}
	if (func_46(uParam2, 262144, iParam0))
	{
		if (func_130(uParam1, uParam3) || func_131(uParam1, uParam3))
		{
			func_132(uParam2, 262144, iParam0);
		}
		return;
	}
	if (((!func_46(uParam2, 1048576, iParam0) && Global_1296859->f_15 == uParam1->f_90) && _0xd6f6acf4392187fb(uParam1->f_91)) && network_is_player_active(_0x4be6c13a45cca8ec(uParam1->f_91)))
	{
		if (bParam4)
		{
			if (func_133(_create_var_string(10, "NET_IWD_WAIT_PF", func_52(get_player_name(_0x4be6c13a45cca8ec(uParam1->f_91)), 109029619)), -2, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 1048576, iParam0);
				return;
			}
		}
	}
	if (func_46(uParam2, 2097152, iParam0))
	{
		if (func_129(_create_var_string(10, "NET_IWD_LOSS_TIE_HELP", func_134(uParam3->f_1047)), 10000, 0, 0, 0, 1) != 0)
		{
			func_132(uParam2, 2097152, iParam0);
			return;
		}
	}
	if (func_46(uParam2, 8388608, iParam0) && !func_46(uParam2, 16777216, iParam0))
	{
		if (func_135(iParam0, uParam1, uParam2, uParam3))
		{
			return;
		}
	}
}

void func_44(var uParam0)
{
	func_136(uParam0->f_1049, 1, 0);
}

bool func_45()
{
	return func_137(1, 255);
}

bool func_46(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = participant_id_to_int();
	}
	return func_10((*uParam0)[iParam2]->f_2, iParam1);
}

void func_47(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		iVar0 = int_to_participantindex(iVar2);
		if ((*uParam1)[iVar2]->f_6 == -1)
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar0);
			fVar3 = 0f;
			fVar4 = 0f;
			fVar5 = 0f;
			fVar6 = -1f;
			fVar7 = -1f;
			fVar3 = to_float((*uParam1)[iVar2]->f_3);
			fVar4 = to_float((*uParam1)[iVar2]->f_3);
			fVar5 = to_float((*uParam1)[iVar2]->f_4);
			fVar6 = to_float(get_time_difference(uParam0->f_105, (*uParam1)[iVar2]->f_5));
			fVar7 = to_float(get_unique_int_for_player(iVar1));
			if (!bParam3)
			{
				func_138(&(uParam2->f_15), fVar3, iVar1, uParam2->f_974[iVar2], 0, fVar4, fVar5, (*uParam1)[iVar2]->f_6, fVar6, fVar7);
			}
			else
			{
				func_138(&(uParam2->f_15), fVar3, iVar1, uParam2->f_974[iVar2], 0, fVar4, fVar5, 0, fVar6, fVar7);
			}
		}
		iVar2++;
	}
	func_139(&(uParam2->f_15));
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_IWD_COMPLETE_D_F";
		case 4:
			return "NET_IWD_COMPLETE_D_PF";
		case 5:
			return "NET_IWD_COMPLETE_D_PLF";
		default:
			break;
	}
	return "NET_IWD_COMPLETE_D_F";
}

var func_49(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		uVar0 = func_142(sParam0, sParam1, sParam2, 7500, func_140(), func_141(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = func_143(sParam0, sParam1, 7500, func_140(), func_141(), 0, 1, 1);
	}
	return uVar0;
}

char* func_50(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_IWD_COMPLETE_W_F";
		case 4:
			return "NET_IWD_COMPLETE_W_F";
		case 5:
			return "NET_IWD_COMPLETE_W_F";
		default:
			break;
	}
	return "NET_IWD_COMPLETE_W_F";
}

char* func_51(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!_network_is_player_index_valid(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	return get_player_name(_0x4be6c13a45cca8ec(iParam0));
}

char* func_52(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_144(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_IWD_COMPLETE_L_F";
		case 4:
			return "NET_IWD_COMPLETE_L_F";
		case 5:
			return "NET_IWD_COMPLETE_L_F";
		default:
			break;
	}
	return "NET_IWD_COMPLETE_L_F";
}

char* func_54(int iParam0, bool bParam1, int iParam2)
{
	sVar0 = "Invalid Posse";
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return sVar0;
	}
	iVar1 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar1))
	{
		if (func_145(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219->f_17 != (*Global_1100469)[iVar2]->f_17)
				{
					sVar0 = func_146(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = func_146(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_147(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (_0xc084ff658b2e61da(&Var3) - 1))
				{
					if (_0xc084ff658b2e81da(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_149(func_148(Var10.f_1), 109029619);
						}
						else
						{
							sVar0 = func_149(func_148(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_146(iParam0, bParam1, iParam2);
				}
				if (func_150(func_148(Var10.f_1)))
				{
					if (bParam1 == 1 && func_151(iVar1, sVar0))
					{
						sVar0 = func_146(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_146(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_146(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

void func_55(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	if (func_46(uParam0, iParam1, iParam2))
	{
		return;
	}
	func_55(&((*uParam0)[iParam2]->f_2), iParam1);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		func_152(49);
	}
	else
	{
		func_153(49);
	}
}

void func_58()
{
	if (Global_1108365->f_935.f_28 != -1)
	{
		Global_1108365->f_935.f_28 = -1;
	}
}

void func_59(int iParam0)
{
	if (func_154(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_155(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

int func_60(var uParam0, var uParam1)
{
	if (uParam0->f_92 == -1)
	{
		return 255;
	}
	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		if ((*uParam1)[iVar2]->f_6 != uParam0->f_92)
		{
		}
		else if ((*uParam1)[iVar2]->f_3 > iVar0)
		{
			iVar0 = (*uParam1)[iVar2]->f_3;
			iVar1 = iVar2;
		}
		else if ((*uParam1)[iVar2]->f_3 == iVar0 && is_time_less_than((*uParam1)[iVar2]->f_5, (*uParam1)[iVar1]->f_5))
		{
			iVar0 = (*uParam1)[iVar2]->f_3;
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (!network_is_participant_active(int_to_participantindex(iVar1)))
	{
		return 255;
	}
	return network_get_player_index(int_to_participantindex(iVar1));
}

bool func_61()
{
	return Global_1572887->f_266 > 0;
}

bool func_62()
{
	return func_156() > 11;
}

void func_63(struct<2> Param0, bool bParam2)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (!func_16(Param0))
	{
		return;
	}
	func_157(Param0, 0, 1, bParam2, 0);
}

bool func_64(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (func_46(uParam0, iParam1, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_65(var uParam0, var uParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (_0x424b17a7dc5c90bc(player_id()) && uParam1->f_1047 == 1)
			{
				if (((_0xd6f6acf4392187fb(uParam0->f_91) && _0x149a2751ab66ac02(uParam0->f_91) > 0) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam0->f_91))) && network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_91)))
				{
					if (bParam2)
					{
						func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_DECLINED", func_52(get_player_name(_0x4be6c13a45cca8ec(uParam0->f_91)), func_158(_0x4be6c13a45cca8ec(uParam0->f_91), 1, -1, 0)), "GF_FEUD_FEUD"), -2, 0, 0, 0, 1);
					}
					else
					{
						func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_IGNORED", func_52(get_player_name(_0x4be6c13a45cca8ec(uParam0->f_91)), func_158(_0x4be6c13a45cca8ec(uParam0->f_91), 1, -1, 0)), "GF_FEUD_FEUD"), -2, 0, 0, 0, 1);
					}
				}
				else
				{
					func_129(_create_var_string(10, "GF_FEUD_HELP_CHALLENGE_PLAYER_LEFT", "GF_FEUD_FEUD"), Global_1901947->f_308.f_168, 0, 0, 0, 1);
				}
			}
			else if (_0x424b17a7dc5c90bc(player_id()) && func_11(uParam1->f_1047))
			{
				switch (uParam1->f_1047)
				{
					case 4:
						if ((_0xd6f6acf4392187fb(uParam0->f_91) && _0x149a2751ab66ac02(uParam0->f_91) > 0) && _0x4be6c13a45cca8ec(uParam0->f_91) != 255)
						{
							if (bParam2)
							{
								func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_DECLINED", func_54(uParam0->f_91, 1, 0), "GF_FEUD_POSSE_FEUD"), -2, 0, 0, 0, 1);
							}
							else
							{
								func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_IGNORED", func_54(uParam0->f_91, 1, 0), "GF_FEUD_POSSE_FEUD"), -2, 0, 0, 0, 1);
							}
						}
						else
						{
							func_129(_create_var_string(10, "GF_FEUD_HELP_CHALLENGE_GANG_LEFT", "GF_FEUD_POSSE_FEUD"), Global_1901947->f_308.f_168, 0, 0, 0, 1);
						}
						break;
					case 5:
						if ((_0xd6f6acf4392187fb(uParam0->f_91) && _0x149a2751ab66ac02(uParam0->f_91) > 0) && _0x4be6c13a45cca8ec(uParam0->f_91) != 255)
						{
							if (bParam2)
							{
								func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_DECLINED", func_54(uParam0->f_91, 1, 0), "GF_FEUD_POSSE_FEUD"), -2, 0, 0, 0, 1);
							}
							else
							{
								func_133(_create_var_string(42, "GF_FEUD_HELP_CHALLENGE_IGNORED", func_54(uParam0->f_91, 1, 0), "GF_FEUD_POSSE_LEADER_FEUD"), -2, 0, 0, 0, 1);
							}
						}
						else
						{
							func_129(_create_var_string(10, "GF_FEUD_HELP_CHALLENGE_GANG_LEFT", "GF_FEUD_POSSE_LEADER_FEUD"), Global_1901947->f_308.f_168, 0, 0, 0, 1);
						}
						break;
				}
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (uParam1->f_1047 == 1)
			{
				if (!func_159(uParam0))
				{
					if (_0x7933754f260b428a(player_id()) > 0)
					{
						func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_KICKED_GANG"), -2, 0, 0, 0, 1, 1);
					}
					else
					{
						func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_LEFT_GANG"), -2, 0, 0, 0, 1, 1);
					}
				}
				else
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_NOT_ENOUGH_PLAYERS"), -2, 0, 0, 0, 1, 1);
				}
			}
			else if (uParam1->f_1047 == 5 || uParam1->f_1047 == 4)
			{
				if (Local_500.f_1058 == uParam0->f_90 && (!network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_90)) || _0x149a2751ab66ac02(uParam0->f_90) == 0))
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_DISBAND"), -2, 0, 0, 0, 1, 1);
				}
				else if (Local_500.f_1058 == uParam0->f_91 && (!network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_91)) || _0x149a2751ab66ac02(uParam0->f_91) == 0))
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_DISBAND"), -2, 0, 0, 0, 1, 1);
				}
				else if (_0x7933754f260b428a(player_id()) > 0)
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_KICKED_GANG"), -2, 0, 0, 0, 1, 1);
				}
				else if (!func_159(uParam0))
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_LEFT_GANG"), -2, 0, 0, 0, 1, 1);
				}
				else
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_F"), _create_var_string(2, "NET_IWD_BODY_NOT_ENOUGH_PLAYERS"), -2, 0, 0, 0, 1, 1);
				}
			}
			else if (uParam1->f_1047 == 3)
			{
				if (!func_159(uParam0))
				{
					if (_0x7933754f260b428a(player_id()) > 0)
					{
						func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_INF"), _create_var_string(2, "NET_IWD_BODY_KICKED_GANG"), -2, 0, 0, 0, 1, 1);
					}
					else
					{
						func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_INF"), _create_var_string(2, "NET_IWD_BODY_LEFT_GANG"), -2, 0, 0, 0, 1, 1);
					}
				}
				else if (!network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_90)) || _0x149a2751ab66ac02(uParam0->f_90) == 0)
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_INF"), _create_var_string(2, "NET_IWD_BODY_DISBAND"), -2, 0, 0, 0, 1, 1);
				}
				else
				{
					func_143(_create_var_string(2, "NET_IWD_COMPLETE_D_INF"), _create_var_string(2, "NET_IWD_BODY_NOT_ENOUGH_PLAYERS"), -2, 0, 0, 0, 1, 1);
				}
			}
			break;
		case 13:
		case 15:
			break;
	}
}

void func_66(struct<2> Param0, bool bParam2)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (!(func_17(Param0) || func_16(Param0)))
	{
		return;
	}
	func_157(Param0, 0, 2, bParam2, 0);
}

void func_67(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = 0;
	_0xc684ff658b2e55da(iParam0);
}

void func_68(struct<2> Param0, bool bParam2)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (!func_16(Param0))
	{
		return;
	}
	func_157(Param0, 0, 0, bParam2, 0);
}

void func_69()
{
	if (Global_1288655->f_7 == -1)
	{
		return;
	}
	func_160((*Global_1285390)[Global_1288655->f_7], Global_1288655->f_19);
	func_161();
}

void func_70(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108365->f_935.f_5[iParam0] = Global_1296859->f_21;
	}
}

void func_71(var uParam0)
{
	if (does_blip_exist(uParam0->f_1101))
	{
		remove_blip(&(uParam0->f_1101));
	}
	func_74(&(uParam0->f_1107), 1, 1);
	func_162(4);
	_0xc5cb91d65852ed7e("MP_OutofArea");
	_display_hud_component(-2124237476);
	func_163();
}

void func_72(var uParam0)
{
	if (uParam0->f_11.f_2 != 0)
	{
		func_164(&(uParam0->f_11));
		func_165(uParam0);
		func_166(&(uParam0->f_11), 1);
		Global_1940144->f_110 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var200.f_1 = -1082130432;
		Var200.f_2 = -1082130432;
		Var200.f_3 = -1082130432;
		Var200.f_4 = -1082130432;
		Var200.f_5 = -1082130432;
		Var200.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar223 = 0;
		while (iVar223 <= 31)
		{
			_copy_memory(uParam0->f_211[iVar223], &Var200, 23);
			iVar223++;
		}
		uParam0->f_949 = 0;
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (uParam0->f_2 > 0)
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		if (bParam1)
		{
			func_167(uParam0);
			func_168();
		}
		func_169(uParam0);
		_databinding_remove_data_entry(uParam0->f_6);
		_databinding_remove_data_entry(uParam0->f_5);
		_0xf1e6979c0b779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_170(0);
		func_171(0);
		_0xdd1232b332cbb9e7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		_copy_memory(uParam0, &Var0, 15);
	}
}

void func_74(var uParam0, bool bParam1, bool bParam2)
{
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
	}
	if (_uistatemachine_exists(190275865))
	{
		_uistatemachine_destroy(190275865);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		_databinding_remove_data_entry(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_write_data_bool(uParam0->f_3, false);
		_databinding_remove_data_entry(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (_databinding_is_data_id_valid(uParam0->f_1))
	{
		_databinding_remove_data_entry(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (uParam0->f_4 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_4))
			{
				_0x3210bcb36af7621b(uParam0->f_4);
			}
			release_sound_id(uParam0->f_4);
			uParam0->f_4 = -1;
		}
		if (uParam0->f_5 >= 0)
		{
			if (!_0x84848e1c0fc67dbb(uParam0->f_5))
			{
				_0x3210bcb36af7621b(uParam0->f_5);
			}
			release_sound_id(uParam0->f_5);
			uParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (animpostfx_is_running(func_172()))
		{
			_0xc5cb91d65852ed7e(func_172());
			_display_hud_component(-2124237476);
			_0x981c7d863980fa51();
		}
	}
}

void func_75()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_173(iVar0);
		iVar0++;
	}
}

void func_76(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&(uParam0->f_1075), iVar0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			func_174(iVar1);
			func_175(iVar1);
		}
		iVar0++;
	}
	func_176(1);
	func_177(1);
}

void func_77(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&(uParam0->f_1076), iVar0))
		{
		}
		else
		{
			func_178(iVar0);
		}
		iVar0++;
	}
}

void func_78(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		iVar1 = iVar2;
		func_179(iVar1);
		func_180(iVar1);
		func_181(iVar1);
		func_182(iVar1);
		iVar0++;
	}
	return;
}

void func_79()
{
	_0xdd1232b332cbb9e7(3, 1, 0);
}

void func_80()
{
	if (func_183(*Global_1211181))
	{
		func_184(*Global_1211181, 0);
		func_185(Global_1211181);
	}
	func_186(Global_1211181, 1);
}

void func_81()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_connected(iVar1))
		{
		}
		else if (iVar1 == player_id())
		{
		}
		else if (func_187(iVar0, 1))
		{
			func_188(iVar0, 1, 0);
		}
		iVar0++;
	}
}

int func_82(char* sParam0, int iParam1, bool bParam2)
{
	iVar0 = get_id_of_this_thread();
	if (((iVar0 == Global_1071686->f_22971.f_1 || Global_1071686->f_22971.f_1 == 0) || iParam1 > Global_1071686->f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			_copy_memory(&(Global_1071686->f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686->f_22971.f_1 = get_id_of_this_thread();
			Global_1071686->f_22971 = iParam1;
		}
		if (trigger_music_event(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_83()
{
	if ((Global_1071686->f_21952.f_578 != 0f || Global_1071686->f_21952.f_579 != 0f) || Global_1071686->f_21952.f_580 != 0f)
	{
		Global_1071686->f_21952.f_578 = 0f;
		Global_1071686->f_21952.f_579 = 0f;
		Global_1071686->f_21952.f_580 = 0f;
	}
}

bool func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1900688->f_1 == 1 || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1900688->f_1 == 5 || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1900688->f_1 == 3 || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_85(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_107() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_189(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_190();
		Global_1900688->f_9 = func_191(Global_1893587->f_2);
		Global_1900688->f_11 = func_192(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_193(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_193(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_193(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_86()
{
	if (_0x179a6f0ee2e79026(&(Global_1071686->f_22961.f_5)))
	{
		Global_1071686->f_22961.f_5 = uVar0;
	}
}

bool func_87(int iParam0)
{
	return (Global_1139381->f_3876.f_1 && iParam0) != 0;
}

void func_88(int iParam0)
{
	Global_1139381->f_3876.f_1 = (Global_1139381->f_3876.f_1 - (Global_1139381->f_3876.f_1 && iParam0));
}

void func_89()
{
	func_194(_0xdf66a37936d5f3d9(&(Global_1296859->f_154[&Global_1296859])));
	func_196(func_195());
}

void func_90()
{
	Global_1288655->f_79 = 255;
	Global_1288655->f_18 = uVar0;
	func_32(4);
}

bool func_91(int iParam0)
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

int func_92(int iParam0)
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

int func_93(struct<2> Param0)
{
	if (!func_15(Param0))
	{
		return -1;
	}
	iVar0 = func_197(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_94(struct<2> Param0)
{
	if (func_198(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_198(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_198(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_105(Param0, &Var0))
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

struct<2> func_95(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_96(struct<2> Param0, int iParam2)
{
	if (!func_15(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_199(Param0);
	}
	else
	{
		func_200(Param0, iParam2);
	}
	func_201();
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_202(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_203(Global_1940258, 8388608);
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

void func_98(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_204(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_205(cVar2);
			}
			else
			{
				func_206();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_99(struct<2> Param0, int iParam2)
{
	iVar0 = func_207(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_208(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_209(iVar0, iParam2);
	return iParam2;
}

bool func_100(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_102(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_103(struct<2> Param0, int iParam2)
{
	if (!func_15(Param0))
	{
		return 0;
	}
	iVar0 = func_207(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_210(Param0, func_95(0), iParam2))
	{
		func_96(func_95(0), 3);
		func_96(func_95(iVar0), 4);
		return 0;
	}
	func_209(iVar0, 0);
	func_96(func_95(0), 3);
	func_96(func_95(1), 4);
	return 1;
}

int func_104(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_105(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_106(Param0, &vVar0);
	if (func_211(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_106(struct<2> Param0, var uParam2)
{
	if (!func_15(Param0))
	{
		return false;
	}
	func_212(uParam2);
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

int func_107()
{
	return Global_1572887->f_13;
}

bool func_108()
{
	return Global_1051252->f_8;
}

void func_109(int iParam0)
{
	if (Global_1108365->f_935.f_28 != iParam0)
	{
		Global_1108365->f_935.f_28 = iParam0;
	}
}

int func_110()
{
	return 582916898;
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "locations";
		case 1:
			return "location(%i)";
		case 2:
			return ":position";
		default:
			break;
	}
	return "";
}

bool func_112(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_113(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
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
	if (!func_15(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_116(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_117(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_213(uParam0, uParam1, uParam2))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_64(uParam1, 524288))
			{
				func_214(uParam0, 4);
			}
			if (!func_215(uParam2->f_1047) || !func_216(uParam0, uParam2))
			{
				if (!func_38(uParam0, 2))
				{
					func_217(&(uParam0->f_97));
					func_214(uParam0, 2);
				}
				else if (func_218(&(uParam0->f_97), ceil((IntToFloat(Global_1901947->f_308.f_169) * 1.18f))))
				{
					func_214(uParam0, 4);
				}
				return;
			}
			func_217(&(uParam0->f_97));
			func_217(&(uParam0->f_100));
			func_219(uParam0);
			if (uParam2->f_1047 == 3)
			{
				func_220(uParam0);
			}
			func_221(uParam0, 1);
			break;
		case 1:
			if (func_218(&(uParam0->f_100), 15000) && !func_222(uParam1))
			{
				if (!func_215(uParam2->f_1047))
				{
					func_214(uParam0, 4);
					return;
				}
				if (uParam2->f_1047 == 3)
				{
					func_221(uParam0, 2);
				}
				else
				{
					uParam0->f_104 = get_network_time_accurate();
					func_221(uParam0, 8);
				}
			}
			break;
		case 2:
			if (!func_215(uParam2->f_1047))
			{
				func_214(uParam0, 4);
				return;
			}
			if (func_64(uParam1, 256))
			{
				iVar7 = uParam0->f_90;
				iVar8 = _0x4be6c13a45cca8ec(iVar7);
				iVar9 = network_get_participant_index(iVar8);
				iVar0 = iVar9;
				uParam0->f_114 = (*uParam1)[iVar0]->f_24;
				uParam0->f_115 = { (*uParam1)[iVar0]->f_7 };
				uParam0->f_104 = get_network_time_accurate();
				func_214(uParam0, 32);
				func_221(uParam0, 8);
			}
			break;
		case 8:
			if (!_does_volume_exist(uParam2->f_1102))
			{
				uParam2->f_1102 = _create_volume_box(uParam0->f_109, 0f, 0f, 0f, uParam0->f_112, uParam0->f_112, uParam0->f_112);
			}
			if (uParam0->f_114)
			{
				func_221(uParam0, 10);
				return;
			}
			if (!func_215(uParam2->f_1047))
			{
				func_214(uParam0, 4);
				return;
			}
			iVar1 = 0;
			while (iVar1 <= (network_get_max_num_participants() - 1))
			{
				if ((*uParam1)[iVar1]->f_6 == 0 && func_46(uParam1, 4096, iVar1))
				{
					if (uParam2->f_1047 != 5)
					{
						iVar5 = 1;
					}
					else if (_0x424b17a7dc5c90bc(network_get_player_index(int_to_participantindex(iVar1))))
					{
						iVar5 = 1;
					}
				}
				else if ((*uParam1)[iVar1]->f_6 == 1 && func_46(uParam1, 4096, iVar1))
				{
					if (uParam2->f_1047 != 5)
					{
						iVar6 = 1;
					}
					else if (_0x424b17a7dc5c90bc(network_get_player_index(int_to_participantindex(iVar1))))
					{
						iVar6 = 1;
					}
				}
				iVar1++;
			}
			if (iVar5 && iVar6)
			{
				func_217(&(uParam0->f_94));
				func_221(uParam0, 11);
				return;
			}
			if (get_time_difference(uParam0->f_104, get_network_time_accurate()) >= 93000)
			{
				func_214(uParam0, 4);
			}
			break;
		case 10:
			if (!func_223(&(uParam0->f_94)))
			{
				func_217(&(uParam0->f_94));
			}
			if (!func_215(uParam2->f_1047))
			{
				func_214(uParam0, 4);
				return;
			}
			iVar1 = 0;
			while (iVar1 <= (network_get_max_num_participants() - 1))
			{
				if (func_46(uParam1, 4096, iVar1))
				{
					iVar2++;
				}
				iVar1++;
			}
			if (iVar2 >= 2)
			{
				func_221(uParam0, 11);
				return;
			}
			if (get_time_difference(uParam0->f_104, get_network_time_accurate()) >= 93000)
			{
				func_214(uParam0, 4);
			}
			break;
		case 11:
			bVar3 = func_224(uParam1, 2);
			bVar4 = func_64(uParam1, 128);
			if (!func_215(uParam2->f_1047))
			{
				func_214(uParam0, 4);
				return;
			}
			if ((func_218(&(uParam0->f_94), uParam2->f_1042.f_2) || bVar3) || bVar4)
			{
				func_221(uParam0, 12);
				uParam0->f_103 = get_network_time_accurate();
			}
			break;
		case 12:
			if (get_time_difference(uParam0->f_103, get_network_time_accurate()) >= 1000)
			{
				func_214(uParam0, 16);
				func_225(uParam0, uParam1);
				func_221(uParam0, 13);
			}
			break;
		case 13:
			break;
		case 15:
			break;
	}
}

void func_118(var uParam0)
{
	func_226(uParam0);
	if (func_11(uParam0->f_1047) || uParam0->f_1047 == 3)
	{
		uParam0->f_1042.f_2 = Global_1108365->f_935.f_3 * 1000;
		uParam0->f_1042.f_3 = Global_1901947->f_308.f_169;
	}
	else
	{
		uParam0->f_1042.f_2 = func_227(uParam0);
		uParam0->f_1042.f_3 = func_228(uParam0);
	}
	uParam0->f_1042.f_4 = func_229(uParam0);
	_datafile_unload(uParam0->f_1042);
}

void func_119(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3)
{
	iVar1 = _0x901e0dc25080c8b9(player_id());
	bVar2 = func_11(uParam3->f_1047);
	if ((iVar1 != uParam1->f_90 && iVar1 != uParam1->f_91) && func_230(uParam1->f_1))
	{
		uParam3->f_1051 = 1;
		func_231((*uParam2)[iParam0], 15);
		if (uParam1->f_1 == 11)
		{
			func_82("MP_FM_END", 1, 1);
		}
	}
	switch ((*uParam2)[iParam0]->f_1)
	{
		case 0:
			if (!_text_database_has_loaded("GEIWD"))
			{
				if (!_0x3cf96e16265b7dc8("GEIWD"))
				{
					_text_database_request("GEIWD");
				}
				return;
			}
			if (func_232())
			{
				if (!func_123(&(uParam3->f_1097)))
				{
					func_124(&(uParam3->f_1097), 0);
				}
				if (func_233(&(uParam3->f_1097)) > 75f)
				{
					func_231((*uParam2)[iParam0], 15);
					return;
				}
				if (!func_234())
				{
					func_235(2);
				}
				func_56(uParam2, 33554432, iParam0);
				return;
			}
			func_132(uParam2, 33554432, iParam0);
			if (Global_1288655->f_27 == 1)
			{
				func_56(uParam2, 524288, iParam0);
			}
			if (uParam1->f_1 > 1)
			{
				func_231((*uParam2)[iParam0], 15);
				return;
			}
			if (uParam1->f_1 <= 0)
			{
				if (!func_46(uParam2, 8, iParam0))
				{
					func_56(uParam2, 8, iParam0);
				}
				return;
			}
			func_236(8);
			if (uParam3->f_1047 != 3)
			{
				func_237(6);
			}
			func_238(2, 1);
			(*uParam2)[iParam0]->f_5 = get_network_time_accurate();
			if (uParam3->f_1047 != 3)
			{
				if (Global_1296859->f_15 == uParam1->f_90)
				{
					uParam3->f_1057 = uParam1->f_91;
				}
				else
				{
					uParam3->f_1057 = uParam1->f_90;
				}
			}
			else
			{
				_0x7d654266025e921b(784116709);
				func_22(func_21(1511238709, 596359697), 1);
			}
			func_231((*uParam2)[iParam0], 1);
			break;
		case 1:
			if (uParam1->f_1 > 1)
			{
				if (uParam3->f_1047 == 3)
				{
					iVar0 = 0;
					while (iVar0 <= (network_get_max_num_participants() - 1))
					{
						(*uParam2)[iParam0]->f_7[iVar0] = 255;
						iVar0++;
					}
					func_22(func_21(1511238709, -785841056), 1);
					func_231((*uParam2)[iParam0], 2);
					func_239(&(uParam3->f_1155), 0);
				}
				else
				{
					func_56(uParam2, 262144, iParam0);
					uParam3->f_1053 = 0;
					if (uParam3->f_1047 == 1)
					{
						func_22(func_21(1511238709, 346097770), 1);
					}
					else
					{
						func_22(func_21(1511238709, -2027482694), 1);
						func_22(func_21(1511238709, -785841056), 1);
					}
					Global_1108365->f_935.f_19 = 1;
					func_231((*uParam2)[iParam0], 3);
				}
			}
			break;
		case 3:
			if (!_0xd6f6acf4392187fb(uParam3->f_1057))
			{
				func_231((*uParam2)[iParam0], 15);
				return;
			}
			StringCopy((*Global_1050984)[0], func_54(uParam1->f_90, 0, 0), 64);
			StringCopy((*Global_1050984)[1], func_54(uParam1->f_91, 0, 0), 64);
			if (Global_1296859->f_15 == uParam1->f_90)
			{
				set_player_team(player_id(), 0, true);
				(*uParam2)[iParam0]->f_6 = 0;
			}
			else
			{
				set_player_team(player_id(), 1, true);
				(*uParam2)[iParam0]->f_6 = 1;
			}
			func_231((*uParam2)[iParam0], 8);
			break;
		case 2:
			if (_0x424b17a7dc5c90bc(player_id()))
			{
				func_240(iParam0, uParam1, uParam2, uParam3);
			}
			else
			{
				func_241(uParam1, (*uParam2)[iParam0], uParam3);
				if (!uParam3->f_1082)
				{
					func_242("NET_IWD_WAIT_TS", "", 0, 0, 8000, 0, 0, 0, 0, 1, 1);
					uParam3->f_1082 = 1;
				}
			}
			if (func_38(uParam1, 32) && func_64(uParam2, 256))
			{
				iVar0 = network_get_participant_index(_0x4be6c13a45cca8ec(uParam1->f_90));
				func_243((*uParam2)[iVar0], (*uParam2)[iParam0], uParam3);
				set_ped_config_flag(Global_1296859->f_8, 176, false);
				func_231((*uParam2)[iParam0], 8);
				func_244(&(uParam3->f_1151), 1, 1);
				_0xdd1232b332cbb9e7(3, 1, 0);
			}
			else
			{
				func_245(iParam0, uParam1, uParam2, uParam3);
			}
			break;
		case 8:
			if (!_does_volume_exist(uParam3->f_1102))
			{
				uParam3->f_1102 = _create_volume_box(uParam1->f_109, 0f, 0f, 0f, uParam1->f_112, uParam1->f_112, uParam1->f_112);
				_0x735762e8d7573e42(1, uParam3->f_1102, 5f);
			}
			if (get_time_difference(uParam1->f_104, get_network_time_accurate()) >= 3000)
			{
				func_245(iParam0, uParam1, uParam2, uParam3);
				func_241(uParam1, (*uParam2)[iParam0], uParam3);
				func_246(uParam1, uParam2, uParam3->f_1054);
				uParam3->f_1054 = (uParam3->f_1054 + 1 % 32);
			}
			if (!does_blip_exist(uParam3->f_1101))
			{
				uParam3->f_1101 = _blip_add_for_coord(408396114, uParam1->f_109);
				_blip_set_modifier(uParam3->f_1101, -1878373110);
				_blip_set_modifier(uParam3->f_1101, 847579139);
				set_blip_name_from_text_file(uParam3->f_1101, "NET_IWD_OOB_BLIP");
			}
			if (!does_blip_exist(uParam3->f_1100))
			{
				uParam3->f_1100 = _blip_add_for_area(-569474439, uParam1->f_109, uParam1->f_112, uParam1->f_112, uParam1->f_112, 0);
				_blip_set_modifier(uParam3->f_1100, -1417554730);
			}
			if (func_247(Global_34, uParam3->f_1102, 1, 0))
			{
				func_56(uParam2, 4096, iParam0);
				func_231((*uParam2)[iParam0], 9);
			}
			if (uParam1->f_1 >= 11)
			{
				func_132(uParam2, 65536, iParam0);
				func_72(&(uParam3->f_15));
				func_73(uParam3, 1);
				func_231((*uParam2)[iParam0], 7);
			}
			func_248(uParam1, uParam2, uParam3, iParam0);
			break;
		case 9:
			func_248(uParam1, uParam2, uParam3, iParam0);
			func_249(uParam1, uParam2, uParam3, iParam0, 1);
			if (get_time_difference(uParam1->f_104, get_network_time_accurate()) >= 3000)
			{
				func_245(iParam0, uParam1, uParam2, uParam3);
				func_241(uParam1, (*uParam2)[iParam0], uParam3);
				func_246(uParam1, uParam2, uParam3->f_1054);
				uParam3->f_1054 = (uParam3->f_1054 + 1 % 32);
			}
			if (uParam1->f_1 >= 11)
			{
				func_132(uParam2, 65536, iParam0);
				func_72(&(uParam3->f_15));
				func_73(uParam3, 1);
				func_231((*uParam2)[iParam0], 7);
			}
			break;
		case 7:
			func_248(uParam1, uParam2, uParam3, iParam0);
			func_127(uParam3);
			if (uParam1->f_114 || uParam3->f_1047 == 1)
			{
				func_250(1048576);
			}
			if (!func_46(uParam2, 4096, iParam0))
			{
				func_251(uParam2, iParam0, uParam1->f_114);
				uParam3->f_1083 = func_252(iParam0, uParam2, uParam1->f_114);
				func_253(2048, 1);
				func_55(&(uParam3->f_1093), 1);
				func_231((*uParam2)[iParam0], 11);
			}
			else if (func_254(iParam0, uParam1, uParam2, uParam3))
			{
				func_251(uParam2, iParam0, uParam1->f_114);
				uParam3->f_1083 = func_252(iParam0, uParam2, uParam1->f_114);
				func_253(2048, 1);
				func_231((*uParam2)[iParam0], 11);
				func_57(1);
				Global_1108365->f_935.f_23 = 1;
				func_55(&(uParam3->f_1093), 1);
			}
			break;
		case 11:
			if (!func_46(uParam2, 4096, iParam0))
			{
				func_255(uParam1, uParam2, uParam3, iParam0);
			}
			else
			{
				func_249(uParam1, uParam2, uParam3, iParam0, 0);
				func_256();
			}
			func_257(uParam2, uParam3, uParam1->f_114, iParam0);
			func_248(uParam1, uParam2, uParam3, iParam0);
			func_258(uParam1, uParam2, uParam3, iParam0);
			if (uParam3->f_1047 != 3)
			{
				func_259(uParam3, uParam3->f_1053, uParam3->f_1047);
				uParam3->f_1053 = (uParam3->f_1053 + 1 % 32);
			}
			func_246(uParam1, uParam2, uParam3->f_1054);
			uParam3->f_1054 = (uParam3->f_1054 + 1 % 32);
			func_127(uParam3);
			func_241(uParam1, (*uParam2)[iParam0], uParam3);
			func_260(iParam0, uParam2, uParam3);
			func_47(uParam1, uParam2, uParam3, uParam1->f_114);
			if (func_223(&(uParam1->f_94)))
			{
				func_245(iParam0, uParam1, uParam2, uParam3);
				func_261(uParam2, uParam3, uParam1->f_114, iParam0);
			}
			if (uParam1->f_1 > 11)
			{
				_0xb131e686bd97b3f8();
				func_57(0);
				func_78(uParam3);
				func_76(uParam3);
				func_231((*uParam2)[iParam0], 13);
				func_71(uParam3);
				func_262((*uParam2)[iParam0], uParam3);
				func_82("MP_FM_END", 1, 1);
				if (does_blip_exist(uParam3->f_1101))
				{
					remove_blip(&(uParam3->f_1101));
				}
				if (does_blip_exist(uParam3->f_1100))
				{
					remove_blip(&(uParam3->f_1100));
				}
				func_83();
				_0xdd1232b332cbb9e7(3, 1, 0);
			}
			break;
		case 13:
			func_81();
			func_73(uParam3, 1);
			if (uParam1->f_1 > 12)
			{
				func_263(iParam0, uParam1, uParam2, uParam3);
				if (uParam1->f_108)
				{
					func_56(uParam2, 2097152, iParam0);
				}
				func_231((*uParam2)[iParam0], 12);
			}
			break;
		case 12:
			if (func_264(iParam0, uParam1, uParam2, uParam3, bVar2))
			{
				if (uParam3->f_1089)
				{
					func_265(uParam3);
					return;
				}
				func_231((*uParam2)[iParam0], 15);
				return;
			}
			if (func_266(uParam3->f_1154) && is_control_pressed(0, 255439828))
			{
				_0x2f901291ef177b02(uParam3->f_1154, 0);
			}
			if (!func_45() && !_0x3bdfcf25b58b0415(Global_34))
			{
				clear_ped_damage_decal_by_zone(Global_34, 1, "ALL");
			}
			func_245(iParam0, uParam1, uParam2, uParam3);
			break;
		case 15:
			break;
	}
	func_267(uParam3);
	uParam3->f_1039 = (uParam3->f_1039 + 1 % 14);
}

void func_121(int iParam0)
{
	set_ped_reset_flag(get_player_ped(iParam0), 354, true);
	Global_1071686->f_21416.f_1[iParam0]->f_4 = get_frame_count();
}

bool func_122(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return false;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_123(var uParam0)
{
	return func_268(*uParam0, 1);
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1 || !func_123(uParam0))
	{
		func_269(uParam0);
	}
}

void func_125(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_126(var uParam0, var uParam1)
{
	if (is_control_pressed(0, 255439828))
	{
		return;
	}
	if (func_45())
	{
		return;
	}
	switch (uParam1->f_1047)
	{
		case 4:
			if (_network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam1->f_1057)))
			{
				uParam1->f_1154 = func_143("NET_IWD_TITLE_PF", _create_var_string(10, "NET_IWD_BODY_PF", func_54(uParam1->f_1057, 1, 0)), 7500, func_140(), func_141(), 0, 1, 1);
			}
			else
			{
				uParam1->f_1154 = func_270("NET_IWD_TITLE_PF", -2, 0, 0, 0, 1);
			}
			break;
		case 5:
			if (_network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam1->f_1057)))
			{
				uParam1->f_1154 = func_143("NET_IWD_TITLE_PLF", _create_var_string(10, "NET_IWD_BODY_PLF", func_54(uParam1->f_1057, 1, 0)), 7500, func_140(), func_141(), 0, 1, 1);
			}
			else
			{
				uParam1->f_1154 = func_270("NET_IWD_TITLE_PLF", -2, 0, 0, 0, 1);
			}
			break;
		case 1:
			if (_network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam1->f_1057)))
			{
				uParam1->f_1154 = func_143("NET_IWD_TITLE_F", _create_var_string(10, "NET_IWD_BODY_PF", func_52(func_51(uParam1->f_1057), 109029619)), 7500, func_140(), func_141(), 0, 1, 1);
			}
			else
			{
				uParam1->f_1154 = func_270("NET_IWD_TITLE_F", -2, 0, 0, 0, 1);
			}
			break;
		case 3:
			if (uParam0->f_114)
			{
				uParam1->f_1154 = func_143("NET_IWD_TITLE_INF", _create_var_string(10, "NET_IWD_BODY_INF_FFA", func_54(Global_1296859->f_15, 1, 0)), 7500, func_140(), func_141(), 0, 1, 1);
			}
			else
			{
				uParam1->f_1154 = func_143("NET_IWD_TITLE_INF", "NET_IWD_BODY_INF", 7500, func_140(), func_141(), 0, 1, 1);
			}
			break;
	}
	if (uParam1->f_1154 != 0)
	{
		func_55(&(uParam1->f_1093), 2);
	}
}

void func_127(var uParam0)
{
	if (func_45())
	{
		uParam0->f_1085 = 1;
	}
	else if (uParam0->f_1085)
	{
		func_82("MC_ATTACKING", 1, 0);
		uParam0->f_1085 = 0;
	}
}

bool func_128()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_129(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_130(var uParam0, var uParam1)
{
	if (Global_1296859->f_15 != uParam0->f_90)
	{
		return false;
	}
	if ((!_0xd6f6acf4392187fb(uParam0->f_91) || !_network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam0->f_91))) || !network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_91)))
	{
		return false;
	}
	if (_0x149a2751ab66ac02(uParam0->f_91) == 0)
	{
		return false;
	}
	switch (uParam1->f_1047)
	{
		case 1:
			iVar0 = func_129(_create_var_string(10, "GF_FEUD_HELP_ACCEPTED_SENDER", func_52(get_player_name(_0x4be6c13a45cca8ec(uParam0->f_91)), -5208416)), 10000, 0, 0, 0, 1);
			break;
		case 4:
			iVar0 = func_129(_create_var_string(10, "GF_POSSE_FEUD_HELP_ACCEPTED_SENDER", func_54(uParam0->f_91, 1, 0)), 10000, 0, 0, 0, 1);
			break;
		case 5:
			iVar0 = func_129(_create_var_string(10, "GF_LEADER_FEUD_HELP_ACCEPTED_SENDER", func_54(uParam0->f_91, 1, 0)), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

bool func_131(var uParam0, var uParam1)
{
	if (Global_1296859->f_15 != uParam0->f_91)
	{
		return false;
	}
	if ((!_0xd6f6acf4392187fb(uParam0->f_90) || !_network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam0->f_90))) || !network_is_player_active(_0x4be6c13a45cca8ec(uParam0->f_90)))
	{
		return false;
	}
	if (_0x149a2751ab66ac02(uParam0->f_90) == 0)
	{
		return false;
	}
	sVar1 = "GF_POSSE_FEUD_HELP_ACCEPTED";
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		sVar1 = "GF_LEADER_FEUD_HELP_ACCEPTED";
	}
	switch (uParam1->f_1047)
	{
		case 1:
			iVar0 = func_129(_create_var_string(170, sVar1, func_271(uParam1->f_1047), func_52(get_player_name(_0x4be6c13a45cca8ec(uParam0->f_90)), -5208416), "NET_IWD_FEUD_EXTRA_HELP"), 10000, 0, 0, 0, 1);
			break;
		case 4:
			iVar0 = func_129(_create_var_string(170, sVar1, func_271(uParam1->f_1047), func_54(uParam0->f_90, 1, 0), "NET_IWD_FEUD_EXTRA_HELP"), 10000, 0, 0, 0, 1);
			break;
		case 5:
			iVar0 = func_129(_create_var_string(170, sVar1, func_271(uParam1->f_1047), func_54(uParam0->f_90, 1, 0), "NET_IWD_LEADER_FEUD_EXTRA_HELP"), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_132(var uParam0, int iParam1, int iParam2)
{
	if (!func_46(uParam0, iParam1, iParam2))
	{
		return;
	}
	func_272(&((*uParam0)[iParam2]->f_2), iParam1);
}

int func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_IWD_FEUDS_PROPER";
		case 4:
			return "NET_IWD_PFEUDS_PROPER";
		case 5:
			return "NET_IWD_PLFEUDS_PROPER";
		case 3:
			return "NET_IWD_INFIGHTING_PROPER";
		default:
			break;
	}
	return "NET_IWD_FEUDS_PROPER";
}

bool func_135(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (uParam3->f_1047 != 3)
	{
		if (uParam3->f_1058 == uParam1->f_90)
		{
			iVar0 = _0x4be6c13a45cca8ec(uParam1->f_91);
			uVar1 = uParam1->f_91;
		}
		else
		{
			iVar0 = _0x4be6c13a45cca8ec(uParam1->f_90);
			uVar1 = uParam1->f_90;
		}
		if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
		{
			return false;
		}
	}
	else
	{
		if (uParam1->f_114)
		{
			iVar0 = uParam3->f_1113;
		}
		if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
		{
			return false;
		}
	}
	switch (uParam3->f_1047)
	{
		case 1:
			if (func_129(_create_var_string(10, "NET_IWD_TIE_FEUD", func_52(get_player_name(iVar0), 109029619)), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 16777216, iParam0);
				return true;
			}
			break;
		case 4:
			if (func_129(_create_var_string(10, "NET_IWD_TIE_POSSE_FEUD", func_54(uVar1, 1, 0)), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 16777216, iParam0);
				return true;
			}
			break;
		case 5:
			if (func_129(_create_var_string(10, "NET_IWD_TIE_LEADER_FEUD", func_54(uVar1, 1, 0)), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 16777216, iParam0);
				return true;
			}
			break;
		case 3:
			if (uParam1->f_114)
			{
				if (func_129(_create_var_string(10, "NET_IWD_TIE_FFA", func_52(get_player_name(iVar0), 109029619)), 10000, 0, 0, 0, 1) != 0)
				{
					func_56(uParam2, 16777216, iParam0);
					return true;
				}
			}
			else if (func_129(_create_var_string(2, "NET_IWD_TIE_INFIGHTING"), 10000, 0, 0, 0, 1) != 0)
			{
				func_56(uParam2, 16777216, iParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_136(struct<2> Param0, int iParam2, bool bParam3)
{
	iVar2 = func_273();
	iVar1 = int_to_playerindex(iVar2);
	if (iVar1 == player_id())
	{
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	iVar0 = network_get_participant_index(iVar1);
	if (!network_is_participant_active(iVar0))
	{
		return;
	}
	func_274(iVar1, Param0, iParam2, bParam3);
}

bool func_137(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_275(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_276())
	{
		return func_275(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_275(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_138(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_211[*uParam3]->f_14 != 255)
	{
		if (!network_is_player_active(uParam0->f_211[*uParam3]->f_14) || !network_is_player_a_participant(uParam0->f_211[*uParam3]->f_14))
		{
			func_277(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_211[iVar0]->f_14 != iParam2) || !network_is_player_active(uParam0->f_211[iVar0]->f_14)) || !network_is_player_a_participant(uParam0->f_211[iVar0]->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_211[iVar1]->f_14 != 255)
			{
				if (!network_is_player_active(uParam0->f_211[iVar1]->f_14) || !network_is_player_a_participant(uParam0->f_211[iVar1]->f_14))
				{
					func_278(uParam0);
					func_277(uParam0, iVar1);
				}
			}
			if (uParam0->f_211[iVar1]->f_14 == iParam2)
			{
				func_278(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_211[iVar1]->f_14 == 255 && iVar0 == -1)
			{
				func_278(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_278(uParam0);
			func_277(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_211[iVar0]->f_5 != fParam1 || uParam0->f_211[iVar0]->f_1 != fParam5) || uParam0->f_211[iVar0]->f_2 != fParam6)
			{
				func_279(uParam0);
			}
			uParam0->f_211[iVar0]->f_14 = iParam2;
			uParam0->f_211[iVar0]->f_5 = fParam1;
			uParam0->f_211[iVar0]->f_1 = fParam5;
			uParam0->f_211[iVar0]->f_2 = fParam6;
			uParam0->f_211[iVar0]->f_3 = fParam8;
			uParam0->f_211[iVar0]->f_4 = fParam9;
			uParam0->f_211[iVar0] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_139(var uParam0)
{
	_0x7e300b5b86ab1d1a(&(uParam0->f_211), uParam0->f_211, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

char* func_140()
{
	return "rdro_gamemode_generic_sounds";
}

char* func_141()
{
	return "match_start";
}

var func_142(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

var func_143(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

char* func_144(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_145(int iParam0)
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
			Var2 = { func_147(iVar0) };
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

char* func_146(int iParam0, bool bParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_52(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
		}
		else
		{
			sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_52(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
			return func_144(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	}
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	return func_144(sVar0, iParam2);
}

struct<7> func_147(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

char* func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_149(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_144(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_150(char* sParam0)
{
	return _0xd4022c7286b0dfa2(sParam0, 100, 22);
}

bool func_151(int iParam0, char* sParam1)
{
	sVar0 = get_player_name(iParam0);
	iVar1 = get_length_of_literal_string(sVar0);
	if (compare_strings(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

int func_152(int iParam0)
{
	if (func_280(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	if (func_281(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_155(var uParam0, int iParam1)
{
	func_282(uParam0, iParam1);
}

int func_156()
{
	return Global_1572887->f_106.f_75;
}

void func_157(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_15(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_16(Param0) && !func_17(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_198(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_93(Param0) == 3)
		{
			func_283(1, -1706799532);
		}
		else if (func_93(Param0) == 4)
		{
			func_283(0, -1706799532);
		}
	}
	if ((func_93(Param0) == 3 || func_93(Param0) == 1) || ((bParam5 && func_93(Param0) == 4) && _0x01f4d242765c6b24(func_198(Param0))))
	{
		if (bParam3 != -1)
		{
			func_284(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_284(Param0, 2, bParam4, 255, 0);
		}
	}
	func_96(Param0, 0);
	if (func_112(func_95(0), Param0))
	{
		func_97(1);
		func_98(0);
		func_285(0);
		func_102(1);
	}
	func_286(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_104(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_158(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_16(func_95(0)) && func_104(func_95(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_287(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_288(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_154(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_289(iParam0, 1);
	if (!bVar0)
	{
		if (func_290(iParam0, bParam1))
		{
			return func_288(iParam0);
		}
		else if (func_291(iParam0, bParam1))
		{
			if (func_292(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_287(iParam0);
	}
	else if (func_290(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_293(func_19(func_95(0)), 1) == 395262693)
		{
			return func_288(iParam0);
		}
		else
		{
			return func_288(iParam0);
		}
	}
	else if (func_291(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

bool func_159(var uParam0)
{
	if (!_0x9be7dcb22d32ccbe(uParam0->f_90, player_id()) && !_0x9be7dcb22d32ccbe(uParam0->f_91, player_id()))
	{
		return false;
	}
	return true;
}

void func_160(var uParam0, int iParam1)
{
	if (!_0xd6f6acf4392187fb(iParam1))
	{
		return;
	}
	bVar1 = Global_1288655->f_8 == false;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!bVar1 && (*uParam0)[iVar0]->f_1 == -1)
		{
			if (Global_1288655->f_8 > iVar0)
			{
				Global_1288655->f_8 = iVar0;
			}
			bVar1 = true;
		}
		if (iParam1 == uParam0[iVar0])
		{
			(*uParam0)[iVar0]->f_2 = get_game_timer();
			(*uParam0)[iVar0]->f_1 = 0;
			return;
		}
		iVar0++;
	}
	if (bVar1)
	{
		(*uParam0)[Global_1288655->f_8]->f_1 = 0;
		(*uParam0)[Global_1288655->f_8] = iParam1;
		(*uParam0)[Global_1288655->f_8]->f_2 = get_game_timer();
		return;
	}
	func_294(uParam0);
	if (Global_1288655->f_8 > -1)
	{
		(*uParam0)[Global_1288655->f_8]->f_1 = 0;
		(*uParam0)[Global_1288655->f_8] = iParam1;
		(*uParam0)[Global_1288655->f_8]->f_2 = get_game_timer();
		return;
	}
}

void func_161()
{
	Global_1288655->f_79 = 255;
	Global_1288655->f_18 = uVar0;
	func_32(1);
}

void func_162(int iParam0)
{
	if (func_10(&Global_1903131, iParam0))
	{
		func_272(Global_1903131, iParam0);
	}
}

void func_163()
{
	if (func_295(64))
	{
		func_296(64);
	}
}

void func_164(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_165(var uParam0)
{
	if (uParam0[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			_databinding_remove_data_entry(uParam0[iVar0]);
			_databinding_remove_data_entry((*uParam0)[iVar0]->f_1);
			iVar0++;
		}
		uVar1 = 2;
		_copy_memory(uParam0, &uVar1, 11);
	}
}

void func_166(var uParam0, bool bParam1)
{
	_close_app_by_hash(595204529);
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_142))
	{
		_databinding_remove_data_entry(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_143[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_297(&(uParam0->f_162));
	}
	func_170(0);
}

void func_167(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!_0x84848e1c0fc67dbb(uParam0->f_11))
		{
			_0x3210bcb36af7621b(uParam0->f_11);
		}
		release_sound_id(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

void func_168()
{
	_0x9d746964e0cf2c5f(func_298(), func_299());
	_0x9d746964e0cf2c5f(func_300(), func_299());
	_0x9d746964e0cf2c5f(func_301(), func_299());
	_0x9d746964e0cf2c5f(func_302(), func_299());
	_0x9d746964e0cf2c5f(func_303(), func_304());
	_0x9d746964e0cf2c5f(func_305(), func_306());
}

void func_169(var uParam0)
{
	if (_uiflowblock_is_loaded(uParam0->f_3))
	{
		_uiflowblock_release(&(uParam0->f_3));
	}
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
}

void func_170(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_171(int iParam0)
{
	Global_1903133 = iParam0;
}

char* func_172()
{
	return "MP_OutofAreaDirectional";
}

void func_173(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_6 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_6 = 0;
		func_307(iParam0);
	}
}

void func_174(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
		if (func_308(iParam0))
		{
			func_309(iParam0);
		}
	}
}

void func_175(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		func_152(109);
		if (!Global_1296859->f_12)
		{
			func_310(16);
		}
	}
	else
	{
		func_153(109);
		if (!Global_1296859->f_12)
		{
			func_310(16);
		}
	}
}

void func_177(bool bParam0)
{
	Global_1102219->f_3671 = 0;
	if (!Global_1296859->f_12 && bParam0)
	{
		func_310(16);
	}
}

void func_178(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_22961.f_5), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_22961.f_5), iParam0);
		func_307(iParam0);
	}
}

void func_179(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_1 = 0;
		func_307(iParam0);
	}
}

void func_180(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
		}
		Global_1071686->f_21689[iParam0]->f_4 = 0;
		func_307(iParam0);
	}
}

void func_181(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_307(iParam0);
	}
}

void func_182(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_4 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_4 = 0;
		func_307(iParam0);
	}
}

bool func_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Global_1211095->f_5[iVar0] != iParam0)
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

void func_184(struct<5> Param0, int iParam5)
{
	Var0.f_5 = -1;
	Var0.f_4 = 7;
	Var0.f_5 = { Param0 };
	Var0.f_11 = iParam5;
	func_312(&Var0, func_311(0, 8));
}

void func_185(var uParam0)
{
	if (*uParam0 == -1)
	{
		func_186(uParam0, 0);
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 3;
	Var0.f_5 = { *uParam0 };
	func_312(&Var0, func_311(0, 8));
	func_313(0);
	func_186(uParam0, 0);
}

void func_186(var uParam0, bool bParam1)
{
	Var0 = -1;
	*uParam0 = { Var0 };
	if (bParam1)
	{
		func_313(0);
	}
}

bool func_187(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538[iParam0]), iParam1);
}

void func_188(int iParam0, int iParam1, bool bParam2)
{
	if (func_187(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538[iParam0], iParam1);
		Global_1071686->f_22538[iParam0]->f_1[iParam1] = 0;
		func_307(iParam0);
	}
}

void func_189(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_190()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_194(float fParam0)
{
	Global_1956200->f_1561.f_3 = fParam0;
}

struct<12> func_195()
{
	if (func_314())
	{
		return Global_1956200->f_1565.f_117;
	}
	return Global_1956200->f_1549;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	iVar0 = player_ped_id();
	func_315();
	func_316();
	func_317(&uParam0, iVar0);
	func_318(&uParam0, iVar0);
	func_319(&uParam0, iVar0);
	func_320(&uParam0);
	func_321();
	func_322(1);
}

int func_197(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_106(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_106(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

int func_198(struct<2> Param0)
{
	return func_323(Param0);
}

int func_199(struct<2> Param0)
{
	iVar0 = func_197(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_324(iVar0);
}

int func_200(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_106(Param0, &vVar0))
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
		func_106(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_325(iVar9);
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

void func_201()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_106(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_202(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_204(int iParam0, int iParam1)
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

void func_205(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_206()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_207(struct<2> Param0)
{
	if (!func_15(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_112(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_208(struct<2> Param0, int iParam2)
{
	if (!func_15(Param0))
	{
		func_326(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_327(Param0, 0, 1, -1);
}

void func_209(int iParam0, int iParam1)
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
			func_328((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_328(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_15(*Global_1900736->f_1[0]))
	{
		func_96(*Global_1900736->f_1[0], 3);
	}
}

bool func_210(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_15(Param0))
	{
		return false;
	}
	if (!func_15(Param2))
	{
		return true;
	}
	iVar0 = func_104(Param0);
	iVar1 = func_104(Param2);
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

bool func_211(int iParam0, var uParam1, var uParam2)
{
	if (!func_329(iParam0))
	{
		return false;
	}
	if (func_330(iParam0, uParam1, &uVar0))
	{
		func_331(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_212(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_213(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_1047 == 1)
	{
		if (_0x4be6c13a45cca8ec(uParam0->f_90) == 255)
		{
			func_214(uParam0, 4);
			return false;
		}
		if (_0x4be6c13a45cca8ec(uParam0->f_91) == 255)
		{
			func_214(uParam0, 4);
			return false;
		}
	}
	else
	{
		if (((_0x149a2751ab66ac02(uParam0->f_90) == 0 || !_0xd6f6acf4392187fb(uParam0->f_90)) || !_0x0f99f6436528a089(uParam0->f_90)) || _0x4be6c13a45cca8ec(uParam0->f_90) == 255)
		{
			func_214(uParam0, 4);
			return false;
		}
		if (uParam2->f_1047 != 3 && (((_0x149a2751ab66ac02(uParam0->f_91) == 0 || !_0xd6f6acf4392187fb(uParam0->f_91)) || !_0x0f99f6436528a089(uParam0->f_91)) || _0x4be6c13a45cca8ec(uParam0->f_91) == 255))
		{
			func_214(uParam0, 4);
			return false;
		}
	}
	if ((uParam2->f_1047 == 3 && uParam0->f_1 == 11) && !uParam0->f_114)
	{
		iVar0 = 0;
		while (iVar0 <= (network_get_max_num_participants() - 1))
		{
			iVar4 = int_to_participantindex(iVar0);
			if (!network_is_participant_active(iVar4))
			{
			}
			else
			{
				iVar3 = network_get_player_index(iVar4);
				if (!_network_is_player_index_valid(iVar3))
				{
				}
				else if (!network_is_player_connected(iVar3))
				{
				}
				else if ((*uParam1)[iVar0]->f_6 == 0)
				{
					iVar1++;
				}
				else if ((*uParam1)[iVar0]->f_6 == 1)
				{
					iVar2++;
				}
			}
			iVar0++;
		}
		if (iVar1 < 1 || iVar2 < 1)
		{
			func_214(uParam0, 4);
			return false;
		}
	}
	return true;
}

void func_214(var uParam0, int iParam1)
{
	if (func_38(uParam0, iParam1))
	{
		return;
	}
	func_55(&(uParam0->f_3), iParam1);
}

bool func_215(int iParam0)
{
	if (!func_11(iParam0))
	{
		if (network_get_num_participants() < 2)
		{
			return false;
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar1);
			if (!network_is_player_connected(iVar2))
			{
			}
			else
			{
				if (iParam0 == 1 && iVar2 != player_id())
				{
					return true;
				}
				iVar3 = _0x901e0dc25080c8b9(iVar2);
				if (iVar3 != _0x901e0dc25080c8b9(player_id()))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_216(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_332(&(uParam0->f_2), 5);
			return false;
		case 5:
			func_333(uParam0, uParam1);
			func_332(&(uParam0->f_2), 4);
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return true;
}

void func_217(var uParam0)
{
	if (func_223(uParam0))
	{
		return;
	}
	func_334(uParam0, 0);
}

bool func_218(var uParam0, int iParam1)
{
	return func_335(uParam0) >= iParam1;
}

void func_219(var uParam0)
{
	uParam0->f_112 = 225f;
}

void func_220(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		uParam0->f_115[iVar0] = 255;
		iVar0++;
	}
}

void func_221(var uParam0, int iParam1)
{
	if (uParam0->f_1 == iParam1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
}

bool func_222(var uParam0)
{
	if (func_64(uParam0, 33554432))
	{
		return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	return func_268(*uParam0, 1);
}

int func_224(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (!func_46(uParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_225(var uParam0, var uParam1)
{
	iVar4 = uParam0->f_105;
	if (uParam0->f_114)
	{
		func_336(uParam0, uParam1);
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if ((*uParam1)[iVar0]->f_6 < 0 || (*uParam1)[iVar0]->f_6 > 1)
		{
		}
		else
		{
			if (is_time_more_than((*uParam1)[iVar0]->f_5, iVar4))
			{
				iVar4 = (*uParam1)[iVar0]->f_5;
				iVar1 = (*uParam1)[iVar0]->f_6;
			}
			if ((*uParam1)[iVar0]->f_6 == 0)
			{
				iVar2 = (iVar2 + (*uParam1)[iVar0]->f_3);
			}
			else
			{
				iVar3 = (iVar3 + (*uParam1)[iVar0]->f_3);
			}
		}
		iVar0++;
	}
	if (iVar2 == 0 && iVar3 == 0)
	{
		uParam0->f_107 = 1;
		uParam0->f_92 = -1;
		return;
	}
	if (iVar2 == iVar3)
	{
		uParam0->f_108 = 1;
		if (iVar1 == 1)
		{
			uParam0->f_92 = 0;
			uParam0->f_106 = iVar2;
			return;
		}
		else
		{
			uParam0->f_92 = 1;
			uParam0->f_106 = iVar3;
			return;
		}
	}
	if (iVar2 > iVar3)
	{
		uParam0->f_92 = 0;
		uParam0->f_106 = iVar2;
		return;
	}
	else
	{
		uParam0->f_92 = 1;
		uParam0->f_106 = iVar3;
		return;
	}
}

void func_226(var uParam0)
{
	_datafile_register_query(uParam0->f_1042, -1624776506, "inworlddeathmatch_gametypes");
	_datafile_register_query(uParam0->f_1042, -1910604690, "gametype_data");
	_datafile_register_query(uParam0->f_1042, 486970478, ":iTimeoutTime");
	_datafile_register_query(uParam0->f_1042, -732256870, ":iGameTime");
	_datafile_register_query(uParam0->f_1042, 120303929, ":bDamageAllies");
}

int func_227(var uParam0)
{
	iVar0 = func_337(uParam0->f_1047);
	if (!func_338(&Var1, uParam0))
	{
		return -1;
	}
	if (!func_339(&Var1, uParam0))
	{
		return -1;
	}
	func_340(Var1, -732256870, &iVar0, 1);
	return iVar0;
}

int func_228(var uParam0)
{
	iVar0 = 1000;
	if (!func_338(&Var1, uParam0))
	{
		return -1;
	}
	func_340(Var1, 486970478, &iVar0, 1);
	return iVar0;
}

bool func_229(var uParam0)
{
	iVar0 = func_341(uParam0->f_1047);
	if (!func_338(&Var1, uParam0))
	{
		return false;
	}
	if (!func_339(&Var1, uParam0))
	{
		return false;
	}
	func_340(Var1, 120303929, &iVar0, 1);
	return iVar0 > 0;
}

bool func_230(int iParam0)
{
	if (iParam0 >= 2 && iParam0 <= 11)
	{
		return true;
	}
	return false;
}

void func_231(var uParam0, int iParam1)
{
	if (uParam0->f_1 == iParam1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
}

bool func_232()
{
	return (func_342() != 0 || func_343(1));
}

float func_233(var uParam0)
{
	if (!func_123(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_344(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_345() - uParam0->f_1);
}

bool func_234()
{
	return func_346() != 0;
}

int func_235(int iParam0)
{
	if (func_234())
	{
		return 0;
	}
	if (!func_232())
	{
		return 0;
	}
	if (func_347())
	{
		func_348(2);
	}
	else
	{
		func_348(1);
	}
	func_349(iParam0);
	return 1;
}

void func_236(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_107() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_191(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_193(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_193(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_237(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_238(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	Global_1139381->f_3876.f_1 = (Global_1139381->f_3876.f_1 || iParam0);
}

void func_239(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_240(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam3->f_1155)
	{
		case 0:
			func_350(1);
			_0xdd1232b332cbb9e7(3, 1, 0);
			(*uParam2)[iParam0]->f_7[iParam0] = player_id();
			func_351(iParam0, uParam2);
			func_56(uParam2, 256, iParam0);
			func_239(&(uParam3->f_1155), 1);
			break;
		case 1:
			break;
	}
}

void func_241(var uParam0, var uParam1, var uParam2)
{
	iVar0 = _0xc17f69e1418cd11f(3);
	if (iVar0 == 0 || uParam2->f_1040 != uParam1->f_1)
	{
		bVar1 = true;
	}
	switch (uParam1->f_1)
	{
		case 2:
			break;
		case 8:
			if ((uParam2->f_1041 != 1 || iVar0 != uParam2->f_1153) || bVar1)
			{
				uParam2->f_1153 = func_352("NET_IWD_GET_TO_ARENA_OBJ", -1, 0, 0, 1);
				uParam2->f_1040 = uParam1->f_1;
				uParam2->f_1041 = 1;
			}
			break;
		case 9:
			if (func_353(uParam1, 8192))
			{
				if ((iVar0 != uParam2->f_1153 || bVar1) || uParam2->f_1041 != 3)
				{
					uParam2->f_1153 = func_352("NET_IWD_RETURN_TO_ARENA_OBJ", -1, 0, 0, 1);
					uParam2->f_1040 = uParam1->f_1;
					uParam2->f_1041 = 3;
				}
				return;
			}
			else if ((iVar0 != uParam2->f_1153 || uParam2->f_1041 != 2) || bVar1)
			{
				uParam2->f_1153 = func_352("NET_IWD_WAIT_ARENA_OBJ", -1, 0, 0, 1);
				uParam2->f_1040 = uParam1->f_1;
				uParam2->f_1041 = 2;
			}
			break;
		case 11:
			if (func_353(uParam1, 4096))
			{
				if (func_353(uParam1, 8192))
				{
					if ((iVar0 != uParam2->f_1153 || bVar1) || uParam2->f_1041 != 3)
					{
						uParam2->f_1153 = func_352("NET_IWD_RETURN_TO_ARENA_OBJ", -1, 0, 0, 1);
						uParam2->f_1040 = uParam1->f_1;
						uParam2->f_1041 = 3;
					}
					return;
				}
				else if (uParam2->f_1047 == 3)
				{
					if ((iVar0 != uParam2->f_1153 || bVar1) || uParam2->f_1041 != 2)
					{
						if (uParam0->f_114)
						{
							uParam2->f_1153 = func_352("NET_IWD_DEATHMATCH_INFIGHTING_FFA_OBJ", -1, 0, 0, 1);
						}
						else
						{
							uParam2->f_1153 = func_352("NET_IWD_DEATHMATCH_INFIGHTING_OBJ", -1, 0, 0, 1);
						}
						uParam2->f_1040 = uParam1->f_1;
						uParam2->f_1041 = 2;
					}
				}
				else if (uParam2->f_1047 == 4)
				{
					if ((iVar0 != uParam2->f_1153 || bVar1) || uParam2->f_1041 != 2)
					{
						uParam2->f_1153 = func_352("NET_IWD_DEATHMATCH_POSFEUD_OBJ", -1, 0, 0, 1);
						uParam2->f_1040 = uParam1->f_1;
						uParam2->f_1041 = 2;
					}
				}
				else if (uParam2->f_1047 == 5 || uParam2->f_1047 == 1)
				{
					if ((iVar0 != uParam2->f_1153 || bVar1) || uParam2->f_1041 != 2)
					{
						if ((_0xd6f6acf4392187fb(uParam2->f_1057) && _0x149a2751ab66ac02(uParam2->f_1057) > 0) && _network_is_player_index_valid(_0x4be6c13a45cca8ec(uParam2->f_1057)))
						{
							uParam2->f_1153 = func_352(_create_var_string(10, "NET_IWD_DEATHMATCH_POSLEADFEUD_OBJ", func_52(get_player_name(_0x4be6c13a45cca8ec(uParam2->f_1057)), -5208416)), -1, 0, 0, 1);
							uParam2->f_1040 = uParam1->f_1;
							uParam2->f_1041 = 2;
						}
					}
				}
			}
			else if ((uParam2->f_1041 != 1 || iVar0 != uParam2->f_1153) || bVar1)
			{
				uParam2->f_1153 = func_352("NET_IWD_GET_TO_ARENA_OBJ", -1, 0, 0, 1);
				uParam2->f_1040 = uParam1->f_1;
				uParam2->f_1041 = 1;
			}
			break;
		case 13:
			if (iVar0 != uParam2->f_1153 || bVar1)
			{
				uParam2->f_1153 = func_352("NET_IWD_DEATHMATCH_VIEW_SCOREBOARD_OBJ", -1, 0, 0, 1);
				uParam2->f_1040 = uParam1->f_1;
			}
			break;
	}
}

var func_242(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_243(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_24)
	{
		func_354(uParam1, uParam2);
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = player_id();
	iVar4 = 0;
	while (iVar4 <= (network_get_max_num_participants() - 1))
	{
		if (&uParam0->f_7[iVar4] == iVar2)
		{
			iVar0 = 1;
			uParam1->f_23 = 1;
		}
		iVar4++;
	}
	if (uParam1->f_23)
	{
		set_player_team(player_id(), 0, true);
		uParam1->f_6 = 0;
	}
	else
	{
		set_player_team(player_id(), 1, true);
		uParam1->f_6 = 1;
	}
	iVar4 = 0;
	while (iVar4 <= (network_get_max_num_participants() - 1))
	{
		iVar6 = int_to_participantindex(iVar4);
		if (!network_is_participant_active(iVar6))
		{
		}
		else
		{
			iVar3 = network_get_player_index(iVar6);
			if (iVar3 == iVar2)
			{
			}
			else if (!_network_is_player_index_valid(iVar3))
			{
			}
			else if (!network_is_player_connected(iVar3))
			{
			}
			else
			{
				iVar1 = 0;
				iVar5 = 0;
				while (iVar5 <= (network_get_max_num_participants() - 1))
				{
					if (&uParam0->f_7[iVar5] == iVar3)
					{
						iVar1 = 1;
					}
					else
					{
						iVar5++;
					}
				}
				if (iVar1 != iVar0)
				{
					if (!func_292(iVar3, 0))
					{
						func_355(iVar3);
						_0x31010318ba9897ac(&(uParam2->f_1075), iVar3);
					}
				}
				else if (func_292(iVar3, 0))
				{
					func_174(iVar3);
					_0xd426e2e3288469d6(&(uParam2->f_1075), iVar3);
				}
			}
		}
		iVar4++;
	}
}

void func_244(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_356(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_357(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_358(iVar0);
	*uParam0 = 0;
}

void func_245(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if ((!func_223(&(uParam1->f_94)) || func_266(uParam3->f_1154)) || (*uParam2)[iParam0]->f_1 < 11)
	{
		bVar1 = true;
	}
	iVar2 = 1;
	if (uParam3->f_1047 == 1)
	{
		if (bVar1)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 65;
		}
	}
	else if (func_11(uParam3->f_1047))
	{
		if (bVar1)
		{
			iVar0 = 7;
		}
		else
		{
			iVar0 = 3;
		}
		iVar2 = 2;
	}
	else if (uParam3->f_1047 == 3)
	{
		if (uParam1->f_114)
		{
			if (bVar1)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 65;
			}
			iVar2 = 0;
		}
		else
		{
			if (bVar1)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 1;
			}
			iVar2 = 2;
		}
	}
	else
	{
		iVar0 = 5;
	}
	func_359(uParam1, uParam2, uParam3);
	StringCopy(&(uParam3->f_15.f_951), _create_var_string(2, func_360(uParam3->f_1047)), 64);
	switch ((*uParam2)[iParam0]->f_1)
	{
		case 8:
		case 9:
		case 10:
			func_361(uParam3, (93000 - get_time_difference(uParam1->f_104, get_network_time_accurate())), 0, 30000, 0);
			break;
		case 11:
			func_364(uParam3, &(uParam3->f_15), &(uParam3->f_1007), (uParam3->f_1042.f_2 - func_335(&(uParam1->f_94))), 0, 30000, 0, iVar0, func_362(uParam1->f_114), 859817522, func_363(uParam1->f_114), -1886482671, iVar2);
			break;
		case 12:
			func_365(uParam3, &(uParam3->f_15), &(uParam3->f_1007), iVar0, iVar2);
			break;
	}
	if (((uParam3->f_1047 == 3 || uParam3->f_1047 == 4) || uParam3->f_1047 == 5) && (*uParam2)[iParam0]->f_1 >= 8)
	{
		_databinding_add_data_string(&(uParam3->f_15.f_11.f_3[0]), "Stat3", _0x2b6846401d68e563(&(uParam3->f_1007[0]), uParam3->f_15.f_11.f_151));
		_databinding_add_data_string(&(uParam3->f_15.f_11.f_3[1]), "Stat3", _0x2b6846401d68e563(&(uParam3->f_1007[1]), uParam3->f_15.f_11.f_151));
	}
}

void func_246(var uParam0, var uParam1, int iParam2)
{
	iVar1 = int_to_playerindex(iParam2);
	if ((!_network_is_player_index_valid(iVar1) || !network_is_player_connected(iVar1)) || iVar1 == player_id())
	{
		return;
	}
	iVar0 = network_get_participant_index(iVar1);
	if (!func_366(iVar0) || !network_is_participant_active(iVar0))
	{
		if (_0x901e0dc25080c8b9(iVar1) == Global_1296859->f_15)
		{
			func_367(iParam2, 1);
		}
		if (func_292(iVar1, 0))
		{
			iVar2 = iVar1;
			func_179(iVar2);
			func_180(iVar2);
			func_181(iVar2);
			func_182(iVar2);
			func_188(iParam2, 1, 0);
			func_174(iVar1);
		}
		return;
	}
	bVar3 = func_46(uParam1, 4096, iVar0);
	bVar4 = func_46(uParam1, 4096, participant_id_to_int());
	if (bVar3 && bVar4)
	{
		func_188(iParam2, 1, 0);
	}
	else if ((*uParam1)[iVar0]->f_6 != (*uParam1)[participant_id_to_int()]->f_6 || uParam0->f_114)
	{
		func_367(iParam2, 1);
	}
}

bool func_247(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

void func_248(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (((((func_46(uParam1, 4096, iParam3) || func_368(255)) || !does_entity_exist(Global_34)) || is_entity_dead(Global_34)) || _0xb655db7582aec805(Global_34)) || func_369())
	{
		if (func_356(uParam2->f_1151))
		{
			func_370(uParam2);
		}
		return;
	}
	if (!func_356(uParam2->f_1151))
	{
		uParam2->f_1151 = func_371("FM_FAST_TRAVEL", -719620017, Global_34, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		if (uParam2->f_1151 != 0)
		{
			_uiprompt_set_attribute((*Global_1951255)[uParam2->f_1151]->f_3, 13, 1);
		}
	}
	if (func_356(uParam2->f_1151))
	{
		disable_control_action(0, -1046962283, false);
		disable_control_action(0, 1287709438, false);
		if (!func_372(uParam2->f_1151, 1))
		{
			func_373(uParam2->f_1151, 1, 1, 1);
		}
	}
	if (func_356(uParam2->f_1151))
	{
		if (_is_ped_carrying(Global_34))
		{
			if (func_372(uParam2->f_1151, 0))
			{
				func_244(&(uParam2->f_1151), 0, 1);
			}
		}
		else
		{
			if (!func_372(uParam2->f_1151, 0))
			{
				func_373(uParam2->f_1151, 1, 1, 1);
			}
			if (func_374(uParam2->f_1151, 0))
			{
				uParam2->f_1086 = { func_375(player_id()) };
				uParam2->f_1089 = 1;
				func_376();
				func_377(uParam0->f_109, 15f, 30f, &uVar0, &uVar30);
				func_378(&uVar0, &uVar30, 1, 1, 1);
				func_244(&(uParam2->f_1151), 0, 1);
			}
		}
	}
}

void func_249(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (uParam2->f_1084)
	{
		if (get_time_difference(uParam2->f_1080, get_network_time_accurate()) > 3000)
		{
			uParam2->f_1084 = 0;
		}
		else
		{
			set_ped_max_move_blend_ratio(func_379(player_ped_id()), 1.5f);
		}
	}
	if (func_380(Global_34, 0))
	{
		if (does_blip_exist(uParam2->f_1101))
		{
			remove_blip(&(uParam2->f_1101));
		}
		if (func_46(uParam1, 16, iParam3))
		{
			func_162(4);
			func_74(&(uParam2->f_1107), 1, 1);
			func_381(&(uParam2->f_1104));
			func_132(uParam1, 16, iParam3);
			func_132(uParam1, 8192, iParam3);
		}
		return;
	}
	if (func_247(Global_34, uParam2->f_1102, 1, 0))
	{
		uParam2->f_1103 = get_network_time_accurate();
		if (does_blip_exist(uParam2->f_1101))
		{
			remove_blip(&(uParam2->f_1101));
		}
		func_163();
		if (func_46(uParam1, 16, iParam3))
		{
			func_74(&(uParam2->f_1107), 1, 1);
			func_132(uParam1, 16, iParam3);
			func_132(uParam1, 8192, iParam3);
			func_162(4);
			func_381(&(uParam2->f_1104));
		}
	}
	else
	{
		if (!does_blip_exist(uParam2->f_1101))
		{
			uParam2->f_1101 = _blip_add_for_coord(408396114, uParam0->f_109);
			_blip_set_modifier(uParam2->f_1101, -1878373110);
			_blip_set_modifier(uParam2->f_1101, 847579139);
			set_blip_name_from_text_file(uParam2->f_1101, "NET_IWD_OOB_BLIP");
		}
		func_56(uParam1, 16, iParam3);
		if (!func_46(uParam1, 8192, iParam3))
		{
			func_56(uParam1, 8192, iParam3);
			func_382(4);
			play_sound_frontend("OOB_start", "RDRO_Out_Of_Bounds_Sounds", true, 0);
		}
		if (func_223(&(uParam2->f_1104)) && get_time_difference(uParam2->f_1104.f_1, get_network_time_accurate()) >= 10990)
		{
			func_383(Global_34, 0, 0, 0);
			func_384();
			func_162(4);
			func_381(&(uParam2->f_1104));
		}
		if (!bParam4)
		{
			if (!func_223(&(uParam2->f_1104)))
			{
				cVar0 = 10;
			}
			else
			{
				cVar0 = ((10990 - get_time_difference(uParam2->f_1104.f_1, get_network_time_accurate())) / 1000);
			}
			vVar2 = { uParam0->f_109 };
			vVar2.f_2 = (vVar2.z + 10f);
			if (func_385(&(uParam2->f_1107), 10990, &uVar1, 1, vVar2, uParam0->f_112, uParam2->f_1102))
			{
				if (!func_223(&(uParam2->f_1104)))
				{
					func_334(&(uParam2->f_1104), 1);
				}
			}
			func_386(&(uParam2->f_1107), cVar0, vVar2, uParam0->f_112, 1, 0, 0, 1, 0);
		}
	}
}

void func_250(int iParam0)
{
	if (!func_154(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_387(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (iVar1 == player_id())
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar0 = network_get_participant_index(iVar1);
			if (!network_is_participant_active(iVar0))
			{
			}
			else if (bParam2)
			{
				func_388(iVar1, -5208416);
			}
			else
			{
				iVar3 = iVar0;
				if ((*uParam0)[iVar3]->f_6 == (*uParam0)[iParam1]->f_6)
				{
					func_388(iVar1, -963477619);
				}
				else
				{
					func_388(iVar1, -5208416);
				}
			}
		}
		iVar2++;
	}
}

int func_252(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if (iVar0 == iParam0)
		{
		}
		else if ((*uParam1)[iVar0]->f_6 == (*uParam1)[iParam0]->f_6)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_253(int iParam0, bool bParam1)
{
	if (!func_389(109))
	{
		return;
	}
	Global_1102219->f_3671 = iParam0;
	if (!Global_1296859->f_12 && bParam1)
	{
		func_310(16);
	}
}

bool func_254(int iParam0, var uParam1, var uParam2, var uParam3)
{
	iVar2 = 0;
	while (iVar2 <= (network_get_max_num_participants() - 1))
	{
		if (iVar2 == iParam0)
		{
		}
		else if (_0x72b2e00c9bac6789(&(uParam3->f_1059), iVar2))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(iVar2);
			if (!func_366(iVar1) || !network_is_participant_active(iVar1))
			{
			}
			else
			{
				iVar0 = network_get_player_index(iVar1);
				if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
				{
				}
				else if (uParam1->f_114)
				{
					iVar3 = iVar0;
					func_390(iVar3, 1366733613);
					func_391(iVar3, 847579139);
					func_392(iVar3, 12061847);
					func_354((*uParam2)[iParam0], uParam3);
				}
				else
				{
					if ((*uParam2)[iVar2]->f_6 == -1)
					{
						return false;
					}
					if ((*uParam2)[iVar2]->f_6 == (*uParam2)[iParam0]->f_6)
					{
					}
					else
					{
						iVar3 = iVar0;
						func_391(iVar3, 847579139);
						if (uParam3->f_1047 != 3)
						{
							func_259(uParam3, iVar3, uParam3->f_1047);
						}
						uParam3->f_1060[iVar2] = iVar0;
						_0x31010318ba9897ac(&(uParam3->f_1059), iVar2);
						if (uParam3->f_1047 == 5 && !_0x424b17a7dc5c90bc(iVar0))
						{
						}
						else
						{
							func_390(iVar3, 1366733613);
							func_392(iVar3, 12061847);
						}
					}
				}
			}
		}
		iVar2++;
	}
	func_393(75f, 76f, 0);
	return true;
}

void func_255(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_247(Global_34, uParam2->f_1102, 1, 0))
	{
		return;
	}
	if (!func_254(iParam3, uParam0, uParam1, uParam2))
	{
		return;
	}
	if (func_394(player_ped_id()))
	{
		if (!is_entity_dead(func_379(player_ped_id())))
		{
			set_ped_max_move_blend_ratio(func_379(player_ped_id()), 1.5f);
			uParam2->f_1080 = get_network_time_accurate();
			uParam2->f_1084 = 1;
		}
	}
	func_56(uParam1, 4096, iParam3);
	if (does_blip_exist(uParam2->f_1100))
	{
		remove_blip(&(uParam2->f_1100));
	}
	uParam2->f_1100 = _blip_add_for_area(-569474439, uParam0->f_109, uParam0->f_112, uParam0->f_112, uParam0->f_112, 0);
	_blip_set_modifier(uParam2->f_1100, -1417554730);
	func_57(1);
	Global_1108365->f_935.f_23 = 1;
}

void func_256()
{
	func_55(&(Global_1071686->f_22973.f_3), 64);
}

void func_257(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (bParam2 || uParam1->f_1047 == 1)
	{
		return;
	}
	iVar0 = int_to_participantindex(uParam1->f_1056);
	if (!func_366(iVar0) || !network_is_participant_active(iVar0))
	{
		uParam1->f_1056 = (uParam1->f_1056 + 1 % network_get_max_num_participants());
		return;
	}
	iVar1 = network_get_player_index(iVar0);
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
	{
		uParam1->f_1056 = (uParam1->f_1056 + 1 % network_get_max_num_participants());
		return;
	}
	if ((*uParam0)[uParam1->f_1056]->f_6 == (*uParam0)[iParam3]->f_6)
	{
		func_395(iVar1);
		_0x31010318ba9897ac(&(uParam1->f_1076), uParam1->f_1056);
	}
	uParam1->f_1056 = (uParam1->f_1056 + 1 % network_get_max_num_participants());
}

void func_258(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_380(Global_34, 1))
	{
		if (_0x7a4e00364b5d727b(Global_34) && uParam2->f_1083 == 0)
		{
			func_176(0);
		}
		return;
	}
	if (!func_46(uParam1, 4096, iParam3))
	{
		return;
	}
	if (!func_396(255) || !func_397(255))
	{
		return;
	}
	_0x44d59ec597bbf348(9, 1);
	_0xeb6027fd1b4600d5(11, 1, 0.75f);
	_0xeb6027fd1b4600d5(15, 0, 0.75f);
	_0xeb6027fd1b4600d5(19, 1, 0.05f);
	_0x44d59ec597bbf348(3, 0);
	func_377(uParam0->f_109, 100f, 40f, &Var0, &Var30);
	func_398(Var0, Var30, 1, 1, 1);
}

void func_259(var uParam0, int iParam1, var uParam2)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	iVar1 = int_to_playerindex(iParam1);
	if (iVar1 == player_id())
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar1))
	{
		return;
	}
	if (!network_is_player_connected(iVar1))
	{
		return;
	}
	if (!network_is_player_a_participant(iVar1) || !network_is_participant_active(network_get_participant_index(iVar1)))
	{
		return;
	}
	if (_0x901e0dc25080c8b9(iVar1) == iVar0)
	{
		if (func_399(iVar1))
		{
			func_174(iVar1);
			_0xd426e2e3288469d6(&(uParam0->f_1075), iVar1);
		}
		return;
	}
	if (!func_399(iVar1))
	{
		func_355(iVar1);
		_0x31010318ba9897ac(&(uParam0->f_1075), iVar1);
	}
}

void func_260(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -1315570756:
				func_400(iParam0, iVar0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
	func_401(uParam2);
}

void func_261(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (func_46(uParam0, 8388608, iParam3) || func_46(uParam0, 16777216, iParam3))
	{
		return;
	}
	if (bParam2)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar3 = 0;
		while (iVar3 <= (network_get_max_num_participants() - 1))
		{
			iVar2 = int_to_participantindex(iVar3);
			if (!network_is_participant_active(iVar2))
			{
			}
			else
			{
				iVar1 = network_get_player_index(iVar2);
				if (iVar1 == player_id())
				{
				}
				else if (!_network_is_player_index_valid(iVar1))
				{
				}
				else if (!network_is_player_connected(iVar1))
				{
				}
				else if ((*uParam0)[iVar3]->f_3 == 0 || (*uParam0)[iVar3]->f_3 < iVar4)
				{
				}
				else if ((*uParam0)[iVar3]->f_3 > iVar4)
				{
					iVar4 = (*uParam0)[iVar3]->f_3;
					iVar0 = iVar1;
				}
			}
			iVar3++;
		}
		if (iVar4 == 0)
		{
			return;
		}
		if (iVar4 == (*uParam0)[iParam3]->f_3)
		{
			func_56(uParam0, 8388608, iParam3);
			uParam1->f_1113 = iVar0;
		}
	}
	else
	{
		if (&uParam1->f_1007[0] == 0f)
		{
			return;
		}
		if (&uParam1->f_1007[0] == &uParam1->f_1007[1])
		{
			func_56(uParam0, 8388608, iParam3);
		}
	}
}

void func_262(var uParam0, var uParam1)
{
	if (uParam1->f_1047 != 3)
	{
		return;
	}
	Var0 = { func_21(-406491492, 596359697) };
	iVar2 = uParam0->f_3;
	iVar3 = func_402(Var0);
	if (IntToFloat(iVar2) > 0f && iVar2 > iVar3)
	{
		stat_id_set_float(&Var0, to_float(iVar2), true);
	}
}

void func_263(int iParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = false;
	if (uParam1->f_114)
	{
		if (uParam1->f_113 == player_id())
		{
			bVar0 = true;
		}
	}
	else if (uParam1->f_92 == (*uParam2)[iParam0]->f_6)
	{
		bVar0 = true;
	}
	switch (uParam3->f_1047)
	{
		case 1:
			if (bVar0)
			{
				func_22(func_21(-1892463704, 346097770), 1);
				func_403(-1153378954, 0, 255, 0, 0);
			}
			else
			{
				func_22(func_21(1374282888, 346097770), 1);
			}
			break;
		case 3:
			if (bVar0)
			{
				func_22(func_21(-1892463704, -785841056), 1);
				func_22(func_21(-1892463704, 596359697), 1);
				func_403(1701017579, 0, 255, 0, 0);
				if (func_60(uParam1, uParam2) == player_id() || uParam1->f_114)
				{
					func_22(func_404(1114562171), 1);
					if (func_405(player_id()) != 0)
					{
						func_406(func_405(player_id()), &(Global_1296859->f_1));
					}
				}
			}
			else
			{
				func_22(func_21(1374282888, -785841056), 1);
				func_22(func_21(1374282888, 596359697), 1);
			}
			break;
		case 4:
			if (bVar0)
			{
				func_22(func_21(-1892463704, -2027482694), 1);
				func_22(func_21(-1892463704, -785841056), 1);
				if (func_60(uParam1, uParam2) == player_id())
				{
					func_22(func_404(1114562171), 1);
				}
				func_403(-1104744021, 0, 255, 0, 0);
			}
			else
			{
				func_22(func_21(1374282888, -2027482694), 1);
				func_22(func_21(1374282888, -785841056), 1);
			}
			break;
		case 5:
			if (bVar0)
			{
				func_22(func_21(-1892463704, -2027482694), 1);
				func_22(func_21(-1892463704, -785841056), 1);
				if (func_60(uParam1, uParam2) == player_id())
				{
					func_22(func_404(1114562171), 1);
				}
				func_403(-643964192, 0, 255, 0, 0);
			}
			else
			{
				func_22(func_21(1374282888, -2027482694), 1);
				func_22(func_21(1374282888, -785841056), 1);
			}
			break;
	}
}

bool func_264(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_45())
	{
		if (func_123(&(uParam3->f_1077)))
		{
			func_407(&(uParam3->f_1077));
		}
		if (uParam3->f_1081 == -1)
		{
			uParam3->f_1081 = get_network_time_accurate();
		}
		if (get_time_difference(uParam3->f_1081, get_network_time_accurate()) < 10000)
		{
			return false;
		}
	}
	else if (func_123(&(uParam3->f_1077)) && func_344(&(uParam3->f_1077)))
	{
		func_408(&(uParam3->f_1077));
	}
	if (func_38(uParam1, 16))
	{
		if (!func_46(uParam2, 32768, iParam0))
		{
			func_124(&(uParam3->f_1077), 1);
			func_56(uParam2, 32768, iParam0);
		}
	}
	else
	{
		return false;
	}
	func_55(&(uParam3->f_1093), 4);
	iVar0 = func_409(&(uParam3->f_1077));
	if (iVar0 < 2000)
	{
		return false;
	}
	if (bParam4 || uParam3->f_1047 == 3)
	{
		if (iVar0 > 22000)
		{
			set_ped_config_flag(Global_1296859->f_8, 176, true);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_265(var uParam0)
{
	if (func_45())
	{
		return;
	}
	if (uParam0->f_1089)
	{
		func_410(uParam0->f_1086, 0f, -1082130432, -1082130432, 1, 1, 1);
		uParam0->f_1089 = 0;
	}
}

bool func_266(int iParam0)
{
	iVar0 = 6;
	if (func_411(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_267(var uParam0)
{
	if (!_0x72b2e00c9bac6789(&(uParam0->f_1059), uParam0->f_1039))
	{
		return;
	}
	iVar0 = int_to_participantindex(uParam0->f_1039);
	if (!func_366(iVar0))
	{
		return;
	}
	if (network_is_participant_active(iVar0))
	{
		return;
	}
	iVar1 = &uParam0->f_1060[uParam0->f_1039];
	if (!_network_is_player_index_valid(iVar1) || !network_is_player_connected(iVar1))
	{
		return;
	}
	iVar2 = iVar1;
	_0xd426e2e3288469d6(&(uParam0->f_1059), uParam0->f_1039);
	uParam0->f_1060[uParam0->f_1039] = 255;
	func_179(iVar2);
	func_180(iVar2);
	func_182(iVar2);
	func_181(iVar2);
}

bool func_268(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_269(var uParam0)
{
	func_412(uParam0, 0f);
}

var func_270(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _0x860ddfe97cc94df0(&Var0, &Var13, iParam5);
	return uVar20;
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_NET_IWD_TITLE_F_LWR";
		case 4:
			return "NET_IWD_TITLE_PF_LWR";
		case 5:
			return "NET_IWD_TITLE_PLF_LWR";
		default:
			break;
	}
	return "NET_IWD_FEUDS_PROPER";
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_273()
{
	return Global_1108365->f_34.f_772;
}

void func_274(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!func_15(Param1))
		{
			return;
		}
		if (func_413(Param1, 1))
		{
			return;
		}
		if (func_414(Param1))
		{
			return;
		}
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return;
	}
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_415(iVar0);
	if (Global_1108365->f_34.f_353[iVar0] && Global_1108365->f_34.f_353[iVar0]->f_5 == -1)
	{
		return;
	}
	if (!func_16(Param1) || !bParam3)
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_5 = 5;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		}
		*Global_1108365->f_34.f_546[iVar0] = { func_147(iParam0) };
	}
	else
	{
		Global_1108365->f_34.f_353[iVar0] = 1;
		Global_1108365->f_34.f_353[iVar0]->f_1 = iParam0;
		Global_1108365->f_34.f_353[iVar0]->f_2 = { Param1 };
		Global_1108365->f_34.f_353[iVar0]->f_5 = -1;
		Global_1108365->f_34.f_353[iVar0]->f_4 = Global_1296859->f_21;
		*Global_1108365->f_34.f_546[iVar0] = { func_147(iParam0) };
		if (bParam4)
		{
			(*Global_1288736)[network_player_id_to_int()]->f_66 = 1;
		}
	}
	if (Global_1108365->f_34[iVar0]->f_6)
	{
		func_416(iVar0);
	}
}

bool func_275(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_276()
{
	return Global_1102219->f_3672;
}

void func_277(var uParam0, int iParam1)
{
	uParam0->f_211[iParam1]->f_14 = 255;
	uParam0->f_211[iParam1]->f_5 = -1f;
	uParam0->f_211[iParam1]->f_1 = -1f;
	uParam0->f_211[iParam1]->f_2 = -1f;
}

void func_278(var uParam0)
{
	uParam0->f_949 = 1;
}

void func_279(var uParam0)
{
	uParam0->f_948 = 1;
}

bool func_280(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_281(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_283(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_417())
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_101(&Global_0, 8);
	}
	func_101(&Global_0, 1);
	return 1;
}

void func_284(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = func_419(func_104(Param0));
	iVar1 = func_198(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_107() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_420(Param0, &Var2);
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
	_0xd5910ecf81a2278c(iVar0, iVar1, bParam2, &Var2);
}

int func_285(bool bParam0)
{
	if (!bParam0 && func_421(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_286(struct<2> Param0)
{
	return func_422(func_207(Param0));
}

int func_287(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_288(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_115())
	{
		return 636925055;
	}
	return -963477619;
}

int func_289(int iParam0, bool bParam1)
{
	iVar0 = floor(func_423(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
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
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_290(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_291(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_424(iParam0))
	{
		return true;
	}
	return !func_290(iParam0, 0);
}

bool func_292(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
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
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_425(iParam0))
	{
		return false;
	}
	if (func_424(iParam0))
	{
		return false;
	}
	if (func_399(iParam0))
	{
		return true;
	}
	return func_308(iParam0);
}

int func_293(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

void func_294(var uParam0)
{
	Global_1288655->f_8 = 32;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!_0xd6f6acf4392187fb(uParam0[iVar1]) || _0x149a2751ab66ac02(uParam0[iVar1]) < 1)
		{
			(*uParam0)[iVar1]->f_2 = -1;
			(*uParam0)[iVar1]->f_1 = -1;
			(*uParam0)[iVar1] = uVar0;
			Global_1288655->f_8 = iVar1;
			return;
		}
		iVar1++;
	}
}

bool func_295(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

void func_296(int iParam0)
{
	if (func_295(iParam0))
	{
		Global_1102219->f_3520 = (Global_1102219->f_3520 - (Global_1102219->f_3520 && iParam0));
	}
}

void func_297(var uParam0)
{
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

char* func_298()
{
	return "Match_End_Timer";
}

char* func_299()
{
	return "RDRO_Countdown_Sounds";
}

char* func_300()
{
	return "Round_End_Timer";
}

char* func_301()
{
	return "10S";
}

char* func_302()
{
	return "Out_Of_Bounds";
}

char* func_303()
{
	return "321_Countdown";
}

char* func_304()
{
	return "HUD_MP_FREE_MODE";
}

char* func_305()
{
	return "target_spawn";
}

char* func_306()
{
	return "MP005_OBHELT_sounds";
}

void func_307(int iParam0)
{
	if (!func_426(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

bool func_308(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_309(iParam0);
		return false;
	}
	if (func_399(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_427(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

void func_309(int iParam0)
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
	func_428(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

bool func_310(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

var func_311(int iParam0, int iParam1)
{
	return func_429(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_312(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 12, 22, &uParam1);
}

void func_313(int iParam0)
{
	Global_1210882->f_211 = iParam0;
}

bool func_314()
{
	return (func_430(0) && func_430(6));
}

void func_315()
{
	if (func_431(2))
	{
		func_432(0);
	}
	else
	{
		func_432(1);
	}
	func_433(1);
	_0x7146cf430965927c(15, true);
	_0x7146cf430965927c(16, true);
}

void func_316()
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_434(iVar1, 2);
		func_435(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_317(var uParam0, int iParam1)
{
	iVar0 = func_436(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_437())
	{
		func_438(iParam1);
		return;
	}
	_0x7ff72de061df55e2(iParam1, 0, to_float(iVar0));
	if (func_107() == 0)
	{
		iVar1 = round(_0x89bfdf6d53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	set_entity_max_health(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = get_entity_max_health(iParam1, true);
			func_439(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_439(iVar3, 0);
			}
			else
			{
				iVar3 = get_entity_max_health(iParam1, true);
				func_439(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_318(var uParam0, int iParam1)
{
	if (func_437())
	{
		return;
	}
	iVar0 = func_440(2);
	fVar1 = -1f;
	_0x7ff72de061df55e2(iParam1, 1, to_float(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = _get_ped_max_stamina(iParam1);
			func_441(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_441(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_441(fVar1, 0);
			}
			else
			{
				fVar1 = _get_ped_max_stamina(iParam1);
				func_441(fVar1, 0);
			}
			break;
	}
}

void func_319(var uParam0, int iParam1)
{
	if (func_437())
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = func_442(2);
	fVar2 = -1f;
	_0x7ff72de061df55e2(iParam1, 2, to_float(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_444(func_443());
			break;
		case 0:
			fVar2 = _0x029884fb65821b07(iVar0);
			func_444(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_444(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_444(fVar2);
			}
			else
			{
				fVar2 = _0x029884fb65821b07(iVar0);
				func_444(fVar2);
			}
			break;
	}
	func_194(0f);
}

void func_320(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_445(iVar1))
		{
			iVar2 = func_446(iVar1);
			fVar0 = func_447(uParam0, iVar2);
			func_448(iVar2, fVar0);
		}
		iVar1++;
	}
	func_449();
}

void func_321()
{
	if (Global_1956200->f_1431.f_108.f_1 != 0f)
	{
		func_450(0, Global_1956200->f_1431.f_108.f_1, 0, 0);
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_3 != 0f)
	{
		func_450(1, Global_1956200->f_1431.f_108.f_3, 0, 0);
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_2 != 0f)
	{
		func_450(2, Global_1956200->f_1431.f_108.f_2, 0, 0);
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_4 != 0f)
	{
		func_450(19, Global_1956200->f_1431.f_108.f_4, 0, 0);
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_6 != 0f)
	{
		func_450(18, Global_1956200->f_1431.f_108.f_6, 0, 0);
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_5 != 0f)
	{
		func_450(20, Global_1956200->f_1431.f_108.f_5, 0, 0);
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	func_451();
}

void func_322(int iParam0)
{
	Global_1956200->f_1431.f_3 = iParam0;
}

int func_323(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_106(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_324(int iParam0)
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

int func_325(int iParam0)
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

void func_326(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_327(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_452(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_323(Param0);
	Var0.f_3 = iParam3;
	func_453(&Var0, bParam2, iParam4);
	return 1;
}

void func_328(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_329(int iParam0)
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

bool func_330(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_454(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_331(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_455(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_456(iVar0);
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
			uParam2->f_5 = func_457(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_458(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_459(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_460(iVar0);
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

void func_332(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_333(var uParam0, var uParam1)
{
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar0 = int_to_playerindex(iVar4);
		if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar0) != uParam0->f_90 && _0x901e0dc25080c8b9(iVar0) != uParam0->f_91)
		{
		}
		else
		{
			vVar1 = { vVar1 + func_375(iVar0) };
			iVar5++;
		}
		iVar4++;
	}
	vVar1 = { vVar1 / FtoV(IntToFloat(iVar5)) };
	Var6 = uParam1->f_1174;
	Var6.f_2 = 0;
	if (!_datafile_get_data_node_index(&(Var6.f_1), &Var6))
	{
		return;
	}
	iVar11 = _datafile_get_num_children(Var6, Var6.f_1);
	fVar19 = 2.147484E+09f;
	iVar4 = 0;
	while (iVar4 < iVar11)
	{
		Var20 = { Var6 };
		Var20.f_2 = 1;
		Var20.f_3 = iVar4;
		if (!_datafile_get_data_node_index(&(Var20.f_1), &Var20))
		{
		}
		else
		{
			Var20.f_2 = 2;
			Var20.f_3 = 0;
			if (!_datafile_get_vector(&vVar12, &Var20))
			{
				Jump @282; //curOff = 241
			}
			fVar18 = func_461(vVar12, Global_35);
			if (fVar18 < fVar19)
			{
				fVar19 = fVar18;
				vVar15 = { vVar12 };
			}
		}
		iVar4++;
	}
	uParam0->f_109 = { vVar15 };
}

void func_334(var uParam0, bool bParam1)
{
	if (bParam1 || !func_223(uParam0))
	{
		func_462(uParam0);
	}
}

int func_335(var uParam0)
{
	if (!func_223(uParam0))
	{
		return 0;
	}
	if (func_463(uParam0))
	{
		return uParam0->f_2;
	}
	return func_464(uParam0->f_1);
}

void func_336(var uParam0, var uParam1)
{
	iVar0 = 255;
	iVar1 = 255;
	iVar5 = get_network_time_accurate();
	iVar3 = 0;
	while (iVar3 <= (network_get_max_num_participants() - 1))
	{
		iVar2 = int_to_participantindex(iVar3);
		if (!network_is_participant_active(iVar2))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar2);
			if (!_network_is_player_index_valid(iVar1))
			{
			}
			else if (!network_is_player_connected(iVar1))
			{
			}
			else if ((*uParam1)[iVar3]->f_3 == 0 || (*uParam1)[iVar3]->f_3 < iVar4)
			{
			}
			else if ((*uParam1)[iVar3]->f_3 > iVar4)
			{
				iVar4 = (*uParam1)[iVar3]->f_3;
				iVar0 = iVar1;
				iVar5 = (*uParam1)[iVar3]->f_5;
				uParam0->f_108 = 0;
			}
			else if ((*uParam1)[iVar3]->f_3 == iVar4 && is_time_less_than((*uParam1)[iVar3]->f_5, iVar5))
			{
				iVar4 = (*uParam1)[iVar3]->f_3;
				iVar0 = iVar1;
				iVar5 = (*uParam1)[iVar3]->f_5;
				uParam0->f_108 = 1;
			}
		}
		iVar3++;
	}
	if (iVar4 == 0)
	{
		uParam0->f_107 = 1;
		return;
	}
	uParam0->f_113 = iVar0;
	uParam0->f_106 = iVar4;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 120;
		case 1:
		case 2:
		case 4:
		case 5:
			return 300;
		case 3:
			return 180;
		default:
			break;
	}
	return -1;
}

bool func_338(var uParam0, var uParam1)
{
	*uParam0 = uParam1->f_1042;
	uParam0->f_2 = -1624776506;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_339(var uParam0, var uParam1)
{
	*uParam0 = uParam1->f_1042;
	uParam0->f_2 = -1910604690;
	uParam0->f_3 = uParam1->f_1047;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_340(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 4:
		case 5:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_342()
{
	return Global_1301323->f_150;
}

bool func_343(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

bool func_344(var uParam0)
{
	return func_268(*uParam0, 2);
}

float func_345()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_346()
{
	return Global_1301323->f_288;
}

bool func_347()
{
	iVar0 = func_465();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_348(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_349(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_350(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_351(int iParam0, var uParam1)
{
	if ((*uParam1)[iParam0]->f_24 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_466(iVar0, &vVar1))
		{
		}
		else if (vVar1.y == player_id())
		{
			iVar4 = vVar1.z;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_466(iVar0, &vVar1))
		{
		}
		else if (!_network_is_player_index_valid(vVar1.y))
		{
		}
		else
		{
			iVar6 = network_get_participant_index(vVar1.y);
			if (!func_366(iVar6))
			{
			}
			else
			{
				iVar5 = iVar6;
				if (vVar1.z == iVar4)
				{
					(*uParam1)[iParam0]->f_7[iVar5] = vVar1.y;
				}
			}
		}
		iVar0++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= 13)
	{
		if (&(*uParam1)[iParam0]->f_7[iVar8] != 255)
		{
			iVar7++;
		}
		iVar8++;
	}
	if (iVar7 == network_get_num_participants())
	{
		func_129("GF_FEUD_INFIGHTING_RANDOM_SPLIT", Global_1901947->f_308.f_168, 0, 0, 0, 1);
		iVar7 = 0;
		iVar8 = 0;
		while (iVar8 <= (network_get_max_num_participants() - 1))
		{
			if (!network_is_participant_active(int_to_participantindex(iVar8)))
			{
			}
			else if (int_to_participantindex(iVar8) == participant_id())
			{
				iVar7++;
			}
			else if (&(*uParam1)[iParam0]->f_7[iVar8] != 255)
			{
				iVar7++;
				if (iVar7 >= (network_get_num_participants() / 2))
				{
					(*uParam1)[iParam0]->f_7[iVar8] = 255;
					iVar7 = (iVar7 - 1);
				}
			}
			iVar8++;
		}
	}
}

var func_352(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_467(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

bool func_353(var uParam0, int iParam1)
{
	return func_10(uParam0->f_2, iParam1);
}

void func_354(var uParam0, var uParam1)
{
	iVar1 = player_id();
	uParam0->f_6 = 0;
	uParam0->f_24 = 1;
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		iVar3 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar3))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar3);
			if (iVar2 == iVar1)
			{
			}
			else if (!_network_is_player_index_valid(iVar2))
			{
			}
			else if (!network_is_player_connected(iVar2))
			{
			}
			else
			{
				func_355(iVar2);
				_0x31010318ba9897ac(&(uParam1->f_1075), iVar2);
			}
		}
		iVar0++;
	}
}

void func_355(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_308(iParam0))
	{
		func_427(iParam0, 5, 1, 1, 0, 0);
	}
}

bool func_356(int iParam0)
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

int func_357(int iParam0)
{
	return iParam0;
}

void func_358(int iParam0)
{
	if (!func_468(iParam0))
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

void func_359(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_114)
	{
		return;
	}
	uParam2->f_1007[0] = 0f;
	uParam2->f_1007[1] = 0f;
	iVar0 = 0;
	while (iVar0 <= (network_get_max_num_participants() - 1))
	{
		if ((*uParam1)[iVar0]->f_6 == -1)
		{
		}
		else
		{
			uParam2->f_1007[(*uParam1)[iVar0]->f_6] = (&uParam2->f_1007[(*uParam1)[iVar0]->f_6] + IntToFloat((*uParam1)[iVar0]->f_3));
		}
		iVar0++;
	}
}

char* func_360(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NET_IWD_TITLE_F";
		case 4:
			return "NET_IWD_TITLE_PF";
		case 5:
			return "NET_IWD_TITLE_PLF";
		case 3:
			return "NET_NET_IWD_TITLE_INF_LWR";
		default:
			break;
	}
	return "NET_IWD_FEUDS_PROPER";
}

void func_361(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	if ((func_469(uParam0, &bVar0) && func_470(uParam0)) && func_471(uParam0, -1700692449, &bVar0))
	{
		func_472(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_73(uParam0, 1);
	}
}

int func_362(bool bParam0)
{
	if (bParam0)
	{
		return 109029619;
	}
	return 109029619;
}

int func_363(bool bParam0)
{
	if (bParam0)
	{
		return -1886482671;
	}
	return -1886482671;
}

void func_364(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (((func_469(uParam0, &bVar0) && func_470(uParam0)) && func_473(uParam0, uParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_471(uParam0, 1133052843, &bVar0))
	{
		func_472(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_474(uParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_72(uParam1);
		func_73(uParam0, 1);
	}
}

void func_365(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam3 |= 8;
	if (func_469(uParam0, &bVar0) && func_473(uParam0, uParam1, iParam3, 551037070, 859817522, 1105014447, 1105014447, iParam4))
	{
		func_474(uParam1, uParam2, iParam3 | 8, 551037070, 859817522, 109029619, 109029619, iParam4);
	}
	if (bVar0)
	{
		func_72(uParam1);
		func_73(uParam0, 1);
	}
}

bool func_366(int iParam0)
{
	return func_475(iParam0);
}

void func_367(int iParam0, int iParam1)
{
	if (!func_187(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538[iParam0], iParam1);
		Global_1071686->f_22538[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_307(iParam0);
	}
}

bool func_368(int iParam0)
{
	return func_137(1, iParam0);
}

bool func_369()
{
	return Global_1896738->f_382;
}

void func_370(var uParam0)
{
	func_244(&(uParam0->f_1151), 1, 1);
	if (func_397(255))
	{
		func_57(0);
	}
}

int func_371(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_476(iVar0, 2))
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
				func_477(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_372(int iParam0, bool bParam1)
{
	if (bParam1 && !func_356(iParam0))
	{
		return false;
	}
	return !func_476(iParam0, 4);
}

void func_373(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_356(iParam0))
	{
		return;
	}
	iVar0 = func_357(iParam0);
	if (bParam1)
	{
		func_478(iParam0, 4);
		if (bParam3)
		{
			func_479(iVar0, 1);
		}
		func_480(iVar0, 1);
	}
	else
	{
		func_481(iParam0, 4);
		func_480(iVar0, 0);
	}
}

bool func_374(int iParam0, bool bParam1)
{
	if (bParam1 && !func_356(iParam0))
	{
		return false;
	}
	iVar0 = func_357(iParam0);
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

Vector3 func_375(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_376()
{
	if (get_player_wanted_level(player_id()) > 0)
	{
		clear_player_wanted_level(player_id());
	}
}

void func_377(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6)
{
	uParam5->f_5 = 2;
	uParam5->f_1 = { vParam0 };
	uParam5->f_17.f_6 = { vParam0 };
	uParam5->f_17 = { fParam3, fParam3, fParam3 };
	if (fParam3 > 30f)
	{
		uParam5->f_17 = { fParam3, fParam3, 30f };
	}
	uParam5->f_17.f_9 = -432403087;
	uParam5->f_6.f_6 = { vParam0 };
	uParam5->f_6 = { fParam4, fParam4, 0f };
	uParam5->f_6.f_9 = -432403087;
	uParam5->f_16 = 1;
	uParam6->f_5 = 2;
	vVar0 = { Vector(0f, get_random_float_in_range((-fParam3 / 2f), (fParam3 / 2f)), get_random_float_in_range((-fParam3 / 2f), (fParam3 / 2f))) + vParam0 };
	vVar0.f_2 = _get_heightmap_bottom_z_for_position(vVar0.x, vVar0.y);
	func_482(&vVar0, 9999f);
	if (!get_safe_coord_for_ped(vVar0, false, &(uParam6->f_6), 0))
	{
		uParam6->f_6 = { vParam0 };
	}
	uParam6->f_1 = { vParam0 };
}

void func_378(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_483(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_484(uParam0->f_17.f_6))
		{
			return;
		}
		if (vmag(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947->f_50.f_1;
		}
	}
	if (func_484(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (vmag(uParam0->f_6) < 1f)
		{
			return;
		}
		if (vmag(uParam0->f_17) < vmag(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_152(0);
	func_152(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_485(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_486(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_487(Global_1102219->f_3849, 36);
	func_488(Global_1102219->f_3888, 36);
}

int func_379(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_380(int iParam0, bool bParam1)
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

void func_381(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_382(int iParam0)
{
	if (!func_10(&Global_1903131, iParam0))
	{
		func_55(Global_1903131, iParam0);
	}
}

void func_383(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x083d497d57b7400f(Global_1296859->f_8))
	{
		return;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		if (bParam2)
		{
			disable_ped_pain_audio(Global_1296859->f_8, true);
		}
		if (bParam3)
		{
			set_ped_config_flag(Global_1296859->f_8, 243, true);
		}
		Var0 = player_ped_id();
		Var0.f_1 = uParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_489(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), uParam0, iParam1);
	}
}

void func_384()
{
	if (!func_295(64))
	{
		func_490(64);
	}
}

bool func_385(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (!func_491() || is_pause_menu_active())
	{
		*bParam2 = 1;
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = _databinding_add_data_container_from_path("", "MPCountdown");
		uParam0->f_2 = _databinding_add_data_string(uParam0->f_1, "Timer", _create_var_string(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = _databinding_add_data_bool(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_484(vParam4)) && fParam7 > 0f)
		{
			animpostfx_play(func_172());
			_hide_hud_component(-2124237476);
			fParam7 = func_492(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !_does_volume_exist(iParam8))
			{
				iVar0 = _create_volume_sphere(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				_0x735762e8d7573e42(1, iVar0, 5f);
				_delete_volume(iVar0);
			}
			else
			{
				_0x735762e8d7573e42(1, iParam8, 5f);
			}
		}
	}
	return true;
}

int func_386(var uParam0, char* sParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (func_385(uParam0, sParam1, &bVar0, bParam6, vParam2, iParam5, iParam10))
	{
		func_493(uParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_74(uParam0, 1, 1);
	}
	return iVar1;
}

void func_387(var uParam0, int iParam1)
{
	func_494(uParam0, iParam1);
}

void func_388(int iParam0, int iParam1)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_6 != iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_6 = iParam1;
		func_307(iParam0);
	}
}

bool func_389(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_390(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != iParam1)
	{
		Global_1071686->f_21689[iParam0]->f_1 = iParam1;
		func_307(iParam0);
	}
}

void func_391(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_5 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
			}
		}
		Global_1071686->f_21689[iParam0]->f_5 = iParam1;
		func_307(iParam0);
	}
}

void func_392(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_4 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_4 = iParam1;
		func_307(iParam0);
	}
}

void func_393(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 <= 0f)
	{
		return;
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	else if (fParam0 > fParam1)
	{
		return;
	}
	if ((Global_1071686->f_21952.f_578 != fParam0 || Global_1071686->f_21952.f_579 != fParam1) || Global_1071686->f_21952.f_580 != fParam2)
	{
		Global_1071686->f_21952.f_578 = fParam0;
		Global_1071686->f_21952.f_579 = fParam1;
		Global_1071686->f_21952.f_580 = fParam2;
	}
}

bool func_394(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

void func_395(int iParam0)
{
	if (!_0x72b2e00c9bac6789(&(Global_1071686->f_22961.f_5), iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_22961.f_5), iParam0);
		func_307(iParam0);
	}
}

bool func_396(int iParam0)
{
	return func_137(48, iParam0);
}

bool func_397(int iParam0)
{
	return func_137(49, iParam0);
}

int func_398(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_396(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_485(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_486(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_487(Global_1102219->f_3849, 36);
		func_488(Global_1102219->f_3888, 36);
		func_153(48);
		return 1;
	}
	return 0;
}

bool func_399(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

void func_400(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!get_event_data(1, iParam1, &Var0, 32))
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
	iVar32 = get_ped_index_from_entity_index(Var0);
	iVar33 = get_ped_index_from_entity_index(Var0.f_1);
	if (!is_ped_a_player(iVar32))
	{
		return;
	}
	if (get_ped_type(iVar33) == 28 && does_entity_exist(_get_rider_of_mount(iVar33, false)))
	{
		iVar33 = _get_rider_of_mount(iVar33, false);
	}
	if (get_entity_type(Var0.f_1) == 2 && does_entity_exist(_0x2963b5c1637e8a27(get_vehicle_index_from_entity_index(iVar33))))
	{
		iVar33 = _0x2963b5c1637e8a27(get_vehicle_index_from_entity_index(iVar33));
	}
	iVar34 = network_get_player_index_from_ped(iVar32);
	iVar35 = network_get_participant_index(iVar34);
	iVar36 = iVar35;
	if (!func_366(iVar35) || !network_is_participant_active(iVar35))
	{
		return;
	}
	if (iVar34 == player_id() && Var0.f_3)
	{
		(*uParam2)[iParam0]->f_4++;
		if (iVar37 == iVar34)
		{
		}
		return;
	}
	if (is_ped_a_player(iVar33))
	{
		iVar37 = network_get_player_index_from_ped(iVar33);
		if (player_id() != iVar37)
		{
			uParam3->f_1010[iVar36] = 0;
			return;
		}
		else
		{
			uParam3->f_1010[iVar36] = 1;
			uParam3->f_1010[iVar36]->f_1 = get_network_time_accurate();
		}
	}
	if (!Var0.f_3)
	{
		return;
	}
	if (!&uParam3->f_1010[iVar36])
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar34))
	{
		return;
	}
	if (!network_is_player_connected(iVar34))
	{
		return;
	}
	if (!network_is_player_a_participant(iVar34))
	{
		return;
	}
	iVar38 = _0x901e0dc25080c8b9(iVar34);
	bVar39 = false;
	switch (uParam3->f_1047)
	{
		case 5:
			if (iVar38 == uParam3->f_1057 && _0x424b17a7dc5c90bc(iVar34))
			{
				bVar39 = true;
			}
			break;
		case 4:
			if (iVar38 == uParam3->f_1057)
			{
				bVar39 = true;
			}
			break;
		case 1:
			if (iVar38 == uParam3->f_1057)
			{
				bVar39 = true;
			}
			break;
		case 3:
			if (func_292(iVar34, 0) && network_is_player_a_participant(iVar34))
			{
				bVar39 = true;
			}
			break;
		default:
			break;
	}
	if (bVar39)
	{
		(*uParam2)[iParam0]->f_3++;
		(*uParam2)[iParam0]->f_5 = get_network_time_accurate();
	}
}

void func_401(var uParam0)
{
	iVar0 = int_to_participantindex(uParam0->f_1039);
	if (!network_is_participant_active(iVar0))
	{
		uParam0->f_1010[uParam0->f_1039] = 0;
		return;
	}
	iVar1 = network_get_player_index(iVar0);
	if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
	{
		uParam0->f_1010[uParam0->f_1039] = 0;
		return;
	}
	iVar2 = get_player_ped(iVar1);
	if (func_380(iVar2, 0) || !does_entity_exist(iVar2))
	{
		uParam0->f_1010[uParam0->f_1039] = 0;
		return;
	}
	if (uParam0->f_1010[uParam0->f_1039] && ((_0xb655db7582aec805(iVar2) || is_ped_falling(iVar2)) || _0x3e592d0486dec0f6(iVar2)))
	{
		uParam0->f_1010[uParam0->f_1039]->f_1 = get_network_time_accurate();
	}
	else if (uParam0->f_1010[uParam0->f_1039] && get_time_difference(uParam0->f_1010[uParam0->f_1039]->f_1, get_network_time_accurate()) > 1500)
	{
		uParam0->f_1010[uParam0->f_1039] = 0;
	}
}

var func_402(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_495(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

struct<2> func_404(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_405(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (iParam0 == player_id())
	{
		_0xc08aff658b2e51da(&uVar0);
		return uVar0;
	}
	Var1 = { func_147(iParam0) };
	iVar18 = 0;
	while (iVar18 <= (_0xc084ff658b2e61da(&Var1) - 1))
	{
		if ((_0xc084ff658b2e81da(&Var1, iVar18, &Var8) && Var8 != 0) && Var8.f_9 == 1)
		{
			return Var8;
		}
		iVar18++;
	}
	return 0;
}

int func_406(int iParam0, var uParam1)
{
	if (!func_496(*uParam1))
	{
		return 0;
	}
	Var0.f_27 = 10;
	if (!_0xc087ff658b2e51da(iParam0, &Var0))
	{
		return 0;
	}
	if (func_497())
	{
		func_498();
		return 1;
	}
	if (!func_499())
	{
		return 0;
	}
	iVar118 = 0;
	while (iVar118 <= (Var0.f_26 - 1))
	{
		if (network_are_handles_the_same(Var0.f_27[iVar118], uParam1))
		{
			Var0.f_27[iVar118]->f_8 = func_500(6);
		}
		else
		{
			Var0.f_27[iVar118]->f_8 = func_500(2);
		}
		iVar118++;
	}
	iVar119 = 0;
	if (!_0xc09cff658b2e51da(iParam0, &Var0, &iVar119) && iVar119 == 1)
	{
		func_501();
		return 0;
	}
	else
	{
		func_498();
	}
	func_502(iParam0);
	return 1;
}

void func_407(var uParam0)
{
	if (!func_123(uParam0))
	{
	}
	if (!func_344(uParam0))
	{
		uParam0->f_2 = (func_345() - uParam0->f_1);
		func_503(uParam0, 2);
	}
}

void func_408(var uParam0)
{
	if (!func_123(uParam0))
	{
	}
	if (func_344(uParam0))
	{
		uParam0->f_1 = (func_345() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_504(uParam0, 2);
	}
}

int func_409(var uParam0)
{
	if (!func_123(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_344(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_505() - round((uParam0->f_1 * 1000f)));
}

void func_410(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_506(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_507(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

bool func_411(int iParam0)
{
	return iParam0 != 0;
}

void func_412(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_345() - fParam1);
	func_503(uParam0, 1);
	func_504(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_413(struct<2> Param0, bool bParam2)
{
	iVar0 = func_93(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_414(struct<2> Param0)
{
	return func_93(Param0) == 7;
}

void func_415(int iParam0)
{
	if (!_network_is_player_index_valid(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		return;
	}
	if (!&Global_1108365->f_34.f_353[iParam0])
	{
		return;
	}
	if (!network_is_player_active(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		func_508(iParam0);
		return;
	}
	if (Global_1108365->f_34.f_353[iParam0]->f_5 != -1)
	{
		if ((Global_1296859->f_21 - Global_1108365->f_34.f_353[iParam0]->f_4) > Global_1108365->f_34.f_353[iParam0]->f_5)
		{
			func_508(iParam0);
		}
		return;
	}
	if (func_16(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		return;
	}
	if (!func_15(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_508(iParam0);
		return;
	}
	if (!func_16(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_508(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != Global_1108365->f_34.f_353[iParam0]->f_1)
	{
		func_508(iParam0);
		return;
	}
}

void func_416(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		func_415(iParam0);
	}
	if (!Global_1108365->f_34[iParam0]->f_6)
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_509(iParam0);
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		func_509(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != iVar0)
	{
		func_509(iParam0);
		return;
	}
	if (_0x81fb74c83c2ed69f(iVar0))
	{
		func_510(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		func_510(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[iParam0]->f_66)
	{
		func_510(iVar0, 0);
		return;
	}
	if (func_511(iParam0))
	{
		func_510(iVar0, 0);
		return;
	}
	if (get_time_difference(Global_1108365->f_34[iParam0]->f_7, get_network_time_accurate()) >= 600000)
	{
		func_510(iVar0, 0);
		return;
	}
}

bool func_417()
{
	return !Global_1572887->f_9;
}

bool func_418()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_419(int iParam0)
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

void func_420(struct<2> Param0, var uParam2)
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
	switch (func_104(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_512(func_19(Param0));
			iVar5 = func_513(iVar4);
			if (!func_514(iVar5, 0))
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

bool func_421(int iParam0)
{
	iVar0 = func_515(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_516(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_517(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_422(int iParam0)
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
		func_326(Global_1900736->f_1[0]);
		return 1;
	}
	func_326(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_209(iParam0, Global_1900736->f_66);
	return 1;
}

float func_423(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_424(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_426(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_518(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_309(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_427(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_519(&Var6, uVar4);
		}
	}
}

void func_428(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

var func_429(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_520() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_521());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_521());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_521());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_522(get_player_team(iVar5)));
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
			if (func_523(iVar2))
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
				if (iVar9 & 8192 != 0 && func_483(iVar2) != 1)
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
					if (!func_524(iVar10))
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

bool func_430(int iParam0)
{
	return func_275(&(Global_1956200->f_1565), iParam0, 1);
}

bool func_431(int iParam0)
{
	return func_275(&(Global_1956200->f_1753), iParam0, 1);
}

void func_432(bool bParam0)
{
	iVar0 = player_id();
	if (bParam0)
	{
		if (func_431(2))
		{
			func_525(2);
		}
		if (_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_431(2))
		{
			func_526(2);
		}
		if (!_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 1);
		}
	}
	_0xa63fcad3a6fec6d2(iVar0, bParam0);
	_0x7146cf430965927c(27, bParam0);
}

void func_433(bool bParam0)
{
	if (bParam0)
	{
		if (func_431(1))
		{
			func_525(1);
		}
	}
	else if (!func_431(1))
	{
		func_526(1);
	}
}

float func_434(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_527(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_435(int iParam0, float fParam1, int iParam2)
{
	if (!func_528(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_527(2);
	}
	func_529(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

int func_436(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_527(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

bool func_437()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_438(int iParam0)
{
	iVar0 = 100;
	switch (func_530())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	_0x7ff72de061df55e2(iParam0, 0, 1f);
	set_entity_max_health(iParam0, iVar0);
}

void func_439(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_set_entity_health(iParam1, iParam0, 0);
}

int func_440(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_527(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_441(float fParam0, int iParam1)
{
	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - _get_ped_stamina(iParam1));
	_charge_ped_stamina(iParam1, fVar0);
}

int func_442(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_527(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

float func_443()
{
	return Global_1956200->f_1561.f_3;
}

void func_444(float fParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - _0xdf66a37936d5f3d9(iVar0));
	func_531(fVar2, 0, 1);
}

bool func_445(int iParam0)
{
	return func_532(iParam0);
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_447(var uParam0, int iParam1)
{
	iVar1 = func_533(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_534(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_534(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return to_float(100);
		case 3:
			return func_535(uParam0, iParam1);
	}
	return -1f;
}

void func_448(int iParam0, float fParam1)
{
	func_536(iParam0, fParam1);
	func_537(iParam0, fParam1, 0, 0, 1, 2);
}

void func_449()
{
	func_538();
	func_539();
	func_540();
	func_541();
}

int func_450(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_542(iParam0, fParam1, bParam2, bParam3);
}

void func_451()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

int func_452(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_112((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_453(var uParam0, bool bParam1, int iParam2)
{
	func_543(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_544(func_452(uParam0->f_1));
	}
	else
	{
		func_545();
	}
}

int func_454(int iParam0)
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

int func_455(int iParam0, var uParam1)
{
	if (func_546(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_456(int iParam0)
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

int func_457(int iParam0)
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

int func_458(int iParam0)
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

int func_459(int iParam0)
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

int func_460(int iParam0)
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

float func_461(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return (absf((Param3 - Param0)) + absf((Param3.f_1 - Param0.f_1)));
}

void func_462(var uParam0)
{
	func_547(uParam0, 0);
}

bool func_463(var uParam0)
{
	return func_268(*uParam0, 2);
}

int func_464(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_465()
{
	return Global_1301323->f_150.f_4;
}

bool func_466(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0] == 0)
	{
		return false;
	}
	_copy_memory(uParam1, Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0], 3);
	return true;
}

var func_467(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_468(int iParam0)
{
	return func_476(iParam0, 2);
}

int func_469(var uParam0, bool bParam1)
{
	if (!func_491())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_548())
			{
				uParam0->f_3 = _uiflowblock_request(-119209833);
				func_171(1);
				func_549(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_550())
			{
				return 0;
			}
			func_549(uParam0, 2);
			break;
	}
	Global_1940144->f_110 = 1;
	return 1;
}

int func_470(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
		func_551(uParam0->f_5, &(uParam0->f_6), 0);
		func_551(uParam0->f_5, &(uParam0->f_7), 1);
		func_551(uParam0->f_5, &(uParam0->f_8), 37);
		func_552(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_471(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (_uiflowblock_is_loaded(uParam0->f_3))
			{
				func_553(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				_uiflowblock_enter(uParam0->f_3, *uParam0);
				_uistatemachine_create(1546991729, uParam0->f_3);
			}
			func_553(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_553(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_553(uParam0, 4);
			}
			else
			{
				func_553(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				*bParam2 = 1;
				func_553(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_472(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	sVar0 = func_554(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_555(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_552(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_556(uParam0, iParam1, sParam4);
	func_557(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

int func_473(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_950 = _should_use_metric_weight();
		if (!func_10(iParam2, 8))
		{
			bVar0 = func_10(iParam2, 128);
			func_558(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_10(iParam2, 4))
		{
			func_559(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_474(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = func_10(iParam2, 8);
	bVar1 = func_10(iParam2, 128);
	bVar2 = func_10(iParam2, 1024);
	bVar3 = func_10(iParam2, 4096);
	bVar4 = func_10(iParam2, 8192);
	bVar5 = func_10(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = player_id();
	if (bVar3)
	{
		if (uParam0->f_950 != _should_use_metric_weight())
		{
			func_279(uParam0);
			func_278(uParam0);
			uParam0->f_950 = _should_use_metric_weight();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_950 != _should_use_metric_measurements_2())
		{
			func_279(uParam0);
			func_278(uParam0);
			uParam0->f_950 = _should_use_metric_measurements_2();
		}
	}
	if (uParam0->f_949 || uParam0->f_948)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (uParam0->f_211[iVar11]->f_14 != 255 && network_is_player_active(uParam0->f_211[iVar11]->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_211[iVar11];
					if (iVar9 == get_player_team(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_211[iVar11]->f_14 == player_id())
				{
					fVar7 = uParam0->f_211[iVar11]->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = uParam0->f_211[iVar11]->f_5;
					bVar10 = true;
				}
				StringCopy(&(uParam0->f_211[iVar11]->f_14.f_1), get_player_name(uParam0->f_211[iVar11]->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_560(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_949);
		}
		if (uParam0->f_948)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_211[iVar24]->f_14 == player_id())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_561(&(uParam0->f_11), &(uParam0->f_211), get_player_team(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_948 = 0;
		}
	}
	if (bVar5)
	{
		set_bit(&(uParam0->f_11.f_158), 18);
	}
	if (!func_10(iParam2, 4))
	{
		func_562(&(uParam0->f_11), &(uParam0->f_211), &iVar22, uParam0->f_949, &iVar12, bVar6, 0, 0);
		uParam0->f_949 = 0;
	}
}

int func_475(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

bool func_476(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_477(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_479(iParam0, 1);
	func_480(iParam0, 1);
	func_481(iParam0, 128);
}

void func_478(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_479(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_476(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_480(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_481(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_482(var uParam0, float fParam1)
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

int func_483(int iParam0)
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

bool func_484(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_485(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_486(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_487(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_488(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_489(var uParam0, var uParam1)
{
	if (func_563(uParam0, uParam1))
	{
		uParam1->f_63 = func_564(uParam1);
	}
}

void func_490(int iParam0)
{
	if (!func_295(iParam0))
	{
		Global_1102219->f_3520 = (Global_1102219->f_3520 || iParam0);
	}
}

bool func_491()
{
	return true;
}

float func_492(float fParam0, float fParam1, float fParam2)
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

void func_493(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "GEIRON_RACE_GO"));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!_0x84848e1c0fc67dbb(uParam0->f_4))
					{
						_0x3210bcb36af7621b(uParam0->f_4);
					}
					release_sound_id(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_565(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = get_sound_id();
				_0xce5d0ffe83939af1(uParam0->f_4, func_302(), func_299(), 1);
				_0x503703ec1781b7d6(uParam0->f_4, "Time", to_float(iParam1));
			}
		}
	}
}

void func_494(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_495(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_566(iParam2, -372840566);
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
	func_567(uParam1, iParam0, Var3);
	return 1;
}

bool func_496(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

bool func_497()
{
	if (!Global_1194053->f_437.f_2)
	{
		return false;
	}
	if (Global_1194053->f_437.f_1 >= 3)
	{
		return true;
	}
	return false;
}

void func_498()
{
	Global_1194053->f_437 = { vVar0 };
}

bool func_499()
{
	if (!Global_1194053->f_437.f_2)
	{
		return true;
	}
	if ((get_game_timer() - Global_1194053->f_437) < 1000)
	{
		return false;
	}
	return true;
}

int func_500(int iParam0)
{
	iVar0 = 0;
	iVar0 = iParam0;
	return iVar0;
}

void func_501()
{
	if (!Global_1194053->f_437.f_2)
	{
		Global_1194053->f_437.f_2 = 1;
	}
	Global_1194053->f_437 = get_game_timer();
	Global_1194053->f_437.f_1++;
}

void func_502(int iParam0)
{
	Var0.f_27 = 10;
	if (_0xc087ff658b2e51da(iParam0, &Var0) && !network_are_handles_the_same(&(Var0.f_19), &(Global_1296859->f_1)))
	{
		Var118.f_4 = 10;
		Var118.f_7 = iParam0;
		Var118.f_5 = Global_1296859->f_15;
		Var118.f_8 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
		func_568(&Var118);
		return;
	}
	Var129.f_4 = 48;
	_0x86a68e84e5884951(&uVar136);
	iVar143 = 0;
	while (iVar143 <= 4)
	{
		if (&Global_17411.f_55.f_14.f_6[iVar143] == iParam0)
		{
			_0x28eeace9b43d9597(&uVar136, &Var129, &(Global_17411.f_55.f_14.f_6[iVar143]->f_1));
		}
		else
		{
			iVar143++;
		}
	}
}

void func_503(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_504(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_505()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_506(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_569(vParam0)];
	iVar1 = func_570(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_571(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_507(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_483(255) == 4)
	{
		return;
	}
	if (func_484(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_572(0, 0, 0, 1);
	}
	func_152(0);
	func_152(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_485(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = fParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_486(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_487(Global_1102219->f_3849, 36);
	func_488(Global_1102219->f_3888, 36);
}

void func_508(int iParam0)
{
	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*Global_1108365->f_34.f_353[iParam0] = { Var0 };
	(*Global_1288736)[network_player_id_to_int()]->f_66 = 0;
}

void func_509(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	Global_1108365->f_34[iParam0]->f_6 = 0;
	Var0 = 4;
	*Global_1108365->f_34[iParam0] = { Var0 };
	func_181(iParam0);
	Var11 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iParam0] = { Var11 };
	if ((!func_573() || !func_574()) || Global_1572887->f_6)
	{
		func_133(_create_var_string(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_575(&(Global_1108365->f_34[iParam0]->f_8), 256))
	{
		if (func_576(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_577(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_577(&(Global_1108365->f_34.f_773), 32);
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
	}
}

void func_510(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_578(iParam0);
	func_579(iParam0);
	func_580(iParam0);
	func_581(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_181(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_575(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_576(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_577(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_577(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_133(_create_var_string(10, "PARLEY_TICKER_END", func_52(get_player_name(iParam0), func_158(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_582(&Var15, &uVar14);
}

bool func_511(int iParam0)
{
	if ((*Global_1288736)[iParam0]->f_66)
	{
		return (*Global_1288736)[iParam0]->f_66;
	}
	return &(Global_1108365->f_34.f_353[iParam0]);
}

int func_512(int iParam0)
{
	iVar0 = -1;
	if (func_583(&Var1, iParam0))
	{
		iVar0 = ((func_584() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_513(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_514(int iParam0, int iParam1)
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

int func_515(int iParam0, int iParam1)
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

bool func_516(int iParam0)
{
	iVar0 = func_585(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_518(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_519(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_586(*uParam0);
}

int func_520()
{
	return Global_1051252->f_12;
}

char* func_521()
{
	return "unnamed";
}

int func_522(int iParam0)
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

bool func_523(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_137(36, iParam0);
}

bool func_524(int iParam0)
{
	if (func_425(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_587(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_525(int iParam0)
{
	if (func_281(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	if (func_280(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	return func_588(func_430(iParam0));
}

bool func_528(int iParam0)
{
	if (func_532(iParam0))
	{
		return true;
	}
	else if (func_589(iParam0))
	{
		return true;
	}
	return false;
}

void func_529(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_527(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_530()
{
	return Global_1952637->f_1;
}

void func_531(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_590(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

bool func_532(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

int func_533(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_534(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_527(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

float func_535(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_536(int iParam0, var uParam1)
{
	Global_17411.f_55.f_2439.f_24[iParam0] = uParam1;
}

int func_537(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_527(2);
	}
	iVar0 = player_ped_id();
	if (func_591(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_592(iParam0, 7000, iParam5);
		}
		func_593(iVar0, iParam0, fParam1);
		func_594(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_538()
{
	if (!Global_1956200->f_1431.f_85)
	{
		return;
	}
	Global_1956200->f_1431.f_85 = 0;
}

void func_539()
{
	if (!Global_1956200->f_1431.f_92)
	{
		return;
	}
	Global_1956200->f_1431.f_92 = 0;
}

void func_540()
{
	if (!Global_1956200->f_1431.f_89)
	{
		return;
	}
	Global_1956200->f_1431.f_89 = 0;
}

void func_541()
{
	sVar0 = func_595();
	sVar1 = func_596();
	bVar2 = (((Global_1956200->f_1431.f_89 && Global_1956200->f_1431.f_92) || (Global_1956200->f_1431.f_89 && Global_1956200->f_1431.f_85)) || (Global_1956200->f_1431.f_85 && Global_1956200->f_1431.f_92));
	bVar3 = (Global_1956200->f_1431.f_89 || Global_1956200->f_1431.f_85);
	if (Global_1956200->f_1431.f_92 && !func_597())
	{
		if (!Global_1956200->f_1431.f_93)
		{
			animpostfx_play(sVar0);
			Global_1956200->f_1431.f_93 = 1;
		}
	}
	else if (Global_1956200->f_1431.f_93)
	{
		_0xc5cb91d65852ed7e(sVar0);
		Global_1956200->f_1431.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((get_frame_time() * 1000f) / 2000f);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar5);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar6);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar6);
		}
		else if (Global_1956200->f_1431.f_89)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar6);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar5);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar6);
		}
		else if (Global_1956200->f_1431.f_85)
		{
			Global_1956200->f_1431.f_95 = (Global_1956200->f_1431.f_95 + fVar6);
			Global_1956200->f_1431.f_91 = (Global_1956200->f_1431.f_91 + fVar6);
			Global_1956200->f_1431.f_87 = (Global_1956200->f_1431.f_87 + fVar5);
		}
		Global_1956200->f_1431.f_95 = func_492(Global_1956200->f_1431.f_95, 0f, 1f);
		Global_1956200->f_1431.f_87 = func_492(Global_1956200->f_1431.f_87, 0f, 1f);
		Global_1956200->f_1431.f_91 = func_492(Global_1956200->f_1431.f_91, 0f, 1f);
		if (!animpostfx_is_running(sVar1) && !func_437())
		{
			animpostfx_play(sVar1);
		}
		_0xf972f0ab16dc5260(sVar1, 1, Global_1956200->f_1431.f_91);
		_0xf972f0ab16dc5260(sVar1, 2, Global_1956200->f_1431.f_87);
		_0xf972f0ab16dc5260(sVar1, 3, Global_1956200->f_1431.f_95);
	}
	else if (animpostfx_is_running(sVar1))
	{
		Global_1956200->f_1431.f_95 = 0f;
		Global_1956200->f_1431.f_91 = 0f;
		Global_1956200->f_1431.f_87 = 0f;
		_0xc5cb91d65852ed7e(sVar1);
	}
	if (Global_1956200->f_1431.f_88)
	{
		fVar7 = _get_player_health(&(Global_1296859->f_154[&Global_1296859]));
		fVar8 = (IntToFloat(get_ped_max_health(Global_1296859->f_8)) * 0.1f);
		func_598(fVar7, fVar8);
	}
	else
	{
		func_599();
	}
}

int func_542(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_532(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_600(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_601(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_600(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_602(1775828486);
			func_603(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_600(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_604(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_602(350943398);
			func_605(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_605(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_605(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_543(var uParam0, int iParam1)
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

void func_544(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_545()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_606(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_546(int iParam0, var uParam1, var uParam2)
{
	if (func_607(iParam0, uParam1, &uVar0))
	{
		func_608(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_547(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_503(uParam0, 1);
	func_504(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_548()
{
	return (!&Global_1903133 && absi((get_frame_count() - Global_1903133->f_2)) >= 5);
}

void func_549(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_550()
{
	iVar0 = 1;
	if ((((((!_0xe368e8422c860ba7(func_298(), func_299(), -2) || !_0xe368e8422c860ba7(func_300(), func_299(), -2)) || !_0xe368e8422c860ba7(func_301(), func_299(), -2)) || !_0xe368e8422c860ba7(func_609(), func_299(), -2)) || !_0xe368e8422c860ba7(func_302(), func_299(), -2)) || !_0xe368e8422c860ba7(func_303(), func_304(), -2)) || !_0xe368e8422c860ba7(func_305(), func_306(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_551(var uParam0, var uParam1, int iParam2)
{
	switch (func_610(iParam2))
	{
		case 0:
			func_611(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_612(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_613(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_614(uParam0, uParam1, iParam2, -1082130432);
			break;
		case 4:
			func_615(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_552(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0, bParam1);
}

void func_553(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_554(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_616((iVar5 / 60), 0, 180);
	iVar7 = func_616((iVar5 % 60), 0, 60);
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

void func_555(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0, sParam1);
}

void func_556(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = get_sound_id();
			if (is_string_null_or_empty(sParam2) || are_strings_equal(sParam2, func_301()))
			{
				_0xce5d0ffe83939af1(uParam0->f_11, func_301(), func_299(), 1);
			}
			else
			{
				_0xce5d0ffe83939af1(uParam0->f_11, sParam2, func_299(), 1);
				_0x9821b68cd3e05f2b("Time", 10f, sParam2, func_299());
			}
		}
	}
	else
	{
		func_167(uParam0);
	}
}

void func_557(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_12, func_609(), func_299(), 1);
	}
}

int func_558(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam1[0] == 0)
	{
		uVar0 = _databinding_add_data_container(uParam0->f_5, "score");
		func_612(uVar0, (*uParam1)[0], 2, "0");
		func_612(uVar0, (*uParam1)[1], 8, "0");
		bVar1 = !func_10(iParam2, 16);
		bVar2 = !func_10(iParam2, 32);
		func_615(uVar0, &((*uParam1)[0]->f_3), 5, bVar1, 0);
		func_611(uVar0, &((*uParam1)[0]->f_1), 3, iParam4);
		func_611(uVar0, &((*uParam1)[0]->f_2), 4, iParam6);
		func_615(uVar0, &((*uParam1)[1]->f_3), 11, bVar2, 0);
		func_611(uVar0, &((*uParam1)[1]->f_1), 9, iParam5);
		func_611(uVar0, &((*uParam1)[1]->f_2), 10, iParam7);
	}
	return 1;
}

int func_559(var uParam0, int iParam1, int iParam2)
{
	if (func_10(iParam1, 262144))
	{
		set_bit(&(uParam0->f_11.f_160), 6);
	}
	else if (func_10(iParam1, 65536))
	{
		set_bit(&(uParam0->f_11.f_160), 3);
	}
	else if (func_10(iParam1, 131072))
	{
		set_bit(&(uParam0->f_11.f_160), 4);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	else if (func_10(iParam1, 1048576))
	{
		set_bit(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		set_bit(&(uParam0->f_11.f_159), 6);
	}
	if (func_10(iParam1, 64))
	{
		set_bit(&(uParam0->f_11.f_159), 0);
	}
	if (func_10(iParam1, 2048))
	{
		set_bit(&(uParam0->f_11.f_159), 7);
	}
	if (func_10(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		set_bit(&(uParam0->f_11.f_159), 31);
	}
	if (func_10(iParam1, 4096))
	{
		set_bit(&(uParam0->f_11.f_159), 9);
	}
	if (func_10(iParam1, 16384))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_10(iParam1, 4194304))
	{
		set_bit(&(uParam0->f_11.f_160), 11);
	}
	if (func_10(iParam1, 8388608))
	{
		set_bit(&(uParam0->f_11.f_160), 12);
	}
	if (func_10(iParam1, 8192))
	{
		set_bit(&(uParam0->f_11.f_159), 10);
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 18);
	}
	if (func_10(iParam1, 32768))
	{
		set_bit(&(uParam0->f_11.f_159), 22);
		set_bit(&(uParam0->f_11.f_159), 23);
	}
	if (func_10(iParam1, 524288))
	{
		set_bit(&(uParam0->f_11.f_160), 7);
	}
	if (func_10(iParam1, 2097152))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_160), 9);
	}
	if (func_10(iParam1, 16777216))
	{
		set_bit(&(uParam0->f_11.f_159), 17);
		set_bit(&(uParam0->f_11.f_159), 0);
		set_bit(&(uParam0->f_11.f_160), 13);
	}
	func_617(&(uParam0->f_11));
	func_278(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!is_string_null_or_empty(&(uParam0->f_951)))
	{
		func_618(&(uParam0->f_11), &(uParam0->f_951));
	}
	return 1;
}

void func_560(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	if ((*uParam0)[0]->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_619(fParam2), 32);
			func_555(uParam0[0], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_620(fParam2), 32);
			func_555(uParam0[0], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, _0x2b6846401d68e563(fParam2, 2), 32);
			func_555(uParam0[0], &cVar8);
		}
		else
		{
			_int_to_string(floor(fParam2), "%i", &uVar12);
			func_555(uParam0[0], &uVar12);
		}
		(*uParam0)[0]->f_4 = fParam2;
	}
	if ((*uParam0)[1]->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_619(fParam3), 32);
			func_555(uParam0[1], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_620(fParam3), 32);
			func_555(uParam0[1], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, _0x2b6846401d68e563(fParam3, 2), 32);
			func_555(uParam0[1], &cVar24);
		}
		else
		{
			_int_to_string(floor(fParam3), "%i", &uVar28);
			func_555(uParam0[1], &uVar28);
		}
		(*uParam0)[1]->f_4 = fParam3;
	}
	bVar32 = !func_10(iParam1, 16);
	bVar33 = !func_10(iParam1, 32);
	func_621((*uParam0)[0]->f_1, iParam7);
	func_621((*uParam0)[0]->f_2, iParam9);
	func_552((*uParam0)[0]->f_3, bVar32);
	func_621((*uParam0)[1]->f_1, iParam8);
	func_621((*uParam0)[1]->f_2, iParam10);
	func_552((*uParam0)[1]->f_3, bVar33);
}

void func_561(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_622(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_623(uParam0, uParam1, bParam3, iParam2, iParam4, is_bit_set(uParam0->f_159, 5), iParam6);
}

void func_562(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = -1;
	if (!is_bit_set(uParam0->f_159, 1))
	{
		iVar2 = get_player_team(*iParam2);
		iVar3 = func_624();
		bVar4 = func_625();
		bVar5 = func_626();
		bVar6 = is_bit_set(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940144->f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940144->f_111;
			bParam3 = true;
		}
		func_627(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!is_bit_set(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!is_bit_set(uParam0->f_158, 0))
					{
						func_617(uParam0);
						func_628(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						set_bit(&(uParam0->f_158), 0);
					}
					else
					{
						func_561(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					clear_bit(&(uParam0->f_158), 13);
					set_bit(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				set_bit(&(uParam0->f_158), 13);
			}
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(1, -1450761377, true);
			enable_control_action(1, -771458680, true);
			enable_control_action(0, 1033498310, true);
			enable_control_action(0, -1074497799, true);
			enable_control_action(1, 1033498310, true);
			enable_control_action(1, -1074497799, true);
			clear_bit(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940144->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940144->f_111)
			{
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
				disable_control_action(1, -1450761377, false);
				disable_control_action(1, -771458680, false);
				disable_control_action(0, 1033498310, false);
				disable_control_action(0, -1074497799, false);
				disable_control_action(1, 1033498310, false);
				disable_control_action(1, -1074497799, false);
			}
			if (bParam3)
			{
				func_561(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940144->f_111)
			{
				func_629(uParam0, uParam1);
				func_630(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940144->f_111)
		{
			if ((is_bit_set(uParam0->f_158, 1) || is_bit_set(uParam0->f_158, 13)) || uParam0->f_199 < 2)
			{
				func_631(uParam0, 1);
			}
			func_632(uParam0);
		}
	}
}

bool func_563(var uParam0, var uParam1)
{
	func_633(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_634(uParam1);
	if (!func_635(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_636(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == -842959696)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == -10959621)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == 1936677264)
	{
		return true;
	}
	if (!func_635(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_636(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_564(var uParam0)
{
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == -842959696 && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == -10959621 || uParam0->f_30.f_5 == 1936677264) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1940085->f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_637(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_638(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_639(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

void func_565(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = get_sound_id();
		_0xce5d0ffe83939af1(uParam0->f_5, func_303(), func_304(), 1);
	}
}

void func_566(int iParam0, int iParam1)
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

void func_567(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_640(uParam0))
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

void func_568(var uParam0)
{
	*uParam0 = 23;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	uVar0 = func_311(0, 8);
	trigger_script_event(1, uParam0, 11, 40, &uVar0);
}

int func_569(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_570(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_571(var uParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(fParam3, &Var0);
		return true;
	}
	return false;
}

void func_572(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_641(iParam0);
	if (!func_642(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_643(128) && !func_389(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_644() == 4)
	{
		func_153(18);
	}
	func_645(1024);
}

bool func_573()
{
	return func_10(Global_1572887->f_7, 1);
}

bool func_574()
{
	return (Global_1572887->f_106.f_75 >= 14 && Global_1572887->f_106.f_75 < 21);
}

bool func_575(var uParam0, int iParam1)
{
	return func_154(*uParam0, iParam1);
}

int func_576(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_577(var uParam0, int iParam1)
{
	if (func_575(uParam0, iParam1))
	{
		return;
	}
	func_387(uParam0, iParam1);
}

void func_578(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_579(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_524(iParam0))
		{
			func_309(iParam0);
		}
	}
}

void func_580(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_581(var uParam0, int iParam1)
{
	func_155(uParam0, iParam1);
}

void func_582(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 9, uParam1);
}

bool func_583(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_584()
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

int func_585(int iParam0)
{
	return func_646(iParam0) + 30;
}

void func_586(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_587(int iParam0)
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
		func_309(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_428(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_588(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_589(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_590(int iParam0)
{
	fVar0 = (func_647(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

bool func_591(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_648(iParam1), ceil(fParam2));
	return true;
}

void func_592(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_527(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_593(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_649(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_650(iParam1), fParam2, -1);
	}
}

void func_594(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_527(2);
	}
	uVar0 = Global_1296859->f_21;
	func_651(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_652(iParam0, uVar0, iParam3);
	}
}

char* func_595()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_596()
{
	return "PlayerRPGCore";
}

bool func_597()
{
	if (is_first_person_aim_cam_active())
	{
		if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
		{
			if (_is_weapon_sniper(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_598(float fParam0, float fParam1)
{
	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!animpostfx_is_running("PlayerHealthLow"))
	{
		animpostfx_play("PlayerHealthLow");
	}
	_0xcab4dd2d5b2b7246("PlayerHealthLow", fVar1);
}

void func_599()
{
	if (animpostfx_is_running("PlayerHealthLow"))
	{
		_0xc5cb91d65852ed7e("PlayerHealthLow");
	}
}

char* func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_601(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_436(2);
	func_653(to_float((iParam0 * iVar1)), 0);
}

void func_602(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_654(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_655(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_603(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_440(2);
	func_656(to_float((iParam0 * iVar1)), 0);
}

void func_604(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_442(2);
	func_531(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_605(int iParam0, bool bParam1, bool bParam2)
{
	func_537(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_606(int iParam0)
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

bool func_607(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_454(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_608(var uParam0, int iParam1, var uParam2)
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

char* func_609()
{
	return "countdown_final_thud";
}

int func_610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_611(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_657(iParam2);
	}
	*uParam1 = _databinding_add_data_hash(uParam0, func_658(iParam2), iParam3);
}

void func_612(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (is_string_null(sParam3))
	{
		sParam3 = func_659(iParam2);
	}
	*uParam1 = _databinding_add_data_string(uParam0, func_658(iParam2), sParam3);
}

void func_613(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_660(iParam2);
	}
	*uParam1 = _databinding_add_data_int(uParam0, func_658(iParam2), iParam3);
}

void func_614(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_661(iParam2);
	}
	*uParam1 = _databinding_add_data_float(uParam0, func_658(iParam2), fParam3);
}

void func_615(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_662(iParam2);
	}
	*uParam1 = _databinding_add_data_bool(uParam0, func_658(iParam2), bParam3);
}

int func_616(int iParam0, int iParam1, int iParam2)
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

void func_617(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "Title");
	uParam0->f_2 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
	uParam0->f_142 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
}

void func_618(var uParam0, char* sParam1)
{
	if (!is_bit_set(uParam0->f_158, 7))
	{
		set_bit(&(uParam0->f_158), 7);
		_databinding_add_data_string(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_619(char* sParam0)
{
	return _create_var_string(6, "FM_WEIGHT", sParam0);
}

char* func_620(float fParam0)
{
	return _create_var_string(2, "FM_PERCENT", floor((fParam0 * 100f)));
}

void func_621(var uParam0, int iParam1)
{
	_databinding_write_data_hash_string(uParam0, iParam1);
}

void func_622(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_663(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_629(uParam0, uParam1);
		iVar7 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_664(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_665(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_666(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == (*uParam1)[iVar0]->f_14;
				iVar9 = func_667(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_668(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_669());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_670((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_671())
					{
						if (func_672((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_673((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
					if (func_674(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else if (func_675(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
				}
				if (is_bit_set(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar2 = round(func_676((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = round(func_677((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_678(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((*uParam1)[iVar0]->f_1 == 8.94E+07f)
						{
							clear_bit(&iVar11, 12);
						}
						sVar5 = func_679(iVar2, iVar11, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
				{
					if (!is_bit_set(uParam0->f_159, 18))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(func_677((*uParam1)[iVar0], uParam0->f_159), func_680(uParam0, 1)));
					}
				}
				if (is_bit_set(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = round(func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = round(func_676((*uParam1)[iVar0], uParam0->f_159));
					}
					if (func_678(iVar3))
					{
						sVar6 = func_554(iVar3, 1, 2, 0, 0, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (is_bit_set(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_676((*uParam1)[iVar0], uParam0->f_159);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar13, _0x2b6846401d68e563(fVar14, 0));
				}
				else if ((!is_bit_set(uParam0->f_159, 3) && !func_675(uParam0->f_159)) && !func_682(uParam0->f_159))
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(func_676((*uParam1)[iVar0], uParam0->f_159), func_680(uParam0, 2)));
				}
				if (!is_bit_set(uParam0->f_159, 3))
				{
					if (is_bit_set(uParam0->f_160, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (is_bit_set(uParam0->f_159, 9))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_619(func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160)));
					}
					else if (is_bit_set(uParam0->f_159, 10))
					{
						fVar4 = func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_554(floor(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _create_var_string(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (is_bit_set(uParam0->f_159, 21))
					{
						iVar2 = round(func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_679(iVar2, uParam0->f_159, 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160), func_680(uParam0, 3)));
					}
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_623(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	iVar13 = 0;
	iVar14 = 32;
	bVar16 = is_bit_set(uParam0->f_159, 6);
	if (Global_1940144->f_111)
	{
		iVar3 = _databinding_get_array_count(uParam0->f_142);
		if (is_bit_set(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_683(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_684(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_685(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_686(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_664(&((*uParam1)[iVar2]->f_14)) && iVar0 < 5)
					{
						func_685(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (_databinding_get_array_count(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				_0x6318fb3be37e11b3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = _databinding_get_array_count(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_683(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_687(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_685(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2] && func_664(&((*uParam1)[iVar2]->f_14)))
						{
							func_685(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_664(&((*uParam1)[iVar2]->f_14)))
			{
				func_685(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_685(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (_databinding_get_array_count(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			_0x6318fb3be37e11b3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_624()
{
	if (Global_1940144->f_20)
	{
		if (Global_1940144->f_5 == 1)
		{
			return 1;
		}
		if (Global_1940144->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_625()
{
	if (Global_1102219->f_26.f_3440.f_4 && !func_671())
	{
		Global_1102219->f_26.f_3440.f_4 = 0;
	}
	return Global_1102219->f_26.f_3440.f_4;
}

bool func_626()
{
	return (func_295(2) && func_688());
}

void func_627(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_bit_set(uParam0->f_158, 17))
	{
		if (is_bit_set(uParam0->f_159, 22))
		{
			Global_1940144->f_112 = 1;
		}
		else
		{
			Global_1940144->f_112 = 0;
		}
		set_bit(&(uParam0->f_158), 17);
	}
	if (Global_1940144->f_111)
	{
		if (is_bit_set(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0]->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_628(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_689(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_623(uParam0, uParam1, bParam5, iParam6, iParam2, is_bit_set(uParam0->f_159, 5), iParam10);
}

void func_629(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else if (func_664(&((*uParam1)[iVar0]->f_14)))
		{
			func_690(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_630(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else
		{
			func_665(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_631(var uParam0, bool bParam1)
{
	bVar0 = func_691(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_170(1);
			func_692(&(uParam0->f_199), 1);
			break;
		case 1:
			_0xd9130842d7226045("MP_Leaderboard_Sounds", 1);
			func_692(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = _launch_app_by_hash_with_entry(595204529, func_693(bParam1));
			if (iVar1 == 0)
			{
				func_692(&(uParam0->f_199), 3);
			}
			else if (_is_app_running(595204529))
			{
				func_692(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (_is_app_running(595204529))
			{
				if (!bVar0)
				{
					play_sound_frontend("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				_request_uiapp_transition_by_hash(595204529, func_694());
				func_692(&(uParam0->f_199), 4);
			}
			else if (func_695())
			{
				func_692(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (is_bit_set(uParam0->f_158, 13))
			{
				if (_is_app_running(595204529))
				{
					if (!bVar0)
					{
						play_sound_frontend("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					_close_app_by_hash(595204529);
					func_692(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				clear_bit(&(uParam0->f_158), 13);
				func_692(&(uParam0->f_199), 1);
			}
			else
			{
				func_692(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_166(uParam0, bParam1);
			break;
	}
}

void func_632(var uParam0)
{
	func_696(&(uParam0->f_162));
	if ((is_bit_set(uParam0->f_158, 14) || is_bit_set(uParam0->f_158, 15)) || is_bit_set(uParam0->f_158, 16))
	{
		return;
	}
	func_697(&(uParam0->f_162), 0);
	set_bit(&(uParam0->f_158), 14);
}

void func_633(var uParam0)
{
	func_698(uParam0);
	func_698(&(uParam0->f_6));
	func_698(&(uParam0->f_12));
	func_698(&(uParam0->f_18));
	func_698(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_634(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = player_id();
	uParam0->f_2 = get_player_ped(uParam0->f_3);
	uParam0->f_1 = func_699(uParam0->f_2);
	uParam0->f_4 = get_player_team(uParam0->f_3);
	uParam0->f_5 = get_ped_relationship_group_hash(uParam0->f_2);
	return 1;
}

bool func_635(int iParam0, var uParam1)
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

bool func_636(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_635(_get_rider_of_mount(uParam0->f_2, false), uParam1);
		case 4:
			return func_635(get_ped_in_vehicle_seat(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_637(var uParam0)
{
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			case 2:
				return 9;
			case 3:
				return 9;
			case 4:
				return 7;
			case 6:
				return 7;
			case 5:
				return 4;
			case 7:
				return 4;
			case 0:
				return 4;
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_638(var uParam0)
{
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 18;
	}
	if (uParam0->f_18 == 6)
	{
		return 17;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (does_entity_exist(uParam0->f_18.f_1))
	{
		if (_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1)))
		{
			return 19;
		}
	}
	if (_0x40851bcc33acd9ab(uParam0->f_18.f_2))
	{
		return 11;
	}
	if (((!is_ped_human(uParam0->f_18.f_2) && !_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1))) && _0xf8b48a361dc388ae(uParam0->f_18.f_2) == 2) && _0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
	{
		return 16;
	}
	switch (uParam0->f_18.f_5)
	{
		case -1976316465:
			return 10;
		case 841021282:
			return 10;
		case -350651841:
			return 10;
		case -1683752762:
			if (_0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		case -1329647920:
			return 10;
		case 707888648:
			return 11;
		case 106566339:
			return 11;
		case -50399569:
			return 11;
		case -767591988:
			return 14;
		case 1986610512:
			return 14;
		case -989642646:
			return 15;
		case 889541022:
			return 15;
		case -319516747:
			return 15;
		case 1269650476:
			return 12;
		case 1222652248:
			return 12;
		case -350226955:
			return 12;
		case 1030835986:
			return 12;
		case -1448293989:
			return 12;
		case 266218800:
			return 12;
		case 555364152:
			return 12;
		case -1663301869:
			return 12;
		case -1996978098:
			return 12;
		case 1078461828:
			return 12;
		case 1733741057:
			return 20;
		case -2003007004:
			return 20;
		case 1965820175:
			return 20;
		case -1164995627:
			return 20;
		case -1406404850:
			return 20;
		case 892340488:
			return 20;
		case 570352286:
			return 20;
		case 1809249877:
			return 20;
		case 1185197041:
			return 20;
		case -1901478918:
			return 20;
		case 2097877918:
			return 20;
		case -1158905413:
			return 20;
		case 358397622:
			return 20;
		case 65999835:
			return 20;
		case 814443795:
			return 20;
		case 519621102:
			return 20;
		case -1628223003:
			return 20;
		case 1278256225:
			return 20;
		case 2038628101:
			return 20;
		case 1742494648:
			return 20;
		case -1010166918:
			return 20;
		case 660170868:
			return 20;
		case -1278312096:
			return 20;
		case -509158128:
			return 20;
		case -226656579:
			return 20;
		case 2115868159:
			return 20;
		case 1495813101:
			return 20;
		case 1197385818:
			return 20;
		case 1015780020:
			return 20;
		case -1286733825:
			return 20;
		case -1670393277:
			return 20;
		case -415733461:
			return 20;
		case -1207924036:
			return 20;
		case 497702414:
			return 20;
		case 719188085:
			return 20;
		case 43753457:
			return 20;
		case 771290791:
			return 20;
		case 20356387:
			return 20;
		case 309149584:
			return 20;
		case 1613781781:
			return 20;
		case 1693607065:
			return 20;
		case 1132176120:
			return 20;
		case 869270437:
			return 20;
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 12;
		case 6:
			return 12;
		case 5:
			return 13;
		case 7:
			return 13;
		case 0:
			return 13;
		default:
			break;
	}
	return 13;
	return 0;
}

int func_639(var uParam0)
{
	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_12.f_2) && _0x40851bcc33acd9ab(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_6.f_2) && _0x40851bcc33acd9ab(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 22;
	}
	switch (iVar3)
	{
		case -1976316465:
			return 21;
		case 841021282:
			return 21;
		case -350651841:
			return 21;
		case -1683752762:
			return 21;
		case -1329647920:
			return 21;
		case 707888648:
			return 22;
		case 106566339:
			return 22;
		case -50399569:
			return 22;
		case -767591988:
			return 25;
		case 1986610512:
			return 25;
		case -989642646:
			return 26;
		case 889541022:
			return 26;
		case -319516747:
			return 26;
		case 1269650476:
			return 23;
		case 1222652248:
			return 23;
		case -350226955:
			return 23;
		case 1030835986:
			return 23;
		case -1448293989:
			return 23;
		case 266218800:
			return 23;
		case 555364152:
			return 23;
		case -1663301869:
			return 23;
		case -1996978098:
			return 23;
		case 1078461828:
			return 23;
		case 1733741057:
			return 27;
		case -2003007004:
			return 27;
		case 1965820175:
			return 27;
		case -1164995627:
			return 27;
		case -1406404850:
			return 27;
		case 892340488:
			return 27;
		case 570352286:
			return 27;
		case 1809249877:
			return 27;
		case 1185197041:
			return 27;
		case -1901478918:
			return 27;
		case 2097877918:
			return 27;
		case -1158905413:
			return 27;
		case 358397622:
			return 27;
		case 65999835:
			return 27;
		case 814443795:
			return 27;
		case 519621102:
			return 27;
		case -1628223003:
			return 27;
		case 1278256225:
			return 27;
		case 2038628101:
			return 27;
		case 1742494648:
			return 27;
		case -1010166918:
			return 27;
		case 660170868:
			return 27;
		case -1278312096:
			return 27;
		case -509158128:
			return 27;
		case -226656579:
			return 27;
		case 2115868159:
			return 27;
		case 1495813101:
			return 27;
		case 1197385818:
			return 27;
		case 1015780020:
			return 27;
		case -1286733825:
			return 27;
		case -1670393277:
			return 27;
		case -415733461:
			return 27;
		case -1207924036:
			return 27;
		case 497702414:
			return 27;
		case 719188085:
			return 27;
		case 43753457:
			return 27;
		case 771290791:
			return 27;
		case 20356387:
			return 27;
		case 309149584:
			return 27;
		case 1613781781:
			return 27;
		case 1693607065:
			return 27;
		case 1132176120:
			return 27;
		case 869270437:
			return 27;
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 21;
		case 2:
			return 21;
		case 3:
			return 21;
		case 4:
			return 23;
		case 6:
			return 23;
		case 5:
			return 24;
		case 7:
			return 24;
		case 0:
			return 24;
		default:
			break;
	}
	return 24;
	return 0;
}

bool func_640(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_641(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_642(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_643(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_644()
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

void func_645(int iParam0)
{
	if (func_700(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

int func_646(int iParam0)
{
	return iParam0 * 31;
}

float func_647(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_701(2)));
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_649(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_651(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_527(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_652(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_527(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_653(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

int func_654(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_655(int iParam0)
{
	if (!func_702(iParam0))
	{
		return 0;
	}
	iVar0 = func_654(iParam0, 1);
	if (!func_703(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_704(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_705(iParam0, iVar1))
		{
			case 0:
				func_706(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_706(iVar1, iParam0, iVar4);
						func_707(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_707(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_708(iVar1, 1);
				func_709(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_710(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_711(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

void func_656(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_712();
		case 4:
			return 109029619;
		case 9:
			return func_713();
		case 10:
			return 109029619;
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return 109029619;
		case 25:
			return func_713();
		case 30:
			return func_713();
		default:
			break;
	}
	return 0;
}

char* func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_660(int iParam0)
{
	return 0;
}

float func_661(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_663(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar5 = 0;
	iVar6 = 32;
	bVar7 = is_bit_set(uParam0->f_159, 3);
	bVar8 = is_bit_set(uParam0->f_159, 23);
	bVar9 = is_bit_set(uParam0->f_159, 24);
	bVar10 = is_bit_set(uParam0->f_159, 25);
	bVar11 = is_bit_set(uParam0->f_160, 10);
	bVar12 = is_bit_set(uParam0->f_159, 28);
	iVar13 = player_id();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = is_bit_set(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = is_bit_set(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_714() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (bVar9)
					{
						if ((*uParam1)[iVar0]->f_1 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
						}
					}
					else if (bVar8)
					{
						if ((*uParam1)[iVar0]->f_5 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_5);
						}
					}
					else if (bVar11)
					{
						if ((*uParam1)[iVar0]->f_8 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_8);
						}
					}
					else if ((*uParam1)[iVar0]->f_1 != -1f)
					{
						fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_683(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_684(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_715(iVar43) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_716(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_686(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_664(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar45 = iVar13 == (*uParam1)[iVar1]->f_14;
						iVar46 = func_667(uParam0, uParam1, iVar1, iVar13, bVar45);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (is_bit_set(uParam0->f_159, 26))
							{
								if (is_bit_set(uParam0->f_159, 0))
								{
									sVar47 = _0x2b6846401d68e563(func_681((*uParam1)[iVar1], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = _0x2b6846401d68e563(func_676((*uParam1)[iVar1], uParam0->f_159), 0);
								}
							}
							else if (is_bit_set(uParam0->f_159, 27))
							{
								iVar4 = round(func_677((*uParam1)[iVar1], uParam0->f_159));
								sVar47 = " ";
								if (func_678(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((*uParam1)[iVar1]->f_1 == 8.94E+07f)
									{
										clear_bit(&iVar48, 12);
									}
									sVar47 = func_679(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = _0x2b6846401d68e563(func_677((*uParam1)[iVar1], uParam0->f_159), func_680(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (is_bit_set(uParam0->f_159, 9))
							{
								sVar47 = func_619((*uParam1)[iVar1]->f_5);
							}
							else
							{
								sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_8, 0);
						}
						else
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_664(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !is_string_null_or_empty(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_665(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar1 = player_id();
	bVar2 = iVar1 == (*uParam1)[iParam2]->f_14;
	iVar0 = func_667(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (network_is_player_active((*uParam1)[iParam2]->f_14) && _0x919af2d93e9aa89d((*uParam1)[iParam2]->f_14))
	{
		bVar3 = _0xef6f2a35faaf2ed7((*uParam1)[iParam2]->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_666(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1] == uParam0[iVar0] && func_664(&((*uParam0)[iVar0]->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_667(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (is_bit_set(uParam0->f_159, 11))
	{
		iVar0 = func_717(uParam1[iParam2], get_player_team(iParam3), uParam0->f_150, is_bit_set(uParam0->f_159, 5), bParam4);
	}
	else if (is_bit_set(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = 109029619;
		}
		else
		{
			iVar0 = func_158((*uParam1)[iParam2]->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_158((*uParam1)[iParam2]->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_668(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((*uParam1)[iParam2]->f_10)
	{
		case 1:
			_databinding_write_data_int_from_parent(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_669()
{
	return "RSN";
}

char* func_670(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

bool func_671()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_643(2048))
	{
		return true;
	}
	if (func_642(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_672(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(get_ped_index_from_entity_index(func_718()));
	return iParam0 == iVar0;
}

char* func_673(int iParam0)
{
	if (iParam0 != 0)
	{
		return _0xb112b9262ec29c20(1852874750, iParam0);
	}
	return "";
}

bool func_674(int iParam0)
{
	if ((func_675(iParam0) || func_682(iParam0)) || is_bit_set(iParam0, 18))
	{
		return false;
	}
	if (is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_675(int iParam0)
{
	return (is_bit_set(iParam0, 0) && is_bit_set(iParam0, 17));
}

float func_676(var uParam0, int iParam1)
{
	if (func_719())
	{
		func_720(uParam0, 1);
	}
	else if (is_bit_set(iParam1, 3))
	{
		if (is_bit_set(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_674(iParam1) || is_bit_set(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (is_bit_set(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_677(var uParam0, int iParam1)
{
	if (func_719())
	{
		return func_720(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (is_bit_set(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

bool func_678(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == round(-3f))
	{
		return true;
	}
	return false;
}

char* func_679(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_554(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	else if ((is_bit_set(iParam1, 3) || is_bit_set(iParam1, 4)) || is_bit_set(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return _get_label_text("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return _get_label_text("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return _get_label_text("POS_ELIM");
		}
		else if (iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_554(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	if (is_bit_set(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_554(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_721(&cVar0);
}

int func_680(var uParam0, int iParam1)
{
	if (iParam1 == 1 && is_bit_set(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && is_bit_set(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && is_bit_set(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_681(var uParam0, int iParam1, int iParam2)
{
	if (func_719())
	{
		func_720(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 0) && !is_bit_set(iParam1, 17))
	{
		if (is_bit_set(iParam1, 3) && (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (is_bit_set(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_675(iParam1))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (is_bit_set(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_682(int iParam0)
{
	return (is_bit_set(iParam0, 18) && is_bit_set(iParam0, 17));
}

void func_683(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_684(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_685(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != _databinding_get_item_context_by_index(uParam0, iParam4))
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0, iParam1);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_686(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_664(&((*uParam0)[iVar1]->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_687(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = _databinding_add_data_container(*uParam0, &cVar5);
		cVar5 = { func_715(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1] && func_664(&((*uParam1)[iVar1]->f_14)))
			{
				if (is_bit_set(uParam0->f_159, 19))
				{
					if ((*uParam1)[iVar1]->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_6);
					}
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
				else
				{
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_2 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_2);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!is_bit_set(uParam0->f_159, 19))
		{
			if (is_bit_set(uParam0->f_159, 25) || is_bit_set(uParam0->f_159, 23))
			{
				if (func_714() == 0)
				{
					fVar4 = to_float(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_716(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		_databinding_add_data_int(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (is_bit_set(uParam0->f_159, 6))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else if (func_674(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (is_bit_set(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar14, uParam0->f_151));
		}
		else if (func_675(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat1", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar3, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_688()
{
	return func_295(4);
}

void func_689(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam4)
	{
		if (func_719())
		{
			func_722(uParam0);
		}
		else
		{
			func_723(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (is_bit_set(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "Position", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCross", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "CrossColor", 859817522);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "CrewTag", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowRank", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Rank", "0");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "Spectating", false);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat0", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat1", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat2", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat3", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", func_724());
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "HeadsetIconColor", 109029619);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		_databinding_add_data_bool(*uParam0, "info_visible_06", false);
		_databinding_add_data_bool(*uParam0, "info_visible_07", false);
		_databinding_add_data_bool(*uParam0, "info_visible_08", false);
		_databinding_add_data_string(*uParam0, "info_value_06", "");
		_databinding_add_data_string(*uParam0, "info_value_07", "");
		_databinding_add_data_string(*uParam0, "info_value_08", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_690(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_719())
	{
		func_725(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_622(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_690(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_726() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_727(uParam0, *uParam1)}, 8);
	if (!is_string_null_or_empty(&Var16) && !are_strings_equal(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		_databinding_write_data_string(uParam0->f_45[iParam2][0], &cVar0);
		_databinding_write_data_string(uParam0->f_45[iParam2][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2])[0] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2])[1] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_691(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_692(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_693(bool bParam0)
{
	if (bParam0)
	{
		return 1022890889;
	}
	return -987928333;
}

int func_694()
{
	return 205122612;
}

bool func_695()
{
	if (Global_1940144->f_20 && Global_1940144->f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_696(var uParam0)
{
	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_728(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!is_bit_set(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = int_to_playerindex(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_729(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			set_bit(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_730(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_730(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_697(var uParam0, int iParam1)
{
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_731(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			set_bit(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

void func_698(var uParam0)
{
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = 623901053;
	*uParam0 = { Var0 };
}

var func_699(var uParam0)
{
	return uParam0;
}

bool func_700(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_436(2) * 2;
		case 1:
			return func_440(2) * 2;
		case 2:
			return func_442(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_702(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_703(int iParam0)
{
	iVar0 = func_704(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_704(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_705(int iParam0, int iParam1)
{
	iVar0 = func_732(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_708(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_706(int iParam0, int iParam1, int iParam2)
{
	if (!func_702(iParam1))
	{
		return 0;
	}
	if (!func_733(iParam0))
	{
		return 0;
	}
	iVar0 = func_708(iParam0, 1);
	func_734(iParam0, iParam1, iParam2);
	if (func_735(*Global_1146212->f_35859.f_3116[iVar0]) && func_736(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_737(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_738(vVar1))
		{
			if (func_739(vVar1.x, vVar1.y, vVar1.z))
			{
				func_740(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_741(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_741(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_707(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_708(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_709(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_710(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_711(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_712()
{
	return -1640778959;
}

int func_713()
{
	return 1937193856;
}

int func_714()
{
	if (func_691(16))
	{
		iVar0 = Global_1050050->f_12;
	}
	else
	{
		iVar0 = func_742();
	}
	return iVar0;
}

struct<8> func_715(int iParam0)
{
	if (is_string_null_or_empty((*Global_1050984)[iParam0]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, _get_label_text(&cVar0), 64);
		return cVar0;
	}
	return *(*Global_1050984)[iParam0];
}

int func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_717(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_717(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return 1105014447;
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 1105014447;
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

var func_718()
{
	return Global_1102219->f_26.f_3341;
}

bool func_719()
{
	return &Global_1048583;
}

float func_720(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_721(char* sParam0)
{
	return _0xd8402b858f4ddd88(sParam0, get_length_of_literal_string(sParam0));
}

void func_722(var uParam0)
{
	sVar0 = func_743(uParam0->f_159, uParam0->f_160);
	sVar1 = func_744(uParam0->f_159, uParam0->f_160);
	sVar2 = func_745(uParam0->f_159, uParam0->f_160);
	sVar3 = func_746();
	if (!is_string_null_or_empty(sVar0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", sVar0);
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar1))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", sVar1);
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar2))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", sVar2);
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar3))
	{
		_databinding_add_data_string(uParam0->f_1, "StatRounds", sVar3);
		_databinding_add_data_int(uParam0->f_1, "StatRoundsColor", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

void func_723(var uParam0, bool bParam1, bool bParam2)
{
	if (func_682(uParam0->f_159) || func_675(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", "");
		_databinding_add_data_string(uParam0->f_1, "Stat2", "");
	}
	if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat0", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat0Color", 1105014447);
			}
		}
		_databinding_add_data_string(uParam0->f_1, "Stat1", func_743(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	else if (func_675(uParam0->f_159))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat2", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
			}
		}
	}
	else if (!is_bit_set(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			_databinding_add_data_string(uParam0->f_1, "Stat1", _get_label_text("UIC_LDR_RNDW"));
			_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
		}
	}
	if (!func_675(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", func_744(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_bit_set(uParam0->f_159, 3) || is_bit_set(uParam0->f_159, 0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", func_745(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

int func_724()
{
	return 1;
}

void func_725(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_747(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_629(uParam0, uParam1);
		iVar2 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_664(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_665(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_666(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == (*uParam1)[iVar0]->f_14;
				iVar4 = func_667(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_668(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_669());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_670((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_671())
					{
						if (func_672((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_673((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_677((*uParam1)[iVar0], uParam0->f_159);
				fVar6 = func_676((*uParam1)[iVar0], uParam0->f_159);
				sVar7 = func_681((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
				fVar8 = func_748((*uParam1)[iVar0]);
				if ((*Global_1049283)[0]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(fVar5, 0));
				}
				if ((*Global_1049283)[1]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(fVar6, 0));
				}
				if ((*Global_1049283)[2]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(sVar7, 0));
				}
				if ((*Global_1049283)[3]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "StatRounds", _0x2b6846401d68e563(fVar8, 0));
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

int func_726()
{
	return Global_1139381->f_5079.f_325;
}

struct<16> func_727(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_729(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_730(iVar16, 1);
			break;
		case 2:
			func_730(iVar16, 1);
			func_749(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_728(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_731(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_729(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_750(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_751(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_752(iParam1, iParam2, 0);
						return 1;
					}
					func_753(iParam1, iParam2, iVar1);
					func_752(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_754(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_752(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_752(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_752(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_754(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_752(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_752(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_754(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_752(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_730(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_750(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_753(iParam0, iParam1, 0);
			func_752(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_754(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_752(iParam0, iParam1, 0);
			break;
	}
}

void func_731(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_755(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_755(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_756(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_755(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_756(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_732(int iParam0)
{
	if (func_757(iParam0))
	{
		return (func_758(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_733(int iParam0)
{
	iVar0 = func_708(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_734(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_654(iParam1, 1);
	iVar1 = func_708(iParam0, 1);
	iVar2 = func_704(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return 1;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_759(iVar3, 1);
		if (!func_760(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_761(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_762(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_763(iVar6))
		{
		}
		else
		{
			iVar8 = func_764(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_765(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_735(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_736(int iParam0, int iParam1)
{
	if (!func_733(iParam0))
	{
		return false;
	}
	if (!func_766(iParam1))
	{
		return false;
	}
	iVar0 = func_767(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_737(int iParam0)
{
	iVar0 = func_768(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_738(vector3 vParam0)
{
	if (!func_733(vParam0.x))
	{
		return false;
	}
	if (!func_702(vParam0.y))
	{
		return false;
	}
	if (!func_769(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_739(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_654(iParam1, 1);
	iVar1 = func_708(iParam0, 1);
	iVar2 = func_704(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_759(iVar3, 1);
		if (!func_760(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_761(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_770(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_763(iVar6))
		{
		}
		else if (!func_771(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_764(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_772(iVar6);
			}
		}
		iVar7++;
	}
	func_773(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_740(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_766(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0, 1);
	if (!func_733(iParam1))
	{
		return;
	}
	if (!func_702(iParam2))
	{
		return;
	}
	if (!func_769(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_741(int iParam0)
{
	if (!func_766(iParam0))
	{
		return;
	}
	iVar0 = func_767(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

int func_742()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_743(int iParam0, int iParam1)
{
	if (func_719())
	{
		return func_774(0);
	}
	else if ((is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17)) || is_bit_set(iParam0, 18))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (is_bit_set(iParam0, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam0, 3))
	{
		return _create_var_string(2, "UIC_LB_TIME");
	}
	else if (is_bit_set(iParam0, 19))
	{
		return _create_var_string(2, "UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return _create_var_string(2, "UIC_LB_KILLS");
}

char* func_744(int iParam0, int iParam1)
{
	if (func_719())
	{
		return func_774(1);
	}
	else if (func_675(iParam0) || func_682(iParam0))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 1))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (is_bit_set(iParam0, 3))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _get_label_text("UIC_LB_TIME");
		}
		else
		{
			return func_775(iParam0);
		}
	}
	else if (func_674(iParam0) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 8))
	{
		return _get_label_text("UIC_LB_VAL");
	}
	else if (is_bit_set(iParam0, 20))
	{
		return _get_label_text("UIC_LB_ACC");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return _get_label_text("UIC_LB_DEATHS");
}

char* func_745(int iParam0, int iParam1)
{
	if (func_719())
	{
		return func_774(2);
	}
	else if (is_bit_set(iParam0, 13))
	{
		return _get_label_text("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (is_bit_set(iParam1, 7))
	{
		return _create_var_string(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (is_bit_set(iParam1, 11))
	{
		return _create_var_string(2, "FME_AT_SCORE_TAG");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam1, 13))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (is_bit_set(iParam0, 3) && is_bit_set(iParam0, 0))
	{
		return func_775(iParam0);
	}
	else if ((is_bit_set(iParam0, 0) && !is_bit_set(iParam0, 17)) && !func_682(iParam0))
	{
		return _get_label_text("UIC_LB_DEATHS");
	}
	else if (func_675(iParam0) && !func_682(iParam0))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 2) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_CAPS");
	}
	else if (is_bit_set(iParam1, 2))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam0, 14))
	{
		return _get_label_text("UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam0, 21))
	{
		return _get_label_text("UIC_LB_TA");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return _get_label_text("UIC_LB_SCORE");
}

char* func_746()
{
	if (func_719())
	{
		return func_774(3);
	}
	return "";
}

void func_747(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar4 = 0;
	iVar5 = 32;
	iVar6 = player_id();
	bVar16 = (*Global_1049309)[0]->f_2 == -1128715836;
	bVar17 = (*Global_1049309)[0]->f_2 == 1691389412;
	bVar18 = (*Global_1049309)[0]->f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = is_bit_set(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = is_bit_set(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_714() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (func_776((*uParam1)[iVar0], 0) != -1f)
					{
						fVar21[uParam1[iVar0]] = (&fVar21[uParam1[iVar0]] + func_776((*uParam1)[iVar0], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_683(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_684(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_715(iVar39) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_716(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_686(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_664(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar41 = iVar6 == (*uParam1)[iVar1]->f_14;
						iVar42 = func_667(uParam0, uParam1, iVar1, iVar6, bVar41);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = _0x2b6846401d68e563(func_776((*uParam1)[iVar1], 0), 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_748(var uParam0)
{
	if (func_719())
	{
		func_720(uParam0, 3);
	}
	return -1f;
}

void func_749(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_728(uParam0, iVar1, iParam2);
}

int func_750(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_752(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_753(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_754(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_755(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_756(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

bool func_757(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_758(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (func_757(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_777(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_778(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_779(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_780(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_781(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_782(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_759(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 87;
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

bool func_760(int iParam0)
{
	iVar0 = func_759(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_761(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_783(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_762(int iParam0)
{
	if (!func_760(iParam0))
	{
		return;
	}
	iVar0 = func_759(iParam0, 1);
	if (!func_310(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_784(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_785(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_763(int iParam0)
{
	iVar0 = func_764(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_764(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_765(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_786();
			break;
		case -2103256604:
			func_787();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_788(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_788(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_788(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_789(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_788(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_791(func_790(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_792();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_310(17);
			break;
		case -824728332:
			func_310(16);
			break;
	}
}

bool func_766(int iParam0)
{
	iVar0 = func_767(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_767(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_768(int iParam0)
{
	iVar0 = func_793(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_708(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_794(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_795(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_769(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_770(int iParam0)
{
	if (!func_760(iParam0))
	{
		return;
	}
	iVar0 = func_759(iParam0, 1);
	if (!func_310(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_784(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_785(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_771(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_796(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_772(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_786();
			break;
		case -2103256604:
			func_787();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_788(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_788(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_788(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_789(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_788(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_790(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_797(iParam0, 0));
			func_798(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_797(iParam0, 1));
			func_798(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_797(iParam0, 2));
			func_798(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_797(iParam0, 3));
			func_798(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_790(iParam0);
			func_798(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_790(iParam0);
			func_798(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_799();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_310(17);
			break;
		case -824728332:
			func_310(16);
			break;
	}
}

void func_773(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_800(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_801(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

char* func_774(int iParam0)
{
	if (Global_3145858->f_61343[iParam0]->f_1 > -1)
	{
		if (func_802(Global_3145858->f_61343[iParam0]->f_1))
		{
			return _create_var_string(2, Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
		}
		return func_803(Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
	}
	return "";
}

char* func_775(int iParam0)
{
	if (is_bit_set(iParam0, 4))
	{
		return _get_label_text("UIC_LB_BLAP");
	}
	if (is_bit_set(iParam0, 15))
	{
		return _get_label_text("UIC_LB_CPCO");
	}
	return "";
}

float func_776(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

bool func_777(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_778(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_779(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_780(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_783(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_804(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_784(int iParam0)
{
	iVar0 = func_785(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_785(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_786()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_154((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_787()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_788(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

void func_789(int iParam0, bool bParam1)
{
	func_805(iParam0, &iVar0, &iVar1);
	if (!func_806(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_807(iVar0, iVar1);
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_791(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_792()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_793(int iParam0)
{
	if (!func_766(iParam0))
	{
		return -1;
	}
	iVar0 = func_767(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_794(int iParam0, int iParam1)
{
	if (!func_733(iParam0))
	{
		return false;
	}
	iVar0 = func_708(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_735(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_767(iVar2, 1)];
		Var4 = { func_795(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_808() && !func_809())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_808())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_732(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_732(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_732(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_524(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_810(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_732(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_795(int iParam0)
{
	iVar0 = func_708(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_796(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_804(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_797(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_798(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_799()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_800(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_801(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_802(int iParam0)
{
	return func_811(Global_3145858->f_52528[iParam0]->f_17, 0);
}

var func_803(var uParam0)
{
	return uParam0;
}

bool func_804(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_812(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

void func_805(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_806(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_813(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_814(iParam0))
	{
		return false;
	}
	if (func_815(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_816(iParam0, 1)) || func_100(32768))
	{
		if (!func_816(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_817())
	{
		return false;
	}
	return true;
}

void func_807(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_808()
{
	return Global_1572887->f_6;
}

bool func_809()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_15(func_95(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_818(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_810(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_811(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_813(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_814(int iParam0)
{
	if (func_816(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_815(int iParam0)
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

bool func_816(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_817()
{
	if (!func_418())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_818(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

