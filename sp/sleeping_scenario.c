void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (!_0x9e4ef615e307fbbe() && func_3())
	{
		func_4();
		func_5();
		func_6();
		wait(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	_0xe7282390542f570d(iLocal_2);
	if (network_is_game_in_progress())
	{
		func_8();
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(2))
	{
		switch (get_event_at_index(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (is_ped_injured(Global_35) || _0x9e4ef615e307fbbe())
	{
		iLocal_0 = 0;
		return;
	}
	func_12(&Local_19);
}

void func_7()
{
	_display_hud_component(2011163970);
	if (func_13())
	{
		if (func_14() == func_15())
		{
			do_screen_fade_in(500);
		}
		func_16(0);
	}
	if (func_17() != 0)
	{
		if (func_18(&(Local_19.f_19)) || Local_19.f_22)
		{
			_0xbb6c707f20d955d4(15f);
			func_19(&(Local_19.f_19));
			Local_19.f_22 = 0;
		}
	}
	if (does_cam_exist(Local_19.f_23))
	{
		destroy_cam(Local_19.f_23, false);
	}
	if (does_cam_exist(Local_19.f_24))
	{
		destroy_cam(Local_19.f_24, false);
	}
	func_20(&Local_19);
	if (Local_19.f_30)
	{
		func_21(0);
		Local_19.f_30 = 0;
	}
	if (Local_19.f_31)
	{
		if (does_entity_exist(Global_35))
		{
			set_blocking_of_non_temporary_events(Global_35, false);
		}
		Local_19.f_31 = 0;
	}
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_23(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_24(&iVar0);
	}
}

void func_12(var uParam0)
{
	if (func_25(&(uParam0->f_19), 3.5f) && uParam0->f_22)
	{
		_0xbb6c707f20d955d4(15f);
		uParam0->f_22 = 0;
	}
	if (_get_scenario_point_ped_is_using(Global_35, true) == iLocal_3)
	{
		func_26(32);
		func_26(64);
		if (!uParam0->f_30)
		{
			func_21(1);
			uParam0->f_30 = 1;
		}
		if (iLocal_4 == -2016812721)
		{
			if (_0x569f1e1237508deb(Global_35) != 200520348 || _0xc488b8c0e52560d8(Global_35))
			{
				set_ped_reset_flag(Global_35, 7, true);
				if (!uParam0->f_31)
				{
					set_blocking_of_non_temporary_events(Global_35, true);
					uParam0->f_31 = 1;
				}
			}
			else if (uParam0->f_31)
			{
				set_blocking_of_non_temporary_events(Global_35, false);
				uParam0->f_31 = 0;
			}
			if (is_ped_active_in_scenario(Global_35, 1) || _0x0c3cb2e600c8977d(Global_35, 0))
			{
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 130948705, false);
				_0x8370d34bd2e60b73();
				_clamp_gameplay_cam_pitch(-35f, 15f);
				if (!is_ped_active_in_scenario(Global_35, 0))
				{
					disable_control_action(0, 2139949496, false);
				}
			}
		}
	}
	else
	{
		if (uParam0->f_30)
		{
			func_21(0);
			uParam0->f_30 = 0;
		}
		if (uParam0->f_31)
		{
			set_blocking_of_non_temporary_events(Global_35, false);
			uParam0->f_31 = 0;
		}
	}
	switch (uParam0->f_11)
	{
		case 0:
			if (iLocal_4 == -2016812721)
			{
				_request_scenario_type(iLocal_4, 15, 0, 0);
			}
			func_27(uParam0, 1);
			break;
		case 1:
			if (iLocal_4 == -2016812721)
			{
				if (!_has_scenario_type_loaded(iLocal_4, false))
				{
					return;
				}
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_28(uParam0);
			if (iLocal_4 == -2016812721)
			{
				iVar1 = _get_entity_scenario_point_is_attached_to(iLocal_3);
				if (does_entity_exist(iVar1))
				{
					switch (uParam0->f_32)
					{
						case 1:
							if (!is_ped_using_any_scenario(Global_35))
							{
								uParam0->f_32 = 2;
								uParam0->f_33 = get_game_timer();
							}
							break;
						case 2:
							get_model_dimensions(get_entity_model(iVar1), &vVar2, &vVar5);
							vVar2.f_1 = (vVar2.y + 0.5f);
							vVar5.f_1 = (vVar5.y - 0.5f);
							fVar8 = (vVar5.x - vVar2.x);
							vVar2.x = 0f;
							vVar5.x = 0f;
							if (!is_entity_in_angled_area(Global_35, get_offset_from_entity_in_world_coords(iVar1, vVar2), get_offset_from_entity_in_world_coords(iVar1, vVar5), fVar8, false, true, 0))
							{
								uParam0->f_32 = 0;
							}
							else if (get_game_timer() >= uParam0->f_33 + 10000)
							{
								set_entity_no_collision_entity(Global_35, iVar1, true);
								uParam0->f_32 = 0;
							}
							break;
					}
				}
				else
				{
					uParam0->f_32 = 0;
				}
			}
			if (!ped_has_use_scenario_task(Global_35) && func_29(uParam0))
			{
				(*uParam0)[4] = func_31("SLEEP", -719620017, func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
				func_32(uParam0[4], 1057677739, 0, 1);
				if (func_17() != 0)
				{
					if (iLocal_4 == -2016812721)
					{
						(*uParam0)[7] = func_31("SIT_TENT", -473983589, func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						func_32(uParam0[7], 1057677739, 0, 1);
					}
					else if (iLocal_4 == -1054012177 && !Global_1327590->f_19736)
					{
						(*uParam0)[7] = func_31("PLAYER_SIT", -473983589, func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						func_32(uParam0[7], 1057677739, 0, 1);
					}
				}
				if (Global_1327590->f_19683 < 2 && func_33())
				{
					func_34();
					Global_1327590->f_19683++;
				}
				func_27(uParam0, 3);
			}
			else if ((_get_scenario_point_ped_is_using(Global_35, false) == iLocal_3 && !_0x0c3cb2e600c8977d(Global_35, 1)) && is_ped_active_in_scenario(Global_35, 1))
			{
				uParam0->f_13 = func_35();
				func_27(uParam0, 5);
			}
			break;
		case 3:
			if (!func_29(uParam0))
			{
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 1057677739, func_36(), 2);
			if (func_37(uParam0))
			{
			}
			if (!func_38(uParam0[4]))
			{
				(*uParam0)[4] = func_31("SLEEP", -719620017, func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
				func_32(uParam0[4], 1057677739, 0, 1);
			}
			else if (func_39(uParam0[4], 1))
			{
				if (func_40(8388608))
				{
					func_41(4);
				}
				func_42(16777216);
				func_43((*uParam0)[4], 1, 1);
				func_43((*uParam0)[7], 1, 1);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_32(uParam0[5], 1323335645, 0, 1);
				uParam0->f_13 = func_35();
				func_27(uParam0, 4);
				return;
			}
			if ((iLocal_4 == -2016812721 || iLocal_4 == -1054012177) && func_17() != 0)
			{
				if (!func_38(uParam0[7]))
				{
					if (!Global_1327590->f_19736)
					{
						if (iLocal_4 == -2016812721)
						{
							(*uParam0)[7] = func_31("SIT_TENT", -473983589, func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_32(uParam0[7], 1057677739, 0, 1);
						}
						else if (iLocal_4 == -1054012177)
						{
							(*uParam0)[7] = func_31("PLAYER_SIT", -473983589, func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_32(uParam0[7], 1057677739, 0, 1);
						}
					}
				}
				else if (func_39(uParam0[7], 1))
				{
					func_42(16777216);
					func_43((*uParam0)[7], 1, 1);
					func_43((*uParam0)[4], 1, 1);
					uParam0->f_13 = func_35();
					if (iLocal_4 == -2016812721)
					{
						func_45(uParam0);
						clear_ped_tasks_immediately(Global_35, false, true);
						clear_ped_secondary_task(Global_35);
						_hide_ped_weapons(Global_35, 2, true);
						_task_use_scenario_point(Global_35, iLocal_3, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, iLocal_4, false, -1f, false);
						animpostfx_play("CamTransition01");
					}
					else
					{
						_task_use_scenario_point(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
					}
					func_27(uParam0, 5);
					return;
				}
			}
			if (is_ped_active_in_scenario(Global_35, 1))
			{
				if (_get_scenario_point_ped_is_using(Global_35, false) == iLocal_3)
				{
					uParam0->f_13 = func_35();
					func_43((*uParam0)[4], 1, 1);
					func_43((*uParam0)[7], 1, 1);
					func_27(uParam0, 5);
				}
				else
				{
					func_43((*uParam0)[4], 1, 1);
					func_43((*uParam0)[7], 1, 1);
					func_27(uParam0, 2);
				}
			}
			break;
		case 4:
			func_46(uParam0, 1);
			break;
		case 5:
			if (func_37(uParam0))
			{
			}
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -1404316431, false);
			if (iLocal_4 == -2016812721)
			{
				if (!is_cam_interpolating(uParam0->f_23) && is_cam_active(uParam0->f_23))
				{
					_render_first_person_cam(0, 0, 3, 0, 0, 1);
				}
			}
			if (!func_47(Global_35, -76381094) && !(is_ped_active_in_scenario(Global_35, 1) && _get_scenario_point_ped_is_using(Global_35, false) == iLocal_3))
			{
				if (!func_48())
				{
					_display_hud_component(2011163970);
				}
				func_27(uParam0, 2);
				return;
			}
			if (func_17() == -1)
			{
				if (!func_48())
				{
					_hide_hud_component(2011163970);
				}
			}
			if (_get_scenario_point_ped_is_using(Global_35, false) != iLocal_3)
			{
				if (!func_48())
				{
					_display_hud_component(2011163970);
				}
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			else if (is_ped_active_in_scenario(Global_35, 0))
			{
				func_49(uParam0);
				func_27(uParam0, 6);
			}
			break;
		case 6:
			if (!_0xec7e480ff8bd0bed(Global_35) || has_anim_event_fired(Global_35, 108107462))
			{
				if (func_50() == 8 && func_51(Global_35))
				{
					_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 2, 1, 1057677739, func_36(), 0);
				}
				else
				{
					_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 1057677739, func_36(), 0);
				}
			}
			if (func_37(uParam0))
			{
				set_bit(&(Global_1956580->f_1), 2);
				clear_bit(&(Global_1956580->f_1), 3);
				if (iLocal_4 == -2016812721 && !is_gameplay_cam_rendering())
				{
					_render_first_person_cam(0, 0, 3, 0, 0, 1);
				}
			}
			disable_control_action(0, -1046962283, false);
			iVar0 = _0x569f1e1237508deb(Global_35);
			if (((((iVar0 != 200520348 && iVar0 != -296197310) && iVar0 != -1888446106) && iVar0 != 665598855) && iVar0 != -229964281) || _0xc488b8c0e52560d8(Global_35))
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, 1301263553, false);
				disable_control_action(0, -39308912, false);
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, 1287709438, false);
			}
			else if (uParam0->f_29)
			{
				clear_ped_tasks(Global_35, 1, 0);
				uParam0->f_29 = 0;
			}
			if (func_17() == -1)
			{
				if (func_52(uParam0[4], 0))
				{
					if (func_53(player_id(), 1, 0, 1) || is_ped_in_combat(Global_35, 0))
					{
						func_54(uParam0[4], 0, 1);
					}
				}
				else if (!func_53(player_id(), 1, 0, 1) && !is_ped_in_combat(Global_35, 0))
				{
					func_54(uParam0[4], 1, 1);
				}
				if (func_55(uParam0[4], 1))
				{
					func_56();
					func_20(uParam0);
					(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_32(uParam0[5], 1323335645, 0, 1);
					clear_bit(&(Global_1956580->f_1), 2);
					func_27(uParam0, 7);
				}
				else if (func_55(uParam0[6], 1))
				{
					func_56();
					func_57(16777216);
					func_20(uParam0);
					clear_bit(&(Global_1956580->f_1), 2);
					play_sound_frontend("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_27(uParam0, 15);
				}
				else if (func_55(uParam0[8], 1))
				{
					func_56();
					func_20(uParam0);
					clear_bit(&(Global_1956580->f_1), 2);
					play_sound_frontend("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_29 = 1;
				}
				else if (func_38(uParam0[9]))
				{
					if (func_58(uParam0[9], 1) && func_59())
					{
						func_60(&Global_43907, 4);
					}
					func_54(uParam0[8], func_61() != 1, 1);
					func_54(uParam0[9], func_61() != 1, 1);
					func_54(uParam0[6], func_61() != 1, 1);
					func_54(uParam0[4], func_61() != 1, 1);
				}
			}
			else if (func_55(uParam0[4], 1))
			{
				func_20(uParam0);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				clear_bit(&(Global_1956580->f_1), 2);
				func_27(uParam0, 7);
			}
			else if (func_55(uParam0[5], 1))
			{
				func_20(uParam0);
				func_27(uParam0, 3);
			}
			if ((!is_ped_active_in_scenario(Global_35, 1) || _0x0c3cb2e600c8977d(Global_35, 1)) || _get_scenario_point_ped_is_using(Global_35, false) != iLocal_3)
			{
				if (iLocal_4 == -2016812721)
				{
					uParam0->f_33 = get_game_timer();
					uParam0->f_32 = 1;
				}
				if (_get_scenario_point_ped_is_using(Global_35, false) == iLocal_3)
				{
					func_62(uParam0);
				}
				else
				{
					func_63(uParam0);
				}
				func_56();
				_display_hud_component(2011163970);
				uParam0->f_29 = 0;
				clear_bit(&(Global_1956580->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			break;
		case 7:
			func_46(uParam0, 0);
			if (func_17() == -1)
			{
				if (!func_48())
				{
					if (!is_ped_active_in_scenario(Global_35, 1))
					{
						clear_bit(&(Global_1956580->f_1), 2);
						func_20(uParam0);
						func_27(uParam0, 2);
					}
				}
			}
			break;
		case 8:
			if (!Global_1327590->f_19737)
			{
				if (_get_scenario_point_ped_is_using(Global_35, true) == iLocal_3 && (is_ped_active_in_scenario(Global_35, 0) || has_anim_event_fired(Global_35, -1652513209)))
				{
					Global_1327590->f_19737 = 1;
				}
			}
			else if (Global_1327590->f_19738)
			{
				uParam0->f_14 = get_game_timer();
				func_27(uParam0, 9);
			}
			break;
		case 9:
			disable_all_control_actions(0);
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			if (func_37(uParam0))
			{
				if ((is_ped_active_in_scenario(Global_35, 0) || (_is_anim_scene_loaded(uParam0->f_17, true, false) || _is_anim_scene_started(uParam0->f_17, false))) || iLocal_4 != -1054012177)
				{
					if (iLocal_4 == -1054012177 && !Global_1327590->f_19737)
					{
						if (!_is_anim_scene_started(uParam0->f_17, false) && is_ped_active_in_scenario(Global_35, 0))
						{
							set_anim_scene_origin(uParam0->f_17, get_entity_coords(Global_35, true, false), get_entity_rotation(Global_35, 2), 2);
							start_anim_scene(uParam0->f_17);
						}
						else if (!has_anim_event_fired(Global_35, -954213463))
						{
							uParam0->f_12 = 1;
							uParam0->f_14 = get_game_timer();
						}
						if (!_is_anim_scene_started(uParam0->f_17, false) && !ped_has_use_scenario_task(Global_35))
						{
							uParam0->f_18 = -1;
							_delete_anim_scene(uParam0->f_17);
							_delete_anim_scene(uParam0->f_15);
							func_64(4);
							func_27(uParam0, 2);
						}
					}
					if ((get_game_timer() - uParam0->f_14) > 500)
					{
						do_screen_fade_out(500);
						_0x6339c1ea3979b5f7("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				else
				{
					uParam0->f_14 = get_game_timer();
					uParam0->f_12 = 1;
				}
			}
			if (is_screen_faded_out())
			{
				if (Global_1392040->f_7 == -15)
				{
					Global_1392040->f_7 = func_65();
				}
				iVar9 = Global_1392040->f_7;
				func_66(&iVar9, 0, 0, 3, 0, 0, 0, 0);
				if (!func_67(iVar9))
				{
					Global_1392040->f_8++;
				}
				else
				{
					Global_1392040->f_8 = 0;
				}
				Global_1327590->f_19737 = 0;
				Global_1327590->f_19738 = 0;
				_hide_ped_weapons(Global_35, 2, true);
				if (iLocal_4 == -1054012177)
				{
					_task_use_scenario_point(Global_35, iLocal_3, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1f, false);
				}
				else if (iLocal_4 == 1097070152)
				{
					_task_use_scenario_point(Global_35, iLocal_3, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1f, false);
				}
				else
				{
					_task_use_scenario_point(Global_35, iLocal_3, 0, 0, false, true, 0, false, -1f, false);
				}
				func_27(uParam0, 10);
			}
			break;
		case 10:
			if (func_17() == 0)
			{
				disable_control_action(0, 1301263553, false);
				disable_control_action(0, -39308912, false);
				if (func_37(uParam0))
				{
					if (is_ped_active_in_scenario(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_12 = 1;
						disable_control_action(0, 992265328, false);
					}
				}
				if (!ped_has_use_scenario_task(Global_35))
				{
					func_20(uParam0);
					clear_bit(&(Global_1956580->f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (get_game_timer() > uParam0->f_14 + 2500)
				{
					func_27(uParam0, 6);
				}
			}
			else
			{
				disable_all_control_actions(0);
				if (func_37(uParam0))
				{
					if (is_ped_active_in_scenario(Global_35, 0))
					{
						if (iLocal_4 == -2016812721)
						{
							_0xd65fdc686a031c83(player_ped_id(), -261921482, 3f);
						}
						do_screen_fade_out(2000);
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				if (!ped_has_use_scenario_task(Global_35))
				{
					if ((is_screen_faded_out() || is_screen_fading_out()) && !is_screen_fading_in())
					{
						do_screen_fade_in(1000);
					}
					_0x9428447ded71fc7e("Sleep_Respawn_Scenes");
					clear_bit(&(Global_1956580->f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (is_screen_faded_out())
				{
					if (_does_anim_scene_exist(uParam0->f_16))
					{
						if (!_is_anim_scene_loaded(uParam0->f_16, true, false))
						{
							if (!_is_anim_scene_loading(uParam0->f_16, true))
							{
								load_anim_scene(uParam0->f_16);
							}
						}
						else if (get_game_timer() > uParam0->f_14 + 2500)
						{
							start_anim_scene(uParam0->f_16);
							func_64(4);
							_0xac84686c06184b0d("Clouds", "Sleep_Respawn_Scenes");
							trigger_music_event("SLEEP_TRANSITION_START");
							if (func_51(Global_35))
							{
								iVar11 = func_68();
								iVar12 = func_69(iVar11, uParam0->f_13);
								iVar13 = func_70(iVar11, uParam0->f_13);
								advance_clock_time_to(iVar12, iVar13, 0);
								_0xf9f14080d80937bd(iVar12);
								if (iVar12 > 9 || iVar12 <= 1)
								{
									iVar10 = 1;
								}
								if (((func_71(10, 0) >= 3 && iVar11 != 8) && iVar11 != 7) && iVar11 != 5)
								{
									fVar14 = func_72(12f, 2);
									func_73(18, fVar14);
								}
							}
							else
							{
								advance_clock_time_to(uParam0->f_13, 0, 0);
								_0xf9f14080d80937bd(uParam0->f_13);
								if (!func_74(0, 0, 1))
								{
									set_random_weather_type(true, true);
								}
							}
							func_75();
							func_76(0, iVar10, 0);
							func_77();
							func_78(-1, 0, 0, 0, 0);
							if (!Global_1327590->f_19736)
							{
								func_79();
							}
							func_82(Global_36, func_81(func_80(), 100f, 300f), 0, 0);
							func_83(14, 1);
							func_84();
							Global_1935183->f_26 = 1;
							disable_all_control_actions(0);
							hide_hud_and_radar_this_frame();
							uParam0->f_14 = get_game_timer();
							func_27(uParam0, 11);
						}
					}
				}
			}
			break;
		case 11:
			disable_all_control_actions(0);
			if (func_37(uParam0))
			{
				if (func_17() != 0)
				{
					_0x4759cc730f947c81();
					if (!func_13())
					{
						func_16(1);
					}
					func_85(Global_36);
					Global_40.f_9 = 0;
					func_86(0, 7);
				}
			}
			if ((!is_screen_fading_in() && !is_screen_faded_in()) && (get_game_timer() - uParam0->f_14) > 250)
			{
				do_screen_fade_in(500);
			}
			if (func_17() != 0)
			{
				disable_all_control_actions(0);
				enable_control_action(0, -771458680, true);
				enable_control_action(0, -1450761377, true);
				hide_hud_and_radar_this_frame();
				_0x8910c24b7e0046ec();
				_0xa3a8926951471c82();
				if (_0xf94692eb9dc15d74(uParam0->f_16, 0) || _is_anim_scene_active(uParam0->f_16))
				{
					do_screen_fade_out(0);
					_0x9428447ded71fc7e("Sleep_Respawn_Scenes");
					trigger_music_event("SLEEP_TRANSITION_STOP");
					func_87(0f);
					if (iLocal_4 == -1054012177)
					{
						_display_hud_component(2011163970);
						set_anim_scene_origin(uParam0->f_15, _get_scenario_point_coords(iLocal_3, true), 0f, 0f, (_get_scenario_point_heading(iLocal_3, true) + 90f), 2);
						start_anim_scene(uParam0->f_15);
					}
					else if (iLocal_4 == 1097070152)
					{
						func_88(98.2971f, -4.2336f);
						_display_hud_component(2011163970);
						_0xec6935ebe0847b90(Global_35, _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_3, true), _get_scenario_point_heading(iLocal_3, true), -5f, 0f, 0f));
						clear_ped_tasks(Global_35, 1, 0);
					}
					if (iLocal_4 != 1097070152)
					{
						func_88(0, 0);
					}
					if (func_51(Global_35))
					{
						sVar15 = func_89(func_68(), uParam0->f_13);
						if (!is_string_null_or_empty(sVar15))
						{
							set_timecycle_modifier(sVar15);
							uParam0->f_22 = 1;
						}
					}
					func_90(0, 0);
					func_91(1);
					uParam0->f_14 = get_game_timer();
					func_92(0);
					func_27(uParam0, 12);
				}
			}
			else
			{
				func_27(uParam0, 12);
			}
			break;
		case 12:
			disable_all_control_actions(0);
			if (func_17() != 0)
			{
				if (func_37(uParam0))
				{
					if (func_13())
					{
						func_16(0);
					}
					Global_1392040->f_7 = func_65();
				}
				if (_does_anim_scene_exist(uParam0->f_16))
				{
					_delete_anim_scene(uParam0->f_16);
				}
				func_93(1);
				func_94();
			}
			if (is_screen_fading_in() || is_screen_faded_in())
			{
				_0xd65fdc686a031c83(player_ped_id(), -1961588683, 6f);
				func_27(uParam0, 5);
			}
			else if ((get_game_timer() - uParam0->f_14) > 500)
			{
				if (uParam0->f_22)
				{
					func_95(&(uParam0->f_19));
				}
				do_screen_fade_in(1500);
			}
			break;
		case 14:
			if (!is_ped_active_in_scenario(Global_35, 1))
			{
				clear_bit(&(Global_1956580->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			if (func_37(uParam0))
			{
				iVar0 = _0x569f1e1237508deb(Global_35);
				if (_0xc488b8c0e52560d8(Global_35) || (iVar0 != -490123391 && iLocal_4 == 1097070152))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					uParam0->f_14 = get_game_timer();
					if (_0x3d10d7179d7034af(func_96(0), -569063887, 0))
					{
						_0x6a564540fac12211(func_96(0), -569063887);
					}
					func_97(-569063887, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if ((!func_98(130487986) && !func_99()) && (get_game_timer() - uParam0->f_14) > 1000)
			{
				_0xd65fdc686a031c83(player_ped_id(), 111553404, 3f);
				func_27(uParam0, 5);
			}
			break;
		case 15:
			if (!is_ped_active_in_scenario(Global_35, 1) || _get_scenario_point_ped_is_using(Global_35, false) != iLocal_3)
			{
				clear_bit(&(Global_1956580->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			disable_control_action(0, 992265328, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			break;
		case 13:
			if (!is_ped_active_in_scenario(Global_35, 1))
			{
				clear_bit(&(Global_1956580->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			disable_control_action(0, 992265328, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			if (func_37(uParam0))
			{
				iVar0 = _0x569f1e1237508deb(Global_35);
				if (_0xc488b8c0e52560d8(Global_35) || (iVar0 != -490123391 && iLocal_4 == 1097070152))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					func_97(1259508039, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if (!func_100())
			{
				_0xd65fdc686a031c83(player_ped_id(), 111553404, 3f);
				func_27(uParam0, 5);
			}
			break;
		case 16:
			if (func_37(uParam0))
			{
				if (!func_48())
				{
					_display_hud_component(2011163970);
				}
				if (_does_anim_scene_exist(uParam0->f_16))
				{
					_delete_anim_scene(uParam0->f_16);
				}
				if (_does_anim_scene_exist(uParam0->f_15))
				{
					_delete_anim_scene(uParam0->f_15);
				}
				if (_does_anim_scene_exist(uParam0->f_17))
				{
					_delete_anim_scene(uParam0->f_17);
				}
				func_101(uParam0);
			}
			break;
	}
}

bool func_13()
{
	return Global_1392040->f_6;
}

int func_14()
{
	return &Global_1572864;
}

int func_15()
{
	return Global_1572864->f_1;
}

void func_16(int iParam0)
{
	Global_1392040->f_6 = iParam0;
}

int func_17()
{
	return Global_1572887->f_12;
}

bool func_18(var uParam0)
{
	return func_102(*uParam0, 1);
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_20(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_21(int iParam0)
{
	Global_1935436->f_18.f_3 = iParam0;
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

void func_24(int iParam0)
{
}

bool func_25(var uParam0, float fParam1)
{
	if (func_103(uParam0, fParam1))
	{
		func_19(uParam0);
		return true;
	}
	return false;
}

void func_26(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

void func_28(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (_0x0c3cb2e600c8977d(Global_35, 1))
	{
		if (!uParam0->f_28)
		{
			if (func_25(&(uParam0->f_25), 2.5f))
			{
				func_104(uParam0);
			}
		}
	}
	else if (!uParam0->f_28 && !_0x9c54041bb66bcf9e(Global_35, iLocal_3))
	{
		func_63(uParam0);
	}
	if (uParam0->f_28)
	{
		if (func_25(&(uParam0->f_25), 2.1f))
		{
			_render_first_person_cam(0, 0, 3, 0, 0, 1);
			detach_cam(uParam0->f_23);
		}
	}
}

bool func_29(var uParam0)
{
	if (!func_40(128))
	{
		if (func_105())
		{
			return false;
		}
	}
	if (func_106(&Global_1935630, 131072))
	{
		return false;
	}
	if (func_107() >= 1f)
	{
		return false;
	}
	if (func_40(1073741824) || func_40(16777216))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return false;
	}
	if (_is_ped_carrying(Global_35))
	{
		return false;
	}
	iVar0 = _get_ped_using_scenario_point(iLocal_3);
	if (!is_entity_dead(iVar0))
	{
		if (iVar0 != Global_35)
		{
			if (is_ped_active_in_scenario(iVar0, 1))
			{
				return false;
			}
		}
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		return false;
	}
	if (func_53(player_id(), 0, 0, 1))
	{
		return false;
	}
	if (!Global_1327590->f_19736)
	{
		if (func_108(_get_scenario_point_coords(iLocal_3, true) + Vector(0.5f, 0f, 0f), 1f, 1, Global_35, 0, 0))
		{
			return false;
		}
	}
	if (_does_anim_scene_exist(uParam0->f_15))
	{
		if (!_0xf94692eb9dc15d74(uParam0->f_15, 0))
		{
			disable_all_control_actions(0);
			enable_control_action(0, -771458680, true);
			enable_control_action(0, -1450761377, true);
			return false;
		}
	}
	if (ped_has_use_scenario_task(Global_35) && _get_scenario_point_ped_is_using(Global_35, false) != iLocal_3)
	{
		return false;
	}
	if (_is_scenario_point_flag_set(iLocal_3, 8))
	{
		return false;
	}
	fVar1 = func_109(Global_35, func_30(), 1);
	if (fVar1 > func_81(((iLocal_4 == -1054012177 && func_50() != 8) && func_51(Global_35)), 1.5f, 1f))
	{
		return false;
	}
	if (!func_110(Global_35, func_30(), func_81((iLocal_4 == -1054012177 && func_51(Global_35)), -0.25f, 0f)) && fVar1 > func_111())
	{
		return false;
	}
	if (is_shocking_event_in_sphere(956330317, _get_scenario_point_coords(iLocal_3, true), 2f))
	{
		return false;
	}
	iVar2 = _get_entity_scenario_point_is_attached_to(iLocal_3);
	if (does_entity_exist(iVar2))
	{
		if (is_entity_on_fire(iVar2))
		{
			return false;
		}
		if (_0xcdc25355c0d65963(iVar2))
		{
			return false;
		}
		if (_0xa4454592dcf7c992(iVar2))
		{
			return false;
		}
	}
	if (get_number_of_fires_in_range(_get_scenario_point_coords(iLocal_3, true), 1f) > 0)
	{
		return false;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return false;
	}
	return true;
}

Vector3 func_30()
{
	switch (iLocal_4)
	{
		case -2016812721:
			vVar0 = { 0.29f, 1.5f, 1f };
			break;
		case -1054012177:
			if ((iLocal_4 == -1054012177 && func_50() == 8) && func_51(Global_35))
			{
				vVar0 = { 0f, 0.15f, 0f };
			}
			else
			{
				vVar0 = { 0f, 0.5f, 0f };
			}
			break;
		default:
			vVar0 = { 0f, 0f, 0.5f };
			break;
	}
	return _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_3, true), _get_scenario_point_heading(iLocal_3, true), vVar0);
}

int func_31(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_112(vParam2))
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
		if (func_113(iVar0, 2))
		{
			if (func_114(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_115(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_33()
{
	return func_117(32768);
}

void func_34()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1327590->f_19622[iVar0]->f_5 = 0;
		iVar0++;
	}
}

int func_35()
{
	if (func_118(1))
	{
		return 12;
	}
	else if (func_118(2))
	{
		return 18;
	}
	return 6;
}

char* func_36()
{
	switch (iLocal_4)
	{
		case -2016812721:
		case 1690225020:
			return "CMP_SLP_TNT";
		case -1689755873:
		case 1097070152:
			if (func_119(67108864) && func_40(8388608))
			{
				return "CMP_SLP_DIRT";
			}
			else
			{
				return "CMP_SLP_GND";
			}
			break;
		case -1054012177:
			return "CMP_SLP_BED";
	}
	return "CMP_SLP_BED";
}

bool func_37(var uParam0)
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
		return true;
	}
	return false;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_40(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_41(int iParam0)
{
	if (!func_120(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 || iParam0);
	}
}

void func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_116(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_121(iVar0);
	*uParam0 = 0;
}

int func_44(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
		if (func_113(iVar0, 2))
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
		func_115(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, bParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_45(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (does_cam_exist(uParam0->f_23))
	{
		destroy_cam(uParam0->f_23, false);
	}
	if (does_cam_exist(uParam0->f_24))
	{
		destroy_cam(uParam0->f_24, false);
	}
	vVar0 = { _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_3, true), _get_scenario_point_heading(iLocal_3, true), 0.5f, -1.25f, 0.75f) };
	uParam0->f_23 = create_camera_with_params(26379945, vVar0, 0f, 0f, _get_scenario_point_heading(iLocal_3, true), 51.28f, false, 2);
	uParam0->f_24 = create_camera_with_params(26379945, vVar0, 0f, 0f, _get_scenario_point_heading(iLocal_3, true), 61.28f, false, 2);
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		set_cam_active(uParam0->f_24, true);
		set_cam_active_with_interp(uParam0->f_23, uParam0->f_24, 5000, 1, 1);
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

void func_46(var uParam0, bool bParam1)
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	func_122(1);
	func_123(1);
	if (!_0x02ebbb3989b7e695(player_ped_id()))
	{
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
	}
	if (func_17() == 0)
	{
		uParam0->f_14 = get_game_timer();
		if (bParam1)
		{
			if (iLocal_4 == -2016812721)
			{
				func_45(uParam0);
				sVar0 = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
			_hide_ped_weapons(Global_35, 2, true);
			_task_use_scenario_point(Global_35, iLocal_3, sVar0, 0, true, false, 0, false, -1f, false);
		}
		func_27(uParam0, 10);
	}
	else
	{
		func_124(uParam0);
		_uiprompt_set_active_group_this_frame(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar1 = false;
		if (func_55(uParam0[0], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 6;
		}
		else if (func_55(uParam0[1], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 12;
		}
		else if (func_55(uParam0[2], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 18;
		}
		else if (func_55(uParam0[3], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 0;
		}
		if (bVar1)
		{
			uParam0->f_18 = -1;
			if (_does_anim_scene_exist(uParam0->f_16))
			{
				_delete_anim_scene(uParam0->f_16);
			}
			uParam0->f_16 = _create_anim_scene(func_125(uParam0->f_13), 0, 0, false, true);
			uParam0->f_14 = get_game_timer();
			func_20(uParam0);
			if (bParam1)
			{
				if (iLocal_4 == -1054012177)
				{
					_task_use_scenario_point(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
				}
			}
			if (iLocal_4 == -1054012177)
			{
				if (_does_anim_scene_exist(uParam0->f_15))
				{
					_delete_anim_scene(uParam0->f_15);
				}
				if (_does_anim_scene_exist(uParam0->f_17))
				{
					_delete_anim_scene(uParam0->f_17);
				}
				if (func_126() && !_0xa24c1d341c6e0d53(1, 0, 0))
				{
					uParam0->f_15 = _create_anim_scene("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				}
				else
				{
					uParam0->f_15 = _create_anim_scene("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
				}
				uParam0->f_17 = _create_anim_scene("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				load_anim_scene(uParam0->f_17);
				set_anim_scene_entity(uParam0->f_17, "player", Global_35, 0);
				load_anim_scene(uParam0->f_15);
				set_anim_scene_entity(uParam0->f_15, "player", Global_35, 0);
				if (Global_1327590->f_19736)
				{
					if (iLocal_4 == -1054012177)
					{
						if (!_0x9c54041bb66bcf9e(Global_35, iLocal_3))
						{
							_task_use_scenario_point(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
						}
					}
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 9);
				}
			}
			else
			{
				func_27(uParam0, 9);
			}
		}
		else if ((func_55(uParam0[5], 1) || func_53(player_id(), 1, 0, 1)) || is_ped_in_combat(Global_35, 0))
		{
			uParam0->f_18 = -1;
			func_64(4);
			func_20(uParam0);
			if (uParam0->f_11 == 7)
			{
				func_27(uParam0, 5);
			}
			else
			{
				func_27(uParam0, 2);
			}
		}
	}
}

bool func_47(int iParam0, int iParam1)
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

bool func_48()
{
	return Global_1894899 & 2 != 0;
}

void func_49(var uParam0)
{
	if (func_17() != 0 && iLocal_4 != -1085971095)
	{
		(*uParam0)[4] = func_127("SLEEP", -719620017, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_32(uParam0[4], 1057677739, 0, 1);
		if (func_40(8388608) && !func_120(1024))
		{
			(*uParam0)[6] = func_127("CAMP_RECIPE", -473983589, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_32(uParam0[6], 1057677739, 0, 1);
			if (func_128())
			{
				(*uParam0)[9] = func_127("CAMP_FT_PROMPT", 1367437629, Global_35, 1, 0, 0, 0, 2, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_32(uParam0[9], 1057677739, 0, 1);
			}
		}
		(*uParam0)[8] = func_127("LEAVE", 992265328, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_32(uParam0[8], 1057677739, 0, 1);
	}
}

int func_50()
{
	switch (func_17())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_51(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	return func_129(get_entity_coords(iParam0, true, false));
}

bool func_52(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	return !func_113(iParam0, 4);
}

bool func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_130(bParam1, bParam2, bParam3);
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

void func_54(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (bParam1)
	{
		func_131(iParam0, 4);
		func_132(iVar0, 1);
		func_133(iVar0, 1);
	}
	else
	{
		func_134(iParam0, 4);
		func_133(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_56()
{
	if (_is_app_active(1833066477) && func_61() != 0)
	{
		func_60(&Global_43907, 16);
	}
}

void func_57(int iParam0)
{
	if (!func_40(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

bool func_58(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return _uiprompt_is_just_released((*Global_1945938)[iVar0]->f_3);
}

bool func_59()
{
	return (((!_is_app_active(1433015236) && !Global_1898068->f_4) && !func_135()) && _can_launch_app_by_hash(1833066477));
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_61()
{
	return Global_43908;
}

void func_62(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 0;
}

void func_63(var uParam0)
{
	if (does_cam_exist(uParam0->f_24))
	{
		destroy_cam(uParam0->f_24, false);
	}
	if (does_cam_exist(uParam0->f_23))
	{
		destroy_cam(uParam0->f_23, false);
	}
}

void func_64(int iParam0)
{
	if (func_120(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 - (Global_1392040->f_1 && iParam0));
	}
}

int func_65()
{
	return &Global_1899515;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
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
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_67(int iParam0)
{
	return &Global_1899515 > iParam0;
}

int func_68()
{
	return Global_40.f_4283;
}

int func_69(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 12:
					return 11;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return 7;
				default:
					break;
			}
			break;
	}
	return iParam1;
}

int func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 6:
					return 10;
				case 18:
					return 45;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 18:
					return 30;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 0:
					return 30;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 50;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					return 20;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 15;
				case 18:
					return 40;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

float func_72(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_73(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_144(iParam0))
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
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_145(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_146(-1);
			func_147(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_145(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_148(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_145(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_149(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_150(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_150(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_150(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_151())
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
		iVar0 = func_152(&(Global_1898164->f_1[0]));
		if (func_153(iVar0) && func_154((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_155(&(Global_1898164->f_1[0])))
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

void func_75()
{
	iVar1 = get_player_index();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_156(iVar0, 1, 0))
		{
			if (func_157(iVar0))
			{
				iVar2 = func_158(iVar0);
				if (!is_entity_dead(iVar2))
				{
					_0x97b06669ac569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_159(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_77()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_160(iVar0) && func_161(iVar0, 1))
		{
			func_162(iVar0);
		}
		iVar0++;
	}
}

void func_78(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_163() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_164(iVar1) && !func_165(iVar1, iParam2)) && (!bParam3 || !func_166(iVar1))) && (!bParam4 || !func_167(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_168(iVar0);
			}
		}
		iVar0++;
	}
}

void func_79()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			func_169(iVar0);
		}
		iVar0++;
	}
}

bool func_80()
{
	return (Global_1894899 & 1 != 0 && func_170() != -1);
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_82(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_83(int iParam0, bool bParam1)
{
	fVar0 = to_float(iParam0);
	if (Global_1347477->f_4 + 60000) > get_game_timer()
	{
		fVar0 = (to_float(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		_0x51345ae20f22c261(player_id(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = to_float(iParam0);
		func_171(2, 7000);
	}
	Global_1347477->f_4 = get_game_timer();
	func_147(0);
	if (bParam1)
	{
		func_172(100f);
	}
}

void func_84()
{
	if (func_173(0))
	{
		func_174(0, 0, 100);
		func_174(0, 1, 100);
	}
	if (func_173(1))
	{
		func_174(1, 0, 100);
		func_174(1, 1, 100);
	}
}

void func_85(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_86(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_175(&Global_0, 8);
	}
	if (!func_176() || func_17() != -1)
	{
		return;
	}
	func_175(&Global_0, 1);
}

void func_87(float fParam0)
{
	if ((Global_1357549->f_1495 & 512 != 0 || is_ped_on_mount(Global_35)) || is_ped_in_any_vehicle(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436->f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436->f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436->f_9 = 1f;
	}
	else
	{
		Global_1935436->f_9 = fParam0;
	}
}

void func_88(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_colter_morning";
				case 12:
					return "wakeUp_colter_afternoon";
				case 18:
					return "wakeUp_colter_evening";
				case 0:
					return "wakeUp_colter_night";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_horseshoe_morning";
				case 12:
					return "wakeUp_horseshoe_afternoon";
				case 18:
					return "wakeUp_horseshoe_evening";
				case 0:
					return "wakeUp_horseshoe_night";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_clemensPoint_morning";
				case 12:
					return "wakeUp_clemensPoint_afternoon";
				case 18:
					return "wakeUp_clemensPoint_evening";
				case 0:
					return "wakeUp_clemensPoint_night";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_shadyBelle_morning";
				case 12:
					return "wakeUp_shadyBelle_afternoon";
				case 18:
					return "wakeUp_shadyBelle_evening";
				case 0:
					return "wakeUp_shadyBelle_night";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_guarma_morning";
				case 12:
					return "wakeUp_guarma_afternoon";
				case 18:
					return "wakeUp_guarma_evening";
				case 0:
					return "wakeUp_guarma_night";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_lakay_morning";
				case 12:
					return "wakeUp_lakay_afternoon";
				case 18:
					return "wakeUp_lakay_evening";
				case 0:
					return "wakeUp_lakay_night";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beaverHollow_morning";
				case 12:
					return "wakeUp_beaverHollow_afternoon";
				case 18:
					return "wakeUp_beaverHollow_evening";
				case 0:
					return "wakeUp_beaverHollow_night";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beechersHopeHouse_morning";
				case 12:
					return "wakeUp_beechersHopeHouse_afternoon";
				case 18:
					return "wakeUp_beechersHopeHouse_evening";
				case 0:
					return "wakeUp_beechersHopeHouse_night";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_90(int iParam0, bool bParam1)
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

void func_91(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_92(int iParam0)
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
			func_177(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_178(1);
	}
}

void func_93(bool bParam0)
{
	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1])
				{
					case -2093459088:
						iVar0 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1]->f_2;
						if (func_179(iVar0))
						{
							if (func_180(iVar0))
							{
								func_181(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_94()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_153(&(Global_40.f_450[iVar0])))
		{
			if ((*Global_1347702)[&Global_40.f_450[iVar0]]->f_14 & 2 != 0)
			{
				func_182(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

void func_95(var uParam0)
{
	func_183(uParam0, 0f);
}

int func_96(bool bParam0)
{
	if (func_17() == -1)
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

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_184())
	{
		Global_1935689->f_10191 = iParam0;
		func_185(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_186())
	{
		_0xbfff81e12a745a5f();
		func_187(iParam0, 0);
		func_185(func_188(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_189(iParam0, bParam4))
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_191(iParam0, -2081717885))
	{
		func_192(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_191(iParam0, -1909684001))
	{
		func_193(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_191(iParam0, 587975446))
	{
		func_194(iParam0, Var10);
	}
	else if (func_191(iParam0, 566155764))
	{
		if (!func_195(iParam0))
		{
			return 0;
		}
	}
	if (func_196(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = get_game_timer();
		return 1;
	}
	if (func_191(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_197(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_191(iParam0, -1472964441) || func_191(iParam0, -228153877)) || func_191(iParam0, 566155764))
	{
	}
	else if (func_191(iParam0, 1919582297))
	{
		if (((func_48() || is_ped_active_in_scenario(Global_35, 1)) || _0x0c3cb2e600c8977d(Global_35, 1)) || !is_ped_on_foot(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_197(Var10, 0);
		bVar32 = false;
	}
	else if (func_198(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_199(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_197(Var10, 0);
		iVar33 = 1;
	}
	else if (func_198(iParam0) == -1037537535)
	{
		if (func_200(iParam0) == -999503751)
		{
			if (func_17() != -1)
			{
				return iVar33;
			}
			if (!func_201(iParam0))
			{
				func_202("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_203(7, iParam0);
			bVar36 = func_203(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_202("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_204(7))
			{
				func_202("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_206(Global_35, func_205(7), 0))
				{
					func_202("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_202("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_207(iParam0);
			if (iVar30 == -1)
			{
				func_208(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_208(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_200(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_209(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_210(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23])
					{
						func_211(Global_35, 260271636, 0, -358215195, 1, 1, 1, 0, 1, 0);
						_0xcb9401f918cb0f75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_212(iParam0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_212(iParam0, 1);
					}
					break;
			}
			func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_213(1);
				break;
			case -727924611:
				if (func_17() != -1)
				{
				}
				else if (!func_201(iParam0))
				{
					func_202("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_203(7, iParam0);
					bVar36 = func_203(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (does_blip_exist(Global_36559))
						{
							remove_blip(&Global_36559);
						}
						Global_36559 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_36559, 673950256);
						func_202(_create_var_string(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!func_204(7))
					{
						func_202("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_206(Global_35, func_205(7), 0))
						{
							func_202("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_36559))
							{
								remove_blip(&Global_36559);
							}
							Global_36559 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_36559, 673950256);
							func_202(_create_var_string(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_197(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_214();
						Jump @2541; //curOff = 1643
						if (!func_215(Global_1392040->f_1, 1) || func_215(Global_1392040->f_1, 512))
						{
							if (func_17() == -1)
							{
								if (_get_number_of_references_of_script_with_name_hash(get_hash_key("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_216(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_217(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_201(iParam0) || ((!func_219(Global_35, func_205(7), func_218(7), 1) || func_220() != 0) && !func_219(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_215(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_215(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_197(Var10, 2);
								}
							}
							else if (func_201(-1838434463))
							{
								if (func_221(1))
								{
									func_222(2);
								}
								else if (func_223(1))
								{
									func_202("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_0x424b17a7dc5c90bc(player_id()))
									{
										func_202("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_224(_0x901e0dc25080c8b9(player_id()));
								}
							}
							else if (!_0x424b17a7dc5c90bc(player_id()))
							{
								func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_224(_0x901e0dc25080c8b9(player_id()));
							}
							else
							{
								func_202("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_225(Global_35, 1, 0, 0) != -160924582)
						{
							set_current_ped_weapon(Global_35, -160924582, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_225(Global_35, 1, 0, 0) != -1016714371)
						{
							set_current_ped_weapon(Global_35, -1016714371, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_226(func_170());
						iVar28 = func_227();
						if (func_228(iVar27))
						{
							if (iVar27 == iVar28 && !func_229())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_202("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_230(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_231(497, 1);
						Jump @2541; //curOff = 2388
						func_232(1);
						Jump @2541; //curOff = 2396
						func_230(iParam0, 1, 0, 562618531, 0);
						func_233(136579449, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301;
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_197(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar33;
				default:
					break;
		}
	}
}

bool func_98(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_99()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

bool func_100()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

void func_101(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_103(var uParam0, float fParam1)
{
	if (!func_18(uParam0))
	{
		return false;
	}
	if (func_234(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (does_cam_exist(uParam0->f_23))
	{
		destroy_cam(uParam0->f_23, false);
	}
	if (does_cam_exist(uParam0->f_24))
	{
		destroy_cam(uParam0->f_24, false);
	}
	vVar0 = { _get_object_offset_from_coords(_get_scenario_point_coords(iLocal_3, true), _get_scenario_point_heading(iLocal_3, true), 2f, 3.25f, 0.75f) };
	uParam0->f_23 = create_camera_with_params(26379945, vVar0, 0f, 0f, (_get_scenario_point_heading(iLocal_3, true) + 125f), 51.28f, false, 2);
	vVar3 = { 1.1081f, 1.7384f, 0.4631f };
	attach_cam_to_entity(uParam0->f_23, Global_35, vVar3, true);
	point_cam_at_entity(uParam0->f_23, Global_35, -0.7722f, -0.593f, 0.2919f, true);
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		set_cam_active(uParam0->f_23, true);
		render_script_cams(true, false, 3000, true, false, 0);
		func_88(130.648f, 1.3841f);
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 1;
}

bool func_105()
{
	return Global_1898164->f_163;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_107()
{
	return Global_1935436->f_9;
}

bool func_108(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!_does_item_have_valid_base(Global_43617))
	{
		Global_43617 = create_itemset(true);
	}
	_0x20a4bf0e09bee146(Global_43617);
	iVar0 = _0x59b57c4b06531e1e(vParam0, uParam3, Global_43617, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = get_indexed_item_in_itemset(iVar1, Global_43617);
		iVar3 = _get_entity_from_item(iVar2);
		if (iParam7 == 1 && is_entity_dead(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_235(vVar0, vParam1);
}

bool func_110(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_111()
{
	switch (iLocal_4)
	{
		case 1097070152:
			return 0.5625f;
	}
	return 0.25f;
}

bool func_112(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_114(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_115(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_132(iParam0, 1);
	func_133(iParam0, 1);
	func_134(iParam0, 128);
}

int func_116(int iParam0)
{
	return iParam0;
}

bool func_117(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_118(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_139(func_65());
	if (func_215(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_215(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_215(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_215(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_215(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_215(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_215(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_215(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_215(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_215(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_215(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_215(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_215(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_215(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_119(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_120(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

void func_121(int iParam0)
{
	if (!func_236(iParam0))
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

void func_122(bool bParam0)
{
	if (bParam0)
	{
		Global_1913814->f_209[1] = 1;
	}
	Global_1913814->f_209[0] = 1;
	set_bit(&(Global_1956580->f_1), 0);
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		func_237(4);
	}
	func_237(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_124(var uParam0)
{
	disable_control_action(0, 613911080, false);
	iVar0 = get_clock_hours();
	if (uParam0->f_18 != iVar0)
	{
		if (uParam0->f_18 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_18 = iVar0;
		if (!func_238(uParam0) && bVar1)
		{
			func_202("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

var func_125(int iParam0)
{
	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_242(func_241(func_239(iParam0), func_240(), 1, 63));
	uVar2 = func_242(func_241(sVar0, sVar1, 1, 63));
	return uVar2;
}

bool func_126()
{
	if (!func_243(&Global_35))
	{
		return false;
	}
	iVar0 = func_244(1108822547);
	switch (iVar0)
	{
		case -2030909986:
		case -1920448826:
		case -1831024386:
		case -1760360738:
		case -1737617637:
		case -1677818072:
		case -1669863795:
		case -1638570574:
		case -1600684947:
		case -1536628862:
		case -1535516064:
		case -1522618515:
		case -1481704090:
		case -1477995181:
		case -1408908147:
		case -1385724615:
		case -1308879564:
		case -1281650274:
		case -1267601302:
		case -1236788820:
		case -1114561166:
		case -1110126435:
		case -1100577462:
		case -1012673867:
		case -996920192:
		case -965969439:
		case -938068414:
		case -920786552:
		case -911136379:
		case -902845935:
		case -888116810:
		case -847198631:
		case -772520572:
		case -763730846:
		case -733535491:
		case -733007046:
		case -711959314:
		case -689603147:
		case -659695781:
		case -649538821:
		case -648223755:
		case -618025148:
		case -555248593:
		case -456506160:
		case -413116207:
		case -398915371:
		case -363206488:
		case -329166384:
		case -318532162:
		case -234637698:
		case -233264535:
		case -185417347:
		case -175760184:
		case -89384781:
		case -16926654:
		case 36090652:
		case 100421495:
		case 115894369:
		case 180273738:
		case 200325948:
		case 340746453:
		case 379713592:
		case 479128152:
		case 508896125:
		case 567774423:
		case 636451700:
		case 654226415:
		case 664533382:
		case 682123523:
		case 757102854:
		case 765987706:
		case 779407326:
		case 833070940:
		case 883169566:
		case 932716026:
		case 1023441825:
		case 1139224609:
		case 1151318293:
		case 1193654425:
		case 1287147942:
		case 1299111020:
		case 1327510486:
		case 1354649564:
		case 1425095383:
		case 1532870263:
		case 1601432817:
		case 1651201372:
		case 1711973219:
		case 1725570548:
		case 1727487721:
		case 1820684549:
		case 1896779122:
		case 1920833291:
		case 1939245694:
		case 2036219956:
		case 2060755198:
		case 2061277490:
		case 2067040192:
		case 2070685357:
		case 2109470519:
			return true;
		default:
			break;
	}
	return false;
}

int func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_113(iVar0, 2))
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
				func_115(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_128()
{
	if (((is_entity_dead(func_205(7)) || is_ped_in_writhe(func_205(7))) || func_245(Global_36, get_entity_coords(func_205(7), true, false)) > func_218(7)) && ((is_entity_dead(func_205(1)) || is_ped_in_writhe(func_205(1))) || func_245(Global_36, get_entity_coords(func_205(1), true, false)) > func_218(1)))
	{
		return false;
	}
	if (!func_246() && !func_247(68))
	{
		return false;
	}
	if (func_74(0, 0, 1))
	{
		if (!func_217(51))
		{
			return false;
		}
	}
	if (_0xad401c63158acbaa(get_player_index()))
	{
		return false;
	}
	uVar0 = 40;
	if (!func_248(&uVar0, 1, 1))
	{
		return false;
	}
	return true;
}

int func_129(vector3 vParam0)
{
	iVar0 = func_249(vParam0, 1);
	if (iVar0 == func_250())
	{
		return 1;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
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

void func_131(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_132(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_113(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_135()
{
	return &Global_1898068;
}

int func_136(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_251(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_137(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_140(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_141(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_142(int iParam0, int iParam1)
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

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_252(iParam0, iParam6);
	func_253(iParam0, iParam5);
	func_254(iParam0, iParam4);
	func_255(iParam0, iParam3);
	func_256(iParam0, iParam2);
	func_257(iParam0, iParam1);
}

bool func_144(int iParam0)
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

char* func_145(int iParam0)
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

void func_146(int iParam0)
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
	iVar1 = func_258(2);
	func_259(to_float((iParam0 * iVar1)), 0);
}

void func_147(bool bParam0)
{
	if (func_17() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_231(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_231(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_260(1, bParam0, 1);
	func_261();
	Global_40.f_11095.f_43 = bParam0;
}

void func_148(int iParam0)
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
	iVar1 = func_262(2);
	func_263(to_float((iParam0 * iVar1)));
}

void func_149(int iParam0)
{
	iVar0 = player_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x57d9991dc1334151(iVar0);
	}
	iVar1 = func_264(2);
	func_265(to_float((iParam0 * iVar1)), 0);
}

void func_150(int iParam0, bool bParam1, bool bParam2)
{
	func_266(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_151()
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

int func_152(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_268(func_267(iParam0));
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_155(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_156(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_269(iParam0))
	{
		return false;
	}
	if (func_270(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_270(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_270(iParam0, 4, 1))
	{
		return false;
	}
	if (func_271(iParam0, 33, 1))
	{
		return false;
	}
	if (func_272(iParam0))
	{
		return false;
	}
	if (func_273(iParam0))
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

bool func_157(int iParam0)
{
	if (func_160(iParam0))
	{
		if (func_274(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_158(int iParam0)
{
	if (func_160(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_159(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_156(iParam0, 1, 0))
	{
		if (func_157(iParam0))
		{
			iVar0 = func_275(iParam0, 0);
			if (_0x800df3fc913355f3(iVar0))
			{
				if (!_0xa8120ebeaf290c7a(iVar0))
				{
					return false;
				}
				if (bParam3 && !_0xa0bc8faed8cfeb3c(func_276(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_277(func_276(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || is_screen_faded_out())
				{
					_0xd4b614179bcd0654(iVar0);
					func_278(iParam0, 0);
					if (iParam2 && func_279((*Global_1360165)[iParam0]->f_63))
					{
						func_280(iParam0, 65, 0);
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

bool func_160(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, bool bParam1)
{
	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		if (!func_274(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_281(), 1);
}

void func_162(int iParam0)
{
	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_161(iParam0, 0))
	{
	}
	func_282(iParam0);
	Global_1359489->f_15 = func_283(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_284();
	func_285(iParam0, 32, 1);
	if (func_274(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_170();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

int func_163()
{
	return Global_1310750->f_16037;
}

bool func_164(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_166(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	if (func_286(64) && func_287(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_167(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_168(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_164(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_288(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_169(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		Global_1327590->f_19547[iParam0]->f_4 = 1;
	}
}

int func_170()
{
	return Global_1894899->f_2;
}

void func_171(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_172(float fParam0)
{
	if (func_289(1) < fParam0)
	{
		func_290(1, fParam0, 0);
	}
	if (func_289(2) < fParam0)
	{
		func_290(2, fParam0, 0);
	}
	if (func_289(0) < fParam0)
	{
		func_290(0, fParam0, 0);
	}
}

bool func_173(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_292(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1] = iParam2;
	iVar0 = func_205(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_295(iVar0, iParam1, func_294(iParam0, iParam1));
	func_296(iVar0, iParam1);
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_176()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_177(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_178(1);
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		func_297(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_298(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_180(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

void func_181(int iParam0, bool bParam1)
{
	if (!func_179(iParam0))
	{
		return;
	}
	if (func_299((*Global_1835011)[iParam0], 8192))
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

void func_182(int iParam0, bool bParam1, int iParam2)
{
	if (!func_153(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = does_blip_exist((*Global_1347702)[iParam0]->f_37);
	}
	func_300(&((*Global_1347702)[iParam0]->f_14));
	func_301(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_302(&((*Global_1347702)[iParam0]->f_13), 4096);
	if (bVar0)
	{
		if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_303(iParam0), 0, 0);
			}
		}
		else if ((*Global_1347702)[iParam0]->f_18 > -1f)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_305(iParam0), 0, 0);
			}
		}
		else
		{
			_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, 724623647);
		}
	}
}

void func_183(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_306() - fParam1);
	func_307(uParam0, 1);
	func_308(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_184()
{
	if (Global_1935689->f_17 == 3)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_310(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_311(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_312(iParam0, Var0, Var0.f_4, bParam4) };
	return func_313(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_186()
{
	if (func_274(Global_35, 0))
	{
		if (_is_ped_using_scenario_hash(Global_35, 1855656219))
		{
			return true;
		}
	}
	return false;
}

void func_187(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_188()
{
	return Global_1357549->f_1672;
}

bool func_189(int iParam0, bool bParam1)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689->f_8)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_314(iParam0);
		if (func_191(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_315(&uVar1, _0x0501d52d24ea8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_316())
		{
			return false;
		}
	}
	if (!func_317(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_190(int iParam0)
{
	if (func_198(iParam0) == -1650247667)
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_96(0), iParam0, func_318(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			if (!Global_1392040->f_2)
			{
				func_319(1, 1);
				_0x565eaa726b2ce3b7(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1807503187:
			func_202(_create_var_string(0, 163043886, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

bool func_191(int iParam0, int iParam1)
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

void func_192(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730:
			break;
		case -1952196650:
			if (func_320())
			{
				func_321(998229694, 0);
			}
			else if (_journal_can_write_entry(998229694))
			{
				func_321(1610852701, 0);
			}
			break;
		case -1566711999:
			func_321(-1741315348, 0);
			break;
		case -1237758927:
			break;
		case -631796932:
			func_322((*Global_1347702)[80]->f_15, 1);
			if (func_320() == 1)
			{
				func_321(1565950479, 0);
			}
			else if (_journal_can_write_entry(1565950479))
			{
				if (func_323(77))
				{
					func_321(-553142873, 0);
				}
				else
				{
					func_321(-384883866, 0);
				}
			}
			break;
		case 581047644:
			if ((func_176() && !func_324(51)) && !func_325(1048576))
			{
				func_326(2);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_329(1048576);
			}
			break;
		case -625427311:
			if ((func_176() && !func_324(51)) && !func_325(16384))
			{
				func_326(1);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_329(16384);
			}
			break;
		case -644199619:
			if ((func_176() && !func_324(40)) && !func_330(32))
			{
				func_331(4);
				func_327(39, 0, 0, 0, 0, -1, 0);
				func_328(39, 0, 0, 0, 0, 0, 2, 0);
				func_332(32);
			}
			break;
		case 684296857:
			if ((func_176() && !func_324(42)) && !func_333(16))
			{
				func_334(8);
				func_327(41, 0, 0, 0, 0, -1, 0);
				func_328(41, 0, 0, 0, 0, 0, 2, 0);
				func_335(16);
			}
			break;
		case 466137807:
			if ((func_176() && !func_324(50)) && !func_336(32))
			{
				func_337(4);
				func_327(49, 0, 0, 0, 0, -1, 0);
				func_328(49, 0, 0, 0, 0, 0, 2, 0);
				func_338(32);
				if (!func_339((*Global_1347702)[50]->f_15, 1))
				{
					if (func_320() == 1)
					{
						func_321(-629995342, 0);
					}
					else if (_journal_can_write_entry(-629995342))
					{
						func_321(-1367572831, 0);
					}
				}
			}
			break;
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_193(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992:
			func_334(16);
			break;
	}
}

void func_194(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case -1280336729:
		case -691125380:
		case -287018478:
		case 305626647:
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

bool func_195(int iParam0)
{
	return true;
}

bool func_196(int iParam0, bool bParam1, bool bParam2)
{
	if (func_340(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1911773 = get_game_timer() + 3000;
		return true;
	}
	switch (func_341(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_342(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_343())
				{
					if (func_243(&Global_35))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_202("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_344(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_345(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_346(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_35, 0))
				{
					func_347(iParam0);
				}
				else
				{
					func_348(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_349(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_350(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_351(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_352(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_353(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_354(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_355(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_356(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_357(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_358(iParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_197(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_359(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_360(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_361(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_198(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_200(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_201(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_198(iParam0) == -1037537535)
	{
		if (func_200(iParam0) == -999503751)
		{
			iVar0 = func_207(iParam0);
			if ((iVar0 != -1 && !func_362(iVar0)) || !func_317(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

var func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_203(int iParam0, int iParam1)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_35) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_35))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_35)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_363(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_204(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_364())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

int func_205(int iParam0)
{
	iParam0 = func_291(iParam0);
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

bool func_206(int iParam0, int iParam1, bool bParam2)
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

int func_207(int iParam0)
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

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_365(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_366(Var0);
}

int func_209(int iParam0, bool bParam1)
{
	if (!func_367())
	{
		return 0;
	}
	if (!func_368(iParam0))
	{
		return 0;
	}
	if (func_369(iParam0))
	{
		iVar0 = 0;
		if (func_200(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_370(&iVar0, 2);
			}
		}
		return func_371(iParam0, iVar0);
	}
	return 0;
}

void func_210(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_211(Global_35, -2065815962, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_212(iParam0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_372(32768))
	{
		knock_off_ped_prop(Global_35, false, true, false, true);
		func_373();
		func_365(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0])
	{
		func_212(iParam0, 1);
		return;
	}
	if (func_374(-2061583405, 0))
	{
		if (func_375(iVar1))
		{
			func_212(iVar1, 0);
		}
		else
		{
			func_376(iVar1, 1, 1, 0);
		}
		func_212(iParam0, 1);
		return;
	}
	if (func_375(iVar1))
	{
		func_212(iVar1, 0);
		func_212(iParam0, 1);
	}
	else if (func_375(iParam0))
	{
		if (iParam0 != func_377(0))
		{
			func_378(iParam0, iVar1);
			func_212(iParam0, 0);
			func_212(iVar1, 0);
		}
		else
		{
			knock_off_ped_prop(Global_35, false, true, false, true);
			func_365(128);
			func_212(iParam0, 1);
		}
	}
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_310(iParam1, 1, 0) };
		iParam3 = func_379(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_381(iParam1, iParam2, func_380(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_382(1, (func_17() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_380(iParam3, 1)])
			{
				func_208(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_372(32768) && iParam1 != &Global_1946804->f_57[func_380(iParam3, 1)])
			{
				func_373();
				func_208(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_208(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_383(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_208(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_384(0);
			func_385(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_208(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_212(int iParam0, bool bParam1)
{
	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_96(0), &Var5, bParam1);
}

void func_213(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_214()
{
	if (func_387())
	{
		return;
	}
	if (func_388())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_202(func_389(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

bool func_215(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_216(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_390((*Global_1347702)[iParam0]->f_15);
}

bool func_217(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_390((*Global_1835011)[iParam0]->f_1);
}

float func_218(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_391(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_392(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_392(iParam0) + 1;
	fVar6 = func_393(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_394(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_219(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_220()
{
	return Global_40.f_1095.f_3054.f_1;
}

bool func_221(int iParam0)
{
	if (!func_395(32))
	{
		return false;
	}
	if (!_unlock_is_unlocked(-75008140))
	{
		return false;
	}
	if (!func_396())
	{
		return false;
	}
	if (func_397(16))
	{
		return false;
	}
	if (!_0xd6f6acf4392187fb(Global_1225639->f_14) || !_0x424b17a7dc5c90bc(int_to_playerindex(&Global_1225639)))
	{
		return false;
	}
	if (iParam0 == 1 && func_398(Global_1131433->f_8, 1))
	{
		return false;
	}
	return true;
}

int func_222(int iParam0)
{
	if (!func_399())
	{
		return 0;
	}
	func_400(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_223(int iParam0)
{
	return func_398(Global_1131433->f_8, iParam0);
}

void func_224(int iParam0)
{
	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_402(Var0, func_401(0, 15), 0, 0);
}

int func_225(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_226(int iParam0)
{
	if (!func_403(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_227()
{
	iVar0 = func_68();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_228(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_229()
{
	return &Global_1395601;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_404(iParam0, 1);
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
			func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_317(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_406(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_407(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_407(iParam0, 0, 0) - iParam1) < 0)
		{
			func_230(iParam0, func_407(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_198(iParam0) == -427144552)
	{
		if (!func_408(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_185(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_410(iParam0, iParam1);
	return 1;
}

void func_231(int iParam0, bool bParam1)
{
	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_413(iVar0, iVar1);
}

void func_232(bool bParam0)
{
	if ((func_17() != -1 || !bParam0) || func_414(Global_35))
	{
		func_415();
		return;
	}
	if (func_40(8388608) && !func_215(Global_1392040->f_1, 2048))
	{
		func_57(16777216);
		return;
	}
	func_415();
}

int func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_416(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_417(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_418(iParam0, bParam2);
	iVar2 = 0;
	if (func_407(iParam0, 0, 0) == 0)
	{
		if (func_419(iParam0))
		{
			iVar5 = func_420(iParam0);
			iVar6 = func_421(iVar5);
			iVar7 = func_422(iVar6) + 1;
			func_423(iVar5);
			if (func_324(38))
			{
				func_231(483, 0);
			}
			else
			{
				func_231(482, 0);
			}
			if (iVar7 == func_424(iVar6))
			{
				func_233(func_425(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_176() && func_426(4))
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(2);
					}
					else
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(1);
					}
				}
			}
			else if (func_176() && func_426(4))
			{
				if (func_176() && (func_427(38) || func_324(38)))
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(2);
				}
				else
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(1);
				}
			}
			if (func_176() && func_426(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_327(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_327(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_198(iParam0) == -1037537535)
	{
		if ((!func_191(iParam0, 866047851) && !func_191(iParam0, -1979000645)) && !func_191(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_430(iParam0, 8388608) && !func_431(28))
	{
		func_432(28);
	}
	if (!bVar3)
	{
		if (func_191(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_200(iParam0) == -1447088266)
			{
				iVar1 = func_434(func_433(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_17() == -1)
					{
						func_435(iVar1);
					}
					if (func_409(0) && func_436(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iParam0, iVar0, iParam5);
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
					if (func_17() == -1)
					{
						func_435(iParam0);
					}
					if (func_409(0) && func_436(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_198(iParam0) == -427144552)
		{
			if (!func_438(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_198(iParam0) == 307971639 && func_439(iParam0))
		{
			if (!func_440(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_191(iParam0, 866047851))
		{
			func_441(iParam0);
		}
		else if (func_191(iParam0, 2000026003))
		{
			func_442(iParam0);
		}
		else if (func_191(iParam0, -103750053))
		{
			func_444(func_443(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_444(func_445(-717883113, 2091222383), iVar0);
		}
		else if (func_191(iParam0, -121341956) && !func_191(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_339((*Global_1835011)[4]->f_1, 1))
				{
					func_231(498, 0);
				}
			}
			if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
			{
				func_446(iParam0);
			}
		}
		else if (func_191(iParam0, -136654233))
		{
			if (func_191(iParam0, -1021472396))
			{
			}
		}
		else if (func_191(iParam0, -1466706512) && func_191(iParam0, 1147021565))
		{
			func_231(484, 0);
		}
		else if (func_191(iParam0, 1147021565) && func_191(iParam0, -524514947))
		{
		}
		else if (func_191(iParam0, 554195525))
		{
		}
		else if (func_191(iParam0, 589988438))
		{
			if (func_447())
			{
				func_448(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_191(iParam0, 787083290) && func_191(iParam0, 949916894))
		{
			func_449(iParam0);
		}
		else if (func_191(iParam0, -1718133314))
		{
			func_450(iParam0);
		}
		else if (func_191(iParam0, -1738650224))
		{
			func_451(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, 949916894))
		{
			func_452(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_191(iParam0, 1841149704))
		{
			func_453();
		}
		else if (func_191(iParam0, 606799272))
		{
			func_454(iParam0, iParam1);
			func_455(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, 0, 0, 0);
		}
		else if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
		{
			func_446(iParam0);
		}
		else if (func_191(iParam0, -1921346699))
		{
			if (func_17() != -1)
			{
				return 0;
			}
			func_457(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_191(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_317(215778062, 1, 0))
					{
						func_233(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_317(670273567, 1, 0))
					{
						func_233(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_317(-967317137, 1, 0))
					{
						func_233(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_317(526074061, 1, 0))
					{
						func_233(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_317(-1045488665, 1, 0))
					{
						func_233(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_317(471514780, 1, 0))
					{
						func_233(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_191(iParam0, -839724752) && func_430(iParam0, 4))
		{
			if (!func_324(42))
			{
				func_458(iParam0);
			}
		}
		else if (func_191(iParam0, 1399091007))
		{
			func_459(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_191(iParam0, 1248798204))
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
				func_233(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_432(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_211(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_460(&iVar9, 0))
				{
					func_436(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_17() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_211(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_231(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_462();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_463();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_464();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_261();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_465(499813453, 854119837, 0);
				func_466(499813453, 0);
				func_467(1);
				break;
			case 2127812557:
				func_465(499813453, -1292544588, 0);
				func_466(499813453, 0);
				func_467(2);
				break;
			case 808991383:
				func_465(499813453, -1003325394, 0);
				func_466(499813453, 0);
				func_467(4);
				break;
			case 1134518629:
				func_465(666607663, -335460405, 0);
				func_466(666607663, 0);
				func_468(1);
				break;
			case 902940106:
				func_465(666607663, 903797617, 0);
				func_466(666607663, 0);
				func_468(2);
				break;
			case -418174898:
				func_465(666607663, 669728650, 0);
				func_466(666607663, 0);
				func_468(4);
				break;
			case -648114971:
				func_465(-220219788, 1214120047, 0);
				func_466(-220219788, 0);
				func_469(1);
				break;
			case 211153747:
				func_465(-220219788, 655769340, 0);
				func_466(-220219788, 0);
				func_469(2);
				break;
			case -32876996:
				func_465(-220219788, 885316185, 0);
				func_466(-220219788, 0);
				func_469(4);
				break;
			case 1191437462:
				func_465(218622660, -1491419385, 0);
				func_466(218622660, 0);
				func_470(1);
				break;
			case 1119149048:
				func_465(218622660, 1809565830, 0);
				func_466(218622660, 0);
				func_470(2);
				break;
			case 506073827:
				func_465(390004462, -628873767, 0);
				func_466(390004462, 0);
				func_471(1);
				break;
			case -1876986168:
				func_465(390004462, -405421956, 0);
				func_466(390004462, 0);
				func_471(2);
				break;
			case 2142623221:
				func_465(390004462, -1108972386, 0);
				func_466(390004462, 0);
				func_471(4);
				break;
			case 1508215381:
				func_465(6410548, 1053716392, 0);
				func_466(6410548, 0);
				func_472(1);
				break;
			case -888935280:
				func_465(6410548, 806507056, 0);
				func_466(6410548, 0);
				func_472(2);
				break;
			case -1252474566:
				func_465(6410548, 1571925350, 0);
				func_466(6410548, 0);
				func_472(4);
				break;
			case -1465702449:
				func_465(6410548, 1330352282, 0);
				func_466(6410548, 0);
				func_472(8);
				break;
			case -21093309:
				func_474(242, func_473(-21093309), 0);
				break;
			case 204375141:
				func_474(240, func_473(204375141), 0);
				break;
			case -417963070:
				func_474(241, func_473(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(594, 1934060482, 1, 1);
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
					func_475(594, 1110018439, 1, 1);
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
					func_475(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(594, -1228016946, 1, 1);
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
					func_475(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_231(488, 0);
				break;
			case 1613651027:
				func_231(491, 0);
				break;
			case -885810591:
				func_231(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_233(func_476(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_233(func_477(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_431(1))
				{
					func_231(487, 0);
				}
				break;
			case -898386032:
				func_231(486, 0);
				break;
			case -2035110427:
				if (func_17() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_231(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_478(&iVar10);
		if (!func_479(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_409(0))
		{
			return 1;
		}
		if (func_198(iParam0) == -1037537535)
		{
			func_480(iParam0);
		}
		if (func_191(iParam0, -1979000645))
		{
			func_481(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_409(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_233(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_482(iVar2, 0);
		}
	}
	Var35 = { func_406(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_483(iParam0);
	if (fParam6 > 0f)
	{
		if (func_191(iParam0, -839724752))
		{
			func_484(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_405(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

float func_234(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_485(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_306() - uParam0->f_1);
}

float func_235(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_236(int iParam0)
{
	return func_113(iParam0, 2);
}

void func_237(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_238(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_18 > 3 && uParam0->f_18 <= 9)
	{
		(*uParam0)[1] = func_44("CMP_SLP_NOON", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_18 > 9 && uParam0->f_18 <= 15)
	{
		(*uParam0)[2] = func_44("CMP_SLP_EVE", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_18 > 15 && uParam0->f_18 <= 21)
	{
		(*uParam0)[3] = func_44("CMP_SLP_MDN", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else if (uParam0->f_18 > 21 || uParam0->f_18 <= 3)
	{
		(*uParam0)[0] = func_44("CMP_SLP_MRN", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", 1367437629, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	bVar2 = true;
	if (Global_1392040->f_7 == -15)
	{
		Global_1392040->f_7 = func_65();
	}
	iVar3 = Global_1392040->f_7;
	func_66(&iVar3, 0, 0, 3, 0, 0, 0, 0);
	if (!func_67(iVar3))
	{
		if (Global_1392040->f_8 > 1)
		{
			bVar2 = false;
		}
	}
	else
	{
		Global_1392040->f_8 = 0;
	}
	if (func_53(player_id(), 1, 0, 1) || is_ped_in_combat(Global_35, 0))
	{
		bVar2 = false;
	}
	if (func_38(uParam0[0]))
	{
		if (uParam0->f_18 < 6)
		{
			iVar1 = (6 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 6;
		}
		func_486(uParam0[0], "CMP_SLP_MRN", iVar1, 1);
		func_32(uParam0[0], 1323335645, 0, 1);
		func_54(uParam0[0], bVar2, 1);
	}
	if (func_38(uParam0[1]))
	{
		if (uParam0->f_18 < 12)
		{
			iVar1 = (12 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 12;
		}
		func_486(uParam0[1], "CMP_SLP_NOON", iVar1, 1);
		func_32(uParam0[1], 1323335645, 0, 1);
		func_54(uParam0[1], bVar2, 1);
	}
	if (func_38(uParam0[2]))
	{
		if (uParam0->f_18 < 18)
		{
			iVar1 = (18 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 18;
		}
		func_486(uParam0[2], "CMP_SLP_EVE", iVar1, 1);
		func_32(uParam0[2], 1323335645, 0, 1);
		func_54(uParam0[2], bVar2, 1);
	}
	if (func_38(uParam0[3]))
	{
		iVar1 = (24 - uParam0->f_18);
		func_486(uParam0[3], "CMP_SLP_MDN", iVar1, 1);
		func_32(uParam0[3], 1323335645, 0, 1);
		func_54(uParam0[3], bVar2, 1);
	}
	return bVar2;
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_487())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_487())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_487())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_487())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_240()
{
	iVar0 = func_488();
	switch (iVar0)
	{
		case -1317052143:
		case 433385945:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return "04Storm";
		case -1721991356:
		case -1233681761:
		case -1148613331:
		case -702816767:
		case -416908843:
		case -273223690:
		case 212278652:
		case 603685163:
			return "03Clouds";
		case -173507739:
		case 821931868:
		case 1500834021:
		case 1632247697:
		case 1679686673:
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_241(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

var func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_243(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_489(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

int func_244(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_380(iParam0, 1)]);
}

float func_245(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_246()
{
	return func_71(10, 0) >= 3;
}

bool func_247(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_339((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_248(var uParam0, bool bParam1, bool bParam2)
{
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1] = -1;
		(*uParam0)[iVar1]->f_3 = 0;
		(*uParam0)[iVar1]->f_4 = 99999999;
		(*uParam0)[iVar1]->f_5 = 0f;
		(*uParam0)[iVar1]->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_490(iVar0))
		{
			if (func_491(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_492(uParam0, iVar0);
				}
				else
				{
					func_493(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_3)
		{
			if (func_403(uParam0[iVar0]))
			{
				iVar2++;
				(*uParam0)[iVar0]->f_5 = func_494((*uParam0)[iVar0]->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

int func_249(vector3 vParam0, int iParam3)
{
	iVar0 = func_170();
	if (func_403(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_495(vParam0, iParam3);
}

int func_250()
{
	return Global_40.f_4283.f_1;
}

int func_251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_252(int iParam0, int iParam1)
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

void func_253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_254(int iParam0, int iParam1)
{
	iVar0 = func_137(*iParam0);
	iVar1 = func_136(*iParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_256(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_258(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_259(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = player_ped_id();
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

void func_260(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_261()
{
	func_497();
	func_498();
	func_499();
}

int func_262(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_263(float fParam0)
{
	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_charge_ped_stamina(iVar0, fParam0);
}

int func_264(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_265(float fParam0, bool bParam1)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0) && fParam0 > 0f)
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
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 0);
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

int func_266(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_496();
	}
	iVar0 = player_ped_id();
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
		func_500(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_501(iVar0, iParam0, fParam1);
	func_502(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_503(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_269(int iParam0)
{
	return iParam0 > -1;
}

bool func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_271(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_272(int iParam0)
{
	return func_270(iParam0, 16, 1);
}

bool func_273(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_274(int iParam0, int iParam1)
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
	if (func_398(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_398(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_398(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_505(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

int func_276(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_277(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_506(iParam0, Global_36, 1);
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

void func_278(int iParam0, bool bParam1)
{
	if (_0xa8120ebeaf290c7a(func_275(iParam0, 0)))
	{
		iVar0 = _0x69786495c92a3044(func_275(iParam0, 0));
		if (iVar0 != (*Global_1360165)[iParam0]->f_47 || bParam1)
		{
			(*Global_1360165)[iParam0]->f_47 = iVar0;
			StringCopy(&((*Global_1360165)[iParam0]->f_48), _0x9c7f95946e304778(func_275(iParam0, 0), (*Global_1360165)[iParam0]->f_47), 64);
			(*Global_1360165)[iParam0]->f_56 = 1;
		}
	}
}

int func_279(int iParam0)
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

void func_280(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_281()
{
	return get_player_group(get_player_index());
}

void func_282(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_160(iParam0))
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
		_0xd747979c053efa7a(func_281());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_507(iParam0, 0, 0);
}

int func_283(bool bParam0)
{
	if (bParam0)
	{
		return func_508(Global_1359489->f_4);
	}
	get_group_size(func_281(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_281(), iVar3);
		if (func_509(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_284()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_510(iVar0);
		iVar2 = func_510(iVar0 + 1);
		if (!func_160(iVar1))
		{
			if (func_160(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_286(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_287(int iParam0)
{
	return func_165(iParam0, Global_1310750->f_16072 | 64);
}

void func_288(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

float func_289(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_290(int iParam0, float fParam1, bool bParam2)
{
	if (func_17() != -1)
	{
		return;
	}
	if (!func_431(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_511(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_503(iParam0), iVar0);
	func_513(func_512(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_514(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_231(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_231(func_515(iParam0), 1);
	}
	sVar1 = func_516(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

int func_291(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_292(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_293(int iParam0, int iParam1, int iParam2)
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

int func_294(int iParam0, int iParam1)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_398[iParam1]);
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	if (func_517(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

void func_296(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_517(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_518(iParam1);
	sVar2 = func_519(iParam1);
	if (!is_string_null_or_empty(sVar1))
	{
		iVar3 = _get_attribute_core_value(iParam0, iVar0);
		_0x437c08db4febe2bd(iParam0, sVar1, to_float(iVar3), -1);
		if (iVar3 <= 20)
		{
			_0xcb9401f918cb0f75(iParam0, sVar2, 1, -1);
		}
		else
		{
			_0xa6f67bec53379a32(iParam0, sVar2);
		}
	}
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_300(var uParam0)
{
	*uParam0 = 0;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_303(int iParam0)
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

void func_304(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_153(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_74(0, 0, 1))
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
	if (func_520(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_521(iParam0);
	if (!bParam5 && func_522(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_303(iParam0), (*Global_1347702)[iParam0]->f_18);
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
		func_523(8);
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
	func_524(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_17() == -1)
	{
		func_525(iParam0);
		iVar0 = func_526(Global_40.f_4283);
		if (func_403(iVar0) && func_527((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_528(iVar0);
		}
		if (func_529(iParam0, bVar1, iVar0))
		{
			func_530((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
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
		func_531(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_522(iParam0) || func_154((*Global_1347702)[iParam0]->f_12, 1)) || func_154((*Global_1347702)[iParam0]->f_12, 512)) || func_532((*Global_1347702)[iParam0]->f_13, 2048))
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
			func_531(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_533(iParam0))
		{
			if (iParam0 == 97)
			{
				func_231(185, 0);
			}
			else
			{
				func_231(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_202(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_534(iParam0, 2);
	}
}

Vector3 func_305(int iParam0)
{
	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_535(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

float func_306()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_309(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<5> func_310(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_536(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_198(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_312(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_537(bParam1) };
			if (bParam2 && func_538(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_539(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_539(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_540(iParam0, &Var5, 1728382685))
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
			Var0 = { func_541(bParam1) };
			switch (func_200(iParam0))
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
			if (func_542(iParam0, -1823706425))
			{
				Var0 = { func_312(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_542(iParam0, -1483207246))
			{
				Var0 = { func_312(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_543(Var0, &Var27, bParam1, 0))
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

bool func_311(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_544(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_409(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_96(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_312(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_96(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_313(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_544(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_543(*uParam1, &Var0, bParam6, 0))
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
	if (!func_409(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_96(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_314(int iParam0)
{
	if (func_191(iParam0, 1573112293))
	{
		return func_545(iParam0);
	}
	switch (func_200(iParam0))
	{
		case -77448735:
			if (func_546(iParam0))
			{
				return func_545(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_545(iParam0);
		case 1802292908:
			return func_547();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_548();
		case -525676072:
			return func_548();
		case 1779021115:
			if (func_309(iParam0, 0))
			{
				if (iParam0 == -1016714371)
				{
					return func_549();
				}
			}
			return func_550();
		case -1823706425:
			return func_551();
		case -854348463:
			return func_552();
		default:
			if (func_309(iParam0, 0))
			{
				if (func_191(iParam0, 1192444843) || func_191(iParam0, -1540973036))
				{
					return func_553();
				}
				else if (func_191(iParam0, 1919582297))
				{
					return func_554();
				}
				else if (func_191(iParam0, 1147021565))
				{
					return func_555();
				}
				switch (iParam0)
				{
					case -2035110427:
					case -1448210800:
						return func_556();
					case -1516555556:
						return func_557();
				}
			}
			return func_558();
	}
	return func_558();
}

bool func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_559(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = is_ped_dead_or_dying(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630->f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_560(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_561(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_562(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = is_ped_swimming(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_564(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_202("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_100();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_316()
{
	if (ped_has_use_scenario_task(Global_35))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != -1241981548 && iVar1 != 1020517461) && iVar1 != 1259174088) && iVar1 != -1075420544) && iVar1 != -1767895052)
		{
			return true;
		}
	}
	return false;
}

bool func_317(int iParam0, int iParam1, bool bParam2)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
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
		if (!func_565(iParam0, 1))
		{
			return false;
		}
	}
	return func_407(iParam0, 0, bParam2) >= iParam1;
}

bool func_318(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_319(bool bParam0, bool bParam1)
{
	if (func_17() == 0)
	{
		return _databinding_read_data_bool(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_566())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_567(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_568())
	{
		if (bParam0)
		{
			if (func_68() != 8 && func_68() != 7)
			{
				func_202("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (does_entity_exist(iVar0))
		{
			if (!is_entity_dead(iVar0))
			{
				if (is_entity_in_air(iVar0, 1) || is_ped_swimming(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (is_entity_in_air(Global_35, 1) || is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_53(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x26934083d3f2579c(player_id()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (is_ped_active_in_scenario(Global_35, 1))
		{
			if (bParam0)
			{
				func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_569(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_570())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_98(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_35, false) || (!is_ped_ragdoll(Global_35) && is_ped_on_vehicle(Global_35, false))) || is_ped_in_any_boat(Global_35)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_74(0, 1, 1) && !func_571(1))
	{
		if (bParam0)
		{
			if (func_217(15))
			{
				func_202("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_572() == 8)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_119(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_40(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_573(func_170()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_80() || func_574(func_170()) == 9) || func_575(func_170())) && !func_576())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_577(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_578())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (get_distance_between_coords(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { _0x6de03bcc15e81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_579(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_580(Global_36, 5f))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (vdist2(Global_36, (*Global_1347702)[74]->f_24) < 144f && _get_number_of_references_of_script_with_name_hash(1822247127) > 0)
	{
		return false;
	}
	return true;
}

bool func_320()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_321(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_177(iParam0, 0);
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
		func_92(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_322(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	func_581(iParam0, iParam1);
}

bool func_323(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_324(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_339((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_325(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_326(int iParam0)
{
	Global_40.f_12019.f_26 = (Global_40.f_12019.f_26 || iParam0);
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
		if (func_176() && (func_427(38) || func_324(38)))
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
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_584(_create_var_string(2, sVar0), _create_var_string(2, func_583(func_425(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_176() && (func_427(39) || func_324(39)))
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
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_176() && (func_427(49) || func_324(49)))
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
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			iVar9 = func_585(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_176() && (func_427(41) || func_324(41)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
			iVar9 = func_585(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_586(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_587(iParam0, iVar13, iVar14))
	{
	}
	if (func_588(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_589(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_590(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_591(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_592(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_329(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_330(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_331(int iParam0)
{
	Global_40.f_12019.f_3 = (Global_40.f_12019.f_3 || iParam0);
}

void func_332(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_333(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_334(int iParam0)
{
	Global_40.f_12019.f_4 = (Global_40.f_12019.f_4 || iParam0);
}

void func_335(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_336(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_337(int iParam0)
{
	Global_40.f_12019.f_2 = (Global_40.f_12019.f_2 || iParam0);
}

void func_338(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

bool func_339(int iParam0, bool bParam1)
{
	switch (func_593(iParam0))
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

bool func_340(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_341(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_341(int iParam0, int iParam1)
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

void func_342(int iParam0)
{
	iVar0 = 1428936325;
	switch (func_594())
	{
		case 0:
			iVar0 = 1428936325;
			break;
		case 3:
			iVar0 = 1791580586;
			break;
		case 1:
			iVar0 = 1731192422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_343()
{
	return 1 == Global_40.f_7748.f_3;
}

void func_344(int iParam0)
{
	iVar0 = 16939881;
	switch (func_594())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_345(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_594())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_346(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_594())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_347(int iParam0)
{
	iVar0 = -362580870;
	switch (func_594())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_348(int iParam0)
{
	iVar0 = -680642132;
	switch (func_594())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_349(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_594())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_350(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_594())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_351(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_594())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_352(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_594())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_353(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_594())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_354(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_594())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_355(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_594())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_356(int iParam0)
{
	iVar0 = 406178289;
	switch (func_594())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_191(iParam0, 1573112293))
		{
			func_598(func_597(&iParam0), 1, 1);
		}
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_357(int iParam0)
{
	iVar0 = 1934039819;
	switch (func_594())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_358(int iParam0)
{
	iVar0 = -1054661625;
	switch (func_594())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_359(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_360(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_361(int iParam0)
{
	if (func_359(iParam0, 1))
	{
		func_599(1);
	}
}

bool func_362(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	if (func_601(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_363(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_602(iVar0))
	{
		return true;
	}
	return false;
}

int func_364()
{
	return Global_40.f_1095.f_3054;
}

void func_365(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_366(struct<4> Param0)
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
			if (func_603(Param0))
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
			func_604(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_365(8);
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
			if (func_603(Param0))
			{
				return;
			}
			func_604(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_365(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_385(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_367()
{
	return Global_1946804->f_2792;
}

bool func_368(int iParam0)
{
	if (func_605())
	{
		return false;
	}
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (!func_317(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_369(int iParam0)
{
	return func_606(iParam0);
}

void func_370(int iParam0, int iParam1)
{
	func_607(iParam0, iParam1);
}

int func_371(int iParam0, int iParam1)
{
	bVar3 = func_608(iParam0);
	if (func_191(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_609(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_610();
			}
			else
			{
				iVar0 = func_611();
			}
		}
		else if (func_398(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_612();
		}
		else
		{
			iVar0 = func_613();
		}
	}
	else if (func_614(&iVar2))
	{
		if (func_191(iVar2, -1303648999))
		{
			iVar0 = func_610();
		}
		else
		{
			iVar0 = func_611();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_612();
	}
	else
	{
		iVar0 = func_613();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_372(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_373()
{
	func_615(&(Global_1946804->f_2776));
	func_616(32768);
	func_617(1108822547, 8, 6);
}

bool func_374(int iParam0, bool bParam1)
{
	return func_618(iParam0, 0) < func_619(iParam0, bParam1);
}

bool func_375(int iParam0)
{
	return func_620(iParam0, &uVar0);
}

void func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_621(iParam0))
	{
		return;
	}
	iVar0 = func_200(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_377(0))
	{
		func_623(iParam0, 1);
		if (func_624() == 1160113249)
		{
			func_623(func_377(-2125499975), 0);
		}
		else
		{
			func_623(func_377(1160113249), 0);
		}
	}
	func_625();
	if (func_626(iVar0))
	{
		_0x766315a564594401(func_96(0), iParam0, 0);
	}
	func_212(iParam0, bParam3);
	if (bParam2)
	{
		func_627(0, 0);
	}
}

int func_377(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_378(int iParam0, int iParam1)
{
	iVar0 = func_200(iParam1);
	if (iVar0 != func_200(iParam0))
	{
		return;
	}
	func_628(iParam0, iParam1, 1);
}

int func_379(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_629(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_380(int iParam0, int iParam1)
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

bool func_381(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_630();
	if (iParam2 == 39)
	{
		Var0 = { func_310(iParam0, 1, 0) };
		iParam2 = func_380(func_379(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_191(iParam0, 866047851) && func_631(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_372(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_632(func_629(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_633(iParam2);
	func_634(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_635(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_635(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_636(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_637(iParam0, iParam2, iParam1, func_17() != -1);
	if (bParam4)
	{
		func_638(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_638(&(Global_1946804->f_1378), 1, 0);
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
				func_617(func_629(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_382(bool bParam0, bool bParam1, bool bParam2)
{
	func_639(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_383(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_380(iParam0, 1);
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

void func_384(int iParam0)
{
	if (func_640(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_641(Var0);
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_641(Var0);
}

int func_386(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_312(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_96(bParam6), &Var0, 0);
	return uVar4;
}

bool func_387()
{
	return Global_1914319->f_18996.f_1;
}

bool func_388()
{
	return Global_1914319->f_18996;
}

char* func_389()
{
	switch (Global_1914319->f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

bool func_390(int iParam0)
{
	iVar0 = func_593(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_391(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_392(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_393(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_394(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_395(int iParam0)
{
	return func_398((*Global_1129544)[network_player_id_to_int()]->f_58, iParam0);
}

bool func_396()
{
	return !func_395(2);
}

bool func_397(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147326->f_1 && iParam0) != 0;
}

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_399()
{
	if ((((func_318(0) && !func_642()) || func_643()) || Global_1935689->f_1) || func_644())
	{
		return false;
	}
	return true;
}

void func_400(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

var func_401(int iParam0, int iParam1)
{
	return func_645(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_402(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
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
				func_646(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 16, 4, &uParam16);
}

bool func_403(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_404(int iParam0, int iParam1)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_191(iParam0, 1399091007))
	{
		func_647(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_309(iParam0, 0))
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
	if (!func_648())
	{
		func_649(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_430(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_198(iParam0);
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
	else if (!func_651(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_652(_create_var_string(10, &cVar2, _create_var_string(0, func_473(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_191(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_473(iParam0));
	}
	func_653(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_406(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	if (func_191(iParam0, -305066475))
	{
		if (func_17() == -1)
		{
			if (func_191(iParam0, -537818634))
			{
				return func_654(189951448);
			}
			else
			{
				return func_654(1176172851);
			}
		}
	}
	else if (func_191(iParam0, -537818634))
	{
		return func_654(-963660207);
	}
	if (func_191(iParam0, 2084895747))
	{
		return func_654(1694039471);
	}
	return Var2;
}

int func_407(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_404(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_655(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_96(bParam2), iParam0, 0);
	return iVar2;
}

bool func_408(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_659(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_313(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_660(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_409(bool bParam0)
{
	if (func_17() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_96(bParam0));
}

void func_410(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_191(iParam0, 606799272))
		{
			func_661(iParam0, iParam1);
		}
		if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, iParam1, 1, 0);
		}
	}
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_662(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_663(iParam0))
	{
		return false;
	}
	if (func_664(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_665(iParam0, 1)) || func_520(32768))
	{
		if (!func_665(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_666())
	{
		return false;
	}
	return true;
}

void func_413(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_414(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_415()
{
	Global_1911914->f_1583 = get_game_timer();
	Global_1911914->f_1581 = 1;
}

bool func_416(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_17() == -1)
	{
		if (func_667(iParam0) && func_668(iParam0))
		{
			func_669(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_417(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_670(iParam0, iParam1);
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = func_671(iParam0, &Var0, 0, 0);
	iVar6 = func_672(iParam0, 0);
	if ((iVar5 > 1 && !func_673()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_191(iParam0, -2051813666))
		{
			func_231(583, 1);
		}
		else
		{
			func_231(582, 0);
		}
	}
	if (func_674(iParam0, &Var0, *iParam1, 0, 0))
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

void func_418(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_341(iParam0, -949239683))
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

bool func_419(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_420(iParam0) != 0;
}

int func_420(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_676(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_421(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_422(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_421(iVar0))
		{
			if (func_317(func_676(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_423(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_677(48);
	func_86(0, -1);
}

int func_424(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_425(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_426(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_339((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_427(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_390((*Global_1347702)[iParam0]->f_15);
}

int func_428()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_317(func_678(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_429(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

bool func_430(int iParam0, int iParam1)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_431(int iParam0)
{
	if (!func_679(iParam0))
	{
		return false;
	}
	return func_680(iParam0);
}

void func_432(int iParam0)
{
	if (!func_679(iParam0))
	{
		return;
	}
	func_681(iParam0);
	func_682(iParam0);
}

int func_433(int iParam0, bool bParam1)
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
	if (func_309(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_683(iVar0) || func_684(iVar0))
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

int func_434(int iParam0, bool bParam1)
{
	if (!func_309(iParam0, 0))
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

void func_435(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_685(iParam0))
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

bool func_436(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_310(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_686((386 + iVar28), 1);
			if (func_539(iParam0, &Var0, iVar5, 0))
			{
				if (func_540(iParam0, &Var6, iVar5))
				{
					Var29 = { func_312(iParam0, Var0, iVar5, 0) };
					func_313(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_409(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_437(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_687(iParam0, iParam1);
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

bool func_437(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_439(iParam0))
	{
		return false;
	}
	if (!func_409(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_438(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_434(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
			if (iParam1 == 1248274121)
			{
				func_688(iVar0);
			}
		}
		if (!func_674(iParam0, &uVar1, 1, 0, 0))
		{
			func_669(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_689(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_436(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_690())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_691(iVar0))
				{
					func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_436(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_692(Global_35, 2, 0, 1);
				if ((((func_685(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_431(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_685(iVar7) && func_431(24))
				{
					if (!func_436(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_231(480, 1);
	}
	return true;
}

bool func_439(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_440(int iParam0, int iParam1, int iParam2)
{
	if (!func_439(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_685(iVar4))
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
	if (func_317(611073244, 1, 0) && iParam2 == -897553835)
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
		func_474(func_693(iParam0), func_473(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_17() == -1)
		{
			if (func_339((*Global_1835011)[14]->f_1, 1))
			{
				func_231(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_409(0))
	{
		if (func_437(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_479(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_441(int iParam0)
{
	if ((iParam0 == -615217896 && !func_694()) || iParam0 != -615217896)
	{
		if (func_695(Global_35, iParam0, &uVar0))
		{
			func_211(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_261();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_261();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_261();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_461();
			break;
	}
}

void func_442(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_461();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_462();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_464();
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
			func_261();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_696();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_697();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_443(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_444(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_445(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_446(int iParam0)
{
	bVar0 = func_191(iParam0, -2017733358);
	if (func_698() < 3)
	{
		if (bVar0)
		{
			if (func_700(func_699(iParam0), iParam0))
			{
				func_474(79, func_473(func_699(iParam0)), 1);
			}
			else
			{
				func_474(78, func_473(func_699(iParam0)), 1);
			}
		}
		else
		{
			func_474(80, func_473(func_701(iParam0)), 1);
		}
	}
}

bool func_447()
{
	if (((((func_702(839908568, 400) || func_702(-1134030454, 400)) || func_702(623353496, 400)) || func_702(-344413337, 400)) || func_702(-1664948962, 400)) || func_702(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_448(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_703(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_704(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_705(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_449(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_328(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(8192);
			break;
		case 581047644:
			func_328(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(524288);
			break;
		case -644199619:
			func_328(39, 0, 0, 0, 0, 0, 1, 0);
			func_327(39, 0, 0, 0, 0, -1, 0);
			func_332(16);
			break;
		case 684296857:
			func_328(41, 0, 0, 0, 0, 0, 1, 0);
			func_327(41, 0, 0, 0, 0, -1, 0);
			func_335(8);
			break;
		case 466137807:
			func_328(49, 0, 0, 0, 0, 0, 1, 0);
			func_327(49, 0, 0, 0, 0, -1, 0);
			func_338(16);
			break;
		case -1087522507:
			func_328(43, 0, 0, -1791518714, func_706(1), 0, -1, 0);
			func_707(1);
			break;
		case -405829000:
			func_328(43, 0, 0, -2087881550, func_706(2), 0, -1, 0);
			func_707(2);
			break;
		case 378660860:
			func_328(43, 0, 0, 1908068621, func_706(4), 0, -1, 0);
			func_707(4);
			break;
		case 1566111097:
			func_328(43, 0, 0, 1611247019, func_706(8), 0, -1, 0);
			func_707(8);
			break;
		case 1276007140:
			func_328(43, 0, 0, 1319635688, func_706(16), 0, -1, 0);
			func_707(16);
			break;
	}
}

void func_450(int iParam0)
{
	if (func_708() == 1)
	{
		if (func_324(39))
		{
			func_231(342, 0);
		}
		else
		{
			func_231(343, 0);
			func_332(1);
		}
	}
	if (func_708() >= 30)
	{
		func_231(344, 0);
	}
	func_328(39, 0, 0, 0, 0, 0, -1, 0);
	func_327(39, 0, 0, func_708(), 30, 1, 0);
}

void func_451(int iParam0)
{
	if (func_709() == 1)
	{
		if (func_324(49))
		{
			func_231(409, 0);
		}
		else
		{
			func_231(410, 0);
			func_338(1);
		}
	}
	if (func_709() >= 10)
	{
		func_231(411, 0);
	}
	func_328(49, 0, 0, 0, 0, 0, -1, 0);
	func_327(49, 0, 0, func_709(), 10, 1, 0);
}

void func_452(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_231(437, 0);
			func_231(440, 0);
			func_710(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-949689219, 20), 1, 0);
			func_329(1);
			func_711(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_710(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-1248968496, 20), 1, 0);
			func_329(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_710(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(1706369307, 20), 1, 0);
			func_329(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_710(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(1520110311, 20), 1, 0);
			func_329(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_231(438, 0);
			func_710(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-1992824800, 20), 1, 0);
			func_329(32768);
			break;
		default:
			func_231(439, 0);
			break;
	}
}

void func_453()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_454(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_17() == -1)
	{
		if (!func_324(43))
		{
			if (iParam0 == 281887510)
			{
				func_231(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_231(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_231(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_231(400, 0);
			}
		}
		else if (func_191(iParam0, 412399755))
		{
			func_712(-1791518714);
			if (func_713() == 0)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_324(44))
		{
			if (iParam0 == -222563712)
			{
				func_231(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_231(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_231(401, 0);
			}
		}
		else if (func_191(iParam0, 709057512))
		{
			func_712(-2087881550);
			if (func_713() == 1)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (iParam0 == 2116770557)
			{
				func_231(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_231(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_231(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_231(398, 0);
			}
		}
		else if (func_191(iParam0, -1478961327))
		{
			func_712(1908068621);
			if (func_713() == 2)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_717(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_718(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_677(48);
					}
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (iParam0 == 2085530337)
			{
				func_231(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_231(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_231(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_231(406, 0);
			}
		}
		else if (func_191(iParam0, -1238404098))
		{
			func_712(1611247019);
			if (func_713() == 3)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (iParam0 == -1521783510)
			{
				func_231(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_231(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_231(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_231(403, 0);
			}
		}
		else if (func_191(iParam0, 1160548794))
		{
			func_712(1319635688);
			if (func_713() == 4)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_455(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_717(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_718(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_677(48);
		}
	}
}

void func_456(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_317(func_719(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_720(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_721(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	if (func_17() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_448(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_448(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_448(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_448(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_448(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_448(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_448(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_448(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_448(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_448(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_448(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_448(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_448(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_722())
			{
				func_448(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_448(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_448(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_448(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_448(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_448(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_448(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_448(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_448(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_448(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_448(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_448(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_448(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_458(int iParam0)
{
	if (func_324(41))
	{
		func_231(363, 0);
	}
	else
	{
		func_231(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_723(-1865241121);
			func_724(-642026005);
			func_725(-642026005);
			func_86(0, 10);
			break;
		case -2108314374:
			func_723(2117142684);
			func_724(-940584364);
			func_725(-940584364);
			func_86(0, 10);
			break;
		case -1193798153:
			func_723(-1409326024);
			func_724(1972645282);
			func_725(1972645282);
			func_86(0, 10);
			break;
		case -787702678:
			func_723(-641744968);
			func_724(1667205433);
			func_725(1667205433);
			func_86(0, 10);
			break;
		case -804542901:
			func_723(-946988203);
			func_724(1362715885);
			func_725(1362715885);
			func_86(0, 10);
			break;
		case -1696275132:
			func_723(-646136018);
			func_724(1053540370);
			func_725(1053540370);
			func_86(0, 10);
			break;
		case -161595323:
			func_723(-955835837);
			func_724(-1100103852);
			func_725(-1100103852);
			func_86(0, 10);
			break;
		case -1114363619:
			func_723(-179276075);
			func_724(-1409869209);
			func_725(-1409869209);
			func_86(0, 10);
			break;
		case -368407134:
			func_723(-492711560);
			func_724(-1760235357);
			func_725(-1760235357);
			func_86(0, 10);
			break;
		case 1997759228:
			func_723(1764383959);
			func_724(-138366827);
			func_725(-138366827);
			func_86(0, 10);
			break;
		case 1265573293:
			func_723(317501533);
			func_724(-1261163843);
			func_725(-1261163843);
			func_86(0, 10);
			break;
		case -1030441283:
			func_723(817753087);
			func_724(-963523016);
			func_725(-963523016);
			func_86(0, 10);
			break;
		case -1490884871:
			func_723(576606016);
			func_724(560825326);
			func_725(560825326);
			func_86(0, 10);
			break;
		case -395458616:
			func_723(814934957);
			func_724(858269539);
			func_725(858269539);
			break;
	}
}

void func_459(int iParam0, int iParam1)
{
	func_647(iParam0, iParam1, &uVar0);
}

bool func_460(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_692(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_692(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_726("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_659(&Var3, iVar2, iVar0, iVar1))
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
						func_660(iVar0);
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

void func_461()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_462()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_463()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_464()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_465(int iParam0, int iParam1, bool bParam2)
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

void func_466(int iParam0, bool bParam1)
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
	func_582(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_467(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_468(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_469(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_470(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_471(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_472(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_473(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_474(int iParam0, int iParam1, bool bParam2)
{
	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_475(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
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

int func_476()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_675())
	{
		return func_477();
	}
	iVar4 = (func_675() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_675())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_676(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_477()
{
	iVar0 = get_random_int_in_range(0, func_675());
	return func_676(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_478(int iParam0)
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

int func_479(int iParam0, int iParam1, int iParam2)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	return func_728(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_480(int iParam0)
{
	if (func_17() != -1)
	{
		return;
	}
	switch (func_200(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_618(81053684, 0) <= 0)
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_207(iParam0);
			if (func_600(iVar0))
			{
				func_729(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_208(30, iParam0, 0, 0, 0);
			}
			if (func_624() == -2125499975 || func_624() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_624() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_374(-525676072, 0))
			{
				if (func_730(-525676072, &iVar1))
				{
					func_208(33, iVar1, 0, 0, 0);
				}
			}
			func_208(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_731(99217379))
		{
			func_211(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_432(24);
		if (func_460(&iVar2, 0))
		{
			func_436(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_481(int iParam0)
{
	if (func_191(iParam0, 943695443))
	{
		func_732(0, iParam0);
	}
	else if (func_191(iParam0, -2096528786))
	{
		func_732(1, iParam0);
	}
	else if (func_191(iParam0, -1094167013))
	{
		func_732(2, iParam0);
	}
	else if (func_191(iParam0, 1936654645))
	{
		func_732(3, iParam0);
	}
	else if (func_191(iParam0, 1306489306))
	{
		func_732(4, iParam0);
	}
	else if (func_191(iParam0, 435762317))
	{
		func_732(5, iParam0);
	}
	else if (func_191(iParam0, 1259363210))
	{
		func_732(6, iParam0);
	}
	else if (func_191(iParam0, 881398259))
	{
		func_732(7, iParam0);
	}
	else if (func_191(iParam0, -541549214))
	{
		func_732(8, iParam0);
	}
	else if (func_191(iParam0, 130796156))
	{
		func_732(-1, iParam0);
	}
}

int func_482(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_733(&Var4, 1356624740);
	return func_734(iParam0, &Var4, &uVar0, iParam1);
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_17() == -1)
			{
				if (func_339((*Global_1835011)[4]->f_1, 1))
				{
					func_231(109, 1);
				}
			}
			break;
	}
}

void func_484(int iParam0, char* sParam1)
{
	sVar0 = func_736(func_735(0));
	func_653(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_737(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_485(var uParam0)
{
	return func_102(*uParam0, 2);
}

void func_486(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

bool func_487()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

var func_488()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_489(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

bool func_490(int iParam0)
{
	return _0x8d56bda343d9519f(func_738(iParam0));
}

bool func_491(int iParam0, bool bParam1)
{
	if (!func_176())
	{
		return true;
	}
	if (func_739(iParam0))
	{
		if (iParam0 == func_170())
		{
			return false;
		}
		if (get_entity_model(Global_35) == 225514697)
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return false;
			}
		}
		else if (get_entity_model(Global_35) == 11966224)
		{
			if (iParam0 == 37 && !func_247(9))
			{
				return false;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return false;
				}
				if (func_250() != iParam0)
				{
					return false;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return false;
				}
				break;
		}
		if (func_572() == 8)
		{
			if (func_740(iParam0, 1))
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
	return false;
}

void func_492(var uParam0, int iParam1)
{
	iVar0 = func_741(iParam1);
	iVar1 = func_742(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	StringCopy(&cVar11, _get_label_text_by_hash(iVar1), 64);
	while ((*uParam0)[iVar2]->f_3 && compare_strings(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	iVar22 = iVar0;
	iVar23 = iVar1;
	while ((*uParam0)[iVar19]->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		iVar24 = (*uParam0)[iVar19]->f_4;
		iVar21 = uParam0[iVar19];
		iVar25 = (*uParam0)[iVar19]->f_6;
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
		func_743((*uParam0)[iVar19], uParam0[iVar19]);
		iVar22 = iVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!(*uParam0)[iVar19]->f_3)
	{
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
	}
}

void func_493(var uParam0, int iParam1)
{
	iVar0 = func_741(iParam1);
	iVar1 = func_742(iParam1);
	if (iParam1 == func_250())
	{
		(*uParam0)[0]->f_4 = iVar0;
		(*uParam0)[0] = iParam1;
		(*uParam0)[0]->f_3 = 1;
		(*uParam0)[0]->f_6 = iVar1;
		return;
	}
	iVar2 = 1;
	while (((*uParam0)[iVar2]->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && (*uParam0)[iVar2]->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	iVar7 = iVar1;
	while ((*uParam0)[iVar3]->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = (*uParam0)[iVar3]->f_4;
		iVar5 = uParam0[iVar3];
		iVar9 = (*uParam0)[iVar3]->f_6;
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
		func_743((*uParam0)[iVar3], uParam0[iVar3]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		iVar7 = iVar9;
		iVar3++;
	}
	if (!(*uParam0)[iVar3]->f_3)
	{
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
	}
}

float func_494(int iParam0)
{
	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * pow((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_17() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_744()));
	}
	return func_745(fVar1, 2, 1);
}

int func_495(vector3 vParam0, bool bParam3)
{
	iVar0 = func_746(vParam0);
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

int func_496()
{
	if (func_747())
	{
		return 1;
	}
	return 0;
}

float func_497()
{
	if (func_748())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_289(2);
	}
	if (Global_1347477->f_119)
	{
		return func_289(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(3, round((to_float(iVar8) * fVar10)), 0);
	func_755(3, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_498()
{
	if (func_748())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_289(1);
	}
	if (Global_1347477->f_119)
	{
		return func_289(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(2, round((to_float(iVar8) * fVar10)), 0);
	func_755(2, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_499()
{
	if (func_748())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_289(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_757())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_758())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_289(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(1, round((to_float(iVar8) * fVar10)), 0);
	func_755(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_289(0);
	}
	return func_756(fVar7, -100f, 100f);
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_501(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_516(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_759(iParam1), fParam2, -1);
	}
}

void func_502(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_496();
	}
	iVar0 = get_game_timer();
	func_760(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_761(iParam0, iVar0, iParam3);
	}
}

int func_503(int iParam0)
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

int func_504(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_505(int iParam0)
{
	if (!func_269(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_762(iParam0);
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

float func_506(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_507(int iParam0, bool bParam1, int iParam2)
{
	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_157(iParam0))
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
	iVar0 = func_276(iParam0);
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
		_0xd428c3f92fc3f6f8(iVar0, func_763(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_764())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_508(var uParam0)
{
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_765(&iVar1, -2147483648);
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

bool func_509(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_17() != -1)
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

int func_510(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_283(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_511(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_512(int iParam0)
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

void func_513(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_766(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_514(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_516(int iParam0)
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

bool func_517(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

char* func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_520(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_521(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_153(iParam0))
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

bool func_522(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
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

void func_523(int iParam0)
{
	switch (func_17())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_524(int iParam0)
{
	if (!func_522(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_531(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_302(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_525(int iParam0)
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

int func_526(int iParam0)
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

bool func_527(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_528(int iParam0)
{
	if (!func_767(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_768(iParam0))
		{
			if (vdist(Global_36, func_769(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_769(iParam0), false) <= func_770();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_770();
	}
	return func_48();
}

bool func_529(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_530(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_155(iParam0))
	{
		return;
	}
	switch (func_771(iParam0))
	{
		case 1:
			iVar0 = func_152(iParam0);
			if (func_772(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_773(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_773(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_774(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_299((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_152(iParam0);
			if (func_775(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_521(iVar1))
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
				iVar2 = func_521(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_525(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

void func_531(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_533(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_534(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_535(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776((*Global_1347702)[iParam0]->f_15) != 0)
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

struct<4> func_536(bool bParam0)
{
	return func_312(1328661203, func_777(), -1591664384, bParam0);
}

struct<4> func_537(bool bParam0)
{
	iVar0 = func_96(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_312(923904168, func_536(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_312(923904168, func_536(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_312(923904168, func_536(bParam0), -740156546, 0);
}

bool func_538(int iParam0, bool bParam1)
{
	if (func_200(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_431(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_539(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_386(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_540(int iParam0, var uParam1, int iParam2)
{
	if (func_778(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_541(bool bParam0)
{
	iVar0 = func_96(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_312(271701509, func_536(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_312(271701509, func_536(bParam0), 12999093, 0);
}

bool func_542(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_200(iParam0);
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

bool func_543(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_96(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_545(int iParam0)
{
	if (func_309(iParam0, 0))
	{
		if (func_191(iParam0, -1242251796))
		{
			if (func_191(iParam0, 2060589226))
			{
				return func_779();
			}
			return func_780();
		}
		else if (func_191(iParam0, 1919582297))
		{
			return func_554();
		}
		else if (func_191(iParam0, 1147021565))
		{
			return func_555();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_780();
	}
	else
	{
		return func_555();
	}
	return func_555();
}

bool func_546(int iParam0)
{
	if ((((((((((func_191(iParam0, 1147021565) || func_191(iParam0, -136654233)) || func_191(iParam0, -524514947)) || func_191(iParam0, -1238310989)) || func_191(iParam0, 1765172170)) || func_191(iParam0, 1490540191)) || func_191(iParam0, 1573112293)) || func_191(iParam0, -1242251796)) || func_191(iParam0, 1919582297)) || func_191(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_547()
{
	return 33284224;
}

int func_548()
{
	return 33537269;
}

int func_549()
{
	return 18589696;
}

int func_550()
{
	return 26978448;
}

int func_551()
{
	return 33529847;
}

int func_552()
{
	return 26978304;
}

int func_553()
{
	return 32505855;
}

int func_554()
{
	return 26983431;
}

int func_555()
{
	return 33537239;
}

int func_556()
{
	return 32713860;
}

int func_557()
{
	return 16400295;
}

int func_558()
{
	return 33284224;
}

void func_559(int iParam0)
{
	if (func_781(32))
	{
		return;
	}
	func_782(32);
	if (func_567(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_577(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_783(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_784(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_319(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_785(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_786(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_787(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (is_ped_in_cover(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_17() == 0 && _0xb655db7582aec805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (_0x7fc84e85d98f063d(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || _0xc8b29d18022ea2b7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (is_ped_running(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_783(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (is_ped_using_any_scenario(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (_get_scenario_point_type_ped_is_using(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (is_cinematic_cam_rendering())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (_0x1204eb53a5fbc63d())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (is_ped_getting_up(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_788(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_789(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_790(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_791())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (does_entity_exist(iParam0))
	{
		if (func_792(iParam0))
		{
			switch (get_entity_model(iParam0))
			{
				case -1230516683:
				case 594040097:
				case 1772321403:
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (_is_metaped_using_component(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (is_ped_on_vehicle(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_17() == -1 && func_117(32768)) || func_316()) || func_793()) || (func_105() && !func_794())) || get_entity_submerged_level(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_225(Global_35, 1, 0, 0) == -1415022764)
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

int func_560(bool bParam0)
{
	if (func_795(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_795(2) && !Global_1392040->f_2) && get_game_timer() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = func_796(Global_35);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_202("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_202("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_795(4194304))
	{
		return 0;
	}
	return 1;
}

int func_561(bool bParam0)
{
	if (_is_ped_carrying(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_562(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_35))
	{
		return 0;
	}
	else if (is_ped_in_any_vehicle(Global_35, true))
	{
		if (!is_ped_in_any_vehicle(Global_35, false))
		{
			return 0;
		}
		iVar0 = get_vehicle_ped_is_using(Global_35);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_202("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_202("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_215(iParam1, 32) && !is_ped_on_mount(Global_35))
		{
			if (_0x2963b5c1637e8a27(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return 0;
	}
	return 1;
}

bool func_563(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

int func_564(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return 0;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return 0;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0, int iParam1)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_404(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_726("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_659(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_685(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_660(iVar1);
				return true;
			}
			iVar3++;
		}
		func_660(iVar1);
	}
	return false;
}

bool func_566()
{
	return Global_1894899 & 4 != 0;
}

bool func_567(int iParam0)
{
	return (func_797(iParam0, 4) || func_797(iParam0, 5));
}

bool func_568()
{
	return func_798(512);
}

bool func_569(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_570()
{
	return Global_1310750->f_16077 != 0;
}

bool func_571(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

int func_572()
{
	return Global_1897952->f_41;
}

bool func_573(int iParam0)
{
	if (!func_403(iParam0))
	{
		return false;
	}
	return func_799(iParam0, 33554432);
}

int func_574(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_575(int iParam0)
{
	if (func_574(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_576()
{
	iVar0 = func_170();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

bool func_577(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

bool func_578()
{
	iVar0 = func_170();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = _create_volume_cylinder(vVar2, vVar5, vVar8);
		if (func_800(Global_35, iVar1, 1, 0))
		{
			func_801(iVar1);
			return true;
		}
		else
		{
			func_801(iVar1);
			return false;
		}
	}
	return false;
}

bool func_579(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_235(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_580(vector3 vParam0, float fParam3)
{
	if (func_802(vParam0, fParam3))
	{
		return true;
	}
	if (func_803(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

void func_581(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

var func_582(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_583(int iParam0)
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

var func_584(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_585(int iParam0, int iParam1)
{
	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_586(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_428() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_805(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_806(), 12);
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
			else if (func_708() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_807(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_708(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_808(), 13);
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
			else if (func_709() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_809(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_709(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_585(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_587(int iParam0, int iParam1, int iParam2)
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

bool func_588(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_589(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_810(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_583(func_810(iVar0))), func_583(func_810(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_708() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_807() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= func_585(iParam3, func_815(iVar0));
				}
				else
				{
					bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_715(iVar2) + iParam7) >= func_585(iParam3, func_815(iVar0));
			}
			else
			{
				bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_816(iVar2)), func_816(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_817(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_818(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_818(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_709() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_809() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_820(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_820(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_821(iVar2)), func_821(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_591(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_808() >= 13)
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

bool func_592(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_155(func_822(0)) && ((func_823(0) == 1 || func_823(0) == 8) || func_823(0) == 6))
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

int func_593(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_824(iParam0);
}

int func_594()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_825(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_825(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_595(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_0xd962f8579d702db5();
	}
	else
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1935496->f_26 = 1;
	}
}

void func_596(int iParam0, bool bParam1)
{
	Var0.f_1 = 20;
	if ((func_191(iParam0, 1573112293) || func_191(iParam0, 672467738)) || func_191(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_198(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_826(0, Var22.f_2);
				func_90(Var22.f_2, 1);
				func_171(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_826(2, Var22.f_2);
				func_91(Var22.f_2);
				func_171(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_826(1, Var22.f_2);
				func_827(Var22.f_2);
				func_171(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar33))
				{
					func_830(fVar33, 1, bVar37, bParam1);
					func_171(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar34))
				{
					func_831(fVar34, 1, bVar37, bParam1);
					func_171(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar35))
				{
					func_832(fVar35, 1, bVar37, bParam1);
					func_171(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_72(to_float(Var22.f_3), Var22.f_4);
				func_73(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_833(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_191(iParam0, -537818634))
		{
			func_444(func_654(-704089207), 1);
		}
		if (func_191(iParam0, -1457797660))
		{
			func_444(func_654(-1909697259), 1);
		}
		if (bVar40)
		{
			func_444(func_654(704570463), 1);
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

int func_597(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 20;
		case 128702355:
			return 23;
		case -2051332199:
			return 26;
		case 546981776:
			return 27;
		case -2013384490:
			return 28;
		case 228922461:
			return 29;
		case -746674788:
			return 31;
		case 599861917:
			return 33;
		case -1781387050:
			return 34;
		case 2006811763:
			return 37;
		case -90546043:
			return 38;
		case 1216456215:
			return 39;
		case 746300881:
			return 40;
		case -435006002:
			return 41;
		case -624139784:
			return 42;
		case -529638012:
			return 43;
		case -651064726:
			return 1;
		case -404270094:
			return 9;
		case -1521783510:
			return 10;
		case 1714875242:
			return 14;
		case 2093126853:
			return 17;
		case 728781265:
			return 21;
		case 1794857344:
			return 22;
		case 1952409553:
			return 24;
		case -150591160:
			return 25;
		case 1019229063:
			return 30;
		case -323969289:
			return 32;
		case 927763737:
			return 35;
		case 1504361882:
			return 36;
	}
	return 0;
}

void func_598(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_834(iParam0);
	iVar1 = func_597(&iVar0);
	if (iVar1 != iParam0)
	{
		func_835(iVar1, 4);
	}
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_837(iParam0))
	{
		return;
	}
	func_835(iParam0, 4);
	func_838(iParam0, bParam1);
	if (!func_839(iParam0))
	{
		func_840(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

void func_599(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

bool func_600(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_601(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_602(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_841(Global_35, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_35, iParam0))
	{
		return true;
	}
	return false;
}

bool func_603(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_604(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_605()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_842())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_606(int iParam0)
{
	iVar0 = func_200(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_607(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_608(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_614(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_609(int iParam0)
{
	if (-1829635046 == func_843(81053684))
	{
		if (func_614(iParam0))
		{
			return true;
		}
	}
	else if (func_844(-525676072, iParam0))
	{
		if (func_614(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_610()
{
	iVar0 = 1549701178;
	switch (func_594())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_611()
{
	iVar0 = 614608656;
	switch (func_594())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_612()
{
	iVar0 = -1832677570;
	switch (func_594())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_613()
{
	iVar0 = 1623252156;
	switch (func_594())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_614(int iParam0)
{
	if (func_844(81053684, iParam0))
	{
		return true;
	}
	if (func_844(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_615(var uParam0)
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

void func_616(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_380(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_380(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_380(iParam0, 1)])->f_10 && iParam1));
}

int func_618(int iParam0, bool bParam1)
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
				return func_845();
			}
			break;
	}
	return 0;
}

int func_619(int iParam0, bool bParam1)
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

bool func_620(int iParam0, int iParam1)
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

bool func_621(int iParam0)
{
	if (func_17() == -1)
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

int func_622(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_620(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_846(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_200(iParam0) != -999503751)
	{
		func_847(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_623(int iParam0, int iParam1)
{
	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_96(0), &Var5);
	return 1;
}

int func_624()
{
	return Global_1946804->f_1;
}

void func_625()
{
	if (func_17() == -1)
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

bool func_626(int iParam0)
{
	return func_849(func_848(iParam0));
}

void func_627(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_850(0);
	}
	if (bParam0)
	{
		func_365(8);
		func_365(512);
	}
	else
	{
		func_365(8);
		func_365(16);
	}
}

void func_628(int iParam0, int iParam1, bool bParam2)
{
	func_851(iParam0, 0, 0);
	func_376(iParam1, 1, bParam2, 0);
}

int func_629(int iParam0, int iParam1)
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

void func_630()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_631(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_191(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_632(int iParam0)
{
	func_617(iParam0, 8, 6);
}

void func_633(int iParam0)
{
	func_852(&(Global_1946804->f_2589), iParam0);
}

void func_634(int iParam0, int iParam1)
{
	func_853(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_636(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_200(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_854(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
		}
	}
	if (func_731(-1586649372) && func_854(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
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
						func_634(iVar1, iVar3);
					}
				}
			}
			func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_855(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_855(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_855(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_200(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_856(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_200(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_191(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
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
						func_634(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_856(&(Global_1946804->f_1497.f_1[iVar1])) || func_191(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
			}
			switch (func_200(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_200(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_200(&(uParam0->f_1[iVar1])) || func_191(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_637(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_857(0);
	if (iParam2 != 0 && func_858(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_859(iParam0, func_629(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_638(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_17() != -1;
	iVar7 = func_857(0);
	if (func_372(32768))
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
			iVar5 = func_629(iVar0, 1);
			if (func_860(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_860(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_861(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_862(uParam0);
				if (iVar3 > 0)
				{
					if (!func_372(524288))
					{
						func_365(524288);
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
							iVar5 = func_629(iVar0, 1);
							if (func_860(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_860(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_861(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_634(iVar0, iParam2);
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
					func_616(524288);
				}
			}
		}
	}
}

void func_639(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_863(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_17() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_864(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_865(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_865(Global_40.f_7729);
				Global_1946804->f_1378 = func_865(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_866(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_627(0, 1);
	}
}

bool func_640(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_641(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_603(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_603(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_604(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_365(8);
}

bool func_642()
{
	return Global_1914319->f_17375;
}

bool func_643()
{
	if (func_867())
	{
		iVar0 = _0xd04241bbf6d03a5e(player_ped_id());
		return iVar0 != 0;
	}
	return false;
}

bool func_644()
{
	return &Global_1898068;
}

var func_645(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_868() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_869());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_869());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_869());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_870(get_player_team(iVar5)));
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
			if (func_871(iVar2))
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
				if (iVar9 & 8192 != 0 && func_872(iVar2) != 1)
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
					if (!func_873(iVar10))
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

int func_646(var uParam0, struct<18> Param1)
{
	if (!func_874(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_647(int iParam0, int iParam1, var uParam2)
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

bool func_648()
{
	return !&Global_1911774;
}

void func_649(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_650(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_651(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_652(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_875(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_654(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_655(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_660(iVar14);
	return uVar15;
}

struct<14> func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_657(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_96(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_659(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_660(int iParam0)
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

void func_661(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_17() == -1)
	{
		if (func_324(43))
		{
			if (func_191(iParam0, 412399755))
			{
				func_712(-1791518714);
				if (func_713() == 0)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_324(44))
		{
			if (func_191(iParam0, 709057512))
			{
				func_712(-2087881550);
				if (func_713() == 1)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (func_191(iParam0, -1478961327))
			{
				func_712(1908068621);
				if (func_713() == 2)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (func_191(iParam0, -1238404098))
			{
				func_712(1611247019);
				if (func_713() == 3)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (func_191(iParam0, 1160548794))
			{
				func_712(1319635688);
				if (func_713() == 4)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_662(int iParam0, int iParam1)
{
	if (func_17() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_663(int iParam0)
{
	if (func_17() != -1)
	{
		if (func_665(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_665(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_664(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_665(iParam0, 65536) && !func_665(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_665(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_665(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_665(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_666()
{
	return Global_1905944->f_5694;
}

bool func_667(int iParam0)
{
	return func_198(iParam0) == -427144552;
}

bool func_668(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (func_430(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_674(iParam0, &uVar0, 1, 0, 0);
	}
	return func_317(iParam0, 1, 0);
}

void func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_198(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_434(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_684(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_407(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_405(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_670(int iParam0, int iParam1)
{
	if (func_191(iParam0, 58855631))
	{
		func_877(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_671(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_96(bParam3), iParam0);
}

int func_672(int iParam0, bool bParam1)
{
	if (func_439(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_96(bParam1), iParam0, 0);
}

bool func_673()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_176())
	{
		return false;
	}
	if (!func_339((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_339((*Global_1835011)[2]->f_1, 1) && func_339((*Global_1347702)[120]->f_15, 1)) && !func_339((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_339((*Global_1835011)[37]->f_1, 1) && !func_339((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_339((*Global_1835011)[57]->f_1, 1) && !func_339((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_339((*Global_1835011)[26]->f_1, 1) && !func_339((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_339((*Global_1835011)[62]->f_1, 1) && func_339((*Global_1835011)[63]->f_1, 1)) && !func_339((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_339((*Global_1835011)[75]->f_1, 1) && !func_339((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_339((*Global_1835011)[76]->f_1, 1) && !func_339((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_339((*Global_1835011)[40]->f_1, 1) && func_339((*Global_1835011)[41]->f_1, 1)) && !func_339((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_339((*Global_1835011)[62]->f_1, 1) && func_339((*Global_1835011)[63]->f_1, 1)) && !func_339((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_339((*Global_1835011)[65]->f_1, 1) && func_339((*Global_1835011)[66]->f_1, 1)) && !func_339((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_674(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_878(&iParam0);
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (!func_409(0))
	{
		bParam3 = true;
	}
	if (func_667(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_537(0) };
			Var4.f_9 = -1591664384;
			if (!func_539(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_540(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_538(iParam0, 1))
			{
				if (!func_539(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_540(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_879(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_671(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_386(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_96(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_675()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_676(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_677(int iParam0)
{
	if (func_17() != -1)
	{
		return;
	}
	iVar0 = func_880(iParam0);
	fVar1 = func_881(iParam0);
	if ((Global_1347477->f_117 || !func_431(31)) || !func_882(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_883(iVar0) >= 7)
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
	func_884(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_653(_create_var_string(6, func_885(iParam0), fVar1), "itemtype_textures", func_886(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_678(int iParam0)
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

bool func_679(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_681(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_682(int iParam0)
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
			func_887(1);
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
			func_888(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_888(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_888(3);
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
			func_889(1);
			break;
		case 34:
			func_890(1);
			break;
		case 35:
			func_891(1);
			break;
		case 36:
			break;
		case 37:
			func_892(0);
			break;
		case 38:
			func_893(0);
			break;
		case 39:
			func_894(0);
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
			if ((!&Global_1879534 && func_176()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_231(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_176()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_231(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_176()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_231(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_176()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_231(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_17() == -1)
			{
				if (!func_731(99217379) || func_244(99217379) == 2110595215)
				{
					if (func_690())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_317(iVar0, 1, 0))
					{
						func_479(iVar0, 1, 752097756);
					}
					func_211(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
				if (!func_317(142640135, 1, 0))
				{
					func_479(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
				if (!func_317(-518019409, 1, 0))
				{
					func_479(-518019409, 1, 752097756);
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
			func_895();
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

bool func_683(int iParam0)
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

bool func_684(int iParam0)
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

bool func_685(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_686(int iParam0, int iParam1)
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

void func_687(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_896(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_688(int iParam0)
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
	iVar2 = func_65();
	func_66(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_689(int iParam0)
{
	if (func_825(iParam0))
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

bool func_690()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_691(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_692(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_693(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_431(50))
			{
				if (!func_431(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_431(51))
			{
				if (!func_431(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_694()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_695(int iParam0, int iParam1, var uParam2)
{
	if (!func_309(iParam1, 0))
	{
		return false;
	}
	if (func_198(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_17() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_200(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_897(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_191(iParam1, 866047851))
	{
		iVar5 = func_380(iVar4, 1);
		if (func_631(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_200(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_191(iParam1, -1638171711))
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
			if (func_844(1868067663, &uVar0))
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
				iVar10 = func_861(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_861(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_200(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_191(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_856(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_696()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_697()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_698()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_317(func_898(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_699(int iParam0)
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

bool func_700(int iParam0, int iParam1)
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
	if (func_317(iVar0, 1, 0) && func_317(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_701(int iParam0)
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

bool func_702(int iParam0, int iParam1)
{
	iVar0 = func_899(iParam0);
	if (iVar0 != -15)
	{
		func_66(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_900(iVar0, 1);
	}
	return false;
}

int func_703(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_317(1811977508, 1, 0))
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
			if (func_309(iVar25, 0) && func_191(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_704(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_653(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_705(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_901())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_653(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_902(iVar0);
			func_903(iVar0, 0, 0);
		}
		func_653(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_444(func_654(1644987397), iVar1);
	}
}

char* func_706(int iParam0)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
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

void func_707(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_708()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_904(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_709()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_710(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar0) && func_820(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if ((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if (func_820(iVar3))
		{
			*iParam2++;
		}
		if (((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2)) && func_820(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_711(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_905(1497516462);
			func_906(2016141805);
			func_906(1010885152);
			func_906(-502324015);
			break;
		case 2016141805:
			func_906(1497516462);
			func_905(2016141805);
			func_906(1010885152);
			func_906(-502324015);
			break;
		case 1010885152:
			func_906(1497516462);
			func_906(2016141805);
			func_905(1010885152);
			func_906(-502324015);
			break;
		case -502324015:
			func_906(1497516462);
			func_906(2016141805);
			func_906(1010885152);
			func_905(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_906(-538889627);
			func_906(-538880323);
			func_906(-1056767524);
			func_905(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_907();
			func_905(iParam0);
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
			func_908();
			func_905(iParam0);
			break;
		case 2019386373:
			func_906(-664252410);
			func_906(2109952320);
			func_905(2019386373);
			break;
		case -664252410:
			func_906(2019386373);
			func_906(2109952320);
			func_905(-664252410);
			break;
		case 2109952320:
			func_906(2019386373);
			func_906(-664252410);
			func_905(2109952320);
			break;
		case -1674179981:
			func_906(-1835851517);
			func_906(-1838352012);
			func_905(-1674179981);
			break;
		case -1835851517:
			func_906(-1674179981);
			func_906(-1838352012);
			func_905(-1835851517);
			break;
		case -1838352012:
			func_906(-1674179981);
			func_906(-1835851517);
			func_905(-1838352012);
			break;
		case -1717960576:
			func_906(210001842);
			func_905(-1717960576);
			break;
		case 210001842:
			func_906(-1717960576);
			func_905(210001842);
			break;
		case -150493654:
			func_906(-1271608261);
			func_906(1846061697);
			func_906(-1145519186);
			func_905(-150493654);
			break;
		case -1271608261:
			func_906(-150493654);
			func_906(1846061697);
			func_906(-1145519186);
			func_905(-1271608261);
			break;
		case 1846061697:
			func_906(-150493654);
			func_906(-1271608261);
			func_906(-1145519186);
			func_905(1846061697);
			break;
		case -1145519186:
			func_906(-150493654);
			func_906(-1271608261);
			func_906(1846061697);
			func_905(-1145519186);
			break;
		case 1766284049:
			func_906(280705402);
			func_906(1926308480);
			func_905(1766284049);
			break;
		case 280705402:
			func_906(1766284049);
			func_906(1926308480);
			func_905(280705402);
			break;
		case 1926308480:
			func_906(1766284049);
			func_906(280705402);
			func_905(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_906(439465264);
				func_905(1609506757);
			}
			else
			{
				func_906(1609506757);
				func_906(439465264);
			}
			break;
		case 439465264:
			if (func_909(1609506757))
			{
				if (bParam1)
				{
					func_905(439465264);
				}
				else
				{
					func_906(439465264);
				}
			}
			break;
		case 1822001510:
			func_906(-1612662716);
			func_905(1822001510);
			break;
		case -1612662716:
			func_906(1822001510);
			func_905(-1612662716);
			break;
		case 1306158345:
			func_906(1952610440);
			func_906(-223469678);
			func_906(-404698347);
			func_906(1517904467);
			func_905(1306158345);
			break;
		case 1952610440:
			func_906(1306158345);
			func_906(-223469678);
			func_906(-404698347);
			func_906(1517904467);
			func_905(1952610440);
			break;
		case -223469678:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-404698347);
			func_906(1517904467);
			func_905(-223469678);
			break;
		case -404698347:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-223469678);
			func_906(1517904467);
			func_905(-404698347);
			break;
		case 1517904467:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-223469678);
			func_906(-404698347);
			func_905(1517904467);
			break;
		case 1376646519:
			func_906(931649776);
			func_906(-434590080);
			func_906(1743048395);
			func_906(449774763);
			func_905(1376646519);
			break;
		case 931649776:
			func_906(1376646519);
			func_906(-434590080);
			func_906(1743048395);
			func_906(449774763);
			func_905(931649776);
			break;
		case -434590080:
			func_906(1376646519);
			func_906(931649776);
			func_906(1743048395);
			func_906(449774763);
			func_905(-434590080);
			break;
		case 1743048395:
			func_906(1376646519);
			func_906(931649776);
			func_906(-434590080);
			func_906(449774763);
			func_905(1743048395);
			break;
		case 449774763:
			func_906(1376646519);
			func_906(931649776);
			func_906(-434590080);
			func_906(1743048395);
			func_905(449774763);
			break;
		case -1414537028:
			func_906(38162571);
			func_906(1350391819);
			func_906(54073871);
			func_905(-1414537028);
			break;
		case 38162571:
			func_906(-1414537028);
			func_906(1350391819);
			func_906(54073871);
			func_905(38162571);
			break;
		case 1350391819:
			func_906(-1414537028);
			func_906(38162571);
			func_906(54073871);
			func_905(1350391819);
			break;
		case 54073871:
			func_906(-1414537028);
			func_906(38162571);
			func_906(1350391819);
			func_905(54073871);
			break;
		case 198200492:
			func_905(198200492);
			func_906(-1124061431);
			func_906(52706132);
			func_906(-259123672);
			break;
		case -1124061431:
			func_906(198200492);
			func_905(-1124061431);
			func_906(52706132);
			func_906(-259123672);
			break;
		case 52706132:
			func_906(198200492);
			func_906(-1124061431);
			func_905(52706132);
			func_906(-259123672);
			break;
		case -259123672:
			func_906(198200492);
			func_906(-1124061431);
			func_906(52706132);
			func_905(-259123672);
			break;
		case -919512195:
			func_905(-919512195);
			func_906(-1925798111);
			func_906(420709909);
			func_906(1703426636);
			break;
		case -1925798111:
			func_905(-1925798111);
			func_906(-919512195);
			func_906(420709909);
			func_906(1703426636);
			break;
		case 420709909:
			func_905(420709909);
			func_906(-919512195);
			func_906(-1925798111);
			func_906(1703426636);
			break;
		case 1703426636:
			func_905(1703426636);
			func_906(-919512195);
			func_906(-1925798111);
			func_906(420709909);
			break;
		case -1223121209:
			func_905(-1223121209);
			func_906(630808005);
			break;
		case 630808005:
			func_905(630808005);
			func_906(-1223121209);
			break;
		case 1453909576:
			func_905(1453909576);
			func_906(1643531967);
			break;
		case 1643531967:
			func_905(1643531967);
			func_906(1453909576);
			break;
		case 0:
			func_905(0);
			func_906(473295046);
			func_906(-1738165526);
			break;
		case 473295046:
			func_905(473295046);
			func_906(0);
			func_906(-1738165526);
			break;
		case -1738165526:
			func_905(-1738165526);
			func_906(0);
			func_906(473295046);
			break;
		case 932909855:
			func_905(932909855);
			func_906(2051822093);
			break;
		case 2051822093:
			func_905(2051822093);
			func_906(932909855);
			break;
		case 405586984:
			func_905(405586984);
			func_906(1509509592);
			func_906(-959357075);
			func_906(-1311865656);
			break;
		case 1509509592:
			func_905(1509509592);
			func_906(405586984);
			func_906(-959357075);
			func_906(-1311865656);
			break;
		case -959357075:
			func_905(-959357075);
			func_906(1509509592);
			func_906(405586984);
			func_906(-1311865656);
			break;
		case -1311865656:
			func_905(-1311865656);
			func_906(1509509592);
			func_906(-959357075);
			func_906(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_905(-524145696);
			}
			else
			{
				func_906(-524145696);
			}
			func_906(1626481264);
			func_906(282809459);
			break;
		case 282809459:
			func_905(282809459);
			func_906(1626481264);
			func_906(-524145696);
			break;
		case 1626481264:
			func_905(1626481264);
			func_906(-524145696);
			func_906(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_905(885203519);
			}
			else
			{
				func_906(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_905(-1080627546);
			}
			else
			{
				func_906(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_909(iParam0))
				{
					func_905(iParam0);
				}
			}
			else if (func_909(iParam0))
			{
				func_906(iParam0);
			}
			break;
	}
}

void func_712(int iParam0)
{
	if (!func_910(iParam0))
	{
		func_912(func_911(iParam0));
	}
}

int func_713()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_910(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_714(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
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

int func_715(int iParam0)
{
	if (func_317(iParam0, 1, 0))
	{
		iVar0 = func_407(iParam0, 0, 0);
	}
	return iVar0;
}

int func_716(int iParam0)
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

int func_717(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_718(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_719(int iParam0, int iParam1)
{
	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_720(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		func_710(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_328(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_327(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_721(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		if (func_710(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_722()
{
	if (func_390((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_723(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_724(int iParam0)
{
	if (!func_913(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_725(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_726(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_96(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_727(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_728(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_309(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_674(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_96(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_729(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_600(iParam0))
	{
		return;
	}
	if (func_362(iParam0))
	{
		return;
	}
	if (!func_914(iParam0))
	{
		func_915(iParam0, 1, 0);
	}
	iVar0 = func_865(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_601(iParam0, 512))
		{
			func_208(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_916() && !bParam1) && !func_74(0, 0, 1))
	{
		func_202(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_917(iParam0, 6);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 4);
		}
	}
}

bool func_730(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_200(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_731(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_380(iParam0, 1)] != &Global_1946804->f_57[func_380(iParam0, 1)];
}

void func_732(int iParam0, int iParam1)
{
	if (func_191(iParam1, 130796156))
	{
		func_918(iParam1, 0);
	}
	else if (func_191(iParam1, 930141731))
	{
		func_918(iParam1, 1);
		func_919(iParam0);
	}
}

void func_733(var uParam0, int iParam1)
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

int func_734(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_920(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_921(uParam2, iParam0, Var1);
	return 1;
}

int func_735(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_736(int iParam0)
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

int func_737(int iParam0)
{
	if (!func_922(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_738(int iParam0)
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
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

bool func_739(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

bool func_740(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_741(int iParam0)
{
	vVar0 = { func_923(iParam0) };
	return func_924(vVar0);
}

int func_742(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_30;
}

int func_743(var uParam0, int iParam1)
{
	func_925(uParam0);
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_738(iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = _0xd6e39dc5d46df4ab(iVar0);
	if (iVar1 <= 0)
	{
		return 0;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return 1;
}

int func_744()
{
	iVar0 = _get_bounty_for_player(player_id());
	return iVar0;
}

float func_745(float fParam0, int iParam1, bool bParam2)
{
	bVar0 = fParam0 >= 0f;
	iVar1 = floor(pow(10f, to_float(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = to_float(ceil(fVar2));
	}
	else
	{
		fVar2 = to_float(floor(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

int func_746(vector3 vParam0)
{
	iVar0 = func_926(vParam0, 0f, 0f, 0, 2);
	return func_926(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_747()
{
	return Global_1955569->f_866;
}

bool func_748()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_749()
{
	fVar0 = func_927(13);
	iVar1 = func_928(fVar0);
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

float func_750()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_751()
{
	if (func_694())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_752()
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

float func_753()
{
	return Global_1955565->f_3;
}

void func_754(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_766(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_755(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_766(iParam0, 2, 0, 0);
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

float func_756(float fParam0, float fParam1, float fParam2)
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

bool func_757()
{
	return func_927(12) <= -99f;
}

bool func_758()
{
	return func_927(12) >= 99f;
}

char* func_759(int iParam0)
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

void func_760(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_761(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_762(int iParam0)
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

char* func_763(int iParam0)
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

bool func_764()
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_283(1) > 0;
}

void func_765(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_766(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_650(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_650(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_767(int iParam0)
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

bool func_768(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_769(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_770()
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

int func_771(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return func_929(func_267(iParam0));
}

bool func_772(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_930(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_773(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_931(iParam0))
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

bool func_774(int iParam0)
{
	return func_932(iParam0);
}

bool func_775(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_529(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_776(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_933(iParam0);
}

struct<4> func_777()
{
	return Var0;
}

bool func_778(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_96(0);
	*uParam1 = { func_312(iParam0, func_537(0), iParam3, 0) };
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

int func_779()
{
	return 16596983;
}

int func_780()
{
	return 16662519;
}

bool func_781(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_782(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_783(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_784(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_785(bool bParam0)
{
	if (_is_ped_hogtied(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_hogtying(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_lassoed(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0xef3a8772f085b4aa(Global_35))
	{
		return false;
	}
	if (!_get_lassoed_entity(Global_35) == 0)
	{
		return false;
	}
	if (_0x226cf9b159e38f42(Global_35))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_35))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(Global_35) || is_ped_performing_melee_action(Global_35, 4096, 0))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_786(bool bParam0)
{
	if (_is_ped_sliding(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_climbing(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_784(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_ragdoll(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_vaulting(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_getting_up(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_787(bool bParam0)
{
	if (is_ped_hanging_on_to_vehicle(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_788(int iParam0, bool bParam1)
{
	iVar0 = func_934();
	if (_0x756c7b4c43df0422(1))
	{
		iVar0 = _0x351f74ed6177ebe7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!does_entity_exist(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_792(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!is_ped_in_writhe(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_789(int iParam0, bool bParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return true;
	}
	else if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 0, 0))
	{
		if (!func_792(iVar0))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (is_ped_in_writhe(get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_935(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!_0xd543d3a8fde4f185(Global_35, get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = iParam0;
	if (!func_792(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_writhe(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_790(int iParam0)
{
	return func_797(iParam0, 7);
}

bool func_791()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!_0xefc4303ddc6e60d3(iVar0))
	{
		return false;
	}
	iVar1 = _0xed1f514af4732258(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iVar1))
	{
		return false;
	}
	return true;
}

bool func_792(int iParam0)
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

bool func_793()
{
	if (!is_ped_in_any_train(Global_35))
	{
		return false;
	}
	iVar0 = func_936(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_794()
{
	return Global_1911914->f_1578;
}

bool func_795(int iParam0)
{
	return func_398(Global_1935496->f_7, iParam0);
}

int func_796(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_797(int iParam0, int iParam1)
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

bool func_798(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_799(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_800(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_801(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_802(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_937(iVar0))
		{
			if (vdist(func_938(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_803(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (vdist(func_939(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
			{
				return true;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

bool func_804(int iParam0, var uParam1)
{
	if (!func_940(iParam0))
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

int func_805()
{
	return func_941(Global_40.f_12019);
}

int func_806()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_678(iVar1);
		if (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_807()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_942(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_808()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_817(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_809()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_810(int iParam0)
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

int func_811(int iParam0)
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

bool func_812(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_813(int iParam0)
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

int func_814(int iParam0)
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

int func_815(int iParam0)
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

char* func_816(int iParam0)
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

bool func_817(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_818(int iParam0)
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

char* func_819(int iParam0)
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

bool func_820(int iParam0)
{
	if (func_943(iParam0) && func_317(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_944(iParam0) && func_945(iParam0))
	{
		return true;
	}
	return false;
}

char* func_821(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_473(iParam0));
}

int func_822(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_823(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_824(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_946(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_825(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

float func_826(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = to_float(get_entity_health(Global_35));
			fVar2 = to_float(get_entity_max_health(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = _get_ped_stamina(Global_35);
			fVar2 = _get_ped_max_stamina(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = _0xa81d24ae0af99a5e(get_player_index());
			fVar2 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_827(int iParam0)
{
	if (func_17() != -1)
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

float func_828(int iParam0, float fParam1)
{
	return func_947(to_float(iParam0), fParam1);
}

bool func_829(var uParam0, var uParam1, float fParam2)
{
	if (func_17() != -1)
	{
		return true;
	}
	if (!func_948(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_949(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < get_game_timer())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < get_game_timer())
		{
			func_231(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_949(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_830(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_17() == 0)
	{
		func_950(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(0);
	if (bParam1)
	{
		func_951(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_952();
	}
	if (bParam2)
	{
		fParam0 = func_953(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(0, func_756(fParam0, -100f, 100f), bParam1);
}

void func_831(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_17() == 0)
	{
		func_950(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(2);
	if (bParam1)
	{
		func_951(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_953(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(2, func_756(fParam0, -100f, 100f), bParam1);
}

void func_832(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_17() == 0)
	{
		func_950(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(1);
	if (bParam1)
	{
		func_951(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_953(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(1, func_756(fParam0, -100f, 100f), bParam1);
}

void func_833(float fParam0, bool bParam1)
{
	fVar0 = func_927(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_431(17))
	{
		return;
	}
	if (func_954())
	{
		iVar1 = func_928(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_928(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_65();
			func_66(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_955(&fVar3, &fVar4);
		func_956(13, func_756(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_231(94, 0);
		}
	}
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -1781387050;
		case 20:
			return -597058368;
		case 23:
			return 128702355;
		case 26:
			return -2051332199;
		case 27:
			return 546981776;
		case 28:
			return -2013384490;
		case 29:
			return 228922461;
		case 31:
			return -746674788;
		case 33:
			return 599861917;
		case 34:
			return -1781387050;
		case 37:
			return 2006811763;
		case 38:
			return -90546043;
		case 39:
			return 1216456215;
		case 40:
			return 746300881;
		case 41:
			return -435006002;
		case 42:
			return -624139784;
		case 43:
			return -529638012;
		case 1:
			return -651064726;
		case 9:
			return -404270094;
		case 10:
			return -1521783510;
		case 14:
			return 1714875242;
		case 17:
			return 2093126853;
		case 21:
			return 728781265;
		case 22:
			return 1794857344;
		case 24:
			return 1952409553;
		case 25:
			return -150591160;
		case 30:
			return 1019229063;
		case 32:
			return -323969289;
		case 35:
			return 927763737;
		case 36:
			return 1504361882;
		default:
			break;
	}
	return 0;
}

void func_835(int iParam0, int iParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_17() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_836(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_837(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_957(iParam0, 4, 1);
}

void func_838(int iParam0, bool bParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_958(iParam0))
	{
		return;
	}
	func_835(iParam0, 2);
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

bool func_839(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_957(iParam0, 1, 1);
}

void func_840(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_839(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_959(iParam0);
	}
	if (!bParam1)
	{
		if (func_17() != -1)
		{
		}
		else
		{
			func_960(iParam0);
		}
	}
	func_835(iParam0, 1);
	if (func_17() == -1)
	{
		func_961(iParam0, func_320());
	}
	func_838(iParam0, 1);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

float func_841(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_842()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_843(int iParam0)
{
	iVar0 = func_380(func_962(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_844(int iParam0, int iParam1)
{
	iVar1 = func_380(func_962(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_200(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_845()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_200(iVar1) == -999503751)
		{
			if (func_963() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_846(int iParam0, int iParam1)
{
	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_96(0), &Var5, iParam1);
	return true;
}

void func_847(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_964(iParam2, *uParam0);
	func_965(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_848(int iParam0)
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

bool func_849(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_850(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_851(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_200(iParam0))
	{
		case -2061583405:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_966(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_625();
	}
	if (bParam1)
	{
		func_627(0, 0);
	}
}

void func_852(var uParam0, int iParam1)
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
			if ((func_967(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_967(uParam0->f_2[iVar0], 1))
				{
					func_968(uParam0->f_2[iVar0], 2, 6);
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

void func_853(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_969(uParam0, 1))
	{
		func_970(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_854(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_855(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_634(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_634(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_634(iVar2, iVar0);
		}
	}
}

bool func_856(int iParam0)
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

int func_857(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_858(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_859(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_860(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_380(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_861(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_380(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_372(524288))
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

int func_862(var uParam0)
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

void func_863(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_17() == -1)
	{
		func_971(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_972(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_864(int iParam0, int iParam1)
{
	if (func_17() == -1)
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

int func_865(int iParam0)
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

void func_866(int iParam0, bool bParam1, int iParam2)
{
	func_973(&(Global_1946804->f_1378), iParam0);
	func_974(2, iParam0, 6);
	if (bParam1)
	{
		func_627(0, 1);
	}
}

bool func_867()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_868()
{
	return Global_1051081->f_11;
}

char* func_869()
{
	return "unnamed";
}

int func_870(int iParam0)
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

bool func_871(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return func_975(32, iParam0);
}

int func_872(int iParam0)
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

bool func_873(int iParam0)
{
	if (func_976(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) != 1)
		{
			func_977(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1225639->f_10, iParam0) == 1;
}

bool func_874(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

void func_875(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_876(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
	}
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_716(iVar12);
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

int func_877(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_309(iParam0, 0))
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

int func_878(int iParam0)
{
	if (!func_309(*iParam0, 0))
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

bool func_879(int iParam0, var uParam1, bool bParam2)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_686((386 + iVar29), 1);
		if (func_539(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_540(iParam0, &Var6, iVar5);
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

int func_880(int iParam0)
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

float func_881(int iParam0)
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
			return func_978(iParam0);
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
			return func_978(iParam0);
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
			return func_978(iParam0);
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

bool func_882(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_431(18);
		case 2:
			return func_431(20);
		case 1:
			return func_431(19);
		default:
			break;
	}
	return true;
}

int func_883(int iParam0)
{
	return func_979(&(Global_40.f_11095.f_11[iParam0]));
}

void func_884(int iParam0, float fParam1, bool bParam2)
{
	if (func_17() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_431(31))
	{
		return;
	}
	iVar0 = func_883(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_883(iParam0);
	if (func_980(iParam0) && func_981(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_982(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_983(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_231(func_984(iParam0), 0);
					}
					func_985(iParam0, iVar2, iVar3);
					func_171(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_885(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_886(int iParam0)
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

void func_887(bool bParam0)
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

void func_888(int iParam0)
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

void func_889(bool bParam0)
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

void func_890(bool bParam0)
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

void func_891(bool bParam0)
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

void func_892(bool bParam0)
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

void func_893(bool bParam0)
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

void func_894(bool bParam0)
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

void func_895()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_986();
		_unlock_set_unlocked(-1526891582, true);
		func_435(-916314281);
		func_479(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_435(494733111);
		func_479(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_896(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_897(int iParam0)
{
	Var0 = { func_310(iParam0, 1, 0) };
	return func_379(Var0.f_4);
}

int func_898(int iParam0)
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

int func_899(int iParam0)
{
	return func_987(iParam0, -1);
}

bool func_900(int iParam0, bool bParam1)
{
	return func_988(func_65(), iParam0, bParam1);
}

bool func_901()
{
	if (func_694())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_902(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_989((Global_40.f_4283.f_325 + iParam0));
}

void func_903(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_901())
	{
		func_653(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_653(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_904(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_905(int iParam0)
{
	iVar0 = func_990(iParam0, 1);
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

void func_906(int iParam0)
{
	iVar0 = func_990(iParam0, 1);
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

void func_907()
{
	func_906(-939420910);
	func_906(-1187950766);
	func_906(356365161);
	func_906(753127042);
	func_906(-2038424081);
	func_906(1884271742);
	func_906(459290420);
}

void func_908()
{
	func_906(704802028);
	func_906(588987611);
	func_906(2008888900);
	func_906(1649996811);
	func_906(227918160);
	func_906(168171957);
	func_906(1193080109);
	func_906(-491981251);
	func_906(-639037538);
	func_906(-618620429);
}

bool func_909(int iParam0)
{
	iVar0 = func_990(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_910(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_911(int iParam0)
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

void func_912(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_913(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_914(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	if (func_601(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_915(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_600(iParam0))
	{
		return;
	}
	if (!func_914(iParam0))
	{
		func_917(iParam0, 2);
		if (bParam2)
		{
			if (!func_74(0, 0, 1))
			{
				func_86(1, 4);
			}
		}
		if ((!func_916() && !bParam1) && !func_74(0, 0, 1))
		{
			func_202(_create_var_string(10, "OUT_JOURN_ADD", func_991(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_916()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_917(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_918(int iParam0, bool bParam1)
{
	iVar0 = func_992(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_432(50);
			}
			else
			{
				func_432(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_432(51);
			}
			else
			{
				func_432(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_993(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
			}
			break;
		case 3:
			func_432(24);
			if (bParam1)
			{
				if (!func_993(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			break;
	}
}

void func_919(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_994(0))
			{
				iVar0++;
			}
			if (func_994(2))
			{
				iVar0++;
			}
			if (func_994(4))
			{
				iVar0++;
			}
			if (!func_995(16))
			{
				if (iVar0 == 1)
				{
					func_996();
					func_231(456, 1);
					func_997(16);
				}
			}
			if (!func_995(32))
			{
				if (iVar0 >= 3)
				{
					func_996();
					func_231(456, 1);
					func_997(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_994(1))
			{
				iVar0++;
			}
			if (func_994(3))
			{
				iVar0++;
			}
			if (func_994(7))
			{
				iVar0++;
			}
			if (!func_995(1))
			{
				if (iVar0 == 1)
				{
					func_998();
					func_231(457, 1);
					func_997(1);
				}
			}
			if (!func_995(2))
			{
				if (iVar0 >= 3)
				{
					func_998();
					func_231(457, 1);
					func_997(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_994(5))
			{
				iVar0++;
			}
			if (func_994(6))
			{
				iVar0++;
			}
			if (func_994(8))
			{
				iVar0++;
			}
			if (!func_995(4))
			{
				if (iVar0 == 1)
				{
					func_999();
					func_231(455, 1);
					func_997(4);
				}
			}
			if (!func_995(8))
			{
				if (iVar0 >= 3)
				{
					func_999();
					func_231(455, 1);
					func_997(8);
				}
			}
			break;
	}
}

void func_920(var uParam0)
{
	func_733(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_733(uParam0, 617531372);
	}
	else
	{
		func_733(uParam0, 291123060);
	}
}

void func_921(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1000(uParam0))
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

bool func_922(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

Vector3 func_923(int iParam0)
{
	return _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3);
}

int func_924(vector3 vParam0)
{
	return round(vdist(Global_36, vParam0));
}

void func_925(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

int func_926(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

float func_927(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_928(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

int func_929(int iParam0)
{
	return iParam0 & 31;
}

bool func_930(int iParam0, bool bParam1, int iParam2)
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

bool func_931(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1001((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_933(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_934()
{
	return -1;
}

float func_935(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_841(Global_35, iParam0, bParam1, bParam2);
}

int func_936(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1002(iVar0))
		{
			fVar3 = func_1003(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_937(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1004((*Global_1835011)[iParam0]->f_1);
}

Vector3 func_938(int iParam0)
{
	return func_1005(iParam0);
}

Vector3 func_939(int iParam0)
{
	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1006(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

bool func_940(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_941(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_942(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_943(int iParam0)
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

int func_944(int iParam0)
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

int func_945(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1007(&iVar0, 0, iVar95, &Var1) && !func_1007(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1008(iVar0, &Var1);
			if (func_309(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_946(int iParam0)
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

float func_947(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_948(int iParam0)
{
	if (func_690())
	{
		return false;
	}
	return func_339((*Global_1347702)[58]->f_15, 1);
}

bool func_949(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1009(iParam0, &Var0);
}

void func_950(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_953(iParam0, fParam1, 1);
	}
	func_266(iParam0, (func_1010(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_951(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_952()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_953(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_65();
	func_1011(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1012(iParam0, 2);
	if (func_988(iVar0, func_1013(iParam0, 2), 1))
	{
		func_1014(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_231(88, bParam2);
		return 0f;
	}
	func_1015(iParam0, func_65(), 2);
	func_1014(iParam0, iVar1 + 1, 2);
	return fParam1;
}

bool func_954()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_1347477->f_200)
	{
		return false;
	}
	if (Global_1347477->f_195 == -15)
	{
		return true;
	}
	return func_900(Global_1347477->f_195, 0);
}

void func_955(var uParam0, var uParam1)
{
	if (!func_176())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_956(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_650(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1016(1, bVar1, 1, sVar2);
		func_1017(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_511(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_261();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_511(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_511(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_957(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_836(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_958(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_957(iParam0, 2, 1);
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_960(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_231(210, 0);
			break;
		case 16:
			func_231(211, 0);
			break;
		case 33:
			func_231(212, 0);
			break;
		case 42:
			func_231(213, 0);
			break;
		case 2:
			func_231(214, 0);
			break;
		case 3:
			func_231(215, 0);
			break;
		case 43:
			func_231(216, 0);
			break;
		case 15:
			func_231(217, 0);
			break;
		case 23:
			func_231(218, 0);
			break;
		case 37:
			func_231(219, 0);
			break;
		case 26:
			func_231(220, 0);
			break;
		case 13:
			func_231(221, 0);
			break;
		case 19:
			func_231(222, 0);
			break;
		case 34:
			func_231(223, 0);
			break;
		case 38:
			func_231(224, 0);
			break;
		case 40:
			func_231(225, 0);
			break;
		case 7:
			func_231(226, 0);
			break;
		case 20:
			func_231(227, 0);
			break;
		case 18:
			func_231(228, 0);
			break;
		case 6:
			func_231(229, 0);
			break;
		case 29:
			func_231(230, 0);
			break;
		case 39:
			func_231(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_231(233, 0);
			break;
		case 8:
			func_231(234, 0);
			break;
		case 28:
			func_231(235, 0);
			break;
		case 31:
			func_231(236, 0);
			break;
		case 12:
			func_231(237, 0);
			break;
		case 27:
			func_231(238, 0);
			break;
		case 41:
			func_231(239, 0);
			break;
	}
}

void func_961(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_321(1849379570, 0);
			}
			else
			{
				func_321(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_321(-837750081, 0);
			}
			else
			{
				func_321(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_321(-342875345, 0);
			}
			else
			{
				func_321(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_321(-1083564345, 0);
			}
			else
			{
				func_321(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_321(-363984637, 0);
			}
			else
			{
				func_321(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_321(205335377, 0);
			}
			else
			{
				func_321(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_321(-1389317844, 0);
			}
			else
			{
				func_321(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_321(-1907629529, 0);
			}
			else
			{
				func_321(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_321(240007023, 0);
			}
			else
			{
				func_321(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_321(1312152388, 0);
			}
			else
			{
				func_321(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_321(545314598, 0);
			}
			else
			{
				func_321(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_321(1230485961, 0);
			}
			else
			{
				func_321(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_321(-201902289, 0);
			}
			else
			{
				func_321(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_321(-564622057, 0);
			}
			else
			{
				func_321(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_321(-1303190422, 0);
			}
			else
			{
				func_321(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_321(-88060354, 0);
			}
			else
			{
				func_321(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_321(1312248008, 0);
			}
			else
			{
				func_321(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_321(428446588, 0);
			}
			else
			{
				func_321(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_321(37692363, 0);
			}
			else
			{
				func_321(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_321(877023893, 0);
			}
			else
			{
				func_321(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_321(-706642783, 0);
			}
			else
			{
				func_321(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_321(-918250703, 0);
			}
			else
			{
				func_321(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_321(722815515, 0);
			}
			else
			{
				func_321(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_321(1053305061, 0);
			}
			else
			{
				func_321(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_321(1024520106, 0);
			}
			else
			{
				func_321(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_321(1140872184, 0);
			}
			else
			{
				func_321(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_321(-1590595690, 0);
			}
			else
			{
				func_321(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_321(1164380735, 0);
			}
			else
			{
				func_321(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_321(301696279, 0);
			}
			else
			{
				func_321(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_321(-415970359, 0);
			}
			else
			{
				func_321(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_321(1669531798, 0);
			}
			else
			{
				func_321(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_321(-977383775, 0);
			}
			else
			{
				func_321(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_321(1183317680, 0);
			}
			else
			{
				func_321(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_321(667332266, 0);
			}
			else
			{
				func_321(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_321(-1578905205, 0);
			}
			else
			{
				func_321(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_321(-448931053, 0);
			}
			else
			{
				func_321(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_321(-1162930163, 0);
			}
			else
			{
				func_321(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_321(1004123602, 0);
			}
			else
			{
				func_321(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_321(281748406, 0);
			}
			else
			{
				func_321(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_321(-1351305881, 0);
			}
			else
			{
				func_321(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_321(-1644190131, 0);
			}
			else
			{
				func_321(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_321(-926127573, 0);
			}
			else
			{
				func_321(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_321(758690400, 0);
			}
			else
			{
				func_321(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_962(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_379(iVar0);
}

int func_963()
{
	return Global_1946804->f_1497;
}

void func_964(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_965(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1018(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_380(func_897(iParam1), 1);
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
		func_1019(uParam0);
	}
}

int func_966(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_620(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_200(iParam0) != -999503751)
		{
			func_1020(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_200(iParam0) != -999503751)
	{
		func_1020(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_846(iParam0, 1);
	return 1;
}

bool func_967(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_968(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_969(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_970(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_971(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_972(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_973(var uParam0, int iParam1)
{
	if (func_17() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_971(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_972(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_974(int iParam0, int iParam1, int iParam2)
{
	if (func_17() == -1)
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

bool func_975(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1021(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1022())
	{
		return func_1021(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1021(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_976(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1058888->f_49111), iParam0))
	{
		return true;
	}
	return false;
}

void func_977(int iParam0)
{
	if (func_1023() != 0 || func_17() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225639->f_21[iVar0])
	{
		func_1024(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0] == 1)
	{
		return;
	}
	func_1025(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0] = 1;
}

float func_978(int iParam0)
{
	iVar4 = func_880(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_979(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1026(iVar6) - func_1026(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_979(float fParam0)
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

int func_980(int iParam0)
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

int func_981(int iParam0)
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

int func_982(float fParam0, float fParam1)
{
	iVar0 = func_979(fParam0);
	fVar1 = to_float(func_1026(iVar0));
	fVar2 = to_float(func_1026(iVar0 + 1));
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

int func_983(int iParam0)
{
	if (func_1027(iParam0, &iVar0))
	{
		return func_1026(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1028())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1028())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1028())
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

int func_984(int iParam0)
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

void func_985(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1029(iParam0));
	sVar4 = func_1031(func_1030(iVar3, iParam2));
	sVar6 = func_1032(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1033(iParam0));
	iVar8 = func_1034(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1035(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_582(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1036(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_986()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1037(Global_35, &uVar0);
	Var30 = { func_536(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1038(0);
	func_1039(7);
	func_376(-1623728698, 1, 1, 0);
	if (func_624() == 1160113249)
	{
		func_376(-763730846, 1, 1, 1);
		func_376(-361635024, 1, 1, 1);
	}
	func_1040(Global_35, &uVar0);
}

int func_987(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_96(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_252(&uVar6, iVar0);
	func_253(&uVar6, iVar1);
	func_254(&uVar6, iVar2);
	func_255(&uVar6, iVar3);
	func_256(&uVar6, iVar4);
	func_257(&uVar6, iVar5);
	return uVar6;
}

bool func_988(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1041(iParam1) || !func_1041(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_989(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_654(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_990(int iParam0, int iParam1)
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

char* func_991(int iParam0)
{
	iVar0 = func_865(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_821(iVar0);
}

int func_992(int iParam0)
{
	if (func_1042(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1043(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1044(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1045(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_993(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_317(func_1046(iVar0, iParam0), 1, 0))
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

bool func_994(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_317(func_1047(iVar0, iParam0), 1, 0))
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

bool func_995(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_996()
{
	if (func_17() != -1)
	{
		return;
	}
	func_479(1654063339, 1, 752097756);
	iVar0 = func_883(1);
	func_985(1, iVar0, 0);
}

void func_997(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_998()
{
	if (func_17() != -1)
	{
		return;
	}
	func_479(1623931083, 1, 752097756);
	iVar0 = func_883(2);
	func_985(2, iVar0, 0);
}

void func_999()
{
	if (func_17() != -1)
	{
		return;
	}
	func_479(-1845241476, 1, 752097756);
	iVar0 = func_883(0);
	func_985(0, iVar0, 0);
}

bool func_1000(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1001(var uParam0)
{
	if (func_1048(&(uParam0->f_29), 62))
	{
		switch (func_1049())
		{
			case 1:
				if (!func_1048(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1048(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1048(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1048(&(uParam0->f_29), 32))
				{
					if (func_1048(&(uParam0->f_29), 2))
					{
						if (func_139(func_65()) < 5)
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

bool func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_1003(int iParam0, vector3 vParam1)
{
	if (func_1050(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

int func_1004(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_824(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1005(int iParam0)
{
	if (func_931(iParam0))
	{
		return func_1051(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1006(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776((*Global_1347702)[iParam0]->f_15) != 0)
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

bool func_1007(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1052(iParam1) && !func_1053(iParam1))
	{
		iVar0 = func_205(iParam1);
	}
	else
	{
		return false;
	}
	func_1054(uParam3);
	iVar5 = func_1055(iParam2);
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

void func_1008(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1056(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1057(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_1009(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_1010(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

void func_1011(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_142(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1012(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_1013(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

void func_1014(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1015(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

void func_1016(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1017(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_766(0, 1, bParam0, bParam1);
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

void func_1018(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1058(&(uParam0->f_3));
}

void func_1019(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1059(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1020(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1060(iParam1);
	func_1061(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1062(&(uParam0->f_26), iVar1);
		if (func_1063(uParam0->f_26, &iVar0))
		{
			func_1064(iVar0, iVar1);
		}
	}
}

bool func_1021(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1022()
{
	return Global_1109400->f_245;
}

int func_1023()
{
	return Global_1572887->f_13;
}

void func_1024(int iParam0)
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
	func_1025(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0] = 0;
}

void func_1025(int iParam0)
{
	if (Global_1058888->f_42357.f_1[iParam0]->f_1 != 0)
	{
		Global_1058888->f_42357.f_1[iParam0]->f_2 = 0;
		Global_1058888->f_42357.f_1[iParam0]->f_1 = 0;
	}
}

int func_1026(int iParam0)
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

bool func_1027(int iParam0, int iParam1)
{
	return false;
}

bool func_1028()
{
	return false;
}

int func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_96(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_96(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_96(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1030(int iParam0, int iParam1)
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

char* func_1031(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1032(int iParam0)
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

char* func_1033(int iParam0)
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

int func_1034(int iParam0)
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

int func_1035(int iParam0)
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

int func_1036(int iParam0)
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

void func_1037(int iParam0, var uParam1)
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
		if (func_685(iVar31))
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

void func_1038(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_309(iVar1, 0))
		{
			func_851(iVar1, 0, bParam0);
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

void func_1039(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_17() == -1)
	{
		func_1065(352481484);
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
		if (func_200(iVar2) != -999503751)
		{
			func_847(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_846(iVar2, 0))
		{
			func_212(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1040(int iParam0, var uParam1)
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
				if (func_684(uParam1[iVar0]))
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

bool func_1041(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_137(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_138(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1042(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1043(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1044(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1045(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1046(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1066(iParam0);
		case 1:
			return func_1067(iParam0);
		case 2:
			return func_1068(iParam0);
		case 3:
			return func_1069(iParam0);
	}
	return 0;
}

int func_1047(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1070(iParam0);
		case 1:
			return func_1071(iParam0);
		case 2:
			return func_1072(iParam0);
		case 3:
			return func_1073(iParam0);
		case 4:
			return func_1074(iParam0);
		case 5:
			return func_1075(iParam0);
		case 6:
			return func_1076(iParam0);
		case 7:
			return func_1077(iParam0);
		case 8:
			return func_1078(iParam0);
	}
	return 0;
}

bool func_1048(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1049()
{
	return &Global_1899516;
}

bool func_1050(int iParam0)
{
	if (func_1079(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

Vector3 func_1051(int iParam0)
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

bool func_1052(int iParam0)
{
	iParam0 = func_291(iParam0);
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

bool func_1053(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1052(iParam0))
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1054(var uParam0)
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

int func_1055(int iParam0)
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

void func_1056(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1057(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1058(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1059(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1080(func_624());
	if (*uParam0)
	{
		func_1058(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_17() != -1, uParam2);
	*uParam0 = 1;
}

int func_1060(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1061(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1062(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1018(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1063(int iParam0, int iParam1)
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

void func_1064(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1065(int iParam0)
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
	Var2 = { func_656(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_658(&Var2, &iVar0, &iVar1, 0))
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
		func_660(iVar0);
	}
}

int func_1066(int iParam0)
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

int func_1067(int iParam0)
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

int func_1068(int iParam0)
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

int func_1069(int iParam0)
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

int func_1070(int iParam0)
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

int func_1071(int iParam0)
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

int func_1072(int iParam0)
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

int func_1073(int iParam0)
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

int func_1074(int iParam0)
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

int func_1075(int iParam0)
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

int func_1076(int iParam0)
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

int func_1077(int iParam0)
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

int func_1078(int iParam0)
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

bool func_1079(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_1080(int iParam0)
{
	if (func_17() == -1)
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

