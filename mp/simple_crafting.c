void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (((func_1(0, 0, 1) && !func_2()) || func_3(0)) || func_4(0, 0))
	{
		Global_1913694->f_1582 = 0;
		terminate_this_thread();
	}
	bVar0 = Local_96.f_3;
	if (Local_96.f_4)
	{
		Local_21.f_11 = 0;
		func_5(&Local_21, 2);
	}
	else
	{
		Local_21.f_11 = -1640690034;
		func_6(&Local_21, 2);
	}
	if (has_force_cleanup_occurred(523))
	{
		iLocal_19 = 3;
	}
	while (true)
	{
		if (func_7())
		{
			iLocal_19 = 3;
		}
		disable_control_action(0, -209515122, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -2131587435, false);
		disable_control_action(0, -124244224, false);
		disable_control_action(0, -1453452184, false);
		disable_control_action(0, -822242784, false);
		disable_control_action(0, -1582581421, false);
		disable_control_action(0, -874806616, false);
		disable_control_action(0, -455946723, false);
		switch (iLocal_19)
		{
			case 0:
				if (Local_21.f_11 != -1640690034)
				{
				}
				else
				{
					reserve_network_client_mission_objects(2);
				}
				disable_all_control_actions(0);
				func_5(&Local_21, 8);
				func_5(&Local_21, 16);
				func_8(&Local_21, 2);
				iLocal_19 = 2;
				break;
			case 1:
				if ((!is_ped_active_in_scenario(Global_34, 0) && !has_anim_event_fired(Global_34, -1208591336)) && !func_9(Global_34))
				{
					disable_control_action(0, -822242784, false);
					if (!ped_has_use_scenario_task(Global_34))
					{
						if (func_9(Global_34))
						{
							_hide_ped_weapons(Global_34, 2, false);
							bLocal_20 = true;
							iLocal_19 = 2;
						}
						else if (!is_ped_on_mount(Global_34) && is_ped_on_foot(Global_34))
						{
							if (bVar0)
							{
								iLocal_19 = 3;
							}
							else if (!func_10(Global_34, 993674639))
							{
								bVar1 = true;
								if (func_11(0) || func_11(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									_0xd65fdc686a031c83(Global_34, -1955932021, 2f);
								}
								if (is_ped_male(Global_34))
								{
									_task_start_scenario_in_place(Global_34, -1241981548, 0, true, 254049387, -1f, false);
								}
								else
								{
									_task_start_scenario_in_place(Global_34, -1241981548, 0, true, -1451987280, -1f, false);
								}
							}
						}
					}
				}
				else
				{
					bLocal_20 = true;
					iLocal_19 = 2;
				}
				break;
			case 2:
				func_12(&Local_21, 0);
				if (func_13(&Local_21) != 0)
				{
					if (func_13(&Local_21) == 12)
					{
						if (((!bLocal_20 && !is_ped_active_in_scenario(Global_34, 0)) && !has_anim_event_fired(Global_34, -1208591336)) && !func_9(Global_34))
						{
							iLocal_19 = 1;
						}
						else
						{
							bLocal_20 = true;
						}
					}
				}
				else
				{
					iLocal_19 = 3;
				}
				break;
			case 3:
				func_14(&Local_21, 0, 1);
				terminate_this_thread();
				break;
		}
		wait(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_15())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_17(func_16(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_18(func_16(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_2()
{
	return Global_1913694->f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5(var uParam0, int iParam1)
{
	func_19(uParam0, iParam1);
}

void func_6(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

bool func_7()
{
	if (func_4(0, 0))
	{
		return true;
	}
	if (func_3(0))
	{
		return true;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return true;
	}
	if (func_21())
	{
		return true;
	}
	if (is_entity_dead(player_ped_id()))
	{
		return true;
	}
	if (_is_ped_hogtied(player_ped_id()))
	{
		return true;
	}
	if (_is_ped_lassoed(player_ped_id()))
	{
		return true;
	}
	if (is_ped_swimming(player_ped_id()))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), true))
	{
		return true;
	}
	if (_0x1d46b417f926d34d(player_ped_id()))
	{
		return true;
	}
	if ((get_frame_count() % 10) == 0)
	{
		if (func_22())
		{
			return true;
		}
	}
	if (func_23())
	{
		return true;
	}
	if (bLocal_20)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			if (!func_9(player_ped_id()))
			{
				return true;
			}
		}
		else if (!is_ped_active_in_scenario(player_ped_id(), 1) && !has_anim_event_fired(Global_34, -1208591336))
		{
			return true;
		}
	}
	if (is_ped_ragdoll(player_ped_id()))
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
		uParam0->f_10 = iParam1;
		func_24(uParam0);
	}
}

bool func_9(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
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

int func_11(int iParam0)
{
	iVar0 = 0;
	if (get_current_ped_weapon(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_25(iVar0, 0))
		{
			if (_is_weapon_two_handed(iVar0) || func_26(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12(var uParam0, int iParam1)
{
	uVar0[0] = &uParam0->f_1[1];
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		func_14(uParam0, 0, 1);
	}
	set_ped_can_play_ambient_anims(Global_34, false);
	set_ped_can_play_gesture_anims(Global_34, 0, 1);
	if (func_27() != -1 && func_28())
	{
		if (func_29(&(uParam0->f_1[0]), 0))
		{
			func_30(uParam0);
			func_24(uParam0);
		}
		return;
	}
	if (func_31(uParam0, 256))
	{
		_0xc9caeaeec1256e54(-469828803);
	}
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -124244224, false);
	_disable_first_person_cam_this_frame();
	switch (func_13(uParam0))
	{
		case 2:
			disable_all_control_actions(0);
			if (func_32(uParam0))
			{
				func_33(uParam0);
				func_34(uParam0);
				func_35(uParam0);
			}
			if (func_36(uParam0))
			{
				func_8(uParam0, 3);
			}
			break;
		case 3:
			disable_all_control_actions(0);
			if (func_27() == 0 && _0x251241caec707106())
			{
				func_30(uParam0);
				return;
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
				if (func_37())
				{
					func_38(0);
				}
			}
			if ((func_31(uParam0, 16) || func_39(&(uParam0->f_1[0]), 1)) || func_31(uParam0, 32))
			{
				func_40(uParam0);
			}
			break;
		case 4:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_41(uParam0))
			{
				func_5(uParam0, 1024);
				func_8(uParam0, 5);
			}
			break;
		case 5:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_42(uParam0))
			{
				func_8(uParam0, 6);
			}
			break;
		case 6:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_43(uParam0))
			{
				func_8(uParam0, 7);
			}
			break;
		case 7:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_45(uParam0, 0))
			{
				if (func_46(uParam0, func_31(uParam0, 65536)) || ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && _is_app_active(-1624772174)))
				{
					func_6(uParam0, 65536);
					func_8(uParam0, 8);
				}
				else if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (!func_31(uParam0, 1024))
			{
				func_8(uParam0, 4);
				return;
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_47(uParam0))
			{
				func_46(uParam0, 1);
				func_8(uParam0, 8);
			}
			break;
		case 8:
			disable_all_control_actions(0);
			if (_is_app_active(-1624772174))
			{
				if (_0xf7c180f57f85d0b8(-1624772174))
				{
					Global_1913694->f_1580 = 0;
					func_8(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_31(uParam0, 256))
			{
				disable_all_control_actions(0);
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				return;
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (func_45(uParam0, 1))
			{
				func_8(uParam0, 10);
			}
			break;
		case 10:
			func_48(0);
			if (func_32(uParam0))
			{
				func_49(uParam0);
				func_35(uParam0);
			}
			if (func_50(uParam0) || func_51(uParam0))
			{
				return;
			}
			if (Global_1913694->f_1580)
			{
				Global_1913694->f_1580 = 0;
				_0xd962f8579d702db5();
				func_52(uParam0);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_53(uParam0, 0, 0);
				func_54(&(uParam0->f_1[5]), 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_55(&(uParam0->f_1[2]), 1) || !_is_app_running(-1624772174))
			{
				if (func_31(uParam0, 16))
				{
					func_8(uParam0, 18);
				}
				else
				{
					func_56(uParam0, 0);
					func_57("Exit", "SSCRFT_Sounds", 1);
					if (func_31(uParam0, 32))
					{
						func_6(uParam0, 32);
						func_8(uParam0, 1);
					}
					else
					{
						func_8(uParam0, 3);
					}
				}
			}
			else if (func_39(&(uParam0->f_1[7]), 1))
			{
				func_58(uParam0);
			}
			else if (func_39(&(uParam0->f_1[1]), 1))
			{
				func_59(uParam0);
			}
			else if (func_39(&(uParam0->f_1[3]), 1))
			{
				_0xd962f8579d702db5();
				if (func_31(uParam0, 128))
				{
					func_6(uParam0, 128);
				}
				else
				{
					func_5(uParam0, 128);
				}
				func_52(uParam0);
				func_57("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_53(uParam0, 0, 0);
				func_54(&(uParam0->f_1[5]), 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_60(&(uParam0->f_1[5]), 0, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Left", "SSCRFT_Sounds", 1);
					func_61(uParam0, 0);
				}
			}
			else if (func_60(&(uParam0->f_1[5]), 1, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Right", "SSCRFT_Sounds", 1);
					func_61(uParam0, 1);
				}
			}
			else if (func_55(&(uParam0->f_1[6]), 1))
			{
				func_57("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_62(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (_event_manager_is_event_pending(iVar2))
				{
					if (_event_manager_peek_event(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_63(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_64(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_59(uParam0);
							}
						}
						_event_manager_pop_event(iVar2);
					}
				}
			}
			break;
		case 11:
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			break;
		case 12:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			iVar7 = _0xc22aa08a8adb87d4(Global_34);
			iVar8 = func_65(uParam0->f_61, -1636519629);
			if (iVar7 == -1433449364 || iVar7 == 2058555960)
			{
				if (!_0x68821369a2ceadd5(Global_34, 1335077954))
				{
					_0xd65fdc686a031c83(Global_34, 1335077954, 6f);
					_0x6d07b371e9439019(Global_34);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((_0xc488b8c0e52560d8(Global_34) || _0x2dc0e8dcbd3546e9(Global_34)) && !has_anim_event_fired(Global_34, 1944546609))
				{
					return;
				}
				if (iVar7 == -518407211 || iVar7 == 1662215698)
				{
					if (!_0x68821369a2ceadd5(Global_34, 653141085))
					{
						_0xd65fdc686a031c83(Global_34, 653141085, 6f);
						_0x6d07b371e9439019(Global_34);
					}
					return;
				}
				else
				{
					_hide_ped_weapons(Global_34, 2, false);
				}
				if (((((((((iVar8 == 414472632 && !_is_anim_scene_loaded(uParam0->f_48, true, false)) || (iVar8 == -1136843638 && !_is_anim_scene_loaded(uParam0->f_50, true, false))) || (uParam0->f_69 != 0 && !has_model_loaded(uParam0->f_69))) || (iVar8 == -732326901 && !_is_anim_scene_loaded(uParam0->f_52, true, false))) || (iVar8 == 786205940 && !_is_anim_scene_loaded(uParam0->f_51, true, false))) || (iVar8 == -1141771998 && !_is_anim_scene_loaded(uParam0->f_53, true, false))) || (iVar8 == 364689687 && !_is_anim_scene_loaded(uParam0->f_54, true, false))) || (iVar8 == -842117252 && !_is_anim_scene_loaded(uParam0->f_55, true, false))) || (iVar8 == -1610298873 && !_is_anim_scene_loaded(uParam0->f_56, true, false)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
			}
			else
			{
				if (!_is_anim_scene_loaded(uParam0->f_49, true, false) || (is_ped_active_in_scenario(Global_34, 1) && !is_ped_active_in_scenario(Global_34, 0)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
				if (iVar7 != -518407211 && iVar7 != 1662215698)
				{
					if (func_31(uParam0, 4))
					{
						if ((_0xc488b8c0e52560d8(Global_34) || _0x2dc0e8dcbd3546e9(Global_34)) && !has_anim_event_fired(Global_34, 1944546609))
						{
							return;
						}
						if (!_0x68821369a2ceadd5(Global_34, 796456488))
						{
							_0xd65fdc686a031c83(Global_34, 796456488, 2f);
							_0x6d07b371e9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
				func_67(uParam0, 0, &uVar0);
				func_66(uParam0);
				if (func_68(&(uParam0->f_1[1])))
				{
					func_69(uParam0->f_1[1], 1, 1);
				}
				if (func_70(iVar8))
				{
					uParam0->f_42 = 250;
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824, 1704213876, 0);
					func_53(uParam0, uParam0->f_61, uParam0->f_62);
					func_72(&(uParam0->f_1[1]), -1067771379, 0, 1);
					func_73(&(uParam0->f_1[1]), 10, 1, 1);
					func_73(&(uParam0->f_1[1]), 11, 1, 1);
					func_54(&(uParam0->f_1[1]), 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 250, 251, 1, 1073741824, 1704213876, 0);
					func_72(&(uParam0->f_1[1]), -1067771379, 0, 1);
					func_74(&(uParam0->f_1[1]), 1, 1);
					func_73(&(uParam0->f_1[1]), 10, 1, 1);
					func_73(&(uParam0->f_1[1]), 11, 1, 1);
					func_54(&(uParam0->f_1[1]), 0, 1, 1);
				}
				return;
			}
			if (has_anim_event_fired(Global_34, -563455375))
			{
				_0x5f217bc1190503d8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_70(iVar8))
			{
				if (!func_31(uParam0, 64))
				{
					if (func_29(&(uParam0->f_1[1]), 0))
					{
						if (func_75(&(uParam0->f_1[1]), 1) || is_control_pressed(0, 1138488863))
						{
							func_5(uParam0, 64);
							func_54(&(uParam0->f_1[1]), 0, 1, 1);
							func_54(&(uParam0->f_1[4]), 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_69 != 0)
					{
						if ((uParam0->f_69 == 1186037675 && has_anim_event_fired(Global_34, -1011038463)) || (uParam0->f_69 != 1186037675 && has_anim_event_fired(Global_34, 2024314131)))
						{
							if (does_entity_exist(uParam0->f_65))
							{
								if (network_has_control_of_entity(uParam0->f_65))
								{
									delete_object(&(uParam0->f_65));
								}
								else
								{
									network_request_control_of_entity(uParam0->f_65);
								}
							}
							if (!does_entity_exist(uParam0->f_65))
							{
								if (func_76(uParam0->f_61, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_65 = _create_weapon_object(func_77(uParam0->f_61, 0), 1, Global_35, true, 1f);
									set_entity_completely_disable_collision(uParam0->f_65, false, false);
									if (iVar8 == -1610298873)
									{
										set_anim_scene_entity(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
									}
								}
								else
								{
									uParam0->f_65 = create_object(uParam0->f_69, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
									set_entity_completely_disable_collision(uParam0->f_65, false, false);
								}
								if (iVar8 == 786205940)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -842117252)
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1136843638 && !is_ped_male(Global_34))
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (has_anim_event_fired(Global_34, 966057053))
					{
						if (does_entity_exist(uParam0->f_65))
						{
							if (network_has_control_of_entity(uParam0->f_65))
							{
								delete_object(&(uParam0->f_65));
							}
							else
							{
								network_request_control_of_entity(uParam0->f_65);
							}
						}
						if (!does_entity_exist(uParam0->f_65))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_65 = _create_weapon_object(-1511427369, 1, Global_35, true, 1f);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_61 == 963726415)
								{
									uParam0->f_65 = create_object(400517539, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								}
								else
								{
									uParam0->f_65 = create_object(-370340297, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_65 = create_object(1974613782, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, true);
								if (iVar8 == -1610298873)
								{
									set_anim_scene_entity(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
								}
							}
							else
							{
								uParam0->f_65 = create_object(-655768729, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
							}
						}
						set_entity_completely_disable_collision(uParam0->f_65, false, false);
						if (iVar8 == 786205940)
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -1136843638 && !is_ped_male(Global_34))
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							attach_entity_to_entity(uParam0->f_65, Global_34, get_ped_bone_index(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (has_anim_event_fired(Global_34, 1394836706))
					{
						func_79(&(uParam0->f_65), &(uParam0->f_66));
					}
					if (has_anim_event_fired(Global_34, 1471149551))
					{
						if (!is_entity_dead(uParam0->f_67))
						{
							set_entity_visible(uParam0->f_67, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (has_anim_event_fired(Global_34, 966057053))
					{
						set_entity_visible(uParam0->f_63, true);
					}
				}
				if (has_anim_event_fired(Global_34, -61921192))
				{
					if (func_80(0) && !func_81())
					{
						func_83(uParam0->f_61, uParam0->f_62, 1, func_82(), uParam0->f_11);
						func_84(uParam0->f_61, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (does_entity_exist(uParam0->f_65))
						{
							func_79(&(uParam0->f_65), &(uParam0->f_66));
						}
					}
					uParam0->f_22++;
					uParam0->f_27++;
					if ((!func_85(uParam0->f_61, uParam0->f_62, 0, func_82(), 0) || func_86(uParam0->f_61, 1, 0)) || uParam0->f_22 >= uParam0->f_26)
					{
						if (!func_80(0) || func_81())
						{
							uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
							if (uParam0->f_11 == 2133510819)
							{
								func_89(func_88(-1108808256, -444296448), uParam0->f_27);
							}
							uParam0->f_27 = 0;
						}
						func_90(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_31(uParam0, 64))
				{
					if (!(func_29(&(uParam0->f_1[1]), 0) && is_control_pressed(0, 1138488863)))
					{
						if (has_anim_event_fired(Global_34, 596390595))
						{
							if (!func_80(0) || func_81())
							{
								uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
								if (uParam0->f_11 == 2133510819)
								{
									func_89(func_88(-1108808256, -444296448), uParam0->f_27);
								}
								uParam0->f_27 = 0;
							}
							func_90(uParam0, iVar8, 1);
						}
					}
				}
				if (has_anim_event_fired(Global_34, 1290366555) && uParam0->f_22 < (uParam0->f_26 - 1))
				{
					func_54(&(uParam0->f_1[1]), 1, 1, 1);
					func_54(&(uParam0->f_1[4]), 1, 1, 1);
					func_6(uParam0, 64);
				}
				if (_0xb89fcff19dafff28(func_78(uParam0, iVar8), "player"))
				{
					if (!func_80(0) || func_81())
					{
						uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_89(func_88(-1108808256, -444296448), uParam0->f_27);
						}
						uParam0->f_27 = 0;
					}
					func_90(uParam0, iVar8, 0);
				}
			}
			else if (func_91(&(uParam0->f_70), (IntToFloat(uParam0->f_42) / 1000f)))
			{
				if (!func_80(0) || func_81())
				{
					if (uParam0->f_23 == -1)
					{
						uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_89(func_88(-1108808256, -444296448), 1);
						}
						if (uParam0->f_23 == -1)
						{
							func_90(uParam0, iVar8, 0);
						}
					}
					else if (func_92(uParam0->f_23))
					{
					}
					uParam0->f_23 = -1;
				}
				else
				{
					func_83(uParam0->f_61, uParam0->f_62, 1, func_82(), uParam0->f_11);
					func_84(uParam0->f_61, 1, 1, 1, 0);
				}
				uParam0->f_26 = -1;
				uParam0->f_27 = 0;
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				uParam0->f_44 = 0;
				bVar9 = true;
				if (!func_85(uParam0->f_61, uParam0->f_62, 0, func_82(), 0) || func_86(uParam0->f_61, 1, 0))
				{
					bVar9 = false;
				}
				func_90(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
			}
			break;
		case 13:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			if (does_entity_exist(uParam0->f_67))
			{
				if (has_anim_event_fired(Global_34, -2015667492))
				{
					func_79(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			if (!func_29(&(uParam0->f_1[2]), 0))
			{
				func_54(&(uParam0->f_1[2]), 1, 1, 1);
				func_74(&(uParam0->f_1[2]), 0, 1);
			}
			if (!func_29(&(uParam0->f_1[4]), 0))
			{
				func_54(&(uParam0->f_1[4]), 1, 1, 1);
				func_74(&(uParam0->f_1[4]), 1, 1);
			}
			if (func_55(&(uParam0->f_1[2]), 1))
			{
				func_30(uParam0);
				func_93(&(uParam0->f_70));
				func_8(uParam0, 14);
				return;
			}
			else if (func_94(&(uParam0->f_1[4]), 1))
			{
				func_30(uParam0);
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				func_79(&(uParam0->f_63), &(uParam0->f_64));
				func_79(&(uParam0->f_67), &(uParam0->f_68));
				iVar10 = _0x569f1e1237508deb(Global_34);
				if (iVar10 != -518407211 && iVar10 != 1662215698)
				{
					set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				}
				iVar8 = func_65(uParam0->f_61, -1636519629);
				iVar11 = func_78(uParam0, iVar8);
				remove_anim_scene_entity(iVar11, "player", Global_34);
				func_56(uParam0, 0);
				func_57("Exit", "SSCRFT_Sounds", 1);
				if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
				return;
			}
			else if (func_39(&(uParam0->f_1[1]), 1))
			{
				func_54(&(uParam0->f_1[4]), 0, 1, 1);
				func_54(&(uParam0->f_1[2]), 0, 1, 1);
				func_54(&(uParam0->f_1[1]), 0, 1, 1);
				iVar8 = func_65(uParam0->f_61, -1636519629);
				iVar12 = func_78(uParam0, iVar8);
				if (iVar12 != 0)
				{
					reset_anim_scene(iVar12, "pl_craft");
					load_anim_scene(iVar12);
				}
				func_93(&(uParam0->f_70));
				func_6(uParam0, 64);
				func_8(uParam0, 12);
				return;
			}
			if (func_95(&(uParam0->f_1[4]), 1))
			{
				if (!func_96(&(uParam0->f_70)))
				{
					func_97(&(uParam0->f_70));
				}
				else if (func_91(&(uParam0->f_70), 0.1f))
				{
					func_98(&(uParam0->f_1[4]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_96(&(uParam0->f_70)))
				{
					func_93(&(uParam0->f_70));
				}
				func_98(&(uParam0->f_1[4]), "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			if (does_entity_exist(uParam0->f_67))
			{
				if (has_anim_event_fired(Global_34, -2015667492))
				{
					func_79(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			iVar8 = func_65(uParam0->f_61, -1636519629);
			iVar13 = func_78(uParam0, iVar8);
			if ((iVar13 == 0 || (!_does_anim_scene_exist(iVar13) || _0xf94692eb9dc15d74(iVar13, 0))) || has_anim_event_fired(Global_34, -1208591336))
			{
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				func_79(&(uParam0->f_63), &(uParam0->f_64));
				func_79(&(uParam0->f_67), &(uParam0->f_68));
				iVar14 = _0x569f1e1237508deb(Global_34);
				if (iVar14 != -518407211 && iVar14 != 1662215698)
				{
					set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				}
				remove_anim_scene_entity(iVar13, "player", Global_34);
				if (!func_51(uParam0))
				{
					func_8(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_99();
			if (iVar15 == player_id())
			{
				uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_8(uParam0, 17);
			}
			else if (_network_is_player_index_valid(iVar15) && network_is_player_active(iVar15))
			{
				func_8(uParam0, 10);
			}
			else if (func_91(&(uParam0->f_70), 5f))
			{
				func_93(&(uParam0->f_70));
				func_8(uParam0, 10);
			}
			break;
		case 17:
			if (!func_92(uParam0->f_23) && func_100(1))
			{
				if (func_101(uParam0->f_23) != 3)
				{
					func_102(0);
				}
				else
				{
					func_103(uParam0->f_61);
					_0xd65fdc686a031c83(Global_34, -752808711, 1f);
					func_104(uParam0->f_61, 1);
					func_105(uParam0);
					if (func_76(uParam0->f_61, -2011345500))
					{
						func_106(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_25 = uParam0->f_61;
				}
				func_8(uParam0, 15);
			}
			else
			{
				func_107(1);
				_uiprompt_disable_prompts_this_frame();
				disable_all_control_actions(2);
			}
			break;
		case 1:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				if (func_68(&(uParam0->f_1[0])))
				{
					func_54(&(uParam0->f_1[0]), 0, 1, 1);
				}
				func_35(uParam0);
			}
			break;
		case 18:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
			}
			if (func_31(uParam0, 2))
			{
				clear_ped_tasks(Global_34, 1, 0);
			}
			func_56(uParam0, 0);
			_databinding_remove_data_entry(uParam0->f_28);
			Global_1913694->f_1576 = 0;
			terminate_this_thread();
			break;
	}
}

int func_13(var uParam0)
{
	return uParam0->f_10;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	func_30(uParam0);
	if (bParam2)
	{
		func_56(uParam0, 0);
		_databinding_remove_data_entry(uParam0->f_28);
	}
	if (func_37())
	{
		func_38(0);
	}
	if (bParam1)
	{
		func_108(uParam0);
		return;
	}
	if (_does_text_database_exist(&(uParam0->f_20)))
	{
		_text_database_delete(&(uParam0->f_20));
	}
	if (_does_anim_scene_exist(uParam0->f_48))
	{
		_delete_anim_scene(uParam0->f_48);
	}
	if (_does_anim_scene_exist(uParam0->f_49))
	{
		_delete_anim_scene(uParam0->f_49);
	}
	if (_does_anim_scene_exist(uParam0->f_50))
	{
		_delete_anim_scene(uParam0->f_50);
	}
	if (_does_anim_scene_exist(uParam0->f_51))
	{
		_delete_anim_scene(uParam0->f_51);
	}
	if (_does_anim_scene_exist(uParam0->f_52))
	{
		_delete_anim_scene(uParam0->f_52);
	}
	if (_does_anim_scene_exist(uParam0->f_53))
	{
		_delete_anim_scene(uParam0->f_53);
	}
	if (_does_anim_scene_exist(uParam0->f_54))
	{
		_delete_anim_scene(uParam0->f_54);
	}
	if (_does_anim_scene_exist(uParam0->f_55))
	{
		_delete_anim_scene(uParam0->f_55);
	}
	if (_does_anim_scene_exist(uParam0->f_56))
	{
		_delete_anim_scene(uParam0->f_56);
	}
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_67), &(uParam0->f_68));
	set_streamed_texture_dict_as_no_longer_needed("satchel_textures");
	Global_1913694->f_1576 = 0;
	if (func_31(uParam0, 2))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
	if (func_27() == -1)
	{
		func_8(uParam0, 18);
	}
	else
	{
		if (uParam0->f_10 == 11)
		{
			if (uParam0->f_23 == -1)
			{
				func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_109(uParam0->f_61, uParam0->f_22);
			}
		}
		if (!func_80(0) || func_81())
		{
			if (uParam0->f_27 > 0 && func_25(uParam0->f_61, 0))
			{
				uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
				if (uParam0->f_11 == 2133510819)
				{
					func_89(func_88(-1108808256, -444296448), uParam0->f_27);
				}
				uParam0->f_27 = 0;
			}
		}
		uParam0->f_23 = -1;
		func_8(uParam0, 0);
	}
}

bool func_15()
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
	if (!func_17(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_16(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_17(struct<2> Param0)
{
	if (!func_110(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_111(Param0))
	{
		return false;
	}
	return true;
}

int func_18(var uParam0, var uParam1)
{
	return uParam0;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_22()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (!is_ped_in_any_train(Global_34))
	{
		return false;
	}
	return false;
}

bool func_23()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return true;
		}
	}
	return false;
}

void func_24(var uParam0)
{
	func_5(uParam0, 1);
}

bool func_25(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_26(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_27()
{
	return Global_1572887->f_13;
}

bool func_28()
{
	return Global_1896738->f_382;
}

bool func_29(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	return !func_112(iParam0, 4);
}

void func_30(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_69(uParam0->f_1[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_31(var uParam0, int iParam1)
{
	return func_113(*uParam0, iParam1);
}

bool func_32(var uParam0)
{
	return func_31(uParam0, 1);
}

void func_33(var uParam0)
{
	StringCopy(&(uParam0->f_20), "CAMP", 8);
}

void func_34(var uParam0)
{
	if (_does_text_database_exist(&(uParam0->f_20)))
	{
		_text_database_request(&(uParam0->f_20));
	}
	request_streamed_texture_dict("satchel_textures", false);
	if (func_31(uParam0, 2))
	{
		return;
	}
	request_anim_dict("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	request_anim_dict("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	request_model(809653548, false);
	request_model(975914773, false);
	request_model(1537403900, false);
	request_model(-236347221, false);
	request_model(-91245513, false);
	request_model(-655768729, false);
	request_model(-936393949, false);
	request_model(1597043588, false);
	request_model(-1594634038, false);
	request_model(-467664954, false);
	request_model(-856043142, false);
	request_model(-370340297, false);
	request_model(1974613782, false);
	request_model(400517539, false);
	request_model(-1906499827, false);
	func_114(uParam0);
	if (func_31(uParam0, 4))
	{
		request_model(-194504515, false);
		request_model(-2049449981, false);
		request_model(-1172163183, false);
		request_model(222541312, false);
		request_model(1289914954, false);
	}
}

void func_35(var uParam0)
{
	func_6(uParam0, 1);
}

bool func_36(var uParam0)
{
	if (func_115(&(uParam0->f_20)))
	{
		if (!_text_database_has_loaded(&(uParam0->f_20)))
		{
			return false;
		}
	}
	if (!has_streamed_texture_dict_loaded("satchel_textures"))
	{
		return false;
	}
	if (func_31(uParam0, 2))
	{
		return true;
	}
	if (!has_anim_dict_loaded("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!has_anim_dict_loaded("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_48)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!has_model_loaded(809653548))
	{
		return false;
	}
	if (!has_model_loaded(975914773))
	{
		return false;
	}
	if (!has_model_loaded(1537403900))
	{
		return false;
	}
	if (!has_model_loaded(-236347221))
	{
		return false;
	}
	if (!has_model_loaded(-655768729))
	{
		return false;
	}
	if (!has_model_loaded(-936393949))
	{
		return false;
	}
	if (!has_model_loaded(1597043588))
	{
		return false;
	}
	if (!has_model_loaded(-91245513))
	{
		return false;
	}
	if (!has_model_loaded(-370340297))
	{
		return false;
	}
	if (!has_model_loaded(-467664954))
	{
		return false;
	}
	if (!has_model_loaded(-856043142))
	{
		return false;
	}
	if (!has_model_loaded(1974613782))
	{
		return false;
	}
	if (!has_model_loaded(400517539))
	{
		return false;
	}
	if (!has_model_loaded(-1906499827))
	{
		return false;
	}
	if (func_31(uParam0, 4))
	{
		if (!has_model_loaded(-194504515))
		{
			return false;
		}
		if (!has_model_loaded(-2049449981))
		{
			return false;
		}
		if (!has_model_loaded(-1172163183))
		{
			return false;
		}
		if (!has_model_loaded(222541312))
		{
			return false;
		}
		if (!has_model_loaded(1289914954))
		{
			return false;
		}
	}
	return true;
}

bool func_37()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913694->f_1582 = bParam0;
	decor_set_bool(Global_34, "player_crafting_active", bParam0);
}

bool func_39(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_40(var uParam0)
{
	func_38(1);
	func_8(uParam0, 4);
}

bool func_41(var uParam0)
{
	uParam0->f_74 = Global_1913694->f_1584;
	uParam0->f_73 = Global_1913694->f_1585;
	if (func_31(uParam0, 2))
	{
		Global_1913694->f_1576 = 0;
		uParam0->f_44 = 0;
		iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
		if (_databinding_is_data_id_valid((*Global_1913694)[0]->f_1))
		{
			_databinding_remove_data_entry((*Global_1913694)[0]->f_1);
		}
		uParam0->f_24 = func_118(iVar0);
		uParam0->f_25 = func_119(iVar0);
		func_120(uParam0, uParam0->f_24, 1472825031);
		func_120(uParam0, -1171462349, 1472825031);
		func_120(uParam0, 1689071181, 1472825031);
		func_120(uParam0, -1612693182, 1472825031);
		func_120(uParam0, 1856073229, 1472825031);
		return true;
	}
	if (uParam0->f_43 == 0)
	{
		Global_1913694->f_1576 = 0;
		uParam0->f_44 = 0;
		func_121(uParam0, 600942249);
		uParam0->f_43++;
		return false;
	}
	else if (uParam0->f_43 == 1)
	{
		func_121(uParam0, -257768755);
		uParam0->f_43++;
		return false;
	}
	else
	{
		func_121(uParam0, -214678071);
		uParam0->f_43 = 0;
	}
	uParam0->f_44 = 0;
	return true;
}

bool func_42(var uParam0)
{
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	if ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && _databinding_is_data_id_valid(uParam0->f_28))
	{
		return true;
	}
	uParam0->f_28 = _databinding_add_data_container_from_path("", "CraftingDatastore");
	_databinding_add_data_hash(uParam0->f_28, "filter", func_123(func_31(uParam0, 2), -583079595, func_122(uParam0->f_41)));
	if (func_31(uParam0, 2))
	{
		_databinding_add_data_int(uParam0->f_28, "filterCount", 1);
		_databinding_add_data_int(uParam0->f_28, "filterIndex", 0);
		_databinding_add_data_hash(uParam0->f_28, "headerText", -1710561039);
	}
	else
	{
		_databinding_add_data_int(uParam0->f_28, "filterCount", 5 + 1);
		_databinding_add_data_int(uParam0->f_28, "filterIndex", uParam0->f_41);
	}
	_databinding_add_data_string(uParam0->f_28, "tipText", "");
	uParam0->f_40 = _databinding_add_ui_item_list(uParam0->f_28, "recipes_lines");
	_databinding_add_data_bool(uParam0->f_28, "variantVisible", false);
	_databinding_add_data_string(uParam0->f_28, "variantText", " ");
	_databinding_add_data_int(uParam0->f_28, "variantCount", 0);
	_databinding_add_data_int(uParam0->f_28, "variantIndex", 0);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgDescription", false);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgPlayer", false);
	_databinding_add_data_bool(uParam0->f_28, "ShowRpgHorse", false);
	_databinding_add_data_hash(uParam0->f_28, "RPGDescription", 0);
	_databinding_add_data_bool(uParam0->f_28, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_124(uParam0->f_30[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_35[iVar0] = _databinding_add_data_container(uParam0->f_28, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		_databinding_add_data_string(&(uParam0->f_35[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		_databinding_add_data_int(&(uParam0->f_35[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_43(var uParam0)
{
	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		if (func_25((*Global_1913694)[iVar0]->f_6, 0))
		{
			func_125(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_44 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_44 = 0;
	if (uParam0->f_47 == 0)
	{
		func_6(uParam0, 128);
	}
	uParam0->f_45 = 0;
	return true;
}

void func_44(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_29))
	{
		uParam0->f_29 = _databinding_add_ui_item_list(uParam0->f_28, "recipes");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_29);
	}
	uParam0->f_60 = 600942249;
	uParam0->f_59 = 0;
	uParam0->f_58 = 0;
}

bool func_45(var uParam0, bool bParam1)
{
	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		if ((func_31(uParam0, 128) && (*Global_1913694)[iVar0]->f_2) || !func_31(uParam0, 128))
		{
			if (Global_1913694->f_1585 != 0)
			{
				uParam0->f_73 = Global_1913694->f_1585;
				bVar3 = func_76((*Global_1913694)[iVar0]->f_6, Global_1913694->f_1585);
				if (func_31(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_125(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_44 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_44 = 0;
				if (!func_31(uParam0, 16384) && Global_1913694->f_1585 != 0)
				{
					func_5(uParam0, 16384);
					return false;
				}
				uParam0->f_45 = 0;
				func_6(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_46(var uParam0, bool bParam1)
{
	func_5(uParam0, 256);
	if (bParam1 && _is_app_active(-1624772174))
	{
		if (_uistatemachine_request_transition(-1624772174, 1014850361))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = _launch_app_by_hash(-1624772174);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_47(var uParam0)
{
	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694->f_1576 - 1))
	{
		func_126(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_44 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_6(uParam0, 512);
	uParam0->f_44 = 0;
	return true;
}

void func_48(bool bParam0)
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -399233038, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1618006066, false);
	disable_control_action(0, -1304887797, false);
	iVar0 = func_127(Global_34);
	if (!is_entity_dead(iVar0))
	{
		set_ped_max_move_blend_ratio(iVar0, 1f);
	}
	if (bParam0)
	{
		disable_control_action(0, -1860390754, false);
		disable_control_action(0, 1141111167, false);
		disable_control_action(0, -1460216218, false);
		disable_control_action(0, 1669958966, false);
		disable_control_action(0, -1666616423, false);
	}
}

void func_49(var uParam0)
{
	func_30(uParam0);
	func_128(uParam0, 1);
	uParam0->f_1[2] = func_71("CAMP_REC_QUIT", 814057702, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	func_54(&(uParam0->f_1[2]), 1, 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	if (!func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_59, 0))
		{
			uParam0->f_61 = uParam0->f_59;
			uParam0->f_62 = uParam0->f_60;
			func_129(uParam0, &(uParam0->f_58));
		}
		else
		{
			uParam0->f_61 = 0;
		}
		if (func_25(uParam0->f_59, 0))
		{
			if (func_130(uParam0->f_59))
			{
				func_98(&(uParam0->f_1[1]), "CAMP_REC_COOK", 1);
			}
			else if (func_65(uParam0->f_59, -1636519629) == -701492487)
			{
				func_98(&(uParam0->f_1[1]), "CAMP_REC_BREW", 1);
			}
			else
			{
				func_98(&(uParam0->f_1[1]), "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_71(func_131(uParam0), -711536720, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	else
	{
		uParam0->f_1[7] = func_71("CAMP_ADD_TASK", -1981136987, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	uParam0->f_1[5] = func_132("RECIPE", -1384133541, 1710877787, 0);
	func_133(&(uParam0->f_1[5]), -1384133541);
	func_133(&(uParam0->f_1[5]), 1710877787);
	if (_databinding_is_data_id_valid(uParam0->f_57))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_25(uParam0->f_61, 0))
	{
		func_54(&(uParam0->f_1[5]), 1, 1, 1);
	}
	else
	{
		func_54(&(uParam0->f_1[5]), 0, 1, 1);
	}
	uParam0->f_1[6] = func_71("INFO", -69749786, 1, 0, 0, 2, 570, 4000, 10, 1073741824, 1704213876, 0);
	if (!func_31(uParam0, 32768))
	{
		func_98(&(uParam0->f_1[6]), "INFO", 1);
	}
	else
	{
		func_98(&(uParam0->f_1[6]), "INGREDIENTS", 1);
	}
	if (_databinding_get_array_count(uParam0->f_29) == 0)
	{
		func_52(uParam0);
		func_54(&(uParam0->f_1[6]), 0, 1, 1);
		_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "CRFT_NO_REC_TIP"));
	}
	func_53(uParam0, uParam0->f_61, uParam0->f_62);
}

bool func_50(var uParam0)
{
	if (!func_31(uParam0, 2))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (uParam0->f_25 != func_119(iVar0))
	{
		uParam0->f_25 = func_119(iVar0);
		func_8(uParam0, 15);
		return true;
	}
	if (uParam0->f_24 != func_118(iVar0))
	{
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

bool func_51(var uParam0)
{
	if (Global_1913694->f_1584 != uParam0->f_74 || Global_1913694->f_1585 != uParam0->f_73)
	{
		uParam0->f_74 = Global_1913694->f_1584;
		uParam0->f_73 = Global_1913694->f_1585;
		func_5(uParam0, 65536);
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

void func_52(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_40);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_30[iVar0]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam0->f_30[iVar0]), "inUse", 0);
		iVar0++;
	}
	_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", "");
	_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 0);
}

void func_53(var uParam0, int iParam1, int iParam2)
{
	if (!func_25(iParam1, 0))
	{
		if (func_68(&(uParam0->f_1[1])))
		{
			func_54(&(uParam0->f_1[1]), 0, 1, 1);
		}
		return;
	}
	bVar2 = func_82();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913694->f_1579 && func_134(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_135(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_92(uParam0->f_23))
	{
		bVar3 = false;
	}
	else if (func_31(uParam0, 2) && !func_136(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != -1199896558 && func_86(iParam1, 1, 0)) || (!func_31(uParam0, 4) && ((func_31(uParam0, 8192) || iParam2 == -214678071) || iParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!func_137(2) && func_65(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_26 == -1)
		{
			iVar6 = func_138(iParam1, 0, 0, 0);
			iVar7 = func_139(iParam1, 0);
			iVar8 = func_140(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_26 = func_141(iVar7, iVar8);
		}
	}
	if (func_68(&(uParam0->f_1[1])))
	{
		if (func_31(uParam0, 2))
		{
			func_98(&(uParam0->f_1[1]), "DONATE_ING", 1);
		}
		else if (func_130(iParam1))
		{
			func_98(&(uParam0->f_1[1]), "CAMP_REC_COOK", 1);
		}
		else if (func_65(iParam1, -1636519629) == -701492487)
		{
			func_98(&(uParam0->f_1[1]), "CAMP_REC_BREW", 1);
		}
		else
		{
			func_98(&(uParam0->f_1[1]), "CAMP_REC_MAKE", 1);
		}
		func_54(&(uParam0->f_1[1]), bVar3, 1, 1);
	}
	func_142(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_68(&(uParam0->f_1[6])))
	{
		func_54(&(uParam0->f_1[6]), !bVar4, 1, 1);
	}
	func_143(uParam0);
}

void func_54(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (bParam1)
	{
		func_144(iParam0, 4);
		if (bParam3)
		{
			func_145(iVar0, 1);
		}
		func_146(iVar0, 1);
	}
	else
	{
		func_147(iParam0, 4);
		func_146(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_just_released((*Global_1951255)[iVar0]->f_3);
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (_uistatemachine_request_transition(-1624772174, 1383188602))
		{
		}
		else
		{
			_close_app_by_hash(-1624772174);
		}
	}
	else
	{
		_close_app_by_hash(-1624772174);
	}
	func_6(uParam0, 256);
	_0xd962f8579d702db5();
}

void func_57(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

void func_58(var uParam0)
{
	if (func_25(uParam0->f_61, 0))
	{
		if (_uilog_is_entry_registered(7, uParam0->f_61))
		{
			return;
		}
		_uilog_add_entry_hash(7, uParam0->f_61, Global_35, uParam0->f_61, -2136842124, 0);
		func_148(uParam0->f_61, uParam0->f_62, &Var1, &iVar0, 1, 0);
		_uilog_add_or_update_objective(7, uParam0->f_61, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = &Var1[iVar33];
				if (func_25(iVar34, 0))
				{
					iVar36 = func_138(iVar34, 0, 0, 0);
					sVar35 = _create_var_string(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33]->f_1, _create_var_string(0, iVar34));
					bVar37 = func_149(iVar34, Var1[iVar33]->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					_uilog_add_or_update_objective(7, uParam0->f_61, iVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_150(uParam0->f_61, &Var38, 805880880, 0, 0, 0))
		{
			_uilog_set_entry_icon_texture(7, uParam0->f_61, Var38, Var38.f_1);
			_uilog_set_entry_brief_texture(7, uParam0->f_61, Var38, Var38.f_1);
		}
		Global_1137047->f_339.f_16 = uParam0->f_61;
		Global_1137047->f_339.f_17 = uParam0->f_62;
		sVar41 = _create_var_string(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		_0x763637f9b838b0a7(7, uParam0->f_61, sVar41);
		play_sound_frontend("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_143(uParam0);
}

void func_59(var uParam0)
{
	if (!func_29(&(uParam0->f_1[1]), 0))
	{
		return;
	}
	if (func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_61, 0))
		{
			func_102(1);
			func_97(&(uParam0->f_70));
			func_8(uParam0, 16);
		}
		return;
	}
	func_56(uParam0, 1);
	func_69(uParam0->f_1[1], 1, 1);
	func_69(uParam0->f_1[5], 1, 1);
	func_69(uParam0->f_1[6], 1, 1);
	func_69(uParam0->f_1[3], 1, 1);
	func_69(uParam0->f_1[7], 1, 1);
	func_5(uParam0, 64);
	if (!func_31(uParam0, 8192) && !func_130(uParam0->f_61))
	{
		iVar0 = func_65(uParam0->f_61, -1636519629);
		iVar1 = func_78(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_6(uParam0, 64);
			reset_anim_scene(iVar1, "pl_craft");
			load_anim_scene(iVar1);
			uParam0->f_69 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_61 == 963726415)
					{
						uParam0->f_69 = -1906499827;
					}
					else
					{
						uParam0->f_69 = -467664954;
					}
				}
				else if (func_76(uParam0->f_61, -1588156645))
				{
					uParam0->f_69 = func_151(func_77(uParam0->f_61, 0));
				}
				else if (func_76(uParam0->f_61, 457423347))
				{
					uParam0->f_69 = -193645029;
				}
				else if (func_76(uParam0->f_61, -1846429632))
				{
					uParam0->f_69 = 2132464141;
				}
				else if (func_76(uParam0->f_61, -1067199465))
				{
					uParam0->f_69 = 1186037675;
				}
				else
				{
					uParam0->f_69 = func_151(uParam0->f_61);
				}
			}
			if (uParam0->f_69 != 0)
			{
				request_model(uParam0->f_69, false);
			}
		}
		func_98(&(uParam0->f_1[2]), "CAMP_REC_BACK", 1);
		func_72(&(uParam0->f_1[2]), -1067771379, 0, 1);
		func_54(&(uParam0->f_1[2]), 0, 1, 1);
		func_74(&(uParam0->f_1[2]), 0, 1);
		uParam0->f_1[4] = func_71("CAMP_REC_BACK", 814057702, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
		func_152(uParam0->f_1[4], "INPUT_PCRAFT_EXIT");
		func_72(&(uParam0->f_1[4]), -1067771379, 0, 1);
		func_54(&(uParam0->f_1[4]), 0, 1, 1);
		func_73(&(uParam0->f_1[4]), 19, 1, 1);
		func_73(&(uParam0->f_1[4]), 20, 1, 1);
		func_73(&(uParam0->f_1[4]), 13, 1, 1);
		func_73(&(uParam0->f_1[2]), 13, 1, 1);
		if (func_68(&(uParam0->f_1[2])))
		{
			func_72(&(uParam0->f_1[2]), -1067771379, 0, 1);
		}
		uParam0->f_27 = 0;
		func_8(uParam0, 12);
	}
	else
	{
		func_8(uParam0, 11);
	}
}

bool func_60(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_61(var uParam0, bool bParam1)
{
	_0xd962f8579d702db5();
	if (_databinding_is_data_id_valid(uParam0->f_57))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_57, "iCurCostVariant");
		iVar1 = _databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_62 == -214678071 || uParam0->f_62 == 278772510)
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_153(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_65(uParam0->f_61, 1697966752), 0) };
				if (func_154(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_62 = -214678071;
						uParam0->f_61 = func_155(0, iVar3);
						bVar2 = true;
					}
					func_156(iVar3);
				}
			}
			else
			{
				Var5 = { func_153(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_65(uParam0->f_61, 1697966752), 0) };
				if (func_154(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_155(iVar16, iVar3);
							if (func_76(iVar17, iVar15))
							{
								uParam0->f_62 = 278772510;
								uParam0->f_61 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_156(iVar3);
				}
			}
		}
		else
		{
			iVar18 = _item_database_get_acquire_costs_count(uParam0->f_61);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 1644203656 || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913694->f_1579 && func_134(uParam0->f_61, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (_item_database_get_acquire_cost(uParam0->f_61, iVar0, &Var19))
				{
				}
			}
			uParam0->f_62 = Var19;
		}
		_databinding_write_data_int_from_parent(uParam0->f_57, "eCost", uParam0->f_62);
		_databinding_write_data_int_from_parent(uParam0->f_57, "eOutputItem", uParam0->f_61);
		iVar67 = _databinding_read_data_int_from_parent(uParam0->f_57, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913694)
		{
			iVar68 = (*Global_1913694)[iVar67]->f_8;
		}
		_databinding_write_data_int_from_parent(uParam0->f_57, "iCurCostVariant", iVar0);
		_databinding_write_data_int_from_parent(uParam0->f_28, "variantIndex", (iVar0 + 1 - iVar68));
		_databinding_write_data_string_from_parent(uParam0->f_28, "variantText", _create_var_string(0, uParam0->f_61));
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		if (_databinding_read_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription"))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 1);
		}
		_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", func_157(uParam0->f_61));
		func_126(uParam0, -1, func_82(), uParam0->f_57, 0, bVar2, 0);
		func_53(uParam0, uParam0->f_61, uParam0->f_62);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_31(uParam0, 32768))
		{
			func_6(uParam0, 32768);
		}
		else
		{
			func_5(uParam0, 32768);
		}
	}
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription", func_31(uParam0, 32768));
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowIngredients", !func_31(uParam0, 32768));
	if (!func_31(uParam0, 32768))
	{
		if (func_68(&(uParam0->f_1[6])))
		{
			func_98(&(uParam0->f_1[6]), "INFO", 1);
		}
		_0xd962f8579d702db5();
		func_158(uParam0);
	}
	else
	{
		if (func_68(&(uParam0->f_1[6])))
		{
			func_98(&(uParam0->f_1[6]), "INGREDIENTS", 1);
		}
		func_159(uParam0);
	}
	if (uParam0->f_62 == -214678071)
	{
		if (_databinding_read_data_int_from_parent(uParam0->f_57, "enabled") == 1)
		{
			if (_databinding_read_data_int_from_parent(uParam0->f_57, "iNumCostVariants") <= 1 && func_31(uParam0, 32768))
			{
				_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_140(uParam0->f_61, uParam0->f_62, func_82(), 0);
				_databinding_write_data_string_from_parent(uParam0->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_63(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		return;
	}
	_0xd962f8579d702db5();
	func_160(uParam0);
	func_52(uParam0);
	func_158(uParam0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowIngredients", 0);
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_53(uParam0, 0, 0);
	func_8(uParam0, 9);
}

void func_64(var uParam0, int iParam1)
{
	func_52(uParam0);
	func_158(uParam0);
	func_129(uParam0, &(iParam1->f_3));
}

int func_65(int iParam0, int iParam1)
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

void func_66(var uParam0)
{
	iVar0 = func_65(uParam0->f_61, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_63))
		{
			iVar1 = func_161(uParam0->f_61);
			if (iVar1 != 0)
			{
				uParam0->f_63 = create_object(iVar1, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
				set_entity_completely_disable_collision(uParam0->f_63, false, false);
				attach_entity_to_entity(uParam0->f_63, Global_34, get_ped_bone_index(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_48, "player", Global_34, 0);
		start_anim_scene(uParam0->f_48);
		_set_anim_scene_playback_list_bool(uParam0->f_48, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_50, "arrow", uParam0->f_65, 0);
		set_anim_scene_entity(uParam0->f_50, "player", Global_34, 0);
		start_anim_scene(uParam0->f_50);
		_set_anim_scene_playback_list_bool(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_51, "player", Global_34, 0);
		start_anim_scene(uParam0->f_51);
		_set_anim_scene_playback_list_bool(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_49, "player", Global_34, 0);
		if (!does_entity_exist(uParam0->f_63))
		{
			iVar2 = func_161(uParam0->f_61);
			if (iVar2 != 0)
			{
				uParam0->f_63 = create_object(iVar2, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
				set_entity_visible(uParam0->f_63, false);
				set_entity_completely_disable_collision(uParam0->f_63, false, false);
				attach_entity_to_entity(uParam0->f_63, Global_34, get_ped_bone_index(Global_34, 37709), func_162(uParam0->f_61), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_49, "bullet", uParam0->f_63, 0);
		start_anim_scene(uParam0->f_49);
		_set_anim_scene_playback_list_bool(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		set_anim_scene_entity(uParam0->f_52, "player", Global_34, 0);
		start_anim_scene(uParam0->f_52);
		_set_anim_scene_playback_list_bool(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-1511427369, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		set_anim_scene_entity(uParam0->f_53, "player", Global_34, 0);
		start_anim_scene(uParam0->f_53);
		_set_anim_scene_playback_list_bool(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_42 = 250;
		if (!does_entity_exist(uParam0->f_65))
		{
			uParam0->f_65 = _create_weapon_object(-764310200, 1, Global_35, true, 1f);
			set_entity_visible(uParam0->f_65, false);
			set_entity_completely_disable_collision(uParam0->f_65, false, false);
		}
		if (!does_entity_exist(uParam0->f_67))
		{
			uParam0->f_67 = create_object(-1594634038, Global_35, true, (network_get_this_script_is_network_script() && network_is_host_of_this_script()), false, false, false);
			set_entity_visible(uParam0->f_67, false);
			set_entity_completely_disable_collision(uParam0->f_67, false, false);
		}
		set_anim_scene_entity(uParam0->f_54, "RAG", uParam0->f_67, 0);
		set_anim_scene_entity(uParam0->f_54, "player", Global_34, 0);
		start_anim_scene(uParam0->f_54);
		_set_anim_scene_playback_list_bool(uParam0->f_54, "pl_craft", true);
		_set_anim_scene_playback_list_bool(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_55, "player", Global_34, 0);
		start_anim_scene(uParam0->f_55);
		_set_anim_scene_playback_list_bool(uParam0->f_55, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_42 = 250;
		set_anim_scene_entity(uParam0->f_56, "player", Global_34, 0);
		start_anim_scene(uParam0->f_56);
		_set_anim_scene_playback_list_bool(uParam0->f_56, "pl_craft", true);
	}
	else
	{
		uParam0->f_42 = round((get_anim_duration(func_163(uParam0->f_61), func_164(uParam0->f_61)) * 1000f));
		func_97(&(uParam0->f_70));
		task_play_anim(Global_34, func_163(uParam0->f_61), func_164(uParam0->f_61), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_67(var uParam0, bool bParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_68(&(uParam0->f_1[iVar0])))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_68(uParam2[iVar1]))
				{
					if (&uParam0->f_1[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_54(&(uParam0->f_1[iVar0]), bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_68(int iParam0)
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

void func_69(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_68(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_117(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_165(iVar0);
	*uParam0 = 0;
}

bool func_70(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
	while (iVar0 < 60)
	{
		if (func_112(iVar0, 2))
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
		func_166(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	func_145(iVar0, bParam1);
}

bool func_75(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_76(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return func_168(func_167(iParam0), iParam1);
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

int func_77(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
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
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
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
	if (func_25(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_169(iVar0) || func_170(iVar0))
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

int func_78(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_49;
		case -732326901:
			return uParam0->f_52;
		case -1136843638:
			return uParam0->f_50;
		case 786205940:
			return uParam0->f_51;
		case -1141771998:
			return uParam0->f_53;
		case 364689687:
			return uParam0->f_54;
		case 414472632:
			return uParam0->f_48;
		case -842117252:
			return uParam0->f_55;
		case -1610298873:
			return uParam0->f_56;
		default:
			break;
	}
	return 0;
}

int func_79(int* iParam0, var uParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return 1;
	}
	if (network_has_control_of_entity(*iParam0))
	{
		delete_object(iParam0);
		return 1;
	}
	*uParam1 = 1;
	network_request_control_of_entity(*iParam0);
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_27() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_171(bParam0));
}

bool func_81()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_82()
{
	iVar0 = func_172(7);
	if (!is_ped_injured(iVar0))
	{
		if (func_173(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4)
{
	_0x78c2e029db205a3a(iParam0, iParam1, uParam4);
	return func_174(iParam0, iParam1, bParam2, bParam3);
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_80(0) || func_81())
	{
		return;
	}
	if (!func_25(iParam0, 0))
	{
		return;
	}
	func_89(func_175(-413660030), iParam1);
	if (bParam3)
	{
		if (func_27() == -1)
		{
			if (func_76(iParam0, -1588156645))
			{
				iVar0 = func_176(func_77(iParam0, 0), 0);
				if (is_weapon_valid(iVar0))
				{
					func_177(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_178(iParam0) == -1977020088)
			{
				if (func_179(iParam0, 0))
				{
					func_180(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_181(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_182(iParam0, iParam4, iParam1);
		}
	}
	func_104(iParam0, iParam1);
	Global_1051133 = iParam0;
}

bool func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_135(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

bool func_86(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_183(iParam0, 0, 0) };
	return func_184(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

int func_87(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_25(iParam0, 0))
	{
		return -1;
	}
	if (func_185(iParam0))
	{
		if (!func_187(func_186(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_140(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_183(iParam0, 1, 0) };
	if (func_184(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_188(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_189(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_185(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_190(&Var9, func_186(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_191(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_185(iParam0))
	{
		if (func_192(func_186(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_193(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_194(iVar7, Var52);
	_0x78c2e029db205a3a(iParam0, iParam1, uParam3);
	return iVar7;
}

struct<2> func_88(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_89(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_90(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_44 = 0;
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	iVar0 = func_78(uParam0, iParam1);
	set_anim_scene_bool(iVar0, "bStopLoop", true, false);
	func_54(&(uParam0->f_1[2]), 1, 1, 1);
	func_54(&(uParam0->f_1[4]), 1, 1, 1);
	func_74(&(uParam0->f_1[2]), 0, 1);
	func_74(&(uParam0->f_1[4]), 1, 1);
	func_195(&(uParam0->f_1[1]), 1);
	func_69(uParam0->f_1[1], 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824, 1704213876, 0);
	func_73(&(uParam0->f_1[1]), 11, 1, 1);
	func_73(&(uParam0->f_1[1]), 19, 1, 1);
	func_72(&(uParam0->f_1[1]), -1067771379, 0, 1);
	func_54(&(uParam0->f_1[1]), bParam2, 1, 1);
	func_8(uParam0, 13);
}

bool func_91(var uParam0, float fParam1)
{
	if (!func_96(uParam0))
	{
		return false;
	}
	if (func_196(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0)
{
	iVar0 = func_101(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_94(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
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

bool func_95(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

bool func_96(var uParam0)
{
	return func_197(*uParam0, 1);
}

void func_97(var uParam0)
{
	func_198(uParam0, 0f);
}

void func_98(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

int func_99()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		return (*Global_1134390)[iVar0]->f_38.f_28.f_2;
	}
	return 255;
}

bool func_100(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

int func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_200(iVar14, Var0, func_199(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))));
}

void func_103(var uParam0)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (iVar0 == player_id())
	{
		func_201(iVar0, 1);
		func_202(iVar0, uParam0);
		func_204(func_203(_0x901e0dc25080c8b9(player_id())), uParam0);
	}
	else
	{
		func_205(uParam0);
	}
}

void func_104(int iParam0, int iParam1)
{
	Var0 = { func_206(iParam0) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	if (!func_76(iParam0, 1714518167))
	{
		Var0 = { func_207(iParam0) };
		if (Var0.f_1 != 0)
		{
			_0x6a0184e904cdf25e(&Var0, iParam1);
		}
	}
}

void func_105(var uParam0)
{
	if (_0xf184b3ece36219cf(uParam0->f_23, &uVar0))
	{
		vVar4 = { func_208(&Global_1296859) };
		iVar7 = 0;
		bVar8 = func_76(uParam0->f_61, -2011345500);
		if (!bVar8)
		{
			if (func_148(uParam0->f_61, uParam0->f_62, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = &Var10[0];
			}
		}
		_0xdf516e598d966d06(&uVar0, iVar7, vVar4.z, 0, 1, 1084182731, 531932013, uParam0->f_61, bVar8);
	}
}

bool func_106(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_209(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

void func_107(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

void func_108(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_48))
	{
		reset_anim_scene(uParam0->f_48, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_49))
	{
		reset_anim_scene(uParam0->f_49, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_50))
	{
		reset_anim_scene(uParam0->f_50, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_51))
	{
		reset_anim_scene(uParam0->f_51, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_52))
	{
		reset_anim_scene(uParam0->f_52, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_53))
	{
		reset_anim_scene(uParam0->f_53, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_54))
	{
		reset_anim_scene(uParam0->f_54, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_55))
	{
		reset_anim_scene(uParam0->f_55, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_56))
	{
		reset_anim_scene(uParam0->f_56, 0);
	}
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_67), &(uParam0->f_68));
}

void func_109(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_210(11, 1, 0);
		iVar0++;
	}
	if (func_211(iParam0, 0))
	{
		func_212(40);
	}
	else
	{
		func_212(39);
	}
}

bool func_110(int iParam0)
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

int func_111(int iParam0)
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

bool func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_113(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_114(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_48))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_48 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_48 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_48);
	}
	if (!_does_anim_scene_exist(uParam0->f_49))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_49 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_49);
	}
	if (!_does_anim_scene_exist(uParam0->f_50))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_50 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_50);
	}
	if (!_does_anim_scene_exist(uParam0->f_51))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_51 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_51);
	}
	if (!_does_anim_scene_exist(uParam0->f_52))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_52 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_52);
	}
	if (!_does_anim_scene_exist(uParam0->f_53))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_53 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_53);
	}
	if (!_does_anim_scene_exist(uParam0->f_54))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_54 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_54);
	}
	if (!_does_anim_scene_exist(uParam0->f_55))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_55 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_55);
	}
	if (!_does_anim_scene_exist(uParam0->f_56))
	{
		if (is_ped_male(Global_34))
		{
			uParam0->f_56 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		load_anim_scene(uParam0->f_56);
	}
}

bool func_115(char* sParam0)
{
	return !is_string_null_or_empty(sParam0);
}

bool func_116(var uParam0, var uParam1)
{
	if (_does_anim_scene_exist(*uParam1))
	{
		if (!_is_anim_scene_loaded(*uParam1, true, false))
		{
			if (_is_anim_scene_loading(*uParam1, true))
			{
				return false;
			}
			else
			{
				load_anim_scene(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_114(uParam0);
		return false;
	}
	return true;
}

int func_117(int iParam0)
{
	return iParam0;
}

int func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28;
}

int func_119(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28.f_1;
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	(*Global_1913694)[uParam0->f_44]->f_5 = iParam2;
	(*Global_1913694)[uParam0->f_44]->f_6 = iParam1;
	(*Global_1913694)[uParam0->f_44]->f_7 = 1;
	(*Global_1913694)[uParam0->f_44]->f_8 = 0;
	Global_1913694->f_1576++;
	uParam0->f_44++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_213(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_214(uParam0, iParam1);
	}
}

int func_121(var uParam0, int iParam1)
{
	Var0 = { func_153(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913694->f_1584, 0) };
	if (func_154(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_155(iVar12, iVar10);
			if (func_25(iVar13, 0))
			{
				if (uParam0->f_44 >= 175)
				{
				}
				else
				{
					if (Global_1913694->f_1584 == 0 && func_76(iVar13, 302810039))
					{
						if (!(Global_1913694->f_1585 != 0 && func_76(iVar13, Global_1913694->f_1585)))
						{
						}
						else if (func_76(iVar13, 266762988))
						{
						}
						else
						{
							func_120(uParam0, iVar13, iParam1);
							func_215(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_216(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

int func_123(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_124(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = _databinding_add_data_container(uParam2->f_28, cParam1);
	_databinding_add_data_bool(*uParam0, "visible", false);
	_databinding_add_data_string(*uParam0, "texture", "");
	_databinding_add_data_string(*uParam0, "textureDictionary", "inventory_items");
	_databinding_add_data_int(*uParam0, "count", 3);
	_databinding_add_data_int(*uParam0, "enabled", 1);
	_databinding_add_data_bool(*uParam0, "inUse", false);
}

void func_125(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = (*Global_1913694)[iParam2]->f_6;
	if ((bParam4 || func_31(uParam0, 2)) || func_211(iVar0, uParam0->f_41))
	{
		if (bParam1)
		{
			if (_databinding_is_data_id_valid((*Global_1913694)[iParam2]->f_1))
			{
				if (bParam5)
				{
					func_126(uParam0, -1, bParam3, (*Global_1913694)[iParam2]->f_1, 1, 0, 1);
				}
				_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_29, uParam0->f_45, -2047994727, (*Global_1913694)[iParam2]->f_1);
			}
			else
			{
				func_217(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (_databinding_is_data_id_valid((*Global_1913694)[iParam2]->f_1))
			{
				_databinding_remove_data_entry((*Global_1913694)[iParam2]->f_1);
			}
			func_217(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_45 == 0)
		{
			uParam0->f_59 = (*Global_1913694)[iParam2]->f_6;
			uParam0->f_60 = (*Global_1913694)[iParam2]->f_5;
			uParam0->f_58 = (*Global_1913694)[iParam2]->f_1;
		}
		uParam0->f_45++;
	}
}

void func_126(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_databinding_is_data_id_valid(iParam3))
	{
		iParam1 = _databinding_read_data_int_from_parent(iParam3, "iIndex");
	}
	iVar0 = (*Global_1913694)[iParam1]->f_1;
	if (!_databinding_is_data_id_valid(iVar0))
	{
		return;
	}
	iVar1 = _databinding_read_data_int_from_parent(iVar0, "eOutputItem");
	iVar2 = _databinding_read_data_int_from_parent(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_140(iVar3, iVar4, bParam2, 0);
	iVar6 = func_138(iVar3, 0, 0, 0);
	iVar7 = func_139(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_141(iVar7, iVar5), 8);
	_databinding_write_data_string_from_parent(iVar0, "count", &cVar8);
	_databinding_write_data_bool_from_parent(iVar0, "visible", 0);
	if (func_31(uParam0, 2))
	{
		iVar9 = func_123((iVar5 > 0 && func_136(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_123((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_218(iVar3))
	{
		if (func_219(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eOutputItem", iVar11);
				_databinding_write_data_int_from_parent(iVar0, "eCost", iVar12);
				_databinding_write_data_int_from_parent(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_31(uParam0, 4))
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913694->f_1579 && func_134(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	_databinding_write_data_bool_from_parent(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if (!func_137(2) && func_65(iVar3, -1636519629) == -701492487)
		{
			(*Global_1913694)[iParam1]->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			(*Global_1913694)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		if (((func_31(uParam0, 128) && iVar9 == 0) && (*Global_1913694)[iParam1]->f_2) && bParam4)
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0->f_29, iVar0);
		}
		(*Global_1913694)[iParam1]->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_220(iVar3, &Var15, 805880880, 0, 0, 0))
		{
			_databinding_write_data_string_from_parent(iVar0, "texture", Var15);
			_databinding_write_data_string_from_parent(iVar0, "textureDictionary", Var15.f_1);
		}
		_databinding_write_data_hash_string_from_parent(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", 0);
		_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", 0);
		if (_item_database_fillout_item_effects_ids(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (_item_database_fillout_item_effects_id_info(&(Var18.f_1[iVar41]), &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							_databinding_write_data_int_from_parent(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeyeCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "deadeye", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							_databinding_write_data_int_from_parent(iVar0, "health", iVar49);
							break;
						case -416929031:
							_databinding_write_data_int_from_parent(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "health", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							_databinding_write_data_int_from_parent(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCore", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "stamina", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "healthCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaCoreHorse", 12);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							_databinding_write_data_int_from_parent(iVar0, "staminaHorse", 11);
							_databinding_write_data_hash_string_from_parent(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		_databinding_write_data_bool_from_parent(iVar0, "overpower", iVar40);
	}
	if (!func_31(uParam0, 4) && _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	_databinding_write_data_int_from_parent(iVar0, "enabled", iVar9);
}

int func_127(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

void func_128(var uParam0, bool bParam1)
{
	if (_does_scenario_point_exist(uParam0->f_12))
	{
		iVar0 = _get_entity_scenario_point_is_attached_to(uParam0->f_12);
	}
	if (does_entity_exist(iVar0))
	{
		set_entity_collision(iVar0, bParam1, false);
	}
}

void func_129(var uParam0, var uParam1)
{
	_0xd962f8579d702db5();
	iVar0 = _databinding_read_data_int_from_parent(*uParam1, "eOutputItem");
	iVar1 = _databinding_read_data_int_from_parent(*uParam1, "eCost");
	iVar2 = iVar0;
	_0xd962f8579d702db5();
	if (func_25(iVar2, 0) && (func_31(uParam0, 2) || func_211(iVar2, uParam0->f_41)))
	{
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		uParam0->f_61 = iVar2;
		uParam0->f_62 = iVar1;
		func_69(uParam0->f_1[1], 1, 1);
		iVar3 = _databinding_read_data_int_from_parent(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 1);
			_databinding_write_data_string_from_parent(uParam0->f_28, "variantText", _create_var_string(0, uParam0->f_61));
			_databinding_write_data_int_from_parent(uParam0->f_28, "variantCount", iVar3);
			iVar4 = _databinding_read_data_int_from_parent(*uParam1, "iCurCostVariant");
			iVar5 = _databinding_read_data_int_from_parent(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913694)
			{
				iVar6 = (*Global_1913694)[iVar5]->f_8;
			}
			_databinding_write_data_int_from_parent(uParam0->f_28, "variantIndex", (iVar4 + 1 - iVar6));
			func_5(uParam0, 4096);
			if (func_68(&(uParam0->f_1[5])))
			{
				func_54(&(uParam0->f_1[5]), 1, 1, 1);
			}
		}
		else
		{
			_databinding_write_data_bool_from_parent(uParam0->f_28, "variantVisible", 0);
			func_6(uParam0, 4096);
			if (func_68(&(uParam0->f_1[5])))
			{
				func_54(&(uParam0->f_1[5]), 0, 1, 1);
			}
		}
		if (!func_31(uParam0, 2))
		{
			uParam0->f_42 = round((get_anim_duration(func_163(uParam0->f_61), func_164(uParam0->f_61)) * 1000f));
		}
		if (_databinding_read_data_bool_from_parent(*uParam1, "bFireCrafting"))
		{
			func_5(uParam0, 8192);
		}
		else
		{
			func_6(uParam0, 8192);
		}
		uParam0->f_57 = *uParam1;
		uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		func_53(uParam0, uParam0->f_61, uParam0->f_62);
		func_73(&(uParam0->f_1[1]), 11, 1, 1);
		if (Global_1913694->f_1579 || !func_134(uParam0->f_61, uParam0->f_62, 1))
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", func_157(iVar2));
			func_62(uParam0, 0);
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_28, "RPGDescription", 0);
		}
		if (_databinding_read_data_bool_from_parent(uParam0->f_28, "ShowRpgDescription"))
		{
			if (Global_1913694->f_1579 || !func_134(uParam0->f_61, uParam0->f_62, 1))
			{
				func_159(uParam0);
			}
		}
	}
}

bool func_130(int iParam0)
{
	if (func_178(iParam0) == 2085633299 && _0x245d07651b1d183b(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

char* func_131(var uParam0)
{
	if (func_31(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	while (iVar0 < 60)
	{
		if (func_112(iVar0, 2))
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
		func_166(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	if (!func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1951255)[iVar0]->f_3, iParam1);
}

bool func_134(int iParam0, int iParam1, bool bParam2)
{
	if (!func_25(iParam0, 0))
	{
		return func_221(func_167(iParam0), iParam1, bParam2);
	}
	if (func_222(iParam0))
	{
		return func_224(func_223(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_27() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_225(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_135(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694->f_1579 && !bParam5)
	{
		if (func_185(iParam0))
		{
			if (func_224(func_186(iParam0), iParam1))
			{
				return false;
			}
		}
		else if (func_134(iParam0, iParam1, 1))
		{
			return false;
		}
	}
	if (func_185(iParam0))
	{
		if (func_187(func_186(iParam0), iParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_226(iParam0, 1, iParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_136(int iParam0)
{
	iVar0 = func_228(func_227());
	iVar1 = func_228(iParam0);
	return iVar1 > iVar0;
}

bool func_137(int iParam0)
{
	return func_229(Global_1940144->f_38, iParam0);
}

int func_138(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_178(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_230(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_231(iParam0, 0);
	}
	if (func_232(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_171(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_233(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_171(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_139(int iParam0, bool bParam1)
{
	Var0 = { func_183(iParam0, 0, 0) };
	return func_234(iParam0, &Var0, 0, bParam1);
}

int func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_148(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_80(0)) && !func_81());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715->f_20638)
	{
		iVar35 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_235(iVar35, &(Var0[iVar32]));
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_236(&(Var0[iVar32]), iVar36);
			}
			else
			{
				iVar37 = func_138(&(Var0[iVar32]), 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_237(&(Var0[iVar32])) || func_238(&(Var0[iVar32])))
				{
					iVar37 = (iVar37 + func_239(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_240(7, &(Var0[iVar32]), &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_241(7, &(Var0[iVar32])) + func_242(&(Var0[iVar32]))));
				}
			}
			if (iVar37 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_142(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	bVar34 = !bParam4;
	_databinding_clear_binding_array(uParam2->f_40);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		_databinding_remove_binding_array_item_by_data_context_id(uParam2->f_40, &(uParam2->f_35[iVar33]));
		_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_148(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33];
				if (func_25(iVar31, 0))
				{
					_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "visible", 1);
					if (func_220(iVar31, &Var35, 805880880, 0, 0, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam2->f_30[iVar33]), "texture", Var35);
						_databinding_write_data_string_from_parent(&(uParam2->f_30[iVar33]), "textureDictionary", Var35.f_1);
					}
					iVar38 = func_138(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33]->f_1;
					_databinding_write_data_int_from_parent(&(uParam2->f_30[iVar33]), "count", iVar38);
					_databinding_write_data_int_from_parent(&(uParam2->f_30[iVar33]), "enabled", func_123(bVar39, 1, 0));
					_databinding_write_data_bool_from_parent(&(uParam2->f_30[iVar33]), "inUse", 1);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = _create_var_string(10, "CRFT_ING_LIST", _create_var_string(0, &(Var0[iVar33])), Var0[iVar33]->f_1);
					StringCopy(&cVar41, "Text", 16);
					_databinding_write_data_string_from_parent(&(uParam2->f_35[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					_databinding_write_data_int_from_parent(&(uParam2->f_35[iVar33]), &cVar41, func_123(bVar39, 1, 0));
					_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam2->f_40, -1, 309940639, &(uParam2->f_35[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == 278772510))
		{
			bVar34 = false;
			if (func_130(iParam0))
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_138(iParam0, 0, 0, 0);
			iVar44 = func_139(iParam0, 0);
			if (func_31(uParam2, 2) && !func_136(iParam0))
			{
				bVar34 = false;
				iVar45 = func_227();
				if (iParam0 == iVar45)
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE"));
				}
				else
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_65(iParam0, -1636519629);
				if (!func_137(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_CONS"));
				}
				else if (does_entity_exist(iParam3))
				{
					_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(34, "CRFT_BREAK", 1, _create_var_string(0, _0x0139637a3bff8b6d(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_140(iParam0, uParam2->f_62, func_82(), 0);
					if (func_31(uParam2, 2))
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, func_243(iParam0)));
					}
					else if (uParam2->f_62 == -214678071)
					{
						if (_databinding_read_data_int_from_parent(uParam2->f_57, "iNumCostVariants") <= 1 && _databinding_read_data_bool_from_parent(uParam2->f_28, "ShowRpgDescription"))
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_62 == 278772510)
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(130, "CRFT_ING_MAX", iVar43, iVar44, _create_var_string(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_LOCK"));
	}
	else if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == 278772510))
	{
		bVar34 = false;
		if (func_130(iParam0))
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_31(uParam2, 2) && !func_136(iParam0))
	{
		iVar49 = func_227();
		if (iParam0 == iVar49)
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		_databinding_write_data_string_from_parent(uParam2->f_28, "tipText", _create_var_string(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_143(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		if (!func_76(uParam0->f_61, -2011345500))
		{
			func_69(uParam0->f_1[7], 1, 1);
			return;
		}
		if (!func_68(&(uParam0->f_1[7])))
		{
			uParam0->f_1[7] = func_71("CAMP_ADD_TASK", -1981136987, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		}
		if ((uParam0->f_26 > 0 || uParam0->f_61 == Global_1137047->f_339.f_16) || !func_136(uParam0->f_61))
		{
			func_54(&(uParam0->f_1[7]), 0, 1, 1);
		}
		else
		{
			func_54(&(uParam0->f_1[7]), 1, 1, 1);
		}
	}
}

void func_144(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_145(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_112(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_148(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_244(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_178(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_245(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_246(iParam0))
			{
				return true;
			}
			break;
	}
	return func_138(iParam0, 0, 0, 0) >= iParam1;
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_151(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_152(var uParam0, char* sParam1)
{
	if (func_68(*uParam0))
	{
		iVar0 = func_117(*uParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, sParam1);
		}
	}
}

struct<10> func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_154(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0)
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

int func_157(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_158(var uParam0)
{
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
}

void func_159(var uParam0)
{
	if ((func_76(uParam0->f_61, 1147021565) || func_31(uParam0, 2)) && !func_76(uParam0->f_61, 1919582297))
	{
		if (func_211(uParam0->f_61, 5))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 2);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 1);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
		}
		else
		{
			_0x7e2c766adb2c5f1a(uParam0->f_61, 1);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
			_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		_0xd962f8579d702db5();
		_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgHorse", 0);
		_databinding_write_data_bool_from_parent(uParam0->f_28, "ShowRpgPlayer", 0);
	}
}

void func_160(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0->f_28, "filterIndex");
	uParam0->f_41 = iVar0;
	_databinding_write_data_hash_string_from_parent(uParam0->f_28, "filter", func_122(uParam0->f_41));
}

int func_161(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return -236347221;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return 1537403900;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return 809653548;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 975914773;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_162(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_is_weapon_pistol(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (_is_weapon_revolver(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (_is_weapon_rifle(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (_is_weapon_repeater(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (_is_weapon_shotgun(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_163(var uParam0)
{
	if (is_ped_male(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_164(var uParam0)
{
	return "craft_trans_stow";
}

void func_165(int iParam0)
{
	if (!func_247(iParam0))
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

void func_166(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_145(iParam0, 1);
	func_146(iParam0, 1);
	func_147(iParam0, 128);
}

int func_167(int iParam0)
{
	return iParam0;
}

int func_168(int iParam0, int iParam1)
{
	if (!func_248(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
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

bool func_170(int iParam0)
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

int func_171(bool bParam0)
{
	if (func_27() == -1)
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

int func_172(int iParam0)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

float func_173(int iParam0, int iParam1, bool bParam2)
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
	return func_250(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_174(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_80(0))
	{
		return 0;
	}
	else if (func_81())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915715->f_20638)
	{
		iVar0 = Global_1915715->f_20241;
	}
	if (!func_226(iParam0, 1, iParam1, &iVar32, &uVar36, bParam3, 0, 0))
	{
		iVar34 = iVar32;
		return 0;
	}
	if (func_148(iParam0, iParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar34 = &Var1[iVar38];
			iVar37 = func_235(iVar0, iVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_25(iVar34, 0))
			{
				if (iVar34 == 2084597891)
				{
					func_251(Var1[iVar38]->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_237(iVar34) || func_238(iVar34))
					{
						if (!func_149(iVar34, Var1[iVar38]->f_1))
						{
							iVar39 = func_252(7, iVar34, Var1[iVar38]->f_1);
						}
						func_253(iVar34, iVar39, 562618531, 0, 0);
						Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - iVar39);
						if (Var1[iVar38]->f_1 > 0)
						{
							if (!func_149(iVar34, Var1[iVar38]->f_1))
							{
								func_254(iVar34, Var1[iVar38]->f_1);
							}
							if (func_149(iVar34, Var1[iVar38]->f_1))
							{
								func_255(iVar34, Var1[iVar38]->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_242(iVar34) > 0)
						{
							func_256(iVar34);
							Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - 1);
						}
						if (Var1[iVar38]->f_1 > 0)
						{
							if (func_241(7, iVar34) > 0)
							{
								func_257(7, iVar34, Var1[iVar38]->f_1);
								Var1[iVar38]->f_1 = (Var1[iVar38]->f_1 - func_257(7, iVar34, Var1[iVar38]->f_1));
							}
						}
						if (Var1[iVar38]->f_1 > 0)
						{
							func_255(iVar34, Var1[iVar38]->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_237(iVar34) || func_238(iVar34))
					{
						if (!func_149(iVar34, Var1[iVar38]->f_1))
						{
							func_254(iVar34, Var1[iVar38]->f_1);
						}
					}
					func_255(iVar34, Var1[iVar38]->f_1, bParam2, 562618531);
				}
				else
				{
					func_258(iVar34, iVar37, Var1[iVar38]->f_1, 562618531);
				}
				iVar40 = func_259(iVar34);
				if (func_260(iVar40))
				{
					iVar41 = func_261(iVar40);
					func_89(func_88(-333926856, iVar41), Var1[iVar38]->f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_175(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_176(int iParam0, bool bParam1)
{
	if (!func_25(iParam0, 0))
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

void func_177(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_262(iParam0))
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

int func_178(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_179(int iParam0, bool bParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!func_263(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_264() };
	Var10.f_4 = uVar9;
	if (func_265(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_266(iParam0, 1))
			{
			}
		}
		if (func_267(iParam0))
		{
			func_179(func_268(iParam0), 1);
		}
		func_269();
		return true;
	}
	return false;
}

void func_180(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_25(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_270() || bParam6)
	{
		func_271(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_272(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_272(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_273(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_178(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_188(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_220(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_76(iParam0, 474910316))
	{
		sVar17 = func_274(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_76(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_275(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_276(iParam0);
	if ((func_277(iVar12) && func_76(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_278(iParam0);
	}
	else if (func_178(iParam0) == -1037537535)
	{
		iVar19 = func_279(iParam0);
		if (func_25(iVar19, 0))
		{
			iVar18 = func_276(iVar19);
		}
	}
	if (func_280(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_281(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_282(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_283(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_284(iParam0, &cVar22))
		{
			sVar21 = func_286(func_285(cVar22), 109029619);
		}
	}
	func_287(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!func_288(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_289(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_290(iParam0, bParam2);
	iVar2 = 0;
	if (func_178(iParam0) == -1037537535)
	{
		if (!func_76(iParam0, 866047851) && !func_76(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_273(iParam0, 8388608) && !func_291(27))
	{
		func_292(27);
	}
	func_293(iParam0);
	if (!bVar3)
	{
		if (func_76(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_176(func_77(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_27() == -1)
				{
					func_177(iVar1);
				}
				if (func_80(0) && func_294(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_295(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_296(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_178(iParam0) == -427144552)
		{
			if (!func_297(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_178(iParam0) == 307971639 && func_298(iParam0))
		{
			if (!func_299(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_76(iParam0, -103750053))
		{
			func_89(func_175(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_89(func_88(-717883113, 2091222383), iVar0);
		}
		else if (func_76(iParam0, -121341956) && !func_76(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_300(536, 0);
			}
			if (func_76(iParam0, -2017733358) || func_76(iParam0, -1369131378))
			{
			}
		}
		else if (func_76(iParam0, -136654233))
		{
			if (func_76(iParam0, -1021472396))
			{
			}
		}
		else if (func_76(iParam0, -1466706512) && func_76(iParam0, 1147021565))
		{
			func_300(519, 0);
		}
		else if (func_76(iParam0, 1147021565) && func_76(iParam0, -524514947))
		{
		}
		else if (func_76(iParam0, 554195525))
		{
		}
		else if (func_76(iParam0, 589988438))
		{
			if (func_301())
			{
				func_302(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_76(iParam0, 787083290) && func_76(iParam0, 949916894))
		{
			func_303(iParam0);
		}
		else if (func_76(iParam0, -1718133314))
		{
			func_304(iParam0);
		}
		else if (func_76(iParam0, -1738650224))
		{
			func_305(iParam0);
		}
		else if (func_76(iParam0, -1112814642) && func_76(iParam0, 949916894))
		{
			func_306(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_76(iParam0, 1841149704))
		{
			func_307();
		}
		else if (func_76(iParam0, -1979000645))
		{
		}
		else if (func_76(iParam0, 606799272))
		{
		}
		else if (func_76(iParam0, -1112814642) && func_76(iParam0, -1697809989))
		{
		}
		else if (func_76(iParam0, -2017733358) || func_76(iParam0, -1369131378))
		{
		}
		else if (func_76(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_76(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_149(215778062, 1))
					{
						func_181(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_149(670273567, 1))
					{
						func_181(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_149(-967317137, 1))
					{
						func_181(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_149(526074061, 1))
					{
						func_181(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_149(-1045488665, 1))
					{
						func_181(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_149(471514780, 1))
					{
						func_181(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_76(iParam0, -839724752) && func_273(iParam0, 4))
		{
		}
		else if (func_76(iParam0, 1399091007))
		{
			func_308(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_309(272, func_276(-21093309), 0);
				break;
			case 204375141:
				func_309(270, func_276(204375141), 0);
				break;
			case -417963070:
				func_309(271, func_276(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
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
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_310(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_300(526, 0);
				break;
			case 1613651027:
				func_300(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_291(1))
				{
					func_300(522, 0);
				}
				break;
			case -898386032:
				func_300(521, 0);
				break;
			case -2035110427:
				if (func_27() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_300(534, 0);
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
		iVar5 = iParam0;
		func_311(&iVar5);
		if (!func_296(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_80(0))
		{
			return 1;
		}
		if (func_178(iParam0) == -1037537535)
		{
			func_312(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_80(0) && !func_81())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_181(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_313(iVar2, 0);
		}
	}
	Var30 = { func_314(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_315(iParam0);
	if (fParam6 > 0f)
	{
		if (func_76(iParam0, -839724752))
		{
			func_316(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_180(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	if (!func_317(iParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_318(iParam1);
	Var0 = { func_319(0) };
	if (!func_265(iParam0, &uVar5, &Var0, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<5> func_183(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_319(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_178(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_320(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_321(bParam1) };
			if (bParam2 && func_322(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_323(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_323(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_324(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_325(bParam1) };
			switch (func_188(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_326(iParam0, -1823706425))
			{
				Var0 = { func_320(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_326(iParam0, -1483207246))
			{
				Var0 = { func_320(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_320(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_326(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_327(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_326(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

bool func_184(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_328(&iParam0);
	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_232(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_329(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_321(0) };
		Var4.f_9 = -1591664384;
		if (!func_323(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_324(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_322(iParam0, 1))
		{
			if (!func_323(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_324(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_234(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_330(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0)
{
	return (func_331(iParam0) && func_76(iParam0, 1584357097));
}

int func_186(int iParam0)
{
	if (!func_185(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_187(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_332(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_333(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_334(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_235(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_236(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_138(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_188(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_189(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_25(iParam0, 0))
	{
		return -1;
	}
	if (func_178(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_81())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_335(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_335(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_148(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_138(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_80(0))
	{
		if (iVar0 > 0)
		{
			func_253(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_253(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_336(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_253(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_337(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_194(iVar52, Var53);
	}
	return iVar52;
}

bool func_190(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_338(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_339(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_340(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = -1883671814;
	}
	if (!func_341(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_191(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_338(iParam0, 0))
	{
		return false;
	}
	if (!func_342(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_343(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_344(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_192(int iParam0, int iParam1)
{
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = _0x12df9c58201dd19a(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (_0x1fc25aeb5f76b38d(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
	if (func_222(iParam0))
	{
		return func_192(func_223(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_194(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	_uiprompt_restart_modes((*Global_1951255)[iVar0]->f_3);
}

float func_196(var uParam0)
{
	if (!func_96(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_345(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_346() - uParam0->f_1);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_346() - fParam1);
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_199(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

void func_200(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_100(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 13, &uParam15);
}

void func_201(int iParam0, bool bParam1)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		if ((!network_is_player_active((*Global_1134390)[iVar0]->f_38.f_28.f_2) || (*Global_1134390)[iVar0]->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			(*Global_1134390)[iVar0]->f_38.f_28.f_2 = 255;
			(*Global_1134390)[iVar0]->f_38.f_28.f_3 = -1;
		}
	}
}

void func_202(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	_0x86a68e84e5884951(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	_0x28eeace9b43d9597(&Var0, &Var7, &Var0);
	(*Global_1134390)[iParam0]->f_38.f_28.f_1 = uParam1;
	Global_1137047->f_339.f_1 = uParam1;
	Global_1137047->f_339.f_9 = { Var0 };
}

int func_203(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_349(player_id());
	}
	return func_350(_0x4be6c13a45cca8ec(iParam0));
}

void func_204(int iParam0, var uParam1)
{
	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_200(17, Var0, func_351(0, 8));
}

void func_205(var uParam0)
{
	Var0.f_12 = uParam0;
	func_200(13, Var0, func_199(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))));
}

struct<2> func_206(int iParam0)
{
	return func_88(-1108808256, iParam0);
}

struct<2> func_207(int iParam0)
{
	if (func_211(iParam0, 0))
	{
		Var0 = { func_88(-1276738576, -1555359431) };
	}
	else if (func_211(iParam0, 2))
	{
		Var0 = { func_88(-1276738576, 307971639) };
	}
	else if (func_211(iParam0, 5))
	{
		Var0 = { func_88(-1276738576, 644069854) };
	}
	else if (func_211(iParam0, 1))
	{
		Var0 = { func_88(-1276738576, -97115714) };
	}
	else if (func_211(iParam0, 3))
	{
		Var0 = { func_88(-1276738576, -2143405780) };
	}
	else if (func_211(iParam0, 4))
	{
		Var0 = { func_88(-1276738576, 1455184052) };
	}
	return Var0;
}

Vector3 func_208(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_352()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

int func_209(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_353(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_354(uParam1, iParam0, Var3);
	return 1;
}

int func_210(int iParam0, bool bParam1, int iParam2)
{
	if (func_355(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	if (!func_106(func_357(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_211(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_178(iParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_76(iParam0, -537818634) || func_76(iParam0, -458578204)) && !func_76(iParam0, -1242251796)) && !func_76(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 307971639)
			{
				if (func_76(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -427144552)
			{
				return true;
			}
			else if (iVar0 == 307971639)
			{
				if (func_76(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_130(iParam0) || func_65(iParam0, -1636519629) == -701492487) || iParam0 == 894654881)
			{
				return true;
			}
			break;
		case 4:
			if (func_76(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_76(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_212(int iParam0)
{
	if (func_358())
	{
		return 0;
	}
	if (!_0xdd73c9838ce7181d())
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_361(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_106(func_362(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, int iParam1, int iParam2)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 1644203656 && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913694->f_1579 || !func_134(iParam1, Var1, 1)))
				{
					((*Global_1913694)[(uParam0->f_44 - 1)])->f_7++;
				}
			}
			else
			{
				((*Global_1913694)[(uParam0->f_44 - 1)])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_214(var uParam0, int iParam1)
{
	iVar2 = func_65(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_154(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_155(iVar13, iVar0);
			if (func_25(iVar14, 0))
			{
				if (Global_1913694->f_1579 || !func_134(iVar14, 278772510, 1))
				{
					((*Global_1913694)[(uParam0->f_44 - 1)])->f_7++;
				}
			}
			iVar13++;
		}
		func_156(iVar0);
	}
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	iVar2 = func_65(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_154(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_44 >= 175)
			{
			}
			else
			{
				iVar14 = func_155(iVar13, iVar0);
				if (func_25(iVar14, 0) && iVar14 != iParam1)
				{
					func_120(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_156(iVar0);
	}
}

void func_216(int iParam0)
{
	func_156(*iParam0);
	*iParam0 = -1;
}

void func_217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = (*Global_1913694)[iParam1]->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (_databinding_is_data_id_valid((*Global_1913694)[iParam1]->f_1))
	{
		_databinding_remove_data_entry((*Global_1913694)[iParam1]->f_1);
	}
	iVar5 = _databinding_add_data_container(uParam0->f_29, &cVar1);
	(*Global_1913694)[iParam1]->f_1 = iVar5;
	iVar6 = (*Global_1913694)[iParam1]->f_5;
	iVar7 = func_140(iVar0, iVar6, bParam3, 0);
	iVar8 = func_138(iVar0, 0, 0, 0);
	iVar9 = func_139(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	_databinding_add_data_hash(iVar5, "name", iVar0);
	_databinding_add_data_int(iVar5, "eOutputItem", iVar0);
	_databinding_add_data_int(iVar5, "eCost", iVar6);
	_databinding_add_data_int(iVar5, "iIndex", iParam1);
	if (!Global_1913694->f_1579 && func_134(iVar0, iVar6, 1))
	{
		bVar10 = true;
		(*Global_1913694)[iParam1]->f_7 = 0;
	}
	_databinding_add_data_int(iVar5, "iCurCostVariant", (*Global_1913694)[iParam1]->f_8);
	_databinding_add_data_int(iVar5, "iNumCostVariants", (*Global_1913694)[iParam1]->f_7);
	_databinding_add_data_bool(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_141(iVar9, iVar7), 8);
	_databinding_add_data_string(iVar5, "count", &cVar11);
	_databinding_add_data_bool(iVar5, "visible", false);
	bVar13 = false;
	if (func_31(uParam0, 2))
	{
		iVar12 = func_123(((iVar7 > 0 && func_136(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_123(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_218(iVar0))
	{
		if (func_219(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			iVar0 = iVar14;
			iVar6 = iVar15;
			_databinding_write_data_hash_string_from_parent(iVar5, "name", iVar14);
			_databinding_write_data_int_from_parent(iVar5, "eOutputItem", iVar14);
			_databinding_write_data_int_from_parent(iVar5, "eCost", iVar15);
			_databinding_write_data_int_from_parent(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_220(iVar0, &Var17, 805880880, 0, 0, 0))
	{
		_databinding_add_data_string(iVar5, "texture", Var17);
		_databinding_add_data_string(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_31(uParam0, 4))
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_137(2) && func_65(iVar0, -1636519629) == -701492487)
		{
			(*Global_1913694)[iParam1]->f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_46++;
			if (func_211(iVar0, uParam0->f_41))
			{
				uParam0->f_47++;
			}
			(*Global_1913694)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		(*Global_1913694)[iParam1]->f_2 = 0;
	}
	if (bVar13)
	{
	}
	_databinding_add_data_bool(iVar5, "lockVisible", bVar10);
	_databinding_add_data_int(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	_databinding_add_data_hash(iVar5, "deadeyeCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "deadeyeDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "healthCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaCoreHorseDurationCategory", 0);
	_databinding_add_data_hash(iVar5, "staminaHorseDurationCategory", 0);
	if (_item_database_fillout_item_effects_ids(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var20.f_1[iVar43]), &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						_databinding_add_data_int(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						_databinding_add_data_int(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeyeCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "deadeye", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						_databinding_add_data_int(iVar5, "health", iVar51);
						break;
					case -416929031:
						_databinding_add_data_int(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "health", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						_databinding_add_data_int(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						_databinding_add_data_int(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCore", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "stamina", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						_databinding_add_data_int(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						_databinding_add_data_int(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "healthCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						_databinding_add_data_int(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaCoreHorse", 12);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						_databinding_add_data_int(iVar5, "staminaHorse", 11);
						_databinding_write_data_hash_string_from_parent(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	_databinding_add_data_bool(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_29, -1, -2047994727, iVar5);
	}
}

bool func_218(int iParam0)
{
	return true;
}

bool func_219(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694->f_1579 && func_134(iParam0, iParam1, 1))
	{
		return false;
	}
	if (func_31(uParam2, 2) && !func_136(iParam0))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == 278772510)
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
		iVar12 = func_65(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_153(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
		if (func_154(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_155(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913694->f_1579 && func_134(iVar14, 278772510, 1))
				{
				}
				else if (func_85(iVar14, 278772510, 0, bParam3, 0) && !func_86(iVar14, 1, 0))
				{
					func_156(iVar0);
					*iParam4 = iVar14;
					*iParam5 = 278772510;
					*iParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			func_156(iVar0);
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_153(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_154(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_155(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913694->f_1579 && func_134(iVar16, -214678071, 1))
					{
					}
					else if (func_85(iVar16, -214678071, 0, bParam3, 0) && !func_86(iVar16, 1, 0))
					{
						func_156(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_156(iVar0);
			}
		}
	}
	else
	{
		iVar17 = _item_database_get_acquire_costs_count(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == 1644203656)
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913694->f_1579 || !func_134(iParam0, Var18, 1)))
					{
						if (func_85(iParam0, Var18, 0, bParam3, 0) && !func_86(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_220(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_221(int iParam0, int iParam1, bool bParam2)
{
	if (!func_248(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_27() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_363(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
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
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_222(int iParam0)
{
	if (func_76(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_223(int iParam0, bool bParam1)
{
	if (!func_25(iParam0, 0))
	{
		return func_364(func_167(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_224(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_5 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_8 < iScriptParam_5)
	{
		if (&Var0[iScriptParam_8] == iParam1)
		{
			iVar473 = Var0[iScriptParam_8]->f_35;
			iVar475 = 0;
			while (iScriptParam_9 < iScriptParam_7)
			{
				uVar472 = &Var0[iScriptParam_8]->f_36[iScriptParam_9];
				if (iScriptParam_6 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_6))
				{
					return true;
				}
				iVar475 = iScriptParam_9 + 1;
			}
		}
		iVar474 = iScriptParam_8 + 1;
	}
	return false;
}

bool func_225(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

bool func_226(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_222(iParam0))
	{
		return func_187(func_223(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_148(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_80(0)) && !func_81());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_333(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_334(iVar32)))
			{
			}
			else
			{
				iVar36 = func_235(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_236(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_138(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_237(&(Var0[iVar34])) || func_238(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_240(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_239(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_241(7, &(Var0[iVar34]))) + func_242(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_227()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	return func_119(iVar0);
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_76(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_230(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_76(iParam0, 1399091007))
	{
		func_365(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_231(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_366(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_367(&Var0, func_321(0));
	}
	if (!func_368(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_369(iVar14);
	return uVar15;
}

int func_232(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_233(int iParam0, bool bParam1)
{
	Var0 = { func_183(iParam0, bParam1, 0) };
	return func_320(iParam0, Var0, Var0.f_4, bParam1);
}

int func_234(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return 0;
	}
	if (func_178(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_232(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_171(bParam3), iParam0);
}

int func_235(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_76(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_171(0), &Var5, 0);
	return iVar9;
}

bool func_237(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, -887064662))
	{
		return true;
	}
	return func_238(iParam0);
}

bool func_238(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_239(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!func_237(iParam0) && !func_238(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_65(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_154(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_155(iVar15, iVar1);
			if (func_25(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_370(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_236(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_372(iVar16, func_371(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_156(iVar1);
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_374(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_241(int iParam0, int iParam1)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_242(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

char* func_243(int iParam0)
{
	switch (func_228(iParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

void func_244(int iParam0, int iParam1, var uParam2, int iParam3)
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
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_188(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_245(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_230(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_375("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_376(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_262(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_369(iVar1);
				return true;
			}
			iVar3++;
		}
		func_369(iVar1);
	}
	return false;
}

bool func_246(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_188(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_377(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_378(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_379(iParam0);
	iVar2 = func_378(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

bool func_247(int iParam0)
{
	return func_112(iParam0, 2);
}

bool func_248(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_249(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

float func_250(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_251(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_27() == 0)
	{
		iVar0 = func_380();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_381(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_382(iParam0);
		if (bParam3)
		{
			func_383(iParam0, sParam1, iParam2);
		}
	}
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
			if (!func_374(iVar28))
			{
			}
			else
			{
				_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_296(iParam1, 1, 752097756);
						if (does_entity_exist(iVar28))
						{
							iVar31 = func_384(&iVar28);
							if (!func_25(iVar31, 0))
							{
								iVar31 = func_385(iVar28);
							}
							if (func_25(iVar31, 0))
							{
								func_386(iVar31, 1, 1, -142743235);
							}
							_0x0d0db2b6af19a987(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

bool func_253(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_232(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_387(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_183(iParam0, bParam4, 0) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, bParam4) };
	return func_388(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_254(int iParam0, int iParam1)
{
	if (iParam1 > 0)
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
		iVar12 = func_65(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_153(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_154(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_155(iVar14, iVar0);
					if (func_25(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_138(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_389(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_156(iVar0);
		}
	}
}

bool func_255(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_390(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_230(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_180(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_149(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_314(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_138(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_138(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_255(iParam0, func_138(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_178(iParam0) == -427144552)
	{
		if (!func_391(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_253(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_183(iParam0, 0, 0) };
		if (func_80(0) && Var7.f_4 == 1084182731)
		{
			func_392(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_180(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

void func_256(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (is_entity_a_ped(iVar0))
			{
				iVar13 = func_393(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == iParam0)
					{
						_0x0d0db2b6af19a987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (_0x9e7738b291706746(&iVar15, iVar1, _get_ped_damage(iVar1)) && iVar15 == iParam0)
			{
				_0x0d0db2b6af19a987(&iVar0);
			}
		}
	}
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_394(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_27() == 0)
	{
		return 0;
	}
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!func_388(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
{
	switch (iParam0)
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
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return !iParam0 <= 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return 1516353659;
		case 20:
			return -1040706491;
		case 21:
			return -1910627346;
		case 24:
			return -1812487593;
		case 27:
			return 1983971282;
		case 28:
			return 1561519041;
		case 29:
			return -980496853;
		case 30:
			return -1738887126;
		case 32:
			return 424771379;
		case 34:
			return 787316814;
		case 35:
			return 984616481;
		case 38:
			return 1078285403;
		case 39:
			return -262897007;
		case 49:
			return -1727702531;
		case 50:
			return 1783324404;
		case 51:
			return 1288848815;
		case 52:
			return 918090738;
		case 53:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 22:
			return -819513569;
		case 23:
			return 1906968775;
		case 25:
			return -135434663;
		case 26:
			return 920123680;
		case 31:
			return 150470908;
		case 33:
			return -1665125257;
		case 36:
			return 1587928307;
		case 37:
			return -1738925422;
		case 40:
			return 656594395;
		case 42:
			return -1174738785;
		case 43:
			return 1073505629;
		case 41:
			return -658674894;
		case 44:
			return -1504155535;
		case 45:
			return -1917345716;
		case 46:
			return 1823406682;
		case 47:
			return -1003637772;
		case 48:
			return -1571524081;
	}
	return 0;
}

bool func_262(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_263(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_188(iParam1);
		iVar5 = func_395(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (func_396(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_183(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_320(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_171(0);
			Var37 = { func_183(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_320(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_188(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (func_396(iParam0, iVar1, iVar2))
							{
								if (func_397(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
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

struct<4> func_264()
{
	Var0 = { func_319(0) };
	return func_320(856287005, Var0, -218846335, 0);
}

bool func_265(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_184(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_171(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_266(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!func_263(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_264() };
	Var14 = { func_320(iParam0, Var10, iVar9, 0) };
	if (func_398(Var14, iParam1, 0))
	{
		if (func_399(iParam0))
		{
			if (func_400(325139909, &iVar18))
			{
				if (func_266(iVar18, 0))
				{
				}
			}
		}
		else if (func_401(iParam0))
		{
			if (func_400(325139909, &iVar19))
			{
				if (func_266(iVar19, 0))
				{
				}
			}
			if (func_400(-1189569496, &iVar20))
			{
				if (func_266(iVar20, 0))
				{
				}
			}
		}
		else if (func_402(iParam0))
		{
			if (func_400(325139909, &iVar21))
			{
				if (func_266(iVar21, 0))
				{
				}
			}
			if (func_400(-1189569496, &iVar22))
			{
				if (func_266(iVar22, 0))
				{
				}
			}
			if (func_400(-997150586, &iVar23))
			{
				if (func_266(iVar23, 0))
				{
				}
			}
		}
		else if (func_267(iParam0))
		{
			if (func_400(325139909, &iVar24))
			{
				if (func_266(iVar24, 0))
				{
				}
			}
			if (func_400(986998820, &iVar25))
			{
				if (func_266(iVar25, 0))
				{
				}
			}
			iVar26 = func_268(iParam0);
			if (func_25(iVar26, 0))
			{
				if (func_266(iVar26, 1))
				{
				}
			}
		}
		func_269();
		return true;
	}
	return false;
}

bool func_267(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_268(int iParam0)
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

int func_269()
{
	Var0 = { func_183(856287005, 0, 0) };
	Var5 = { func_320(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_188(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_403(Var5, -415648720, 0, -1);
	}
	if (!func_25(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_395(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_403(Var5, iVar11, 0, -1);
			if (!func_25(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((func_267(iVar14) || func_399(iVar14)) || func_401(iVar14)) || func_402(iVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == -1189569496)
						{
							if (func_401(iVar14) || func_402(iVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == -997150586)
								{
									if (func_402(iVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == 986998820)
										{
											if (func_267(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == -1189569496)
												{
													if (!func_267(iVar14) && func_404(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_405(iVar11, &Var16, 1))
													{
														if (!func_398(Var16, 1, 0))
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
			}
		}
	}
}

bool func_270()
{
	return !&Global_1913504;
}

void func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_272(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_273(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

char* func_274(int iParam0)
{
	if (func_76(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_76(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_76(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_76(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_76(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_76(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_76(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_76(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_76(iParam0, -352095726) || func_76(iParam0, -2014783736)) || func_76(iParam0, -545064757)) || func_76(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_275(int iParam0)
{
	if (func_76(iParam0, -189374246))
	{
		if (((func_406(iParam0, -1305775593) || func_406(iParam0, 1384151091)) || func_406(iParam0, 2075388272)) || func_406(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_76(iParam0, -753854379) || func_76(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_277(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_278(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	iVar0 = func_408(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_153(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_154(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_409(iVar14))
			{
				func_156(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_156(iVar11);
	}
	return 0;
}

bool func_280(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

bool func_281(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_282(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_283(int iParam0, int iParam1)
{
	iVar0 = func_410(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_284(int iParam0, char* sParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_411(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_412(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_413(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_285(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_286(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_282(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_287(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_414(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_288(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_27() == -1)
	{
		if (func_329(iParam0) && func_415(iParam0))
		{
			func_416(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_289(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_417(iParam0, iParam1);
	Var0 = { func_183(iParam0, 0, 1) };
	iVar5 = func_234(iParam0, &Var0, 0, 0);
	iVar6 = func_418(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_76(iParam0, -2051813666))
		{
			func_300(674, 1);
		}
		else if (func_27() == -1)
		{
			func_300(673, 0);
		}
	}
	if (func_184(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_290(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_419())
	{
		return;
	}
	switch (func_65(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

bool func_291(int iParam0)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	return func_421(iParam0);
}

void func_292(int iParam0)
{
	if (!func_420(iParam0))
	{
		return;
	}
	func_422(iParam0);
	func_423(iParam0);
}

void func_293(int iParam0)
{
	if (func_76(iParam0, -1522723129))
	{
		func_106(-848633709, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, -283942357))
	{
		func_106(-981153234, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, 683680997))
	{
		func_106(-756350192, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, 1307628809))
	{
		func_106(603094518, 0, 255, 0, 0);
	}
}

bool func_294(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_183(iParam0, 0, 1) };
		if (func_323(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_324(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_320(iParam0, Var0, Var0.f_4, 0) };
				func_388(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_80(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_295(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_424(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_295(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_296(int iParam0, int iParam1, int iParam2)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_232(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_425(iParam0, iParam1, iParam2);
	}
	Var1 = { func_183(iParam0, 0, 1) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, 0) };
	return func_265(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_297(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_176(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_27() == -1)
		{
			func_177(iVar0);
			if (iParam1 == 1248274121)
			{
				func_426(iVar0);
			}
		}
		if (!func_184(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_416(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_427(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_294(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_294(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_294(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_428())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_429(iVar0))
				{
					func_294(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_294(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_430(Global_34, 2, 0, 1);
				if ((((func_262(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_149(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_262(iVar7) && func_149(-1185145312, 1))
				{
					if (!func_294(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_294(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_294(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_300(515, 1);
	}
	return true;
}

bool func_298(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_299(int iParam0, int iParam1, int iParam2)
{
	if (!func_298(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_262(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
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
		func_309(func_431(iParam0), func_276(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_295(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_296(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_300(int iParam0, bool bParam1)
{
	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_434(iVar0, iVar1);
}

bool func_301()
{
	return false;
}

int func_302(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_27() == 0)
	{
		func_313(iParam0, 0);
		return 0;
	}
	iVar0 = func_435(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_436(iVar0, sParam4, iParam5, 0);
	}
	func_437(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_303(int iParam0)
{
}

void func_304(int iParam0)
{
}

void func_305(int iParam0)
{
}

void func_306(int iParam0)
{
}

void func_307()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_308(int iParam0, int iParam1)
{
	func_365(iParam0, iParam1, &uVar0);
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_438(iParam0, 1024))
	{
		return;
	}
	func_434(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_310(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_438(iParam0, 1024))
	{
		return;
	}
	func_434(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_311(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_312(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
}

int func_313(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_439(&Var4, 1356624740);
	return func_440(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_314(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return Var0;
	}
	if (func_76(iParam0, -305066475))
	{
		if (func_27() == -1)
		{
			if (func_76(iParam0, -537818634))
			{
				return func_441(189951448);
			}
			else
			{
				return func_441(1176172851);
			}
		}
	}
	else if (func_76(iParam0, -537818634))
	{
		return func_441(-963660207);
	}
	if (func_76(iParam0, 2084895747))
	{
		return func_441(1694039471);
	}
	return Var2;
}

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_316(int iParam0, char* sParam1)
{
	sVar0 = func_442(Global_1903071->f_37);
	func_287(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_443(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_317(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_318(iParam1);
	if (!func_444(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_234(iParam0, &Var0, 0, 0);
	iVar6 = func_418(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_319(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_171(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_320(1328661203, func_445(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_320(1328661203, func_445(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_320(1328661203, func_445(), -1591664384, bParam0);
}

struct<4> func_320(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_25(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_171(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_321(bool bParam0)
{
	iVar0 = func_171(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_320(923904168, func_319(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_320(923904168, func_319(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_320(923904168, func_319(bParam0), -740156546, 0);
}

bool func_322(int iParam0, bool bParam1)
{
	if (func_188(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_446();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_323(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_330(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_324(int iParam0, var uParam1, int iParam2)
{
	if (func_447(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_325(bool bParam0)
{
	iVar0 = func_171(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_320(271701509, func_319(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_320(271701509, func_319(bParam0), 12999093, 0);
}

bool func_326(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_188(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_396(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_327(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_448(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_328(int iParam0)
{
	if (!func_25(*iParam0, 0))
	{
		return 0;
	}
	if (!func_449(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_329(int iParam0)
{
	return func_178(iParam0) == -427144552;
}

int func_330(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_232(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_320(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_171(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_171(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	return func_188(iParam0) == 1868067663;
}

bool func_332(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_450(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_451(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_333(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_27() == 0)
	{
		return func_452(iParam0);
	}
	return iParam0 <= func_380();
}

bool func_334(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_453(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_222(iParam0))
	{
		return func_454(func_223(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_148(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_336(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_337(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_457(func_456(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_338(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_459(iParam0))
		{
			return false;
		}
	}
	if (func_460(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_339(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_450(iParam0))
	{
		return 0;
	}
	bVar1 = func_113(iParam3, 2);
	bVar2 = func_461(iParam0, -570078785, bVar1);
	bVar3 = func_461(iParam0, -915411861, bVar1);
	if (func_461(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_462(iParam0, &iVar0) || func_463(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_464())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_465(15) && func_461(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_461(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_113(iParam2, 2))
	{
		if (func_224(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_113(iParam2, 8))
	{
		return func_466(iParam0, iParam1);
	}
	return 1;
}

bool func_341(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_332(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_467(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_468(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_469(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_470(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_471(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_472(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_473(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_474(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_475(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_476(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_477(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_478(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_479(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_480(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_481(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_342(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_113(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_327(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_396(iParam1, func_188(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 1))
	{
		if (!func_482(iParam1))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 2))
	{
		if (func_134(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_330(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_234(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_281(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_483(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_113(iParam9, 8))
	{
		return func_484(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_343(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_232(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_344(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_148(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_485(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_486(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_487(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_488(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_489(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_490(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_491(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_492(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_493(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_494(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_495(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_496(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_497(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_498(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_499(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_345(var uParam0)
{
	return func_197(*uParam0, 2);
}

float func_346()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_349(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_350(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0 && Global_1131196[iVar0] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_351(int iParam0, int iParam1)
{
	return func_500(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

int func_352()
{
	return Global_1102219->f_3672;
}

void func_353(int iParam0, int iParam1)
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

void func_354(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_460(uParam0))
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

bool func_355(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_501(36, iParam0);
}

bool func_356(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_357(int iParam0)
{
	if (!func_356(iParam0))
	{
		return 0;
	}
	return Global_1139381->f_11[iParam0]->f_2;
}

bool func_358()
{
	return (func_502(0) && func_502(1));
}

bool func_359()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_360(int iParam0)
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

int func_361(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_503(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_363(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_248(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_504(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_364(int iParam0, bool bParam1)
{
	if (!func_248(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

void func_365(int iParam0, int iParam1, var uParam2)
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

struct<14> func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_367(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_368(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_171(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_371(int iParam0)
{
	if (func_76(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_76(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_76(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_25(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_373(int iParam0)
{
	iParam0 = func_249(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_374(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

bool func_375(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_171(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_376(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_378(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_379(int iParam0)
{
	iVar0 = func_188(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_380()
{
	if (func_27() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_381(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_183(2084597891, 1, 0) };
	Var6 = { func_505(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_337(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_194(iVar0, Var22);
	}
	return iVar0;
}

void func_382(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_380() < iParam0)
	{
		iParam0 = func_380();
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_441(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_383(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_287(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_384(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_506(iVar0);
}

int func_385(int iParam0)
{
	iVar0 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = func_506(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

int func_386(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_507(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_508(iParam0, iParam1, bParam2, iParam3);
}

int func_387(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_509(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_232(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_80(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_510(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_511(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_337(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_194(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_171(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_388(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_509(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_80(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_27() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_337(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_194(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_171(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_389(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	iVar1 = func_371(iParam0);
	iVar2 = func_370(iParam0);
	if (iVar2 != 0)
	{
		if (!func_80(0) || func_81())
		{
			if (bParam2)
			{
				func_89(func_88(149041100, -1740237568), 1);
				return func_512(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_183(iParam0, 1, 0) };
			Var8 = { func_320(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_513(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_194(iVar12, Var13);
			}
			return 0;
		}
		if (func_255(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_512(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

bool func_390(int iParam0)
{
	return func_178(iParam0) == 2085633299;
}

bool func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_366(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_367(&Var0, func_321(0));
	}
	if (!func_368(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_376(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_388(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_369(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_392(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = bParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_514() && iParam2 == 0))
	{
		func_515(1);
		func_516(1);
	}
}

int func_393(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	iVar0 = _get_ped_damage(iParam0);
	iVar1 = _0xf8b48a361dc388ae(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = _get_ped_quality(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17333.f_2 != 3)
	{
		iVar1 = Global_17333.f_2;
	}
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

bool func_394(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	return func_388(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_395(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_396(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_397(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_517(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_398(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_80(0))
	{
		return func_518(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_171(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_399(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0, int iParam1)
{
	if (!func_519(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_264() };
	*iParam1 = func_403(Var0, iParam0, 0, -1);
	if (!func_25(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_401(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == -1128398025);
}

bool func_402(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	return (iParam0 == 2031387366 || iParam0 == 1270980548);
}

int func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_520(&uParam0, iParam4, bParam5, iParam6);
}

bool func_404(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_405(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_366(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_367(&Var2, func_264());
	if (func_368(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_376(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_25(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_404(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_369(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_369(iVar0);
	}
	return false;
}

int func_406(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_408(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

bool func_409(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_410(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_411(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_412(int iParam0)
{
	if (func_188(iParam0) == -126813555 || func_188(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_413(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_278(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_414(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_415(int iParam0)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (func_273(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_184(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_149(iParam0, 1);
}

void func_416(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_178(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_176(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_170(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_138(iParam0, 0, 0, 0) == 0))
		{
			if (func_27() == -1)
			{
				func_177(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_180(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_417(int iParam0, int iParam1)
{
	if (func_76(iParam0, 58855631))
	{
		func_281(iParam0, -915411861, iParam1, 1);
	}
}

int func_418(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_298(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_171(bParam1), iParam0, iParam3);
}

bool func_419()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_521(Global_34, 1369124074)) && !func_521(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_420(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_421(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_422(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_423(int iParam0)
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
			func_522(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_523(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_523(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_523(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_524(1);
			break;
		case 33:
			func_525(1);
			break;
		case 34:
			func_526(1);
			break;
		case 35:
			break;
		case 36:
			func_527(0);
			break;
		case 37:
			func_528(0);
			break;
		case 38:
			func_529(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_530() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_300(677, 0);
			break;
		case 3:
			if (func_530() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_300(678, 0);
			break;
		case 4:
			if (func_530() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_300(679, 0);
			break;
		case 5:
			if (func_530() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_300(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_27() == -1)
			{
				if (!func_149(1013902307, 1))
				{
					func_296(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_27() == -1)
			{
				if (!func_149(1013902307, 1))
				{
					func_296(1013902307, 1, 752097756);
				}
				if (!func_149(142640135, 1))
				{
					func_296(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_27() == -1)
			{
				if (!func_149(786809402, 1))
				{
					func_296(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_27() == -1)
			{
				if (!func_149(786809402, 1))
				{
					func_296(786809402, 1, 752097756);
				}
				if (!func_149(-518019409, 1))
				{
					func_296(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

void func_424(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_141(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_425(int iParam0, int iParam1, int iParam2)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_232(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_183(iParam0, 0, 0) };
	if (func_184(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_171(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_426(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
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
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_532();
	func_533(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_427(int iParam0)
{
	if (func_26(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
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

bool func_428()
{
	return false;
}

bool func_429(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_430(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_431(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_291(49))
			{
				if (!func_291(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_291(50))
			{
				if (!func_291(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_433(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_534(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_535(iParam0))
	{
		return false;
	}
	if (func_536(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_438(iParam0, 1)) || func_537(32768))
	{
		if (!func_438(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_538())
	{
		return false;
	}
	return true;
}

void func_434(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_435(int iParam0, bool bParam1, int iParam2)
{
	if (func_27() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_149(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_25(iVar25, 0) && func_76(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_436(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_539(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_287(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_437(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_540() || func_541())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_287(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_287(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_89(func_441(1644987397), iVar1);
	}
}

bool func_438(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_439(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_440(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_542(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_543(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_441(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_442(int iParam0)
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

int func_443(int iParam0)
{
	if (!func_150(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_444(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_188(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_544(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (_item_database_get_fits_slot_info(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

struct<4> func_445()
{
	return Var0;
}

bool func_446()
{
	return (func_418(-1185145312, 0, 0, 0) > 0 && func_403(func_320(889965687, func_319(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_447(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_171(0);
	*uParam1 = { func_320(iParam0, func_321(0), iParam3, 0) };
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

bool func_448(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0)
{
	return func_76(iParam0, 1279601681);
}

bool func_450(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

void func_451(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_188(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_452(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

bool func_453(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0))
	{
		return func_461(func_223(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_332(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
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
	if (!bParam2)
	{
	}
	return 0;
}

bool func_455(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_545(uParam1->f_8, iParam0, uVar0, 2048) || func_545(uParam1->f_8, iParam0, uVar0, 32768)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 4) || func_545(uParam1->f_8, iParam0, uVar0, 256)) || func_545(uParam1->f_8, iParam0, uVar0, 65536)) || func_545(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 1) || func_545(uParam1->f_8, iParam0, uVar0, 8)) || func_545(uParam1->f_8, iParam0, uVar0, 65536)) || func_545(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 1) || func_545(uParam1->f_8, iParam0, uVar0, 16)) || func_545(uParam1->f_8, iParam0, uVar0, 2)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_545(uParam1->f_8, iParam0, uVar0, 8) || func_545(uParam1->f_8, iParam0, uVar0, 4096)) || func_545(uParam1->f_8, iParam0, uVar0, 256)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_456(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_457(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_546(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_546(iParam1, 2, 0, 0);
	return -1;
}

int func_458(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_546(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_459(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_547(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_460(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, bool bParam2)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_224(iParam0, iParam1);
	}
	return true;
}

bool func_462(int iParam0, int iParam1)
{
	*iParam1 = func_548(iParam0, 1);
	return *iParam1 != 0;
}

bool func_463(int iParam0, int iParam1)
{
	*iParam1 = func_549(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_464()
{
	return Global_1915715->f_22477;
}

bool func_465(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_3(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_466(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_454(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_334(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_551(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_550(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_454(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_333(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_551("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_187(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_467(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_468(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_469(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_470(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_471(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_472(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_473(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_474(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_475(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_476(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_477(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_478(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_479(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_480(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_481(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_482(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_27() == -1)
	{
		if (func_329(iParam0))
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

int func_483(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_484(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_553(iParam1, 1) && !func_554(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_551(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_335(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_334((iVar1 + func_555(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_551(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_335(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_333((iVar3 + func_555(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_551("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_248(func_167(iParam1), 2))
	{
		if (!func_556(func_167(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_25(iParam1, 0))
	{
		if (!func_226(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_485(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_486(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_487(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_488(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_489(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_490(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_491(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_492(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_493(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_494(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_495(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_496(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_497(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_498(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_499(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

var func_500(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_558() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(get_player_team(iVar5)));
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
			if (func_355(iVar2))
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
				if (iVar9 & 8192 != 0 && func_561(iVar2) != 1)
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
					if (!func_562(iVar10))
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

bool func_501(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_563(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_352())
	{
		return func_563(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_563(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_502(int iParam0)
{
	return func_563(&(Global_1956200->f_1565), iParam0, 1);
}

int func_503(int iParam0)
{
	return func_564(func_502(iParam0));
}

bool func_504(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<16> func_505(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_232(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_506(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_565(iVar0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!_0x9e7738b291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (_is_metaped_using_component(iVar0, 43391475) || _0x8de41e9902e85756(iVar0))
		{
			iVar6 = func_566(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

int func_507(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_567(0);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_568(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_569(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_570(player_ped_id(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_508(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_138(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_255(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_571(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_572(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_571(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_573("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_509(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_510(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_232(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_574(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_511(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_320(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_512(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_80(0) || func_81())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_576(iParam1, func_575(iParam2), &Var1, 1);
		if (func_577(iVar0, &Var1, 0, 0))
		{
		}
		func_300(501, 0);
		return 0;
	}
	_0xb29c553ba582d09e(&uVar13, iParam0, iParam1, func_575(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_25(&(uVar13[iVar29]), 0) && !func_76(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_181(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_392(func_80(0), 0, 0);
	return iVar30;
}

int func_513(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return -1;
	}
	if (func_509(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(*uParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_578(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_337(1702063850, &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_194(iVar30, Var31);
	}
	return iVar30;
}

bool func_514()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_579(func_567(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_580();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_515(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_516(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

bool func_517(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_448(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_518(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_327(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_178(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_581(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_582(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_583(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_584(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_585(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_586(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_578(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_337(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_519(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_188(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_395(iParam0);
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

int func_520(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_517(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_521(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_522(bool bParam0)
{
	if (!does_entity_exist(Global_34))
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

void func_523(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

void func_524(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_525(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_526(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_527(bool bParam0)
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

void func_528(bool bParam0)
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

void func_529(bool bParam0)
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

bool func_530()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_531(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_532()
{
	return &Global_1902818;
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_587(*iParam0);
	iVar1 = func_588(*iParam0);
	iVar2 = func_589(*iParam0);
	iVar3 = func_590(*iParam0);
	iVar4 = func_591(*iParam0);
	iVar5 = func_592(*iParam0);
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
	iVar6 = func_593(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_593(iVar1, iVar0);
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
	func_594(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_534(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_535(int iParam0)
{
	if (func_438(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_536(int iParam0)
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

bool func_537(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_538()
{
	if (!func_595())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_539(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_596())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_540()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_541()
{
	return is_dlc_present(-2112896652);
}

void func_542(var uParam0)
{
	func_439(uParam0, 143479330);
	if (func_597() == 2026485318)
	{
		func_439(uParam0, 617531372);
	}
	else
	{
		func_439(uParam0, 291123060);
	}
}

void func_543(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_460(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

int func_544(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

int func_545(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_229(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_598(iParam0, iParam1, iParam2, iParam3);
}

int func_547(int* iParam0)
{
	return func_599(iParam0->f_1);
}

int func_548(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_600(iVar0, 1, 0);
		if (!func_332(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_601(&(Var2[iVar34])))
				{
					if (!bParam1 || func_138(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_600(iVar0, 0, 1);
		if (!func_332(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_602(&(Var9[iVar41])))
				{
					if (!bParam1 || func_138(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_550(int iParam0)
{
	return (iParam0 / 100);
}

void func_551(char* sParam0)
{
	Global_1915715->f_22470 = func_573(sParam0, 10000, 0, 0, 0, 1);
}

bool func_552(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_603(uParam3[iVar0], (*uParam3)[iVar0]->f_1, (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_604(iParam0, uParam1, uParam5, iParam2, bParam6);
}

bool func_553(int iParam0, bool bParam1)
{
	if (!func_76(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_76(iParam0, -1090933859))
		{
			return func_223(iParam0, 1) != 0;
		}
		if ((func_134(iParam0, -915411861, 0) || func_134(iParam0, 600942249, 0)) || func_134(iParam0, -570078785, 0))
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

bool func_554(int iParam0, bool bParam1)
{
	iVar0 = func_605(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_224(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_187(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_555(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_335(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_556(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!func_606(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_80(0)) && !func_81());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_333(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_334(iVar32))
			{
			}
			else
			{
				iVar33 = func_138(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_557(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_603(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_607(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

int func_558()
{
	return Global_1051252->f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

int func_561(int iParam0)
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

bool func_562(int iParam0)
{
	if (func_608(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_609(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_563(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_564(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_565(int iParam0)
{
	iVar0 = 2;
	if (!does_entity_exist(iParam0))
	{
		return iVar0;
	}
	iVar1 = _get_ped_quality(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 915880986:
			return 1908704263;
		case -1424697962:
			return -2112217546;
		case -1643384846:
			return -1745255175;
		case -847420802:
			return -237368063;
		case -662726703:
			return 1598967299;
		case 1760886130:
			return -1809464109;
		case -1243653490:
			return -165201917;
		case 1988467099:
			return 815147738;
		case -674590015:
			return 1287583539;
		case -1480423460:
			return -2126985311;
		case 924882045:
			return -1268352491;
		case 1415608202:
			return -1940225526;
		case -593311590:
			return -212307068;
		case 765085831:
			return 355421032;
		case 2094730711:
			return 1657729714;
		case -1310590179:
			return 1350692346;
		case 992366796:
			return -257850294;
		case -244657613:
			return -918541014;
		case -2026210939:
			return -947573795;
		case -1252472243:
			return -2068302756;
		case -980016656:
			return 1650829985;
		case -758005668:
			return -1808044035;
		case -2139551030:
			return -1952647655;
		case 1607144310:
			return 1293221440;
		case 80093385:
			return -642946194;
		case -867655342:
			return 819214075;
		case 991092621:
			return -858652427;
		case 871746664:
			return 395625948;
		case 1626949878:
			return -2063800922;
		case -1722483116:
			return -2117103642;
		case -1739474417:
			return -1583694057;
		case -161524199:
			return -1550918713;
		case 156979555:
			return 836539658;
		case 322141256:
			return 773062352;
		case 1310120320:
			return 1306100270;
		case -1228376431:
			return -1063194668;
		case 472142656:
			return 337839068;
		case -1837840093:
			return -1426520714;
		case 58634176:
			return -1456429189;
		case 1023080408:
			return -2032809253;
		case 1001171791:
			return 781728005;
		case 1210345318:
			return 1202409779;
		case 399553313:
			return 1520877300;
		case -1422869557:
			return -1736624361;
		case -1378812236:
			return 719465997;
		case 1011003885:
			return -361486526;
		case 651035143:
			return -765274711;
		case 2013022756:
			return -887205673;
		case -1186289527:
			return -784020903;
		case 877935135:
			return -886117938;
		case -39646495:
			return -1416771220;
		case 1582593525:
			return 1648676911;
		case -246542229:
			return 2103833563;
		case -529454751:
			return -831636369;
		case -46978629:
			return -852290935;
		case -1347000030:
			return -1870415962;
		case -505583391:
			return -788684109;
		case 1645887374:
			return 1416435145;
		case -1559227925:
			return -1483088274;
		case 1562528937:
			return -791867098;
		case -1471526136:
			return -1689552552;
		case -1440794801:
			return -1850779170;
		case 2144711797:
			return -121487803;
		case 718825539:
			return -1280499288;
		case 2105263879:
			return 820245961;
		case -905842006:
			return -889526774;
		case 1191274340:
			return -521025998;
		case 1613453781:
			return 1583031244;
		case -1030182399:
			return -2115599211;
		case 987967309:
			return -767176802;
		case -1060737769:
			return -750945821;
		case 553310445:
			return -2135749211;
		case -1838865945:
			return 2063108046;
		case 1418092959:
			return 1299111759;
		case -1315697778:
			return 1595322723;
		case -1772126340:
			return 784918835;
		case -935543049:
			return -676310905;
		case 1772544356:
			return -1719545959;
		case -266273535:
			return -2142423934;
		case -1670544626:
			return 747751566;
		case 1290960696:
			return -1942682403;
		case 1913571052:
			return 1018433784;
		case 1717601520:
			return -796185392;
		case 430397370:
			return -49549406;
		case 16287711:
			return 857788498;
		case -1356230367:
			return 1223148871;
		case 1417331079:
			return 939407236;
		case -884124246:
			return 1608778431;
		case 1884610748:
			return -2033821082;
		case 746558492:
			return -993340234;
		case -892811627:
			return -1861062075;
		case -2040522845:
			return 1645001514;
		case -1224510844:
			return 782371031;
		case 1334837390:
			return 1255529169;
		case 339620522:
			return 70898308;
		case 1770451033:
			return -1050350982;
		case 756657535:
			return 581781784;
		case 862898895:
			return -1363330863;
		case 1997845858:
			return -1780911288;
		case -1930144509:
			return 1018306802;
		case 1846915545:
			return 1615521415;
		case -1816929509:
			return -1499066338;
		case 1197831625:
			return 1711081908;
		case -1866642239:
			return -164705;
		case -1508120809:
			return -2044044647;
		case -1007681885:
			return -859583379;
		case 434924608:
			return -759504052;
		case 1666393029:
			return 700225820;
		case -1814593136:
			return 136458586;
		case -1188120304:
			return 799105420;
		case 1978734761:
			return -481655757;
		case -824902132:
			return 484160931;
		case -1015531226:
			return 1010699907;
		case -581619522:
			return 1550264248;
		case -861854914:
			return -371992731;
		case -545447034:
			return 1090294483;
		case -1824684934:
			return -274175035;
		case 980653387:
			return -1064414912;
		case -1011598664:
			return -2091620305;
		case -177476569:
			return -468684824;
		case 416630124:
			return 1668870118;
		case 1925728375:
			return -534004020;
		case -1080457688:
			return -2126925270;
		case 1742676369:
			return 2008380517;
		case -899751553:
			return -510697884;
		case 431501574:
			return -955209948;
		case 2126795269:
			return 1459836898;
		case 1489051752:
			return 303969766;
		case -1705499323:
			return -1707588662;
		case -2013445740:
			return -1224075784;
		case 102446365:
			return -1806671048;
		case -1927342740:
			return 749765420;
		case -410900360:
			return 462936163;
		case -1073614594:
			return -8888941;
		case 2060013792:
			return 1640227110;
		case 581032175:
			return -1241188722;
		case -581931638:
			return -1030962659;
		case -1528265128:
			return 112552982;
		case -142632645:
			return -1599578931;
		case -2048519180:
			return 1296331626;
		case 1442025993:
			return -1256398198;
		case 441195430:
			return 1297800973;
		case 748665395:
			return 1772582754;
		case 351048413:
			return -1459876379;
		case -914779013:
			return 1127406863;
		case 1323485831:
			return 1779996957;
		case -365111821:
			return 1885306923;
		case 101495387:
			return 1244107697;
		case 157917500:
			return -1201555940;
		case -936537044:
			return -668487833;
		case -1610329427:
			return -1178150148;
		case -1836227998:
			return 1171158615;
		case 619479575:
			return -2123554124;
		case -1444929945:
			return 1806705761;
		case -929322235:
			return 404581836;
		case -548076717:
			return 987197489;
		case -281211381:
			return -1259715647;
		case 493457089:
			return -1716717840;
		case -479485786:
			return -196277007;
		case 27838955:
			return -2064457926;
		case 1641833719:
			return 561267454;
		case -314933180:
			return 686253083;
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

int func_567(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_568(int iParam0, int iParam1)
{
	if (func_610(iParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1904087->f_113[iVar0]->f_1 == iParam1)
			{
				if (does_entity_exist(Global_1291734->f_938.f_245[iVar0]->f_3))
				{
					if (network_has_control_of_entity(Global_1291734->f_938.f_245[iVar0]->f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_611(iParam0, iParam1);
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	if (func_612(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_314(iParam1) };
		if (_stat_id_is_valid(&Var0))
		{
			_0xbd861ae8a5181ed7(&Var0, *iParam2);
		}
		*iParam2 = func_570(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_613(iParam1))
			{
				if (!func_614(0, iParam1, *iParam2))
				{
				}
				if (func_615(player_id(), 1, 0))
				{
					_0x18ff3110cf47115d(*iParam0, 32, 1);
				}
				else
				{
					_0x18ff3110cf47115d(*iParam0, 32, 0);
				}
				*iParam2 = func_616(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_392(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_570(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iParam2;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar1);
	iVar4 = get_itemset_size(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
			if (!does_entity_exist(iVar2))
			{
			}
			else if (!network_has_control_of_entity(iVar2))
			{
			}
			else
			{
				iVar0 = func_617(iVar2);
				if (!func_618(iVar0, &uVar102))
				{
					if (is_entity_a_ped(iVar2))
					{
						if ((iParam4 == 2 && _0x8de41e9902e85756(iVar2)) || (iParam4 == 1 && !_0x8de41e9902e85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							if (iParam0 == _0xf49f14462f0ae27c(player_id()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1291734->f_938.f_245[iVar5]->f_3 == iVar2)
									{
										func_619(&Var6, Global_1904087->f_113[iVar5]);
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
								{
									if (Global_1915715->f_20241 == 29 && is_entity_a_ped(iVar2))
									{
										if (func_76(iVar0, -753854379) || func_76(iVar0, 173360570))
										{
											_set_ped_damage(get_ped_index_from_entity_index(iVar2), 2);
										}
										_0x831bf01c56149a8a(get_ped_index_from_entity_index(iVar2));
									}
									if (iParam0 == player_ped_id())
									{
										func_180(iVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								_0x0d0db2b6af19a987(&iVar2);
							}
							else
							{
								_0xed00d72f81cf7278(iVar2, 0, 0);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						destroy_itemset(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_571(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1915715->f_20637)
	{
		if (Global_1915715->f_20241 == 29)
		{
			if (func_620(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_621(iParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					_0x7c2abf6e556b21fc(func_622(iParam0), iVar1, func_76(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_572(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0 = { func_314(iParam0) };
	if (_stat_id_is_valid(&Var0))
	{
		_0xbd861ae8a5181ed7(&Var0, iParam1);
	}
	func_623(iParam0, iParam1);
	return func_394(iParam0, iParam1, bParam2, iParam3);
}

var func_573(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_574(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_624((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_445() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_575(int iParam0)
{
	if (func_76(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_76(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_76(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_576(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1112574294;
					break;
				case 1:
					iVar0 = -132480015;
					break;
				case 2:
					iVar0 = 1838524355;
					break;
				case 3:
					iVar0 = 781424689;
					break;
				case 4:
					iVar0 = 1547693994;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -684991368;
					break;
				case 1:
					iVar0 = -832325162;
					break;
				case 2:
					iVar0 = -346003361;
					break;
				case 3:
					iVar0 = 264694784;
					break;
				case 4:
					iVar0 = -559967702;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1341408997;
					break;
				case 1:
					iVar0 = -254777578;
					break;
				case 2:
					iVar0 = -379118674;
					break;
				case 3:
					iVar0 = -1624584872;
					break;
				case 4:
					iVar0 = 1526992527;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_439(uParam2, 1528001899);
	}
	else
	{
		func_439(uParam2, 1884295263);
	}
	func_439(uParam2, iVar0);
	return *uParam2;
}

int func_577(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (0 == iParam0)
	{
		return 0;
	}
	return func_440(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

struct<16> func_578(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_232(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_138(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_611(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_625(iParam1, bParam4));
	}
	return iVar0;
}

void func_580()
{
	if (!func_25(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_65(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

struct<28> func_581(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_171(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_582(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_457(func_626(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_583(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_171(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_584(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_457(func_627(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_585(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_171(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_586(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_457(func_628(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_587(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_123(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_588(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_589(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_590(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_591(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_592(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_593(int iParam0, int iParam1)
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

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_629(iParam0, iParam6);
	func_630(iParam0, iParam5);
	func_631(iParam0, iParam4);
	func_632(iParam0, iParam3);
	func_633(iParam0, iParam2);
	func_634(iParam0, iParam1);
}

bool func_595()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_596()
{
	return Global_1913504->f_127 == 0;
}

int func_597()
{
	return Global_1952637->f_1;
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_635(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_599(int iParam0)
{
	iVar0 = func_101(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_546(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_546(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_600(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_601(int iParam0)
{
	return func_188(iParam0) == 1946043663;
}

bool func_602(int iParam0)
{
	return func_188(iParam0) == -126813555;
}

bool func_603(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_3(0))
	{
		iVar5 = func_235(func_636(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_319(1) };
			Var0.f_4 = func_318(iVar5);
			*uParam2->f_1[0] = { func_320(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_232(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_510(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_320(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_183(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_320(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_604(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != -1883671814)
	{
		return false;
	}
	if (!func_637(*uParam1))
	{
		return false;
	}
	if (!func_638(iParam0, iParam3))
	{
		return false;
	}
	if (_0xa3b8d31c13cb4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_639(iParam0, bParam4);
}

int func_605(int iParam0, bool bParam1)
{
	if (!func_553(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_223(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_223(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_223(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_223(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_223(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_223(-611782825, 1);
	}
	return func_223(iParam0, 1);
}

bool func_606(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_248(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_640(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_607(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_641(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_638(iParam0, iParam3))
	{
		return false;
	}
	if (func_642(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_639(iParam0, bParam4);
}

bool func_608(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_609(int iParam0)
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
		func_643(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_644(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_610(int iParam0)
{
	if (!func_280(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_645(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_611(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_610(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_646(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_612(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_647(_inventory_get_ped_inventory_id(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_613(int iParam0)
{
	if (!func_648(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_649(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_614(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_650(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_651(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = &Global_1904087->f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_652(iVar3, 0))
				{
				}
				Global_1904087->f_402[iVar1] = (&Global_1904087->f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_615(int iParam0, int iParam1, bool bParam2)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_653(iVar0, bParam2) >= func_654(bParam2);
}

int func_616(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return iParam2;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != _0xf49f14462f0ae27c(player_id()) || network_has_control_of_entity(iParam0))
		{
			iVar1 = _0x0ceeb6f4780b1f2f(iParam0, iVar0);
			if (iVar1 == iParam1)
			{
				_0x627f7f3a0c4c51ff(iParam0, iParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = &(*Global_1291106)[player_id()]->f_15[iVar0];
			if (iVar1 == iParam1)
			{
				(*Global_1291106)[player_id()]->f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_617(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_384(&iParam0);
		if (!func_25(iVar0, 0))
		{
			iVar0 = func_385(iParam0);
		}
	}
	else
	{
		iVar0 = func_385(iParam0);
	}
	return iVar0;
}

bool func_618(int iParam0, int iParam1)
{
	*iParam1 = func_655(iParam0);
	return *iParam1 != 0;
}

void func_619(var uParam0, var uParam1)
{
	_copy_memory(uParam1, uParam0, 96);
}

bool func_620(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_621(int iParam0)
{
	if (func_618(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!_item_database_fillout_satchel_data(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			return 158537911;
		case 306916738:
		case 1481288777:
			return -1062286052;
		case -1824685471:
		case 724563284:
			return -785236358;
		case 803930024:
		case 1917027383:
			return -1450728546;
		case -855052577:
		case 1111663869:
			return -1295437670;
		case -5376850:
		case 1425358430:
			return 1767657451;
		case 1297433586:
		case 1338219162:
			return -1222065966;
		case -1538397860:
		case -293259613:
			return -897542141;
		case 193037129:
		case 588902637:
			return -1458047097;
		case -861419347:
		case 1416872916:
			return -1713740144;
		case 357567274:
		case 1500919793:
			return -1518011865;
		case 683583793:
		case 1042542561:
			return -1268607968;
		case -1202625002:
		case 56657913:
			return -1666587802;
		case 485620834:
		case 1570826681:
			return 759956813;
		case 727522818:
		case 785407605:
			return -129858069;
		case -1457420231:
		case 563848610:
		case 1432949803:
			return 783089120;
		case -2120099592:
		case -983831788:
		case 1848456619:
			return 1516275256;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			return 1339926283;
		case -1323780599:
		case -532099639:
		case 905173572:
			return -1273168083;
		case -867655342:
		case 80093385:
		case 991092621:
			return 1677450645;
		case -1956973834:
		case -738999731:
		case 566023444:
			return -1906789582;
		case -1905834457:
		case -110353515:
		case 59384454:
			return 613321581;
		case 444160793:
		case 1205453831:
		case 1815539745:
			return -581264978;
		case -1969404854:
		case 183958842:
		case 1948158930:
			return 1075520399;
		case -1586332975:
		case -832850511:
		case 1857501916:
			return -2045434273;
		case -1888757291:
		case 894877715:
		case 995863399:
			return 1220494366;
		case -1974778216:
		case -381243381:
		case -210676278:
			return 1798104140;
		case -529454751:
		case -246542229:
		case 1582593525:
			return 1735171971;
		case -1030182399:
		case 1191274340:
		case 1613453781:
			return 843200239;
		case -1464585113:
		case -610456424:
		case -284151822:
			return 562612880;
		case -1999212658:
		case -593435395:
		case -245335326:
			return 1948286917;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			return -756458312;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			return -705312705;
		case -1824684934:
		case -861854914:
		case -545447034:
			return 886059398;
		case -1290897778:
		case -350704687:
		case 765892430:
			return 2018874380;
		case -1080457688:
		case 416630124:
		case 1925728375:
			return -1181288733;
		case -1867587109:
		case 182158309:
		case 313332607:
			return -143561573;
		case -318217782:
		case -100913452:
		case 72307351:
			return 395345271;
		case -2123600216:
		case -146690338:
		case -124539232:
			return 725092441;
		case -1403731492:
		case -843795569:
		case 1496267371:
			return -391309265;
		case -1643384846:
		case -1424697962:
		case 915880986:
			return -1472826885;
		case -847420802:
		case -662726703:
		case 1760886130:
			return -43987615;
		case -1243653490:
		case -674590015:
		case 1988467099:
			return 597440621;
		case -1480423460:
		case 924882045:
		case 1415608202:
			return 1297902195;
		case -593311590:
		case 765085831:
		case 2094730711:
			return -1427844561;
		case -1310590179:
		case -244657613:
		case 992366796:
			return -1055552242;
		case -2026210939:
		case -1252472243:
		case -980016656:
			return -1847199476;
		case -2139551030:
		case -758005668:
		case 1607144310:
			return 2059272711;
		case -1722483116:
		case 871746664:
		case 1626949878:
			return -1071812884;
		case -1739474417:
		case -161524199:
		case 156979555:
			return -564442545;
		case -1228376431:
		case 322141256:
		case 1310120320:
			return -1923720634;
		case -1837840093:
		case 58634176:
		case 472142656:
			return -510702611;
		case 1001171791:
		case 1023080408:
		case 1210345318:
			return -1350246467;
		case -1422869557:
		case -1378812236:
		case 399553313:
			return 2104011353;
		case 651035143:
		case 1011003885:
		case 2013022756:
			return 1157397403;
		case -1186289527:
		case -39646495:
		case 877935135:
			return -1003674917;
		case -1347000030:
		case -505583391:
		case -46978629:
			return 365206122;
		case -1559227925:
		case 1562528937:
		case 1645887374:
			return 731537518;
		case -1471526136:
		case -1440794801:
		case 2144711797:
			return 524696643;
		case -905842006:
		case 718825539:
		case 2105263879:
			return 768271981;
		case -1060737769:
		case 553310445:
		case 987967309:
			return -1453172462;
		case -1838865945:
		case -1315697778:
		case 1418092959:
			return 1053713682;
		case -1772126340:
		case -935543049:
		case 1772544356:
			return -905573570;
		case -1670544626:
		case -266273535:
		case 1290960696:
			return 313926162;
		case 430397370:
		case 1717601520:
		case 1913571052:
			return 184430925;
		case -1356230367:
		case 16287711:
		case 1417331079:
			return 1623821606;
		case -884124246:
		case 746558492:
		case 1884610748:
			return -454952368;
		case -2040522845:
		case -1224510844:
		case -892811627:
			return -1315516671;
		case 339620522:
		case 1334837390:
		case 1770451033:
			return 238849077;
		case 756657535:
		case 862898895:
		case 1997845858:
			return -943371758;
		case -1930144509:
		case -1816929509:
		case 1846915545:
			return -10873946;
		case -1866642239:
		case -1508120809:
		case 1197831625:
			return -1523680261;
		case -1007681885:
		case 434924608:
		case 1666393029:
			return 915670869;
		case -1814593136:
		case -1188120304:
		case 1978734761:
			return -868889795;
		case -1015531226:
		case -824902132:
		case -581619522:
			return -1592962144;
		case -1011598664:
		case -177476569:
		case 980653387:
			return -262717989;
		case -899751553:
		case 431501574:
		case 1742676369:
			return 1398366530;
		case -1705499323:
		case 1489051752:
		case 2126795269:
			return -1427844561;
		case -2013445740:
		case -1927342740:
		case 102446365:
			return -998653403;
		case -1073614594:
		case -410900360:
		case 2060013792:
			return -946474842;
		case -1528265128:
		case -581931638:
		case 581032175:
			return -547357240;
		case -2048519180:
		case -142632645:
		case 1442025993:
			return -518676029;
		case 351048413:
		case 441195430:
		case 748665395:
			return -764925634;
		case -914779013:
		case -365111821:
		case 1323485831:
			return -946474842;
		case -936537044:
		case 101495387:
		case 157917500:
			return -2050228659;
		case -1836227998:
		case -1610329427:
		case 619479575:
			return -2087684184;
		case -1444929945:
		case -929322235:
		case -548076717:
			return 288450344;
		case -479485786:
		case -281211381:
		case 493457089:
			return 848629876;
		case -314933180:
		case 27838955:
		case 1641833719:
			return -439919843;
		default:
			break;
	}
	return -1740237568;
}

void func_623(int iParam0, int iParam1)
{
	if (func_27() == -1)
	{
		iVar0 = func_172(7);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(player_id());
	}
	func_616(iVar0, iParam0, iParam1);
}

bool func_624(var uParam0)
{
	if (!func_656(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_625(int iParam0, bool bParam1)
{
	if (!bParam1 || func_657())
	{
		return func_330(iParam0, func_319(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_626(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_627(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_628(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_629(int iParam0, int iParam1)
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

void func_630(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_631(int iParam0, int iParam1)
{
	iVar0 = func_588(*iParam0);
	iVar1 = func_587(*iParam0);
	if (iParam1 < 1 || iParam1 > func_593(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_632(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_633(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_634(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_635(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_658(&(uParam0->f_4));
}

int func_636()
{
	return Global_1915715->f_20241;
}

bool func_637(struct<17> Param0)
{
	if (!func_450(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_638(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_659(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_660(iParam0))
		{
			return false;
		}
		if (!func_659(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_639(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_660(iParam0);
	}
	return true;
}

void func_640(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_188(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_641(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_25(uParam1->f_8, 0) && !func_248(func_167(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_113(iParam2, 128))
	{
		if (func_188(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_113(iParam2, 16))
	{
		if (!func_455(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_642(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

void func_643(int iParam0)
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
	func_644(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_644(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_645(int iParam0, int iParam1)
{
	iVar0 = func_661(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_646(int iParam0, int iParam1)
{
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_662(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_647(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_663(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_314(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_646(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_646(iParam0, iParam1) - iParam2) < 0)
		{
			func_647(iParam0, iParam1, func_138(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_664(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_180(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_648(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	return (func_76(iParam0, 1686880204) || _0x4aef1fb5b9011d75(iParam0));
}

int func_649(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654;
		case 1:
			return 1806153689;
		case 2:
			return -1625078531;
		case 3:
			return -2059726619;
		case 4:
			return -1569450319;
		case 5:
			return 854596618;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072;
		case 8:
			return -1858513856;
		case 9:
			return -868657362;
		case 10:
			return 1603936352;
		case 11:
			return -702790226;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1150939141;
		case 16:
			return -1558096473;
		case 17:
			return -794277189;
		case 18:
			return -1827027577;
		case 19:
			return -662178186;
		case 20:
			return -1035515486;
		case 21:
			return 238733925;
		case 22:
			return 1647012424;
		case 23:
			return 500722008;
		case 24:
			return 1710714415;
		case 25:
			return 699990316;
		case 26:
			return -1648383828;
		case 27:
			return -1379330323;
		case 28:
			return -99092070;
		case 29:
			return 1963510418;
		case 30:
			return 2047376405;
		case 31:
			return -395646254;
		case 32:
			return 1584468323;
		case 33:
			return 1969175294;
		case 34:
			return -57190831;
		case 35:
			return -308965548;
		case 36:
			return -1102272634;
		case 37:
			return 554578289;
		case 38:
			return -983605026;
		case 39:
			return -1544126829;
		case 40:
			return -476045512;
		case 41:
			return 1796037447;
		case 42:
			return 1795984405;
		case 43:
			return -1317365569;
		case 44:
			return 1729948479;
		case 45:
			return 1466150167;
		case 46:
			return 1145777975;
		case 47:
			return 85441452;
		case 48:
			return 653400939;
		case 49:
			return 121494806;
		case 50:
			return -251416414;
		case 51:
			return -1787430524;
		case 52:
			return -1572330336;
		case 53:
			return -1249752300;
		case 54:
			return -940052481;
		case 55:
			return -308200059;
		case 56:
			return -1218522879;
		case 57:
			return 923422806;
		case 58:
			return 832214437;
		case 59:
			return 397926876;
		case 60:
			return 219794592;
		case 61:
			return -1061362634;
		case 62:
			return 1728819413;
		case 63:
			return 1009802015;
		case 64:
			return 1276143905;
		case 65:
			return -1262044528;
		case 66:
			return -963027403;
		case 67:
			return 2088901891;
		case 68:
			return 836208559;
		case 69:
			return 1600479946;
		case 70:
			return -675142890;
		case 71:
			return -906131571;
		case 72:
			return -591844128;
		case 73:
			return -1946740647;
		case 74:
			return -1548204069;
		case 75:
			return -907373381;
		case 76:
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

int func_650(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_651(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 3;
		case -1946740647:
			return 73;
		case -1858513856:
			return 8;
		case -1827027577:
			return 18;
		case -1791452194:
			return 14;
		case -1787430524:
			return 51;
		case -1648383828:
			return 26;
		case -1625078531:
			return 2;
		case -1572330336:
			return 52;
		case -1569450319:
			return 4;
		case -1558096473:
			return 16;
		case -1548204069:
			return 74;
		case -1544126829:
			return 39;
		case -1379330323:
			return 27;
		case -1317365569:
			return 43;
		case -1262044528:
			return 65;
		case -1249752300:
			return 53;
		case -1218522879:
			return 56;
		case -1102272634:
			return 36;
		case -1061362634:
			return 61;
		case -1035515486:
			return 20;
		case -983605026:
			return 38;
		case -963027403:
			return 66;
		case -940052481:
			return 54;
		case -907373381:
			return 75;
		case -906131571:
			return 71;
		case -868657362:
			return 9;
		case -802026654:
			return 0;
		case -794277189:
			return 17;
		case -702790226:
			return 11;
		case -675142890:
			return 70;
		case -662178186:
			return 19;
		case -591844128:
			return 72;
		case -476045512:
			return 40;
		case -395646254:
			return 31;
		case -308965548:
			return 35;
		case -308200059:
			return 55;
		case -251416414:
			return 50;
		case -99092070:
			return 28;
		case -57190831:
			return 34;
		case 0:
			return 76;
		case 85441452:
			return 47;
		case 121494806:
			return 49;
		case 219794592:
			return 60;
		case 238733925:
			return 21;
		case 397926876:
			return 59;
		case 459744337:
			return 12;
		case 500722008:
			return 23;
		case 554578289:
			return 37;
		case 653400939:
			return 48;
		case 699990316:
			return 25;
		case 832214437:
			return 58;
		case 836208559:
			return 68;
		case 854596618:
			return 5;
		case 923422806:
			return 57;
		case 1009802015:
			return 63;
		case 1145777975:
			return 46;
		case 1150939141:
			return 15;
		case 1248540072:
			return 7;
		case 1276143905:
			return 64;
		case 1466150167:
			return 45;
		case 1584468323:
			return 32;
		case 1600479946:
			return 69;
		case 1603936352:
			return 10;
		case 1647012424:
			return 22;
		case 1710714415:
			return 24;
		case 1728819413:
			return 62;
		case 1729948479:
			return 44;
		case 1795984405:
			return 42;
		case 1796037447:
			return 41;
		case 1806153689:
			return 1;
		case 1914602340:
			return 13;
		case 1963510418:
			return 29;
		case 1969175294:
			return 33;
		case 2047376405:
			return 30;
		case 2088901891:
			return 67;
		case 2116849039:
			return 6;
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

bool func_652(int iParam0, bool bParam1)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_653(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_653(iVar1, bParam1))
	{
		iVar2 = func_653(iVar1, bParam1);
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 - iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 - iVar2);
	}
	if (func_653(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = 0;
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = 0;
		}
	}
	else if (func_653(iVar1, bParam1) > func_654(bParam1))
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = func_654(bParam1);
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = func_654(bParam1);
		}
	}
	return true;
}

int func_653(int iParam0, bool bParam1)
{
	return func_123(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

int func_654(bool bParam0)
{
	return func_123(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263:
			return 915880986;
		case -2112217546:
			return -1424697962;
		case -1745255175:
			return -1643384846;
		case -237368063:
			return -847420802;
		case 1598967299:
			return -662726703;
		case -1809464109:
			return 1760886130;
		case -165201917:
			return -1243653490;
		case 815147738:
			return 1988467099;
		case 1287583539:
			return -674590015;
		case -2126985311:
			return -1480423460;
		case -1268352491:
			return 924882045;
		case -1940225526:
			return 1415608202;
		case -212307068:
			return -593311590;
		case 355421032:
			return 765085831;
		case 1657729714:
			return 2094730711;
		case 1350692346:
			return -1310590179;
		case -257850294:
			return 992366796;
		case -918541014:
			return -244657613;
		case -947573795:
			return -2026210939;
		case -2068302756:
			return -1252472243;
		case 1650829985:
			return -980016656;
		case -1808044035:
			return -758005668;
		case -1952647655:
			return -2139551030;
		case 1293221440:
			return 1607144310;
		case -642946194:
			return 80093385;
		case 819214075:
			return -867655342;
		case -858652427:
			return 991092621;
		case 395625948:
			return 871746664;
		case -2063800922:
			return 1626949878;
		case -2117103642:
			return -1722483116;
		case -1583694057:
			return -1739474417;
		case -1550918713:
			return -161524199;
		case 836539658:
			return 156979555;
		case 773062352:
			return 322141256;
		case 1306100270:
			return 1310120320;
		case -1063194668:
			return -1228376431;
		case 337839068:
			return 472142656;
		case -1426520714:
			return -1837840093;
		case -1456429189:
			return 58634176;
		case -2032809253:
			return 1023080408;
		case 781728005:
			return 1001171791;
		case 1202409779:
			return 1210345318;
		case 1520877300:
			return 399553313;
		case -1736624361:
			return -1422869557;
		case 719465997:
			return -1378812236;
		case -361486526:
			return 1011003885;
		case -765274711:
			return 651035143;
		case -887205673:
			return 2013022756;
		case -784020903:
			return -1186289527;
		case -886117938:
			return 877935135;
		case -1416771220:
			return -39646495;
		case 1648676911:
			return 1582593525;
		case 2103833563:
			return -246542229;
		case -831636369:
			return -529454751;
		case -852290935:
			return -46978629;
		case -1870415962:
			return -1347000030;
		case -788684109:
			return -505583391;
		case 1416435145:
			return 1645887374;
		case -1483088274:
			return -1559227925;
		case -791867098:
			return 1562528937;
		case -1689552552:
			return -1471526136;
		case -1850779170:
			return -1440794801;
		case -121487803:
			return 2144711797;
		case -1280499288:
			return 718825539;
		case 820245961:
			return 2105263879;
		case -889526774:
			return -905842006;
		case -521025998:
			return 1191274340;
		case 1583031244:
			return 1613453781;
		case -2115599211:
			return -1030182399;
		case -767176802:
			return 987967309;
		case -750945821:
			return -1060737769;
		case -2135749211:
			return 553310445;
		case 2063108046:
			return -1838865945;
		case 1299111759:
			return 1418092959;
		case 1595322723:
			return -1315697778;
		case 784918835:
			return -1772126340;
		case -676310905:
			return -935543049;
		case -1719545959:
			return 1772544356;
		case -2142423934:
			return -266273535;
		case 747751566:
			return -1670544626;
		case -1942682403:
			return 1290960696;
		case 1018433784:
			return 1913571052;
		case -796185392:
			return 1717601520;
		case -49549406:
			return 430397370;
		case 857788498:
			return 16287711;
		case 1223148871:
			return -1356230367;
		case 939407236:
			return 1417331079;
		case 1608778431:
			return -884124246;
		case -2033821082:
			return 1884610748;
		case -993340234:
			return 746558492;
		case -1861062075:
			return -892811627;
		case 1645001514:
			return -2040522845;
		case 782371031:
			return -1224510844;
		case 1255529169:
			return 1334837390;
		case 70898308:
			return 339620522;
		case -1050350982:
			return 1770451033;
		case 581781784:
			return 756657535;
		case -1363330863:
			return 862898895;
		case -1780911288:
			return 1997845858;
		case 1018306802:
			return -1930144509;
		case 1615521415:
			return 1846915545;
		case -1499066338:
			return -1816929509;
		case 1711081908:
			return 1197831625;
		case -164705:
			return -1866642239;
		case -2044044647:
			return -1508120809;
		case -859583379:
			return -1007681885;
		case -759504052:
			return 434924608;
		case 700225820:
			return 1666393029;
		case 136458586:
			return -1814593136;
		case 799105420:
			return -1188120304;
		case -481655757:
			return 1978734761;
		case 484160931:
			return -824902132;
		case 1010699907:
			return -1015531226;
		case 1550264248:
			return -581619522;
		case -371992731:
			return -861854914;
		case 1090294483:
			return -545447034;
		case -274175035:
			return -1824684934;
		case -1064414912:
			return 980653387;
		case -2091620305:
			return -1011598664;
		case -468684824:
			return -177476569;
		case 1668870118:
			return 416630124;
		case -534004020:
			return 1925728375;
		case -2126925270:
			return -1080457688;
		case 2008380517:
			return 1742676369;
		case -510697884:
			return -899751553;
		case -955209948:
			return 431501574;
		case 1459836898:
			return 2126795269;
		case 303969766:
			return 1489051752;
		case -1707588662:
			return -1705499323;
		case -1224075784:
			return -2013445740;
		case -1806671048:
			return 102446365;
		case 749765420:
			return -1927342740;
		case 462936163:
			return -410900360;
		case -8888941:
			return -1073614594;
		case 1640227110:
			return 2060013792;
		case -1241188722:
			return 581032175;
		case -1030962659:
			return -581931638;
		case 112552982:
			return -1528265128;
		case -1599578931:
			return -142632645;
		case 1296331626:
			return -2048519180;
		case -1256398198:
			return 1442025993;
		case 1297800973:
			return 441195430;
		case 1772582754:
			return 748665395;
		case -1459876379:
			return 351048413;
		case 1127406863:
			return -914779013;
		case 1779996957:
			return 1323485831;
		case 1885306923:
			return -365111821;
		case 1244107697:
			return 101495387;
		case -1201555940:
			return 157917500;
		case -668487833:
			return -936537044;
		case -1178150148:
			return -1610329427;
		case 1171158615:
			return -1836227998;
		case -2123554124:
			return 619479575;
		case 1806705761:
			return -1444929945;
		case 404581836:
			return -929322235;
		case 987197489:
			return -548076717;
		case -1259715647:
			return -281211381;
		case -1716717840:
			return 493457089;
		case -196277007:
			return -479485786;
		case -2064457926:
			return 27838955;
		case 561267454:
			return 1641833719;
		case 686253083:
			return -314933180;
		case -2115566177:
			return -827518870;
		case -1886936864:
			return 1367447057;
		case 777641606:
			return -2092697195;
		case 1815502722:
			return -2043601589;
		case 1518910503:
			return 1758585485;
		case 1020297399:
			return 1527400190;
		case -438328437:
			return 1493601140;
		case -132069363:
			return -885592109;
		case 1718756614:
			return -1282621313;
		case 616254818:
			return -70954328;
		case 1586020612:
			return -1378208045;
		case 1892902297:
			return 1450608653;
		case 1920759986:
			return 1543592331;
		case 1683741809:
			return 1842740532;
		case 403588059:
			return 2004357248;
		case -352805801:
			return -229670230;
		case 1491466288:
			return 546758456;
		case -1066678466:
			return 1888419655;
		case -375348364:
			return -2040849706;
		case -101301217:
			return 2014346813;
		case 213936563:
			return -1638839614;
		case 897866285:
			return 1705186999;
		case 1135507073:
			return -1821314478;
		case -1671125008:
			return -1434083213;
		default:
			break;
	}
	return 0;
}

bool func_656(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_657()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_665(iVar0))
	{
		return false;
	}
	return true;
}

void func_658(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_659(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_660(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_546(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_546(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_546(*iParam0, 2, 0, 0);
		return false;
	}
	func_546(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_661(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<4> func_662(int iParam0, int iParam1)
{
	Var0 = { func_666(iParam0) };
	return func_667(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_663(int iParam0, int iParam1, int iParam2)
{
	if (!func_25(iParam1, 0))
	{
		return false;
	}
	return func_646(iParam0, iParam1) >= iParam2;
}

int func_664(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_666(iParam0) };
	Var5 = { func_667(iParam0, iParam1, Var0, Var0.f_4) };
	return func_668(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_665(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

struct<5> func_666(int iParam0)
{
	Var0 = { func_667(iParam0, 1328661203, func_445(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_667(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_25(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_668(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_509(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_669(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!_0x3e4e811480b3ae79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_669(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

