void __EntryFunction__()
{
	vLocal_7 = { -1318.148f, 2436.259f, 309.3206f };
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_15);
	}
	func_2(&Local_15, &uScriptParam_0);
	while (!func_3(&Local_15))
	{
		func_4(&Local_15);
		switch (func_5(Local_15))
		{
			case 0:
				if (func_6(&Local_15))
				{
					func_7(&Local_15, 1);
				}
				break;
			case 1:
				if (func_8(&Local_15))
				{
					func_7(&Local_15, 2);
				}
				break;
			case 2:
				if (func_9(&Local_15))
				{
					func_7(&Local_15, 3);
				}
				break;
			case 3:
				func_1(&Local_15);
				break;
		}
		wait(0);
	}
	func_1(&Local_15);
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
	if (!_is_anim_scene_loaded(iLocal_10, true, false))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(uParam0->f_2, true, false))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(uParam0->f_2, "Intro");
	return _0x23e33cb9f4a3f547(uParam0->f_2, "Intro");
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && _does_thread_exist(uParam0->f_1)) && is_thread_active(uParam0->f_1, false))
	{
		return false;
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
	func_26(Global_1935630, 1048576);
	if (is_valid_interior(iLocal_4) && bLocal_5)
	{
		unpin_interior(iLocal_4);
	}
	func_27(0);
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
	return func_28(iParam0, 16, 1);
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
	func_29(iParam0, 0);
	func_30(iParam0, 4, 0);
	func_31(iParam0);
	func_32(iParam0);
	func_33(iParam0, 37, 1);
	bVar0 = func_34(Global_1360165[iParam0], 0);
	iVar1 = func_35(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_36(iParam0, 64, 1))
	{
		func_33(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_33(iParam0, 33, 1);
		func_33(iParam0, 34, 1);
		func_37(iParam0, 1056964608, -1, 1061158912);
		func_38(iParam0, 1, 1, 0);
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
			func_39(iParam0, 0);
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
		func_33(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_24(iParam0, 33, 1);
		func_38(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_25(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_40(&((*Global_1360165)[iParam0]->f_130));
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
			func_41(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_36(iParam0, 45, 1))
	{
		func_33(iParam0, 45, 1);
	}
	func_42(iParam0, 16, 1);
	func_33(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_34(func_43(iParam0), 0))
		{
			func_44(0, iParam0, bParam3, 0, bParam2);
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
	func_45(Global_1935630, 1048576);
	iLocal_10 = _create_anim_scene("script@titles@title_gen_fewdayslater_onblack", 2, 0, false, true);
	load_anim_scene(iLocal_10);
	uParam0->f_2 = _create_anim_scene("script@timelapse@wnt4camp_intro", 2, "Intro", false, true);
	load_anim_scene(uParam0->f_2);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!func_46(&uLocal_11))
	{
		func_25(&uLocal_11, 0);
		_0x6339c1ea3979b5f7("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SCENES");
		func_27(1);
	}
	else if (func_47(&uLocal_11) >= 1f)
	{
		draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
		do_screen_fade_in(0);
		set_entity_coords(Global_35, vLocal_7, false, false, true, true);
		start_anim_scene(iLocal_10);
		set_bit(&(Global_1956580->f_1), 5);
		_0x9428447ded71fc7e("DEATH_FAIL_RESPAWN_SCENES");
		_0x6339c1ea3979b5f7("Pass_Time", "Chapter_Screen_Scenes");
		_hide_hud_component(-1679307491);
		prefetch_srl("script@story@WNT4@PRE_INT");
		_0xef1a8a484118735e();
		return 1;
	}
	return 0;
}

bool func_22()
{
	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	iLocal_4 = get_interior_at_coords(vLocal_7);
	if (is_valid_interior(iLocal_4))
	{
		if (!bLocal_5)
		{
			pin_interior_in_memory(iLocal_4);
			bLocal_5 = true;
		}
	}
	if (!bLocal_3)
	{
		func_48(3, 0, 0);
		disable_control_action(0, -668070958, false);
		disable_control_action(0, 1250966545, false);
		if (!bLocal_6 && func_49(1, 0, 0))
		{
			bLocal_6 = true;
			_set_scenario_group_enabled_hash(-470125497, true);
		}
		if (is_srl_loaded())
		{
		}
		if (((((func_50((*Global_1835011)[3]->f_1) && func_52(func_51((*Global_1835011)[3]->f_1), 4)) && !_is_anim_scene_started(uParam0->f_2, false)) && ((_get_anim_scene_time(iLocal_10) >= _get_anim_scene_duration(iLocal_10) || _is_anim_scene_active(iLocal_10)) || _0xf94692eb9dc15d74(iLocal_10, 0))) && bLocal_6) && is_srl_loaded())
		{
			_hide_hud_component(-1679307491);
			_delete_anim_scene(iLocal_10);
			_0x9428447ded71fc7e("Chapter_Screen_Scenes");
			clear_bit(&(Global_1956580->f_1), 5);
			set_anim_scene_entity(uParam0->f_2, "ARTHUR", Global_35, 0);
			start_anim_scene(uParam0->f_2);
			_set_anim_scene_playback_list_bool(uParam0->f_2, "Intro", true);
			bLocal_3 = true;
			begin_srl();
			set_srl_time(0f);
		}
	}
	else
	{
		switch (iLocal_14)
		{
			case 0:
				if (_is_anim_scene_started(uParam0->f_2, false) && _0x8d81e7824b7753f7(uParam0->f_2, "Shot1", 1))
				{
					_set_weather_type(1632247697, true, true, false, 0f, false);
					set_clock_time(9, 0, 0);
					set_timecycle_modifier("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 1:
				if (_is_anim_scene_started(uParam0->f_2, false) && _0x8d81e7824b7753f7(uParam0->f_2, "SHOT2", 1))
				{
					_set_weather_type(1632247697, true, true, false, 0f, false);
					set_clock_time(9, 0, 0);
					set_timecycle_modifier("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 2:
				if (_is_anim_scene_started(uParam0->f_2, false) && _0x8d81e7824b7753f7(uParam0->f_2, "SHOT3", 1))
				{
					_0x3373779baf7caf48("snowclearing", "snowclearing_mud1");
					_set_weather_type(1679686673, true, true, false, 0f, false);
					set_clock_time(7, 0, 0);
					set_timecycle_modifier("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
		}
		set_srl_time((_get_anim_scene_time(uParam0->f_2) * 1000f));
		if ((_get_anim_scene_time(uParam0->f_2) >= _get_anim_scene_duration(uParam0->f_2) || _is_anim_scene_active(uParam0->f_2)) || _0x73616e64696c132e(uParam0->f_2, 1))
		{
			if (func_20(&Global_1935630, 1048576))
			{
				func_26(Global_1935630, 1048576);
				end_srl();
			}
			if (func_53())
			{
				return true;
			}
		}
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_46(uParam0))
	{
		func_56(uParam0);
	}
}

void func_26(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_27(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0))
		{
			iVar1 = func_57(iVar0);
			if (does_entity_exist(iVar1))
			{
				stop_ped_speaking(iVar1, bParam0);
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_29(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_58(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_30(iParam0, 1, 0);
		}
	}
	func_30(iParam0, 16, bParam1);
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	func_59(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_31(int iParam0)
{
	func_30(iParam0, 8, 0);
}

void func_32(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_34(int iParam0, int iParam1)
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
	if (func_60(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_60(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_60(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_60(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_60(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_60(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_60(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_60(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_35(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_61(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_36(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_12(iParam0))
	{
		iVar1 = func_57(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_62(iParam0);
		}
	}
	if (func_36(iParam0, 5, 1))
	{
		set_ped_config_flag(func_57(iParam0), 137, true);
	}
}

void func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_33(iParam0, 50, 1);
		func_33(iParam0, 48, 1);
		func_33(iParam0, 49, 1);
		func_33(iParam0, 51, 1);
		func_33(iParam0, 52, 1);
		func_33(iParam0, 54, 1);
		func_33(iParam0, 55, 1);
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
			func_33(iParam0, 54, 1);
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
			func_33(iParam0, 52, 1);
			if (!bParam3)
			{
				func_33(iParam0, 55, 1);
			}
		}
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_57(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_57(iParam0), 204, false);
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_36(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_35(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_57(iParam0);
	if (((does_entity_exist(iVar1) && func_63(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_64(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_42(int iParam0, int iParam1, bool bParam2)
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

int func_43(int iParam0)
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

void func_44(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_54(iParam1))
	{
		return;
	}
	iVar0 = func_43(iParam1);
	if (func_65(iParam1))
	{
		if (!func_66(iParam1))
		{
			return;
		}
	}
	func_33(iParam1, 39, 1);
	func_67(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_67(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_67(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_68(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_46(var uParam0)
{
	return func_69(*uParam0, 1);
}

float func_47(var uParam0)
{
	if (!func_46(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_70(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_71() - uParam0->f_1);
}

int func_48(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_72(iParam0))
	{
		return 1;
	}
	if (func_73(32768))
	{
		return 1;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return 1;
	}
	iVar0 = func_51(func_74(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 1;
	}
	if (!func_50(func_74(iParam0)))
	{
		func_75(iParam0, 0, 0, -1);
	}
	if (func_76(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_77(iVar0, 256);
			}
			if (bParam2)
			{
				func_77(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_49(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_78(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_50(int iParam0)
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
		iVar0 = func_79(iParam0);
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

int func_51(int iParam0)
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

bool func_52(int iParam0, int iParam1)
{
	return (func_76(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_53()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_54(int iParam0)
{
	return iParam0 > -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_56(var uParam0)
{
	func_80(uParam0, 0f);
}

int func_57(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_58(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_59(var uParam0, int iParam1, bool bParam2)
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

bool func_60(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_61(int iParam0)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_81(iParam0);
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

void func_62(int iParam0)
{
	if (func_12(iParam0))
	{
		if (does_entity_exist(func_57(iParam0)))
		{
			func_82(iParam0, 67108864, 1);
			func_33(iParam0, 19, 1);
		}
	}
}

float func_63(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_64(int iParam0)
{
	iVar0 = func_57(iParam0);
	iVar1 = func_35(iParam0, 0);
	func_83(iParam0, iVar0);
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

bool func_65(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_66(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
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

int func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	iVar0 = func_43(iParam0);
	if (func_34(iVar0, 0))
	{
		if (func_34(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_65(iParam0)) || func_66(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_84(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_85(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_86(iParam0);
					_0x7b204f88f6c3d287(func_87(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_87(iParam0, 0));
					func_88(iParam0);
				}
			}
			else
			{
				if (func_28(iParam0, 32768, 1))
				{
					iVar2 = func_87(iParam0, 0);
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
		if (func_34((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_28(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_86(iParam0);
				_0x7b204f88f6c3d287(func_87(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_87(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_86(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_89(iParam0, 0);
	return 1;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_70(var uParam0)
{
	return func_69(*uParam0, 2);
}

float func_71()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_72(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_73(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_74(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_75(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_90(iParam0))
	{
		return 0;
	}
	if ((func_91((*Global_1347702)[59]->f_15, 1) && !func_91((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_92(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_93(iParam0)) && !Global_43891)
		{
			func_95(iParam0, vdist2(func_94(iParam0), Global_36), -1, 1, 1);
			func_96((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_98(func_97(iParam0), func_74(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_99(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_100(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_102(Global_35, func_101(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_101(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_101(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_103((*Global_1835011)[iParam0]->f_1);
	if (!func_76(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_104(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_105((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_106(4);
	}
	return 1;
}

bool func_76(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_77(int iParam0, int iParam1)
{
	if (!func_76(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

bool func_78(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_107(iParam0, 1, 0))
	{
		if (func_108(iParam0))
		{
			iVar0 = func_35(iParam0, 0);
			if (_0x800df3fc913355f3(iVar0))
			{
				if (!_0xa8120ebeaf290c7a(iVar0))
				{
					return false;
				}
				if (bParam3 && !_0xa0bc8faed8cfeb3c(func_57(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_109(func_57(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || is_screen_faded_out())
				{
					_0xd4b614179bcd0654(iVar0);
					func_110(iParam0, 0);
					if (iParam2 && func_111((*Global_1360165)[iParam0]->f_63))
					{
						func_24(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_79(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_112(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_71() - fParam1);
	func_113(uParam0, 1);
	func_114(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_81(int iParam0)
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

void func_82(int iParam0, int iParam1, bool bParam2)
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

void func_83(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_115(iParam1);
	}
}

float func_84(int iParam0, int iParam1, bool bParam2)
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
	return func_116(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_85(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_117(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_86(int iParam0)
{
	iVar0 = func_43(iParam0);
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

int func_87(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_118(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_88(int iParam0)
{
	if (!func_54(iParam0))
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

void func_89(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_90(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_119((*Global_1835011)[iParam0]->f_1);
}

bool func_91(int iParam0, bool bParam1)
{
	switch (func_120(iParam0))
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

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (func_121(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_93(int iParam0)
{
	return func_122(iParam0);
}

Vector3 func_94(int iParam0)
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

int func_95(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_73(32768))
	{
		return 0;
	}
	iVar0 = func_123();
	if ((bParam4 && func_124(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_124(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_125())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_91((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_127()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_91((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_127()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_91((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_128(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_129((*Global_1835011)[iParam0], 2))
			{
				if (func_130(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_131(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_132(iParam0));
				}
			}
			else if (func_130(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_131(iParam0), func_133(iParam0), func_134(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_135(iParam0), func_136(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_130(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_94(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_131(iParam0));
				bVar2 = true;
			}
		}
		else if (func_93(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_132(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_132(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_132(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_130(iParam0))
			{
				func_77(iParam2, 4194304);
			}
			else
			{
				func_137(iParam2, 4194304);
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
		if (!func_124(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_93(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_138(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_93(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_129((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_139(Global_40.f_4283);
	if (func_140(iVar4) && func_141((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_142(iVar4);
	}
	if (func_143(iParam0, bVar5, iVar4))
	{
		func_144((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_145(579))
	{
		func_146(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_124(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_124(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_127()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_147(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_128(iParam0, iVar0) || (fParam1 >= (func_148(iParam0) * func_148(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_149(&cVar7, 10000, 0, 0, 0, 1);
			func_138(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_97(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_123() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_150(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_151(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_152(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_82(iVar0, 512, 1);
			}
			else
			{
				func_42(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_99(bool bParam0)
{
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case 987244216:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
						if (func_153((*Global_1347702)[iVar1]->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
							if (func_72(iVar2) && !func_122(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_100(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_97(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &iVar0))
		{
			iVar2 = func_57(func_154(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_36(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_36(iVar1, 47, 1))
				{
					return true;
				}
				if (!_0x5102307ce88798eb(iVar2))
				{
					request_ped_visibility_tracking(iVar2);
				}
				if (is_tracked_ped_visible(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

Vector3 func_101(int iParam0)
{
	return func_132(iParam0);
}

bool func_102(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_116(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_103(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_119(iParam0))
	{
		return -1;
	}
	if (func_123() != -1)
	{
		iVar2 = func_51(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_156(iVar1, 1);
			func_155(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_51(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_157(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_156(iVar0, 1);
					func_155(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_104(int iParam0)
{
	iVar0 = func_97(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &iVar0))
		{
			iVar2 = func_57(func_154(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else if (_0x5102307ce88798eb(iVar2))
			{
				_0x3088634cf8c819cf(iVar2);
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)
{
	func_158(iParam0);
}

void func_106(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_107(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if (func_28(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_28(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_28(iParam0, 4, 1))
	{
		return false;
	}
	if (func_36(iParam0, 33, 1))
	{
		return false;
	}
	if (func_13(iParam0))
	{
		return false;
	}
	if (func_159(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_108(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_34(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

bool func_109(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_160(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_110(int iParam0, bool bParam1)
{
	if (_0xa8120ebeaf290c7a(func_35(iParam0, 0)))
	{
		iVar0 = _0x69786495c92a3044(func_35(iParam0, 0));
		if (iVar0 != (*Global_1360165)[iParam0]->f_47 || bParam1)
		{
			(*Global_1360165)[iParam0]->f_47 = iVar0;
			StringCopy(&((*Global_1360165)[iParam0]->f_48), _0x9c7f95946e304778(func_35(iParam0, 0), (*Global_1360165)[iParam0]->f_47), 64);
			(*Global_1360165)[iParam0]->f_56 = 1;
		}
	}
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_112(int iParam0)
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

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_115(int iParam0)
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

float func_116(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_117(int iParam0)
{
	iVar0 = 0;
	if (!func_54(iParam0))
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
	if (!func_54(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_118(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_85(iParam0, 1);
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

bool func_119(int iParam0)
{
	return func_120(iParam0) == 0;
}

int func_120(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_79(iParam0);
}

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_161(bParam1, bParam2, bParam3);
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

bool func_122(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

int func_123()
{
	return Global_1572887->f_12;
}

bool func_124(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_125()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_126(int iParam0)
{
	if (func_123() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_91((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_91((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

int func_127()
{
	return &Global_1898438;
}

bool func_128(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_130(iParam0))
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

bool func_129(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_130(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_162((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_131(int iParam0)
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

Vector3 func_132(int iParam0)
{
	if (func_130(iParam0))
	{
		return func_131(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

Vector3 func_133(int iParam0)
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

int func_134(int iParam0)
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

Vector3 func_135(int iParam0)
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

float func_136(int iParam0)
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

void func_137(int iParam0, int iParam1)
{
	if (!func_76(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_139(int iParam0)
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

bool func_140(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_142(int iParam0)
{
	if (!func_163(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_164(iParam0))
		{
			if (vdist(Global_36, func_165(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_165(iParam0), false) <= func_166();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_166();
	}
	return func_167();
}

bool func_143(int iParam0, bool bParam1, int iParam2)
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

void func_144(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_157(iParam0))
	{
		return;
	}
	switch (func_168(iParam0))
	{
		case 1:
			iVar0 = func_169(iParam0);
			if (func_170(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_128(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_128(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_93(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_129((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_169(iParam0);
			if (func_171(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_172(iVar1))
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
				iVar2 = func_172(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_173(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_145(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_123() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_146(int iParam0, var uParam1, bool bParam2)
{
	func_174(iParam0, &iVar0, &iVar1);
	if (!func_175(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_176(iParam0, 1024))
	{
		return;
	}
	func_177(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_147(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_148(int iParam0)
{
	return (func_136(iParam0) / 2f);
}

var func_149(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
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
		if (func_178())
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
		iVar0 = func_169(&(Global_1898164->f_1[0]));
		if (func_179(iVar0) && func_153((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_157(&(Global_1898164->f_1[0])))
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

bool func_151(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_152(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_152(int iParam0, int iParam1)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_180(iParam0);
	return (*iParam1 && iVar0) != 0;
}

bool func_153(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_154(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

void func_155(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_119(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_181(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_181(iParam0)))
		{
			_0xca41e86545413b5b(func_168(iParam0), func_169(iParam0), func_182(iParam0), func_181(iParam0), Global_36);
		}
	}
	func_183(iParam0, 1);
	bParam1 = bParam1;
}

void func_156(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_184(Global_1898330[iParam0]);
		func_185((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_157(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_158(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_50(iParam0))
	{
		return;
	}
	func_183(iParam0, 2);
}

bool func_159(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

float func_160(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
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

bool func_162(var uParam0)
{
	if (func_124(&(uParam0->f_29), 62))
	{
		switch (func_186())
		{
			case 1:
				if (!func_124(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_124(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_124(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_124(&(uParam0->f_29), 32))
				{
					if (func_124(&(uParam0->f_29), 2))
					{
						if (func_188(func_187()) < 5)
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

bool func_163(int iParam0)
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

bool func_164(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_165(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_166()
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

bool func_167()
{
	return Global_1894899 & 2 != 0;
}

int func_168(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return func_189(func_184(iParam0));
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_190(func_184(iParam0));
}

bool func_170(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_143(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_191(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_172(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_179(iParam0))
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

void func_173(int iParam0)
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

void func_174(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_175(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_192(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_193(iParam0))
	{
		return false;
	}
	if (func_194(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_176(iParam0, 1)) || func_73(32768))
	{
		if (!func_176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_195())
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_178()
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

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_180(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_181(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_182(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_196(func_184(iParam0));
}

void func_183(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	func_197(iParam0, iParam1);
}

int func_184(int iParam0)
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

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_189(iParam0);
	*uParam1 = func_190(iParam0);
	*uParam2 = func_196(iParam0);
}

int func_186()
{
	return &Global_1899516;
}

int func_187()
{
	return &Global_1899515;
}

int func_188(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_189(int iParam0)
{
	return iParam0 & 31;
}

int func_190(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_191(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

bool func_192(int iParam0, int iParam1)
{
	if (func_123() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_193(int iParam0)
{
	if (func_123() != -1)
	{
		if (func_176(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_176(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_194(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_176(iParam0, 65536) && !func_176(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_176(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_176(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_195()
{
	return Global_1905944->f_5694;
}

int func_196(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_197(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_198(iParam0);
	}
	else
	{
		func_199(iParam0, iParam1);
	}
	func_200();
}

int func_198(int iParam0)
{
	iVar0 = func_112(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_201(iVar0);
}

int func_199(int iParam0, int iParam1)
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
			func_202(iVar2);
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

void func_200()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_201(int iParam0)
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

int func_202(int iParam0)
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

