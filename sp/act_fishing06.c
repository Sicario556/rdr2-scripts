void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_14 = true;
	iLocal_15 = 1;
	iLocal_16 = 1;
	fLocal_31 = 150f;
	iLocal_33 = -1;
	sLocal_34 = "CFSH";
	if (has_force_cleanup_occurred(546))
	{
		func_1(&uScriptParam_0);
		terminate_this_thread();
	}
	func_2(&uScriptParam_0, &uLocal_537);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_537, func_4());
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
				func_42(&uLocal_537);
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
	func_30(2);
	func_61(17, 0);
	func_62(&(Local_134.f_144));
	if (does_cam_exist(Local_134.f_78))
	{
		destroy_cam(Local_134.f_78, false);
	}
	if (_0xde0ea444735c1368(&(Local_134.f_112[4])))
	{
		_0x2c87c3e1c7b96ee2(&(Local_134.f_112[4]));
	}
	_0x935cf6e42baf7f4d(&(Local_134.f_80[0]));
	func_64(1, func_63("FS06_HRSE_BLK"));
	if (!is_player_control_on(get_player_index()))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (!is_entity_dead(&(Local_134.f_80[0])))
	{
		_0x411189e51b8020ba(&(Local_134.f_80[0]), "Stealth");
		_set_ped_crouch_movement(&(Local_134.f_80[0]), false, 0, false);
	}
	if (func_65(uParam0->f_2, 0))
	{
		func_66(uParam0->f_2);
	}
	if (func_10(uParam0->f_2))
	{
		func_67(uParam0->f_2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_68(0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_69(&(Local_134.f_112[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (does_entity_exist(&(Local_134.f_103[iVar0])))
		{
			delete_object(Local_134.f_103[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = get_blip_from_entity(&(Local_134.f_80[iVar0]));
		func_70(&iVar1);
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (does_entity_exist(&(Local_134.f_80[iVar0])))
		{
			set_ped_as_no_longer_needed(Local_134.f_80[iVar0]);
		}
		iVar0++;
	}
	clear_weather_type_persist();
	iVar2 = func_72(func_71(3, 1202375449));
	clear_bit(&iVar2, 0);
	clear_bit(&iVar2, 1);
	clear_bit(&iVar2, 2);
	if (uParam0->f_14 == 1)
	{
		if (does_entity_exist(Local_134.f_143))
		{
			set_vehicle_as_no_longer_needed(&(Local_134.f_143));
		}
	}
	else if (does_entity_exist(Local_134.f_143))
	{
		delete_vehicle(&(Local_134.f_143));
	}
	if (!is_entity_dead(Global_35))
	{
		_0x411189e51b8020ba(Global_35, "Stealth");
	}
	set_player_control(get_player_index(), true, 0, false);
	set_ped_config_flag(&(Local_134.f_80[0]), 297, false);
	set_ped_config_flag(&(Local_134.f_80[0]), 315, false);
	set_ped_config_flag(&(Local_134.f_80[0]), 130, false);
	set_ped_config_flag(&(Local_134.f_80[0]), 331, false);
	set_ped_config_flag(&(Local_134.f_80[0]), 330, false);
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
	func_73(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_74(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_67(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		stop_ped_speaking(func_75(iParam1), false);
		func_67(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_65(iVar0, 1))
		{
			func_66(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	iVar0 = func_76(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	if (!func_77(iParam0))
	{
		return;
	}
	if (iParam0 != func_78(0))
	{
		return;
	}
	if (func_79(iParam0) == 0)
	{
	}
	iVar0 = func_80(iParam0);
	if (func_81(iParam0) == 3)
	{
		if (func_79(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_79(iParam0)))
		{
			if (func_80(iParam0) != 1 && func_80(iParam0) != 8)
			{
				func_82(func_80(iParam0), func_79(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_83(iParam0);
	func_32(1);
	func_33(0);
	func_84(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_85(1);
			func_86(15, 0, 1);
			break;
		case 4:
			func_86(10, 0, 1);
			break;
		case 8:
			func_86(10, 0, 1);
			break;
		case 9:
			func_86(10, 0, 1);
			break;
		case 2:
			func_86(10, 0, 1);
			break;
		case 6:
			func_86(10, 0, 1);
			break;
		case 5:
			func_86(10, 0, 1);
			break;
	}
	func_87(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_88(Global_1347343->f_11, 536870912))
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
	if (func_89() >= 2)
	{
		if (!func_88(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_90(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_91(Global_1935630, 2048);
	func_92(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	if (!func_77(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_93(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_79(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_81(iParam0) == 3 || (func_81(iParam0) == 1 && _0x01f4d242765c6b24(func_79(iParam0))))
	{
		func_82(func_80(iParam0), func_79(iParam0), iParam2);
		if ((!func_77(Global_1572864->f_8) && !func_94(0, 1, 0)) && !func_95(&Global_1935630, 32768))
		{
			iVar0 = func_96(iParam0);
			if (iVar0 != -1)
			{
				func_97(0);
			}
			else if (func_80(iParam0) == 8)
			{
				iVar0 = func_98();
				if (iVar0 != -1)
				{
					func_97(0);
				}
			}
		}
	}
	func_84(iParam0, 0);
	if (func_78(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_87(1);
	}
	func_99(iParam0, 1);
	func_83(iParam0);
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
	func_100(0);
	func_101(0);
	func_102(0);
	func_103(0);
	func_104(0);
	func_90(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_105(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_106(uParam0->f_1);
	iVar1 = get_hash_key(sVar0);
	if (!_uilog_is_entry_registered(3, iVar1))
	{
		StringCopy(&cVar2, _create_var_string(2, func_107(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, _create_var_string(2, func_108(uParam0->f_2, 0)), 64);
		_uilog_add_entry_hash(3, iVar1, Global_36, get_hash_key(func_107(*uParam0)), func_109(uParam0->f_1), iVar10);
		_uilog_update_entry_subheader(3, iVar1, &cVar2);
		_uilog_set_entry_icon_texture(3, iVar1, func_110(*uParam0), 676312963);
		_uilog_set_entry_brief_texture(3, iVar1, func_111(uParam0->f_1), func_112(uParam0->f_1));
	}
	else if (bParam2)
	{
		_uilog_remove_entry(3, iVar1);
		return;
	}
	_uilog_add_or_update_objective(3, iVar1, func_109(uParam0->f_1), "", bParam1, false, false);
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
	if (!func_77(iParam0))
	{
		return;
	}
	if (func_76(iParam0) == 4)
	{
		func_114(iParam0, func_113());
		if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
		{
			if (bParam3)
			{
				func_84(iParam0, 6);
			}
			else
			{
				func_84(iParam0, 5);
			}
			func_83(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_80(iParam0);
	bVar1 = func_115() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_116(0, 2);
		if (!bVar1 && bParam1)
		{
			func_117();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_118(iParam0);
	}
	else
	{
		Var2 = { func_119(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_119(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_81(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_120(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_120(iParam0)]->f_8), true);
						}
					}
					else if ((func_120(iParam0) != 95 && func_120(iParam0) != 82) && !func_121((*Global_1347702)[func_120(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_120(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_120(iParam0)]->f_8), true);
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
		func_123(func_120(iParam0), iVar6, func_122());
	}
	else if (iVar0 == 8)
	{
		func_125(func_120(iParam0), iVar6, func_122(), func_124());
	}
	if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
	{
		iVar9 = func_126(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_127(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_128(func_120(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_129((iVar10 - 20), 0, iVar10);
					iVar11 = func_129((iVar11 - 10), 0, iVar11);
				}
				func_85(1);
				func_86(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_86(45, 0, 1);
				break;
			case 8:
				iVar10 = func_130(func_120(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_129((iVar10 - 20), 0, iVar10);
					iVar11 = func_129((iVar11 - 10), 0, iVar11);
				}
				func_86(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_131(func_120(iParam0)))
				{
					func_132(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_86(120, 0, 1);
				break;
			case 2:
				func_86(120, 0, 1);
				break;
			case 6:
				func_86(func_134(func_133(iParam0)), 0, 1);
				break;
			case 5:
				func_86(120, 0, 1);
				break;
		}
	}
	func_99(iParam0, 1);
	func_114(iParam0, func_113());
	func_83(iParam0);
	if ((!func_81(iParam0) == 0 && bParam1) && func_115() == -1)
	{
		iVar12 = func_96(iParam0);
		if (iVar12 != -1)
		{
			func_97(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_98();
			if (iVar12 != -1)
			{
				func_97(0);
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
				switch (func_120(iParam0))
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
				if (func_135(func_120(iParam0)) && func_121((*Global_1347702)[func_120(iParam0)]->f_12, 4))
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
				if (func_120(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_136();
				}
				break;
			case 8:
				if (func_120(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_136();
				}
				break;
		}
	}
	if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
	{
		if (bParam3)
		{
			func_84(iParam0, 6);
		}
		else
		{
			func_84(iParam0, 5);
		}
		func_83(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_120(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_137();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_138(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1267972061);
						func_138(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1619534881);
						func_138(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-755457379);
						func_138(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1015404643);
						func_138(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1724192342);
						func_138(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(1310680212);
						func_138(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-566881549);
						func_138(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1753730528);
						func_138(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(147796381);
						func_138(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-378547623);
						func_138(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(829545206);
						func_138(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(891318243);
						func_138(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140();
						func_141(967523420);
						func_142();
						func_143();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_108(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_138(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_144(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_144(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_145(304805134, 1, 1);
						if (!func_146((*Global_1347702)[21]->f_15, 1))
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
						func_147();
						break;
					case 26:
						func_148();
						break;
					case 17:
						func_149(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_150())
						{
							func_151(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_152(-514575035, -1))
						{
							iVar15 = func_113();
							func_153(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_154(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_150())
						{
							func_151(1529685685);
						}
						break;
					case 34:
						if (func_150())
						{
							func_151(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_155();
						break;
					case 37:
						func_156();
						if (func_157())
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
						func_158();
						break;
					case 43:
						func_159();
						break;
					case 44:
						if (!func_146((*Global_1347702)[82]->f_15, 1))
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
						if (!func_146((*Global_1347702)[83]->f_15, 1))
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
						func_160();
						break;
					case 59:
						func_161();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_162();
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
						func_163();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_144(451, 0);
						}
						if (!func_164(-1992824800))
						{
							if (func_164(1520110311))
							{
								iVar16 = func_113();
								func_153(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_154(1937177603, iVar16, 1);
							}
						}
						if (func_165(4))
						{
							if (!func_166(684296857, 1, 0))
							{
								iVar17 = func_113();
								func_153(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_154(-1439688706, iVar17, 1);
							}
						}
						func_138(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_167(89200);
						func_167(2300);
						func_167(2300);
						break;
					case 68:
						func_168();
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
						func_169();
						func_167(-139100);
						break;
					case 69:
						if (func_146((*Global_1347702)[9]->f_15, 1))
						{
							func_167(-6000);
						}
						break;
					case 70:
						func_167(23400);
						func_167(1900);
						func_167(-15000);
						break;
					case 71:
						func_167(-5500);
						break;
				}
				break;
			case 8:
				switch (func_120(iParam0))
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
						func_170();
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
						func_171();
						break;
					case 66:
						func_172();
						func_173();
						break;
					case 67:
						if (!func_174(6))
						{
							func_175(6);
						}
						if (!func_174(3))
						{
							func_175(3);
						}
						if (func_150())
						{
							func_151(1534638301);
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
						if (func_146((*Global_1835011)[69]->f_1, 1))
						{
							func_176(0);
							func_167(40500);
						}
						else
						{
							func_176(0);
							func_167(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_120(iParam0))
				{
					case 0:
						switch (func_133(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_177(iParam0);
		func_178();
		switch (iVar0)
		{
			case 1:
				switch (func_120(iParam0))
				{
					case 4:
						func_179(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_179(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_179(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_179(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_179(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_179(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_179(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_180(iParam0);
						func_179(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_179(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_179(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_166(-2046502963, 1, 0))
						{
							func_138(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_179(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_179(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_179(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_180(iParam0) == 0)
						{
							func_179(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_179(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_121((*Global_1347702)[func_120(iParam0)]->f_12, 536870912))
				{
					func_181(11, 1);
				}
				switch (func_120(iParam0))
				{
					case 109:
						func_179(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_181(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_179(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_179(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_179(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_179(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_182(0, 10, 11, 2116153146))
				{
					func_179(iParam0, func_180(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 7, 11, -379687487))
				{
					func_179(iParam0, func_183(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 8, 11, -1386089015))
				{
					func_179(iParam0, func_183(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 11, 11, -1952009645))
				{
					func_179(iParam0, func_183(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_182(0, 12, 11, 2065895756))
				{
					func_179(iParam0, func_183(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_81(iParam0) == 0)
			{
				if (func_79(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_79(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_82(func_80(iParam0), func_79(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_120(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_185(func_184(Global_1879514->f_1));
						if (iVar0 == 8 && func_120(iParam0) == 58)
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
						if (func_135(func_120(iParam0)) && func_121((*Global_1347702)[func_120(iParam0)]->f_12, 1))
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
			func_186(bParam2, iVar20);
		}
	}
	func_87(1);
	if ((bVar13 || func_136()) && (func_80(iParam0) == 1 || func_80(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_79(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_82(func_80(iParam0), func_79(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_80(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_182(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_93(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_81(iParam0) == 5 && !func_81(iParam0) == 6)
		{
			if (bParam1)
			{
				func_84(iParam0, 6);
			}
			else
			{
				func_84(iParam0, 5);
			}
			func_83(iParam0);
		}
	}
	switch (func_80(iParam0))
	{
		case 1:
			switch (func_120(iParam0))
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
			switch (func_120(iParam0))
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
		switch (func_187())
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
	iVar0 = func_188(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_189(iVar0))
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
	func_190(4112);
	func_191(6);
	vVar2 = { func_192((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_193(vVar2, uVar1, uVar0, 0);
	func_194(vVar2);
	Global_40.f_9.f_15 = func_195(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_26(int iParam0)
{
	if (func_115() != -1)
	{
		return;
	}
	func_190(32);
	if (iParam0 == 0)
	{
		func_190(16);
	}
	else if (iParam0 == 1)
	{
		func_190(8);
	}
	func_196();
	Global_43889 = 1;
}

struct<8> func_27(int iParam0)
{
	StringCopy(&cVar0, "ALLY_DEAD_", 64);
	if (!func_58(iParam0))
	{
		return cVar0;
	}
	StringConCat(&cVar0, func_197(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_197(iParam0), 64);
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
	if (func_198(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_198(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_198(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_198(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_198(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_198(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_198(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_198(iVar0, 256))
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
	switch (func_115())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_31(vector3 vParam0)
{
	iVar0 = func_195(vParam0, 1);
	if (iVar0 == func_199())
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
		func_91(Global_1935630, 4194304);
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
	if (!bParam0 && func_200(373691918))
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
	if (func_201(uParam0->f_44))
	{
		func_202(&(uParam0->f_44), 1, 1);
	}
	if (func_203(&(uParam0->f_45)))
	{
		func_204(&(uParam0->f_45));
	}
}

bool func_36(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_270)
	{
		if (!func_205(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_206(uParam0, 0))
			{
				if (func_207(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_208(uParam0, 1, &iVar0))
					{
					}
					if (func_209(uParam0, 3, &cVar2))
					{
					}
					if (func_208(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_208(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_208(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_208(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_208(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_210(uParam0, &cVar2, uParam0->f_273))
							{
								*(*uParam0)[uParam0->f_273] = { cVar2 };
								func_211((*uParam0)[uParam0->f_273], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*uParam0->f_33[uParam0->f_274] = { cVar2 };
							func_211(uParam0->f_33[uParam0->f_274], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*uParam0->f_66[uParam0->f_275] = { cVar2 };
							func_211(uParam0->f_66[uParam0->f_275], 1048576);
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
						if (!func_210(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*uParam0->f_227[uParam0->f_276] = { cVar2 };
							func_211(uParam0->f_227[uParam0->f_276], 1048576);
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
			if (func_206(uParam0, 12))
			{
				if (func_208(uParam0, 13, &iVar0))
				{
				}
				if (func_208(uParam0, 14, &iVar1))
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
		func_212(uParam0);
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
	bVar0 = false;
	bVar1 = false;
	iVar2 = func_75(uParam0->f_2);
	if (does_entity_exist(iVar2))
	{
		if (has_entity_been_damaged_by_entity(iVar2, Global_35, 1, 1) || _has_entity_been_damaged_by_weapon(iVar2, -1504859554, 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_ATTK", 24);
			Local_134.f_130 = 2000;
			bVar0 = true;
		}
	}
	if (func_198(Local_134.f_128, 2097152))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_ABAND", 24);
		Local_134.f_130 = 3500;
		bVar0 = true;
	}
	if (func_198(Local_134.f_128, 1073741824))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_EGGDS", 24);
		Local_134.f_130 = 1500;
		bVar0 = true;
	}
	if (does_entity_exist(Local_134.f_143))
	{
		if (_has_entity_been_damaged_by_weapon(Local_134.f_143, -1504859554, 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
			bVar1 = true;
		}
	}
	if (func_198(Local_134.f_128, 4194304))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
		bVar1 = true;
	}
	if (bVar0)
	{
		if (!func_203(&(Local_134.f_137)))
		{
			func_213(&(Local_134.f_137));
		}
		else if (func_214(&(Local_134.f_137)) > Local_134.f_130)
		{
			uParam0->f_14 = 2;
			trigger_music_event("BOB_HUNT06_FAIL");
			return true;
		}
	}
	if (bVar1)
	{
		uParam0->f_14 = 2;
		trigger_music_event("BOB_HUNT06_FAIL");
		return true;
	}
	if (Local_134.f_13 == 2)
	{
		if (Local_134.f_4 < 4)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else if (Local_134.f_4 < 6)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWSH", 24);
		}
		uParam0->f_14 = 2;
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
	if (!func_29(func_75(uParam0->f_2), 0))
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
	if (!func_29(func_75(uParam0->f_2), 0))
	{
		return;
	}
	if (!func_203(&(uParam0->f_48)))
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
						func_213(&(uParam0->f_48));
					}
					else if (func_218(&(uParam0->f_48)) > 5f)
					{
						func_219(&(uParam0->f_10), 1, 1);
						func_220(uParam0, "departLine", 0, 0, 0, -1);
						func_213(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!func_217(&(uParam0->f_10), 1))
			{
				if (func_218(&(uParam0->f_48)) > 4f)
				{
					func_219(&(uParam0->f_10), 1, 1);
					func_220(uParam0, "departLine", 0, 0, 0, -1);
					func_213(&(uParam0->f_48));
				}
				return;
			}
			if (!func_217(&(uParam0->f_10), 2))
			{
				if (func_222(Global_35, func_221(), 1) > 150f)
				{
					func_219(&(uParam0->f_10), 2, 1);
					func_220(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

int func_45(var uParam0)
{
	func_223(uParam0, &Local_134);
	func_224(&Local_134);
	func_225(&Local_134);
	func_226(&Local_134);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	switch (Local_134)
	{
		case 0:
			if (func_227(uParam0, &Local_134))
			{
				func_228(&Local_134, 1);
			}
			break;
		case 1:
			if (func_229(uParam0, &Local_134))
			{
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
				func_228(&Local_134, 2);
			}
			break;
		case 2:
			break;
	}
	return 1;
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_230(uParam0))
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
		if (func_232(&(uParam0->f_3), func_231(iVar0)))
		{
			if (func_233(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_234(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!func_65(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_235(iVar0, 0);
					stop_ped_speaking(func_75(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_234(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_236(uParam0))
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_4))
	{
		func_237(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = func_238(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return false;
		}
	}
	func_239(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_240(uParam0))
		{
			return false;
		}
	}
	sVar17 = func_106(uParam0->f_1);
	if (!is_string_null_or_empty(sVar17))
	{
		_0x1096603b519c905f(sVar17);
	}
	if (func_241())
	{
		func_242(1);
	}
	func_243(64);
	func_32(1);
	func_91(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_244(Global_36, get_entity_heading(Global_35));
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
	else if (func_245(uParam0))
	{
		if (func_246(uParam0))
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

bool func_54(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_55(var uParam0, var uParam1, int iParam2)
{
	if (func_54(uParam1, 1))
	{
		return false;
	}
	switch (func_247(uParam1))
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
		func_211(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_211(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_211(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_211(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_211(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_211(sParam0, 1);
		return true;
	}
	func_211(sParam0, 1);
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
		if (!func_248(iParam0))
		{
			return;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_203(uParam0))
	{
		func_213(uParam0);
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_75(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_75(iParam0), 204, false);
	}
}

void func_62(var uParam0)
{
	if (func_201(*uParam0))
	{
		func_202(uParam0, 1, 1);
	}
}

Vector3 func_63(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_64(bool bParam0, vector3 vParam1)
{
	if (bParam0)
	{
		func_250(16);
	}
	else
	{
		func_251(16);
	}
	Global_1900383->f_378.f_12 = { vParam1 };
}

bool func_65(int iParam0, bool bParam1)
{
	iVar0 = func_75(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_50(), 1);
}

void func_66(int iParam0)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_65(iParam0, 0))
	{
	}
	func_252(iParam0);
	Global_1359489->f_15 = func_253(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_254();
	func_255(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_256();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_74(iParam0))
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
	func_257(iParam0, 0);
	func_73(iParam0, 4, 0);
	func_9(iParam0);
	func_258(iParam0);
	func_255(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0], 0);
	iVar1 = func_259(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_260(iParam0, 64, 1))
	{
		func_255(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_255(iParam0, 33, 1);
		func_255(iParam0, 34, 1);
		func_261(iParam0, 1056964608, -1, 1061158912);
		func_262(iParam0, 1, 1, 0);
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
		func_255(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_59(iParam0, 33, 1);
		func_262(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_60(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_204(&((*Global_1360165)[iParam0]->f_130));
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
			func_263(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_260(iParam0, 45, 1))
	{
		func_255(iParam0, 45, 1);
	}
	func_264(iParam0, 16, 1);
	func_255(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_265(iParam0), 0))
		{
			func_266(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_68(int iParam0)
{
	Global_36580 = iParam0;
}

void func_69(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_70(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_182(0, func_267(iParam1, 1), 11, 2116153146);
	}
	return func_182(0, func_267(iParam1, 1), 11, iParam1);
}

int func_72(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_268(iParam0);
}

void func_73(int iParam0, int iParam1, bool bParam2)
{
	if (!func_248(iParam0))
	{
		return;
	}
	func_269(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_74(int iParam0)
{
	return func_270(iParam0, 16, 1);
}

int func_75(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_76(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_81(iParam0);
}

bool func_77(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_78(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_79(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_80(int iParam0)
{
	if (!func_77(iParam0))
	{
		return 0;
	}
	return func_272(func_271(iParam0));
}

int func_81(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_273(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_115() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_83(int iParam0)
{
	return func_275(func_274(iParam0));
}

void func_84(int iParam0, int iParam1)
{
	if (!func_77(iParam0))
	{
		return;
	}
	func_276(iParam0, iParam1);
}

void func_85(bool bParam0)
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

void func_86(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_277(iParam0, iParam1, bParam2);
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

void func_87(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_89()
{
	return Global_1572864->f_12;
}

void func_90(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_92(bool bParam0)
{
	if (func_278(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_279();
	Var1.f_3.f_3 = iVar0;
	if ((!func_280(Global_1347343->f_2) && !func_88(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_281();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_88(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_282();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_88(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_283();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_284(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_285(&Var1, "REPLAY_T_DEAD", 0, 1);
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

bool func_93(int iParam0)
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
		iVar0 = func_81(iParam0);
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

bool func_94(int iParam0, bool bParam1, bool bParam2)
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
		if (func_286())
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
		iVar0 = func_120(&(Global_1898164->f_1[0]));
		if (func_135(iVar0) && func_121((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_77(&(Global_1898164->f_1[0])))
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

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_96(int iParam0)
{
	switch (func_80(iParam0))
	{
		case 1:
			iVar0 = func_120(iParam0);
			return func_287(iVar0);
		case 8:
			iVar1 = func_120(iParam0);
			if (func_121((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_288(iVar1);
			}
			break;
	}
	return -1;
}

void func_97(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_115() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_289(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_290();
		Global_1898077->f_9 = func_291(Global_1894899->f_2);
		func_292(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_98()
{
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_146((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_146((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_146((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_146((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_146((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_146((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_99(int iParam0, bool bParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (func_78(0) != iParam0)
	{
		return;
	}
	if (func_293(iParam0))
	{
		if (bParam1)
		{
			func_294(-525676072);
		}
		else
		{
			func_295(-525676072);
		}
	}
}

void func_100(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_101(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_102(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_104(1);
	}
}

void func_103(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_104(0);
	}
}

void func_104(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

bool func_105(int iParam0)
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

char* func_106(int iParam0)
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

char* func_107(int iParam0)
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

char* func_108(int iParam0, bool bParam1)
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
			if ((func_146((*Global_1835011)[59]->f_1, 1) || func_146((*Global_1347702)[1]->f_15, 1)) || func_13((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_296(403634348, 1))
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

int func_109(int iParam0)
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

int func_110(int iParam0)
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

int func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113()
{
	return &Global_1899515;
}

void func_114(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_115()
{
	return Global_1572887->f_12;
}

int func_116(bool bParam0, int iParam1)
{
	if (!bParam0 && func_200(373691918))
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

void func_117()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_58(iVar17))
		{
			iVar18 = func_75(iVar17);
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
	func_204(&(Global_1359489->f_55));
	if (func_296(1777191912, 1))
	{
		func_297(1777191912, 1, 0);
	}
}

void func_118(int iParam0)
{
	if (!func_77(iParam0))
	{
		return;
	}
	func_299(iParam0, (func_298(iParam0) + shift_left(1, 16)));
}

struct<2> func_119(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_120(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_300(func_271(iParam0));
}

bool func_121(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_122()
{
	return func_301() > 0;
}

void func_123(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_302(-1032423150, iParam1);
			break;
		case 18:
			func_302(294066959, iParam1);
			func_302(-1925639563, iParam1);
			func_302(-378582304, iParam1);
			func_302(-338306437, iParam1);
			break;
		case 20:
			func_302(437270255, iParam1);
			break;
		case 2:
			func_302(-304000413, iParam1);
			func_302(-533612796, iParam1);
			func_302(48036954, iParam1);
			break;
		case 23:
			func_302(193108691, iParam1);
			func_302(491732588, iParam1);
			func_302(671962088, iParam1);
			func_303(1);
			break;
		case 16:
			func_302(-1836056650, iParam1);
			func_302(-754657922, iParam1);
			func_302(-1752355838, iParam1);
			func_302(-1375324510, iParam1);
			break;
		case 59:
			func_302(-514392105, iParam1);
			func_302(-822060246, iParam1);
			if (func_304(146))
			{
				func_302(1372748575, iParam1);
			}
			func_303(1);
			break;
		case 76:
			func_302(1991352213, iParam1);
			if (func_305() == 0)
			{
				func_302(1852488616, iParam1);
			}
			else
			{
				func_302(-9866350, iParam1);
			}
			break;
		case 44:
			func_302(863852599, iParam1);
			func_302(1228374935, iParam1);
			func_302(1517889050, iParam1);
			func_302(830657578, iParam1);
			func_302(1901354958, iParam1);
			break;
		case 46:
			func_302(-582805654, iParam1);
			func_302(250378940, iParam1);
			func_302(-2143265426, iParam1);
			break;
		case 17:
			func_302(-941494139, iParam1);
			func_302(1641489521, iParam1);
			break;
		case 19:
			func_302(-1829423531, iParam1);
			func_302(-1590504752, iParam1);
			func_302(1357221321, iParam1);
			break;
		case 21:
			func_302(-1037992610, iParam1);
			func_302(-1286414399, iParam1);
			func_303(0);
			break;
		case 15:
			func_302(-1014460309, iParam1);
			func_302(-1030502825, iParam1);
			break;
		case 33:
			func_302(479388090, iParam1);
			func_302(-1396342239, iParam1);
			func_302(-619618632, iParam1);
			break;
		case 34:
			func_302(1193561641, iParam1);
			break;
		case 64:
			func_302(1363960851, iParam1);
			break;
		case 60:
			func_302(-1232453926, iParam1);
			func_302(-882833584, iParam1);
			break;
		case 73:
			func_302(2023205767, iParam1);
			break;
		case 74:
			func_302(-2135286513, iParam1);
			if (func_305() == 0)
			{
				func_302(33799444, iParam1);
			}
			else
			{
				func_302(-161343203, iParam1);
			}
			break;
		case 8:
			func_302(841639693, iParam1);
			func_302(358952323, iParam1);
			break;
		case 36:
			func_302(852538149, iParam1);
			func_302(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_302(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(1116039310, iParam1);
			}
			break;
		case 27:
			func_302(107633428, iParam1);
			func_302(335902282, iParam1);
			func_302(575673055, iParam1);
			func_302(-425944207, iParam1);
			break;
		case 28:
			func_302(-1941530250, iParam1);
			func_302(1399269304, iParam1);
			func_302(1839684664, iParam1);
			func_302(923168503, iParam1);
			func_302(-1485078322, iParam1);
			break;
		case 29:
			func_302(574995900, iParam1);
			func_302(-1691275407, iParam1);
			func_302(-1725307861, iParam1);
			break;
		case 31:
			func_302(-2108383238, iParam1);
			func_302(-1321828931, iParam1);
			func_302(-1632118592, iParam1);
			func_302(334938948, iParam1);
			break;
		case 4:
			func_302(115823701, iParam1);
			func_302(-1896939736, iParam1);
			func_302(-1830746356, iParam1);
			func_302(-1235169781, iParam1);
			func_303(0);
			break;
		case 6:
			func_302(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-384176140, iParam1);
			}
			break;
		case 25:
			func_302(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_302(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-1374849484, iParam1);
			}
			break;
		case 48:
			func_302(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(217772674, iParam1);
			}
			else
			{
				func_302(2071798160, iParam1);
			}
			if (func_306(51))
			{
				func_302(-792802286, iParam1);
			}
			break;
		case 49:
			func_302(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_302(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_302(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_302(1402120602, iParam1);
			}
			break;
		case 58:
			func_302(-1661934591, iParam1);
			break;
		case 50:
			func_302(-1713759426, iParam1);
			break;
		case 52:
			func_302(-314799932, iParam1);
			func_302(-462260432, iParam1);
			func_302(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_302(345256028, iParam1);
				func_302(-1635084094, iParam1);
			}
			else
			{
				func_302(114267347, iParam1);
			}
			break;
		case 32:
			func_302(615304157, iParam1);
			break;
		case 47:
			func_302(415434835, iParam1);
			break;
		case 69:
			func_302(1373465877, iParam1);
			if (func_146((*Global_1347702)[9]->f_15, 1))
			{
				func_302(-2058273527, iParam1);
			}
			break;
		case 70:
			func_302(451334985, iParam1);
			if (func_305() == 0)
			{
				func_302(-224150200, iParam1);
			}
			else
			{
				func_302(289012628, iParam1);
			}
			break;
		case 71:
			if (func_305() == 0)
			{
				func_302(-41692120, iParam1);
			}
			else
			{
				func_302(1537840678, iParam1);
			}
			break;
		case 37:
			func_302(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_302(1842132550, iParam1);
			}
			else
			{
				func_302(-785735240, iParam1);
			}
			func_302(-1605690566, iParam1);
			break;
		case 13:
			func_302(-731367459, iParam1);
			func_302(224176585, iParam1);
			func_302(-14545580, iParam1);
			break;
		case 53:
			func_302(1095274522, iParam1);
			break;
		case 54:
			func_302(-572027988, iParam1);
			break;
		case 56:
			func_302(1339307101, iParam1);
			func_302(2102267732, iParam1);
			break;
		case 57:
			func_302(710102686, iParam1);
			break;
		case 22:
			func_302(-1754368482, iParam1);
			func_302(-2071408557, iParam1);
			break;
		case 12:
			func_302(-181334543, iParam1);
			break;
		case 0:
			func_302(-2134669864, iParam1);
			func_302(-548289709, iParam1);
			func_302(-911271922, iParam1);
			func_302(-604455775, iParam1);
			break;
		case 1:
			func_303(1);
			break;
		case 3:
			if (func_157())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_302(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_302(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_124()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_125(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_302(-145926707, iParam1);
			func_302(-604922090, iParam1);
			func_302(-848690769, iParam1);
			break;
		case 1:
			func_302(-1477631591, iParam1);
			break;
		case 2:
			func_302(76112544, iParam1);
			break;
		case 9:
			func_302(1396404308, iParam1);
			func_302(-1357381228, iParam1);
			if (func_146((*Global_1835011)[69]->f_1, 1))
			{
				func_302(1902679064, iParam1);
			}
			else
			{
				func_302(-2146422425, iParam1);
			}
			break;
		case 22:
			func_302(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_302(-1934184559, iParam1);
				func_302(1281755988, iParam1);
			}
			else
			{
				func_302(-1745220872, iParam1);
				func_302(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_302(-1641504538, iParam1);
				func_302(-988014485, iParam1);
			}
			else if (func_304(26))
			{
				func_302(-343043950, iParam1);
				func_302(-640062214, iParam1);
			}
			else
			{
				func_302(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_302(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_302(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_302(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_302(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_302(1301690984, iParam1);
				}
			}
			else
			{
				func_302(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_302(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_302(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_302(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_302(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_302(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_302(-754570528, iParam1);
			}
			else
			{
				func_302(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_302(-2072125821, iParam1);
			}
			else
			{
				func_302(270040030, iParam1);
			}
			break;
		case 37:
			func_302(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_302(-505314737, iParam1);
				func_302(-1853052860, iParam1);
			}
			else
			{
				func_302(-1975624994, iParam1);
				func_302(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_302(1690231002, iParam1);
			}
			else
			{
				func_302(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_302(1225386280, iParam1);
			}
			else if (func_304(54))
			{
				func_302(-283235773, iParam1);
			}
			else
			{
				func_302(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_302(1355398007, iParam1);
			}
			else
			{
				func_302(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_302(574636806, iParam1);
			}
			else
			{
				func_302(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_302(821118338, iParam1);
			}
			else if (func_304(39))
			{
				func_302(846829260, iParam1);
			}
			else
			{
				func_302(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_180((*Global_1835011)[33]->f_1) == 1)
				{
					func_302(1422779093, iParam1);
				}
				else
				{
					func_302(-1769536986, iParam1);
				}
			}
			else
			{
				func_302(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_302(352134789, iParam1);
			}
			else if (func_304(43))
			{
				func_302(260723113, iParam1);
			}
			else
			{
				func_302(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_302(-457958799, iParam1);
			}
			else
			{
				func_302(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_304(41))
			{
				func_302(-546824600, iParam1);
			}
			else
			{
				func_302(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_302(1297261593, iParam1);
			}
			else
			{
				func_302(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_302(2068484886, iParam1);
			}
			else if (func_304(49))
			{
				func_302(-1489080639, iParam1);
				func_302(-2102244050, iParam1);
			}
			else
			{
				func_302(-1863040467, iParam1);
			}
			break;
		case 51:
			func_302(-2055943209, iParam1);
			break;
		case 58:
			if (func_146((*Global_1347702)[23]->f_15, 1))
			{
				func_302(1650066845, iParam1);
			}
			else
			{
				func_302(151370023, iParam1);
			}
			func_302(1426057961, iParam1);
			func_302(476379584, iParam1);
			break;
		case 59:
			func_302(-1638117866, iParam1);
			break;
		case 62:
			func_302(199541730, iParam1);
			break;
		case 63:
			func_302(1703485804, iParam1);
			func_302(-800449045, iParam1);
			break;
		case 65:
			func_302(-1678210868, iParam1);
			func_302(-1448238026, iParam1);
			func_302(-1200864845, iParam1);
			func_302(1473511536, iParam1);
			break;
		case 66:
			func_302(-1774490051, iParam1);
			func_302(-34645921, iParam1);
			func_302(174027075, iParam1);
			func_302(-1155999, iParam1);
			func_303(1);
			break;
		case 67:
			func_302(701612593, iParam1);
			func_302(-1069631343, iParam1);
			func_302(1673428882, iParam1);
			break;
		case 68:
			func_302(-739133286, iParam1);
			func_302(-2130089358, iParam1);
			func_302(2056190391, iParam1);
			func_302(1941753817, iParam1);
			func_303(0);
			break;
		case 70:
			func_302(-1217555753, iParam1);
			break;
		case 71:
			func_302(697048821, iParam1);
			break;
		case 73:
			func_302(-553148661, iParam1);
			break;
		case 75:
			func_302(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_302(1414263863, iParam1);
			}
			else
			{
				func_302(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_302(1835465936, iParam1);
				func_302(523715611, iParam1);
			}
			else if (func_304(78))
			{
				func_302(1420338873, iParam1);
			}
			else
			{
				func_302(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_302(10180941, iParam1);
			}
			else if (func_304(79))
			{
				func_302(768420635, iParam1);
			}
			else
			{
				func_302(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_302(-383601523, iParam1);
			}
			else
			{
				func_302(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_302(1606472408, iParam1);
			}
			else
			{
				func_302(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_302(-203571927, iParam1);
			}
			else
			{
				func_302(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_302(729886222, iParam1);
			}
			else
			{
				func_302(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_302(-714816362, iParam1);
			}
			else
			{
				func_302(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_302(-932932179, iParam1);
				func_302(-1458537240, iParam1);
			}
			else
			{
				func_302(-1764383885, iParam1);
				func_302(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_302(1741466706, iParam1);
			}
			else
			{
				func_302(1405815775, iParam1);
			}
			break;
		case 94:
			func_302(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_302(1905280979, iParam1);
			}
			else
			{
				func_302(-1966245299, iParam1);
			}
			func_302(721468880, iParam1);
			break;
		case 99:
			func_302(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_302(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_302(-1117781095, iParam1);
				}
				else
				{
					func_302(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_302(141494548, iParam1);
			}
			else
			{
				func_302(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_302(-369525697, iParam1);
			}
			else if (func_304(101))
			{
				func_302(1595015219, iParam1);
			}
			else
			{
				func_302(-321486961, iParam1);
			}
			break;
		case 103:
			func_302(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_302(793460477, iParam1);
				func_302(-1610242176, iParam1);
			}
			else if (func_304(103))
			{
				func_302(1830897187, iParam1);
			}
			else
			{
				func_302(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_302(1528309077, iParam1);
			}
			else if (func_304(104))
			{
				func_302(1864966105, iParam1);
			}
			else
			{
				func_302(-103336013, iParam1);
			}
			break;
		case 108:
			func_302(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_302(-1123227713, iParam1);
				func_302(-889574341, iParam1);
			}
			else
			{
				func_302(2065385917, iParam1);
				func_302(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_302(-887421691, iParam1);
			}
			else if (func_304(109))
			{
				func_302(-1318117949, iParam1);
			}
			else
			{
				func_302(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_302(284822762, iParam1);
				}
				else
				{
					func_302(-1425017554, iParam1);
				}
			}
			else if (func_304(110))
			{
				if (&Global_1357515 == 0)
				{
					func_302(553087292, iParam1);
				}
				else
				{
					func_302(-1766870331, iParam1);
					func_302(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_302(-1980598735, iParam1);
			}
			else
			{
				func_302(-442732098, iParam1);
				func_302(1955756409, iParam1);
			}
			break;
		case 115:
			func_302(394303528, iParam1);
			func_302(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_302(1182403394, iParam1);
			}
			else
			{
				func_302(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_302(924445424, iParam1);
			}
			else
			{
				func_302(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_302(430755273, iParam1);
				func_302(-1473879802, iParam1);
			}
			else
			{
				func_302(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_302(73885747, iParam1);
			}
			else if (func_304(117))
			{
				func_302(1559707913, iParam1);
			}
			else
			{
				func_302(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_302(-2103887972, iParam1);
			}
			else if (func_304(118))
			{
				func_302(-435828462, iParam1);
			}
			else
			{
				func_302(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_302(2054486196, iParam1);
			}
			else
			{
				func_302(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_302(-570086056, iParam1);
			}
			else if (func_304(121))
			{
				func_302(32337856, iParam1);
			}
			else
			{
				func_302(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_302(813493663, iParam1);
			}
			else if (func_304(122))
			{
				func_302(-2132763590, iParam1);
			}
			else
			{
				func_302(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_302(-66240572, iParam1);
				func_302(1563075046, iParam1);
			}
			else
			{
				func_302(-787011772, iParam1);
				func_302(-1523377438, iParam1);
			}
			break;
		case 127:
			func_302(61020800, iParam1);
			break;
		case 129:
			func_302(428985222, iParam1);
			break;
		case 131:
			func_302(-1393851036, iParam1);
			break;
		case 133:
			func_302(1559531342, iParam1);
			break;
		case 134:
			func_302(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_302(-1374407408, iParam1);
				}
				else
				{
					func_302(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_302(-472672138, iParam1);
				}
				else
				{
					func_302(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_302(-1678710489, iParam1);
			}
			else
			{
				func_302(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_302(1717582460, iParam1);
			}
			else
			{
				func_302(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_302(1568112362, iParam1);
				func_302(1388317526, iParam1);
			}
			else if (func_304(136))
			{
				func_302(-1597534828, iParam1);
				func_302(-1207918353, iParam1);
			}
			else
			{
				func_302(-1940891082, iParam1);
				func_302(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_302(448334530, iParam1);
				func_302(2145375502, iParam1);
			}
			else
			{
				func_302(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_302(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_302(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_302(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_302(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_302(-66616327, iParam1);
			}
			else
			{
				func_302(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_302(1862916706, iParam1);
			}
			else if (func_304(147))
			{
				func_302(675105199, iParam1);
			}
			else
			{
				func_302(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_302(174409701, iParam1);
			}
			else if (func_304(148))
			{
				func_302(-1730895475, iParam1);
			}
			else
			{
				func_302(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_302(1295237052, iParam1);
			}
			else if (func_304(149))
			{
				func_302(-788577684, iParam1);
			}
			else
			{
				func_302(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_80(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_307(iParam0);
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
					if (func_180((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_120(iParam0);
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
			iVar3 = func_120(iParam0);
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

int func_127(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_308(iParam0);
	iVar3 = func_309(iParam0);
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
				iVar1 = func_113();
				func_153(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_310(iParam0, 1);
			if (func_311(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_312(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_313(1, iParam0);
				}
				else
				{
					func_314(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
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

int func_129(int iParam0, int iParam1, int iParam2)
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

int func_130(int iParam0, int iParam1)
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

bool func_131(int iParam0)
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

void func_132(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_115() != -1)
	{
		return;
	}
	if ((Global_36616 && func_315(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_316(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_317(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_318(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_317(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_133(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_319(func_271(iParam0));
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_136()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_320())
	{
		return false;
	}
	if (!func_146((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_146((*Global_1835011)[2]->f_1, 1) && func_146((*Global_1347702)[120]->f_15, 1)) && !func_146((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_146((*Global_1835011)[37]->f_1, 1) && !func_146((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_146((*Global_1835011)[57]->f_1, 1) && !func_146((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_146((*Global_1835011)[26]->f_1, 1) && !func_146((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_146((*Global_1835011)[62]->f_1, 1) && func_146((*Global_1835011)[63]->f_1, 1)) && !func_146((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_146((*Global_1835011)[75]->f_1, 1) && !func_146((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_146((*Global_1835011)[76]->f_1, 1) && !func_146((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_146((*Global_1835011)[40]->f_1, 1) && func_146((*Global_1835011)[41]->f_1, 1)) && !func_146((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_146((*Global_1835011)[62]->f_1, 1) && func_146((*Global_1835011)[63]->f_1, 1)) && !func_146((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_146((*Global_1835011)[65]->f_1, 1) && func_146((*Global_1835011)[66]->f_1, 1)) && !func_146((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_137()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_321(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_138(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (!func_323(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_324(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_325(iParam0, bParam2);
	iVar2 = 0;
	if (func_326(iParam0, 0, 0) == 0)
	{
		if (func_327(iParam0))
		{
			iVar5 = func_328(iParam0);
			iVar6 = func_329(iVar5);
			iVar7 = func_330(iVar6) + 1;
			func_331(iVar5);
			if (func_332(38))
			{
				func_144(483, 0);
			}
			else
			{
				func_144(482, 0);
			}
			if (iVar7 == func_333(iVar6))
			{
				func_138(func_334(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_320() && func_335(4))
				{
					if (func_320() && (func_336(38) || func_332(38)))
					{
						func_338(38, func_334(iVar6), 0, 0, func_337(), 0, -1, 0);
						func_339(2);
					}
					else
					{
						func_338(38, func_334(iVar6), 0, 0, func_337(), 0, -1, 0);
						func_339(1);
					}
				}
			}
			else if (func_320() && func_335(4))
			{
				if (func_320() && (func_336(38) || func_332(38)))
				{
					func_338(38, 0, 0, 0, func_337(), 0, -1, 0);
					func_339(2);
				}
				else
				{
					func_338(38, 0, 0, 0, func_337(), 0, -1, 0);
					func_339(1);
				}
			}
			if (func_320() && func_335(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_320() && (func_336(38) || func_332(38)))
					{
						func_340(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_340(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_341(iParam0) == -1037537535)
	{
		if ((!func_342(iParam0, 866047851) && !func_342(iParam0, -1979000645)) && !func_342(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_343(iParam0, 8388608) && !func_344(28))
	{
		func_345(28);
	}
	if (!bVar3)
	{
		if (func_342(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_346(iParam0) == -1447088266)
			{
				iVar1 = func_348(func_347(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_115() == -1)
					{
						func_349(iVar1);
					}
					if (func_350(0) && func_351(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_352(iParam0, iVar0, iParam5);
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
					if (func_115() == -1)
					{
						func_349(iParam0);
					}
					if (func_350(0) && func_351(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_352(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_341(iParam0) == -427144552)
		{
			if (!func_353(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_341(iParam0) == 307971639 && func_354(iParam0))
		{
			if (!func_355(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_342(iParam0, 866047851))
		{
			func_356(iParam0);
		}
		else if (func_342(iParam0, 2000026003))
		{
			func_357(iParam0);
		}
		else if (func_342(iParam0, -103750053))
		{
			func_359(func_358(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_359(func_360(-717883113, 2091222383), iVar0);
		}
		else if (func_342(iParam0, -121341956) && !func_342(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_146((*Global_1835011)[4]->f_1, 1))
				{
					func_144(498, 0);
				}
			}
			if (func_342(iParam0, -2017733358) || func_342(iParam0, -1369131378))
			{
				func_361(iParam0);
			}
		}
		else if (func_342(iParam0, -136654233))
		{
			if (func_342(iParam0, -1021472396))
			{
			}
		}
		else if (func_342(iParam0, -1466706512) && func_342(iParam0, 1147021565))
		{
			func_144(484, 0);
		}
		else if (func_342(iParam0, 1147021565) && func_342(iParam0, -524514947))
		{
		}
		else if (func_342(iParam0, 554195525))
		{
		}
		else if (func_342(iParam0, 589988438))
		{
			if (func_362())
			{
				func_363(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_342(iParam0, 787083290) && func_342(iParam0, 949916894))
		{
			func_364(iParam0);
		}
		else if (func_342(iParam0, -1718133314))
		{
			func_365(iParam0);
		}
		else if (func_342(iParam0, -1738650224))
		{
			func_366(iParam0);
		}
		else if (func_342(iParam0, -1112814642) && func_342(iParam0, 949916894))
		{
			func_367(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_342(iParam0, 1841149704))
		{
			func_368();
		}
		else if (func_342(iParam0, 606799272))
		{
			func_369(iParam0, iParam1);
			func_370(iParam0);
		}
		else if (func_342(iParam0, -1112814642) && func_342(iParam0, -1697809989))
		{
			func_371(iParam0, 0, 0, 0);
		}
		else if (func_342(iParam0, -2017733358) || func_342(iParam0, -1369131378))
		{
			func_361(iParam0);
		}
		else if (func_342(iParam0, -1921346699))
		{
			if (func_115() != -1)
			{
				return false;
			}
			func_372(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_342(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_166(215778062, 1, 0))
					{
						func_138(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_166(670273567, 1, 0))
					{
						func_138(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_166(-967317137, 1, 0))
					{
						func_138(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_166(526074061, 1, 0))
					{
						func_138(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_166(-1045488665, 1, 0))
					{
						func_138(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_166(471514780, 1, 0))
					{
						func_138(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_342(iParam0, -839724752) && func_343(iParam0, 4))
		{
			if (!func_332(42))
			{
				func_373(iParam0);
			}
		}
		else if (func_342(iParam0, 1399091007))
		{
			func_374(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_342(iParam0, 1248798204))
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
				func_138(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_345(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_375(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_376(&iVar9, 0))
				{
					func_351(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_115() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_375(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_144(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_377();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_378();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_379();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_380();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_381();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_382(499813453, 854119837, 0);
				func_383(499813453, 0);
				func_384(1);
				break;
			case 2127812557:
				func_382(499813453, -1292544588, 0);
				func_383(499813453, 0);
				func_384(2);
				break;
			case 808991383:
				func_382(499813453, -1003325394, 0);
				func_383(499813453, 0);
				func_384(4);
				break;
			case 1134518629:
				func_382(666607663, -335460405, 0);
				func_383(666607663, 0);
				func_385(1);
				break;
			case 902940106:
				func_382(666607663, 903797617, 0);
				func_383(666607663, 0);
				func_385(2);
				break;
			case -418174898:
				func_382(666607663, 669728650, 0);
				func_383(666607663, 0);
				func_385(4);
				break;
			case -648114971:
				func_382(-220219788, 1214120047, 0);
				func_383(-220219788, 0);
				func_386(1);
				break;
			case 211153747:
				func_382(-220219788, 655769340, 0);
				func_383(-220219788, 0);
				func_386(2);
				break;
			case -32876996:
				func_382(-220219788, 885316185, 0);
				func_383(-220219788, 0);
				func_386(4);
				break;
			case 1191437462:
				func_382(218622660, -1491419385, 0);
				func_383(218622660, 0);
				func_387(1);
				break;
			case 1119149048:
				func_382(218622660, 1809565830, 0);
				func_383(218622660, 0);
				func_387(2);
				break;
			case 506073827:
				func_382(390004462, -628873767, 0);
				func_383(390004462, 0);
				func_388(1);
				break;
			case -1876986168:
				func_382(390004462, -405421956, 0);
				func_383(390004462, 0);
				func_388(2);
				break;
			case 2142623221:
				func_382(390004462, -1108972386, 0);
				func_383(390004462, 0);
				func_388(4);
				break;
			case 1508215381:
				func_382(6410548, 1053716392, 0);
				func_383(6410548, 0);
				func_389(1);
				break;
			case -888935280:
				func_382(6410548, 806507056, 0);
				func_383(6410548, 0);
				func_389(2);
				break;
			case -1252474566:
				func_382(6410548, 1571925350, 0);
				func_383(6410548, 0);
				func_389(4);
				break;
			case -1465702449:
				func_382(6410548, 1330352282, 0);
				func_383(6410548, 0);
				func_389(8);
				break;
			case -21093309:
				func_391(242, func_390(-21093309), 0);
				break;
			case 204375141:
				func_391(240, func_390(204375141), 0);
				break;
			case -417963070:
				func_391(241, func_390(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(594, 1934060482, 1, 1);
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
					func_392(594, 1110018439, 1, 1);
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
					func_392(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(594, -1228016946, 1, 1);
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
					func_392(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_392(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_144(488, 0);
				break;
			case 1613651027:
				func_144(491, 0);
				break;
			case -885810591:
				func_144(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_138(func_393(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_138(func_394(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_344(1))
				{
					func_144(487, 0);
				}
				break;
			case -898386032:
				func_144(486, 0);
				break;
			case -2035110427:
				if (func_115() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_144(496, 0);
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
		func_395(&iVar10);
		if (!func_396(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_350(0))
		{
			return true;
		}
		if (func_341(iParam0) == -1037537535)
		{
			func_397(iParam0);
		}
		if (func_342(iParam0, -1979000645))
		{
			func_398(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_350(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_138(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_399(iVar2, 0);
		}
	}
	Var35 = { func_400(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_401(iParam0);
	if (fParam6 > 0f)
	{
		if (func_342(iParam0, -839724752))
		{
			func_402(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_403(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_139(int iParam0)
{
	if (func_342(iParam0, 1989861793))
	{
		iVar0 = func_404(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_405(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_406(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_407(iVar14, iVar1);
					if (iVar15 != iParam0 && func_322(iVar15, 0))
					{
						if (func_408(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_409(iVar1);
				if (bVar13)
				{
					func_410(iParam0);
				}
				else
				{
					func_144(306, 0);
				}
			}
		}
	}
}

void func_140()
{
	if (func_115() != -1)
	{
		return;
	}
	func_411();
	func_412();
	func_413();
	func_414();
	func_415();
	func_416();
	func_417();
}

void func_141(int iParam0)
{
	func_418(iParam0, 1, 1, -142743235, 1);
	if (func_419(iParam0))
	{
		func_420(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_422(func_421(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_423(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_424() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_425(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_425(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_426(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_426(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_426(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_426(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_426(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_426(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_426(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_426(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_426(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_427(iVar8, iVar0))
				{
					func_428(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_427(iVar8, iVar0))
		{
			func_428(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_142()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_427(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_424() == -2125499975 || func_424() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_428(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_428(&vVar2, iVar5, iVar0);
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

void func_143()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_321(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

void func_144(int iParam0, bool bParam1)
{
	func_429(iParam0, &iVar0, &iVar1);
	if (!func_430(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_431(iVar0, iVar1);
}

void func_145(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_422(iParam0, 1);
	func_432(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_432(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_433(17, iParam0, 0, 0, 0);
		}
	}
	if (func_115() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_432(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_432(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_146(int iParam0, bool bParam1)
{
	switch (func_76(iParam0))
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

void func_147()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_321(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_148()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_321(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_434(iParam1, 1, 0) };
		iParam3 = func_435(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_436(iParam3);
	return func_375(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_150()
{
	return _unlock_is_unlocked(99890643);
}

void func_151(int iParam0)
{
	if (!func_437(iParam0))
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

bool func_152(int iParam0, int iParam1)
{
	if (!func_438(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_439(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_440(Global_40.f_9910[iParam1], 4);
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_441(*iParam0);
	iVar1 = func_442(*iParam0);
	iVar2 = func_443(*iParam0);
	iVar3 = func_444(*iParam0);
	iVar4 = func_445(*iParam0);
	iVar5 = func_446(*iParam0);
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
	iVar6 = func_447(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_447(iVar1, iVar0);
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
	func_448(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_154(int iParam0, int iParam1, bool bParam2)
{
	if (!func_438(iParam0))
	{
		return;
	}
	if (!func_449(iParam1))
	{
		return;
	}
	if (func_450(iParam1, 1))
	{
		return;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_152(iParam0, -1))
	{
		return;
	}
	else
	{
		func_451(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_94(0, 0, 1))
		{
			func_186(0, 17);
		}
	}
}

void func_155()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_321(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_156()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_321(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_157()
{
	return _unlock_is_unlocked(-121456797);
}

void func_158()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_321(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_159()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_321(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_160()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_321(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_161()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_321(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_162()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_321(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_163()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_321(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_164(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_165(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_166(int iParam0, int iParam1, bool bParam2)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_341(iParam0);
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
		if (!func_452(iParam0, 1))
		{
			return false;
		}
	}
	return func_326(iParam0, 0, bParam2) >= iParam1;
}

void func_167(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_453(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_453(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_168()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_321(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_169()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_321(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_170()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_321(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_171()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_321(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_172()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_321(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_173()
{
	if (func_454() > 1)
	{
		func_455();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_144(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_144(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_144(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_144(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_144(452, 1);
		}
	}
}

bool func_174(int iParam0)
{
	return func_270(iParam0, 4, 1);
}

void func_175(int iParam0)
{
	func_456(iParam0, 4, 1);
}

void func_176(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_119(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_177(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (!func_77(iParam0))
	{
		return;
	}
	func_91(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_80(iParam0))
	{
		case 1:
			func_359(func_360(909007663, -587839005), 1);
			iVar0 = func_120(iParam0);
			func_359(func_119(-634848880), 1);
			switch (func_287(iVar0))
			{
				case 0:
					func_359(func_360(909007663, 1325140787), 1);
					break;
				case 1:
					func_359(func_360(909007663, 2101241783), 1);
					break;
				case 2:
					func_359(func_360(909007663, -1296936294), 1);
					break;
				case 3:
					func_359(func_360(909007663, -798388728), 1);
					break;
				case 4:
					func_359(func_360(909007663, -1787586531), 1);
					break;
				case 5:
					func_359(func_360(909007663, -1002834519), 1);
					break;
				case 6:
					func_359(func_360(909007663, -50600144), 1);
					break;
				case 7:
					func_359(func_360(909007663, -348503123), 1);
					break;
				case 8:
					func_359(func_360(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_359(func_360(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_359(func_360(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_120(iParam0);
			if (func_121((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_359(func_119(-634848880), 1);
			}
			if (func_121((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_121((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_359(func_360(909007663, -587839005), 1);
				}
				else
				{
					func_359(func_360(909007663, -2049243343), 1);
				}
			}
			if (func_121((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_288(iVar1))
				{
					case 0:
						func_359(func_360(909007663, 1325140787), 1);
						break;
					case 1:
						func_359(func_360(909007663, 2101241783), 1);
						break;
					case 2:
						func_359(func_360(909007663, -1296936294), 1);
						break;
					case 3:
						func_359(func_360(909007663, -798388728), 1);
						break;
					case 4:
						func_359(func_360(909007663, -1787586531), 1);
						break;
					case 5:
						func_359(func_360(909007663, -1002834519), 1);
						break;
					case 6:
						func_359(func_360(909007663, -50600144), 1);
						break;
					case 7:
						func_359(func_360(909007663, -348503123), 1);
						break;
					case 8:
						func_359(func_360(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_359(func_360(909007663, 532323983), 1);
				}
			}
			else if (func_121((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_121((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_121((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_359(func_360(909007663, 551192206), 1);
				}
				else
				{
					func_359(func_360(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_178()
{
	if (func_115() != -1)
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
	if (!func_457(64))
	{
		return;
	}
	else if (func_95(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_94(0, 0, 1) || func_458()) || func_136())
	{
		return;
	}
	iVar0 = func_98();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_459(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_460(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_460(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_461(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_186(0, -1);
	}
	if (iVar2 > 0)
	{
		func_462("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_463(1, 0);
	Global_1956575->f_4 = 1;
}

void func_179(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_464(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_465(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_180(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -1;
	}
	return func_466(iParam0);
}

int func_181(int iParam0, int iParam1)
{
	if (!func_467(iParam0))
	{
		return 0;
	}
	if (!func_320())
	{
		return 0;
	}
	if (!func_468(iParam0, &iVar0, &iVar1))
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

int func_182(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_469())
	{
		iVar2 = func_469();
	}
	iVar5 = func_470(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_271(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_271(iVar6) == 0)
			{
				return func_471(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_271(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_271(iVar6) == 0)
			{
				return func_471(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_471(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(1330954593, 0, -1);
		case 1:
			return func_472(1330954593, 0, -1);
		case 2:
			return func_472(1330954593, 0, -1) * 2;
		case 4:
			return func_472(1330954593, 0, -1);
		case 5:
			return func_472(1330954593, 0, -1);
		case 6:
			return func_472(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_472(1330954593, 0, -1) * 3;
		case 9:
			return func_472(1330954593, 0, -1) * 3;
		case 10:
			return func_472(1330954593, 0, -1) * 3;
		case 11:
			return func_472(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_184(int iParam0)
{
	if (!func_77(iParam0))
	{
		return cVar0;
	}
	switch (func_80(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_307(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_120(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_182(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_185(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_80(Global_1879514->f_1) == 1)
			{
				func_181(5, 1);
			}
			else if (func_80(Global_1879514->f_1) == 8 && (func_121((*Global_1347702)[func_120(Global_1879514->f_1)]->f_12, 1) || func_121((*Global_1347702)[func_120(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_181(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_186(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_473(&Global_0, 8);
	}
	if (!func_320() || func_115() != -1)
	{
		return;
	}
	func_473(&Global_0, 1);
}

int func_187()
{
	return Global_40.f_4283;
}

int func_188(int iParam0)
{
	if (!func_77(iParam0))
	{
		return 0;
	}
	cVar0 = func_184(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_189(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

void func_190(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_191(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

Vector3 func_192(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_474(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_475(vVar0))
	{
		vVar0 = { func_474(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_193(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_194(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_195(vector3 vParam0, int iParam3)
{
	iVar0 = func_256();
	if (func_476(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_477(vParam0, iParam3);
}

void func_196()
{
	func_478();
	func_479();
	func_480();
	_0x11b0a0b282fa9b10(0);
}

char* func_197(int iParam0)
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

bool func_198(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_199()
{
	return Global_40.f_4283.f_1;
}

bool func_200(int iParam0)
{
	iVar0 = func_481(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_201(int iParam0)
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

void func_202(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_201(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_482(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_483(iVar0);
	*uParam0 = 0;
}

bool func_203(var uParam0)
{
	return func_484(*uParam0, 1);
}

void func_204(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_205(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_485(uParam0);
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

bool func_206(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_207(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_208(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_208(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_208(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_208(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_208(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_208(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_208(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
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
			if (func_208(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_208(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_208(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_264));
}

bool func_209(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_264));
}

bool func_210(var uParam0, char* sParam1, int iParam2)
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

void func_211(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_212(var uParam0)
{
	_datafile_unload(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

void func_213(var uParam0)
{
	func_486(uParam0, 0f);
}

int func_214(var uParam0)
{
	if (!func_203(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_487(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_488() - round((uParam0->f_1 * 1000f)));
}

void func_215(bool bParam0)
{
	if (func_489())
	{
		Global_1357509 = 1;
	}
	if (func_490(-92416669))
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

float func_218(var uParam0)
{
	if (!func_203(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_487(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_491() - uParam0->f_1);
}

void func_219(var uParam0, int iParam1, bool bParam2)
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

int func_220(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_492(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&cVar0, {Var3}, 3);
		if (!is_string_null_or_empty(sParam2))
		{
			StringConCat(&cVar0, sParam2, 24);
		}
		if (bParam3)
		{
			func_493(1, 1, 0);
		}
		uVar11 = 24;
		if (!func_494(&cVar0))
		{
			func_495(&uVar11, Global_35, "ARTHUR", 0);
			func_495(&uVar11, func_75(uParam0->f_2), func_496(uParam0->f_2), 0);
			func_497(&uVar11, cVar0, iParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

Vector3 func_221()
{
	iVar0 = func_187();
	if (!func_498(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

float func_222(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_223(var uParam0, var uParam1)
{
	if (does_entity_exist(uParam1->f_143) && is_entity_dead(uParam1->f_143))
	{
		func_499(&(uParam1->f_128), 4194304);
	}
}

void func_224(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			break;
		case 1:
			settimerb(0);
			func_500(&uLocal_36, "HUNT06_IKNAP", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 3:
			if (!func_502(1))
			{
				func_500(&uLocal_36, "HUNT06_SR_LOC1x", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 4:
			if (!func_502(1))
			{
				settimerb(0);
				func_500(&uLocal_36, "HUNT06_SR_LOC2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 5);
			}
			break;
		case 5:
			if ((timerb() > 1000 && func_502(1)) && get_current_scripted_conversation_line("HUNT06_SR_LOC2") >= 1)
			{
				func_503(uParam0, 2, 1);
				func_501(&(uParam0->f_11), 0);
			}
			if (timerb() > 3000 && !func_502(1))
			{
				func_503(uParam0, 2, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 8:
			if (!func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_COMEON", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 9:
			if (!func_502(1))
			{
				settimerb(0);
				func_500(&uLocal_36, "HUNT06_IG1_A", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_503(uParam0, 8, 1);
				func_501(&(uParam0->f_11), 10);
			}
			break;
		case 10:
			if (timerb() > 6000)
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 11:
			if (!func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_LOC_01S", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 12:
			if ((timerb() > 3000 && !func_504("HUNT06_LOC_01C")) && !func_502(0))
			{
				func_500(&uLocal_36, "HUNT06_LOC_01E", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 13:
			func_500(&uLocal_36, "HUNT06_LOC_02SP", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 15:
			func_500(&uLocal_36, "HUNT06_LOC_02E", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 14:
			func_500(&uLocal_36, "HUNT06_LOC_02R", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_503(uParam0, 1024, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 16:
			func_500(&uLocal_36, "HUNT06_CONGRAT", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 17:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_HURRY", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 18:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_JUMPIN", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 19:
			func_500(&uLocal_36, "HUNT06_GOHOME", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1);
			func_501(&(uParam0->f_11), 0);
			break;
		case 20:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_DISTKILL", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 21:
			if (!func_502(1) && func_500(&uLocal_36, "HUNT06_ALERTRUN", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
			{
				func_501(&(uParam0->f_11), 0);
			}
			break;
		case 22:
			if (!func_198(uParam0->f_129, 2))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_SELLING", Global_35, &(uParam0->f_80[0]), 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 2);
					}
				}
			}
			break;
		case 23:
			if (!func_198(uParam0->f_129, 4))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 4);
					}
				}
			}
			break;
		case 24:
			if (!func_198(uParam0->f_129, 8))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 8);
					}
				}
			}
			break;
		case 25:
			if (!func_198(uParam0->f_129, 16))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD3", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 16);
					}
				}
			}
			break;
		case 26:
			if (!func_198(uParam0->f_129, 32))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_DAWD4", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 32);
					}
				}
			}
			break;
		case 27:
			if (!func_198(uParam0->f_129, 64))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GRAB1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 64);
					}
				}
			}
			break;
		case 28:
			if (!func_198(uParam0->f_129, 128))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GRAB2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 128);
					}
				}
			}
			break;
		case 29:
			if (!func_198(uParam0->f_129, 256))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_GUMBO", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 256);
					}
				}
			}
			break;
		case 30:
			if (!func_198(uParam0->f_129, 512))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_JUMPINR", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 512);
					}
				}
			}
			break;
		case 31:
			if (!func_198(uParam0->f_129, 1024))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWCHAT1", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 1024);
					}
				}
			}
			break;
		case 32:
			if (!func_198(uParam0->f_129, 2048))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWCHAT2", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 2048);
					}
				}
			}
			break;
		case 34:
			if (!func_198(uParam0->f_129, 8192))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWEXO_N", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 8192);
					}
				}
			}
			break;
		case 33:
			if (!func_198(uParam0->f_129, 4096))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWEXO_Y", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 4096);
					}
				}
			}
			break;
		case 35:
			if (!func_198(uParam0->f_129, 16384))
			{
				if (!func_502(0))
				{
					if (func_500(&uLocal_36, "HUNT06_ROWDAWD", &(uParam0->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						func_501(&(uParam0->f_11), 0);
						func_499(&(uParam0->f_129), 16384);
					}
				}
			}
			break;
	}
}

void func_225(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_402))
	{
		return;
	}
	if (!func_198(uParam0->f_128, 65536))
	{
		if (func_505(&(uParam0->f_160), uParam0->f_402, 1, 1))
		{
			func_499(&(uParam0->f_128), 65536);
		}
	}
}

void func_226(var uParam0)
{
	switch (uParam0->f_12)
	{
		case 1:
			break;
		case 2:
			break;
		case 4:
			if (!func_507(uParam0->f_57[1], &(uParam0->f_77), func_506(1), 0, 1, 0))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 8:
			if (!func_507(uParam0->f_57[2], &(uParam0->f_77), func_506(2), 0, 1, 0))
			{
				return;
			}
			request_model(-445365508, false);
			if (!has_model_loaded(-445365508))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 16:
			break;
		case 32:
			if (!func_507(uParam0->f_57[5], &(uParam0->f_77), func_506(5), 0, 1, 0))
			{
				return;
			}
			func_499(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
	}
}

bool func_227(var uParam0, int iParam1)
{
	if (is_entity_dead(&(iParam1->f_80[0])))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!is_entity_dead(iParam1->f_143))
	{
		_0x98a7598c579ee871(iParam1->f_143, -20f, -1);
	}
	fVar0 = func_222(Global_35, func_509(1), 1);
	if (fVar0 > 8f)
	{
		func_510(iParam1);
	}
	func_511();
	if (iParam1->f_4 < 4)
	{
		func_512(iParam1, "FS06_O_STRT", func_509(12), 100f, 75f, 150f);
	}
	else if (iParam1->f_4 < 6)
	{
		func_512(iParam1, "FS06_O_RD01", func_509(13), 100f, 75f, 150f);
	}
	else
	{
		func_512(iParam1, "FS06_O_LAND", func_509(13), 100f, 75f, 150f);
	}
	switch (iParam1->f_4)
	{
		case 0:
			if (does_blip_exist(uParam0->f_43))
			{
				remove_blip(&(uParam0->f_43));
			}
			if (_does_volume_exist(&(iParam1->f_112[4])) && does_entity_exist(iParam1->f_143))
			{
				_0x7c00cfc48a782dc0(&(iParam1->f_112[4]), iParam1->f_143, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			func_513(uParam0->f_2, 0, 1, 1, 1, 0);
			if (func_8(&(uParam0->f_9), 128))
			{
				trigger_music_event("BOB_HUNT06_RESTART_1");
			}
			else
			{
				trigger_music_event("BOB_HUNT06_START");
			}
			func_515(uParam0, func_514(0), func_514(1), 0, 1);
			func_516(&(iParam1->f_4), 1);
			break;
		case 1:
			func_503(iParam1, 1, 1);
			if (!is_entity_dead(iParam1->f_143))
			{
				_0x6835afea10e186f4(iParam1->f_143, 2);
			}
			_0xaab050da48b57978(&(iParam1->f_80[0]), "CTaskPoliceCrimeSceneSearch_HighIntensity", 0, -1, 4);
			func_501(&(iParam1->f_11), 1);
			func_516(&(iParam1->f_4), 2);
			break;
		case 2:
			func_517(iParam1->f_80[0], func_509(9), 500);
			if (func_222(Global_35, func_509(12), 1) < 12f && !func_502(1))
			{
				func_501(&(iParam1->f_11), 3);
				if (!is_entity_dead(iParam1->f_143))
				{
					_0x6835afea10e186f4(iParam1->f_143, 1);
				}
				func_60(&(iParam1->f_153), 0);
				func_516(&(iParam1->f_4), 3);
			}
			break;
		case 3:
			func_517(iParam1->f_80[0], func_509(9), 500);
			if (func_218(&(iParam1->f_153)) >= 5f)
			{
				func_516(&(iParam1->f_4), 4);
			}
			break;
		case 4:
			func_501(&(iParam1->f_11), 4);
			func_516(&(iParam1->f_4), 5);
			break;
		case 5:
			func_517(iParam1->f_80[0], func_509(10), 500);
			if (func_222(Global_35, func_509(13), 1) < 6f)
			{
				func_516(&(iParam1->f_4), 6);
			}
			break;
		case 6:
			func_516(&(iParam1->f_4), 7);
			break;
		case 7:
			func_501(&(iParam1->f_11), 9);
			if (!is_entity_dead(iParam1->f_143))
			{
				_0x6835afea10e186f4(iParam1->f_143, 2);
			}
			func_516(&(iParam1->f_4), 8);
			break;
		case 8:
			func_517(iParam1->f_80[0], func_509(11), 500);
			if (fVar0 < 15f)
			{
			}
			func_518(Global_35, func_509(1), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (!func_198(iParam1->f_128, 134217728))
			{
				if (get_entity_speed(iParam1->f_143) < 0.1f)
				{
					if (func_222(Global_35, 2017.092f, -1883.428f, 39.4902f, 1) < 20f)
					{
						if (!func_502(0))
						{
							func_501(&(iParam1->f_11), 8);
							func_499(&(iParam1->f_128), 134217728);
						}
					}
				}
			}
			if (fVar0 < 5f)
			{
				if (func_519(&(iParam1->f_80[0]), iParam1->f_143, 0))
				{
					_0x6835afea10e186f4(iParam1->f_143, 1);
					bring_vehicle_to_halt(iParam1->f_143, 2f, -1, false);
					if (get_entity_speed(iParam1->f_143) < 0.4f && func_500(&uLocal_36, "HUNT06_IG1_B", &(iParam1->f_80[0]), Global_35, 0, 0, 1, 1))
					{
						freeze_entity_position(iParam1->f_143, true);
						task_leave_vehicle(&(iParam1->f_80[0]), iParam1->f_143, 131072, 0);
						func_213(&(iParam1->f_131));
						func_516(&(iParam1->f_4), 9);
					}
				}
			}
			break;
		case 9:
			if (!func_519(&(iParam1->f_80[0]), iParam1->f_143, 1) && func_218(&(iParam1->f_131)) > 3f)
			{
				if (func_519(Global_35, iParam1->f_143, 0) && !func_520(Global_35, 451360105))
				{
					task_leave_vehicle(Global_35, iParam1->f_143, 131072, 0);
				}
			}
			if (!func_519(Global_35, iParam1->f_143, 0))
			{
				func_204(&(iParam1->f_131));
				func_516(&(iParam1->f_4), 10);
			}
			break;
		case 10:
			if (!func_519(Global_35, iParam1->f_143, 1) && !func_519(&(iParam1->f_80[0]), iParam1->f_143, 1))
			{
				set_ped_path_prefer_to_avoid_water(&(iParam1->f_80[0]), false, 1f);
				task_follow_waypoint_recording(&(iParam1->f_80[0]), func_521(1), 0, 25600, -1, 0, 0, -1);
				_0x2208438012482a1a(&(iParam1->f_80[0]), false, false);
				if (!is_entity_dead(iParam1->f_143))
				{
					_0x6835afea10e186f4(iParam1->f_143, 3);
				}
				func_503(iParam1, 16, 1);
				func_508(iParam1, 4);
				func_516(&(iParam1->f_4), 11);
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_228(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_229(var uParam0, int iParam1)
{
	if (is_entity_dead(&(iParam1->f_80[0])))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	switch (iParam1->f_9)
	{
		case 0:
			func_522(&(iParam1->f_9), 1);
			break;
		case 1:
			if (func_523(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 2);
			}
			break;
		case 2:
			if (func_524(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 3);
			}
			break;
		case 3:
			if (func_525(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_230(var uParam0)
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
		func_526(&(uParam0->f_9), 4, 1);
		set_script_as_no_longer_needed(&(uParam0->f_18));
	}
	return true;
}

int func_231(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_232(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_233(int iParam0)
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

int func_234(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
			if (func_260(iParam0, 2, 1))
			{
				func_255(iParam0, 2, 1);
			}
			if (func_270(iParam0, 16, 1))
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
						func_67(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
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
						func_527(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_528(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_528(iParam0, 1);
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
			if (!func_260(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_529(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_528(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_255(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_262(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_530(iParam0, 0, 0, 1);
			}
			func_255(iParam0, 33, 1);
			func_255(iParam0, 34, 1);
			func_255(iParam0, 29, 1);
			if (!func_475(vVar0) && bParam7)
			{
				func_528(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_528(iParam0, 4);
			}
			else
			{
				func_528(iParam0, 5);
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
						func_527(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_531(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_528(iParam0, 4);
			}
			else
			{
				func_528(iParam0, 5);
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
				if (func_532(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_533(iParam0, iParam13, 0);
						func_534(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_260(iParam0, 25, 0))
						{
							func_255(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_528(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_528(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_528(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_528(iParam0, 6);
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
					func_535(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_536(Global_1360165[iParam0], 1);
				}
			}
			func_528(iParam0, 7);
		case 7:
			func_262(iParam0, bParam9, bParam15, 0);
			func_73(iParam0, 4, bParam11);
			func_258(iParam0);
			if (bParam20)
			{
				if (func_537(Global_1360165[iParam0]))
				{
				}
			}
			func_538(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_528(iParam0, 0);
			func_456(iParam0, 16, 1);
			func_255(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_235(int iParam0, bool bParam1)
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
	if (func_65(iParam0, 0))
	{
		func_539(iParam0, 1);
		return 1;
	}
	if (!func_540())
	{
		return 0;
	}
	if (bParam1)
	{
		func_527(iParam0, 0, "Adding to Group");
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
	func_539(iParam0, 1);
	Global_1359489->f_15 = func_253(1);
	func_59(iParam0, 32, 1);
	set_ped_relationship_group_hash(Global_1360165[iParam0], -1247684992);
	set_ped_combat_attributes(Global_1360165[iParam0], 83, true);
	_0x9238a3d970bbb0a9(Global_1360165[iParam0], -1972074710);
	set_ped_config_flag(Global_1360165[iParam0], 152, true);
	if (_0xb7e0590c86e1711f(get_player_group(get_player_index())) != 234527101)
	{
		_0x0de02da3c0f66955(func_75(iParam0), _0xb7e0590c86e1711f(get_player_group(get_player_index())));
		_0x61bda07407754a5c(func_75(iParam0), Global_1391438->f_414.f_37);
	}
	_0x89e59dbd15e21177(func_50(), 0);
	func_541(iParam0);
	Var1 = get_player_ped(get_player_index());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0];
	Var1.f_7 = func_256();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0];
	_0x88bc5f4aef77fc4e(&Var1, 17);
	return 1;
}

bool func_236(var uParam0)
{
	func_511();
	bVar0 = true;
	if (Local_134.f_1 > 0)
	{
		func_510(&Local_134);
	}
	switch (Local_134.f_1)
	{
		case 0:
			request_model(func_542(0), false);
			request_model(func_542(1), false);
			request_model(func_542(2), false);
			request_model(func_542(3), false);
			request_waypoint_recording(func_521(0));
			request_waypoint_recording(func_521(1));
			Local_134.f_1 = 1;
			break;
		case 1:
			if (!func_543(&Local_134))
			{
				return false;
			}
			if (_does_text_database_exist("HNT6AUD"))
			{
				_text_database_request("HNT6AUD");
			}
			if (!has_model_loaded(func_542(0)))
			{
				bVar0 = false;
			}
			if (!has_model_loaded(func_542(1)))
			{
				bVar0 = false;
			}
			if (!has_model_loaded(func_542(2)))
			{
				bVar0 = false;
			}
			if (!has_model_loaded(func_542(3)))
			{
				bVar0 = false;
			}
			if (!get_is_waypoint_recording_loaded(func_521(0)))
			{
				bVar0 = false;
			}
			if (!get_is_waypoint_recording_loaded(func_521(1)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				_0xf008e0ba1fe1d644(5);
				func_243(2);
				func_544(uParam0->f_37);
				Local_134.f_1 = 2;
			}
			break;
		case 2:
			if (_0x5c16855277819bbf() != 5)
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!func_545(Local_134.f_112[iVar1], iVar1))
				{
					return false;
				}
				iVar1++;
			}
			func_68(1);
			Local_134.f_1 = 3;
			break;
		case 3:
			if (!func_546(uParam0))
			{
				return false;
			}
			if (!func_10(uParam0->f_2))
			{
				Local_134.f_80[0] = func_234(uParam0->f_2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
			if (!func_29(&(Local_134.f_80[0]), 0))
			{
				if (func_10(uParam0->f_2))
				{
					Local_134.f_80[0] = func_547(uParam0->f_2);
				}
				return false;
			}
			if (!func_548(Local_134.f_80[1], 3, 15))
			{
				return false;
			}
			if (!func_548(Local_134.f_80[2], 3, 16))
			{
				return false;
			}
			if (!func_548(Local_134.f_80[3], 3, 17))
			{
				return false;
			}
			clear_area(func_509(1), 25f, 8);
			_set_weather_type(1632247697, false, true, true, 60f, false);
			func_495(&uLocal_36, &(Local_134.f_80[0]), "PEARSON", 0);
			Local_134.f_1 = 4;
			break;
		case 4:
			if (!is_entity_dead(&(Local_134.f_80[0])))
			{
				set_blocking_of_non_temporary_events(&(Local_134.f_80[0]), true);
			}
			if (!is_entity_dead(&(Local_134.f_80[1])) && _does_volume_exist(&(Local_134.f_112[0])))
			{
				task_stand_still(&(Local_134.f_80[1]), -1);
				set_blocking_of_non_temporary_events(&(Local_134.f_80[1]), true);
			}
			if (!is_entity_dead(&(Local_134.f_80[2])) && _does_volume_exist(&(Local_134.f_112[0])))
			{
				task_stand_still(&(Local_134.f_80[2]), -1);
				set_blocking_of_non_temporary_events(&(Local_134.f_80[2]), true);
			}
			if (!is_entity_dead(&(Local_134.f_80[3])) && _does_volume_exist(&(Local_134.f_112[0])))
			{
				task_stand_still(&(Local_134.f_80[2]), -1);
				set_blocking_of_non_temporary_events(&(Local_134.f_80[3]), true);
			}
			func_549(uParam0);
			func_61(uParam0->f_2, 1);
			func_64(0, func_63("FS06_HRSE_BLK"));
			func_262(uParam0->f_2, 0, 1, 0);
			set_ped_config_flag(&(Local_134.f_80[0]), 297, true);
			set_ped_config_flag(&(Local_134.f_80[0]), 315, true);
			set_ped_config_flag(&(Local_134.f_80[0]), 130, true);
			set_ped_config_flag(&(Local_134.f_80[0]), 331, true);
			set_ped_config_flag(&(Local_134.f_80[0]), 330, true);
			return true;
	}
	return false;
}

int func_237(var uParam0, var uParam1)
{
	iVar0 = func_199();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_550(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_238(int iParam0, var uParam1)
{
	uParam1->f_10 = func_551(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_475(uParam1->f_6))
		{
		}
	}
	bVar0 = func_320();
	if (*uParam1)
	{
		if (bVar0 && !func_146((*Global_1835011)[4]->f_1, 1))
		{
			if (func_552(5))
			{
				func_553(5);
				func_554(5);
				func_555(0);
				func_556(0);
			}
		}
	}
	if (func_557(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_146((*Global_1835011)[37]->f_1, 1)) && !func_146((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_146((*Global_1835011)[43]->f_1, 1)) && !func_146((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_558(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_560(iVar1))
		{
			bVar4 = true;
		}
		if (func_561(iVar1))
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
				func_562(uParam1->f_10);
				*iParam0 = 0;
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
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_552(0) && func_552(1))
			{
				func_563(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_564())
			{
				func_565();
			}
			func_555(0);
			func_556(0);
			func_566(uParam1->f_6);
		}
	}
	if (!func_559(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_567(uParam1->f_10) == 0 || func_568(uParam1->f_10) == 0) || func_569(uParam1->f_10) == 0)
			{
				func_570(uParam1->f_10);
			}
			func_571(uParam1->f_10);
			func_572(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_558(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_560(iVar1))
		{
			bVar4 = true;
		}
		if (func_561(iVar1))
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
			if (!func_475(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_573(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
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
			Var8 = { func_574(uParam1->f_10) };
			Var10 = { func_575() };
			func_576(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_577(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_578(uParam1->f_10);
		if (uParam1->f_2 && !func_475(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_579(uParam1->f_10);
	if (func_577(uParam1->f_10))
	{
		iVar16 = func_580(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_239(var uParam0)
{
	_0x0f1cd8ca9e65d5f6(func_50(), *uParam0);
	_0xd55a871e1ce3481b(func_50(), uParam0->f_37);
}

bool func_240(var uParam0)
{
	if (func_95(&Global_1935630, 2048))
	{
		return false;
	}
	if (func_581(uParam0))
	{
		do_screen_fade_in(500);
		func_582(0);
		display_hud(true);
		display_radar(true);
		return true;
	}
	return false;
}

bool func_241()
{
	return (func_583() || func_584());
}

void func_242(bool bParam0)
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
	func_585(0f);
	Global_1935436->f_11 = 1;
	if (func_124())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_586();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_243(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_244(vector3 vParam0, float fParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_587(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_588(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_589(0, 0);
		if (func_437(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_590(1, 0);
		}
	}
	else
	{
		func_590(1, 0);
	}
	func_101(0);
	func_591(0, vParam0, fParam3);
	return 1;
}

bool func_245(var uParam0)
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
			func_592(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
		}
	}
	if (_does_volume_exist(uParam0->f_42) && _0xf256a75210c5c0eb(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

bool func_246(var uParam0)
{
	if (!_0xf256a75210c5c0eb(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

int func_247(var uParam0)
{
	return uParam0->f_9;
}

bool func_248(int iParam0)
{
	return iParam0 > -1;
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_250(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_251(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_252(int iParam0)
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
	func_593(iParam0, 0, 0);
}

int func_253(bool bParam0)
{
	if (bParam0)
	{
		return func_594(Global_1359489->f_4);
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
		if (func_595(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_254()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_596(iVar0);
		iVar2 = func_596(iVar0 + 1);
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

void func_255(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_256()
{
	return Global_1894899->f_2;
}

void func_257(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_597(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_73(iParam0, 1, 0);
		}
	}
	func_73(iParam0, 16, bParam1);
}

void func_258(int iParam0)
{
	func_59(iParam0, 36, 1);
}

int func_259(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_598(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_260(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return false;
		}
	}
	func_249(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_58(iParam0))
	{
		iVar1 = func_75(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_599(iParam0);
		}
	}
	if (func_260(iParam0, 5, 1))
	{
		set_ped_config_flag(func_75(iParam0), 137, true);
	}
}

void func_262(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_255(iParam0, 50, 1);
		func_255(iParam0, 48, 1);
		func_255(iParam0, 49, 1);
		func_255(iParam0, 51, 1);
		func_255(iParam0, 52, 1);
		func_255(iParam0, 54, 1);
		func_255(iParam0, 55, 1);
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
			func_255(iParam0, 54, 1);
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
			func_255(iParam0, 52, 1);
			if (!bParam3)
			{
				func_255(iParam0, 55, 1);
			}
		}
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (func_74(iParam0))
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
	if (func_260(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_259(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_75(iParam0);
	if (((does_entity_exist(iVar1) && func_600(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_601(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_264(int iParam0, int iParam1, bool bParam2)
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

int func_265(int iParam0)
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

void func_266(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_248(iParam1))
	{
		return;
	}
	iVar0 = func_265(iParam1);
	if (func_602(iParam1))
	{
		if (!func_603(iParam1))
		{
			return;
		}
	}
	func_255(iParam1, 39, 1);
	func_604(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_604(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_604(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_605(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
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

int func_268(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

void func_269(var uParam0, int iParam1, bool bParam2)
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

bool func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_248(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

int func_271(int iParam0)
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

int func_272(int iParam0)
{
	return iParam0 & 31;
}

int func_273(int iParam0)
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

int func_274(int iParam0)
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

int func_275(int iParam0)
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
	func_606(iParam0, Global_1898164->f_162);
	return 1;
}

void func_276(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_607(iParam0);
	}
	else
	{
		func_608(iParam0, iParam1);
	}
	func_609();
}

void func_277(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_610(iParam0, iParam1, bParam2);
}

bool func_278(int iParam0)
{
	return iParam0 != 0;
}

int func_279()
{
	return -1904156936;
}

bool func_280(int iParam0)
{
	if (!func_77(iParam0))
	{
		return false;
	}
	switch (func_80(iParam0))
	{
		case 1:
			iVar0 = func_120(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_120(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_281()
{
	return 166188472;
}

int func_282()
{
	return 2015838421;
}

int func_283()
{
	return 207908017;
}

var func_284(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_285(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

bool func_286()
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

int func_287(int iParam0)
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

int func_288(int iParam0)
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

void func_289(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_290()
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

int func_291(int iParam0)
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

void func_292(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_293(int iParam0)
{
	if (!func_77(iParam0))
	{
		return false;
	}
	switch (func_80(iParam0))
	{
		case 1:
			switch (func_120(iParam0))
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
			switch (func_120(iParam0))
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

void func_294(int iParam0)
{
	iVar2 = func_611(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_613(func_612(iParam0), 6);
}

void func_295(int iParam0)
{
	iVar2 = func_611(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_614(func_612(iParam0), 6);
}

bool func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_615(iParam0);
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

int func_297(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_312(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_300(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_301()
{
	return Global_40.f_11095.f_35;
}

void func_302(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_616(iParam0, 0);
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
		func_303(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_303(int iParam0)
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
			func_616(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_617(1);
	}
}

bool func_304(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_305()
{
	iVar0 = func_618((*Global_1347702)[9]->f_15);
	iVar1 = func_618((*Global_1835011)[69]->f_1);
	if (func_619(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_306(int iParam0)
{
	if (!func_620(iParam0))
	{
		return false;
	}
	return func_146((*Global_1835011)[iParam0]->f_1, 1);
}

int func_307(int iParam0)
{
	if (func_80(iParam0) == 1)
	{
		return func_120(iParam0);
	}
	return -1;
}

int func_308(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_621(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_622(iVar6);
	}
	return iVar5;
}

int func_309(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_623(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_310(int iParam0, bool bParam1)
{
	func_624(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_311(int iParam0)
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

void func_312(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_310(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_313(2, *uParam0);
		}
		else
		{
			func_314(2, *uParam0);
		}
	}
	func_625(uParam0);
}

void func_313(int iParam0, int iParam1)
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

void func_314(int iParam0, int iParam1)
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

int func_315(int iParam0)
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

int func_316(int iParam0)
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

void func_317(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_626();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_627(iParam0);
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
	if (func_344(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_628())
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
	Global_40.f_11095.f_35 = func_129(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_626();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_629(iVar1);
		func_631(func_630(), 0, 4000);
		func_632(Global_40.f_11095.f_35);
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
		func_633(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_359(func_119(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_316(14))
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
					sParam4 = func_634(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_453(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_453(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_359(func_119(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_316(4))
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
					sParam4 = func_634(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_453(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_453(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_119(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_181(10, 1);
	}
}

void func_318(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_319(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_320()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_321(int iParam0)
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

bool func_322(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_323(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_115() == -1)
	{
		if (func_635(iParam0) && func_636(iParam0))
		{
			func_637(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_324(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_638(iParam0, iParam1);
	Var0 = { func_434(iParam0, 0, 1) };
	iVar5 = func_639(iParam0, &Var0, 0, 0);
	iVar6 = func_640(iParam0, 0);
	if ((iVar5 > 1 && !func_136()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_342(iParam0, -2051813666))
		{
			func_144(583, 1);
		}
		else
		{
			func_144(582, 0);
		}
	}
	if (func_641(iParam0, &Var0, *iParam1, 0, 0))
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

void func_325(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_404(iParam0, -949239683))
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

int func_326(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_341(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_642(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_643(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_611(bParam2), iParam0, 0);
	return iVar2;
}

bool func_327(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_328(iParam0) != 0;
}

int func_328(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_644())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_645(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_329(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_330(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_644())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_329(iVar0))
		{
			if (func_166(func_645(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_331(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_646(48);
	func_186(0, -1);
}

bool func_332(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_146((*Global_1347702)[iParam0]->f_15, 1);
}

int func_333(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_334(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_335(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_146((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_336(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_135(iParam0))
	{
		return false;
	}
	return func_13((*Global_1347702)[iParam0]->f_15);
}

int func_337()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_166(func_647(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_320() && (func_336(38) || func_332(38)))
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
			if (func_320() && (func_336(39) || func_332(39)))
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
			iVar9 = func_648(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_320() && (func_336(41) || func_332(41)))
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
			if (func_320() && (func_336(49) || func_332(49)))
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
			iVar9 = func_648(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_649(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_650(iParam0, iVar13, iVar14))
	{
	}
	if (func_651(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_652(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_653(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_654(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_655(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_339(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_320() && (func_336(38) || func_332(38)))
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
			if (func_320() && (func_336(39) || func_332(39)))
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
			if (func_320() && (func_336(49) || func_332(49)))
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
		if (func_320() && (func_336(38) || func_332(38)))
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
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_460(_create_var_string(2, sVar0), _create_var_string(2, func_657(func_334(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_320() && (func_336(39) || func_332(39)))
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
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_320() && (func_336(49) || func_332(49)))
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
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_656(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_341(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_342(int iParam0, int iParam1)
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

bool func_343(int iParam0, int iParam1)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_344(int iParam0)
{
	if (!func_658(iParam0))
	{
		return false;
	}
	return func_659(iParam0);
}

void func_345(int iParam0)
{
	if (!func_658(iParam0))
	{
		return;
	}
	func_660(iParam0);
	func_661(iParam0);
}

int func_346(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_347(int iParam0, bool bParam1)
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
	if (func_322(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_662(iVar0) || func_663(iVar0))
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

int func_348(int iParam0, bool bParam1)
{
	if (!func_322(iParam0, 0))
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

void func_349(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_437(iParam0))
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

bool func_350(bool bParam0)
{
	if (func_115() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_611(bParam0));
}

bool func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_434(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_664((386 + iVar28), 1);
			if (func_665(iParam0, &Var0, iVar5, 0))
			{
				if (func_666(iParam0, &Var6, iVar5))
				{
					Var29 = { func_667(iParam0, Var0, iVar5, 0) };
					func_668(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_350(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_352(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_669(iParam0, iParam1);
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

bool func_352(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_354(iParam0))
	{
		return false;
	}
	if (!func_350(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_353(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_348(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_115() == -1)
		{
			func_349(iVar0);
			if (iParam1 == 1248274121)
			{
				func_670(iVar0);
			}
		}
		if (!func_641(iParam0, &uVar1, 1, 0, 0))
		{
			func_637(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_671(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_351(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_351(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_351(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_628())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_672(iVar0))
				{
					func_351(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_351(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_673(Global_35, 2, 0, 1);
				if ((((func_437(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_344(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_437(iVar7) && func_344(24))
				{
					if (!func_351(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_351(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_351(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_144(480, 1);
	}
	return true;
}

bool func_354(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_355(int iParam0, int iParam1, int iParam2)
{
	if (!func_354(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_437(iVar4))
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
	if (func_166(611073244, 1, 0) && iParam2 == -897553835)
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
		func_391(func_674(iParam0), func_390(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_115() == -1)
		{
			if (func_146((*Global_1835011)[14]->f_1, 1))
			{
				func_144(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_350(0))
	{
		if (func_352(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_396(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_356(int iParam0)
{
	if ((iParam0 == -615217896 && !func_157()) || iParam0 != -615217896)
	{
		if (func_675(Global_35, iParam0, &uVar0))
		{
			func_375(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_381();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_381();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_381();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_379();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_377();
			break;
	}
}

void func_357(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_377();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_378();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_379();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_380();
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
			func_381();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_676();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_677();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_358(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_359(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_360(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_361(int iParam0)
{
	bVar0 = func_342(iParam0, -2017733358);
	if (func_678() < 3)
	{
		if (bVar0)
		{
			if (func_680(func_679(iParam0), iParam0))
			{
				func_391(79, func_390(func_679(iParam0)), 1);
			}
			else
			{
				func_391(78, func_390(func_679(iParam0)), 1);
			}
		}
		else
		{
			func_391(80, func_390(func_681(iParam0)), 1);
		}
	}
}

bool func_362()
{
	if (((((func_682(839908568, 400) || func_682(-1134030454, 400)) || func_682(623353496, 400)) || func_682(-344413337, 400)) || func_682(-1664948962, 400)) || func_682(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_363(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_472(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_683(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_684(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_364(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_338(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_340(51, 0, 0, 0, 0, -1, 0);
			func_685(8192);
			break;
		case 581047644:
			func_338(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_340(51, 0, 0, 0, 0, -1, 0);
			func_685(524288);
			break;
		case -644199619:
			func_338(39, 0, 0, 0, 0, 0, 1, 0);
			func_340(39, 0, 0, 0, 0, -1, 0);
			func_686(16);
			break;
		case 684296857:
			func_338(41, 0, 0, 0, 0, 0, 1, 0);
			func_340(41, 0, 0, 0, 0, -1, 0);
			func_687(8);
			break;
		case 466137807:
			func_338(49, 0, 0, 0, 0, 0, 1, 0);
			func_340(49, 0, 0, 0, 0, -1, 0);
			func_688(16);
			break;
		case -1087522507:
			func_338(43, 0, 0, -1791518714, func_689(1), 0, -1, 0);
			func_690(1);
			break;
		case -405829000:
			func_338(43, 0, 0, -2087881550, func_689(2), 0, -1, 0);
			func_690(2);
			break;
		case 378660860:
			func_338(43, 0, 0, 1908068621, func_689(4), 0, -1, 0);
			func_690(4);
			break;
		case 1566111097:
			func_338(43, 0, 0, 1611247019, func_689(8), 0, -1, 0);
			func_690(8);
			break;
		case 1276007140:
			func_338(43, 0, 0, 1319635688, func_689(16), 0, -1, 0);
			func_690(16);
			break;
	}
}

void func_365(int iParam0)
{
	if (func_691() == 1)
	{
		if (func_332(39))
		{
			func_144(342, 0);
		}
		else
		{
			func_144(343, 0);
			func_686(1);
		}
	}
	if (func_691() >= 30)
	{
		func_144(344, 0);
	}
	func_338(39, 0, 0, 0, 0, 0, -1, 0);
	func_340(39, 0, 0, func_691(), 30, 1, 0);
}

void func_366(int iParam0)
{
	if (func_692() == 1)
	{
		if (func_332(49))
		{
			func_144(409, 0);
		}
		else
		{
			func_144(410, 0);
			func_688(1);
		}
	}
	if (func_692() >= 10)
	{
		func_144(411, 0);
	}
	func_338(49, 0, 0, 0, 0, 0, -1, 0);
	func_340(49, 0, 0, func_692(), 10, 1, 0);
}

void func_367(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_144(437, 0);
			func_144(440, 0);
			func_693(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_338(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_340(51, 0, 0, sVar0, func_648(-949689219, 20), 1, 0);
			func_685(1);
			func_694(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_693(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_338(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_340(51, 0, 0, sVar0, func_648(-1248968496, 20), 1, 0);
			func_685(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_693(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_338(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_340(51, 0, 0, sVar0, func_648(1706369307, 20), 1, 0);
			func_685(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_693(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_338(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_340(51, 0, 0, sVar0, func_648(1520110311, 20), 1, 0);
			func_685(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_144(438, 0);
			func_693(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_338(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_340(51, 0, 0, sVar0, func_648(-1992824800, 20), 1, 0);
			func_685(32768);
			break;
		default:
			func_144(439, 0);
			break;
	}
}

void func_368()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_369(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_115() == -1)
	{
		if (!func_332(43))
		{
			if (iParam0 == 281887510)
			{
				func_144(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_144(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_144(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_144(400, 0);
			}
		}
		else if (func_342(iParam0, 412399755))
		{
			func_695(-1791518714);
			if (func_696() == 0)
			{
				func_186(0, 10);
				iVar1 = func_697(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_332(44))
		{
			if (iParam0 == -222563712)
			{
				func_144(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_144(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_144(401, 0);
			}
		}
		else if (func_342(iParam0, 709057512))
		{
			func_695(-2087881550);
			if (func_696() == 1)
			{
				func_186(0, 10);
				iVar1 = func_697(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_332(45))
		{
			if (iParam0 == 2116770557)
			{
				func_144(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_144(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_144(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_144(398, 0);
			}
		}
		else if (func_342(iParam0, -1478961327))
		{
			func_695(1908068621);
			if (func_696() == 2)
			{
				func_186(0, 10);
				iVar1 = func_697(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_700(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_701(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_646(48);
					}
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_332(46))
		{
			if (iParam0 == 2085530337)
			{
				func_144(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_144(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_144(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_144(406, 0);
			}
		}
		else if (func_342(iParam0, -1238404098))
		{
			func_695(1611247019);
			if (func_696() == 3)
			{
				func_186(0, 10);
				iVar1 = func_697(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_332(47))
		{
			if (iParam0 == -1521783510)
			{
				func_144(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_144(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_144(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_144(403, 0);
			}
		}
		else if (func_342(iParam0, 1160548794))
		{
			func_695(1319635688);
			if (func_696() == 4)
			{
				func_186(0, 10);
				iVar1 = func_697(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_698(iParam0) < func_699(iParam0))
					{
						func_338(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_340(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_370(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_700(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_701(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_646(48);
		}
	}
}

void func_371(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_166(func_702(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_703(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_704(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_363(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_363(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_363(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_363(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_363(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_363(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_363(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_363(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_363(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_363(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_363(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_363(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_363(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_705())
			{
				func_363(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_363(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_363(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_363(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_363(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_363(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_363(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_363(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_363(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_363(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_363(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_363(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_363(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_373(int iParam0)
{
	if (func_332(41))
	{
		func_144(363, 0);
	}
	else
	{
		func_144(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_706(-1865241121);
			func_707(-642026005);
			func_708(-642026005);
			func_186(0, 10);
			break;
		case -2108314374:
			func_706(2117142684);
			func_707(-940584364);
			func_708(-940584364);
			func_186(0, 10);
			break;
		case -1193798153:
			func_706(-1409326024);
			func_707(1972645282);
			func_708(1972645282);
			func_186(0, 10);
			break;
		case -787702678:
			func_706(-641744968);
			func_707(1667205433);
			func_708(1667205433);
			func_186(0, 10);
			break;
		case -804542901:
			func_706(-946988203);
			func_707(1362715885);
			func_708(1362715885);
			func_186(0, 10);
			break;
		case -1696275132:
			func_706(-646136018);
			func_707(1053540370);
			func_708(1053540370);
			func_186(0, 10);
			break;
		case -161595323:
			func_706(-955835837);
			func_707(-1100103852);
			func_708(-1100103852);
			func_186(0, 10);
			break;
		case -1114363619:
			func_706(-179276075);
			func_707(-1409869209);
			func_708(-1409869209);
			func_186(0, 10);
			break;
		case -368407134:
			func_706(-492711560);
			func_707(-1760235357);
			func_708(-1760235357);
			func_186(0, 10);
			break;
		case 1997759228:
			func_706(1764383959);
			func_707(-138366827);
			func_708(-138366827);
			func_186(0, 10);
			break;
		case 1265573293:
			func_706(317501533);
			func_707(-1261163843);
			func_708(-1261163843);
			func_186(0, 10);
			break;
		case -1030441283:
			func_706(817753087);
			func_707(-963523016);
			func_708(-963523016);
			func_186(0, 10);
			break;
		case -1490884871:
			func_706(576606016);
			func_707(560825326);
			func_708(560825326);
			func_186(0, 10);
			break;
		case -395458616:
			func_706(814934957);
			func_707(858269539);
			func_708(858269539);
			break;
	}
}

void func_374(int iParam0, int iParam1)
{
	func_709(iParam0, iParam1, &uVar0);
}

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_434(iParam1, 1, 0) };
		iParam3 = func_435(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_710(iParam1, iParam2, func_422(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_711(1, (func_115() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_422(iParam3, 1)])
			{
				func_433(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_712(32768) && iParam1 != &Global_1946804->f_57[func_422(iParam3, 1)])
			{
				func_713();
				func_433(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_433(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_714(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_433(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_715(0);
			func_716(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_433(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_376(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_673(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_673(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_717("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_718(&Var3, iVar2, iVar0, iVar1))
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
						func_719(iVar0);
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

void func_377()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_378()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_379()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_380()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_381()
{
	func_720();
	func_721();
	func_722();
}

void func_382(int iParam0, int iParam1, bool bParam2)
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

void func_383(int iParam0, bool bParam1)
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
	func_656(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_384(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_385(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_386(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_387(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_388(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_389(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_390(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_391(int iParam0, int iParam1, bool bParam2)
{
	func_429(iParam0, &iVar0, &iVar1);
	if (!func_430(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_723(iParam0, 1024))
	{
		return;
	}
	func_431(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_392(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_429(iParam0, &iVar0, &iVar1);
	if (!func_430(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_723(iParam0, 1024))
	{
		return;
	}
	func_431(iVar0, iVar1);
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

int func_393()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_644())
	{
		return func_394();
	}
	iVar4 = (func_644() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_644())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_724(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_645(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_394()
{
	iVar0 = get_random_int_in_range(0, func_644());
	return func_645(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_395(int iParam0)
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

bool func_396(int iParam0, int iParam1, int iParam2)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_434(iParam0, 0, 1) };
	Var5 = { func_667(iParam0, Var0, Var0.f_4, 0) };
	return func_725(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_397(int iParam0)
{
	if (func_115() != -1)
	{
		return;
	}
	switch (func_346(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_726(81053684, 0) <= 0)
			{
				func_433(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_433(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_727(iParam0);
			if (func_728(iVar0))
			{
				func_729(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_433(30, iParam0, 0, 0, 0);
			}
			if (func_424() == -2125499975 || func_424() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_433(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_424() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_433(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_730(-525676072, 0))
			{
				if (func_731(-525676072, &iVar1))
				{
					func_433(33, iVar1, 0, 0, 0);
				}
			}
			func_433(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_732(99217379))
		{
			func_375(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_345(24);
		if (func_376(&iVar2, 0))
		{
			func_351(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_398(int iParam0)
{
	if (func_342(iParam0, 943695443))
	{
		func_733(0, iParam0);
	}
	else if (func_342(iParam0, -2096528786))
	{
		func_733(1, iParam0);
	}
	else if (func_342(iParam0, -1094167013))
	{
		func_733(2, iParam0);
	}
	else if (func_342(iParam0, 1936654645))
	{
		func_733(3, iParam0);
	}
	else if (func_342(iParam0, 1306489306))
	{
		func_733(4, iParam0);
	}
	else if (func_342(iParam0, 435762317))
	{
		func_733(5, iParam0);
	}
	else if (func_342(iParam0, 1259363210))
	{
		func_733(6, iParam0);
	}
	else if (func_342(iParam0, 881398259))
	{
		func_733(7, iParam0);
	}
	else if (func_342(iParam0, -541549214))
	{
		func_733(8, iParam0);
	}
	else if (func_342(iParam0, 130796156))
	{
		func_733(-1, iParam0);
	}
}

int func_399(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_734(&Var4, 1356624740);
	return func_735(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_400(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return Var0;
	}
	if (func_342(iParam0, -305066475))
	{
		if (func_115() == -1)
		{
			if (func_342(iParam0, -537818634))
			{
				return func_119(189951448);
			}
			else
			{
				return func_119(1176172851);
			}
		}
	}
	else if (func_342(iParam0, -537818634))
	{
		return func_119(-963660207);
	}
	if (func_342(iParam0, 2084895747))
	{
		return func_119(1694039471);
	}
	return Var2;
}

void func_401(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_115() == -1)
			{
				if (func_146((*Global_1835011)[4]->f_1, 1))
				{
					func_144(109, 1);
				}
			}
			break;
	}
}

void func_402(int iParam0, char* sParam1)
{
	sVar0 = func_737(func_736(0));
	func_453(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_738(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_322(iParam0, 0))
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
	if (!func_739())
	{
		func_740(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_741(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_741(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_343(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_341(iParam0);
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
	else if (!func_742(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_743(_create_var_string(10, &cVar2, _create_var_string(0, func_390(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_342(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_390(iParam0));
	}
	func_453(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_404(int iParam0, int iParam1)
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

struct<10> func_405(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_406(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_407(int iParam0, int iParam1)
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

bool func_408(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_744(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_744(iParam0, Var2, 1))
				{
					if (func_745(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_745(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_144(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_94(0, 0, 1))
		{
			func_186(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_409(int iParam0)
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

void func_410(int iParam0)
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
			Jump @411; //curOff = 368
			iVar0 = 331;
			Jump @411; //curOff = 376
			iVar0 = 332;
			Jump @411; //curOff = 384
			iVar0 = 333;
			Jump @411; //curOff = 392
			iVar0 = 334;
			Jump @411; //curOff = 400
			iVar0 = 335;
			if (iVar0 != -1)
			{
				func_144(iVar0, 0);
			}
		}

void func_411()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_746(0);
			_unlock_set_unlocked(-121456797, false);
			func_747();
		}
		return;
	}
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_748();
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
	func_746(1);
}

void func_412()
{
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_138(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_413()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_749(0);
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
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_749(1);
}

void func_414()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_750(15000, 0, 0, 0, 1);
			func_749(0);
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
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_464(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_749(1);
}

void func_415()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_166(1191437462, 1, 0) && !func_13((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_138(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_751(1))
			{
				func_387(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_166(1119149048, 1, 0) && !func_13((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_138(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_751(2))
			{
				func_387(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_751(4))
		{
			func_387(4);
		}
		if (func_751(0))
		{
			func_752(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_166(1191437462, 1, 0))
			{
				func_418(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_166(1119149048, 1, 0))
			{
				func_418(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_751(1))
		{
			func_752(1);
		}
		if (func_751(2))
		{
			func_752(2);
		}
		if (func_751(4))
		{
			func_752(4);
		}
		if (!func_751(0))
		{
			func_387(0);
		}
	}
}

void func_416()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_146((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_753() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_349(127400949);
		if (func_351(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_753() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_754(-2055673461, Var1, 1423542233);
		func_754(-202131179, Var1, -1264898804);
		func_754(2013836545, Var1, 1592019450);
		func_754(1497476650, Var1, 1117400455);
		func_754(1063571467, Var1, 1150213537);
		func_754(2107224237, Var1, 1598825281);
		func_754(1747981656, Var1, -712527121);
		func_754(-1371140647, Var1, 454332195);
		func_754(-19142973, Var1, 256105670);
		func_754(-2074737817, Var1, -1328061889);
		func_754(-1114256243, Var1, -782241404);
		func_754(-1653277288, Var1, 1669853467);
		func_754(1869398132, Var1, -1559225678);
		func_754(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_755())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_437(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_344(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_344(24) && func_437(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_437(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_344(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_417()
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

int func_418(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_642(iParam0, 1);
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
			func_403(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_166(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_400(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_326(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_326(iParam0, 0, 0) - iParam1) < 0)
		{
			func_418(iParam0, func_326(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_341(iParam0) == -427144552)
	{
		if (!func_756(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_757(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_350(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_403(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_758(iParam0, iParam1);
	return 1;
}

bool func_419(int iParam0)
{
	switch (func_346(iParam0))
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

void func_420(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_346(iParam0))
	{
		case -2061583405:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_759(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_760();
	}
	if (bParam1)
	{
		func_761(0, 0);
	}
}

int func_421(int iParam0)
{
	Var0 = { func_434(iParam0, 1, 0) };
	return func_435(Var0.f_4);
}

int func_422(int iParam0, int iParam1)
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

void func_423(int iParam0)
{
	if (func_115() == -1)
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
		iVar0 = func_422(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_762(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_424()
{
	return Global_1946804->f_1;
}

bool func_425(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_763(iParam6);
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
		func_765(uParam0, func_764(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_422(iVar3, 1);
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
							if (func_766(iVar3) && func_767(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_768(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_426(int iParam0, int iParam1)
{
	if (func_115() == -1)
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

int func_427(int iParam0, int iParam1)
{
	vVar0 = { func_426(iParam0, iParam1) };
	return vVar0.x;
}

void func_428(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_429(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_430(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_769(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_770(iParam0))
	{
		return false;
	}
	if (func_771(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_723(iParam0, 1)) || func_20(32768))
	{
		if (!func_723(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_772())
	{
		return false;
	}
	return true;
}

void func_431(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_432(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_773(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_774(Var0);
}

struct<5> func_434(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_775(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_341(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_667(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_776(bParam1) };
			if (bParam2 && func_777(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_665(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_665(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_666(iParam0, &Var5, 1728382685))
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
			Var0 = { func_778(bParam1) };
			switch (func_346(iParam0))
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
			if (func_779(iParam0, -1823706425))
			{
				Var0 = { func_667(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_779(iParam0, -1483207246))
			{
				Var0 = { func_667(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_780(Var0, &Var27, bParam1, 0))
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

int func_435(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_781(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_436(int iParam0)
{
	func_762(Global_1946804->f_1497.f_1[func_422(iParam0, 1)], 2, 6);
	func_762(Global_1946804->f_1378.f_1[func_422(iParam0, 1)], 2, 6);
}

bool func_437(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_438(int iParam0)
{
	return iParam0 != 0;
}

int func_439(int iParam0)
{
	iVar0 = -1;
	if (!func_438(iParam0))
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

bool func_440(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_441(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_782(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_442(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_443(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_444(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_445(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_446(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_447(int iParam0, int iParam1)
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

void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_783(iParam0, iParam6);
	func_784(iParam0, iParam5);
	func_785(iParam0, iParam4);
	func_786(iParam0, iParam3);
	func_787(iParam0, iParam2);
	func_788(iParam0, iParam1);
}

bool func_449(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_446(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_445(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_444(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_441(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_442(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_443(iParam0);
	if (iVar5 < 1 || iVar5 > func_447(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_450(int iParam0, bool bParam1)
{
	return func_619(func_113(), iParam0, bParam1);
}

void func_451(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_452(int iParam0, int iParam1)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_642(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_717("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_718(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_437(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_719(iVar1);
				return true;
			}
			iVar3++;
		}
		func_719(iVar1);
	}
	return false;
}

var func_453(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_789(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_454()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_790(iVar1);
		if (!_unlock_is_visible(func_791(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_455()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_790(iVar0);
		if (!_unlock_is_visible(func_791(iVar1)))
		{
			_unlock_set_visible(func_791(iVar1), true);
		}
		iVar0++;
	}
}

void func_456(int iParam0, int iParam1, bool bParam2)
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

bool func_457(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_458()
{
	return (func_95(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_459(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_115() != -1)
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
	if (!func_322(iVar0, 0))
	{
		return 0;
	}
	if (!func_792(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_793(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_342(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_434(iVar0, 0, 1) };
	iVar10 = func_794(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_795(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_796(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_138(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_750(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_460(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_461(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_453(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_462(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_463(bool bParam0, bool bParam1)
{
	if (func_115() != -1)
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

void func_464(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_683(iParam0, sParam4, iParam5);
	}
	func_684(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_465(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_797())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_797())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_79(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_120(iParam0);
	if (func_80(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_80(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_798(1, iVar1);
					func_798(8, iVar1);
					func_798(7, iVar1);
					break;
				case 12:
					func_798(6, iVar1);
					break;
				case 53:
					func_798(3, iVar1);
					func_798(7, iVar1);
					func_798(4, iVar1);
					break;
				case 20:
					func_798(8, iVar1);
					break;
				case 19:
					func_798(1, iVar1);
					func_798(2, iVar1);
					break;
				case 24:
					func_798(3, iVar1);
					func_798(9, iVar1);
					func_798(20, iVar1);
					break;
				case 28:
					func_798(1, iVar1);
					break;
				case 34:
					func_798(23, iVar1);
					func_798(2, iVar1);
					func_798(18, iVar1);
					break;
				case 29:
					func_798(0, iVar1);
					func_798(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_798(0, iVar1);
					func_798(3, iVar1);
					func_798(2, iVar1);
					func_798(11, iVar1);
					func_798(6, iVar1);
					func_798(25, iVar1);
					func_798(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_798(5, iVar1);
					break;
				case 63:
					func_798(1, iVar1);
					func_798(3, iVar1);
					break;
				case 37:
					func_798(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_182(0, 10, 11, 2116153146))
			{
				func_798(7, iVar1);
				func_798(4, iVar1);
			}
			else if (iParam0 == func_182(0, 7, 11, -379687487))
			{
				func_798(8, iVar1);
				func_798(15, iVar1);
			}
			else if (iParam0 == func_182(0, 8, 11, -1386089015))
			{
				func_798(3, iVar1);
			}
			else if (iParam0 == func_182(0, 11, 11, -1952009645))
			{
				func_798(6, iVar1);
				func_798(3, iVar1);
			}
			else if (iParam0 == func_182(0, 12, 11, 2065895756))
			{
				func_798(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_799()));
	if (!func_800(629))
	{
		func_144(629, 0);
	}
}

int func_466(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_467(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_468(int iParam0, int iParam1, var uParam2)
{
	if (!func_467(iParam0))
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

int func_469()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_470(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_471(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_801(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_469())
	{
		return -1;
	}
	iVar0 = func_470(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_276(iVar1, 0);
	func_299(iVar1, 0);
	func_802(iVar1, 0);
	func_803(iVar1, 0);
	func_804(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_805(iVar1, iParam4);
	}
	return iVar1;
}

int func_472(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_166(1811977508, 1, 0))
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
			if (func_322(iVar25, 0) && func_342(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_473(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

Vector3 func_474(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_806(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_807() == 0 && !func_808(0))
		{
			bVar14 = true;
		}
	}
	if (!func_809(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_810();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_811(Global_1310720->f_21))
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
			vVar7 = { func_812(iVar0, iVar1) };
			bVar11 = func_813(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_475(vVar7)) && func_814(iVar0, bParam8, iParam12)) && !func_815(iVar0)) || bVar11)
			{
				if (func_816(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

bool func_475(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_477(vector3 vParam0, bool bParam3)
{
	iVar0 = func_817(vParam0);
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

void func_478()
{
	disable_script_brain_set(1);
}

void func_479()
{
}

void func_480()
{
	disable_script_brain_set(2);
}

int func_481(int iParam0, int iParam1)
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

int func_482(int iParam0)
{
	return iParam0;
}

void func_483(int iParam0)
{
	if (!func_818(iParam0))
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

bool func_484(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_485(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_264, iVar0, func_819(iVar0));
		iVar0++;
	}
}

void func_486(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_491() - fParam1);
	func_820(uParam0, 1);
	func_821(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_487(var uParam0)
{
	return func_484(*uParam0, 2);
}

int func_488()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_489()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_822(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_491()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_492(var uParam0, char* sParam1, var uParam2)
{
	Var0 = Global_1359489->f_21;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	Var0.f_4 = get_hash_key(sParam1);
	if (func_823(Var0, 2072518271, uParam2, 0))
	{
		return true;
	}
	return false;
}

void func_493(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_494(char[4] cParam0)
{
	return _0xd89504d9d7d5057d(cParam0);
}

void func_495(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_824(uParam0, iParam1, sParam2))
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

char* func_496(int iParam0)
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

bool func_497(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_825(cParam1, cParam0);
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

bool func_498(int iParam0, var uParam1, var uParam2)
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

void func_499(var uParam0, int iParam1)
{
	func_826(uParam0, iParam1);
}

bool func_500(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_827(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_827(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_213(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_828(sParam1))
			{
				return true;
			}
		}
		else if (func_497(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_501(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_502(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_503(int iParam0, int iParam1, bool bParam2)
{
	if (func_198(iParam0->f_127, iParam1))
	{
		return;
	}
	if (bParam2)
	{
		func_70(&(iParam0->f_79));
	}
	switch (iParam1)
	{
		case 1:
			func_829("FS06_O_STRT");
			iParam0->f_79 = _blip_add_for_radius(408396114, func_509(12), 9f);
			break;
		case 2:
			func_829("FS06_O_RD01");
			iParam0->f_79 = _blip_add_for_radius(408396114, func_509(13), 10f);
			break;
		case 4:
			iParam0->f_79 = _blip_add_for_radius(408396114, func_509(14), 10f);
			break;
		case 8:
			func_829("FS06_O_LAND");
			iParam0->f_79 = _blip_add_for_coord(408396114, func_509(1));
			break;
		case 16:
			func_830(17);
			func_829("FS06_O_FHOS");
			break;
		case 32:
			func_831("FS06_O_FHOS", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 512:
			func_831("FS06_O_SRCH", 7500, 0, 1, 0, 0, -1, -1, 0);
			iParam0->f_79 = _blip_add_for_coord(408396114, func_509(28));
			func_9(17);
			break;
		case 1024:
			func_829("FS06_O_SRCH");
			break;
		case 2048:
			func_831("FS06_O_SRCH", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 64:
			func_9(17);
			func_831("FS06_O_CEGG", 7500, 0, 1, 0, 0, -1, -1, 0);
			iParam0->f_118[0] = _blip_add_for_radius(-1282792512, func_509(24), 20f);
			break;
		case 128:
			if (does_blip_exist(&(iParam0->f_118[0])))
			{
				remove_blip(iParam0->f_118[0]);
			}
			if (!is_entity_dead(iParam0->f_143))
			{
				iParam0->f_79 = _blip_add_for_radius(408396114, get_entity_coords(iParam0->f_143, true, false), 8f);
			}
			func_831("FS06_O_RHOS", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 256:
			iParam0->f_79 = _blip_add_for_coord(408396114, func_509(4));
			func_829("FS06_O_RDCK");
			iParam0->f_67 = { get_entity_coords(Global_35, true, false) };
			break;
		case 4096:
			func_830(17);
			func_831("FS06_WAIT", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
	}
	func_499(&(iParam0->f_127), iParam1);
}

bool func_504(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

bool func_505(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_832(uParam0, 256) && !func_832(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_833(uParam0, sParam1);
	if (!func_832(uParam0, 64))
	{
		if (!func_475(func_834(uParam0)))
		{
			func_835(uParam0, 64);
		}
		else
		{
			vVar0 = { func_836(uParam0) };
			if (!func_475(vVar0))
			{
				func_837(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_222(Global_35, func_834(uParam0), 1);
	if (func_832(uParam0, 128) || func_832(uParam0, 256))
	{
		if ((fVar3 >= func_838(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_839();
				uParam0->f_241 = 0;
			}
			func_840(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_841(uParam0);
			func_842(uParam0, 128, 1);
			func_842(uParam0, 256, 1);
			func_842(uParam0, 4096, 1);
			func_842(uParam0, 32768, 1);
			func_842(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_843(uParam0) || bParam2)
	{
		if (!func_832(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_843(uParam0) >= func_838(uParam0))
				{
				}
				Var4 = { func_844(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_845(uParam0);
				}
				Var4 = { func_844(uParam0) };
				iVar12 = 256;
				if (!func_832(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_846(uParam0, 0, 0, 0, 0);
				func_835(uParam0, 128);
			}
		}
	}
	if (func_832(uParam0, 128))
	{
		if (func_832(uParam0, 256) && !func_832(uParam0, 4194304))
		{
			return true;
		}
		func_847(uParam0);
		if (!uParam0->f_241)
		{
			if (func_848())
			{
				func_715(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_849(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_174[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_174[iVar14], &Var15))
					{
						if (!uParam0->f_174[iVar14]->f_8)
						{
							uParam0->f_174[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_156, uParam0->f_174[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_832(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_832(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_835(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_835(uParam0, 256);
			func_842(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

char[] func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@common@cnv_camp@caprs@hunt06@ig4_flanked_gators@action";
		case 1:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@action_a";
		case 2:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@action_b";
		case 3:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@grab";
		case 4:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@player";
		case 5:
			return "script@common@cnv_camp@caprs@hunt06@ig3_stop_swamp@action";
		default:
			break;
	}
	return "FAIL -- 1";
}

bool func_507(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (!*uParam1 && !_does_anim_scene_exist(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = _create_anim_scene(sParam2, iParam5, sParam3, false, true);
		}
		load_anim_scene(*uParam0);
		*uParam1 = 1;
	}
	return false;
}

void func_508(int iParam0, int iParam1)
{
	if (func_198(iParam0->f_64, iParam1))
	{
		iParam0->f_12 = 1;
	}
	else
	{
		iParam0->f_12 = iParam1;
	}
}

Vector3 func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2031.26f, -1893.948f, 40.6459f;
		case 1:
			return 2027.585f, -1890.37f, 40.56217f;
		case 2:
			return 2064.707f, -1885.492f, 40.6317f;
		case 3:
			return 2022.658f, -1891.32f, 40.15999f;
		case 4:
			return 1982.525f, -1857.015f, 40.5579f;
		case 5:
			return 1983.451f, -1862.43f, 40.49999f;
		case 6:
			return 2066.554f, -1902.728f, 40.63449f;
		case 7:
			return 2068.034f, -1882.158f, 40.6691f;
		case 8:
			return 2069.391f, -1881.983f, 40.66987f;
		case 9:
			return 2019.253f, -1859.991f, 41.77441f;
		case 10:
			return 2026.394f, -1874.531f, 41.58564f;
		case 11:
			return 2027.075f, -1892.115f, 41.6136f;
		case 12:
			return 2002.637f, -1866.503f, 40.49999f;
		case 13:
			return 2016.72f, -1886.462f, 40.49999f;
		case 14:
			return 2021.443f, -1885.805f, 40.5f;
		case 15:
			return 2067.66f, -1914.36f, 40.86f;
		case 16:
			return 2077.957f, -1907.256f, 40.64867f;
		case 17:
			return 2071.993f, -1910.36f, 40.5f;
		case 18:
			return 1983.26f, -1856.4f, 40.96f;
		case 19:
			return 2066.554f, -1902.728f, 40.63449f;
		case 20:
			return 2070.611f, -1925.289f, 41.67448f;
		case 21:
			return 2083.134f, -1917.26f, 41.07687f;
		case 22:
			return 2076.651f, -1910.698f, 40.8026f;
		case 23:
			return 2063.647f, -1882.2f, 40.79704f;
		case 24:
			return 2079.855f, -1917.969f, 40.83665f;
		case 25:
			return 2082.016f, -1916.592f, 40.88255f;
		case 26:
			return 2042.152f, -1886.615f, 40.54886f;
		case 27:
			return 2058.205f, -1865.462f, 40.64285f;
		case 28:
			return 2058.2f, -1866.728f, 40.77211f;
		case 29:
			return 2057.209f, -1868.232f, 40.51323f;
		case 30:
			return 1997.684f, -1870.47f, 40.5f;
		case 31:
			return 2030.731f, -1891.132f, 40.4637f;
		case 32:
			return 2032.035f, -1891.953f, 40.5398f;
		case 33:
			return 2065.128f, -1884.421f, 40.7049f;
		case 34:
			return 1981.882f, -1858.75f, 40.96897f;
		case 35:
			return 1980.227f, -1861.105f, 40.92942f;
		case 36:
			return 2070.197f, -1882.268f, 40.69093f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_510(int iParam0)
{
	if (does_entity_exist(iParam0->f_143) && is_ped_in_vehicle(Global_35, iParam0->f_143, false))
	{
		disable_control_action(0, -17122892, false);
	}
}

void func_511()
{
	Global_1905944->f_5695 = 1;
}

int func_512(int iParam0, char* sParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7)
{
	switch (iParam0->f_13)
	{
		case 0:
			if (func_222(Global_35, vParam2, 1) > fParam5)
			{
				func_850(sParam1, 7500, 0, 0, 0, 1);
				func_829(sParam1);
				func_213(&(iParam0->f_156));
				iParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_203(&(iParam0->f_156)))
			{
				if (func_218(&(iParam0->f_156)) > 2f)
				{
					func_831(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
					func_204(&(iParam0->f_156));
				}
			}
			if (func_222(Global_35, vParam2, 1) > fParam7)
			{
				iParam0->f_13 = 2;
			}
			else if (func_222(Global_35, vParam2, 1) < fParam6)
			{
				func_829("FS06_O_STRT");
				iParam0->f_13 = 0;
			}
			break;
		case 2:
			return 0;
	}
	return 1;
}

void func_513(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* sParam5)
{
	if (bParam1)
	{
		_0xd747979c053efa7a(func_50());
		_0xbf6583e926d13890(Global_35, 1);
		if (!is_string_null_or_empty(sParam5))
		{
			if (get_is_waypoint_recording_loaded(sParam5))
			{
				_0x0c6a00dae896614c(Global_35, sParam5);
			}
		}
		if (func_58(iParam0))
		{
			if (func_65(iParam0, 0))
			{
				_0x991e3346d788f20f(func_75(iParam0), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (func_65(iVar0, 1))
			{
				_0x0a8fd91ede7b328a(func_75(iVar0), 1);
			}
			iVar0++;
		}
		_0x9c902084f48d2e6c(func_50());
		if (bParam3)
		{
			_0xa079ff7cfb9ac8bd(func_50(), 2);
		}
		if (bParam2)
		{
			_0x8fb98b719aa0075a(func_50(), 10f, -1f, -1, -1f);
		}
		if (func_58(iParam0))
		{
			_0x086549f3b0381cb1(get_player_index(), 0);
			_0xac22aa6df4d1c1de(player_id(), func_75(iParam0), -1082130432, -1082130432, 4, 2, 0);
		}
	}
	else
	{
		_0xbf6583e926d13890(Global_35, 0);
		_0xd747979c053efa7a(func_50());
		_0x12e09e278c6c29b7(player_id());
		if (bParam4)
		{
		}
	}
}

struct<4> func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { func_509(5) };
			Var0.f_3 = func_851(5);
			break;
		case 1:
			Var0 = { func_509(1) };
			Var0.f_3 = func_851(1);
			break;
		case 2:
			Var0 = { func_509(33) };
			Var0.f_3 = func_851(33);
			break;
		case 3:
			Var0 = { func_509(30) };
			Var0.f_3 = func_851(30);
			break;
	}
	return Var0;
}

void func_515(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	if (Global_1391438->f_3 != iParam9)
	{
		func_100(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_852(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_517(var uParam0, vector3 vParam1, int iParam4)
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
	Var0 = { vParam1 };
	Var0.f_3 = 0;
	Var0.f_8 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam4;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

void func_518(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_854(vParam1, 0f, 0f, 0f))
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
	fVar3 = func_222(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_855() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			if (!is_entity_dead(iVar0) && !func_856(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_856(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_519(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_520(int iParam0, int iParam1)
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

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "cact_fishing06_hoseaFlank";
		case 1:
			return "cact_fishing06_hoseaWalk";
		default:
			break;
	}
	return "FAIL -- 0";
}

void func_522(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

bool func_523(var uParam0, int iParam1)
{
	if (is_entity_dead(&(iParam1->f_80[0])))
	{
		return false;
	}
	waypoint_recording_get_closest_waypoint(func_521(1), get_entity_coords(&(iParam1->f_80[0]), true, false), &iVar0);
	func_857(iParam1);
	switch (iParam1->f_5)
	{
		case 0:
			if (func_858())
			{
				func_859();
			}
			func_508(iParam1, 4);
			if (is_entity_dead(iParam1->f_143))
			{
				return false;
			}
			if (does_blip_exist(uParam0->f_43))
			{
				remove_blip(&(uParam0->f_43));
			}
			if (!is_ped_in_vehicle(Global_35, iParam1->f_143, false) && !is_ped_in_vehicle(&(iParam1->f_80[0]), iParam1->f_143, false))
			{
				func_515(uParam0, func_514(1), func_514(2), 1, 2);
				func_860();
				func_503(iParam1, 16, 1);
				func_861(&(iParam1->f_5), 1);
			}
			break;
		case 1:
			if (!_does_anim_scene_exist(&(Local_134.f_57[1])))
			{
				func_508(iParam1, 4);
			}
			else if (!_is_anim_scene_loaded(&(Local_134.f_57[1]), true, false))
			{
			}
			else if (get_script_task_status(&(Local_134.f_80[0]), 658540077, true) == 1)
			{
				func_508(iParam1, 8);
				func_862(iParam1);
				func_213(&(iParam1->f_131));
				func_863(iParam1);
				func_861(&(iParam1->f_5), 2);
			}
			break;
		case 2:
			func_864(&(iParam1->f_80[0]), Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
			func_865(Global_35, &(iParam1->f_80[0]), 1, 1, 1, 0, 0, 1, 1, 1, 1);
			func_866(&(iParam1->f_40), &(iParam1->f_80[0]));
			bVar1 = false;
			if (_does_anim_scene_exist(&(iParam1->f_57[1])))
			{
				if ((_is_anim_scene_finished(&(iParam1->f_57[1]), false) && func_218(&(iParam1->f_131)) > 3f) && !func_502(1))
				{
					if (!func_198(iParam1->f_129, 2))
					{
						func_501(&(iParam1->f_11), 22);
					}
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if ((func_198(iParam1->f_129, 2) && !func_198(iParam1->f_129, 4)) && func_827(Global_35, &(iParam1->f_80[0]), 1, 1) > 8f)
			{
				func_501(&(iParam1->f_11), 23);
			}
			if (!func_198(iParam1->f_128, 536870912) && iVar0 >= 9)
			{
				if (_0xde0ea444735c1368(&(iParam1->f_112[4])))
				{
					_0x2c87c3e1c7b96ee2(&(iParam1->f_112[4]));
				}
				if (is_waypoint_playback_going_on_for_ped(&(iParam1->f_80[0]), 0))
				{
					waypoint_playback_pause(&(iParam1->f_80[0]), 1, 0, 0);
				}
				func_499(&(iParam1->f_128), 536870912);
			}
			if (bVar1)
			{
				func_861(&(iParam1->f_5), 3);
			}
			break;
		case 3:
			if ((!func_502(1) && func_198(iParam1->f_129, 2)) && func_867(iParam1))
			{
				func_868(&(iParam1->f_80[0]), 1);
				func_869(Global_35, 1);
				func_870(&(iParam1->f_40));
				func_861(&(iParam1->f_5), 4);
			}
			break;
		case 4:
			func_871(iParam1);
			func_503(iParam1, 32, 1);
			func_861(&(iParam1->f_5), 5);
			break;
		case 5:
			func_864(&(iParam1->f_80[0]), Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
			func_865(Global_35, &(iParam1->f_80[0]), 1, 1, 1, 0, 0, 1, 1, 1, 1);
			if (!func_198(iParam1->f_128, 268435456))
			{
				func_501(&(iParam1->f_11), 12);
				func_499(&(iParam1->f_128), 268435456);
			}
			if ((!func_198(iParam1->f_128, 2048) && !func_502(1)) && iVar0 >= 28)
			{
				func_501(&(iParam1->f_11), 13);
				func_499(&(iParam1->f_128), 2048);
			}
			if (iVar0 >= 37)
			{
				waypoint_playback_pause(&(iParam1->f_80[0]), 1, 0, 0);
				func_868(&(iParam1->f_80[0]), 1);
				func_869(Global_35, 1);
				func_870(&(iParam1->f_40));
				func_872(&(iParam1->f_10), 0);
				func_861(&(iParam1->f_5), 6);
			}
			break;
		case 6:
			if (func_873(iParam1))
			{
				settimera(0);
				iParam1->f_19 = { func_509(28) };
				func_503(iParam1, 512, 1);
				func_213(&(iParam1->f_131));
				func_861(&(iParam1->f_5), 7);
			}
			break;
		case 7:
			func_874(Local_134.f_80[0], &Global_35, 500);
			if (func_218(&(iParam1->f_131)) > 3f && !func_198(iParam1->f_129, 8))
			{
				func_501(&(iParam1->f_11), 24);
			}
			if (func_218(&(iParam1->f_131)) > 18f && !func_198(iParam1->f_129, 16))
			{
				func_501(&(iParam1->f_11), 25);
			}
			if (iParam1->f_19.f_9)
			{
				func_501(&(iParam1->f_11), 27);
			}
			if (func_875(&(iParam1->f_19)))
			{
				set_player_control(get_player_index(), true, 256, false);
				func_501(&(iParam1->f_11), 14);
				func_876(&(iParam1->f_19));
				func_213(&(iParam1->f_131));
				func_861(&(iParam1->f_5), 8);
			}
			break;
		case 8:
			if (!func_198(iParam1->f_127, 2048))
			{
				if (!func_504("HUNT06_LOC_02R"))
				{
					if (func_203(&(iParam1->f_131)))
					{
						if (func_218(&(iParam1->f_131)) > 8f)
						{
							func_503(iParam1, 2048, 1);
						}
						if (func_877(&(iParam1->f_19)))
						{
							func_213(&(iParam1->f_131));
							func_499(&(iParam1->f_127), 2048);
						}
					}
				}
			}
			else if ((!func_198(iParam1->f_129, 32) && !func_502(1)) && func_218(&(iParam1->f_131)) > 5f)
			{
				func_501(&(iParam1->f_11), 26);
			}
			func_874(Local_134.f_80[0], &Global_35, 500);
			if (iParam1->f_19.f_9)
			{
				func_501(&(iParam1->f_11), 28);
			}
			if (func_875(&(iParam1->f_19)))
			{
				func_878(&(iParam1->f_127), 16);
				func_503(iParam1, 16, 1);
				set_player_control(get_player_index(), true, 256, false);
				func_501(&(iParam1->f_11), 16);
				func_861(&(iParam1->f_5), 9);
			}
			break;
		case 9:
			func_508(iParam1, 32);
			func_879(iParam1);
			func_861(&(iParam1->f_5), 10);
			break;
		case 10:
			if (!func_198(iParam1->f_129, 256))
			{
				func_501(&(iParam1->f_11), 29);
			}
			func_880(iParam1);
			if (iVar0 >= 51)
			{
				settimera(0);
				func_881(iParam1);
				func_868(&(iParam1->f_80[0]), 1);
				func_869(Global_35, 1);
				func_870(&(iParam1->f_40));
				if (does_entity_exist(&(iParam1->f_80[3])))
				{
					open_sequence_task(&iVar2);
					task_follow_nav_mesh_to_coord(0, func_509(6), 1.5f, -1, 0.25f, 1048576, 40000f);
					task_stand_still(0, -1);
					func_882(&(iParam1->f_80[3]), &iVar2, 0, 0, 1, 1);
				}
				func_861(&(iParam1->f_5), 11);
			}
			else
			{
				func_864(&(iParam1->f_80[0]), Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
				func_865(Global_35, &(iParam1->f_80[0]), 1, 1, 1, 0, 0, 1, 1, 1, 1);
			}
			break;
		case 11:
			func_880(iParam1);
			if (_does_anim_scene_exist(&(iParam1->f_57[5])))
			{
				if (_is_anim_scene_started(&(iParam1->f_57[5]), false))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", 1f, -1);
					_0x437c08db4febe2bd(&(iParam1->f_80[0]), "Stealth", 1f, -1);
					trigger_music_event("BOB_HUNT06_GATORS");
					func_9(17);
					func_861(&(iParam1->f_5), 12);
				}
			}
			else
			{
				func_861(&(iParam1->f_5), 12);
			}
			break;
		case 12:
			func_880(iParam1);
			if (_does_anim_scene_exist(&(iParam1->f_57[5])))
			{
				if (_is_anim_scene_started(&(iParam1->f_57[5]), false))
				{
					if (_0x005e6f28dd7ed58d(&(iParam1->f_57[5]), "pearson") || _is_anim_scene_finished(&(iParam1->f_57[5]), false))
					{
						force_ped_motion_state(&(iParam1->f_80[0]), 147004056, false, 0, false);
						func_883(&(iParam1->f_80[0]), 0);
						_0x2208438012482a1a(&(iParam1->f_80[0]), false, false);
						func_861(&(iParam1->f_5), 13);
					}
				}
				else
				{
					func_861(&(iParam1->f_5), 13);
				}
			}
			else
			{
				func_861(&(iParam1->f_5), 13);
			}
			break;
		case 13:
			func_884(iParam1);
			return true;
	}
	return false;
}

bool func_524(var uParam0, int iParam1)
{
	if (iParam1->f_66 == 0 && !func_198(iParam1->f_128, 1073741824))
	{
		if (func_885())
		{
			func_499(&(iParam1->f_128), 1073741824);
		}
	}
	if (_does_volume_exist(&(iParam1->f_112[2])))
	{
		if (!is_entity_in_volume(Global_35, &(iParam1->f_112[2]), true, 0))
		{
			if (!func_203(&(iParam1->f_134)))
			{
				func_60(&(iParam1->f_134), 0);
			}
			if (func_203(&(iParam1->f_134)) && func_214(&(iParam1->f_134)) > 10000)
			{
				func_499(&(Local_134.f_128), 2097152);
				return false;
			}
		}
		else if (func_203(&(iParam1->f_134)))
		{
			func_204(&(iParam1->f_134));
		}
	}
	if (func_886(Global_35, &(iParam1->f_112[0]), 1, 0) && !func_198(iParam1->f_128, 16384))
	{
		func_887(iParam1->f_143, 3);
		freeze_entity_position(iParam1->f_143, true);
		func_499(&(iParam1->f_128), 16384);
	}
	func_888(iParam1);
	if (iParam1->f_7 >= 6)
	{
		func_889(iParam1);
	}
	if (iParam1->f_7 < 10)
	{
		func_890(iParam1);
	}
	if (iParam1->f_7 < 10)
	{
		if (func_891(&(iParam1->f_80[0]), iParam1->f_143, 0) && func_827(Global_35, &(iParam1->f_80[0]), 1, 1) < 15f)
		{
			func_892(iParam1);
		}
	}
	switch (iParam1->f_7)
	{
		case 0:
			if (func_858())
			{
				func_859();
			}
			func_893(iParam1);
			if (!func_507(iParam1->f_57[0], &(iParam1->f_77), func_506(0), 0, 1, 0))
			{
				return false;
			}
			if (does_blip_exist(uParam0->f_43))
			{
				remove_blip(&(uParam0->f_43));
			}
			set_anim_scene_entity(&(iParam1->f_57[0]), "pearson", &(iParam1->f_80[0]), 0);
			func_544(Global_36);
			func_515(uParam0, func_514(2), func_514(3), 2, 3);
			iParam1->f_145 = func_326(2116770557, 0, 0);
			iParam1->f_146 = func_894(2116770557, 0);
			if (!is_entity_dead(Local_134.f_143))
			{
				set_entity_heading(Local_134.f_143, func_851(30));
			}
			func_895(&(iParam1->f_7), 3);
			break;
		case 3:
			if (func_858())
			{
				func_883(&(iParam1->f_80[0]), 0);
				func_503(&Local_134, 4096, 1);
				func_859();
			}
			fVar0 = func_222(&(iParam1->f_80[0]), 2053.998f, -1898.839f, 40.65331f, 1);
			if (fVar0 < 9f)
			{
				if (!is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), true, 0, false);
				}
			}
			if (fVar0 < 1.5f)
			{
				func_893(iParam1);
				_0x411189e51b8020ba(&(iParam1->f_80[0]), "Stealth");
				_set_ped_crouch_movement(&(Local_134.f_80[0]), false, 0, false);
				start_anim_scene(&(iParam1->f_57[0]));
				func_895(&(iParam1->f_7), 4);
			}
			break;
		case 4:
			if (func_858())
			{
				func_893(iParam1);
				func_859();
			}
			if (_does_anim_scene_exist(&(iParam1->f_57[0])) && _is_anim_scene_started(&(iParam1->f_57[0]), false))
			{
				if (!func_198(iParam1->f_128, 262144) && _get_anim_scene_progress(&(iParam1->f_57[0])) > 0.45f)
				{
					func_499(&(iParam1->f_128), 262144);
				}
				if (!func_198(iParam1->f_128, 131072) && _get_anim_scene_progress(&(iParam1->f_57[0])) > 0.6f)
				{
					set_player_control(get_player_index(), true, 0, false);
					func_499(&(iParam1->f_128), 131072);
				}
				if (_get_anim_scene_progress(&(iParam1->f_57[0])) > 0.71f)
				{
					func_895(&(iParam1->f_7), 5);
				}
				if (func_198(iParam1->f_128, 1048576))
				{
					func_499(&(iParam1->f_128), 16777216);
					remove_anim_scene_entity(&(iParam1->f_57[0]), "pearson", &(iParam1->f_80[0]));
					abort_anim_scene(&(iParam1->f_57[0]), true);
					task_enter_vehicle(&(iParam1->f_80[0]), iParam1->f_143, 20000, 1, 2f, 262144, 0);
					_0x2208438012482a1a(&(iParam1->f_80[0]), false, false);
					func_204(&(iParam1->f_131));
					func_895(&(iParam1->f_7), 6);
				}
			}
			break;
		case 5:
			if (func_858())
			{
				func_213(&(iParam1->f_131));
				func_499(&(iParam1->f_128), 32768);
				set_player_control(get_player_index(), true, 0, false);
				func_859();
			}
			if (_0x005e6f28dd7ed58d(&(iParam1->f_57[0]), "pearson"))
			{
				task_enter_vehicle(&(iParam1->f_80[0]), iParam1->f_143, 20000, 1, 2f, 262144, 0);
				_0x2208438012482a1a(&(iParam1->f_80[0]), false, false);
				func_204(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 6);
			}
			break;
		case 6:
			if (func_858())
			{
				func_503(iParam1, 64, 1);
				if (!func_203(&(iParam1->f_131)))
				{
					func_213(&(iParam1->f_131));
				}
				if (func_198(iParam1->f_128, 16777216))
				{
				}
				func_859();
			}
			if (!func_891(&(iParam1->f_80[0]), iParam1->f_143, 0) && get_script_task_status(&(iParam1->f_80[0]), -1794415470, true) != 1)
			{
				task_enter_vehicle(&(iParam1->f_80[0]), iParam1->f_143, 20000, 1, 2f, 262144, 0);
			}
			if (((func_198(iParam1->f_128, 1048576) && func_198(iParam1->f_128, 2)) || (func_198(iParam1->f_128, 16) && func_198(iParam1->f_128, 2))) || ((!func_886(Global_35, &(iParam1->f_112[1]), 1, 0) && func_827(Global_35, iParam1->f_143, 1, 1) < 24f) && func_198(iParam1->f_128, 2)))
			{
				func_213(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 10);
			}
			if (func_198(iParam1->f_128, 8))
			{
				func_213(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 10);
			}
			break;
		case 7:
			if (func_858())
			{
				func_859();
			}
			func_896(&(iParam1->f_80[1]), Global_35, &(iParam1->f_112[1]));
			func_895(&(iParam1->f_7), 6);
			break;
		case 8:
			if (func_858())
			{
				func_859();
			}
			func_897(&(iParam1->f_80[2]), 25, 2f);
			func_897(&(iParam1->f_80[3]), 25, 1.5f);
			func_895(&(iParam1->f_7), 6);
			break;
		case 9:
			if (func_858())
			{
				func_859();
			}
			break;
		case 10:
			if (!func_203(&(iParam1->f_131)))
			{
				func_213(&(iParam1->f_131));
			}
			else if (func_218(&(iParam1->f_131)) >= 2f && func_198(iParam1->f_128, 8))
			{
				return true;
			}
			if ((func_198(iParam1->f_128, 1048576) || func_198(iParam1->f_128, 16)) || func_827(Global_35, iParam1->f_143, 1, 1) < 24f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_525(var uParam0, int iParam1)
{
	fVar1 = func_827(Global_35, &(iParam1->f_80[0]), 1, 1);
	if (iParam1->f_8 < 3)
	{
		if (_does_volume_exist(&(iParam1->f_112[2])))
		{
			if (!is_entity_in_volume(Global_35, &(iParam1->f_112[2]), true, 0))
			{
				if (!func_203(&(iParam1->f_134)))
				{
					func_60(&(iParam1->f_134), 0);
				}
				if (func_203(&(iParam1->f_134)) && func_214(&(iParam1->f_134)) > 10000)
				{
					func_499(&(Local_134.f_128), 2097152);
					return false;
				}
			}
			else if (func_203(&(iParam1->f_134)))
			{
				func_204(&(iParam1->f_134));
			}
		}
	}
	if ((!is_entity_dead(iParam1->f_143) && _0x083d497d57b7400f(iParam1->f_143)) && is_ped_in_vehicle(Global_35, iParam1->f_143, false))
	{
		freeze_entity_position(iParam1->f_143, false);
	}
	func_888(iParam1);
	StringCopy(&cVar2, func_898(0), 32);
	switch (iParam1->f_8)
	{
		case 0:
			if (func_858())
			{
				func_503(iParam1, 128, 1);
				func_859();
			}
			func_899(&(iParam1->f_8), 1);
			break;
		case 1:
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if ((is_entity_dead(&(iParam1->f_80[iVar6])) || func_222(&(iParam1->f_80[iVar6]), func_509(24), 1) < 30f) || func_827(Global_35, iParam1->f_143, 1, 1) < 24f)
				{
					func_899(&(iParam1->f_8), 2);
				}
				iVar6++;
			}
			break;
		case 2:
			if (func_858())
			{
				func_503(iParam1, 128, 1);
				func_859();
			}
			if ((fVar1 < 40f && fVar1 > 25f) && !func_198(iParam1->f_128, 4096))
			{
				func_501(&(iParam1->f_11), 17);
				func_499(&(iParam1->f_128), 4096);
			}
			if (fVar1 < 20f)
			{
				func_213(&(iParam1->f_131));
				func_501(&(iParam1->f_11), 18);
				func_899(&(iParam1->f_8), 4);
			}
			break;
		case 4:
			if (func_858())
			{
				func_859();
			}
			if ((!func_198(iParam1->f_129, 512) && fVar1 < 12f) && func_218(&(iParam1->f_131)) > 18f)
			{
				func_501(&(iParam1->f_11), 30);
			}
			if (((!_0x619e63980bfc0096(Global_35, iParam1->f_143, 0) && !is_ped_in_vehicle(Global_35, iParam1->f_143, false)) && func_900(Global_35, iParam1->f_143, 7f, 1)) && !is_ped_in_melee_combat(Global_35))
			{
				set_player_control(get_player_index(), false, 0, false);
				_display_hud_component(724769646);
				task_enter_vehicle(Global_35, iParam1->f_143, 20000, -1, 2f, 1, 0);
			}
			if (_0x619e63980bfc0096(Global_35, iParam1->f_143, 0))
			{
				freeze_entity_position(iParam1->f_143, false);
			}
			else if (!_0x083d497d57b7400f(iParam1->f_143) && !is_ped_in_vehicle(Global_35, iParam1->f_143, true))
			{
				freeze_entity_position(iParam1->f_143, true);
			}
			if ((!is_entity_dead(iParam1->f_143) && is_ped_in_vehicle(Global_35, iParam1->f_143, false)) && is_ped_in_vehicle(&(iParam1->f_80[0]), iParam1->f_143, false))
			{
				func_70(iParam1->f_118[0]);
				func_70(&(uParam0->f_43));
				trigger_music_event("BOB_HUNT06_RETURN");
				if (!is_entity_dead(Global_35))
				{
					_0x411189e51b8020ba(Global_35, "Stealth");
				}
				if (_0x083d497d57b7400f(iParam1->f_143))
				{
					freeze_entity_position(iParam1->f_143, false);
				}
				if (_0x404527bc03da0e6c(iParam1->f_143))
				{
					_0x7c06330bfdda182e(iParam1->f_143);
				}
				_0x6835afea10e186f4(iParam1->f_143, 3);
				_hide_hud_component(724769646);
				set_player_control(get_player_index(), true, 0, false);
				func_515(uParam0, func_514(2), func_514(3), 2, 3);
				func_213(&(iParam1->f_150));
				func_899(&(iParam1->f_8), 5);
			}
			break;
		case 5:
			if (func_858())
			{
				func_503(iParam1, 256, 1);
				func_501(&(iParam1->f_11), 19);
				func_213(&(iParam1->f_131));
				func_901(iParam1, 0);
				func_859();
			}
			if (!func_198(iParam1->f_129, 1024))
			{
				if (func_218(&(iParam1->f_131)) > 3f)
				{
					func_213(&(iParam1->f_131));
					func_501(&(iParam1->f_11), 31);
				}
			}
			else if (!func_198(iParam1->f_129, 8192) && !func_198(iParam1->f_129, 4096))
			{
				if (func_218(&(iParam1->f_131)) > 8f)
				{
					if (func_902(43))
					{
						func_213(&(iParam1->f_131));
						func_501(&(iParam1->f_11), 33);
					}
					else
					{
						func_213(&(iParam1->f_131));
						func_501(&(iParam1->f_11), 34);
					}
				}
			}
			else if (!func_198(iParam1->f_129, 2048))
			{
				if (func_218(&(iParam1->f_131)) > 2f)
				{
					func_213(&(iParam1->f_131));
					func_501(&(iParam1->f_11), 32);
				}
			}
			else if (!func_198(iParam1->f_129, 16384))
			{
				if (get_entity_speed(iParam1->f_143) < 0.2f && func_218(&(iParam1->f_131)) > 10f)
				{
					func_501(&(iParam1->f_11), 35);
				}
			}
			if (func_502(1))
			{
				func_213(&(iParam1->f_150));
			}
			if (func_203(&(iParam1->f_150)) && !func_198(iParam1->f_65, 256))
			{
				if (func_218(&(iParam1->f_150)) > 6f)
				{
					if (get_distance_between_coords(Global_36, iParam1->f_67, true) < 5f)
					{
						func_831("FS06_O_RDCK", 7500, 0, 1, 0, 0, -1, -1, 0);
					}
					func_204(&(iParam1->f_150));
					func_499(&(iParam1->f_65), 256);
				}
			}
			func_505(&(iParam1->f_160), &cVar2, 1, 1);
			fVar0 = func_827(Global_35, &(iParam1->f_80[0]), 1, 1);
			if (fVar0 > 10f)
			{
				func_899(&(iParam1->f_8), 8);
				return false;
			}
			if (func_222(Global_35, func_509(18), 1) < 25f)
			{
				_0x6835afea10e186f4(iParam1->f_143, 1);
				func_899(&(iParam1->f_8), 6);
			}
			break;
		case 6:
			func_505(&(iParam1->f_160), &cVar2, 1, 1);
			if (func_222(Global_35, func_509(18), 1) < 12f)
			{
				trigger_music_event("BOB_HUNT06_STOP");
				func_899(&(iParam1->f_8), 7);
			}
			break;
		case 7:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (func_858())
			{
				func_859();
			}
			if (func_903(&(iParam1->f_160), func_75(uParam0->f_2), "MrPearson", 0, 1, 1))
			{
				if (func_65(uParam0->f_2, 0))
				{
					func_66(uParam0->f_2);
				}
				func_61(17, 0);
				task_follow_nav_mesh_to_coord(func_75(uParam0->f_2), 1957.658f, -1877.784f, 40.9145f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (func_903(&(iParam1->f_160), Global_35, "ARTHUR", 0, 1, 1))
			{
			}
			if (func_904(cVar2, &(iParam1->f_160)))
			{
				if (func_326(2116770557, 0, 0) > 0)
				{
					func_418(2116770557, 1, 0, -142743235, 0);
				}
				func_899(&(iParam1->f_8), 8);
			}
			break;
		case 8:
			if (func_858())
			{
				func_859();
			}
			func_899(&(iParam1->f_8), 9);
			break;
		case 9:
			return true;
	}
	return false;
}

void func_526(var uParam0, int iParam1, bool bParam2)
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

void func_527(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_75(iParam0);
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

void func_528(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_529(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_248(iParam0))
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
					iParam4 = func_905(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_93((*Global_1360165)[iParam0]->f_4.f_2) || func_13((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_905(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_906((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_907(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_908(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_255(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_29(func_75(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_29(func_265(iParam0), 0))
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

void func_530(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_909(iParam0, bParam3);
	}
	else
	{
		func_910(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_911(iParam0, bParam3);
	}
	else
	{
		func_912(iParam0, bParam3);
	}
}

void func_531(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_913(Global_35) && is_player_teleport_active())
	{
	}
	if (func_914(iParam0))
	{
		if (func_915(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_198(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_531(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_531(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_198(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_198(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_198(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_198(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_198(iParam5, 129))
	{
		if (func_198(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_198(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_198(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_198(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_914(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_198(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_198(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_532(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_916(iParam0, iParam1);
	return bVar0;
}

void func_533(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_532(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_534(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_917(iParam2))
		{
			iVar0 = func_918(iParam2, -1);
			if (func_919(iParam1, iVar0))
			{
				if (func_920(iParam1, iVar0))
				{
					if (func_921(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_922(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_923(iParam0, iParam1, 0);
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

void func_535(int iParam0)
{
	func_924(iParam0);
	func_925(iParam0, 0);
}

void func_536(int iParam0, int iParam1)
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

bool func_537(int iParam0)
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

void func_538(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_926(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_926(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_539(int iParam0, bool bParam1)
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
		func_593(iParam0, 1, Global_35);
	}
}

bool func_540()
{
	return func_253(1) < 3;
}

void func_541(int iParam0)
{
	if (func_58(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_927(&iVar0, 1);
				break;
			case 14:
				func_927(&iVar0, 8);
				func_927(&iVar1, 4);
				func_927(&iVar1, 5);
				func_927(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_927(&iVar0, 8);
				func_927(&iVar0, 5);
				func_927(&iVar1, 4);
				func_927(&iVar1, 0);
				break;
		}
		_0xdeb369f6ad168c58(func_75(iParam0), iVar0);
		_0x1740e3dee0ae4d27(func_75(iParam0), iVar1);
	}
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -397513868;
		case 1:
			return -1214246086;
		case 2:
			return -1768831124;
		case 3:
			return -1892280447;
		default:
			break;
	}
	return 0;
}

bool func_543(int iParam0)
{
	if (does_entity_exist(iParam0->f_143))
	{
		if (!is_entity_a_mission_entity(iParam0->f_143))
		{
			set_entity_as_mission_entity(iParam0->f_143, true, false);
		}
		return true;
	}
	if (is_itemset_valid(Global_43616))
	{
		iVar1 = get_itemset_size(Global_43616);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = get_indexed_item_in_itemset(iVar2, Global_43616);
			iVar4 = _get_entity_from_item(iVar3);
			if (does_entity_exist(iVar4))
			{
				iVar5 = get_entity_model(iVar4);
				if (iVar5 == func_542(0))
				{
					iParam0->f_143 = get_vehicle_index_from_entity_index(iVar4);
					set_vehicle_is_considered_by_player(iParam0->f_143, true);
					iVar0 = iVar3;
				}
			}
			iVar2++;
		}
	}
	else
	{
		return false;
	}
	if (_does_item_have_valid_base(iVar0))
	{
		remove_from_itemset(iVar0, Global_43616);
	}
	return true;
}

void func_544(vector3 vParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _0x59b57c4b06531e1e(vParam0, 500f, iVar0, 1);
	if (iVar1 > 0)
	{
		iVar2 = (iVar1 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
			if (does_entity_exist(iVar3))
			{
				if ((get_entity_model(iVar3) == -1892280447 || get_entity_model(iVar3) == -1598866821) || get_entity_model(iVar3) == -1295720802)
				{
					if (!is_entity_a_mission_entity(iVar3))
					{
						set_entity_as_mission_entity(iVar3, true, true);
						delete_entity(&iVar3);
					}
				}
			}
			iVar2 = (iVar2 + -1);
		}
	}
	destroy_itemset(iVar0);
}

bool func_545(var uParam0, int iParam1)
{
	if (!_does_volume_exist(*uParam0))
	{
		Var0 = { func_928(iParam1) };
		*uParam0 = _create_volume_by_hash_with_custom_name(Var0.f_9, Var0, Var0.f_3, Var0.f_6, Var0.f_10);
	}
	return true;
}

bool func_546(var uParam0)
{
	bVar0 = true;
	if (bLocal_14)
	{
		bLocal_14 = false;
		_text_database_request(sLocal_34);
		iLocal_35 = 0;
	}
	if (_text_database_has_loaded(sLocal_34) == 0)
	{
		bVar0 = false;
	}
	if (func_29(func_75(uParam0->f_2), 0))
	{
		_0xae6004120c18df97(func_75(uParam0->f_2), 0, 0);
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	func_60(&uLocal_23, 0);
	func_929(0);
	func_495(&uLocal_36, Global_35, "ARTHUR", 0);
	func_495(&uLocal_36, func_75(uParam0->f_2), func_496(uParam0->f_2), 0);
	return true;
}

int func_547(int iParam0)
{
	if (func_58(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_548(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = func_930(func_542(iParam1), func_509(iParam2), func_851(iParam2), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (iParam1 == 3)
	{
		_0x9587913b9e772d29(*uParam0, 0);
		_0x6569f31a01b4c097(*uParam0, 0, 0);
		_0x6569f31a01b4c097(*uParam0, 1, 0);
		_0x6569f31a01b4c097(*uParam0, 6, 0);
		_0x6569f31a01b4c097(*uParam0, 4, 0);
	}
	return true;
}

void func_549(var uParam0)
{
	func_931(uParam0);
	func_932(uParam0);
	func_933(uParam0);
}

Vector3 func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_934();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_551(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_552(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_569(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_553(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	func_935(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_936(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_937(iParam0, 0);
	func_938(iParam0);
}

void func_554(int iParam0)
{
	iParam0 = func_551(iParam0);
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
	func_939(&Var0);
	func_940(iParam0, Var0);
	func_941(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_942(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_943(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_944(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_945(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_946(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_947(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_948(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_949(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_555(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_556(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_557(vector3 vParam0)
{
	return func_950(_get_map_zone_at_coords(vParam0, 10));
}

int func_558(int iParam0)
{
	iParam0 = func_551(iParam0);
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

bool func_559(int iParam0)
{
	iParam0 = func_551(iParam0);
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

bool func_560(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_559(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_561(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_559(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
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

void func_562(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_563(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_951(iParam0);
	func_951(iParam0);
	func_952(iParam0, iParam1);
	func_953(iParam0, iParam1);
	func_954(iParam0, iParam1);
	iVar1 = func_558(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_955(iVar1);
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
	iVar3 = func_558(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_955(iVar3);
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
	func_956();
}

bool func_564()
{
	iVar0 = func_957();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_565()
{
	iVar0 = func_957();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_958(0);
}

void func_566(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_567(int iParam0)
{
	iParam0 = func_551(iParam0);
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

int func_568(int iParam0)
{
	iParam0 = func_551(iParam0);
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

int func_569(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_570(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_959(&iVar0, &iVar1, &iVar2);
	func_960(iParam0, iVar0);
	func_961(iParam0, iVar1);
	func_962(iParam0, iVar2);
	func_963(iParam0, 1);
	func_964(iParam0, 1);
}

void func_571(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_965(iParam0, 1);
}

void func_572(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_551(iParam0);
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

bool func_573(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_966(iParam0, 1);
}

struct<2> func_574(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_967(iParam0, &uVar2))
	{
	}
	if (!func_968(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_575()
{
	if (func_969(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_969(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_969(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_969(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_969(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_969(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_576(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_970(iParam0);
	func_971(iParam0, uParam1);
	func_972(iParam0);
	func_973(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_974(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_577(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_578(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_579(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_580(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_938(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_938(iParam0);
	}
}

int func_580(int iParam0)
{
	iParam0 = func_551(iParam0);
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

bool func_581(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return func_975(uParam0);
		case 1:
			return func_976(uParam0);
		case 2:
			return func_977(uParam0);
		case 3:
			return func_978(uParam0);
		case 4:
			break;
		case 7:
			break;
	}
	return true;
}

void func_582(bool bParam0)
{
	if (!func_94(0, 0, 1) || bParam0)
	{
		iVar0 = func_626();
		iVar1 = func_629(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_979(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_979(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_583()
{
	return &Global_1935436 == 1;
}

bool func_584()
{
	return &Global_1935436 == 2;
}

void func_585(float fParam0)
{
	func_980(10, fParam0);
}

void func_586()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_587(int iParam0, bool bParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_20(32768))
	{
		return;
	}
	if (!func_20(32768))
	{
		func_981(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_113();
	}
}

int func_588(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_589(int iParam0, int iParam1)
{
	return func_982(&uVar0, iParam0, iParam1);
}

void func_590(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_437(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_983(1);
	}
}

void func_591(int iParam0, vector3 vParam1, float fParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = fParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_195(vParam1, 1);
}

void func_592(int iParam0, var uParam1, vector3 vParam2, var uParam5)
{
	func_984(&uVar0, 0);
	if (!func_475(vParam2))
	{
		*uParam1 = _create_volume_sphere_with_custom_name(vParam2, 0f, 0f, 0f, uParam5, uParam5, uParam5, "Activity Volume");
		switch (iParam0)
		{
			case 654481153:
				func_984(&uVar0, 5);
				func_984(&uVar0, 21);
				break;
			case 1784895540:
				func_984(&uVar0, 5);
				func_984(&uVar0, 23);
				break;
			case -1670940721:
				func_984(&uVar0, 5);
				func_984(&uVar0, 12);
				break;
			case -1341684320:
				func_984(&uVar0, 24);
				func_984(&uVar0, 4);
				break;
			case -1511391406:
				func_984(&uVar0, 25);
				func_984(&uVar0, 4);
				break;
			case 931703394:
				func_984(&uVar0, 26);
				func_984(&uVar0, 4);
				break;
			case -1567081107:
				func_984(&uVar0, 27);
				func_984(&uVar0, 4);
				break;
			case 380107708:
				func_984(&uVar0, 3);
				break;
			default:
				func_984(&uVar0, 5);
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

void func_593(int iParam0, bool bParam1, int iParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_233(iParam0))
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
	iVar0 = func_75(iParam0);
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
		_0xd428c3f92fc3f6f8(iVar0, func_197(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_985())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_594(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_986(&iVar1, -2147483648);
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

bool func_595(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_115() != -1)
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

int func_596(int iParam0)
{
	if (!func_248(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_253(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

bool func_597(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_598(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_987(iParam0);
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

void func_599(int iParam0)
{
	if (func_58(iParam0))
	{
		if (does_entity_exist(func_75(iParam0)))
		{
			func_456(iParam0, 67108864, 1);
			func_255(iParam0, 19, 1);
		}
	}
}

float func_600(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_601(int iParam0)
{
	iVar0 = func_75(iParam0);
	iVar1 = func_259(iParam0, 0);
	func_988(iParam0, iVar0);
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

bool func_602(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_603(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_604(int iParam0, int iParam1, bool bParam2)
{
	if (!func_248(iParam0))
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

int func_605(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_248(iParam0))
	{
		return 0;
	}
	iVar0 = func_265(iParam0);
	if (func_29(iVar0, 0))
	{
		if (func_29(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_602(iParam0)) || func_603(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_989(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_990(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_991(iParam0);
					_0x7b204f88f6c3d287(func_992(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_992(iParam0, 0));
					func_993(iParam0);
				}
			}
			else
			{
				if (func_270(iParam0, 32768, 1))
				{
					iVar2 = func_992(iParam0, 0);
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
			if (func_270(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_991(iParam0);
				_0x7b204f88f6c3d287(func_992(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_992(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_991(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_994(iParam0, 0);
	return 1;
}

void func_606(int iParam0, int iParam1)
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
			func_995((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_995(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_77(&(Global_1898164->f_1[0])))
	{
		func_84(&(Global_1898164->f_1[0]), 3);
	}
}

int func_607(int iParam0)
{
	iVar0 = func_273(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_996(iVar0);
}

int func_608(int iParam0, int iParam1)
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
			func_997(iVar2);
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

void func_609()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_610(int iParam0, int iParam1, bool bParam2)
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

int func_611(bool bParam0)
{
	if (func_115() == -1)
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

int func_612(int iParam0)
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

void func_613(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_614(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_615(int iParam0)
{
	func_624(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_616(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_617(1);
	}
}

void func_617(bool bParam0)
{
	if (bParam0)
	{
		func_998(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_999(&(Global_40.f_12019.f_42), 1);
	}
}

int func_618(int iParam0)
{
	if (!func_77(iParam0))
	{
		return -15;
	}
	return func_1000(iParam0);
}

bool func_619(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_449(iParam1) || !func_449(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_620(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_621(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_622(int iParam0)
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

bool func_623(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_624(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1001(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_625(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_626()
{
	iVar0 = func_301();
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

int func_627(int iParam0)
{
	if (func_115() != -1)
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
	fVar1 = func_979(absf(fVar1) < 1f, func_979(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_628()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_629(int iParam0)
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

int func_630()
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

void func_631(int iParam0, bool bParam1, int iParam2)
{
	func_1002((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1003(iParam0);
}

void func_632(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1004(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_633(bool bParam0)
{
	bVar3 = false;
	if (func_1005(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1006(iVar5, &iVar2, &iVar0))
			{
				if (!func_322(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1007(iVar2);
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
							if (func_341(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_626() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_626() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1008();
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

char* func_634(int iParam0)
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

bool func_635(int iParam0)
{
	return func_341(iParam0) == -427144552;
}

bool func_636(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (func_343(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_641(iParam0, &uVar0, 1, 0, 0);
	}
	return func_166(iParam0, 1, 0);
}

void func_637(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_341(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_348(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_663(iVar0))
	{
		if (func_115() == -1)
		{
			func_349(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_326(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_403(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_638(int iParam0, int iParam1)
{
	if (func_342(iParam0, 58855631))
	{
		func_793(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_639(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	if (!func_350(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_611(bParam3), iParam0);
}

int func_640(int iParam0, bool bParam1)
{
	if (func_354(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_611(bParam1), iParam0, 0);
}

bool func_641(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1009(&iParam0);
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (!func_350(0))
	{
		bParam3 = true;
	}
	if (func_635(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_776(0) };
			Var4.f_9 = -1591664384;
			if (!func_665(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_666(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_777(iParam0, 1))
			{
				if (!func_665(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_666(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1010(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_639(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1011(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_611(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_642(int iParam0, int iParam1)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_341(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_342(iParam0, 1399091007))
	{
		func_709(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_643(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1012(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1013(&Var0, func_776(0));
	}
	if (!func_1014(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_719(iVar14);
	return uVar15;
}

int func_644()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_645(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_646(int iParam0)
{
	if (func_115() != -1)
	{
		return;
	}
	iVar0 = func_1015(iParam0);
	fVar1 = func_1016(iParam0);
	if ((Global_1347477->f_117 || !func_344(31)) || !func_1017(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1018(iVar0) >= 7)
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
	func_1019(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_453(_create_var_string(6, func_1020(iParam0), fVar1), "itemtype_textures", func_1021(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_647(int iParam0)
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

int func_648(int iParam0, int iParam1)
{
	if (!func_809(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_649(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_337() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1022(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1023(), 12);
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
			else if (func_691() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1024(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_691(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1025(), 13);
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
			else if (func_692() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1026(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_692(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_648(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_650(int iParam0, int iParam1, int iParam2)
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

bool func_651(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_652(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_653(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1027(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_166(iVar2, 1, 0) || func_1029(func_1028(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_657(func_1027(iVar0))), func_657(func_1027(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_691() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1030(iVar0)), func_1030(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1024() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1030(iVar0)), func_1030(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1030(iVar0)), func_1030(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_702(iParam3, func_1031(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_698(iVar2) - iParam7) >= func_648(iParam3, func_1032(iVar0));
				}
				else
				{
					bVar1 = func_698(iVar2) >= func_648(iParam3, func_1032(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_698(iVar2) + iParam7) >= func_648(iParam3, func_1032(iVar0));
			}
			else
			{
				bVar1 = func_698(iVar2) >= func_648(iParam3, func_1032(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1033(iVar2)), func_1033(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1034(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1035(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1035(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_692() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1036(iVar0)), func_1036(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1026() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1036(iVar0)), func_1036(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1036(iVar0)), func_1036(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_702(iParam3, func_1031(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_698(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1037(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1037(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1038(iVar2)), func_1038(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_654(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1025() >= 13)
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

bool func_655(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_77(func_78(0)) && ((func_1039(0) == 1 || func_1039(0) == 8) || func_1039(0) == 6))
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

var func_656(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_657(int iParam0)
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

bool func_658(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_659(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_660(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_661(int iParam0)
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
			func_1040(1);
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
			func_1041(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1041(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1041(3);
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
			func_1042(1);
			break;
		case 34:
			func_1043(1);
			break;
		case 35:
			func_1044(1);
			break;
		case 36:
			break;
		case 37:
			func_1045(0);
			break;
		case 38:
			func_1046(0);
			break;
		case 39:
			func_1047(0);
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
			if ((!&Global_1879534 && func_320()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_144(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_320()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_144(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_320()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_144(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_320()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_144(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_115() == -1)
			{
				if (!func_732(99217379) || func_1048(99217379) == 2110595215)
				{
					if (func_628())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_166(iVar0, 1, 0))
					{
						func_396(iVar0, 1, 752097756);
					}
					func_375(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_115() == -1)
			{
				if (!func_166(1013902307, 1, 0))
				{
					func_396(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_115() == -1)
			{
				if (!func_166(1013902307, 1, 0))
				{
					func_396(1013902307, 1, 752097756);
				}
				if (!func_166(142640135, 1, 0))
				{
					func_396(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_115() == -1)
			{
				if (!func_166(786809402, 1, 0))
				{
					func_396(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_115() == -1)
			{
				if (!func_166(786809402, 1, 0))
				{
					func_396(786809402, 1, 752097756);
				}
				if (!func_166(-518019409, 1, 0))
				{
					func_396(-518019409, 1, 752097756);
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
			func_1049();
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

bool func_662(int iParam0)
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

bool func_663(int iParam0)
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

int func_664(int iParam0, int iParam1)
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

bool func_665(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1011(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_666(int iParam0, var uParam1, int iParam2)
{
	if (func_1050(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_667(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_322(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_611(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_668(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1051(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_780(*uParam1, &Var0, bParam6, 0))
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
	if (!func_350(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_611(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_669(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1052(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_670(int iParam0)
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
	iVar2 = func_113();
	func_153(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_671(int iParam0)
{
	if (func_1053(iParam0))
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

bool func_672(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_673(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_674(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_344(50))
			{
				if (!func_344(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_344(51))
			{
				if (!func_344(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_675(int iParam0, int iParam1, var uParam2)
{
	if (!func_322(iParam1, 0))
	{
		return false;
	}
	if (func_341(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_115() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_346(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_421(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_342(iParam1, 866047851))
	{
		iVar5 = func_422(iVar4, 1);
		if (func_1054(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_346(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_342(iParam1, -1638171711))
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
			if (func_1055(1868067663, &uVar0))
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
				iVar10 = func_1056(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1056(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_346(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_342(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1057(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_676()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_677()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_678()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_166(func_1058(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_679(int iParam0)
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

bool func_680(int iParam0, int iParam1)
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
	if (func_166(iVar0, 1, 0) && func_166(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_681(int iParam0)
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

bool func_682(int iParam0, int iParam1)
{
	iVar0 = func_1059(iParam0);
	if (iVar0 != -15)
	{
		func_153(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_450(iVar0, 1);
	}
	return false;
}

void func_683(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_453(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_684(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_797())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_453(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1060(iVar0);
			func_1061(iVar0, 0, 0);
		}
		func_453(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_359(func_119(1644987397), iVar1);
	}
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_688(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_689(int iParam0)
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
	iVar1 = func_698(iVar9);
	iVar2 = func_698(iVar10);
	iVar3 = func_698(iVar11);
	iVar5 = func_699(iVar9);
	iVar6 = func_699(iVar10);
	iVar7 = func_699(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_698(iVar12);
		iVar8 = func_699(iVar12);
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

void func_690(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_691()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1062(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_692()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_693(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1037(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1037(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1037(iVar0))
		{
			*sParam2++;
		}
		if (func_1037(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1037(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1037(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1037(iVar0))
		{
			*sParam2++;
		}
		if (func_1037(iVar1))
		{
			*sParam2++;
		}
		if (func_1037(iVar0) && func_1037(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1037(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1037(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1037(iVar0))
		{
			*sParam2++;
		}
		if (func_1037(iVar1))
		{
			*sParam2++;
		}
		if (func_1037(iVar2))
		{
			*sParam2++;
		}
		if ((func_1037(iVar0) && func_1037(iVar1)) && func_1037(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1037(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1037(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1037(iVar0))
		{
			*sParam2++;
		}
		if (func_1037(iVar1))
		{
			*sParam2++;
		}
		if (func_1037(iVar2))
		{
			*sParam2++;
		}
		if (func_1037(iVar3))
		{
			*sParam2++;
		}
		if (((func_1037(iVar0) && func_1037(iVar1)) && func_1037(iVar2)) && func_1037(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_694(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1063(1497516462);
			func_1064(2016141805);
			func_1064(1010885152);
			func_1064(-502324015);
			break;
		case 2016141805:
			func_1064(1497516462);
			func_1063(2016141805);
			func_1064(1010885152);
			func_1064(-502324015);
			break;
		case 1010885152:
			func_1064(1497516462);
			func_1064(2016141805);
			func_1063(1010885152);
			func_1064(-502324015);
			break;
		case -502324015:
			func_1064(1497516462);
			func_1064(2016141805);
			func_1064(1010885152);
			func_1063(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1064(-538889627);
			func_1064(-538880323);
			func_1064(-1056767524);
			func_1063(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1065();
			func_1063(iParam0);
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
			func_1066();
			func_1063(iParam0);
			break;
		case 2019386373:
			func_1064(-664252410);
			func_1064(2109952320);
			func_1063(2019386373);
			break;
		case -664252410:
			func_1064(2019386373);
			func_1064(2109952320);
			func_1063(-664252410);
			break;
		case 2109952320:
			func_1064(2019386373);
			func_1064(-664252410);
			func_1063(2109952320);
			break;
		case -1674179981:
			func_1064(-1835851517);
			func_1064(-1838352012);
			func_1063(-1674179981);
			break;
		case -1835851517:
			func_1064(-1674179981);
			func_1064(-1838352012);
			func_1063(-1835851517);
			break;
		case -1838352012:
			func_1064(-1674179981);
			func_1064(-1835851517);
			func_1063(-1838352012);
			break;
		case -1717960576:
			func_1064(210001842);
			func_1063(-1717960576);
			break;
		case 210001842:
			func_1064(-1717960576);
			func_1063(210001842);
			break;
		case -150493654:
			func_1064(-1271608261);
			func_1064(1846061697);
			func_1064(-1145519186);
			func_1063(-150493654);
			break;
		case -1271608261:
			func_1064(-150493654);
			func_1064(1846061697);
			func_1064(-1145519186);
			func_1063(-1271608261);
			break;
		case 1846061697:
			func_1064(-150493654);
			func_1064(-1271608261);
			func_1064(-1145519186);
			func_1063(1846061697);
			break;
		case -1145519186:
			func_1064(-150493654);
			func_1064(-1271608261);
			func_1064(1846061697);
			func_1063(-1145519186);
			break;
		case 1766284049:
			func_1064(280705402);
			func_1064(1926308480);
			func_1063(1766284049);
			break;
		case 280705402:
			func_1064(1766284049);
			func_1064(1926308480);
			func_1063(280705402);
			break;
		case 1926308480:
			func_1064(1766284049);
			func_1064(280705402);
			func_1063(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1064(439465264);
				func_1063(1609506757);
			}
			else
			{
				func_1064(1609506757);
				func_1064(439465264);
			}
			break;
		case 439465264:
			if (func_200(1609506757))
			{
				if (bParam1)
				{
					func_1063(439465264);
				}
				else
				{
					func_1064(439465264);
				}
			}
			break;
		case 1822001510:
			func_1064(-1612662716);
			func_1063(1822001510);
			break;
		case -1612662716:
			func_1064(1822001510);
			func_1063(-1612662716);
			break;
		case 1306158345:
			func_1064(1952610440);
			func_1064(-223469678);
			func_1064(-404698347);
			func_1064(1517904467);
			func_1063(1306158345);
			break;
		case 1952610440:
			func_1064(1306158345);
			func_1064(-223469678);
			func_1064(-404698347);
			func_1064(1517904467);
			func_1063(1952610440);
			break;
		case -223469678:
			func_1064(1306158345);
			func_1064(1952610440);
			func_1064(-404698347);
			func_1064(1517904467);
			func_1063(-223469678);
			break;
		case -404698347:
			func_1064(1306158345);
			func_1064(1952610440);
			func_1064(-223469678);
			func_1064(1517904467);
			func_1063(-404698347);
			break;
		case 1517904467:
			func_1064(1306158345);
			func_1064(1952610440);
			func_1064(-223469678);
			func_1064(-404698347);
			func_1063(1517904467);
			break;
		case 1376646519:
			func_1064(931649776);
			func_1064(-434590080);
			func_1064(1743048395);
			func_1064(449774763);
			func_1063(1376646519);
			break;
		case 931649776:
			func_1064(1376646519);
			func_1064(-434590080);
			func_1064(1743048395);
			func_1064(449774763);
			func_1063(931649776);
			break;
		case -434590080:
			func_1064(1376646519);
			func_1064(931649776);
			func_1064(1743048395);
			func_1064(449774763);
			func_1063(-434590080);
			break;
		case 1743048395:
			func_1064(1376646519);
			func_1064(931649776);
			func_1064(-434590080);
			func_1064(449774763);
			func_1063(1743048395);
			break;
		case 449774763:
			func_1064(1376646519);
			func_1064(931649776);
			func_1064(-434590080);
			func_1064(1743048395);
			func_1063(449774763);
			break;
		case -1414537028:
			func_1064(38162571);
			func_1064(1350391819);
			func_1064(54073871);
			func_1063(-1414537028);
			break;
		case 38162571:
			func_1064(-1414537028);
			func_1064(1350391819);
			func_1064(54073871);
			func_1063(38162571);
			break;
		case 1350391819:
			func_1064(-1414537028);
			func_1064(38162571);
			func_1064(54073871);
			func_1063(1350391819);
			break;
		case 54073871:
			func_1064(-1414537028);
			func_1064(38162571);
			func_1064(1350391819);
			func_1063(54073871);
			break;
		case 198200492:
			func_1063(198200492);
			func_1064(-1124061431);
			func_1064(52706132);
			func_1064(-259123672);
			break;
		case -1124061431:
			func_1064(198200492);
			func_1063(-1124061431);
			func_1064(52706132);
			func_1064(-259123672);
			break;
		case 52706132:
			func_1064(198200492);
			func_1064(-1124061431);
			func_1063(52706132);
			func_1064(-259123672);
			break;
		case -259123672:
			func_1064(198200492);
			func_1064(-1124061431);
			func_1064(52706132);
			func_1063(-259123672);
			break;
		case -919512195:
			func_1063(-919512195);
			func_1064(-1925798111);
			func_1064(420709909);
			func_1064(1703426636);
			break;
		case -1925798111:
			func_1063(-1925798111);
			func_1064(-919512195);
			func_1064(420709909);
			func_1064(1703426636);
			break;
		case 420709909:
			func_1063(420709909);
			func_1064(-919512195);
			func_1064(-1925798111);
			func_1064(1703426636);
			break;
		case 1703426636:
			func_1063(1703426636);
			func_1064(-919512195);
			func_1064(-1925798111);
			func_1064(420709909);
			break;
		case -1223121209:
			func_1063(-1223121209);
			func_1064(630808005);
			break;
		case 630808005:
			func_1063(630808005);
			func_1064(-1223121209);
			break;
		case 1453909576:
			func_1063(1453909576);
			func_1064(1643531967);
			break;
		case 1643531967:
			func_1063(1643531967);
			func_1064(1453909576);
			break;
		case 0:
			func_1063(0);
			func_1064(473295046);
			func_1064(-1738165526);
			break;
		case 473295046:
			func_1063(473295046);
			func_1064(0);
			func_1064(-1738165526);
			break;
		case -1738165526:
			func_1063(-1738165526);
			func_1064(0);
			func_1064(473295046);
			break;
		case 932909855:
			func_1063(932909855);
			func_1064(2051822093);
			break;
		case 2051822093:
			func_1063(2051822093);
			func_1064(932909855);
			break;
		case 405586984:
			func_1063(405586984);
			func_1064(1509509592);
			func_1064(-959357075);
			func_1064(-1311865656);
			break;
		case 1509509592:
			func_1063(1509509592);
			func_1064(405586984);
			func_1064(-959357075);
			func_1064(-1311865656);
			break;
		case -959357075:
			func_1063(-959357075);
			func_1064(1509509592);
			func_1064(405586984);
			func_1064(-1311865656);
			break;
		case -1311865656:
			func_1063(-1311865656);
			func_1064(1509509592);
			func_1064(-959357075);
			func_1064(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1063(-524145696);
			}
			else
			{
				func_1064(-524145696);
			}
			func_1064(1626481264);
			func_1064(282809459);
			break;
		case 282809459:
			func_1063(282809459);
			func_1064(1626481264);
			func_1064(-524145696);
			break;
		case 1626481264:
			func_1063(1626481264);
			func_1064(-524145696);
			func_1064(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1063(885203519);
			}
			else
			{
				func_1064(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1063(-1080627546);
			}
			else
			{
				func_1064(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_200(iParam0))
				{
					func_1063(iParam0);
				}
			}
			else if (func_200(iParam0))
			{
				func_1064(iParam0);
			}
			break;
	}
}

void func_695(int iParam0)
{
	if (!func_1067(iParam0))
	{
		func_1069(func_1068(iParam0));
	}
}

int func_696()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1067(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_697(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_698(iVar9);
	iVar2 = func_698(iVar10);
	iVar3 = func_698(iVar11);
	iVar5 = func_699(iVar9);
	iVar6 = func_699(iVar10);
	iVar7 = func_699(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_698(iVar12);
		iVar8 = func_699(iVar12);
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

int func_698(int iParam0)
{
	if (func_166(iParam0, 1, 0))
	{
		iVar0 = func_326(iParam0, 0, 0);
	}
	return iVar0;
}

int func_699(int iParam0)
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

int func_700(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_701(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_702(int iParam0, int iParam1)
{
	if (!func_809(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_703(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_702(iParam1, 5) || iParam0 == func_702(iParam1, 6)) || iParam0 == func_702(iParam1, 7)) || iParam0 == func_702(iParam1, 8)) || iParam0 == func_702(iParam1, 9))
	{
		func_693(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_338(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_340(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_704(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_702(iParam1, 5) || iParam0 == func_702(iParam1, 6)) || iParam0 == func_702(iParam1, 7)) || iParam0 == func_702(iParam1, 8)) || iParam0 == func_702(iParam1, 9))
	{
		if (func_693(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_338(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_340(51, 0, 0, iVar0, func_648(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_338(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_340(51, 0, 0, iVar0, func_648(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_705()
{
	if (func_13((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_706(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_707(int iParam0)
{
	if (!func_1070(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_708(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_709(int iParam0, int iParam1, var uParam2)
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

bool func_710(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1071();
	if (iParam2 == 39)
	{
		Var0 = { func_434(iParam0, 1, 0) };
		iParam2 = func_422(func_435(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_342(iParam0, 866047851) && func_1054(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_712(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1072(func_781(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1073(iParam2);
	func_1074(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_762(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_762(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_768(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1075(iParam0, iParam2, iParam1, func_115() != -1);
	if (bParam4)
	{
		func_1076(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1076(&(Global_1946804->f_1378), 1, 0);
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
				func_1077(func_781(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_711(bool bParam0, bool bParam1, bool bParam2)
{
	func_1078(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_712(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_713()
{
	func_1079(&(Global_1946804->f_2776));
	func_1080(32768);
	func_1077(1108822547, 8, 6);
}

int func_714(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_422(iParam0, 1);
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

void func_715(int iParam0)
{
	if (func_1081(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1082(Var0);
}

void func_716(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1082(Var0);
}

bool func_717(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_611(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_718(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_719(int iParam0)
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

float func_720()
{
	if (func_1083())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1084(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1084(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1089()));
	fVar7 = (func_1084(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1090(3, round((to_float(iVar8) * fVar10)), 0);
	func_1091(3, fVar9, fVar9 > 100f);
	return func_1092(fVar7, -100f, 100f);
}

float func_721()
{
	if (func_1083())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1084(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1084(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1089()));
	fVar7 = (func_1084(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1090(2, round((to_float(iVar8) * fVar10)), 0);
	func_1091(2, fVar9, fVar9 > 100f);
	return func_1092(fVar7, -100f, 100f);
}

float func_722()
{
	if (func_1083())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1084(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1093())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1094())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1084(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1089()));
	fVar7 = (func_1084(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1090(1, round((to_float(iVar8) * fVar10)), 0);
	func_1091(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1084(0);
	}
	return func_1092(fVar7, -100f, 100f);
}

bool func_723(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_724(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_725(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_322(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_641(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_350(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_611(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_726(int iParam0, bool bParam1)
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
				return func_1095();
			}
			break;
	}
	return 0;
}

int func_727(int iParam0)
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

bool func_728(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_729(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_728(iParam0))
	{
		return;
	}
	if (func_1096(iParam0))
	{
		return;
	}
	if (!func_1097(iParam0))
	{
		func_1098(iParam0, 1, 0);
	}
	iVar0 = func_1099(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1100(iParam0, 512))
		{
			func_433(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1101() && !bParam1) && !func_94(0, 0, 1))
	{
		func_462(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1102(iParam0, 6);
	if (bParam2)
	{
		if (!func_94(0, 0, 1))
		{
			func_186(1, 4);
		}
	}
}

bool func_730(int iParam0, bool bParam1)
{
	return func_726(iParam0, 0) < func_1103(iParam0, bParam1);
}

bool func_731(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_732(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_422(iParam0, 1)] != &Global_1946804->f_57[func_422(iParam0, 1)];
}

void func_733(int iParam0, int iParam1)
{
	if (func_342(iParam1, 130796156))
	{
		func_1104(iParam1, 0);
	}
	else if (func_342(iParam1, 930141731))
	{
		func_1104(iParam1, 1);
		func_1105(iParam0);
	}
}

void func_734(var uParam0, int iParam1)
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

int func_735(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1106(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1107(uParam2, iParam0, Var1);
	return 1;
}

int func_736(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_737(int iParam0)
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

int func_738(int iParam0)
{
	if (!func_1108(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_739()
{
	return !&Global_1911774;
}

void func_740(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_741(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_742(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @229; //curOff = 56
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
					Jump @229; //curOff = 139
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @229; //curOff = 162
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @229; //curOff = 185
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

char* func_743(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_744(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_115() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1109(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_745(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (func_1109(iParam0, iParam1, &uVar2, &iVar1))
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

void func_746(bool bParam0)
{
	if (bParam0)
	{
		func_138(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_747();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1110(2032023096);
		func_141(-615217896);
		func_418(655868243, 1, 1, -142743235, 1);
		func_1112(146323340, func_1111());
		Var0 = { func_575() };
		if (func_1113(&Var0) == -1387633835)
		{
			func_1114(&Var0);
			func_1115(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_959(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_568(iVar6) == 2010625508)
			{
				func_960(iVar6, iVar7);
				func_961(iVar6, iVar8);
				func_962(iVar6, iVar9);
				func_1116(iVar6, 0);
				if (func_1117(iVar6))
				{
					func_1118(iVar6);
				}
				iVar10 = func_1119(iVar8);
				func_1120(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_747()
{
	if (!func_1121(-1898635967, func_1111(), 1))
	{
		return 0;
	}
	if (func_157())
	{
		if (!func_1121(146323340, func_1111(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_748()
{
	func_151(34411519);
	func_151(834124286);
	func_151(-570967010);
}

void func_749(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_138(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_418(-1080874779, 3, 1, -142743235, 1);
		func_418(-223790555, 3, 1, -142743235, 1);
		func_418(1566032147, 3, 1, -142743235, 1);
		func_418(891311852, 5, 1, -142743235, 1);
		func_418(-1353737667, 5, 1, -142743235, 1);
		func_418(-330313895, 5, 1, -142743235, 1);
		func_418(-2051332199, 5, 1, -142743235, 1);
		func_418(1237770824, 5, 1, -142743235, 1);
		func_418(-1795542128, 3, 1, -142743235, 1);
		func_418(-1757588258, 3, 1, -142743235, 1);
		func_418(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_959(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_568(iVar0) == 153881023)
			{
				func_960(iVar0, iVar1);
				func_961(iVar0, iVar2);
				func_962(iVar0, iVar3);
				func_1116(iVar0, 0);
				if (func_1117(iVar0))
				{
					func_1118(iVar0);
				}
				iVar4 = func_1119(iVar2);
				func_1120(iVar0, iVar4);
			}
			iVar0++;
		}
		func_747();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_750(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1122(iParam0);
	if (bParam3)
	{
		func_461(iParam0, sParam1, iParam2);
	}
}

bool func_751(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_752(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_753()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_717("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_718(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_666(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_719(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_719(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_754(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1123(Param1, iParam5, &Var5, 0))
	{
		func_668(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_725(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1124(Var19, 1);
}

bool func_755()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_756(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1012(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1013(&Var0, func_776(0));
	}
	if (!func_1014(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_718(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_668(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_719(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_757(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_434(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1125(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_667(iParam0, Var0, Var0.f_4, bParam4) };
	return func_668(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_758(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_342(iParam0, 606799272))
		{
			func_1126(iParam0, iParam1);
		}
		if (func_342(iParam0, -1112814642) && func_342(iParam0, -1697809989))
		{
			func_371(iParam0, iParam1, 1, 0);
		}
	}
}

int func_759(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1127(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_346(iParam0) != -999503751)
		{
			func_1128(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_346(iParam0) != -999503751)
	{
		func_1128(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1129(iParam0, 1);
	return 1;
}

void func_760()
{
	if (func_115() == -1)
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

void func_761(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1130(0);
	}
	if (bParam0)
	{
		func_773(8);
		func_773(512);
	}
	else
	{
		func_773(8);
		func_773(16);
	}
}

void func_762(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_763(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_424();
	}
	if (func_115() == -1)
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

int func_764(int iParam0)
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

void func_765(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1131(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_781(iVar0, 1);
			if (func_1132(iVar0, iParam1))
			{
				vVar4 = { func_426(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1133(iVar7, 4))
				{
					func_1077(iVar7, 4, 6);
				}
			}
			else
			{
				func_1134(iVar7, 4, 6);
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

bool func_766(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_115() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1135(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_767(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_768(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_346(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1132(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1074(iVar1, iVar3);
		}
	}
	if (func_732(-1586649372) && func_1132(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1074(iVar1, iVar3);
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
						func_1074(iVar1, iVar3);
					}
				}
			}
			func_1136(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1136(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1074(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1136(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1074(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1074(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1136(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1136(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1074(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1136(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1074(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1074(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_346(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1074(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1057(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_346(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1074(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_342(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1074(iVar1, iVar3);
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
						func_1074(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1057(&(Global_1946804->f_1497.f_1[iVar1])) || func_342(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1074(iVar1, iVar3);
					}
				}
			}
			switch (func_346(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_346(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1074(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_346(&(uParam0->f_1[iVar1])) || func_342(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1074(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_769(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_770(int iParam0)
{
	if (func_115() != -1)
	{
		if (func_723(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_723(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_771(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_723(iParam0, 65536) && !func_723(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_723(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_723(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_772()
{
	return Global_1905944->f_5694;
}

void func_773(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_774(struct<4> Param0)
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
			if (func_1137(Param0))
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
			func_1138(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_773(8);
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
			if (func_1137(Param0))
			{
				return;
			}
			func_1138(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_773(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_716(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_775(bool bParam0)
{
	return func_667(1328661203, func_1139(), -1591664384, bParam0);
}

struct<4> func_776(bool bParam0)
{
	iVar0 = func_611(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_667(923904168, func_775(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_667(923904168, func_775(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_667(923904168, func_775(bParam0), -740156546, 0);
}

bool func_777(int iParam0, bool bParam1)
{
	if (func_346(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_344(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_778(bool bParam0)
{
	iVar0 = func_611(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_667(271701509, func_775(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_667(271701509, func_775(bParam0), 12999093, 0);
}

bool func_779(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_346(iParam0);
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

bool func_780(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_611(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_781(int iParam0, int iParam1)
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

int func_782(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_783(int iParam0, int iParam1)
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

void func_784(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_785(int iParam0, int iParam1)
{
	iVar0 = func_442(*iParam0);
	iVar1 = func_441(*iParam0);
	if (iParam1 < 1 || iParam1 > func_447(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_787(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_788(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_789(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_790(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_791(int iParam0)
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

bool func_792(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_115() == -1)
	{
		if (func_635(iParam0))
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

int func_793(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_322(iParam0, 0))
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

int func_794(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1009(&iParam0);
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	if (!func_350(0))
	{
		bParam2 = true;
	}
	iVar0 = func_639(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1011(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_611(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_342(iParam0, -5284486))
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
		if (func_1140(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_404(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_407(iVar62, iVar61);
					if (func_322(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_795(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_795(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1140(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_796(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1141(1);
}

bool func_797()
{
	if (func_157())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_798(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1142(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_108(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1142(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_108(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_799()
{
	return Global_40.f_4283.f_325;
}

bool func_800(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_115() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_801(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_802(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_803(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_804(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_805(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_806(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_320();
	bVar1 = false;
	if (bVar0 && !func_1143(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1143(37)) && !func_1143(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1143(43)) && !func_1143(44))
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
		if (func_569(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_569(1) == 1)
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

int func_807()
{
	return Global_40.f_1095.f_3054;
}

bool func_808(int iParam0)
{
	iParam0 = func_551(iParam0);
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

bool func_809(int iParam0, var uParam1)
{
	if (!func_1144(iParam0))
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

int func_810()
{
	if (func_320())
	{
		if (!func_1143(3))
		{
			return func_1145(43);
		}
		if (func_1143(38) && !func_1143(43))
		{
			return func_1146(8);
		}
	}
	return 0;
}

bool func_811(int iParam0)
{
	if (!func_476(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1147(iParam0));
}

Vector3 func_812(int iParam0, int iParam1)
{
	func_809(15, &Var0);
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

int func_813(int iParam0, int iParam1)
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
	iVar0 = func_1148(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_809(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1149(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_814(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1150(iParam0);
	if (func_200(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_815(int iParam0)
{
	if (!func_809(15, &Var0))
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

bool func_816(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1151(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1152(5))
	{
		if (func_1153(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_557(vParam0);
	if (bParam6)
	{
		iVar1 = func_195(vParam0, 1);
		if (func_1154(iVar1) || func_1155(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1156(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1157())
	{
		if (func_1158(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1159(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_195(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1160(iParam3, iParam4))
	{
		return false;
	}
	if (func_1161(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1162(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_320())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1163(vParam0, iParam10) || func_1164(vParam0, iParam10))
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

int func_817(vector3 vParam0)
{
	iVar0 = func_1165(vParam0, 0f, 0f, 0, 2);
	return func_1165(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_818(int iParam0)
{
	return func_1166(iParam0, 2);
}

char* func_819(int iParam0)
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

void func_820(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_821(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_822(int iParam0)
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

bool func_823(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
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

bool func_824(var uParam0, int iParam1, char* sParam2)
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

void func_825(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

void func_826(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_827(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_828(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

void func_829(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

void func_830(int iParam0)
{
	func_73(iParam0, 8, 1);
}

var func_831(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_850(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1167(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_850(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_832(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_833(var uParam0, char* sParam1)
{
	if (func_832(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_1168("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_1168("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_835(uParam0, 8192);
}

Vector3 func_834(var uParam0)
{
	return uParam0->f_5;
}

void func_835(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_836(var uParam0)
{
	MemCopy(&uVar0, {func_1169(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_1170(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_837(var uParam0, vector3 vParam1)
{
	if (func_475(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_838(var uParam0)
{
	return uParam0->f_147;
}

void func_839()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1082(Var0);
	}
}

void func_840(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_156, uParam0->f_174[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_156, uParam0->f_174[iVar0]);
		}
		uParam0->f_174[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_841(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_832(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_1171(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_832(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_842(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_842(uParam0, 16, 1);
}

void func_842(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

float func_843(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_844(var uParam0)
{
	return uParam0->f_158;
}

void func_845(var uParam0)
{
	Var0 = { func_1172() };
	func_1173(uParam0, &Var0);
}

void func_846(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_832(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_854(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1174());
		func_835(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1175(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_835(uParam0, 16);
	}
}

void func_847(var uParam0)
{
	if ((!func_832(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_1176(uParam0);
		func_1177(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_835(uParam0, 32768);
	}
}

bool func_848()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

struct<8> func_849(var uParam0)
{
	Var0 = { func_1178(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_1179() };
	}
	return Var0;
}

var func_850(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

float func_851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -101.78f;
		case 2:
			return 0f;
		case 3:
			return 37.31f;
		case 4:
			return 57.26f;
		case 5:
			return -26.12f;
		case 7:
			return 0f;
		case 8:
			return -159.89f;
		case 15:
			return 118.54f;
		case 16:
			return 138.43f;
		case 17:
			return 29.74f;
		case 18:
			return 0f;
		case 19:
			return 29.59f;
		case 20:
			return 0f;
		case 21:
			return 0f;
		case 22:
			return 0f;
		case 23:
			return 0f;
		case 24:
			return 0f;
		case 25:
			return 0f;
		case 26:
			return -3.42f;
		case 27:
			return -149.81f;
		case 28:
			return -149.81f;
		case 29:
			return -34.85f;
		case 30:
			return 66.19f;
		case 31:
			return 266.3486f;
		case 32:
			return 266.3486f;
		case 33:
			return 192.4763f;
		case 34:
			return -33.37f;
		case 35:
			return 146.16f;
		case 36:
			return 168.69f;
		default:
			break;
	}
	return 0f;
}

void func_852(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_80(iParam0) == 1)
	{
		cVar0 = func_1180(func_307(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_80(iParam0) == 8)
	{
		cVar0 = func_1182(func_1181(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_587(1, 1);
	func_591(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_102(0);
	func_103(0);
	func_90(1f);
}

void func_853()
{
	Local_134.f_75 = 1;
}

bool func_854(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_855()
{
	if (func_115() == -1 && func_94(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return false;
}

bool func_856(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_857(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (&iParam0->f_14[iVar0] != 7 && is_entity_dead(&(iParam0->f_80[iVar0])))
		{
			func_499(&(iParam0->f_128), 1048576);
			func_1183(iParam0->f_14[iVar0], 7);
		}
		fVar1 = func_827(Global_35, &(iParam0->f_80[iVar0]), 1, 1);
		if (fVar1 < 5f || has_entity_been_damaged_by_entity(&(iParam0->f_80[iVar0]), Global_35, 0, 1))
		{
			if (get_script_task_status(&(iParam0->f_80[iVar0]), 780511057, true) != 1)
			{
				task_combat_ped(&(iParam0->f_80[iVar0]), Global_35, 0, 0);
			}
			func_499(&(iParam0->f_128), 2097152);
		}
		func_1184(iParam0);
		iVar0++;
	}
}

bool func_858()
{
	return Local_134.f_75;
}

void func_859()
{
	Local_134.f_75 = 0;
}

void func_860()
{
	if (does_blip_exist(Local_134.f_79))
	{
		remove_blip(&(Local_134.f_79));
	}
}

void func_861(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_862(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_80[0]), true);
		Var0.f_4 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_9 = 1065353216;
		Var0.f_10 = 1065353216;
		Var0.f_14 = 1065353216;
		Var0.f_15 = 1065353216;
		Var0.f_17 = 1040187392;
		Var0.f_18 = 1040187392;
		Var0.f_19 = -1;
		Var0.f_26 = -1082130432;
		func_1185(&Var0);
		func_1186(&(iParam0->f_80[0]), Global_35, &Var0, 2042.62f, -1888.017f, 40.63954f, func_521(1), 67134472, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!is_entity_dead(Global_35))
	{
		Var38.f_4 = 1065353216;
		Var38.f_5 = 1065353216;
		Var38.f_9 = 1065353216;
		Var38.f_10 = 1065353216;
		Var38.f_14 = 1065353216;
		Var38.f_15 = 1065353216;
		Var38.f_17 = 1040187392;
		Var38.f_18 = 1040187392;
		Var38.f_19 = -1;
		Var38.f_26 = -1082130432;
		func_1185(&Var38);
		func_1187(Global_35, &(iParam0->f_80[0]), &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
	}
	func_1188(&(iParam0->f_40));
}

void func_863(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_anim_scene_entity(&(iParam0->f_57[1]), "pearson", &(iParam0->f_80[0]), 0);
		vVar0 = { get_entity_coords(&(iParam0->f_80[0]), true, false) };
		vVar3 = { 2042.22f, -1886.128f, 40.67218f };
		uVar6 = vVar0.z;
		vVar7 = { vVar3 - vVar0 };
		vVar7 = { func_1189(vVar7) };
		if (get_ground_z_for_3d_coord(vVar0, &uVar6, false))
		{
			vVar0.f_2 = uVar6;
			vVar3.f_2 = uVar6;
		}
		set_anim_scene_origin(&(iParam0->f_57[1]), vVar0, vVar7, 2);
	}
	set_anim_scene_entity(&(iParam0->f_57[1]), "ARTHUR", Global_35, 0);
	start_anim_scene(&(iParam0->f_57[1]));
}

void func_864(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_1190(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_865(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_1190(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_866(var uParam0, var uParam1)
{
	if (_0xdd0b7c5ae58f721d(uParam0) && !_0x927b810e43e99932(uParam0))
	{
		_0xb8b207c34285e978(uParam0);
		uVar0[0] = uParam1;
		_0xfeb8646818294c75(uParam0, &uVar0);
	}
}

bool func_867(int iParam0)
{
	switch (iParam0->f_10)
	{
		case 0:
			func_61(17, 1);
			func_872(&(iParam0->f_10), 1);
			break;
		case 1:
			task_follow_nav_mesh_to_coord(&(iParam0->f_80[0]), 2042.071f, -1886.473f, 41.54361f, 1f, -1, 0.5f, 4194304, 40000f);
			_0x2208438012482a1a(&(iParam0->f_80[0]), false, false);
			settimera(0);
			func_872(&(iParam0->f_10), 2);
			break;
		case 2:
			if (get_script_task_status(&(iParam0->f_80[0]), 713668775, true) == 1 || timera() > 2000)
			{
				func_872(&(iParam0->f_10), 3);
			}
			break;
		case 3:
			if (get_script_task_status(&(iParam0->f_80[0]), 713668775, true) == 8 || func_222(&(iParam0->f_80[0]), 2042.071f, -1886.473f, 41.54361f, 1) < 0.25f)
			{
				func_872(&(iParam0->f_10), 4);
			}
			break;
		case 4:
			func_1191(iParam0);
			func_213(&(iParam0->f_37));
			func_872(&(iParam0->f_10), 5);
			break;
		case 5:
			if (has_anim_event_fired(&(iParam0->f_80[0]), 1374781803) && does_entity_exist(&(iParam0->f_103[7])))
			{
				remove_anim_scene_entity(&(iParam0->f_57[2]), "CRAYFISH", &(iParam0->f_103[7]));
				delete_object(iParam0->f_103[7]);
			}
			if (func_203(&(iParam0->f_37)) && func_218(&(iParam0->f_37)) > 2f)
			{
				if (_does_anim_scene_exist(&(iParam0->f_57[2])))
				{
					if (_0x005e6f28dd7ed58d(&(iParam0->f_57[2]), "Pearson") || _is_anim_scene_finished(&(iParam0->f_57[2]), false))
					{
						if (does_entity_exist(&(iParam0->f_103[7])))
						{
							if (is_entity_attached_to_any_ped(&(iParam0->f_103[7])))
							{
								detach_entity(&(iParam0->f_103[7]), true, true);
							}
							delete_object(iParam0->f_103[7]);
						}
						func_872(&(iParam0->f_10), 6);
						return true;
					}
				}
			}
			break;
		case 6:
			if (does_entity_exist(&(iParam0->f_103[7])))
			{
				delete_object(iParam0->f_103[7]);
			}
			func_872(&(iParam0->f_10), 0);
			return true;
	}
	return false;
}

void func_868(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_869(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_870(var uParam0)
{
	if (_0x927b810e43e99932(uParam0))
	{
		_0x0a5a4f1979abb40e(uParam0);
	}
	_0x798be43c9393632b(uParam0);
}

void func_871(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_80[0]), true);
		Var0.f_4 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_9 = 1065353216;
		Var0.f_10 = 1065353216;
		Var0.f_14 = 1065353216;
		Var0.f_15 = 1065353216;
		Var0.f_17 = 1040187392;
		Var0.f_18 = 1040187392;
		Var0.f_19 = -1;
		Var0.f_26 = -1082130432;
		func_1185(&Var0);
		func_1186(&(iParam0->f_80[0]), Global_35, &Var0, func_509(28), func_521(1), 25610, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!is_entity_dead(Global_35))
	{
		Var38.f_4 = 1065353216;
		Var38.f_5 = 1065353216;
		Var38.f_9 = 1065353216;
		Var38.f_10 = 1065353216;
		Var38.f_14 = 1065353216;
		Var38.f_15 = 1065353216;
		Var38.f_17 = 1040187392;
		Var38.f_18 = 1040187392;
		Var38.f_19 = -1;
		Var38.f_26 = -1082130432;
		func_1185(&Var38);
		func_1187(Global_35, &(iParam0->f_80[0]), &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
	}
	func_1188(&(iParam0->f_40));
}

void func_872(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_873(int iParam0)
{
	switch (iParam0->f_10)
	{
		case 0:
			if (func_502(1))
			{
				return false;
			}
			func_501(&(iParam0->f_11), 15);
			func_872(&(iParam0->f_10), 1);
			break;
		case 1:
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, func_509(27), 1f, -1, 0.5f, 4096, 136.2996f);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			task_stand_still(0, -1);
			func_882(&(iParam0->f_80[0]), &iVar0, 0, 0, 1, 1);
			func_872(&(iParam0->f_10), 5);
			break;
		case 5:
			if (get_script_task_status(&(iParam0->f_80[0]), 242628503, true) == 1)
			{
				if (get_sequence_progress(&(iParam0->f_80[0])) > 0 && !func_502(1))
				{
					func_872(&(iParam0->f_10), 6);
				}
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_874(var uParam0, var uParam1, int iParam2)
{
	if (!is_entity_dead(*uParam1))
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
		Var0.f_3 = *uParam1;
		Var0.f_8 = 4;
		Var0.f_13 = 3;
		Var0.f_7 = iParam2;
		_0x66f9eb44342bb4c5(*uParam0, &Var0);
	}
}

bool func_875(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			uParam0->f_6 = _create_anim_scene(func_1192(), 0, func_1193(0), false, true);
			load_anim_scene(uParam0->f_6);
			request_model(func_1194(), false);
			func_1195(&(uParam0->f_3), 1);
			break;
		case 1:
			if (!_is_anim_scene_loaded(uParam0->f_6, true, false))
			{
				return false;
			}
			if (!has_model_loaded(func_1194()))
			{
				return false;
			}
			func_1195(&(uParam0->f_3), 2);
			break;
		case 2:
			if (!does_entity_exist(uParam0->f_8))
			{
				vVar1 = { *uParam0 };
				vVar1.f_2 = (vVar1.z - 5f);
				uParam0->f_8 = create_object(func_1194(), vVar1, true, true, false, false, true);
			}
			if (!does_entity_exist(uParam0->f_8))
			{
				return false;
			}
			if (!func_201(uParam0->f_4))
			{
				uParam0->f_4 = func_1196("GENERIC_SEARCH", -473983589, *uParam0, 3f, 2, 1, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			else
			{
				func_1195(&(uParam0->f_3), 3);
			}
			break;
		case 3:
			if (!func_201(uParam0->f_4))
			{
				func_1195(&(uParam0->f_3), 2);
			}
			else if (func_1197(uParam0->f_4, 1))
			{
				set_player_control(get_player_index(), false, 256, false);
				uParam0->f_7 = 1;
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				open_sequence_task(&iVar0);
				task_swap_weapon(0, 1, 0, 0, 0);
				task_go_straight_to_coord(0, *uParam0, 1f, 20000, 1193033728, 1056964608, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(Global_35, iVar0);
				clear_sequence_task(&iVar0);
				func_202(&(uParam0->f_4), 1, 1);
				func_1195(&(uParam0->f_3), 4);
			}
			break;
		case 4:
			if (get_script_task_status(Global_35, 242628503, true) != 1)
			{
				if (func_222(Global_35, *uParam0, 1) < 1.5f)
				{
					_get_anim_scene_origin(uParam0->f_6, &vVar7, &uVar4, 2);
					vVar7.f_2 = (vVar7.z + 0.1f);
					vVar10 = { get_entity_coords(Global_35, true, false) };
					uVar13 = vVar10.z;
					if (get_ground_z_for_3d_coord(vVar10, &uVar13, false))
					{
						vVar10.f_2 = uVar13;
					}
					fVar14 = func_1198(vVar10, vVar7, 1);
					vVar15 = { 0f, 0f, fVar14 };
					set_anim_scene_origin(uParam0->f_6, vVar7, vVar15, 2);
					set_anim_scene_entity(uParam0->f_6, "ARTHUR", Global_35, 0);
					set_anim_scene_entity(uParam0->f_6, "CRAYFISH", uParam0->f_8, 0);
					start_anim_scene(uParam0->f_6);
					func_1199(1);
					if (_is_using_keyboard(0))
					{
						func_462("CRAYFISH_CTCH_HLP1_KM", -1, 0, 0, 0, 1);
					}
					else
					{
						func_462("CRAYFISH_CTCH_HLP1", -1, 0, 0, 0, 1);
					}
					uParam0->f_13 = { func_1200() };
					func_1202(1798104140, -1763055991, func_1201(player_id()), 1, 1);
					func_1195(&(uParam0->f_3), 5);
				}
			}
			break;
		case 5:
			if (_is_anim_scene_started(uParam0->f_6, false) && _0x8d81e7824b7753f7(uParam0->f_6, "S_Search", 1))
			{
				if (_0x6cd79468a1e595c6(0))
				{
					func_202(&(uParam0->f_5), 1, 1);
				}
				else if (!func_201(uParam0->f_5))
				{
					if (_is_using_keyboard(0))
					{
						uParam0->f_5 = func_1203("CRAYFISH_CTCH_GRAB", 130948705, Global_35, 2, 1, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					}
					else
					{
						uParam0->f_5 = func_1203("CRAYFISH_CTCH_GRAB", -473983589, Global_35, 2, 1, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					}
					func_1204(uParam0->f_5, 0, 1);
				}
				if (!_0x23e33cb9f4a3f547(uParam0->f_6, func_1193(1)))
				{
					_0xdf7b5144e25cd3fe(uParam0->f_6, func_1193(1));
				}
				else
				{
					bVar18 = true;
				}
				if (_0x6cd79468a1e595c6(0))
				{
					func_1199(1);
					if (_is_using_keyboard(0))
					{
						func_462("CRAYFISH_CTCH_HLP1_KM", -1, 0, 0, 0, 1);
					}
					else
					{
						func_462("CRAYFISH_CTCH_HLP1", -1, 0, 0, 0, 1);
					}
				}
				if (_is_using_keyboard(0))
				{
					disable_control_action(0, -1450761377, false);
					disable_control_action(0, -771458680, false);
					uParam0->f_10 = (uParam0->f_10 + (get_control_normal(0, 956909788) * 50f));
					uParam0->f_10.f_1 = (uParam0->f_10.f_1 + (get_control_normal(0, -1168112737) * 50f));
					uParam0->f_10 = func_1092(uParam0->f_10, -127f, 127f);
					uParam0->f_10.f_1 = func_1092(uParam0->f_10.f_1, -127f, 127f);
					set_gameplay_cam_relative_heading(0f, 0.01f);
					set_gameplay_cam_relative_pitch(0f, 0.01f);
				}
				else
				{
					uParam0->f_10 = to_float((get_control_value(2, 1301263553) - 127));
					uParam0->f_10.f_1 = to_float((get_control_value(2, -39308912) - 127));
				}
				uParam0->f_16 = get_distance_between_coords(uParam0->f_10, uParam0->f_13, true);
				if (_is_using_keyboard(0))
				{
					uParam0->f_16 = (uParam0->f_16 * 0.5f);
				}
				uParam0->f_17 = 0f;
				fVar19 = (uParam0->f_16 * 2f);
				uParam0->f_17 = (256f - fVar19);
				if (uParam0->f_17 < 0f)
				{
					uParam0->f_17 = 0f;
				}
				if (uParam0->f_10 != 0f && uParam0->f_10.f_1 != 0f)
				{
					set_pad_shake(2, 100, ceil(uParam0->f_17));
				}
				if (uParam0->f_16 < 35f && bVar18)
				{
					if (func_201(uParam0->f_5))
					{
						if (!func_1205(uParam0->f_5, 1))
						{
							func_1204(uParam0->f_5, 1, 1);
						}
						if (func_1206(uParam0->f_5, 1))
						{
							uParam0->f_9 = 1;
							_set_anim_scene_playback_list_bool(uParam0->f_6, func_1193(1), true);
							func_202(&(uParam0->f_5), 1, 1);
							func_1195(&(uParam0->f_3), 6);
						}
					}
				}
				else if (func_201(uParam0->f_5) && func_1205(uParam0->f_5, 0))
				{
					func_1204(uParam0->f_5, 0, 1);
				}
			}
			break;
		case 6:
			if (uParam0->f_9)
			{
				uParam0->f_9 = 0;
			}
			if (has_anim_event_fired(Global_35, 1545785063) && does_entity_exist(uParam0->f_8))
			{
				remove_anim_scene_entity(uParam0->f_6, "CRAYFISH", uParam0->f_8);
				delete_object(&(uParam0->f_8));
			}
			if (_0x005e6f28dd7ed58d(uParam0->f_6, "ARTHUR"))
			{
				set_player_control(get_player_index(), true, 256, false);
				iVar20 = get_random_int_in_range(1, 4);
				func_138(149706141, iVar20, 0, 0, 0, 752097756, 0, 0, 0, 0);
				Var21 = { func_360(-717883113, 1798104140) };
				_0x6a0184e904cdf25e(&Var21, iVar20);
				if (func_201(uParam0->f_5))
				{
					func_202(&(uParam0->f_5), 1, 1);
				}
				if (func_201(uParam0->f_4))
				{
					func_202(&(uParam0->f_4), 1, 1);
				}
				func_1195(&(uParam0->f_3), 7);
			}
			break;
		case 7:
			if (_is_anim_scene_finished(uParam0->f_6, false) || !_is_anim_scene_started(uParam0->f_6, false))
			{
				if (does_entity_exist(uParam0->f_8))
				{
					delete_object(&(uParam0->f_8));
				}
				func_1199(1);
				uParam0->f_7 = 0;
				func_1195(&(uParam0->f_3), 8);
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_876(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_6))
	{
		if (!_is_anim_scene_started(uParam0->f_6, false))
		{
			_delete_anim_scene(uParam0->f_6);
		}
		else
		{
			return;
		}
	}
	if (func_201(uParam0->f_4))
	{
		func_202(&(uParam0->f_4), 1, 1);
	}
	uParam0->f_7 = 0;
	func_1195(&(uParam0->f_3), 0);
}

bool func_877(var uParam0)
{
	return uParam0->f_7;
}

void func_878(int iParam0, int iParam1)
{
	func_986(iParam0, iParam1);
}

void func_879(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_80[0]), true);
		Var0.f_4 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_9 = 1065353216;
		Var0.f_10 = 1065353216;
		Var0.f_14 = 1065353216;
		Var0.f_15 = 1065353216;
		Var0.f_17 = 1040187392;
		Var0.f_18 = 1040187392;
		Var0.f_19 = -1;
		Var0.f_26 = -1082130432;
		func_1185(&Var0);
		func_1186(&(iParam0->f_80[0]), Global_35, &Var0, func_509(7), func_521(1), 25610, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!is_entity_dead(Global_35))
	{
		Var38.f_4 = 1065353216;
		Var38.f_5 = 1065353216;
		Var38.f_9 = 1065353216;
		Var38.f_10 = 1065353216;
		Var38.f_14 = 1065353216;
		Var38.f_15 = 1065353216;
		Var38.f_17 = 1040187392;
		Var38.f_18 = 1040187392;
		Var38.f_19 = -1;
		Var38.f_26 = -1082130432;
		func_1185(&Var38);
		func_1187(Global_35, &(iParam0->f_80[0]), &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
	}
	func_1188(&(iParam0->f_40));
}

void func_880(int iParam0)
{
	if (((!_get_ped_crouch_movement(Global_35) && _does_anim_scene_exist(&(iParam0->f_57[5]))) && _is_anim_scene_started(&(iParam0->f_57[5]), false)) && _get_anim_scene_progress(&(iParam0->f_57[5])) > 0.03f)
	{
		_set_ped_crouch_movement(Global_35, true, 0, false);
	}
	switch (iParam0->f_2)
	{
		case 0:
			func_518(Global_35, func_509(7), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (func_222(Global_35, func_509(7), 1) < 9f)
			{
				set_player_control(get_player_index(), false, 256, false);
				task_go_straight_to_coord(Global_35, func_509(8), 1f, -1, func_851(8), 1056964608, 0);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				_0x2208438012482a1a(Global_35, false, false);
				func_1207(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (get_script_task_status(Global_35, 2106541073, true) == 1)
			{
				func_1207(&(iParam0->f_2), 2);
			}
			break;
		case 2:
			if (get_script_task_status(Global_35, 2106541073, true) == 8)
			{
				task_turn_ped_to_face_entity(Global_35, &(iParam0->f_80[1]), -1, -1082130432, -1082130432, -1082130432);
				func_1207(&(iParam0->f_2), 3);
			}
			break;
		case 3:
			func_884(iParam0);
			if (_does_anim_scene_exist(&(iParam0->f_57[5])))
			{
				if (_is_anim_scene_started(&(iParam0->f_57[5]), false))
				{
					if (_0x005e6f28dd7ed58d(&(iParam0->f_57[5]), "pearson") || _is_anim_scene_finished(&(iParam0->f_57[5]), false))
					{
						set_player_control(get_player_index(), true, 0, false);
						task_stand_still(Global_35, 3000);
						func_1207(&(iParam0->f_2), 4);
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_881(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_anim_scene_entity(&(iParam0->f_57[5]), "pearson", &(iParam0->f_80[0]), 0);
	}
	set_anim_scene_entity(&(iParam0->f_57[5]), "ARTHUR", Global_35, 0);
	start_anim_scene(&(iParam0->f_57[5]));
}

void func_882(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_883(int iParam0, int iParam1)
{
	open_sequence_task(&iVar0);
	task_follow_waypoint_recording(0, func_521(iParam1), 0, 17422, -1, 0, 0, -1);
	task_stand_still(0, -1);
	func_882(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_884(int iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (!func_201(iParam0->f_144))
			{
				iParam0->f_144 = func_1208("INTERACT_LOOK", -416594956, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				iParam0->f_78 = create_camera_with_params(26379945, 2068.878f, -1883.587f, 41.9315f, 0.424f, 0f, -177.1101f, 25f, false, 2);
				func_1209(&(iParam0->f_3), 1);
			}
			break;
		case 1:
			if (func_1210(iParam0->f_144, 1))
			{
				if (does_cam_exist(iParam0->f_78))
				{
					if (!is_cam_rendering(iParam0->f_78))
					{
						set_cam_active(iParam0->f_78, true);
						render_script_cams(true, false, 3000, true, false, 0);
					}
				}
			}
			else if (is_cam_rendering(iParam0->f_78))
			{
				render_script_cams(false, false, 3000, true, false, 0);
			}
			if (_does_anim_scene_exist(&(iParam0->f_57[5])) && _is_anim_scene_finished(&(iParam0->f_57[5]), false))
			{
				func_1209(&(iParam0->f_3), 2);
			}
			break;
		case 2:
			if (is_cam_rendering(iParam0->f_78))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				set_cam_active(iParam0->f_78, false);
			}
			else
			{
				destroy_cam(iParam0->f_78, false);
				func_62(&(iParam0->f_144));
				func_1209(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			break;
	}
}

bool func_885()
{
	iVar0 = func_72(func_71(3, 1202375449));
	if ((is_bit_set(iVar0, 0) && is_bit_set(iVar0, 1)) && is_bit_set(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_887(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		_set_entity_coords_and_heading(iParam0, func_509(iParam1), func_851(iParam1), true, false, true);
	}
}

void func_888(int iParam0)
{
	bVar0 = func_198(iParam0->f_128, 1048576);
	bVar1 = false;
	if (get_script_task_status(Global_35, -1794415470, true) == 1)
	{
		bVar1 = true;
	}
	iVar2 = 1;
	while (iVar2 <= 3)
	{
		if (&iParam0->f_14[iVar2] != 7 && is_entity_dead(&(iParam0->f_80[iVar2])))
		{
			func_499(&(iParam0->f_128), 1048576);
			func_1183(iParam0->f_14[iVar2], 7);
		}
		if (&iParam0->f_14[iVar2] != 6 && has_entity_been_damaged_by_entity(&(iParam0->f_80[iVar2]), Global_35, 1, 1))
		{
			func_499(&(iParam0->f_128), 1048576);
			func_1183(iParam0->f_14[iVar2], 6);
		}
		if ((&iParam0->f_14[iVar2] != 6 && bVar0) && !bVar1)
		{
			func_1183(iParam0->f_14[iVar2], 6);
		}
		switch (&iParam0->f_14[iVar2])
		{
			case 0:
				if (!func_198(iParam0->f_128, 262144))
				{
					if (get_script_task_status(&(iParam0->f_80[iVar2]), -982327190, true) != 1 && get_script_task_status(&(iParam0->f_80[iVar2]), -1098463898, true) != 1)
					{
						task_stand_still(&(iParam0->f_80[iVar2]), -1);
					}
				}
				else if (get_script_task_status(&(iParam0->f_80[iVar2]), -875674219, true) != 1)
				{
					if (!func_203(iParam0->f_85[iVar2]))
					{
						func_60(iParam0->f_85[iVar2], 0);
						iParam0->f_98[iVar2] = get_random_float_in_range((0f + IntToFloat(iVar2)), (2f * IntToFloat(iVar2)));
					}
					else if (func_218(iParam0->f_85[iVar2]) >= &iParam0->f_98[iVar2])
					{
						func_204(iParam0->f_85[iVar2]);
						task_turn_ped_to_face_entity(&(iParam0->f_80[iVar2]), &(iParam0->f_80[0]), -1, -1082130432, -1082130432, -1082130432);
					}
				}
				if (func_198(iParam0->f_128, 131072))
				{
					func_1183(iParam0->f_14[iVar2], 2);
				}
				if (func_198(iParam0->f_128, 16384))
				{
					func_1183(iParam0->f_14[iVar2], 6);
				}
				break;
			case 2:
				if (get_script_task_status(&(iParam0->f_80[iVar2]), 1056466932, true) != 1)
				{
					if (!func_203(iParam0->f_85[iVar2]))
					{
						func_60(iParam0->f_85[iVar2], 0);
						iParam0->f_98[iVar2] = get_random_float_in_range((0f + IntToFloat(iVar2)), (2f * IntToFloat(iVar2)));
					}
					else if (func_218(iParam0->f_85[iVar2]) >= &iParam0->f_98[iVar2])
					{
						func_204(iParam0->f_85[iVar2]);
						task_follow_to_offset_of_entity(&(iParam0->f_80[iVar2]), &(iParam0->f_80[0]), 1f, 1f, 1f, 1f, -1, 1036831949, 1, 1, 0, 0, 1);
					}
				}
				set_ped_max_move_blend_ratio(&(iParam0->f_80[iVar2]), 0.75f);
				if (func_827(&(iParam0->f_80[iVar2]), Global_35, 1, 1) < 8f)
				{
					func_1183(iParam0->f_14[iVar2], 6);
				}
				if (func_198(iParam0->f_128, 32768))
				{
					func_1183(iParam0->f_14[iVar2], 3);
				}
				break;
			case 3:
				if (get_script_task_status(&(iParam0->f_80[iVar2]), 1056466932, true) != 1)
				{
					if (!func_203(iParam0->f_85[iVar2]))
					{
						func_60(iParam0->f_85[iVar2], 0);
						iParam0->f_98[iVar2] = get_random_float_in_range(0f, 2f);
					}
					else if (func_218(iParam0->f_85[iVar2]) >= &iParam0->f_98[iVar2])
					{
						func_204(iParam0->f_85[iVar2]);
						task_follow_to_offset_of_entity(&(iParam0->f_80[iVar2]), &(iParam0->f_80[0]), 1f, 1f, 1f, 1.5f, -1, 1036831949, 1, 1, 0, 0, 1);
					}
				}
				if (!func_900(&(iParam0->f_80[iVar2]), &(iParam0->f_80[0]), 7f, 1))
				{
					set_ped_min_move_blend_ratio(&(iParam0->f_80[iVar2]), 2f);
				}
				if (func_827(&(iParam0->f_80[iVar2]), Global_35, 1, 1) < 10f)
				{
					func_1183(iParam0->f_14[iVar2], 6);
				}
				if (is_ped_in_any_vehicle(&(iParam0->f_80[0]), false) || func_900(&(iParam0->f_80[0]), iParam0->f_143, 5f, 0))
				{
					func_60(&(iParam0->f_147), 0);
					func_1183(iParam0->f_14[iVar2], 5);
				}
				break;
			case 4:
				if (is_entity_dead(iParam0->f_143))
				{
					return;
				}
				if (get_script_task_status(&(iParam0->f_80[iVar2]), 1056466932, true) != 1)
				{
					task_follow_to_offset_of_entity(&(iParam0->f_80[iVar2]), iParam0->f_143, 0f, -5f, 0f, 1.5f, -1, 1036831949, 1, 1, 0, 0, 1);
				}
				if (iParam0->f_8 == 6)
				{
					func_1183(iParam0->f_14[iVar2], 5);
				}
				break;
			case 5:
				if (get_script_task_status(&(iParam0->f_80[iVar2]), 713668775, true) != 1)
				{
					if (iParam0->f_7 >= 6 && iParam0->f_8 < 2)
					{
						iVar3 = get_blip_from_entity(&(iParam0->f_80[iVar2]));
						if (does_blip_exist(iVar3))
						{
							_0xedd964b7984ac291(iVar3, 831283580);
						}
						else
						{
							iVar3 = _blip_add_for_entity(831283580, &(iParam0->f_80[iVar2]));
						}
					}
					fVar4 = 1.5f;
					task_follow_nav_mesh_to_coord(&(iParam0->f_80[iVar2]), func_1211(iVar2), fVar4, -1, 0.25f, 0, 40000f);
				}
				if (_0x285d36c5c72b0569(Global_35) < 0.25f)
				{
					task_follow_nav_mesh_to_coord(&(iParam0->f_80[iVar2]), func_509(22), 2f, -1, 0.25f, 0, 40000f);
					func_1183(iParam0->f_14[iVar2], 1);
				}
				if (func_827(&(iParam0->f_80[iVar2]), Global_35, 1, 1) < 10f)
				{
					func_1183(iParam0->f_14[iVar2], 6);
				}
				if (func_886(&(iParam0->f_80[iVar2]), &(iParam0->f_112[0]), 1, 0))
				{
					func_499(&(iParam0->f_128), 16);
					func_1183(iParam0->f_14[iVar2], 1);
				}
				break;
			case 1:
				if (func_222(&(iParam0->f_80[iVar2]), func_1211(iVar2), 1) < 15f)
				{
					if (func_1212(Global_35, &(iParam0->f_112[1]), 0, 1))
					{
						func_1183(iParam0->f_14[iVar2], 6);
						return;
					}
					if (get_script_task_status(&(iParam0->f_80[iVar2]), 1833500181, true) != 1)
					{
						task_wander_in_volume(&(iParam0->f_80[iVar2]), &(iParam0->f_112[0]), 1077936128, 1086324736, 0);
					}
				}
				if (func_827(&(iParam0->f_80[iVar2]), Global_35, 1, 1) < 15f && !bVar1)
				{
					func_1183(iParam0->f_14[iVar2], 6);
				}
				break;
			case 6:
				if (!func_198(iParam0->f_128, 1048576) && func_827(Global_35, &(iParam0->f_80[iVar2]), 1, 1) < 11f)
				{
					func_499(&(iParam0->f_128), 1048576);
				}
				if (get_script_task_status(&(iParam0->f_80[iVar2]), 780511057, true) != 1 && !bVar1)
				{
					task_combat_ped(&(iParam0->f_80[iVar2]), Global_35, 0, 0);
				}
				if (bVar1)
				{
					clear_ped_tasks(&(iParam0->f_80[iVar2]), 1, 0);
					func_1183(iParam0->f_14[iVar2], 1);
				}
				break;
			case 7:
				break;
		}
		iVar2++;
	}
}

void func_889(int iParam0)
{
	if (!func_203(&(iParam0->f_140)))
	{
		func_213(&(iParam0->f_140));
	}
	else if (func_218(&(iParam0->f_140)) > 1f)
	{
		iVar0 = func_326(2116770557, 0, 0);
		if (iVar0 >= iParam0->f_146 && (func_1213(Global_35) || func_218(&(iParam0->f_140)) > 30f))
		{
			func_499(&(iParam0->f_128), 8);
		}
		iParam0->f_66 = (iVar0 - iParam0->f_145);
		if (iParam0->f_66 >= 9)
		{
			func_499(&(iParam0->f_128), 8);
		}
		else if (iParam0->f_66 >= 6)
		{
			func_499(&(iParam0->f_128), 4);
		}
		else if (iParam0->f_66 > 1)
		{
			func_499(&(iParam0->f_128), 2);
		}
	}
}

void func_890(int iParam0)
{
	if (!func_198(iParam0->f_128, 33554432))
	{
		if (func_1214(iParam0))
		{
			if (!func_502(1))
			{
				func_501(&(iParam0->f_11), 20);
				func_499(&(iParam0->f_128), 33554432);
			}
		}
	}
}

bool func_891(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

void func_892(int iParam0)
{
	if (!func_198(iParam0->f_128, 67108864))
	{
		if (func_1215(iParam0))
		{
			if (!func_502(1))
			{
				func_501(&(iParam0->f_11), 21);
				func_499(&(iParam0->f_128), 67108864);
			}
		}
	}
}

void func_893(int iParam0)
{
	if (does_cam_exist(iParam0->f_78))
	{
		if (is_cam_rendering(iParam0->f_78))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(iParam0->f_78, false);
		}
		destroy_cam(iParam0->f_78, false);
	}
	if (func_201(iParam0->f_144))
	{
		func_62(&(iParam0->f_144));
	}
	func_1209(&(iParam0->f_3), 3);
}

int func_894(int iParam0, bool bParam1)
{
	Var0 = { func_434(iParam0, 0, 0) };
	return func_639(iParam0, &Var0, 0, bParam1);
}

void func_895(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_896(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		func_1216(iParam0);
		task_combat_ped(iParam0, iParam1, 16777216, 0);
		func_1217(iParam0, iParam2);
		set_ped_combat_attributes(iParam0, 50, true);
		set_ped_combat_attributes(iParam0, 5, true);
		set_ped_combat_movement(iParam0, 2);
		set_ped_config_flag(iParam0, 112, true);
		set_ped_config_flag(iParam0, 113, true);
		set_animal_tuning_bool_param(iParam0, 33, true);
		set_animal_tuning_bool_param(iParam0, 32, true);
		set_animal_tuning_bool_param(iParam0, 9, true);
	}
}

void func_897(int iParam0, int iParam1, float fParam2)
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_509(iParam1), fParam2, -1, 0.25f, 0, 40000f);
	task_stand_still(0, -1);
	func_882(iParam0, &iVar0, 0, 0, 1, 1);
}

char* func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAPRS_HNT6_EXT";
		default:
			break;
	}
	return "FAIL -- 6";
}

void func_899(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

bool func_900(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_901(int iParam0, int iParam1)
{
	func_1218(&(iParam0->f_160));
	iParam0->f_402 = func_898(iParam1);
	if (is_string_null_or_empty(iParam0->f_402))
	{
		return;
	}
	StringCopy(&cVar0, iParam0->f_402, 32);
	func_1219(&(iParam0->f_160), cVar0);
	switch (iParam1)
	{
		case 0:
			func_1220(iParam0);
			break;
	}
}

bool func_902(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_135(iParam0))
	{
		return false;
	}
	return func_146((*Global_1347702)[iParam0]->f_15, 1);
}

int func_903(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1221(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_904(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	func_833(uParam4, &cParam0);
	if (func_832(uParam4, 2) && !func_832(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1222(uParam4) != 1)
	{
		func_1223(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1222(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_1224(uParam4, &cParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_1225(uParam4, 4);
					return false;
				}
				else if (func_1226(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_1225(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_832(uParam4, 134217728))
				{
				}
				else
				{
					func_1227(uParam4);
				}
				func_213(&(uParam4->f_1));
				func_1225(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_847(uParam4);
				if (!func_203(&(uParam4->f_1)))
				{
					func_60(&(uParam4->f_1), 0);
				}
				else if (func_218(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1225(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_505(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_1225(uParam4, 4);
					}
					else if (!func_475(func_834(uParam4)) && !func_1228(Global_35, func_834(uParam4), 100f, 1, 1))
					{
						func_1229(1);
						start_player_teleport(get_player_index(), func_834(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_218(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1225(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_1230(1, 0);
					func_1224(uParam4, &cParam0);
					func_1225(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_218(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_1225(uParam4, 4);
			}
			break;
		case 3:
			func_1231(uParam4);
			if (func_1226(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_832(uParam4, 512)))
			{
				if (!func_832(uParam4, 1024) && func_1232(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_832(uParam4, 512))
				{
					func_213(&(uParam4->f_1));
					func_835(uParam4, 512);
					func_1225(uParam4, 4);
				}
				else if (func_832(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1223(uParam4);
			}
			if (func_832(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1233(uParam4) - func_1234(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (_0xef324e9550a394d5(uParam4->f_156))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_1235(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1234(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1236(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_1237(uParam4);
				func_1238(uParam4);
				return true;
			}
			else
			{
				if (func_832(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_213(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_835(uParam4, 512);
						func_842(uParam4, 67108864, 1);
						func_1225(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_832(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_1234(uParam4) <= 5000) && func_1234(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_832(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1239(&(uParam4->f_213), 0);
					func_835(uParam4, 536870912);
				}
				if (func_1234(uParam4) >= 5000 && func_1234(uParam4) <= (func_1233(uParam4) - 5000))
				{
					func_1240();
				}
			}
			break;
		case 6:
			if (func_1236(uParam4))
			{
				func_1237(uParam4);
				func_1238(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_832(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_156))
					{
						func_835(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (!_is_anim_scene_paused(uParam4->f_156))
					{
						set_anim_scene_paused(uParam4->f_156, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1226(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1225(uParam4, 3);
					}
					else if (func_218(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1225(uParam4, 3);
					}
				}
				if (func_1222(uParam4) == 3)
				{
					if (func_832(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1225(uParam4, 4);
			break;
	}
	return false;
}

int func_905(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_248(iParam0))
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
					if (func_146((*Global_1835011)[4]->f_1, 1))
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
					if (func_1241(iVar0, 9, 11))
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
					if (func_146((*Global_1347702)[63]->f_15, 1) || func_13((*Global_1347702)[63]->f_15))
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
					if (func_1241(iVar0, 9, 12))
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
					if (!func_146((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_270(18, 134217728, 1))
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
			break;
		case 2:
		case 3:
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
					if (func_1241(iVar0, 9, 11))
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
					if (func_146((*Global_1347702)[134]->f_15, 1) || func_13((*Global_1347702)[134]->f_15))
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
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_146((*Global_1835011)[38]->f_1, 1))
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
			break;
		case 5:
		case 6:
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
					if (func_1241(iVar0, 9, 11))
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
			break;
		case 7:
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
					if (func_296(747937920, 1) && !func_146((*Global_1347702)[1]->f_15, 1))
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
			break;
		case 8:
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
			break;
	}
	if (bParam3 && does_entity_exist(func_75(iParam0)))
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
	if (!func_532(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_906(int iParam0)
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

bool func_907(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_74(iParam0) || func_260(iParam0, 44, 1))
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

struct<7> func_908(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_909(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_1242(iVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_1243(iParam0);
	}
}

void func_910(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_1244(iVar0);
	func_255(iParam0, 60, 1);
	if (bParam1)
	{
		func_1245(iParam0);
	}
}

void func_911(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_1246(iVar0);
	if (iParam0 == 14)
	{
		func_1247(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_1248(iParam0);
	}
}

void func_912(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_1249(iVar0);
	func_255(iParam0, 61, 1);
	if (bParam1)
	{
		func_1250(iParam0);
	}
}

int func_913(var uParam0)
{
	return uParam0;
}

bool func_914(int iParam0)
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

bool func_915(int iParam0)
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

bool func_916(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	func_1251(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_917(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_918(int iParam0, int iParam1)
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
			iVar0 = func_1252(296923297, iParam1);
			return func_1253(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1252(1237718549, iParam1);
			return func_1253(iVar0);
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

bool func_919(int iParam0, int iParam1)
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

bool func_920(int iParam0, int iParam1)
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

bool func_921(int iParam0, int iParam1)
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
	if (!func_919(iParam0, iVar0))
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

void func_922(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_923(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_919(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_919(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_919(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_919(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_919(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_919(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_919(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_919(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_919(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_919(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_919(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_919(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_919(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_919(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_919(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_919(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_919(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_919(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_919(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_919(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_919(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_919(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_919(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_919(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_919(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_919(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_924(int iParam0)
{
	func_1254(iParam0, 1);
	func_1254(iParam0, 128);
	func_1254(iParam0, 256);
	func_1254(iParam0, 512);
	func_1254(iParam0, 1024);
	func_1254(iParam0, 2048);
	func_1254(iParam0, 4096);
	func_1254(iParam0, 65536);
	func_1254(iParam0, 16384);
	func_1254(iParam0, 262144);
	func_1254(iParam0, 524288);
	func_1254(iParam0, 1048576);
	func_1254(iParam0, 2097152);
	func_1254(iParam0, 32768);
	func_1254(iParam0, 131072);
	func_1254(iParam0, 134217728);
	func_1254(iParam0, 1073741824);
}

void func_925(int iParam0, bool bParam1)
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

int func_926(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_437(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_437(iVar4) && iVar4 != iVar0)
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
	if (func_115() == -1 && !func_663(iVar0))
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
				if (func_663(-183018591))
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
		if (iParam0 != Global_35 && func_437(iVar0))
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
		func_351(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1255(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_672(iVar0))
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

void func_927(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

struct<11> func_928(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 2082.33f, -1912.337f, 40.3256f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 24f, 24f, 10f };
			Var0.f_9 = 665633627;
			Var0.f_10 = "GatorWanderSmall";
			break;
		case 1:
			Var0 = { 2075.528f, -1912.735f, 40.4256f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 30f, 30f, 10f };
			Var0.f_9 = 665633627;
			Var0.f_10 = "GatorWanderLarge";
			break;
		case 2:
			Var0 = { 2070.503f, -1893.048f, 40.426f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 55f, 55f, 10f };
			Var0.f_9 = 665633627;
			Var0.f_10 = "Fish06ActivityArea";
			break;
		case 3:
			Var0 = { func_509(28) };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 3f, 3f, 5f };
			Var0.f_9 = 665633627;
			Var0.f_10 = "FISH06_LOCATION_02";
			break;
		case 4:
			Var0 = { 2082.187f, -1887.598f, 41.426f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4.203f, 7.588f, 5f };
			Var0.f_9 = -1612834106;
			Var0.f_10 = "FISH06_ROW_BOAT";
			break;
	}
	return Var0;
}

void func_929(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_1256(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_115() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

int func_930(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1257(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_931(var uParam0)
{
	func_219(&(uParam0->f_10), 4, 1);
	func_219(&(uParam0->f_10), 8, 1);
	func_219(&(uParam0->f_10), 16, 1);
}

void func_932(var uParam0)
{
	func_219(&(uParam0->f_10), 2, 1);
}

void func_933(var uParam0)
{
	func_219(&(uParam0->f_10), 1, 1);
}

Vector3 func_934()
{
	if (func_1143(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_1143(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_935(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1258(iVar6);
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

bool func_936(int iParam0)
{
	if (!func_1259(iParam0))
	{
		return false;
	}
	if (!func_150())
	{
		return true;
	}
	return false;
}

void func_937(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

void func_938(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_939(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_940(int iParam0, struct<2> Param1)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1260(iParam0, Param1))
	{
	}
	if (!func_1261(iParam0, Param1.f_1))
	{
	}
}

void func_941(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1262((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_942(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_943(var uParam0)
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

void func_944(var uParam0)
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

void func_945(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_946(int iParam0, var uParam1)
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

void func_947(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_948(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_949(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_950(int iParam0)
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

void func_951(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_952(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_953(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_954(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1263(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1264(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1265(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1266(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_955(int iParam0)
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
	if (func_1267(iParam0))
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
	if (func_1268(iParam0))
	{
		iVar3 = func_1269(iParam0);
		if (func_1270(iVar3))
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

void func_956()
{
	if (func_559(0))
	{
		func_1271(0);
	}
	if (func_559(1))
	{
		func_1271(1);
	}
	if (func_559(5))
	{
		func_1271(5);
	}
	if (func_559(6))
	{
		func_951(6);
	}
}

int func_957()
{
	return Global_1900383->f_393;
}

void func_958(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_959(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_320())
	{
		if (func_124())
		{
			bVar0 = false;
			if (!func_146((*Global_1835011)[15]->f_1, 1) && !func_344(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1272();
				*iParam1 = func_1273();
				*iParam2 = func_1274();
				return 1;
			}
			else
			{
				*iParam0 = func_1275();
				*iParam1 = func_1276();
				*iParam2 = func_1277();
				return 1;
			}
		}
		else if (func_628())
		{
			if (!func_146((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1278();
				*iParam1 = func_1279();
				*iParam2 = func_1280();
				return 1;
			}
			else
			{
				*iParam0 = func_1281();
				*iParam1 = func_1282();
				*iParam2 = func_1283();
				return 1;
			}
		}
	}
	else if (func_124())
	{
		*iParam0 = func_1284();
		*iParam1 = func_1285();
		*iParam2 = func_1286();
		return 1;
	}
	else if (func_628())
	{
		*iParam0 = func_1287();
		*iParam1 = func_1288();
		*iParam2 = func_1289();
		return 1;
	}
	return 0;
}

void func_960(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

void func_961(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

void func_962(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

void func_963(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

void func_964(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_567(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_959(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1290(iParam1);
	iVar5 = func_558(iParam0);
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

void func_965(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

bool func_966(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

bool func_967(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1291(Var0, 1415981582, 0);
	if (!func_322(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_968(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1291(Var0, -2119169513, 0);
	if (!func_322(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_969(int iParam0, int iParam1)
{
	if (!func_1292(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1111() };
	*iParam1 = func_1291(Var0, iParam0, 0);
	if (!func_322(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_970(int iParam0)
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

void func_971(int iParam0, var uParam1)
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
	func_1293(iParam0, *uParam1);
	func_1293(iParam0, uParam1->f_1);
}

void func_972(int iParam0)
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

void func_973(int iParam0, var uParam1)
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
	func_1293(iParam0, *uParam1);
	func_1293(iParam0, uParam1->f_1);
	func_1293(iParam0, uParam1->f_2);
	func_1293(iParam0, uParam1->f_3);
	func_1293(iParam0, uParam1->f_4);
	func_1293(iParam0, uParam1->f_5);
}

int func_974(int iParam0, int iParam1, bool bParam2)
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

int func_975(var uParam0)
{
	if (!func_1294(func_509(5)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(5), func_851(5)))
	{
		return 0;
	}
	func_1296(&Global_35, &(Local_134.f_143), -1, 1);
	func_1296(Local_134.f_80[0], &(Local_134.f_143), 1, 1);
	func_1297(0, 0);
	if (does_blip_exist(uParam0->f_43))
	{
		remove_blip(&(uParam0->f_43));
	}
	return 1;
}

int func_976(var uParam0)
{
	if (!func_1294(func_509(1)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(1), func_851(1)))
	{
		return 0;
	}
	if (!func_1298(&Local_134))
	{
		return 0;
	}
	func_1299(Global_35, 31);
	func_1299(&(Local_134.f_80[0]), 32);
	func_228(&Local_134, 1);
	func_522(&(Local_134.f_9), 1);
	func_508(&Local_134, 4);
	func_1297(0, 0);
	set_ped_path_prefer_to_avoid_water(&(Local_134.f_80[0]), false, 1f);
	task_follow_waypoint_recording(&(Local_134.f_80[0]), func_521(1), 0, 25600, -1, 0, 0, -1);
	freeze_entity_position(Local_134.f_143, true);
	func_508(&Local_134, 4);
	if (does_blip_exist(uParam0->f_43))
	{
		remove_blip(&(uParam0->f_43));
	}
	trigger_music_event("BOB_HUNT06_RESTART_3");
	return 1;
}

int func_977(var uParam0)
{
	if (!func_1294(func_509(2)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(1), func_851(1)))
	{
		return 0;
	}
	if (!func_507(Local_134.f_57[5], &(Local_134.f_77), func_506(5), 0, 1, 0))
	{
		return 0;
	}
	else
	{
		func_499(&(Local_134.f_64), 32);
	}
	if (!func_1298(&Local_134))
	{
		return 0;
	}
	set_entity_heading(Local_134.f_143, func_851(30));
	func_1299(Global_35, 36);
	if (_get_anim_scene_entity_matrix(&(Local_134.f_57[5]), "pearson", &Var0, false, 0, 2))
	{
		func_531(&(Local_134.f_80[0]), Var0.f_6, Var0.f_9.f_2, 2, 1073741824);
	}
	func_228(&Local_134, 1);
	func_522(&(Local_134.f_9), 2);
	if (does_entity_exist(&(Local_134.f_80[3])))
	{
		_set_entity_coords_and_heading(&(Local_134.f_80[3]), func_509(19), func_851(19), true, false, true);
	}
	func_1297(0, 0);
	_0x437c08db4febe2bd(&(Local_134.f_80[0]), "Stealth", 1f, -1);
	_set_ped_crouch_movement(&(Local_134.f_80[0]), true, 0, false);
	task_stand_still(&(Local_134.f_80[0]), -1);
	_0x2208438012482a1a(&(Local_134.f_80[0]), false, false);
	_0x437c08db4febe2bd(Global_35, "Stealth", 1f, -1);
	_set_ped_crouch_movement(Global_35, true, 0, false);
	_0x2208438012482a1a(Global_35, false, false);
	freeze_entity_position(Local_134.f_143, true);
	if (does_blip_exist(uParam0->f_43))
	{
		remove_blip(&(uParam0->f_43));
	}
	trigger_music_event("BOB_HUNT06_RESTART_4");
	return 1;
}

int func_978(var uParam0)
{
	if (!func_1294(func_509(30)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(30), func_851(30)))
	{
		return 0;
	}
	func_1300(func_509(30), 15f, 0, 0, 0, 0, 0);
	if (does_entity_exist(Local_134.f_143))
	{
		set_entity_heading(Local_134.f_143, func_851(30));
		set_ped_into_vehicle(Global_35, Local_134.f_143, -1);
		set_ped_into_vehicle(func_75(uParam0->f_2), Local_134.f_143, 1);
	}
	func_1297(0, 0);
	if (does_blip_exist(uParam0->f_43))
	{
		remove_blip(&(uParam0->f_43));
	}
	freeze_entity_position(Local_134.f_143, true);
	func_228(&Local_134, 1);
	func_522(&(Local_134.f_9), 3);
	func_899(&(Local_134.f_8), 5);
	trigger_music_event("BOB_HUNT06_RESTART_5");
	return 1;
}

float func_979(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_980(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_741(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1301(1, bVar1, 1, sVar2);
		func_1302(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1303(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_381();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1303(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1303(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_981(bool bParam0, bool bParam1)
{
	if (func_115() == -1)
	{
		func_1304();
	}
	else
	{
		return;
	}
	func_1305();
	Global_40.f_9.f_14 = func_113();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1306())
		{
			func_194(Global_1310720->f_1);
		}
		else if (func_199() == func_195(Global_36, 1) && func_1307() != 2)
		{
			func_194(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_194(Global_36);
		}
		func_1308(Global_36, &vVar0, &uVar4);
		if (!func_1306())
		{
			if (func_1309(vVar0, Global_36) < func_1309(Global_40.f_9.f_7, Global_36))
			{
				func_194(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_195(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1308(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_91(Global_1935630, 8192);
	}
	func_1310();
}

int func_982(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1311(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_717("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_718(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_437(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1311(iParam1, 512) && func_1050(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1311(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1311(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1311(iParam1, 33554432)))
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
		func_719(iVar1);
	}
	if (func_437(iVar0))
	{
	}
	else if (!func_1311(iParam1, 512))
	{
		iParam1 |= 512;
		return func_982(uParam0, iParam1, iParam2);
	}
	else if (func_1311(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_983(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_984(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	*uParam0 = (*uParam0 || shift_left(1, iVar0));
}

bool func_985()
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_253(1) > 0;
}

void func_986(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_987(int iParam0)
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

void func_988(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_1312(iParam1);
	}
}

float func_989(int iParam0, int iParam1, bool bParam2)
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
	return func_1309(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_990(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_1313(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_991(int iParam0)
{
	iVar0 = func_265(iParam0);
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

int func_992(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_1314(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_993(int iParam0)
{
	if (!func_248(iParam0))
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

void func_994(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_995(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_996(int iParam0)
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

int func_997(int iParam0)
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

void func_998(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_999(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1000(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1001(int iParam0, int iParam1)
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

void func_1002(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1315(bParam1);
	}
}

void func_1003(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1004(int iParam0)
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

bool func_1005(int iParam0)
{
	if (!func_809(23, &vVar0))
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

bool func_1006(int iParam0, int iParam1, int iParam2)
{
	if (!func_809(23, &Var0))
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

int func_1007(int iParam0)
{
	return iParam0;
}

int func_1008()
{
	iVar0 = func_626();
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

int func_1009(int iParam0)
{
	if (!func_322(*iParam0, 0))
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

bool func_1010(int iParam0, var uParam1, bool bParam2)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_434(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_664((386 + iVar29), 1);
		if (func_665(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_666(iParam0, &Var6, iVar5);
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

int func_1011(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_667(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_611(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1012(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1013(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1014(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_611(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1015(int iParam0)
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

float func_1016(int iParam0)
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
			return func_1316(iParam0);
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
			return func_1316(iParam0);
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
			return func_1316(iParam0);
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

bool func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_344(18);
		case 2:
			return func_344(20);
		case 1:
			return func_344(19);
		default:
			break;
	}
	return true;
}

int func_1018(int iParam0)
{
	return func_1317(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1019(int iParam0, float fParam1, bool bParam2)
{
	if (func_115() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_344(31))
	{
		return;
	}
	iVar0 = func_1018(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1018(iParam0);
	if (func_1318(iParam0) && func_1319(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1320(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1321(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_144(func_1322(iParam0), 0);
					}
					func_1323(iParam0, iVar2, iVar3);
					func_1324(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1020(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1021(int iParam0)
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

int func_1022()
{
	return func_1325(Global_40.f_12019);
}

int func_1023()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_647(iVar1);
		if (func_166(iVar2, 1, 0) || func_1029(func_1028(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1024()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1326(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1025()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1034(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1026()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1027(int iParam0)
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

int func_1028(int iParam0)
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

bool func_1029(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1030(int iParam0)
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

int func_1031(int iParam0)
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

int func_1032(int iParam0)
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

char* func_1033(int iParam0)
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

bool func_1034(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1035(int iParam0)
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

char* func_1036(int iParam0)
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

bool func_1037(int iParam0)
{
	if (func_1327(iParam0) && func_166(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1328(iParam0) && func_1329(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1038(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_390(iParam0));
}

int func_1039(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1040(bool bParam0)
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

void func_1041(int iParam0)
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

void func_1042(bool bParam0)
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

void func_1043(bool bParam0)
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

void func_1044(bool bParam0)
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

void func_1045(bool bParam0)
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

void func_1046(bool bParam0)
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

void func_1047(bool bParam0)
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

int func_1048(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_422(iParam0, 1)]);
}

void func_1049()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1330();
		_unlock_set_unlocked(-1526891582, true);
		func_349(-916314281);
		func_396(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_349(494733111);
		func_396(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1050(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_611(0);
	*uParam1 = { func_667(iParam0, func_776(0), iParam3, 0) };
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

bool func_1051(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1052(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1053(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1054(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_342(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1055(int iParam0, int iParam1)
{
	iVar1 = func_422(func_1331(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_346(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1056(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_422(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_712(524288))
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

bool func_1057(int iParam0)
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

int func_1058(int iParam0)
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

int func_1059(int iParam0)
{
	return func_1332(iParam0, -1);
}

void func_1060(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1333((Global_40.f_4283.f_325 + iParam0));
}

void func_1061(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_797())
	{
		func_453(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_453(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1062(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1063(int iParam0)
{
	iVar0 = func_481(iParam0, 1);
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

void func_1064(int iParam0)
{
	iVar0 = func_481(iParam0, 1);
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

void func_1065()
{
	func_1064(-939420910);
	func_1064(-1187950766);
	func_1064(356365161);
	func_1064(753127042);
	func_1064(-2038424081);
	func_1064(1884271742);
	func_1064(459290420);
}

void func_1066()
{
	func_1064(704802028);
	func_1064(588987611);
	func_1064(2008888900);
	func_1064(1649996811);
	func_1064(227918160);
	func_1064(168171957);
	func_1064(1193080109);
	func_1064(-491981251);
	func_1064(-639037538);
	func_1064(-618620429);
}

bool func_1067(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1068(int iParam0)
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

void func_1069(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1070(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1071()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1072(int iParam0)
{
	func_1077(iParam0, 8, 6);
}

void func_1073(int iParam0)
{
	func_1334(&(Global_1946804->f_2589), iParam0);
}

void func_1074(int iParam0, int iParam1)
{
	func_1335(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1075(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1336(0);
	if (iParam2 != 0 && func_1337(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_767(iParam0, func_781(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1076(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_115() != -1;
	iVar7 = func_1336(0);
	if (func_712(32768))
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
			iVar5 = func_781(iVar0, 1);
			if (func_1133(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1133(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1056(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1338(uParam0);
				if (iVar3 > 0)
				{
					if (!func_712(524288))
					{
						func_773(524288);
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
							iVar5 = func_781(iVar0, 1);
							if (func_1133(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1133(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1056(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1074(iVar0, iParam2);
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
					func_1080(524288);
				}
			}
		}
	}
}

void func_1077(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 && iParam1));
}

void func_1078(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1339(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_115() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1340(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1099(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1099(Global_40.f_7729);
				Global_1946804->f_1378 = func_1099(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1341(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_761(0, 1);
	}
}

void func_1079(var uParam0)
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

void func_1080(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1081(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1082(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1137(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1137(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1138(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_773(8);
}

bool func_1083()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1084(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1085()
{
	fVar0 = func_1342(13);
	iVar1 = func_1343(fVar0);
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

float func_1086()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1087()
{
	if (func_157())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1088()
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

float func_1089()
{
	return Global_1955565->f_3;
}

void func_1090(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1344(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1091(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1344(iParam0, 2, 0, 0);
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

float func_1092(float fParam0, float fParam1, float fParam2)
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

bool func_1093()
{
	return func_1342(12) <= -99f;
}

bool func_1094()
{
	return func_1342(12) >= 99f;
}

int func_1095()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_346(iVar1) == -999503751)
		{
			if (func_1345() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1096(int iParam0)
{
	if (!func_728(iParam0))
	{
		return false;
	}
	if (func_1100(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1097(int iParam0)
{
	if (!func_728(iParam0))
	{
		return false;
	}
	if (func_1100(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1098(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_728(iParam0))
	{
		return;
	}
	if (!func_1097(iParam0))
	{
		func_1102(iParam0, 2);
		if (bParam2)
		{
			if (!func_94(0, 0, 1))
			{
				func_186(1, 4);
			}
		}
		if ((!func_1101() && !bParam1) && !func_94(0, 0, 1))
		{
			func_462(_create_var_string(10, "OUT_JOURN_ADD", func_1346(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1099(int iParam0)
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

bool func_1100(int iParam0, int iParam1)
{
	if (!func_728(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1101()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1102(int iParam0, int iParam1)
{
	if (!func_728(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1103(int iParam0, bool bParam1)
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

void func_1104(int iParam0, bool bParam1)
{
	iVar0 = func_1347(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_345(50);
			}
			else
			{
				func_345(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_345(51);
			}
			else
			{
				func_345(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1348(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_377();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_377();
			}
			break;
		case 3:
			func_345(24);
			if (bParam1)
			{
				if (!func_1348(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_377();
				}
			}
			break;
	}
}

void func_1105(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1349(0))
			{
				iVar0++;
			}
			if (func_1349(2))
			{
				iVar0++;
			}
			if (func_1349(4))
			{
				iVar0++;
			}
			if (!func_1350(16))
			{
				if (iVar0 == 1)
				{
					func_1351();
					func_144(456, 1);
					func_1352(16);
				}
			}
			if (!func_1350(32))
			{
				if (iVar0 >= 3)
				{
					func_1351();
					func_144(456, 1);
					func_1352(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1349(1))
			{
				iVar0++;
			}
			if (func_1349(3))
			{
				iVar0++;
			}
			if (func_1349(7))
			{
				iVar0++;
			}
			if (!func_1350(1))
			{
				if (iVar0 == 1)
				{
					func_1353();
					func_144(457, 1);
					func_1352(1);
				}
			}
			if (!func_1350(2))
			{
				if (iVar0 >= 3)
				{
					func_1353();
					func_144(457, 1);
					func_1352(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1349(5))
			{
				iVar0++;
			}
			if (func_1349(6))
			{
				iVar0++;
			}
			if (func_1349(8))
			{
				iVar0++;
			}
			if (!func_1350(4))
			{
				if (iVar0 == 1)
				{
					func_1354();
					func_144(455, 1);
					func_1352(4);
				}
			}
			if (!func_1350(8))
			{
				if (iVar0 >= 3)
				{
					func_1354();
					func_144(455, 1);
					func_1352(8);
				}
			}
			break;
	}
}

void func_1106(var uParam0)
{
	func_734(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_734(uParam0, 617531372);
	}
	else
	{
		func_734(uParam0, 291123060);
	}
}

void func_1107(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1355(uParam0))
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

bool func_1108(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1109(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_322(iParam0, 0))
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

void func_1110(int iParam0)
{
	func_418(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1356(iParam0, &uVar18);
	func_1357(iParam0, &uVar18, &iVar34, 1);
	if (func_424() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1358(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_420(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_418(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_346(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1358(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1358(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1358(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1358(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1358(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_420(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_422(func_421(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1359(&(Global_1946804->f_1616));
	func_425(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_426(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_426(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_426(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_426(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_426(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_426(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_426(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_426(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_426(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_427(&(iVar0[iVar36]), iVar35))
			{
				func_420(func_1360(iVar35), 1, 1);
				func_1361(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1131(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_428(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_727(iParam0))
	{
		if (!func_1362(8))
		{
			if (func_424() == -2125499975)
			{
				if (bVar17)
				{
					func_425(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1363(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_727(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_425(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1363(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_727(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_727(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1365(Global_40.f_7729, 4096);
					func_1102(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1366(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_425(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_425(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1111()
{
	Var0 = { func_775(0) };
	return func_667(856287005, Var0, -218846335, 0);
}

int func_1112(int iParam0, struct<4> Param1)
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
			if (func_322(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1011(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1367(&uVar7);
					if (func_668(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1113(var uParam0)
{
	return uParam0->f_1;
}

void func_1114(var uParam0)
{
	func_1368(uParam0);
	func_1370(uParam0, func_1369(-1346384396));
	func_1371(uParam0, func_1369(-712836614));
	func_1372(uParam0, func_1369(-1629133289));
	func_1373(uParam0, func_1369(1302066700));
	func_1374(uParam0, func_1369(599669344));
	func_1375(uParam0, func_1369(-1555511632));
}

void func_1115(struct<6> Param0)
{
	if (!func_1376(Param0.f_4, 1))
	{
	}
	if (!func_1376(Param0, 1))
	{
	}
	if (!func_1376(Param0.f_2, 1))
	{
	}
	if (!func_1376(Param0.f_5, 1))
	{
	}
	if (!func_1376(Param0.f_3, 1))
	{
	}
	if (!func_1376(Param0.f_1, 1))
	{
	}
}

void func_1116(int iParam0, int iParam1)
{
	iParam0 = func_551(iParam0);
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

bool func_1117(int iParam0)
{
	iVar0 = func_1264(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_775(0) };
	if (func_1377(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1118(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_668(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1119(int iParam0)
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

int func_1120(int iParam0, int iParam1)
{
	if (!func_322(iParam1, 0))
	{
		return 0;
	}
	if (!func_1378(iParam1))
	{
		return 0;
	}
	if (func_1117(iParam0))
	{
		return 0;
	}
	iVar0 = func_1264(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_775(0) };
	Var1.f_4 = iVar0;
	if (!func_725(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1121(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_322(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1011(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1367(&Var7);
					if (func_725(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1124(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1122(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1141(1) < iParam0)
	{
		iParam0 = func_1141(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_119(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1123(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_611(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_780(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1124(struct<4> Param0, int iParam4)
{
	if (!func_350(0))
	{
		return func_1379(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_780(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_611(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1125(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1051(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_350(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_611(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1126(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_115() == -1)
	{
		if (func_332(43))
		{
			if (func_342(iParam0, 412399755))
			{
				func_695(-1791518714);
				if (func_696() == 0)
				{
					func_186(0, 10);
					iVar0 = func_1380(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_698(iParam0) < func_699(iParam0))
						{
							func_338(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_332(44))
		{
			if (func_342(iParam0, 709057512))
			{
				func_695(-2087881550);
				if (func_696() == 1)
				{
					func_186(0, 10);
					iVar0 = func_1380(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_698(iParam0) < func_699(iParam0))
						{
							func_338(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_332(45))
		{
			if (func_342(iParam0, -1478961327))
			{
				func_695(1908068621);
				if (func_696() == 2)
				{
					func_186(0, 10);
					iVar0 = func_1380(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_698(iParam0) < func_699(iParam0))
						{
							func_338(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_332(46))
		{
			if (func_342(iParam0, -1238404098))
			{
				func_695(1611247019);
				if (func_696() == 3)
				{
					func_186(0, 10);
					iVar0 = func_1380(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_698(iParam0) < func_699(iParam0))
						{
							func_338(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_332(47))
		{
			if (func_342(iParam0, 1160548794))
			{
				func_695(1319635688);
				if (func_696() == 4)
				{
					func_186(0, 10);
					iVar0 = func_1380(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_698(iParam0) < func_699(iParam0))
						{
							func_338(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1127(int iParam0, int iParam1)
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

void func_1128(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1381(iParam1);
	func_1382(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1383(&(uParam0->f_26), iVar1);
		if (func_1384(uParam0->f_26, &iVar0))
		{
			func_1385(iVar0, iVar1);
		}
	}
}

bool func_1129(int iParam0, int iParam1)
{
	Var0 = { func_434(iParam0, 0, 0) };
	Var5 = { func_667(iParam0, Var0, Var0.f_4, 0) };
	if (func_1011(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_611(0), &Var5, iParam1);
	return true;
}

void func_1130(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1131(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1132(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_1133(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_1134(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1)])->f_10 || iParam1);
}

void func_1135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1136(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1074(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1074(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1074(iVar2, iVar0);
		}
	}
}

bool func_1137(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1138(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1139()
{
	return Var0;
}

bool func_1140(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_322(iParam0, 0))
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
		func_1386(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1141(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1142(int iParam0)
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

bool func_1143(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_146((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1144(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1145(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1146(int iParam0)
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
			Jump @9444; //curOff = 1958
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
			Jump @9444; //curOff = 2479
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
			Jump @9444; //curOff = 2918
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
			Jump @9444; //curOff = 3513
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
			Jump @9444; //curOff = 4296
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
			Jump @9444; //curOff = 4380
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9444; //curOff = 4471
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
			Jump @9444; //curOff = 5582
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
			Jump @9444; //curOff = 6025
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
			Jump @9444; //curOff = 6714
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
			Jump @9444; //curOff = 7286
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
			Jump @9444; //curOff = 7858
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9444; //curOff = 8172
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
			Jump @9444; //curOff = 8873
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
			(*Global_1897952)[iParam0]->f_1 = iVar0;
			return iVar0;
		}

bool func_1147(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_628())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1148(int iParam0, int iParam1)
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

int func_1149(int iParam0)
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

int func_1150(int iParam0)
{
	if (!func_809(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_1387(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_1151(int iParam0, int iParam1)
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

bool func_1152(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1388(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1153(int iParam0, int iParam1)
{
	func_809(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_809(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

bool func_1154(int iParam0)
{
	if (!func_476(iParam0))
	{
		return false;
	}
	return func_1389(iParam0, 33554432);
}

bool func_1155(int iParam0, bool bParam1)
{
	if (!func_1390(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1391(iParam0, 8))
		{
			return false;
		}
	}
	if (func_1391(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1156(int iParam0, int iParam1)
{
	func_809(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_809(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_166(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_1157()
{
	if (func_320())
	{
		if (!func_1143(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_1055(-2061583405, &uVar0));
}

bool func_1158(int iParam0, int iParam1)
{
	func_809(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_809(15, &Var7);
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

bool func_1159(int iParam0)
{
	if (!func_1390(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1155(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_1160(int iParam0, int iParam1)
{
	func_809(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1392(iVar5);
			if (func_1143(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1392(iVar5);
			if (!func_1143(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1393(iVar5);
			if (func_902(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1393(iVar5);
			if (!func_902(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1161(int iParam0)
{
	if (!func_1394(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_1162(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

int func_1163(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_77(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_1395(iVar1), vParam0) < func_979(func_1396(iVar1) == 0f, fParam3, func_1396(iVar1)))
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

int func_1164(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1397(iVar0, 0))
		{
			if (vdist(func_1398(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1165(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

bool func_1166(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

char* func_1167(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1399(sParam1));
}

struct<8> func_1168(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_1169(var uParam0)
{
	return uParam0->f_152;
}

char* func_1170(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_1400(iVar0);
}

void func_1171(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_1172()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_1173(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

char* func_1174()
{
	return "unnamed";
}

void func_1175(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(uParam1, iParam2, iVar0);
}

void func_1176(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1401(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1402(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_1177(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1401(uParam0->f_13[iVar0], 2))
		{
			if (func_1401(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1403(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_1401(uParam0->f_13[iVar0], 16))
					{
						func_1404(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

struct<8> func_1178(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_1179()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

char[] func_1180(int iParam0)
{
	if (!func_620(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

int func_1181(int iParam0)
{
	if (func_80(iParam0) == 8)
	{
		return func_120(iParam0);
	}
	return -1;
}

char[] func_1182(int iParam0)
{
	if (!func_135(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_1183(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1184(int iParam0)
{
	fVar0 = func_827(&(iParam0->f_80[0]), Global_35, 1, 1);
	if (fVar0 > 50f)
	{
		func_499(&(iParam0->f_128), 2097152);
	}
	else if (fVar0 > 35f)
	{
		if (!func_198(iParam0->f_128, 8388608))
		{
			iParam0->f_159 = _uilog_get_cached_objective();
			func_829("FS06_WRN_RTRN");
			func_831("FS06_WRN_RTRN", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_499(&(iParam0->f_128), 8388608);
		}
	}
	else if (fVar0 < 25f)
	{
		if (func_198(iParam0->f_128, 8388608))
		{
			func_829(iParam0->f_159);
			func_878(&(iParam0->f_128), 8388608);
		}
	}
}

void func_1185(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = -571529030;
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

void func_1186(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
	}
	else if (!func_854(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_1405(iParam0, iParam1, iParam14);
	}
}

void func_1187(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1405(iParam0, iParam1, iParam18);
	}
}

void func_1188(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

Vector3 func_1189(vector3 vParam0)
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

void func_1190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_1406(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

void func_1191(int iParam0)
{
	if (!is_entity_dead(&(iParam0->f_80[0])))
	{
		set_anim_scene_entity(&(iParam0->f_57[2]), "pearson", &(iParam0->f_80[0]), 0);
		vVar0 = { get_entity_coords(&(iParam0->f_80[0]), true, false) };
		vVar3 = { 2042.198f, -1885.869f, 40.65866f };
		uVar6 = vVar0.z;
		if (get_ground_z_for_3d_coord(vVar0, &uVar6, false))
		{
			vVar0.f_2 = uVar6;
			vVar3.f_2 = uVar6;
		}
		fVar7 = func_1198(vVar0, vVar3, 1);
		vVar8 = { 0f, 0f, fVar7 };
		set_anim_scene_origin(&(iParam0->f_57[2]), vVar3, vVar8, 2);
		if (_get_anim_scene_entity_matrix(&(iParam0->f_57[2]), "CRAYFISH", &vVar11, false, 0, 2))
		{
			iParam0->f_103[7] = create_object(-445365508, vVar11, true, true, false, false, true);
		}
		else
		{
			iParam0->f_103[7] = create_object(-445365508, vVar3, true, true, false, false, true);
		}
		set_anim_scene_entity(&(iParam0->f_57[2]), "CRAYFISH", &(iParam0->f_103[7]), 0);
	}
	_hide_ped_weapons(Global_35, 2, false);
	set_anim_scene_entity(&(iParam0->f_57[2]), "ARTHUR", Global_35, 0);
	start_anim_scene(&(iParam0->f_57[2]));
}

char* func_1192()
{
	return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@player";
}

char* func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_Enter";
		case 1:
			return "PL_Catch";
		case 2:
			return "PL_Exit";
		case 3:
			return "PL_ExitQuick";
		case 4:
			return "PL_Search";
		default:
			break;
	}
	return "CRAYFISH_PLAYLIST_FAIL";
}

int func_1194()
{
	return -445365508;
}

void func_1195(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1196(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_475(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1166(iVar0, 2))
		{
			if (func_1407(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1408(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_1197(int iParam0, bool bParam1)
{
	if (bParam1 && !func_201(iParam0))
	{
		return false;
	}
	iVar0 = func_482(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

float func_1198(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_1199(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_1200()
{
	fVar0 = get_random_float_in_range(-1f, 1f);
	fVar1 = get_random_float_in_range(-1f, 1f);
	vVar2 = { fVar0, fVar1, 0f };
	vVar2 = { func_1189(vVar2) };
	vVar5 = { vVar5 + vVar2 * Vector(127f, 127f, 127f) };
	return vVar5;
}

Vector3 func_1201(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_1202(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	iVar0 = compendium_get_map_discoverable_from_stat_item(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !_map_is_discovery_active(iVar1))
	{
		_0xd8c7162ab2e2af45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		compendium_animal_observed_by_stat_name(iParam0, iParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == 225514697)
		{
			iVar2 = func_1409(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_302(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_1409(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (_journal_can_write_entry(iVar2))
				{
					iVar2 = func_1409(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_302(iVar2, 0);
					}
				}
			}
		}
	}
}

int func_1203(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_1166(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
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
				func_1408(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1204(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_201(iParam0))
	{
		return;
	}
	iVar0 = func_482(iParam0);
	if (bParam1)
	{
		func_1410(iParam0, 4);
		func_1411(iVar0, 1);
		func_1412(iVar0, 1);
	}
	else
	{
		func_1413(iParam0, 4);
		func_1412(iVar0, 0);
	}
}

bool func_1205(int iParam0, bool bParam1)
{
	if (bParam1 && !func_201(iParam0))
	{
		return false;
	}
	return !func_1166(iParam0, 4);
}

bool func_1206(int iParam0, bool bParam1)
{
	if (bParam1 && !func_201(iParam0))
	{
		return false;
	}
	iVar0 = func_482(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1207(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1208(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
		if (func_1166(iVar0, 2))
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
		func_1408(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1209(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_1210(int iParam0, bool bParam1)
{
	if (bParam1 && !func_201(iParam0))
	{
		return false;
	}
	iVar0 = func_482(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

Vector3 func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2070.605f, -1925.247f, 41.46365f;
		case 2:
			return 2083.111f, -1917.3f, 40.90316f;
		case 3:
			return 2076.61f, -1910.752f, 40.63081f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

int func_1213(int iParam0)
{
	return func_1414(iParam0, 0);
}

bool func_1214(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (!is_entity_dead(&(iParam0->f_80[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1215(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (&iParam0->f_14[iVar0] != 6)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1216(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_1217(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && _does_volume_exist(iParam1))
	{
		_0xfc3db99c8144cd81(iParam0, iParam1, 0, 0, 0);
	}
}

void func_1218(var uParam0)
{
	Var0 = 1;
	Var0.f_13 = 11;
	Var0.f_146 = 1097859072;
	Var0.f_147 = 1101004800;
	Var0.f_174 = 4;
	_copy_memory(uParam0, &Var0, 242);
}

void func_1219(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

void func_1220(int iParam0)
{
	func_1415(&(iParam0->f_160), Global_35, "ARTHUR", 0, 0, 0);
	func_1415(&(iParam0->f_160), &(iParam0->f_80[0]), "MrPearson", 0, 0, 0);
	func_1416(&(iParam0->f_160), iParam0->f_143, "ROWBOATSWAMP", 0, 0, 0);
	func_1418(&(iParam0->f_160), 262067);
}

int func_1221(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1419(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_1235(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_156, sParam2))
		{
			func_1420(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && _0x005e6f28dd7ed58d(uParam0->f_156, sParam2))
		{
			func_1420(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

int func_1222(var uParam0)
{
	return *uParam0;
}

void func_1223(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_832(uParam0, 512))
	{
		if (!func_1421(uParam0->f_213, 128))
		{
			func_1422();
		}
		return;
	}
	if ((func_1235(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_1170(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_1170(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_1421(uParam0->f_213, 128))
		{
			func_1422();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_1423(iVar1))
		{
			if (func_1205(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_1421(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_1424(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_1422();
	}
}

void func_1224(var uParam0, char* sParam1)
{
	if (func_1222(uParam0) == 2 && (func_1425(uParam0->f_212, 16384) || func_832(uParam0, 268435456)))
	{
		Var0 = { func_849(uParam0) };
		func_1426(uParam0, &Var0);
	}
	func_1427(uParam0, sParam1);
	if (func_832(uParam0, 131072))
	{
		func_1428(uParam0, 0);
	}
	if (func_1429())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_1430();
	}
	if (func_489())
	{
		func_215(1);
	}
	func_846(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1219(uParam0, cVar8);
	func_1230(1, 0);
	func_840(uParam0);
	if (func_1431() && _0x6f1f0b17109309da(uParam0->f_156, func_1170(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1226(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_1432(uParam0);
	func_1177(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_1225(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_213(&(uParam0->f_1));
}

bool func_1226(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_1227(var uParam0)
{
	Var0 = { func_849(uParam0) };
	func_1173(uParam0, &Var0);
}

bool func_1228(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1309(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1229(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_1230(bool bParam0, int iParam1)
{
	if (func_1433())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1101())
		{
			func_1199(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_1231(var uParam0)
{
	if (!func_832(uParam0, 4))
	{
		if (func_1425(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_1434(uParam0) };
		if (!func_1425(uParam0->f_212, 524288))
		{
			func_1435(&(uParam0->f_224));
		}
		func_1436(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1437(uParam0, 0f, 0f, 0f);
		func_1438(uParam0);
		func_1439(uParam0);
		func_1440(uParam0, 0f, 0f, 0f, 0, 0);
		func_1441(uParam0);
		func_835(uParam0, 4);
		func_1442(uParam0, 0);
		func_1443(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

bool func_1232(var uParam0, bool bParam1)
{
	if (func_832(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_156, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_156, "ExportCamera") && bParam1)) || _is_anim_scene_active(uParam0->f_156))
	{
		func_835(uParam0, 262144);
		func_1442(uParam0, 1);
		return true;
	}
	return false;
}

int func_1233(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

int func_1234(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_1235(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_1401(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1236(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_832(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_832(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_1237(var uParam0)
{
	if (((func_832(uParam0, 1073741824) && !func_832(uParam0, 524288)) && func_832(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_1238(var uParam0)
{
	if (!func_832(uParam0, 536870912))
	{
		func_1442(uParam0, 1);
		func_1239(&(uParam0->f_213), uParam0->f_224);
		func_839();
		func_835(uParam0, 536870912);
	}
	if (func_832(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_1444(uParam0);
	func_1225(uParam0, 1);
	func_841(uParam0);
	func_1445(uParam0);
	func_1446(uParam0);
	func_1447(uParam0, 4);
	func_845(uParam0);
	func_1428(uParam0, 1);
	func_840(uParam0);
	func_204(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_1448(!func_1421(uParam0->f_213, 128));
	if (!func_1421(uParam0->f_213, 128))
	{
		func_1422();
	}
}

void func_1239(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1449(2000);
	Global_16 = 0;
	func_1450();
	set_entity_invincible(Global_35, func_1421(*uParam0, 8));
	if (!func_1421(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1421(*uParam0, 2) || func_1421(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1421(*uParam0, 16))
	{
		func_1451(1);
	}
	if (func_1421(*uParam0, 32))
	{
		func_375(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1452(-1623728698, 0);
	}
	func_1443(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1240()
{
	Global_1935630->f_52 = 1;
}

bool func_1241(int iParam0, int iParam1, int iParam2)
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

void func_1242(int iParam0)
{
	if (func_1453(iParam0, 0))
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

void func_1243(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (func_990(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	func_1242(iVar0);
	func_604(iParam0, 8192, 1);
}

void func_1244(int iParam0)
{
	if (func_1453(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_1245(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (func_990(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	func_1244(iVar0);
	func_604(iParam0, 8192, 0);
}

void func_1246(int iParam0)
{
	if (func_1453(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_1247(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_74(14))
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

void func_1248(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (func_990(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	func_1246(iVar0);
	func_604(iParam0, 16384, 1);
}

void func_1249(int iParam0)
{
	if (func_1453(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_1250(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (func_990(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	func_1249(iVar0);
	func_604(iParam0, 16384, 0);
}

int func_1251(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1454(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1252(int iParam0, int iParam1)
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
		if (func_532(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1253(int iParam0)
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

void func_1254(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

void func_1255(int iParam0, int iParam1, float fParam2)
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

void func_1256(int iParam0, int iParam1)
{
	if (!func_1455(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_1257(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1456(iParam1))
		{
			func_1457(iParam0, 41788943);
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
			func_1458(iParam0, 0, 1);
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
			func_1459(iParam0, 0);
			bVar0 = true;
		}
		func_1460(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_1258(int iParam0)
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

bool func_1259(int iParam0)
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

bool func_1260(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_667(iParam1, Var0, 1415981582, 0) };
	return func_1124(Var29, 1);
}

bool func_1261(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1263(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_667(iParam1, Var0, -2119169513, 0) };
	return func_1124(Var29, 1);
}

void func_1262(var uParam0)
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

bool func_1263(int iParam0, var uParam1)
{
	if (!func_1117(iParam0))
	{
		return false;
	}
	iVar0 = func_1264(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_775(0) };
	if (!func_1461(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1462(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1264(int iParam0)
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

bool func_1265(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_350(bParam10))
	{
		return func_1463(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_780(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1464(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_611(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1124(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1266(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_350(bParam9))
	{
		return func_1465(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1464(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_780(Param0, &Var0, bParam9, 1) || !func_780(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1464(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_611(0);
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

bool func_1267(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1466(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1268(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_1269(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_1269(int iParam0)
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

bool func_1270(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_1271(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_558(iParam0);
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
	if (func_966(iParam0, 64))
	{
		func_951(iParam0);
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
	bVar3 = func_344(42);
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
				func_1467(&((*Global_1900383)[iParam0]->f_27));
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
		func_951(iParam0);
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
		if (func_1468(1) < 1)
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
		func_1469(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_966(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1470(iParam0);
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
	fVar15 = func_1471(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1472(iParam0))
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
		func_1473((*Global_1900383)[iParam0]->f_26);
		func_1474((*Global_1900383)[iParam0]->f_26);
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
	if (func_915(iVar0) && !bVar9)
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
	iVar21 = func_1468(iParam0);
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

int func_1272()
{
	return 1342496140;
}

int func_1273()
{
	return 446670976;
}

int func_1274()
{
	return 1;
}

int func_1275()
{
	return -868094182;
}

int func_1276()
{
	return 1074477367;
}

int func_1277()
{
	return 1;
}

int func_1278()
{
	return -997197050;
}

int func_1279()
{
	return -2063289686;
}

int func_1280()
{
	return 2;
}

int func_1281()
{
	return -868094182;
}

int func_1282()
{
	return 1074477367;
}

int func_1283()
{
	return 1;
}

int func_1284()
{
	return 1235275977;
}

int func_1285()
{
	return 2030804811;
}

int func_1286()
{
	return 1;
}

int func_1287()
{
	return 1974379573;
}

int func_1288()
{
	return 2024948086;
}

int func_1289()
{
	return 1;
}

void func_1290(int iParam0)
{
	if (func_1475() < iParam0)
	{
		func_1476(iParam0);
	}
}

int func_1291(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1123(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1292(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_346(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1477(iParam0);
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

void func_1293(int iParam0, int iParam1)
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

bool func_1294(vector3 vParam0)
{
	if (func_222(Global_35, vParam0, 1) > 25f)
	{
		if (_0xcf45df50c7775f2a() == 0)
		{
			_0x513f8aa5bf2f17cf(vParam0, 50f, 0);
		}
	}
	if (_0xcf45df50c7775f2a())
	{
		if (!_0x0909f71b5c070797())
		{
			return false;
		}
	}
	return true;
}

bool func_1295(var uParam0, vector3 vParam1, float fParam4)
{
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_vehicle(func_542(0), vParam1, fParam4, true, true, false, false);
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	return true;
}

int func_1296(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*uParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*uParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*uParam1, iParam2) != *uParam0)
	{
		if (!is_vehicle_seat_free(*uParam1, iParam2))
		{
			if (iParam3 && func_1478(*uParam1))
			{
				iParam2 = func_1479(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*uParam0))
		{
			_remove_ped_from_mount(*uParam0, true, false);
		}
		set_ped_into_vehicle(*uParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_1297(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_1298(var uParam0)
{
	bVar0 = true;
	if (!_does_scenario_point_exist(&(uParam0->f_70[0])))
	{
		uParam0->f_70[0] = _find_closest_active_scenario_point_of_type(2076.609f, -1910.732f, 40.84669f, 1263162521, 1f, 0, false);
		bVar0 = false;
	}
	if (!_does_scenario_point_exist(&(uParam0->f_70[1])))
	{
		uParam0->f_70[1] = _find_closest_active_scenario_point_of_type(2083.159f, -1917.445f, 41.08478f, 1263162521, 1f, 0, false);
		bVar0 = false;
	}
	if (!_does_scenario_point_exist(&(uParam0->f_70[2])))
	{
		uParam0->f_70[2] = _find_closest_active_scenario_point_of_type(2070.59f, -1925.389f, 41.64231f, 1263162521, 1f, 0, false);
		bVar0 = false;
	}
	if (bVar0)
	{
		_0x5a40040bb5ae3ea2(&(uParam0->f_70[0]));
		_0x5a40040bb5ae3ea2(&(uParam0->f_70[1]));
		_0x5a40040bb5ae3ea2(&(uParam0->f_70[2]));
		return true;
	}
	return false;
}

void func_1299(int iParam0, int iParam1)
{
	_set_entity_coords_and_heading(iParam0, func_509(iParam1), func_851(iParam1), true, false, true);
}

void func_1300(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1301(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1302(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1344(0, 1, bParam0, bParam1);
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

int func_1303(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_1304()
{
	if (func_115() != -1)
	{
		return;
	}
	if (!func_320())
	{
		return;
	}
	func_1480(&(Global_40.f_40));
}

void func_1305()
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

bool func_1306()
{
	return !func_475(Global_1310720->f_1);
}

int func_1307()
{
	return Global_40.f_4283.f_4;
}

void func_1308(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1481())
	{
		fVar0 = func_1471(vParam0, Global_40.f_6);
	}
	if (func_1482(33554432))
	{
		if (!func_1407(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1471(vParam0, Global_40.f_2);
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

float func_1309(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1310()
{
	if (!func_95(&Global_1935630, 8192))
	{
		return;
	}
	if (func_20(32768))
	{
		return;
	}
	func_34(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1483(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1483(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1483(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1483(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1483(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1483(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1483(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1483(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1483(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1484(10f, to_float(func_1483(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1484(5f, to_float(func_1483(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1484(25f, to_float(func_1485(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1484(1f, to_float(func_1485(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1484(6f, to_float(func_1485(64058978)))));
	fVar0 = (fVar0 + (3f * func_1484(1f, to_float(func_1485(795577402)))));
	iVar1 = func_1486();
	fVar0 = (fVar0 + (0.1111111f * func_1484(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1484(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1484(to_float(20), to_float(func_1488()))));
	if (func_902(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_902(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_902(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_902(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_902(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1487(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1484(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1484(5f, to_float(func_1485(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1484(5f, to_float(func_1483(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1052(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1489(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1484((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1484(1f, to_float(func_1490(-2116919750)))));
	fVar5 = to_float(func_1491());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1484(5f, to_float(func_1485(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1484(1f, to_float(func_1485(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1484(1f, to_float(func_1485(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1484(1f, to_float(func_1485(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1484(1f, to_float(func_1483(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1484(1f, to_float(func_1483(978382515, 1015970717)))));
	Var6 = { func_119(1215094015) };
	fVar8 = func_1492(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_77(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_77(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_81(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1493(Global_1898330[iVar61]);
				}
				else
				{
					func_1494(iVar61, 0);
					if (func_80(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_79(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_79((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_79(&Global_1898437), &iVar9);
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

bool func_1311(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1312(int iParam0)
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

int func_1313(int iParam0)
{
	iVar0 = 0;
	if (!func_248(iParam0))
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
	if (!func_248(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_1314(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_990(iParam0, 1);
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

void func_1315(bool bParam0)
{
	func_1495(bParam0);
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

float func_1316(int iParam0)
{
	iVar4 = func_1015(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1317(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1496(iVar6) - func_1496(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1317(float fParam0)
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
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1319(int iParam0)
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

int func_1320(float fParam0, float fParam1)
{
	iVar0 = func_1317(fParam0);
	fVar1 = to_float(func_1496(iVar0));
	fVar2 = to_float(func_1496(iVar0 + 1));
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

int func_1321(int iParam0)
{
	if (func_1497(iParam0, &iVar0))
	{
		return func_1496(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1498())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1498())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1498())
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

int func_1322(int iParam0)
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

void func_1323(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1499(iParam0));
	sVar4 = func_1501(func_1500(iVar3, iParam2));
	sVar6 = func_1502(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1503(iParam0));
	iVar8 = func_1504(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1505(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_656(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1506(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1324(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1325(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1326(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1327(int iParam0)
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

int func_1328(int iParam0)
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

int func_1329(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1507(&iVar0, 0, iVar95, &Var1) && !func_1507(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1508(iVar0, &Var1);
			if (func_322(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1330()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1509(Global_35, &uVar0);
	Var30 = { func_775(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1510(0);
	func_1511(7);
	func_1512(-1623728698, 1, 1, 0);
	if (func_424() == 1160113249)
	{
		func_1512(-763730846, 1, 1, 1);
		func_1512(-361635024, 1, 1, 1);
	}
	func_1513(Global_35, &uVar0);
}

int func_1331(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_435(iVar0);
}

int func_1332(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_611(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_783(&uVar6, iVar0);
	func_784(&uVar6, iVar1);
	func_785(&uVar6, iVar2);
	func_786(&uVar6, iVar3);
	func_787(&uVar6, iVar4);
	func_788(&uVar6, iVar5);
	return uVar6;
}

void func_1333(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_119(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1334(var uParam0, int iParam1)
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
			if ((func_1514(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1514(uParam0->f_2[iVar0], 1))
				{
					func_1515(uParam0->f_2[iVar0], 2, 6);
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

void func_1335(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1516(uParam0, 1))
	{
		func_1517(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1336(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_424();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1337(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1338(var uParam0)
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

void func_1339(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_115() == -1)
	{
		func_428(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1518(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1340(int iParam0, int iParam1)
{
	if (func_115() == -1)
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

void func_1341(int iParam0, bool bParam1, int iParam2)
{
	func_1363(&(Global_1946804->f_1378), iParam0);
	func_1364(2, iParam0, 6);
	if (bParam1)
	{
		func_761(0, 1);
	}
}

float func_1342(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1343(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1344(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_741(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_741(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1345()
{
	return Global_1946804->f_1497;
}

char* func_1346(int iParam0)
{
	iVar0 = func_1099(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1038(iVar0);
}

int func_1347(int iParam0)
{
	if (func_1519(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1520(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1521(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1522(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1348(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_166(func_1523(iVar0, iParam0), 1, 0))
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

bool func_1349(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_166(func_1524(iVar0, iParam0), 1, 0))
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

bool func_1350(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1351()
{
	if (func_115() != -1)
	{
		return;
	}
	func_396(1654063339, 1, 752097756);
	iVar0 = func_1018(1);
	func_1323(1, iVar0, 0);
}

void func_1352(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1353()
{
	if (func_115() != -1)
	{
		return;
	}
	func_396(1623931083, 1, 752097756);
	iVar0 = func_1018(2);
	func_1323(2, iVar0, 0);
}

void func_1354()
{
	if (func_115() != -1)
	{
		return;
	}
	func_396(-1845241476, 1, 752097756);
	iVar0 = func_1018(0);
	func_1323(0, iVar0, 0);
}

bool func_1355(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1356(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1525(iParam0, func_424()))
	{
		return 0;
	}
	Var1 = func_763(func_424());
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

int func_1357(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_763(func_424());
	Var20 = { func_1012(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1014(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_718(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_727(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1135(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
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
	func_719(iVar0);
	return 1;
}

void func_1358(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1127(iVar2, &iVar0))
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

void func_1359(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1360(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1526();
	}
	if (func_115() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1361(int iParam0)
{
	if (func_115() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_428(&uVar1, iVar0, iParam0);
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
		func_1518(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1362(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1363(var uParam0, int iParam1)
{
	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_428(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1518(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1364(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
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

void func_1365(int iParam0, int iParam1)
{
	if (!func_728(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

int func_1366(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1099(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1360(iParam1);
	}
	if ((bParam3 && func_1100(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1525(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1365(Global_40.f_7729, 4096);
		func_1102(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_922(iParam0);
	}
	func_1527();
	if (!func_1528(iParam1))
	{
		func_1530(iVar0, iParam0, func_1529(iParam1), 1, 0, 1);
	}
	func_1531(iParam0);
	return 1;
}

void func_1367(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1368(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1369(int iParam0)
{
	if (func_124())
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
	else if (func_628())
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

void func_1370(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1371(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1372(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1373(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1374(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1375(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1376(int iParam0, int iParam1)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (!func_1532(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1111() };
	Var14 = { func_667(iParam0, Var10, iVar9, 0) };
	if (func_1124(Var14, iParam1))
	{
		if (func_1533(iParam0))
		{
			if (func_969(325139909, &iVar18))
			{
				if (func_1376(iVar18, 0))
				{
				}
			}
		}
		else if (func_1534(iParam0))
		{
			if (func_969(325139909, &iVar19))
			{
				if (func_1376(iVar19, 0))
				{
				}
			}
			if (func_969(986998820, &iVar20))
			{
				if (func_1376(iVar20, 0))
				{
				}
			}
			iVar21 = func_1535(iParam0);
			if (func_322(iVar21, 0))
			{
				if (func_1376(iVar21, 1))
				{
				}
			}
		}
		func_1536();
		return true;
	}
	return false;
}

int func_1377(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_611(bParam2), uParam0, iParam1);
}

bool func_1378(int iParam0)
{
	return func_341(iParam0) == -1784221369;
}

int func_1379(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_780(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_341(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1537(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1538(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1539(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1540(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1541(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1542(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1380(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_698(iVar9);
	iVar2 = func_698(iVar10);
	iVar3 = func_698(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_698(iVar12);
	}
	iVar5 = func_699(iVar9);
	iVar6 = func_699(iVar10);
	iVar7 = func_699(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_699(iVar12);
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

int func_1381(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1382(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1543(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1384(int iParam0, int iParam1)
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

void func_1385(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1386(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_1387(int iParam0)
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

int func_1388(int iParam0)
{
	iParam0 = func_551(iParam0);
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

bool func_1389(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_1390(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_1391(int iParam0, int iParam1)
{
	if (!func_1390(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_1392(int iParam0)
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

int func_1393(int iParam0)
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

bool func_1394(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_1395(int iParam0)
{
	return func_1544(iParam0);
}

float func_1396(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

bool func_1397(int iParam0, bool bParam1)
{
	if (func_115() != -1)
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

Vector3 func_1398(int iParam0)
{
	if (!func_135(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1545(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

char* func_1399(char* sParam0)
{
	return sParam0;
}

char* func_1400(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1401(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1402(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1403(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_1404(int iParam0)
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

void func_1405(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

void func_1406(bool bParam0)
{
	if (bParam0)
	{
		func_251(4);
	}
	func_251(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1407(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_1408(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_1411(iParam0, 1);
	func_1412(iParam0, 1);
	func_1413(iParam0, 128);
}

int func_1409(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -43987615:
			if (iParam2 == 1)
			{
				return 1492383232;
			}
			else
			{
				return 1650496317;
			}
			break;
		case 597440621:
			if (iParam2 == 1)
			{
				return -1286175387;
			}
			else
			{
				return 1230228733;
			}
			break;
		case 783089120:
			if (iParam2 == 1)
			{
				return 1809539044;
			}
			else
			{
				return 580480085;
			}
			break;
		case -577478188:
			if (iParam2 == 1)
			{
				return -942035227;
			}
			else
			{
				return -293044453;
			}
			break;
		case 1596431305:
			if (iParam2 == 1)
			{
				return 2042596528;
			}
			else
			{
				return 1794983091;
			}
			break;
		case 1781233743:
			if (iParam2 == 1)
			{
				return 1572569346;
			}
			else
			{
				return 693604975;
			}
			break;
		case 1297902195:
			if (iParam2 == 1)
			{
				return 131817274;
			}
			else
			{
				return 672937471;
			}
			break;
		case 636730081:
			if (iParam2 == 1)
			{
				return 1242287574;
			}
			else
			{
				return 134380709;
			}
			break;
		case 1516275256:
			if (iParam2 == 1)
			{
				return 307977329;
			}
			else
			{
				return 1537431448;
			}
			break;
		case 640966621:
			if (iParam2 == 1)
			{
				return -1057583634;
			}
			else
			{
				return -2020447749;
			}
			break;
		case 950257367:
			if (iParam2 == 1)
			{
				return 1389918783;
			}
			else
			{
				return 889056371;
			}
			break;
		case -1055552242:
			if (iParam2 == 1)
			{
				return -343448109;
			}
			else
			{
				return 1668029447;
			}
			break;
		case -1894468643:
			if (iParam2 == 1)
			{
				return 1656842182;
			}
			else
			{
				return 1931087823;
			}
			break;
		case 1489890323:
			if (iParam2 == 1)
			{
				return -1372774793;
			}
			else
			{
				return -1351907036;
			}
			break;
		case 2111267495:
			if (iParam2 == 1)
			{
				return 1156953242;
			}
			else
			{
				return 610597621;
			}
			break;
		case -1550790546:
			if (iParam2 == 1)
			{
				return -32053405;
			}
			else
			{
				return 9629595;
			}
			break;
		case 1028084064:
			if (iParam2 == 1)
			{
				return -1017879199;
			}
			else
			{
				return -2050618352;
			}
			break;
		case -1327130182:
			if (iParam2 == 1)
			{
				return -434550098;
			}
			else
			{
				return 9729636;
			}
			break;
		case -375262254:
			if (iParam2 == 1)
			{
				return 2118461462;
			}
			else
			{
				return 143111533;
			}
			break;
		case 1339926283:
			if (iParam2 == 1)
			{
				return 485264164;
			}
			else
			{
				return 1903408805;
			}
			break;
		case -1847199476:
			if (iParam2 == 1)
			{
				return -793902754;
			}
			else
			{
				return -1775711449;
			}
			break;
		case 1075520399:
			if (iParam2 == 1)
			{
				return 813908083;
			}
			else
			{
				return -131999783;
			}
			break;
		case 285816029:
			if (iParam2 == 1)
			{
				return -795386435;
			}
			else
			{
				return -1130778534;
			}
			break;
		case -1273168083:
			if (iParam2 == 1)
			{
				return -1403844320;
			}
			else
			{
				return -169402166;
			}
			break;
		case 2059272711:
			if (iParam2 == 1)
			{
				return -1214387853;
			}
			else
			{
				return -417846746;
			}
			break;
		case -943371758:
			if (iParam2 == 1)
			{
				return -464805063;
			}
			else
			{
				return -579171441;
			}
			break;
		case 1190285160:
			if (iParam2 == 1)
			{
				return -226045789;
			}
			else
			{
				return 5946766;
			}
			break;
		case -674936781:
			if (iParam2 == 1)
			{
				return 1410377796;
			}
			else
			{
				return -1029515674;
			}
			break;
		case -2045434273:
			if (iParam2 == 1)
			{
				return -649439051;
			}
			else
			{
				return -1928771048;
			}
			break;
		case 1677450645:
			if (iParam2 == 1)
			{
				return -2020193361;
			}
			else
			{
				return -862429230;
			}
			break;
		case -2069413633:
			if (iParam2 == 1)
			{
				return -348617231;
			}
			else
			{
				return 521981365;
			}
			break;
		case -1071812884:
			if (iParam2 == 1)
			{
				return 1454394111;
			}
			else
			{
				return 1226381245;
			}
			break;
		case -973690007:
			if (iParam2 == 1)
			{
				return -1923426107;
			}
			else
			{
				return -448286600;
			}
			break;
		case -1204752482:
			if (iParam2 == 1)
			{
				return 57563439;
			}
			else
			{
				return -1554080546;
			}
			break;
		case -564442545:
			if (iParam2 == 1)
			{
				return -819941571;
			}
			else
			{
				return 316239633;
			}
			break;
		case 1210759497:
			if (iParam2 == 1)
			{
				return -692709560;
			}
			else
			{
				return 375187125;
			}
			break;
		case 1220494366:
			if (iParam2 == 1)
			{
				return 461155911;
			}
			else
			{
				return -1730432737;
			}
			break;
		case -1923720634:
			if (iParam2 == 1)
			{
				return 686577545;
			}
			else
			{
				return -1716975259;
			}
			break;
		case -1136838805:
			if (iParam2 == 1)
			{
				return 485763523;
			}
			else
			{
				return 485763523;
			}
			break;
		case 1798104140:
			if (iParam2 == 1)
			{
				return -75693912;
			}
			else
			{
				return -1341709095;
			}
			break;
		case 613321581:
			if (iParam2 == 1)
			{
				return -1015255528;
			}
			else
			{
				return -155163817;
			}
			break;
		case -510702611:
			if (iParam2 == 1)
			{
				return -258389058;
			}
			else
			{
				return -1731672932;
			}
			break;
		case 926603386:
			if (iParam2 == 1)
			{
				return -446346500;
			}
			else
			{
				return 198039826;
			}
			break;
		case -603666995:
			if (iParam2 == 1)
			{
				return 520531156;
			}
			else
			{
				return 656647598;
			}
			break;
		case -1322848328:
			if (iParam2 == 1)
			{
				return 400831909;
			}
			else
			{
				return -480293444;
			}
			break;
		case -1632170653:
			if (iParam2 == 1)
			{
				return -1472809340;
			}
			else
			{
				return 1556846539;
			}
			break;
		case -1121883739:
			if (iParam2 == 1)
			{
				return 87879371;
			}
			else
			{
				return 295404488;
			}
			break;
		case 1901047439:
			if (iParam2 == 1)
			{
				return -1495248197;
			}
			else
			{
				return -1142160290;
			}
			break;
		case 268285362:
			if (iParam2 == 1)
			{
				return -1508240671;
			}
			else
			{
				return -2028019941;
			}
			break;
		case 1742105665:
			if (iParam2 == 1)
			{
				return 1447842081;
			}
			else
			{
				return 763061508;
			}
			break;
		case 1938765490:
			if (iParam2 == 1)
			{
				return -1738549803;
			}
			else
			{
				return 857577510;
			}
			break;
		case -1986096416:
			if (iParam2 == 1)
			{
				return 550175583;
			}
			else
			{
				return -1327208188;
			}
			break;
		case 1509241437:
			if (iParam2 == 1)
			{
				return -387470951;
			}
			else
			{
				return -1152146286;
			}
			break;
		case 784496698:
			if (iParam2 == 1)
			{
				return -1298327432;
			}
			else
			{
				return -1577268469;
			}
			break;
		case 520240957:
			if (iParam2 == 1)
			{
				return 699060141;
			}
			else
			{
				return -1134590040;
			}
			break;
		case -1350246467:
			if (iParam2 == 1)
			{
				return 2074298125;
			}
			else
			{
				return 1088082550;
			}
			break;
		case -2146232868:
			if (iParam2 == 1)
			{
				return -846557197;
			}
			else
			{
				return 288657650;
			}
			break;
		case 2104011353:
			if (iParam2 == 1)
			{
				return -1715622829;
			}
			else
			{
				return 224959159;
			}
			break;
		case -1673415831:
			if (iParam2 == 1)
			{
				return 685004063;
			}
			else
			{
				return -1620359805;
			}
			break;
		case 1157397403:
			if (iParam2 == 1)
			{
				return 1487535595;
			}
			else
			{
				return -2106943688;
			}
			break;
		case 1374755253:
			if (iParam2 == 1)
			{
				return -619722845;
			}
			else
			{
				return -756184090;
			}
			break;
		case -1203519405:
			if (iParam2 == 1)
			{
				return -167138074;
			}
			else
			{
				return -1952853624;
			}
			break;
		case -74829863:
			if (iParam2 == 1)
			{
				return 1858396134;
			}
			else
			{
				return 1199311657;
			}
			break;
		case 702805627:
			if (iParam2 == 1)
			{
				return -379754949;
			}
			else
			{
				return 1123829079;
			}
			break;
		case 1895708243:
			if (iParam2 == 1)
			{
				return 683897188;
			}
			else
			{
				return -1313726941;
			}
			break;
		case -1003674917:
			if (iParam2 == 1)
			{
				return -81484335;
			}
			else
			{
				return -745750690;
			}
			break;
		case -487429551:
			if (iParam2 == 1)
			{
				return 375272656;
			}
			else
			{
				return 1614204576;
			}
			break;
		case -853417084:
			if (iParam2 == 1)
			{
				return -27841655;
			}
			else
			{
				return -1052853383;
			}
			break;
		case 225698625:
			if (iParam2 == 1)
			{
				return 744375830;
			}
			else
			{
				return -635519364;
			}
			break;
		case -1472826885:
			if (iParam2 == 1)
			{
				return 1374191339;
			}
			else
			{
				return 1057046493;
			}
			break;
		case 1044478494:
			if (iParam2 == 1)
			{
				return -567700941;
			}
			else
			{
				return 1133767006;
			}
			break;
		case 1735171971:
			if (iParam2 == 1)
			{
				return -475041877;
			}
			else
			{
				return -973375568;
			}
			break;
		case 365206122:
			if (iParam2 == 1)
			{
				return 1251901266;
			}
			else
			{
				return 594965829;
			}
			break;
		case 731537518:
			if (iParam2 == 1)
			{
				return 332185718;
			}
			else
			{
				return 752876761;
			}
			break;
		case 1859834293:
			if (iParam2 == 1)
			{
				return 761968766;
			}
			else
			{
				return -258263292;
			}
			break;
		case 524696643:
			if (iParam2 == 1)
			{
				return 1345814727;
			}
			else
			{
				return -2056520757;
			}
			break;
		case 132914876:
			if (iParam2 == 1)
			{
				return 774728556;
			}
			else
			{
				return 1695964169;
			}
			break;
		case 768271981:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -1245666683:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -153407852:
			if (((iParam1 == -450053710 || iParam1 == 1792770814) || iParam1 == -1679658797) || iParam1 == -1963397600)
			{
				if (iParam2 == 1)
				{
					return -1510715495;
				}
				else
				{
					return -1041460807;
				}
			}
			else if (((iParam1 == -1250098797 || iParam1 == -318278790) || iParam1 == 55096099) || iParam1 == -458397856)
			{
				if (iParam2 == 1)
				{
					return 216313122;
				}
				else
				{
					return -1276302204;
				}
			}
			else if ((iParam1 == -444610976 || iParam1 == 705691988) || iParam1 == 746627200)
			{
				if (iParam2 == 1)
				{
					return 1058013054;
				}
				else
				{
					return 1875597076;
				}
			}
			else if ((((iParam1 == 2130094044 || iParam1 == -1140650619) || iParam1 == -1554827654) || iParam1 == -1029277326) || iParam1 == 604357666)
			{
				if (iParam2 == 1)
				{
					return -1860934580;
				}
				else
				{
					return 1323745903;
				}
			}
			else if ((((iParam1 == -1999198818 || iParam1 == 1496579364) || iParam1 == -403470324) || iParam1 == 1576849913) || iParam1 == -925223936)
			{
				if (iParam2 == 1)
				{
					return 987087298;
				}
				else
				{
					return -1712290350;
				}
			}
			else if ((iParam1 == -1547438906 || iParam1 == -2026265047) || iParam1 == -635239558)
			{
				if (iParam2 == 1)
				{
					return 679982833;
				}
				else
				{
					return 224251658;
				}
			}
			else if (iParam1 == -586898625 || iParam1 == 937246805)
			{
				if (iParam2 == 1)
				{
					return -2035377496;
				}
				else
				{
					return 1602284249;
				}
			}
			else if ((iParam1 == 687445866 || iParam1 == 861505058) || iParam1 == 1593035738)
			{
				if (iParam2 == 1)
				{
					return -1314354161;
				}
				else
				{
					return -1111688425;
				}
			}
			else if ((iParam1 == -819697512 || iParam1 == 1705182311) || iParam1 == -78273782)
			{
				if (iParam2 == 1)
				{
					return -697129350;
				}
				else
				{
					return 932507108;
				}
			}
			else if ((((iParam1 == -247265944 || iParam1 == -1516219602) || iParam1 == -1265030920) || iParam1 == 2024948086) || iParam1 == 1696286663)
			{
				if (iParam2 == 1)
				{
					return 14437037;
				}
				else
				{
					return 1726324950;
				}
			}
			else if (iParam1 == -1342159303 || iParam1 == -1154406788)
			{
				if (iParam2 == 1)
				{
					return 1127400536;
				}
				else
				{
					return 400087036;
				}
			}
			else if ((((iParam1 == 2030804811 || iParam1 == 1230359523) || iParam1 == -1063137731) || iParam1 == -1038436471) || iParam1 == 96930969)
			{
				if (iParam2 == 1)
				{
					return 1521891022;
				}
				else
				{
					return -830234017;
				}
			}
			else if ((iParam1 == -1180427609 || iParam1 == 43825738) || iParam1 == 2119038574)
			{
				if (iParam2 == 1)
				{
					return -1778106987;
				}
				else
				{
					return 629235125;
				}
			}
			else if ((iParam1 == 2145697477 || iParam1 == 107013696) || iParam1 == -1261814606)
			{
				if (iParam2 == 1)
				{
					return -322859267;
				}
				else
				{
					return -1148415148;
				}
			}
			else if ((iParam1 == 1066034872 || iParam1 == 36009259) || iParam1 == 802784330)
			{
				if (iParam2 == 1)
				{
					return -1903961111;
				}
				else
				{
					return 909878123;
				}
			}
			else if (iParam1 == -1693870200 || iParam1 == -1599683008)
			{
				if (iParam2 == 1)
				{
					return -2144737275;
				}
				else
				{
					return -703064617;
				}
			}
			else if ((((((iParam1 == 1072019803 || iParam1 == 1074477367) || iParam1 == -85890205) || iParam1 == 1048964673) || iParam1 == 446670976) || iParam1 == -727455979) || iParam1 == -1667789645)
			{
				if (iParam2 == 1)
				{
					return 79953388;
				}
				else
				{
					return 1080521142;
				}
			}
			else if ((((iParam1 == 2120708491 || iParam1 == -1924405794) || iParam1 == -526169133) || iParam1 == 1861665605) || iParam1 == 900144280)
			{
				if (iParam2 == 1)
				{
					return -509693556;
				}
				else
				{
					return -47591742;
				}
			}
			else if ((iParam1 == 1133837220 || iParam1 == 1702024301) || iParam1 == -1604180548)
			{
				if (iParam2 == 1)
				{
					return 375495976;
				}
				else
				{
					return -389560008;
				}
			}
			break;
		case 843200239:
			if (iParam2 == 1)
			{
				return 382483842;
			}
			else
			{
				return -1387469655;
			}
			break;
		case -557089338:
			if (iParam2 == 1)
			{
				return -652731287;
			}
			else
			{
				return 363304543;
			}
			break;
		case -409730157:
			if (iParam2 == 1)
			{
				return 293802921;
			}
			else
			{
				return 263724736;
			}
			break;
		case -1453172462:
			if (iParam2 == 1)
			{
				return -650983350;
			}
			else
			{
				return 248268932;
			}
			break;
		case 2084223993:
			if (iParam2 == 1)
			{
				return 581279313;
			}
			else
			{
				return -1986670648;
			}
			break;
		case 1449149245:
			if (iParam2 == 1)
			{
				return 853339335;
			}
			else
			{
				return 476264216;
			}
			break;
		case 230694645:
			if (iParam2 == 1)
			{
				return 840856104;
			}
			else
			{
				return 161687222;
			}
			break;
		case -1998732171:
			if (iParam2 == 1)
			{
				return -679944843;
			}
			else
			{
				return -439780870;
			}
			break;
		case 732517695:
			if (iParam2 == 1)
			{
				return -507978028;
			}
			else
			{
				return -2138925351;
			}
			break;
		case 1053713682:
			if (iParam2 == 1)
			{
				return 2067853128;
			}
			else
			{
				return -999327272;
			}
			break;
		case 562612880:
			if (iParam2 == 1)
			{
				return -720653445;
			}
			else
			{
				return 1465762044;
			}
			break;
		case 1488906430:
			if (iParam2 == 1)
			{
				return 1604791730;
			}
			else
			{
				return 382211197;
			}
			break;
		case -1002311676:
		case 313926162:
			if (iParam2 == 1)
			{
				return 452746646;
			}
			else
			{
				return 1669886296;
			}
			break;
		case 1434063188:
			if (iParam2 == 1)
			{
				return -979220810;
			}
			else
			{
				return 443311725;
			}
			break;
		case 1296784312:
			if (iParam2 == 1)
			{
				return 861034445;
			}
			else
			{
				return 391521677;
			}
			break;
		case -1192335484:
			if (iParam2 == 1)
			{
				return 1634138500;
			}
			else
			{
				return -1585573547;
			}
			break;
		case 184430925:
			if (iParam2 == 1)
			{
				return -788140186;
			}
			else
			{
				return -1011875654;
			}
			break;
		case 1631667828:
			if (iParam2 == 1)
			{
				return -135187727;
			}
			else
			{
				return -662462270;
			}
			break;
		case 1623821606:
			if (iParam2 == 1)
			{
				return -1381490234;
			}
			else
			{
				return 401969671;
			}
			break;
		case 631108475:
			if (iParam2 == 1)
			{
				return -203045456;
			}
			else
			{
				return -1205233107;
			}
			break;
		case -679868805:
			if (iParam2 == 1)
			{
				return -1876437153;
			}
			else
			{
				return -570692178;
			}
			break;
		case -454952368:
			if (iParam2 == 1)
			{
				return -1239951197;
			}
			else
			{
				return -535907352;
			}
			break;
		case 512575690:
			if (iParam2 == 1)
			{
				return -2099611916;
			}
			else
			{
				return 1961649296;
			}
			break;
		case -1315516671:
			if (iParam2 == 1)
			{
				return 1966613758;
			}
			else
			{
				return -1333865097;
			}
			break;
		case -2032722392:
			if (iParam2 == 1)
			{
				return 1914577480;
			}
			else
			{
				return 1328558441;
			}
			break;
		case 238849077:
			if (iParam2 == 1)
			{
				return 1883720795;
			}
			else
			{
				return -1369680592;
			}
			break;
		case -812395905:
			if (iParam2 == 1)
			{
				return 387520892;
			}
			else
			{
				return -1903848769;
			}
			break;
		case 1252173965:
			if (iParam2 == 1)
			{
				return -323196703;
			}
			else
			{
				return -1097366344;
			}
			break;
		case 1948286917:
			if (iParam2 == 1)
			{
				return -624807541;
			}
			else
			{
				return 1875235996;
			}
			break;
		case 886717998:
			if (iParam2 == 1)
			{
				return -615644963;
			}
			else
			{
				return -823139835;
			}
			break;
		case -905573570:
			if (iParam2 == 1)
			{
				return 1706508339;
			}
			else
			{
				return -138305935;
			}
			break;
		case -10873946:
			if (iParam2 == 1)
			{
				return -2103370865;
			}
			else
			{
				return 1443679495;
			}
			break;
		case -1850027464:
			if (iParam2 == 1)
			{
				return -633158514;
			}
			else
			{
				return 1018532190;
			}
			break;
		case -1559343651:
			if (iParam2 == 1)
			{
				return -918953360;
			}
			else
			{
				return -660080832;
			}
			break;
		case -908129790:
			if (iParam2 == 1)
			{
				return -1349222587;
			}
			else
			{
				return 1557946994;
			}
			break;
		case -756458312:
			if (iParam2 == 1)
			{
				return 2023710928;
			}
			else
			{
				return 1977250026;
			}
			break;
		case -1523680261:
			if (iParam2 == 1)
			{
				return 1566791262;
			}
			else
			{
				return -966619756;
			}
			break;
		case 915670869:
			if (iParam2 == 1)
			{
				return -1644328077;
			}
			else
			{
				return -576645995;
			}
			break;
		case 1241049848:
			if (iParam2 == 1)
			{
				return 797754095;
			}
			else
			{
				return -2058983692;
			}
			break;
		case 1642062303:
			if (iParam2 == 1)
			{
				return -1659756524;
			}
			else
			{
				return 655563396;
			}
			break;
		case -868889795:
			if (iParam2 == 1)
			{
				return 631588480;
			}
			else
			{
				return 1964441958;
			}
			break;
		case -245437166:
			if (iParam2 == 1)
			{
				return -325679307;
			}
			else
			{
				return 1238941576;
			}
			break;
		case -587357648:
			if (iParam2 == 1)
			{
				return -526737116;
			}
			else
			{
				return -2067439289;
			}
			break;
		case 1161966186:
			if (iParam2 == 1)
			{
				return 2096415373;
			}
			else
			{
				return 389722302;
			}
			break;
		case -795241033:
			if (iParam2 == 1)
			{
				return 1154535482;
			}
			else
			{
				return 1974479168;
			}
			break;
		case -366264193:
			if (iParam2 == 1)
			{
				return 989198786;
			}
			else
			{
				return -355707420;
			}
			break;
		case -705312705:
			if (iParam2 == 1)
			{
				return -1917262038;
			}
			else
			{
				return -887338500;
			}
			break;
		case -1592962144:
			if (iParam2 == 1)
			{
				return -1387399089;
			}
			else
			{
				return 2126380116;
			}
			break;
		case 886059398:
			if (iParam2 == 1)
			{
				return -93072263;
			}
			else
			{
				return -1354818991;
			}
			break;
		case 2018874380:
			if (iParam2 == 1)
			{
				return 515905092;
			}
			else
			{
				return -2141961689;
			}
			break;
		case -1467886026:
		case -262717989:
		case 1100342668:
			if (iParam2 == 1)
			{
				return -1304404966;
			}
			else
			{
				return -338768354;
			}
			break;
		case -1181288733:
			if (iParam2 == 1)
			{
				return -1675867359;
			}
			else
			{
				return 922834860;
			}
			break;
		case 1398366530:
			if (iParam2 == 1)
			{
				return 2136163397;
			}
			else
			{
				return -2053685963;
			}
			break;
		case 1145409805:
			if (iParam2 == 1)
			{
				return -1506726199;
			}
			else
			{
				return -1570463396;
			}
			break;
		case 733223128:
			if (iParam2 == 1)
			{
				return 1487282350;
			}
			else
			{
				return 1316963652;
			}
			break;
		case -1427844561:
			if (iParam2 == 1)
			{
				return -411919020;
			}
			else
			{
				return -1656161562;
			}
			break;
		case -998653403:
			if (iParam2 == 1)
			{
				return -777288672;
			}
			else
			{
				return -1653716830;
			}
			break;
		case -547357240:
		case 491620790:
		case 888613388:
			if (iParam2 == 1)
			{
				return 1341689645;
			}
			else
			{
				return -2059037310;
			}
			break;
		case -764925634:
		case -518676029:
		case -21336386:
			if (iParam2 == 1)
			{
				return 2110273088;
			}
			else
			{
				return -1256102478;
			}
			break;
		case -946474842:
			if (iParam2 == 1)
			{
				return -1288369533;
			}
			else
			{
				return -1810346437;
			}
			break;
		case -1363455176:
			if (iParam2 == 1)
			{
				return 559815433;
			}
			else
			{
				return 545602543;
			}
			break;
		case 234935858:
			if (iParam2 == 1)
			{
				return 977951227;
			}
			else
			{
				return 1629707044;
			}
			break;
		case 395345271:
			if (iParam2 == 1)
			{
				return 89462976;
			}
			else
			{
				return 1295654965;
			}
			break;
		case -1049737813:
			if (iParam2 == 1)
			{
				return -1909301662;
			}
			else
			{
				return 1069740553;
			}
			break;
		case -143561573:
			if (iParam2 == 1)
			{
				return -1139750351;
			}
			else
			{
				return -449932244;
			}
			break;
		case -1099435331:
			if (iParam2 == 1)
			{
				return 184175481;
			}
			else
			{
				return 1863951382;
			}
			break;
		case -2058116954:
			if (iParam2 == 1)
			{
				return 1164479228;
			}
			else
			{
				return 465359925;
			}
			break;
		case -581264978:
			if (iParam2 == 1)
			{
				return 935639802;
			}
			else
			{
				return 768799230;
			}
			break;
		case -1851619259:
			if (iParam2 == 1)
			{
				return 633525360;
			}
			else
			{
				return -312751742;
			}
			break;
		case -1055590463:
			if (iParam2 == 1)
			{
				return 746264043;
			}
			else
			{
				return 942504103;
			}
			break;
		case 725092441:
		case 1202456973:
			if (iParam2 == 1)
			{
				return -1751536989;
			}
			else
			{
				return -334051008;
			}
			break;
		case -2087684184:
			if (iParam2 == 1)
			{
				return 1612083342;
			}
			else
			{
				return -1360421905;
			}
			break;
		case -1771094723:
			if (iParam2 == 1)
			{
				return 500704149;
			}
			else
			{
				return 1603220402;
			}
			break;
		case -117895552:
			if (iParam2 == 1)
			{
				return 311774207;
			}
			else
			{
				return 1761303658;
			}
			break;
		case 288450344:
			if (iParam2 == 1)
			{
				return 2390170;
			}
			else
			{
				return -1827589699;
			}
			break;
		case -1914955935:
			if (iParam2 == 1)
			{
				return -1372762125;
			}
			else
			{
				return -1302010630;
			}
			break;
		case 848629876:
			if (iParam2 == 1)
			{
				return -1819285714;
			}
			else
			{
				return -1310085735;
			}
			break;
		case -439919843:
			if (iParam2 == 1)
			{
				return 781175185;
			}
			else
			{
				return -1866392966;
			}
			break;
		case -377162693:
			if (iParam2 == 1)
			{
				return -436635592;
			}
			else
			{
				return 1489728350;
			}
			break;
		case 330512330:
			if (iParam2 == 1)
			{
				return -971017472;
			}
			else
			{
				return 760166198;
			}
			break;
		case 595771513:
			if (iParam2 == 1)
			{
				return -1925555109;
			}
			else
			{
				return -1518144336;
			}
			break;
		case -391309265:
			if (iParam2 == 1)
			{
				return -856016756;
			}
			else
			{
				return -463149499;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_1410(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1411(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1166(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1412(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1413(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_1414(int iParam0, int iParam1)
{
	iVar0 = func_1546(iParam0, iParam1);
	if (iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1415(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1416(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_1416(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1419(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1547(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1548(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1549(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1550(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1402(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1551(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_1417(var uParam0)
{
	if (func_903(uParam0, Global_35, 0, 0, 1, 1))
	{
		_set_entity_coords_and_heading(Global_35, func_509(34), func_851(34), true, false, true);
	}
	if (func_903(uParam0, &(Local_134.f_80[0]), 0, 0, 1, 1))
	{
		if (!is_entity_dead(&(Local_134.f_80[0])))
		{
			_set_entity_coords_and_heading(&(Local_134.f_80[0]), func_509(35), func_851(35), true, false, true);
		}
	}
}

void func_1418(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_1552(uParam0, 2);
}

char* func_1419(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1170(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1553(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1554(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

void func_1420(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_1402(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

bool func_1421(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1422()
{
	if (func_201(Global_43801))
	{
		func_202(&Global_43801, 0, 0);
	}
}

bool func_1423(int iParam0)
{
	if (func_278(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_1424(bool bParam0, bool bParam1)
{
	if (!func_201(Global_43801))
	{
		Global_43801 = func_1208("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_1555(Global_43801, 0, 1);
		func_1556(Global_43801, 6, 1);
		if (bParam1)
		{
			func_1556(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_1205(Global_43801, 0))
		{
			func_1204(Global_43801, 1, 1);
		}
		if (func_1557(Global_43801, 1) != 0f && bParam0)
		{
			func_1555(Global_43801, 1, 1);
		}
		else
		{
			func_1555(Global_43801, 0, 1);
		}
		return func_1197(Global_43801, 1);
	}
	return false;
}

bool func_1425(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1426(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && are_strings_equal(sParam1, uParam0->f_174[iVar0]))
		{
			Var1 = { uParam0->f_158 };
			*uParam0->f_174[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_1173(uParam0, sParam1);
	func_842(uParam0, 2097152, 1);
	func_835(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_1427(var uParam0, char* sParam1)
{
	if (((!func_832(uParam0, 32) || func_1558(uParam0)) || func_832(uParam0, 268435456)) && !func_832(uParam0, 65536))
	{
		func_1559(&(uParam0->f_212), 256);
	}
}

void func_1428(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_1429()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_1430()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_1431()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_1432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_1560(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_1172() };
	func_1560(uParam0, &Var1);
	Var1 = { func_849(uParam0) };
	func_1560(uParam0, &Var1);
}

bool func_1433()
{
	return func_278(_0xc17f69e1418cd11f(3));
}

Vector3 func_1434(var uParam0)
{
	return uParam0->f_214;
}

void func_1435(var uParam0)
{
	if (func_1561(&iVar0))
	{
		if (func_322(iVar0, 0))
		{
			if (func_346(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_375(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_322(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1436(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_1562(0, 0);
		func_1563(-1);
	}
	func_1229(1);
	set_entity_invincible(Global_35, true);
	if (!func_1425(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1425(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1425(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1425(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1425(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_1425(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_1425(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_1425(*uParam0, 4) && !func_1425(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1425(*uParam0, 2048))
	{
		func_590(0, 0);
	}
	if (func_1425(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1425(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_1425(*uParam0, 8192))
	{
		func_1564();
	}
	if (!func_1425(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_1425(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_1425(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_1425(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_957() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_475(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1565(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_556(2);
						func_555(-1);
						func_566(vVar3);
						func_1567(func_1566());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_1425(*uParam0, 4096))
	{
		func_1404(Global_35);
	}
	if (!func_1425(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_1425(*uParam0, 2097152))
	{
		if (func_241() || _0x50f124e6ef188b22(Global_35))
		{
			func_242(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1437(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_1438(var uParam0)
{
	if (func_832(uParam0, 2048) && !func_475(func_1568(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_832(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_531(iVar1, func_1568(uParam0), func_1569(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_832(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_531(iVar3, func_1568(uParam0), func_1569(uParam0), 2, 1073741824);
		}
	}
}

void func_1439(var uParam0)
{
	if ((func_832(uParam0, 268435456) && !func_475(func_1568(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1568(uParam0) };
			func_531(iVar0, vVar1, func_1198(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_1440(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_475(vParam1))
	{
		func_842(uParam0, 2048, 1);
	}
	else
	{
		func_835(uParam0, 2048);
		if (bParam5)
		{
			func_835(uParam0, -2147483648);
		}
	}
}

void func_1441(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1401(uParam0->f_13[iVar0], 8))
					{
						if (func_437(func_673(iVar1, 0, 1, 0)))
						{
							if (!func_1570(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_437(func_673(iVar1, 1, 1, 0)))
						{
							if (!func_1570(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1442(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1443(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_115() != -1;
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
			func_773(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1571(iParam1, 29, bVar4, 1, 0);
			func_1571(iParam1, 31, bVar4, 1, 0);
			func_1571(iParam1, 30, bVar4, 1, 0);
			func_1571(iParam1, 22, bVar4, 1, 0);
			func_1571(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_712(32768) && func_1133(1108822547, 8)) && func_1132(10, iParam3))
	{
		func_1572(iParam1, 0, 1);
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
			iVar3 = func_781(iVar1, 1);
			if (func_1133(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1132(iVar1, iParam3))
				{
				}
				else if ((func_1133(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1133(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1571(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1134(iVar3, 1, 6);
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
								func_1571(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1133(iVar3, 1))
							{
								func_1077(iVar3, 1, 6);
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

void func_1444(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_1573(uParam0);
	func_837(uParam0, 0f, 0f, 0f);
	func_1574(uParam0);
}

void func_1445(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_1446(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1447(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1551(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1448(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1422();
	}
	_0xa0cefcea390aab9b(0);
}

void func_1449(int iParam0)
{
	func_1575();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_1450()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

void func_1451(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1576(bParam0);
}

void func_1452(int iParam0, bool bParam1)
{
	Var0 = { func_434(iParam0, 0, 0) };
	Var5 = { func_667(iParam0, Var0, Var0.f_4, 0) };
	if (func_1011(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_611(0), &Var5, bParam1);
}

bool func_1453(int iParam0, bool bParam1)
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

int func_1454(int iParam0, int iParam1)
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

bool func_1455(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_1456(int iParam0)
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

void func_1457(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_919(iParam0, iParam1))
		{
			if (func_920(iParam0, iParam1))
			{
				if (func_921(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_922(iParam0);
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

void func_1458(int iParam0, int iParam1, bool bParam2)
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

void func_1459(int iParam0, bool bParam1)
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

void func_1460(int iParam0, int iParam1)
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

bool func_1461(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_611(bParam7);
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

bool func_1462(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_611(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1463(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_780(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1464(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1011(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1541(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1542(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1464(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1465(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1464(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_780(Param0, &Var0, 1, 0) || !func_780(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1464(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1541(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1541(&Var14) };
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
					func_1577(iVar60, 1);
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
		iVar60 = func_1542(1168099063, &Var28, 0);
		iVar60 = func_1542(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1466(int iParam0)
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

void func_1467(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1579(func_1578(255), 109029619));
	}
	else if (func_124())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_628();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1468(int iParam0)
{
	iParam0 = func_551(iParam0);
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

void func_1469(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1579(func_1578(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_124())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_628())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1470(int iParam0)
{
	iParam0 = func_551(iParam0);
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

float func_1471(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1472(int iParam0)
{
	iParam0 = func_551(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_567(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1468(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1468(iParam0) + 1;
	fVar6 = func_1580(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1581(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1473(int iParam0)
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

void func_1474(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

int func_1475()
{
	return Global_40.f_1095.f_3135;
}

void func_1476(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1477(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_346(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_1478(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1479(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

void func_1480(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

bool func_1481()
{
	if (func_1143(43) && !func_1143(44))
	{
		return false;
	}
	if (func_1143(67) && func_187() != 8)
	{
		return false;
	}
	return true;
}

bool func_1482(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1483(int iParam0, int iParam1)
{
	Var1 = { func_360(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_1484(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_1485(int iParam0)
{
	Var1 = { func_119(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1486()
{
	if (func_198(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_198(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1487(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1488()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1582(iVar0);
		if (func_198(func_1583(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1489(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_326(-1845241476, 0, 0);
	iVar1 = func_326(1654063339, 0, 0);
	iVar2 = func_326(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1490(int iParam0)
{
	Var1 = { func_358(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1491()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1584(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1492(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

void func_1493(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_77(iParam0))
	{
		return;
	}
	if (func_93(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	iVar0 = func_1585(iParam0);
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

void func_1494(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_271(Global_1898330[iParam0]);
		func_1586((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_1495(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1496(int iParam0)
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

bool func_1497(int iParam0, int iParam1)
{
	return false;
}

bool func_1498()
{
	return false;
}

int func_1499(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_611(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_611(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_611(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1500(int iParam0, int iParam1)
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

char* func_1501(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1502(int iParam0)
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

char* func_1503(int iParam0)
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

int func_1504(int iParam0)
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

int func_1505(int iParam0)
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

int func_1506(int iParam0)
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

bool func_1507(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_559(iParam1) && !func_560(iParam1))
	{
		iVar0 = func_558(iParam1);
	}
	else
	{
		return false;
	}
	func_1262(uParam3);
	iVar5 = func_1258(iParam2);
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

void func_1508(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1587(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1588(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1509(int iParam0, var uParam1)
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
		if (func_437(iVar31))
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

void func_1510(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_322(iVar1, 0))
		{
			func_420(iVar1, 0, bParam0);
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

void func_1511(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_115() == -1)
	{
		func_1589(352481484);
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
		if (func_346(iVar2) != -999503751)
		{
			func_1590(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1129(iVar2, 0))
		{
			func_1452(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1512(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1591(iParam0))
	{
		return;
	}
	iVar0 = func_346(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1592(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1593(0))
	{
		func_1594(iParam0, 1);
		if (func_424() == 1160113249)
		{
			func_1594(func_1593(-2125499975), 0);
		}
		else
		{
			func_1594(func_1593(1160113249), 0);
		}
	}
	func_760();
	if (func_1595(iVar0))
	{
		_0x766315a564594401(func_611(0), iParam0, 0);
	}
	func_1452(iParam0, bParam3);
	if (bParam2)
	{
		func_761(0, 0);
	}
}

void func_1513(int iParam0, var uParam1)
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
				if (func_663(uParam1[iVar0]))
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

bool func_1514(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1515(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1516(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1517(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1518(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_1519(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (func_342(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1520(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (func_342(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1521(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (func_342(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1522(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (func_342(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1523(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1596(iParam0);
		case 1:
			return func_1597(iParam0);
		case 2:
			return func_1598(iParam0);
		case 3:
			return func_1599(iParam0);
	}
	return 0;
}

int func_1524(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1600(iParam0);
		case 1:
			return func_1601(iParam0);
		case 2:
			return func_1602(iParam0);
		case 3:
			return func_1603(iParam0);
		case 4:
			return func_1604(iParam0);
		case 5:
			return func_1605(iParam0);
		case 6:
			return func_1606(iParam0);
		case 7:
			return func_1607(iParam0);
		case 8:
			return func_1608(iParam0);
	}
	return 0;
}

bool func_1525(int iParam0, int iParam1)
{
	iVar0 = func_763(iParam1);
	func_1135(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

int func_1526()
{
	if (func_115() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1527()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_712(1))
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
	task_play_anim(Global_35, func_1609(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1080(1);
	remove_anim_dict(func_1609());
}

bool func_1528(int iParam0)
{
	return false;
}

int func_1529(int iParam0)
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

void func_1530(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_727(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_115() != -1)
	{
		return;
	}
	func_1071();
	if (bParam5)
	{
		if (!func_1610(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_712(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_713();
	}
	func_1611(iVar3, 1, 1, 1, 1, 1);
	func_433(31, 0, 0, 0, 0);
	func_715(0);
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
			func_433(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_433(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_1443(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1531(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

bool func_1532(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_346(iParam1);
		iVar5 = func_1477(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_434(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_667(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_611(0);
			Var37 = { func_434(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_667(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_346(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_1123(Var42, Var6.f_9, &Var20, 0))
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

bool func_1533(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
	}
	if (func_342(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1534(int iParam0)
{
	if (!func_322(iParam0, 0))
	{
		return false;
	}
	if (func_342(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1535(int iParam0)
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

int func_1536()
{
	Var0 = { func_434(856287005, 0, 0) };
	Var5 = { func_667(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_346(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_1291(Var5, -415648720, 0);
	}
	if (!func_322(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1477(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1291(Var5, iVar11, 0);
			if (!func_322(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1534(iVar14) || func_1533(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1534(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1534(iVar14) && func_1612(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1613(iVar11, &Var16, 1))
									{
										if (!func_1124(Var16, 1))
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

struct<28> func_1537(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_611(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1541(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1538(int iParam0, var uParam1, bool bParam2)
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
					func_1577(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1577(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1577(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1539(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_611(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1541(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1540(int iParam0, var uParam1, bool bParam2)
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
					func_1577(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1577(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1577(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1541(var uParam0)
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

int func_1542(int iParam0, var uParam1, bool bParam2)
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
					func_1577(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1577(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1577(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1543(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1614(&(uParam0->f_3));
}

Vector3 func_1544(int iParam0)
{
	if (func_1615(iParam0))
	{
		return func_1616(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1545(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_180((*Global_1347702)[iParam0]->f_15) != 0)
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

int func_1546(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	uVar1 = _0x5463c962bc7777c3(iParam0, iParam1, &uVar0, 1, 1);
	return uVar1;
}

int func_1547(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1548(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1549(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1550(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1551(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_1552(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

char* func_1553(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1617(iVar0);
}

char* func_1554(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_1555(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_201(iParam0))
	{
		return;
	}
	iVar0 = func_482(iParam0);
	func_1411(iVar0, bParam1);
}

void func_1556(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_201(iParam0))
	{
		return;
	}
	iVar0 = func_482(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

float func_1557(int iParam0, bool bParam1)
{
	if (bParam1 && !func_201(iParam0))
	{
		return 0f;
	}
	iVar0 = func_482(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_1558(var uParam0)
{
	Var0 = { func_844(uParam0) };
	Var8 = { func_849(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

void func_1559(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1560(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_844(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_156, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_156, sParam1);
	}
}

bool func_1561(int iParam0)
{
	if (-1829635046 == func_1618(81053684))
	{
		if (func_1619(iParam0))
		{
			return true;
		}
	}
	else if (func_1055(-525676072, iParam0))
	{
		if (func_1619(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1562(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_1563(int iParam0)
{
	if (func_115() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_1564()
{
	iVar0 = func_673(Global_35, 9, 1, 0);
	if (func_437(iVar0))
	{
		return;
	}
	iVar0 = func_673(Global_35, 7, 1, 0);
	if (func_437(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_673(Global_35, 0, 1, 0);
	if (func_437(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_673(Global_35, 1, 1, 0);
	if (func_437(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_673(Global_35, 18, 1, 0);
	if (func_437(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1620();
	if (func_437(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_926(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1621(6291456, 0);
	if (func_437(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_926(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1565(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_854(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

var func_1566()
{
	return &Global_1899515;
}

void func_1567(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

Vector3 func_1568(var uParam0)
{
	return uParam0->f_217;
}

float func_1569(var uParam0)
{
	return uParam0->f_220;
}

bool func_1570(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1571(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_781(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1622(iParam4);
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

void func_1572(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1133(1108822547, 6))
	{
		if (bParam2)
		{
			func_1571(iParam0, iVar0, func_115() != -1, 0, 0);
			func_1134(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1077(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1573(var uParam0)
{
	uParam0->f_166 = { Var0 };
}

void func_1574(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0], "", 64);
		iVar0++;
	}
}

void func_1575()
{
	Global_1911774 = 1;
}

void func_1576(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_1577(int iParam0, int iParam1)
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
	func_1623(iParam0, iParam1);
}

char* func_1578(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1624(37, iParam0))
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
	if (func_1624(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1579(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_743(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1580(int iParam0)
{
	iParam0 = func_551(iParam0);
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

float func_1581(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1582(int iParam0)
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

int func_1583()
{
	return Global_40.f_8863.f_148;
}

int func_1584(int iParam0)
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

int func_1585(int iParam0)
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

void func_1586(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_272(iParam0);
	*uParam1 = func_300(iParam0);
	*uParam2 = func_319(iParam0);
}

void func_1587(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1588(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1589(int iParam0)
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
	Var2 = { func_1012(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1014(&Var2, &iVar0, &iVar1, 0))
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
		func_719(iVar0);
	}
}

void func_1590(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1625(iParam2, *uParam0);
	func_1626(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1591(int iParam0)
{
	if (func_115() == -1)
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

int func_1592(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1127(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1129(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_346(iParam0) != -999503751)
	{
		func_1590(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1593(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_424();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1594(int iParam0, int iParam1)
{
	Var0 = { func_434(iParam0, 0, 0) };
	Var5 = { func_667(iParam0, Var0, Var0.f_4, 0) };
	if (func_1011(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_611(0), &Var5);
	return 1;
}

bool func_1595(int iParam0)
{
	return func_1627(func_612(iParam0));
}

int func_1596(int iParam0)
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

int func_1597(int iParam0)
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

int func_1598(int iParam0)
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

int func_1599(int iParam0)
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

int func_1600(int iParam0)
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

int func_1601(int iParam0)
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

int func_1602(int iParam0)
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

int func_1603(int iParam0)
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

int func_1604(int iParam0)
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

int func_1605(int iParam0)
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

int func_1606(int iParam0)
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

int func_1607(int iParam0)
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

int func_1608(int iParam0)
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

char* func_1609()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1610(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1628(uParam0, iParam3, iParam2) && !func_425(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_712(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1072(1108822547);
		}
		else
		{
			func_1629(1108822547);
		}
	}
	func_1076(uParam0, 0, 0);
	func_1130(iParam5);
	return true;
}

void func_1611(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1526()) || bParam5)
		{
			func_1630();
		}
	}
	if (func_115() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1631(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1099(Global_40.f_7729);
				Global_1946804->f_1378 = func_1099(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1529(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1341(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_761(0, 1);
	}
	func_1130(0);
}

bool func_1612(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1613(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_1012(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1013(&Var2, func_1111());
	if (func_1014(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_718(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_322(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1612(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_719(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_719(iVar0);
	}
	return false;
}

void func_1614(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

bool func_1615(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1632((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_1616(int iParam0)
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

char* func_1617(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

int func_1618(int iParam0)
{
	iVar0 = func_422(func_1331(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1619(int iParam0)
{
	if (func_1055(81053684, iParam0))
	{
		return true;
	}
	if (func_1055(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

int func_1620()
{
	if (!func_437(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_1621(int iParam0, int iParam1)
{
	return func_1633(&uVar0, iParam0, iParam1);
}

int func_1622(int iParam0)
{
	iVar0 = func_346(iParam0);
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

void func_1623(int iParam0, int iParam1)
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

bool func_1624(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1634(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1635())
	{
		return func_1634(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1634(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_1625(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1626(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1543(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_422(func_421(iParam1), 1);
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
		func_1636(uParam0);
	}
}

bool func_1627(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1628(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1360(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1340(2, iParam1))
	{
		func_1637(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1629(int iParam0)
{
	func_1134(iParam0, 8, 6);
}

void func_1630()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1631(int iParam0)
{
	iVar0 = func_763(0);
	iVar1 = 0;
	func_1135(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

bool func_1632(var uParam0)
{
	if (func_1638(&(uParam0->f_29), 62))
	{
		switch (func_1639())
		{
			case 1:
				if (!func_1638(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1638(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1638(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1638(&(uParam0->f_29), 32))
				{
					if (func_1638(&(uParam0->f_29), 2))
					{
						if (func_444(func_113()) < 5)
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

int func_1633(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1311(iParam1, 128);
	if (func_717("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_718(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_437(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1311(iParam1, 512) && func_1050(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_1053(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_1311(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_1311(iParam1, 4))) && (!func_1053(Var4.f_4) || func_1311(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_1311(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_1311(iParam1, 1048576)))
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
		func_719(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_1311(iParam1, 512) && !func_1311(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_1633(uParam0, iParam1, iParam2);
	}
	else if (func_1311(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_1634(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1635()
{
	return Global_1109400->f_245;
}

void func_1636(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1640(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1637(var uParam0, int iParam1)
{
	if (func_115() == -1)
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

bool func_1638(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1639()
{
	return &Global_1899516;
}

void func_1640(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1641(func_424());
	if (*uParam0)
	{
		func_1614(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_115() != -1, uParam2);
	*uParam0 = 1;
}

int func_1641(int iParam0)
{
	if (func_115() == -1)
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

