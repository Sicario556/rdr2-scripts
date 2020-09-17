void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(546))
	{
		func_1(&uScriptParam_0);
		terminate_this_thread();
	}
	func_2(&uScriptParam_0, &uLocal_657);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_657, func_4());
		wait(0);
	}
	func_1(&uScriptParam_0);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	bVar0 = _0x139efb0a71dd9011();
	bVar1 = _0x7ce9dc58e3e4755f();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || bVar1)
		{
			if (!is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
		}
	}
	func_6();
	func_7(uParam0);
	if (func_8(&(uParam0->f_9), 1))
	{
		func_9(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (func_10(iVar2))
		{
			func_11(uParam0, iVar2);
		}
		iVar2++;
	}
	func_12();
	if (func_13(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				func_14(uParam0->f_5);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				func_16(uParam0->f_5, 0, 2);
				func_17();
				func_18();
				func_19(uParam0, 0, 1);
				Global_1391438->f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_40.f_6563.f_274[iVar3]->f_1 == uParam0->f_1)
					{
						Global_40.f_6563.f_274[iVar3]->f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!func_20(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514->f_11, 1);
				}
				else
				{
					func_22(uParam0->f_5, Global_1879514->f_11);
				}
				func_23();
				func_17();
				func_18();
				Global_1391438->f_3 = -1;
				if (uParam0->f_1 == -1891229662 && _uilog_is_entry_registered(3, 2116153146))
				{
					if (chal_mission_is_goal_complete(2116153146, -619793955))
					{
						_uilog_add_or_update_objective(3, 2116153146, -1964527373, "MISS_CHALL_TIME_5_45", true, true, false);
					}
					if (chal_mission_is_goal_complete(2116153146, -93744849))
					{
						_uilog_add_or_update_objective(3, 2116153146, -485522501, "CABR01_CHALL_1", true, true, false);
					}
					switch (chal_mission_get_num_goals_complete(2116153146))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514->f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					_uilog_set_entry_icon_texture(3, 2116153146, get_hash_key(sVar4), 908516622);
					_0xe824ce7d13fcb300(2116153146, func_24());
					_uilog_mark_mission_completed(2116153146);
					_0xa31013798fadcadc(3, 2116153146, 1);
				}
				else
				{
					func_19(uParam0, 1, 0);
				}
				if (func_20(32768))
				{
					do_screen_fade_out(0);
					func_25();
					func_26(0);
				}
				break;
			case 3:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				func_15(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				func_15(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_27(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_28(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	_0x1096603b519c905f("");
	if (does_blip_exist(uParam0->f_43))
	{
		remove_blip(&(uParam0->f_43));
	}
	if (_0xd1f6b912785bfd35(player_id()))
	{
		_0x908d4b72854c8f62(player_id());
	}
	if (_0x2009f8ab7a5e9d6d(player_id()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
	if (func_29(Global_35, 0))
	{
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
	}
	func_30(64);
	if (!func_31(Global_36))
	{
		func_32(1);
		func_33(0);
	}
	func_34(Global_1935630, 256);
	func_35(uParam0);
	_uilog_clear_cached_objective();
}

int func_2(var uParam0, var uParam1)
{
	if (is_string_null_or_empty(&(uParam0->f_68)))
	{
		return 0;
	}
	if (func_36(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && func_37(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

bool func_3(var uParam0)
{
	if (func_29(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!func_29(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((func_38(uParam0->f_14) || func_39(uParam0)) || func_40(uParam0))
		{
			if (!_0x139efb0a71dd9011())
			{
				func_41(1, 1);
				func_42(&uLocal_657);
			}
			if (!func_38(uParam0->f_14) || _0x7ce9dc58e3e4755f())
			{
				do_screen_fade_out(0);
				_0x16e9abdd34ddd931();
				return true;
			}
		}
		if (func_39(uParam0) || func_40(uParam0))
		{
			func_43(&(Global_1347343->f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		func_44(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = func_46(uParam0);
				return false;
			}
			if (func_47(&(Global_1391438->f_5), 128) || func_8(&(uParam0->f_9), 896))
			{
				func_48(&(Global_1391438->f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				_0xa079ff7cfb9ac8bd(func_50(), 4);
				func_19(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				iVar0 = func_52(*uParam0);
				Global_40.f_7039[func_53(iVar0, 1)] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_4()
{
	return -1;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	if (!uParam1->f_281)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_54(uParam1->f_66[iVar0], 1048576))
		{
			if (func_55(uParam0, uParam1->f_66[iVar0], iParam2))
			{
				if (func_56(uParam1->f_66[iVar0], 1))
				{
					if (func_54(uParam1->f_66[iVar0], 4))
					{
						func_57(uParam1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_6()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_10(iVar0))
		{
			func_59(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_60(&(Global_1359489->f_40), 1);
}

void func_7(var uParam0)
{
	set_player_control(player_id(), true, 0, false);
	if (_0x62de46f061caa468() > 0)
	{
		_0x7d4e70a67a651c71(_0x62de46f061caa468());
	}
	if (does_entity_exist(&(Local_15.f_307[0])))
	{
		set_ped_config_flag(&(Local_15.f_307[0]), 297, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 315, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 130, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 331, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 330, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 279, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 167, false);
		set_ped_config_flag(&(Local_15.f_307[0]), 512, false);
	}
	set_ped_config_flag(Global_35, 473, false);
	set_ped_config_flag(Global_35, 474, false);
	set_ped_config_flag(Global_35, 475, false);
	set_ped_config_flag(Global_35, 258, false);
	_0x949b2f9ed2917f5d(Global_35, 3);
	_0x949b2f9ed2917f5d(Global_35, 4);
	_0x949b2f9ed2917f5d(Global_35, 1);
	_0x949b2f9ed2917f5d(Global_35, 23);
	_0x949b2f9ed2917f5d(Global_35, 24);
	_0xeae3b5b019c8d23f(Global_35, 1);
	_0xeae3b5b019c8d23f(Global_35, 32);
	_0xeae3b5b019c8d23f(Global_35, 8);
	_0xeae3b5b019c8d23f(Global_35, 16);
	_0xeae3b5b019c8d23f(Global_35, 4);
	_0xeae3b5b019c8d23f(Global_35, 128);
	if (does_entity_exist(&(Local_15.f_307[2])))
	{
		set_ped_config_flag(&(Local_15.f_307[2]), 136, false);
	}
	if (does_entity_exist(&(Local_15.f_307[17])))
	{
		set_ped_config_flag(&(Local_15.f_307[17]), 159, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 225, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 297, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 130, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 315, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 351, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 21, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 302, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 360, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 317, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 359, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 213, false);
		set_ped_config_flag(&(Local_15.f_307[17]), 6, false);
	}
	if (does_entity_exist(&(Local_15.f_307[18])))
	{
		set_ped_config_flag(&(Local_15.f_307[18]), 301, false);
	}
	if (does_entity_exist(&(Local_15.f_307[19])))
	{
		set_ped_config_flag(&(Local_15.f_307[19]), 301, false);
	}
	if (does_entity_exist(&(Local_15.f_307[13])))
	{
		set_ped_config_flag(&(Local_15.f_307[13]), 186, false);
	}
	if (func_10(uParam0->f_2))
	{
		func_61(uParam0->f_2, 0);
		func_62(uParam0->f_2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	if (does_entity_exist(&(Local_15.f_307[1])))
	{
		func_63(&(Local_15.f_307[1]), uParam0->f_2, 1, 0, 0);
	}
	func_64(&(Local_15.f_53[7]));
	_0xd17672447692478e(&(Local_15.f_53[19]), 0);
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (_does_volume_exist(&(Local_15.f_53[iVar0])))
		{
			_delete_volume(&(Local_15.f_53[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 16;
	while (iVar0 <= 17)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 10;
	while (iVar0 <= 15)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			if (iVar0 == 13)
			{
				set_ped_config_flag(&(Local_15.f_307[iVar0]), 186, false);
			}
			func_65(Local_15.f_307[iVar0], 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (does_entity_exist(&(Local_15.f_466[iVar0])))
		{
			delete_object(Local_15.f_466[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		Local_15.f_204[iVar0] = 0;
		iVar0++;
	}
	func_67(Local_15.f_418, func_66(Local_15.f_418));
	func_67(Local_15.f_419, func_66(Local_15.f_419));
	func_68(&(Local_15.f_421));
	if (Local_15.f_423 != -1)
	{
		_0x9cf1836c03fb67a2(&(Local_15.f_423), 1);
		Local_15.f_423 = -1;
	}
	if (Local_15.f_424 != -1)
	{
		_0x9cf1836c03fb67a2(&(Local_15.f_424), 1);
		Local_15.f_424 = -1;
	}
	clear_weather_type_persist();
	func_69(1410198831);
	func_70(7);
	set_scenario_type_enabled("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
	_0x9f348de670423460(func_71(0));
	_0x9f348de670423460(func_71(1));
	_0x9f348de670423460(func_71(2));
	_0x9f348de670423460(func_71(3));
}

bool func_8(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

void func_9(int iParam0)
{
	func_72(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_73(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_62(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		stop_ped_speaking(func_74(iParam1), false);
		func_62(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_75(iVar0, 1))
		{
			func_76(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	iVar0 = func_77(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	if (!func_78(iParam0))
	{
		return;
	}
	if (iParam0 != func_79(0))
	{
		return;
	}
	if (func_80(iParam0) == 0)
	{
	}
	iVar0 = func_81(iParam0);
	if (func_82(iParam0) == 3)
	{
		if (func_80(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_80(iParam0)))
		{
			if (func_81(iParam0) != 1 && func_81(iParam0) != 8)
			{
				func_83(func_81(iParam0), func_80(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_84(iParam0);
	func_32(1);
	func_33(0);
	func_85(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_86(1);
			func_87(15, 0, 1);
			break;
		case 4:
			func_87(10, 0, 1);
			break;
		case 8:
			func_87(10, 0, 1);
			break;
		case 9:
			func_87(10, 0, 1);
			break;
		case 2:
			func_87(10, 0, 1);
			break;
		case 6:
			func_87(10, 0, 1);
			break;
		case 5:
			func_87(10, 0, 1);
			break;
	}
	func_88(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_89(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_43(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_43(&(Global_1347343->f_11), 16384);
	}
	if (func_90() >= 2)
	{
		if (!func_89(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_91(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_92(Global_1935630, 2048);
	func_93(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	if (!func_78(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_94(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_80(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_82(iParam0) == 3 || (func_82(iParam0) == 1 && _0x01f4d242765c6b24(func_80(iParam0))))
	{
		func_83(func_81(iParam0), func_80(iParam0), iParam2);
		if ((!func_78(Global_1572864->f_8) && !func_95(0, 1, 0)) && !func_96(&Global_1935630, 32768))
		{
			iVar0 = func_97(iParam0);
			if (iVar0 != -1)
			{
				func_98(0);
			}
			else if (func_81(iParam0) == 8)
			{
				iVar0 = func_99();
				if (iVar0 != -1)
				{
					func_98(0);
				}
			}
		}
	}
	func_85(iParam0, 0);
	if (func_79(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_88(1);
	}
	func_100(iParam0, 1);
	func_84(iParam0);
}

void func_17()
{
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_18()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_101(0);
	func_102(0);
	func_103(0);
	func_104(0);
	func_105(0);
	func_91(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_106(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_107(uParam0->f_1);
	iVar1 = get_hash_key(sVar0);
	if (!_uilog_is_entry_registered(3, iVar1))
	{
		StringCopy(&cVar2, _create_var_string(2, func_108(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, _create_var_string(2, func_109(uParam0->f_2, 0)), 64);
		_uilog_add_entry_hash(3, iVar1, Global_36, get_hash_key(func_108(*uParam0)), func_110(uParam0->f_1), iVar10);
		_uilog_update_entry_subheader(3, iVar1, &cVar2);
		_uilog_set_entry_icon_texture(3, iVar1, func_111(*uParam0), 676312963);
		_uilog_set_entry_brief_texture(3, iVar1, func_112(uParam0->f_1), func_113(uParam0->f_1));
	}
	else if (bParam2)
	{
		_uilog_remove_entry(3, iVar1);
		return;
	}
	_uilog_add_or_update_objective(3, iVar1, func_110(uParam0->f_1), "", bParam1, false, false);
	if (bParam1)
	{
		_uilog_mark_mission_completed(iVar1);
	}
}

bool func_20(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_78(iParam0))
	{
		return;
	}
	if (func_77(iParam0) == 4)
	{
		func_115(iParam0, func_114());
		if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
		{
			if (bParam3)
			{
				func_85(iParam0, 6);
			}
			else
			{
				func_85(iParam0, 5);
			}
			func_84(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_81(iParam0);
	bVar1 = func_116() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_117(0, 2);
		if (!bVar1 && bParam1)
		{
			func_118();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_119(iParam0);
	}
	else
	{
		Var2 = { func_120(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_120(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_82(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_121(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_121(iParam0)]->f_8), true);
						}
					}
					else if ((func_121(iParam0) != 95 && func_121(iParam0) != 82) && !func_122((*Global_1347702)[func_121(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_121(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_121(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_124(func_121(iParam0), iVar6, func_123());
	}
	else if (iVar0 == 8)
	{
		func_126(func_121(iParam0), iVar6, func_123(), func_125());
	}
	if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
	{
		iVar9 = func_127(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_128(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_129(func_121(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_130((iVar10 - 20), 0, iVar10);
					iVar11 = func_130((iVar11 - 10), 0, iVar11);
				}
				func_86(1);
				func_87(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_87(45, 0, 1);
				break;
			case 8:
				iVar10 = func_131(func_121(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_130((iVar10 - 20), 0, iVar10);
					iVar11 = func_130((iVar11 - 10), 0, iVar11);
				}
				func_87(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_132(func_121(iParam0)))
				{
					func_133(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_87(120, 0, 1);
				break;
			case 2:
				func_87(120, 0, 1);
				break;
			case 6:
				func_87(func_135(func_134(iParam0)), 0, 1);
				break;
			case 5:
				func_87(120, 0, 1);
				break;
		}
	}
	func_100(iParam0, 1);
	func_115(iParam0, func_114());
	func_84(iParam0);
	if ((!func_82(iParam0) == 0 && bParam1) && func_116() == -1)
	{
		iVar12 = func_97(iParam0);
		if (iVar12 != -1)
		{
			func_98(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_99();
			if (iVar12 != -1)
			{
				func_98(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_121(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_136(func_121(iParam0)) && func_122((*Global_1347702)[func_121(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_121(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_137();
				}
				break;
			case 8:
				if (func_121(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_137();
				}
				break;
		}
	}
	if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
	{
		if (bParam3)
		{
			func_85(iParam0, 6);
		}
		else
		{
			func_85(iParam0, 5);
		}
		func_84(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_121(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_138();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_139(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1267972061);
						func_139(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1619534881);
						func_139(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-755457379);
						func_139(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1015404643);
						func_139(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1724192342);
						func_139(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(1310680212);
						func_139(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-566881549);
						func_139(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-1753730528);
						func_139(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(147796381);
						func_139(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(-378547623);
						func_139(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(829545206);
						func_139(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140(891318243);
						func_139(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_141();
						func_142(967523420);
						func_143();
						func_144();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_109(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_139(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_145(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_145(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_146(304805134, 1, 1);
						if (!func_147((*Global_1347702)[21]->f_15, 1))
						{
							func_21((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_148();
						break;
					case 26:
						func_149();
						break;
					case 17:
						func_150(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_151())
						{
							func_152(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_153(-514575035, -1))
						{
							iVar15 = func_114();
							func_154(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_155(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_151())
						{
							func_152(1529685685);
						}
						break;
					case 34:
						if (func_151())
						{
							func_152(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_156();
						break;
					case 37:
						func_157();
						if (func_158())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_159();
						break;
					case 43:
						func_160();
						break;
					case 44:
						if (!func_147((*Global_1347702)[82]->f_15, 1))
						{
							func_21((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_147((*Global_1347702)[83]->f_15, 1))
						{
							func_21((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_161();
						break;
					case 59:
						func_162();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_163();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_164();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_145(451, 0);
						}
						if (!func_165(-1992824800))
						{
							if (func_165(1520110311))
							{
								iVar16 = func_114();
								func_154(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_155(1937177603, iVar16, 1);
							}
						}
						if (func_166(4))
						{
							if (!func_167(684296857, 1, 0))
							{
								iVar17 = func_114();
								func_154(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_155(-1439688706, iVar17, 1);
							}
						}
						func_139(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_168(89200);
						func_168(2300);
						func_168(2300);
						break;
					case 68:
						func_169();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_170();
						func_168(-139100);
						break;
					case 69:
						if (func_147((*Global_1347702)[9]->f_15, 1))
						{
							func_168(-6000);
						}
						break;
					case 70:
						func_168(23400);
						func_168(1900);
						func_168(-15000);
						break;
					case 71:
						func_168(-5500);
						break;
				}
				break;
			case 8:
				switch (func_121(iParam0))
				{
					case 0:
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
						}
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						break;
					case 22:
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						break;
					case 24:
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						break;
					case 26:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						break;
					case 30:
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						break;
					case 37:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						break;
					case 56:
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						break;
					case 57:
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						break;
					case 58:
						func_171();
						break;
					case 59:
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						break;
					case 61:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_172();
						break;
					case 66:
						func_173();
						func_174();
						break;
					case 67:
						if (!func_175(6))
						{
							func_176(6);
						}
						if (!func_175(3))
						{
							func_176(3);
						}
						if (func_151())
						{
							func_152(1534638301);
						}
						break;
					case 68:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						break;
					case 91:
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						break;
					case 98:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						break;
					case 101:
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						break;
					case 115:
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						break;
					case 120:
						_0xd8c7162ab2e2af45(1720279629);
						break;
					case 138:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						break;
					case 139:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						break;
					case 140:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						break;
					case 143:
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						break;
					case 147:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						break;
					case 9:
						if (func_147((*Global_1835011)[69]->f_1, 1))
						{
							func_177(0);
							func_168(40500);
						}
						else
						{
							func_177(0);
							func_168(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_121(iParam0))
				{
					case 0:
						switch (func_134(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_178(iParam0);
		func_179();
		switch (iVar0)
		{
			case 1:
				switch (func_121(iParam0))
				{
					case 4:
						func_180(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_180(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_180(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_180(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_180(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_180(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_180(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_181(iParam0);
						func_180(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_180(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_180(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_167(-2046502963, 1, 0))
						{
							func_139(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_180(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_180(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_180(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_181(iParam0) == 0)
						{
							func_180(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_180(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_122((*Global_1347702)[func_121(iParam0)]->f_12, 536870912))
				{
					func_182(11, 1);
				}
				switch (func_121(iParam0))
				{
					case 109:
						func_180(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_182(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_180(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_180(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_180(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_180(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_183(0, 10, 11, 2116153146))
				{
					func_180(iParam0, func_181(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 7, 11, -379687487))
				{
					func_180(iParam0, func_184(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 8, 11, -1386089015))
				{
					func_180(iParam0, func_184(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 11, 11, -1952009645))
				{
					func_180(iParam0, func_184(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_183(0, 12, 11, 2065895756))
				{
					func_180(iParam0, func_184(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_82(iParam0) == 0)
			{
				if (func_80(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_80(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_83(func_81(iParam0), func_80(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_121(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_186(func_185(Global_1879514->f_1));
						if (iVar0 == 8 && func_121(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_136(func_121(iParam0)) && func_122((*Global_1347702)[func_121(iParam0)]->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_187(bParam2, iVar20);
		}
	}
	func_88(1);
	if ((bVar13 || func_137()) && (func_81(iParam0) == 1 || func_81(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_80(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_83(func_81(iParam0), func_80(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_81(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_183(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_94(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_82(iParam0) == 5 && !func_82(iParam0) == 6)
		{
			if (bParam1)
			{
				func_85(iParam0, 6);
			}
			else
			{
				func_85(iParam0, 5);
			}
			func_84(iParam0);
		}
	}
	switch (func_81(iParam0))
	{
		case 1:
			switch (func_121(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_121(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_23()
{
	if (chal_is_goal_active(-816321659, -1044347982))
	{
		switch (func_188())
		{
			case 1:
				chal_add_goal_progress_int_by_score_id(-85949609, 1);
				break;
			case 2:
				chal_add_goal_progress_int_by_score_id(-1718529554, 1);
				break;
			case 3:
				chal_add_goal_progress_int_by_score_id(1480231309, 1);
				break;
		}
	}
}

int func_24()
{
	iVar0 = func_189(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_190(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = chal_mission_get_num_goals(iVar0);
		iVar2 = chal_mission_get_num_goals_complete(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_25()
{
	func_191(4112);
	func_192(6);
	vVar2 = { func_193((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_194(vVar2, uVar1, uVar0, 0);
	func_195(vVar2);
	Global_40.f_9.f_15 = func_196(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_26(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	func_191(32);
	if (iParam0 == 0)
	{
		func_191(16);
	}
	else if (iParam0 == 1)
	{
		func_191(8);
	}
	func_197();
	Global_43889 = 1;
}

struct<8> func_27(int iParam0)
{
	StringCopy(&cVar0, "ALLY_DEAD_", 64);
	if (!func_58(iParam0))
	{
		return cVar0;
	}
	StringConCat(&cVar0, func_198(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_198(iParam0), 64);
	StringConCat(&Var0, "_ABANDON", 64);
	return Var0;
}

bool func_29(int iParam0, int iParam1)
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
	if (func_199(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_199(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_199(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_199(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_199(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_199(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_199(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_199(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_30(int iParam0)
{
	switch (func_116())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_31(vector3 vParam0)
{
	iVar0 = func_196(vParam0, 1);
	if (iVar0 == func_200())
	{
		return true;
	}
	return false;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_34(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_92(Global_1935630, 4194304);
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

int func_33(bool bParam0)
{
	if (!bParam0 && func_201(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_35(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (func_202(uParam0->f_44))
	{
		func_203(&(uParam0->f_44), 1, 1);
	}
	if (func_204(&(uParam0->f_45)))
	{
		func_205(&(uParam0->f_45));
	}
}

bool func_36(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_270)
	{
		if (!func_206(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (func_207(uParam0, 0))
			{
				if (func_208(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_209(uParam0, 1, &iVar0))
					{
					}
					if (func_210(uParam0, 3, &cVar2))
					{
					}
					if (func_209(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_209(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_209(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_209(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_209(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_211(uParam0, &cVar2, uParam0->f_273))
							{
								*(*uParam0)[uParam0->f_273] = { cVar2 };
								func_212((*uParam0)[uParam0->f_273], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*uParam0->f_33[uParam0->f_274] = { cVar2 };
							func_212(uParam0->f_33[uParam0->f_274], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*uParam0->f_66[uParam0->f_275] = { cVar2 };
							func_212(uParam0->f_66[uParam0->f_275], 1048576);
							if (!bVar19 && func_54(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_66[uParam0->f_275]);
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!func_211(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*uParam0->f_227[uParam0->f_276] = { cVar2 };
							func_212(uParam0->f_227[uParam0->f_276], 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!func_37(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (func_207(uParam0, 12))
			{
				if (func_209(uParam0, 13, &iVar0))
				{
				}
				if (func_209(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (is_model_valid(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		func_213(uParam0);
	}
	return true;
}

bool func_37(var uParam0)
{
	return uParam0->f_269;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 7:
			return false;
		default:
			break;
	}
	return true;
}

bool func_39(var uParam0)
{
	if (func_199(Local_15.f_631, 8192))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if (is_entity_dead(&(Local_15.f_307[2])) || is_ped_fatally_injured(&(Local_15.f_307[2])))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KPLH", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if ((_0x88ad6cc10d8d35b2(&(Local_15.f_307[1])) && is_entity_dead(&(Local_15.f_307[1]))) || is_ped_fatally_injured(&(Local_15.f_307[1])))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KCPH", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if (func_214(player_id(), 1, 0, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_WPL", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if (func_199(Local_15.f_631, 65536))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KLDB", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if (func_199(Local_15.f_631, 2097152))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_DSPLT", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	if (has_entity_been_damaged_by_entity(&(Local_15.f_307[0]), Global_35, 1, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_AGRC", 24);
		uParam0->f_14 = 2;
		trigger_music_event("HUNT02_FAIL");
		return true;
	}
	return false;
}

bool func_40(var uParam0)
{
	if (is_ped_being_arrested(player_ped_id()))
	{
		uParam0->f_14 = 6;
		return true;
	}
	if (!func_29(player_ped_id(), 0))
	{
		uParam0->f_14 = 3;
		return true;
	}
	if (!func_29(func_74(uParam0->f_2), 0))
	{
		uParam0->f_14 = 4;
		return true;
	}
	return false;
}

void func_41(bool bParam0, bool bParam1)
{
	if (((is_weapon_valid(Global_1935630->f_44) && _is_weapon_sniper(Global_1935630->f_44)) && get_ped_reset_flag(Global_35, 0)) && _0xa24c1d341c6e0d53(1, 1, 1))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && get_ped_reset_flag(Global_35, 0))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_215(0);
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		animpostfx_stop_all();
	}
	if (bParam1)
	{
		_trigger_mission_failed_cam();
	}
}

void func_42(var uParam0)
{
	func_216(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
	if (!func_29(func_74(uParam0->f_2), 0))
	{
		return;
	}
	if (!func_204(&(uParam0->f_48)))
	{
		func_60(&(uParam0->f_48), 0);
	}
	switch (uParam0->f_13)
	{
		case 2:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (!is_ped_on_foot(Global_35))
				{
					if (!uParam0->f_51)
					{
						uParam0->f_51 = 1;
						func_218(&(uParam0->f_48));
					}
					else if (func_219(&(uParam0->f_48)) > 5f)
					{
						func_220(&(uParam0->f_10), 1, 1);
						func_221(uParam0, "departLine", 0, 0, 0, -1);
						func_218(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (func_219(&(uParam0->f_48)) > 4f)
				{
					func_220(&(uParam0->f_10), 1, 1);
					func_221(uParam0, "departLine", 0, 0, 0, -1);
					func_218(&(uParam0->f_48));
				}
				return;
			}
			if (!func_217(&(uParam0->f_10), 2))
			{
				if (func_223(Global_35, func_222(), 1) > 150f)
				{
					func_220(&(uParam0->f_10), 2, 1);
					func_221(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

int func_45(var uParam0)
{
	if (Local_15 < 10)
	{
		func_224();
		func_225();
		func_226();
		func_227(uParam0);
		func_228(uParam0);
		func_229();
		_0xc3abcfbc7d74afa5(Global_35, 15, 1);
		if (func_230())
		{
			if (does_entity_exist(Local_15.f_375))
			{
				_0xc3abcfbc7d74afa5(Local_15.f_375, 12, 1);
			}
			if (get_ped_config_flag(&(Local_15.f_307[2]), 136, true))
			{
				set_ped_config_flag(&(Local_15.f_307[2]), 136, false);
			}
		}
		if (Local_15.f_568)
		{
			func_231();
		}
		if (func_232(0))
		{
			_0xc71d07c96946e263(player_id(), &(Local_15.f_307[2]));
		}
	}
	switch (Local_15)
	{
		case 0:
			if (!func_29(&(Local_15.f_307[0]), 0))
			{
				return 0;
			}
			if (is_entity_dead(&(Local_15.f_307[1])))
			{
				return 0;
			}
			func_233(0, 0);
			func_235(uParam0, func_234(0), func_234(1), 0, 1);
			func_236(1, 1);
			break;
		case 1:
			if (func_237(uParam0))
			{
				func_236(2, 1);
			}
			break;
		case 2:
			if (func_238(uParam0))
			{
				func_236(3, 1);
			}
			break;
		case 3:
			if (func_239(uParam0))
			{
				func_236(4, 1);
			}
			break;
		case 4:
			set_ped_reset_flag(&(Local_15.f_307[0]), 179, true);
			func_240();
			if (func_241(uParam0))
			{
				func_236(5, 1);
			}
			break;
		case 5:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_243(uParam0))
			{
				func_236(6, 1);
			}
			break;
		case 6:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_244(uParam0))
			{
				func_236(7, 1);
			}
			break;
		case 7:
			set_ped_reset_flag(&(Local_15.f_307[0]), 179, true);
			_0xc3abcfbc7d74afa5(Global_35, 0, 1);
			func_240();
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (func_245(uParam0))
			{
				func_236(8, 1);
			}
			break;
		case 8:
			set_ped_reset_flag(&(Local_15.f_307[0]), 179, true);
			_0xc3abcfbc7d74afa5(Global_35, 0, 1);
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_246();
			if (func_247(uParam0))
			{
				func_236(9, 1);
			}
			break;
		case 9:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (func_223(&(Local_15.f_307[17]), 872.5671f, 417.5553f, 110.7346f, 1) > 2f)
			{
				func_248(&(Local_15.f_307[17]), &(Local_15.f_632), 0f, 0f, 0.5f, 0, 1106247680, 20f, -1, 1000, 1000, 0.5f, 1, 1, 1084227584);
			}
			if (func_249(uParam0))
			{
				func_236(10, 1);
			}
			break;
		case 10:
			func_235(uParam0, func_234(8), func_234(8), 8, 8);
			uParam0->f_14 = 1;
			uParam0->f_13 = 6;
			func_236(11, 1);
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_250(uParam0))
		{
			return 0;
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_52)))
	{
		if (_does_text_database_exist(&(uParam0->f_52)))
		{
			_text_database_request(&(uParam0->f_52));
		}
	}
	return 1;
}

bool func_47(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_49(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_252(&(uParam0->f_3), func_251(iVar0)))
		{
			if (func_253(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_254(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!func_75(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_255(iVar0, 0);
					stop_ped_speaking(func_74(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_254(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_256(uParam0))
	{
		return false;
	}
	func_257(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_258(uParam0))
		{
			return false;
		}
	}
	sVar1 = func_107(uParam0->f_1);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x1096603b519c905f(sVar1);
	}
	if (func_259())
	{
		func_260(1);
	}
	func_261(64);
	func_32(1);
	func_92(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_262(Global_36, get_entity_heading(Global_35));
	}
	return true;
}

int func_50()
{
	return get_player_group(get_player_index());
}

bool func_51(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!is_thread_active(uParam0->f_27, false))
		{
			return true;
		}
	}
	else if (func_263(uParam0))
	{
		if (func_264(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return 395864095;
		case 234527101:
			return -848293915;
		case 1784895540:
			return 337593120;
		case -1511391406:
			return 1459000719;
		case 654481153:
			return 70208796;
		case -1215120894:
			return -424258227;
		case 931703394:
			return 497820992;
		case 1193949598:
			return 384487969;
		case 754620122:
			return -1911358023;
		case -2036347356:
			return 1238571818;
		case -1341684320:
			return -448585888;
		case -919476462:
			return 1761188575;
		case -1670940721:
			return 189861409;
		case 380107708:
			return -1481840534;
		case -1700356309:
			return 1108319169;
		case 1523333387:
			return -414878571;
		case 1744128959:
			return -363271663;
		case -1567081107:
			return -1084190204;
		case -1739349092:
			return -667426721;
		case -301635006:
			return 309704192;
		case 565221344:
			return 1315551623;
		default:
			break;
	}
	return -848293915;
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1911358023:
			return 8;
		case -1481840534:
			return 13;
		case -1084190204:
			return 17;
		case -848293915:
			return 1;
		case -667426721:
			return 18;
		case -448585888:
			return 10;
		case -424258227:
			return 5;
		case -414878571:
			return 15;
		case -363271663:
			return 16;
		case 70208796:
			return 4;
		case 189861409:
			return 12;
		case 309704192:
			return 19;
		case 337593120:
			return 2;
		case 384487969:
			return 7;
		case 395864095:
			return 0;
		case 497820992:
			return 6;
		case 1108319169:
			return 14;
		case 1238571818:
			return 9;
		case 1315551623:
			return 20;
		case 1459000719:
			return 3;
		case 1761188575:
			return 11;
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

bool func_54(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_55(var uParam0, var uParam1, int iParam2)
{
	if (func_54(uParam1, 1))
	{
		return false;
	}
	switch (func_265(uParam1))
	{
		case 0:
			return iParam2 >= 0;
		case 1:
			return uParam1->f_11 == iParam2;
		case 3:
			return uParam0->f_14 == 1;
		case 2:
			return uParam0->f_14 == 2;
	}
	return false;
}

bool func_56(char* sParam0, bool bParam1)
{
	if (func_54(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_212(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_212(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_212(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_212(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_212(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_212(sParam0, 1);
		return true;
	}
	func_212(sParam0, 1);
	return false;
}

void func_57(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		if ((func_54(uParam0->f_66[iVar0], 1048576) && func_54(uParam0->f_66[iVar0], 4)) && !func_54(uParam0->f_66[iVar0], 1))
		{
			prepare_music_event(uParam0->f_66[iVar0]);
			return;
		}
		iVar0++;
	}
}

bool func_58(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_266(iParam0))
		{
			return;
		}
	}
	func_267(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_204(uParam0))
	{
		func_218(uParam0);
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_74(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_74(iParam0), 204, false);
	}
}

void func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_73(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_59(iParam0, 56, 1);
		func_60(&(Global_1359489->f_40), 1);
	}
	func_268(iParam0, 0);
	func_72(iParam0, 4, 0);
	func_9(iParam0);
	func_269(iParam0);
	func_270(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0], 0);
	iVar1 = func_271(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_272(iParam0, 64, 1))
	{
		func_270(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_270(iParam0, 33, 1);
		func_270(iParam0, 34, 1);
		func_273(iParam0, 1056964608, -1, 1061158912);
		func_274(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_59(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_59(iParam0, 35, 1);
			if (bParam8)
			{
				func_59(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_61(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_270(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_59(iParam0, 33, 1);
		func_274(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_60(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_205(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_59(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_275(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_272(iParam0, 45, 1))
	{
		func_270(iParam0, 45, 1);
	}
	func_276(iParam0, 16, 1);
	func_270(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_277(iParam0), 0))
		{
			func_63(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_63(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_266(iParam1))
	{
		return;
	}
	iVar0 = func_277(iParam1);
	if (func_278(iParam1))
	{
		if (!func_279(iParam1))
		{
			return;
		}
	}
	func_270(iParam1, 39, 1);
	func_280(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_280(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_280(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_281(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_64(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_65(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

char[] func_66(int iParam0)
{
	if (iParam0 == Local_15.f_418)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig1_confront@hunt02_ig1";
	}
	else if (iParam0 == Local_15.f_419)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig2_let_go@action";
	}
	return "";
}

void func_67(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_delete_anim_scene(iParam0);
}

void func_68(var uParam0)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, false);
		remove_named_ptfx_asset(-458373790);
		func_282(&(uParam0->f_1), 4);
	}
}

void func_69(int iParam0)
{
	iVar0 = func_283(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_70(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_285(iParam0, 32);
	func_286();
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@ATTACKER";
		case 1:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@VICTIM";
		case 2:
			return "CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@INTIMIDATION@ON_KNEES@_STREAMED";
		case 3:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@ON_KNEES@_BASE";
		default:
			break;
	}
	return "";
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	if (!func_266(iParam0))
	{
		return;
	}
	func_287(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_73(int iParam0)
{
	return func_288(iParam0, 16, 1);
}

int func_74(int iParam0)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_75(int iParam0, bool bParam1)
{
	iVar0 = func_74(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_50(), 1);
}

void func_76(int iParam0)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_75(iParam0, 0))
	{
	}
	func_289(iParam0);
	Global_1359489->f_15 = func_290(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_291();
	func_270(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_292();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

int func_77(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_82(iParam0);
}

bool func_78(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_79(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_80(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_81(int iParam0)
{
	if (!func_78(iParam0))
	{
		return 0;
	}
	return func_294(func_293(iParam0));
}

int func_82(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_295(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_116() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_84(int iParam0)
{
	return func_297(func_296(iParam0));
}

void func_85(int iParam0, int iParam1)
{
	if (!func_78(iParam0))
	{
		return;
	}
	func_298(iParam0, iParam1);
}

void func_86(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_87(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_299(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

void func_88(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_90()
{
	return Global_1572864->f_12;
}

void func_91(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(bool bParam0)
{
	if (func_300(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_301();
	Var1.f_3.f_3 = iVar0;
	if ((!func_302(Global_1347343->f_2) && !func_89(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_303();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_89(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_304();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_89(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_305();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_306(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_307(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_43(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_43(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

bool func_94(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_82(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_95(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_308())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_121(&(Global_1898164->f_1[0]));
		if (func_136(iVar0) && func_122((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_78(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_97(int iParam0)
{
	switch (func_81(iParam0))
	{
		case 1:
			iVar0 = func_121(iParam0);
			return func_309(iVar0);
		case 8:
			iVar1 = func_121(iParam0);
			if (func_122((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_310(iVar1);
			}
			break;
	}
	return -1;
}

void func_98(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_116() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_311(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_312();
		Global_1898077->f_9 = func_313(Global_1894899->f_2);
		func_314(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_99()
{
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_147((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_147((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_147((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_147((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_147((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_147((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_100(int iParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return;
	}
	if (func_79(0) != iParam0)
	{
		return;
	}
	if (func_315(iParam0))
	{
		if (bParam1)
		{
			func_316(-525676072);
		}
		else
		{
			func_317(-525676072);
		}
	}
}

void func_101(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_102(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_103(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_105(1);
	}
}

void func_104(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_105(0);
	}
}

void func_105(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

bool func_106(int iParam0)
{
	switch (iParam0)
	{
		case -1891229662:
		case -589165916:
		case -103573613:
		case 194099983:
		case 673012160:
		case 2038046186:
			return false;
		default:
			break;
	}
	return true;
}

char* func_107(int iParam0)
{
	switch (iParam0)
	{
		case -589165916:
			return "";
		case -1894360593:
			return "CAHT02";
		case 581819093:
			return "CAFS01";
		case 687859577:
			return "CAFS02";
		case -103573613:
			return "CAFF01";
		case 1202375449:
			return "CAHT06";
		case 2038046186:
			return "CADM01";
		case -839878969:
			return "CACR02";
		case -360730635:
			return "CACR03";
		case -1891229662:
			return "CABR01";
		case -668333238:
			return "CACR01";
		case 99378894:
			return "CACR04";
		case 673012160:
			return "CARS02";
		case -1220302226:
			return "PRHM6";
		default:
			break;
	}
	return "";
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case 1784895540:
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case 654481153:
			return "ACT_FISHING_LABEL";
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case -2036347356:
			return "ACT_POKER_LABEL";
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
		case -919476462:
			return "ACT_COACH_LABEL";
		case -1670940721:
			return "ACT_BANK_LABEL";
		case 380107708:
			return "ACT_TRAIN_LABEL";
		case 565221344:
			return "ACT_HOMEROB_LABEL";
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
		case -1739349092:
			return "ACT_RETURN_LABEL";
		case -301635006:
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_109(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_147((*Global_1835011)[59]->f_1, 1) || func_147((*Global_1347702)[1]->f_15, 1)) || func_13((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_318(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return -1840581970;
		case 1202375449:
			return 1095369072;
		case 581819093:
			return -2070575365;
		case 687859577:
			return 1347299165;
		case -839878969:
			return 479371012;
		case -360730635:
			return -234019213;
		case -668333238:
			return 1087917139;
		case 99378894:
			return -454595750;
		case -1891229662:
			return 835736364;
		case -1220302226:
			return 780943699;
		case 673012160:
			return -611970161;
		default:
			break;
	}
	return -1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case 1202375449:
			return -2142998877;
		case 581819093:
		case 687859577:
			return -1289485729;
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
			return -534080567;
		case -1891229662:
			return -583510864;
		case -1220302226:
			return 372620435;
		case 673012160:
			return 864008392;
		default:
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case -1891229662:
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
		case 581819093:
		case 673012160:
		case 687859577:
		case 1202375449:
			return -1524039902;
		case -1220302226:
			return -2029665572;
		default:
			break;
	}
	return -1;
}

int func_114()
{
	return &Global_1899515;
}

void func_115(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_116()
{
	return Global_1572887->f_12;
}

int func_117(bool bParam0, int iParam1)
{
	if (!bParam0 && func_201(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_33(bParam0);
	return 1;
}

void func_118()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_58(iVar17))
		{
			iVar18 = func_74(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_205(&(Global_1359489->f_55));
	if (func_318(1777191912, 1))
	{
		func_319(1777191912, 1, 0);
	}
}

void func_119(int iParam0)
{
	if (!func_78(iParam0))
	{
		return;
	}
	func_321(iParam0, (func_320(iParam0) + shift_left(1, 16)));
}

struct<2> func_120(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_121(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_322(func_293(iParam0));
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_123()
{
	return func_323() > 0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_324(-1032423150, iParam1);
			break;
		case 18:
			func_324(294066959, iParam1);
			func_324(-1925639563, iParam1);
			func_324(-378582304, iParam1);
			func_324(-338306437, iParam1);
			break;
		case 20:
			func_324(437270255, iParam1);
			break;
		case 2:
			func_324(-304000413, iParam1);
			func_324(-533612796, iParam1);
			func_324(48036954, iParam1);
			break;
		case 23:
			func_324(193108691, iParam1);
			func_324(491732588, iParam1);
			func_324(671962088, iParam1);
			func_325(1);
			break;
		case 16:
			func_324(-1836056650, iParam1);
			func_324(-754657922, iParam1);
			func_324(-1752355838, iParam1);
			func_324(-1375324510, iParam1);
			break;
		case 59:
			func_324(-514392105, iParam1);
			func_324(-822060246, iParam1);
			if (func_326(146))
			{
				func_324(1372748575, iParam1);
			}
			func_325(1);
			break;
		case 76:
			func_324(1991352213, iParam1);
			if (func_327() == 0)
			{
				func_324(1852488616, iParam1);
			}
			else
			{
				func_324(-9866350, iParam1);
			}
			break;
		case 44:
			func_324(863852599, iParam1);
			func_324(1228374935, iParam1);
			func_324(1517889050, iParam1);
			func_324(830657578, iParam1);
			func_324(1901354958, iParam1);
			break;
		case 46:
			func_324(-582805654, iParam1);
			func_324(250378940, iParam1);
			func_324(-2143265426, iParam1);
			break;
		case 17:
			func_324(-941494139, iParam1);
			func_324(1641489521, iParam1);
			break;
		case 19:
			func_324(-1829423531, iParam1);
			func_324(-1590504752, iParam1);
			func_324(1357221321, iParam1);
			break;
		case 21:
			func_324(-1037992610, iParam1);
			func_324(-1286414399, iParam1);
			func_325(0);
			break;
		case 15:
			func_324(-1014460309, iParam1);
			func_324(-1030502825, iParam1);
			break;
		case 33:
			func_324(479388090, iParam1);
			func_324(-1396342239, iParam1);
			func_324(-619618632, iParam1);
			break;
		case 34:
			func_324(1193561641, iParam1);
			break;
		case 64:
			func_324(1363960851, iParam1);
			break;
		case 60:
			func_324(-1232453926, iParam1);
			func_324(-882833584, iParam1);
			break;
		case 73:
			func_324(2023205767, iParam1);
			break;
		case 74:
			func_324(-2135286513, iParam1);
			if (func_327() == 0)
			{
				func_324(33799444, iParam1);
			}
			else
			{
				func_324(-161343203, iParam1);
			}
			break;
		case 8:
			func_324(841639693, iParam1);
			func_324(358952323, iParam1);
			break;
		case 36:
			func_324(852538149, iParam1);
			func_324(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_324(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(1116039310, iParam1);
			}
			break;
		case 27:
			func_324(107633428, iParam1);
			func_324(335902282, iParam1);
			func_324(575673055, iParam1);
			func_324(-425944207, iParam1);
			break;
		case 28:
			func_324(-1941530250, iParam1);
			func_324(1399269304, iParam1);
			func_324(1839684664, iParam1);
			func_324(923168503, iParam1);
			func_324(-1485078322, iParam1);
			break;
		case 29:
			func_324(574995900, iParam1);
			func_324(-1691275407, iParam1);
			func_324(-1725307861, iParam1);
			break;
		case 31:
			func_324(-2108383238, iParam1);
			func_324(-1321828931, iParam1);
			func_324(-1632118592, iParam1);
			func_324(334938948, iParam1);
			break;
		case 4:
			func_324(115823701, iParam1);
			func_324(-1896939736, iParam1);
			func_324(-1830746356, iParam1);
			func_324(-1235169781, iParam1);
			func_325(0);
			break;
		case 6:
			func_324(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-384176140, iParam1);
			}
			break;
		case 25:
			func_324(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_324(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-1374849484, iParam1);
			}
			break;
		case 48:
			func_324(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(217772674, iParam1);
			}
			else
			{
				func_324(2071798160, iParam1);
			}
			if (func_328(51))
			{
				func_324(-792802286, iParam1);
			}
			break;
		case 49:
			func_324(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_324(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_324(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_324(1402120602, iParam1);
			}
			break;
		case 58:
			func_324(-1661934591, iParam1);
			break;
		case 50:
			func_324(-1713759426, iParam1);
			break;
		case 52:
			func_324(-314799932, iParam1);
			func_324(-462260432, iParam1);
			func_324(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_324(345256028, iParam1);
				func_324(-1635084094, iParam1);
			}
			else
			{
				func_324(114267347, iParam1);
			}
			break;
		case 32:
			func_324(615304157, iParam1);
			break;
		case 47:
			func_324(415434835, iParam1);
			break;
		case 69:
			func_324(1373465877, iParam1);
			if (func_147((*Global_1347702)[9]->f_15, 1))
			{
				func_324(-2058273527, iParam1);
			}
			break;
		case 70:
			func_324(451334985, iParam1);
			if (func_327() == 0)
			{
				func_324(-224150200, iParam1);
			}
			else
			{
				func_324(289012628, iParam1);
			}
			break;
		case 71:
			if (func_327() == 0)
			{
				func_324(-41692120, iParam1);
			}
			else
			{
				func_324(1537840678, iParam1);
			}
			break;
		case 37:
			func_324(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_324(1842132550, iParam1);
			}
			else
			{
				func_324(-785735240, iParam1);
			}
			func_324(-1605690566, iParam1);
			break;
		case 13:
			func_324(-731367459, iParam1);
			func_324(224176585, iParam1);
			func_324(-14545580, iParam1);
			break;
		case 53:
			func_324(1095274522, iParam1);
			break;
		case 54:
			func_324(-572027988, iParam1);
			break;
		case 56:
			func_324(1339307101, iParam1);
			func_324(2102267732, iParam1);
			break;
		case 57:
			func_324(710102686, iParam1);
			break;
		case 22:
			func_324(-1754368482, iParam1);
			func_324(-2071408557, iParam1);
			break;
		case 12:
			func_324(-181334543, iParam1);
			break;
		case 0:
			func_324(-2134669864, iParam1);
			func_324(-548289709, iParam1);
			func_324(-911271922, iParam1);
			func_324(-604455775, iParam1);
			break;
		case 1:
			func_325(1);
			break;
		case 3:
			if (func_158())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_324(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_324(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_125()
{
	if (func_116() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_324(-145926707, iParam1);
			func_324(-604922090, iParam1);
			func_324(-848690769, iParam1);
			break;
		case 1:
			func_324(-1477631591, iParam1);
			break;
		case 2:
			func_324(76112544, iParam1);
			break;
		case 9:
			func_324(1396404308, iParam1);
			func_324(-1357381228, iParam1);
			if (func_147((*Global_1835011)[69]->f_1, 1))
			{
				func_324(1902679064, iParam1);
			}
			else
			{
				func_324(-2146422425, iParam1);
			}
			break;
		case 22:
			func_324(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_324(-1934184559, iParam1);
				func_324(1281755988, iParam1);
			}
			else
			{
				func_324(-1745220872, iParam1);
				func_324(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_324(-1641504538, iParam1);
				func_324(-988014485, iParam1);
			}
			else if (func_326(26))
			{
				func_324(-343043950, iParam1);
				func_324(-640062214, iParam1);
			}
			else
			{
				func_324(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_324(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_324(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_324(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_324(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_324(1301690984, iParam1);
				}
			}
			else
			{
				func_324(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_324(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_324(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_324(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_324(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_324(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_324(-754570528, iParam1);
			}
			else
			{
				func_324(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_324(-2072125821, iParam1);
			}
			else
			{
				func_324(270040030, iParam1);
			}
			break;
		case 37:
			func_324(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_324(-505314737, iParam1);
				func_324(-1853052860, iParam1);
			}
			else
			{
				func_324(-1975624994, iParam1);
				func_324(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_324(1690231002, iParam1);
			}
			else
			{
				func_324(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_324(1225386280, iParam1);
			}
			else if (func_326(54))
			{
				func_324(-283235773, iParam1);
			}
			else
			{
				func_324(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_324(1355398007, iParam1);
			}
			else
			{
				func_324(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_324(574636806, iParam1);
			}
			else
			{
				func_324(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_324(821118338, iParam1);
			}
			else if (func_326(39))
			{
				func_324(846829260, iParam1);
			}
			else
			{
				func_324(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_181((*Global_1835011)[33]->f_1) == 1)
				{
					func_324(1422779093, iParam1);
				}
				else
				{
					func_324(-1769536986, iParam1);
				}
			}
			else
			{
				func_324(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_324(352134789, iParam1);
			}
			else if (func_326(43))
			{
				func_324(260723113, iParam1);
			}
			else
			{
				func_324(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_324(-457958799, iParam1);
			}
			else
			{
				func_324(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_326(41))
			{
				func_324(-546824600, iParam1);
			}
			else
			{
				func_324(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_324(1297261593, iParam1);
			}
			else
			{
				func_324(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_324(2068484886, iParam1);
			}
			else if (func_326(49))
			{
				func_324(-1489080639, iParam1);
				func_324(-2102244050, iParam1);
			}
			else
			{
				func_324(-1863040467, iParam1);
			}
			break;
		case 51:
			func_324(-2055943209, iParam1);
			break;
		case 58:
			if (func_147((*Global_1347702)[23]->f_15, 1))
			{
				func_324(1650066845, iParam1);
			}
			else
			{
				func_324(151370023, iParam1);
			}
			func_324(1426057961, iParam1);
			func_324(476379584, iParam1);
			break;
		case 59:
			func_324(-1638117866, iParam1);
			break;
		case 62:
			func_324(199541730, iParam1);
			break;
		case 63:
			func_324(1703485804, iParam1);
			func_324(-800449045, iParam1);
			break;
		case 65:
			func_324(-1678210868, iParam1);
			func_324(-1448238026, iParam1);
			func_324(-1200864845, iParam1);
			func_324(1473511536, iParam1);
			break;
		case 66:
			func_324(-1774490051, iParam1);
			func_324(-34645921, iParam1);
			func_324(174027075, iParam1);
			func_324(-1155999, iParam1);
			func_325(1);
			break;
		case 67:
			func_324(701612593, iParam1);
			func_324(-1069631343, iParam1);
			func_324(1673428882, iParam1);
			break;
		case 68:
			func_324(-739133286, iParam1);
			func_324(-2130089358, iParam1);
			func_324(2056190391, iParam1);
			func_324(1941753817, iParam1);
			func_325(0);
			break;
		case 70:
			func_324(-1217555753, iParam1);
			break;
		case 71:
			func_324(697048821, iParam1);
			break;
		case 73:
			func_324(-553148661, iParam1);
			break;
		case 75:
			func_324(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_324(1414263863, iParam1);
			}
			else
			{
				func_324(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_324(1835465936, iParam1);
				func_324(523715611, iParam1);
			}
			else if (func_326(78))
			{
				func_324(1420338873, iParam1);
			}
			else
			{
				func_324(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_324(10180941, iParam1);
			}
			else if (func_326(79))
			{
				func_324(768420635, iParam1);
			}
			else
			{
				func_324(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_324(-383601523, iParam1);
			}
			else
			{
				func_324(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_324(1606472408, iParam1);
			}
			else
			{
				func_324(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_324(-203571927, iParam1);
			}
			else
			{
				func_324(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_324(729886222, iParam1);
			}
			else
			{
				func_324(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_324(-714816362, iParam1);
			}
			else
			{
				func_324(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_324(-932932179, iParam1);
				func_324(-1458537240, iParam1);
			}
			else
			{
				func_324(-1764383885, iParam1);
				func_324(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_324(1741466706, iParam1);
			}
			else
			{
				func_324(1405815775, iParam1);
			}
			break;
		case 94:
			func_324(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_324(1905280979, iParam1);
			}
			else
			{
				func_324(-1966245299, iParam1);
			}
			func_324(721468880, iParam1);
			break;
		case 99:
			func_324(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_324(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_324(-1117781095, iParam1);
				}
				else
				{
					func_324(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_324(141494548, iParam1);
			}
			else
			{
				func_324(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_324(-369525697, iParam1);
			}
			else if (func_326(101))
			{
				func_324(1595015219, iParam1);
			}
			else
			{
				func_324(-321486961, iParam1);
			}
			break;
		case 103:
			func_324(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_324(793460477, iParam1);
				func_324(-1610242176, iParam1);
			}
			else if (func_326(103))
			{
				func_324(1830897187, iParam1);
			}
			else
			{
				func_324(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_324(1528309077, iParam1);
			}
			else if (func_326(104))
			{
				func_324(1864966105, iParam1);
			}
			else
			{
				func_324(-103336013, iParam1);
			}
			break;
		case 108:
			func_324(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_324(-1123227713, iParam1);
				func_324(-889574341, iParam1);
			}
			else
			{
				func_324(2065385917, iParam1);
				func_324(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_324(-887421691, iParam1);
			}
			else if (func_326(109))
			{
				func_324(-1318117949, iParam1);
			}
			else
			{
				func_324(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_324(284822762, iParam1);
				}
				else
				{
					func_324(-1425017554, iParam1);
				}
			}
			else if (func_326(110))
			{
				if (&Global_1357515 == 0)
				{
					func_324(553087292, iParam1);
				}
				else
				{
					func_324(-1766870331, iParam1);
					func_324(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_324(-1980598735, iParam1);
			}
			else
			{
				func_324(-442732098, iParam1);
				func_324(1955756409, iParam1);
			}
			break;
		case 115:
			func_324(394303528, iParam1);
			func_324(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_324(1182403394, iParam1);
			}
			else
			{
				func_324(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_324(924445424, iParam1);
			}
			else
			{
				func_324(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_324(430755273, iParam1);
				func_324(-1473879802, iParam1);
			}
			else
			{
				func_324(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_324(73885747, iParam1);
			}
			else if (func_326(117))
			{
				func_324(1559707913, iParam1);
			}
			else
			{
				func_324(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_324(-2103887972, iParam1);
			}
			else if (func_326(118))
			{
				func_324(-435828462, iParam1);
			}
			else
			{
				func_324(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_324(2054486196, iParam1);
			}
			else
			{
				func_324(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_324(-570086056, iParam1);
			}
			else if (func_326(121))
			{
				func_324(32337856, iParam1);
			}
			else
			{
				func_324(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_324(813493663, iParam1);
			}
			else if (func_326(122))
			{
				func_324(-2132763590, iParam1);
			}
			else
			{
				func_324(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_324(-66240572, iParam1);
				func_324(1563075046, iParam1);
			}
			else
			{
				func_324(-787011772, iParam1);
				func_324(-1523377438, iParam1);
			}
			break;
		case 127:
			func_324(61020800, iParam1);
			break;
		case 129:
			func_324(428985222, iParam1);
			break;
		case 131:
			func_324(-1393851036, iParam1);
			break;
		case 133:
			func_324(1559531342, iParam1);
			break;
		case 134:
			func_324(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_324(-1374407408, iParam1);
				}
				else
				{
					func_324(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_324(-472672138, iParam1);
				}
				else
				{
					func_324(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_324(-1678710489, iParam1);
			}
			else
			{
				func_324(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_324(1717582460, iParam1);
			}
			else
			{
				func_324(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_324(1568112362, iParam1);
				func_324(1388317526, iParam1);
			}
			else if (func_326(136))
			{
				func_324(-1597534828, iParam1);
				func_324(-1207918353, iParam1);
			}
			else
			{
				func_324(-1940891082, iParam1);
				func_324(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_324(448334530, iParam1);
				func_324(2145375502, iParam1);
			}
			else
			{
				func_324(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_324(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_324(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_324(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_324(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_324(-66616327, iParam1);
			}
			else
			{
				func_324(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_324(1862916706, iParam1);
			}
			else if (func_326(147))
			{
				func_324(675105199, iParam1);
			}
			else
			{
				func_324(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_324(174409701, iParam1);
			}
			else if (func_326(148))
			{
				func_324(-1730895475, iParam1);
			}
			else
			{
				func_324(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_324(1295237052, iParam1);
			}
			else if (func_326(149))
			{
				func_324(-788577684, iParam1);
			}
			else
			{
				func_324(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_127(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_81(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_329(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_181((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_121(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_121(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_128(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_330(iParam0);
	iVar3 = func_331(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_114();
				func_154(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_332(iParam0, 1);
			if (func_333(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_334(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_335(1, iParam0);
				}
				else
				{
					func_336(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_130(int iParam0, int iParam1, int iParam2)
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

int func_131(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_132(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_133(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_116() != -1)
	{
		return;
	}
	if ((Global_36616 && func_337(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_338(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_339(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_340(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_339(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_134(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_341(func_293(iParam0));
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_136(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_137()
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_342())
	{
		return false;
	}
	if (!func_147((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_147((*Global_1835011)[2]->f_1, 1) && func_147((*Global_1347702)[120]->f_15, 1)) && !func_147((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_147((*Global_1835011)[37]->f_1, 1) && !func_147((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_147((*Global_1835011)[57]->f_1, 1) && !func_147((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_147((*Global_1835011)[26]->f_1, 1) && !func_147((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_147((*Global_1835011)[62]->f_1, 1) && func_147((*Global_1835011)[63]->f_1, 1)) && !func_147((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_147((*Global_1835011)[75]->f_1, 1) && !func_147((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_147((*Global_1835011)[76]->f_1, 1) && !func_147((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_147((*Global_1835011)[40]->f_1, 1) && func_147((*Global_1835011)[41]->f_1, 1)) && !func_147((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_147((*Global_1835011)[62]->f_1, 1) && func_147((*Global_1835011)[63]->f_1, 1)) && !func_147((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_147((*Global_1835011)[65]->f_1, 1) && func_147((*Global_1835011)[66]->f_1, 1)) && !func_147((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_138()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_343(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_139(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (!func_345(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_346(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_347(iParam0, bParam2);
	iVar2 = 0;
	if (func_348(iParam0, 0, 0) == 0)
	{
		if (func_349(iParam0))
		{
			iVar5 = func_350(iParam0);
			iVar6 = func_351(iVar5);
			iVar7 = func_352(iVar6) + 1;
			func_353(iVar5);
			if (func_354(38))
			{
				func_145(483, 0);
			}
			else
			{
				func_145(482, 0);
			}
			if (iVar7 == func_355(iVar6))
			{
				func_139(func_356(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_342() && func_357(4))
				{
					if (func_342() && (func_358(38) || func_354(38)))
					{
						func_360(38, func_356(iVar6), 0, 0, func_359(), 0, -1, 0);
						func_361(2);
					}
					else
					{
						func_360(38, func_356(iVar6), 0, 0, func_359(), 0, -1, 0);
						func_361(1);
					}
				}
			}
			else if (func_342() && func_357(4))
			{
				if (func_342() && (func_358(38) || func_354(38)))
				{
					func_360(38, 0, 0, 0, func_359(), 0, -1, 0);
					func_361(2);
				}
				else
				{
					func_360(38, 0, 0, 0, func_359(), 0, -1, 0);
					func_361(1);
				}
			}
			if (func_342() && func_357(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_342() && (func_358(38) || func_354(38)))
					{
						func_362(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_362(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_363(iParam0) == -1037537535)
	{
		if ((!func_364(iParam0, 866047851) && !func_364(iParam0, -1979000645)) && !func_364(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_365(iParam0, 8388608) && !func_366(28))
	{
		func_367(28);
	}
	if (!bVar3)
	{
		if (func_364(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_368(iParam0) == -1447088266)
			{
				iVar1 = func_370(func_369(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_116() == -1)
					{
						func_371(iVar1);
					}
					if (func_372(0) && func_373(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_374(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_116() == -1)
					{
						func_371(iParam0);
					}
					if (func_372(0) && func_373(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_374(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_363(iParam0) == -427144552)
		{
			if (!func_375(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_363(iParam0) == 307971639 && func_376(iParam0))
		{
			if (!func_377(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_364(iParam0, 866047851))
		{
			func_378(iParam0);
		}
		else if (func_364(iParam0, 2000026003))
		{
			func_379(iParam0);
		}
		else if (func_364(iParam0, -103750053))
		{
			func_381(func_380(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_381(func_382(-717883113, 2091222383), iVar0);
		}
		else if (func_364(iParam0, -121341956) && !func_364(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_147((*Global_1835011)[4]->f_1, 1))
				{
					func_145(498, 0);
				}
			}
			if (func_364(iParam0, -2017733358) || func_364(iParam0, -1369131378))
			{
				func_383(iParam0);
			}
		}
		else if (func_364(iParam0, -136654233))
		{
			if (func_364(iParam0, -1021472396))
			{
			}
		}
		else if (func_364(iParam0, -1466706512) && func_364(iParam0, 1147021565))
		{
			func_145(484, 0);
		}
		else if (func_364(iParam0, 1147021565) && func_364(iParam0, -524514947))
		{
		}
		else if (func_364(iParam0, 554195525))
		{
		}
		else if (func_364(iParam0, 589988438))
		{
			if (func_384())
			{
				func_385(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_364(iParam0, 787083290) && func_364(iParam0, 949916894))
		{
			func_386(iParam0);
		}
		else if (func_364(iParam0, -1718133314))
		{
			func_387(iParam0);
		}
		else if (func_364(iParam0, -1738650224))
		{
			func_388(iParam0);
		}
		else if (func_364(iParam0, -1112814642) && func_364(iParam0, 949916894))
		{
			func_389(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_364(iParam0, 1841149704))
		{
			func_390();
		}
		else if (func_364(iParam0, 606799272))
		{
			func_391(iParam0, iParam1);
			func_392(iParam0);
		}
		else if (func_364(iParam0, -1112814642) && func_364(iParam0, -1697809989))
		{
			func_393(iParam0, 0, 0, 0);
		}
		else if (func_364(iParam0, -2017733358) || func_364(iParam0, -1369131378))
		{
			func_383(iParam0);
		}
		else if (func_364(iParam0, -1921346699))
		{
			if (func_116() != -1)
			{
				return false;
			}
			func_394(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_364(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_167(215778062, 1, 0))
					{
						func_139(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_167(670273567, 1, 0))
					{
						func_139(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_167(-967317137, 1, 0))
					{
						func_139(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_167(526074061, 1, 0))
					{
						func_139(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_167(-1045488665, 1, 0))
					{
						func_139(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_167(471514780, 1, 0))
					{
						func_139(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_364(iParam0, -839724752) && func_365(iParam0, 4))
		{
			if (!func_354(42))
			{
				func_395(iParam0);
			}
		}
		else if (func_364(iParam0, 1399091007))
		{
			func_396(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_364(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_139(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_367(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_397(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_398(&iVar9, 0))
				{
					func_373(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_116() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_397(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_145(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_399();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_400();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_401();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_402();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_403();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_404(499813453, 854119837, 0);
				func_405(499813453, 0);
				func_406(1);
				break;
			case 2127812557:
				func_404(499813453, -1292544588, 0);
				func_405(499813453, 0);
				func_406(2);
				break;
			case 808991383:
				func_404(499813453, -1003325394, 0);
				func_405(499813453, 0);
				func_406(4);
				break;
			case 1134518629:
				func_404(666607663, -335460405, 0);
				func_405(666607663, 0);
				func_407(1);
				break;
			case 902940106:
				func_404(666607663, 903797617, 0);
				func_405(666607663, 0);
				func_407(2);
				break;
			case -418174898:
				func_404(666607663, 669728650, 0);
				func_405(666607663, 0);
				func_407(4);
				break;
			case -648114971:
				func_404(-220219788, 1214120047, 0);
				func_405(-220219788, 0);
				func_408(1);
				break;
			case 211153747:
				func_404(-220219788, 655769340, 0);
				func_405(-220219788, 0);
				func_408(2);
				break;
			case -32876996:
				func_404(-220219788, 885316185, 0);
				func_405(-220219788, 0);
				func_408(4);
				break;
			case 1191437462:
				func_404(218622660, -1491419385, 0);
				func_405(218622660, 0);
				func_409(1);
				break;
			case 1119149048:
				func_404(218622660, 1809565830, 0);
				func_405(218622660, 0);
				func_409(2);
				break;
			case 506073827:
				func_404(390004462, -628873767, 0);
				func_405(390004462, 0);
				func_410(1);
				break;
			case -1876986168:
				func_404(390004462, -405421956, 0);
				func_405(390004462, 0);
				func_410(2);
				break;
			case 2142623221:
				func_404(390004462, -1108972386, 0);
				func_405(390004462, 0);
				func_410(4);
				break;
			case 1508215381:
				func_404(6410548, 1053716392, 0);
				func_405(6410548, 0);
				func_411(1);
				break;
			case -888935280:
				func_404(6410548, 806507056, 0);
				func_405(6410548, 0);
				func_411(2);
				break;
			case -1252474566:
				func_404(6410548, 1571925350, 0);
				func_405(6410548, 0);
				func_411(4);
				break;
			case -1465702449:
				func_404(6410548, 1330352282, 0);
				func_405(6410548, 0);
				func_411(8);
				break;
			case -21093309:
				func_413(242, func_412(-21093309), 0);
				break;
			case 204375141:
				func_413(240, func_412(204375141), 0);
				break;
			case -417963070:
				func_413(241, func_412(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_414(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_145(488, 0);
				break;
			case 1613651027:
				func_145(491, 0);
				break;
			case -885810591:
				func_145(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_139(func_415(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_139(func_416(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_366(1))
				{
					func_145(487, 0);
				}
				break;
			case -898386032:
				func_145(486, 0);
				break;
			case -2035110427:
				if (func_116() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_145(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_417(&iVar10);
		if (!func_418(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_372(0))
		{
			return true;
		}
		if (func_363(iParam0) == -1037537535)
		{
			func_419(iParam0);
		}
		if (func_364(iParam0, -1979000645))
		{
			func_420(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_372(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_139(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_421(iVar2, 0);
		}
	}
	Var35 = { func_422(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_423(iParam0);
	if (fParam6 > 0f)
	{
		if (func_364(iParam0, -839724752))
		{
			func_424(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_425(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_140(int iParam0)
{
	if (func_364(iParam0, 1989861793))
	{
		iVar0 = func_426(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_427(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_428(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_429(iVar14, iVar1);
					if (iVar15 != iParam0 && func_344(iVar15, 0))
					{
						if (func_430(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_431(iVar1);
				if (bVar13)
				{
					func_432(iParam0);
				}
				else
				{
					func_145(306, 0);
				}
			}
		}
	}
}

void func_141()
{
	if (func_116() != -1)
	{
		return;
	}
	func_433();
	func_434();
	func_435();
	func_436();
	func_437();
	func_438();
	func_439();
}

void func_142(int iParam0)
{
	func_440(iParam0, 1, 1, -142743235, 1);
	if (func_441(iParam0))
	{
		func_442(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_444(func_443(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_445(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_446() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_447(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_447(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_448(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_448(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_448(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_448(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_448(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_448(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_448(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_448(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_448(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_449(iVar8, iVar0))
				{
					func_450(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_449(iVar8, iVar0))
		{
			func_450(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_143()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_449(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_446() == -2125499975 || func_446() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_450(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_450(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_144()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_343(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

void func_145(int iParam0, bool bParam1)
{
	func_451(iParam0, &iVar0, &iVar1);
	if (!func_452(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_453(iVar0, iVar1);
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_444(iParam0, 1);
	func_454(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_454(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_455(17, iParam0, 0, 0, 0);
		}
	}
	if (func_116() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_454(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_454(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_147(int iParam0, bool bParam1)
{
	switch (func_77(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_148()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_343(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_149()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_343(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_456(iParam1, 1, 0) };
		iParam3 = func_457(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_458(iParam3);
	return func_397(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_151()
{
	return _unlock_is_unlocked(99890643);
}

void func_152(int iParam0)
{
	if (!func_459(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_153(int iParam0, int iParam1)
{
	if (!func_460(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_461(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_462(Global_40.f_9910[iParam1], 4);
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_463(*iParam0);
	iVar1 = func_464(*iParam0);
	iVar2 = func_465(*iParam0);
	iVar3 = func_466(*iParam0);
	iVar4 = func_467(*iParam0);
	iVar5 = func_468(*iParam0);
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
	iVar6 = func_469(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_469(iVar1, iVar0);
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
	func_470(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	if (!func_460(iParam0))
	{
		return;
	}
	if (!func_471(iParam1))
	{
		return;
	}
	if (func_472(iParam1, 1))
	{
		return;
	}
	iVar0 = func_461(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_153(iParam0, -1))
	{
		return;
	}
	else
	{
		func_473(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_95(0, 0, 1))
		{
			func_187(0, 17);
		}
	}
}

void func_156()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_343(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_157()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_343(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_158()
{
	return _unlock_is_unlocked(-121456797);
}

void func_159()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_343(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_160()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_343(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_161()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_343(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_162()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_343(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_163()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_343(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_164()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_343(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_165(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_166(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_474(iParam0, 1))
		{
			return false;
		}
	}
	return func_348(iParam0, 0, bParam2) >= iParam1;
}

void func_168(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_475(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_475(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_169()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_343(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_170()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_343(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_171()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_343(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_172()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_343(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_173()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_343(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_174()
{
	if (func_476() > 1)
	{
		func_477();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_145(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_145(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_145(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_145(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_145(452, 1);
		}
	}
}

bool func_175(int iParam0)
{
	return func_288(iParam0, 4, 1);
}

void func_176(int iParam0)
{
	func_478(iParam0, 4, 1);
}

void func_177(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_120(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_178(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (!func_78(iParam0))
	{
		return;
	}
	func_92(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_81(iParam0))
	{
		case 1:
			func_381(func_382(909007663, -587839005), 1);
			iVar0 = func_121(iParam0);
			func_381(func_120(-634848880), 1);
			switch (func_309(iVar0))
			{
				case 0:
					func_381(func_382(909007663, 1325140787), 1);
					break;
				case 1:
					func_381(func_382(909007663, 2101241783), 1);
					break;
				case 2:
					func_381(func_382(909007663, -1296936294), 1);
					break;
				case 3:
					func_381(func_382(909007663, -798388728), 1);
					break;
				case 4:
					func_381(func_382(909007663, -1787586531), 1);
					break;
				case 5:
					func_381(func_382(909007663, -1002834519), 1);
					break;
				case 6:
					func_381(func_382(909007663, -50600144), 1);
					break;
				case 7:
					func_381(func_382(909007663, -348503123), 1);
					break;
				case 8:
					func_381(func_382(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_381(func_382(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_381(func_382(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_121(iParam0);
			if (func_122((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_381(func_120(-634848880), 1);
			}
			if (func_122((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_122((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_381(func_382(909007663, -587839005), 1);
				}
				else
				{
					func_381(func_382(909007663, -2049243343), 1);
				}
			}
			if (func_122((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_310(iVar1))
				{
					case 0:
						func_381(func_382(909007663, 1325140787), 1);
						break;
					case 1:
						func_381(func_382(909007663, 2101241783), 1);
						break;
					case 2:
						func_381(func_382(909007663, -1296936294), 1);
						break;
					case 3:
						func_381(func_382(909007663, -798388728), 1);
						break;
					case 4:
						func_381(func_382(909007663, -1787586531), 1);
						break;
					case 5:
						func_381(func_382(909007663, -1002834519), 1);
						break;
					case 6:
						func_381(func_382(909007663, -50600144), 1);
						break;
					case 7:
						func_381(func_382(909007663, -348503123), 1);
						break;
					case 8:
						func_381(func_382(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_381(func_382(909007663, 532323983), 1);
				}
			}
			else if (func_122((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_122((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_122((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_381(func_382(909007663, 551192206), 1);
				}
				else
				{
					func_381(func_382(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_179()
{
	if (func_116() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_479(64))
	{
		return;
	}
	else if (func_96(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_95(0, 0, 1) || func_480()) || func_137())
	{
		return;
	}
	iVar0 = func_99();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_481(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_482(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_482(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_483(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_187(0, -1);
	}
	if (iVar2 > 0)
	{
		func_484("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_485(1, 0);
	Global_1956575->f_4 = 1;
}

void func_180(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_486(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_487(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_181(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	return func_488(iParam0);
}

int func_182(int iParam0, int iParam1)
{
	if (!func_489(iParam0))
	{
		return 0;
	}
	if (!func_342())
	{
		return 0;
	}
	if (!func_490(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_491())
	{
		iVar2 = func_491();
	}
	iVar5 = func_492(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_293(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_293(iVar6) == 0)
			{
				return func_493(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_293(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_293(iVar6) == 0)
			{
				return func_493(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_493(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_494(1330954593, 0, -1);
		case 1:
			return func_494(1330954593, 0, -1);
		case 2:
			return func_494(1330954593, 0, -1) * 2;
		case 4:
			return func_494(1330954593, 0, -1);
		case 5:
			return func_494(1330954593, 0, -1);
		case 6:
			return func_494(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_494(1330954593, 0, -1) * 3;
		case 9:
			return func_494(1330954593, 0, -1) * 3;
		case 10:
			return func_494(1330954593, 0, -1) * 3;
		case 11:
			return func_494(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_185(int iParam0)
{
	if (!func_78(iParam0))
	{
		return cVar0;
	}
	switch (func_81(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_329(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_121(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_183(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_186(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_81(Global_1879514->f_1) == 1)
			{
				func_182(5, 1);
			}
			else if (func_81(Global_1879514->f_1) == 8 && (func_122((*Global_1347702)[func_121(Global_1879514->f_1)]->f_12, 1) || func_122((*Global_1347702)[func_121(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_182(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_187(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_495(&Global_0, 8);
	}
	if (!func_342() || func_116() != -1)
	{
		return;
	}
	func_495(&Global_0, 1);
}

int func_188()
{
	return Global_40.f_4283;
}

int func_189(int iParam0)
{
	if (!func_78(iParam0))
	{
		return 0;
	}
	cVar0 = func_185(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_190(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

void func_191(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_192(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

Vector3 func_193(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_496(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_497(vVar0))
	{
		vVar0 = { func_496(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_194(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_195(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_196(vector3 vParam0, int iParam3)
{
	iVar0 = func_292();
	if (func_498(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_499(vParam0, iParam3);
}

void func_197()
{
	func_500();
	func_501();
	func_502();
	_0x11b0a0b282fa9b10(0);
}

char* func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_199(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_200()
{
	return Global_40.f_4283.f_1;
}

bool func_201(int iParam0)
{
	iVar0 = func_283(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_202(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_203(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_202(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_503(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_504(iVar0);
	*uParam0 = 0;
}

bool func_204(var uParam0)
{
	return func_505(*uParam0, 1);
}

void func_205(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_206(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	uParam0->f_269 = 0;
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x7907969497ea92f5(uParam0->f_264);
	if (!bVar0)
	{
		if (!_0x4f9e3ed7617123ac(get_hash_key(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_264 = _0xca56dd6ab7a39f64(get_hash_key(sParam1));
		}
		else
		{
			uParam0->f_264 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
		}
	}
	uParam0->f_270 = _0x603ac35fd4602c76(uParam0->f_264);
	if (!uParam0->f_270)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_506(uParam0);
	uParam0->f_264.f_2 = 0;
	uParam0->f_277 = _datafile_get_num_nodes(&(uParam0->f_264));
	uParam0->f_264.f_2 = 12;
	uParam0->f_279 = _datafile_get_num_nodes(&(uParam0->f_264));
	uParam0->f_270 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

bool func_207(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_208(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	if (iParam2 == -1)
	{
		if (func_209(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_209(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_209(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_209(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_209(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_209(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_209(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_272) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_209(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_209(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_209(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_264));
}

bool func_210(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_264));
}

bool func_211(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_54((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_212(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_213(var uParam0)
{
	_datafile_unload(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

int func_214(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_507(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

void func_215(bool bParam0)
{
	if (func_508())
	{
		Global_1357509 = 1;
	}
	if (func_509(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_216(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_54((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_56((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_56((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_56((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_217(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

void func_218(var uParam0)
{
	func_510(uParam0, 0f);
}

float func_219(var uParam0)
{
	if (!func_204(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_511(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_512() - uParam0->f_1);
}

void func_220(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

int func_221(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_513(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&cVar0, {Var3}, 3);
		if (!is_string_null_or_empty(sParam2))
		{
			StringConCat(&cVar0, sParam2, 24);
		}
		if (bParam3)
		{
			func_514(1, 1, 0);
		}
		uVar11 = 24;
		if (!func_515(&cVar0))
		{
			func_516(&uVar11, Global_35, "ARTHUR", 0);
			func_516(&uVar11, func_74(uParam0->f_2), func_517(uParam0->f_2), 0);
			func_518(&uVar11, cVar0, iParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_222()
{
	iVar0 = func_188();
	if (!func_519(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

float func_223(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_224()
{
	if (Local_15.f_10 == -1)
	{
		return;
	}
	if (func_199(Local_15.f_631, 32768) && Local_15.f_10 != 8)
	{
		return;
	}
	if (!Local_15.f_246)
	{
		if (&Local_15.f_204[Local_15.f_10])
		{
			return;
		}
		if (func_520(1))
		{
			return;
		}
	}
	switch (Local_15.f_10)
	{
		case 0:
			func_521(0, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 1:
			func_521(1, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 2:
			func_521(2, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 3:
			func_521(3, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 4:
			func_521(4, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 5:
			func_521(5, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 6:
			func_521(6, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 7:
			func_521(7, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 8:
			func_521(8, &(Local_15.f_307[0]), Global_35, 0, 1);
			break;
		case 9:
			func_521(9, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 10:
			func_521(10, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 11:
			func_521(11, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 12:
			func_521(12, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 13:
			func_521(13, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 14:
			func_521(14, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 15:
			func_521(15, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 16:
			func_521(16, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 17:
			func_521(17, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 18:
			func_521(18, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 19:
			func_521(19, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 20:
			func_521(20, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 21:
			func_521(21, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 22:
			func_521(22, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 23:
			func_521(23, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 24:
			func_521(24, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 25:
			func_521(25, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 26:
			func_521(26, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 27:
			func_521(27, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 28:
			func_521(28, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 29:
			func_521(29, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 30:
			func_521(30, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 31:
			func_521(31, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 32:
			func_521(32, &(Local_15.f_307[17]), Global_35, 1, 0);
			break;
		case 33:
			func_521(33, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 34:
			func_521(34, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 35:
			func_521(35, Global_35, &(Local_15.f_307[17]), 1, 0);
			break;
		case 36:
			func_521(36, &(Local_15.f_307[0]), Global_35, 1, 0);
			break;
		case 37:
			func_521(37, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 38:
			func_521(38, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 39:
			func_521(39, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case 40:
			func_521(40, Global_35, &(Local_15.f_307[0]), 1, 0);
			break;
		case -1:
			break;
	}
}

void func_225()
{
	switch (Local_15.f_11)
	{
		case 0:
			if (!func_520(1))
			{
				func_522("H2_OBJ_KILLBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 1:
			if (!func_520(1))
			{
				func_522("H2_OBJ_SKINBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 2:
			func_522("H2_OBJ_STWHID", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 3:
			func_522("H2_OBJ_MNTFLW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 4:
			func_522("H2_OBJ_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 5:
			if (!func_520(1))
			{
				func_522("H2_OBJ_SEARCH", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 6:
			if (!func_520(1))
			{
				func_522("H2_OBJ_FNDCMP", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 7:
			if (!func_520(1))
			{
				func_522("H2_OBJ_INT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 8:
			if (!func_520(1))
			{
				func_522("H2_OBJ_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case -1:
			break;
	}
}

void func_226()
{
	if (!does_blip_exist(Local_15.f_18) || get_blip_from_entity(&(Local_15.f_307[0])) == 0)
	{
		Local_15.f_18 = func_524(&(Local_15.f_307[0]), 422991367, 1, 1);
	}
}

void func_227(var uParam0)
{
	if (func_199(Local_15.f_631, 1048576))
	{
		return;
	}
	if (func_223(Global_35, func_525(), 1) > func_526())
	{
		func_60(&(Local_15.f_93), 0);
		if (!func_199(Local_15.f_631, 4096))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_522(func_527(), 7500, 0, 1, 0, 0, -1, -1, 0);
			func_528(&(Local_15.f_631), 4096);
		}
		if (func_529(&(Local_15.f_93), 7f))
		{
			StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
			uParam0->f_14 = 5;
			func_528(&(Local_15.f_631), 8192);
		}
	}
	else if (func_199(Local_15.f_631, 4096))
	{
		func_205(&(Local_15.f_93));
		func_530(&(Local_15.f_631), 4096);
		func_532(func_531());
		if (Local_15.f_12 == 2)
		{
			func_523(2);
		}
	}
}

void func_228(var uParam0)
{
	if (!func_199(Local_15.f_631, 64))
	{
		return;
	}
	vVar0 = { get_entity_coords(Global_35, true, false) };
	if (vVar0.z >= 117.4391f)
	{
		func_60(&(Local_15.f_99), 0);
		if (!func_199(Local_15.f_631, 1048576))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_522("H2_OBJ_RTCHA", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_528(&(Local_15.f_631), 1048576);
		}
	}
	if (func_529(&(Local_15.f_99), 3f))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 5;
		func_528(&(Local_15.f_631), 8192);
	}
}

void func_229()
{
	if (does_entity_exist(Local_15.f_376))
	{
		if (func_533() && !func_199(Local_15.f_631, 32768))
		{
			func_534(0);
			func_233(8, 0);
			func_528(&(Local_15.f_631), 32768);
			return;
		}
		else if ((func_535() && !func_199(Local_15.f_631, 16384)) && !func_199(Local_15.f_631, 32768))
		{
			func_233(8, 0);
			func_528(&(Local_15.f_631), 16384);
		}
	}
	if (func_199(Local_15.f_631, 32768) && !func_520(1))
	{
		func_60(&(Local_15.f_96), 0);
	}
	if (func_529(&(Local_15.f_96), 2f) && func_199(Local_15.f_631, 32768))
	{
		func_528(&(Local_15.f_631), 65536);
	}
}

bool func_230()
{
	if (_0x608bc6a6aacd5036(&Var0, &(Local_15.f_307[2]), 4, 0))
	{
		iVar5 = Var0.f_3;
		iVar4 = _get_optimal_carry_config(iVar5, 0);
		if (does_entity_exist(iVar5) && iVar4 == 1400954984)
		{
			return true;
		}
	}
	return false;
}

void func_231()
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (!func_202(&(Local_15.f_432[iVar0])) && (func_536(Global_35, &(Local_15.f_466[iVar0]), 3.5f, 1) && !&Local_15.f_500[iVar0]))
		{
			Local_15.f_432[iVar0] = func_537("INSPECT", -719620017, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			_uiprompt_set_group(func_538(&(Local_15.f_432[iVar0])), 1892922820, 0);
		}
		if (func_536(Global_35, &(Local_15.f_466[iVar0]), 3.5f, 1) && !func_539())
		{
			if (&Local_15.f_500[iVar0])
			{
				func_540(&(Local_15.f_432[iVar0]), 0, 1);
				func_528(&uVar1, 8);
				_uiprompt_set_visible(func_538(&(Local_15.f_432[iVar0])), false);
			}
			else
			{
				if (func_541(&(Local_15.f_432[iVar0]), 1) && !&Local_15.f_500[iVar0])
				{
					func_233(func_542(iVar0), 1);
					Local_15.f_500[iVar0] = 1;
				}
				if (func_520(1))
				{
					func_540(&(Local_15.f_432[iVar0]), 0, 1);
				}
				else
				{
					func_540(&(Local_15.f_432[iVar0]), 1, 1);
				}
				func_530(&uVar1, 8);
				_uiprompt_set_visible(func_538(&(Local_15.f_432[iVar0])), true);
			}
			_uiprompt_set_active_group_this_frame(1892922820, "INTERACT_DEAD_BUFFALO_ILO_PROMPT", 1, 0, uVar1, 0);
		}
		else if (func_202(&(Local_15.f_432[iVar0])))
		{
			func_540(&(Local_15.f_432[iVar0]), 0, 1);
			func_543(&(Local_15.f_432[iVar0]), 0, 1);
		}
		iVar0++;
	}
}

bool func_232(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_544(iParam0, 32))
	{
		return true;
	}
	return false;
}

void func_233(int iParam0, int iParam1)
{
	if (Local_15.f_10 != iParam0)
	{
		Local_15.f_10 = iParam0;
	}
	Local_15.f_246 = iParam1;
}

struct<4> func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(0, 0) };
				Var0.f_3 = func_546(0, 0);
			}
			else
			{
				Var0 = { func_545(1, 0) };
				Var0.f_3 = func_546(1, 0);
			}
			break;
		case 1:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(2, 0) };
				Var0.f_3 = func_546(2, 0);
			}
			else
			{
				Var0 = { func_545(3, 0) };
				Var0.f_3 = func_546(3, 0);
			}
			break;
		case 2:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(4, 0) };
				Var0.f_3 = func_546(4, 0);
			}
			else
			{
				Var0 = { func_545(5, 0) };
				Var0.f_3 = func_546(5, 0);
			}
			break;
		case 3:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(6, 0) };
				Var0.f_3 = func_546(6, 0);
			}
			else
			{
				Var0 = { func_545(7, 0) };
				Var0.f_3 = func_546(7, 0);
			}
			break;
		case 4:
			Var0 = { func_545(8, 0) };
			Var0.f_3 = func_546(8, 0);
			break;
		case 5:
			Var0 = { func_545(9, 0) };
			Var0.f_3 = func_546(9, 0);
			break;
		case 6:
			Var0 = { func_545(10, 0) };
			Var0.f_3 = func_546(10, 0);
			break;
		case 7:
			Var0 = { func_545(11, 0) };
			Var0.f_3 = func_546(11, 0);
			break;
		case 8:
			Var0 = { func_545(12, 0) };
			Var0.f_3 = func_546(12, 0);
			break;
	}
	return Var0;
}

void func_235(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	if (Global_1391438->f_3 != iParam9)
	{
		func_101(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_547(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_236(int iParam0, bool bParam1)
{
	if (Local_15 != iParam0)
	{
		Local_15 = iParam0;
	}
	func_548(bParam1);
}

bool func_237(var uParam0)
{
	switch (Local_15.f_1)
	{
		case 0:
			func_549(uParam0, 2);
			func_551(func_550(0), func_550(1), 1092616192, 5f, 10f, 0, 1);
			func_553(func_552(0));
			func_554(10, 999);
			func_555(0, 1);
			task_stand_still(&(Local_15.f_307[2]), -1);
			task_stand_still(&(Local_15.f_307[1]), -1);
			func_235(uParam0, func_234(1), func_234(2), 1, 2);
			if (func_556(&(Local_15.f_307[0]), 1, 2, 0) != -1098045850)
			{
				func_557(&(Local_15.f_307[0]), -1098045850, 0, 0, 2, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			trigger_music_event("HUNT02_START");
			func_558(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			if (!func_199(Local_15.f_631, 128))
			{
				func_561();
			}
			if (!func_199(Local_15.f_631, 256))
			{
				func_562();
			}
			if (Local_15.f_391 >= 4)
			{
				func_233(1, 0);
				if ((Local_15.f_411 == 98 && Local_15.f_204[1]) // PointerArith && get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 55)
				{
					func_233(2, 0);
				}
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 113 && Local_15.f_411 == 71)
			{
				func_233(3, 0);
			}
			else if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 290 && Local_15.f_411 == 98)
			{
				func_233(4, 0);
			}
			if (Local_15.f_411 == 71)
			{
				iVar0 = 169;
			}
			else
			{
				iVar0 = 361;
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= iVar0 && func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 20f)
			{
				func_233(5, 0);
				if (!Local_15.f_641)
				{
					trigger_music_event("HUNT02_BISON");
					Local_15.f_641 = 1;
				}
			}
			func_564(Global_35, Local_15.f_401, 0, 20f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_235(uParam0, func_234(2), func_234(3), 2, 3);
				func_558(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_238(var uParam0)
{
	switch (Local_15.f_2)
	{
		case 0:
			func_233(6, 0);
			func_60(&(Local_15.f_84), 0);
			if (func_529(&(Local_15.f_84), 8.75f))
			{
				func_205(&(Local_15.f_84));
				set_player_control(player_id(), true, 0, false);
				func_523(0);
				if (!&Local_15.f_273[0])
				{
					task_follow_to_offset_of_entity(&(Local_15.f_307[0]), &(Local_15.f_307[3]), 0f, 0f, -5f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
					Local_15.f_273[0] = 1;
				}
				func_565(1, 1);
			}
			else
			{
				func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 1:
			if (func_567() && !Local_15.f_102)
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 4);
				Local_15.f_102 = 1;
			}
			set_ped_max_move_blend_ratio(Global_35, 3f);
			func_569();
			func_570();
			func_60(&(Local_15.f_84), 0);
			if (Local_15.f_411 == 71)
			{
				fVar0 = 1.75f;
			}
			else
			{
				fVar0 = 2.75f;
			}
			if (func_529(&(Local_15.f_84), fVar0) && !func_199(Local_15.f_631, 131072))
			{
				func_528(&(Local_15.f_631), 131072);
			}
			if (func_199(Local_15.f_631, 131072))
			{
				func_571();
			}
			if (func_572())
			{
				func_568(uParam0, 4);
				func_532("H2_OBJ_SKINBUF");
				func_565(2, 1);
			}
			break;
		case 2:
			func_571();
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 3f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				func_523(1);
				Local_15.f_102 = 1;
			}
			if (func_573())
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					task_mount_animal(0, &(Local_15.f_307[1]), 20000, -1, 2f, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, func_575(Local_15.f_376, &(Local_15.f_307[0]), 10f), 2f, 20000, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, Local_15.f_376, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
			}
			if (is_entity_dead(Local_15.f_376))
			{
				if ((!_0x8de41e9902e85756(Local_15.f_376) && !_0x3aec4a410ecaf30d(Local_15.f_376)) && _0x0ccefc6c2c95da2a(&uVar1, Local_15.f_376, 0, Global_35) == 0)
				{
					func_528(&(Local_15.f_631), 2097152);
				}
			}
			if (func_577())
			{
				func_578();
				if (!does_entity_exist(Local_15.f_375) && _is_ped_carrying(Global_35))
				{
					Local_15.f_375 = _get_first_entity_ped_is_carrying(Global_35);
					task_follow_to_offset_of_entity(&(Local_15.f_307[0]), Global_35, 0f, -6f, 0f, 1f, -1, 15f, 1, 1, 0, 1, 1);
					Local_15.f_273[0] = 1;
				}
				if (does_entity_exist(Local_15.f_375))
				{
					func_233(10, 0);
					set_ped_config_flag(&(Local_15.f_307[2]), 136, true);
					trigger_music_event("HUNT02_BIRDS");
					func_532("H2_OBJ_STWHID");
					func_565(3, 1);
				}
			}
			else
			{
				if ((func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 20f && !func_579()) && !func_199(Local_15.f_631, 32768))
				{
					func_233(7, 0);
					func_60(&(Local_15.f_84), 0);
					if (!Local_15.f_641)
					{
						trigger_music_event("HUNT02_SKIN");
						Local_15.f_641 = 1;
					}
				}
				if ((func_529(&(Local_15.f_84), 4f) && !func_579()) && !func_199(Local_15.f_631, 32768))
				{
					func_233(9, 0);
				}
				if (func_579())
				{
					if (!&Local_15.f_273[2] && func_563(&(Local_15.f_307[2]), Global_35, 1, 1) < 3.5f)
					{
						task_follow_nav_mesh_to_coord(&(Local_15.f_307[2]), func_575(Local_15.f_376, &(Local_15.f_307[2]), 5f), 1f, 20000, 0.25f, 0, 40000f);
						Local_15.f_273[2] = 1;
					}
				}
				func_569();
			}
			break;
		case 3:
			func_549(uParam0, 2);
			if (!func_199(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!func_520(1) && !Local_15.f_102)
			{
				func_523(2);
				Local_15.f_102 = 1;
			}
			_0x18ff3110cf47115d(Local_15.f_375, 4, 0);
			if (does_entity_exist(Local_15.f_375) && func_581(Global_35))
			{
				func_205(&(Local_15.f_75));
				func_205(&(Local_15.f_84));
				_0x18ff3110cf47115d(Local_15.f_375, 4, 1);
				func_523(-1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				set_ped_config_flag(&(Local_15.f_307[2]), 136, false);
				func_233(11, 0);
				func_549(uParam0, 2);
				func_532("H2_OBJ_MNTFLW");
				func_565(5, 1);
			}
			else if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 5:
			if (!func_520(1) && func_582(&(Local_15.f_307[2]), Local_15.f_375))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 6f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				func_523(3);
				Local_15.f_102 = 1;
			}
			if (func_583(Global_35, &(Local_15.f_307[2]), 0))
			{
				func_205(&(Local_15.f_75));
				func_568(uParam0, 2);
				func_549(uParam0, 1);
				func_233(12, 0);
				func_565(6, 1);
			}
			else if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 6:
			func_560(uParam0, 25f, 0, 1086324736, 1);
			if (!func_199(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!does_group_exist(Local_15.f_420))
			{
				Local_15.f_420 = create_group(0);
				set_group_formation(Local_15.f_420, 3);
				set_ped_config_flag(&(Local_15.f_307[0]), 279, true);
				set_ped_as_group_leader(&(Local_15.f_307[0]), Local_15.f_420, false);
				_0x0e9e95fdedcc9d35(Global_35, 0, 0);
			}
			_0xac22aa6df4d1c1de(get_player_index(), &(Local_15.f_307[0]), -2f, 0f, 1, 2, 0);
			if (func_223(Global_35, func_550(3), 1) < 15f)
			{
				func_584();
			}
			if (func_585(uParam0) && func_223(Global_35, func_550(3), 1) < 15f)
			{
				func_233(14, 0);
				func_565(7, 1);
			}
			break;
		case 7:
			func_586(uParam0);
			func_587(1);
			func_588(Local_15.f_307[0]);
			if (Local_15.f_411 == 71)
			{
				Local_15.f_377 = 10;
			}
			else
			{
				Local_15.f_377 = 12;
			}
			if (!&Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				task_turn_ped_to_face_entity(0, &(Local_15.f_307[Local_15.f_377]), 5500, -1082130432, -1082130432, -1082130432);
				task_go_straight_to_coord(0, func_550(5), 0.101f, 20000, 1193033728, 1056964608, 0);
				func_576(0, 1, 0, 0, 1);
			}
			if (!func_520(1))
			{
				func_565(8, 1);
			}
			break;
		case 8:
			func_586(uParam0);
			if (func_589())
			{
				if ((does_entity_exist(Local_15.f_375) && !func_582(&(Local_15.f_307[2]), Local_15.f_375)) && !func_581(Global_35))
				{
					if (!&Local_15.f_273[0])
					{
						task_turn_ped_to_face_entity(&(Local_15.f_307[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
					}
					func_565(9, 1);
				}
				else
				{
					func_523(-1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_565(10, 1);
				}
			}
			break;
		case 9:
			func_586(uParam0);
			func_233(15, 0);
			if (does_entity_exist(Local_15.f_375) && (func_582(&(Local_15.f_307[2]), Local_15.f_375) || func_581(Global_35)))
			{
				func_523(-1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_565(10, 1);
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_239(var uParam0)
{
	switch (Local_15.f_3)
	{
		case 0:
			func_235(uParam0, func_234(3), func_234(4), 3, 4);
			func_551(func_550(5), func_550(6), 1092616192, 20f, 20f, 1, 1);
			func_553(func_552(1));
			func_554(10, 999);
			func_555(0, 1);
			func_587(1);
			func_590(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 8f, 0);
			if (Local_15.f_411 == 71)
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 5;
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= iVar0)
			{
				func_233(16, 0);
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 88 && Local_15.f_411 == 71)
			{
				func_587(0);
				func_233(17, 0);
			}
			else if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 126 && Local_15.f_411 == 98)
			{
				func_587(0);
				func_233(18, 0);
			}
			func_564(Global_35, func_550(6), 0, 30f, 20f, 10f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_235(uParam0, func_234(4), func_234(5), 4, 5);
				func_590(2, 1);
			}
			break;
		case 2:
			func_587(1);
			func_233(19, 0);
			func_549(uParam0, 1);
			func_590(3, 1);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_240()
{
	if ((!func_202(Local_15.f_267) && is_entity_in_volume(Global_35, &(Local_15.f_53[8]), true, 0)) && !is_ped_on_mount(Global_35))
	{
		Local_15.f_267 = func_537("INSPECT", -719620017, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		_uiprompt_set_group(func_538(Local_15.f_267), 925736033, 0);
	}
	if (is_entity_in_volume(Global_35, &(Local_15.f_53[8]), true, 0) && !is_ped_on_mount(Global_35))
	{
		if (Local_15.f_429)
		{
			func_540(Local_15.f_267, 0, 1);
			func_528(&uVar0, 8);
			_uiprompt_set_visible(func_538(Local_15.f_267), false);
		}
		else
		{
			func_540(Local_15.f_267, 1, 1);
			func_530(&uVar0, 8);
			_uiprompt_set_visible(func_538(Local_15.f_267), true);
		}
		_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 925736033, "H2_UC_TITLE_CAMP_FIRE", uVar0);
	}
	else if (func_202(Local_15.f_267))
	{
		func_540(Local_15.f_267, 0, 1);
		func_543(Local_15.f_267, 0, 1);
	}
}

bool func_241(var uParam0)
{
	switch (Local_15.f_4)
	{
		case 0:
			func_549(uParam0, 1);
			if (!&Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				task_follow_nav_mesh_to_coord(0, func_550(6), 1f, -1, 0.25f, 0, 40000f);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				task_follow_nav_mesh_to_coord(0, func_550(4), 1f, -1, 0.25f, 0, 40000f);
				_task_use_scenario_point(0, Local_15.f_621, 0, 0, true, false, 0, false, -1f, false);
				func_576(0, 1, 0, 0, 1);
			}
			func_564(Global_35, func_550(6), 1, 30f, 20f, 15f, 10f, 1, 1, 1, 0);
			if (!func_520(1))
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 5);
				func_523(5);
				trigger_music_event("HUNT02_CAMP");
				func_591(1, 1);
			}
			break;
		case 1:
			if (_0x9c54041bb66bcf9e(&(Local_15.f_307[0]), Local_15.f_621))
			{
				func_60(&(Local_15.f_84), 0);
			}
			if (func_529(&(Local_15.f_84), 3f) || func_541(Local_15.f_267, 1))
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					task_mount_animal(0, &(Local_15.f_307[1]), -1, -1, 1f, 1, 0, 0);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
				Local_15.f_105 = 1;
			}
			if (is_entity_in_volume(Global_35, &(Local_15.f_53[8]), true, 0))
			{
				Local_15.f_425 = 1;
			}
			if (func_541(Local_15.f_267, 1) && !Local_15.f_429)
			{
				func_568(uParam0, 5);
				_task_use_scenario_point(Global_35, func_592(), 0, 3500, true, false, 0, false, -1f, false);
				task_look_at_coord(Global_35, 482.4894f, 288.3185f, 110.1799f, 5000, 0, 51, 0);
				Local_15.f_429 = 1;
			}
			else if (func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0) && Local_15.f_105)
			{
				func_233(20, 0);
			}
			if (Local_15.f_429 && get_script_task_status(Global_35, -76381094, true) == 8)
			{
				func_549(uParam0, 2);
				func_523(3);
				func_591(2, 1);
			}
			break;
		case 2:
			if (func_583(Global_35, &(Local_15.f_307[2]), 0))
			{
				func_568(uParam0, 2);
				func_549(uParam0, 1);
			}
			if (!is_entity_in_volume(Global_35, &(Local_15.f_53[8]), true, 0))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
			if (func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 15f)
			{
				func_233(21, 0);
			}
			if ((func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0) && Local_15.f_204[21]) // PointerArith && !func_520(1))
			{
				func_591(3, 1);
			}
			break;
		case 3:
			func_591(4, 1);
			break;
		case 4:
			return true;
	}
	return false;
}

int func_242(var uParam0, vector3 vParam1, char* sParam4)
{
	if (func_593(uParam0->f_1, 1))
	{
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_593(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				*uParam0 = start_particle_fx_looped_at_coord(sParam4, vParam1, 0f, 0f, 0f, 1f, false, false, false, false);
				func_282(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_243(var uParam0)
{
	switch (Local_15.f_5)
	{
		case 0:
			func_235(uParam0, func_234(5), func_234(6), 5, 6);
			func_551(func_550(7), func_550(8), 1092616192, 15f, 15f, 0, 1);
			func_553(func_552(2));
			func_554(10, 999);
			func_555(0, 1);
			trigger_music_event("HUNT02_LOOKOUT");
			func_594(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 5)
			{
				func_233(22, 0);
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 35)
			{
				func_233(23, 0);
			}
			func_564(Global_35, Local_15.f_401, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_587(1);
				func_594(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_244(var uParam0)
{
	switch (Local_15.f_6)
	{
		case 0:
			func_235(uParam0, func_234(6), func_234(8), 6, 8);
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_549(uParam0, 1);
			func_233(23, 0);
			if (!does_entity_exist(&(Local_15.f_307[16])))
			{
				Local_15.f_307[16] = func_598(func_595(1), func_596(16), func_597(16), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_599(&(Local_15.f_307[16]), 0);
				remove_all_ped_weapons(&(Local_15.f_307[16]), true, true);
				Local_15.f_378 = _create_weapon_object(379542007, -1, get_entity_coords(&(Local_15.f_307[16]), true, false), true, 1f);
				_give_weapon_component_to_weapon_object(&(Local_15.f_378), &(Local_15.f_307[16]), 752097756, false);
				return false;
			}
			else if (!does_entity_exist(&(Local_15.f_307[17])))
			{
				Local_15.f_307[17] = func_598(func_595(1), func_596(17), func_597(17), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_516(&(Local_15.f_106), &(Local_15.f_307[17]), "HUNHC_HUNTER2", 0);
				func_599(&(Local_15.f_307[17]), 0);
				return false;
			}
			else if (!does_entity_exist(&(Local_15.f_307[18])))
			{
				Local_15.f_307[18] = func_598(func_595(2), func_596(18), func_597(18), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			else if (!does_entity_exist(&(Local_15.f_307[19])))
			{
				Local_15.f_307[19] = func_598(func_595(3), func_596(19), func_597(19), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			else
			{
				set_blocking_of_non_temporary_events(&(Local_15.f_307[16]), true);
				set_blocking_of_non_temporary_events(&(Local_15.f_307[17]), true);
				set_ped_config_flag(&(Local_15.f_307[16]), 6, true);
				set_ped_config_flag(&(Local_15.f_307[17]), 6, true);
				if (func_600(&(Local_15.f_418), func_66(Local_15.f_418), 0, 1))
				{
					func_601(Local_15.f_418);
					func_602(1, 1);
				}
				else
				{
					return false;
				}
			}
			break;
		case 1:
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (!func_603(Local_15.f_418, 1, func_66(Local_15.f_418)))
			{
				return false;
			}
			if (!func_603(Local_15.f_418, 2, func_66(Local_15.f_418)))
			{
				return false;
			}
			_0x03ddbf2d73799f9e(func_71(0));
			if (!_0x85b8f04555ab49b8(func_71(0)))
			{
				return false;
			}
			_0x03ddbf2d73799f9e(func_71(1));
			if (!_0x85b8f04555ab49b8(func_71(1)))
			{
				return false;
			}
			_0x03ddbf2d73799f9e(func_71(2));
			if (!_0x85b8f04555ab49b8(func_71(2)))
			{
				return false;
			}
			_0x03ddbf2d73799f9e(func_71(3));
			if (!_0x85b8f04555ab49b8(func_71(3)))
			{
				return false;
			}
			_0xf7ea250b9a919e03(2017973493, &(Local_15.f_307[17]));
			if (!_0x854bc9b1a1ccd034(2017973493, &(Local_15.f_307[17])))
			{
				return false;
			}
			func_602(2, 1);
			break;
		case 2:
			func_564(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			func_564(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584, 1, 1, 1, 0);
			if (!func_520(1))
			{
				func_532("H2_OBJ_FNDCMP");
				func_602(3, 1);
			}
			break;
		case 3:
			func_568(uParam0, 1);
			func_568(uParam0, 2);
			if (get_ped_config_flag(&(Local_15.f_307[0]), 167, true))
			{
				set_ped_config_flag(&(Local_15.f_307[0]), 167, false);
			}
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
			{
				func_205(&(Local_15.f_87));
			}
			else
			{
				func_60(&(Local_15.f_87), 0);
			}
			if (func_529(&(Local_15.f_87), 2.5f))
			{
				func_205(&(Local_15.f_87));
				func_233(24, 0);
				set_gameplay_coord_hint(func_545(13, 2), 2000, 2000, 2000, 0);
				func_587(0);
				func_602(4, 1);
			}
			else
			{
				if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
				{
					func_60(&(Local_15.f_84), 0);
					func_205(&(Local_15.f_75));
				}
				else
				{
					func_205(&(Local_15.f_84));
				}
				if (func_529(&(Local_15.f_84), 1.5f))
				{
					func_205(&(Local_15.f_84));
					func_233(25, 0);
					set_gameplay_coord_hint(func_545(13, 2), 2000, 2000, 2000, 0);
					func_587(0);
					func_602(4, 1);
				}
			}
			func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			break;
		case 4:
			func_60(&(Local_15.f_84), 0);
			if (func_529(&(Local_15.f_84), 4f))
			{
				set_player_control(player_id(), true, 0, false);
				func_205(&(Local_15.f_84));
				func_549(uParam0, 1);
				func_602(6, 1);
			}
			else
			{
				func_566(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_245(var uParam0)
{
	switch (Local_15.f_7)
	{
		case 0:
			func_235(uParam0, func_234(6), func_234(8), 6, 8);
			func_551(func_550(9), func_550(10), 1092616192, 15f, 15f, 0, 0);
			func_553(func_552(3));
			func_554(0, 999);
			func_555(0, 1);
			func_605(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544, 1, 1086324736, 0);
			func_606(75f);
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 35)
			{
				func_233(26, 0);
			}
			if (get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 131 && func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				func_233(27, 0);
				if (!func_199(Local_15.f_631, 64))
				{
					func_528(&(Local_15.f_631), 64);
				}
			}
			func_564(Global_35, Local_15.f_401, 0, 25f, 17f, 8f, 1084227584, 1, 1, 1, 0);
			if (func_223(&(Local_15.f_307[0]), Local_15.f_401, 1) < 3f)
			{
				func_587(1);
				func_605(2, 1);
			}
			break;
		case 2:
			func_564(Global_35, func_550(10), 0, 22f, 18f, 8f, 1084227584, 1, 1, 1, 0);
			if (func_223(Global_35, func_550(10), 1) < 8f)
			{
				if ((_is_ped_getting_into_a_mount_seat(Global_35, true) && get_script_task_status(Global_35, 501393341, true) != 1) && get_script_task_status(&(Local_15.f_307[0]), 501393341, true) != 1)
				{
					task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
				}
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
				if (is_entity_in_volume(Global_35, &(Local_15.f_53[20]), true, 0))
				{
					func_246();
				}
			}
			if (func_607(uParam0))
			{
				set_scenario_type_enabled("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", false);
				if (_is_ped_getting_into_a_mount_seat(Global_35, true))
				{
					task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
				}
				func_606(20f);
				func_605(3, 1);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_246()
{
	if (!func_29(Global_35, 0))
	{
		return;
	}
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, -1242632265, false);
	disable_control_action(0, 578288361, false);
	disable_control_action(0, 613911080, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, 1963753488, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1934388793, false);
	disable_control_action(2, -209515122, false);
	func_608(0);
	set_ped_max_move_blend_ratio(Global_35, 1.5f);
	set_ped_reset_flag(Global_35, 2, true);
	set_ped_reset_flag(Global_35, 168, true);
	set_player_may_not_enter_any_vehicle(player_id());
	if (is_entity_in_volume(Global_35, &(Local_15.f_53[17]), true, 0))
	{
		if ((_is_ped_getting_into_a_mount_seat(Global_35, true) && get_script_task_status(Global_35, 501393341, true) != 1) && get_script_task_status(&(Local_15.f_307[0]), 501393341, true) != 1)
		{
			task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
			set_ped_config_flag(&(Local_15.f_307[2]), 136, true);
		}
	}
}

bool func_247(var uParam0)
{
	disable_control_action(0, 399753205, false);
	switch (Local_15.f_8)
	{
		case 0:
			if (!&Local_15.f_273[0])
			{
				task_enter_anim_scene(&(Local_15.f_307[0]), Local_15.f_418, "CharlesSmith", func_609(1), 1.5f, 1, 11, 20000, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (_0x005e6f28dd7ed58d(Local_15.f_418, "GenStoryMale"))
			{
				_task_intimidated_2(&(Local_15.f_307[17]), Global_35, 1, 1, 1, 1, 0, 0, 0);
				_0x2208438012482a1a(&(Local_15.f_307[17]), false, false);
				if (!is_entity_dead(&(Local_15.f_307[16])))
				{
					func_610(&(Local_15.f_307[16]), 1, 1);
				}
				set_ped_config_flag(&(Local_15.f_307[18]), 301, true);
				set_ped_config_flag(&(Local_15.f_307[19]), 301, true);
				func_611(1, 1);
				_delete_volume(&(Local_15.f_53[18]));
			}
			break;
		case 1:
			func_568(uParam0, 1);
			func_549(uParam0, 3);
			if (func_29(Global_35, 0))
			{
				_0xfc3db99c8144cd81(Global_35, &(Local_15.f_53[11]), 0, 0, 0);
			}
			task_stand_still(&(Local_15.f_307[0]), -1);
			set_player_control(player_id(), true, 0, false);
			Local_15.f_273[32] = 0;
			func_611(2, 1);
			break;
		case 2:
			if (!&Local_15.f_273[32])
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				Local_15.f_273[32] = 1;
			}
			if (!_0x57779b55b83e2bea(&(Local_15.f_307[17])))
			{
				_task_intimidated_2(&(Local_15.f_307[17]), Global_35, 1, 1, 1, 0, 0, 0, 0);
			}
			if (!&Local_15.f_273[0])
			{
				task_turn_ped_to_face_entity(&(Local_15.f_307[0]), &(Local_15.f_307[17]), -1, -1082130432, -1082130432, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (!func_520(1))
			{
				func_60(&(Local_15.f_84), 0);
			}
			if ((func_529(&(Local_15.f_84), 1f) && !func_520(1)) && !Local_15.f_105)
			{
				func_205(&(Local_15.f_84));
				func_233(28, 0);
				func_611(3, 1);
			}
			break;
		case 3:
			if (func_600(&(Local_15.f_419), func_66(Local_15.f_419), 1, 1))
			{
				func_601(Local_15.f_419);
				func_611(4, 1);
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (!func_520(1))
			{
				func_60(&(Local_15.f_75), 0);
			}
			if ((func_529(&(Local_15.f_75), 6f) && !func_520(1)) && !Local_15.f_102)
			{
				func_205(&(Local_15.f_75));
				if (!func_199(Local_15.f_631, 16))
				{
					func_523(7);
				}
				Local_15.f_102 = 1;
			}
			if (func_612())
			{
				func_568(uParam0, 3);
				set_ped_config_flag(&(Local_15.f_307[18]), 301, false);
				set_ped_config_flag(&(Local_15.f_307[19]), 301, false);
				if (_0x666c2f53abefc952(&(Local_15.f_53[17])) != 5)
				{
					_0xfd010a2154b40676(&(Local_15.f_53[17]), 623901053);
				}
				func_613(87457520, 874.567f, 417.295f, 110.864f, 0.15f, 0f, 0.03f, 0f, 0f, 0f, &(Local_15.f_629), 912296423, 1, 0, 0, 1605749521);
				_0x949b2f9ed2917f5d(Global_35, 3);
				_0x949b2f9ed2917f5d(Global_35, 4);
				_0x949b2f9ed2917f5d(Global_35, 1);
				_0x949b2f9ed2917f5d(Global_35, 23);
				_0x949b2f9ed2917f5d(Global_35, 24);
				func_611(5, 1);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_248(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_614(&(uParam1->f_3), 1))
	{
		func_615(uParam1);
		if (func_616(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_617();
		}
	}
	if (func_618(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_619(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

bool func_249(var uParam0)
{
	switch (Local_15.f_9)
	{
		case 0:
			if (Local_15.f_250)
			{
				fVar0 = 2.75f;
			}
			else
			{
				fVar0 = 4.75f;
			}
			func_60(&(Local_15.f_90), 0);
			if (func_529(&(Local_15.f_90), fVar0))
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					task_mount_animal(0, &(Local_15.f_307[1]), 20000, -1, 1.5f, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, 724.6437f, 402.9194f, 107.0357f, 2f, -1, 0.25f, 1048580, 40000f);
					task_stand_still(0, -1);
					func_576(0, 1, 0, 0, 1);
				}
				if (!func_520(1))
				{
					func_549(uParam0, 6);
					set_scenario_type_enabled("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
					func_523(8);
					func_620(1, 1);
				}
			}
			break;
		case 1:
			if (func_167(912296423, 1, 0))
			{
				if (!is_entity_on_screen(&(Local_15.f_307[0])) && !is_entity_on_screen(&(Local_15.f_307[1])))
				{
					if (!func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
					{
						_set_ped_on_mount(&(Local_15.f_307[0]), &(Local_15.f_307[1]), -1, true);
					}
					set_entity_coords(&(Local_15.f_307[0]), 724.6437f, 402.9194f, 107.0357f, true, false, true, true);
				}
				trigger_music_event("HUNT02_STOP");
				func_620(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_250(var uParam0)
{
	if (is_string_null_or_empty(&(uParam0->f_18)))
	{
		return true;
	}
	if (!uParam0->f_11)
	{
		request_script(&(uParam0->f_18));
		uParam0->f_11 = 1;
	}
	if (!has_script_loaded(&(uParam0->f_18)))
	{
		return false;
	}
	else if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(uParam0->f_18))) > 0)
	{
		_0x7423f7835770f619(get_hash_key(&(uParam0->f_18)));
		return false;
	}
	else
	{
		uParam0->f_27 = start_new_script_with_name_hash(get_hash_key(&(uParam0->f_18)), uParam0->f_26);
		func_621(&(uParam0->f_9), 4, 1);
		set_script_as_no_longer_needed(&(uParam0->f_18));
	}
	return true;
}

int func_251(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_252(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_253(int iParam0)
{
	if (func_58(iParam0))
	{
		if (func_29(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_254(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_272(iParam0, 2, 1))
			{
				func_270(iParam0, 2, 1);
			}
			if (func_288(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_59(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_62(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_29(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_29(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_622(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_623(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_623(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_272(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_624(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_623(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_270(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_274(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_625(iParam0, 0, 0, 1);
			}
			func_270(iParam0, 33, 1);
			func_270(iParam0, 34, 1);
			func_270(iParam0, 29, 1);
			if (!func_497(vVar0) && bParam7)
			{
				func_623(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_623(iParam0, 4);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_622(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_626(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_623(iParam0, 4);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_627(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_628(iParam0, iParam13, 0);
						func_629(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_272(iParam0, 25, 0))
						{
							func_270(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_623(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_623(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_623(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_623(iParam0, 6);
			}
			break;
		case 6:
			if (func_29(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_630(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_631(Global_1360165[iParam0], 1);
				}
			}
			func_623(iParam0, 7);
		case 7:
			func_274(iParam0, bParam9, bParam15, 0);
			func_72(iParam0, 4, bParam11);
			func_269(iParam0);
			if (bParam20)
			{
				if (func_632(Global_1360165[iParam0]))
				{
				}
			}
			func_633(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_623(iParam0, 0);
			func_478(iParam0, 16, 1);
			func_270(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_255(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (is_entity_dead(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (func_75(iParam0, 0))
	{
		func_634(iParam0, 1);
		return 1;
	}
	if (!func_635())
	{
		return 0;
	}
	if (bParam1)
	{
		func_622(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_634(iParam0, 1);
	Global_1359489->f_15 = func_290(1);
	func_59(iParam0, 32, 1);
	set_ped_relationship_group_hash(Global_1360165[iParam0], -1247684992);
	set_ped_combat_attributes(Global_1360165[iParam0], 83, true);
	_0x9238a3d970bbb0a9(Global_1360165[iParam0], -1972074710);
	set_ped_config_flag(Global_1360165[iParam0], 152, true);
	if (_0xb7e0590c86e1711f(get_player_group(get_player_index())) != 234527101)
	{
		_0x0de02da3c0f66955(func_74(iParam0), _0xb7e0590c86e1711f(get_player_group(get_player_index())));
		_0x61bda07407754a5c(func_74(iParam0), Global_1391438->f_414.f_37);
	}
	_0x89e59dbd15e21177(func_50(), 0);
	func_636(iParam0);
	Var1 = get_player_ped(get_player_index());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0];
	Var1.f_7 = func_292();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0];
	_0x88bc5f4aef77fc4e(&Var1, 17);
	return 1;
}

bool func_256(var uParam0)
{
	func_549(uParam0, 2);
	if (_0xf256a75210c5c0eb((*Global_1888801)[71]->f_3, uParam0->f_37))
	{
		Local_15.f_411 = 71;
		Local_15.f_396 = 100;
	}
	else if (_0xf256a75210c5c0eb((*Global_1888801)[98]->f_3, uParam0->f_37))
	{
		Local_15.f_411 = 98;
		Local_15.f_396 = 58;
	}
	else
	{
		Local_15.f_411 = -1;
		return false;
	}
	request_waypoint_recording(func_552(0));
	if (!get_is_waypoint_recording_loaded(func_552(0)))
	{
		return false;
	}
	request_waypoint_recording(func_552(1));
	if (!get_is_waypoint_recording_loaded(func_552(1)))
	{
		return false;
	}
	request_waypoint_recording(func_552(2));
	if (!get_is_waypoint_recording_loaded(func_552(2)))
	{
		return false;
	}
	request_waypoint_recording(func_552(3));
	if (!get_is_waypoint_recording_loaded(func_552(3)))
	{
		return false;
	}
	request_model(func_595(0), false);
	request_model(func_595(4), false);
	request_model(func_595(5), false);
	request_model(func_595(1), false);
	request_model(func_595(2), false);
	request_model(func_595(3), false);
	request_model(1077976463, false);
	if (!has_model_loaded(func_595(0)))
	{
		return false;
	}
	if (!has_model_loaded(func_595(1)))
	{
		return false;
	}
	if (!has_model_loaded(func_595(4)))
	{
		return false;
	}
	if (!has_model_loaded(func_595(5)))
	{
		return false;
	}
	if (!has_model_loaded(func_595(2)))
	{
		return false;
	}
	if (!has_model_loaded(func_595(3)))
	{
		return false;
	}
	if (!has_model_loaded(1077976463))
	{
		return false;
	}
	func_637(1410198831);
	_request_imap(-195226224);
	_0xdfea23ec90113657(-195226224);
	if (!_is_imap_active(-195226224))
	{
		return false;
	}
	if (!_does_scenario_point_exist(Local_15.f_621))
	{
		Local_15.f_621 = create_scenario_point(1546182539, 481.24f, 266.5857f, 110.1667f, 0f, 0, -1f, 0);
	}
	if (!_does_scenario_point_exist(&(Local_15.f_622[0])))
	{
		Local_15.f_622[0] = create_scenario_point(-1241981548, 481.3692f, 288.3472f, 110.1164f, -90.72f, 0, 5f, 0);
	}
	if (!_does_scenario_point_exist(&(Local_15.f_622[1])))
	{
		Local_15.f_622[1] = create_scenario_point(-1241981548, 482.6278f, 287.5677f, 110.1579f, 26.96f, 0, 5f, 0);
	}
	if (!_does_scenario_point_exist(&(Local_15.f_622[2])))
	{
		Local_15.f_622[2] = create_scenario_point(-1241981548, 481.9943f, 289.3294f, 110.1512f, -164.81f, 0, 5f, 0);
	}
	if (!_does_scenario_point_exist(&(Local_15.f_622[3])))
	{
		Local_15.f_622[3] = create_scenario_point(-1241981548, 483.3066f, 288.7596f, 110.2767f, 117.97f, 0, 5f, 0);
	}
	iVar0 = 5;
	while (iVar0 <= 20)
	{
		if (!_does_volume_exist(&(Local_15.f_53[iVar0])))
		{
			Var1 = { func_638(iVar0) };
			Local_15.f_53[iVar0] = _create_volume_by_hash_with_custom_name(Var1, Var1.f_1, Var1.f_4, Var1.f_7, Var1.f_10);
			if (iVar0 == 14)
			{
				_0x18262cafebb5fbe1(&(Local_15.f_53[iVar0]), 0, 0, 1140376127, -1, -1, 0);
			}
			if (iVar0 == 16)
			{
				_0x4c39c95ae5db1329(&(Local_15.f_53[iVar0]), 0, 15);
			}
			if (iVar0 == 7)
			{
				_0x4c39c95ae5db1329(&(Local_15.f_53[iVar0]), 0, 15);
				_0x18262cafebb5fbe1(&(Local_15.f_53[iVar0]), 0, 0, 0, -1, -1, 0);
				func_639(&(Local_15.f_53[7]), 16);
				func_640(&(Local_15.f_53[iVar0]), 1);
			}
			if (iVar0 == 17)
			{
				if (_0x666c2f53abefc952(&(Local_15.f_53[iVar0])) != 21)
				{
					_0xfd010a2154b40676(&(Local_15.f_53[iVar0]), 1030835986);
				}
			}
			if (iVar0 == 18)
			{
				Local_15.f_53[iVar0] = _0x0eb78c2b156635b1(Var1, Var1.f_1, Var1.f_4, Var1.f_7);
			}
			if (iVar0 == 19)
			{
				_0xc1799fafd2fdf52b(&(Local_15.f_53[iVar0]), 0, 0, 0);
			}
			return false;
		}
		iVar0++;
	}
	if (Local_15.f_411 == 71)
	{
		*Local_15.f_602[0] = { 145.176f, 227.0798f, 112.549f };
		*Local_15.f_602[1] = { 128.4882f, 244.1535f, 113.4112f };
		*Local_15.f_602[2] = { 134.161f, 268.1133f, 111.3971f };
		*Local_15.f_602[3] = { 168.4228f, 269.3983f, 109.9575f };
		*Local_15.f_602[4] = { 177.1105f, 250.2016f, 108.8893f };
		*Local_15.f_602[5] = { 167.1574f, 230.7074f, 108.942f };
	}
	else
	{
		*Local_15.f_602[0] = { 185.722f, -45.01549f, 105.3866f };
		*Local_15.f_602[1] = { 204.197f, -6.08444f, 103.2539f };
		*Local_15.f_602[2] = { 241.1845f, -6.06027f, 103.3211f };
		*Local_15.f_602[3] = { 259.7549f, -45.01028f, 105.2906f };
		*Local_15.f_602[4] = { 241.1736f, -84.01103f, 106.2882f };
		*Local_15.f_602[5] = { 204.7602f, -84.17793f, 107.4515f };
		Local_15.f_423 = _0xfa50f79257745e74(307.144f, 31.118f, 103.143f, 10f, 1, -1, 0);
		Local_15.f_424 = _0xfa50f79257745e74(279.307f, 16.567f, 106.724f, 4f, 1, -1, 0);
	}
	Local_15.f_307[32] = Global_35;
	if (!does_entity_exist(&(Local_15.f_307[0])))
	{
		if (!func_10(uParam0->f_2))
		{
			func_254(7, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else
		{
			Local_15.f_307[0] = func_74(uParam0->f_2);
		}
		return false;
	}
	if (!does_entity_exist(&(Local_15.f_307[1])))
	{
		Local_15.f_307[1] = func_641(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	set_ped_reset_flag(&(Local_15.f_307[0]), 185, true);
	if (!does_entity_exist(&(Local_15.f_307[2])))
	{
		Var13.f_10 = 7;
		Var13 = 1;
		Var13.f_1 = 1;
		Var13.f_2 = 0;
		Var13.f_3 = 1;
		Var13.f_4 = 1;
		Var13.f_6 = { func_596(2) };
		Var13.f_9 = func_597(2);
		Local_15.f_307[2] = func_642(&uVar12, &Var13);
		return false;
	}
	if (does_entity_exist(&(Local_15.f_307[1])))
	{
		set_blocking_of_non_temporary_events(&(Local_15.f_307[1]), true);
		task_stand_still(&(Local_15.f_307[1]), -1);
	}
	if (does_entity_exist(&(Local_15.f_307[0])))
	{
		set_blocking_of_non_temporary_events(&(Local_15.f_307[0]), true);
		set_ped_config_flag(&(Local_15.f_307[0]), 297, true);
		set_ped_config_flag(&(Local_15.f_307[0]), 315, true);
		set_ped_config_flag(&(Local_15.f_307[0]), 130, true);
		set_ped_config_flag(&(Local_15.f_307[0]), 331, true);
		set_ped_config_flag(&(Local_15.f_307[0]), 330, true);
		set_ped_config_flag(&(Local_15.f_307[0]), 512, true);
		if (_0x30569f348d126a5a(&(Local_15.f_307[0])) != -1496612359)
		{
			_set_ped_body_component(&(Local_15.f_307[0]), -1496612359);
			_update_ped_variation(&(Local_15.f_307[0]), false, true, true, true, false);
		}
	}
	set_ped_config_flag(Global_35, 473, true);
	set_ped_config_flag(Global_35, 474, true);
	set_ped_config_flag(Global_35, 475, true);
	_0xed9582b3da8f02b4(33);
	func_621(&(uParam0->f_9), 256, 1);
	func_516(&(Local_15.f_106), Global_35, "ARTHUR", 0);
	func_516(&(Local_15.f_106), &(Local_15.f_307[0]), func_517(7), 0);
	stop_ped_speaking(func_74(uParam0->f_2), true);
	func_621(&(uParam0->f_9), 16, 0);
	func_220(&(uParam0->f_10), 4, 1);
	func_220(&(uParam0->f_10), 8, 1);
	func_220(&(uParam0->f_10), 16, 1);
	func_220(&(uParam0->f_10), 2, 1);
	func_220(&(uParam0->f_10), 1, 1);
	func_557(&(Local_15.f_307[0]), -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	_set_weather_type(1632247697, false, true, true, 45f, false);
	set_ped_config_flag(&(Local_15.f_307[2]), 136, false);
	func_643(0);
	func_606(100f);
	func_233(-1, 0);
	func_523(-1);
	return true;
}

void func_257(var uParam0)
{
	_0x0f1cd8ca9e65d5f6(func_50(), *uParam0);
	_0xd55a871e1ce3481b(func_50(), uParam0->f_37);
}

bool func_258(var uParam0)
{
	if (func_96(&Global_1935630, 2048))
	{
		return false;
	}
	if (func_644(uParam0))
	{
		do_screen_fade_in(500);
		func_645(0);
		display_hud(true);
		display_radar(true);
		return true;
	}
	return false;
}

bool func_259()
{
	return (func_646() || func_647());
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_648(0f);
	Global_1935436->f_11 = 1;
	if (func_125())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_649();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_261(int iParam0)
{
	switch (func_116())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_262(vector3 vParam0, float fParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_650(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_556(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_651(0, 0);
		if (func_459(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_652(1, 0);
		}
	}
	else
	{
		func_652(1, 0);
	}
	func_102(0);
	func_653(0, vParam0, fParam3);
	return 1;
}

bool func_263(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_42))
	{
		if (func_8(&(uParam0->f_9), 32))
		{
			uParam0->f_42 = _create_volume_sphere_with_custom_name(uParam0->f_37, 0f, 0f, 0f, uParam0->f_41, uParam0->f_41, uParam0->f_41, "Activity Volume");
		}
		else if (func_8(&(uParam0->f_9), 64))
		{
			iVar0 = 0;
			uParam0->f_42 = _0x722fbe08ef5b87bd(uParam0->f_37, 2, iVar0);
		}
		else
		{
			func_654(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
		}
	}
	if (_does_volume_exist(uParam0->f_42) && _0xf256a75210c5c0eb(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	if (!_0xf256a75210c5c0eb(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

int func_265(var uParam0)
{
	return uParam0->f_9;
}

bool func_266(int iParam0)
{
	return iParam0 > -1;
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_268(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_655(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_72(iParam0, 1, 0);
		}
	}
	func_72(iParam0, 16, bParam1);
}

void func_269(int iParam0)
{
	func_59(iParam0, 36, 1);
}

void func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_266(iParam0))
		{
			return;
		}
	}
	func_267(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_271(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_656(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_272(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_266(iParam0))
		{
			return false;
		}
	}
	func_267(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_58(iParam0))
	{
		iVar1 = func_74(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_657(iParam0);
		}
	}
	if (func_272(iParam0, 5, 1))
	{
		set_ped_config_flag(func_74(iParam0), 137, true);
	}
}

void func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_270(iParam0, 50, 1);
		func_270(iParam0, 48, 1);
		func_270(iParam0, 49, 1);
		func_270(iParam0, 51, 1);
		func_270(iParam0, 52, 1);
		func_270(iParam0, 54, 1);
		func_270(iParam0, 55, 1);
	}
	else
	{
		func_59(iParam0, 50, 1);
		func_59(iParam0, 48, 1);
		func_59(iParam0, 49, 1);
		func_59(iParam0, 51, 1);
		if (bParam3)
		{
			func_59(iParam0, 54, 1);
		}
		else
		{
			func_270(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_59(iParam0, 52, 1);
			if (bParam3)
			{
				func_59(iParam0, 55, 1);
			}
		}
		else
		{
			func_270(iParam0, 52, 1);
			if (!bParam3)
			{
				func_270(iParam0, 55, 1);
			}
		}
	}
}

void func_275(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_73(iParam0))
	{
		if (!func_10(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_272(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_271(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_74(iParam0);
	if (((does_entity_exist(iVar1) && func_658(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_59(iParam0, 2, 1);
	}
	else
	{
		func_659(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_276(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_277(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_278(int iParam0)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_280(int iParam0, int iParam1, bool bParam2)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

int func_281(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	iVar0 = func_277(iParam0);
	if (func_29(iVar0, 0))
	{
		if (func_29(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_278(iParam0)) || func_279(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_660(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_661(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_662(iParam0);
					_0x7b204f88f6c3d287(func_663(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_663(iParam0, 0));
					func_664(iParam0);
				}
			}
			else
			{
				if (func_288(iParam0, 32768, 1))
				{
					iVar2 = func_663(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_29((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_288(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_662(iParam0);
				_0x7b204f88f6c3d287(func_663(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_663(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_662(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_665(iParam0, 0);
	return 1;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
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

int func_284(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_285(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_286()
{
	if (func_666(0))
	{
		func_667(0);
	}
	if (func_666(1))
	{
		func_667(1);
	}
	if (func_666(5))
	{
		func_667(5);
	}
	if (func_666(6))
	{
		func_668(6);
	}
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_288(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_266(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_289(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_58(iParam0))
	{
		return;
	}
	if (!is_ped_in_group(iVar0))
	{
		return;
	}
	if (get_ped_group_index(iVar0) != get_player_group(get_player_index()))
	{
		return;
	}
	if (_0x917760cfe7a0e0f1(iVar0))
	{
		_0xd747979c053efa7a(func_50());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_669(iParam0, 0, 0);
}

int func_290(bool bParam0)
{
	if (bParam0)
	{
		return func_670(Global_1359489->f_4);
	}
	get_group_size(func_50(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_50(), iVar3);
		if (func_671(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_291()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_672(iVar0);
		iVar2 = func_672(iVar0 + 1);
		if (!func_58(iVar1))
		{
			if (func_58(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

int func_292()
{
	return Global_1894899->f_2;
}

int func_293(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_294(int iParam0)
{
	return iParam0 & 31;
}

int func_295(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
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

int func_296(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_297(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_673(iParam0, Global_1898164->f_162);
	return 1;
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_674(iParam0);
	}
	else
	{
		func_675(iParam0, iParam1);
	}
	func_676();
}

void func_299(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_677(iParam0, iParam1, bParam2);
}

bool func_300(int iParam0)
{
	return iParam0 != 0;
}

int func_301()
{
	return -1904156936;
}

bool func_302(int iParam0)
{
	if (!func_78(iParam0))
	{
		return false;
	}
	switch (func_81(iParam0))
	{
		case 1:
			iVar0 = func_121(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_121(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_303()
{
	return 166188472;
}

int func_304()
{
	return 2015838421;
}

int func_305()
{
	return 207908017;
}

var func_306(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_307(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

bool func_308()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_311(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_312()
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

int func_313(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_314(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_315(int iParam0)
{
	if (!func_78(iParam0))
	{
		return false;
	}
	switch (func_81(iParam0))
	{
		case 1:
			switch (func_121(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_121(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_316(int iParam0)
{
	iVar2 = func_678(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_368(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_680(func_679(iParam0), 6);
}

void func_317(int iParam0)
{
	iVar2 = func_678(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_368(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_681(func_679(iParam0), 6);
}

bool func_318(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_682(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_319(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_334(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_320(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_321(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_322(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_323()
{
	return Global_40.f_11095.f_35;
}

void func_324(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_683(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_325(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_325(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_683(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_684(1);
	}
}

bool func_326(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_327()
{
	iVar0 = func_685((*Global_1347702)[9]->f_15);
	iVar1 = func_685((*Global_1835011)[69]->f_1);
	if (func_686(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_328(int iParam0)
{
	if (!func_687(iParam0))
	{
		return false;
	}
	return func_147((*Global_1835011)[iParam0]->f_1, 1);
}

int func_329(int iParam0)
{
	if (func_81(iParam0) == 1)
	{
		return func_121(iParam0);
	}
	return -1;
}

int func_330(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_688(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_689(iVar6);
	}
	return iVar5;
}

int func_331(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_690(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_332(int iParam0, bool bParam1)
{
	func_691(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
		case 13:
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
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_334(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_332(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_335(2, *uParam0);
		}
		else
		{
			func_336(2, *uParam0);
		}
	}
	func_692(uParam0);
}

void func_335(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_336(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_339(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_693();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_694(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_366(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_695())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_130(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_693();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_696(iVar1);
		func_698(func_697(), 0, 4000);
		func_699(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_700(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_381(func_120(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_338(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_701(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_475(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_475(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_381(func_120(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_338(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_701(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_475(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_475(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_120(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_182(10, 1);
	}
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_341(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_342()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_343(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_344(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_345(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_116() == -1)
	{
		if (func_702(iParam0) && func_703(iParam0))
		{
			func_704(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_346(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_705(iParam0, iParam1);
	Var0 = { func_456(iParam0, 0, 1) };
	iVar5 = func_706(iParam0, &Var0, 0, 0);
	iVar6 = func_707(iParam0, 0);
	if ((iVar5 > 1 && !func_137()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_364(iParam0, -2051813666))
		{
			func_145(583, 1);
		}
		else
		{
			func_145(582, 0);
		}
	}
	if (func_708(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_426(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_348(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_709(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_710(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_678(bParam2), iParam0, 0);
	return iVar2;
}

bool func_349(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_350(iParam0) != 0;
}

int func_350(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_711())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_712(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_351(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_352(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_711())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_351(iVar0))
		{
			if (func_167(func_712(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_353(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_713(48);
	func_187(0, -1);
}

bool func_354(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_147((*Global_1347702)[iParam0]->f_15, 1);
}

int func_355(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_356(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_357(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_147((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_358(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_136(iParam0))
	{
		return false;
	}
	return func_13((*Global_1347702)[iParam0]->f_15);
}

int func_359()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_167(func_714(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_342() && (func_358(38) || func_354(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_342() && (func_358(39) || func_354(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_715(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_342() && (func_358(41) || func_354(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_342() && (func_358(49) || func_354(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_715(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_716(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_717(iParam0, iVar13, iVar14))
	{
	}
	if (func_718(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_719(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_720(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_721(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_722(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_361(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_342() && (func_358(38) || func_354(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_342() && (func_358(39) || func_354(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_342() && (func_358(49) || func_354(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_342() && (func_358(38) || func_354(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_482(_create_var_string(2, sVar0), _create_var_string(2, func_724(func_356(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_342() && (func_358(39) || func_354(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_342() && (func_358(49) || func_354(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_723(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_363(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_364(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
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

bool func_365(int iParam0, int iParam1)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_366(int iParam0)
{
	if (!func_725(iParam0))
	{
		return false;
	}
	return func_726(iParam0);
}

void func_367(int iParam0)
{
	if (!func_725(iParam0))
	{
		return;
	}
	func_727(iParam0);
	func_728(iParam0);
}

int func_368(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_369(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_344(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_729(iVar0) || func_730(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_370(int iParam0, bool bParam1)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_371(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_459(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_372(bool bParam0)
{
	if (func_116() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_678(bParam0));
}

bool func_373(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_456(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_731((386 + iVar28), 1);
			if (func_732(iParam0, &Var0, iVar5, 0))
			{
				if (func_733(iParam0, &Var6, iVar5))
				{
					Var29 = { func_734(iParam0, Var0, iVar5, 0) };
					func_735(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_372(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_374(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_736(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_374(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_376(iParam0))
	{
		return false;
	}
	if (!func_372(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_370(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_116() == -1)
		{
			func_371(iVar0);
			if (iParam1 == 1248274121)
			{
				func_737(iVar0);
			}
		}
		if (!func_708(iParam0, &uVar1, 1, 0, 0))
		{
			func_704(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_738(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_373(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_373(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_373(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_695())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_739(iVar0))
				{
					func_373(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_373(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_740(Global_35, 2, 0, 1);
				if ((((func_459(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_366(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_459(iVar7) && func_366(24))
				{
					if (!func_373(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_373(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_373(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_145(480, 1);
	}
	return true;
}

bool func_376(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_377(int iParam0, int iParam1, int iParam2)
{
	if (!func_376(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_459(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_167(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_413(func_741(iParam0), func_412(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_116() == -1)
		{
			if (func_147((*Global_1835011)[14]->f_1, 1))
			{
				func_145(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_372(0))
	{
		if (func_374(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_418(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_378(int iParam0)
{
	if ((iParam0 == -615217896 && !func_158()) || iParam0 != -615217896)
	{
		if (func_742(Global_35, iParam0, &uVar0))
		{
			func_397(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_403();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_403();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_403();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_401();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_399();
			break;
	}
}

void func_379(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_399();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_400();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_401();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_402();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_403();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_743();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_744();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_380(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_381(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_382(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_383(int iParam0)
{
	bVar0 = func_364(iParam0, -2017733358);
	if (func_745() < 3)
	{
		if (bVar0)
		{
			if (func_747(func_746(iParam0), iParam0))
			{
				func_413(79, func_412(func_746(iParam0)), 1);
			}
			else
			{
				func_413(78, func_412(func_746(iParam0)), 1);
			}
		}
		else
		{
			func_413(80, func_412(func_748(iParam0)), 1);
		}
	}
}

bool func_384()
{
	if (((((func_749(839908568, 400) || func_749(-1134030454, 400)) || func_749(623353496, 400)) || func_749(-344413337, 400)) || func_749(-1664948962, 400)) || func_749(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_385(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_494(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_750(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_751(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_386(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_360(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_362(51, 0, 0, 0, 0, -1, 0);
			func_752(8192);
			break;
		case 581047644:
			func_360(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_362(51, 0, 0, 0, 0, -1, 0);
			func_752(524288);
			break;
		case -644199619:
			func_360(39, 0, 0, 0, 0, 0, 1, 0);
			func_362(39, 0, 0, 0, 0, -1, 0);
			func_753(16);
			break;
		case 684296857:
			func_360(41, 0, 0, 0, 0, 0, 1, 0);
			func_362(41, 0, 0, 0, 0, -1, 0);
			func_754(8);
			break;
		case 466137807:
			func_360(49, 0, 0, 0, 0, 0, 1, 0);
			func_362(49, 0, 0, 0, 0, -1, 0);
			func_755(16);
			break;
		case -1087522507:
			func_360(43, 0, 0, -1791518714, func_756(1), 0, -1, 0);
			func_757(1);
			break;
		case -405829000:
			func_360(43, 0, 0, -2087881550, func_756(2), 0, -1, 0);
			func_757(2);
			break;
		case 378660860:
			func_360(43, 0, 0, 1908068621, func_756(4), 0, -1, 0);
			func_757(4);
			break;
		case 1566111097:
			func_360(43, 0, 0, 1611247019, func_756(8), 0, -1, 0);
			func_757(8);
			break;
		case 1276007140:
			func_360(43, 0, 0, 1319635688, func_756(16), 0, -1, 0);
			func_757(16);
			break;
	}
}

void func_387(int iParam0)
{
	if (func_758() == 1)
	{
		if (func_354(39))
		{
			func_145(342, 0);
		}
		else
		{
			func_145(343, 0);
			func_753(1);
		}
	}
	if (func_758() >= 30)
	{
		func_145(344, 0);
	}
	func_360(39, 0, 0, 0, 0, 0, -1, 0);
	func_362(39, 0, 0, func_758(), 30, 1, 0);
}

void func_388(int iParam0)
{
	if (func_759() == 1)
	{
		if (func_354(49))
		{
			func_145(409, 0);
		}
		else
		{
			func_145(410, 0);
			func_755(1);
		}
	}
	if (func_759() >= 10)
	{
		func_145(411, 0);
	}
	func_360(49, 0, 0, 0, 0, 0, -1, 0);
	func_362(49, 0, 0, func_759(), 10, 1, 0);
}

void func_389(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_145(437, 0);
			func_145(440, 0);
			func_760(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_362(51, 0, 0, sVar0, func_715(-949689219, 20), 1, 0);
			func_752(1);
			func_761(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_760(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_362(51, 0, 0, sVar0, func_715(-1248968496, 20), 1, 0);
			func_752(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_760(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_362(51, 0, 0, sVar0, func_715(1706369307, 20), 1, 0);
			func_752(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_760(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_362(51, 0, 0, sVar0, func_715(1520110311, 20), 1, 0);
			func_752(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_145(438, 0);
			func_760(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_362(51, 0, 0, sVar0, func_715(-1992824800, 20), 1, 0);
			func_752(32768);
			break;
		default:
			func_145(439, 0);
			break;
	}
}

void func_390()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_391(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_116() == -1)
	{
		if (!func_354(43))
		{
			if (iParam0 == 281887510)
			{
				func_145(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_145(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_145(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_145(400, 0);
			}
		}
		else if (func_364(iParam0, 412399755))
		{
			func_762(-1791518714);
			if (func_763() == 0)
			{
				func_187(0, 10);
				iVar1 = func_764(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_354(44))
		{
			if (iParam0 == -222563712)
			{
				func_145(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_145(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_145(401, 0);
			}
		}
		else if (func_364(iParam0, 709057512))
		{
			func_762(-2087881550);
			if (func_763() == 1)
			{
				func_187(0, 10);
				iVar1 = func_764(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_354(45))
		{
			if (iParam0 == 2116770557)
			{
				func_145(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_145(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_145(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_145(398, 0);
			}
		}
		else if (func_364(iParam0, -1478961327))
		{
			func_762(1908068621);
			if (func_763() == 2)
			{
				func_187(0, 10);
				iVar1 = func_764(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_767(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_768(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_713(48);
					}
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_354(46))
		{
			if (iParam0 == 2085530337)
			{
				func_145(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_145(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_145(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_145(406, 0);
			}
		}
		else if (func_364(iParam0, -1238404098))
		{
			func_762(1611247019);
			if (func_763() == 3)
			{
				func_187(0, 10);
				iVar1 = func_764(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_354(47))
		{
			if (iParam0 == -1521783510)
			{
				func_145(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_145(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_145(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_145(403, 0);
			}
		}
		else if (func_364(iParam0, 1160548794))
		{
			func_762(1319635688);
			if (func_763() == 4)
			{
				func_187(0, 10);
				iVar1 = func_764(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_765(iParam0) < func_766(iParam0))
					{
						func_360(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_362(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_392(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_767(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_768(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_713(48);
		}
	}
}

void func_393(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_167(func_769(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_770(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_771(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_394(int iParam0, int iParam1, int iParam2)
{
	if (func_116() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_385(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_385(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_385(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_385(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_385(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_385(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_385(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_385(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_385(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_385(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_385(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_385(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_385(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_772())
			{
				func_385(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_385(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_385(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_385(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_385(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_385(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_385(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_385(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_385(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_385(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_385(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_385(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_385(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_395(int iParam0)
{
	if (func_354(41))
	{
		func_145(363, 0);
	}
	else
	{
		func_145(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_773(-1865241121);
			func_774(-642026005);
			func_775(-642026005);
			func_187(0, 10);
			break;
		case -2108314374:
			func_773(2117142684);
			func_774(-940584364);
			func_775(-940584364);
			func_187(0, 10);
			break;
		case -1193798153:
			func_773(-1409326024);
			func_774(1972645282);
			func_775(1972645282);
			func_187(0, 10);
			break;
		case -787702678:
			func_773(-641744968);
			func_774(1667205433);
			func_775(1667205433);
			func_187(0, 10);
			break;
		case -804542901:
			func_773(-946988203);
			func_774(1362715885);
			func_775(1362715885);
			func_187(0, 10);
			break;
		case -1696275132:
			func_773(-646136018);
			func_774(1053540370);
			func_775(1053540370);
			func_187(0, 10);
			break;
		case -161595323:
			func_773(-955835837);
			func_774(-1100103852);
			func_775(-1100103852);
			func_187(0, 10);
			break;
		case -1114363619:
			func_773(-179276075);
			func_774(-1409869209);
			func_775(-1409869209);
			func_187(0, 10);
			break;
		case -368407134:
			func_773(-492711560);
			func_774(-1760235357);
			func_775(-1760235357);
			func_187(0, 10);
			break;
		case 1997759228:
			func_773(1764383959);
			func_774(-138366827);
			func_775(-138366827);
			func_187(0, 10);
			break;
		case 1265573293:
			func_773(317501533);
			func_774(-1261163843);
			func_775(-1261163843);
			func_187(0, 10);
			break;
		case -1030441283:
			func_773(817753087);
			func_774(-963523016);
			func_775(-963523016);
			func_187(0, 10);
			break;
		case -1490884871:
			func_773(576606016);
			func_774(560825326);
			func_775(560825326);
			func_187(0, 10);
			break;
		case -395458616:
			func_773(814934957);
			func_774(858269539);
			func_775(858269539);
			break;
	}
}

void func_396(int iParam0, int iParam1)
{
	func_776(iParam0, iParam1, &uVar0);
}

int func_397(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_456(iParam1, 1, 0) };
		iParam3 = func_457(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_777(iParam1, iParam2, func_444(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_778(1, (func_116() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_444(iParam3, 1)])
			{
				func_455(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_779(32768) && iParam1 != &Global_1946804->f_57[func_444(iParam3, 1)])
			{
				func_780();
				func_455(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_455(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_781(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_455(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_782(0);
			func_783(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_455(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_398(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_740(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_740(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_784("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_785(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_786(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_399()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_400()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_401()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_402()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_403()
{
	func_787();
	func_788();
	func_789();
}

void func_404(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_405(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_723(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_406(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_407(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_408(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_409(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_410(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_411(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_412(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_413(int iParam0, int iParam1, bool bParam2)
{
	func_451(iParam0, &iVar0, &iVar1);
	if (!func_452(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_790(iParam0, 1024))
	{
		return;
	}
	func_453(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_414(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_451(iParam0, &iVar0, &iVar1);
	if (!func_452(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_790(iParam0, 1024))
	{
		return;
	}
	func_453(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_415()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_711())
	{
		return func_416();
	}
	iVar4 = (func_711() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_711())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_791(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_712(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_416()
{
	iVar0 = get_random_int_in_range(0, func_711());
	return func_712(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_417(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

bool func_418(int iParam0, int iParam1, int iParam2)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_456(iParam0, 0, 1) };
	Var5 = { func_734(iParam0, Var0, Var0.f_4, 0) };
	return func_792(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_419(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	switch (func_368(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_793(81053684, 0) <= 0)
			{
				func_455(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_455(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_794(iParam0);
			if (func_795(iVar0))
			{
				func_796(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_455(30, iParam0, 0, 0, 0);
			}
			if (func_446() == -2125499975 || func_446() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_455(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_446() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_455(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_797(-525676072, 0))
			{
				if (func_798(-525676072, &iVar1))
				{
					func_455(33, iVar1, 0, 0, 0);
				}
			}
			func_455(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_799(99217379))
		{
			func_397(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_367(24);
		if (func_398(&iVar2, 0))
		{
			func_373(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_420(int iParam0)
{
	if (func_364(iParam0, 943695443))
	{
		func_800(0, iParam0);
	}
	else if (func_364(iParam0, -2096528786))
	{
		func_800(1, iParam0);
	}
	else if (func_364(iParam0, -1094167013))
	{
		func_800(2, iParam0);
	}
	else if (func_364(iParam0, 1936654645))
	{
		func_800(3, iParam0);
	}
	else if (func_364(iParam0, 1306489306))
	{
		func_800(4, iParam0);
	}
	else if (func_364(iParam0, 435762317))
	{
		func_800(5, iParam0);
	}
	else if (func_364(iParam0, 1259363210))
	{
		func_800(6, iParam0);
	}
	else if (func_364(iParam0, 881398259))
	{
		func_800(7, iParam0);
	}
	else if (func_364(iParam0, -541549214))
	{
		func_800(8, iParam0);
	}
	else if (func_364(iParam0, 130796156))
	{
		func_800(-1, iParam0);
	}
}

int func_421(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_801(&Var4, 1356624740);
	return func_802(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_422(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return Var0;
	}
	if (func_364(iParam0, -305066475))
	{
		if (func_116() == -1)
		{
			if (func_364(iParam0, -537818634))
			{
				return func_120(189951448);
			}
			else
			{
				return func_120(1176172851);
			}
		}
	}
	else if (func_364(iParam0, -537818634))
	{
		return func_120(-963660207);
	}
	if (func_364(iParam0, 2084895747))
	{
		return func_120(1694039471);
	}
	return Var2;
}

void func_423(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_116() == -1)
			{
				if (func_147((*Global_1835011)[4]->f_1, 1))
				{
					func_145(109, 1);
				}
			}
			break;
	}
}

void func_424(int iParam0, char* sParam1)
{
	sVar0 = func_804(func_803(0));
	func_475(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_805(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_425(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_344(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_806())
	{
		func_807(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_808(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_808(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_365(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_363(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_809(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_810(_create_var_string(10, &cVar2, _create_var_string(0, func_412(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_364(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_412(iParam0));
	}
	func_475(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_426(int iParam0, int iParam1)
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

struct<10> func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_428(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = _item_database_create_item_collection(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_429(int iParam0, int iParam1)
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

bool func_430(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_811(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_811(iParam0, Var2, 1))
				{
					if (func_812(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_812(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_145(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_95(0, 0, 1))
		{
			func_187(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_431(int iParam0)
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

void func_432(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_145(iVar0, 0);
	}
}

void func_433()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_813(0);
			_unlock_set_unlocked(-121456797, false);
			func_814();
		}
		return;
	}
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_815();
	if (_0x57e798b54c45ee1a(1685912227) >= 2)
	{
		if (_0x57e798b54c45ee1a(2116153146) < 2)
		{
			_0xe824ce7d13fcb300(2116153146, 2);
		}
	}
	if (_unlock_is_unlocked(-121456797))
	{
		return;
	}
	_unlock_set_unlocked(-121456797, true);
	if (_unlock_is_unlocked(645322743))
	{
		return;
	}
	func_813(1);
}

void func_434()
{
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_139(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_435()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_816(0);
			_unlock_set_unlocked(1244328330, false);
		}
		return;
	}
	if (_unlock_is_unlocked(1244328330))
	{
		return;
	}
	if (_unlock_is_unlocked(-1383789777))
	{
		return;
	}
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_816(1);
}

void func_436()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_817(15000, 0, 0, 0, 1);
			func_816(0);
			_unlock_set_unlocked(398807247, false);
		}
		return;
	}
	if (_unlock_is_unlocked(398807247))
	{
		return;
	}
	if (_unlock_is_unlocked(-1651350587))
	{
		return;
	}
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_486(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_816(1);
}

void func_437()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_167(1191437462, 1, 0) && !func_13((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_139(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_818(1))
			{
				func_409(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_167(1119149048, 1, 0) && !func_13((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_139(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_818(2))
			{
				func_409(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_818(4))
		{
			func_409(4);
		}
		if (func_818(0))
		{
			func_819(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_167(1191437462, 1, 0))
			{
				func_440(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_167(1119149048, 1, 0))
			{
				func_440(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_818(1))
		{
			func_819(1);
		}
		if (func_818(2))
		{
			func_819(2);
		}
		if (func_818(4))
		{
			func_819(4);
		}
		if (!func_818(0))
		{
			func_409(0);
		}
	}
}

void func_438()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_147((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_820() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_371(127400949);
		if (func_373(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_820() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_821(-2055673461, Var1, 1423542233);
		func_821(-202131179, Var1, -1264898804);
		func_821(2013836545, Var1, 1592019450);
		func_821(1497476650, Var1, 1117400455);
		func_821(1063571467, Var1, 1150213537);
		func_821(2107224237, Var1, 1598825281);
		func_821(1747981656, Var1, -712527121);
		func_821(-1371140647, Var1, 454332195);
		func_821(-19142973, Var1, 256105670);
		func_821(-2074737817, Var1, -1328061889);
		func_821(-1114256243, Var1, -782241404);
		func_821(-1653277288, Var1, 1669853467);
		func_821(1869398132, Var1, -1559225678);
		func_821(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_822())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_459(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_366(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_366(24) && func_459(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_459(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_366(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_439()
{
	if (_unlock_is_unlocked(99890643))
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_orbis_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_durango_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
}

int func_440(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_709(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_425(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_167(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_422(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_348(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_348(iParam0, 0, 0) - iParam1) < 0)
		{
			func_440(iParam0, func_348(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_363(iParam0) == -427144552)
	{
		if (!func_823(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_824(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_372(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_425(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_825(iParam0, iParam1);
	return 1;
}

bool func_441(int iParam0)
{
	switch (func_368(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_442(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_368(iParam0))
	{
		case -2061583405:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_826(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_827();
	}
	if (bParam1)
	{
		func_828(0, 0);
	}
}

int func_443(int iParam0)
{
	Var0 = { func_456(iParam0, 1, 0) };
	return func_457(Var0.f_4);
}

int func_444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_445(int iParam0)
{
	if (func_116() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_444(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_829(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_446()
{
	return Global_1946804->f_1;
}

bool func_447(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_830(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_832(uParam0, func_831(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_444(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1] = iVar0;
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_833(iVar3) && func_834(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_835(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_448(int iParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return *Global_26796.f_26[iParam1]->f_1.f_1[iParam0];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iParam0];
}

int func_449(int iParam0, int iParam1)
{
	vVar0 = { func_448(iParam0, iParam1) };
	return vVar0.x;
}

void func_450(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_451(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_452(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_836(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_837(iParam0))
	{
		return false;
	}
	if (func_838(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_790(iParam0, 1)) || func_20(32768))
	{
		if (!func_790(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_839())
	{
		return false;
	}
	return true;
}

void func_453(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_454(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_455(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_840(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_841(Var0);
}

struct<5> func_456(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_842(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_363(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_734(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_843(bParam1) };
			if (bParam2 && func_844(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_732(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_732(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_733(iParam0, &Var5, 1728382685))
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
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_845(bParam1) };
			switch (func_368(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_846(iParam0, -1823706425))
			{
				Var0 = { func_734(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_846(iParam0, -1483207246))
			{
				Var0 = { func_734(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_847(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
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

int func_457(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_848(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_458(int iParam0)
{
	func_829(Global_1946804->f_1497.f_1[func_444(iParam0, 1)], 2, 6);
	func_829(Global_1946804->f_1378.f_1[func_444(iParam0, 1)], 2, 6);
}

bool func_459(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_460(int iParam0)
{
	return iParam0 != 0;
}

int func_461(int iParam0)
{
	iVar0 = -1;
	if (!func_460(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_462(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_463(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_849(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_464(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_465(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_466(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_467(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_468(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_469(int iParam0, int iParam1)
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

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_850(iParam0, iParam6);
	func_851(iParam0, iParam5);
	func_852(iParam0, iParam4);
	func_853(iParam0, iParam3);
	func_854(iParam0, iParam2);
	func_855(iParam0, iParam1);
}

bool func_471(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_468(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_467(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_466(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_463(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_464(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_465(iParam0);
	if (iVar5 < 1 || iVar5 > func_469(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0, bool bParam1)
{
	return func_686(func_114(), iParam0, bParam1);
}

void func_473(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_474(int iParam0, int iParam1)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_709(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_784("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_785(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_459(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_786(iVar1);
				return true;
			}
			iVar3++;
		}
		func_786(iVar1);
	}
	return false;
}

var func_475(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_856(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_476()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_857(iVar1);
		if (!_unlock_is_visible(func_858(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_477()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_857(iVar0);
		if (!_unlock_is_visible(func_858(iVar1)))
		{
			_unlock_set_visible(func_858(iVar1), true);
		}
		iVar0++;
	}
}

void func_478(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_479(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_480()
{
	return (func_96(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_481(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_116() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_344(iVar0, 0))
	{
		return 0;
	}
	if (!func_859(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_860(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_364(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_456(iVar0, 0, 1) };
	iVar10 = func_861(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_862(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_863(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_139(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_817(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

var func_482(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_483(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_475(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_484(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_485(bool bParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (_spactionproxy_get_next_pending_crafting_action(&uVar0))
		{
			if (!_spactionproxy_process_action(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (_spactionproxy_get_next_pending_buy_action(&uVar9))
		{
			if (!_spactionproxy_process_action(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_486(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_750(iParam0, sParam4, iParam5);
	}
	func_751(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_487(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_864())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_864())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_80(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_121(iParam0);
	if (func_81(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_81(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_865(1, iVar1);
					func_865(8, iVar1);
					func_865(7, iVar1);
					break;
				case 12:
					func_865(6, iVar1);
					break;
				case 53:
					func_865(3, iVar1);
					func_865(7, iVar1);
					func_865(4, iVar1);
					break;
				case 20:
					func_865(8, iVar1);
					break;
				case 19:
					func_865(1, iVar1);
					func_865(2, iVar1);
					break;
				case 24:
					func_865(3, iVar1);
					func_865(9, iVar1);
					func_865(20, iVar1);
					break;
				case 28:
					func_865(1, iVar1);
					break;
				case 34:
					func_865(23, iVar1);
					func_865(2, iVar1);
					func_865(18, iVar1);
					break;
				case 29:
					func_865(0, iVar1);
					func_865(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_865(0, iVar1);
					func_865(3, iVar1);
					func_865(2, iVar1);
					func_865(11, iVar1);
					func_865(6, iVar1);
					func_865(25, iVar1);
					func_865(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_865(5, iVar1);
					break;
				case 63:
					func_865(1, iVar1);
					func_865(3, iVar1);
					break;
				case 37:
					func_865(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_183(0, 10, 11, 2116153146))
			{
				func_865(7, iVar1);
				func_865(4, iVar1);
			}
			else if (iParam0 == func_183(0, 7, 11, -379687487))
			{
				func_865(8, iVar1);
				func_865(15, iVar1);
			}
			else if (iParam0 == func_183(0, 8, 11, -1386089015))
			{
				func_865(3, iVar1);
			}
			else if (iParam0 == func_183(0, 11, 11, -1952009645))
			{
				func_865(6, iVar1);
				func_865(3, iVar1);
			}
			else if (iParam0 == func_183(0, 12, 11, 2065895756))
			{
				func_865(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_866()));
	if (!func_867(629))
	{
		func_145(629, 0);
	}
}

int func_488(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_489(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_490(int iParam0, int iParam1, var uParam2)
{
	if (!func_489(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_491()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_492(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_493(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_868(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_491())
	{
		return -1;
	}
	iVar0 = func_492(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_298(iVar1, 0);
	func_321(iVar1, 0);
	func_869(iVar1, 0);
	func_870(iVar1, 0);
	func_871(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_872(iVar1, iParam4);
	}
	return iVar1;
}

int func_494(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_167(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_344(iVar25, 0) && func_364(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_495(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

Vector3 func_496(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_873(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_874() == 0 && !func_875(0))
		{
			bVar14 = true;
		}
	}
	if (!func_876(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_877();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_878(Global_1310720->f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_879(iVar0, iVar1) };
			bVar11 = func_880(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_497(vVar7)) && func_881(iVar0, bParam8, iParam12)) && !func_882(iVar0)) || bVar11)
			{
				if (func_883(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

bool func_497(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_498(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_499(vector3 vParam0, bool bParam3)
{
	iVar0 = func_884(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_500()
{
	disable_script_brain_set(1);
}

void func_501()
{
}

void func_502()
{
	disable_script_brain_set(2);
}

int func_503(int iParam0)
{
	return iParam0;
}

void func_504(int iParam0)
{
	if (!func_885(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_505(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_506(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_264, iVar0, func_886(iVar0));
		iVar0++;
	}
}

int func_507(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_508()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_509(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_887(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_510(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_512() - fParam1);
	func_888(uParam0, 1);
	func_889(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_511(var uParam0)
{
	return func_505(*uParam0, 2);
}

float func_512()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_513(var uParam0, char* sParam1, var uParam2)
{
	Var0 = Global_1359489->f_21;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	Var0.f_4 = get_hash_key(sParam1);
	if (func_890(Var0, 2072518271, uParam2, 0))
	{
		return true;
	}
	return false;
}

void func_514(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_515(char[4] cParam0)
{
	return _0xd89504d9d7d5057d(cParam0);
}

void func_516(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_891(uParam0, iParam1, sParam2))
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

char* func_517(int iParam0)
{
	if (!func_58(iParam0))
	{
		return "INVALID";
	}
	switch (iParam0)
	{
		case 3:
			return "BILL";
		case 5:
			return "HOSEA";
		case 1:
			return "JOHN";
		case 7:
			return "CHARLES_SMITH";
		case 0:
			return "DUTCH";
		case 2:
			return "JAVIER";
		case 9:
			return "LENNY";
		case 8:
			return "SEAN";
		case 6:
			return "MICAH_BELL";
		case 4:
			return "UNCLE";
		case 11:
			return "SADIE_ADLER";
		case 21:
			return "SWANSON";
		case 23:
			return "TRELAWNY";
		case 18:
			return "STRAUSS";
		default:
			break;
	}
	return "NEEDS TO BE ADDED";
}

bool func_518(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_892(cParam1, cParam0);
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

bool func_519(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return false;
	}
	return true;
}

bool func_520(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_894(&(Local_15.f_106), func_893(iParam0), iParam1, iParam2, 0, 0, 1, 1))
	{
		Local_15.f_204[iParam0] = iParam3;
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (!bParam4 || (bParam4 && bVar0))
	{
		func_233(-1, 0);
	}
}

var func_522(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_895(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_896(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_895(sVar0, iParam1, 0, 0, 1, 1);
}

void func_523(int iParam0)
{
	if (Local_15.f_11 != iParam0)
	{
		Local_15.f_11 = iParam0;
		if (iParam0 != -1)
		{
			Local_15.f_12 = Local_15.f_11;
		}
	}
}

int func_524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, iParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

Vector3 func_525()
{
	switch (Local_15.f_628)
	{
		case 0:
			return get_entity_coords(&(Local_15.f_307[0]), true, false);
		case 1:
			if (Local_15.f_411 == 71)
			{
				return 152.0808f, 250.6083f, 107.8168f;
			}
			else
			{
				return 222.6963f, -45.03358f, 107.8168f;
			}
			break;
		case 2:
			return 481.967f, 290.271f, 111.3091f;
		case 3:
			return get_entity_coords(&(Local_15.f_307[17]), true, false);
		case 4:
			return func_545(13, 2);
	}
	return get_entity_coords(&(Local_15.f_307[0]), true, false);
}

float func_526()
{
	return Local_15.f_627;
}

char* func_527()
{
	switch (Local_15.f_628)
	{
		case 0:
			return "H2_OBJ_RTCHA";
		case 1:
			return "H2_OBJ_RTBIS";
		case 2:
			return "H2_OBJ_RTABCP";
		case 3:
			return "H2_OBJ_RTP";
		case 4:
			return "H2_OBJ_RTPCP";
	}
	return "H2_OBJ_RTCHA";
}

void func_528(int iParam0, int iParam1)
{
	func_897(iParam0, iParam1);
}

bool func_529(var uParam0, float fParam1)
{
	if (!func_204(uParam0))
	{
		return false;
	}
	if (func_219(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_530(int iParam0, int iParam1)
{
	func_898(iParam0, iParam1);
}

char* func_531()
{
	switch (Local_15.f_12)
	{
		case 0:
			return "H2_OBJ_KILLBUF";
		case 1:
			return "H2_OBJ_SKINBUF";
		case 2:
			return "H2_OBJ_STWHID";
		case 3:
			return "H2_OBJ_MNTFLW";
		case 4:
			return "H2_OBJ_FOLLOW";
		case 5:
			return "H2_OBJ_SEARCH";
		case 6:
			return "H2_OBJ_FNDCMP";
		case 7:
			return "H2_OBJ_INT";
		case 8:
			return "H2_OBJ_LOOT";
	}
	return "";
}

void func_532(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

bool func_533()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (((does_entity_exist(&(Local_15.f_307[iVar0])) && &Local_15.f_307[iVar0] != Local_15.f_376) && is_entity_dead(&(Local_15.f_307[iVar0]))) || is_ped_in_writhe(&(Local_15.f_307[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_534(int iParam0)
{
	func_514(1, iParam0, 0);
}

bool func_535()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (((does_entity_exist(&(Local_15.f_307[iVar0])) && does_entity_exist(Local_15.f_376)) && &Local_15.f_307[iVar0] != Local_15.f_376) && has_entity_been_damaged_by_entity(&(Local_15.f_307[iVar0]), Global_35, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_536(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

int func_537(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_899(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_900(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_538(var uParam0)
{
	iVar0 = func_503(uParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return (*Global_1945938)[iVar0]->f_3;
}

bool func_539()
{
	return &Global_1357517;
}

void func_540(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	if (bParam1)
	{
		func_901(iParam0, 4);
		func_902(iVar0, 1);
		func_903(iVar0, 1);
	}
	else
	{
		func_904(iParam0, 4);
		func_903(iVar0, 0);
	}
}

bool func_541(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return false;
	}
	iVar0 = func_503(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 37;
		case 11:
			return 38;
		case 12:
			return 39;
		case 13:
			return 40;
	}
	return -1;
}

void func_543(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	func_902(iVar0, bParam1);
}

bool func_544(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

Vector3 func_545(int iParam0, int iParam1)
{
	return func_905(iParam0, iParam1);
}

float func_546(int iParam0, int iParam1)
{
	return func_906(iParam0, iParam1);
}

void func_547(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_81(iParam0) == 1)
	{
		cVar0 = func_907(func_329(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_81(iParam0) == 8)
	{
		cVar0 = func_909(func_908(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_650(1, 1);
	func_653(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_103(0);
	func_104(0);
	func_91(1f);
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		Local_15.f_273[0] = 0;
	}
	Local_15.f_105 = 0;
	Local_15.f_102 = 0;
	Local_15.f_104 = 0;
	Local_15.f_103 = 0;
	Local_15.f_641 = 0;
	func_205(&(Local_15.f_84));
	func_205(&(Local_15.f_75));
	func_205(&(Local_15.f_81));
	func_205(&(Local_15.f_78));
	func_205(&(Local_15.f_90));
}

void func_549(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			func_910(uParam0->f_2);
			func_532("H2_OBJ_FOLLOW");
			func_643(0);
			func_606(100f);
			break;
		case 2:
			if (!func_232(7))
			{
				func_911(7);
			}
			func_286();
			if ((Local_15 == 2 && Local_15.f_2 == 3) || func_199(Local_15.f_631, 524288))
			{
				func_643(0);
				func_606(100f);
			}
			else
			{
				func_532("H2_OBJ_MNTFLW");
			}
			break;
		case 3:
			Local_15.f_17 = func_524(&(Local_15.f_307[17]), 408396114, 1, 1);
			func_532("H2_OBJ_INT");
			func_643(3);
			func_606(20f);
			break;
		case 4:
			if (Local_15.f_411 == 71)
			{
				Local_15.f_17 = _blip_add_for_radius(408396114, 152.0808f, 250.6083f, 107.8168f, 85f);
			}
			else
			{
				Local_15.f_17 = _blip_add_for_radius(408396114, 222.6963f, -45.03358f, 107.8168f, 115f);
			}
			func_532("H2_OBJ_KILLBUF");
			func_643(1);
			func_606(200f);
			break;
		case 5:
			Local_15.f_17 = _blip_add_for_radius(408396114, 481.967f, 290.271f, 111.3091f, 15f);
			func_532("H2_OBJ_SEARCH");
			func_643(2);
			func_606(100f);
			break;
		case 6:
			Local_15.f_17 = _blip_add_for_radius(408396114, func_545(13, 2), 15f);
			func_532("H2_OBJ_LOOT");
			func_643(4);
			func_606(100f);
			break;
	}
}

Vector3 func_550(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_545(23, 0);
				case 1:
					return func_545(23, 1);
				case 2:
					return func_545(23, 2);
				case 3:
					return func_545(23, 3);
				case 4:
					return func_545(23, 4);
				case 5:
					return func_545(23, 5);
				case 6:
					return func_545(23, 6);
				case 7:
					return func_545(23, 7);
				case 8:
					return func_545(23, 8);
				case 9:
					return func_545(23, 14);
				case 10:
					return func_545(23, 15);
				case 11:
					return func_545(23, 9);
				case 12:
					return func_545(23, 10);
				case 13:
					return func_545(23, 11);
				case 14:
					return func_545(23, 12);
				case 15:
					return func_545(23, 13);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_545(24, 0);
				case 1:
					return func_545(24, 1);
				case 2:
					return func_545(24, 2);
				case 3:
					return func_545(24, 3);
				case 4:
					return func_545(24, 4);
				case 5:
					return func_545(24, 5);
				case 6:
					return func_545(24, 6);
				case 7:
					return func_545(24, 7);
				case 8:
					return func_545(24, 8);
				case 9:
					return func_545(24, 14);
				case 10:
					return func_545(24, 15);
				case 11:
					return func_545(24, 9);
				case 12:
					return func_545(24, 10);
				case 13:
					return func_545(24, 11);
				case 14:
					return func_545(24, 12);
				case 15:
					return func_545(24, 13);
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_551(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10)
{
	Local_15.f_398 = { vParam0 };
	Local_15.f_401 = { vParam3 };
	Local_15.f_406 = iParam6;
	Local_15.f_404 = fParam7;
	Local_15.f_405 = fParam8;
	Local_15.f_407 = iParam9;
	Local_15.f_409 = iParam10;
}

char* func_552(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return "hunt02_ride_to_buffalo_herd";
				case 1:
					return "hunt02_ride_to_dead_buffalo_1";
				case 2:
					return "hunt02_ride_to_vantage_point";
				case 3:
					return "hunt02_ride_to_hunters";
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return "hunt02_ride_to_buffalo_herd_clm";
				case 1:
					return "hunt02_ride_to_dead_buffalo_1_clm";
				case 2:
					return "hunt02_ride_to_vantage_point";
				case 3:
					return "hunt02_ride_to_hunters";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_553(char* sParam0)
{
	Local_15.f_397 = sParam0;
}

void func_554(int iParam0, int iParam1)
{
	Local_15.f_393 = iParam0;
	Local_15.f_394 = iParam1;
}

void func_555(int iParam0, bool bParam1)
{
	if (Local_15.f_391 != iParam0)
	{
		Local_15.f_392 = Local_15.f_391;
		Local_15.f_391 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

int func_556(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_557(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_459(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
						if (!Global_43891)
						{
							if (func_459(iVar4) && iVar4 != iVar0)
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
	if (func_116() == -1 && !func_730(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
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
				if (func_730(-183018591))
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
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_459(iVar0))
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
	if (iParam0 == Global_35)
	{
		func_373(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_912(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_739(iVar0))
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

void func_558(int iParam0, bool bParam1)
{
	if (Local_15.f_1 != iParam0)
	{
		Local_15.f_1 = iParam0;
	}
	func_548(bParam1);
}

int func_559(var uParam0, bool bParam1)
{
	if (func_583(Global_35, &(Local_15.f_307[2]), 0) && Local_15.f_410 != 1)
	{
		func_568(uParam0, 2);
		func_549(uParam0, 1);
		Local_15.f_410 = 1;
	}
	else if (!func_583(Global_35, &(Local_15.f_307[2]), 0) && Local_15.f_410 != 2)
	{
		func_568(uParam0, 1);
		func_549(uParam0, 2);
		Local_15.f_410 = 2;
	}
	switch (Local_15.f_391)
	{
		case 0:
			func_555(1, 1);
			break;
		case 1:
			if (!func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				if (!&Local_15.f_273[1])
				{
					clear_ped_tasks(&(Local_15.f_307[1]), 1, 0);
					task_stand_still(&(Local_15.f_307[1]), -1);
					Local_15.f_273[1] = 1;
				}
				if (!func_913(&(Local_15.f_307[0]), 1868526510))
				{
					clear_ped_tasks(&(Local_15.f_307[0]), 1, 0);
					task_mount_animal(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 20000, -1, 1.5f, 131072, 0, 0);
					Local_15.f_273[0] = 1;
				}
			}
			else if (Local_15.f_392 == 5)
			{
				func_555(4, 1);
			}
			else
			{
				func_555(2, 1);
			}
			break;
		case 2:
			if (func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					task_follow_nav_mesh_to_coord(0, Local_15.f_398, 1f, -1, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
				func_555(3, 1);
			}
			else
			{
				func_555(1, 1);
			}
			break;
		case 3:
			func_564(Global_35, get_entity_coords(&(Local_15.f_307[0]), true, false), 0, 30f, 20f, 10f, 1084227584, 1, 1, 1, 0);
			if (func_223(Global_35, Local_15.f_398, 1) >= Local_15.f_406 && func_563(Global_35, &(Local_15.f_307[0]), 1, 1) >= 10f)
			{
				if (!&Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					task_follow_nav_mesh_to_coord(0, Local_15.f_398, 1.25f, -1, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_576(0, 1, 0, 0, 1);
				}
			}
			else if ((func_583(Global_35, &(Local_15.f_307[2]), 0) && func_223(Global_35, Local_15.f_398, 1) < Local_15.f_406) && func_223(&(Local_15.f_307[0]), Local_15.f_398, 1) < 10f)
			{
				func_555(4, 1);
			}
			break;
		case 4:
			if (func_75(uParam0->f_2, 0))
			{
				func_76(uParam0->f_2);
			}
			else
			{
				if (!does_group_exist(Local_15.f_420))
				{
					Local_15.f_420 = create_group(0);
					set_group_formation(Local_15.f_420, 5);
					add_custom_formation_location(Local_15.f_420, 0f, -5f, 0f, 0);
					set_ped_config_flag(&(Local_15.f_307[0]), 279, true);
					set_ped_as_group_leader(&(Local_15.f_307[0]), Local_15.f_420, false);
				}
				_0xac22aa6df4d1c1de(player_id(), &(Local_15.f_307[0]), -1082130432, -1082130432, 4, 2, 1);
				if (waypoint_recording_get_closest_waypoint(Local_15.f_397, get_entity_coords(&(Local_15.f_307[0]), true, false), &(Local_15.f_395)))
				{
					if (!&Local_15.f_273[0])
					{
						if (Local_15.f_407)
						{
							func_574(0, 1, 1);
							task_follow_waypoint_recording(0, Local_15.f_397, Local_15.f_395, 25866, -1, 0, Local_15.f_409, -1);
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_576(0, 1, 0, 0, 1);
						}
						else
						{
							func_574(0, 1, 1);
							task_follow_waypoint_recording(0, Local_15.f_397, Local_15.f_395, 25864, -1, 0, Local_15.f_409, -1);
							task_stand_still(0, -1);
							func_576(0, 1, 0, 0, 1);
							Local_15.f_273[0] = 1;
						}
					}
					func_555(5, 1);
				}
			}
			break;
		case 5:
			if (!func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				func_555(1, 1);
			}
			if ((are_strings_equal(Local_15.f_397, func_552(0)) && get_ped_waypoint_progress(&(Local_15.f_307[0])) >= Local_15.f_396) && !Local_15.f_408)
			{
				set_group_formation(Local_15.f_420, 3);
				Local_15.f_408 = 1;
			}
			if ((are_strings_equal(Local_15.f_397, func_552(3)) && is_waypoint_playback_going_on_for_ped(&(Local_15.f_307[0]), 0)) && get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 131)
			{
				set_ped_max_move_blend_ratio(Global_35, 2.5f);
				set_enable_speed_restrain_for_waypoint_recording_leader(&(Local_15.f_307[0]), 0);
				func_914(&(Local_15.f_307[0]), Local_15.f_393, Local_15.f_394);
			}
			else if (((are_strings_equal(Local_15.f_397, func_552(1)) && is_waypoint_playback_going_on_for_ped(&(Local_15.f_307[0]), 0)) && get_ped_waypoint_progress(&(Local_15.f_307[0])) >= 115) && Local_15.f_411 == 98)
			{
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
				func_915(&(Local_15.f_307[0]), Local_15.f_393, Local_15.f_394, 1.5f, 1.001f);
			}
			else if (is_waypoint_playback_going_on_for_ped(&(Local_15.f_307[0]), 0))
			{
				set_ped_max_move_blend_ratio(Global_35, 1.75f);
				func_915(&(Local_15.f_307[0]), Local_15.f_393, Local_15.f_394, 1071644672, 1067450368);
			}
			if (func_223(Global_35, Local_15.f_401, 1) < Local_15.f_405 && func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < Local_15.f_404)
			{
				func_555(6, 1);
			}
			break;
		case 6:
			if (get_ped_config_flag(&(Local_15.f_307[0]), 167, true) && Local_15 <= 4)
			{
				set_ped_config_flag(&(Local_15.f_307[0]), 167, false);
			}
			if (bParam1)
			{
				func_916();
			}
			func_555(7, 1);
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_560(var uParam0, float fParam1, bool bParam2, float fParam3, int iParam4)
{
	if (func_917() && iParam4)
	{
		func_586(uParam0);
	}
	else
	{
		func_918();
		func_919(fParam1, bParam2, fParam3);
	}
}

bool func_561()
{
	if (func_199(Local_15.f_631, 128))
	{
		return true;
	}
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (!does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			iVar1 = iVar0;
			Local_15.f_307[iVar0] = func_598(func_595(0), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(Local_15.f_307[iVar0]), true);
			task_animal_unalerted(&(Local_15.f_307[iVar0]), -1, &(Local_15.f_53[5]), 0, 0);
			set_ped_config_flag(&(Local_15.f_307[iVar0]), 297, true);
			return false;
		}
		iVar0++;
	}
	func_528(&(Local_15.f_631), 128);
	return true;
}

bool func_562()
{
	if (func_199(Local_15.f_631, 256))
	{
		return true;
	}
	iVar0 = 10;
	while (iVar0 <= 15)
	{
		iVar1 = iVar0;
		if (!does_entity_exist(&(Local_15.f_307[iVar0])) && !(iVar1 == 13 && func_199(Local_15.f_631, 1024)))
		{
			Local_15.f_307[iVar0] = func_598(func_595(0), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (iVar1 == 10)
			{
				func_920(&(Local_15.f_307[iVar0]), -1989505391);
			}
			else if (iVar1 == 11)
			{
				func_920(&(Local_15.f_307[iVar0]), -1275599965);
			}
			else if (iVar1 == 12)
			{
				func_920(&(Local_15.f_307[iVar0]), -1514322130);
			}
			else if (iVar1 == 13)
			{
				func_528(&(Local_15.f_631), 1024);
			}
			func_921(&(Local_15.f_307[iVar0]), 0);
			freeze_entity_position(&(Local_15.f_307[iVar0]), true);
			set_entity_collision(&(Local_15.f_307[iVar0]), false, false);
			set_entity_visible(&(Local_15.f_307[iVar0]), false);
			if (iVar0 <= 13)
			{
				Local_15.f_466[iVar0] = create_object(1077976463, get_entity_coords(&(Local_15.f_307[iVar0]), true, false), true, true, false, false, true);
				attach_entity_to_entity(&(Local_15.f_466[iVar0]), &(Local_15.f_307[iVar0]), get_ped_bone_index(&(Local_15.f_307[iVar0]), 21030), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				freeze_entity_position(&(Local_15.f_466[iVar0]), true);
				set_entity_collision(&(Local_15.f_466[iVar0]), false, false);
				set_entity_visible(&(Local_15.f_466[iVar0]), false);
			}
			return false;
		}
		if (!is_entity_dead(&(Local_15.f_307[iVar0])))
		{
			func_610(&(Local_15.f_307[iVar0]), 1, 0);
			return false;
		}
		else if (!&Local_15.f_534[iVar1])
		{
			_set_entity_coords_and_heading(&(Local_15.f_307[iVar0]), func_596(iVar1), func_597(iVar1), true, false, true);
			freeze_entity_position(&(Local_15.f_307[iVar0]), false);
			set_entity_collision(&(Local_15.f_307[iVar0]), true, false);
			set_entity_visible(&(Local_15.f_307[iVar0]), true);
			if (iVar1 == 13)
			{
				set_ped_config_flag(&(Local_15.f_307[iVar0]), 186, true);
				_0xf5622fa6acfca7db(&(Local_15.f_307[iVar0]), 36);
			}
			Local_15.f_534[iVar1] = 1;
		}
		iVar0++;
	}
	func_528(&(Local_15.f_631), 256);
	return true;
}

float func_563(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_564(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_922(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_223(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_923() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_924(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_924(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_565(int iParam0, bool bParam1)
{
	if (Local_15.f_2 != iParam0)
	{
		Local_15.f_2 = iParam0;
	}
	func_548(bParam1);
}

int func_566(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	bVar3 = is_ped_on_mount(iParam0);
	if (bVar3)
	{
		iVar2 = get_mount(iParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = is_ped_in_any_vehicle(iParam0, true);
		if (bVar4)
		{
			iVar1 = get_vehicle_ped_is_in(iParam0, true);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_199(*iParam1, 128))
	{
		if (!func_913(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_199(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_925(iVar2))
			{
				return 0;
			}
			if (!func_913(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_926(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_199(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_593(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_528(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_199(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return 0;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_199(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_925(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_593(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_593(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_593(iParam2, 8192))
				{
					_display_hud_component(724769646);
				}
			}
		}
	}
	disable_control_action(0, -1879280170, false);
	if (bVar3)
	{
		if (is_entity_in_air(iVar2, 0))
		{
			return 0;
		}
		if (func_199(*iParam1, 2336))
		{
			if (!func_925(iVar2))
			{
			}
			if (func_927(iVar2, *iParam1))
			{
				func_530(iParam1, 32);
				func_530(iParam1, 256);
				func_530(iParam1, 2048);
				func_528(iParam1, 512);
				func_528(iParam1, 1024);
				func_528(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_199(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_925(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return 0;
			}
			else
			{
				func_530(iParam1, 64);
			}
		}
		if (func_593(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_593(iParam2, 1024))) || func_593(iParam2, 8)) && !func_199(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_528(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_593(iParam2, 4096)) && !func_199(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_528(iParam1, 2048);
			func_528(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_593(iParam2, 32)) && !func_199(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_528(iParam1, 256);
			func_528(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_528(iParam1, 64);
		}
		else if (!func_593(iParam2, 1))
		{
			if (!func_593(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_926(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_199(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_528(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_528(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_593(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_528(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_593(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_528(iParam1, 8);
	}
	return 0;
}

bool func_567()
{
	return func_300(_0xc17f69e1418cd11f(3));
}

void func_568(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			func_9(uParam0->f_2);
			break;
		case 2:
			if (func_232(7))
			{
				func_70(7);
			}
			func_286();
			break;
		case 3:
			func_928(&(Local_15.f_17));
			break;
		case 4:
			func_928(&(Local_15.f_17));
			break;
		case 5:
			func_928(&(Local_15.f_17));
			break;
		case 6:
			func_928(&(Local_15.f_17));
			break;
	}
}

void func_569()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		iVar1 = iVar0;
		if (!does_entity_exist(&(Local_15.f_307[iVar1])) || !is_entity_dead(&(Local_15.f_307[iVar1])))
		{
		}
		else if (!does_blip_exist(&(Local_15.f_19[iVar1])))
		{
			Local_15.f_19[iVar1] = func_524(&(Local_15.f_307[iVar1]), -1594303955, 0, 1);
			_blip_set_modifier(&(Local_15.f_19[iVar1]), -401963276);
		}
		iVar0++;
	}
}

void func_570()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			if (get_entity_speed(&(Local_15.f_307[iVar0])) > 0.1f)
			{
				if (!func_204(Local_15.f_569[iVar1]))
				{
					func_218(Local_15.f_569[iVar1]);
				}
				if (func_219(Local_15.f_569[iVar1]) > 3f)
				{
					_trigger_sonar_blip_2(729220490, &(Local_15.f_307[iVar0]));
					func_218(Local_15.f_569[iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_571()
{
	iVar1 = 3;
	while (iVar1 <= 9)
	{
		iVar0 = iVar1;
		if (does_entity_exist(&(Local_15.f_307[iVar1])))
		{
			func_929(iVar0, iVar2);
			iVar2++;
		}
		iVar1++;
	}
}

bool func_572()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			if (func_930(&(Local_15.f_307[iVar0]), 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_573()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			if (is_entity_dead(&(Local_15.f_307[iVar0])))
			{
				Local_15.f_376 = &Local_15.f_307[iVar0];
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_574(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (_0x9ff5f9b24e870748(&(Local_15.f_307[iParam0])))
		{
			clear_ped_tasks(&(Local_15.f_307[iParam0]), iParam2, 0);
		}
	}
	clear_sequence_task(Local_15.f_341[iParam0]);
	open_sequence_task(Local_15.f_341[iParam0]);
}

Vector3 func_575(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { func_931(iParam0, iParam1, fParam2) };
	return get_entity_coords(iParam0, true, false) + vVar0;
}

void func_576(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	func_932(&(Local_15.f_307[iParam0]), Local_15.f_341[iParam0], fParam2, fParam3, bParam4, 1);
	if (bParam1)
	{
		Local_15.f_273[iParam0] = 1;
	}
}

bool func_577()
{
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			if (func_933(&(Local_15.f_307[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_578()
{
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		iVar1 = iVar0;
		func_928(Local_15.f_19[iVar1]);
		iVar0++;
	}
}

bool func_579()
{
	return (Global_36560 == 2 || Global_36560 == 3);
}

int func_580()
{
	if (func_199(Local_15.f_631, 512))
	{
		return 1;
	}
	iVar0 = 20;
	while (iVar0 <= 31)
	{
		if (!does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			iVar1 = iVar0;
			Local_15.f_307[iVar0] = func_598(func_595(4), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(Local_15.f_307[iVar0]), true);
			return 0;
		}
		iVar0++;
	}
	func_528(&(Local_15.f_631), 512);
	return 1;
}

bool func_581(int iParam0)
{
	return func_934(iParam0, 7);
}

bool func_582(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

bool func_583(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_584()
{
	iVar1 = 20;
	while (iVar1 <= 31)
	{
		iVar0 = iVar1;
		if (does_entity_exist(&(Local_15.f_307[iVar1])))
		{
			if (!&Local_15.f_273[iVar0])
			{
				task_fly_away(&(Local_15.f_307[iVar1]), Global_35);
			}
		}
		iVar1++;
	}
}

bool func_585(var uParam0)
{
	switch (Local_15.f_14)
	{
		case 0:
			if (!&Local_15.f_273[0])
			{
				task_follow_nav_mesh_to_coord(&(Local_15.f_307[0]), func_550(3), 1.5f, -1, 0.25f, 0, 40000f);
				Local_15.f_273[0] = 1;
			}
			if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 3f)
			{
				task_turn_ped_to_face_entity(&(Local_15.f_307[0]), &(Local_15.f_307[10]), -1, -1082130432, -1082130432, -1082130432);
				func_935(2, 1);
			}
			else if (func_563(&(Local_15.f_307[0]), Global_35, 1, 1) > 20f)
			{
				func_935(1, 1);
			}
			break;
		case 1:
			if (!&Local_15.f_273[0])
			{
				clear_ped_tasks(&(Local_15.f_307[0]), 1, 0);
				task_turn_ped_to_face_entity(&(Local_15.f_307[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (func_223(&(Local_15.f_307[0]), func_550(3), 1) < 3f)
			{
				func_935(2, 1);
			}
			else if (func_563(&(Local_15.f_307[0]), Global_35, 1, 1) < 15f)
			{
				func_935(0, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_586(var uParam0)
{
	if (func_230())
	{
		if (func_199(Local_15.f_631, 524288))
		{
			_0x18ff3110cf47115d(Local_15.f_375, 4, 1);
			func_523(-1);
			_0xdd1232b332cbb9e7(3, 1, 0);
			set_ped_config_flag(&(Local_15.f_307[2]), 136, false);
			func_565(5, 1);
			func_530(&(Local_15.f_631), 524288);
		}
	}
	else if (!func_199(Local_15.f_631, 524288))
	{
		if (does_entity_exist(Local_15.f_375) && _0x61914209c36efddb(Local_15.f_375) == 8)
		{
			return;
		}
		if (does_entity_exist(Local_15.f_375) && _0x61914209c36efddb(Local_15.f_375) == 7)
		{
			return;
		}
		_0x18ff3110cf47115d(Local_15.f_375, 4, 0);
		set_ped_config_flag(&(Local_15.f_307[2]), 136, true);
		func_523(2);
		func_568(uParam0, 1);
		func_549(uParam0, 2);
		func_528(&(Local_15.f_631), 524288);
	}
}

void func_587(int iParam0)
{
	Local_15.f_568 = iParam0;
}

void func_588(var uParam0)
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

bool func_589()
{
	iVar0 = 20;
	while (iVar0 <= 31)
	{
		if (does_entity_exist(&(Local_15.f_307[iVar0])))
		{
			delete_ped(Local_15.f_307[iVar0]);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_590(int iParam0, bool bParam1)
{
	if (Local_15.f_3 != iParam0)
	{
		Local_15.f_3 = iParam0;
	}
	func_548(bParam1);
}

void func_591(int iParam0, bool bParam1)
{
	if (Local_15.f_4 != iParam0)
	{
		Local_15.f_4 = iParam0;
	}
	func_548(bParam1);
}

var func_592()
{
	uVar0 = &Local_15.f_622[0];
	fVar1 = -1f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		fVar2 = func_223(Global_35, _get_scenario_point_coords(&(Local_15.f_622[iVar3]), true), 1);
		if (fVar2 < fVar1 || fVar1 == -1f)
		{
			uVar0 = &Local_15.f_622[iVar3];
			fVar1 = fVar2;
		}
		iVar3++;
	}
	return uVar0;
}

bool func_593(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_594(int iParam0, bool bParam1)
{
	if (Local_15.f_5 != iParam0)
	{
		Local_15.f_5 = iParam0;
	}
	func_548(bParam1);
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1556473961;
		case 1:
			return -1287585527;
		case 2:
			return 1861665605;
		case 3:
			return 2130094044;
		case 4:
			return 98537260;
		case 5:
			return -1258513246;
		default:
			break;
	}
	return 0;
}

Vector3 func_596(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_545(0, 2);
				case 1:
					return func_545(0, 3);
				case 2:
					return func_545(0, 1);
				case 3:
					return func_545(14, 0);
				case 4:
					return func_545(14, 1);
				case 5:
					return func_545(14, 2);
				case 6:
					return func_545(14, 3);
				case 7:
					return func_545(14, 4);
				case 8:
					return func_545(14, 5);
				case 9:
					return func_545(14, 6);
				case 10:
					return func_545(16, 0);
				case 11:
					return func_545(16, 1);
				case 12:
					return func_545(16, 2);
				case 13:
					return func_545(18, 0);
				case 14:
					return func_545(20, 0);
				case 15:
					return func_545(20, 1);
				case 20:
					return func_545(21, 0);
				case 21:
					return func_545(21, 1);
				case 22:
					return func_545(21, 2);
				case 23:
					return func_545(21, 3);
				case 24:
					return func_545(21, 4);
				case 25:
					return func_545(21, 5);
				case 26:
					return func_545(21, 6);
				case 27:
					return func_545(21, 7);
				case 28:
					return func_545(21, 8);
				case 29:
					return func_545(21, 9);
				case 30:
					return func_545(21, 10);
				case 31:
					return func_545(21, 11);
				case 16:
					return func_545(13, 0);
				case 17:
					return func_545(13, 1);
				case 18:
					return func_545(13, 4);
				case 19:
					return func_545(13, 5);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_545(1, 2);
				case 1:
					return func_545(1, 3);
				case 2:
					return func_545(1, 1);
				case 3:
					return func_545(15, 0);
				case 4:
					return func_545(15, 1);
				case 5:
					return func_545(15, 2);
				case 6:
					return func_545(15, 3);
				case 7:
					return func_545(15, 4);
				case 8:
					return func_545(15, 5);
				case 9:
					return func_545(15, 6);
				case 10:
					return func_545(17, 0);
				case 11:
					return func_545(17, 1);
				case 12:
					return func_545(17, 2);
				case 13:
					return func_545(19, 0);
				case 14:
					return func_545(20, 0);
				case 15:
					return func_545(20, 1);
				case 20:
					return func_545(22, 0);
				case 21:
					return func_545(22, 1);
				case 22:
					return func_545(22, 2);
				case 23:
					return func_545(22, 3);
				case 24:
					return func_545(22, 4);
				case 25:
					return func_545(22, 5);
				case 26:
					return func_545(22, 6);
				case 27:
					return func_545(22, 7);
				case 28:
					return func_545(22, 8);
				case 29:
					return func_545(22, 9);
				case 30:
					return func_545(22, 10);
				case 31:
					return func_545(22, 11);
				case 16:
					return func_545(13, 0);
				case 17:
					return func_545(13, 1);
				case 18:
					return func_545(13, 4);
				case 19:
					return func_545(13, 5);
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_597(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_546(0, 2);
				case 1:
					return func_546(0, 3);
				case 2:
					return func_546(0, 1);
				case 3:
					return func_546(14, 0);
				case 4:
					return func_546(14, 1);
				case 5:
					return func_546(14, 2);
				case 6:
					return func_546(14, 3);
				case 7:
					return func_546(14, 4);
				case 8:
					return func_546(14, 5);
				case 9:
					return func_546(14, 6);
				case 10:
					return func_546(16, 0);
				case 11:
					return func_546(16, 1);
				case 12:
					return func_546(16, 2);
				case 13:
					return func_546(18, 0);
				case 14:
					return func_546(20, 0);
				case 15:
					return func_546(20, 1);
				case 20:
					return func_546(21, 0);
				case 21:
					return func_546(21, 1);
				case 22:
					return func_546(21, 2);
				case 23:
					return func_546(21, 3);
				case 24:
					return func_546(21, 4);
				case 25:
					return func_546(21, 5);
				case 26:
					return func_546(21, 6);
				case 27:
					return func_546(21, 7);
				case 28:
					return func_546(21, 8);
				case 29:
					return func_546(21, 9);
				case 30:
					return func_546(21, 10);
				case 31:
					return func_546(21, 11);
				case 16:
					return func_546(13, 0);
				case 17:
					return func_546(13, 1);
				case 18:
					return func_546(13, 4);
				case 19:
					return func_546(13, 5);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_546(1, 2);
				case 1:
					return func_546(1, 3);
				case 2:
					return func_546(1, 1);
				case 3:
					return func_546(15, 0);
				case 4:
					return func_546(15, 1);
				case 5:
					return func_546(15, 2);
				case 6:
					return func_546(15, 3);
				case 7:
					return func_546(15, 4);
				case 8:
					return func_546(15, 5);
				case 9:
					return func_546(15, 6);
				case 10:
					return func_546(17, 0);
				case 11:
					return func_546(17, 1);
				case 12:
					return func_546(17, 2);
				case 13:
					return func_546(19, 0);
				case 14:
					return func_546(20, 0);
				case 15:
					return func_546(20, 1);
				case 20:
					return func_546(22, 0);
				case 21:
					return func_546(22, 1);
				case 22:
					return func_546(22, 2);
				case 23:
					return func_546(22, 3);
				case 24:
					return func_546(22, 4);
				case 25:
					return func_546(22, 5);
				case 26:
					return func_546(22, 6);
				case 27:
					return func_546(22, 7);
				case 28:
					return func_546(22, 8);
				case 29:
					return func_546(22, 9);
				case 30:
					return func_546(22, 10);
				case 31:
					return func_546(22, 11);
				case 16:
					return func_546(13, 0);
				case 17:
					return func_546(13, 1);
				case 18:
					return func_546(13, 4);
				case 19:
					return func_546(13, 5);
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_598(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_936(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_599(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_337(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_600(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (_does_anim_scene_exist(*uParam0) && _is_anim_scene_loaded(*uParam0, true, false))
	{
		Local_15.f_417 = 0;
		return true;
	}
	if (!Local_15.f_417 && !_does_anim_scene_exist(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = _create_anim_scene(sParam1, 0, func_609(iParam2), false, true);
		}
		load_anim_scene(*uParam0);
		Local_15.f_417 = 1;
	}
	return false;
}

void func_601(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (iParam0 == Local_15.f_418)
	{
		set_anim_scene_entity(iParam0, "CharlesSmith", &(Local_15.f_307[0]), 0);
		set_anim_scene_entity(iParam0, "GenStoryMale1", &(Local_15.f_307[16]), 0);
		set_anim_scene_entity(iParam0, "GenStoryMale", &(Local_15.f_307[17]), 0);
		set_anim_scene_entity(iParam0, "ARTHUR", Global_35, 0);
		set_anim_scene_entity(iParam0, "REVOLVER", Local_15.f_378, 0);
		func_937(iParam0, func_66(iParam0));
	}
	else if (iParam0 == Local_15.f_419)
	{
		set_anim_scene_entity(iParam0, "GenStoryMale", &(Local_15.f_307[17]), 0);
		set_anim_scene_entity(iParam0, "ARTHUR", Global_35, 0);
	}
}

void func_602(int iParam0, bool bParam1)
{
	if (Local_15.f_6 != iParam0)
	{
		Local_15.f_6 = iParam0;
	}
	func_548(bParam1);
}

bool func_603(int iParam0, int iParam1, char[4] cParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	sVar0 = func_609(iParam1);
	if (!_0x23e33cb9f4a3f547(iParam0, sVar0) || !_0x0df57f86fe71dbe5(iParam0, sVar0))
	{
		_0xdf7b5144e25cd3fe(iParam0, sVar0);
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sVar0))
	{
		return false;
	}
	return true;
}

bool func_604(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { vParam0 };
	vVar3 = { func_938(0) };
	vVar6 = { func_939(vVar0 - get_gameplay_cam_coord()) };
	fVar9 = absf(get_angle_between_2d_vectors(vVar6.x, vVar6.y, vVar3.x, vVar3.y));
	fVar10 = absf(get_angle_between_2d_vectors(vVar6.y, vVar6.z, vVar3.y, vVar3.z));
	if (fVar9 < fParam3)
	{
		if (fVar10 < fParam4)
		{
			return true;
		}
	}
	return false;
}

void func_605(int iParam0, bool bParam1)
{
	if (Local_15.f_7 != iParam0)
	{
		Local_15.f_7 = iParam0;
	}
	func_548(bParam1);
}

void func_606(float fParam0)
{
	Local_15.f_627 = fParam0;
}

bool func_607(var uParam0)
{
	switch (Local_15.f_13)
	{
		case 0:
			if (!&Local_15.f_273[0] && is_ped_still(&(Local_15.f_307[0])))
			{
				func_574(0, 1, 1);
				task_dismount_animal(0, 262144, 0, 0, 0, 0);
				task_stand_still(0, -1);
				func_576(0, 1, 0, 0, 1);
				if (!Local_15.f_641)
				{
					trigger_music_event("HUNT02_ARRIVE");
					Local_15.f_641 = 1;
				}
			}
			if (func_563(Global_35, &(Local_15.f_307[0]), 1, 1) < 25f && !func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
			{
				func_940(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_608(bool bParam0)
{
	if (bParam0)
	{
		func_941(4);
	}
	func_941(2);
	set_bit(&(Global_1956580->f_1), 0);
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Loop";
		case 1:
			return "pl_Action";
		case 2:
			return "pl_breakout";
		default:
			break;
	}
	return "";
}

void func_610(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

void func_611(int iParam0, bool bParam1)
{
	if (Local_15.f_8 != iParam0)
	{
		Local_15.f_8 = iParam0;
	}
	func_548(bParam1);
}

bool func_612()
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (Local_15.f_247 < 5)
	{
		_0xb8de69d9473b7593(Global_35, 3);
		_0xb8de69d9473b7593(Global_35, 4);
		set_ped_flee_attributes(&(Local_15.f_307[17]), 512, true);
		_0x41d1331afad5a091(&(Local_15.f_307[17]), 1, 0);
		_0x41d1331afad5a091(&(Local_15.f_307[17]), 2, 0);
	}
	disable_control_action(0, 25970639, true);
	disable_control_action(0, -792592641, true);
	disable_control_action(0, -1292666904, true);
	disable_control_action(0, -1377110900, true);
	_0x2804658eb7d8a50b(5, -25246720);
	switch (Local_15.f_247)
	{
		case 0:
			func_942(&(Local_15.f_307[17]));
			_0xb8de69d9473b7593(Global_35, 3);
			set_ped_config_flag(&(Local_15.f_307[17]), 159, true);
			set_ped_config_flag(&(Local_15.f_307[17]), 225, true);
			_0x585ce159db46fadb(player_id(), 0f);
			set_ped_config_flag(&(Local_15.f_307[17]), 297, false);
			set_ped_config_flag(&(Local_15.f_307[17]), 130, true);
			set_ped_config_flag(&(Local_15.f_307[17]), 315, true);
			_0xb8de69d9473b7593(Global_35, 1);
			func_218(&(Local_15.f_252));
			func_943(1);
			break;
		case 1:
			set_ped_config_flag(&(Local_15.f_307[17]), 351, false);
			func_944();
			if (func_945(Global_35))
			{
				func_233(29, 0);
				func_943(2);
			}
			break;
		case 2:
			_0x789dabd18e9024db(Global_35, 29, 0);
			_0x789dabd18e9024db(&(Local_15.f_307[17]), 29, 0);
			if (!func_204(&(Local_15.f_258)))
			{
				func_218(&(Local_15.f_258));
			}
			else if (func_946(&(Local_15.f_258)) > 15000)
			{
				if (func_202(Local_15.f_269))
				{
					func_540(Local_15.f_269, 0, 1);
				}
				func_205(&(Local_15.f_258));
				func_943(3);
			}
			if (!func_520(1))
			{
				if (func_202(Local_15.f_269))
				{
					func_543(Local_15.f_269, 1, 0);
					func_540(Local_15.f_269, 1, 1);
					if (func_947(Local_15.f_269, 1) && !Local_15.f_249)
					{
						_0x789dabd18e9024db(Global_35, 32, 0);
						Local_15.f_249 = 1;
					}
					if (Local_15.f_249)
					{
						func_205(&(Local_15.f_258));
						Local_15.f_249 = 0;
						func_943(3);
					}
				}
				else if (!func_202(Local_15.f_269))
				{
					Local_15.f_269 = func_948("H2_UC_BEAT", 1847463266, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_543(Local_15.f_269, 1, 0);
					func_949(&(Local_15.f_269), &(Local_15.f_307[17]));
				}
			}
			break;
		case 3:
			Local_15.f_248++;
			if (func_202(Local_15.f_269))
			{
				func_540(Local_15.f_269, 0, 1);
			}
			if (Local_15.f_248 == 1)
			{
				func_233(30, 0);
			}
			else if (Local_15.f_248 == 2)
			{
				func_233(31, 0);
			}
			func_943(4);
			break;
		case 4:
			if (!func_520(1))
			{
				func_205(&(Local_15.f_84));
				func_943(2);
			}
			else
			{
				func_60(&(Local_15.f_84), 0);
				if (func_529(&(Local_15.f_84), 2.5f))
				{
					if (func_202(Local_15.f_269))
					{
						func_540(Local_15.f_269, 0, 1);
					}
				}
				else if (func_202(Local_15.f_269))
				{
					func_540(Local_15.f_269, 1, 1);
					func_543(Local_15.f_269, 1, 0);
					if (func_950(Local_15.f_269, 1))
					{
						_0x789dabd18e9024db(Global_35, 32, 0);
					}
				}
			}
			if (Local_15.f_248 >= 2)
			{
				if (!func_520(1))
				{
					func_943(5);
				}
			}
			break;
		case 5:
			_0x949b2f9ed2917f5d(Global_35, 1);
			remove_ped_defensive_area(Global_35, false);
			remove_ped_defensive_area(&(Local_15.f_307[17]), false);
			if (func_202(Local_15.f_269))
			{
				func_203(&(Local_15.f_269), 1, 1);
			}
			if (!func_202(Local_15.f_270))
			{
				Local_15.f_270 = func_948("H2_UC_KILL", -2118982895, 1, 0, 1, 4, 500, 4000, 10, 1073741824, 1704213876, 0);
				func_949(&(Local_15.f_270), &(Local_15.f_307[17]));
			}
			if (!func_202(Local_15.f_271))
			{
				Local_15.f_271 = func_948("H2_UC_RELEASE", 1008922382, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_949(&(Local_15.f_271), &(Local_15.f_307[17]));
			}
			func_203(&(Local_15.f_272), 1, 1);
			func_540(Local_15.f_270, 1, 1);
			func_543(Local_15.f_270, 1, 1);
			func_540(Local_15.f_271, 1, 1);
			func_543(Local_15.f_271, 1, 1);
			_0xeae3b5b019c8d23f(Global_35, 8);
			_0x949b2f9ed2917f5d(Global_35, 3);
			set_ped_config_flag(&(Local_15.f_307[17]), 21, true);
			task_clear_look_at(&(Local_15.f_307[17]));
			freeze_entity_position(&(Local_15.f_307[17]), false);
			_0x585ce159db46fadb(player_id(), -1f);
			func_218(&(Local_15.f_252));
			func_233(32, 0);
			func_943(6);
			break;
		case 6:
			if (!func_520(1))
			{
				func_60(&(Local_15.f_84), 0);
			}
			if (func_541(Local_15.f_270, 1) || is_entity_dead(&(Local_15.f_307[17])))
			{
				enable_control_action(0, 25970639, true);
				_0xeae3b5b019c8d23f(Global_35, 8);
				_0x789dabd18e9024db(Global_35, 128, 0);
				func_203(&(Local_15.f_271), 1, 1);
				func_203(&(Local_15.f_270), 1, 1);
				set_ped_config_flag(&(Local_15.f_307[17]), 302, true);
				func_943(7);
			}
			else if (func_950(Local_15.f_271, 1))
			{
				func_133(12, 0, 1, 0, &(Local_15.f_307[17]), 0, 1065353216, 0);
				func_203(&(Local_15.f_271), 1, 1);
				func_203(&(Local_15.f_270), 1, 1);
				set_anim_scene_origin(Local_15.f_419, get_entity_coords(&(Local_15.f_307[17]), true, false), get_entity_rotation(&(Local_15.f_307[17]), 2), 2);
				func_951(Local_15.f_419, 1, func_66(Local_15.f_419));
				func_937(Local_15.f_419, func_66(Local_15.f_419));
				func_943(9);
			}
			else if (func_529(&(Local_15.f_84), 4f))
			{
				func_233(33, 0);
			}
			break;
		case 7:
			Local_15.f_250 = 1;
			remove_ped_defensive_area(Global_35, false);
			_0xb8de69d9473b7593(Global_35, 1);
			func_205(&(Local_15.f_84));
			func_233(35, 0);
			func_943(8);
			break;
		case 8:
			if (!_0x0e99e3bf11bb6367(Global_35))
			{
				func_205(&(Local_15.f_84));
				func_943(11);
			}
			else
			{
				func_60(&(Local_15.f_84), 0);
				if (func_529(&(Local_15.f_84), 2f))
				{
					set_ped_config_flag(&(Local_15.f_307[17]), 302, false);
				}
				if (!func_204(&(Local_15.f_261)))
				{
					func_218(&(Local_15.f_261));
				}
				else if (func_946(&(Local_15.f_261)) > 10000)
				{
					func_943(10);
				}
			}
			break;
		case 9:
			if (!func_199(Local_15.f_631, 262144))
			{
				_0x2e1d6d87346bb7d2(&(Local_15.f_307[17]), Global_35, 0, 0);
				func_528(&(Local_15.f_631), 262144);
			}
			if (_get_anim_scene_progress(Local_15.f_419) > 0.95f)
			{
				func_943(10);
			}
			break;
		case 10:
			set_ped_combat_attributes(&(Local_15.f_307[17]), 17, true);
			_0xeae3b5b019c8d23f(Global_35, 1);
			enable_control_action(0, -792592641, true);
			_0x949b2f9ed2917f5d(Global_35, 23);
			_0x949b2f9ed2917f5d(Global_35, 24);
			remove_ped_defensive_area(Global_35, false);
			if (!_0x3bdfcf25b58b0415(&(Local_15.f_307[17])) && !is_ped_ragdoll(&(Local_15.f_307[17])))
			{
				set_ped_relationship_group_hash(&(Local_15.f_307[17]), -1976316465);
				set_blocking_of_non_temporary_events(&(Local_15.f_307[17]), true);
				_0x89f5e7adecccb49c(&(Local_15.f_307[17]), "panic");
				set_ped_combat_attributes(&(Local_15.f_307[17]), 17, true);
				if (!&Local_15.f_273[17])
				{
					_task_flee_from_ped(&(Local_15.f_307[17]), Global_35, 855.5391f, 425.6304f, 107.9169f, 10000f, -1, 1024, 1077936128, 0);
					Local_15.f_273[17] = 1;
				}
				func_218(&(Local_15.f_264));
				func_943(11);
			}
			break;
		case 11:
			if (IntToFloat(get_entity_health(&(Local_15.f_307[17]))) < 20f)
			{
				set_ped_config_flag(&(Local_15.f_307[17]), 21, true);
			}
			if (func_946(&(Local_15.f_264)) > 10000)
			{
				if (func_29(&(Local_15.f_307[17]), 0) && func_563(Global_35, &(Local_15.f_307[17]), 1, 1) < 30f)
				{
					if (get_script_task_status(&(Local_15.f_307[17]), 518218985, true) != 1 && get_script_task_status(&(Local_15.f_307[17]), 518218985, true) != 0)
					{
						_task_flee_from_ped(&(Local_15.f_307[17]), Global_35, 855.5391f, 425.6304f, 107.9169f, 10000f, -1, 1024, 1077936128, 0);
					}
				}
			}
			if (is_ped_using_action_mode(Global_35))
			{
				set_ped_using_action_mode(Global_35, false, -1, 0);
			}
			func_952();
			set_ped_config_flag(player_ped_id(), 258, false);
			enable_control_action(0, 578288361, true);
			set_player_control(get_player_index(), true, 0, false);
			display_radar(true);
			display_hud(true);
			func_943(12);
			break;
		case 12:
			func_643(4);
			func_606(100f);
			if (!&Local_15.f_273[0])
			{
				task_turn_ped_to_face_entity(&(Local_15.f_307[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				Local_15.f_273[0] = 1;
			}
			if (Local_15.f_250)
			{
				func_233(36, 0);
			}
			else
			{
				func_233(34, 0);
			}
			return true;
	}
	return false;
}

void func_613(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!does_entity_exist(*uParam10))
	{
		*uParam10 = func_953(iParam0, vParam1, iParam13, iParam14);
	}
	if (does_entity_exist(*uParam10))
	{
		if (!func_497(vParam4) || !func_497(vParam7))
		{
			func_954(*uParam10, vParam4, vParam7);
		}
		func_955(*uParam10, iParam11, iParam12, iParam15);
	}
}

bool func_614(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_615(var uParam0)
{
	if (func_614(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_956(uParam0) || func_614(&(uParam0->f_3), 4)) && !func_614(&(uParam0->f_3), 256))
		{
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(1, -1450761377, false);
			disable_control_action(1, -771458680, false);
			disable_control_action(1, -1722177808, false);
			disable_control_action(2, -1450761377, false);
			disable_control_action(2, -771458680, false);
			disable_control_action(2, -1722177808, false);
		}
		disable_control_action(2, 2139949496, false);
	}
	if (func_957(uParam0))
	{
		func_617();
	}
	if (!func_614(&(uParam0->f_3), 16))
	{
		if (func_204(uParam0))
		{
			if (func_958(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_616(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_959(iParam0, fParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

void func_617()
{
	_0x88544c0e3291dcae(1);
	func_960();
}

bool func_618(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_961(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_614(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_223(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_962(vParam0, uParam3))
	{
		return false;
	}
	if (!func_614(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_963(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_619(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_964(vParam1, 1);
	if (!func_614(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		_0x1f6ebd94680252ce(iVar1, -1082130432);
		_0xf48664e9c83825e3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_218(uParam0);
	func_965(&(uParam0->f_3), 1);
}

void func_620(int iParam0, bool bParam1)
{
	if (Local_15.f_9 != iParam0)
	{
		Local_15.f_9 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_621(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_622(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_74(iParam0);
	if (!func_58(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_623(int iParam0, int iParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_624(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_966(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_94((*Global_1360165)[iParam0]->f_4.f_2) || func_13((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_966(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_967((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_968(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_969(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_270(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_29(func_74(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_29(func_277(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_625(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_970(iParam0, bParam3);
	}
	else
	{
		func_971(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_972(iParam0, bParam3);
	}
	else
	{
		func_973(iParam0, bParam3);
	}
}

void func_626(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_974(Global_35) && is_player_teleport_active())
	{
	}
	if (func_975(iParam0))
	{
		if (func_976(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_199(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_626(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_626(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_199(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_199(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_199(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_199(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_199(iParam5, 129))
	{
		if (func_199(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_199(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_199(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_199(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_975(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_199(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_199(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_627(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_977(iParam0, iParam1);
	return bVar0;
}

void func_628(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_627(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_629(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_978(iParam2))
		{
			iVar0 = func_979(iParam2, -1);
			if (func_980(iParam1, iVar0))
			{
				if (func_981(iParam1, iVar0))
				{
					if (func_982(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_983(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_984(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_59(iParam0, 66, 0);
		}
	}
}

void func_630(int iParam0)
{
	func_985(iParam0);
	func_986(iParam0, 0);
}

void func_631(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

bool func_632(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_633(int iParam0, int iParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_557(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_557(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_634(int iParam0, bool bParam1)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_58(iParam0))
	{
		return;
	}
	iVar1 = get_player_group(get_player_index());
	if (is_ped_group_member(iVar0, iVar1, 0))
	{
		return;
	}
	_0xcbd9ec60495c728c(func_50());
	set_ped_config_flag(iVar0, 279, true);
	set_ped_as_group_member(iVar0, iVar1);
	if (bParam1)
	{
		func_669(iParam0, 1, Global_35);
	}
}

bool func_635()
{
	return func_290(1) < 3;
}

void func_636(int iParam0)
{
	if (func_58(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_987(&iVar0, 1);
				break;
			case 14:
				func_987(&iVar0, 8);
				func_987(&iVar1, 4);
				func_987(&iVar1, 5);
				func_987(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_987(&iVar0, 8);
				func_987(&iVar0, 5);
				func_987(&iVar1, 4);
				func_987(&iVar1, 0);
				break;
		}
		_0xdeb369f6ad168c58(func_74(iParam0), iVar0);
		_0x1740e3dee0ae4d27(func_74(iParam0), iVar1);
	}
}

void func_637(int iParam0)
{
	iVar0 = func_283(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

struct<11> func_638(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 199.4699f, 237.2025f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 25f, 25f, 50f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_HERD_SCENARIO";
			}
			else
			{
				Var0.f_1 = { 220.7429f, -43.6f, 103.0256f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 25f, 25f, 50f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_HERD_SCENARIO";
			}
			break;
		case 4:
			Var0.f_1 = { 211.1375f, 235.2025f, 108.6283f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 80f, 80f, 80f };
			Var0 = -432403087;
			Var0.f_10 = "H2_BUFFALO_HERD_OBJECTIVE";
			break;
		case 6:
			Var0.f_1 = { 834.0534f, 425.7491f, 98.3052f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 40f, 40f, 40f };
			Var0 = -432403087;
			Var0.f_10 = "H2_INVESTIGATE_HUNTERS_CAMP_OBJECTIVE";
			break;
		case 7:
			Var0.f_1 = { 481.967f, 290.271f, 111.3091f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 6f, 6f, 5f };
			Var0 = -432403087;
			Var0.f_10 = "H2_ABANDONED_CAMPSITE";
			break;
		case 8:
			Var0.f_1 = { 482.2845f, 288.3228f, 110.3084f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 2f, 2f, 2f };
			Var0 = -432403087;
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 9:
			Var0.f_1 = { 874.907f, 419.01f, 112.5354f };
			Var0.f_4 = { 0f, 0f, -15.99999f };
			Var0.f_7 = { 2f, 1.5f, 2f };
			Var0 = -432403087;
			Var0.f_10 = "H2_INTERROGATION_INTIMIDATE";
			break;
		case 10:
			Var0.f_1 = { 876.0905f, 419.555f, 111.54f };
			Var0.f_4 = { 0f, 0f, -18f };
			Var0.f_7 = { 10f, 8f, 3f };
			Var0 = -1612834106;
			Var0.f_10 = "H2_INTERROGATION_FIGHT_AREA";
			break;
		case 11:
			Var0.f_1 = { 875.6318f, 419.5912f, 111.8789f };
			Var0.f_4 = { 0f, 0f, -18f };
			Var0.f_7 = { 13.5f, 10f, 5f };
			Var0 = -1612834106;
			Var0.f_10 = "H2_INTERROGATION_CAMPSITE";
			break;
		case 12:
			Var0.f_1 = { 874.7702f, 416.9062f, 111.2359f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.5f, 1.5f, 1.5f };
			Var0 = -432403087;
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 13:
			Var0.f_1 = { 879.6409f, 415.9319f, 110.8872f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.5f, 1.5f, 1.5f };
			Var0 = -432403087;
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 14:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 152.0808f, 250.6083f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 75f, 75f, 75f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_FLEE_BOUNDS";
			}
			else
			{
				Var0.f_1 = { 222.6963f, -45.03358f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 75f, 90f, 75f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_FLEE_BOUNDS";
			}
			break;
		case 15:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 152.0808f, 250.6083f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 35f, 35f, 75f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_FLEE_INNER_BOUNDS";
			}
			else
			{
				Var0.f_1 = { 222.6963f, -45.03358f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 44f, 55f, 75f };
				Var0 = 665633627;
				Var0.f_10 = "H2_BUFFALO_FLEE_INNER_BOUNDS";
			}
			break;
		case 16:
			Var0.f_1 = { 87.72281f, -305.6749f, 105.9662f };
			Var0.f_4 = { 0f, 0f, 26.03327f };
			Var0.f_7 = { 42.17675f, 16.06581f, 18.90086f };
			Var0 = -1612834106;
			Var0.f_10 = "H2_BUFFALO_SCENARIO_BLOCKING";
			break;
		case 17:
			Var0.f_1 = { 882.888f, 414.049f, 111.559f };
			Var0.f_4 = { 0f, 0f, 61.87479f };
			Var0.f_7 = { 7.326179f, 16.99286f, 2.598f };
			Var0 = 665633627;
			Var0.f_10 = "H2_HUNTERS_CAMP";
			break;
		case 18:
			Var0.f_1 = { 875.8608f, 416.024f, 110.5497f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 4.687f, 5.732334f, 5.220385f };
			Var0 = -432403087;
			Var0.f_10 = "H2_ANTI_GRIEF";
			break;
		case 19:
			Var0.f_1 = { 731.61f, 403.968f, 108.999f };
			Var0.f_4 = { 0f, 0f, -33.529f };
			Var0.f_7 = { 43.621f, 14.508f, 23.829f };
			Var0 = -1612834106;
			Var0.f_10 = "H2_BLOCK_TRAFFIC";
			break;
		case 20:
			Var0.f_1 = { 877.3221f, 416.4137f, 110.6165f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 10f, 10f, 10f };
			Var0 = -432403087;
			Var0.f_10 = "H2_WALK_ZONE";
			break;
	}
	return Var0;
}

int func_639(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1935475[iVar0]))
		{
			(*Global_1935475)[iVar0] = iParam0;
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_640(int iParam0, int iParam1)
{
	if (func_988(iParam0))
	{
		return;
	}
	if (func_989(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

int func_641(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	iVar1 = func_990(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_642(var uParam0, var uParam1)
{
	uParam1->f_10 = func_284(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_497(uParam1->f_6))
		{
		}
	}
	bVar0 = func_342();
	if (*uParam1)
	{
		if (bVar0 && !func_147((*Global_1835011)[4]->f_1, 1))
		{
			if (func_991(5))
			{
				func_992(5);
				func_993(5);
				func_994(0);
				func_995(0);
			}
		}
	}
	if (func_996(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_147((*Global_1835011)[37]->f_1, 1)) && !func_147((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_147((*Global_1835011)[43]->f_1, 1)) && !func_147((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_997(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_666(iVar1))
	{
		bVar3 = true;
		if (func_998(iVar1))
		{
			bVar4 = true;
		}
		if (func_999(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_1000(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_991(0) && func_991(1))
			{
				func_1001(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1002())
			{
				func_1003();
			}
			func_994(0);
			func_995(0);
			func_1004(uParam1->f_6);
		}
	}
	if (!func_666(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1005(uParam1->f_10) == 0 || func_1006(uParam1->f_10) == 0) || func_1007(uParam1->f_10) == 0)
			{
				func_1008(uParam1->f_10);
			}
			func_1009(uParam1->f_10);
			func_1010(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_997(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_666(iVar1))
	{
		bVar3 = true;
		if (func_998(iVar1))
		{
			bVar4 = true;
		}
		if (func_999(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_497(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1011(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1012(uParam1->f_10) };
			Var10 = { func_1013() };
			func_1014(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_1015(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1016(uParam1->f_10);
		if (uParam1->f_2 && !func_497(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_1017(uParam1->f_10);
	if (func_1015(uParam1->f_10))
	{
		iVar16 = func_1018(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_643(int iParam0)
{
	Local_15.f_628 = iParam0;
}

bool func_644(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return func_1019(uParam0);
		case 1:
			return func_1020(uParam0);
		case 2:
			return func_1021(uParam0);
		case 3:
			return func_1022(uParam0);
		case 4:
			return func_1023(uParam0);
		case 5:
			return func_1024(uParam0);
		case 6:
			return func_1025(uParam0);
		case 8:
			return func_1026(uParam0);
		default:
			break;
	}
	return false;
}

void func_645(bool bParam0)
{
	if (!func_95(0, 0, 1) || bParam0)
	{
		iVar0 = func_693();
		iVar1 = func_696(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1027(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1027(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, fVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, fVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

bool func_646()
{
	return &Global_1935436 == 1;
}

bool func_647()
{
	return &Global_1935436 == 2;
}

void func_648(float fParam0)
{
	func_1028(10, fParam0);
}

void func_649()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_650(int iParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_20(32768))
	{
		return;
	}
	if (!func_20(32768))
	{
		func_1029(1, bParam1);
	}
	_queue_savegame_operation(iParam0);
	_copy_memory((*Global_2621440)[iParam0], &Global_40, 12066);
	_copy_memory((*Global_2645573)[iParam0], &Global_12106, 5398);
	_copy_memory((*Global_2656370)[iParam0], &Global_17504, 3206);
	_copy_memory((*Global_2662783)[iParam0], &Global_20710, 2408);
	_copy_memory((*Global_2667600)[iParam0], &Global_23118, 1769);
	_copy_memory((*Global_2671139)[iParam0], &Global_24887, 1909);
	_copy_memory((*Global_2674958)[iParam0], &Global_26796, 777);
	_copy_memory((*Global_2676513)[iParam0], &Global_27573, 4501);
	_copy_memory((*Global_2685516)[iParam0], &Global_32074, 4234);
	if (func_20(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_114();
	}
}

int func_651(int iParam0, int iParam1)
{
	return func_1030(&uVar0, iParam0, iParam1);
}

void func_652(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_459(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_1031(1);
	}
}

void func_653(int iParam0, vector3 vParam1, float fParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = fParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_196(vParam1, 1);
}

void func_654(int iParam0, var uParam1, vector3 vParam2, var uParam5)
{
	func_1032(&uVar0, 0);
	if (!func_497(vParam2))
	{
		*uParam1 = _create_volume_sphere_with_custom_name(vParam2, 0f, 0f, 0f, uParam5, uParam5, uParam5, "Activity Volume");
		switch (iParam0)
		{
			case 654481153:
				func_1032(&uVar0, 5);
				func_1032(&uVar0, 21);
				break;
			case 1784895540:
				func_1032(&uVar0, 5);
				func_1032(&uVar0, 23);
				break;
			case -1670940721:
				func_1032(&uVar0, 5);
				func_1032(&uVar0, 12);
				break;
			case -1341684320:
				func_1032(&uVar0, 24);
				func_1032(&uVar0, 4);
				break;
			case -1511391406:
				func_1032(&uVar0, 25);
				func_1032(&uVar0, 4);
				break;
			case 931703394:
				func_1032(&uVar0, 26);
				func_1032(&uVar0, 4);
				break;
			case -1567081107:
				func_1032(&uVar0, 27);
				func_1032(&uVar0, 4);
				break;
			case 380107708:
				func_1032(&uVar0, 3);
				break;
			default:
				func_1032(&uVar0, 5);
				break;
		}
	}
	else
	{
		*uParam1 = _create_volume_sphere_with_custom_name(Global_36, 0f, 0f, 0f, uParam5, uParam5, uParam5, "Activity Volume");
		_0x7c00cfc48a782dc0(*uParam1, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	_0x3caad93fa5b9579a(*uParam1, 2, uVar0);
}

bool func_655(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_656(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1033(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_657(int iParam0)
{
	if (func_58(iParam0))
	{
		if (does_entity_exist(func_74(iParam0)))
		{
			func_478(iParam0, 67108864, 1);
			func_270(iParam0, 19, 1);
		}
	}
}

float func_658(int iParam0)
{
	if (!func_266(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_659(int iParam0)
{
	iVar0 = func_74(iParam0);
	iVar1 = func_271(iParam0, 0);
	func_1034(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

float func_660(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_1035(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_661(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_1036(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_662(int iParam0)
{
	iVar0 = func_277(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_663(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_1037(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_664(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_665(int iParam0, int iParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_666(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

void func_667(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_997(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_544(iParam0, 64))
	{
		func_668(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_366(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1038(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_668(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1039(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1040(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_544(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1041(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_1042(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1043(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1044((*Global_1900383)[iParam0]->f_26);
		func_1045((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_976(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_1039(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

void func_668(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

void func_669(int iParam0, bool bParam1, int iParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_253(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_74(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_198(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_1046())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_670(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_898(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_671(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_116() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_672(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_290(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

void func_673(int iParam0, int iParam1)
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
			func_1047((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1047(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_78(&(Global_1898164->f_1[0])))
	{
		func_85(&(Global_1898164->f_1[0]), 3);
	}
}

int func_674(int iParam0)
{
	iVar0 = func_295(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1048(iVar0);
}

int func_675(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1049(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_676()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_677(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

int func_678(bool bParam0)
{
	if (func_116() == -1)
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

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_680(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_681(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_682(int iParam0)
{
	func_691(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_683(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_684(1);
	}
}

void func_684(bool bParam0)
{
	if (bParam0)
	{
		func_282(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1050(&(Global_40.f_12019.f_42), 1);
	}
}

int func_685(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -15;
	}
	return func_1051(iParam0);
}

bool func_686(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_471(iParam1) || !func_471(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_687(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_688(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_690(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_691(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1052(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_692(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_693()
{
	iVar0 = func_323();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_694(int iParam0)
{
	if (func_116() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_1027(absf(fVar1) < 1f, func_1027(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_695()
{
	if (func_116() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_697()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_698(int iParam0, bool bParam1, int iParam2)
{
	func_1053((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1054(iParam0);
}

void func_699(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1055(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_700(bool bParam0)
{
	bVar3 = false;
	if (func_1056(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1057(iVar5, &iVar2, &iVar0))
			{
				if (!func_344(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1058(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_363(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_693() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_693() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1059();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_701(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

bool func_702(int iParam0)
{
	return func_363(iParam0) == -427144552;
}

bool func_703(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (func_365(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_708(iParam0, &uVar0, 1, 0, 0);
	}
	return func_167(iParam0, 1, 0);
}

void func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_363(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_370(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_730(iVar0))
	{
		if (func_116() == -1)
		{
			func_371(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_348(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_425(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_705(int iParam0, int iParam1)
{
	if (func_364(iParam0, 58855631))
	{
		func_860(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_706(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (!func_372(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_678(bParam3), iParam0);
}

int func_707(int iParam0, bool bParam1)
{
	if (func_376(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_678(bParam1), iParam0, 0);
}

bool func_708(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1060(&iParam0);
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (!func_372(0))
	{
		bParam3 = true;
	}
	if (func_702(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_843(0) };
			Var4.f_9 = -1591664384;
			if (!func_732(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_733(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_844(iParam0, 1))
			{
				if (!func_732(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_733(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1061(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_706(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1062(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_678(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_709(int iParam0, int iParam1)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_364(iParam0, 1399091007))
	{
		func_776(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_710(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1063(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1064(&Var0, func_843(0));
	}
	if (!func_1065(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_786(iVar14);
	return uVar15;
}

int func_711()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_712(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_713(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	iVar0 = func_1066(iParam0);
	fVar1 = func_1067(iParam0);
	if ((Global_1347477->f_117 || !func_366(31)) || !func_1068(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1069(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_1070(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_475(_create_var_string(6, func_1071(iParam0), fVar1), "itemtype_textures", func_1072(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_715(int iParam0, int iParam1)
{
	if (!func_876(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_716(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_359() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1073(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1074(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_758() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1075(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_758(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1076(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_759() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1077(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_759(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_715(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_717(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_718(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_719(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1078(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_167(iVar2, 1, 0) || func_1080(func_1079(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_724(func_1078(iVar0))), func_724(func_1078(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_758() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1081(iVar0)), func_1081(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1075() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1081(iVar0)), func_1081(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1081(iVar0)), func_1081(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_769(iParam3, func_1082(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_765(iVar2) - iParam7) >= func_715(iParam3, func_1083(iVar0));
				}
				else
				{
					bVar1 = func_765(iVar2) >= func_715(iParam3, func_1083(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_765(iVar2) + iParam7) >= func_715(iParam3, func_1083(iVar0));
			}
			else
			{
				bVar1 = func_765(iVar2) >= func_715(iParam3, func_1083(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1084(iVar2)), func_1084(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1085(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1086(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1086(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_759() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1087(iVar0)), func_1087(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1077() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1087(iVar0)), func_1087(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1087(iVar0)), func_1087(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_769(iParam3, func_1082(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_765(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1088(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1088(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1089(iVar2)), func_1089(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_721(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1076() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_722(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_78(func_79(0)) && ((func_1090(0) == 1 || func_1090(0) == 8) || func_1090(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_723(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_724(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

bool func_725(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_726(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_727(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_728(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1091(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1092(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1092(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1092(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1093(1);
			break;
		case 34:
			func_1094(1);
			break;
		case 35:
			func_1095(1);
			break;
		case 36:
			break;
		case 37:
			func_1096(0);
			break;
		case 38:
			func_1097(0);
			break;
		case 39:
			func_1098(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_342()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_482("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_145(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_342()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_482("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_145(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_342()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_482("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_145(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_342()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_482("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_145(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_116() == -1)
			{
				if (!func_799(99217379) || func_1099(99217379) == 2110595215)
				{
					if (func_695())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_167(iVar0, 1, 0))
					{
						func_418(iVar0, 1, 752097756);
					}
					func_397(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_116() == -1)
			{
				if (!func_167(1013902307, 1, 0))
				{
					func_418(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_116() == -1)
			{
				if (!func_167(1013902307, 1, 0))
				{
					func_418(1013902307, 1, 752097756);
				}
				if (!func_167(142640135, 1, 0))
				{
					func_418(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_116() == -1)
			{
				if (!func_167(786809402, 1, 0))
				{
					func_418(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_116() == -1)
			{
				if (!func_167(786809402, 1, 0))
				{
					func_418(786809402, 1, 752097756);
				}
				if (!func_167(-518019409, 1, 0))
				{
					func_418(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1100();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_729(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_730(int iParam0)
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

int func_731(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
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

bool func_732(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1062(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_733(int iParam0, var uParam1, int iParam2)
{
	if (func_1101(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_734(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_344(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_678(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_735(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1102(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_847(*uParam1, &Var0, bParam6, 0))
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
	if (!func_372(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_678(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_736(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1103(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_737(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_114();
	func_154(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_738(int iParam0)
{
	if (func_1104(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_739(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_740(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_741(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_366(50))
			{
				if (!func_366(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_366(51))
			{
				if (!func_366(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_742(int iParam0, int iParam1, var uParam2)
{
	if (!func_344(iParam1, 0))
	{
		return false;
	}
	if (func_363(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_116() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_368(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_443(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_364(iParam1, 866047851))
	{
		iVar5 = func_444(iVar4, 1);
		if (func_1105(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_368(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_364(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_1106(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1107(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1107(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_368(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_364(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1108(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_743()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_744()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_745()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_167(func_1109(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_746(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_747(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_167(iVar0, 1, 0) && func_167(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_749(int iParam0, int iParam1)
{
	iVar0 = func_1110(iParam0);
	if (iVar0 != -15)
	{
		func_154(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_472(iVar0, 1);
	}
	return false;
}

void func_750(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_475(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_751(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_864())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_475(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1111(iVar0);
			func_1112(iVar0, 0, 0);
		}
		func_475(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_381(func_120(1644987397), iVar1);
	}
}

void func_752(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_753(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_754(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_755(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_756(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_765(iVar9);
	iVar2 = func_765(iVar10);
	iVar3 = func_765(iVar11);
	iVar5 = func_766(iVar9);
	iVar6 = func_766(iVar10);
	iVar7 = func_766(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_765(iVar12);
		iVar8 = func_766(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_757(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_758()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1113(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_759()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_760(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1088(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1088(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1088(iVar0))
		{
			*sParam2++;
		}
		if (func_1088(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1088(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1088(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1088(iVar0))
		{
			*sParam2++;
		}
		if (func_1088(iVar1))
		{
			*sParam2++;
		}
		if (func_1088(iVar0) && func_1088(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1088(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1088(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1088(iVar0))
		{
			*sParam2++;
		}
		if (func_1088(iVar1))
		{
			*sParam2++;
		}
		if (func_1088(iVar2))
		{
			*sParam2++;
		}
		if ((func_1088(iVar0) && func_1088(iVar1)) && func_1088(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1088(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1088(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1088(iVar0))
		{
			*sParam2++;
		}
		if (func_1088(iVar1))
		{
			*sParam2++;
		}
		if (func_1088(iVar2))
		{
			*sParam2++;
		}
		if (func_1088(iVar3))
		{
			*sParam2++;
		}
		if (((func_1088(iVar0) && func_1088(iVar1)) && func_1088(iVar2)) && func_1088(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_761(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_637(1497516462);
			func_69(2016141805);
			func_69(1010885152);
			func_69(-502324015);
			break;
		case 2016141805:
			func_69(1497516462);
			func_637(2016141805);
			func_69(1010885152);
			func_69(-502324015);
			break;
		case 1010885152:
			func_69(1497516462);
			func_69(2016141805);
			func_637(1010885152);
			func_69(-502324015);
			break;
		case -502324015:
			func_69(1497516462);
			func_69(2016141805);
			func_69(1010885152);
			func_637(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_69(-538889627);
			func_69(-538880323);
			func_69(-1056767524);
			func_637(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1114();
			func_637(iParam0);
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
			func_1115();
			func_637(iParam0);
			break;
		case 2019386373:
			func_69(-664252410);
			func_69(2109952320);
			func_637(2019386373);
			break;
		case -664252410:
			func_69(2019386373);
			func_69(2109952320);
			func_637(-664252410);
			break;
		case 2109952320:
			func_69(2019386373);
			func_69(-664252410);
			func_637(2109952320);
			break;
		case -1674179981:
			func_69(-1835851517);
			func_69(-1838352012);
			func_637(-1674179981);
			break;
		case -1835851517:
			func_69(-1674179981);
			func_69(-1838352012);
			func_637(-1835851517);
			break;
		case -1838352012:
			func_69(-1674179981);
			func_69(-1835851517);
			func_637(-1838352012);
			break;
		case -1717960576:
			func_69(210001842);
			func_637(-1717960576);
			break;
		case 210001842:
			func_69(-1717960576);
			func_637(210001842);
			break;
		case -150493654:
			func_69(-1271608261);
			func_69(1846061697);
			func_69(-1145519186);
			func_637(-150493654);
			break;
		case -1271608261:
			func_69(-150493654);
			func_69(1846061697);
			func_69(-1145519186);
			func_637(-1271608261);
			break;
		case 1846061697:
			func_69(-150493654);
			func_69(-1271608261);
			func_69(-1145519186);
			func_637(1846061697);
			break;
		case -1145519186:
			func_69(-150493654);
			func_69(-1271608261);
			func_69(1846061697);
			func_637(-1145519186);
			break;
		case 1766284049:
			func_69(280705402);
			func_69(1926308480);
			func_637(1766284049);
			break;
		case 280705402:
			func_69(1766284049);
			func_69(1926308480);
			func_637(280705402);
			break;
		case 1926308480:
			func_69(1766284049);
			func_69(280705402);
			func_637(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_69(439465264);
				func_637(1609506757);
			}
			else
			{
				func_69(1609506757);
				func_69(439465264);
			}
			break;
		case 439465264:
			if (func_201(1609506757))
			{
				if (bParam1)
				{
					func_637(439465264);
				}
				else
				{
					func_69(439465264);
				}
			}
			break;
		case 1822001510:
			func_69(-1612662716);
			func_637(1822001510);
			break;
		case -1612662716:
			func_69(1822001510);
			func_637(-1612662716);
			break;
		case 1306158345:
			func_69(1952610440);
			func_69(-223469678);
			func_69(-404698347);
			func_69(1517904467);
			func_637(1306158345);
			break;
		case 1952610440:
			func_69(1306158345);
			func_69(-223469678);
			func_69(-404698347);
			func_69(1517904467);
			func_637(1952610440);
			break;
		case -223469678:
			func_69(1306158345);
			func_69(1952610440);
			func_69(-404698347);
			func_69(1517904467);
			func_637(-223469678);
			break;
		case -404698347:
			func_69(1306158345);
			func_69(1952610440);
			func_69(-223469678);
			func_69(1517904467);
			func_637(-404698347);
			break;
		case 1517904467:
			func_69(1306158345);
			func_69(1952610440);
			func_69(-223469678);
			func_69(-404698347);
			func_637(1517904467);
			break;
		case 1376646519:
			func_69(931649776);
			func_69(-434590080);
			func_69(1743048395);
			func_69(449774763);
			func_637(1376646519);
			break;
		case 931649776:
			func_69(1376646519);
			func_69(-434590080);
			func_69(1743048395);
			func_69(449774763);
			func_637(931649776);
			break;
		case -434590080:
			func_69(1376646519);
			func_69(931649776);
			func_69(1743048395);
			func_69(449774763);
			func_637(-434590080);
			break;
		case 1743048395:
			func_69(1376646519);
			func_69(931649776);
			func_69(-434590080);
			func_69(449774763);
			func_637(1743048395);
			break;
		case 449774763:
			func_69(1376646519);
			func_69(931649776);
			func_69(-434590080);
			func_69(1743048395);
			func_637(449774763);
			break;
		case -1414537028:
			func_69(38162571);
			func_69(1350391819);
			func_69(54073871);
			func_637(-1414537028);
			break;
		case 38162571:
			func_69(-1414537028);
			func_69(1350391819);
			func_69(54073871);
			func_637(38162571);
			break;
		case 1350391819:
			func_69(-1414537028);
			func_69(38162571);
			func_69(54073871);
			func_637(1350391819);
			break;
		case 54073871:
			func_69(-1414537028);
			func_69(38162571);
			func_69(1350391819);
			func_637(54073871);
			break;
		case 198200492:
			func_637(198200492);
			func_69(-1124061431);
			func_69(52706132);
			func_69(-259123672);
			break;
		case -1124061431:
			func_69(198200492);
			func_637(-1124061431);
			func_69(52706132);
			func_69(-259123672);
			break;
		case 52706132:
			func_69(198200492);
			func_69(-1124061431);
			func_637(52706132);
			func_69(-259123672);
			break;
		case -259123672:
			func_69(198200492);
			func_69(-1124061431);
			func_69(52706132);
			func_637(-259123672);
			break;
		case -919512195:
			func_637(-919512195);
			func_69(-1925798111);
			func_69(420709909);
			func_69(1703426636);
			break;
		case -1925798111:
			func_637(-1925798111);
			func_69(-919512195);
			func_69(420709909);
			func_69(1703426636);
			break;
		case 420709909:
			func_637(420709909);
			func_69(-919512195);
			func_69(-1925798111);
			func_69(1703426636);
			break;
		case 1703426636:
			func_637(1703426636);
			func_69(-919512195);
			func_69(-1925798111);
			func_69(420709909);
			break;
		case -1223121209:
			func_637(-1223121209);
			func_69(630808005);
			break;
		case 630808005:
			func_637(630808005);
			func_69(-1223121209);
			break;
		case 1453909576:
			func_637(1453909576);
			func_69(1643531967);
			break;
		case 1643531967:
			func_637(1643531967);
			func_69(1453909576);
			break;
		case 0:
			func_637(0);
			func_69(473295046);
			func_69(-1738165526);
			break;
		case 473295046:
			func_637(473295046);
			func_69(0);
			func_69(-1738165526);
			break;
		case -1738165526:
			func_637(-1738165526);
			func_69(0);
			func_69(473295046);
			break;
		case 932909855:
			func_637(932909855);
			func_69(2051822093);
			break;
		case 2051822093:
			func_637(2051822093);
			func_69(932909855);
			break;
		case 405586984:
			func_637(405586984);
			func_69(1509509592);
			func_69(-959357075);
			func_69(-1311865656);
			break;
		case 1509509592:
			func_637(1509509592);
			func_69(405586984);
			func_69(-959357075);
			func_69(-1311865656);
			break;
		case -959357075:
			func_637(-959357075);
			func_69(1509509592);
			func_69(405586984);
			func_69(-1311865656);
			break;
		case -1311865656:
			func_637(-1311865656);
			func_69(1509509592);
			func_69(-959357075);
			func_69(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_637(-524145696);
			}
			else
			{
				func_69(-524145696);
			}
			func_69(1626481264);
			func_69(282809459);
			break;
		case 282809459:
			func_637(282809459);
			func_69(1626481264);
			func_69(-524145696);
			break;
		case 1626481264:
			func_637(1626481264);
			func_69(-524145696);
			func_69(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_637(885203519);
			}
			else
			{
				func_69(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_637(-1080627546);
			}
			else
			{
				func_69(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_201(iParam0))
				{
					func_637(iParam0);
				}
			}
			else if (func_201(iParam0))
			{
				func_69(iParam0);
			}
			break;
	}
}

void func_762(int iParam0)
{
	if (!func_1116(iParam0))
	{
		func_1118(func_1117(iParam0));
	}
}

int func_763()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1116(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_764(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_765(iVar9);
	iVar2 = func_765(iVar10);
	iVar3 = func_765(iVar11);
	iVar5 = func_766(iVar9);
	iVar6 = func_766(iVar10);
	iVar7 = func_766(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_765(iVar12);
		iVar8 = func_766(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_765(int iParam0)
{
	if (func_167(iParam0, 1, 0))
	{
		iVar0 = func_348(iParam0, 0, 0);
	}
	return iVar0;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_767(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_768(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_769(int iParam0, int iParam1)
{
	if (!func_876(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_770(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_769(iParam1, 5) || iParam0 == func_769(iParam1, 6)) || iParam0 == func_769(iParam1, 7)) || iParam0 == func_769(iParam1, 8)) || iParam0 == func_769(iParam1, 9))
	{
		func_760(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_360(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_362(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_771(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_769(iParam1, 5) || iParam0 == func_769(iParam1, 6)) || iParam0 == func_769(iParam1, 7)) || iParam0 == func_769(iParam1, 8)) || iParam0 == func_769(iParam1, 9))
	{
		if (func_760(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_362(51, 0, 0, iVar0, func_715(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_362(51, 0, 0, iVar0, func_715(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_772()
{
	if (func_13((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_773(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_774(int iParam0)
{
	if (!func_1119(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_775(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_776(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

bool func_777(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1120();
	if (iParam2 == 39)
	{
		Var0 = { func_456(iParam0, 1, 0) };
		iParam2 = func_444(func_457(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_364(iParam0, 866047851) && func_1105(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_779(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1121(func_848(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1122(iParam2);
	func_1123(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_829(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_829(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_835(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1124(iParam0, iParam2, iParam1, func_116() != -1);
	if (bParam4)
	{
		func_1125(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1125(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1126(func_848(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_778(bool bParam0, bool bParam1, bool bParam2)
{
	func_1127(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_779(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_780()
{
	func_1128(&(Global_1946804->f_2776));
	func_1129(32768);
	func_1126(1108822547, 8, 6);
}

int func_781(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_444(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_782(int iParam0)
{
	if (func_1130(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1131(Var0);
}

void func_783(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1131(Var0);
}

bool func_784(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_678(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_785(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_786(int iParam0)
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

float func_787()
{
	if (func_1132())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1133(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1133(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1134();
	fVar2 = func_1135();
	fVar3 = func_1136();
	fVar4 = func_1137();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1138()));
	fVar7 = (func_1133(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1139(3, round((to_float(iVar8) * fVar10)), 0);
	func_1140(3, fVar9, fVar9 > 100f);
	return func_1141(fVar7, -100f, 100f);
}

float func_788()
{
	if (func_1132())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1133(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1133(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1134();
	fVar2 = func_1135();
	fVar3 = func_1136();
	fVar4 = func_1137();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1138()));
	fVar7 = (func_1133(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1139(2, round((to_float(iVar8) * fVar10)), 0);
	func_1140(2, fVar9, fVar9 > 100f);
	return func_1141(fVar7, -100f, 100f);
}

float func_789()
{
	if (func_1132())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1133(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1142())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1143())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1133(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1134();
	fVar2 = func_1135();
	fVar3 = func_1136();
	fVar4 = func_1137();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1138()));
	fVar7 = (func_1133(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1139(1, round((to_float(iVar8) * fVar10)), 0);
	func_1140(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1133(0);
	}
	return func_1141(fVar7, -100f, 100f);
}

bool func_790(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_791(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_792(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_344(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_708(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_372(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_678(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_793(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1144();
			}
			break;
	}
	return 0;
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_795(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_796(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_795(iParam0))
	{
		return;
	}
	if (func_1145(iParam0))
	{
		return;
	}
	if (!func_1146(iParam0))
	{
		func_1147(iParam0, 1, 0);
	}
	iVar0 = func_1148(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1149(iParam0, 512))
		{
			func_455(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1150() && !bParam1) && !func_95(0, 0, 1))
	{
		func_484(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1151(iParam0, 6);
	if (bParam2)
	{
		if (!func_95(0, 0, 1))
		{
			func_187(1, 4);
		}
	}
}

bool func_797(int iParam0, bool bParam1)
{
	return func_793(iParam0, 0) < func_1152(iParam0, bParam1);
}

bool func_798(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_368(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_799(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_444(iParam0, 1)] != &Global_1946804->f_57[func_444(iParam0, 1)];
}

void func_800(int iParam0, int iParam1)
{
	if (func_364(iParam1, 130796156))
	{
		func_1153(iParam1, 0);
	}
	else if (func_364(iParam1, 930141731))
	{
		func_1153(iParam1, 1);
		func_1154(iParam0);
	}
}

void func_801(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_802(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1155(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1156(uParam2, iParam0, Var1);
	return 1;
}

int func_803(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_804(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_805(int iParam0)
{
	if (!func_1157(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_806()
{
	return !&Global_1911774;
}

void func_807(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_808(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_809(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @227; //curOff = 56
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
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
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

char* func_810(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_811(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_116() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1158(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_812(int iParam0, int iParam1)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (func_1158(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_813(bool bParam0)
{
	if (bParam0)
	{
		func_139(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_814();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1159(2032023096);
		func_142(-615217896);
		func_440(655868243, 1, 1, -142743235, 1);
		func_1161(146323340, func_1160());
		Var0 = { func_1013() };
		if (func_1162(&Var0) == -1387633835)
		{
			func_1163(&Var0);
			func_1164(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1165(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1006(iVar6) == 2010625508)
			{
				func_1166(iVar6, iVar7);
				func_1167(iVar6, iVar8);
				func_1168(iVar6, iVar9);
				func_1169(iVar6, 0);
				if (func_1170(iVar6))
				{
					func_1171(iVar6);
				}
				iVar10 = func_1172(iVar8);
				func_1173(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_814()
{
	if (!func_1174(-1898635967, func_1160(), 1))
	{
		return 0;
	}
	if (func_158())
	{
		if (!func_1174(146323340, func_1160(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_815()
{
	func_152(34411519);
	func_152(834124286);
	func_152(-570967010);
}

void func_816(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_139(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_440(-1080874779, 3, 1, -142743235, 1);
		func_440(-223790555, 3, 1, -142743235, 1);
		func_440(1566032147, 3, 1, -142743235, 1);
		func_440(891311852, 5, 1, -142743235, 1);
		func_440(-1353737667, 5, 1, -142743235, 1);
		func_440(-330313895, 5, 1, -142743235, 1);
		func_440(-2051332199, 5, 1, -142743235, 1);
		func_440(1237770824, 5, 1, -142743235, 1);
		func_440(-1795542128, 3, 1, -142743235, 1);
		func_440(-1757588258, 3, 1, -142743235, 1);
		func_440(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1165(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1006(iVar0) == 153881023)
			{
				func_1166(iVar0, iVar1);
				func_1167(iVar0, iVar2);
				func_1168(iVar0, iVar3);
				func_1169(iVar0, 0);
				if (func_1170(iVar0))
				{
					func_1171(iVar0);
				}
				iVar4 = func_1172(iVar2);
				func_1173(iVar0, iVar4);
			}
			iVar0++;
		}
		func_814();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_817(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1175(iParam0);
	if (bParam3)
	{
		func_483(iParam0, sParam1, iParam2);
	}
}

bool func_818(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_819(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_820()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_784("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_785(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_733(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_786(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_786(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_821(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1176(Param1, iParam5, &Var5, 0))
	{
		func_735(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_792(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1177(Var19, 1);
}

bool func_822()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_823(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1063(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1064(&Var0, func_843(0));
	}
	if (!func_1065(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_785(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_735(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_786(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_824(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_456(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1178(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_734(iParam0, Var0, Var0.f_4, bParam4) };
	return func_735(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_825(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_364(iParam0, 606799272))
		{
			func_1179(iParam0, iParam1);
		}
		if (func_364(iParam0, -1112814642) && func_364(iParam0, -1697809989))
		{
			func_393(iParam0, iParam1, 1, 0);
		}
	}
}

int func_826(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1180(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_368(iParam0) != -999503751)
		{
			func_1181(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_368(iParam0) != -999503751)
	{
		func_1181(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1182(iParam0, 1);
	return 1;
}

void func_827()
{
	if (func_116() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_828(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1183(0);
	}
	if (bParam0)
	{
		func_840(8);
		func_840(512);
	}
	else
	{
		func_840(8);
		func_840(16);
	}
}

void func_829(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_830(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_446();
	}
	if (func_116() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_832(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1184(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_848(iVar0, 1);
			if (func_1185(iVar0, iParam1))
			{
				vVar4 = { func_448(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1186(iVar7, 4))
				{
					func_1126(iVar7, 4, 6);
				}
			}
			else
			{
				func_1187(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_833(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_116() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1188(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_834(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_835(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_368(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1185(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1123(iVar1, iVar3);
		}
	}
	if (func_799(-1586649372) && func_1185(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1123(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
			}
			func_1189(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1189(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1189(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1189(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1189(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1189(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_368(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1108(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_368(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_364(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1108(&(Global_1946804->f_1497.f_1[iVar1])) || func_364(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1123(iVar1, iVar3);
					}
				}
			}
			switch (func_368(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_368(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_368(&(uParam0->f_1[iVar1])) || func_364(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1123(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_836(int iParam0, int iParam1)
{
	if (func_116() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_837(int iParam0)
{
	if (func_116() != -1)
	{
		if (func_790(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_790(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_838(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_790(iParam0, 65536) && !func_790(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_790(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_790(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_839()
{
	return Global_1905944->f_5694;
}

void func_840(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_841(struct<4> Param0)
{
	switch (Param0)
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
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1190(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1191(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_840(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1190(Param0))
			{
				return;
			}
			func_1191(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_840(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_783(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_842(bool bParam0)
{
	return func_734(1328661203, func_1192(), -1591664384, bParam0);
}

struct<4> func_843(bool bParam0)
{
	iVar0 = func_678(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_734(923904168, func_842(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_734(923904168, func_842(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_734(923904168, func_842(bParam0), -740156546, 0);
}

bool func_844(int iParam0, bool bParam1)
{
	if (func_368(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_366(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_845(bool bParam0)
{
	iVar0 = func_678(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_734(271701509, func_842(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_734(271701509, func_842(bParam0), 12999093, 0);
}

bool func_846(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_368(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_847(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_678(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_848(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

int func_849(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_850(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_851(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_852(int iParam0, int iParam1)
{
	iVar0 = func_464(*iParam0);
	iVar1 = func_463(*iParam0);
	if (iParam1 < 1 || iParam1 > func_469(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_853(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_854(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_855(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_856(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_857(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_859(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_116() == -1)
	{
		if (func_702(iParam0))
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

int func_860(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_344(iParam0, 0))
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

int func_861(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1060(&iParam0);
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	if (!func_372(0))
	{
		bParam2 = true;
	}
	iVar0 = func_706(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1062(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_678(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_862(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_364(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			_0x42a2f33a1942e865(iVar33);
		}
		iVar49 = 0;
		if (func_1193(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
				{
					iVar49 = (iVar49 + Var0[iVar32]->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_426(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_429(iVar62, iVar61);
					if (func_344(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_862(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_862(iVar63, -915411861, 1, 0, 0));
								}
								_0x42a2f33a1942e865(iVar33);
							}
						}
					}
					iVar62++;
				}
				_0xcbb7b6edfa933ade(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1193(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_863(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1194(1);
}

bool func_864()
{
	if (func_158())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_865(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1195(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_109(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1195(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_109(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_866()
{
	return Global_40.f_4283.f_325;
}

bool func_867(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_116() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_868(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_869(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_870(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_871(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_872(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_873(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_342();
	bVar1 = false;
	if (bVar0 && !func_1196(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1196(37)) && !func_1196(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1196(43)) && !func_1196(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1007(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1007(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_874()
{
	return Global_40.f_1095.f_3054;
}

bool func_875(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_876(int iParam0, var uParam1)
{
	if (!func_1197(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_877()
{
	if (func_342())
	{
		if (!func_1196(3))
		{
			return func_1198(43);
		}
		if (func_1196(38) && !func_1196(43))
		{
			return func_1199(8);
		}
	}
	return 0;
}

bool func_878(int iParam0)
{
	if (!func_498(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1200(iParam0));
}

Vector3 func_879(int iParam0, int iParam1)
{
	func_876(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_880(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1201(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_876(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1202(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_881(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1203(iParam0);
	if (func_201(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_882(int iParam0)
{
	if (!func_876(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_883(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1204(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1205(5))
	{
		if (func_1206(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_996(vParam0);
	if (bParam6)
	{
		iVar1 = func_196(vParam0, 1);
		if (func_1207(iVar1) || func_1208(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1209(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1210())
	{
		if (func_1211(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1212(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_196(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1213(iParam3, iParam4))
	{
		return false;
	}
	if (func_1214(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1215(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_342())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1216(vParam0, iParam10) || func_1217(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_884(vector3 vParam0)
{
	iVar0 = func_1218(vParam0, 0f, 0f, 0, 2);
	return func_1218(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_885(int iParam0)
{
	return func_899(iParam0, 2);
}

char* func_886(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		case 1:
			return ":EVENT_INDEX";
		case 2:
			return ":EVENT_TYPE";
		case 3:
			return ":EVENT_LABEL";
		case 4:
			return ":EVENT_FLAGS";
		case 5:
			return ":EVENT_START";
		case 6:
			return ":EVENT_START_INT";
		case 7:
			return ":EVENT_START_INT2";
		case 8:
			return ":EVENT_END";
		case 9:
			return ":EVENT_END_INT";
		case 10:
			return ":EVENT_END_INT2";
		case 11:
			return ":EVENT_PED_USEAGE";
		case 12:
			return "musicData/entities/entity(%i)";
		case 13:
			return ":INDEX";
		case 14:
			return ":MODEL_NAME";
	}
	return "";
}

void func_887(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

void func_888(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_889(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_890(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(cParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_891(var uParam0, int iParam1, char* sParam2)
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

void func_892(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

char* func_893(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HUNHC_W_HORSES";
		case 1:
			return "HUNHC_H_GTBUFH";
		case 2:
			return "HUNHC_H_GTBUFHC";
		case 3:
			return "HUNHC_H_TRNHIL";
		case 4:
			return "HUNHC_H_UPHIL";
		case 5:
			return "HUNHC_H_FDBUFH";
		case 6:
			return "HUNHC_H_KLBUF";
		case 7:
			return "HUNHC_H_KLDBUF";
		case 8:
			return "HUNHC_H_KLDMORE";
		case 9:
			return "HUNHC_H_KLDSKIN";
		case 10:
			return "HUNHC_H_STWSKN";
		case 11:
			return "HUNHC_H_MOUNT";
		case 12:
			return "HUNHC_H_GTDBF1";
		case 13:
			return "HUNHC_H_DBFOF";
		case 14:
			return "HUNHC_H_FDDBF1";
		case 15:
			return "HUNHC_H_STSKN2";
		case 16:
			return "HUNHC_H_ACDB";
		case 17:
			return "HUNHC_H_GTDBF2";
		case 18:
			return "HUNHC_H_CPDBF2";
		case 19:
			return "HUNHC_H_FDDBF2";
		case 20:
			return "HUNHC_H_INVCMP";
		case 21:
			return "HUNHC_H_INSCMP";
		case 22:
			return "HUNHC_H_GTVP";
		case 23:
			return "HUNHC_H_USEBIN";
		case 24:
			return "HUNHC_H_CFDHTR";
		case 25:
			return "HUNHC_H_FDHNTRB";
		case 26:
			return "HUNHC_H_RIDE3";
		case 27:
			return "HUNHC_H_GTDBF3";
		case 28:
			return "HUNHC_H_SINTER";
		case 29:
			return "HUNHC_H_INTGRAP";
		case 30:
			return "HUNHC_H_INT1";
		case 31:
			return "HUNHC_H_INT2";
		case 32:
			return "HUNHC_H_PLEAD";
		case 33:
			return "HUNHC_H_HESI";
		case 34:
			return "HUNHC_H_RHNTR";
		case 35:
			return "HUNHC_H_KHNTR";
		case 36:
			return "HUNHC_H_RKHNTR";
		case 37:
			return "HUNHC_H_ILO1";
		case 38:
			return "HUNHC_H_ILO2";
		case 39:
			return "HUNHC_H_ILO3";
		case 40:
			return "HUNHC_H_ILO4";
		default:
			break;
	}
	return "FAIL";
}

bool func_894(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_563(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_563(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_218(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_1219(sParam1))
			{
				return true;
			}
		}
		else if (func_518(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

var func_895(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_896(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_1220(sParam1));
}

void func_897(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_898(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_899(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_900(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
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
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_902(iParam0, 1);
	func_903(iParam0, 1);
	func_904(iParam0, 128);
}

void func_901(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_902(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_899(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_903(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_904(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

Vector3 func_905(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -122.581f, -17.1254f, 95.19936f;
				case 1:
					return -113.665f, -14.36413f, 94.87081f;
				case 2:
					return -121.66f, -18.94263f, 95.13306f;
				case 3:
					return -115.2778f, -19.0228f, 95.9452f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 670.3842f, -1233.139f, 43.07296f;
				case 1:
					return 674.999f, -1224.58f, 44.7383f;
				case 2:
					return 673.5741f, -1232.07f, 43.07864f;
				case 3:
					return 676.9256f, -1224.274f, 44.8312f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -101.5966f, -16.33828f, 94.81773f;
				case 1:
					return -101.5966f, -16.33828f, 94.81773f;
				case 2:
					return -100.6834f, -14.1793f, 94.7808f;
				case 3:
					return -100.6834f, -14.1793f, 94.7808f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 683.6268f, -1218.095f, 44.16968f;
				case 1:
					return 683.6268f, -1218.095f, 44.16968f;
				case 2:
					return 687.719f, -1218.133f, 44.0056f;
				case 3:
					return 687.719f, -1218.133f, 44.0056f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168.5965f, 150.4489f, 106.5041f;
				case 1:
					return 168.5965f, 150.4489f, 106.5041f;
				case 2:
					return 167.1152f, 152.858f, 106.7173f;
				case 3:
					return 167.1152f, 152.858f, 106.7173f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 179.5197f, -157.5251f, 123.0903f;
				case 1:
					return 179.5197f, -157.5251f, 123.0903f;
				case 2:
					return 178.6639f, -153.4914f, 122.3531f;
				case 3:
					return 178.6639f, -153.4914f, 122.3531f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 242.389f, 266.1133f, 110.7915f;
				case 1:
					return 242.389f, 266.1133f, 110.7915f;
				case 2:
					return 248.2498f, 264.1946f, 110.4886f;
				case 3:
					return 248.2498f, 264.1946f, 110.4886f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 319.0359f, 41.87469f, 103.6572f;
				case 1:
					return 319.0359f, 41.87469f, 103.6572f;
				case 2:
					return 326.1948f, 41.9511f, 104.7216f;
				case 3:
					return 326.1948f, 41.9511f, 104.7216f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 477.4301f, 275.8051f, 109.2231f;
				case 1:
					return 477.4301f, 275.8051f, 109.2231f;
				case 2:
					return 472.3394f, 264.7003f, 108.8237f;
				case 3:
					return 472.3394f, 264.7003f, 108.8237f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 492.5731f, 273.5615f, 111.3733f;
				case 1:
					return 492.5731f, 273.5615f, 111.3733f;
				case 2:
					return 490.8317f, 270.2218f, 111.4397f;
				case 3:
					return 490.8317f, 270.2218f, 111.4397f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 546.9625f, 258.6458f, 122.0631f;
				case 1:
					return 546.9625f, 258.6458f, 122.0631f;
				case 2:
					return 551.101f, 256.4676f, 122.5745f;
				case 3:
					return 551.101f, 256.4676f, 122.5745f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 877.7465f, 429.9292f, 108.4409f;
				case 1:
					return 877.7465f, 429.9292f, 108.4409f;
				case 2:
					return 863.5469f, 435.0107f, 107.4219f;
				case 3:
					return 863.7894f, 433.9954f, 107.4723f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 876.3172f, 430.5025f, 108.2827f;
				case 1:
					return 876.3172f, 430.5025f, 108.2827f;
				case 2:
					return 740.5225f, 405.2042f, 107.3568f;
				case 3:
					return 740.5225f, 405.2042f, 107.3568f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 879.9218f, 417.4037f, 110.9864f;
				case 1:
					return 877.8125f, 415.7369f, 110.9854f;
				case 2:
					return 877.5112f, 418.6115f, 110.7355f;
				case 3:
					return 877.8423f, 417.3157f, 110.7355f;
				case 4:
					return 890.8992f, 413.8267f, 111.3929f;
				case 5:
					return 892.6528f, 411.8692f, 111.6884f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 200.8233f, 212.801f, 105.2354f;
				case 1:
					return 201.5914f, 219.5695f, 105.7812f;
				case 2:
					return 199.7568f, 247.3961f, 109.3396f;
				case 3:
					return 222.618f, 235.96f, 107.6534f;
				case 4:
					return 209.6187f, 230.3011f, 107.046f;
				case 5:
					return 193.6756f, 258.1225f, 110.8945f;
				case 6:
					return 197.1006f, 240.038f, 108.1054f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 206.9542f, -50.45773f, 102.3624f;
				case 1:
					return 229.0917f, -46.56033f, 102.424f;
				case 2:
					return 227.4282f, -63.88778f, 103.5263f;
				case 3:
					return 216.1743f, -44.8363f, 102.0222f;
				case 4:
					return 230.2881f, -54.75324f, 102.8313f;
				case 5:
					return 218.8404f, -50.79625f, 102.1828f;
				case 6:
					return 212.1506f, -62.30327f, 103.1725f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 234.5126f, 283.4317f, 113.0459f;
				case 1:
					return 235.6469f, 275.7166f, 111.4847f;
				case 2:
					return 232.1606f, 279.5172f, 112.7984f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 310.9577f, 32.64224f, 102.6278f;
				case 1:
					return 312.5332f, 36.6715f, 102.6382f;
				case 2:
					return 313.8952f, 31.71089f, 102.8905f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 480.8819f, 268.4863f, 110.0004f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 480.8819f, 268.4863f, 110.0004f;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 774.7648f, 442.438f, 107.6398f;
				case 1:
					return 787.1072f, 437.6128f, 107.5499f;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 233.0002f, 285.2737f, 113.3952f;
				case 1:
					return 235.8823f, 283.284f, 113.4f;
				case 2:
					return 234.961f, 284.3966f, 114f;
				case 3:
					return 230.9694f, 278.9281f, 113.6f;
				case 4:
					return 230.5357f, 279.2979f, 113.3f;
				case 5:
					return 231.6362f, 278.559f, 113.6582f;
				case 6:
					return 232.4644f, 277.9564f, 113.3f;
				case 7:
					return 231.137f, 277.8002f, 112.5005f;
				case 8:
					return 236.232f, 276.3539f, 112.5152f;
				case 9:
					return 235.6478f, 277.4405f, 112.6f;
				case 10:
					return 236.4762f, 276.5728f, 112.529f;
				case 11:
					return 236.4675f, 276.3362f, 112.4997f;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 312.2484f, 31.20295f, 102.6971f;
				case 1:
					return 311.5687f, 33.1148f, 102.6355f;
				case 2:
					return 310.5108f, 30.46827f, 102.7071f;
				case 3:
					return 312.0246f, 35.2594f, 102.6233f;
				case 4:
					return 312.4923f, 36.46946f, 103.6376f;
				case 5:
					return 312.1295f, 38.06013f, 102.5915f;
				case 6:
					return 313.9547f, 36.43743f, 102.7937f;
				case 7:
					return 313.7129f, 31.19553f, 103.8698f;
				case 8:
					return 315.1893f, 31.0117f, 103.1352f;
				case 9:
					return 313.4042f, 32.30215f, 102.8071f;
				case 10:
					return 315.2585f, 32.92007f, 104.0954f;
				case 11:
					return 313.8231f, 33.48209f, 102.8413f;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return -100.6834f, -14.1793f, 94.7808f;
				case 1:
					return 167.0929f, 152.627f, 106.6808f;
				case 2:
					return 233.5006f, 283.1071f, 113.1437f;
				case 3:
					return 231.6538f, 272.7318f, 111.6893f;
				case 4:
					return 481.24f, 266.5857f, 110.1667f;
				case 5:
					return 248.2498f, 264.1946f, 110.4886f;
				case 6:
					return 479.0672f, 264.3814f, 109.9224f;
				case 7:
					return 488.4434f, 262.0597f, 111.7182f;
				case 8:
					return 551.101f, 256.4676f, 122.5745f;
				case 9:
					return 837.4268f, 434.9742f, 105.7771f;
				case 10:
					return 837.4268f, 434.9742f, 105.7771f;
				case 11:
					return 873.2532f, 423.602f, 110.32f;
				case 12:
					return 888.8951f, 418.931f, 111.1013f;
				case 13:
					return 869.7977f, 433.5178f, 107.9178f;
				case 14:
					return 551.1479f, 256.7391f, 122.5428f;
				case 15:
					return 871.2734f, 432.1152f, 108.1834f;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 687.6514f, -1218.162f, 44.00638f;
				case 1:
					return 179.2317f, -153.1012f, 122.2384f;
				case 2:
					return 313.6121f, 7.63785f, 102.8128f;
				case 3:
					return 307.9275f, 37.76335f, 102.697f;
				case 4:
					return 481.24f, 266.5857f, 110.1667f;
				case 5:
					return 326.1948f, 41.9511f, 104.7216f;
				case 6:
					return 483.8795f, 265.322f, 110.7037f;
				case 7:
					return 488.4434f, 262.0597f, 111.7182f;
				case 8:
					return 551.101f, 256.4676f, 122.5745f;
				case 9:
					return 837.4268f, 434.9742f, 105.7771f;
				case 10:
					return 837.4268f, 434.9742f, 105.7771f;
				case 11:
					return 873.2532f, 423.602f, 110.32f;
				case 12:
					return 888.8951f, 418.931f, 111.1013f;
				case 13:
					return 869.7977f, 433.5178f, 107.9178f;
				case 14:
					return 551.1479f, 256.7391f, 122.5428f;
				case 15:
					return 871.2734f, 432.1152f, 108.1834f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_906(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 247f;
				case 1:
					return 64.28f;
				case 2:
					return 247f;
				case 3:
					return 81.8196f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -30.6f;
				case 1:
					return 190f;
				case 2:
					return -40.4f;
				case 3:
					return 190f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -53.43f;
				case 1:
					return -53.43f;
				case 2:
					return -63.1f;
				case 3:
					return -63.1f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -70.45f;
				case 1:
					return -70.45f;
				case 2:
					return -51.49f;
				case 3:
					return -51.49f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -21.02f;
				case 1:
					return -21.02f;
				case 2:
					return -23.34f;
				case 3:
					return -23.34f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -27.29f;
				case 1:
					return -27.29f;
				case 2:
					return -27.12f;
				case 3:
					return -27.12f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -119.51f;
				case 1:
					return -119.51f;
				case 2:
					return -120.07f;
				case 3:
					return -120.07f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -89.38f;
				case 1:
					return -89.38f;
				case 2:
					return -90f;
				case 3:
					return -90f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -63.55f;
				case 1:
					return -63.55f;
				case 2:
					return -44.01f;
				case 3:
					return -44.01f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -178.89f;
				case 1:
					return -178.89f;
				case 2:
					return -164.21f;
				case 3:
					return -164.21f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -57.92f;
				case 1:
					return -57.92f;
				case 2:
					return -56.76f;
				case 3:
					return -56.76f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -101.41f;
				case 1:
					return -85.74f;
				case 2:
					return -72.13f;
				case 3:
					return -91.87f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 28.24f;
				case 1:
					return 28.24f;
				case 2:
					return 90.82f;
				case 3:
					return 90.82f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 64.14f;
				case 1:
					return -0.13f;
				case 2:
					return -144.92f;
				case 3:
					return 193.487f;
				case 4:
					return 90.959f;
				case 5:
					return 75.949f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 105.0156f;
				case 1:
					return 20.16f;
				case 2:
					return 252.72f;
				case 3:
					return 59.04f;
				case 4:
					return 304.56f;
				case 5:
					return 200.16f;
				case 6:
					return 351.1063f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 105.0156f;
				case 1:
					return 20.16f;
				case 2:
					return 252.72f;
				case 3:
					return 59.04f;
				case 4:
					return 304.56f;
				case 5:
					return 200.16f;
				case 6:
					return 351.1063f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 235.44f;
				case 1:
					return 220.9129f;
				case 2:
					return 50.4f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -161.8f;
				case 1:
					return -26.43f;
				case 2:
					return -39.1f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -89.69f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -89.69f;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 90.84f;
				case 1:
					return 293.757f;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return -95.44f;
				case 1:
					return -135.74f;
				case 2:
					return -51.77f;
				case 3:
					return 29.21f;
				case 4:
					return 143.2f;
				case 5:
					return -35.44f;
				case 6:
					return 96.14f;
				case 7:
					return -32.75f;
				case 8:
					return 67.45f;
				case 9:
					return 37.79f;
				case 10:
					return -30.92f;
				case 11:
					return 78.14f;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 88.57f;
				case 1:
					return 34.53f;
				case 2:
					return -49.31f;
				case 3:
					return -28.08f;
				case 4:
					return -127.21f;
				case 5:
					return 43.61f;
				case 6:
					return 64.25f;
				case 7:
					return 160.85f;
				case 8:
					return 39.56f;
				case 9:
					return -54.4f;
				case 10:
					return 61.34f;
				case 11:
					return -153.08f;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 105.84f;
				case 1:
					return 347.04f;
				case 2:
					return 299.3952f;
				case 3:
					return 93.19f;
				case 4:
					return -6.48f;
				case 5:
					return 67.5757f;
				case 6:
					return 67.5757f;
				case 7:
					return -164.21f;
				case 8:
					return 67.5757f;
				case 9:
					return 93.19f;
				case 10:
					return 93.19f;
				case 11:
					return 67.3217f;
				case 12:
					return 67.5757f;
				case 13:
					return 208.4413f;
				case 14:
					return 67.5757f;
				case 15:
					return -99.14f;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 105.84f;
				case 1:
					return 347.04f;
				case 2:
					return 299.3952f;
				case 3:
					return -36.73f;
				case 4:
					return -6.48f;
				case 5:
					return 67.5757f;
				case 6:
					return -12.6f;
				case 7:
					return -164.21f;
				case 8:
					return 67.5757f;
				case 9:
					return 93.19f;
				case 10:
					return 93.19f;
				case 11:
					return 67.3217f;
				case 12:
					return 67.5757f;
				case 13:
					return 208.4413f;
				case 14:
					return -27.91f;
				case 15:
					return -99.14f;
			}
			break;
	}
	return 0f;
}

char[] func_907(int iParam0)
{
	if (!func_687(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

int func_908(int iParam0)
{
	if (func_81(iParam0) == 8)
	{
		return func_121(iParam0);
	}
	return -1;
}

char[] func_909(int iParam0)
{
	if (!func_136(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_910(int iParam0)
{
	func_72(iParam0, 8, 1);
}

void func_911(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1221(iParam0, 32);
	func_286();
}

void func_912(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
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

bool func_913(int iParam0, int iParam1)
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

void func_914(int iParam0, int iParam1, int iParam2)
{
	if (!func_29(iParam0, 0))
	{
		return;
	}
	iVar0 = func_1222(iParam0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	fVar2 = func_563(Global_35, iParam0, 1, 1);
	if (fVar2 > 20f)
	{
		bVar1 = false;
	}
	if (fVar2 > 30f)
	{
		waypoint_playback_override_speed(iParam0, 1.75f, 0, -1082130432, 0);
	}
	else if (bVar1)
	{
		waypoint_playback_override_speed(iParam0, 3f, 0, -1082130432, 0);
	}
	else
	{
		waypoint_playback_override_speed(iParam0, 2.5f, 0, -1082130432, 0);
	}
}

void func_915(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!func_29(iParam0, 0))
	{
		return;
	}
	iVar0 = func_1222(iParam0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	fVar2 = func_563(Global_35, iParam0, 1, 1);
	if (fVar2 > 20f)
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		func_1223(iParam0, fParam3, 0, 1045220557, 1, 1077936128, 20f, 30f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
	}
	else
	{
		func_1223(iParam0, fParam4, 0, 1045220557, 1, 1077936128, 20f, 30f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
	}
}

void func_916()
{
	_0x0c6b89876262a99d(player_id(), &(Local_15.f_307[0]));
	if (is_ped_group_member(&(Local_15.f_307[0]), func_50(), 1))
	{
		func_76(7);
	}
}

int func_917()
{
	if (Local_15 >= 3 || (Local_15 == 2 && Local_15.f_2 >= 3))
	{
		return 1;
	}
	return 0;
}

void func_918()
{
	if (Local_15.f_391 <= 3 && Local_15 == 1)
	{
		fVar0 = 9f;
	}
	else if (Local_15.f_391 <= 3)
	{
		fVar0 = 6f;
	}
	else
	{
		fVar0 = 3f;
	}
	if (!func_583(Global_35, &(Local_15.f_307[2]), 0))
	{
		if (func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0))
		{
			func_60(&(Local_15.f_78), 0);
		}
		if (func_529(&(Local_15.f_78), fVar0) && !Local_15.f_103)
		{
			func_205(&(Local_15.f_78));
			func_523(3);
			Local_15.f_103 = 1;
		}
	}
	else
	{
		func_205(&(Local_15.f_78));
		Local_15.f_103 = 0;
	}
}

void func_919(float fParam0, bool bParam1, float fParam2)
{
	if (func_199(Local_15.f_631, 1048576))
	{
		return;
	}
	if (func_583(Global_35, &(Local_15.f_307[2]), 0))
	{
		if (func_563(Global_35, &(Local_15.f_307[0]), 1, 1) >= fParam0 || (((bParam1 && Local_15.f_391 < 4) && func_583(&(Local_15.f_307[0]), &(Local_15.f_307[1]), 0)) && func_223(&(Local_15.f_307[0]), Local_15.f_398, 1) < Local_15.f_406))
		{
			func_60(&(Local_15.f_81), 0);
			if (func_529(&(Local_15.f_81), fParam2) && !Local_15.f_104)
			{
				func_205(&(Local_15.f_81));
				func_523(4);
				Local_15.f_104 = 1;
			}
		}
		else
		{
			func_205(&(Local_15.f_81));
			Local_15.f_104 = 0;
		}
	}
	else
	{
		func_205(&(Local_15.f_81));
		Local_15.f_104 = 0;
	}
}

void func_920(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_980(iParam0, iParam1))
		{
			if (func_981(iParam0, iParam1))
			{
				if (func_982(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_983(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_921(int iParam0, int iParam1)
{
	func_1224(iParam0, iParam1);
}

bool func_922(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_923()
{
	if (func_116() == -1 && func_95(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return false;
}

bool func_924(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_925(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_35))
	{
		if (!is_entity_dead(Global_35) && !is_ped_injured(Global_35))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_35)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_913(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_926(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_1225(vVar0, vVar3, vParam1);
}

bool func_927(int iParam0, int iParam1)
{
	if (!func_913(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_199(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_199(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_199(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_928(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_929(int iParam0, int iParam1)
{
	switch (&Local_15.f_591[iParam1])
	{
		case 0:
			if (!&Local_15.f_273[iParam0])
			{
				fVar0 = func_563(Global_35, &(Local_15.f_307[iParam0]), 1, 1);
				fVar1 = func_563(&(Local_15.f_307[0]), &(Local_15.f_307[iParam0]), 1, 1);
				if (fVar0 <= fVar1)
				{
					uVar2 = Global_35;
				}
				else
				{
					uVar2 = &Local_15.f_307[0];
				}
				_task_smart_flee_style_ped(&(Local_15.f_307[iParam0]), uVar2, 4, 0, -1082130432, -1, 0);
				set_blocking_of_non_temporary_events(&(Local_15.f_307[iParam0]), true);
				if (Local_15.f_411 == 71)
				{
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 221.952f, 284.9495f, 115.0796f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 225.8707f, 277.5257f, 113.3502f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 229.4665f, 268.6213f, 111.7853f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 185.5722f, 316.6935f, 117.6952f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 192.271f, 313.4504f, 117.3464f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 199.1266f, 308.683f, 116.8148f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 206.3362f, 302.603f, 116.6264f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 211.787f, 294.5841f, 116.0735f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 216.5363f, 285.7721f, 115.2834f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 219.6203f, 278.4529f, 114.0722f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 222.559f, 272.166f, 112.7907f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 224.1677f, 265.703f, 111.7983f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 227.1058f, 255.6099f, 110.1196f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 231.3904f, 244.4538f, 108.2712f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 233.539f, 232.5551f, 106.4247f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 230.9275f, 218.565f, 104.552f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 221.9434f, 208.5514f, 103.8962f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 208.5521f, 200.72f, 104.3427f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 226.0142f, 261.1942f, 111.0221f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 225.5112f, 261.2996f, 111.0603f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 229.6621f, 250.0518f, 109.1628f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 232.8613f, 238.6351f, 107.4128f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 232.9552f, 225.2942f, 105.4044f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 226.8885f, 213.0155f, 104.2036f, -1082130432);
					_0xe8f1a5b4ced3725a(&(Local_15.f_307[iParam0]), 215.4174f, 204.2863f, 103.814f, -1082130432);
				}
				Local_15.f_273[iParam0] = 1;
			}
			if (func_572())
			{
				clear_ped_tasks(&(Local_15.f_307[iParam0]), 1, 0);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 2);
			}
			else if (!is_entity_in_volume(&(Local_15.f_307[iParam0]), &(Local_15.f_53[14]), true, 0))
			{
				clear_ped_tasks(&(Local_15.f_307[iParam0]), 1, 0);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 1);
			}
			break;
		case 1:
			if (!&Local_15.f_273[iParam0])
			{
				task_follow_nav_mesh_to_coord(&(Local_15.f_307[iParam0]), func_1227(), 3f, -1, 0.25f, 1048580, 40000f);
				Local_15.f_273[iParam0] = 1;
			}
			if (func_572())
			{
				clear_ped_tasks(&(Local_15.f_307[iParam0]), 1, 0);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 2);
			}
			else if (is_entity_in_volume(&(Local_15.f_307[iParam0]), &(Local_15.f_53[15]), true, 0))
			{
				clear_ped_tasks(&(Local_15.f_307[iParam0]), 1, 0);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 0);
			}
			break;
		case 2:
			if (!&Local_15.f_273[iParam0])
			{
				_task_smart_flee_style_ped(&(Local_15.f_307[iParam0]), Global_35, 4, 0, -1082130432, -1, 0);
				Local_15.f_273[iParam0] = 1;
				func_1226(iParam1, 3);
			}
			break;
		case 3:
			break;
	}
}

bool func_930(int iParam0, bool bParam1)
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

Vector3 func_931(int iParam0, int iParam1, float fParam2)
{
	return func_1228(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false), fParam2);
}

void func_932(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_933(var uParam0)
{
	return _0x8de41e9902e85756(uParam0);
}

int func_934(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_935(int iParam0, bool bParam1)
{
	if (Local_15.f_14 != iParam0)
	{
		Local_15.f_14 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_936(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1229(iParam1))
		{
			func_920(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_1230(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1231(iParam0, 0);
			bVar0 = true;
		}
		func_1232(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_937(int iParam0, char[4] cParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	start_anim_scene(iParam0);
}

Vector3 func_938(int iParam0)
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
	return func_939((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_939(vector3 vParam0)
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

void func_940(int iParam0, bool bParam1)
{
	if (Local_15.f_13 != iParam0)
	{
		Local_15.f_13 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_941(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_942(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_943(int iParam0)
{
	if (Local_15.f_247 != iParam0)
	{
		Local_15.f_247 = iParam0;
	}
}

int func_944()
{
	_0xa3db37edf9a74635(player_id(), &(Local_15.f_307[17]), 35, 0, 0);
	_0x0751d461f06e41ce(player_id(), 35, 0, 0);
	disable_control_action(0, 578288361, false);
	_0xb8de69d9473b7593(Global_35, 1);
	if (!func_199(Local_15.f_631, 16))
	{
		_0x789dabd18e9024db(Global_35, 4, 0);
		if (!func_199(Local_15.f_631, 32))
		{
			if (_0x753b15ad0fd6f3e3(Global_35) == 0)
			{
				if (_0x870708a6e147a9ad(&(Local_15.f_307[17]), "H2_ILO_POACHER", 5f, 5f, 260, 0, 0, 0, 0, -1))
				{
					set_ped_config_flag(&(Local_15.f_307[17]), 297, true);
					set_ped_config_flag(&(Local_15.f_307[17]), 360, true);
					set_ped_config_flag(&(Local_15.f_307[17]), 317, true);
					set_ped_config_flag(&(Local_15.f_307[17]), 359, true);
					_0xfca8fb9e15fa80d3(&(Local_15.f_307[17]), -191203282);
					func_528(&(Local_15.f_631), 32);
				}
			}
		}
		if (func_1233(&(Local_15.f_307[17])))
		{
			if (!func_202(Local_15.f_272))
			{
				Local_15.f_272 = func_948("H2_UC_INTRRGT", -719620017, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_949(&(Local_15.f_272), &(Local_15.f_307[17]));
				func_1234(Local_15.f_272, 14, 1, 1);
				func_543(Local_15.f_272, 1, 0);
				Local_15.f_273[32] = 0;
			}
			else
			{
				_0x57f35552e771be9d(Global_35, 1);
				if (func_950(Local_15.f_272, 1))
				{
					func_543(Local_15.f_272, 0, 0);
					func_540(Local_15.f_272, 0, 1);
					func_203(&(Local_15.f_272), 1, 1);
					_0xeae3b5b019c8d23f(Global_35, 4);
					_0x789dabd18e9024db(Global_35, 25, 0);
					_0x789dabd18e9024db(&(Local_15.f_307[17]), 29, 0);
					set_ped_config_flag(&(Local_15.f_307[17]), 213, true);
					_0xb8de69d9473b7593(Global_35, 23);
					_0xb8de69d9473b7593(Global_35, 24);
					if (!&Local_15.f_273[32])
					{
						task_grapple(Global_35, &(Local_15.f_307[17]), 1282534388, 0, 1f, 0, 0);
						Local_15.f_273[32] = 1;
					}
					set_ped_config_flag(&(Local_15.f_307[17]), 351, false);
					func_528(&(Local_15.f_631), 16);
					return 1;
				}
				else if (func_563(Global_35, &(Local_15.f_307[17]), 1, 1) < 4f)
				{
					func_540(Local_15.f_272, 1, 1);
				}
				else
				{
					func_540(Local_15.f_272, 0, 1);
				}
			}
		}
		else
		{
			_0x7c10221ce718aa72(Global_35, 1);
			func_203(&(Local_15.f_272), 1, 1);
		}
	}
	else
	{
		_0x789dabd18e9024db(Global_35, 25, 0);
		_0x789dabd18e9024db(&(Local_15.f_307[17]), 25, 0);
		set_ped_config_flag(&(Local_15.f_307[17]), 213, true);
		_0xe98d55c5983f2509(&(Local_15.f_307[17]));
		func_530(&(Local_15.f_631), 32);
		func_203(&(Local_15.f_272), 1, 1);
		if (func_199(Local_15.f_631, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_945(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		if (_0x0e99e3bf11bb6367(iParam0) && _0x2311f15d971aa680(iParam0) == 1)
		{
			return true;
		}
	}
	return false;
}

int func_946(var uParam0)
{
	if (!func_204(uParam0))
	{
		return 0;
	}
	if (func_511(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1235() - round((uParam0->f_1 * 1000f)));
}

bool func_947(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return false;
	}
	iVar0 = func_503(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_948(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_899(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_900(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_949(var uParam0, int iParam1)
{
	iVar0 = func_503(*uParam0);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(iParam1), 0);
		return 1;
	}
	return 0;
}

bool func_950(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return false;
	}
	iVar0 = func_503(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_951(int iParam0, int iParam1, char[4] cParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	sVar0 = func_609(iParam1);
	_set_anim_scene_playback_list_bool(iParam0, sVar0, true);
}

void func_952()
{
	if (func_29(Global_35, 0))
	{
		set_ped_config_flag(Global_35, 249, false);
		set_player_can_use_cover(player_id(), true);
		set_ped_config_flag(Global_35, 258, false);
		_0xd1a70c1e8d1031fe(player_id(), 1);
	}
}

int func_953(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_954(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_float(iParam0, "loot_item_offset1x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset1y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset1z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient1x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient1y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_float(iParam0, "loot_item_offset2x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset2y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset2z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient2x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient2y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1236(iParam0);
		func_1237(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

bool func_956(var uParam0)
{
	if (!func_1238(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_957(var uParam0)
{
	if (!func_956(uParam0))
	{
		return false;
	}
	if (func_1239(uParam0->f_7, uParam0->f_8, func_614(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_614(&(uParam0->f_3), 4))
	{
		if (func_1240())
		{
			return true;
		}
	}
	return false;
}

int func_958(var uParam0)
{
	if (!func_204(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_511(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1235() - round((uParam0->f_1 * 1000f)));
}

bool func_959(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_entity_dead(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (is_entity_occluded(iParam0))
		{
			return true;
		}
	}
	if (func_1241(get_entity_coords(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

void func_960()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_961(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_962(vector3 vParam0, var uParam3)
{
	if (!func_614(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_1242(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_963(vector3 vParam0, var uParam3)
{
	fVar0 = func_964(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_964(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_938(0) };
	vVar3 = { func_939(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_965(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_966(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_147((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_1243(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_147((*Global_1347702)[63]->f_15, 1) || func_13((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_1243(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_147((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_288(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			Jump @3420; //curOff = 1190
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_1243(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_147((*Global_1347702)[134]->f_15, 1) || func_13((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3420; //curOff = 2245
			switch (iParam0)
			{
				case 2:
					if (func_147((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			Jump @3420; //curOff = 2319
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_1243(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3420; //curOff = 3092
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_318(747937920, 1) && !func_147((*Global_1347702)[1]->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			Jump @3420; //curOff = 3255
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			if (bParam3 && does_entity_exist(func_74(iParam0)))
			{
				iVar10 = 0;
				while (iVar10 < iVar7)
				{
					if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
					{
						bVar9 = true;
						iVar8 = Global_40.f_4942[iParam0]->f_3;
					}
					iVar10++;
				}
			}
			if (!bVar9)
			{
				iVar11 = 0;
				if (iVar7 > 0 && bParam2)
				{
					iVar11 = get_random_int_in_range(0, iVar7);
				}
				iVar8 = &iVar1[iVar11];
			}
			if (!func_627(iParam0, iVar8))
			{
				iVar8 = Global_40.f_4942[iParam0]->f_3;
			}
			return iVar8;
		}

bool func_967(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_968(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_73(iParam0) || func_272(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_969(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_970(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = func_74(iParam0);
	func_1244(iVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_1245(iParam0);
	}
}

void func_971(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = func_74(iParam0);
	func_1246(iVar0);
	func_270(iParam0, 60, 1);
	if (bParam1)
	{
		func_1247(iParam0);
	}
}

void func_972(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = func_74(iParam0);
	func_1248(iVar0);
	if (iParam0 == 14)
	{
		func_1249(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_1250(iParam0);
	}
}

void func_973(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	iVar0 = func_74(iParam0);
	func_1251(iVar0);
	func_270(iParam0, 61, 1);
	if (bParam1)
	{
		func_1252(iParam0);
	}
}

int func_974(var uParam0)
{
	return uParam0;
}

bool func_975(int iParam0)
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

bool func_976(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_977(int iParam0, int iParam1)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	func_1253(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_978(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_979(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_1254(296923297, iParam1);
			return func_1255(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1254(1237718549, iParam1);
			return func_1255(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_980(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_981(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_982(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_980(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_983(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_984(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_980(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_980(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_980(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_980(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_980(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_980(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_980(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_980(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_980(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_980(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_980(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_980(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_980(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_980(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_980(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_980(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_980(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_980(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_980(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_980(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_980(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_980(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_980(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_980(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_980(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_980(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_985(int iParam0)
{
	func_1256(iParam0, 1);
	func_1256(iParam0, 128);
	func_1256(iParam0, 256);
	func_1256(iParam0, 512);
	func_1256(iParam0, 1024);
	func_1256(iParam0, 2048);
	func_1256(iParam0, 4096);
	func_1256(iParam0, 65536);
	func_1256(iParam0, 16384);
	func_1256(iParam0, 262144);
	func_1256(iParam0, 524288);
	func_1256(iParam0, 1048576);
	func_1256(iParam0, 2097152);
	func_1256(iParam0, 32768);
	func_1256(iParam0, 131072);
	func_1256(iParam0, 134217728);
	func_1256(iParam0, 1073741824);
}

void func_986(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_987(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_988(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_989(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_990(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_266(iParam1))
	{
		return 0;
	}
	iVar0 = func_277(iParam1);
	if ((!does_entity_exist(iVar0) || !func_29(iVar0, 0)) || (bParam3 && !func_279(iParam1)))
	{
		if (bParam2)
		{
			if (func_661(iParam1, 1) != 0)
			{
				iVar0 = func_1257(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_29(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_1258(iParam1, iVar0);
		func_1259(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_991(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1007(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_992(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_666(iParam0))
	{
		return;
	}
	iVar0 = func_997(iParam0);
	func_1260(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1261(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1262(iParam0, 0);
	func_1263(iParam0);
}

void func_993(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_1264(&Var0);
	func_1265(iParam0, Var0);
	func_1266(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1267(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1268(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1269(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1270(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1271(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1272(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1273(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1274(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_994(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_995(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_996(vector3 vParam0)
{
	return func_1275(_get_map_zone_at_coords(vParam0, 10));
}

int func_997(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_998(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_666(iParam0))
	{
		return false;
	}
	iVar0 = func_997(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_999(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_666(iParam0))
	{
		return false;
	}
	iVar0 = func_997(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_1000(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_666(iParam0))
	{
		return;
	}
	iVar0 = func_997(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1001(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_668(iParam0);
	func_668(iParam0);
	func_1276(iParam0, iParam1);
	func_1277(iParam0, iParam1);
	func_1278(iParam0, iParam1);
	iVar1 = func_997(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1279(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_997(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1279(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_286();
}

bool func_1002()
{
	iVar0 = func_1280();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1003()
{
	iVar0 = func_1280();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1281(0);
}

void func_1004(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1005(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_1006(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_1007(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_1008(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1165(&iVar0, &iVar1, &iVar2);
	func_1166(iParam0, iVar0);
	func_1167(iParam0, iVar1);
	func_1168(iParam0, iVar2);
	func_1282(iParam0, 1);
	func_1283(iParam0, 1);
}

void func_1009(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1221(iParam0, 1);
}

void func_1010(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_1011(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_544(iParam0, 1);
}

struct<2> func_1012(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1284(iParam0, &uVar2))
	{
	}
	if (!func_1285(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1013()
{
	if (func_1286(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1286(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1286(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1286(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1286(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1286(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1014(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_1287(iParam0);
	func_1288(iParam0, uParam1);
	func_1289(iParam0);
	func_1290(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1291(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_1015(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_1016(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_1017(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1018(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_1263(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_1263(iParam0);
	}
}

int func_1018(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

int func_1019(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 0);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(0, 0), func_1294(0, 2), func_1294(0, 1), func_1294(0, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(1, 0), func_1294(1, 2), func_1294(1, 1), func_1294(1, 3));
	}
	uParam0->f_13 = 2;
	func_236(0, 1);
	func_1296();
	Local_15.f_410 = 0;
	func_1297();
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_235(uParam0, func_234(0), func_234(1), 0, 1);
	trigger_music_event("HUNT02_RESTART_1");
	return 1;
}

int func_1020(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(2, 0), func_1294(2, 2), func_1294(2, 1), func_1294(2, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(3, 0), func_1294(3, 2), func_1294(3, 1), func_1294(3, 3));
	}
	uParam0->f_13 = 2;
	func_236(1, 1);
	func_1296();
	Local_15.f_410 = 0;
	func_1297();
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_235(uParam0, func_234(1), func_234(2), 1, 2);
	trigger_music_event("HUNT02_RESTART_2");
	return 1;
}

int func_1021(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(4, 0), func_1294(4, 2), func_1294(4, 1), func_1294(4, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(5, 0), func_1294(5, 2), func_1294(5, 1), func_1294(5, 3));
	}
	func_236(2, 1);
	func_1296();
	Local_15.f_410 = 0;
	task_stand_still(&(Local_15.f_307[0]), -1);
	func_1297();
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_235(uParam0, func_234(2), func_234(3), 2, 3);
	trigger_music_event("HUNT02_RESTART_4");
	return 1;
}

int func_1022(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(6, 0), func_1294(6, 2), func_1294(6, 1), func_1294(6, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(7, 0), func_1294(7, 2), func_1294(7, 1), func_1294(7, 3));
	}
	func_236(3, 1);
	func_1296();
	Local_15.f_410 = 0;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_530(&(Local_15.f_631), 2048);
	func_235(uParam0, func_234(3), func_234(4), 3, 4);
	trigger_music_event("HUNT02_RESTART_5");
	return 1;
}

int func_1023(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(8, 0), func_1294(8, 2), func_1294(8, 1), func_1294(8, 3));
	func_236(3, 1);
	func_590(2, 1);
	func_1296();
	func_568(uParam0, 2);
	func_549(uParam0, 1);
	Local_15.f_410 = 1;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_530(&(Local_15.f_631), 2048);
	func_235(uParam0, func_234(4), func_234(5), 4, 5);
	trigger_music_event("HUNT02_RESTART_6");
	return 1;
}

int func_1024(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(9, 0), func_1294(9, 2), func_1294(9, 1), func_1294(9, 3));
	func_236(5, 1);
	func_1296();
	Local_15.f_410 = 0;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_530(&(Local_15.f_631), 2048);
	func_235(uParam0, func_234(5), func_234(6), 5, 6);
	trigger_music_event("HUNT02_RESTART_7");
	return 1;
}

int func_1025(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(10, 0), func_1294(10, 2), func_1294(10, 1), func_1294(10, 3));
	func_236(6, 1);
	func_1296();
	Local_15.f_410 = 0;
	task_stand_still(&(Local_15.f_307[0]), -1);
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_530(&(Local_15.f_631), 2048);
	func_235(uParam0, func_234(6), func_234(8), 6, 8);
	trigger_music_event("HUNT02_RESTART_7");
	return 1;
}

int func_1026(var uParam0)
{
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1295(uParam0, func_1294(12, 0), func_1294(12, 2), func_1294(12, 1), func_1294(12, 3));
	uParam0->f_13 = 2;
	func_236(10, 1);
	Local_15.f_410 = 0;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(0);
	}
	func_530(&(Local_15.f_631), 2048);
	if (!func_167(912296423, 1, 0))
	{
		func_139(912296423, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	return 1;
}

float func_1027(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1028(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_808(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1299(1, bVar1, 1, sVar2);
		func_1300(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1301(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_403();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1301(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1301(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_1029(bool bParam0, bool bParam1)
{
	if (func_116() == -1)
	{
		func_1302();
	}
	else
	{
		return;
	}
	func_1303();
	Global_40.f_9.f_14 = func_114();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1304())
		{
			func_195(Global_1310720->f_1);
		}
		else if (func_200() == func_196(Global_36, 1) && func_1305() != 2)
		{
			func_195(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_195(Global_36);
		}
		func_1306(Global_36, &vVar0, &uVar4);
		if (!func_1304())
		{
			if (func_1035(vVar0, Global_36) < func_1035(Global_40.f_9.f_7, Global_36))
			{
				func_195(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_196(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1306(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_92(Global_1935630, 8192);
	}
	func_1307();
}

int func_1030(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1308(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_784("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_785(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_459(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1308(iParam1, 512) && func_1101(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1308(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1308(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1308(iParam1, 33554432)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_786(iVar1);
	}
	if (func_459(iVar0))
	{
	}
	else if (!func_1308(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1030(uParam0, iParam1, iParam2);
	}
	else if (func_1308(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1031(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_1032(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	*uParam0 = (*uParam0 || shift_left(1, iVar0));
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_1034(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_1309(iParam1);
	}
}

float func_1035(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_1036(int iParam0)
{
	iVar0 = 0;
	if (!func_266(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_266(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_1037(int iParam0)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_661(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_1038(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1311(func_1310(255), 109029619));
	}
	else if (func_125())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_695();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1039(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_1040(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1311(func_1310(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_125())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_695())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1041(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_1042(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1043(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1005(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1039(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1039(iParam0) + 1;
	fVar6 = func_1312(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1313(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1044(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_1045(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1046()
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_290(1) > 0;
}

void func_1047(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1048(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1049(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1050(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1051(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1052(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

void func_1053(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1314(bParam1);
	}
}

void func_1054(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1055(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1056(int iParam0)
{
	if (!func_876(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_1057(int iParam0, int iParam1, int iParam2)
{
	if (!func_876(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1058(int iParam0)
{
	return iParam0;
}

int func_1059()
{
	iVar0 = func_693();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1060(int iParam0)
{
	if (!func_344(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1061(int iParam0, var uParam1, bool bParam2)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_456(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_731((386 + iVar29), 1);
		if (func_732(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_733(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1062(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_734(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_678(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1063(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

void func_1064(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1065(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_678(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1066(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1067(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1315(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1315(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1315(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_1068(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_366(18);
		case 2:
			return func_366(20);
		case 1:
			return func_366(19);
		default:
			break;
	}
	return true;
}

int func_1069(int iParam0)
{
	return func_1316(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1070(int iParam0, float fParam1, bool bParam2)
{
	if (func_116() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_366(31))
	{
		return;
	}
	iVar0 = func_1069(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1069(iParam0);
	if (func_1317(iParam0) && func_1318(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1319(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1320(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_145(func_1321(iParam0), 0);
					}
					func_1322(iParam0, iVar2, iVar3);
					func_1323(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1071(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1073()
{
	return func_1324(Global_40.f_12019);
}

int func_1074()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_714(iVar1);
		if (func_167(iVar2, 1, 0) || func_1080(func_1079(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1075()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1325(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1076()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1085(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1077()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1080(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1083(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1085(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1086(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1088(int iParam0)
{
	if (func_1326(iParam0) && func_167(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1327(iParam0) && func_1328(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1089(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_412(iParam0));
}

int func_1090(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1091(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1092(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1093(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1094(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1095(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1096(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1097(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1098(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1099(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_444(iParam0, 1)]);
}

void func_1100()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1329();
		_unlock_set_unlocked(-1526891582, true);
		func_371(-916314281);
		func_418(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_371(494733111);
		func_418(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1101(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_678(0);
	*uParam1 = { func_734(iParam0, func_843(0), iParam3, 0) };
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

bool func_1102(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1103(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1104(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1105(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_364(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1106(int iParam0, var uParam1)
{
	iVar1 = func_444(func_1330(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_368(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1107(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_444(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_779(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_1108(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1110(int iParam0)
{
	return func_1331(iParam0, -1);
}

void func_1111(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1332((Global_40.f_4283.f_325 + iParam0));
}

void func_1112(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_864())
	{
		func_475(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_475(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1113(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1114()
{
	func_69(-939420910);
	func_69(-1187950766);
	func_69(356365161);
	func_69(753127042);
	func_69(-2038424081);
	func_69(1884271742);
	func_69(459290420);
}

void func_1115()
{
	func_69(704802028);
	func_69(588987611);
	func_69(2008888900);
	func_69(1649996811);
	func_69(227918160);
	func_69(168171957);
	func_69(1193080109);
	func_69(-491981251);
	func_69(-639037538);
	func_69(-618620429);
}

bool func_1116(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1117(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1118(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1119(var uParam0)
{
	return _0xf83d3dda4d3c8169(uParam0) > 0;
}

void func_1120()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1121(int iParam0)
{
	func_1126(iParam0, 8, 6);
}

void func_1122(int iParam0)
{
	func_1333(&(Global_1946804->f_2589), iParam0);
}

void func_1123(int iParam0, int iParam1)
{
	func_1334(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1124(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1335(0);
	if (iParam2 != 0 && func_1336(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_834(iParam0, func_848(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1125(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_116() != -1;
	iVar7 = func_1335(0);
	if (func_779(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_848(iVar0, 1);
			if (func_1186(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1186(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1107(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1337(uParam0);
				if (iVar3 > 0)
				{
					if (!func_779(524288))
					{
						func_840(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_848(iVar0, 1);
							if (func_1186(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1186(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1107(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1123(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1129(524288);
				}
			}
		}
	}
}

void func_1126(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_444(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_444(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_444(iParam0, 1)])->f_10 && iParam1));
}

void func_1127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1338(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_116() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1339(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1148(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1148(Global_40.f_7729);
				Global_1946804->f_1378 = func_1148(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1340(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_828(0, 1);
	}
}

void func_1128(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1129(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1130(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1131(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1190(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1190(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1191(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_840(8);
}

bool func_1132()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1133(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1134()
{
	fVar0 = func_1341(13);
	iVar1 = func_1342(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1135()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1136()
{
	if (func_158())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1137()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1138()
{
	return Global_1955565->f_3;
}

void func_1139(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1343(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1140(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1343(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_1141(float fParam0, float fParam1, float fParam2)
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

bool func_1142()
{
	return func_1341(12) <= -99f;
}

bool func_1143()
{
	return func_1341(12) >= 99f;
}

int func_1144()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_368(iVar1) == -999503751)
		{
			if (func_1344() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1145(int iParam0)
{
	if (!func_795(iParam0))
	{
		return false;
	}
	if (func_1149(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1146(int iParam0)
{
	if (!func_795(iParam0))
	{
		return false;
	}
	if (func_1149(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1147(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_795(iParam0))
	{
		return;
	}
	if (!func_1146(iParam0))
	{
		func_1151(iParam0, 2);
		if (bParam2)
		{
			if (!func_95(0, 0, 1))
			{
				func_187(1, 4);
			}
		}
		if ((!func_1150() && !bParam1) && !func_95(0, 0, 1))
		{
			func_484(_create_var_string(10, "OUT_JOURN_ADD", func_1345(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1148(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1149(int iParam0, int iParam1)
{
	if (!func_795(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1150()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1151(int iParam0, int iParam1)
{
	if (!func_795(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1152(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1153(int iParam0, bool bParam1)
{
	iVar0 = func_1346(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_367(50);
			}
			else
			{
				func_367(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_367(51);
			}
			else
			{
				func_367(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1347(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_399();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_399();
			}
			break;
		case 3:
			func_367(24);
			if (bParam1)
			{
				if (!func_1347(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_399();
				}
			}
			break;
	}
}

void func_1154(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1348(0))
			{
				iVar0++;
			}
			if (func_1348(2))
			{
				iVar0++;
			}
			if (func_1348(4))
			{
				iVar0++;
			}
			if (!func_1349(16))
			{
				if (iVar0 == 1)
				{
					func_1350();
					func_145(456, 1);
					func_1351(16);
				}
			}
			if (!func_1349(32))
			{
				if (iVar0 >= 3)
				{
					func_1350();
					func_145(456, 1);
					func_1351(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1348(1))
			{
				iVar0++;
			}
			if (func_1348(3))
			{
				iVar0++;
			}
			if (func_1348(7))
			{
				iVar0++;
			}
			if (!func_1349(1))
			{
				if (iVar0 == 1)
				{
					func_1352();
					func_145(457, 1);
					func_1351(1);
				}
			}
			if (!func_1349(2))
			{
				if (iVar0 >= 3)
				{
					func_1352();
					func_145(457, 1);
					func_1351(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1348(5))
			{
				iVar0++;
			}
			if (func_1348(6))
			{
				iVar0++;
			}
			if (func_1348(8))
			{
				iVar0++;
			}
			if (!func_1349(4))
			{
				if (iVar0 == 1)
				{
					func_1353();
					func_145(455, 1);
					func_1351(4);
				}
			}
			if (!func_1349(8))
			{
				if (iVar0 >= 3)
				{
					func_1353();
					func_145(455, 1);
					func_1351(8);
				}
			}
			break;
	}
}

void func_1155(var uParam0)
{
	func_801(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_801(uParam0, 617531372);
	}
	else
	{
		func_801(uParam0, 291123060);
	}
}

void func_1156(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1354(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1157(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1158(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
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

void func_1159(int iParam0)
{
	func_440(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1355(iParam0, &uVar18);
	func_1356(iParam0, &uVar18, &iVar34, 1);
	if (func_446() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1357(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_442(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_440(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_368(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1357(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1357(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1357(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1357(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1357(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_442(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_444(func_443(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1358(&(Global_1946804->f_1616));
	func_447(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_448(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_448(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_448(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_448(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_448(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_448(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_448(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_448(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_448(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_449(&(iVar0[iVar36]), iVar35))
			{
				func_442(func_1359(iVar35), 1, 1);
				func_1360(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1184(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_450(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
							*Global_1946804->f_1497.f_1[iVar37] = { *Global_1946804->f_1616.f_1[iVar37] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36]])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_794(iParam0))
	{
		if (!func_1361(8))
		{
			if (func_446() == -2125499975)
			{
				if (bVar17)
				{
					func_447(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1362(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1363(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_794(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_447(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1362(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1363(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_794(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_794(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1364(Global_40.f_7729, 4096);
					func_1151(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1365(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26796.f_627.f_1.f_1.f_1[&iVar0[iVar36]])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_447(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_447(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*Global_1946804->f_1616.f_1[8] = { *Global_26796.f_627.f_1.f_1.f_1[8] };
	*Global_1946804->f_1616.f_1[9] = { *Global_26796.f_627.f_1.f_1.f_1[9] };
	*Global_1946804->f_1616.f_1[0] = { *Global_26796.f_627.f_1.f_1.f_1[0] };
	*Global_1946804->f_1616.f_1[2] = { *Global_26796.f_627.f_1.f_1.f_1[2] };
	*Global_1946804->f_1616.f_1[3] = { *Global_26796.f_627.f_1.f_1.f_1[3] };
	*Global_1946804->f_1616.f_1[1] = { *Global_26796.f_627.f_1.f_1.f_1[1] };
	*Global_1946804->f_1616.f_1[5] = { *Global_26796.f_627.f_1.f_1.f_1[5] };
	*Global_1946804->f_1616.f_1[6] = { *Global_26796.f_627.f_1.f_1.f_1[6] };
	*Global_1946804->f_1616.f_1[7] = { *Global_26796.f_627.f_1.f_1.f_1[7] };
	Global_26796.f_627 = Global_1946804->f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar36] = { *Global_1946804->f_1616.f_1[iVar36] };
		iVar36++;
	}
}

struct<4> func_1160()
{
	Var0 = { func_842(0) };
	return func_734(856287005, Var0, -218846335, 0);
}

int func_1161(int iParam0, struct<4> Param1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_344(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1062(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1366(&uVar7);
					if (func_735(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1162(var uParam0)
{
	return uParam0->f_1;
}

void func_1163(var uParam0)
{
	func_1367(uParam0);
	func_1369(uParam0, func_1368(-1346384396));
	func_1370(uParam0, func_1368(-712836614));
	func_1371(uParam0, func_1368(-1629133289));
	func_1372(uParam0, func_1368(1302066700));
	func_1373(uParam0, func_1368(599669344));
	func_1374(uParam0, func_1368(-1555511632));
}

void func_1164(struct<6> Param0)
{
	if (!func_1375(Param0.f_4, 1))
	{
	}
	if (!func_1375(Param0, 1))
	{
	}
	if (!func_1375(Param0.f_2, 1))
	{
	}
	if (!func_1375(Param0.f_5, 1))
	{
	}
	if (!func_1375(Param0.f_3, 1))
	{
	}
	if (!func_1375(Param0.f_1, 1))
	{
	}
}

int func_1165(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_342())
	{
		if (func_125())
		{
			bVar0 = false;
			if (!func_147((*Global_1835011)[15]->f_1, 1) && !func_366(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1376();
				*iParam1 = func_1377();
				*iParam2 = func_1378();
				return 1;
			}
			else
			{
				*iParam0 = func_1379();
				*iParam1 = func_1380();
				*iParam2 = func_1381();
				return 1;
			}
		}
		else if (func_695())
		{
			if (!func_147((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1382();
				*iParam1 = func_1383();
				*iParam2 = func_1384();
				return 1;
			}
			else
			{
				*iParam0 = func_1385();
				*iParam1 = func_1386();
				*iParam2 = func_1387();
				return 1;
			}
		}
	}
	else if (func_125())
	{
		*iParam0 = func_1388();
		*iParam1 = func_1389();
		*iParam2 = func_1390();
		return 1;
	}
	else if (func_695())
	{
		*iParam0 = func_1391();
		*iParam1 = func_1392();
		*iParam2 = func_1393();
		return 1;
	}
	return 0;
}

void func_1166(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1167(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1168(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1169(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1170(int iParam0)
{
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_842(0) };
	if (func_1395(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1171(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_735(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1172(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1173(int iParam0, int iParam1)
{
	if (!func_344(iParam1, 0))
	{
		return 0;
	}
	if (!func_1397(iParam1))
	{
		return 0;
	}
	if (func_1170(iParam0))
	{
		return 0;
	}
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_842(0) };
	Var1.f_4 = iVar0;
	if (!func_792(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1174(int iParam0, struct<4> Param1, bool bParam5)
{
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_344(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1062(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1366(&Var7);
					if (func_792(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1177(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1175(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1194(1) < iParam0)
	{
		iParam0 = func_1194(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_120(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1176(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_678(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_847(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1177(struct<4> Param0, int iParam4)
{
	if (!func_372(0))
	{
		return func_1398(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_847(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_678(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1178(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1102(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_372(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_678(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1179(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_116() == -1)
	{
		if (func_354(43))
		{
			if (func_364(iParam0, 412399755))
			{
				func_762(-1791518714);
				if (func_763() == 0)
				{
					func_187(0, 10);
					iVar0 = func_1399(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_765(iParam0) < func_766(iParam0))
						{
							func_360(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_354(44))
		{
			if (func_364(iParam0, 709057512))
			{
				func_762(-2087881550);
				if (func_763() == 1)
				{
					func_187(0, 10);
					iVar0 = func_1399(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_765(iParam0) < func_766(iParam0))
						{
							func_360(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_354(45))
		{
			if (func_364(iParam0, -1478961327))
			{
				func_762(1908068621);
				if (func_763() == 2)
				{
					func_187(0, 10);
					iVar0 = func_1399(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_765(iParam0) < func_766(iParam0))
						{
							func_360(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_354(46))
		{
			if (func_364(iParam0, -1238404098))
			{
				func_762(1611247019);
				if (func_763() == 3)
				{
					func_187(0, 10);
					iVar0 = func_1399(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_765(iParam0) < func_766(iParam0))
						{
							func_360(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_354(47))
		{
			if (func_364(iParam0, 1160548794))
			{
				func_762(1319635688);
				if (func_763() == 4)
				{
					func_187(0, 10);
					iVar0 = func_1399(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_765(iParam0) < func_766(iParam0))
						{
							func_360(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1180(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1181(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1400(iParam1);
	func_1401(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1402(&(uParam0->f_26), iVar1);
		if (func_1403(uParam0->f_26, &iVar0))
		{
			func_1404(iVar0, iVar1);
		}
	}
}

bool func_1182(int iParam0, int iParam1)
{
	Var0 = { func_456(iParam0, 0, 0) };
	Var5 = { func_734(iParam0, Var0, Var0.f_4, 0) };
	if (func_1062(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_678(0), &Var5, iParam1);
	return true;
}

void func_1183(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1184(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1185(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_1186(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_444(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_1187(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_444(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_444(iParam0, 1)])->f_10 || iParam1);
}

void func_1188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1189(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1123(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1123(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1123(iVar2, iVar0);
		}
	}
}

bool func_1190(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1191(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1192()
{
	return Var0;
}

bool func_1193(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1405(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1194(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1196(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_147((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1197(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1198(int iParam0)
{
	if (!func_498(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1199(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	(*Global_1897952)[iParam0]->f_1 = iVar0;
	return iVar0;
}

bool func_1200(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_695())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1201(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_1202(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_1203(int iParam0)
{
	if (!func_876(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_1406(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_1204(int iParam0, int iParam1)
{
	iVar1 = (shift_left(iParam1, 11) || iParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1205(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1407(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1206(int iParam0, int iParam1)
{
	func_876(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_876(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

bool func_1207(int iParam0)
{
	if (!func_498(iParam0))
	{
		return false;
	}
	return func_1408(iParam0, 33554432);
}

bool func_1208(int iParam0, bool bParam1)
{
	if (!func_1409(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1410(iParam0, 8))
		{
			return false;
		}
	}
	if (func_1410(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1209(int iParam0, int iParam1)
{
	func_876(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_876(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_167(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_1210()
{
	if (func_342())
	{
		if (!func_1196(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_1106(-2061583405, &uVar0));
}

bool func_1211(int iParam0, int iParam1)
{
	func_876(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_876(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (_datafile_get_bool(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_1212(int iParam0)
{
	if (!func_1409(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1208(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_1213(int iParam0, int iParam1)
{
	func_876(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1411(iVar5);
			if (func_1196(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1411(iVar5);
			if (!func_1196(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1412(iVar5);
			if (func_1413(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1412(iVar5);
			if (!func_1413(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1214(int iParam0)
{
	if (!func_1414(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_1215(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

int func_1216(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_78(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_1415(iVar1), vParam0) < func_1027(func_1416(iVar1) == 0f, fParam3, func_1416(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1217(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1417(iVar0, 0))
		{
			if (vdist(func_1418(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1218(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_1219(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

char* func_1220(char* sParam0)
{
	return sParam0;
}

void func_1221(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

int func_1222(int iParam0)
{
	if (!func_29(iParam0, 0))
	{
		return 0;
	}
	if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
	{
		return get_ped_waypoint_progress(iParam0);
	}
	return 0;
}

void func_1223(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
			{
				if (bParam4)
				{
					waypoint_playback_override_speed(iParam0, fParam1, iParam2, iParam3, 0);
				}
				set_enable_speed_restrain_for_waypoint_recording_leader(iParam0, 1);
				set_up_speed_restrain_information_for_player_follower(iParam0, iParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
}

void func_1224(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

bool func_1225(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_1226(int iParam0, int iParam1)
{
	Local_15.f_591[iParam0] = iParam1;
}

Vector3 func_1227()
{
	return *(Local_15.f_602[get_random_int_in_range(0, 6)]);
}

Vector3 func_1228(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_939(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_1229(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_1230(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1231(int iParam0, bool bParam1)
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

void func_1232(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

bool func_1233(int iParam0)
{
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1234(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_503(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

int func_1235()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_1236(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1237(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_1238(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_204(&uParam0))
	{
		return false;
	}
	if (func_958(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_1239(float fParam0, float fParam1, bool bParam2)
{
	func_1419(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_961(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1240()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_1241(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_223(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_1242(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1243(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_1244(int iParam0)
{
	if (func_930(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_1245(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (func_661(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_277(iParam0);
	func_1244(iVar0);
	func_280(iParam0, 8192, 1);
}

void func_1246(int iParam0)
{
	if (func_930(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_1247(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (func_661(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_277(iParam0);
	func_1246(iVar0);
	func_280(iParam0, 8192, 0);
}

void func_1248(int iParam0)
{
	if (func_930(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_1249(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_73(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_1250(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (func_661(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_277(iParam0);
	func_1248(iVar0);
	func_280(iParam0, 16384, 1);
}

void func_1251(int iParam0)
{
	if (func_930(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_1252(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (func_661(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_277(iParam0);
	func_1251(iVar0);
	func_280(iParam0, 16384, 0);
}

int func_1253(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1420(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1254(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_627(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_1256(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

int func_1257(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_266(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_663(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_29((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_665(iParam0, 3);
			}
			else
			{
				if (!func_1421(iParam0) && func_1422(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_661(iParam0, 1), &uVar4);
				}
				func_280(iParam0, 256, 0);
				func_665(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_1423();
				}
				if (bParam2 && !func_497(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_1424(iParam0, vVar0, iParam6, iParam10))
				{
					return func_1423();
				}
				if (func_29((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_665(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_29((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_665(iParam0, 1);
				return func_1423();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_665(iParam0, 3);
			}
			break;
		case 3:
			if (!func_29((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_665(iParam0, 1);
				return func_1423();
			}
			if (bParam7)
			{
				if (!func_1425(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_1423();
				}
			}
			if ((bParam2 && !func_497(vVar0)) && !func_1426(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_626((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_272(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_59(iParam0, 39, 1);
				func_280(iParam0, 8, 1);
				func_280(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_1427((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_1428(iParam0, func_695());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_661(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_270(iParam0, 40, 0);
			func_280(iParam0, 32, 0);
			func_665(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_1423();
}

void func_1258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.4f)), round((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.1f)), round((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	set_attribute_points(iParam1, 16, iVar0);
}

void func_1259(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_661(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_1429(func_277(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_1245(iParam0);
	}
	else
	{
		func_1247(iParam0);
	}
	if (bParam2)
	{
		func_1250(iParam0);
	}
	else
	{
		func_1252(iParam0);
	}
}

void func_1260(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_997(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1430(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1261(int iParam0)
{
	if (!func_1431(iParam0))
	{
		return false;
	}
	if (!func_151())
	{
		return true;
	}
	return false;
}

void func_1262(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_1263(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

void func_1264(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1265(int iParam0, struct<2> Param1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1432(iParam0, Param1))
	{
	}
	if (!func_1433(iParam0, Param1.f_1))
	{
	}
}

void func_1266(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1434((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1267(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1268(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_1269(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1270(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1271(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1272(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1273(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1274(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1275(int iParam0)
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

void func_1276(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1277(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1278(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1396(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1394(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1435(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1436(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1279(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_1437(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_1438(iParam0))
	{
		iVar3 = func_1439(iParam0);
		if (func_1440(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

int func_1280()
{
	return Global_1900383->f_393;
}

void func_1281(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_1282(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_1283(int iParam0, int iParam1)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1005(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1165(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1441(iParam1);
	iVar5 = func_997(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

bool func_1284(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1442(Var0, 1415981582, 0);
	if (!func_344(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1285(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1442(Var0, -2119169513, 0);
	if (!func_344(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1286(int iParam0, int iParam1)
{
	if (!func_1443(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1160() };
	*iParam1 = func_1442(Var0, iParam0, 0);
	if (!func_344(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1287(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1288(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1444(iParam0, *uParam1);
	func_1444(iParam0, uParam1->f_1);
}

void func_1289(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_1290(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1444(iParam0, *uParam1);
	func_1444(iParam0, uParam1->f_1);
	func_1444(iParam0, uParam1->f_2);
	func_1444(iParam0, uParam1->f_3);
	func_1444(iParam0, uParam1->f_4);
	func_1444(iParam0, uParam1->f_5);
}

int func_1291(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

void func_1292(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_29(Global_35, 0))
		{
			if (func_29(&(Local_15.f_307[2]), 0))
			{
				_set_ped_on_mount(Global_35, &(Local_15.f_307[2]), -1, true);
			}
		}
		if (func_29(&(Local_15.f_307[0]), 0))
		{
			if (func_29(&(Local_15.f_307[1]), 0))
			{
				_set_ped_on_mount(&(Local_15.f_307[0]), &(Local_15.f_307[1]), -1, true);
			}
		}
	}
	else
	{
		if (func_29(Global_35, 0))
		{
			if (get_mount(Global_35) != 0)
			{
				_remove_ped_from_mount(Global_35, true, false);
			}
		}
		if (func_29(&(Local_15.f_307[0]), 0))
		{
			if (get_mount(&(Local_15.f_307[0])) != 0)
			{
				_remove_ped_from_mount(&(Local_15.f_307[0]), true, false);
			}
		}
	}
}

void func_1293()
{
	if (func_556(&(Local_15.f_307[0]), 1, 2, 0) != -1098045850)
	{
		func_557(&(Local_15.f_307[0]), -1098045850, 0, 0, 2, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
}

struct<4> func_1294(int iParam0, int iParam1)
{
	return func_1445(iParam0, iParam1);
}

void func_1295(var uParam0, struct<4> Param1, struct<4> Param5, struct<4> Param9, struct<4> Param13)
{
	func_1446(Global_35, Param1, 2, 1073741824);
	func_1446(&(Local_15.f_307[0]), Param5, 2, 1073741824);
	func_1446(&(Local_15.f_307[2]), Param9, 2, 1073741824);
	func_1446(&(Local_15.f_307[1]), Param13, 2, 1073741824);
}

void func_1296()
{
	iVar0 = 0;
	while (iVar0 < 41)
	{
		Local_15.f_204[iVar0] = 0;
		iVar0++;
	}
}

void func_1297()
{
	if (does_entity_exist(Local_15.f_375))
	{
		delete_entity(&(Local_15.f_375));
	}
	if (_0x608bc6a6aacd5036(&Var0, &(Local_15.f_307[2]), 4, 0))
	{
		iVar4 = Var0.f_3;
		if (does_entity_exist(iVar4))
		{
			set_entity_as_mission_entity(iVar4, true, true);
			delete_entity(&iVar4);
		}
	}
}

bool func_1298()
{
	if (func_1447() && !func_199(Local_15.f_631, 2048))
	{
		func_1297();
		func_528(&(Local_15.f_631), 2048);
	}
	if (!does_entity_exist(Local_15.f_375))
	{
		Local_15.f_375 = create_object(func_595(5), get_entity_coords(&(Local_15.f_307[2]), true, false), false, true, false, false, true);
		return false;
	}
	if (!_0x0ccfe72b43c9cf96(Local_15.f_375))
	{
		iVar0 = _get_optimal_carry_config(Local_15.f_375, 0);
		task_carriable(Local_15.f_375, iVar0, &(Local_15.f_307[2]), func_1448(4), 0);
		return false;
	}
	if (_0x61914209c36efddb(Local_15.f_375) != 7)
	{
		return false;
	}
	return true;
}

void func_1299(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1300(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1343(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_1301(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_1302()
{
	if (func_116() != -1)
	{
		return;
	}
	if (!func_342())
	{
		return;
	}
	func_1449(&(Global_40.f_40));
}

void func_1303()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_1304()
{
	return !func_497(Global_1310720->f_1);
}

int func_1305()
{
	return Global_40.f_4283.f_4;
}

void func_1306(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1450())
	{
		fVar0 = func_1042(vParam0, Global_40.f_6);
	}
	if (func_1451(33554432))
	{
		if (!func_1426(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1042(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_1307()
{
	if (!func_96(&Global_1935630, 8192))
	{
		return;
	}
	if (func_20(32768))
	{
		return;
	}
	func_34(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1452(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1452(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1452(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1452(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1452(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1452(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1452(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1452(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1452(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1453(10f, to_float(func_1452(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1453(5f, to_float(func_1452(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1453(25f, to_float(func_1454(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1453(1f, to_float(func_1454(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1453(6f, to_float(func_1454(64058978)))));
	fVar0 = (fVar0 + (3f * func_1453(1f, to_float(func_1454(795577402)))));
	iVar1 = func_1455();
	fVar0 = (fVar0 + (0.1111111f * func_1453(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1453(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1453(to_float(20), to_float(func_1457()))));
	if (func_1413(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1413(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1413(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1413(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1413(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1456(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1453(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1453(5f, to_float(func_1454(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1453(5f, to_float(func_1452(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1103(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1458(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1453((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1453(1f, to_float(func_1459(-2116919750)))));
	fVar5 = to_float(func_1460());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1453(5f, to_float(func_1454(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1453(1f, to_float(func_1454(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1453(1f, to_float(func_1454(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1453(1f, to_float(func_1454(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1453(1f, to_float(func_1452(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1453(1f, to_float(func_1452(978382515, 1015970717)))));
	Var6 = { func_120(1215094015) };
	fVar8 = func_1461(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_78(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_78(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_82(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1462(Global_1898330[iVar61]);
				}
				else
				{
					func_1463(iVar61, 0);
					if (func_81(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_80(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_80((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_80(&Global_1898437), &iVar9);
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

bool func_1308(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1309(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

char* func_1310(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1464(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1464(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1311(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_810(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1312(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_1313(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1314(bool bParam0)
{
	func_1465(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

float func_1315(int iParam0)
{
	iVar4 = func_1066(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1316(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1466(iVar6) - func_1466(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1316(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1317(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1319(float fParam0, float fParam1)
{
	iVar0 = func_1316(fParam0);
	fVar1 = to_float(func_1466(iVar0));
	fVar2 = to_float(func_1466(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1320(int iParam0)
{
	if (func_1467(iParam0, &iVar0))
	{
		return func_1466(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1468())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1468())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1468())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1322(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1469(iParam0));
	sVar4 = func_1471(func_1470(iVar3, iParam2));
	sVar6 = func_1472(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1473(iParam0));
	iVar8 = func_1474(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1475(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_723(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1476(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1323(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1324(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1325(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1326(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1327(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1328(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1477(&iVar0, 0, iVar95, &Var1) && !func_1477(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1478(iVar0, &Var1);
			if (func_344(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1329()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1479(Global_35, &uVar0);
	Var30 = { func_842(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1480(0);
	func_1481(7);
	func_1482(-1623728698, 1, 1, 0);
	if (func_446() == 1160113249)
	{
		func_1482(-763730846, 1, 1, 1);
		func_1482(-361635024, 1, 1, 1);
	}
	func_1483(Global_35, &uVar0);
}

int func_1330(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_457(iVar0);
}

int func_1331(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_678(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_850(&uVar6, iVar0);
	func_851(&uVar6, iVar1);
	func_852(&uVar6, iVar2);
	func_853(&uVar6, iVar3);
	func_854(&uVar6, iVar4);
	func_855(&uVar6, iVar5);
	return uVar6;
}

void func_1332(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_120(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1333(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1484(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1484(uParam0->f_2[iVar0], 1))
				{
					func_1485(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1334(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1486(uParam0, 1))
	{
		func_1487(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1335(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_446();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1336(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1337(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1338(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_116() == -1)
	{
		func_450(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1488(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1339(int iParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_1340(int iParam0, bool bParam1, int iParam2)
{
	func_1362(&(Global_1946804->f_1378), iParam0);
	func_1363(2, iParam0, 6);
	if (bParam1)
	{
		func_828(0, 1);
	}
}

float func_1341(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1342(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1343(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_808(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_808(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1344()
{
	return Global_1946804->f_1497;
}

char* func_1345(int iParam0)
{
	iVar0 = func_1148(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1089(iVar0);
}

int func_1346(int iParam0)
{
	if (func_1489(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1490(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1491(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1492(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1347(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_167(func_1493(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1348(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_167(func_1494(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1349(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1350()
{
	if (func_116() != -1)
	{
		return;
	}
	func_418(1654063339, 1, 752097756);
	iVar0 = func_1069(1);
	func_1322(1, iVar0, 0);
}

void func_1351(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1352()
{
	if (func_116() != -1)
	{
		return;
	}
	func_418(1623931083, 1, 752097756);
	iVar0 = func_1069(2);
	func_1322(2, iVar0, 0);
}

void func_1353()
{
	if (func_116() != -1)
	{
		return;
	}
	func_418(-1845241476, 1, 752097756);
	iVar0 = func_1069(0);
	func_1322(0, iVar0, 0);
}

bool func_1354(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1355(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1495(iParam0, func_446()))
	{
		return 0;
	}
	Var1 = func_830(func_446());
	Var1.f_1 = iParam0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	while (_0xed4413cee1bf142c(&Var1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1356(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_830(func_446());
	Var20 = { func_1063(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1065(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_785(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_794(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1188(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
					_0x91ded5dd64bb2691(&(Global_1946804->f_964));
					if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_786(iVar0);
	return 1;
}

void func_1357(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1180(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19 = (Global_26796.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26796.f_627.f_121[iVar0] = &Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_1358(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1359(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1496();
	}
	if (func_116() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1360(int iParam0)
{
	if (func_116() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_450(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0] = 0;
	Global_36638.f_45.f_350.f_26[iParam0]->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0];
		func_1488(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1361(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1362(var uParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_450(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1488(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1363(int iParam0, int iParam1, int iParam2)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_1364(int iParam0, int iParam1)
{
	if (!func_795(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

int func_1365(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1148(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1359(iParam1);
	}
	if ((bParam3 && func_1149(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1495(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1364(Global_40.f_7729, 4096);
		func_1151(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_983(iParam0);
	}
	func_1497();
	if (!func_1498(iParam1))
	{
		func_1500(iVar0, iParam0, func_1499(iParam1), 1, 0, 1);
	}
	func_1501(iParam0);
	return 1;
}

void func_1366(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1367(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1368(int iParam0)
{
	if (func_125())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737;
			case -712836614:
				return 1832924306;
			case -1629133289:
				return -960265739;
			case 1302066700:
				return 1484641439;
			case 599669344:
				return -1742648548;
			case -1555511632:
				return -288915854;
		}
	}
	else if (func_695())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398;
			case -712836614:
				return 540384851;
			case -1629133289:
				return 859626502;
			case 1302066700:
				return -415239647;
			case 599669344:
				return 1436607742;
			case -1555511632:
				return 691935155;
		}
	}
	return 0;
}

void func_1369(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1370(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1371(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1372(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1373(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1374(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1375(int iParam0, int iParam1)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (!func_1502(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1160() };
	Var14 = { func_734(iParam0, Var10, iVar9, 0) };
	if (func_1177(Var14, iParam1))
	{
		if (func_1503(iParam0))
		{
			if (func_1286(325139909, &iVar18))
			{
				if (func_1375(iVar18, 0))
				{
				}
			}
		}
		else if (func_1504(iParam0))
		{
			if (func_1286(325139909, &iVar19))
			{
				if (func_1375(iVar19, 0))
				{
				}
			}
			if (func_1286(986998820, &iVar20))
			{
				if (func_1375(iVar20, 0))
				{
				}
			}
			iVar21 = func_1505(iParam0);
			if (func_344(iVar21, 0))
			{
				if (func_1375(iVar21, 1))
				{
				}
			}
		}
		func_1506();
		return true;
	}
	return false;
}

int func_1376()
{
	return 1342496140;
}

int func_1377()
{
	return 446670976;
}

int func_1378()
{
	return 1;
}

int func_1379()
{
	return -868094182;
}

int func_1380()
{
	return 1074477367;
}

int func_1381()
{
	return 1;
}

int func_1382()
{
	return -997197050;
}

int func_1383()
{
	return -2063289686;
}

int func_1384()
{
	return 2;
}

int func_1385()
{
	return -868094182;
}

int func_1386()
{
	return 1074477367;
}

int func_1387()
{
	return 1;
}

int func_1388()
{
	return 1235275977;
}

int func_1389()
{
	return 2030804811;
}

int func_1390()
{
	return 1;
}

int func_1391()
{
	return 1974379573;
}

int func_1392()
{
	return 2024948086;
}

int func_1393()
{
	return 1;
}

int func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1395(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_678(bParam2), uParam0, iParam1);
}

bool func_1396(int iParam0, var uParam1)
{
	if (!func_1170(iParam0))
	{
		return false;
	}
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_842(0) };
	if (!func_1507(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1508(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1397(int iParam0)
{
	return func_363(iParam0) == -1784221369;
}

int func_1398(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_847(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_363(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1509(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1510(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1511(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1512(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1513(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1514(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1399(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_765(iVar9);
	iVar2 = func_765(iVar10);
	iVar3 = func_765(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_765(iVar12);
	}
	iVar5 = func_766(iVar9);
	iVar6 = func_766(iVar10);
	iVar7 = func_766(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_766(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1400(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1401(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1402(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1515(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1403(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1404(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1405(int iParam0, int iParam1, var uParam2, int iParam3)
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
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
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
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
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
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1406(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_1407(int iParam0)
{
	iParam0 = func_284(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_11;
}

bool func_1408(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_1409(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_1410(int iParam0, int iParam1)
{
	if (!func_1409(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_1411(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (get_hash_key(&((*Global_1835011)[iVar0]->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1412(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (get_hash_key(&((*Global_1347702)[iVar0]->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1413(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_136(iParam0))
	{
		return false;
	}
	return func_147((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_1414(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_1415(int iParam0)
{
	return func_1516(iParam0);
}

float func_1416(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

bool func_1417(int iParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1418(int iParam0)
{
	if (!func_136(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1517(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_1419(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

int func_1420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
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

bool func_1421(int iParam0)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1422(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_1423()
{
	return -1;
}

bool func_1424(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if ((*Global_1360165)[iParam0]->f_125 <= 300)
		{
			if (_0xeb98b38ca60742d7((*Global_1360165)[iParam0]->f_126))
			{
				_0x49a8c2cd97815215((*Global_1360165)[iParam0]->f_126);
			}
			if (bParam5)
			{
				(*Global_1360165)[iParam0]->f_124 = _0x08fc896d2cb31fcc((*Global_1360165)[iParam0]->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				(*Global_1360165)[iParam0]->f_124 = _0x0cadc3a977997472((*Global_1360165)[iParam0]->f_126, 0);
			}
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_126);
			(*Global_1360165)[iParam0]->f_125++;
		}
		else
		{
			iVar0 = _0xa00df706c60173d1(func_661(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_598(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_29((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_280(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1425(int iParam0, int iParam1, bool bParam2)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	if (func_1518(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_29(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_1519(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_280(iParam0, 256, 1);
	return true;
}

bool func_1426(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_1427(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_1232(iParam0, func_1520(iParam1));
	if (func_1518(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_74(iParam1)))
	{
		_0x931b241409216c1f(func_74(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_74(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_59(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(iParam0, 172, true);
	}
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 442, true);
	if (func_1518(iParam1, 4096))
	{
		set_ped_config_flag(iParam0, 1, false);
		set_ped_config_flag(iParam0, 54, false);
		set_ped_config_flag(iParam0, 121, false);
		set_ped_config_flag(iParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(iParam0, 1, true);
		set_ped_config_flag(iParam0, 54, true);
		set_ped_config_flag(iParam0, 121, true);
		set_ped_config_flag(iParam0, 302, true);
	}
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
	func_1259(iParam1, func_1518(iParam1, 8192), func_1518(iParam1, 16384), 1);
}

char* func_1428(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_1429(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_1141(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

int func_1430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_1431(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_1432(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_734(iParam1, Var0, 1415981582, 0) };
	return func_1177(Var29, 1);
}

bool func_1433(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_734(iParam1, Var0, -2119169513, 0) };
	return func_1177(Var29, 1);
}

void func_1434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_1435(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_372(bParam10))
	{
		return func_1521(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_847(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1522(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_678(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1177(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1436(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_372(bParam9))
	{
		return func_1523(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1522(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_847(Param0, &Var0, bParam9, 1) || !func_847(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1522(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_678(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_1437(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1524(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1438(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_1439(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_1439(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1440(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_1441(int iParam0)
{
	if (func_1525() < iParam0)
	{
		func_1526(iParam0);
	}
}

int func_1442(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1176(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1443(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_368(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1527(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_1444(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, false, false);
}

struct<4> func_1445(int iParam0, int iParam1)
{
	Var0 = { func_905(iParam0, iParam1) };
	Var0.f_3 = func_906(iParam0, iParam1);
	return Var0;
}

void func_1446(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_626(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1447()
{
	if (_0x608bc6a6aacd5036(&Var0, &(Local_15.f_307[2]), 4, 0))
	{
		iVar4 = Var0.f_3;
		if (does_entity_exist(iVar4))
		{
			return true;
		}
	}
	return false;
}

int func_1448(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 6;
			break;
		case 6:
			iVar0 = 7;
			break;
	}
	return iVar0;
}

void func_1449(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

bool func_1450()
{
	if (func_1196(43) && !func_1196(44))
	{
		return false;
	}
	if (func_1196(67) && func_188() != 8)
	{
		return false;
	}
	return true;
}

bool func_1451(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1452(int iParam0, int iParam1)
{
	Var1 = { func_382(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_1453(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_1454(int iParam0)
{
	Var1 = { func_120(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1455()
{
	if (func_199(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_199(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1456(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1457()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1528(iVar0);
		if (func_199(func_1529(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1458(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_348(-1845241476, 0, 0);
	iVar1 = func_348(1654063339, 0, 0);
	iVar2 = func_348(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1459(int iParam0)
{
	Var1 = { func_380(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1460()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1530(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1461(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

void func_1462(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_78(iParam0))
	{
		return;
	}
	if (func_94(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	iVar0 = func_1531(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_1463(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_293(Global_1898330[iParam0]);
		func_1532((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_1464(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1533(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1534())
	{
		return func_1533(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1533(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_1465(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1466(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1467(int iParam0, int iParam1)
{
	return false;
}

bool func_1468()
{
	return false;
}

int func_1469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_678(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_678(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_678(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1470(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1471(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1472(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1473(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1474(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1477(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_666(iParam1) && !func_998(iParam1))
	{
		iVar0 = func_997(iParam1);
	}
	else
	{
		return false;
	}
	func_1434(uParam3);
	iVar5 = func_1430(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1478(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1535(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1536(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1479(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_459(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1480(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_344(iVar1, 0))
		{
			func_442(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1481(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_116() == -1)
	{
		func_1537(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_368(iVar2) != -999503751)
		{
			func_1538(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1182(iVar2, 0))
		{
			func_1539(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1482(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1540(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1541(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1542(0))
	{
		func_1543(iParam0, 1);
		if (func_446() == 1160113249)
		{
			func_1543(func_1542(-2125499975), 0);
		}
		else
		{
			func_1543(func_1542(1160113249), 0);
		}
	}
	func_827();
	if (func_1544(iVar0))
	{
		_0x766315a564594401(func_678(0), iParam0, 0);
	}
	func_1539(iParam0, bParam3);
	if (bParam2)
	{
		func_828(0, 0);
	}
}

void func_1483(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_730(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1484(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1485(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1486(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1487(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1488(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_1489(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (func_364(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1490(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (func_364(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1491(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (func_364(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1492(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (func_364(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1493(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1545(iParam0);
		case 1:
			return func_1546(iParam0);
		case 2:
			return func_1547(iParam0);
		case 3:
			return func_1548(iParam0);
	}
	return 0;
}

int func_1494(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1549(iParam0);
		case 1:
			return func_1550(iParam0);
		case 2:
			return func_1551(iParam0);
		case 3:
			return func_1552(iParam0);
		case 4:
			return func_1553(iParam0);
		case 5:
			return func_1554(iParam0);
		case 6:
			return func_1555(iParam0);
		case 7:
			return func_1556(iParam0);
		case 8:
			return func_1557(iParam0);
	}
	return 0;
}

bool func_1495(int iParam0, int iParam1)
{
	iVar0 = func_830(iParam1);
	func_1188(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

int func_1496()
{
	if (func_116() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1497()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_779(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	task_play_anim(Global_35, func_1558(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1129(1);
	remove_anim_dict(func_1558());
}

bool func_1498(int iParam0)
{
	return false;
}

int func_1499(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1500(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_794(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_116() != -1)
	{
		return;
	}
	func_1120();
	if (bParam5)
	{
		if (!func_1559(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_779(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_780();
	}
	func_1560(iVar3, 1, 1, 1, 1, 1);
	func_455(31, 0, 0, 0, 0);
	func_782(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (is_ped_a_player(iParam1))
		{
			func_455(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_455(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_1561(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1501(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

bool func_1502(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_368(iParam1);
		iVar5 = func_1527(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_456(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_734(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_678(0);
			Var37 = { func_456(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_734(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_368(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_1176(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
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

bool func_1503(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
	}
	if (func_364(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1504(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return false;
	}
	if (func_364(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1505(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_1506()
{
	Var0 = { func_456(856287005, 0, 0) };
	Var5 = { func_734(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_368(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_1442(Var5, -415648720, 0);
	}
	if (!func_344(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1527(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1442(Var5, iVar11, 0);
			if (!func_344(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1504(iVar14) || func_1503(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1504(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1504(iVar14) && func_1562(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1563(iVar11, &Var16, 1))
									{
										if (!func_1177(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_1507(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_678(bParam7);
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

bool func_1508(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_678(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

struct<28> func_1509(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_678(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1513(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1510(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1564(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1511(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_678(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1513(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1512(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1564(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1513(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1514(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1564(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1515(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1565(&(uParam0->f_3));
}

Vector3 func_1516(int iParam0)
{
	if (func_1566(iParam0))
	{
		return func_1567(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1517(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_181((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_1518(int iParam0, int iParam1)
{
	if (!func_266(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

int func_1519(int iParam0)
{
	return 1268180497;
}

int func_1520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_366(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_366(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1521(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_847(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1522(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1062(Var0.f_4, Param4, iParam8, 0);
	iVar15 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1513(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1514(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1522(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1523(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1522(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_847(Param0, &Var0, 1, 0) || !func_847(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1522(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1513(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1513(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
		{
			if (_cashinventory_transaction_add_item(iVar60, &Var28, 16) && _cashinventory_transaction_add_item(iVar60, &Var44, 16))
			{
				if (_cashinventory_transaction_checkout(iVar60))
				{
					func_1564(iVar60, 1);
				}
				else
				{
					_cashinventory_transaction_delete(iVar60);
					return -1;
				}
			}
			else
			{
				_cashinventory_transaction_delete(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1514(1168099063, &Var28, 0);
		iVar60 = func_1514(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1524(int iParam0)
{
	switch (iParam0)
	{
		case -1760684159:
		case -1718100160:
		case -1642485146:
		case -1486704931:
		case -1391147923:
		case -1356425746:
		case -1181161469:
		case -1084397164:
		case -1053639984:
		case -941733863:
		case -646460384:
		case -575759638:
		case -548014618:
		case 291878635:
		case 979093383:
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return true;
	}
	return false;
}

int func_1525()
{
	return Global_40.f_1095.f_3135;
}

void func_1526(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1527(int iParam0)
{
	if (!func_344(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_1528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_1529()
{
	return Global_40.f_8863.f_148;
}

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

int func_1531(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1532(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_294(iParam0);
	*uParam1 = func_322(iParam0);
	*uParam2 = func_341(iParam0);
}

bool func_1533(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1534()
{
	return Global_1109400->f_245;
}

void func_1535(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1536(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1537(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1063(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1065(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_786(iVar0);
	}
}

void func_1538(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1568(iParam2, *uParam0);
	func_1569(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

void func_1539(int iParam0, bool bParam1)
{
	Var0 = { func_456(iParam0, 0, 0) };
	Var5 = { func_734(iParam0, Var0, Var0.f_4, 0) };
	if (func_1062(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_678(0), &Var5, bParam1);
}

bool func_1540(int iParam0)
{
	if (func_116() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1541(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1180(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1182(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_368(iParam0) != -999503751)
	{
		func_1538(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1542(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_446();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1543(int iParam0, int iParam1)
{
	Var0 = { func_456(iParam0, 0, 0) };
	Var5 = { func_734(iParam0, Var0, Var0.f_4, 0) };
	if (func_1062(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_678(0), &Var5);
	return 1;
}

bool func_1544(int iParam0)
{
	return func_1570(func_679(iParam0));
}

int func_1545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1553(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1554(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1557(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

char* func_1558()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1559(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1571(uParam0, iParam3, iParam2) && !func_447(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_779(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1121(1108822547);
		}
		else
		{
			func_1572(1108822547);
		}
	}
	func_1125(uParam0, 0, 0);
	func_1183(iParam5);
	return true;
}

void func_1560(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1496()) || bParam5)
		{
			func_1573();
		}
	}
	if (func_116() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1574(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1148(Global_40.f_7729);
				Global_1946804->f_1378 = func_1148(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1499(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1340(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_828(0, 1);
	}
	func_1183(0);
}

void func_1561(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_116() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_840(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1575(iParam1, 29, bVar4, 1, 0);
			func_1575(iParam1, 31, bVar4, 1, 0);
			func_1575(iParam1, 30, bVar4, 1, 0);
			func_1575(iParam1, 22, bVar4, 1, 0);
			func_1575(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_779(32768) && func_1186(1108822547, 8)) && func_1185(10, iParam3))
	{
		func_1576(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_848(iVar1, 1);
			if (func_1186(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1185(iVar1, iParam3))
				{
				}
				else if ((func_1186(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1186(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1575(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1187(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1575(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1186(iVar3, 1))
							{
								func_1126(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_1562(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1563(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_1063(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1064(&Var2, func_1160());
	if (func_1065(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_785(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_344(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1562(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_786(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_786(iVar0);
	}
	return false;
}

void func_1564(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1577(iParam0, iParam1);
}

void func_1565(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

bool func_1566(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1578((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_1567(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

void func_1568(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1569(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1515(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_444(func_443(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1579(uParam0);
	}
}

bool func_1570(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1571(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1359(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1339(2, iParam1))
	{
		func_1580(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1572(int iParam0)
{
	func_1187(iParam0, 8, 6);
}

void func_1573()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1574(int iParam0)
{
	iVar0 = func_830(0);
	iVar1 = 0;
	func_1188(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		return false;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_1575(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_848(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1581(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

void func_1576(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1186(1108822547, 6))
	{
		if (bParam2)
		{
			func_1575(iParam0, iVar0, func_116() != -1, 0, 0);
			func_1187(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1126(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1577(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

bool func_1578(var uParam0)
{
	if (func_1582(&(uParam0->f_29), 62))
	{
		switch (func_1583())
		{
			case 1:
				if (!func_1582(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1582(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1582(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1582(&(uParam0->f_29), 32))
				{
					if (func_1582(&(uParam0->f_29), 2))
					{
						if (func_466(func_114()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

void func_1579(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1584(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1580(var uParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1]->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*uParam0->f_1[iVar0] = { *Global_26796.f_26[iParam1]->f_1.f_1[iVar0] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
}

int func_1581(int iParam0)
{
	iVar0 = func_368(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

bool func_1582(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1583()
{
	return &Global_1899516;
}

void func_1584(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1585(func_446());
	if (*uParam0)
	{
		func_1565(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_116() != -1, uParam2);
	*uParam0 = 1;
}

int func_1585(int iParam0)
{
	if (func_116() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

