void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(2))
	{
		func_1(&Local_14, 1);
	}
	if (_get_launch_param_exists(func_2(-448212099)))
	{
		freeze_entity_position(get_player_ped(get_player_index()), true);
		func_3();
	}
	if (_ui_is_singleplayer_pause_menu_active())
	{
		while (_is_app_active(29649618))
		{
			_close_app_by_hash(29649618);
			wait(0);
		}
	}
	func_4(&Local_14);
	while ((is_ped_falling(Global_35) || is_ped_ragdoll(Global_35)) && func_5(&Local_14) < 10f)
	{
		if (!is_screen_faded_out() && !is_screen_fading_out())
		{
			do_screen_fade_out(0);
		}
		wait(0);
	}
	func_6(&Local_14, 0, 0, 213);
	if (func_7())
	{
		Local_14.f_9 = func_8(0);
		func_9(128);
		func_10(&Local_14, 64);
		if (func_11())
		{
			func_10(&Local_14, 256);
		}
		do_screen_fade_out(0);
		func_12();
		func_13(0, 0, 1, 0);
		func_9(128);
		func_14(Global_1935630, 1);
		func_14(Global_1935630, 2097152);
		func_4(&Local_14);
		while ((!func_12() || func_15(0, 0, 1)) && func_5(&Local_14) < 10f)
		{
			func_13(0, 0, 1, 0);
			wait(0);
		}
		if (func_5(&Local_14) >= 10f)
		{
		}
		func_4(&Local_14);
		while (is_entity_dead(Global_35) && func_5(&Local_14) < 10f)
		{
			wait(0);
		}
		set_entity_invincible(Global_35, true);
		set_entity_can_be_damaged(Global_35, false);
		func_4(&Local_14);
		while (func_16() && func_5(&Local_14) < 10f)
		{
			wait(0);
		}
		func_4(&Local_14);
		while (func_5(&Local_14) < 1f)
		{
			wait(0);
		}
		func_4(&Local_14);
		while (_0x1b065a2bf7953815(0) == 1 && func_5(&Local_14) < 10f)
		{
			wait(0);
		}
		if (func_5(&Local_14) >= 10f)
		{
			func_1(&Local_14, 1);
		}
		func_17(&Local_14, 0);
	}
	else
	{
		if (!func_18())
		{
			while (!func_19(Global_35, 9, 1, 1, 0))
			{
				wait(0);
			}
		}
		else
		{
			while (!func_19(Global_35, 62, 1, 1, 0))
			{
				wait(0);
			}
		}
		func_17(&Local_14, 2);
	}
	while (!func_20(&Local_14))
	{
		wait(0);
	}
	func_1(&Local_14, 1);
}

void func_1(var uParam0, bool bParam1)
{
	func_21(1, 0);
	func_22(1);
	_databinding_write_data_bool(uParam0->f_133, false);
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
	if (_0x1ff441d7954f8709(uParam0->f_33))
	{
		_0xd2b9c78537ed5759(uParam0->f_33);
	}
	if (_0x1ff441d7954f8709(uParam0->f_34))
	{
		_0xd2b9c78537ed5759(uParam0->f_34);
	}
	_uistatemachine_destroy(uParam0->f_136);
	_uiflowblock_release(&(uParam0->f_134));
	uParam0->f_134 = 0;
	_databinding_remove_data_entry(uParam0->f_131);
	if (does_entity_exist(uParam0->f_16))
	{
		delete_ped(&(uParam0->f_16));
	}
	if (!is_entity_dead(Global_35))
	{
		set_entity_visible(Global_35, true);
	}
	if (does_entity_exist(func_23(uParam0)))
	{
		set_vehicle_as_no_longer_needed(&(uParam0->f_15));
	}
	if (does_entity_exist(func_24(uParam0)))
	{
		set_ped_as_no_longer_needed(&(uParam0->f_17));
	}
	func_25(uParam0);
	func_26(uParam0);
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (does_entity_exist(&(uParam0->f_67[iVar0])))
		{
			set_ped_as_no_longer_needed(uParam0->f_67[iVar0]);
		}
		iVar0++;
	}
	if (_does_volume_exist(uParam0->f_42))
	{
		_delete_volume(uParam0->f_42);
	}
	if (_does_volume_exist(uParam0->f_40))
	{
		_delete_volume(uParam0->f_40);
	}
	if (_does_volume_exist(uParam0->f_39))
	{
		_delete_volume(uParam0->f_39);
	}
	if (_does_volume_exist(uParam0->f_41))
	{
		_delete_volume(uParam0->f_41);
	}
	func_27(uParam0);
	func_28(1);
	if (_is_app_active(29649618))
	{
		_close_app_by_hash(29649618);
	}
	if (does_cam_exist(uParam0->f_528))
	{
		destroy_cam(uParam0->f_528, false);
	}
	render_script_cams(false, false, 3000, true, false, 0);
	set_script_as_no_longer_needed("benchmark");
	if (func_29(219))
	{
		func_30(219, 0, 1, 0, 0);
	}
	func_31(Global_1935630, 1);
	func_31(Global_1935630, 262144);
	func_31(Global_1935630, 2097152);
	set_random_trains(true);
	func_32(1);
	clear_focus();
	func_33(uParam0);
	if (func_34(uParam0->f_546))
	{
		func_35(&(uParam0->f_546), 1, 1);
	}
	_reset_benchmark_recording();
	if (bParam1)
	{
		func_36(1);
		set_everyone_ignore_player(player_id(), false);
		set_player_control(player_id(), true, 0, false);
		if (!is_entity_dead(Global_35))
		{
			set_entity_invincible(Global_35, false);
			set_entity_can_be_damaged(Global_35, true);
			set_ped_can_be_knocked_off_vehicle(Global_35, 0);
			set_blocking_of_non_temporary_events(Global_35, false);
			clear_ped_tasks(Global_35, 1, 0);
		}
		set_cinematic_mode_active(false);
		_0xf239400e16c23e08(0, -1);
		_set_weather_type(-173507739, true, false, false, 0f, false);
		clear_weather_type_persist();
		set_wind_speed(-1f);
		set_wind_direction(-1f);
		_set_snow_level(-1f);
		if (_get_launch_param_exists(func_2(-448212099)))
		{
			_clear_launch_param(func_2(-448212099));
			_0xbc2c927f5c264243(0);
		}
		else if (func_37(uParam0, 64))
		{
			if (!func_11())
			{
				func_9(4096);
				func_38(6);
			}
			do_screen_fade_out(0);
			_set_entity_coords_and_heading(Global_35, (*Global_2621440)[0]->f_9.f_7, (*Global_2621440)[0]->f_9.f_13, true, false, true);
			func_39(0, 0);
			func_40();
			freeze_entity_position(Global_35, true);
			if (!Global_43891)
			{
				_set_fow_update_player_override(true, 0);
			}
			func_41(0);
			func_42(32);
			func_9(128);
			if (!func_37(uParam0, 256))
			{
				func_9(4096);
				func_38(6);
			}
		}
		else
		{
			func_27(uParam0);
		}
		terminate_this_thread();
	}
}

char* func_2(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case -88424047:
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case 133180145:
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case 1433203589:
			sVar0 = "spawn_location";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case -448212099:
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_3()
{
	if (Global_1934765->f_69.f_201 <= 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1934765->f_69.f_201 - 1))
	{
		func_43(&(Global_1934765->f_69[iVar0]), Global_1934765->f_69[iVar0]->f_1, 1);
		iVar0++;
	}
	if (func_44() != -1)
	{
		func_43(459290420, 1, 1);
		func_43(-524145696, 1, 1);
		func_43(-299522880, 1, 1);
		func_43(-538880323, 1, 1);
		func_43(-2101264851, 1, 1);
		func_43(1488453464, 1, 1);
		func_43(302205488, 1, 1);
		func_43(-640663440, 1, 1);
		func_43(-1447311849, 1, 1);
		func_43(1015669983, 1, 1);
		func_43(54073871, 1, 1);
		func_43(1485195808, 0, 1);
		func_43(-1524512402, 1, 1);
		func_43(-1164215952, 1, 1);
		func_43(-1236261996, 1, 1);
		func_43(-2020023971, 1, 1);
	}
}

void func_4(var uParam0)
{
	func_45(&(uParam0->f_101));
}

float func_5(var uParam0)
{
	return func_46(&(uParam0->f_101));
}

void func_6(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (is_entity_dead(player_ped_id()))
	{
		func_47(uParam0, 13);
	}
	if (bParam2)
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_of_this_script_name()) > 1)
		{
			func_47(uParam0, 2);
		}
	}
	if (bParam2)
	{
		if (_0x1b065a2bf7953815(0) == 1)
		{
			func_47(uParam0, 8);
		}
	}
	if (func_48(&Global_1935630, 32768))
	{
		func_47(uParam0, 3);
	}
	if (does_script_with_name_hash_exist(1397812868) && _get_number_of_references_of_script_with_name_hash(1397812868) > 0)
	{
		func_47(uParam0, 13);
	}
	if (func_49(32768))
	{
		func_47(uParam0, 3);
	}
	if (is_ped_falling(player_ped_id()) || is_ped_ragdoll(player_ped_id()))
	{
		func_47(uParam0, 12);
	}
	if (func_15(0, 0, 1) || func_11())
	{
		func_47(uParam0, 3);
	}
	if ((Global_1914319->f_18969 || func_50(0)) || func_51())
	{
		func_47(uParam0, 5);
	}
	if (does_entity_exist(player_ped_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), true) || _0x99f92061efe908ba())
			{
				func_47(uParam0, 10);
			}
		}
	}
	if ((func_52() || Global_1956584) // PointerArith || Global_1357549->f_1641 > 1)
	{
		func_47(uParam0, 4);
	}
	if (is_player_playing(player_id()))
	{
		if ((get_player_wanted_level(player_id()) > 0 || is_player_being_arrested(player_id(), true)) || Global_1934266->f_60)
		{
			func_47(uParam0, 6);
		}
		if (is_player_climbing(player_id()))
		{
			func_47(uParam0, 8);
		}
		if (is_ped_getting_up(player_ped_id()))
		{
			func_47(uParam0, 8);
		}
		if (func_53())
		{
			func_47(uParam0, 8);
		}
		if (func_54())
		{
			func_47(uParam0, 8);
		}
		if (func_55())
		{
			func_47(uParam0, 8);
		}
		if (Global_36560 >= 2 && Global_36560 <= 5)
		{
			func_47(uParam0, 8);
		}
		if (func_56(4096))
		{
			func_47(uParam0, 8);
		}
	}
	if (network_is_game_in_progress())
	{
		func_47(uParam0, 7);
	}
	if (is_gameplay_hint_active())
	{
		func_47(uParam0, 4);
	}
	if (is_entity_in_water(player_ped_id()))
	{
		func_47(uParam0, 9);
	}
	if (is_ped_on_vehicle(player_ped_id(), false))
	{
		func_47(uParam0, 9);
	}
	if (func_57(Global_43890) || _get_number_of_references_of_script_with_name_hash(27496334) > 0)
	{
		func_47(uParam0, 8);
	}
	func_47(uParam0, 0);
}

