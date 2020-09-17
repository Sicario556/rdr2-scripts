void __EntryFunction__()
{
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_262);
	}
	func_2(&Local_262, &uScriptParam_0);
	while (!func_3(&Local_262))
	{
		func_4(&Local_262);
		switch (func_5(Local_262))
		{
			case 0:
				if (func_6(&Local_262))
				{
					func_7(&Local_262, 1);
				}
				break;
			case 1:
				if (func_8(&Local_262))
				{
					func_7(&Local_262, 2);
				}
				break;
			case 2:
				if (func_9(&Local_262))
				{
					func_7(&Local_262, 3);
				}
				break;
			case 3:
				func_1(&Local_262);
				break;
		}
		wait(0);
	}
	func_1(&Local_262);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			if (does_entity_exist(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
	terminate_this_thread();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (_does_anim_scene_exist(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		take_ownership_of_anim_scene(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((_does_anim_scene_exist(uParam0->f_2) && _is_anim_scene_started(uParam0->f_2, false)) && !is_gameplay_cam_rendering())
		{
			set_bit(&(Global_1956580->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!_does_anim_scene_exist(uParam0->f_2) || !_is_anim_scene_started(uParam0->f_2, false)) || is_gameplay_cam_rendering())
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && _does_thread_exist(uParam0->f_1)) && is_thread_active(uParam0->f_1, false))
	{
		return 0;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	if (!func_22())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_24(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_25(&(Global_1359489->f_40), 1);
}

int func_11(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_2))
	{
		_delete_anim_scene(uParam0->f_2);
	}
	if (_does_anim_scene_exist(iLocal_255))
	{
		_delete_anim_scene(iLocal_255);
	}
	set_player_control(get_player_index(), true, 0, false);
	_display_hud_component(-1679307491);
	set_ped_config_flag(Global_35, 336, false);
	if (!func_26(iLocal_4, 16))
	{
		clear_timecycle_modifier();
	}
	clear_weather_type_persist();
	iVar0 = 0;
	while (iVar0 < iVar256)
	{
		if (_0x91a5f9cbebb9d936(&(uLocal_259[iVar0])))
		{
			remove_scenario_blocking_area(&(uLocal_259[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar253)
	{
		if (_does_volume_exist(&(iLocal_256[iVar0])))
		{
			_delete_volume(&(iLocal_256[iVar0]));
		}
		iVar0++;
	}
	return 1;
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_27(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489->f_40), 1);
	}
	func_28(iParam0, 0);
	func_29(iParam0, 4, 0);
	func_30(iParam0);
	func_31(iParam0);
	func_32(iParam0, 37, 1);
	bVar0 = func_33(Global_1360165[iParam0], 0);
	iVar1 = func_34(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_35(iParam0, 64, 1))
	{
		func_32(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_32(iParam0, 33, 1);
		func_32(iParam0, 34, 1);
		func_36(iParam0, 1056964608, -1, 1061158912);
		func_37(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_24(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_24(iParam0, 35, 1);
			if (bParam8)
			{
				func_24(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_38(iParam0, 0);
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
		func_32(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_24(iParam0, 33, 1);
		func_37(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_25(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_39(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_24(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_40(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_35(iParam0, 45, 1))
	{
		func_32(iParam0, 45, 1);
	}
	func_41(iParam0, 16, 1);
	func_32(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_33(func_42(iParam0), 0))
		{
			func_43(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_2))
	{
	}
	request_waypoint_recording("native3_outro_horse_ride");
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	func_44();
	_hide_hud_component(-1679307491);
	set_player_control(get_player_index(), false, 256, false);
	if (!_does_volume_exist(&(iLocal_256[0])))
	{
		iLocal_256[0] = _create_volume_box_with_custom_name(771.9059f, 1313.402f, 158.5121f, 0f, 0f, 18.5f, 128f, 244f, 64f, "NATIVE3_OUTRO_VOLUME_ROAD_BLOCKING_VOLUME_COLLAPSE_SCENE");
		uLocal_259[0] = _0x4c39c95ae5db1329(&(iLocal_256[0]), 0, 15);
		_0x2fcd528a397e5c88(&(iLocal_256[0]), 1048576);
		_0xc1799fafd2fdf52b(&(iLocal_256[0]), 0, 0, 0);
		_0x18262cafebb5fbe1(&(iLocal_256[0]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_256[0]), 0, 0, 0, -1, -1, 2);
	}
	if (!_does_volume_exist(&(iLocal_256[1])))
	{
		iLocal_256[1] = _create_volume_box_with_custom_name(2925.106f, 1341.218f, 44.71264f, 0f, 0f, -20f, 7f, 16f, 4f, "NATIVE3_OUTRO_VOLUME_SCENARIO_BLOCKING_VOLUME_ANNESBURG");
		uLocal_259[1] = _0x4c39c95ae5db1329(&(iLocal_256[1]), 0, 15);
		_0x2fcd528a397e5c88(&(iLocal_256[1]), 2442122);
		_0x18262cafebb5fbe1(&(iLocal_256[1]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_256[1]), 0, 0, 0, -1, -1, 2);
	}
	return 1;
}

bool func_22()
{
	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	if (!func_26(iLocal_4, 64))
	{
		func_44();
		func_45(&(Global_1879514->f_6), 16);
		if (does_entity_exist(get_mount(Global_35)))
		{
			if (!is_ped_injured(get_mount(Global_35)))
			{
				_0x06d26a96ca1bca75(get_mount(Global_35), 0, 0f, 0);
				set_ped_reset_flag(get_mount(Global_35), 105, true);
			}
		}
	}
	if (!func_26(iLocal_4, 32))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		_0xab0d553fe20a6e25(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	if (!_does_anim_scene_exist(iLocal_255))
	{
		iLocal_255 = _create_anim_scene("script@story@ntv3@ig19_coughing@ig19_germansfindarthur", 0, "pl_action", false, true);
		load_anim_scene(iLocal_255);
	}
	switch (iLocal_3)
	{
		case 0:
			set_clock_time(5, 40, 0);
			if (does_entity_exist(get_mount(Global_35)))
			{
				if (!is_ped_injured(get_mount(Global_35)))
				{
					iLocal_5 = get_mount(Global_35);
					if (get_is_waypoint_recording_loaded("native3_outro_horse_ride"))
					{
						Var0.f_2 = -1;
						Var0.f_7 = -1;
						Var0.f_8 = -1082130432;
						Var0.f_12 = -1082130432;
						Var0.f_13 = 1;
						Var0.f_14 = -1082130432;
						Var0 = "native3_outro_horse_ride";
						Var0.f_1 = 0;
						Var0.f_3 = 4194312;
						Var0.f_13 = 0;
						Var0.f_12 = 1.501f;
						Var0.f_14 = -1f;
						set_blocking_of_non_temporary_events(iLocal_5, true);
						task_follow_waypoint_recording_advanced(iLocal_5, &Var0);
						func_46(&uLocal_6);
						iLocal_3++;
					}
				}
			}
			break;
		case 1:
			set_clock_time(5, 40, 0);
			if (_does_anim_scene_exist(uParam0->f_2) && !_is_anim_scene_started(uParam0->f_2, false))
			{
				if (_is_anim_scene_loaded(uParam0->f_2, true, false))
				{
					if (_0x23e33cb9f4a3f547(uParam0->f_2, "pbl_ig19_coughing_exitlt") && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_ig19_coughing_exitrt"))
					{
						if (func_47(&uLocal_6) && func_48(&uLocal_6) >= 3000)
						{
							set_anim_scene_entity(uParam0->f_2, "arthur", Global_35, 0);
							set_anim_scene_origin(uParam0->f_2, get_entity_coords(iLocal_5, true, false), get_entity_rotation(iLocal_5, 2), 2);
							attach_anim_scene_to_entity(uParam0->f_2, get_mount(Global_35), get_ped_bone_index(iLocal_5, 29245));
							set_anim_scene_origin(uParam0->f_2, 0f, 0f, 0f, 0f, 0f, 0f, 2);
							start_anim_scene(uParam0->f_2);
							iLocal_3++;
						}
					}
				}
			}
			break;
		case 2:
			set_clock_time(5, 40, 0);
			if (_does_anim_scene_exist(uParam0->f_2))
			{
				if (_is_anim_scene_started(uParam0->f_2, false))
				{
					if (does_entity_exist(iLocal_5))
					{
						if (!is_ped_injured(iLocal_5))
						{
							if (is_waypoint_playback_going_on_for_ped(iLocal_5, "native3_outro_horse_ride"))
							{
								if (_get_anim_scene_progress(uParam0->f_2) >= 0.17f)
								{
									waypoint_playback_override_speed(iLocal_5, 0f, 0, 0.4f, 0);
								}
							}
							if (!func_26(iLocal_4, 256))
							{
								if (_get_anim_scene_progress(uParam0->f_2) >= 0.5785f)
								{
									task_look_at_coord(iLocal_5, get_entity_coords(Global_35, true, false), 7500, 2048, 51, 0);
									func_49(&iLocal_4, 256);
								}
							}
						}
					}
				}
				if (_0x005e6f28dd7ed58d(uParam0->f_2, "arthur"))
				{
					do_screen_fade_out(0);
					iLocal_3++;
				}
			}
			break;
		case 3:
			if (_does_anim_scene_exist(iLocal_255) && _is_anim_scene_loaded(iLocal_255, true, false))
			{
				do_screen_fade_out(0);
				set_anim_scene_entity(iLocal_255, "arthur", Global_35, 0);
				start_anim_scene(iLocal_255);
				set_clock_time(9, 0, 0);
				_set_weather_type(1500834021, true, true, false, 0f, false);
				iLocal_3++;
			}
			break;
		case 4:
			set_clock_time(9, 0, 0);
			if (_does_anim_scene_exist(iLocal_255) && _is_anim_scene_started(iLocal_255, false))
			{
				do_screen_fade_in(1000);
				iLocal_3++;
			}
			break;
		case 5:
			set_clock_time(9, 0, 0);
			if (_does_anim_scene_exist(iLocal_255))
			{
				if (_0x005e6f28dd7ed58d(iLocal_255, "arthur"))
				{
					do_screen_fade_out(0);
					iLocal_3++;
				}
			}
			break;
		case 6:
			do_screen_fade_out(0);
			clear_ped_tasks_immediately(Global_35, false, true);
			func_50(-1406972469, Global_35, 0, 1);
			_request_imap(1798244378);
			_0x513f8aa5bf2f17cf(2918.51f, 1339.779f, 37.6952f, 7.5f, 0);
			StringCopy(&cLocal_9, "rdtc1_rsc5", 32);
			func_51(&Local_13);
			func_52(&Local_13, 0);
			func_53(&Local_13, Global_35, "Arthur", 0, 0, 0);
			clear_ped_tasks_immediately(Global_35, true, true);
			func_46(&uLocal_6);
			iLocal_3++;
			break;
		case 7:
			set_ped_config_flag(Global_35, 336, true);
			_set_entity_coords_and_heading(Global_35, 2918.51f, 1339.779f, 37.6952f, 339.7957f, true, false, true);
			if (func_54(&Local_13, &cLocal_9, 1, 1))
			{
				if (_is_imap_active(1798244378))
				{
					if (_0xcf45df50c7775f2a())
					{
						if (_0x0909f71b5c070797() || (func_47(&uLocal_6) && func_55(&uLocal_6) >= 15f))
						{
							_0x5a8b01199c3e79c3();
							func_49(&iLocal_4, 32);
							if (!is_ped_injured(iLocal_5))
							{
								clear_ped_tasks_immediately(iLocal_5, false, true);
								_set_entity_coords_and_heading(iLocal_5, 2920.626f, 1324.657f, 43.1178f, 67.9963f, true, false, true);
								_0x9587913b9e772d29(iLocal_5, 0);
								set_animal_tuning_bool_param(iLocal_5, 48, true);
								set_blocking_of_non_temporary_events(iLocal_5, true);
								task_stand_still(iLocal_5, -1);
							}
							set_clock_time(12, 0, 0);
							iLocal_3++;
						}
					}
				}
			}
			break;
		case 8:
			set_clock_time(12, 0, 0);
			if (!func_26(iLocal_4, 128))
			{
				if (func_56(&Local_13))
				{
					if (_is_anim_scene_started(Local_13.f_156, false) && _get_anim_scene_progress(Local_13.f_156) >= 0.55f)
					{
						func_52(&Local_13, 1);
						_set_weather_type(1500834021, true, true, false, 0f, false);
						set_timecycle_modifier("sicksun");
						set_ped_config_flag(Global_35, 336, true);
						func_57(Global_35, -1406972469, 0);
						func_49(&iLocal_4, 128);
					}
				}
			}
			if (func_58(cLocal_9, &Local_13))
			{
				func_49(&iLocal_4, 64);
				iLocal_3++;
			}
			break;
		case 9:
			func_46(&uLocal_6);
			func_59(&Local_13);
			_0x5a8b01199c3e79c3();
			_remove_imap(1798244378);
			iLocal_3++;
			break;
		case 10:
			if (func_47(&uLocal_6) && func_55(&uLocal_6) > 1f)
			{
				func_60(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
				clear_weather_type_persist();
				_0xbb6c707f20d955d4(30f);
				func_49(&iLocal_4, 16);
				func_46(&uLocal_6);
				iLocal_3++;
			}
			break;
		case 11:
			if (func_47(&uLocal_6) && func_55(&uLocal_6) > 15f)
			{
				set_ped_config_flag(Global_35, 336, false);
				return true;
			}
			break;
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_61(iParam0))
		{
			return;
		}
	}
	func_62(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_47(uParam0))
	{
		func_46(uParam0);
	}
}

bool func_26(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_27(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_61(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_28(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_63(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_29(iParam0, 1, 0);
		}
	}
	func_29(iParam0, 16, bParam1);
}

void func_29(int iParam0, int iParam1, bool bParam2)
{
	if (!func_61(iParam0))
	{
		return;
	}
	func_64(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_30(int iParam0)
{
	func_29(iParam0, 8, 0);
}

void func_31(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_61(iParam0))
		{
			return;
		}
	}
	func_62(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_33(int iParam0, int iParam1)
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
	if (func_26(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_26(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_26(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_26(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_26(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_26(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_26(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_26(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_34(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_65(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_61(iParam0))
		{
			return false;
		}
	}
	func_62(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_66(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_67(iParam0);
		}
	}
	if (func_35(iParam0, 5, 1))
	{
		set_ped_config_flag(func_66(iParam0), 137, true);
	}
}

void func_37(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_32(iParam0, 50, 1);
		func_32(iParam0, 48, 1);
		func_32(iParam0, 49, 1);
		func_32(iParam0, 51, 1);
		func_32(iParam0, 52, 1);
		func_32(iParam0, 54, 1);
		func_32(iParam0, 55, 1);
	}
	else
	{
		func_24(iParam0, 50, 1);
		func_24(iParam0, 48, 1);
		func_24(iParam0, 49, 1);
		func_24(iParam0, 51, 1);
		if (bParam3)
		{
			func_24(iParam0, 54, 1);
		}
		else
		{
			func_32(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_24(iParam0, 52, 1);
			if (bParam3)
			{
				func_24(iParam0, 55, 1);
			}
		}
		else
		{
			func_32(iParam0, 52, 1);
			if (!bParam3)
			{
				func_32(iParam0, 55, 1);
			}
		}
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_66(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_66(iParam0), 204, false);
	}
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_35(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_34(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_66(iParam0);
	if (((does_entity_exist(iVar1) && func_68(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_24(iParam0, 2, 1);
	}
	else
	{
		func_69(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_42(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_43(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_61(iParam1))
	{
		return;
	}
	iVar0 = func_42(iParam1);
	if (func_70(iParam1))
	{
		if (!func_71(iParam1))
		{
			return;
		}
	}
	func_32(iParam1, 39, 1);
	func_72(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_72(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_72(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_73(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_44()
{
	Global_1905944->f_5695 = 1;
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_46(var uParam0)
{
	func_74(uParam0, 0f);
}

bool func_47(var uParam0)
{
	return func_75(*uParam0, 1);
}

int func_48(var uParam0)
{
	if (!func_47(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_76(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_77() - round((uParam0->f_1 * 1000f)));
}

void func_49(int iParam0, int iParam1)
{
	func_78(iParam0, iParam1);
}

int func_50(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_79(iParam0, iParam1, bParam2, bParam3);
}

void func_51(var uParam0)
{
	Var0 = { func_80() };
	func_81(uParam0, &Var0);
}

void func_52(var uParam0, bool bParam1)
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_82(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_54(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_84(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_86(func_85(uParam0)))
		{
			func_87(uParam0, 64);
		}
		else
		{
			vVar0 = { func_88(uParam0) };
			if (!func_86(vVar0))
			{
				func_89(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_90(Global_35, func_85(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_91(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_92();
				uParam0->f_241 = 0;
			}
			func_93(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_94(uParam0);
			func_95(uParam0, 128, 1);
			func_95(uParam0, 256, 1);
			func_95(uParam0, 4096, 1);
			func_95(uParam0, 32768, 1);
			func_95(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_96(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_96(uParam0) >= func_91(uParam0))
				{
				}
				Var4 = { func_97(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_51(uParam0);
				}
				Var4 = { func_97(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_98(uParam0, 0, 0, 0, 0);
				func_87(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return true;
		}
		func_99(uParam0);
		if (!uParam0->f_241)
		{
			if (func_100())
			{
				func_101(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_102(uParam0) };
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
			if (!func_83(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_87(uParam0, 16777216);
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
			func_87(uParam0, 256);
			func_95(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

float func_55(var uParam0)
{
	if (!func_47(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_76(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_103() - uParam0->f_1);
}

bool func_56(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_156) && _is_anim_scene_started(uParam0->f_156, false));
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	func_104(iParam0, iParam1, bParam2, 1);
}

bool func_58(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	func_84(uParam4, &cParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_105(uParam4) != 1)
	{
		func_106(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_105(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_107(uParam4, &cParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_108(uParam4, 4);
					return false;
				}
				else if (func_109(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_108(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_110(uParam4);
				}
				func_46(&(uParam4->f_1));
				func_108(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_99(uParam4);
				if (!func_47(&(uParam4->f_1)))
				{
					func_25(&(uParam4->f_1), 0);
				}
				else if (func_55(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_108(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_54(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_108(uParam4, 4);
					}
					else if (!func_86(func_85(uParam4)) && !func_111(Global_35, func_85(uParam4), 100f, 1, 1))
					{
						func_112(1);
						start_player_teleport(get_player_index(), func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_55(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_108(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_113(1, 0);
					func_107(uParam4, &cParam0);
					func_108(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_55(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_108(uParam4, 4);
			}
			break;
		case 3:
			func_114(uParam4);
			if (func_109(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_115(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_46(&(uParam4->f_1));
					func_87(uParam4, 512);
					func_108(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_106(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(absi((func_116(uParam4) - func_117(uParam4)))) <= 2f)
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
				if (func_118(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_117(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_119(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_120(uParam4);
				func_59(uParam4);
				return true;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_46(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_87(uParam4, 512);
						func_95(uParam4, 67108864, 1);
						func_108(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_117(uParam4) <= 5000) && func_117(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_83(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_121(&(uParam4->f_213), 0);
					func_87(uParam4, 536870912);
				}
				if (func_117(uParam4) >= 5000 && func_117(uParam4) <= (func_116(uParam4) - 5000))
				{
					func_122();
				}
			}
			break;
		case 6:
			if (func_119(uParam4))
			{
				func_120(uParam4);
				func_59(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
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
						func_87(uParam4, 1073741824);
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
					Stack.Push(!func_109(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_108(uParam4, 3);
					}
					else if (func_55(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_108(uParam4, 3);
					}
				}
				if (func_105(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_108(uParam4, 4);
			break;
	}
	return false;
}

void func_59(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_123(uParam0, 1);
		func_121(&(uParam0->f_213), uParam0->f_224);
		func_92();
		func_87(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_124(uParam0);
	func_108(uParam0, 1);
	func_94(uParam0);
	func_125(uParam0);
	func_126(uParam0);
	func_127(uParam0, 4);
	func_51(uParam0);
	func_52(uParam0, 1);
	func_93(uParam0);
	func_39(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_129(!func_128(uParam0->f_213, 128));
	if (!func_128(uParam0->f_213, 128))
	{
		func_130();
	}
}

bool func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_131(iParam0, &Var0);
}

bool func_61(int iParam0)
{
	return iParam0 > -1;
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_63(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_64(var uParam0, int iParam1, bool bParam2)
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

void func_65(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_132(iParam0);
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

int func_66(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_67(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_66(iParam0)))
		{
			func_133(iParam0, 67108864, 1);
			func_32(iParam0, 19, 1);
		}
	}
}

float func_68(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_69(int iParam0)
{
	iVar0 = func_66(iParam0);
	iVar1 = func_34(iParam0, 0);
	func_134(iParam0, iVar0);
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

bool func_70(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_71(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	if (!func_61(iParam0))
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

int func_73(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	iVar0 = func_42(iParam0);
	if (func_33(iVar0, 0))
	{
		if (func_33(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_70(iParam0)) || func_71(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_135(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_136(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_137(iParam0);
					_0x7b204f88f6c3d287(func_138(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_138(iParam0, 0));
					func_139(iParam0);
				}
			}
			else
			{
				if (func_27(iParam0, 32768, 1))
				{
					iVar2 = func_138(iParam0, 0);
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
		if (func_33((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_27(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_137(iParam0);
				_0x7b204f88f6c3d287(func_138(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_138(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_137(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_140(iParam0, 0);
	return 1;
}

void func_74(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_103() - fParam1);
	func_141(uParam0, 1);
	func_142(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_76(var uParam0)
{
	return func_75(*uParam0, 2);
}

int func_77()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_78(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_79(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_143(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_144(iParam0);
	return func_145(iParam1, iVar0, bParam2, 1);
}

struct<8> func_80()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_81(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_146(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_147(uParam0, iParam1);
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
		iVar1 = func_148(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_149(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_150(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_151(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_152(uParam0->f_13[iVar0], 2);
		}
	}
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0, char* sParam1)
{
	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_153("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_153("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_87(uParam0, 8192);
}

Vector3 func_85(var uParam0)
{
	return uParam0->f_5;
}

bool func_86(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_88(var uParam0)
{
	MemCopy(&uVar0, {func_154(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_155(Global_35), &vVar14, false, 0, 2))
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

void func_89(var uParam0, vector3 vParam1)
{
	if (func_86(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_90(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_91(var uParam0)
{
	return uParam0->f_147;
}

void func_92()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_156(Var0);
	}
}

void func_93(var uParam0)
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

void func_94(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_157(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_95(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_95(uParam0, 16, 1);
}

void func_95(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

float func_96(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_97(var uParam0)
{
	return uParam0->f_158;
}

void func_98(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_158(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_159());
		func_87(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_160(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_87(uParam0, 16);
	}
}

void func_99(var uParam0)
{
	if ((!func_83(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_161(uParam0);
		func_162(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_87(uParam0, 32768);
	}
}

bool func_100()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_101(int iParam0)
{
	if (func_163(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_156(Var0);
}

struct<8> func_102(var uParam0)
{
	Var0 = { func_164(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_165() };
	}
	return Var0;
}

float func_103()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_104(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_166(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_144(iParam1);
	return func_167(iParam0, iVar0, bParam2, bParam2);
}

int func_105(var uParam0)
{
	return *uParam0;
}

void func_106(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_83(uParam0, 512))
	{
		if (!func_128(uParam0->f_213, 128))
		{
			func_130();
		}
		return;
	}
	if ((func_118(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_155(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_155(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_128(uParam0->f_213, 128))
		{
			func_130();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_168(iVar1))
		{
			if (func_169(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_128(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_170(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_130();
	}
}

void func_107(var uParam0, char* sParam1)
{
	if (func_105(uParam0) == 2 && (func_171(uParam0->f_212, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_102(uParam0) };
		func_172(uParam0, &Var0);
	}
	func_173(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_52(uParam0, 0);
	}
	if (func_174())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_175();
	}
	if (func_176())
	{
		func_177(1);
	}
	func_98(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_178(uParam0, cVar8);
	func_113(1, 0);
	func_93(uParam0);
	if (func_179() && _0x6f1f0b17109309da(uParam0->f_156, func_155(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_109(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_180(uParam0);
	func_162(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_46(&(uParam0->f_1));
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_110(var uParam0)
{
	Var0 = { func_102(uParam0) };
	func_81(uParam0, &Var0);
}

bool func_111(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_181(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_112(int iParam0)
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

void func_113(bool bParam0, int iParam1)
{
	if (func_182())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_183())
		{
			func_184(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_114(var uParam0)
{
	if (!func_83(uParam0, 4))
	{
		if (func_171(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_185(uParam0) };
		if (!func_171(uParam0->f_212, 524288))
		{
			func_186(&(uParam0->f_224));
		}
		func_187(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_188(uParam0, 0f, 0f, 0f);
		func_189(uParam0);
		func_190(uParam0);
		func_191(uParam0, 0f, 0f, 0f, 0, 0);
		func_192(uParam0);
		func_87(uParam0, 4);
		func_123(uParam0, 0);
		func_193(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

bool func_115(var uParam0, bool bParam1)
{
	if (func_83(uParam0, 262144))
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
		func_87(uParam0, 262144);
		func_123(uParam0, 1);
		return true;
	}
	return false;
}

int func_116(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

int func_117(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_118(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_194(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_119(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_83(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_83(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_120(var uParam0)
{
	if (((func_83(uParam0, 1073741824) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_121(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_195(2000);
	Global_16 = 0;
	func_196();
	set_entity_invincible(Global_35, func_128(*uParam0, 8));
	if (!func_128(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_128(*uParam0, 2) || func_128(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_128(*uParam0, 16))
	{
		func_197(1);
	}
	if (func_128(*uParam0, 32))
	{
		func_198(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_199(-1623728698, 0);
	}
	func_193(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_122()
{
	Global_1935630->f_52 = 1;
}

void func_123(var uParam0, bool bParam1)
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

void func_124(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_200(uParam0);
	func_89(uParam0, 0f, 0f, 0f);
	func_201(uParam0);
}

void func_125(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_126(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_127(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_152(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_129(bool bParam0)
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
		func_130();
	}
	_0xa0cefcea390aab9b(0);
}

void func_130()
{
	if (func_202(Global_43801))
	{
		func_203(&Global_43801, 0, 0);
	}
}

bool func_131(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_132(int iParam0)
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

void func_133(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_134(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_204(iParam1);
	}
}

float func_135(int iParam0, int iParam1, bool bParam2)
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
	return func_181(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_136(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_205(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_137(int iParam0)
{
	iVar0 = func_42(iParam0);
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

int func_138(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_206(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_139(int iParam0)
{
	if (!func_61(iParam0))
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

void func_140(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_143(int iParam0)
{
	Var3 = -961687407;
	if (func_207() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	_0x91ded5dd64bb2691(&Var3);
	if (!_0xed4413cee1bf142c(&Var3))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = func_208(iParam0);
	if (func_209(iVar0, &iVar1))
	{
		func_210(iVar1, iVar2);
	}
	while (_0xed4413cee1bf142c(&Var3))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_209(iVar0, &iVar1))
		{
		}
		else
		{
			func_210(iVar1, iVar2);
		}
	}
	return true;
}

int func_144(int iParam0)
{
	Var1 = -961687407;
	if (func_207() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_211(iVar0);
}

int func_145(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_212(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_212(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_213(0))
	{
	}
	func_193(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

char* func_146(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_155(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_214(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_215(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_147(var uParam0, int iParam1)
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

int func_148(var uParam0, char* sParam1)
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

void func_149(var uParam0, int iParam1)
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

int func_150(var uParam0)
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

void func_151(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_153(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

struct<4> func_154(var uParam0)
{
	return uParam0->f_152;
}

char* func_155(int iParam0)
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
	return func_216(iVar0);
}

void func_156(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_217(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_217(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_218(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_219(8);
}

void func_157(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

bool func_158(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

char* func_159()
{
	return "unnamed";
}

void func_160(var uParam0, var uParam1, int iParam2, bool bParam3)
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

void func_161(var uParam0)
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
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_194(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_151(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_162(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_194(uParam0->f_13[iVar0], 2))
		{
			if (func_194(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_220(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_194(uParam0->f_13[iVar0], 16))
					{
						func_221(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_163(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<8> func_164(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_165()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_166(int iParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1946804->f_2535.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_223(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_224(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_167(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_212(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_212(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_225(0))
	{
	}
	func_193(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_168(int iParam0)
{
	if (func_226(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_169(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return false;
	}
	return !func_227(iParam0, 4);
}

bool func_170(bool bParam0, bool bParam1)
{
	if (!func_202(Global_43801))
	{
		Global_43801 = func_228("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_229(Global_43801, 0, 1);
		func_230(Global_43801, 6, 1);
		if (bParam1)
		{
			func_230(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_169(Global_43801, 0))
		{
			func_231(Global_43801, 1, 1);
		}
		if (func_232(Global_43801, 1) != 0f && bParam0)
		{
			func_229(Global_43801, 1, 1);
		}
		else
		{
			func_229(Global_43801, 0, 1);
		}
		return func_233(Global_43801, 1);
	}
	return false;
}

bool func_171(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_172(var uParam0, char* sParam1)
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
	func_81(uParam0, sParam1);
	func_95(uParam0, 2097152, 1);
	func_87(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_173(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_234(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_235(&(uParam0->f_212), 256);
	}
}

bool func_174()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_175()
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

bool func_176()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_177(bool bParam0)
{
	if (func_176())
	{
		Global_1357509 = 1;
	}
	if (func_236(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_178(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_179()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_180(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_237(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_80() };
	func_237(uParam0, &Var1);
	Var1 = { func_102(uParam0) };
	func_237(uParam0, &Var1);
}

float func_181(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_182()
{
	return func_226(_0xc17f69e1418cd11f(3));
}

bool func_183()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_184(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_185(var uParam0)
{
	return uParam0->f_214;
}

void func_186(var uParam0)
{
	if (func_238(&iVar0))
	{
		if (func_239(iVar0, 0))
		{
			if (func_240(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_198(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_239(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_187(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_241(0, 0);
		func_242(-1);
	}
	func_112(1);
	set_entity_invincible(Global_35, true);
	if (!func_171(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_171(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_171(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_171(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_171(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_171(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_171(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_171(*uParam0, 4) && !func_171(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_171(*uParam0, 2048))
	{
		func_243(0, 0);
	}
	if (func_171(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_171(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_171(*uParam0, 8192))
	{
		func_244();
	}
	if (!func_171(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_171(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_171(*uParam0, 1024))
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
		if (!func_171(*uParam0, 16))
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
						if (func_245() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_86(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_246(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_247(2);
						func_248(-1);
						func_249(vVar3);
						func_251(func_250());
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
	if (!func_171(*uParam0, 4096))
	{
		func_221(Global_35);
	}
	if (!func_171(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_171(*uParam0, 2097152))
	{
		if (func_252() || _0x50f124e6ef188b22(Global_35))
		{
			func_253(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_188(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_189(var uParam0)
{
	if (func_83(uParam0, 2048) && !func_86(func_254(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_256(iVar1, func_254(uParam0), func_255(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_256(iVar3, func_254(uParam0), func_255(uParam0), 2, 1073741824);
		}
	}
}

void func_190(var uParam0)
{
	if ((func_83(uParam0, 268435456) && !func_86(func_254(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_254(uParam0) };
			func_256(iVar0, vVar1, func_257(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_191(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_86(vParam1))
	{
		func_95(uParam0, 2048, 1);
	}
	else
	{
		func_87(uParam0, 2048);
		if (bParam5)
		{
			func_87(uParam0, -2147483648);
		}
	}
}

void func_192(var uParam0)
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
					if (!func_194(uParam0->f_13[iVar0], 8))
					{
						if (func_259(func_258(iVar1, 0, 1, 0)))
						{
							if (!func_260(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_259(func_258(iVar1, 1, 1, 0)))
						{
							if (!func_260(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_193(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_207() != -1;
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
			func_219(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_261(iParam1, 29, bVar4, 1, 0);
			func_261(iParam1, 31, bVar4, 1, 0);
			func_261(iParam1, 30, bVar4, 1, 0);
			func_261(iParam1, 22, bVar4, 1, 0);
			func_261(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_262(32768) && func_263(1108822547, 8)) && func_264(10, iParam3))
	{
		func_265(iParam1, 0, 1);
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
			iVar3 = func_266(iVar1, 1);
			if (func_263(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_264(iVar1, iParam3))
				{
				}
				else if ((func_263(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_263(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_261(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_267(iVar3, 1, 6);
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
								func_261(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_263(iVar3, 1))
							{
								func_268(iVar3, 1, 6);
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

bool func_194(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_195(int iParam0)
{
	func_269();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_196()
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

void func_197(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_270(bParam0);
}

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_271(iParam1, 1, 0) };
		iParam3 = func_272(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_274(iParam1, iParam2, func_273(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_275(1, (func_207() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_273(iParam3, 1)])
			{
				func_212(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_262(32768) && iParam1 != &Global_1946804->f_57[func_273(iParam3, 1)])
			{
				func_276();
				func_212(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_212(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_277(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_212(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_101(0);
			func_278(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_212(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_199(int iParam0, int iParam1)
{
	Var0 = { func_271(iParam0, 0, 0) };
	Var5 = { func_279(iParam0, Var0, Var0.f_4, 0) };
	if (func_280(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_281(0), &Var5, iParam1);
}

void func_200(var uParam0)
{
	uParam0->f_166 = { Var0 };
}

void func_201(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0], "", 64);
		iVar0++;
	}
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
	iVar0 = func_282(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_283(iVar0);
	*uParam0 = 0;
}

void func_204(int iParam0)
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

int func_205(int iParam0)
{
	iVar0 = 0;
	if (!func_61(iParam0))
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
	if (!func_61(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_206(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_136(iParam0, 1);
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

int func_207()
{
	return Global_1572887->f_12;
}

int func_208(int iParam0)
{
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = iParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

bool func_209(int iParam0, int iParam1)
{
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_240(func_284(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_273(iVar0, 1);
	return true;
}

void func_210(int iParam0, int iParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || iParam1);
}

int func_211(int iParam0)
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

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_219(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_285(Var0);
}

bool func_213(bool bParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_266(iVar0, 1);
		if (func_263(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_286(iVar0) == -1)
			{
				func_287(iVar0, 0);
				func_288(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_267(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

char* func_214(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_289(iVar0);
}

char* func_215(int iParam0)
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

char* func_216(int iParam0)
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

bool func_217(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_218(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_219(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_220(var uParam0, char* sParam1, int iParam2, int iParam3)
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

void func_221(int iParam0)
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

int func_222(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_223(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_224(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

bool func_225(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_266(iVar0, 1);
		if (!func_263(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_286(iVar0) == -1)
			{
				func_287(iVar0, 0);
				func_288(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_268(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_226(int iParam0)
{
	return iParam0 != 0;
}

bool func_227(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_228(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_227(iVar0, 2))
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
		func_290(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_282(iParam0);
	func_291(iVar0, bParam1);
}

void func_230(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_282(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_231(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_202(iParam0))
	{
		return;
	}
	iVar0 = func_282(iParam0);
	if (bParam1)
	{
		func_292(iParam0, 4);
		func_291(iVar0, 1);
		func_293(iVar0, 1);
	}
	else
	{
		func_294(iParam0, 4);
		func_293(iVar0, 0);
	}
}

float func_232(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return 0f;
	}
	iVar0 = func_282(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_233(int iParam0, bool bParam1)
{
	if (bParam1 && !func_202(iParam0))
	{
		return false;
	}
	iVar0 = func_282(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_234(var uParam0)
{
	Var0 = { func_97(uParam0) };
	Var8 = { func_102(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_236(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_295(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_237(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_97(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_156, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_156, sParam1);
	}
}

bool func_238(int iParam0)
{
	if (-1829635046 == func_296(81053684))
	{
		if (func_297(iParam0))
		{
			return true;
		}
	}
	else if (func_298(-525676072, iParam0))
	{
		if (func_297(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_239(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_240(int iParam0)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_241(int iParam0, bool bParam1)
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

void func_242(int iParam0)
{
	if (func_207() != -1)
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

void func_243(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_259(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_299(1);
	}
}

void func_244()
{
	iVar0 = func_258(Global_35, 9, 1, 0);
	if (func_259(iVar0))
	{
		return;
	}
	iVar0 = func_258(Global_35, 7, 1, 0);
	if (func_259(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_258(Global_35, 0, 1, 0);
	if (func_259(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_258(Global_35, 1, 1, 0);
	if (func_259(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_258(Global_35, 18, 1, 0);
	if (func_259(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_300();
	if (func_259(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_301(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_302(6291456, 0);
	if (func_259(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_301(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_245()
{
	return Global_1900383->f_393;
}

int func_246(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_158(*uParam0, 0f, 0f, 0f))
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

void func_247(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_248(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_249(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_250()
{
	return &Global_1899515;
}

void func_251(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_252()
{
	return (func_303() || func_304());
}

void func_253(bool bParam0)
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
	func_305(0f);
	Global_1935436->f_11 = 1;
	if (func_306())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_307();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_254(var uParam0)
{
	return uParam0->f_217;
}

float func_255(var uParam0)
{
	return uParam0->f_220;
}

void func_256(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_308(Global_35) && is_player_teleport_active())
	{
	}
	if (func_309(iParam0))
	{
		if (func_310(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_26(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_256(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_256(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_26(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_26(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_26(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_26(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_26(iParam5, 129))
	{
		if (func_26(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_26(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_26(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_26(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_309(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_26(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_26(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

float func_257(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_258(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_259(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_260(var uParam0, int iParam1)
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

void func_261(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_266(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_311(iParam4);
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

bool func_262(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_263(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_273(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_264(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_265(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_263(1108822547, 6))
	{
		if (bParam2)
		{
			func_261(iParam0, iVar0, func_207() != -1, 0, 0);
			func_267(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_268(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_266(int iParam0, int iParam1)
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

void func_267(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_273(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_273(iParam0, 1)])->f_10 || iParam1);
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_273(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_273(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_273(iParam0, 1)])->f_10 && iParam1));
}

void func_269()
{
	Global_1911774 = 1;
}

void func_270(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

struct<5> func_271(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_312(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_313(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_279(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_314(bParam1) };
			if (bParam2 && func_315(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_316(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_316(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_317(iParam0, &Var5, 1728382685))
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
			Var0 = { func_318(bParam1) };
			switch (func_240(iParam0))
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
			if (func_319(iParam0, -1823706425))
			{
				Var0 = { func_279(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_319(iParam0, -1483207246))
			{
				Var0 = { func_279(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_320(Var0, &Var27, bParam1, 0))
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

int func_272(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_266(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_273(int iParam0, int iParam1)
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

bool func_274(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_321();
	if (iParam2 == 39)
	{
		Var0 = { func_271(iParam0, 1, 0) };
		iParam2 = func_273(func_272(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_322(iParam0, 866047851) && func_323(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_262(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_324(func_266(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_325(iParam2);
	func_287(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_326(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_326(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_327(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_328(iParam0, iParam2, iParam1, func_207() != -1);
	if (bParam4)
	{
		func_329(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_329(&(Global_1946804->f_1378), 1, 0);
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
				func_268(func_266(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_275(bool bParam0, bool bParam1, bool bParam2)
{
	func_330(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_276()
{
	func_331(&(Global_1946804->f_2776));
	func_332(32768);
	func_268(1108822547, 8, 6);
}

int func_277(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_273(iParam0, 1);
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

void func_278(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_156(Var0);
}

struct<4> func_279(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_239(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_281(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_280(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_279(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_281(bParam6), &Var0, 0);
	return uVar4;
}

int func_281(bool bParam0)
{
	if (func_207() == -1)
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

int func_282(int iParam0)
{
	return iParam0;
}

void func_283(int iParam0)
{
	if (!func_333(iParam0))
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

int func_284(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_273(iParam0, 1)]);
}

void func_285(struct<4> Param0)
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
			if (func_217(Param0))
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
			func_218(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_219(8);
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
			if (func_217(Param0))
			{
				return;
			}
			func_218(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_219(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_278(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_286(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_287(int iParam0, int iParam1)
{
	func_334(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

char* func_289(int iParam0)
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

void func_290(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_291(iParam0, 1);
	func_293(iParam0, 1);
	func_294(iParam0, 128);
}

void func_291(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_227(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_292(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_293(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_294(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_295(int iParam0)
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

int func_296(int iParam0)
{
	iVar0 = func_273(func_335(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_297(int iParam0)
{
	if (func_298(81053684, iParam0))
	{
		return true;
	}
	if (func_298(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_298(int iParam0, int iParam1)
{
	iVar1 = func_273(func_335(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_240(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_299(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_300()
{
	if (!func_259(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_259(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_259(iVar4) && iVar4 != iVar0)
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
	if (func_207() == -1 && !func_336(iVar0))
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
				if (func_336(-183018591))
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
		if (iParam0 != Global_35 && func_259(iVar0))
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
		func_337(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_338(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_339(iVar0))
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

int func_302(int iParam0, int iParam1)
{
	return func_340(&uVar0, iParam0, iParam1);
}

bool func_303()
{
	return &Global_1935436 == 1;
}

bool func_304()
{
	return &Global_1935436 == 2;
}

void func_305(float fParam0)
{
	func_341(10, fParam0);
}

bool func_306()
{
	if (func_207() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_307()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_308(var uParam0)
{
	return uParam0;
}

bool func_309(int iParam0)
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

bool func_310(int iParam0)
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

int func_311(int iParam0)
{
	iVar0 = func_240(iParam0);
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

struct<4> func_312(bool bParam0)
{
	return func_279(1328661203, func_342(), -1591664384, bParam0);
}

int func_313(int iParam0)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_314(bool bParam0)
{
	iVar0 = func_281(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_279(923904168, func_312(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_279(923904168, func_312(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_279(923904168, func_312(bParam0), -740156546, 0);
}

bool func_315(int iParam0, bool bParam1)
{
	if (func_240(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_343(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_316(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_280(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_317(int iParam0, var uParam1, int iParam2)
{
	if (func_344(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_318(bool bParam0)
{
	iVar0 = func_281(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_279(271701509, func_312(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_279(271701509, func_312(bParam0), 12999093, 0);
}

bool func_319(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_240(iParam0);
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

bool func_320(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_281(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_321()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_322(int iParam0, int iParam1)
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

int func_323(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_322(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_324(int iParam0)
{
	func_268(iParam0, 8, 6);
}

void func_325(int iParam0)
{
	func_345(&(Global_1946804->f_2589), iParam0);
}

void func_326(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_327(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_240(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_264(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_287(iVar1, iVar3);
		}
	}
	if (func_346(-1586649372) && func_264(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_287(iVar1, iVar3);
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
						func_287(iVar1, iVar3);
					}
				}
			}
			func_347(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_347(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_287(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_347(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_287(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_287(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_347(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_347(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_287(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_347(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_287(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_287(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_240(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_287(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_348(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_240(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_287(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_322(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_287(iVar1, iVar3);
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
						func_287(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_348(&(Global_1946804->f_1497.f_1[iVar1])) || func_322(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_287(iVar1, iVar3);
					}
				}
			}
			switch (func_240(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_240(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_287(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_240(&(uParam0->f_1[iVar1])) || func_322(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_287(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_349(0);
	if (iParam2 != 0 && func_350(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_351(iParam0, func_266(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_329(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_207() != -1;
	iVar7 = func_349(0);
	if (func_262(32768))
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
			iVar5 = func_266(iVar0, 1);
			if (func_263(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_263(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_352(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_353(uParam0);
				if (iVar3 > 0)
				{
					if (!func_262(524288))
					{
						func_219(524288);
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
							iVar5 = func_266(iVar0, 1);
							if (func_263(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_263(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_352(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_287(iVar0, iParam2);
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
					func_332(524288);
				}
			}
		}
	}
}

void func_330(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_354(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_207() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_355(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_356(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_356(Global_40.f_7729);
				Global_1946804->f_1378 = func_356(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_357(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_358(0, 1);
	}
}

void func_331(var uParam0)
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

void func_332(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_333(int iParam0)
{
	return func_227(iParam0, 2);
}

void func_334(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_359(uParam0, 1))
	{
		func_360(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_335(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_272(iVar0);
}

bool func_336(int iParam0)
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

int func_337(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_271(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_361((386 + iVar28), 1);
			if (func_316(iParam0, &Var0, iVar5, 0))
			{
				if (func_317(iParam0, &Var6, iVar5))
				{
					Var29 = { func_279(iParam0, Var0, iVar5, 0) };
					func_362(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_363(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_364(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_365(iParam0, iParam1);
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

void func_338(int iParam0, int iParam1, float fParam2)
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

bool func_339(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_340(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_366(iParam1, 128);
	if (func_367("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_368(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_259(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_366(iParam1, 512) && func_344(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_369(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_366(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_366(iParam1, 4))) && (!func_369(Var4.f_4) || func_366(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_366(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_366(iParam1, 1048576)))
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
		func_370(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_366(iParam1, 512) && !func_366(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_340(uParam0, iParam1, iParam2);
	}
	else if (func_366(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_341(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		uVar2 = func_371(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_372(1, bVar1, 1, uVar2);
		func_373(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_374(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_375();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_374(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_374(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

struct<4> func_342()
{
	return Var0;
}

bool func_343(int iParam0)
{
	if (!func_376(iParam0))
	{
		return false;
	}
	return func_377(iParam0);
}

bool func_344(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_281(0);
	*uParam1 = { func_279(iParam0, func_314(0), iParam3, 0) };
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

void func_345(var uParam0, int iParam1)
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
			if ((func_378(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_378(uParam0->f_2[iVar0], 1))
				{
					func_288(uParam0->f_2[iVar0], 2, 6);
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

bool func_346(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_273(iParam0, 1)] != &Global_1946804->f_57[func_273(iParam0, 1)];
}

void func_347(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_287(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_287(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_287(iVar2, iVar0);
		}
	}
}

bool func_348(int iParam0)
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

int func_349(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_379();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_350(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_351(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_352(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_273(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_262(524288))
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

int func_353(var uParam0)
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

void func_354(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_207() == -1)
	{
		func_380(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_381(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_355(int iParam0, int iParam1)
{
	if (func_207() == -1)
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

int func_356(int iParam0)
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
			return -1541763703;
			return 387052410;
			return -361288914;
			return -911054515;
			return 1084200963;
			return 1847948074;
			return -1212526764;
			return 1851440270;
			return -2028985700;
			return 1074435214;
			return -883015675;
			return -1047155604;
			return 1123231221;
			return 1866989210;
			return 478183719;
			return -1698955868;
			return -2029378634;
			return 1339864416;
			return 890998115;
			return -1376288999;
			return -1041123771;
			return 1389254668;
			return -346112633;
			return 773309172;
			return 0;
		}

void func_357(int iParam0, bool bParam1, int iParam2)
{
	func_382(&(Global_1946804->f_1378), iParam0);
	func_383(2, iParam0, 6);
	if (bParam1)
	{
		func_358(0, 1);
	}
}

void func_358(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_384(0);
	}
	if (bParam0)
	{
		func_219(8);
		func_219(512);
	}
	else
	{
		func_219(8);
		func_219(16);
	}
}

bool func_359(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_360(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_361(int iParam0, int iParam1)
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

bool func_362(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_385(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_320(*uParam1, &Var0, bParam6, 0))
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
	if (!func_363(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_281(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_363(bool bParam0)
{
	if (func_207() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_281(bParam0));
}

int func_364(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_386(iParam0))
	{
		return 0;
	}
	if (!func_363(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_365(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_387(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_366(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_367(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_281(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_368(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_369(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_370(int iParam0)
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

char* func_371(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_372(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_373(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_388(0, 1, bParam0, bParam1);
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

int func_374(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_375()
{
	func_389();
	func_390();
	func_391();
}

bool func_376(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_377(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_378(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_379()
{
	return Global_1946804->f_1;
}

void func_380(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_381(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_382(var uParam0, int iParam1)
{
	if (func_207() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_380(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_381(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	if (func_207() == -1)
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

void func_384(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_385(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_386(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_387(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

char* func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_371(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_371(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_389()
{
	if (func_392())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_393(2);
	}
	if (Global_1347477->f_119)
	{
		return func_393(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_394();
	fVar2 = func_395();
	fVar3 = func_396();
	fVar4 = func_397();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_398()));
	fVar7 = (func_393(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_399(3, round((to_float(iVar8) * fVar10)), 0);
	func_400(3, fVar9, fVar9 > 100f);
	return func_401(fVar7, -100f, 100f);
}

float func_390()
{
	if (func_392())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_393(1);
	}
	if (Global_1347477->f_119)
	{
		return func_393(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_394();
	fVar2 = func_395();
	fVar3 = func_396();
	fVar4 = func_397();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_398()));
	fVar7 = (func_393(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_399(2, round((to_float(iVar8) * fVar10)), 0);
	func_400(2, fVar9, fVar9 > 100f);
	return func_401(fVar7, -100f, 100f);
}

float func_391()
{
	if (func_392())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_393(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_402())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_403())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_393(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_394();
	fVar2 = func_395();
	fVar3 = func_396();
	fVar4 = func_397();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_398()));
	fVar7 = (func_393(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_399(1, round((to_float(iVar8) * fVar10)), 0);
	func_400(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_393(0);
	}
	return func_401(fVar7, -100f, 100f);
}

bool func_392()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_393(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_394()
{
	fVar0 = func_404(13);
	iVar1 = func_405(fVar0);
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

float func_395()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_396()
{
	if (func_406())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_397()
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

float func_398()
{
	return Global_1955565->f_3;
}

void func_399(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_388(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_400(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_388(iParam0, 2, 0, 0);
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

float func_401(float fParam0, float fParam1, float fParam2)
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

bool func_402()
{
	return func_404(12) <= -99f;
}

bool func_403()
{
	return func_404(12) >= 99f;
}

float func_404(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_405(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_406()
{
	return _unlock_is_unlocked(-121456797);
}

