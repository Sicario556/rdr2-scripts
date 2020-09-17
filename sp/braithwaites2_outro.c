void __EntryFunction__()
{
	iLocal_844 = -830507952;
	iLocal_854 = 1;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_855);
	}
	func_2(&Local_855, &uScriptParam_0);
	while (!func_3(&Local_855))
	{
		func_4(&Local_855);
		switch (func_5(Local_855))
		{
			case 0:
				if (func_6(&Local_855))
				{
					func_7(&Local_855, 1);
				}
				break;
			case 1:
				if (func_8(&Local_855))
				{
					func_7(&Local_855, 2);
				}
				break;
			case 2:
				if (func_9(&Local_855))
				{
					func_7(&Local_855, 3);
				}
				break;
			case 3:
				func_1(&Local_855);
				break;
		}
		wait(0);
	}
	func_1(&Local_855);
	terminate_this_thread();
}

void func_1(var uParam0)
{
	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_12(&(iLocal_727[iVar0])))
		{
			func_13(&(iLocal_727[iVar0]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (func_14(iVar2) && func_12(iVar2))
		{
			iVar3 = Global_1360165[iVar1];
			if (does_entity_exist(iVar3))
			{
				if (func_15(iVar2))
				{
					func_13(iVar2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
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
	if (!func_21(iVar841, 1, 0, 0))
	{
		return false;
	}
	if ((func_22(sVar848) && func_23(iVar841)) && _0x5e420ff293ee5472())
	{
		return true;
	}
	return false;
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
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_25(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!func_26())
	{
		iVar0 = 0;
	}
	if (!func_27(uParam0))
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
		if (func_14(iVar0) && func_15(iVar0))
		{
			func_28(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_29(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!is_entity_dead(&(uLocal_729[iVar0])) && does_entity_belong_to_this_script(&(uLocal_729[iVar0]), true))
		{
			if (is_ped_in_group(&(uLocal_729[iVar0])))
			{
				remove_ped_from_group(&(uLocal_729[iVar0]));
				set_ped_as_no_longer_needed(uLocal_729[iVar0]);
			}
		}
		if (!is_entity_dead(&(iLocal_833[iVar0])) && does_entity_belong_to_this_script(&(iLocal_833[iVar0]), true))
		{
			func_30(&(iLocal_833[iVar0]), &(iLocal_727[iVar0]), 1, 0, 0);
		}
		iVar0++;
	}
	if (!is_entity_dead(iVar832) && does_entity_belong_to_this_script(iVar832, true))
	{
		set_ped_as_no_longer_needed(&iLocal_835);
	}
	remove_waypoint_recording(sVar848);
	remove_waypoint_recording(sVar849);
	func_31(8);
	if (does_group_exist(iVar731))
	{
		remove_group(iVar731);
	}
	func_32(uVar841);
	if (_0x5c16855277819bbf() > iVar842)
	{
		_0x7d4e70a67a651c71((_0x5c16855277819bbf() + iVar842));
	}
	if (func_33(&(uLocal_729[iVar846]), 0) && _0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x0c6b89876262a99d(get_player_index(), &(uLocal_729[iVar846]));
	}
	func_34(1);
	func_35();
	_0x1096603b519c905f("");
}

bool func_12(int iParam0)
{
	return func_36(iParam0, 16, 1);
}

void func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_28(iParam0, 56, 1);
		func_29(&(Global_1359489->f_40), 1);
	}
	func_37(iParam0, 0);
	func_38(iParam0, 4, 0);
	func_31(iParam0);
	func_39(iParam0);
	func_40(iParam0, 37, 1);
	bVar0 = func_33(Global_1360165[iParam0], 0);
	iVar1 = func_41(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_42(iParam0, 64, 1))
	{
		func_40(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_40(iParam0, 33, 1);
		func_40(iParam0, 34, 1);
		func_43(iParam0, 1056964608, -1, 1061158912);
		func_44(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_28(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_28(iParam0, 35, 1);
			if (bParam8)
			{
				func_28(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_45(iParam0, 0);
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
		func_40(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_28(iParam0, 33, 1);
		func_44(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_29(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_46(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_28(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_47(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_42(iParam0, 45, 1))
	{
		func_40(iParam0, 45, 1);
	}
	func_48(iParam0, 16, 1);
	func_40(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_33(func_49(iParam0), 0))
		{
			func_30(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_15(int iParam0)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	if (!func_12(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
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
	iLocal_727[0] = 8;
	iLocal_849 = 0;
	if (func_50((*Global_1835011)[20]->f_1) == 1)
	{
		func_51(8);
		iLocal_733 = 1;
		func_52(&uLocal_846);
		iLocal_853 = 1;
	}
	else if (func_50((*Global_1835011)[20]->f_1) == 2)
	{
		func_51(8);
		iLocal_733 = 1;
		iLocal_853 = 0;
	}
	else
	{
		iLocal_733 = 0;
		iLocal_853 = 0;
	}
	sLocal_851 = "brt2_outroRideToCamp";
	sLocal_852 = "brt2_outroCME";
	request_waypoint_recording(sVar848);
	request_waypoint_recording(sVar849);
	*vLocal_836[0] = { 663.47f, -1230.6f, 43.4f };
	*vLocal_840[0] = { 668.77f, -1233.93f, 44.16f };
	StringCopy(&Local_3, "camera_treatments", 64);
	StringCopy(&(Local_3.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_3);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_53(vLocal_836[iVar0], 50, 10, 0);
		func_53(vLocal_840[iVar0], 50, 10, 0);
		iVar0++;
	}
	fLocal_850 = 5.2f;
	iLocal_845 = 2;
	if (_0x5c16855277819bbf() <= iVar842)
	{
		_0xed9582b3da8f02b4((_0x5c16855277819bbf() + iVar842));
	}
	func_52(&uLocal_846);
	func_34(0);
	func_54();
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

bool func_22(char* sParam0)
{
	if (get_is_waypoint_recording_loaded(sParam0))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

int func_24(var uParam0)
{
	switch (iVar722)
	{
		case 0:
			if (func_55(&iLocal_727, &uLocal_729, 0, 1, 0, 0, 0, 0))
			{
				iLocal_725 = 1;
			}
		else
		{
			}
			else
			{
				iLocal_835 = get_mount(Global_35);
				if (!is_entity_dead(iVar832))
				{
					set_entity_as_mission_entity(iVar832, true, true);
				}
				iLocal_725 = 2;
				iLocal_833[0] = get_mount(&(uLocal_729[0]));
				iLocal_725 = 3;
				func_56();
				func_57(iVar832, &iLocal_833);
				iLocal_725 = 4;
				_0x1096603b519c905f("BRT2");
				return 1;
			}
			return 0;
			default:
				break;
	}
}

bool func_25(int iParam0)
{
	if (is_entity_dead(&(uLocal_729[iParam0])))
	{
		return true;
	}
	if (func_58(&(uLocal_729[iParam0]), 1, 1))
	{
		iLocal_731[iParam0] = 18;
		if (func_12(&(iLocal_727[iParam0])))
		{
			func_13(&(iLocal_727[iParam0]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_833[iParam0])))
		{
			func_30(&(iLocal_833[iParam0]), &(iLocal_727[iParam0]), 1, 0, 0);
		}
		return true;
	}
	if (bVar730 && func_59(Global_35, &(uLocal_729[iParam0]), 0) > 6400f)
	{
		_blip_set_modifier(func_60(8), -1269631044);
		iLocal_733 = 0;
		iLocal_853 = 0;
	}
	switch (&iLocal_731[iParam0])
	{
		case 0:
			if (func_61(iParam0))
			{
				if (bVar850)
				{
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					set_player_control(player_id(), false, 0, false);
					prefetch_srl("script@tripskip@brt2_srl");
					_0x1b3c2d961f5fc0e1("script@Cinematics@TripSkip@Clemens_Point");
					open_sequence_task(&uLocal_726);
					task_swap_weapon(0, 0, 0, 0, 0);
					task_follow_nav_mesh_to_coord(0, get_entity_coords(&(uLocal_729[iParam0]), true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					close_sequence_task(iVar723);
					task_perform_sequence(&(uLocal_729[iParam0]), iVar723);
					clear_sequence_task(&uLocal_726);
					open_sequence_task(&uLocal_726);
					task_swap_weapon(0, 0, 0, 0, 0);
					task_follow_nav_mesh_to_coord(0, get_entity_coords(&(uLocal_729[iParam0]), true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					close_sequence_task(iVar723);
					_task_perform_sequence_2(Global_35, iVar723, 0.25f, 0.25f);
					if (_0xdd0b7c5ae58f721d(&Local_3))
					{
						_0xb8b207c34285e978(&Local_3);
					}
					func_52(&uLocal_846);
					iLocal_731[iParam0] = 7;
				}
				else
				{
					task_follow_waypoint_recording_at_offset(&(uLocal_729[iParam0]), uVar848, -1.5f, 0, 9224, -1, 0);
					iLocal_731[iParam0] = 13;
				}
			}
			break;
		case 7:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if ((func_62(&uLocal_846) > 3f && _0xaa235e2f2c09e952("script@Cinematics@TripSkip@Clemens_Point")) && is_srl_loaded())
			{
				_0x0a5a4f1979abb40e(&Local_3);
				_0x798be43c9393632b(&Local_3);
				clear_ped_tasks_immediately(&(uLocal_729[iParam0]), false, true);
				clear_ped_tasks_immediately(&(iLocal_833[iParam0]), false, true);
				clear_ped_tasks_immediately(Global_35, false, true);
				clear_ped_tasks_immediately(iVar832, false, true);
				func_63(iVar832, 1180.4f, -1554.3f, 53.4f, 19.7f, 1, 1073741824);
				func_63(&(iLocal_833[0]), 1178.3f, -1559f, 53.7f, 19.7f, 1, 1073741824);
				force_ped_motion_state(&(iLocal_833[0]), -1115154469, false, 0, false);
				simulate_player_input_gait(player_id(), 1.75f, 2000, 0f, true, false);
				task_follow_waypoint_recording_at_offset(&(uLocal_729[iParam0]), uVar849, -1.5f, 5, 4196386, -1, 0);
				task_follow_waypoint_recording_at_offset(Global_35, uVar849, 1f, 5, 11266, -1, 0);
				_0x5e3ccf03995388b5(-1723251484, 1192.2f, -1557f, 55.4f);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				end_srl();
				prefetch_srl("script@tripskip@brt2_burning_srl");
				_0x1b3c2d961f5fc0e1("script@Cinematics@TripSkip@Clemens_Point");
				func_52(&uLocal_846);
				iLocal_731[iParam0] = 9;
			}
			break;
		case 9:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
			set_ped_desired_move_blend_ratio(&(uLocal_729[iParam0]), 2.5f);
			set_ped_desired_move_blend_ratio(Global_35, 2.5f);
			func_65(&(uLocal_729[iParam0]), 2.5f);
			func_65(Global_35, 2.5f);
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5) - func_66(&uLocal_846)), -1485537194, 1919.4f, -1341.3f, 49.1f, 1, 2147483647))
			{
				_play_sound_from_position("MAIN_LOOP", 1916.311f, -1299.35f, 42f, "VEGETATION_FIRE_SOUNDSET", false, 0, true, 0);
				clear_ped_tasks_immediately(&(uLocal_729[iParam0]), false, true);
				clear_ped_tasks_immediately(Global_35, false, true);
				func_63(&(iLocal_833[0]), 756.4f, -1186.3f, 45f, 144.3f, 6, 1073741824);
				func_63(iVar832, 761.5f, -1179.3f, 44.9f, 144.3f, 6, 1073741824);
				freeze_entity_position(&(iLocal_833[0]), true);
				freeze_entity_position(iVar832, true);
				func_64(0, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
				func_64(1, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				end_srl();
				prefetch_srl("script@tripskip@clemens_cove_srl");
				func_67(53, 1, 0);
				func_68(134, 1, 0, 0, 0);
				func_68(138, 1, 0, 0, 0);
				func_52(&uLocal_846);
				iLocal_731[iParam0] = 11;
			}
			break;
		case 11:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
			if (func_62(&uLocal_846) >= 9f && !is_screen_faded_out())
			{
				do_screen_fade_out(3000);
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5) - func_66(&uLocal_846)), 1506582591, 749.7f, -1202.1f, 46f, 1, 2147483647) && is_screen_faded_out())
			{
				freeze_entity_position(&(iLocal_833[0]), false);
				freeze_entity_position(iVar832, false);
				task_follow_waypoint_recording_at_offset(&(uLocal_729[iParam0]), uVar849, -1.5f, 444, 9216, -1, 0);
				task_follow_waypoint_recording_at_offset(Global_35, uVar849, 1f, 439, 9216, -1, 0);
				force_ped_motion_state(&(iLocal_833[0]), -1415276238, false, 0, false);
				force_ped_motion_state(iVar832, -1415276238, false, 0, false);
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				_0x0f2a2175734926d8("MAIN_LOOP", "VEGETATION_FIRE_SOUNDSET");
				func_52(&uLocal_846);
				end_srl();
				do_screen_fade_in(1000);
				iLocal_731[iParam0] = 12;
			}
			break;
		case 12:
			func_64(2, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
			_0x702b75dc9d3ede56(true);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_65(Global_35, 1.25f);
			func_65(&(uLocal_729[iParam0]), 1.25f);
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5) - func_66(&uLocal_846)), 0, 749.7f, -1202.1f, 46f, 1, 2147483647))
			{
				_0x43037abfe214a851();
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				func_64(3, Global_35, 0, iVar832, 0, 1092616192, 1103626240);
				clear_ped_tasks(Global_35, 1, 0);
				simulate_player_input_gait(player_id(), 1.501f, 3000, 0f, true, false);
				set_player_control(player_id(), true, 0, false);
				iLocal_731[iParam0] = 14;
			}
			else if (func_62(&uLocal_846) > 6f && !func_69(1))
			{
				func_70(&uLocal_735, "BRT2_AFTER_CME", &(uLocal_729[0]), Global_35, 0, 0, 1, 1);
			}
			break;
		case 13:
			if (iParam0 == 0)
			{
				func_71();
			}
			if (!is_ped_on_mount(&(uLocal_729[iParam0])))
			{
				clear_ped_tasks(&(uLocal_729[iParam0]), 1, 0);
				func_72(&(uLocal_729[iParam0]), &(iLocal_833[0]), 0, -1, 1);
				func_73(14);
			}
			if (func_74(&(uLocal_729[iParam0]), *vLocal_836[iParam0], 1) < 20f)
			{
				func_75();
				func_73(14);
			}
			else if ((get_script_task_status(&(uLocal_729[0]), 242628503, true) != 0 && get_script_task_status(&(uLocal_729[0]), 242628503, true) != 1) && !is_waypoint_playback_going_on_for_ped(&(uLocal_729[0]), 0))
			{
				iLocal_731[iParam0] = 0;
			}
			break;
		case 3:
			if (is_ped_on_mount(&(uLocal_729[iParam0])))
			{
				task_follow_waypoint_recording(&(uLocal_729[iParam0]), uVar848, 0, 14, -1, 0, 0, -1);
				iLocal_731[iParam0] = 13;
			}
			else if (get_script_task_status(&(uLocal_729[iParam0]), 1435919172, true) != 0 && get_script_task_status(&(uLocal_729[iParam0]), 1435919172, true) != 1)
			{
				task_mount_animal(&(uLocal_729[iParam0]), &(iLocal_833[0]), 20000, -1, 1073741824, 1, 0, 0);
			}
			break;
		case 14:
			func_65(&(uLocal_729[iParam0]), 1.501f);
			if (func_76(&(uLocal_729[iParam0]), *vLocal_836[iParam0], 1f, 1096810496))
			{
				iLocal_731[iParam0] = 15;
			}
			break;
		case 15:
			if (func_77(&(uLocal_729[iParam0])))
			{
				iLocal_731[iParam0] = 16;
			}
			break;
		case 16:
			if (func_78(&(iLocal_833[iParam0]), *vLocal_836[iParam0], 2f))
			{
				iLocal_731[iParam0] = 17;
			}
			break;
		case 17:
			if (func_76(&(uLocal_729[iParam0]), *vLocal_840[iParam0], 1f, 0.5f))
			{
				iLocal_731[iParam0] = 18;
			}
			break;
		case 18:
			return true;
	}
	return false;
}

bool func_26()
{
	iVar0 = 1;
	return iVar0;
}

bool func_27(var uParam0)
{
	return true;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_81(uParam0))
	{
		func_52(uParam0);
	}
}

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_79(iParam1))
	{
		return;
	}
	iVar0 = func_49(iParam1);
	if (func_82(iParam1))
	{
		if (!func_83(iParam1))
		{
			return;
		}
	}
	func_40(iParam1, 39, 1);
	func_84(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_84(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_84(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_28(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_85(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_31(int iParam0)
{
	func_38(iParam0, 8, 0);
}

var func_32(var uParam0)
{
	return _0x4eddd9e9ca5af985(uParam0);
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
	if (func_86(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_86(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_86(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		if (func_87(Global_1393447, 1024))
		{
			func_88(Global_1393447, 1024);
		}
	}
	else
	{
		func_89(Global_1393447, 1024);
	}
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		if (does_particle_fx_looped_exist(Local_19[iVar0]->f_10))
		{
			stop_particle_fx_looped(Local_19[iVar0]->f_10, false);
			remove_particle_fx(Local_19[iVar0]->f_10, false);
		}
		iVar0++;
	}
	if (does_particle_fx_looped_exist(iVar722))
	{
		stop_particle_fx_looped(iVar722, false);
		remove_particle_fx(iVar722, false);
		iLocal_724 = 0;
	}
}

bool func_36(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_37(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_90(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_38(iParam0, 1, 0);
		}
	}
	func_38(iParam0, 16, bParam1);
}

void func_38(int iParam0, int iParam1, bool bParam2)
{
	if (!func_79(iParam0))
	{
		return;
	}
	func_91(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_39(int iParam0)
{
	func_28(iParam0, 36, 1);
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_41(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_92(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_42(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return false;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_14(iParam0))
	{
		iVar1 = func_93(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_94(iParam0);
		}
	}
	if (func_42(iParam0, 5, 1))
	{
		set_ped_config_flag(func_93(iParam0), 137, true);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_40(iParam0, 50, 1);
		func_40(iParam0, 48, 1);
		func_40(iParam0, 49, 1);
		func_40(iParam0, 51, 1);
		func_40(iParam0, 52, 1);
		func_40(iParam0, 54, 1);
		func_40(iParam0, 55, 1);
	}
	else
	{
		func_28(iParam0, 50, 1);
		func_28(iParam0, 48, 1);
		func_28(iParam0, 49, 1);
		func_28(iParam0, 51, 1);
		if (bParam3)
		{
			func_28(iParam0, 54, 1);
		}
		else
		{
			func_40(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_28(iParam0, 52, 1);
			if (bParam3)
			{
				func_28(iParam0, 55, 1);
			}
		}
		else
		{
			func_40(iParam0, 52, 1);
			if (!bParam3)
			{
				func_40(iParam0, 55, 1);
			}
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_93(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_93(iParam0), 204, false);
	}
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (!func_15(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_42(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_41(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_93(iParam0);
	if (((does_entity_exist(iVar1) && func_95(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_28(iParam0, 2, 1);
	}
	else
	{
		func_96(iParam0);
		func_28(iParam0, 1, 1);
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_49(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

int func_50(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_98(iParam0);
}

void func_51(int iParam0)
{
	func_38(iParam0, 8, 1);
}

void func_52(var uParam0)
{
	func_99(uParam0, 0f);
}

int func_53(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_100(*uParam0, 0f, 0f, 0f))
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

void func_54()
{
	Local_19[0] = "ent_amb_generic_fire_field";
	Local_19[0]->f_1 = { 1867.722f, -1269.971f, 41.75f };
	Local_19[1] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[1]->f_1 = { 1874.872f, -1268.89f, 42f };
	Local_19[2] = "ent_amb_generic_fire_field";
	Local_19[2]->f_1 = { 1872.931f, -1277.735f, 42f };
	Local_19[3] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[3]->f_1 = { 1877.412f, -1277.697f, 42f };
	Local_19[4] = "ent_amb_generic_fire_field_smoke";
	Local_19[4]->f_1 = { 1881.375f, -1278.052f, 42f };
	Local_19[5] = "ent_amb_generic_fire_field";
	Local_19[5]->f_1 = { 1881.468f, -1273.121f, 42f };
	Local_19[6] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[6]->f_1 = { 1884.448f, -1284.069f, 42f };
	Local_19[7] = "ent_amb_generic_fire_field";
	Local_19[7]->f_1 = { 1891.398f, -1280.363f, 42f };
	Local_19[8] = "ent_amb_generic_fire_field";
	Local_19[8]->f_1 = { 1872.865f, -1264.383f, 41.25f };
	Local_19[9] = "ent_amb_generic_fire_field";
	Local_19[9]->f_1 = { 1875.69f, -1259.6f, 41.25f };
	Local_19[10] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[10]->f_1 = { 1876.942f, -1264.856f, 41.25f };
	Local_19[11] = "ent_amb_generic_fire_field_smoke";
	Local_19[11]->f_1 = { 1877.321f, -1263.243f, 41.25f };
	Local_19[12] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[12]->f_1 = { 1883.229f, -1267.838f, 41.25f };
	Local_19[13] = "ent_amb_generic_fire_field";
	Local_19[13]->f_1 = { 1886.58f, -1263.57f, 41.25f };
	Local_19[14] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[14]->f_1 = { 1887.436f, -1273.811f, 41.25f };
	Local_19[15] = "ent_amb_generic_fire_field";
	Local_19[15]->f_1 = { 1895.106f, -1270.913f, 41.25f };
	Local_19[16] = "ent_amb_generic_fire_field";
	Local_19[16]->f_1 = { 1916.311f, -1299.35f, 42f };
	Local_19[17] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[17]->f_1 = { 1929.981f, -1294.95f, 42f };
	Local_19[18] = "ent_amb_generic_fire_field_smoke";
	Local_19[18]->f_1 = { 1929.423f, -1297.452f, 40.94f };
	Local_19[19] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[19]->f_1 = { 1929.332f, -1299.335f, 42f };
	Local_19[20] = "ent_amb_generic_fire_field";
	Local_19[20]->f_1 = { 1926.691f, -1304.741f, 42f };
	Local_19[21] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[21]->f_1 = { 1924.386f, -1287.569f, 41.25f };
	Local_19[22] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[22]->f_1 = { 1934.887f, -1282.643f, 41.25f };
	Local_19[23] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[23]->f_1 = { 1934.175f, -1288.681f, 41.25f };
	Local_19[24] = "ent_amb_generic_fire_field";
	Local_19[24]->f_1 = { 1943.7f, -1290.295f, 41.25f };
	Local_19[25] = "ent_amb_generic_fire_field";
	Local_19[25]->f_1 = { 1883.25f, -1240.5f, 41.25f };
	Local_19[26] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[26]->f_1 = { 1884.1f, -1239.539f, 41.25f };
	Local_19[27] = "ent_amb_generic_fire_field";
	Local_19[27]->f_1 = { 1889.946f, -1225.296f, 41.25f };
	Local_19[28] = "ent_amb_generic_fire_field";
	Local_19[28]->f_1 = { 1899.524f, -1227.511f, 41.25f };
	Local_19[29] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[29]->f_1 = { 1896.586f, -1233.633f, 41.25f };
	Local_19[30] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[30]->f_1 = { 1894.156f, -1244.739f, 41.25f };
	Local_19[31] = "ent_amb_generic_fire_field";
	Local_19[31]->f_1 = { 1890.77f, -1242.07f, 41.25f };
	Local_19[32] = "ent_amb_generic_fire_field";
	Local_19[32]->f_1 = { 1902.875f, -1244.947f, 41.25f };
	Local_19[33] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[33]->f_1 = { 1904.97f, -1246.24f, 41.25f };
	Local_19[34] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[34]->f_1 = { 1879.71f, -1212.97f, 42.04f };
	Local_19[35] = "ent_amb_generic_fire_field";
	Local_19[35]->f_1 = { 1872.41f, -1212.49f, 42.06f };
	Local_19[36] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[36]->f_1 = { 1880.6f, -1223.4f, 42.21f };
	Local_19[37] = "ent_amb_generic_fire_field";
	Local_19[37]->f_1 = { 1929.277f, -1257.978f, 41.25f };
	Local_19[38] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[38]->f_1 = { 1931.329f, -1252.778f, 41.25f };
	Local_19[39] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[39]->f_1 = { 1922.45f, -1247.88f, 41.19f };
	Local_19[40] = "ent_amb_generic_fire_field";
	Local_19[40]->f_1 = { 1937.175f, -1238.535f, 41.25f };
	Local_19[41] = "ent_amb_generic_fire_field";
	Local_19[41]->f_1 = { 1940.458f, -1246.872f, 41.25f };
	Local_19[42] = "ent_amb_generic_fire_field_smoke";
	Local_19[42]->f_1 = { 1934.825f, -1233.654f, 40.8048f };
	Local_19[43] = "ent_amb_generic_fire_field";
	Local_19[43]->f_1 = { 1928.609f, -1230.984f, 40.8149f };
	Local_19[44] = "ent_amb_generic_fire_field";
	Local_19[44]->f_1 = { 1926.991f, -1227.241f, 40.9096f };
	Local_19[45] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[45]->f_1 = { 1920.667f, -1238.667f, 40.891f };
	Local_19[46] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[46]->f_1 = { 1908.395f, -1239.765f, 41.1811f };
	Local_19[47] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[47]->f_1 = { 1910.051f, -1232.456f, 41.2506f };
	Local_19[48] = "scr_brt2_firesmoke_field";
	Local_19[48]->f_1 = { 1909.43f, -1261.56f, 44f };
	Local_19[49]->f_1 = { 1833.908f, -1276.66f, 42.25f };
	Local_19[49] = "scr_brt2_fire_roof";
	Local_19[49]->f_4 = { 0f, 0f, 55f };
	Local_19[50]->f_1 = { 1837.839f, -1275.031f, 42.25f };
	Local_19[50] = "scr_brt2_fire_roof";
	Local_19[51]->f_1 = { 1836.424f, -1275.242f, 42.25f };
	Local_19[51] = "scr_brt2_fire_roof";
	Local_19[51]->f_7 = 0.7f;
	Local_19[52]->f_1 = { 1833.969f, -1272.529f, 42.25f };
	Local_19[52] = "scr_brt2_fire_roof";
	Local_19[53]->f_1 = { 1834.613f, -1272.529f, 42.25f };
	Local_19[53] = "scr_brt2_fire_roof";
	Local_19[53]->f_7 = 0.7f;
	Local_19[54]->f_1 = { 1836.333f, -1273.839f, 42.25f };
	Local_19[54] = "scr_brt2_fire_roof";
	Local_19[54]->f_4 = { 0f, 0f, -0.76f };
	Local_19[55]->f_1 = { 1831.993f, -1279.635f, 42.25f };
	Local_19[55] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[55]->f_4 = { 0f, 0f, 100f };
	Local_19[56]->f_1 = { 1830.964f, -1278.585f, 42.25f };
	Local_19[56] = "scr_brt2_fire_roof";
	Local_19[56]->f_7 = 0.7f;
	Local_19[57]->f_1 = { 1829.634f, -1276.956f, 45.765f };
	Local_19[57] = "scr_brt2_fire_roof";
	Local_19[58]->f_1 = { 1836.749f, -1276.813f, 48.12f };
	Local_19[58] = "ent_amb_falling_embers";
	Local_19[59]->f_1 = { 1830.366f, -1274.423f, 51.5f };
	Local_19[59] = "scr_brt2_fire_roof";
	Local_19[60]->f_1 = { 1837.817f, -1278.222f, 48.677f };
	Local_19[60] = "scr_brt2_fire_win";
	Local_19[60]->f_4 = { 0f, 0f, 60f };
	Local_19[60]->f_7 = 1.5f;
	Local_19[61]->f_1 = { 1838.397f, -1278.578f, 50.9f };
	Local_19[61] = "scr_brt2_fire_win";
	Local_19[61]->f_4 = { 0f, 0f, 60f };
	Local_19[61]->f_7 = 0.8f;
	Local_19[62]->f_1 = { 1834.637f, -1277.732f, 51.742f };
	Local_19[62] = "scr_brt2_fire_roof";
	Local_19[62]->f_7 = 0.5f;
	Local_19[63]->f_1 = { 1833.666f, -1275.347f, 52.15f };
	Local_19[63] = "ent_amb_generic_fire_up";
	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		Local_19[iVar0]->f_10 = start_particle_fx_looped_at_coord(&(Local_19[iVar0]), Local_19[iVar0]->f_1, Local_19[iVar0]->f_4, Local_19[iVar0]->f_7, false, false, false, false);
		if (are_strings_equal(&(Local_19[iVar0]), "ent_amb_generic_fire_field") || are_strings_equal(&(Local_19[iVar0]), "ent_amb_generic_fire_field_nosmoke"))
		{
			Local_19[iVar0]->f_9 = 1f;
			set_particle_fx_looped_evolution(Local_19[iVar0]->f_10, "spread", Local_19[iVar0]->f_9, false);
		}
		set_particle_fx_looped_evolution(Local_19[iVar0]->f_10, "strength", Local_19[iVar0]->f_8, false);
		iVar0++;
	}
	if (!does_particle_fx_looped_exist(iVar722))
	{
		iLocal_724 = start_particle_fx_looped_at_coord("ent_amb_generic_fire_field_glow", 1888.38f, -1298.95f, 41.96f, 0f, 0f, 0f, 1f, false, false, false, false);
		set_particle_fx_looped_evolution(iVar722, "strength", 1f, false);
	}
}

bool func_55(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!func_15(iParam0[iVar1]))
		{
			(*uParam1)[iVar1] = func_101(iParam0[iVar1], bParam2, iParam3, 0, 0, 0, 0, bParam4, 1, 0, bParam5, 0, 0, 0, 0, bParam6, 0, 1, 1, 1, 0, 0, 1, bParam7, 1);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (uParam1[iVar1] == 0)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	set_current_ped_weapon(&(uLocal_729[0]), -1569615261, false, 0, false, false);
	if (!is_entity_dead(&(iLocal_833[0])))
	{
		clear_ped_tasks(&(iLocal_833[0]), 1, 0);
	}
	if (bVar851)
	{
		func_102();
	}
	func_103(&uLocal_735, &(uLocal_729[0]), "SEAN", 0);
	func_103(&uLocal_735, Global_35, "ARTHUR", 0);
	set_blocking_of_non_temporary_events(&(uLocal_729[0]), true);
	set_blocking_of_non_temporary_events(&(iLocal_833[0]), true);
}

void func_57(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		set_ped_relationship_group_hash(iParam0, -1538724068);
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!is_entity_dead(iParam1[iVar0]))
		{
			set_ped_relationship_group_hash(iParam1[iVar0], -1538724068);
		}
		iVar0++;
	}
}

bool func_58(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (!Global_1935630->f_12)
	{
		if (bParam1 && func_59(iParam0, Global_35, 1) < 22500f)
		{
			return false;
		}
		if (bParam2 && has_entity_clear_los_to_entity(Global_35, iParam0, 17))
		{
			return false;
		}
	}
	return true;
}

float func_59(int iParam0, int iParam1, bool bParam2)
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
	return func_104(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_60(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		iVar0 = (*Global_1360165)[iParam0]->f_2;
	}
	return iVar0;
}

bool func_61(int iParam0)
{
	if (is_entity_dead(&(uLocal_729[iParam0])))
	{
		return false;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.3f;
			break;
	}
	if (func_105(&uLocal_846, fVar0))
	{
		set_current_ped_weapon(&(uLocal_729[iParam0]), -1569615261, true, 0, false, false);
		return true;
	}
	return false;
}

float func_62(var uParam0)
{
	if (!func_81(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_106(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_107() - uParam0->f_1);
}

void func_63(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_108(Global_35) && is_player_teleport_active())
	{
	}
	if (func_109(iParam0))
	{
		if (func_110(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_86(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_63(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_63(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_86(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_86(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_86(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_86(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_86(iParam5, 129))
	{
		if (func_86(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_86(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_86(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_86(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_109(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_86(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_86(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_111(iParam2, 1))
			{
				set_entity_invincible(iParam1, true);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, true);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, true);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 1);
			break;
		case 1:
			if (!func_111(iParam2, 4))
			{
				iVar0 = _create_volume_box(_get_object_offset_from_coords(get_entity_coords(iParam1, true, false), get_entity_heading(iParam1), 0f, (fParam6 * 0.5f), 0f), 0f, 0f, get_entity_heading(iParam1), iParam5, fParam6, 10f);
				_0x2fcd528a397e5c88(iVar0, 1064968);
				_delete_volume(iVar0);
			}
			break;
		case 2:
			if (!func_111(iParam2, 8))
			{
				if (!is_entity_dead(iParam3))
				{
					if (!func_112(iParam1, iParam3, 1))
					{
						_set_ped_on_mount(iParam1, iParam3, -1, true);
					}
				}
				else if (!is_entity_dead(iParam4))
				{
					if (!is_ped_on_specific_vehicle(iParam1, iParam4))
					{
						set_ped_into_vehicle(iParam1, iParam4, -1);
					}
				}
			}
			if (!func_111(iParam2, 16))
			{
				if (is_ped_on_mount(iParam1))
				{
					disable_control_action(0, -874806616, false);
				}
				else if (is_ped_in_any_vehicle(iParam1, false))
				{
					disable_control_action(0, -17122892, false);
				}
			}
			break;
		case 3:
			if (!func_111(iParam2, 2))
			{
				set_entity_invincible(iParam1, false);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, false);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, false);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 0);
			break;
	}
}

void func_65(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			waypoint_playback_override_speed(iParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

int func_66(var uParam0)
{
	if (!func_81(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_106(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_113() - round((uParam0->f_1 * 1000f)));
}

int func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return 1;
	}
	if (func_115(32768))
	{
		return 1;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return 1;
	}
	iVar0 = func_117(func_116(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 1;
	}
	if (!func_118(func_116(iParam0)))
	{
		func_119(iParam0, 0, 0, -1);
	}
	if (func_120(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_121(iVar0, 256);
			}
			if (bParam2)
			{
				func_121(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_122(iParam0))
	{
		return 1;
	}
	if (!func_123(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		func_124(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_125((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_126(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_125((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_126(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_125((*Global_1347702)[iParam0]->f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!func_127(iParam0))
	{
		func_128((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_129((*Global_1347702)[iParam0]->f_15))
	{
		func_130((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_125((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_126(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return 0;
}

bool func_69(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_70(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_131(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_131(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_52(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_132(sParam1))
			{
				return true;
			}
		}
		else if (func_133(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_71()
{
	if (bVar851)
	{
		if (func_135(Global_35, func_134(105), 1, 0))
		{
			fVar0 = 1.501f;
		}
		else
		{
			fVar0 = 1.75f;
		}
		func_136(&(uLocal_729[0]), fVar0, 0, 1045220557, 1, 3f, (30f / 2f), (60f / 2f), 1033476506, 1061158912, 1, 0, 1045220557, 0);
		if (func_131(Global_35, &(uLocal_729[0]), 1, 1) > 80f)
		{
			func_75();
			func_52(&uLocal_846);
			iLocal_853 = 0;
		}
		if (iVar852 <= 2)
		{
			if (func_62(&uLocal_846) > 20f)
			{
				StringCopy(&cVar1, "BRT2_OUT_", 16);
				StringIntConCat(&cVar1, iVar852, 16);
				if (func_70(&uLocal_735, &cVar1, &(uLocal_729[0]), Global_35, 0, 0, 1, 1))
				{
					iLocal_854 = iVar852 + 1;
					func_52(&uLocal_846);
				}
			}
		}
	}
	else if (func_62(&uLocal_846) > 10f && func_131(Global_35, &(uLocal_729[0]), 1, 1) < 10f)
	{
		if (func_70(&uLocal_735, "BRT2_OUT_S", &(uLocal_729[0]), Global_35, 0, 0, 1, 1))
		{
			func_102();
			func_52(&uLocal_846);
			func_51(8);
			iLocal_733 = 1;
			iLocal_853 = 1;
		}
	}
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_73(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!is_entity_dead(&(uLocal_729[iVar0])))
		{
			iLocal_731[iVar0] = iParam0;
		}
		iVar0++;
	}
}

float func_74(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_75()
{
	if (does_group_exist(iVar732))
	{
		remove_group(iVar732);
	}
	if (func_33(&(uLocal_729[0]), 0) && _0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x0c6b89876262a99d(get_player_index(), &(uLocal_729[0]));
	}
}

bool func_76(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (func_137(iParam0, vParam1, 1) < fParam5)
	{
		clear_ped_tasks(iParam0, 1, 0);
		return true;
	}
	if (get_script_task_status(iParam0, 713668775, true) > 1)
	{
		clear_ped_tasks(iParam0, 1, 0);
		task_follow_nav_mesh_to_coord(iParam0, vParam1, fParam4, -1, 0.25f, 4, 40000f);
	}
	return false;
}

bool func_77(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (func_138(iParam0))
	{
		if (get_script_task_status(iParam0, 501393341, true) > 1)
		{
			clear_ped_tasks(iParam0, 1, 0);
			task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		clear_ped_tasks(iParam0, 1, 0);
		return true;
	}
	return false;
}

bool func_78(int iParam0, vector3 vParam1, float fParam4)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (func_139(iParam0, vParam1, fParam4, 0))
	{
		return true;
	}
	return false;
}

bool func_79(int iParam0)
{
	return iParam0 > -1;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_81(var uParam0)
{
	return func_140(*uParam0, 1);
}

bool func_82(int iParam0)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_83(int iParam0)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	if (!func_79(iParam0))
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

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (func_33(iVar0, 0))
	{
		if (func_33(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_82(iParam0)) || func_83(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_59(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_141(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_142(iParam0);
					_0x7b204f88f6c3d287(func_143(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_143(iParam0, 0));
					func_144(iParam0);
				}
			}
			else
			{
				if (func_36(iParam0, 32768, 1))
				{
					iVar2 = func_143(iParam0, 0);
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
			if (func_36(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_142(iParam0);
				_0x7b204f88f6c3d287(func_143(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_143(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_142(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_145(iParam0, 0);
	return 1;
}

bool func_86(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_90(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_91(var uParam0, int iParam1, bool bParam2)
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

void func_92(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_146(iParam0);
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

int func_93(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_94(int iParam0)
{
	if (func_14(iParam0))
	{
		if (does_entity_exist(func_93(iParam0)))
		{
			func_147(iParam0, 67108864, 1);
			func_40(iParam0, 19, 1);
		}
	}
}

float func_95(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_96(int iParam0)
{
	iVar0 = func_93(iParam0);
	iVar1 = func_41(iParam0, 0);
	func_148(iParam0, iVar0);
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

bool func_97(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_98(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_107() - fParam1);
	func_149(uParam0, 1);
	func_150(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_101(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_14(iParam0))
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
			if (func_42(iParam0, 2, 1))
			{
				func_40(iParam0, 2, 1);
			}
			if (func_36(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_28(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_13(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_33(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_33(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_151(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_28(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_152(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_28(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_152(iParam0, 1);
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
			if (!func_42(iParam0, 44, 0))
			{
				func_28(iParam0, 44, 0);
			}
			if (func_153(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_152(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_40(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_44(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_154(iParam0, 0, 0, 1);
			}
			func_40(iParam0, 33, 1);
			func_40(iParam0, 34, 1);
			func_40(iParam0, 29, 1);
			if (!func_155(vVar0) && bParam7)
			{
				func_152(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_152(iParam0, 4);
			}
			else
			{
				func_152(iParam0, 5);
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
						func_151(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_63(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
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
				func_152(iParam0, 4);
			}
			else
			{
				func_152(iParam0, 5);
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
				if (func_156(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_157(iParam0, iParam13, 0);
						func_158(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_42(iParam0, 25, 0))
						{
							func_40(iParam0, 25, 0);
						}
						func_28(iParam0, 66, 0);
						func_152(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_152(iParam0, 5);
				}
				func_28(iParam0, 28, 1);
			}
			else
			{
				func_152(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_152(iParam0, 6);
			}
			break;
		case 6:
			if (func_33(Global_1360165[iParam0], 0))
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
					func_159(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_160(Global_1360165[iParam0], 1);
				}
			}
			func_152(iParam0, 7);
		case 7:
			func_44(iParam0, bParam9, bParam15, 0);
			func_38(iParam0, 4, bParam11);
			func_39(iParam0);
			if (bParam20)
			{
				if (func_161(Global_1360165[iParam0]))
				{
				}
			}
			func_162(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_152(iParam0, 0);
			func_147(iParam0, 16, 1);
			func_40(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_102()
{
	iLocal_734 = create_group(0);
	set_group_formation(iVar732, 10);
	set_ped_config_flag(&(uLocal_729[0]), 279, true);
	set_ped_as_group_leader(&(uLocal_729[0]), iVar732, false);
	_0xac22aa6df4d1c1de(get_player_index(), &(uLocal_729[0]), -1082130432, -1082130432, 1, 2, 0);
}

void func_103(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_163(uParam0, iParam1, sParam2))
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

float func_104(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_105(var uParam0, float fParam1)
{
	if (!func_81(uParam0))
	{
		return false;
	}
	if (func_62(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_106(var uParam0)
{
	return func_140(*uParam0, 2);
}

float func_107()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_108(var uParam0)
{
	return uParam0;
}

bool func_109(int iParam0)
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

bool func_110(int iParam0)
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

bool func_111(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_112(int iParam0, int iParam1, bool bParam2)
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

int func_113()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_114(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_115(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_117(int iParam0)
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

bool func_118(int iParam0)
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
		iVar0 = func_164(iParam0);
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

int func_119(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	if ((func_166((*Global_1347702)[59]->f_15, 1) && !func_166((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_167(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_168(iParam0)) && !Global_43891)
		{
			func_170(iParam0, vdist2(func_169(iParam0), Global_36), -1, 1, 1);
			func_171((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_173(func_172(iParam0), func_116(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_174(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_175(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_177(Global_35, func_176(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_176(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_176(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_128((*Global_1835011)[iParam0]->f_1);
	if (!func_120(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_178(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_130((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_179(4);
	}
	return 1;
}

bool func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_121(int iParam0, int iParam1)
{
	if (!func_120(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

bool func_122(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_123(int iParam0, bool bParam1)
{
	if (func_180() != -1)
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

int func_124(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_181((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_166((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_181((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_166((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_182(iParam0);
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_127(int iParam0)
{
	if (func_180() != -1)
	{
		return false;
	}
	if (!func_122(iParam0))
	{
		return false;
	}
	return func_118((*Global_1347702)[iParam0]->f_15);
}

int func_128(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_183(iParam0))
	{
		return -1;
	}
	if (func_180() != -1)
	{
		iVar2 = func_117(iParam0);
		if (iVar2 >= 0)
		{
			func_184(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_185(iVar1, 1);
			func_184(iParam0, 1);
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
		iVar2 = func_117(iParam0);
		if (iVar2 >= 0)
		{
			func_184(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_97(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_185(iVar0, 1);
					func_184(iParam0, 1);
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

bool func_129(int iParam0)
{
	return func_186(iParam0) == 2;
}

void func_130(int iParam0)
{
	func_187(iParam0);
}

float func_131(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_132(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_133(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_188(cParam1, cParam0);
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

int func_134(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

bool func_135(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_136(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
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
				set_up_speed_restrain_information_for_player_follower(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
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

float func_137(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_104(vVar0, vParam1);
}

bool func_138(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_139(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	func_190(vParam1, fParam4, 0);
	clear_ped_tasks(iParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = _find_closest_active_scenario_point_of_type(vParam1, iVar0, fParam4, 1, false);
	if (_does_scenario_point_exist(iVar1))
	{
		_task_use_scenario_point(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		task_stand_still(iParam0, -1);
	}
	return true;
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_141(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_191(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_142(int iParam0)
{
	iVar0 = func_49(iParam0);
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

int func_143(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_192(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_144(int iParam0)
{
	if (!func_79(iParam0))
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

void func_145(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_146(int iParam0)
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

void func_147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_148(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_193(iParam1);
	}
}

void func_149(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_151(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_93(iParam0);
	if (!func_14(iParam0) || is_entity_dead(iVar0))
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

void func_152(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_153(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_79(iParam0))
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
					iParam4 = func_194(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_118((*Global_1360165)[iParam0]->f_4.f_2) || func_195((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_194(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_196((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_197(iParam0, 0))
					{
						func_28(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_198(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_40(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_33(func_93(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_33(func_49(iParam0), 0))
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

void func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_199(iParam0, bParam3);
	}
	else
	{
		func_200(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_201(iParam0, bParam3);
	}
	else
	{
		func_202(iParam0, bParam3);
	}
}

bool func_155(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_203(iParam0, iParam1);
	return bVar0;
}

void func_157(int iParam0, int iParam1, bool bParam2)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (!func_156(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_28(iParam0, 25, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_204(iParam2))
		{
			iVar0 = func_205(iParam2, -1);
			if (func_206(iParam1, iVar0))
			{
				if (func_207(iParam1, iVar0))
				{
					if (func_208(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_209(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_210(iParam0, iParam1, 0);
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
			func_28(iParam0, 66, 0);
		}
	}
}

void func_159(int iParam0)
{
	func_211(iParam0);
	func_212(iParam0, 0);
}

void func_160(int iParam0, int iParam1)
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

bool func_161(int iParam0)
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

void func_162(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_213(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_213(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_163(var uParam0, int iParam1, char* sParam2)
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

int func_164(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_214(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_165(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_183((*Global_1835011)[iParam0]->f_1);
}

bool func_166(int iParam0, bool bParam1)
{
	switch (func_186(iParam0))
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

bool func_167(int iParam0, bool bParam1, bool bParam2)
{
	if (func_215(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_168(int iParam0)
{
	return func_216(iParam0);
}

Vector3 func_169(int iParam0)
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

int func_170(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_115(32768))
	{
		return 0;
	}
	iVar0 = func_180();
	if ((bParam4 && func_217(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_217(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_218())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_219(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_166((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_220()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_166((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_220()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_166((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_221(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_222((*Global_1835011)[iParam0], 2))
			{
				if (func_223(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_224(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_225(iParam0));
				}
			}
			else if (func_223(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_224(iParam0), func_226(iParam0), func_227(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_228(iParam0), func_229(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_223(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_169(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_224(iParam0));
				bVar2 = true;
			}
		}
		else if (func_168(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_225(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_225(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_225(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_223(iParam0))
			{
				func_121(iParam2, 4194304);
			}
			else
			{
				func_230(iParam2, 4194304);
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
		if (!func_217(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_168(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_231(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_168(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_222((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_232(Global_40.f_4283);
	if (func_189(iVar4) && func_233((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_234(iVar4);
	}
	if (func_235(iParam0, bVar5, iVar4))
	{
		func_236((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_237(579))
	{
		func_238(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_217(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_217(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_220()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_239(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_221(iParam0, iVar0) || (fParam1 >= (func_240(iParam0) * func_240(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_241(&cVar7, 10000, 0, 0, 0, 1);
			func_231(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

void func_171(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_172(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_180() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_242(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_243(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_147(iVar0, 512, 1);
			}
			else
			{
				func_48(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_174(bool bParam0)
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
						if (func_181((*Global_1347702)[iVar1]->f_12, 1))
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
							if (func_114(iVar2) && !func_216(iVar2))
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

bool func_175(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_172(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_244(iVar1, &iVar0))
		{
			iVar2 = func_93(func_245(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_42(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_42(iVar1, 47, 1))
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

Vector3 func_176(int iParam0)
{
	return func_225(iParam0);
}

bool func_177(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_104(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_178(int iParam0)
{
	iVar0 = func_172(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_244(iVar1, &iVar0))
		{
			iVar2 = func_93(func_245(iParam0));
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

void func_179(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_180()
{
	return Global_1572887->f_12;
}

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_182(int iParam0)
{
	if (func_246(iParam0))
	{
		return 0;
	}
	if (func_123(iParam0, 0))
	{
		func_247(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_247(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_183(int iParam0)
{
	return func_186(iParam0) == 0;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_248(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_248(iParam0)))
		{
			_0xca41e86545413b5b(func_249(iParam0), func_250(iParam0), func_251(iParam0), func_248(iParam0), Global_36);
		}
	}
	func_252(iParam0, 1);
	bParam1 = bParam1;
}

void func_185(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_253(Global_1898330[iParam0]);
		func_254((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_186(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_164(iParam0);
}

void func_187(int iParam0)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	func_252(iParam0, 2);
}

void func_188(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_189(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_190(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_191(int iParam0)
{
	iVar0 = 0;
	if (!func_79(iParam0))
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
	if (!func_79(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_192(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_141(iParam0, 1);
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

void func_193(int iParam0)
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

int func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_79(iParam0))
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
					if (func_166((*Global_1835011)[4]->f_1, 1))
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
					if (func_255(iVar0, 9, 11))
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
					if (func_166((*Global_1347702)[63]->f_15, 1) || func_195((*Global_1347702)[63]->f_15))
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
					if (func_255(iVar0, 9, 12))
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
					if (!func_166((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_36(18, 134217728, 1))
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
					if (func_255(iVar0, 9, 11))
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
					if (func_166((*Global_1347702)[134]->f_15, 1) || func_195((*Global_1347702)[134]->f_15))
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
					if (func_166((*Global_1835011)[38]->f_1, 1))
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
					if (func_255(iVar0, 9, 11))
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
					if (func_256(747937920, 1) && !func_166((*Global_1347702)[1]->f_15, 1))
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
	if (bParam3 && does_entity_exist(func_93(iParam0)))
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
	if (!func_156(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_195(int iParam0)
{
	iVar0 = func_186(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_196(int iParam0)
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

bool func_197(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_12(iParam0) || func_42(iParam0, 44, 1))
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

struct<7> func_198(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_199(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_257(iVar0);
	func_28(iParam0, 60, 1);
	if (bParam1)
	{
		func_258(iParam0);
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_259(iVar0);
	func_40(iParam0, 60, 1);
	if (bParam1)
	{
		func_260(iParam0);
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_261(iVar0);
	if (iParam0 == 14)
	{
		func_262(iVar0);
	}
	func_28(iParam0, 61, 1);
	if (bParam1)
	{
		func_263(iParam0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_264(iVar0);
	func_40(iParam0, 61, 1);
	if (bParam1)
	{
		func_265(iParam0);
	}
}

bool func_203(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	func_266(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_204(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_205(int iParam0, int iParam1)
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
			iVar0 = func_267(296923297, iParam1);
			return func_268(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_267(1237718549, iParam1);
			return func_268(iVar0);
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

bool func_206(int iParam0, int iParam1)
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

bool func_207(int iParam0, int iParam1)
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

bool func_208(int iParam0, int iParam1)
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
	if (!func_206(iParam0, iVar0))
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

void func_209(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_210(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_206(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_206(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_206(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_206(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_206(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_206(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_206(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_206(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_206(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_206(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_206(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_206(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_206(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_206(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_206(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_206(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_206(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_206(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_206(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_206(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_206(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_206(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_206(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_206(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_206(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_206(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_211(int iParam0)
{
	func_269(iParam0, 1);
	func_269(iParam0, 128);
	func_269(iParam0, 256);
	func_269(iParam0, 512);
	func_269(iParam0, 1024);
	func_269(iParam0, 2048);
	func_269(iParam0, 4096);
	func_269(iParam0, 65536);
	func_269(iParam0, 16384);
	func_269(iParam0, 262144);
	func_269(iParam0, 524288);
	func_269(iParam0, 1048576);
	func_269(iParam0, 2097152);
	func_269(iParam0, 32768);
	func_269(iParam0, 131072);
	func_269(iParam0, 134217728);
	func_269(iParam0, 1073741824);
}

void func_212(int iParam0, bool bParam1)
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

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_270(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_270(iVar4) && iVar4 != iVar0)
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
	if (func_180() == -1 && !func_271(iVar0))
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
				if (func_271(-183018591))
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
		if (iParam0 != Global_35 && func_270(iVar0))
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
		func_272(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_273(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_274(iVar0))
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

int func_214(int iParam0)
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

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_275(bParam1, bParam2, bParam3);
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

bool func_216(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_217(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_218()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_219(int iParam0)
{
	if (func_180() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_166((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_166((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

int func_220()
{
	return &Global_1898438;
}

bool func_221(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_223(iParam0))
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

bool func_222(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_223(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_276((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_224(int iParam0)
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

Vector3 func_225(int iParam0)
{
	if (func_223(iParam0))
	{
		return func_224(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

Vector3 func_226(int iParam0)
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

int func_227(int iParam0)
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

Vector3 func_228(int iParam0)
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

float func_229(int iParam0)
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

void func_230(int iParam0, int iParam1)
{
	if (!func_120(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_232(int iParam0)
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

bool func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_234(int iParam0)
{
	if (!func_277(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_278(iParam0))
		{
			if (vdist(Global_36, func_279(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_279(iParam0), false) <= func_280();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_280();
	}
	return func_281();
}

bool func_235(int iParam0, bool bParam1, int iParam2)
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

void func_236(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_97(iParam0))
	{
		return;
	}
	switch (func_249(iParam0))
	{
		case 1:
			iVar0 = func_250(iParam0);
			if (func_282(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_221(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_221(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_168(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_222((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_250(iParam0);
			if (func_283(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_284(iVar1))
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
				iVar2 = func_284(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_285(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_237(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_180() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_238(int iParam0, var uParam1, bool bParam2)
{
	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_288(iParam0, 1024))
	{
		return;
	}
	func_289(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_239(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_240(int iParam0)
{
	return (func_229(iParam0) / 2f);
}

var func_241(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_242(int iParam0, bool bParam1, bool bParam2)
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
		if (func_290())
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
		iVar0 = func_250(&(Global_1898164->f_1[0]));
		if (func_122(iVar0) && func_181((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_97(&(Global_1898164->f_1[0])))
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

bool func_243(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(iVar0, &iParam0))
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

bool func_244(int iParam0, int iParam1)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	iVar0 = func_291(iParam0);
	return (*iParam1 && iVar0) != 0;
}

int func_245(int iParam0)
{
	if (!func_114(iParam0))
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

bool func_246(int iParam0)
{
	if (func_180() != -1)
	{
		return false;
	}
	if (!func_122(iParam0))
	{
		return false;
	}
	return func_166((*Global_1347702)[iParam0]->f_15, 1);
}

void func_247(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_14(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_292(&iVar0, func_291(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_126(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_173(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_293()))
			{
				func_126(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_126(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

int func_248(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_249(int iParam0)
{
	if (!func_97(iParam0))
	{
		return 0;
	}
	return func_294(func_253(iParam0));
}

int func_250(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_295(func_253(iParam0));
}

int func_251(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_296(func_253(iParam0));
}

void func_252(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	func_297(iParam0, iParam1);
}

int func_253(int iParam0)
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

void func_254(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_294(iParam0);
	*uParam1 = func_295(iParam0);
	*uParam2 = func_296(iParam0);
}

bool func_255(int iParam0, int iParam1, int iParam2)
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

bool func_256(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_298(iParam0);
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

void func_257(int iParam0)
{
	if (func_299(iParam0, 0))
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

void func_258(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_257(iVar0);
	func_84(iParam0, 8192, 1);
}

void func_259(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_260(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_259(iVar0);
	func_84(iParam0, 8192, 0);
}

void func_261(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_262(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_12(14))
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

void func_263(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_261(iVar0);
	func_84(iParam0, 16384, 1);
}

void func_264(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_265(int iParam0)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_264(iVar0);
	func_84(iParam0, 16384, 0);
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_300(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_267(int iParam0, int iParam1)
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
		if (func_156(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_268(int iParam0)
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

void func_269(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_270(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_271(int iParam0)
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

int func_272(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_301(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_302((386 + iVar28), 1);
			if (func_303(iParam0, &Var0, iVar5, 0))
			{
				if (func_304(iParam0, &Var6, iVar5))
				{
					Var29 = { func_305(iParam0, Var0, iVar5, 0) };
					func_306(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_307(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_308(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_309(iParam0, iParam1);
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

void func_273(int iParam0, int iParam1, float fParam2)
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

bool func_274(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_275(bool bParam0, bool bParam1, bool bParam2)
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

bool func_276(var uParam0)
{
	if (func_217(&(uParam0->f_29), 62))
	{
		switch (func_310())
		{
			case 1:
				if (!func_217(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_217(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_217(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_217(&(uParam0->f_29), 32))
				{
					if (func_217(&(uParam0->f_29), 2))
					{
						if (func_312(func_311()) < 5)
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

bool func_277(int iParam0)
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

bool func_278(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_279(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_280()
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

bool func_281()
{
	return Global_1894899 & 2 != 0;
}

bool func_282(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_235(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_283(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_313(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_284(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_122(iParam0))
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

void func_285(int iParam0)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_314(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	if (func_316(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_288(iParam0, 1)) || func_115(32768))
	{
		if (!func_288(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_317())
	{
		return false;
	}
	return true;
}

bool func_288(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_289(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_290()
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

int func_291(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_292(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_293()
{
	return Global_40.f_4283.f_1;
}

int func_294(int iParam0)
{
	return iParam0 & 31;
}

int func_295(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_296(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_318(iParam0);
	}
	else
	{
		func_319(iParam0, iParam1);
	}
	func_320();
}

bool func_298(int iParam0)
{
	func_321(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_299(int iParam0, bool bParam1)
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

int func_300(int iParam0, int iParam1)
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

struct<5> func_301(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_322(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_323(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_305(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_324(bParam1) };
			if (bParam2 && func_325(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_303(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_303(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_304(iParam0, &Var5, 1728382685))
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
			Var0 = { func_326(bParam1) };
			switch (func_327(iParam0))
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
			if (func_328(iParam0, -1823706425))
			{
				Var0 = { func_305(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_328(iParam0, -1483207246))
			{
				Var0 = { func_305(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_329(Var0, &Var27, bParam1, 0))
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

int func_302(int iParam0, int iParam1)
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

bool func_303(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_330(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_304(int iParam0, var uParam1, int iParam2)
{
	if (func_331(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_305(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_332(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_333(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_306(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_334(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_329(*uParam1, &Var0, bParam6, 0))
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
	if (!func_307(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_333(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_307(bool bParam0)
{
	if (func_180() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_333(bParam0));
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_335(iParam0))
	{
		return 0;
	}
	if (!func_307(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_309(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_336(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_310()
{
	return &Global_1899516;
}

int func_311()
{
	return &Global_1899515;
}

int func_312(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_313(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

bool func_314(int iParam0, int iParam1)
{
	if (func_180() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_315(int iParam0)
{
	if (func_180() != -1)
	{
		if (func_288(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_288(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_316(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_288(iParam0, 65536) && !func_288(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_288(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_288(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_317()
{
	return Global_1905944->f_5694;
}

int func_318(int iParam0)
{
	iVar0 = func_214(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_337(iVar0);
}

int func_319(int iParam0, int iParam1)
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
			func_338(iVar2);
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

void func_320()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_321(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_339(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

struct<4> func_322(bool bParam0)
{
	return func_305(1328661203, func_340(), -1591664384, bParam0);
}

int func_323(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_324(bool bParam0)
{
	iVar0 = func_333(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_305(923904168, func_322(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_305(923904168, func_322(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_305(923904168, func_322(bParam0), -740156546, 0);
}

bool func_325(int iParam0, bool bParam1)
{
	if (func_327(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_341(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_326(bool bParam0)
{
	iVar0 = func_333(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_305(271701509, func_322(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_305(271701509, func_322(bParam0), 12999093, 0);
}

int func_327(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_328(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_327(iParam0);
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

bool func_329(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_333(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_330(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_305(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_333(bParam6), &Var0, 0);
	return uVar4;
}

bool func_331(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_333(0);
	*uParam1 = { func_305(iParam0, func_324(0), iParam3, 0) };
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

bool func_332(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_333(bool bParam0)
{
	if (func_180() == -1)
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

bool func_334(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_336(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_337(int iParam0)
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

int func_338(int iParam0)
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

int func_339(int iParam0, int iParam1)
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

struct<4> func_340()
{
	return Var0;
}

bool func_341(int iParam0)
{
	if (!func_342(iParam0))
	{
		return false;
	}
	return func_343(iParam0);
}

bool func_342(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_343(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