bool func_7()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_8(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_9(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_6 = (uParam0->f_6 || iParam1);
}

bool func_11()
{
	if (func_44() != -1)
	{
		return false;
	}
	if (!func_7())
	{
		return false;
	}
	if (!func_58((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_58((*Global_1835011)[2]->f_1, 1) && func_58((*Global_1347702)[120]->f_15, 1)) && !func_58((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_58((*Global_1835011)[37]->f_1, 1) && !func_58((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_58((*Global_1835011)[57]->f_1, 1) && !func_58((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_58((*Global_1835011)[26]->f_1, 1) && !func_58((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_58((*Global_1835011)[62]->f_1, 1) && func_58((*Global_1835011)[63]->f_1, 1)) && !func_58((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_58((*Global_1835011)[75]->f_1, 1) && !func_58((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_58((*Global_1835011)[76]->f_1, 1) && !func_58((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_58((*Global_1835011)[40]->f_1, 1) && func_58((*Global_1835011)[41]->f_1, 1)) && !func_58((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_58((*Global_1835011)[62]->f_1, 1) && func_58((*Global_1835011)[63]->f_1, 1)) && !func_58((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_58((*Global_1835011)[65]->f_1, 1) && func_58((*Global_1835011)[66]->f_1, 1)) && !func_58((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_12()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (func_59(iVar1))
		{
			if (is_thread_active((*Global_1835011)[iVar1]->f_7, false))
			{
				force_cleanup_for_thread_with_this_id((*Global_1835011)[iVar1]->f_7, 4096);
				if (func_8(0) == (*Global_1835011)[iVar1]->f_1)
				{
					func_60((*Global_1835011)[iVar1]->f_1, 0, 2);
				}
				iVar0 = 0;
			}
			else if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[iVar1]->f_3))) != 0)
			{
				iVar0 = 0;
			}
			func_61(&((*Global_1835011)[iVar1]->f_3), 4096);
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_450)
	{
		iVar3 = &Global_40.f_450[iVar2];
		if (func_62(iVar3) && func_63(iVar3, 0))
		{
			func_64(iVar3, 1, 1, 1, 4096);
			func_65((*Global_1347702)[iVar3]->f_15);
		}
		iVar2++;
	}
	if (_get_number_of_references_of_script_with_name_hash(309412207) > 0)
	{
		func_66(309412207, 523);
		iVar0 = 0;
	}
	return iVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bVar4 = func_44() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_67(get_player_index(), 1, 0, 1);
	}
	if (!func_68(&Global_1898439, 1024))
	{
		func_69();
		func_70(Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (&Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_57(Global_1898330[iVar2]) && func_71(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581->f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_72(iVar2, 1024))
			{
				func_73(iVar2, 0);
				switch ((*Global_1898346)[iVar2]->f_3)
				{
					case 1:
						if (!(*Global_1835011)[iVar0]->f_71)
						{
							iVar0 = (*Global_1898346)[iVar2]->f_4;
							if (func_59(iVar0))
							{
								if (!bParam1)
								{
									func_74(iVar0, 0);
								}
								func_75(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_76(iVar0);
								if (bVar3 && !func_77((*Global_1835011)[iVar0], 32768))
								{
									func_78((*Global_1835011)[iVar0], 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899->f_2 == (*Global_1835011)[iVar0]->f_21)
									{
										(*Global_1835011)[iVar0]->f_64 = func_79();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = (*Global_1898346)[iVar2]->f_4;
						if (iVar5 == 0 && func_44() == -1)
						{
							iVar6 = (*Global_1898346)[iVar2]->f_5;
							if (*Global_1392626)[iVar6]->f_3 != func_8(0)
							{
								if (bVar3)
								{
									func_80(iVar6, 0, 0);
								}
								else
								{
									func_80(iVar6, 1, 0);
								}
								if (func_71((*Global_1392626)[iVar6]->f_3))
								{
									func_65((*Global_1392626)[iVar6]->f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
					default:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!func_68(&Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				func_81(16384);
			}
			else
			{
				func_82();
			}
			func_70(Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = &Global_40.f_450[iVar7];
			if (func_62(iVar1) && Global_1347702[iVar1] != 45)
			{
				if (func_83((*Global_1347702)[iVar1]->f_13, 256))
				{
				}
				else if (*Global_1347702)[iVar1]->f_15 != func_8(0)
				{
					if (func_84(0) == 1 || func_84(0) == 8)
					{
						func_64(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_85(iVar1, 0);
					}
					if (func_71((*Global_1347702)[iVar1]->f_15))
					{
						func_65((*Global_1347702)[iVar1]->f_15);
					}
				}
				func_86(&((*Global_1347702)[iVar1]->f_13), 2);
			}
			iVar7++;
		}
	}
	func_87();
	if (bParam2)
	{
		func_88();
	}
	func_89();
	func_90();
	return 1;
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
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
		if (func_91())
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
		iVar0 = func_92(&(Global_1898164->f_1[0]));
		if (func_62(iVar0) && func_93((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_57(&(Global_1898164->f_1[0])))
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

bool func_16()
{
	return func_48(&Global_1935630, 4096);
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_45(&(uParam0->f_127));
}

bool func_18()
{
	if (func_44() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_94(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_95(iParam1);
	}
	if ((bParam3 && func_96(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return true;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_97(iVar0, Global_1946804->f_1))
	{
		return false;
	}
	if (bParam2)
	{
		func_98(Global_40.f_7729, 4096);
		func_99(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_100(iParam0);
	}
	func_101();
	if (!func_102(iParam1))
	{
		func_104(iVar0, iParam0, func_103(iParam1), 1, 0, 1);
	}
	func_105(iParam0);
	return true;
}

bool func_20(var uParam0)
{
	if (func_106(uParam0) == 0)
	{
		func_107(uParam0);
		disable_all_control_actions(0);
		_0x2804658eb7d8a50b(4, -448212099);
		enable_control_action(2, 359624985, true);
		if ((((is_control_just_released(2, 359624985) && is_screen_faded_in()) && !is_screen_fading_in()) && !is_screen_fading_out()) && func_108(uParam0) < 9)
		{
			func_10(uParam0, 512);
			func_109(uParam0);
			func_17(uParam0, 9);
		}
		if (!is_entity_dead(player_ped_id()))
		{
			switch (func_108(uParam0))
			{
				case 0:
					func_4(uParam0);
					if (!func_57(uParam0->f_9))
					{
						func_110(0, 0);
						(*Global_2621440)[0]->f_9.f_7 = { Global_36 };
						(*Global_2621440)[0]->f_9.f_13 = get_entity_heading(Global_35);
						(*Global_2621440)[0]->f_9 = 6;
						(*Global_2621440)[0]->f_9.f_15 = func_111(Global_36, 1);
						func_17(uParam0, 1);
					}
					else
					{
						switch (func_112(uParam0->f_9))
						{
							case 1:
								(*Global_2621440)[0]->f_9.f_7 = { func_114(func_113(uParam0->f_9)) };
								break;
							case 8:
								if (func_115(uParam0->f_9) == 83)
								{
									(*Global_2621440)[0]->f_9.f_7 = { 3009.713f, 477.2592f, 40.8661f };
									(*Global_2621440)[0]->f_9.f_13 = 104.9475f;
								}
								else
								{
									(*Global_2621440)[0]->f_9.f_7 = { func_116(func_115(uParam0->f_9)) };
								}
								break;
							default:
								(*Global_2621440)[0]->f_9.f_7 = { Global_36 };
								(*Global_2621440)[0]->f_9.f_13 = get_entity_heading(Global_35);
								break;
						}
						(*Global_2621440)[0]->f_9 = 6;
						(*Global_2621440)[0]->f_9.f_15 = func_111(Global_36, 1);
						func_17(uParam0, 2);
					}
					break;
				case 1:
					if (_0x1b065a2bf7953815(0) == 0)
					{
						func_17(uParam0, 2);
					}
					if (func_5(uParam0) >= 10f)
					{
						func_17(uParam0, 8);
					}
					break;
				case 2:
					func_117(uParam0);
					func_17(uParam0, 3);
					break;
				case 3:
					if (func_118(uParam0))
					{
						if (func_119(uParam0) < uParam0->f_531)
						{
							func_17(uParam0, 4);
						}
						else
						{
							func_17(uParam0, 7);
						}
					}
					break;
				case 4:
					if (func_120(uParam0))
					{
						func_17(uParam0, 5);
					}
					break;
				case 5:
					if (func_121(uParam0))
					{
						func_17(uParam0, 6);
					}
					break;
				case 6:
					if (func_122(uParam0))
					{
						if (func_119(uParam0) < func_123(uParam0))
						{
							func_124(uParam0, func_119(uParam0) + 1);
							if (func_125(uParam0) == -1)
							{
								func_17(uParam0, 4);
							}
							else
							{
								func_109(uParam0);
								uParam0->f_97++;
								func_17(uParam0, 9);
							}
						}
						else
						{
							func_109(uParam0);
							func_17(uParam0, 7);
						}
					}
					break;
				case 7:
					_0x82e41d6ade924fca(uParam0->f_16);
					func_126(uParam0);
					if (func_127(uParam0))
					{
						uParam0->f_97++;
						if (func_128(uParam0) >= uParam0->f_97)
						{
							func_124(uParam0, uParam0->f_98);
							if (func_119(uParam0) < uParam0->f_531)
							{
								func_17(uParam0, 4);
							}
							else
							{
								func_17(uParam0, 7);
							}
						}
						else
						{
							func_129(uParam0);
							_databinding_write_data_bool(uParam0->f_133, true);
							if (func_34(uParam0->f_546))
							{
								func_35(&(uParam0->f_546), 1, 1);
							}
							uParam0->f_546 = func_130("MO_GFX_BENCHMARK_EXIT", 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_17(uParam0, 10);
						}
					}
					break;
				case 8:
					uParam0->f_97++;
					func_17(uParam0, 9);
					break;
				case 9:
					_0x82e41d6ade924fca(uParam0->f_16);
					if (is_screen_faded_out())
					{
						if (func_128(uParam0) >= uParam0->f_97 && !func_37(uParam0, 512))
						{
							func_124(uParam0, uParam0->f_98);
							if (func_119(uParam0) < uParam0->f_531)
							{
								func_17(uParam0, 4);
							}
							else
							{
								func_17(uParam0, 7);
							}
						}
						else
						{
							func_129(uParam0);
							_databinding_write_data_bool(uParam0->f_133, true);
							if (func_34(uParam0->f_546))
							{
								func_35(&(uParam0->f_546), 1, 1);
							}
							uParam0->f_546 = func_130("MO_GFX_BENCHMARK_EXIT", 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
							func_17(uParam0, 10);
						}
					}
					break;
				case 10:
					if (!is_screen_faded_in() && !is_screen_fading_in())
					{
						do_screen_fade_in(0);
					}
					set_script_gfx_draw_order(2);
					func_131(0f, 0f, 1f, 1f, 0, 0, 0, 255, 1);
					if (is_control_just_released(2, 359624985))
					{
						do_screen_fade_out(0);
						_databinding_write_data_bool(uParam0->f_133, false);
						_save_benchmark_recording();
						_reset_benchmark_recording();
						return true;
					}
			}
			func_132(uParam0);
			func_133(uParam0);
		}
	}
	else
	{
		set_input_exclusive(2, -944425974);
		if (!is_control_just_pressed(2, -944425974))
		{
			if (!func_37(uParam0, 8))
			{
				set_game_paused(true);
				func_10(uParam0, 8);
			}
			hide_loading_on_fade_this_frame();
			set_script_gfx_draw_order(7);
			sVar0 = func_134(func_106(uParam0), 213);
			func_135(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			set_game_paused(false);
			terminate_this_thread();
		}
	}
	return false;
}

void func_21(bool bParam0, int iParam1)
{
	if (func_136())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_137())
		{
			func_138(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_22(int iParam0)
{
	func_138(1);
}

var func_23(var uParam0)
{
	return uParam0->f_15;
}

var func_24(var uParam0)
{
	return uParam0->f_17;
}

void func_25(var uParam0)
{
	if (does_entity_exist(uParam0->f_63))
	{
		delete_vehicle(&(uParam0->f_63));
	}
	if (does_entity_exist(uParam0->f_64))
	{
		delete_vehicle(&(uParam0->f_64));
	}
	if (does_entity_exist(uParam0->f_65))
	{
		delete_ped(&(uParam0->f_65));
	}
	if (does_entity_exist(uParam0->f_66))
	{
		delete_ped(&(uParam0->f_66));
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_entity_exist(&(uParam0->f_67[iVar0])))
		{
			delete_ped(uParam0->f_67[iVar0]);
		}
		iVar0++;
	}
	if (does_entity_exist(uParam0->f_69))
	{
		delete_ped(&(uParam0->f_69));
	}
	if (does_entity_exist(uParam0->f_70))
	{
		delete_ped(&(uParam0->f_70));
	}
	if (does_entity_exist(&(uParam0->f_71[0])))
	{
		delete_ped(uParam0->f_71[0]);
	}
	if (does_entity_exist(&(uParam0->f_71[1])))
	{
		delete_ped(uParam0->f_71[1]);
	}
	if (does_entity_exist(&(uParam0->f_74[0])))
	{
		delete_ped(uParam0->f_74[0]);
	}
	if (does_entity_exist(&(uParam0->f_74[1])))
	{
		delete_ped(uParam0->f_74[1]);
	}
}

void func_26(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (_0x91a5f9cbebb9d936(&(uParam0->f_53[iVar0])))
		{
			remove_scenario_blocking_area(&(uParam0->f_53[iVar0]), false);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(func_139(uParam0));
		}
	}
}

void func_28(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_31(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_14(Global_1935630, 4194304);
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

bool func_29(int iParam0)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_30(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_141(iParam0, 1))
	{
		return;
	}
	if (!func_141(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_29(iParam0)) && func_142(iParam0))
	{
		return;
	}
	func_143(iParam0, 1);
	func_144(iParam0);
	if (func_146(func_145(iParam0)))
	{
		iVar0 = func_147(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_143(iParam0, 16);
	}
	if (func_141(iParam0, 128) && !bParam3)
	{
		func_148(iParam0, 0);
	}
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_149(iVar0, 4096);
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
	if (func_44() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_33(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_544))
	{
		remove_scenario_blocking_area(uParam0->f_544, false);
	}
	if (_does_volume_exist(uParam0->f_545))
	{
		_delete_volume(uParam0->f_545);
	}
}

bool func_34(int iParam0)
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

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_34(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_150(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_151(iVar0);
	*uParam0 = 0;
}

void func_36(bool bParam0)
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
		func_152();
	}
	_0xa0cefcea390aab9b(0);
}

bool func_37(var uParam0, int iParam1)
{
	return (uParam0->f_6 && iParam1) != 0;
}

void func_38(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_39(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_40()
{
	Global_0.f_6 = get_game_timer();
	Global_0.f_3 = { Global_36 };
	func_153(&Global_0);
}

void func_41(int iParam0)
{
	if (func_44() != -1)
	{
		return;
	}
	func_9(32);
	if (iParam0 == 0)
	{
		func_9(16);
	}
	else if (iParam0 == 1)
	{
		func_9(8);
	}
	func_154();
	Global_43889 = 1;
}

void func_42(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_155(1497516462);
			func_156(2016141805);
			func_156(1010885152);
			func_156(-502324015);
			break;
		case 2016141805:
			func_156(1497516462);
			func_155(2016141805);
			func_156(1010885152);
			func_156(-502324015);
			break;
		case 1010885152:
			func_156(1497516462);
			func_156(2016141805);
			func_155(1010885152);
			func_156(-502324015);
			break;
		case -502324015:
			func_156(1497516462);
			func_156(2016141805);
			func_156(1010885152);
			func_155(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_156(-538889627);
			func_156(-538880323);
			func_156(-1056767524);
			func_155(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_157();
			func_155(iParam0);
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
			func_158();
			func_155(iParam0);
			break;
		case 2019386373:
			func_156(-664252410);
			func_156(2109952320);
			func_155(2019386373);
			break;
		case -664252410:
			func_156(2019386373);
			func_156(2109952320);
			func_155(-664252410);
			break;
		case 2109952320:
			func_156(2019386373);
			func_156(-664252410);
			func_155(2109952320);
			break;
		case -1674179981:
			func_156(-1835851517);
			func_156(-1838352012);
			func_155(-1674179981);
			break;
		case -1835851517:
			func_156(-1674179981);
			func_156(-1838352012);
			func_155(-1835851517);
			break;
		case -1838352012:
			func_156(-1674179981);
			func_156(-1835851517);
			func_155(-1838352012);
			break;
		case -1717960576:
			func_156(210001842);
			func_155(-1717960576);
			break;
		case 210001842:
			func_156(-1717960576);
			func_155(210001842);
			break;
		case -150493654:
			func_156(-1271608261);
			func_156(1846061697);
			func_156(-1145519186);
			func_155(-150493654);
			break;
		case -1271608261:
			func_156(-150493654);
			func_156(1846061697);
			func_156(-1145519186);
			func_155(-1271608261);
			break;
		case 1846061697:
			func_156(-150493654);
			func_156(-1271608261);
			func_156(-1145519186);
			func_155(1846061697);
			break;
		case -1145519186:
			func_156(-150493654);
			func_156(-1271608261);
			func_156(1846061697);
			func_155(-1145519186);
			break;
		case 1766284049:
			func_156(280705402);
			func_156(1926308480);
			func_155(1766284049);
			break;
		case 280705402:
			func_156(1766284049);
			func_156(1926308480);
			func_155(280705402);
			break;
		case 1926308480:
			func_156(1766284049);
			func_156(280705402);
			func_155(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_156(439465264);
				func_155(1609506757);
			}
			else
			{
				func_156(1609506757);
				func_156(439465264);
			}
			break;
		case 439465264:
			if (func_159(1609506757))
			{
				if (bParam1)
				{
					func_155(439465264);
				}
				else
				{
					func_156(439465264);
				}
			}
			break;
		case 1822001510:
			func_156(-1612662716);
			func_155(1822001510);
			break;
		case -1612662716:
			func_156(1822001510);
			func_155(-1612662716);
			break;
		case 1306158345:
			func_156(1952610440);
			func_156(-223469678);
			func_156(-404698347);
			func_156(1517904467);
			func_155(1306158345);
			break;
		case 1952610440:
			func_156(1306158345);
			func_156(-223469678);
			func_156(-404698347);
			func_156(1517904467);
			func_155(1952610440);
			break;
		case -223469678:
			func_156(1306158345);
			func_156(1952610440);
			func_156(-404698347);
			func_156(1517904467);
			func_155(-223469678);
			break;
		case -404698347:
			func_156(1306158345);
			func_156(1952610440);
			func_156(-223469678);
			func_156(1517904467);
			func_155(-404698347);
			break;
		case 1517904467:
			func_156(1306158345);
			func_156(1952610440);
			func_156(-223469678);
			func_156(-404698347);
			func_155(1517904467);
			break;
		case 1376646519:
			func_156(931649776);
			func_156(-434590080);
			func_156(1743048395);
			func_156(449774763);
			func_155(1376646519);
			break;
		case 931649776:
			func_156(1376646519);
			func_156(-434590080);
			func_156(1743048395);
			func_156(449774763);
			func_155(931649776);
			break;
		case -434590080:
			func_156(1376646519);
			func_156(931649776);
			func_156(1743048395);
			func_156(449774763);
			func_155(-434590080);
			break;
		case 1743048395:
			func_156(1376646519);
			func_156(931649776);
			func_156(-434590080);
			func_156(449774763);
			func_155(1743048395);
			break;
		case 449774763:
			func_156(1376646519);
			func_156(931649776);
			func_156(-434590080);
			func_156(1743048395);
			func_155(449774763);
			break;
		case -1414537028:
			func_156(38162571);
			func_156(1350391819);
			func_156(54073871);
			func_155(-1414537028);
			break;
		case 38162571:
			func_156(-1414537028);
			func_156(1350391819);
			func_156(54073871);
			func_155(38162571);
			break;
		case 1350391819:
			func_156(-1414537028);
			func_156(38162571);
			func_156(54073871);
			func_155(1350391819);
			break;
		case 54073871:
			func_156(-1414537028);
			func_156(38162571);
			func_156(1350391819);
			func_155(54073871);
			break;
		case 198200492:
			func_155(198200492);
			func_156(-1124061431);
			func_156(52706132);
			func_156(-259123672);
			break;
		case -1124061431:
			func_156(198200492);
			func_155(-1124061431);
			func_156(52706132);
			func_156(-259123672);
			break;
		case 52706132:
			func_156(198200492);
			func_156(-1124061431);
			func_155(52706132);
			func_156(-259123672);
			break;
		case -259123672:
			func_156(198200492);
			func_156(-1124061431);
			func_156(52706132);
			func_155(-259123672);
			break;
		case -919512195:
			func_155(-919512195);
			func_156(-1925798111);
			func_156(420709909);
			func_156(1703426636);
			break;
		case -1925798111:
			func_155(-1925798111);
			func_156(-919512195);
			func_156(420709909);
			func_156(1703426636);
			break;
		case 420709909:
			func_155(420709909);
			func_156(-919512195);
			func_156(-1925798111);
			func_156(1703426636);
			break;
		case 1703426636:
			func_155(1703426636);
			func_156(-919512195);
			func_156(-1925798111);
			func_156(420709909);
			break;
		case -1223121209:
			func_155(-1223121209);
			func_156(630808005);
			break;
		case 630808005:
			func_155(630808005);
			func_156(-1223121209);
			break;
		case 1453909576:
			func_155(1453909576);
			func_156(1643531967);
			break;
		case 1643531967:
			func_155(1643531967);
			func_156(1453909576);
			break;
		case 0:
			func_155(0);
			func_156(473295046);
			func_156(-1738165526);
			break;
		case 473295046:
			func_155(473295046);
			func_156(0);
			func_156(-1738165526);
			break;
		case -1738165526:
			func_155(-1738165526);
			func_156(0);
			func_156(473295046);
			break;
		case 932909855:
			func_155(932909855);
			func_156(2051822093);
			break;
		case 2051822093:
			func_155(2051822093);
			func_156(932909855);
			break;
		case 405586984:
			func_155(405586984);
			func_156(1509509592);
			func_156(-959357075);
			func_156(-1311865656);
			break;
		case 1509509592:
			func_155(1509509592);
			func_156(405586984);
			func_156(-959357075);
			func_156(-1311865656);
			break;
		case -959357075:
			func_155(-959357075);
			func_156(1509509592);
			func_156(405586984);
			func_156(-1311865656);
			break;
		case -1311865656:
			func_155(-1311865656);
			func_156(1509509592);
			func_156(-959357075);
			func_156(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_155(-524145696);
			}
			else
			{
				func_156(-524145696);
			}
			func_156(1626481264);
			func_156(282809459);
			break;
		case 282809459:
			func_155(282809459);
			func_156(1626481264);
			func_156(-524145696);
			break;
		case 1626481264:
			func_155(1626481264);
			func_156(-524145696);
			func_156(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_155(885203519);
			}
			else
			{
				func_156(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_155(-1080627546);
			}
			else
			{
				func_156(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_159(iParam0))
				{
					func_155(iParam0);
				}
			}
			else if (func_159(iParam0))
			{
				func_156(iParam0);
			}
			break;
	}
}

int func_44()
{
	return Global_1572887->f_12;
}

void func_45(var uParam0)
{
	func_160(uParam0, 0f);
}

float func_46(var uParam0)
{
	if (!func_161(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_162(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_163() - uParam0->f_1);
}

void func_47(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_49(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

var func_50(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_51()
{
	return is_bit_set(Global_1357549->f_1893, 0);
}

bool func_52()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_53()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_54()
{
	return &Global_1935436 == 2;
}

bool func_55()
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!_is_ped_carrying(Global_35))
	{
		return false;
	}
	iVar0 = create_itemset(true);
	find_all_attached_carriable_entities(Global_35, iVar0);
	iVar3 = get_itemset_size(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else if (_0xcfda2518f322d836(iVar1))
		{
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	destroy_itemset(iVar0);
	return false;
}

bool func_56(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

bool func_57(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_58(int iParam0, bool bParam1)
{
	switch (func_164(iParam0))
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

bool func_59(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_60(int iParam0, bool bParam1, int iParam2)
{
	if (!func_57(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_165(iParam0) && !func_71(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_166(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_165(iParam0))
	{
		iParam2 = -1;
	}
	if (func_167(iParam0) == 3 || (func_167(iParam0) == 1 && _0x01f4d242765c6b24(func_166(iParam0))))
	{
		func_168(func_112(iParam0), func_166(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_15(0, 1, 0)) && !func_48(&Global_1935630, 32768))
		{
			iVar0 = func_169(iParam0);
			if (iVar0 != -1)
			{
				func_170(0);
			}
			else if (func_112(iParam0) == 8)
			{
				iVar0 = func_171();
				if (iVar0 != -1)
				{
					func_170(0);
				}
			}
		}
	}
	func_172(iParam0, 0);
	if (func_8(0) == iParam0)
	{
		func_28(1);
		func_173(0);
		func_174(1);
	}
	func_175(iParam0, 1);
	func_176(iParam0);
}

void func_61(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	func_66(get_hash_key(sParam0), iParam1);
}

bool func_62(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_63(int iParam0, bool bParam1)
{
	if (func_44() != -1)
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

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_177(iParam0);
	}
	if (func_83((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_86(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_93((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_178(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_85(iParam0, 0);
	}
	func_179(iParam0);
	if (iParam3 == 1)
	{
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, iParam4);
		}
		else
		{
			(*Global_1347702)[iParam0]->f_43 = 0;
		}
	}
}

void func_65(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_71(iParam0))
	{
		func_60(iParam0, 0, 2);
	}
	iVar0 = func_180(iParam0);
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

void func_66(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_script_with_name_hash_exist(iParam0))
	{
		return;
	}
	if (_get_number_of_references_of_script_with_name_hash(iParam0) != 0)
	{
		script_thread_iterator_reset();
		iVar0 = script_thread_iterator_get_next_thread_id();
		while (iVar0 != 0)
		{
			if (iParam0 == _get_hash_of_thread(iVar0))
			{
				if (is_thread_active(iVar0, false))
				{
					force_cleanup_for_thread_with_this_id(iVar0, iParam1);
				}
			}
			iVar0 = script_thread_iterator_get_next_thread_id();
		}
	}
}

bool func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_181(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_69()
{
	iVar2 = 0;
	bVar3 = func_44() == -1;
	iVar1 = 0;
	while (iVar1 < &Global_1898329)
	{
		if (func_57(Global_1898330[iVar1]) && func_71(Global_1898330[iVar1]))
		{
			if ((*Global_1898346)[iVar1]->f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = (*Global_1898346)[iVar1]->f_5;
					if (func_182(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_70(var uParam0, int iParam1)
{
	func_183(uParam0, iParam1);
}

bool func_71(int iParam0)
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
		iVar0 = func_167(iParam0);
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

bool func_72(int iParam0, int iParam1)
{
	return (func_184(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

void func_73(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_185(Global_1898330[iParam0]);
		func_186((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_74(int iParam0, bool bParam1)
{
	if (!func_59(iParam0))
	{
		return;
	}
	if (func_77((*Global_1835011)[iParam0], 8192))
	{
		bVar0 = true;
	}
	(*Global_1835011)[iParam0]->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		(*Global_1835011)[iParam0]->f_63 |= 2;
		(*Global_1835011)[iParam0]->f_63 |= 8192;
	}
}

void func_75(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_184(iParam1))
	{
		iParam1 = func_180(func_187(iParam0));
		if (!func_184(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_188(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_137())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_22(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_188(iParam0, -1) && func_189(iParam0))
			{
				func_190(iParam0, fParam5, iParam1, bParam2, 1);
				func_78((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_191(iParam0)) && !Global_43891)
	{
		func_190(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_72(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_192(iParam0)) && !func_72(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_65((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_193(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_76(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_3}, 3);
	if ((func_44() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_7, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_7);
	}
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_79()
{
	return &Global_1899515;
}

void func_80(int iParam0, bool bParam1, int iParam2)
{
	if (func_165((*Global_1392626)[iParam0]->f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_194(iParam0);
	}
	if (!is_thread_active((*Global_1392626)[iParam0]->f_21, false))
	{
		if (iParam2 == 1)
		{
			func_195(iParam0);
		}
		func_196(&((*Global_1392626)[iParam0]->f_11), 1, 0, 1);
		(*Global_1392626)[iParam0]->f_11 = 0;
	}
	func_197(&((*Global_1392626)[iParam0]->f_9), 1);
	if (!func_198((*Global_1392626)[iParam0]->f_8, 1))
	{
		func_199(&((*Global_1392626)[iParam0]->f_8), 1);
	}
	func_197(&((*Global_1392626)[iParam0]->f_9), 2);
}

void func_81(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_200(iVar0) && is_bit_set(Global_40.f_9052, iVar0))
		{
			if (((*Global_1392626)[iVar0]->f_10 && iParam0) == 0)
			{
				func_201(iVar0, iParam0);
			}
			func_202(iVar0);
		}
		iVar0++;
	}
}

void func_82()
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_200(iVar0))
		{
			func_194(iVar0);
		}
		iVar0++;
	}
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_84(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_85(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_203(&((*Global_1347702)[iParam0]->f_14));
		func_86(&((*Global_1347702)[iParam0]->f_13), 16);
		func_204(iParam0);
		if ((!func_205(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_86(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_206(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_207(iParam0, 16384);
			func_208(iParam0, 1, func_116(iParam0));
		}
	}
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_87()
{
	if (func_44() != -1)
	{
		return;
	}
	Global_1357549->f_1708 = 0;
	if (does_blip_exist(Global_1357549->f_1711))
	{
		remove_blip(&(Global_1357549->f_1711));
		iVar0 = func_209(Global_40.f_4283);
		if (func_210(iVar0) && func_211((*Global_1888801)[iVar0]->f_13))
		{
			func_212((*Global_1888801)[iVar0]->f_13, 1560611276);
		}
		Global_1357549->f_1710 = 0;
	}
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2;
						if (func_59(iVar1))
						{
							func_74(iVar1, 0);
							func_75(iVar1, -1, 0, 1, 0, 0, 0);
							if (does_blip_exist((*Global_1835011)[iVar1]->f_27))
							{
								remove_blip(&((*Global_1835011)[iVar1]->f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_89()
{
	Global_1898164->f_163 = func_15(0, 0, 0);
}

void func_90()
{
	Global_1898164->f_164 = func_15(0, 1, 0);
}

bool func_91()
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

int func_92(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_213(func_185(iParam0));
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_94(int iParam0)
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

int func_95(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (func_44() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_215(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_97(int iParam0, int iParam1)
{
	iVar0 = func_216(iParam1);
	func_217(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_98(int iParam0, int iParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_99(int iParam0, int iParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_100(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_101()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_218(1))
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
	task_play_anim(Global_35, func_219(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_220(1);
	remove_anim_dict(func_219());
}

bool func_102(int iParam0)
{
	return false;
}

int func_103(int iParam0)
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

void func_104(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_221(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_44() != -1)
	{
		return;
	}
	func_222();
	if (bParam5)
	{
		if (!func_223(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_218(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_224();
	}
	func_225(iVar3, 1, 1, 1, 1, 1);
	func_226(31, 0, 0, 0, 0);
	func_227(0);
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
			func_226(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_226(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_228(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_105(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

int func_106(var uParam0)
{
	return uParam0->f_7;
}

void func_107(var uParam0)
{
	_stop_recording_this_frame();
	_disable_first_person_cam_this_frame();
	_disable_vehicle_first_person_cam_this_frame();
	set_scenario_ped_density_multiplier_this_frame(uParam0->f_95);
	set_vehicle_density_multiplier_this_frame(uParam0->f_94);
	set_random_vehicle_density_multiplier_this_frame(uParam0->f_94);
	set_parked_vehicle_density_multiplier_this_frame(0.5f);
	_0xab0d553fe20a6e25(uParam0->f_93);
	hide_hud_and_radar_this_frame();
	disable_control_action(2, -668070958, false);
	disable_control_action(2, 387518684, false);
	disable_control_action(2, -1629713051, false);
	disable_control_action(2, 105715352, false);
	disable_control_action(2, -1111959821, false);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	_0xf45e46deecf7df6e(4194304, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	if (func_108(uParam0) != 7)
	{
		set_ped_reset_flag(Global_35, 25, true);
	}
}

int func_108(var uParam0)
{
	return *uParam0;
}

void func_109(var uParam0)
{
	if (is_screen_faded_in())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(func_139(uParam0));
		}
	}
}

void func_110(int iParam0, bool bParam1)
{
	if (func_44() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_49(32768))
	{
		return;
	}
	if (!func_49(32768))
	{
		func_229(1, bParam1);
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
	if (func_49(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_79();
	}
}

int func_111(vector3 vParam0, int iParam3)
{
	iVar0 = func_230();
	if (func_210(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_231(vParam0, iParam3);
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_232(func_185(iParam0));
}

int func_113(int iParam0)
{
	if (func_112(iParam0) == 1)
	{
		return func_92(iParam0);
	}
	return -1;
}

Vector3 func_114(int iParam0)
{
	return func_233(iParam0);
}

int func_115(int iParam0)
{
	if (func_112(iParam0) == 8)
	{
		return func_92(iParam0);
	}
	return -1;
}

Vector3 func_116(int iParam0)
{
	if (!func_62(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_234(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_117(var uParam0)
{
	func_21(1, 0);
	uParam0->f_130 = 0;
	uParam0->f_131 = _databinding_add_data_container_from_path("", "BenchmarkDataStore");
	uParam0->f_132 = _databinding_add_data_string(uParam0->f_131, "rawCurrentFps", "");
	uParam0->f_133 = _databinding_add_data_bool(uParam0->f_131, "showEndscreen", 0);
	uParam0->f_134 = _uiflowblock_request(uParam0->f_135);
	if (!is_entity_dead(player_ped_id()))
	{
		set_entity_invincible(player_ped_id(), true);
		set_ped_can_be_knocked_off_vehicle(player_ped_id(), 1);
	}
	set_player_control(player_id(), false, 2048, false);
	if (func_235() || _0x50f124e6ef188b22(Global_35))
	{
		func_236(1);
	}
	set_everyone_ignore_player(player_id(), true);
	func_28(0);
	_0xf239400e16c23e08(0, 1);
	animpostfx_stop_all();
	func_109(uParam0);
	func_237(uParam0);
	func_238(uParam0, 1000);
	if (func_37(uParam0, 64))
	{
		_set_fow_update_player_override(false, 0);
	}
	if (!func_34(uParam0->f_546))
	{
		uParam0->f_546 = func_130("MO_GFX_BENCHMARK_STOP", 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
	}
	if ((func_119(uParam0) == 0 && func_240(func_239(uParam0))) && !is_entity_dead(player_ped_id()))
	{
		func_241(uParam0, get_entity_coords(player_ped_id(), true, false));
		func_242(uParam0, get_entity_heading(player_ped_id()));
		if (!does_entity_exist(func_23(uParam0)) && is_ped_in_any_vehicle(player_ped_id(), false))
		{
			func_243(uParam0, get_vehicle_ped_is_in(player_ped_id(), false));
		}
		if (!does_entity_exist(func_24(uParam0)) && func_244(player_ped_id()))
		{
			func_245(uParam0, get_mount(player_ped_id()));
		}
		if (!is_entity_dead(func_23(uParam0)))
		{
			set_entity_coords(func_23(uParam0), func_239(uParam0), true, false, true, true);
			set_entity_heading(func_23(uParam0), func_246(uParam0));
			freeze_entity_position(func_23(uParam0), true);
		}
		if (!is_entity_dead(func_24(uParam0)))
		{
			set_entity_coords(func_24(uParam0), func_239(uParam0), true, false, true, true);
			set_entity_heading(func_24(uParam0), func_246(uParam0));
			freeze_entity_position(func_24(uParam0), true);
		}
	}
}

bool func_118(var uParam0)
{
	bVar0 = true;
	if (func_247())
	{
		bVar0 = false;
	}
	if (!is_screen_faded_out())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_248(uParam0))
		{
		}
		func_249(uParam0, _get_benchmark_iterations_from_command_line());
		func_250(uParam0, _get_benchmark_pass_from_command_line());
		if (func_125(uParam0) < -1 || func_125(uParam0) >= 20)
		{
			func_250(uParam0, -1);
		}
		func_251(uParam0);
	}
	return bVar0;
}

int func_119(var uParam0)
{
	return uParam0->f_530;
}

bool func_120(var uParam0)
{
	func_109(uParam0);
	vVar0 = { func_252(uParam0) };
	vVar3 = { func_253(uParam0) };
	if (!func_254(&vVar0, 50, 10, 0))
	{
	}
	_set_entity_coords_and_heading(player_ped_id(), vVar0, vVar3.z, true, false, true);
	if (!is_entity_dead(player_ped_id()))
	{
		_0x2208438012482a1a(player_ped_id(), false, false);
		set_entity_visible(player_ped_id(), false);
	}
	set_gameplay_cam_relative_pitch(0f, 1f);
	set_gameplay_cam_relative_heading(0f, 1f);
	func_255(vVar0, 100f, 1, 0, 0, 0, 0);
	if (!is_entity_dead(func_23(uParam0)))
	{
		set_vehicle_doors_locked(func_23(uParam0), 2);
		set_entity_visible(func_23(uParam0), false);
	}
	if (!is_entity_dead(func_24(uParam0)))
	{
		set_entity_visible(func_24(uParam0), false);
	}
	func_33(uParam0);
	uParam0->f_545 = _create_volume_cylinder(vVar0, vVar3, 10f, 10f, 10f);
	uParam0->f_544 = func_256(uParam0->f_545, 0, 0, 0);
	func_257(&(uParam0->f_113), vVar0, vVar3.z, 0, 1, 0, 0, 0, 0, 1, 1);
	return true;
}

bool func_121(var uParam0)
{
	if (!func_258(&(uParam0->f_113)))
	{
		if ((get_frame_count() % 30) == 0)
		{
		}
		return false;
	}
	if (_is_loading_screen_active())
	{
		shutdown_loading_screen();
		if ((get_frame_count() % 30) == 0)
		{
		}
		return false;
	}
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	_copy_memory(&(uParam0->f_113), &Var0, 14);
	func_259();
	_set_weather_type(func_260(uParam0), true, true, false, 0f, false);
	set_wind_speed(-1f);
	set_wind_direction(-1f);
	_set_snow_level(-1f);
	set_clock_time(func_261(uParam0), func_262(uParam0), 0);
	if (does_cam_exist(uParam0->f_528))
	{
		destroy_cam(uParam0->f_528, false);
	}
	if (func_240(func_263(uParam0)))
	{
		uParam0->f_528 = create_camera(26379945, true);
		set_cam_coord(uParam0->f_528, func_252(uParam0));
		set_cam_rot(uParam0->f_528, func_253(uParam0), 2);
		set_cam_fov(uParam0->f_528, func_264(uParam0));
	}
	else
	{
		uParam0->f_528 = create_camera(180543640, true);
		add_cam_spline_node(uParam0->f_528, func_252(uParam0), func_253(uParam0), 0, 3, 2);
		add_cam_spline_node(uParam0->f_528, func_263(uParam0), func_265(uParam0), func_266(uParam0), 3, 2);
		set_cam_spline_phase(uParam0->f_528, 0f);
		set_cam_spline_smoothing_style(uParam0->f_528, 3);
	}
	render_script_cams(true, false, 3000, true, false, 0);
	return true;
}

bool func_122(var uParam0)
{
	if (!func_37(uParam0, 16) && func_267(uParam0) > 0.05f)
	{
		func_27(uParam0);
		func_268(uParam0);
		func_10(uParam0, 16);
	}
	if (!func_37(uParam0, 32) && func_267(uParam0) > (func_269(uParam0) - IntToFloat((func_139(uParam0) / 1000))))
	{
		func_129(uParam0);
		func_109(uParam0);
		func_10(uParam0, 32);
	}
	if (func_270(uParam0) != 0 && does_cam_exist(uParam0->f_528))
	{
		func_272(func_270(uParam0), func_271(uParam0), get_cam_spline_phase(uParam0->f_528), &(uParam0->f_532));
	}
	if (func_267(uParam0) >= func_269(uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (does_cam_exist(uParam0->f_528))
		{
			destroy_cam(uParam0->f_528, false);
		}
		if (!is_entity_dead(player_ped_id()))
		{
			set_entity_visible(player_ped_id(), true);
		}
		func_273(uParam0, 16);
		func_273(uParam0, 32);
		set_wind_speed(-1f);
		set_wind_direction(-1f);
		_set_snow_level(-1f);
		return true;
	}
	return false;
}

int func_123(var uParam0)
{
	return uParam0->f_529;
}

void func_124(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	uParam0->f_530 = iParam1;
}

int func_125(var uParam0)
{
	return uParam0->f_98;
}

int func_126(var uParam0)
{
	bVar3 = true;
	switch (func_274(uParam0))
	{
		case 0:
			func_275(uParam0, 1);
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				iVar2 = iVar1;
				if (!does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					uParam0->f_67[iVar1] = func_279(func_276(iVar2), func_277(iVar2), func_278(iVar2), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					bVar3 = false;
				}
				iVar1++;
			}
			if (bVar3)
			{
				func_275(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					set_ped_accuracy(&(uParam0->f_67[iVar1]), 15);
					set_blocking_of_non_temporary_events(&(uParam0->f_67[iVar1]), true);
				}
				iVar1++;
			}
			func_275(uParam0, 3);
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_ped(uParam0->f_16, func_280(0)))
			{
				waypoint_recording_get_closest_waypoint(func_280(0), get_entity_coords(uParam0->f_16, true, false), &iVar0);
			}
			else
			{
				iVar0 = 0;
			}
			if (iVar0 < 50)
			{
				return 0;
			}
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					task_follow_nav_mesh_to_coord(&(uParam0->f_67[iVar1]), func_281(), 1f, -1, 0.25f, 0, 40000f);
				}
				iVar1++;
			}
			func_275(uParam0, 4);
			break;
		case 4:
			if (func_282(uParam0->f_16, uParam0->f_18) < 10f)
			{
				func_275(uParam0, 5);
			}
			break;
		case 5:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					task_aim_gun_at_entity(&(uParam0->f_67[iVar1]), uParam0->f_16, -1, 0, 1);
				}
				iVar1++;
			}
			func_275(uParam0, 6);
			break;
		case 6:
			if (_is_ped_getting_into_a_mount_seat(uParam0->f_16, true))
			{
				func_275(uParam0, 7);
			}
			break;
		case 7:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					task_combat_ped(&(uParam0->f_67[iVar1]), uParam0->f_16, 0, 0);
				}
				iVar1++;
			}
			func_275(uParam0, 8);
			break;
		case 8:
			if (func_282(uParam0->f_16, &(uParam0->f_67[0])) > 30f)
			{
				func_275(uParam0, 9);
			}
			break;
		case 9:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])))
				{
					clear_ped_tasks(&(uParam0->f_67[iVar1]), 1, 0);
				}
				iVar1++;
			}
			func_275(uParam0, 10);
			break;
		case 10:
			iVar1 = 0;
			while (iVar1 <= (1 - 1))
			{
				if (does_entity_exist(&(uParam0->f_67[iVar1])) && !is_entity_on_screen(&(uParam0->f_67[iVar1])))
				{
					delete_ped(uParam0->f_67[iVar1]);
				}
				iVar1++;
			}
			func_275(uParam0, 11);
			break;
		case 11:
			return 1;
	}
	return 0;
}

bool func_127(var uParam0)
{
	_0x0961b089947ba6d0(get_entity_heading(Global_35));
	if (does_entity_exist(uParam0->f_18))
	{
		set_ped_reset_flag(uParam0->f_18, 49, true);
	}
	set_vehicle_density_multiplier_this_frame(0f);
	delete_all_trains();
	set_random_trains(false);
	func_32(0);
	_0x8674d138391ffb1b(get_player_index(), 1);
	if (_get_number_of_references_of_script_with_name_hash(1848756007) > 0)
	{
		func_66(1848756007, 523);
	}
	switch (func_283(uParam0))
	{
		case 0:
			if (is_screen_faded_out())
			{
				if (!does_entity_exist(uParam0->f_16))
				{
					uParam0->f_16 = clone_ped(Global_35, 0f, true, true);
				}
				if (!does_entity_exist(uParam0->f_16) || !_0xa0bc8faed8cfeb3c(uParam0->f_16))
				{
					return false;
				}
				_0x140b3cb1d424a945(uParam0->f_16, 379542007);
				request_waypoint_recording(func_280(0));
				request_waypoint_recording(func_280(1));
				request_waypoint_recording(func_280(2));
				request_waypoint_recording(func_280(3));
				request_model(-247265944, false);
				_0xed9582b3da8f02b4(10);
				request_model(1477581656, false);
				request_model(-1308375373, false);
				request_model(-1448273283, false);
				request_anim_dict("AI_COMBAT@AIM_INTRO@AMBIENT@SURPRISED@UNHOLSTERED@BASE@1H");
				uParam0->f_32 = _create_anim_scene("script@proc@shoprobberies@GLOBAL@CLERK_OPEN_REGISTER@BASE", 0, "pblExitLFar", false, true);
				load_anim_scene(uParam0->f_32);
				_request_scenario_type(325463335, 15, 0, 0);
				func_284(379542007);
				delete_all_trains();
				set_random_trains(false);
				func_32(0);
				uParam0->f_20 = 1;
				uParam0->f_20.f_1 = 1;
				uParam0->f_20.f_3 = 1;
				set_blocking_of_non_temporary_events(Global_35, true);
				shutdown_loading_screen();
				func_285(uParam0, 1);
			}
			else if (!is_screen_fading_out())
			{
				do_screen_fade_out(func_139(uParam0));
			}
			break;
		case 1:
			shutdown_loading_screen();
			if ((((((((((get_is_waypoint_recording_loaded(func_280(0)) && get_is_waypoint_recording_loaded(func_280(1))) && get_is_waypoint_recording_loaded(func_280(2))) && get_is_waypoint_recording_loaded(func_280(3))) && has_model_loaded(-247265944)) && has_model_loaded(1477581656)) && has_model_loaded(-1308375373)) && has_model_loaded(-1448273283)) && _0x5e420ff293ee5472()) && !_is_loading_screen_active()) && _0x8cbe916cfc64ad5c(uParam0->f_16))
			{
				waypoint_recording_get_coord(func_280(0), 0, &vVar0);
				func_286(Global_35);
				if (does_entity_exist(uParam0->f_16))
				{
					_set_entity_coords_and_heading(uParam0->f_16, func_287(), 102.26f, true, false, true);
					set_blocking_of_non_temporary_events(uParam0->f_16, true);
					set_ped_config_flag(uParam0->f_16, 345, true);
				}
				start_player_teleport(get_player_index(), func_288(0), 0f, true, true, true, false);
				func_285(uParam0, 2);
			}
			break;
		case 2:
			if (uParam0->f_33 == 0)
			{
				uParam0->f_33 = _0x6f3068258a499e52(-1043434543, 2860.12f, -1201.33f, 49.64f, 7);
			}
			if (_has_player_teleport_finished(get_player_index()))
			{
				if (uParam0->f_34 == 0)
				{
					uParam0->f_34 = _0x6f3068258a499e52(699122893, 2859.193f, -1203.106f, 51.45742f, 7);
				}
				if (uParam0->f_34 != 0 && !_0x1ff441d7954f8709(uParam0->f_34))
				{
					return false;
				}
				else
				{
					freeze_entity_position(_0x4735e2a4bb83d9da(uParam0->f_34), true);
				}
				if (uParam0->f_33 != 0 && _0x1ff441d7954f8709(uParam0->f_33))
				{
					set_focus_entity(uParam0->f_16);
					func_39(0, 0);
					_0xbfa6b7731c3baf02();
					_0x1ff00db43026b12f();
					populate_now();
					waypoint_recording_get_coord(func_280(1), 0, &vVar0);
					uParam0->f_20.f_2 = 1;
					uParam0->f_20.f_6 = { vVar0 };
					waypoint_recording_get_coord(func_280(1), 1, &vVar0);
					uParam0->f_18 = func_279(-247265944, uParam0->f_20.f_6, func_289(uParam0->f_20.f_6, vVar0, 1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					task_stand_still(uParam0->f_18, -1);
					set_blocking_of_non_temporary_events(uParam0->f_18, true);
					_set_entity_coords_and_heading(uParam0->f_16, func_287(), 102.26f, true, false, true);
					uParam0->f_35 = _0x4735e2a4bb83d9da(uParam0->f_33);
					set_ped_relationship_group_hash(uParam0->f_16, -1538724068);
					clear_area(2859.193f, -1203.106f, 51.45742f, 5f, 1048576);
					func_290(uParam0);
					func_285(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!_0x0ee3f0d7feccc54f())
			{
				return false;
			}
			uParam0->f_31 = func_291(219, 0, 0, 0, 1, 1);
			if (!is_entity_dead(uParam0->f_31))
			{
				_request_ped_emotional_preset(uParam0->f_31, "TaskIntimidated_OnFoot");
				if (_has_ped_emotional_preset_loaded(uParam0->f_31, "TaskIntimidated_OnFoot"))
				{
					_set_entity_coords_and_heading(uParam0->f_31, 2858.86f, -1202.77f, 49.59f, -64.23f, true, false, true);
					_0xaab050da48b57978(uParam0->f_31, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					func_292(uParam0);
					func_293(uParam0->f_16, 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					set_current_ped_weapon(uParam0->f_16, 379542007, true, 0, false, false);
					task_aim_at_entity(uParam0->f_16, uParam0->f_31, -1, 0, 0);
					_0x2208438012482a1a(uParam0->f_16, false, false);
					uParam0->f_99 = add_cover_point(2514.341f, -1134.775f, 48.86838f, -86.3f, 3, 2, 0, true);
					if (does_entity_exist(player_ped_id()))
					{
						set_entity_visible(player_ped_id(), false);
					}
					iVar3 = func_79();
					func_294(&iVar3, 8);
					func_295(&iVar3, 0);
					func_296(&iVar3, 0);
					func_297(iVar3);
					_set_weather_type(-173507739, true, true, false, 0f, false);
					_set_milliseconds_per_game_minute(2000);
					pause_clock(false, 0);
					func_268(uParam0);
					func_285(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_267(uParam0) >= 0.5f)
			{
				func_27(uParam0);
				func_285(uParam0, 5);
			}
			break;
		case 5:
			if (func_267(uParam0) >= 4.5f)
			{
				_task_use_scenario_point(uParam0->f_16, uParam0->f_38, 0, 0, true, false, 0, false, -1f, false);
				clear_ped_tasks(uParam0->f_31, 1, 0);
				task_achieve_heading(uParam0->f_31, func_289(get_entity_coords(uParam0->f_31, true, false), get_entity_coords(uParam0->f_16, true, false), 1), -1);
				func_298(uParam0);
				func_285(uParam0, 6);
			}
			break;
		case 6:
			Var4.f_4 = -1;
			Var4.f_8 = 2;
			Var4.f_9 = 1;
			Var4.f_10 = 1;
			Var4.f_11 = 1;
			Var4.f_13 = 1;
			Var4.f_14 = 2;
			Var4.f_15 = 2;
			Var4.f_16 = 3;
			Var4.f_19 = 3;
			Var4.f_20 = 1;
			Var4.f_21 = 3;
			Var4.f_22 = 3;
			Var4.f_3 = uParam0->f_16;
			Var4.f_4 = 14283;
			Var4.f_8 = 4;
			Var4.f_14 = 1000;
			Var4.f_15 = 1000;
			_0x66f9eb44342bb4c5(uParam0->f_31, &Var4);
			if (get_script_task_status(uParam0->f_16, -76381094, true) == 8 && func_267(uParam0) >= 4f)
			{
				task_follow_waypoint_recording(uParam0->f_16, func_280(0), 0, 4194818, -1, 0, 0, -1);
				waypoint_playback_start_aiming_at_ped(uParam0->f_16, uParam0->f_31, 0, -1082130432);
				func_285(uParam0, 7);
			}
			if (func_267(uParam0) >= 10f)
			{
				task_follow_waypoint_recording(uParam0->f_16, func_280(0), 0, 4194818, -1, 0, 0, -1);
				waypoint_playback_start_aiming_at_ped(uParam0->f_16, uParam0->f_31, 0, -1082130432);
				func_285(uParam0, 7);
			}
			break;
		case 7:
			iVar29 = get_script_task_status(uParam0->f_16, 658540077, true);
			if (iVar29 != 1)
			{
				task_follow_waypoint_recording(uParam0->f_16, func_280(0), 0, 4194818, -1, 0, 1, -1);
			}
			else if (iVar29 == 1)
			{
				if (get_ped_waypoint_progress(uParam0->f_16) >= 1)
				{
					set_ped_config_flag(&(uParam0->f_67[0]), 138, true);
					waypoint_playback_start_aiming_at_ped(uParam0->f_16, uParam0->f_31, 0, -1082130432);
					func_285(uParam0, 8);
				}
			}
			break;
		case 8:
			if (is_waypoint_playback_going_on_for_ped(uParam0->f_16, 0))
			{
				iVar30 = get_ped_waypoint_progress(uParam0->f_16);
				if (iVar30 >= 14)
				{
					if (func_37(uParam0, 128))
					{
						set_entity_coords(Global_35, func_288(1), true, false, true, true);
						waypoint_playback_stop_aiming_or_shooting(uParam0->f_16);
						func_273(uParam0, 128);
					}
					waypoint_playback_override_speed(uParam0->f_16, 3f, 0, -1082130432, 0);
					if (get_distance_between_coords(get_entity_coords(uParam0->f_16, true, false), func_299(4), false) <= 3.5f)
					{
						set_ped_min_move_blend_ratio(uParam0->f_16, waypoint_recording_get_speed_at_point(func_280(0), iVar30));
					}
				}
				else
				{
					if (!func_37(uParam0, 128))
					{
						waypoint_playback_start_aiming_at_ped(uParam0->f_16, uParam0->f_31, 0, -1082130432);
						func_10(uParam0, 128);
					}
					waypoint_playback_override_speed(uParam0->f_16, 1.5f, 0, -1082130432, 0);
					if (get_ped_waypoint_progress(uParam0->f_16) >= 8)
					{
						if (is_gameplay_hint_active())
						{
							stop_gameplay_hint(false);
						}
					}
					else if (!is_gameplay_hint_active())
					{
						set_gameplay_ped_hint(uParam0->f_31, 0f, 0f, 1f, true, -1, 2000, 2000);
					}
				}
			}
			if (get_script_task_status(uParam0->f_16, 658540077, true) == 8 || func_300(uParam0->f_16, uParam0->f_20.f_6, 4.5f, 1, 1))
			{
				if (!func_300(uParam0->f_18, uParam0->f_20.f_6, 5f, 1, 1))
				{
					waypoint_recording_get_coord(func_280(1), 1, &vVar0);
					_set_entity_coords_and_heading(uParam0->f_18, uParam0->f_20.f_6, func_289(uParam0->f_20.f_6, vVar0, 1), true, false, true);
				}
				set_ped_accuracy(uParam0->f_16, 100);
				task_combat_ped(uParam0->f_16, &(uParam0->f_67[0]), 0, 0);
				set_ped_sphere_defensive_area(uParam0->f_16, get_entity_coords(uParam0->f_16, true, false), 2f, 0, 0, 0);
				func_285(uParam0, 9);
			}
			break;
		case 9:
			if (is_entity_dead(&(uParam0->f_67[0])))
			{
				func_301(uParam0->f_16, uParam0->f_18, 0, 1.5f, 20000);
				set_ped_accuracy(uParam0->f_16, 10);
				remove_ped_defensive_area(uParam0->f_16, false);
				func_30(219, 0, 1, 0, 0);
				func_285(uParam0, 10);
			}
			else if (func_267(uParam0) >= 2f)
			{
				func_302(&(uParam0->f_67[0]), 0, 0);
			}
			break;
		case 10:
			if (is_ped_on_mount(uParam0->f_16))
			{
				set_entity_coords(Global_35, func_288(2), true, false, true, true);
				task_follow_waypoint_recording(uParam0->f_16, func_280(1), 0, 134217728, -1, 0, 0, -1);
				set_entity_invincible(uParam0->f_16, true);
				set_entity_invincible(uParam0->f_18, true);
				uParam0->f_39 = _create_volume_box_with_custom_name(2317.168f, -1081.705f, 44.29298f, 0f, 0f, -38.14584f, 5.986699f, 8.025969f, 6.935841f, "BENCHMARK - Final Cam");
				uParam0->f_40 = _create_volume_box_with_custom_name(2530.763f, -1130.693f, 50.03315f, 0f, 0f, 0f, 5.360039f, 6.372329f, 4.657974f, "BENCHMARK - Kill Volume");
				uParam0->f_41 = _create_volume_box_with_custom_name(2653.801f, -1269.781f, 53.21843f, 0f, 0f, -64.58295f, 16.84993f, 6.372329f, 5.788404f, "BENCHMARK - Wagon Start");
				uParam0->f_42 = _create_volume_cylinder_with_custom_name(2609.223f, -1216.151f, 53.21843f, 0f, 0f, 0f, 200f, 200f, 75f, "BENCHMARK - NO LAW SPAWN");
				_0x18262cafebb5fbe1(uParam0->f_42, 16384, 0, 0, -1, -1, 0);
				func_285(uParam0, 11);
			}
			break;
		case 11:
			if (!is_entity_dead(&(uParam0->f_67[0])) && !waypoint_playback_get_is_shooting(uParam0->f_16))
			{
				waypoint_playback_start_shooting_at_ped(uParam0->f_16, &(uParam0->f_67[0]), 1, -957453492, -1082130432);
			}
			if (is_waypoint_playback_going_on_for_ped(uParam0->f_16, 0) && get_ped_waypoint_progress(uParam0->f_16) >= 5)
			{
				waypoint_playback_override_speed(uParam0->f_16, 2.5f, 0, -1082130432, 0);
			}
			func_303(uParam0);
			func_304(uParam0);
			if (func_305(uParam0))
			{
				func_285(uParam0, 12);
			}
			break;
		case 12:
			func_285(uParam0, 14);
			break;
		case 14:
			if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_63, func_280(1)))
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_63, 10f);
			}
			if (is_entity_in_volume(uParam0->f_16, uParam0->f_39, true, 0))
			{
				func_306(uParam0);
				func_285(uParam0, 15);
			}
			break;
		case 15:
			vehicle_waypoint_playback_override_speed(uParam0->f_63, 10f);
			if (func_267(uParam0) >= 5f)
			{
				do_screen_fade_out(func_139(uParam0));
				func_285(uParam0, 16);
			}
			break;
		case 16:
			if (is_screen_faded_out())
			{
				if (does_cam_exist(uParam0->f_528))
				{
					destroy_cam(uParam0->f_528, false);
				}
				render_script_cams(false, false, 3000, true, false, 0);
				func_25(uParam0);
				func_307(uParam0);
				func_26(uParam0);
				_0x7d4e70a67a651c71(10);
				_0x1a7a802b2301edc0(uParam0->f_16);
				if (does_entity_exist(uParam0->f_16))
				{
					delete_ped(&(uParam0->f_16));
				}
				clear_focus();
				return true;
			}
			break;
	}
	return false;
}

int func_128(var uParam0)
{
	return uParam0->f_96;
}

void func_129(var uParam0)
{
	func_22(1);
	if (func_37(uParam0, 2))
	{
		func_273(uParam0, 2);
		_stop_benchmark_recording();
		func_10(uParam0, 4);
	}
}

int func_130(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_308(iVar0, 2))
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
		func_309(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_131(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	draw_rect((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false, bParam8);
}

void func_132(var uParam0)
{
	if (func_108(uParam0) != 2)
	{
		if (!func_311(func_310(uParam0)))
		{
			if (is_screen_faded_in())
			{
				func_313(uParam0, func_312("BMARK_EXIT", 10000, 0, 0, 0, 1));
			}
		}
		else if (func_314(1000))
		{
			func_129(uParam0);
			if (func_37(uParam0, 4))
			{
				_save_benchmark_recording();
			}
			func_1(uParam0, 1);
			_reset_benchmark_recording();
		}
	}
}

void func_133(var uParam0)
{
	if (uParam0->f_130)
	{
		if (func_311(func_310(uParam0)))
		{
			uParam0->f_82[uParam0->f_81] = (1f / _get_benchmark_time());
			uParam0->f_81++;
			if (uParam0->f_81 == 10)
			{
				uParam0->f_81 = 0;
				fVar0 = 0f;
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 10)
				{
					fVar0 = (fVar0 + &uParam0->f_82[iVar1]);
					iVar1++;
				}
				uParam0->f_80 = (fVar0 / 10f);
			}
			_databinding_write_data_string(uParam0->f_132, _0x2b6846401d68e563(uParam0->f_80, 1));
		}
	}
	else if (_uiflowblock_is_loaded(uParam0->f_134))
	{
		_uiflowblock_enter(uParam0->f_134, 0);
		_uistatemachine_create(uParam0->f_136, uParam0->f_134);
		uParam0->f_130 = 1;
	}
}

char* func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "BENCHMARK_BLOCK_REASON_BLK_CLEAN";
		case 2:
			return "BENCHMARK_BLOCK_REASON_BLK_RNNNG";
		case 13:
			return "BENCHMARK_BLOCK_REASON_BLK_DEAD";
		case 3:
			return "BENCHMARK_BLOCK_REASON_BLK_MISS";
		case 5:
			return "BENCHMARK_BLOCK_REASON_BLK_SHOP";
		case 4:
			return "BENCHMARK_BLOCK_REASON_BLK_CUTS";
		case 6:
			return "BENCHMARK_BLOCK_REASON_BLK_WANT";
		case 7:
			return "BENCHMARK_BLOCK_REASON_BLK_ONLI";
		case 8:
			return "BENCHMARK_BLOCK_REASON_BLK_ACT";
		case 9:
			return "BENCHMARK_BLOCK_REASON_BLK_LOC";
		case 10:
			return "BENCHMARK_BLOCK_REASON_BLK_VEH";
		case 11:
			return "BENCHMARK_BLOCK_REASON_BLK_PARA";
		case 12:
			return "BENCHMARK_BLOCK_REASON_BLK_FALL";
		default:
			return "ERROR";
	}
	return "ERROR";
}

var func_135(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_315(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_316(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_315(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_136()
{
	return func_317(_0xc17f69e1418cd11f(3));
}

bool func_137()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_138(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

int func_139(var uParam0)
{
	return uParam0->f_10;
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_141(int iParam0, int iParam1)
{
	if (func_44() != -1)
	{
		return false;
	}
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_142(int iParam0)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_143(int iParam0, int iParam1)
{
	if (func_44() != -1)
	{
		return;
	}
	if (!func_140(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_144(int iParam0)
{
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_318(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_145(int iParam0)
{
	if (!func_140(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_146(int iParam0)
{
	return iParam0 != 0;
}

int func_147(int iParam0)
{
	if (!func_140(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_148(int iParam0, bool bParam1)
{
	if (!func_140(iParam0))
	{
		return 0;
	}
	if (!func_141(iParam0, 2))
	{
		return 0;
	}
	if (func_145(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_147(iParam0)))
	{
		return 1;
	}
	if (func_141(iParam0, 1) && !bParam1)
	{
		func_319(iParam0, 128);
		return 1;
	}
	func_143(iParam0, 129);
	func_144(iParam0);
	_0xfc77c5b44d5ff7c0(func_147(iParam0));
	func_320(iParam0, 0);
	return 1;
}

void func_149(int iParam0, int iParam1)
{
	if (!func_321(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

int func_150(var uParam0)
{
	return uParam0;
}

void func_151(int iParam0)
{
	if (!func_322(iParam0))
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

void func_152()
{
	if (func_34(Global_43801))
	{
		func_35(&Global_43801, 0, 0);
	}
}

void func_153(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_154()
{
	func_323();
	func_324();
	func_325();
	_0x11b0a0b282fa9b10(0);
}

void func_155(int iParam0)
{
	iVar0 = func_326(iParam0, 1);
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

void func_156(int iParam0)
{
	iVar0 = func_326(iParam0, 1);
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

void func_157()
{
	func_156(-939420910);
	func_156(-1187950766);
	func_156(356365161);
	func_156(753127042);
	func_156(-2038424081);
	func_156(1884271742);
	func_156(459290420);
}

void func_158()
{
	func_156(704802028);
	func_156(588987611);
	func_156(2008888900);
	func_156(1649996811);
	func_156(227918160);
	func_156(168171957);
	func_156(1193080109);
	func_156(-491981251);
	func_156(-639037538);
	func_156(-618620429);
}

bool func_159(int iParam0)
{
	iVar0 = func_326(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_160(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_163() - fParam1);
	func_327(uParam0, 1);
	func_328(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_161(var uParam0)
{
	return func_329(*uParam0, 1);
}

bool func_162(var uParam0)
{
	return func_329(*uParam0, 2);
}

float func_163()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_164(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_167(iParam0);
}

bool func_165(int iParam0)
{
	iVar0 = func_164(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_166(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_167(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_168(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_44() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_169(int iParam0)
{
	switch (func_112(iParam0))
	{
		case 1:
			iVar0 = func_92(iParam0);
			return func_331(iVar0);
		case 8:
			iVar1 = func_92(iParam0);
			if (func_93((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_332(iVar1);
			}
			break;
	}
	return -1;
}

void func_170(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_44() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_333(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_334();
		Global_1898077->f_9 = func_335(Global_1894899->f_2);
		func_336(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_171()
{
	if (!func_58((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_58((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_58((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_58((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_58((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_58((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_58((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_172(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_337(iParam0, iParam1);
}

int func_173(bool bParam0)
{
	if (!bParam0 && func_159(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_174(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_175(int iParam0, bool bParam1)
{
	if (func_44() != -1)
	{
		return;
	}
	if (func_8(0) != iParam0)
	{
		return;
	}
	if (func_338(iParam0))
	{
		if (bParam1)
		{
			func_339(-525676072);
		}
		else
		{
			func_340(-525676072);
		}
	}
}

int func_176(int iParam0)
{
	return func_342(func_341(iParam0));
}

void func_177(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_343((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_179(int iParam0)
{
	if (func_344(iParam0, &iVar1, &iVar0))
	{
		if (func_345(iVar1, iVar0, 1))
		{
			func_346(iVar1, iVar0);
		}
	}
}

int func_180(int iParam0)
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

int func_181(bool bParam0, bool bParam1, bool bParam2)
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

bool func_182(int iParam0, int iParam1)
{
	iVar0 = func_347(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_348(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	if (func_349(iParam0))
	{
		return true;
	}
	func_350(iParam0);
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_7))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_7);
	}
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_8))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_8);
	}
	Global_1392915->f_121[iVar0]->f_1 = 0;
	func_351(iVar0);
	iVar2 = func_180((*Global_1392915)[iVar0]->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_65((*Global_1392915)[iVar0]->f_4);
		}
		if (does_blip_exist(Global_1898346[iVar2]))
		{
			remove_blip((*Global_1898346)[iVar2]);
		}
		func_352(iVar2, 0);
		return true;
	}
	return false;
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_184(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_185(int iParam0)
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

void func_186(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_232(iParam0);
	*uParam1 = func_213(iParam0);
	*uParam2 = func_353(iParam0);
}

int func_187(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_188(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_354(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

bool func_189(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

int func_190(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_49(32768))
	{
		return 0;
	}
	iVar0 = func_44();
	if ((bParam4 && func_355(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_355(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_137())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_58((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_357()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_58((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_357()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_58((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_188(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_77((*Global_1835011)[iParam0], 2))
			{
				if (func_354(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_358(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_233(iParam0));
				}
			}
			else if (func_354(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_358(iParam0), func_359(iParam0), func_360(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_361(iParam0), func_362(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_354(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_363(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_358(iParam0));
				bVar2 = true;
			}
		}
		else if (func_364(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_233(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_233(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_233(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_354(iParam0))
			{
				func_352(iParam2, 4194304);
			}
			else
			{
				func_193(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_27, 63, iParam0);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_27, (*Global_1835011)[iParam0]->f_26, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_27, &((*Global_1835011)[iParam0]->f_39));
		}
		if (!func_355(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_364(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_365(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_364(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_77((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_209(Global_40.f_4283);
	if (func_210(iVar4) && func_211((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_366(iVar4);
	}
	if (func_367(iParam0, bVar5, iVar4))
	{
		func_368((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_369(579))
	{
		func_370(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_355(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_355(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_357()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_371(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_188(iParam0, iVar0) || (fParam1 >= (func_372(iParam0) * func_372(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_312(&cVar7, 10000, 0, 0, 0, 1);
			func_365(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

bool func_191(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_192(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_165((*Global_1835011)[iParam0]->f_1);
}

void func_193(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

void func_194(int iParam0)
{
	set_this_script_can_remove_blips_created_by_any_script(true);
	if (does_blip_exist(Global_1392626[iParam0]))
	{
		func_373(&((*Global_1392626)[iParam0]->f_10));
		remove_blip((*Global_1392626)[iParam0]);
	}
	if (does_blip_exist((*Global_1392626)[iParam0]->f_1))
	{
		func_373(&((*Global_1392626)[iParam0]->f_10));
		remove_blip(&((*Global_1392626)[iParam0]->f_1));
	}
}

void func_195(int iParam0)
{
	if (_does_volume_exist((*Global_1392626)[iParam0]->f_30))
	{
		func_343((*Global_1392626)[iParam0]->f_30);
		_delete_volume((*Global_1392626)[iParam0]->f_30);
	}
	if (_does_volume_exist((*Global_1392626)[iParam0]->f_31))
	{
		func_343((*Global_1392626)[iParam0]->f_31);
		_delete_volume((*Global_1392626)[iParam0]->f_31);
	}
	if (iParam0 == 4)
	{
		func_374(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_196(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_200(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_201(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	func_375(&((*Global_1392626)[iParam0]->f_10), iParam1);
	func_375(&((*Global_1392626)[iParam0]->f_10), 2);
	func_199(&((*Global_1392626)[iParam0]->f_8), 1);
}

void func_202(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_376(iParam0, 4))
	{
		bVar0 = does_blip_exist(Global_1392626[iParam0]);
	}
	else
	{
		bVar0 = does_blip_exist((*Global_1392626)[iParam0]->f_1);
	}
	if ((*Global_1392626)[iParam0]->f_9 & 4096 != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (func_376(iParam0, 4))
	{
		if (!bVar0)
		{
			func_377(iParam0, (*Global_1392626)[iParam0], (*Global_1392626)[iParam0]->f_24);
		}
		_blip_set_modifier(Global_1392626[iParam0], 724623647);
	}
	else
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bVar0)
		{
			remove_blip(&((*Global_1392626)[iParam0]->f_1));
		}
		func_377(iParam0, &((*Global_1392626)[iParam0]->f_1), (*Global_1392626)[iParam0]->f_27);
		_blip_set_modifier((*Global_1392626)[iParam0]->f_1, 724623647);
	}
	func_378(&((*Global_1392626)[iParam0]->f_9), 4096);
}

void func_203(var uParam0)
{
	*uParam0 = 0;
}

void func_204(int iParam0)
{
	if (func_379(179) || func_379(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_22(1);
			}
		}
	}
	if (func_380(179))
	{
		func_381(179);
	}
	if (func_380(180))
	{
		func_381(180);
	}
}

bool func_205(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_67(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_206(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_207(int iParam0, int iParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	func_382(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_382(&((*Global_1347702)[iParam0]->f_14), 2);
	func_383(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_86(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_62(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_208(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_204(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_385(iParam0, func_384(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_385(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_385(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_386(&((*Global_1347702)[iParam0]->f_13), 4096);
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_210(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_211(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_212(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_0xbd62d98799a3daf0(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_213(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_214()
{
	if (func_44() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_215(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_216(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_387();
	}
	if (func_44() == -1)
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

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_218(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

char* func_219()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_220(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_221(int iParam0)
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

void func_222()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_223(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_388(uParam0, iParam3, iParam2) && !func_389(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_218(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_390(1108822547);
		}
		else
		{
			func_391(1108822547);
		}
	}
	func_392(uParam0, 0, 0);
	func_393(iParam5);
	return true;
}

void func_224()
{
	func_394(&(Global_1946804->f_2776));
	func_220(32768);
	func_395(1108822547, 8, 6);
}

void func_225(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_214()) || bParam5)
		{
			func_396();
		}
	}
	if (func_44() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_397(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_94(Global_40.f_7729);
				Global_1946804->f_1378 = func_94(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_103(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_398(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_399(0, 1);
	}
	func_393(0);
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_400(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_401(Var0);
}

void func_227(int iParam0)
{
	if (func_402(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_403(Var0);
}

void func_228(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_44() != -1;
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
			func_400(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_404(iParam1, 29, bVar4, 1, 0);
			func_404(iParam1, 31, bVar4, 1, 0);
			func_404(iParam1, 30, bVar4, 1, 0);
			func_404(iParam1, 22, bVar4, 1, 0);
			func_404(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_218(32768) && func_405(1108822547, 8)) && func_406(10, iParam3))
	{
		func_407(iParam1, 0, 1);
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
			iVar3 = func_408(iVar1, 1);
			if (func_405(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_406(iVar1, iParam3))
				{
				}
				else if ((func_405(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_405(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_404(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_409(iVar3, 1, 6);
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
								func_404(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_405(iVar3, 1))
							{
								func_395(iVar3, 1, 6);
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

void func_229(bool bParam0, bool bParam1)
{
	if (func_44() == -1)
	{
		func_410();
	}
	else
	{
		return;
	}
	func_411();
	Global_40.f_9.f_14 = func_79();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_412())
		{
			func_413(Global_1310720->f_1);
		}
		else if (func_414() == func_111(Global_36, 1) && func_415() != 2)
		{
			func_413(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_413(Global_36);
		}
		func_416(Global_36, &vVar0, &uVar4);
		if (!func_412())
		{
			if (func_417(vVar0, Global_36) < func_417(Global_40.f_9.f_7, Global_36))
			{
				func_413(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_111(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_416(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_14(Global_1935630, 8192);
	}
	func_418();
}

int func_230()
{
	return Global_1894899->f_2;
}

int func_231(vector3 vParam0, bool bParam3)
{
	iVar0 = func_419(vParam0);
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

int func_232(int iParam0)
{
	return iParam0 & 31;
}

Vector3 func_233(int iParam0)
{
	if (func_354(iParam0))
	{
		return func_358(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_234(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_420((*Global_1347702)[iParam0]->f_15) != 0)
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

bool func_235()
{
	return (func_421() || func_54());
}

void func_236(bool bParam0)
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
	func_422(0f);
	Global_1935436->f_11 = 1;
	if (func_423())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_424();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_237(var uParam0)
{
	uParam0->f_93 = 1f;
	uParam0->f_94 = 0f;
	uParam0->f_95 = 1f;
}

void func_238(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

Vector3 func_239(var uParam0)
{
	return uParam0->f_11;
}

bool func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_241(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

void func_242(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
}

void func_243(var uParam0, int iParam1)
{
	if (is_entity_dead(iParam1))
	{
	}
	uParam0->f_15 = iParam1;
}

bool func_244(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_245(var uParam0, int iParam1)
{
	if (is_entity_dead(iParam1))
	{
	}
	uParam0->f_17 = iParam1;
}

var func_246(var uParam0)
{
	return uParam0->f_14;
}

bool func_247()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_248(var uParam0)
{
	bVar0 = _0x7907969497ea92f5(uParam0->f_142);
	if (!bVar0)
	{
		uParam0->f_142 = _0xca56dd6ab7a39f64(get_hash_key("benchmark_poi_data"));
	}
	bVar1 = _0x603ac35fd4602c76(uParam0->f_142);
	if (!bVar1)
	{
		return false;
	}
	func_425(uParam0);
	func_124(uParam0, -1);
	uParam0->f_531 = 0;
	uParam0->f_142.f_2 = 1;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		func_426(uParam0, iVar2);
		if (func_427(uParam0, 0))
		{
			func_124(uParam0, func_119(uParam0) + 1);
			func_428(uParam0, 2, uParam0->f_147[func_119(uParam0)]);
			func_428(uParam0, 3, &(uParam0->f_147[func_119(uParam0)]->f_3));
			func_428(uParam0, 4, &(uParam0->f_147[func_119(uParam0)]->f_6));
			func_428(uParam0, 5, &(uParam0->f_147[func_119(uParam0)]->f_9));
			func_429(uParam0, 6, &(uParam0->f_147[func_119(uParam0)]->f_12));
			func_430(uParam0, 7, &(uParam0->f_147[func_119(uParam0)]->f_14));
			func_430(uParam0, 8, &(uParam0->f_147[func_119(uParam0)]->f_15));
			func_430(uParam0, 9, &(uParam0->f_147[func_119(uParam0)]->f_16));
			func_430(uParam0, 10, &(uParam0->f_147[func_119(uParam0)]->f_17));
			if (func_431(uParam0, 11, &uVar3))
			{
				uParam0->f_147[func_119(uParam0)]->f_13 = get_hash_key(&uVar3);
			}
			else
			{
				uParam0->f_147[func_119(uParam0)]->f_13 = 1632247697;
			}
			func_429(uParam0, 12, &(uParam0->f_147[func_119(uParam0)]->f_18));
			uParam0->f_531++;
		}
		iVar2++;
	}
	_datafile_unload(uParam0->f_142);
	func_432(uParam0, func_119(uParam0));
	func_124(uParam0, 0);
	return true;
}

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		uParam0->f_96 = 1;
	}
	else
	{
		uParam0->f_96 = iParam1;
	}
}

void func_250(var uParam0, int iParam1)
{
	uParam0->f_98 = iParam1;
}

void func_251(var uParam0)
{
	if (func_125(uParam0) == -1)
	{
		func_124(uParam0, 0);
	}
	else
	{
		func_124(uParam0, uParam0->f_98);
	}
}

Vector3 func_252(var uParam0)
{
	return *uParam0->f_147[func_119(uParam0)];
}

Vector3 func_253(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_3;
}

bool func_254(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_433(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_255(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

var func_256(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_434(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_257(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;
	if (func_44() != -1)
	{
		func_435(!bParam5);
		func_436(!bParam6);
		func_437(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		func_439(Var0, func_438(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!does_entity_exist(Global_35) || Global_1935630->f_12)
		{
			return;
		}
		do_screen_fade_out(0);
		func_138(1);
		iVar16 = func_111(vParam1, 1);
		if (bParam8)
		{
			if ((func_440(iVar16) == 1 || func_440(iVar16) == 2) || iVar16 == func_209(Global_40.f_4283))
			{
				func_441(0);
			}
		}
		if (!bParam7)
		{
			clear_ped_tasks_immediately(Global_35, true, true);
			if (is_ped_on_mount(Global_35))
			{
				_remove_ped_from_mount(Global_35, true, false);
			}
		}
		if (bParam11)
		{
			iVar17 = create_itemset(true);
			bVar18 = false;
			find_all_attached_carriable_entities(Global_35, iVar17);
			iVar19 = 0;
			iVar19 = 0;
			while (iVar19 < get_itemset_size(iVar17))
			{
				iVar20 = get_indexed_item_in_itemset(iVar19, iVar17);
				iVar21 = _get_entity_from_item(iVar20);
				if (does_entity_exist(iVar21))
				{
					_0xed00d72f81cf7278(iVar21, 0, 1);
					if (!is_entity_a_mission_entity(iVar21))
					{
						set_entity_as_mission_entity(iVar21, true, true);
					}
					delete_entity(&iVar21);
					bVar18 = true;
				}
				iVar19++;
			}
			if (bVar18 && !is_entity_dead(Global_35))
			{
				clear_ped_tasks_immediately(Global_35, false, true);
				_0x2208438012482a1a(Global_35, false, false);
			}
			destroy_itemset(iVar17);
		}
		start_player_teleport(player_id(), vParam1, fParam4, true, true, false, false);
	}
}

bool func_258(var uParam0)
{
	if (func_44() != -1)
	{
		return true;
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = get_game_timer();
	}
	iVar0 = func_111(*uParam0, 1);
	if (func_210(iVar0))
	{
		if ((*Global_1888801)[iVar0]->f_12 != 0)
		{
			_0x95423627a9ca598e((*Global_1888801)[iVar0]->f_12);
		}
	}
	if (!_has_player_teleport_finished(player_id()))
	{
		if (uParam0->f_12 + 20000 < get_game_timer())
		{
			stop_player_teleport();
		}
		return false;
	}
	if (uParam0->f_5)
	{
		func_442(1, 0);
		uParam0->f_5 = 0;
	}
	func_443();
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = get_game_timer();
	}
	if (uParam0->f_10 + 1000 > get_game_timer())
	{
		return false;
	}
	switch (func_440(iVar0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!func_444(iVar0) && uParam0->f_10 + 20000 + 1000 > get_game_timer())
			{
				return false;
			}
			if (uParam0->f_11 == 0)
			{
				uParam0->f_11 = get_game_timer();
			}
			if (uParam0->f_11 + 1000 > get_game_timer())
			{
				return false;
			}
			break;
	}
	if (uParam0->f_8 && !uParam0->f_9)
	{
		_0x4161648394262fdf(Global_36, 60f);
		_0x4759cc730f947c81();
		uParam0->f_9 = 1;
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	if (uParam0->f_6)
	{
		if (!_0xcf45df50c7775f2a())
		{
			_0x387ad749e3b69b70(*uParam0, get_gameplay_cam_rot(2), 500f, 4);
			return false;
		}
		if (!_0x0909f71b5c070797() && uParam0->f_11 + 20000 + 1000 > get_game_timer())
		{
			if (!is_ped_injured(Global_35))
			{
				if (vdist2(get_entity_coords(Global_35, true, false), *uParam0) > 2500f)
				{
				}
			}
			return false;
		}
		_0x5a8b01199c3e79c3();
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_13 == 0)
		{
			uParam0->f_13 = get_game_timer();
		}
		if (uParam0->f_13 + 20000 > get_game_timer())
		{
			if (!func_445())
			{
				return false;
			}
		}
	}
	if (uParam0->f_8 && !_0x0ee3f0d7feccc54f())
	{
		return false;
	}
	Global_36 = { *uParam0 };
	if (uParam0->f_4)
	{
		do_screen_fade_in(500);
	}
	return true;
}

void func_259()
{
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	populate_now();
}

var func_260(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_13;
}

var func_261(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_14;
}

var func_262(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_15;
}

Vector3 func_263(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_6;
}

var func_264(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_12;
}

Vector3 func_265(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_9;
}

int func_266(var uParam0)
{
	return floor((uParam0->f_147[func_119(uParam0)]->f_18 * 1000f));
}

float func_267(var uParam0)
{
	return func_46(&(uParam0->f_127));
}

void func_268(var uParam0)
{
	if (!func_37(uParam0, 2))
	{
		func_10(uParam0, 2);
		_start_benchmark_recording();
	}
}

float func_269(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_18;
}

int func_270(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_16;
}

int func_271(var uParam0)
{
	return uParam0->f_147[func_119(uParam0)]->f_17;
}

int func_272(int iParam0, int iParam1, float fParam2, var uParam3)
{
	switch (uParam3->f_3)
	{
		case 0:
			*uParam3 = func_79();
			iVar4 = func_79();
			func_294(&iVar4, iParam0);
			func_295(&iVar4, iParam1);
			func_296(&iVar4, 0);
			if (func_446(*uParam3, iVar4, 1))
			{
				func_447(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_448(*uParam3, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam3->f_11 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			uParam3->f_3++;
			break;
		case 1:
			if (fParam2 >= 0.99f || fParam2 == -1f)
			{
				iVar4 = *uParam3;
				func_447(&iVar4, uParam3->f_11, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_449(iVar4), func_450(iVar4), func_451(iVar4));
				return 1;
			}
			iVar3 = round((IntToFloat(uParam3->f_11) * fParam2));
			iVar4 = *uParam3;
			func_447(&iVar4, iVar3, 0, 0, 0, 0, 0, 0);
			iVar8 = func_79();
			if (func_446(iVar4, iVar8, 1))
			{
				set_clock_time(func_449(iVar4), func_450(iVar4), func_451(iVar4));
			}
			else
			{
				set_clock_time(func_449(iVar8), func_450(iVar8), func_451(iVar8));
			}
			if (func_452(iVar4) != get_clock_day_of_month())
			{
				set_clock_date(func_452(iVar4), func_453(iVar4), func_454(iVar4));
			}
			break;
	}
	return 0;
}

void func_273(var uParam0, int iParam1)
{
	uParam0->f_6 = (uParam0->f_6 - (uParam0->f_6 && iParam1));
}

int func_274(var uParam0)
{
	return uParam0->f_3;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1448273283;
		default:
			break;
	}
	return -1448273283;
}

Vector3 func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2797.595f, -1237.667f, 46.519f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -40.5f;
		default:
			break;
	}
	return 166.4f;
}

int func_279(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_455(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "benchmark_run_to_horse";
		case 1:
			return "benchmark_horse_escape";
		case 2:
			return "benchmark_policeWagon";
		case 3:
			return "benchmark_policeReinforcements";
		default:
			break;
	}
	return "FAIL INVALID WAYPOINT";
}

Vector3 func_281()
{
	return 2805.45f, -1210.216f, 46.51009f;
}

float func_282(int iParam0, int iParam1)
{
	return func_456(iParam0, iParam1, 1, 1);
}

int func_283(var uParam0)
{
	return uParam0->f_1;
}

void func_284(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_457(iParam0))
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

void func_285(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	func_45(&(uParam0->f_127));
}

void func_286(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
	}
}

Vector3 func_287()
{
	return 2861.704f, -1201.938f, 48.58881f;
}

Vector3 func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2860.608f, -1195.293f, 47.98614f;
		case 1:
			return 2825.846f, -1230.593f, 46.60028f;
		case 2:
			return 2739.997f, -1252.35f, 48.77728f;
		case 3:
			return 2601.232f, -1295.523f, 51.26817f;
		case 4:
			return 2595.22f, -1150.614f, 52.32635f;
		case 5:
			return 2487.729f, -1154.544f, 48.11155f;
		case 6:
			return 2372.834f, -1151.376f, 44.42921f;
		case 7:
			return 2307.862f, -1083.237f, 40.44345f;
		default:
			break;
	}
	return 2860.608f, -1195.293f, 47.98614f;
}

float func_289(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_290(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		iVar1 = iVar0;
		uParam0->f_43[iVar0] = _create_volume_box(func_299(iVar1), func_458(iVar1), func_459(iVar1));
		_0x18262cafebb5fbe1(&(uParam0->f_43[iVar0]), 10208, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(uParam0->f_43[iVar0]), 10208, 0, 0, -1, -1, 0);
		if (iVar1 < 6)
		{
			_0x19c7567d2f2287d6(&(uParam0->f_43[iVar0]), 16);
		}
		uParam0->f_53[iVar0] = _0x4c39c95ae5db1329(&(uParam0->f_43[iVar0]), false, 15);
		_0x2fcd528a397e5c88(&(uParam0->f_43[iVar0]), 1048576);
		iVar0++;
	}
}

int func_291(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_460(iParam0, 1))
	{
		return 0;
	}
	if (func_146(func_145(iParam0)))
	{
		iVar1 = func_147(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_29(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_319(iParam0, 1);
	func_461(iParam0);
	if (bParam3)
	{
		func_319(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_292(var uParam0)
{
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_35, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_36 = create_object(1477581656, vVar0, true, true, false, false, true);
	freeze_entity_position(uParam0->f_36, true);
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_35, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_37 = create_object(1477581656, vVar0, true, true, false, false, true);
	freeze_entity_position(uParam0->f_37, true);
	uParam0->f_38 = create_scenario_point_attached_to_entity(uParam0->f_35, -507776464, 0f, 0f, 0f, 0f, 0, 0, 1);
	_0x8360c47380b6f351(uParam0->f_38, uParam0->f_36, "OOXO", 1);
	_0x8360c47380b6f351(uParam0->f_38, uParam0->f_37, "OXOO", 1);
	iVar3[0] = _get_scenario_point_entity(uParam0->f_38, "OXOO");
	iVar3[1] = _get_scenario_point_entity(uParam0->f_38, "OOXO");
	if (does_entity_exist(&(iVar3[0])))
	{
		freeze_entity_position(&(iVar3[0]), true);
		set_entity_collision(&(iVar3[0]), true, false);
	}
	if (does_entity_exist(&(iVar3[1])))
	{
		freeze_entity_position(&(iVar3[1]), true);
		set_entity_collision(&(iVar3[1]), true, false);
	}
	set_anim_scene_origin(uParam0->f_32, get_entity_coords(uParam0->f_35, true, false), get_entity_rotation(uParam0->f_35, 2), 2);
	set_anim_scene_entity(uParam0->f_32, "CLERK", uParam0->f_31, 0);
	set_anim_scene_entity(uParam0->f_32, "REGISTER", uParam0->f_35, 0);
	set_anim_scene_entity(uParam0->f_32, "OOXO", uParam0->f_36, 0);
	set_anim_scene_entity(uParam0->f_32, "OXOO", uParam0->f_37, 0);
	start_anim_scene(uParam0->f_32);
}

int func_293(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_457(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_457(iVar4) && iVar4 != iVar0)
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
	if (func_44() == -1 && !func_462(iVar0))
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
				if (func_462(-183018591))
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
		if (iParam0 != Global_35 && func_457(iVar0))
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
		func_463(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_464(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_465(iVar0))
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

void func_294(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_295(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_296(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_297(int iParam0)
{
	set_clock_time(func_449(iParam0), func_450(iParam0), func_451(iParam0));
	set_clock_date(func_452(iParam0), func_453(iParam0), func_454(iParam0));
}

void func_298(var uParam0)
{
	func_45(&(uParam0->f_127));
}

Vector3 func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2844.076f, -1217.305f, 47.84169f;
		case 1:
			return 2840.9f, -1223.123f, 47.6618f;
		case 2:
			return 2834.189f, -1226.612f, 47.66534f;
		case 3:
			return 2825.275f, -1226.355f, 48.51988f;
		case 4:
			return 2843.09f, -1221.03f, 46.63f;
		case 5:
			return 2845.951f, -1206.694f, 46.85182f;
		case 6:
			return 2800.25f, -1236.116f, 48.10294f;
		case 7:
			return 2467.602f, -1129.734f, 55.35582f;
		case 8:
			return 2348.646f, -1114.497f, 53.48754f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_300(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_417(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_301(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0) && !does_entity_exist(_get_rider_of_mount(iParam1, false)))
			{
				set_entity_invincible(iParam1, bParam2);
				if (get_script_task_status(iParam0, 1868526510, true) != 1)
				{
					task_mount_animal(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_302(int iParam0, bool bParam1, bool bParam2)
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

int func_303(var uParam0)
{
	switch (func_466(uParam0))
	{
		case 0:
			func_467(uParam0, 1);
			break;
		case 1:
			waypoint_recording_get_coord(func_280(2), 0, &vVar0);
			if (!does_entity_exist(uParam0->f_63))
			{
				if (func_300(uParam0->f_16, vVar0, 125f, 0, 1))
				{
					waypoint_recording_get_coord(func_280(2), 5, &vVar3);
					uParam0->f_63 = create_vehicle(-1308375373, vVar0, func_289(vVar0, vVar3, 1), true, true, false, false);
					set_vehicle_on_ground_properly(uParam0->f_63, 0f);
				}
			}
			else
			{
				func_467(uParam0, 2);
			}
			break;
		case 2:
			if (!does_entity_exist(uParam0->f_65))
			{
				uParam0->f_65 = func_279(-1448273283, 2645.527f, -1130.605f, 50.23997f, 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else if (!does_entity_exist(uParam0->f_66))
			{
				uParam0->f_66 = func_279(-1448273283, 2645.527f, -1132.605f, 50.23997f, 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				func_467(uParam0, 3);
			}
			break;
		case 3:
			if (does_entity_exist(uParam0->f_63))
			{
				set_vehicle_on_ground_properly(uParam0->f_63, 0f);
				func_467(uParam0, 4);
			}
			break;
		case 4:
			if ((does_entity_exist(uParam0->f_63) && does_entity_exist(uParam0->f_65)) && does_entity_exist(uParam0->f_66))
			{
				if (!func_468(&(uParam0->f_63)))
				{
					return 0;
				}
				_0xa19447d83294e29f(uParam0->f_63, &iVar6, &iVar7);
				if (iVar7 != iVar6)
				{
					return 0;
				}
				if (iVar7 <= 2)
				{
					iVar8 = 0;
					while (iVar8 <= (iVar7 - 1))
					{
						uParam0->f_71[iVar8] = func_469(uParam0->f_63, iVar8);
						set_entity_invincible(&(uParam0->f_71[iVar8]), true);
						set_entity_no_collision_entity(&(uParam0->f_71[iVar8]), uParam0->f_18, false);
						iVar8++;
					}
				}
				set_entity_no_collision_entity(uParam0->f_63, uParam0->f_18, false);
				func_470(uParam0->f_63);
				set_ped_into_vehicle(uParam0->f_65, uParam0->f_63, -1);
				set_ped_into_vehicle(uParam0->f_66, uParam0->f_63, 0);
				set_blocking_of_non_temporary_events(uParam0->f_65, true);
				set_blocking_of_non_temporary_events(uParam0->f_66, true);
				set_entity_invincible(uParam0->f_65, true);
				set_entity_invincible(uParam0->f_66, true);
				set_ped_relationship_group_hash(uParam0->f_65, 1269650476);
				set_ped_relationship_group_hash(uParam0->f_66, 1269650476);
				set_ped_combat_attributes(uParam0->f_66, 111, true);
				set_ped_combat_attributes(uParam0->f_66, 57, true);
				func_467(uParam0, 5);
			}
			break;
		case 5:
			if ((does_entity_exist(uParam0->f_63) && does_entity_exist(uParam0->f_65)) && does_entity_exist(uParam0->f_66))
			{
				if (is_ped_in_vehicle(uParam0->f_65, uParam0->f_63, false) && is_ped_in_vehicle(uParam0->f_66, uParam0->f_63, false))
				{
					func_467(uParam0, 6);
				}
			}
			break;
		case 6:
			if (func_471(uParam0->f_16, uParam0->f_41, 1, 0))
			{
				set_entity_coords(Global_35, func_288(3), true, false, true, true);
				_task_vehicle_follow_waypoint_recording_2(uParam0->f_63, func_280(2), 0, 0, 0, -1, -1082130432, 0, 1073741824, 0);
				func_467(uParam0, 7);
			}
			break;
		case 7:
			if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_63, func_280(2)))
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_63, 11f);
			}
			if (func_456(uParam0->f_65, uParam0->f_16, 1, 1) < 30f)
			{
				if (does_entity_exist(uParam0->f_66))
				{
					task_combat_ped(uParam0->f_66, uParam0->f_16, 16777216, 0);
					set_ped_combat_attributes(uParam0->f_66, 30, true);
				}
				set_gameplay_entity_hint(uParam0->f_63, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
				func_45(&(uParam0->f_107));
				waypoint_playback_start_shooting_at_ped(uParam0->f_16, uParam0->f_66, 1, -957453492, -1082130432);
				func_467(uParam0, 8);
			}
			break;
		case 8:
			if (func_472(&(uParam0->f_107)) > 8f)
			{
				func_473(&(uParam0->f_107));
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
			}
			if (func_475(uParam0->f_65, func_474(), 1) < 30f)
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_63, 0f);
				func_467(uParam0, 9);
			}
			else
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_63, 11f);
			}
			break;
		case 9:
			vehicle_waypoint_playback_override_speed(uParam0->f_63, 0f);
			if (does_entity_exist(uParam0->f_63) && get_entity_speed(uParam0->f_63) < 0.4f)
			{
				task_leave_any_vehicle(uParam0->f_65, 0, 64);
				func_467(uParam0, 10);
			}
			break;
		case 10:
			if (!is_entity_dead(uParam0->f_65) && !is_ped_in_any_vehicle(uParam0->f_65, false))
			{
				func_467(uParam0, 13);
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			if (!is_entity_dead(uParam0->f_66))
			{
				set_ped_sphere_defensive_area(uParam0->f_65, 2522.863f, -1125.193f, 49.02803f, 2f, 0, 0, 0);
			}
			if (!is_entity_dead(uParam0->f_65))
			{
				task_combat_ped(uParam0->f_65, uParam0->f_16, 0, 0);
				set_ped_sphere_defensive_area(uParam0->f_65, 2528.408f, -1137.552f, 48.80065f, 2f, 0, 0, 0);
				func_467(uParam0, 14);
			}
			break;
		case 14:
			if (is_entity_dead(uParam0->f_65) && is_entity_dead(uParam0->f_66))
			{
				func_467(uParam0, 15);
			}
			break;
		case 15:
			return 1;
	}
	return 0;
}

int func_304(var uParam0)
{
	switch (func_476(uParam0))
	{
		case 0:
			if (func_477(uParam0) > 1)
			{
				func_478(uParam0, 1);
			}
			break;
		case 1:
			waypoint_recording_get_coord(func_280(3), 7, &vVar0);
			if (!does_entity_exist(uParam0->f_64))
			{
				if (func_300(uParam0->f_16, vVar0, 125f, 0, 1))
				{
					waypoint_recording_get_coord(func_280(3), 8, &vVar3);
					uParam0->f_64 = create_vehicle(-1308375373, vVar0, func_289(vVar0, vVar3, 1), true, true, false, false);
					set_vehicle_on_ground_properly(uParam0->f_64, 0f);
				}
			}
			else
			{
				func_478(uParam0, 2);
			}
			break;
		case 2:
			if (!does_entity_exist(uParam0->f_69))
			{
				uParam0->f_69 = func_279(-1448273283, 2507.447f, -1265.594f, 48.22205f, 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else if (!does_entity_exist(uParam0->f_70))
			{
				uParam0->f_70 = func_279(-1448273283, 2508.36f, -1254.875f, 48.18809f, 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				func_478(uParam0, 3);
			}
			break;
		case 3:
			if (does_entity_exist(uParam0->f_64))
			{
				set_vehicle_on_ground_properly(uParam0->f_64, 0f);
				func_478(uParam0, 4);
			}
			break;
		case 4:
			if ((does_entity_exist(uParam0->f_64) && does_entity_exist(uParam0->f_69)) && does_entity_exist(uParam0->f_70))
			{
				if (!func_468(&(uParam0->f_64)))
				{
					return 0;
				}
				_0xa19447d83294e29f(uParam0->f_64, &iVar6, &iVar7);
				if (iVar7 != iVar6)
				{
					return 0;
				}
				if (iVar7 <= 2)
				{
					iVar8 = 0;
					while (iVar8 <= (iVar7 - 1))
					{
						uParam0->f_74[iVar8] = func_469(uParam0->f_64, iVar8);
						iVar8++;
					}
				}
				set_ped_into_vehicle(uParam0->f_69, uParam0->f_64, -1);
				set_ped_into_vehicle(uParam0->f_70, uParam0->f_64, 0);
				set_blocking_of_non_temporary_events(uParam0->f_69, true);
				set_blocking_of_non_temporary_events(uParam0->f_70, true);
				set_ped_combat_attributes(uParam0->f_69, 84, false);
				set_ped_combat_attributes(uParam0->f_70, 84, false);
				set_ped_combat_attributes(uParam0->f_69, 71, false);
				set_ped_combat_attributes(uParam0->f_70, 71, false);
				set_ped_combat_attributes(uParam0->f_69, 11, true);
				set_ped_combat_attributes(uParam0->f_70, 11, true);
				set_ped_accuracy(uParam0->f_69, 0);
				set_ped_accuracy(uParam0->f_70, 0);
				func_478(uParam0, 5);
			}
			break;
		case 5:
			if (func_477(uParam0) > 4)
			{
				func_478(uParam0, 6);
			}
			break;
		case 6:
			task_vehicle_follow_waypoint_recording(uParam0->f_69, uParam0->f_64, func_280(3), 524295, 0, 25610, -1, -1082130432, 0, 1073741824, 0);
			func_478(uParam0, 7);
			break;
		case 7:
			if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_64, func_280(3)))
			{
				if (func_475(uParam0->f_64, 2490.595f, -1146.68f, 48.30769f, 1) > 10f)
				{
					vehicle_waypoint_playback_override_speed(uParam0->f_64, 10f);
				}
				else
				{
					vehicle_waypoint_playback_override_speed(uParam0->f_64, 0f);
					func_478(uParam0, 8);
				}
			}
			else if (func_475(uParam0->f_64, 2490.595f, -1146.68f, 48.30769f, 1) < 10f)
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_64, 0f);
				func_478(uParam0, 8);
			}
			break;
		case 8:
			if (!is_entity_dead(uParam0->f_69))
			{
				task_leave_any_vehicle(uParam0->f_69, 0, 0);
				set_ped_sphere_defensive_area(uParam0->f_69, 2490.43f, -1147.101f, 48.29685f, 4f, 0, 0, 0);
			}
			if (!is_entity_dead(uParam0->f_70))
			{
				task_leave_any_vehicle(uParam0->f_70, 0, 0);
				set_ped_sphere_defensive_area(uParam0->f_70, 2490.43f, -1147.101f, 48.29685f, 4f, 0, 0, 0);
			}
			func_478(uParam0, 9);
			break;
		case 9:
			if (!is_entity_dead(uParam0->f_69))
			{
				set_ped_relationship_group_hash(uParam0->f_69, 1269650476);
				task_combat_ped(uParam0->f_69, uParam0->f_16, 0, 0);
			}
			if (!is_entity_dead(uParam0->f_70))
			{
				set_ped_relationship_group_hash(uParam0->f_70, 1269650476);
				task_combat_ped(uParam0->f_70, uParam0->f_16, 0, 0);
			}
			func_478(uParam0, 10);
			break;
		case 10:
			if (is_explosion_in_sphere(25, func_479(), 10f))
			{
				func_45(&(uParam0->f_110));
				func_478(uParam0, 11);
			}
			break;
		case 11:
			if (func_472(&(uParam0->f_110)) > 1.5f)
			{
				if (!is_entity_dead(uParam0->f_69))
				{
					func_302(uParam0->f_69, 1, 0);
				}
				if (!is_entity_dead(uParam0->f_70))
				{
					func_302(uParam0->f_70, 1, 0);
				}
				func_478(uParam0, 12);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

bool func_305(var uParam0)
{
	switch (func_477(uParam0))
	{
		case 0:
			func_480(uParam0);
			if (func_466(uParam0) > 6)
			{
				func_45(&(uParam0->f_104));
				set_entity_coords(Global_35, func_288(4), true, false, true, true);
				func_481(uParam0, 1);
			}
			break;
		case 1:
			if (func_475(uParam0->f_16, func_474(), 1) < 15f)
			{
				task_follow_nav_mesh_to_coord(uParam0->f_16, func_474(), 2.5f, 20000, 0.25f, 0, 40000f);
				func_481(uParam0, 2);
			}
			else
			{
				func_480(uParam0);
			}
			break;
		case 2:
			if (func_475(uParam0->f_16, func_474(), 1) < 3f)
			{
				set_entity_coords(Global_35, func_288(5), true, false, true, true);
				set_blocking_of_non_temporary_events(uParam0->f_18, false);
				task_dismount_animal(uParam0->f_16, 262144, 0, 0, 0, 0);
				func_481(uParam0, 3);
			}
			break;
		case 3:
			set_gameplay_entity_hint(uParam0->f_65, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
			if (!is_ped_on_mount(uParam0->f_16))
			{
				set_entity_invincible(uParam0->f_65, false);
				set_entity_invincible(uParam0->f_66, false);
				set_ped_config_flag(uParam0->f_65, 138, true);
				set_ped_config_flag(uParam0->f_66, 138, true);
				set_ped_accuracy(uParam0->f_16, 100);
				if (!is_entity_dead(uParam0->f_18))
				{
					_task_smart_flee_style_ped(uParam0->f_18, uParam0->f_16, 3, 0, -1082130432, -1, 0);
				}
				task_put_ped_directly_into_cover(uParam0->f_16, 2514.341f, -1134.775f, 48.86838f, -1, 0, 0f, 0, 1, uParam0->f_99, 1, 0, 0);
				_0x2208438012482a1a(uParam0->f_16, false, false);
				func_481(uParam0, 4);
			}
			break;
		case 4:
			if (func_466(uParam0) < 10)
			{
				return false;
			}
			task_combat_hated_targets(uParam0->f_16, -1f);
			_set_ped_infinite_ammo_clip(uParam0->f_16, true);
			set_ped_sphere_defensive_area(uParam0->f_16, func_482(0), 2f, 1, 0, 0);
			_0x1a7a802b2301edc0(uParam0->f_16);
			func_481(uParam0, 5);
			break;
		case 5:
			if (is_entity_dead(uParam0->f_66))
			{
				func_481(uParam0, 6);
			}
			break;
		case 6:
			if (is_entity_dead(uParam0->f_65))
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				remove_ped_defensive_area(uParam0->f_16, false);
				func_45(&(uParam0->f_104));
				func_481(uParam0, 7);
			}
			break;
		case 7:
			if (func_472(&(uParam0->f_104)) > 0.5f)
			{
				Var0.f_8 = -1082130432;
				Var0 = { 2503.95f, -1147.27f, 51.41f };
				Var0.f_3 = { get_ped_bone_coords(uParam0->f_16, 21030, 0f, 0f, 0.5f) };
				Var0.f_6 = -183018591;
				Var0.f_12 = 1;
				Var0.f_13 = 1;
				_fire_single_bullet_ignore_entity_new(&Var0);
				func_45(&(uParam0->f_104));
				func_481(uParam0, 8);
			}
			break;
		case 8:
			if (!is_gameplay_hint_active())
			{
				set_gameplay_entity_hint(uParam0->f_64, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
			}
			if (func_472(&(uParam0->f_104)) > 0.1f)
			{
				task_play_anim(uParam0->f_16, "AI_COMBAT@AIM_INTRO@AMBIENT@SURPRISED@UNHOLSTERED@BASE@1H", "back_right_135", 8f, -8f, -1, 3076, 0f, false, 0, false, 0, false);
				func_45(&(uParam0->f_104));
				func_481(uParam0, 9);
			}
			break;
		case 9:
			if (!is_gameplay_hint_active())
			{
				set_gameplay_entity_hint(uParam0->f_64, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
			}
			if ((!func_483(uParam0->f_16, -2017877118) || func_472(&(uParam0->f_104)) >= 1.5f) || _get_entity_anim_current_time(uParam0->f_16, "AI_COMBAT@AIM_INTRO@AMBIENT@SURPRISED@UNHOLSTERED@BASE@1H", "back_right_135") >= 0.5f)
			{
				task_shoot_at_entity(uParam0->f_16, uParam0->f_64, -1, -957453492, 0);
				set_ped_sphere_defensive_area(uParam0->f_16, get_entity_coords(uParam0->f_64, true, false), 2f, 1, 0, 0);
				func_45(&(uParam0->f_104));
				func_481(uParam0, 10);
			}
			break;
		case 10:
			if (!is_gameplay_hint_active())
			{
				set_gameplay_entity_hint(uParam0->f_64, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
			}
			if (func_472(&(uParam0->f_104)) > 7f)
			{
				func_481(uParam0, 11);
			}
			break;
		case 11:
			func_284(-1504859554);
			_give_weapon_to_ped_2(uParam0->f_16, -1504859554, 5, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			func_481(uParam0, 12);
			break;
		case 12:
			set_current_ped_weapon(uParam0->f_16, -1504859554, false, 0, false, false);
			task_swap_weapon(uParam0->f_16, 1, 1, 0, 0);
			remove_ped_defensive_area(uParam0->f_16, false);
			func_481(uParam0, 13);
			break;
		case 13:
			get_current_ped_weapon(uParam0->f_16, &iVar20, true, 0, false);
			if (iVar20 == -1504859554)
			{
				_task_throw_projectile_2(uParam0->f_16, uParam0->f_64, 1065353216, 1);
				func_481(uParam0, 14);
			}
			break;
		case 14:
			if (get_script_task_status(uParam0->f_16, -1388855549, true) == 1)
			{
				func_45(&(uParam0->f_104));
				func_481(uParam0, 15);
			}
			break;
		case 15:
			if ((get_script_task_status(uParam0->f_16, -1388855549, true) == 8 || _0xa710dc5d25f8b942(uParam0->f_16, -1388855549) > 8f) && func_472(&(uParam0->f_104)) > 8f)
			{
				clear_ped_tasks(uParam0->f_16, 1, 0);
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				task_enter_vehicle(uParam0->f_16, uParam0->f_63, -1, -1, 2f, 131081, 0);
				func_481(uParam0, 16);
			}
			break;
		case 16:
			if (func_484(uParam0->f_16, uParam0->f_63, 0))
			{
				if (func_300(uParam0->f_64, 2490.792f, -1129.47f, 48.2879f, 7f, 0, 1))
				{
					delete_vehicle(&(uParam0->f_64));
				}
				set_entity_coords(Global_35, func_288(6), true, false, true, true);
				func_481(uParam0, 17);
			}
			break;
		case 17:
			task_vehicle_follow_waypoint_recording(uParam0->f_16, uParam0->f_63, func_280(1), 524311, 146, 26130, -1, -1082130432, 0, 1073741824, 0);
			func_45(&(uParam0->f_104));
			func_481(uParam0, 18);
			break;
		case 18:
			if (func_472(&(uParam0->f_104)) > 3f && get_entity_speed(uParam0->f_63) < 1f)
			{
				func_45(&(uParam0->f_104));
				func_481(uParam0, 17);
				return false;
			}
			if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_63, func_280(1)))
			{
				vehicle_waypoint_playback_override_speed(uParam0->f_63, 11f);
				func_481(uParam0, 19);
			}
			break;
		case 19:
			func_481(uParam0, 20);
			break;
		case 20:
			return true;
	}
	return false;
}

void func_306(var uParam0)
{
	if (does_cam_exist(uParam0->f_528))
	{
		destroy_cam(uParam0->f_528, false);
	}
	uParam0->f_528 = create_camera(180543640, true);
	add_cam_spline_node(uParam0->f_528, get_gameplay_cam_coord(), get_gameplay_cam_rot(2), 0, 3, 2);
	add_cam_spline_node(uParam0->f_528, get_gameplay_cam_coord() + Vector(10f, 0f, 0f), 0f, 0f, get_entity_heading(Global_35), 5000, 3, 2);
	set_cam_spline_phase(uParam0->f_528, 0f);
	set_cam_spline_smoothing_style(uParam0->f_528, 3);
	render_script_cams(true, true, 3000, true, false, 0);
}

void func_307(var uParam0)
{
	func_275(uParam0, 0);
	func_467(uParam0, 0);
	func_481(uParam0, 0);
	func_478(uParam0, 0);
	func_285(uParam0, 0);
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_309(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_485(iParam0, 1);
	func_486(iParam0, 1);
	func_487(iParam0, 128);
}

int func_310(var uParam0)
{
	return uParam0->f_8;
}

bool func_311(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

int func_312(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_313(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	uParam0->f_8 = iParam1;
}

bool func_314(int iParam0)
{
	if (is_screen_faded_in())
	{
		if ((get_game_timer() - Global_43615) > iParam0)
		{
			Global_43614 = get_game_timer();
		}
		Global_43615 = get_game_timer();
		if ((get_game_timer() - Global_43614) > iParam0)
		{
			if (func_488())
			{
				Global_43614 = get_game_timer();
				return true;
			}
		}
	}
	return false;
}

var func_315(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_316(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_489(sParam1));
}

bool func_317(int iParam0)
{
	return iParam0 != 0;
}

int func_318(int iParam0)
{
	iVar0 = func_147(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

void func_319(int iParam0, int iParam1)
{
	if (func_44() != -1)
	{
		return;
	}
	if (!func_140(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_320(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_321(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_322(int iParam0)
{
	return func_308(iParam0, 2);
}

void func_323()
{
	disable_script_brain_set(1);
}

void func_324()
{
}

void func_325()
{
	disable_script_brain_set(2);
}

int func_326(int iParam0, int iParam1)
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

void func_327(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_328(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_329(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_330(int iParam0)
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

int func_331(int iParam0)
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

int func_332(int iParam0)
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

void func_333(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_334()
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

int func_335(int iParam0)
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

void func_336(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_337(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_490(iParam0);
	}
	else
	{
		func_491(iParam0, iParam1);
	}
	func_492();
}

bool func_338(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	switch (func_112(iParam0))
	{
		case 1:
			switch (func_92(iParam0))
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
			switch (func_92(iParam0))
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

void func_339(int iParam0)
{
	iVar2 = func_493(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_494(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_496(func_495(iParam0), 6);
}

void func_340(int iParam0)
{
	iVar2 = func_493(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_494(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_497(func_495(iParam0), 6);
}

int func_341(int iParam0)
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

int func_342(int iParam0)
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
	func_498(iParam0, Global_1898164->f_162);
	return 1;
}

void func_343(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_499(vVar0, 0);
}

bool func_344(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = 1754500170;
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = -1600776215;
	*iParam1 = -1;
	return false;
}

bool func_345(int iParam0, int iParam1, bool bParam2)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	if (!func_501(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_502(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_346(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			func_503(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_347(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_348(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_349(int iParam0)
{
	iVar0 = func_347(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_348(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

void func_350(int iParam0)
{
	if (func_44() != -1)
	{
		return;
	}
	if (!func_504(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

int func_351(int iParam0)
{
	if (func_34(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_35(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

void func_352(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

int func_353(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_354(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_505((*Global_1835011)[iParam0]);
	}
	return false;
}

bool func_355(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_356(int iParam0)
{
	if (func_44() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_58((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_58((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

int func_357()
{
	return &Global_1898438;
}

Vector3 func_358(int iParam0)
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

Vector3 func_359(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_361(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

float func_362(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

Vector3 func_363(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_364(int iParam0)
{
	return func_191(iParam0);
}

void func_365(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_366(int iParam0)
{
	if (!func_506(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_507(iParam0))
		{
			if (vdist(Global_36, func_508(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_508(iParam0), false) <= func_509();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_509();
	}
	return func_510();
}

bool func_367(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

void func_368(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_57(iParam0))
	{
		return;
	}
	switch (func_112(iParam0))
	{
		case 1:
			iVar0 = func_92(iParam0);
			if (func_511(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_188(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_188(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_364(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_77((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_92(iParam0);
			if (func_512(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_513(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_513(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_514(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_369(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_44() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_370(int iParam0, var uParam1, bool bParam2)
{
	func_515(iParam0, &iVar0, &iVar1);
	if (!func_516(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_517(iParam0, 1024))
	{
		return;
	}
	func_518(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_371(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_372(int iParam0)
{
	return (func_362(iParam0) / 2f);
}

void func_373(var uParam0)
{
	*uParam0 = 0;
}

void func_374(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_519(vVar0, vVar3, 0f) };
	vVar9 = { func_520(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_375(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_376(int iParam0, int iParam1)
{
	if (func_200(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

void func_377(int iParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = _blip_add_for_coord(func_521(iParam0), vParam2);
	if (does_blip_exist(*uParam1))
	{
		func_522(uParam1, iParam0);
		func_523(iParam0);
		if (!func_369(163))
		{
			func_370(163, *uParam1, 0);
		}
	}
}

void func_378(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_379(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

bool func_380(int iParam0)
{
	func_515(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_381(int iParam0)
{
	func_515(iParam0, &iVar0, &iVar1);
	func_524(iVar0, iVar1);
}

void func_382(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

Vector3 func_384(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_385(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_15(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_49(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_513(iParam0);
	if (!bParam5 && func_525(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_384(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_526(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_527(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_44() == -1)
	{
		func_514(iParam0);
		iVar0 = func_209(Global_40.f_4283);
		if (func_210(iVar0) && func_211((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_366(iVar0);
		}
		if (func_528(iParam0, bVar1, iVar0))
		{
			func_368((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_386(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_525(iParam0) || func_93((*Global_1347702)[iParam0]->f_12, 1)) || func_93((*Global_1347702)[iParam0]->f_12, 512)) || func_83((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_386(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_529(iParam0))
		{
			if (iParam0 == 97)
			{
				func_530(185, 0);
			}
			else
			{
				func_530(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_312(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_531(iParam0, 2);
	}
}

void func_386(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_387()
{
	return Global_1946804->f_1;
}

bool func_388(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_95(iParam1) != iParam2)
	{
		return false;
	}
	if (func_532(2, iParam1))
	{
		func_533(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_389(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_216(iParam6);
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
		func_535(uParam0, func_534(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_536(iVar3, 1);
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
							if (func_537(iVar3) && func_538(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_539(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_390(int iParam0)
{
	func_395(iParam0, 8, 6);
}

void func_391(int iParam0)
{
	func_409(iParam0, 8, 6);
}

void func_392(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_44() != -1;
	iVar7 = func_540(0);
	if (func_218(32768))
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
			iVar5 = func_408(iVar0, 1);
			if (func_405(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_405(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_541(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_542(uParam0);
				if (iVar3 > 0)
				{
					if (!func_218(524288))
					{
						func_400(524288);
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
							iVar5 = func_408(iVar0, 1);
							if (func_405(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_405(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_541(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_543(iVar0, iParam2);
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
					func_220(524288);
				}
			}
		}
	}
}

void func_393(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_394(var uParam0)
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

void func_395(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_536(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_536(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_536(iParam0, 1)])->f_10 && iParam1));
}

void func_396()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_397(int iParam0)
{
	iVar0 = func_216(0);
	iVar1 = 0;
	func_217(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_398(int iParam0, bool bParam1, int iParam2)
{
	func_544(&(Global_1946804->f_1378), iParam0);
	func_545(2, iParam0, 6);
	if (bParam1)
	{
		func_399(0, 1);
	}
}

void func_399(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_393(0);
	}
	if (bParam0)
	{
		func_400(8);
		func_400(512);
	}
	else
	{
		func_400(8);
		func_400(16);
	}
}

void func_400(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_401(struct<4> Param0)
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
			if (func_546(Param0))
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
			func_547(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_400(8);
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
			if (func_546(Param0))
			{
				return;
			}
			func_547(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_400(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_548(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_402(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_403(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_546(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_546(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_547(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_400(8);
}

void func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_408(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_549(iParam4);
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

bool func_405(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_536(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_406(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_405(1108822547, 6))
	{
		if (bParam2)
		{
			func_404(iParam0, iVar0, func_44() != -1, 0, 0);
			func_409(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_395(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_408(int iParam0, int iParam1)
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

void func_409(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_536(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_536(iParam0, 1)])->f_10 || iParam1);
}

void func_410()
{
	if (func_44() != -1)
	{
		return;
	}
	if (!func_7())
	{
		return;
	}
	func_550(&(Global_40.f_40));
}

void func_411()
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

bool func_412()
{
	return !func_240(Global_1310720->f_1);
}

void func_413(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_414()
{
	return Global_40.f_4283.f_1;
}

int func_415()
{
	return Global_40.f_4283.f_4;
}

void func_416(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_551())
	{
		fVar0 = func_552(vParam0, Global_40.f_6);
	}
	if (func_553(33554432))
	{
		if (!func_554(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_552(vParam0, Global_40.f_2);
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

float func_417(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_418()
{
	if (!func_48(&Global_1935630, 8192))
	{
		return;
	}
	if (func_49(32768))
	{
		return;
	}
	func_31(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_555(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_555(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_555(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_555(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_555(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_555(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_555(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_555(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_555(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_556(10f, to_float(func_555(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_556(5f, to_float(func_555(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_556(25f, to_float(func_557(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_556(1f, to_float(func_557(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_556(6f, to_float(func_557(64058978)))));
	fVar0 = (fVar0 + (3f * func_556(1f, to_float(func_557(795577402)))));
	iVar1 = func_558();
	fVar0 = (fVar0 + (0.1111111f * func_556(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_556(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_556(to_float(20), to_float(func_560()))));
	if (func_561(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_561(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_561(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_561(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_561(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_559(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_556(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_556(5f, to_float(func_557(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_556(5f, to_float(func_555(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_562(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_563(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_556((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_556(1f, to_float(func_564(-2116919750)))));
	fVar5 = to_float(func_565());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_556(5f, to_float(func_557(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_556(1f, to_float(func_557(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_556(1f, to_float(func_557(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_556(1f, to_float(func_557(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_556(1f, to_float(func_555(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_556(1f, to_float(func_555(978382515, 1015970717)))));
	Var6 = { func_566(1215094015) };
	fVar8 = func_567(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_57(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_57(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_167(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_65(Global_1898330[iVar61]);
				}
				else
				{
					func_73(iVar61, 0);
					if (func_112(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_166(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_166((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_166(&Global_1898437), &iVar9);
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

int func_419(vector3 vParam0)
{
	iVar0 = func_568(vParam0, 0f, 0f, 0, 2);
	return func_568(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

int func_420(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_569(iParam0);
}

bool func_421()
{
	return &Global_1935436 == 1;
}

void func_422(float fParam0)
{
	func_570(10, fParam0);
}

bool func_423()
{
	if (func_44() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_424()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		_datafile_register_query(uParam0->f_142, iVar0, func_571(iVar0));
		iVar0++;
	}
}

void func_426(var uParam0, int iParam1)
{
	uParam0->f_142.f_1 = 0;
	uParam0->f_142.f_3 = iParam1;
}

bool func_427(var uParam0, int iParam1)
{
	uParam0->f_142.f_2 = iParam1;
	uVar0 = _datafile_get_data_node_index(&(uParam0->f_142.f_1), &(uParam0->f_142));
	return uVar0;
}

int func_428(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_142.f_2 = iParam1;
	bVar0 = _datafile_get_vector(uParam2, &(uParam0->f_142));
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_429(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_142.f_2 = iParam1;
	bVar0 = _datafile_get_float(uParam2, &(uParam0->f_142));
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_430(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_142.f_2 = iParam1;
	bVar0 = _datafile_get_int(uParam2, &(uParam0->f_142));
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_431(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_142.f_2 = iParam1;
	bVar0 = _datafile_get_string(uParam2, &(uParam0->f_142));
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0, int iParam1)
{
	uParam0->f_529 = iParam1;
}

bool func_433(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_434(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_435(bool bParam0)
{
	if (!bParam0)
	{
		func_572(17);
	}
	else
	{
		func_573(17);
	}
}

void func_436(bool bParam0)
{
	if (!bParam0)
	{
		func_572(23);
	}
	else
	{
		func_573(23);
	}
}

void func_437(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_574(vParam0, fParam3))
	{
		func_575(1, bParam4);
	}
}

var func_438(int iParam0, int iParam1)
{
	return func_576(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_439(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	if (!_0x179a6f0ee2e79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_577(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 16, 4, &uParam16);
}

int func_440(int iParam0)
{
	if (!func_210(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

void func_441(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_578(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_579(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					_0xe9bd19f8121ade3e(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_442(bool bParam0, int iParam1)
{
	if (func_580())
	{
		if (func_581(255))
		{
			if (!func_582(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_210(Global_1894899->f_2) && func_444(Global_1894899->f_2))
		{
			func_583(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_584(16);
			}
		}
		else if (func_210(Global_1894899->f_2) && !func_585(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1894899->f_7 = 0;
		func_586(16);
		func_587();
		if (bVar0)
		{
			func_586(1);
		}
	}
}

void func_443()
{
	func_586(8);
}

bool func_444(int iParam0)
{
	if (!func_210(iParam0))
	{
		return false;
	}
	return func_585(iParam0, 8);
}

bool func_445()
{
	if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
	{
		return false;
	}
	if (Global_1935630->f_2 != Global_40.f_39 || get_entity_model(Global_35) != Global_40.f_39)
	{
		return false;
	}
	if (Global_40.f_7729 != &Global_1905941)
	{
		return false;
	}
	return true;
}

bool func_446(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_588(iParam1) || !func_588(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_454(*iParam0);
	iVar1 = func_453(*iParam0);
	iVar2 = func_452(*iParam0);
	iVar3 = func_449(*iParam0);
	iVar4 = func_450(*iParam0);
	iVar5 = func_451(*iParam0);
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
	iVar6 = func_589(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_589(iVar1, iVar0);
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
	func_590(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_446(iParam0, iParam1, 1))
	{
		iVar0 = func_453(iParam1);
		iVar1 = func_454(iParam0);
		iVar2 = (func_454(iParam0) - func_454(iParam1));
		iVar3 = (func_453(iParam0) - func_453(iParam1));
		iVar4 = (func_452(iParam0) - func_452(iParam1));
		iVar5 = (func_449(iParam0) - func_449(iParam1));
		iVar6 = (func_450(iParam0) - func_450(iParam1));
		iVar7 = (func_451(iParam0) - func_451(iParam1));
	}
	else
	{
		iVar0 = func_453(iParam0);
		iVar1 = func_454(iParam1);
		iVar2 = (func_454(iParam1) - func_454(iParam0));
		iVar3 = (func_453(iParam1) - func_453(iParam0));
		iVar4 = (func_452(iParam1) - func_452(iParam0));
		iVar5 = (func_449(iParam1) - func_449(iParam0));
		iVar6 = (func_450(iParam1) - func_450(iParam0));
		iVar7 = (func_451(iParam1) - func_451(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_589(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_591(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_449(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_450(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_451(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_452(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_453(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_454(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_592(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

void func_455(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_593(iParam1))
		{
			func_594(iParam0, 41788943);
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
			func_595(iParam0, 0, 1);
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
			func_596(iParam0, 0);
			bVar0 = true;
		}
		func_597(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_456(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_457(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

Vector3 func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 7.571325f;
		case 1:
			return 0f, 0f, 14.49609f;
		case 2:
			return 0f, 0f, 38.75486f;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, 0f;
		case 5:
			return 0f, 0f, 3.999999f;
		case 6:
			return 0f, 0f, -34.59168f;
		case 7:
			return 0f, 0f, 0f;
		case 8:
			return 0f, 0f, -38.00174f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.554624f, 13.79203f, 3.236048f;
		case 1:
			return 9.334814f, 1.766281f, 3.739145f;
		case 2:
			return 8.446794f, 1.697914f, 2.894822f;
		case 3:
			return 18.156f, 1.892572f, 4.795479f;
		case 4:
			return 2.5f, 2.5f, 5f;
		case 5:
			return 2f, 10f, 5f;
		case 6:
			return 4.391539f, 13.73013f, 4.875111f;
		case 7:
			return 158.8804f, 129.9901f, 26.94333f;
		case 8:
			return 110.9118f, 49.37093f, 26.92364f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_460(int iParam0, bool bParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	if ((func_141(iParam0, 1) && !func_29(iParam0)) && func_142(iParam0))
	{
		return false;
	}
	if (!func_141(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_598(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_461(int iParam0)
{
	if (!func_140(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_462(int iParam0)
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

int func_463(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_599(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_600((386 + iVar28), 1);
			if (func_601(iParam0, &Var0, iVar5, 0))
			{
				if (func_602(iParam0, &Var6, iVar5))
				{
					Var29 = { func_603(iParam0, Var0, iVar5, 0) };
					func_604(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_605(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_606(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_607(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_464(int iParam0, int iParam1, float fParam2)
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

bool func_465(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_466(var uParam0)
{
	return uParam0->f_2;
}

void func_467(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_468(var uParam0)
{
	if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
	{
		if (_is_draft_vehicle(*uParam0))
		{
			if (_0xa19447d83294e29f(*uParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_469(int iParam0, int iParam1)
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

void func_470(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if ((_is_draft_vehicle(iParam0) || func_608(iParam0)) && !is_entity_dead(iParam0))
		{
			_0xd826690b5cf3beff(iParam0, 0f);
			_0x850ce59dec2028f3(iParam0, 0);
		}
		set_vehicle_wheels_can_break(iParam0, false);
		set_vehicle_wheels_can_break_off_when_blow_up(iParam0, false);
		set_vehicle_explodes_on_high_explosion_damage(iParam0, false);
		set_vehicle_has_strong_axles(iParam0, true);
		_0x6090a031c69f384e(iParam0, 0);
		set_vehicle_can_break(iParam0, false);
		set_entity_can_be_damaged(iParam0, false);
	}
}

bool func_471(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_472(var uParam0)
{
	if (!func_161(uParam0))
	{
		return 0f;
	}
	if (func_162(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_163() - uParam0->f_1);
}

void func_473(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

Vector3 func_474()
{
	return 2509.203f, -1140.16f, 48.60234f;
}

float func_475(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_476(var uParam0)
{
	return uParam0->f_5;
}

int func_477(var uParam0)
{
	return uParam0->f_4;
}

void func_478(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

Vector3 func_479()
{
	return 2492.938f, -1146.176f, 48.29959f;
}

void func_480(var uParam0)
{
	if (func_609(Global_35))
	{
		if (!func_483(Global_35, 658540077))
		{
			task_follow_waypoint_recording(Global_35, func_280(1), 0, 4194304, -1, 0, 0, -1);
		}
		func_45(&(uParam0->f_77));
	}
	else if (func_46(&(uParam0->f_77)) >= 2f)
	{
		if (!func_483(Global_35, 1868526510))
		{
			func_301(Global_35, uParam0->f_18, 0, 3f, 20000);
		}
	}
}

void func_481(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

Vector3 func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2512.128f, -1131.003f, 48.80313f;
		case 1:
			return 2514.879f, -1134.14f, 48.88092f;
		default:
			break;
	}
	return 2512.128f, -1131.003f, 48.80313f;
}

bool func_483(int iParam0, int iParam1)
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

bool func_484(int iParam0, int iParam1, bool bParam2)
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

void func_485(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_308(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_486(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_487(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_488()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, -842734359) || is_control_just_pressed(2, -842734359))
	{
		return true;
	}
	return false;
}

char* func_489(char* sParam0)
{
	return sParam0;
}

int func_490(int iParam0)
{
	iVar0 = func_330(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_610(iVar0);
}

int func_491(int iParam0, int iParam1)
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
			func_611(iVar2);
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

void func_492()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_493(bool bParam0)
{
	if (func_44() == -1)
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

int func_494(int iParam0)
{
	if (!func_612(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_495(int iParam0)
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

void func_496(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_497(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_498(int iParam0, int iParam1)
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
			func_613((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_613(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_57(&(Global_1898164->f_1[0])))
	{
		func_172(&(Global_1898164->f_1[0]), 3);
	}
}

void func_499(vector3 vParam0, int iParam3)
{
	if (func_240(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(uVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(uVar1) };
			if (func_554(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(uVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_500(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_501(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	func_614(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

void func_503(int iParam0, var uParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_615(iParam0, *uParam1, 0);
	func_616(uParam1);
	Global_1935183->f_24 = 1;
}

bool func_504(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

bool func_505(var uParam0)
{
	if (func_355(&(uParam0->f_29), 62))
	{
		switch (func_617())
		{
			case 1:
				if (!func_355(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_355(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_355(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_355(&(uParam0->f_29), 32))
				{
					if (func_355(&(uParam0->f_29), 2))
					{
						if (func_449(func_79()) < 5)
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

bool func_506(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_507(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_508(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_509()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_510()
{
	return Global_1894899 & 2 != 0;
}

bool func_511(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_367(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_528(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_513(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_62(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_514(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

void func_515(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_516(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_618(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_619(iParam0))
	{
		return false;
	}
	if (func_620(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_517(iParam0, 1)) || func_49(32768))
	{
		if (!func_517(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_621())
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_518(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

Vector3 func_519(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_520(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

int func_521(int iParam0)
{
	if (func_622(iParam0))
	{
		return 1673015813;
	}
	return -936216634;
}

void func_522(var uParam0, int iParam1)
{
	if (func_622(iParam1))
	{
		set_blip_sprite(*uParam0, 2145479193, true);
	}
	else
	{
		set_blip_sprite(*uParam0, -997121570, true);
	}
	func_623(iParam1);
	set_blip_name_from_text_file(*uParam0, func_624(iParam1));
}

void func_523(int iParam0)
{
	if (!func_376(iParam0, 2))
	{
		if (!func_625())
		{
			if (does_blip_exist(Global_1392626[iParam0]))
			{
				_blip_set_modifier(Global_1392626[iParam0], 580546400);
			}
		}
		func_626(iParam0, 2);
	}
}

void func_524(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_525(int iParam0)
{
	if (func_44() != -1)
	{
		return false;
	}
	if (!func_62(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

void func_526(int iParam0)
{
	switch (func_44())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_527(int iParam0)
{
	if (!func_525(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_386(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_86(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

bool func_528(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

bool func_529(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_530(int iParam0, bool bParam1)
{
	func_515(iParam0, &iVar0, &iVar1);
	if (!func_516(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_518(iVar0, iVar1);
}

void func_531(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_532(int iParam0, int iParam1)
{
	if (func_44() == -1)
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

void func_533(var uParam0, int iParam1)
{
	if (func_44() == -1)
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

int func_534(int iParam0)
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

void func_535(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_627(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_408(iVar0, 1);
			if (func_406(iVar0, iParam1))
			{
				vVar4 = { func_628(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_405(iVar7, 4))
				{
					func_395(iVar7, 4, 6);
				}
			}
			else
			{
				func_409(iVar7, 4, 6);
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

int func_536(int iParam0, int iParam1)
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

int func_537(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_44() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_217(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_538(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_539(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_494(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_406(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
		}
	}
	if (func_629(-1586649372) && func_406(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
			}
			func_630(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_630(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_630(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_630(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_630(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_630(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_494(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_631(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_494(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_632(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_631(&(Global_1946804->f_1497.f_1[iVar1])) || func_632(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
			}
			switch (func_494(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_494(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_494(&(uParam0->f_1[iVar1])) || func_632(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_540(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_387();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_541(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_536(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_218(524288))
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

int func_542(var uParam0)
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

void func_543(int iParam0, int iParam1)
{
	func_633(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_544(var uParam0, int iParam1)
{
	if (func_44() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_634(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_635(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_545(int iParam0, int iParam1, int iParam2)
{
	if (func_44() == -1)
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

bool func_546(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_547(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_548(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_403(Var0);
}

int func_549(int iParam0)
{
	iVar0 = func_494(iParam0);
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

void func_550(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

bool func_551()
{
	if (func_636(43) && !func_636(44))
	{
		return false;
	}
	if (func_636(67) && func_637() != 8)
	{
		return false;
	}
	return true;
}

float func_552(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_553(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_554(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

var func_555(int iParam0, int iParam1)
{
	Var1 = { func_638(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_556(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_557(int iParam0)
{
	Var1 = { func_566(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_558()
{
	if (func_68(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_559(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_560()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_639(iVar0);
		if (func_68(func_640(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_561(int iParam0)
{
	if (func_44() != -1)
	{
		return false;
	}
	if (!func_62(iParam0))
	{
		return false;
	}
	return func_58((*Global_1347702)[iParam0]->f_15, 1);
}

int func_562(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_563(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_641(-1845241476, 0, 0);
	iVar1 = func_641(1654063339, 0, 0);
	iVar2 = func_641(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_564(int iParam0)
{
	Var1 = { func_642(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_565()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_643(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_566(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

float func_567(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

int func_568(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_569(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_570(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_644(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_645(1, bVar1, 1, sVar2);
		func_646(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_647(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_648();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_647(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_647(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

char* func_571(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POIs/POI(%i)";
		case 1:
			return "POIs/POI";
		case 2:
			return ":CAM_START_POS";
		case 3:
			return ":CAM_START_ROT";
		case 4:
			return ":CAM_END_POS";
		case 5:
			return ":CAM_END_ROT";
		case 6:
			return ":CAM_FOV";
		case 7:
			return ":POI_START_HOUR";
		case 8:
			return ":POI_START_MINUTE";
		case 9:
			return ":POI_END_HOUR";
		case 10:
			return ":POI_END_MINUTE";
		case 11:
			return ":POI_WEATHER";
		case 12:
			return ":POI_DURATION";
	}
	return "";
}

int func_572(int iParam0)
{
	if (func_649(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_573(int iParam0)
{
	if (func_650(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_574(vector3 vParam0, float fParam3)
{
	if (func_240(vParam0))
	{
		return false;
	}
	if (func_651(255) == 4)
	{
		return false;
	}
	if (func_582(4, 255))
	{
	}
	func_573(4);
	func_652(&(Global_1109400->f_419));
	Global_1109400->f_419.f_6 = { vParam0 };
	Global_1109400->f_419 = fParam3;
	Global_1109400->f_419.f_5 = 1;
	Global_1109400->f_22.f_16 = 0;
	Global_1109400->f_22.f_17 = 0;
	func_653(Global_1109400->f_419, 42);
	return true;
}

void func_575(bool bParam0, bool bParam1)
{
	if (func_651(255) == 4)
	{
		return;
	}
	if (func_240(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_572(0);
	}
	else
	{
		if (bParam1)
		{
			func_654(0, 0, 0, 1);
		}
		func_573(0);
		func_655(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_656(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_657(Global_1109400->f_389, 42);
	func_658(Global_1109400->f_428, 42);
}

var func_576(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_659() != 0)
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
	iVar5 = Global_1225639->f_10;
	iVar6 = Global_1225639->f_14;
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_660());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_660());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_660());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_661(get_player_team(iVar5)));
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
		if (&Global_1225639->f_21[iVar2])
		{
			iVar10 = &Global_1225639->f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_662(iVar2))
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
					else if (&Global_1225639->f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_651(iVar2) != 1)
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
					if (!func_663(iVar10))
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

int func_577(var uParam0, struct<18> Param1)
{
	if (!func_664(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

int func_578(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_579(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_580()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_581(int iParam0)
{
	return func_582(23, iParam0);
}

bool func_582(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_665(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_666())
	{
		return func_665(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_665(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_583(int iParam0, int iParam1)
{
	if (!func_210(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_584(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_585(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_586(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_587()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_585(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1888801)[iVar1]->f_26)))
			{
				set_script_as_no_longer_needed(&((*Global_1888801)[iVar1]->f_26));
			}
		}
		if ((*Global_1888801)[iVar1]->f_9 != 0)
		{
			if (is_thread_active((*Global_1888801)[iVar1]->f_9, false))
			{
				if (func_44() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_585(iVar1, 2))
			{
				if (func_44() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1888801)[iVar1]->f_26), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1888801)[iVar1]->f_26)));
				}
			}
			if (!_does_thread_exist((*Global_1888801)[iVar1]->f_9))
			{
				(*Global_1888801)[iVar1]->f_9 = 0;
				func_667(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_588(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_451(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_450(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_449(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_454(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_453(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_452(iParam0);
	if (iVar5 < 1 || iVar5 > func_589(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_589(int iParam0, int iParam1)
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

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_668(iParam0, iParam6);
	func_669(iParam0, iParam5);
	func_670(iParam0, iParam4);
	func_294(iParam0, iParam3);
	func_295(iParam0, iParam2);
	func_296(iParam0, iParam1);
}

float func_591(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_592(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_593(int iParam0)
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

void func_594(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_671(iParam0, iParam1))
		{
			if (func_672(iParam0, iParam1))
			{
				if (func_673(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_100(iParam0);
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

void func_595(int iParam0, int iParam1, bool bParam2)
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

void func_596(int iParam0, bool bParam1)
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

void func_597(int iParam0, int iParam1)
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

bool func_598(int iParam0, bool bParam1)
{
	if (func_44() != -1)
	{
		return false;
	}
	if (!func_140(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_147(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_318(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_147(iParam0));
}

struct<5> func_599(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_674(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_675(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_603(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_676(bParam1) };
			if (bParam2 && func_677(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_601(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_601(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_602(iParam0, &Var5, 1728382685))
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
			Var0 = { func_678(bParam1) };
			switch (func_494(iParam0))
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
			if (func_679(iParam0, -1823706425))
			{
				Var0 = { func_603(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_679(iParam0, -1483207246))
			{
				Var0 = { func_603(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_680(Var0, &Var27, bParam1, 0))
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

int func_600(int iParam0, int iParam1)
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

bool func_601(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_681(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_602(int iParam0, var uParam1, int iParam2)
{
	if (func_682(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_603(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_612(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_493(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_604(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_683(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_680(*uParam1, &Var0, bParam6, 0))
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
	if (!func_605(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_493(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_605(bool bParam0)
{
	if (func_44() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_493(bParam0));
}

int func_606(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_684(iParam0))
	{
		return 0;
	}
	if (!func_605(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_607(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_562(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_608(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	if (iVar0 == 1172094279)
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

int func_610(int iParam0)
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

int func_611(int iParam0)
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

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_613(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_614(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_685(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_615(int iParam0, int iParam1, bool bParam2)
{
	if (!func_500(iParam0))
	{
		return;
	}
	func_614(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_616(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

int func_617()
{
	return &Global_1899516;
}

bool func_618(int iParam0, int iParam1)
{
	if (func_44() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_619(int iParam0)
{
	if (func_44() != -1)
	{
		if (func_517(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_517(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_620(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_517(iParam0, 65536) && !func_517(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_517(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_517(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_621()
{
	return Global_1905944->f_5694;
}

bool func_622(int iParam0)
{
	if (func_198((*Global_1392626)[iParam0]->f_8, 4) || !func_686(1))
	{
		return true;
	}
	return false;
}

void func_623(int iParam0)
{
	if (func_622(iParam0))
	{
		func_687(iParam0, -1986290853);
		func_687(iParam0, 495758964);
	}
	if (func_625())
	{
		func_687(iParam0, 847579139);
	}
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "BLIP_LSM_CATFISH";
		case 7:
			return "BLIP_LSM_HORSE_CHASE_1";
		case 1:
			return "BLIP_LSM_HUNTER";
		case 5:
			return "BLIP_LSM_MINER_1";
		case 6:
			return "BLIP_LSM_MINER_2";
		case 8:
			return "BLIP_LSM_SELL_HORSE_1";
		case 4:
			return "BLIP_LSM_SOLDIER";
		case 3:
			return "BLIP_LSM_UNDERTAKER";
		case 0:
			return "BLIP_LSM_WOMANCRY";
	}
	return "";
}

bool func_625()
{
	if (!func_58((*Global_1347702)[61]->f_15, 1) && func_686(1))
	{
		return true;
	}
	return false;
}

void func_626(int iParam0, int iParam1)
{
	if (func_200(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

bool func_627(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_628(int iParam0, int iParam1)
{
	if (func_44() == -1)
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

bool func_629(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_536(iParam0, 1)] != &Global_1946804->f_57[func_536(iParam0, 1)];
}

void func_630(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_543(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_543(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_543(iVar2, iVar0);
		}
	}
}

bool func_631(int iParam0)
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

bool func_632(int iParam0, int iParam1)
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

void func_633(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_688(uParam0, 1))
	{
		func_689(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_634(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_636(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_58((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_637()
{
	return Global_40.f_4283;
}

struct<2> func_638(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_639(int iParam0)
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

var func_640()
{
	return Global_40.f_8863.f_148;
}

int func_641(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_612(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_675(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_690(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_691(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_493(bParam2), iParam0, 0);
	return uVar2;
}

struct<2> func_642(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_643(int iParam0)
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

char* func_644(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_645(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_646(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_692(0, 1, bParam0, bParam1);
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

int func_647(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_648()
{
	func_693();
	func_694();
	func_695();
}

bool func_649(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_650(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_651(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225639->f_21[iParam0])
	{
		return (*Global_1108178)[iParam0]->f_1;
	}
	return 25;
}

void func_652(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_653(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_654(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_696(iParam0);
	if (!func_697(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_698(128) && !func_699(18))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_700() == 4)
	{
		func_572(17);
	}
	func_701(512);
}

void func_655(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_656(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_657(struct<29> Param0, var uParam29, int iParam30)
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

void func_658(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_659()
{
	return Global_1051081->f_11;
}

char* func_660()
{
	return "unnamed";
}

int func_661(int iParam0)
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

bool func_662(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return func_582(32, iParam0);
}

bool func_663(int iParam0)
{
	if (func_702(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) != 1)
		{
			func_703(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) == 1;
}

bool func_664(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_665(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_666()
{
	return Global_1109400->f_245;
}

void func_667(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_668(int iParam0, int iParam1)
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

void func_669(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_670(int iParam0, int iParam1)
{
	iVar0 = func_453(*iParam0);
	iVar1 = func_454(*iParam0);
	if (iParam1 < 1 || iParam1 > func_589(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

bool func_671(int iParam0, int iParam1)
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

bool func_672(int iParam0, int iParam1)
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

bool func_673(int iParam0, int iParam1)
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
	if (!func_671(iParam0, iVar0))
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

struct<4> func_674(bool bParam0)
{
	return func_603(1328661203, func_704(), -1591664384, bParam0);
}

int func_675(int iParam0)
{
	if (!func_612(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_676(bool bParam0)
{
	iVar0 = func_493(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_603(923904168, func_674(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_603(923904168, func_674(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_603(923904168, func_674(bParam0), -740156546, 0);
}

bool func_677(int iParam0, bool bParam1)
{
	if (func_494(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_705(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_678(bool bParam0)
{
	iVar0 = func_493(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_603(271701509, func_674(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_603(271701509, func_674(bParam0), 12999093, 0);
}

bool func_679(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_494(iParam0);
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

bool func_680(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_493(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_681(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_612(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_603(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_493(bParam6), &Var0, 0);
	return uVar4;
}

bool func_682(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_493(0);
	*uParam1 = { func_603(iParam0, func_676(0), iParam3, 0) };
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

bool func_683(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_684(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_685(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case -1779466334:
			return 30;
		case -1751068532:
			return 19;
		case -1600776215:
			return 0;
		case -1403291038:
			return 13;
		case -1350098362:
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case -505280232:
			return 29;
		case -423064657:
			return 9;
		case -415041951:
			return 3;
		case -316764041:
			return 15;
		case -156236308:
			return 1;
		case -115118166:
			return 8;
		case -27924880:
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case 557524588:
			return 11;
		case 623901469:
			return 16;
		case 651189962:
			return 31;
		case 830459706:
			return 25;
		case 1274330613:
			return 22;
		case 1302444626:
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case 1570236479:
			return 6;
		case 1590600971:
			return 10;
		case 1598344177:
			return 21;
		case 1601295776:
			return 33;
		case 1618820662:
			return 32;
		case 1754500170:
			return 35;
		case 1763394652:
			return 17;
		case 1792646445:
			return 12;
		case 1831828781:
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
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

bool func_686(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_687(int iParam0, int iParam1)
{
	if (does_blip_exist(Global_1392626[iParam0]))
	{
		_blip_set_modifier(Global_1392626[iParam0], iParam1);
	}
	else if (does_blip_exist((*Global_1392626)[iParam0]->f_1))
	{
		_blip_set_modifier((*Global_1392626)[iParam0]->f_1, iParam1);
	}
}

bool func_688(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_689(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_690(int iParam0, int iParam1)
{
	if (!func_612(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_675(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_632(iParam0, 1399091007))
	{
		func_706(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_691(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_707(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_708(&Var0, func_676(0));
	}
	if (!func_709(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_710(iVar14);
	return uVar15;
}

char* func_692(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_644(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_644(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_693()
{
	if (func_711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_712(2);
	}
	if (Global_1347477->f_119)
	{
		return func_712(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_713();
	fVar2 = func_714();
	fVar3 = func_715();
	fVar4 = func_716();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_717()));
	fVar7 = (func_712(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_718(3, round((to_float(iVar8) * fVar10)), 0);
	func_719(3, fVar9, fVar9 > 100f);
	return func_720(fVar7, -100f, 100f);
}

float func_694()
{
	if (func_711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_712(1);
	}
	if (Global_1347477->f_119)
	{
		return func_712(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_713();
	fVar2 = func_714();
	fVar3 = func_715();
	fVar4 = func_716();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_717()));
	fVar7 = (func_712(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_718(2, round((to_float(iVar8) * fVar10)), 0);
	func_719(2, fVar9, fVar9 > 100f);
	return func_720(fVar7, -100f, 100f);
}

float func_695()
{
	if (func_711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_712(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_721())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_722())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_712(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_713();
	fVar2 = func_714();
	fVar3 = func_715();
	fVar4 = func_716();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_717()));
	fVar7 = (func_712(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_718(1, round((to_float(iVar8) * fVar10)), 0);
	func_719(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_712(0);
	}
	return func_720(fVar7, -100f, 100f);
}

void func_696(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

bool func_697(int iParam0)
{
	return (Global_1109400->f_22.f_6 && iParam0) != 0;
}

bool func_698(int iParam0)
{
	return (Global_1109400->f_22.f_8 && iParam0) != 0;
}

bool func_699(int iParam0)
{
	return (Global_1109400->f_4[Global_1109914[iParam0]] && (*Global_1109914)[iParam0]->f_1) == (*Global_1109914)[iParam0]->f_1;
}

int func_700()
{
	if (&Global_1109400 <= 5)
	{
		return &Global_1109400;
	}
	if (&Global_1109400 <= 21)
	{
		return 4;
	}
	if (&Global_1109400 <= 24)
	{
		return 3;
	}
	return 25;
}

void func_701(int iParam0)
{
	Global_1109400->f_22.f_8 = (Global_1109400->f_22.f_8 || iParam0);
}

bool func_702(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1058888->f_49111), iParam0))
	{
		return true;
	}
	return false;
}

void func_703(int iParam0)
{
	if (func_723() != 0 || func_44() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225639->f_21[iVar0])
	{
		func_724(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0] == 1)
	{
		return;
	}
	func_725(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0] = 1;
}

struct<4> func_704()
{
	return Var0;
}

bool func_705(int iParam0)
{
	if (!func_726(iParam0))
	{
		return false;
	}
	return func_727(iParam0);
}

void func_706(int iParam0, var uParam1, var uParam2)
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

struct<14> func_707(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_708(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_709(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_493(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_710(int iParam0)
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

bool func_711()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_712(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_713()
{
	fVar0 = func_728(13);
	iVar1 = func_729(fVar0);
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

float func_714()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_715()
{
	if (func_730())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_716()
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

float func_717()
{
	return Global_1955565->f_3;
}

void func_718(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_692(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_719(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_692(iParam0, 2, 0, 0);
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

float func_720(float fParam0, float fParam1, float fParam2)
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

bool func_721()
{
	return func_728(12) <= -99f;
}

bool func_722()
{
	return func_728(12) >= 99f;
}

int func_723()
{
	return Global_1572887->f_13;
}

void func_724(int iParam0)
{
	if (Global_1572887->f_13 != 0 || Global_1572887->f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (&Global_1058888->f_42357.f_1[iVar0] == 0)
	{
		return;
	}
	func_725(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0] = 0;
}

void func_725(int iParam0)
{
	if (Global_1058888->f_42357.f_1[iParam0]->f_1 != 0)
	{
		Global_1058888->f_42357.f_1[iParam0]->f_2 = 0;
		Global_1058888->f_42357.f_1[iParam0]->f_1 = 0;
	}
}

bool func_726(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_727(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

float func_728(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_729(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_730()
{
	return _unlock_is_unlocked(-121456797);
}

