void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if ((func_1(0, 0, 1) && !func_2()) || func_3(0))
	{
		Global_1911914->f_1582 = 0;
		terminate_this_thread();
	}
	bVar0 = ScriptParam_0.f_3;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_14 = 3;
	}
	while (true)
	{
		if (func_4())
		{
			iLocal_14 = 3;
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
		switch (iLocal_14)
		{
			case 0:
				disable_all_control_actions(0);
				Local_16.f_33 = 1;
				Local_16.f_34 = 1;
				func_5(&Local_16, 2);
				iLocal_14 = 2;
				break;
			case 1:
				if ((!is_ped_active_in_scenario(Global_35, 0) && !has_anim_event_fired(Global_35, -1208591336)) && !func_6(Global_35))
				{
					disable_control_action(0, -822242784, false);
					if (!ped_has_use_scenario_task(Global_35))
					{
						if (func_6(Global_35))
						{
							_hide_ped_weapons(Global_35, 2, false);
							bLocal_15 = true;
							iLocal_14 = 2;
						}
						else if (!is_ped_on_mount(Global_35) && is_ped_on_foot(Global_35))
						{
							if (bVar0)
							{
								iLocal_14 = 3;
							}
							else if (!func_7(Global_35, 993674639))
							{
								bVar1 = true;
								if (func_8(0) || func_8(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									_0xd65fdc686a031c83(Global_35, -1955932021, 2f);
								}
								_task_start_scenario_in_place(Global_35, -1241981548, 0, true, 254049387, -1f, false);
							}
						}
					}
				}
				else
				{
					bLocal_15 = true;
					iLocal_14 = 2;
				}
				break;
			case 2:
				func_9(&Local_16, 0);
				if (func_10(&Local_16) == 0)
				{
					iLocal_14 = 3;
				}
				else if (func_10(&Local_16) != 12)
				{
				}
				else if (((!bLocal_15 && !is_ped_active_in_scenario(Global_35, 0)) && !has_anim_event_fired(Global_35, -1208591336)) && !func_6(Global_35))
				{
					iLocal_14 = 1;
				}
				else
				{
					bLocal_15 = true;
				}
				break;
			case 3:
				func_11(&Local_16, 0);
				terminate_this_thread();
				break;
		}
		wait(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_12())
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
		iVar0 = func_13(&(Global_1898164->f_1[0]));
		if (func_14(iVar0) && func_15((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_16(&(Global_1898164->f_1[0])))
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

bool func_2()
{
	return Global_1911914->f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_4()
{
	if (_0x9e4ef615e307fbbe())
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
	if (func_17())
	{
		return true;
	}
	if (is_entity_dead(player_ped_id()))
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
		if (func_18())
		{
			return true;
		}
	}
	if (func_19())
	{
		return true;
	}
	if (bLocal_15)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			if (!func_6(player_ped_id()))
			{
				return true;
			}
		}
		else if (!is_ped_active_in_scenario(player_ped_id(), 1) && !has_anim_event_fired(Global_35, -1208591336))
		{
			return true;
		}
	}
	return false;
}

void func_5(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_20(uParam0);
	}
}

bool func_6(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_7(int iParam0, int iParam1)
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

int func_8(int iParam0)
{
	iVar0 = 0;
	if (get_current_ped_weapon(Global_35, &iVar0, true, iParam0, false))
	{
		if (func_21(iVar0, 0))
		{
			if (_is_weapon_two_handed(iVar0) || func_22(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_9(var uParam0, int iParam1)
{
	uVar0[0] = uParam0[1];
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		func_11(uParam0, 0);
	}
	set_ped_can_play_ambient_anims(Global_35, false);
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	if ((func_23() != -1 && func_24()) || func_25())
	{
		if (func_26(uParam0[0], 0))
		{
			func_27(uParam0);
			func_20(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		_0xc9caeaeec1256e54(-469828803);
	}
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -124244224, false);
	_disable_first_person_cam_this_frame();
	switch (func_10(uParam0))
	{
		case 2:
			disable_all_control_actions(0);
			if (func_28(uParam0))
			{
				func_29(uParam0);
				func_30(uParam0);
				func_31(uParam0);
			}
			if (func_32(uParam0))
			{
				func_5(uParam0, 3);
			}
			break;
		case 3:
			disable_all_control_actions(0);
			if (func_23() == 0 && _0x251241caec707106())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
				if (func_33())
				{
					func_34(0);
				}
			}
			if (((uParam0->f_34 || func_35(uParam0[0], 1)) || func_36(8192)) || uParam0->f_35)
			{
				func_37(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_38(uParam0))
			{
				uParam0->f_62 = 1;
				if (func_36(4096))
				{
					uParam0->f_52 = 0;
				}
				else if (func_36(8192))
				{
					uParam0->f_52 = 4;
				}
				func_5(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_39(uParam0))
			{
				func_5(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_40(uParam0))
			{
				func_5(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 0))
			{
				if (func_43(uParam0, 0))
				{
					func_5(uParam0, 8);
				}
				else if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (!uParam0->f_62)
			{
				func_5(uParam0, 4);
				return;
			}
			if (func_44(uParam0))
			{
				func_43(uParam0, 1);
				func_5(uParam0, 8);
			}
			break;
		case 8:
			disable_all_control_actions(0);
			if (_is_app_active(-1624772174))
			{
				if (_0xf7c180f57f85d0b8(-1624772174))
				{
					Global_1911914->f_1580 = 0;
					func_5(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				disable_all_control_actions(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 1))
			{
				func_5(uParam0, 10);
			}
			break;
		case 10:
			func_45(0);
			if (func_23() == 0 && _0x43ab9d5a7d415478())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_46(uParam0, 1);
				(*uParam0)[2] = func_47("CAMP_REC_QUIT", 814057702, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (func_48(32))
				{
					func_49(uParam0[2], 0, 1);
				}
				else
				{
					func_49(uParam0[2], 1, 1);
				}
				(*uParam0)[1] = func_47("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (func_21(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_50(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (func_51(uParam0->f_75))
				{
					func_52(uParam0[1], "CAMP_REC_COOK", 1);
				}
				else if (func_53(uParam0->f_75, -1636519629) == -701492487)
				{
					func_52(uParam0[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					func_52(uParam0[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = func_47(func_54(uParam0), -711536720, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				(*uParam0)[5] = func_55("RECIPE", -1384133541, 1710877787, 0);
				func_56(uParam0[5], -1384133541);
				func_56(uParam0[5], 1710877787);
				if (_databinding_is_data_id_valid(uParam0->f_73))
				{
					iVar2 = _databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && func_21(uParam0->f_77, 0))
				{
					func_49(uParam0[5], 1, 1);
				}
				else
				{
					func_49(uParam0[5], 0, 1);
				}
				(*uParam0)[6] = func_47("INFO", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				if (!uParam0->f_82)
				{
					func_52(uParam0[6], "INFO", 1);
				}
				else
				{
					func_52(uParam0[6], "INGREDIENTS", 1);
				}
				if (_databinding_get_array_count(uParam0->f_40) == 0)
				{
					func_57(uParam0);
					func_49(uParam0[6], 0, 1);
					_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "CRFT_NO_REC_TIP"));
				}
				func_58(uParam0, uParam0->f_77, uParam0->f_78);
				func_31(uParam0);
			}
			if (Global_1911914->f_1580)
			{
				Global_1911914->f_1580 = 0;
				_0xd962f8579d702db5();
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49(uParam0[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_59(uParam0[2], 1))
			{
				if (uParam0->f_34)
				{
					func_5(uParam0, 16);
				}
				else
				{
					func_60(uParam0, 0);
					func_61("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_5(uParam0, 1);
					}
					else
					{
						func_5(uParam0, 3);
					}
				}
			}
			else if (func_35(uParam0[1], 1))
			{
				func_62(uParam0);
			}
			else if (func_35(uParam0[3], 1))
			{
				_0xd962f8579d702db5();
				uParam0->f_57 = !uParam0->f_57;
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49(uParam0[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_63(uParam0[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Left", "SSCRFT_Sounds");
					func_64(uParam0, 0);
				}
			}
			else if (func_63(uParam0[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Right", "SSCRFT_Sounds");
					func_64(uParam0, 1);
				}
			}
			else if (func_35(uParam0[6], 1))
			{
				func_65(uParam0, 1);
			}
			else
			{
				iVar3 = -813979060;
				while (_event_manager_is_event_pending(iVar3))
				{
					if (_event_manager_peek_event(iVar3, &iVar4))
					{
						if (iVar4 == 703281244 || iVar4 == -722926211)
						{
							func_66(uParam0);
						}
						else if (iVar4 == -1740156697)
						{
							func_67(uParam0, &iVar4);
						}
						else if (iVar4 == -1203660660)
						{
							if (func_26(uParam0[1], 0))
							{
								func_62(uParam0);
							}
						}
						_event_manager_pop_event(iVar3);
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
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			iVar8 = _0xc22aa08a8adb87d4(Global_35);
			iVar9 = func_53(uParam0->f_77, -1636519629);
			if (iVar8 == -1433449364)
			{
				if (!_0x68821369a2ceadd5(Global_35, 1335077954))
				{
					_0xd65fdc686a031c83(Global_35, 1335077954, 6f);
					_0x6d07b371e9439019(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == -518407211)
				{
					if (!_0x68821369a2ceadd5(Global_35, 653141085))
					{
						_0xd65fdc686a031c83(Global_35, 653141085, 6f);
						_0x6d07b371e9439019(Global_35);
					}
					return;
				}
				else
				{
					_hide_ped_weapons(Global_35, 2, false);
				}
				if (((((((((iVar9 == 414472632 && !_is_anim_scene_loaded(uParam0->f_63, true, false)) || (iVar9 == -1136843638 && !_is_anim_scene_loaded(uParam0->f_66, true, false))) || (uParam0->f_88 != 0 && !has_model_loaded(uParam0->f_88))) || (iVar9 == -732326901 && !_is_anim_scene_loaded(uParam0->f_68, true, false))) || (iVar9 == 786205940 && !_is_anim_scene_loaded(uParam0->f_67, true, false))) || (iVar9 == -1141771998 && !_is_anim_scene_loaded(uParam0->f_69, true, false))) || (iVar9 == 364689687 && !_is_anim_scene_loaded(uParam0->f_70, true, false))) || (iVar9 == -842117252 && !_is_anim_scene_loaded(uParam0->f_71, true, false))) || (iVar9 == -1610298873 && !_is_anim_scene_loaded(uParam0->f_72, true, false)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!_is_anim_scene_loaded(uParam0->f_65, true, false) || (is_ped_active_in_scenario(Global_35, 1) && !is_ped_active_in_scenario(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != -518407211)
				{
					if (uParam0->f_31)
					{
						if (!_0x68821369a2ceadd5(Global_35, 796456488))
						{
							_0xd65fdc686a031c83(Global_35, 796456488, 2f);
							_0x6d07b371e9439019(Global_35);
						}
						return;
					}
				}
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
				func_69(uParam0, 0, &uVar0);
				func_68(uParam0);
				if (func_70(uParam0[1]))
				{
					func_71((*uParam0)[1], 1, 1);
				}
				if (func_72(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, 1704213876, 0);
					func_58(uParam0, uParam0->f_77, uParam0->f_78);
					func_73(uParam0[1], -1067771379, 0, 1);
					func_74(uParam0[1], 10, 1, 1);
					func_74(uParam0[1], 11, 1, 1);
					func_49(uParam0[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 250, 251, 1, 1073741824, 1704213876, 0);
					func_73(uParam0[1], -1067771379, 0, 1);
					func_75(uParam0[1], 1, 1);
					func_74(uParam0[1], 10, 1, 1);
					func_74(uParam0[1], 11, 1, 1);
					func_49(uParam0[1], 0, 1);
				}
				return;
			}
			if (has_anim_event_fired(Global_35, -563455375))
			{
				_0x5f217bc1190503d8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_72(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (func_26(uParam0[1], 0))
					{
						if (func_76(uParam0[1], 1) || is_control_pressed(0, 1138488863))
						{
							uParam0->f_36 = 1;
							func_49(uParam0[1], 0, 1);
							func_49(uParam0[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == 1186037675 && has_anim_event_fired(Global_35, -1011038463)) || (uParam0->f_88 != 1186037675 && has_anim_event_fired(Global_35, 2024314131)))
						{
							if (does_entity_exist(uParam0->f_86))
							{
								delete_object(&(uParam0->f_86));
							}
							if (func_77(uParam0->f_77, -1588156645) && iVar9 != -842117252)
							{
								uParam0->f_86 = _create_weapon_object(func_78(uParam0->f_77, 0), 1, Global_36, true, 1f);
								set_entity_completely_disable_collision(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									set_anim_scene_entity(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = create_object(uParam0->f_88, Global_36, true, true, false, false, false);
								set_entity_completely_disable_collision(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -842117252)
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else
							{
								attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
					if (has_anim_event_fired(Global_35, 966057053))
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = _create_weapon_object(-1511427369, 1, Global_36, true, 1f);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = create_object(-370340297, Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = create_object(1974613782, Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								set_anim_scene_entity(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = create_object(-655768729, Global_36, true, true, false, false, false);
						}
						set_entity_completely_disable_collision(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							attach_entity_to_entity(uParam0->f_86, Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (has_anim_event_fired(Global_35, 1394836706))
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
					}
					if (has_anim_event_fired(Global_35, 1471149551))
					{
						if (!is_entity_dead(uParam0->f_87))
						{
							set_entity_visible(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (has_anim_event_fired(Global_35, 966057053))
					{
						set_entity_visible(uParam0->f_85, true);
					}
				}
				if (has_anim_event_fired(Global_35, -61921192))
				{
					if (!func_80(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								func_82(uParam0, iVar9, 0);
							}
							return;
						}
						else if (func_83(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
						func_86(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							func_87();
						}
					}
					if (iVar9 == -842117252)
					{
						if (does_entity_exist(uParam0->f_86))
						{
							delete_object(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						func_82(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(func_26(uParam0[1], 0) && is_control_pressed(0, 1138488863)))
					{
						if (has_anim_event_fired(Global_35, 596390595))
						{
							func_82(uParam0, iVar9, 1);
						}
					}
				}
				if (has_anim_event_fired(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					func_49(uParam0[1], 1, 1);
					func_49(uParam0[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (_0xb89fcff19dafff28(func_79(uParam0, iVar9), "player"))
				{
					func_82(uParam0, iVar9, 0);
				}
			}
			else if (func_90(&(uParam0->f_89), (IntToFloat(uParam0->f_53) / 1000f)))
			{
				if (!func_80(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							func_82(uParam0, iVar9, 0);
						}
						return;
					}
					else if (func_83(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
					func_86(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						func_87();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_91(131072);
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				func_82(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
			}
			break;
		case 13:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (does_entity_exist(uParam0->f_87))
			{
				if (has_anim_event_fired(Global_35, -2015667492))
				{
					delete_object(&(uParam0->f_87));
				}
			}
			if (!func_48(128))
			{
				if (!func_26(uParam0[2], 0))
				{
					func_49(uParam0[2], 1, 1);
					func_75(uParam0[2], 0, 1);
				}
				if (!func_26(uParam0[4], 0))
				{
					func_49(uParam0[4], 1, 1);
					func_75(uParam0[4], 1, 1);
				}
			}
			if (func_59(uParam0[2], 1))
			{
				func_27(uParam0);
				func_92(&(uParam0->f_89));
				func_5(uParam0, 14);
				return;
			}
			else if (func_93(uParam0[4], 1))
			{
				func_27(uParam0);
				if (does_entity_exist(uParam0->f_85))
				{
					delete_object(&(uParam0->f_85));
				}
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				if (does_entity_exist(uParam0->f_87))
				{
					delete_object(&(uParam0->f_87));
				}
				iVar11 = _0x569f1e1237508deb(Global_35);
				if (iVar11 != -518407211)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar12 = func_79(uParam0, iVar9);
				remove_anim_scene_entity(iVar12, "player", Global_35);
				func_60(uParam0, 0);
				func_61("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
				return;
			}
			else if (func_35(uParam0[1], 1))
			{
				func_49(uParam0[4], 0, 1);
				func_49(uParam0[2], 0, 1);
				func_49(uParam0[1], 0, 1);
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar13 = func_79(uParam0, iVar9);
				if (iVar13 != 0)
				{
					reset_anim_scene(iVar13, "pl_craft");
					load_anim_scene(iVar13);
				}
				func_92(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_5(uParam0, 12);
				return;
			}
			if (func_94(uParam0[4], 1))
			{
				if (!func_95(&(uParam0->f_89)))
				{
					func_96(&(uParam0->f_89));
				}
				else if (func_90(&(uParam0->f_89), 0.1f))
				{
					func_52(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_89)))
				{
					func_92(&(uParam0->f_89));
				}
				func_52(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (does_entity_exist(uParam0->f_87))
			{
				if (has_anim_event_fired(Global_35, -2015667492))
				{
					delete_object(&(uParam0->f_87));
				}
			}
			iVar9 = func_53(uParam0->f_77, -1636519629);
			iVar14 = func_79(uParam0, iVar9);
			if ((iVar14 == 0 || (!_does_anim_scene_exist(iVar14) || _0xf94692eb9dc15d74(iVar14, 0))) || has_anim_event_fired(Global_35, -1208591336))
			{
				if (does_entity_exist(uParam0->f_85))
				{
					delete_object(&(uParam0->f_85));
				}
				if (does_entity_exist(uParam0->f_86))
				{
					delete_object(&(uParam0->f_86));
				}
				iVar15 = _0x569f1e1237508deb(Global_35);
				if (iVar15 != -518407211)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				remove_anim_scene_entity(iVar14, "player", Global_35);
				func_5(uParam0, 15);
			}
			break;
		case 1:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				if (func_70(uParam0[0]))
				{
					func_49(uParam0[0], 0, 1);
				}
				func_31(uParam0);
			}
			break;
		case 16:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
			}
			func_60(uParam0, 0);
			_databinding_remove_data_entry(uParam0->f_39);
			Global_1911914->f_1576 = 0;
			terminate_this_thread();
			break;
	}
}

int func_10(var uParam0)
{
	return uParam0->f_8;
}

void func_11(var uParam0, bool bParam1)
{
	func_27(uParam0);
	func_60(uParam0, 0);
	_databinding_remove_data_entry(uParam0->f_39);
	if (func_33())
	{
		func_34(0);
	}
	if (bParam1)
	{
		func_97(uParam0);
		return;
	}
	if (_does_text_database_exist(&(uParam0->f_17)))
	{
		_text_database_delete(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!is_gameplay_cam_rendering())
		{
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
		render_script_cams(false, true, 3000, true, false, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_63))
	{
		_delete_anim_scene(uParam0->f_63);
	}
	if (_does_anim_scene_exist(uParam0->f_65))
	{
		_delete_anim_scene(uParam0->f_65);
	}
	if (_does_anim_scene_exist(uParam0->f_66))
	{
		_delete_anim_scene(uParam0->f_66);
	}
	if (_does_anim_scene_exist(uParam0->f_67))
	{
		_delete_anim_scene(uParam0->f_67);
	}
	if (_does_anim_scene_exist(uParam0->f_68))
	{
		_delete_anim_scene(uParam0->f_68);
	}
	if (_does_anim_scene_exist(uParam0->f_69))
	{
		_delete_anim_scene(uParam0->f_69);
	}
	if (_does_anim_scene_exist(uParam0->f_70))
	{
		_delete_anim_scene(uParam0->f_70);
	}
	if (_does_anim_scene_exist(uParam0->f_71))
	{
		_delete_anim_scene(uParam0->f_71);
	}
	if (_does_anim_scene_exist(uParam0->f_72))
	{
		_delete_anim_scene(uParam0->f_72);
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_87))
	{
		delete_object(&(uParam0->f_87));
	}
	set_streamed_texture_dict_as_no_longer_needed("satchel_textures");
	Global_1911914->f_1576 = 0;
	if (func_23() == -1)
	{
		func_5(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_81(uParam0->f_77, uParam0->f_78);
				func_98(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		func_5(uParam0, 0);
	}
}

bool func_12()
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

int func_13(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_100(func_99(iParam0));
}

bool func_14(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_16(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_17()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_18()
{
	if (!is_ped_in_any_train(Global_35))
	{
		return false;
	}
	iVar0 = func_101(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_19()
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

void func_20(var uParam0)
{
	uParam0->f_18 = 1;
}

bool func_21(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_22(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24()
{
	return &Global_1898068;
}

bool func_25()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

bool func_26(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	return !func_102(iParam0, 4);
}

void func_27(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return uParam0->f_18;
}

void func_29(var uParam0)
{
	StringCopy(&(uParam0->f_17), "CAMP", 8);
}

void func_30(var uParam0)
{
	if (_does_text_database_exist(&(uParam0->f_17)))
	{
		_text_database_request(&(uParam0->f_17));
	}
	request_anim_dict("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
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
	func_103(uParam0);
	request_streamed_texture_dict("satchel_textures", false);
	if (uParam0->f_31)
	{
		request_model(-194504515, false);
		request_model(-2049449981, false);
		request_model(-1172163183, false);
		request_model(222541312, false);
		request_model(1289914954, false);
	}
}

void func_31(var uParam0)
{
	uParam0->f_18 = 0;
}

bool func_32(var uParam0)
{
	if (func_104(&(uParam0->f_17)))
	{
		if (!_text_database_has_loaded(&(uParam0->f_17)))
		{
			return false;
		}
	}
	if (!has_anim_dict_loaded("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_66)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_67)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_68)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_69)))
	{
		return false;
	}
	if (!has_streamed_texture_dict_loaded("satchel_textures"))
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
	if (uParam0->f_31)
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

bool func_33()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914->f_1582 = bParam0;
	decor_set_bool(Global_35, "player_crafting_active", bParam0);
}

bool func_35(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_36(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_37(var uParam0)
{
	func_34(1);
	func_5(uParam0, 4);
}

bool func_38(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914->f_1576 = 0;
		uParam0->f_55 = 0;
		func_107(uParam0, 600942249);
		uParam0->f_54++;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_107(uParam0, -257768755);
		uParam0->f_54++;
		return false;
	}
	else
	{
		func_107(uParam0, -214678071);
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return true;
}

bool func_39(var uParam0)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = _databinding_add_data_container_from_path("", "CraftingDatastore");
	_databinding_add_data_hash(uParam0->f_39, "filter", func_108(uParam0->f_52));
	_databinding_add_data_int(uParam0->f_39, "filterCount", 5 + 1);
	_databinding_add_data_int(uParam0->f_39, "filterIndex", uParam0->f_52);
	_databinding_add_data_string(uParam0->f_39, "tipText", "");
	uParam0->f_51 = _databinding_add_ui_item_list(uParam0->f_39, "recipes_lines");
	_databinding_add_data_bool(uParam0->f_39, "variantVisible", false);
	_databinding_add_data_string(uParam0->f_39, "variantText", " ");
	_databinding_add_data_int(uParam0->f_39, "variantCount", 0);
	_databinding_add_data_int(uParam0->f_39, "variantIndex", 0);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgDescription", false);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgPlayer", false);
	_databinding_add_data_bool(uParam0->f_39, "ShowRpgHorse", false);
	_databinding_add_data_hash(uParam0->f_39, "RPGDescription", 0);
	_databinding_add_data_bool(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_109(uParam0->f_41[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = _databinding_add_data_container(uParam0->f_39, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		_databinding_add_data_string(&(uParam0->f_46[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		_databinding_add_data_int(&(uParam0->f_46[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_40(var uParam0)
{
	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if (func_21((*Global_1911914)[iVar0]->f_6, 0))
		{
			func_110(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return true;
}

void func_41(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_40))
	{
		uParam0->f_40 = _databinding_add_ui_item_list(uParam0->f_39, "recipes");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_40);
	}
	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

bool func_42(var uParam0, bool bParam1)
{
	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if ((uParam0->f_57 && (*Global_1911914)[iVar0]->f_2) || !uParam0->f_57)
		{
			if (Global_1911914->f_1585 != 0)
			{
				bVar3 = func_77((*Global_1911914)[iVar0]->f_6, Global_1911914->f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					func_110(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914->f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return false;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return true;
			}
		}
	}
}

bool func_43(var uParam0, bool bParam1)
{
	uParam0->f_58 = 1;
	if (bParam1 && _is_app_active(-1624772174))
	{
		if (_uistatemachine_request_transition(-1624772174, 1014850361))
		{
			func_111(1);
			func_112(8);
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
			func_112(8);
			func_111(1);
			func_113(0, -100);
			func_113(2, -100);
			func_113(1, -100);
			return true;
		}
	}
	return false;
}

bool func_44(var uParam0)
{
	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		func_114(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_45(bool bParam0)
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
	iVar0 = func_115(Global_35);
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

void func_46(var uParam0, bool bParam1)
{
	if (_does_scenario_point_exist(uParam0->f_9))
	{
		iVar0 = _get_entity_scenario_point_is_attached_to(uParam0->f_9);
	}
	if (does_entity_exist(iVar0))
	{
		set_entity_collision(iVar0, bParam1, false);
	}
}

int func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_102(iVar0, 2))
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
		func_116(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

void func_49(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (bParam1)
	{
		func_117(iParam0, 4);
		func_118(iVar0, 1);
		func_119(iVar0, 1);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(iVar0, 0);
	}
}

void func_50(var uParam0, var uParam1)
{
	iVar0 = _databinding_read_data_int_from_parent(*uParam1, "eOutputItem");
	iVar1 = _databinding_read_data_int_from_parent(*uParam1, "eCost");
	iVar2 = iVar0;
	_0xd962f8579d702db5();
	if (func_21(iVar2, 0) && func_121(iVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = iVar2;
		uParam0->f_78 = iVar1;
		func_71((*uParam0)[1], 1, 1);
		iVar3 = _databinding_read_data_int_from_parent(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 1);
			_databinding_write_data_string_from_parent(uParam0->f_39, "variantText", _create_var_string(0, uParam0->f_77));
			_databinding_write_data_int_from_parent(uParam0->f_39, "variantCount", iVar3);
			iVar4 = _databinding_read_data_int_from_parent(*uParam1, "iCurCostVariant");
			iVar5 = _databinding_read_data_int_from_parent(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1911914)
			{
				iVar6 = (*Global_1911914)[iVar5]->f_8;
			}
			_databinding_write_data_int_from_parent(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			func_49(uParam0[5], 1, 1);
		}
		else
		{
			_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 0);
			uParam0->f_79 = 0;
			func_49(uParam0[5], 0, 1);
		}
		uParam0->f_53 = round((get_anim_duration(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f));
		uParam0->f_80 = _databinding_read_data_bool_from_parent(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = func_47("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
		func_74(uParam0[1], 11, 1, 1);
		if (Global_1911914->f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", func_125(iVar2));
			func_65(uParam0, 0);
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", 0);
		}
		if (_databinding_read_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914->f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
			{
				func_126(uParam0);
			}
		}
	}
}

bool func_51(int iParam0)
{
	if (func_127(iParam0) == 2085633299 && _0x245d07651b1d183b(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

int func_53(int iParam0, int iParam1)
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

char* func_54(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_102(iVar0, 2))
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
		func_116(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_57(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_41[iVar0]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam0->f_41[iVar0]), "inUse", 0);
		iVar0++;
	}
	_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", "");
	_databinding_write_data_bool_from_parent(uParam0->f_39, "variantVisible", 0);
}

void func_58(var uParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam1, 0))
	{
		if (func_70(uParam0[1]))
		{
			func_49(uParam0[1], 0, 1);
		}
		return;
	}
	bVar2 = func_84();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914->f_1579 && func_124(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_128(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (func_23() == -1)
	{
		if (func_36(4096))
		{
			if (func_53(iParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (func_36(8192))
		{
			if (iParam1 != 1831763320)
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((func_89(iParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == -214678071) || iParam2 == 278772510))) || (!uParam0->f_32 && iParam2 == 278772510))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = func_129(iParam1, 0, 0);
			iVar7 = func_130(iParam1, 0);
			iVar8 = func_131(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_37 = func_132(iVar7, iVar8);
		}
	}
	if (func_70(uParam0[1]))
	{
		if (func_51(iParam1))
		{
			func_52(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_53(iParam1, -1636519629) == -701492487)
		{
			func_52(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_52(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_49(uParam0[1], bVar3, 1);
	}
	func_133(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_70(uParam0[6]))
	{
		func_49(uParam0[6], !bVar4, 1);
	}
}

bool func_59(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return _uiprompt_is_just_released((*Global_1945938)[iVar0]->f_3);
}

void func_60(var uParam0, bool bParam1)
{
	func_111(0);
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
	uParam0->f_58 = 0;
	func_91(8);
	_0xd962f8579d702db5();
}

void func_61(char* sParam0, char* sParam1)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, 1);
		(*Global_1956588)[Global_1956588->f_25] = iVar0;
		Global_1956588->f_25 = (Global_1956588->f_25 + 1 % 24);
	}
}

void func_62(var uParam0)
{
	if (func_53(uParam0->f_77, -1636519629) == -701492487)
	{
		func_60(uParam0, 0);
	}
	else
	{
		func_60(uParam0, 1);
	}
	func_71((*uParam0)[1], 1, 1);
	func_71((*uParam0)[5], 1, 1);
	func_71((*uParam0)[6], 1, 1);
	func_71((*uParam0)[3], 1, 1);
	uParam0->f_36 = 1;
	if (!uParam0->f_80 && !func_51(uParam0->f_77))
	{
		func_112(131072);
		iVar0 = func_53(uParam0->f_77, -1636519629);
		iVar1 = func_79(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_36 = 0;
			reset_anim_scene(iVar1, "pl_craft");
			load_anim_scene(iVar1);
			uParam0->f_88 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					uParam0->f_88 = -467664954;
				}
				else if (func_77(uParam0->f_77, -1588156645))
				{
					uParam0->f_88 = func_134(func_78(uParam0->f_77, 0));
				}
				else if (func_77(uParam0->f_77, 457423347))
				{
					uParam0->f_88 = -193645029;
				}
				else if (func_77(uParam0->f_77, -1846429632))
				{
					uParam0->f_88 = 2132464141;
				}
				else if (func_77(uParam0->f_77, -1067199465))
				{
					uParam0->f_88 = 1186037675;
				}
				else
				{
					uParam0->f_88 = func_134(uParam0->f_77);
				}
			}
			if (uParam0->f_88 != 0)
			{
				request_model(uParam0->f_88, false);
			}
		}
		func_52(uParam0[2], "CAMP_REC_BACK", 1);
		func_73(uParam0[2], -1067771379, 0, 1);
		func_49(uParam0[2], 0, 1);
		func_75(uParam0[2], 0, 1);
		(*uParam0)[4] = func_47("CAMP_REC_BACK", 814057702, 1, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
		func_135((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_73(uParam0[4], -1067771379, 0, 1);
		func_49(uParam0[4], 0, 1);
		func_74(uParam0[4], 19, 1, 1);
		func_74(uParam0[4], 20, 1, 1);
		func_74(uParam0[4], 13, 1, 1);
		func_74(uParam0[2], 13, 1, 1);
		if (func_70(uParam0[2]))
		{
			func_73(uParam0[2], -1067771379, 0, 1);
		}
		func_5(uParam0, 12);
	}
	else
	{
		func_5(uParam0, 11);
	}
}

bool func_63(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_64(var uParam0, bool bParam1)
{
	_0xd962f8579d702db5();
	if (_databinding_is_data_id_valid(uParam0->f_73))
	{
		iVar0 = _databinding_read_data_int_from_parent(uParam0->f_73, "iCurCostVariant");
		iVar1 = _databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == 278772510)
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
				Var5 = { func_136(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
				if (func_137(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_138(0, iVar3);
						bVar2 = true;
					}
					func_139(iVar3);
				}
			}
			else
			{
				Var5 = { func_136(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
				if (func_137(Var5, &iVar3, &iVar4, 0))
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
							iVar17 = func_138(iVar16, iVar3);
							if (func_77(iVar17, iVar15))
							{
								uParam0->f_78 = 278772510;
								uParam0->f_77 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_139(iVar3);
				}
			}
		}
		else
		{
			iVar18 = _item_database_get_acquire_costs_count(uParam0->f_77);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while (((Var19.f_2 != 1644203656 || Var19 == -489628648) || (!Global_1911914->f_1579 && func_124(uParam0->f_77, Var19, 1))) && iVar66 < iVar18)
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
				if (_item_database_get_acquire_cost(uParam0->f_77, iVar0, &Var19))
				{
				}
			}
			uParam0->f_78 = Var19;
		}
		_databinding_write_data_int_from_parent(uParam0->f_73, "eCost", uParam0->f_78);
		_databinding_write_data_int_from_parent(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = _databinding_read_data_int_from_parent(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1911914)
		{
			iVar68 = (*Global_1911914)[iVar67]->f_8;
		}
		_databinding_write_data_int_from_parent(uParam0->f_73, "iCurCostVariant", iVar0);
		_databinding_write_data_int_from_parent(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		_databinding_write_data_string_from_parent(uParam0->f_39, "variantText", _create_var_string(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (_databinding_read_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription"))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 1);
		}
		_databinding_write_data_hash_string_from_parent(uParam0->f_39, "RPGDescription", func_125(uParam0->f_77));
		func_114(uParam0, -1, func_84(), uParam0->f_73, 0, bVar2, 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_82 = !uParam0->f_82;
	}
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowIngredients", !uParam0->f_82);
	if (!uParam0->f_82)
	{
		func_52(uParam0[6], "INFO", 1);
		_0xd962f8579d702db5();
		func_140(uParam0);
	}
	else
	{
		func_52(uParam0[6], "INGREDIENTS", 1);
		func_126(uParam0);
	}
	if (uParam0->f_78 == -214678071)
	{
		if (_databinding_read_data_int_from_parent(uParam0->f_73, "enabled") == 1)
		{
			if (_databinding_read_data_int_from_parent(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_131(uParam0->f_77, uParam0->f_78, func_84(), 0);
				_databinding_write_data_string_from_parent(uParam0->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_66(var uParam0)
{
	_0xd962f8579d702db5();
	func_141(uParam0);
	func_57(uParam0);
	func_140(uParam0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgDescription", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowIngredients", 0);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_58(uParam0, 0, 0);
	func_5(uParam0, 9);
}

void func_67(var uParam0, int iParam1)
{
	func_57(uParam0);
	func_140(uParam0);
	func_50(uParam0, &(iParam1->f_3));
}

void func_68(var uParam0)
{
	iVar0 = func_53(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_85))
		{
			iVar1 = func_142(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = create_object(iVar1, Global_36, true, true, false, false, false);
				set_entity_completely_disable_collision(uParam0->f_85, false, false);
				attach_entity_to_entity(uParam0->f_85, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_63, "player", Global_35, 0);
		start_anim_scene(uParam0->f_63);
		_set_anim_scene_playback_list_bool(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_66, "arrow", uParam0->f_86, 0);
		set_anim_scene_entity(uParam0->f_66, "player", Global_35, 0);
		start_anim_scene(uParam0->f_66);
		_set_anim_scene_playback_list_bool(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_67, "player", Global_35, 0);
		start_anim_scene(uParam0->f_67);
		_set_anim_scene_playback_list_bool(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_65, "player", Global_35, 0);
		if (!does_entity_exist(uParam0->f_85))
		{
			iVar2 = func_142(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = create_object(iVar2, Global_36, true, true, false, false, false);
				set_entity_visible(uParam0->f_85, false);
				set_entity_completely_disable_collision(uParam0->f_85, false, false);
				attach_entity_to_entity(uParam0->f_85, Global_35, get_ped_bone_index(Global_35, 37709), func_143(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		set_anim_scene_entity(uParam0->f_65, "bullet", uParam0->f_85, 0);
		start_anim_scene(uParam0->f_65);
		_set_anim_scene_playback_list_bool(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		set_anim_scene_entity(uParam0->f_68, "player", Global_35, 0);
		start_anim_scene(uParam0->f_68);
		_set_anim_scene_playback_list_bool(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-1511427369, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		set_anim_scene_entity(uParam0->f_69, "player", Global_35, 0);
		start_anim_scene(uParam0->f_69);
		_set_anim_scene_playback_list_bool(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!does_entity_exist(uParam0->f_86))
		{
			uParam0->f_86 = _create_weapon_object(-764310200, 1, Global_36, true, 1f);
			set_entity_visible(uParam0->f_86, false);
			set_entity_completely_disable_collision(uParam0->f_86, false, false);
		}
		if (!does_entity_exist(uParam0->f_87))
		{
			uParam0->f_87 = create_object(-1594634038, Global_36, true, true, false, false, false);
			set_entity_visible(uParam0->f_87, false);
			set_entity_completely_disable_collision(uParam0->f_87, false, false);
		}
		set_anim_scene_entity(uParam0->f_70, "RAG", uParam0->f_87, 0);
		set_anim_scene_entity(uParam0->f_70, "player", Global_35, 0);
		start_anim_scene(uParam0->f_70);
		_set_anim_scene_playback_list_bool(uParam0->f_70, "pl_craft", true);
		_set_anim_scene_playback_list_bool(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_71, "player", Global_35, 0);
		start_anim_scene(uParam0->f_71);
		_set_anim_scene_playback_list_bool(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		set_anim_scene_entity(uParam0->f_72, "player", Global_35, 0);
		start_anim_scene(uParam0->f_72);
		_set_anim_scene_playback_list_bool(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = round((get_anim_duration(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f));
		func_96(&(uParam0->f_89));
		task_play_anim(Global_35, func_122(uParam0->f_77), func_123(uParam0->f_77), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_69(var uParam0, bool bParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_70(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_49(uParam0[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

bool func_70(int iParam0)
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

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_106(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_144(iVar0);
	*uParam0 = 0;
}

bool func_72(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_75(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	func_118(iVar0, bParam1);
}

bool func_76(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_77(int iParam0, int iParam1)
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

int func_78(int iParam0, bool bParam1)
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
	if (func_21(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_145(iVar0) || func_146(iVar0))
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

int func_79(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_147(bParam0));
}

int func_81(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return -1;
	}
	if (!func_88(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_148(iParam0, 1, 0) };
	if (func_149(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_150(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = func_151(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	func_152(iVar21, Var22);
	Var29 = { func_153(iParam0) };
	_0x6a0184e904cdf25e(&Var29, 1);
	return iVar21;
}

void func_82(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_55 = 0;
	func_112(262144);
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	iVar0 = func_79(uParam0, iParam1);
	set_anim_scene_bool(iVar0, "bStopLoop", true, false);
	if (!func_48(128))
	{
		func_49(uParam0[2], 1, 1);
		func_49(uParam0[4], 1, 1);
	}
	func_75(uParam0[2], 0, 1);
	func_75(uParam0[4], 1, 1);
	func_154(uParam0[1], 1);
	func_71((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_47("CAMP_REC_MAKE", 1138488863, 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, 1704213876, 0);
	func_74(uParam0[1], 11, 1, 1);
	func_74(uParam0[1], 19, 1, 1);
	func_73(uParam0[1], -1067771379, 0, 1);
	func_49(uParam0[1], bParam2, 1);
	func_5(uParam0, 13);
}

bool func_83(int iParam0)
{
	iVar0 = func_155(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_84()
{
	iVar0 = func_156(7);
	if (!is_ped_injured(iVar0))
	{
		if (func_157(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	_0x78c2e029db205a3a(iParam0, iParam1, 0);
	return func_158(iParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_21(iParam0, 0))
	{
		return;
	}
	func_160(func_159(-413660030), iParam1);
	if (bParam3 && iParam0 != -1199896558)
	{
		if (func_23() == -1)
		{
			if (func_77(iParam0, -1588156645))
			{
				iVar0 = func_161(func_78(iParam0, 0), 0);
				if (is_weapon_valid(iVar0))
				{
					func_162(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_127(iParam0) == -1977020088)
			{
				if (func_163(iParam0, 0))
				{
					func_164(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_165(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_166(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_153(iParam0) };
	_0x6a0184e904cdf25e(&Var1, iParam1);
	if (func_121(iParam0, 0))
	{
		Var1 = { func_167(-1276738576, -1555359431) };
	}
	else if (func_121(iParam0, 2))
	{
		Var1 = { func_167(-1276738576, 307971639) };
	}
	else if (func_121(iParam0, 5))
	{
		Var1 = { func_167(-1276738576, 644069854) };
	}
	else if (func_121(iParam0, 1))
	{
		Var1 = { func_167(-1276738576, -97115714) };
	}
	else if (func_121(iParam0, 3))
	{
		Var1 = { func_167(-1276738576, -2143405780) };
	}
	else if (func_121(iParam0, 4))
	{
		Var1 = { func_167(-1276738576, 1455184052) };
	}
	_0x6a0184e904cdf25e(&Var1, 1);
	if (func_23() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_121(iParam0, 0))
		{
			func_168(40);
		}
		else
		{
			func_168(39);
		}
	}
	iVar10 = 0;
	if ((_item_database_fillout_item_info(iParam0, &vVar3) && vVar3.z == -1037537535) && func_169(Global_35, iParam0, &iVar10))
	{
		func_170(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

void func_87()
{
	if (func_171())
	{
		func_172(1);
	}
}

bool func_88(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_128(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

bool func_89(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_148(iParam0, 0, 0) };
	return func_149(iParam0, &Var0, iParam1, 0, bParam2);
}

bool func_90(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		return false;
	}
	if (func_173(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_91(int iParam0)
{
	if (func_36(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_93(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_94(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

bool func_95(var uParam0)
{
	return func_174(*uParam0, 1);
}

void func_96(var uParam0)
{
	func_175(uParam0, 0f);
}

void func_97(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_63))
	{
		reset_anim_scene(uParam0->f_63, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_65))
	{
		reset_anim_scene(uParam0->f_65, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_66))
	{
		reset_anim_scene(uParam0->f_66, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_67))
	{
		reset_anim_scene(uParam0->f_67, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_68))
	{
		reset_anim_scene(uParam0->f_68, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_69))
	{
		reset_anim_scene(uParam0->f_69, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_70))
	{
		reset_anim_scene(uParam0->f_70, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_71))
	{
		reset_anim_scene(uParam0->f_71, 0);
	}
	if (_does_anim_scene_exist(uParam0->f_72))
	{
		reset_anim_scene(uParam0->f_72, 0);
	}
	if (does_entity_exist(uParam0->f_85))
	{
		delete_object(&(uParam0->f_85));
	}
	if (does_entity_exist(uParam0->f_86))
	{
		delete_object(&(uParam0->f_86));
	}
	if (does_entity_exist(uParam0->f_87))
	{
		delete_object(&(uParam0->f_87));
	}
}

void func_98(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_176(11, 1, 0);
		iVar0++;
	}
	if (func_121(iParam0, 0))
	{
		func_177(40);
	}
	else
	{
		func_177(39);
	}
}

int func_99(int iParam0)
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

int func_100(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_101(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_178(iVar0))
		{
			fVar3 = func_179(iVar0, vParam0);
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

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_103(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_63))
	{
		uParam0->f_63 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_63);
	}
	if (!_does_anim_scene_exist(uParam0->f_65))
	{
		uParam0->f_65 = _create_anim_scene("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_65);
	}
	if (!_does_anim_scene_exist(uParam0->f_66))
	{
		uParam0->f_66 = _create_anim_scene("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_66);
	}
	if (!_does_anim_scene_exist(uParam0->f_67))
	{
		uParam0->f_67 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_67);
	}
	if (!_does_anim_scene_exist(uParam0->f_68))
	{
		uParam0->f_68 = _create_anim_scene("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_68);
	}
	if (!_does_anim_scene_exist(uParam0->f_69))
	{
		uParam0->f_69 = _create_anim_scene("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_69);
	}
	if (!_does_anim_scene_exist(uParam0->f_70))
	{
		uParam0->f_70 = _create_anim_scene("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_70);
	}
	if (!_does_anim_scene_exist(uParam0->f_71))
	{
		uParam0->f_71 = _create_anim_scene("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_71);
	}
	if (!_does_anim_scene_exist(uParam0->f_72))
	{
		uParam0->f_72 = _create_anim_scene("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		load_anim_scene(uParam0->f_72);
	}
}

bool func_104(char* sParam0)
{
	return !is_string_null_or_empty(sParam0);
}

bool func_105(var uParam0, var uParam1)
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
		func_103(uParam0);
		return false;
	}
	return true;
}

int func_106(int iParam0)
{
	return iParam0;
}

int func_107(var uParam0, int iParam1)
{
	Var0 = { func_136(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1911914->f_1584, 0) };
	if (func_137(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_138(iVar12, iVar10);
			if (func_21(iVar13, 0))
			{
				if (uParam0->f_55 >= 175)
				{
				}
				else
				{
					if (Global_1911914->f_1584 == 0 && func_77(iVar13, 302810039))
					{
						if (!(Global_1911914->f_1585 != 0 && func_77(iVar13, Global_1911914->f_1585)))
						{
						}
						else if (func_77(iVar13, 266762988))
						{
						}
						else
						{
							func_180(uParam0, iVar13, iParam1);
							func_181(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_182(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_108(int iParam0)
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

void func_109(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = _databinding_add_data_container(uParam2->f_39, cParam1);
	_databinding_add_data_bool(*uParam0, "visible", false);
	_databinding_add_data_string(*uParam0, "texture", "");
	_databinding_add_data_string(*uParam0, "textureDictionary", "inventory_items");
	_databinding_add_data_int(*uParam0, "count", 3);
	_databinding_add_data_int(*uParam0, "enabled", 1);
	_databinding_add_data_bool(*uParam0, "inUse", false);
}

void func_110(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = (*Global_1911914)[iParam2]->f_6;
	if (bParam4 || func_121(iVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (_databinding_is_data_id_valid((*Global_1911914)[iParam2]->f_1))
			{
				if (bParam5)
				{
					func_114(uParam0, -1, bParam3, (*Global_1911914)[iParam2]->f_1, 1, 0, 1);
				}
				_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_40, uParam0->f_56, -2047994727, (*Global_1911914)[iParam2]->f_1);
			}
			else
			{
				func_183(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (_databinding_is_data_id_valid((*Global_1911914)[iParam2]->f_1))
			{
				_databinding_remove_data_entry((*Global_1911914)[iParam2]->f_1);
			}
			func_183(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = (*Global_1911914)[iParam2]->f_6;
			uParam0->f_76 = (*Global_1911914)[iParam2]->f_5;
			uParam0->f_74 = (*Global_1911914)[iParam2]->f_1;
		}
		uParam0->f_56++;
	}
}

void func_111(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_112(int iParam0)
{
	if (!func_36(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_113(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_114(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_databinding_is_data_id_valid(iParam3))
	{
		iParam1 = _databinding_read_data_int_from_parent(iParam3, "iIndex");
	}
	iVar0 = (*Global_1911914)[iParam1]->f_1;
	if (!_databinding_is_data_id_valid(iVar0))
	{
		return;
	}
	iVar1 = _databinding_read_data_int_from_parent(iVar0, "eOutputItem");
	iVar2 = _databinding_read_data_int_from_parent(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_131(iVar3, iVar4, bParam2, 0);
	iVar6 = func_129(iVar3, 0, 0);
	iVar7 = func_130(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_132(iVar7, iVar5), 8);
	_databinding_write_data_string_from_parent(iVar0, "count", &cVar8);
	_databinding_write_data_bool_from_parent(iVar0, "visible", 0);
	if (func_36(4096))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && func_53(iVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36(8192))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && iVar3 == 1831763320), 1, 0);
	}
	else
	{
		iVar9 = func_184((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_185(iVar3))
	{
		if (func_186(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
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
	if (!uParam0->f_31)
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || _databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == 278772510)
	{
		iVar9 = 0;
	}
	if (!Global_1911914->f_1579 && func_124(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	_databinding_write_data_bool_from_parent(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iVar3, -1636519629) == -701492487)
		{
			(*Global_1911914)[iParam1]->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			(*Global_1911914)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && (*Global_1911914)[iParam1]->f_2) && bParam4)
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0->f_40, iVar0);
		}
		(*Global_1911914)[iParam1]->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_187(iVar3, &Var15, 805880880, 0, 0, 0))
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
	if (!uParam0->f_31)
	{
		if (_databinding_read_data_bool_from_parent(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	_databinding_write_data_int_from_parent(iVar0, "enabled", iVar9);
}

int func_115(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

void func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_118(iParam0, 1);
	func_119(iParam0, 1);
	func_120(iParam0, 128);
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_118(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_102(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_119(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_121(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_77(iParam0, -537818634) || func_77(iParam0, -458578204)) && !func_77(iParam0, -1242251796))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 307971639)
			{
				if (func_77(iParam0, -1588156645))
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
				if (func_77(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if (func_51(iParam0) || func_53(iParam0, -1636519629) == -701492487)
			{
				return true;
			}
			break;
		case 4:
			if (func_77(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_77(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

char* func_122(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_123(var uParam0)
{
	return "craft_trans_stow";
}

bool func_124(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_23() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_188(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_125(int iParam0)
{
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_126(var uParam0)
{
	if (func_77(uParam0->f_77, 1147021565) && !func_77(uParam0->f_77, 1919582297))
	{
		if (func_121(uParam0->f_77, 5))
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 2);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 1);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
		}
		else
		{
			_0x7e2c766adb2c5f1a(uParam0->f_77, 1);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
			_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		_0xd962f8579d702db5();
		_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
		_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
	}
}

int func_127(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_128(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if ((!Global_1911914->f_1579 && func_124(iParam0, iParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_189(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

int func_129(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_190(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_191(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_147(bParam2), iParam0, 0);
	return iVar2;
}

int func_130(int iParam0, bool bParam1)
{
	Var0 = { func_148(iParam0, 0, 0) };
	return func_192(iParam0, &Var0, 0, bParam1);
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_193(iParam0, iParam1, &Var0, &iVar31, bParam3, 0))
	{
		return 0;
	}
	bVar33 = func_80(0);
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @256; //curOff = 64
		}
		else
		{
			iVar35 = func_129(&(Var0[iVar32]), 0, 0);
			if (bVar33)
			{
				if (func_194(&(Var0[iVar32])) || func_195(&(Var0[iVar32])))
				{
					iVar35 = (iVar35 + func_196(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_197(7, &(Var0[iVar32]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_198(7, &(Var0[iVar32])) + func_199(&(Var0[iVar32]))));
				}
			}
			if (iVar35 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_133(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	bVar34 = !bParam4;
	_databinding_clear_binding_array(uParam2->f_51);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		_databinding_remove_binding_array_item_by_data_context_id(uParam2->f_51, &(uParam2->f_46[iVar33]));
		_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "visible", 0);
		_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_193(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		bVar35 = func_84();
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33];
				if (func_21(iVar31, 0))
				{
					_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "visible", 1);
					if (func_187(iVar31, &Var36, 805880880, 0, 0, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam2->f_41[iVar33]), "texture", Var36);
						_databinding_write_data_string_from_parent(&(uParam2->f_41[iVar33]), "textureDictionary", Var36.f_1);
					}
					iVar39 = func_129(iVar31, 0, 0);
					if (func_194(iVar31) || func_195(iVar31))
					{
						if (bVar35)
						{
							iVar41 = 0;
							iVar39 = (iVar39 + func_197(7, iVar31, &iVar41));
						}
						iVar39 = (iVar39 + func_196(iVar31, 0));
					}
					bVar40 = iVar39 >= Var0[iVar33]->f_1;
					_databinding_write_data_int_from_parent(&(uParam2->f_41[iVar33]), "count", iVar39);
					_databinding_write_data_int_from_parent(&(uParam2->f_41[iVar33]), "enabled", func_184(bVar40, 1, 0));
					_databinding_write_data_bool_from_parent(&(uParam2->f_41[iVar33]), "inUse", 1);
					if (!bVar40)
					{
						bVar34 = false;
					}
					sVar42 = _create_var_string(10, "CRFT_ING_LIST", _create_var_string(0, &(Var0[iVar33])), Var0[iVar33]->f_1);
					StringCopy(&cVar43, "Text", 16);
					_databinding_write_data_string_from_parent(&(uParam2->f_46[iVar33]), &cVar43, sVar42);
					StringCopy(&cVar43, "Enabled", 16);
					_databinding_write_data_int_from_parent(&(uParam2->f_46[iVar33]), &cVar43, func_184(bVar40, 1, 0));
					_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam2->f_51, -1, 309940639, &(uParam2->f_46[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
		{
			bVar34 = false;
			if (func_51(iParam0))
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
			}
		}
		else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
		{
			bVar34 = false;
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			iVar45 = func_129(iParam0, 0, 0);
			iVar46 = func_130(iParam0, 0);
			if ((iVar46 - iVar45) > 0 || iVar46 == -1)
			{
				iVar47 = func_53(iParam0, -1636519629);
				if (!uParam2->f_83 && iVar47 == -701492487)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_PERC"));
				}
				else if (iVar47 == -701492487 && uParam2->f_84 > 0)
				{
					bVar34 = false;
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_PERC_FULL"));
				}
				else if (does_entity_exist(iParam3))
				{
					_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(34, "CRFT_BREAK", 1, _create_var_string(0, _0x0139637a3bff8b6d(iParam3, &uVar48))));
				}
				else
				{
					iVar49 = func_131(iParam0, uParam2->f_78, func_84(), 0);
					if (uParam2->f_78 == -214678071)
					{
						if (_databinding_read_data_int_from_parent(uParam2->f_73, "iNumCostVariants") <= 1 && _databinding_read_data_bool_from_parent(uParam2->f_39, "ShowRpgDescription"))
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar49));
						}
					}
					else if (uParam2->f_78 == 278772510)
					{
						_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "COOK_ING_HAVE", iVar49));
					}
					else if (iVar47 == -701492487)
					{
						if (iVar49 == 1)
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "BREW_ING_HAVE1", iVar49));
						}
						else
						{
							_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "BREW_ING_HAVE", iVar49));
						}
					}
					else
					{
						_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_HAVE", iVar49));
					}
				}
			}
			else
			{
				_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(130, "CRFT_ING_MAX", iVar45, iVar46, _create_var_string(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
	{
		bVar34 = false;
		if (func_51(iParam0))
		{
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_FIRE"));
		}
	}
	else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
	{
		bVar34 = false;
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		_databinding_write_data_string_from_parent(uParam2->f_39, "tipText", _create_var_string(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

int func_134(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_135(var uParam0, char* sParam1)
{
	if (func_70(*uParam0))
	{
		iVar0 = func_106(*uParam0);
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1945938)[iVar0]->f_3, sParam1);
		}
	}
}

struct<10> func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_137(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, int iParam1)
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

int func_139(int iParam0)
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

void func_140(var uParam0)
{
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgHorse", 0);
	_databinding_write_data_bool_from_parent(uParam0->f_39, "ShowRpgPlayer", 0);
}

void func_141(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	_databinding_write_data_hash_string_from_parent(uParam0->f_39, "filter", func_108(uParam0->f_52));
}

int func_142(int iParam0)
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

Vector3 func_143(int iParam0)
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

void func_144(int iParam0)
{
	if (!func_200(iParam0))
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

bool func_145(int iParam0)
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

bool func_146(int iParam0)
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

int func_147(bool bParam0)
{
	if (func_23() == -1)
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

struct<5> func_148(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_201(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_127(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_202(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_203(bParam1) };
			if (bParam2 && func_204(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_205(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_205(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_206(iParam0, &Var5, 1728382685))
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
			Var0 = { func_207(bParam1) };
			switch (func_208(iParam0))
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
			if (func_209(iParam0, -1823706425))
			{
				Var0 = { func_202(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_209(iParam0, -1483207246))
			{
				Var0 = { func_202(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_210(Var0, &Var27, bParam1, 0))
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

bool func_149(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_211(&iParam0);
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (func_212(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_203(0) };
			Var4.f_9 = -1591664384;
			if (!func_205(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_206(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_204(iParam0, 1))
			{
				if (!func_205(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_206(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_213(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_192(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_214(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_147(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

struct<16> func_150(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_202(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	return Var0;
}

int func_151(int iParam0, var uParam1, bool bParam2)
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
					func_215(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_215(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_215(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_152(int iParam0, struct<7> Param1)
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
			if (Global_1224227->f_1[iVar0]->f_1 == 1 || Global_1224227->f_1[iVar0]->f_1 == 5)
			{
				Global_1224227->f_1[iVar0]->f_2 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<2> func_153(int iParam0)
{
	return func_167(-1108808256, iParam0);
}

void func_154(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			return Global_1224227->f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0)
{
	iParam0 = func_216(iParam0);
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

float func_157(int iParam0, int iParam1, bool bParam2)
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
	return func_217(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_158(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_80(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_189(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4, 1))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_193(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = &Var0[iVar36];
			if (func_21(iVar33, 0))
			{
				if (iVar33 == 2084597891)
				{
					func_218(Var0[iVar36]->f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_194(iVar33) || func_195(iVar33))
					{
						if (!func_219(iVar33, Var0[iVar36]->f_1, 0))
						{
							iVar37 = func_220(7, iVar33, Var0[iVar36]->f_1);
						}
						func_221(iVar33, iVar37, 562618531, 0, 0);
						Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - iVar37);
						if (Var0[iVar36]->f_1 > 0)
						{
							if (!func_219(iVar33, Var0[iVar36]->f_1, 0))
							{
								func_222(iVar33, Var0[iVar36]->f_1);
							}
							if (func_219(iVar33, Var0[iVar36]->f_1, 0))
							{
								func_223(iVar33, Var0[iVar36]->f_1, bParam2, -142743235, 0);
							}
						}
					}
					else
					{
						if (func_199(iVar33) > 0)
						{
							func_224(iVar33);
							Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - 1);
						}
						if (Var0[iVar36]->f_1 > 0)
						{
							if (func_198(7, iVar33) > 0)
							{
								func_225(7, iVar33, Var0[iVar36]->f_1);
								Var0[iVar36]->f_1 = (Var0[iVar36]->f_1 - func_225(7, iVar33, Var0[iVar36]->f_1));
							}
						}
						if (Var0[iVar36]->f_1 > 0)
						{
							func_223(iVar33, Var0[iVar36]->f_1, bParam2, 562618531, 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_194(iVar33) || func_195(iVar33))
					{
						if (!func_219(iVar33, Var0[iVar36]->f_1, 0))
						{
							func_222(iVar33, Var0[iVar36]->f_1);
						}
					}
					func_223(iVar33, Var0[iVar36]->f_1, bParam2, 562618531, 0);
				}
				else
				{
					func_226(iVar33, iParam4, Var0[iVar36]->f_1, 562618531);
				}
				iVar38 = func_227(&iVar33);
				if (func_228(iVar38))
				{
					iVar39 = func_229(iVar38);
					func_160(func_167(-333926856, iVar39), Var0[iVar36]->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_159(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_160(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_161(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0))
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

void func_162(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_230(iParam0))
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

bool func_163(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_231(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_232() };
	Var10.f_4 = uVar9;
	if (func_233(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_234(iParam0, 1))
			{
			}
		}
		if (func_235(iParam0))
		{
			func_163(func_236(iParam0), 1);
		}
		func_237();
		return true;
	}
	return false;
}

void func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_21(iParam0, 0))
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
	if (!func_238())
	{
		func_239(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_240(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_240(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_241(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_127(iParam0);
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
	else if (!func_187(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_243(_create_var_string(10, &cVar2, _create_var_string(0, func_242(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_77(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_242(iParam0));
	}
	func_244(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_165(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_245(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_246(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_247(iParam0, bParam2);
	iVar2 = 0;
	if (func_129(iParam0, 0, 0) == 0)
	{
		if (func_248(iParam0))
		{
			iVar5 = func_249(iParam0);
			iVar6 = func_250(iVar5);
			iVar7 = func_251(iVar6) + 1;
			func_252(iVar5);
			if (func_253(38))
			{
				func_254(483, 0);
			}
			else
			{
				func_254(482, 0);
			}
			if (iVar7 == func_255(iVar6))
			{
				func_165(func_256(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_257() && func_258(4))
				{
					if (func_257() && (func_259(38) || func_253(38)))
					{
						func_261(38, func_256(iVar6), 0, 0, func_260(), 0, -1, 0);
						func_262(2);
					}
					else
					{
						func_261(38, func_256(iVar6), 0, 0, func_260(), 0, -1, 0);
						func_262(1);
					}
				}
			}
			else if (func_257() && func_258(4))
			{
				if (func_257() && (func_259(38) || func_253(38)))
				{
					func_261(38, 0, 0, 0, func_260(), 0, -1, 0);
					func_262(2);
				}
				else
				{
					func_261(38, 0, 0, 0, func_260(), 0, -1, 0);
					func_262(1);
				}
			}
			if (func_257() && func_258(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_257() && (func_259(38) || func_253(38)))
					{
						func_263(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_263(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_127(iParam0) == -1037537535)
	{
		if ((!func_77(iParam0, 866047851) && !func_77(iParam0, -1979000645)) && !func_77(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_241(iParam0, 8388608) && !func_264(28))
	{
		func_265(28);
	}
	if (!bVar3)
	{
		if (func_77(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_208(iParam0) == -1447088266)
			{
				iVar1 = func_161(func_78(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_23() == -1)
					{
						func_162(iVar1);
					}
					if (func_80(0) && func_266(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_267(iParam0, iVar0, iParam5);
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
					if (func_23() == -1)
					{
						func_162(iParam0);
					}
					if (func_80(0) && func_266(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_267(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_127(iParam0) == -427144552)
		{
			if (!func_268(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_127(iParam0) == 307971639 && func_269(iParam0))
		{
			if (!func_270(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_77(iParam0, 866047851))
		{
			func_271(iParam0);
		}
		else if (func_77(iParam0, 2000026003))
		{
			func_272(iParam0);
		}
		else if (func_77(iParam0, -103750053))
		{
			func_160(func_159(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_160(func_167(-717883113, 2091222383), iVar0);
		}
		else if (func_77(iParam0, -121341956) && !func_77(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_273((*Global_1835011)[4]->f_1, 1))
				{
					func_254(498, 0);
				}
			}
			if (func_77(iParam0, -2017733358) || func_77(iParam0, -1369131378))
			{
				func_274(iParam0);
			}
		}
		else if (func_77(iParam0, -136654233))
		{
			if (func_77(iParam0, -1021472396))
			{
			}
		}
		else if (func_77(iParam0, -1466706512) && func_77(iParam0, 1147021565))
		{
			func_254(484, 0);
		}
		else if (func_77(iParam0, 1147021565) && func_77(iParam0, -524514947))
		{
		}
		else if (func_77(iParam0, 554195525))
		{
		}
		else if (func_77(iParam0, 589988438))
		{
			if (func_275())
			{
				func_276(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_77(iParam0, 787083290) && func_77(iParam0, 949916894))
		{
			func_277(iParam0);
		}
		else if (func_77(iParam0, -1718133314))
		{
			func_278(iParam0);
		}
		else if (func_77(iParam0, -1738650224))
		{
			func_279(iParam0);
		}
		else if (func_77(iParam0, -1112814642) && func_77(iParam0, 949916894))
		{
			func_280(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_77(iParam0, 1841149704))
		{
			func_281();
		}
		else if (func_77(iParam0, 606799272))
		{
			func_282(iParam0, iParam1);
			func_283(iParam0);
		}
		else if (func_77(iParam0, -1112814642) && func_77(iParam0, -1697809989))
		{
			func_284(iParam0, 0, 0, 0);
		}
		else if (func_77(iParam0, -2017733358) || func_77(iParam0, -1369131378))
		{
			func_274(iParam0);
		}
		else if (func_77(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_285(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_77(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_219(215778062, 1, 0))
					{
						func_165(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_219(670273567, 1, 0))
					{
						func_165(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_219(-967317137, 1, 0))
					{
						func_165(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_219(526074061, 1, 0))
					{
						func_165(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_219(-1045488665, 1, 0))
					{
						func_165(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_219(471514780, 1, 0))
					{
						func_165(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_77(iParam0, -839724752) && func_241(iParam0, 4))
		{
			if (!func_253(42))
			{
				func_286(iParam0);
			}
		}
		else if (func_77(iParam0, 1399091007))
		{
			func_287(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_77(iParam0, 1248798204))
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
				func_165(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_265(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_170(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_288(&iVar9, 0))
				{
					func_266(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_23() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_170(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_254(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_289();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_290();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_291();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_292();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_293();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_294(499813453, 854119837, 0);
				func_295(499813453, 0);
				func_296(1);
				break;
			case 2127812557:
				func_294(499813453, -1292544588, 0);
				func_295(499813453, 0);
				func_296(2);
				break;
			case 808991383:
				func_294(499813453, -1003325394, 0);
				func_295(499813453, 0);
				func_296(4);
				break;
			case 1134518629:
				func_294(666607663, -335460405, 0);
				func_295(666607663, 0);
				func_297(1);
				break;
			case 902940106:
				func_294(666607663, 903797617, 0);
				func_295(666607663, 0);
				func_297(2);
				break;
			case -418174898:
				func_294(666607663, 669728650, 0);
				func_295(666607663, 0);
				func_297(4);
				break;
			case -648114971:
				func_294(-220219788, 1214120047, 0);
				func_295(-220219788, 0);
				func_298(1);
				break;
			case 211153747:
				func_294(-220219788, 655769340, 0);
				func_295(-220219788, 0);
				func_298(2);
				break;
			case -32876996:
				func_294(-220219788, 885316185, 0);
				func_295(-220219788, 0);
				func_298(4);
				break;
			case 1191437462:
				func_294(218622660, -1491419385, 0);
				func_295(218622660, 0);
				func_299(1);
				break;
			case 1119149048:
				func_294(218622660, 1809565830, 0);
				func_295(218622660, 0);
				func_299(2);
				break;
			case 506073827:
				func_294(390004462, -628873767, 0);
				func_295(390004462, 0);
				func_300(1);
				break;
			case -1876986168:
				func_294(390004462, -405421956, 0);
				func_295(390004462, 0);
				func_300(2);
				break;
			case 2142623221:
				func_294(390004462, -1108972386, 0);
				func_295(390004462, 0);
				func_300(4);
				break;
			case 1508215381:
				func_294(6410548, 1053716392, 0);
				func_295(6410548, 0);
				func_301(1);
				break;
			case -888935280:
				func_294(6410548, 806507056, 0);
				func_295(6410548, 0);
				func_301(2);
				break;
			case -1252474566:
				func_294(6410548, 1571925350, 0);
				func_295(6410548, 0);
				func_301(4);
				break;
			case -1465702449:
				func_294(6410548, 1330352282, 0);
				func_295(6410548, 0);
				func_301(8);
				break;
			case -21093309:
				func_302(242, func_242(-21093309), 0);
				break;
			case 204375141:
				func_302(240, func_242(204375141), 0);
				break;
			case -417963070:
				func_302(241, func_242(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_303(594, 1934060482, 1, 1);
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
					func_303(594, 1110018439, 1, 1);
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
					func_303(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_303(594, -1228016946, 1, 1);
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
					func_303(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_303(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_254(488, 0);
				break;
			case 1613651027:
				func_254(491, 0);
				break;
			case -885810591:
				func_254(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_165(func_304(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_165(func_305(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_264(1))
				{
					func_254(487, 0);
				}
				break;
			case -898386032:
				func_254(486, 0);
				break;
			case -2035110427:
				if (func_23() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_254(496, 0);
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
		func_306(&iVar10);
		if (!func_307(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_80(0))
		{
			return 1;
		}
		if (func_127(iParam0) == -1037537535)
		{
			func_308(iParam0);
		}
		if (func_77(iParam0, -1979000645))
		{
			func_309(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_80(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_165(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_310(iVar2, 0);
		}
	}
	Var35 = { func_311(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_312(iParam0);
	if (fParam6 > 0f)
	{
		if (func_77(iParam0, -839724752))
		{
			func_313(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_164(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	if (!func_314(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_315(iParam0) && func_316(iParam0))
		{
			iVar0 = 0;
			if (func_317(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_318(iParam1);
	Var1 = { func_201(0) };
	if (!func_233(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<2> func_167(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_168(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_319(iParam0);
	fVar1 = func_320(iParam0);
	if ((Global_1347477->f_117 || !func_264(31)) || !func_321(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_322(iVar0) >= 7)
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
	func_323(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_244(_create_var_string(6, func_324(iParam0), fVar1), "itemtype_textures", func_325(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_169(int iParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam1, 0))
	{
		return false;
	}
	if (func_127(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_208(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_326(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_77(iParam1, 866047851))
	{
		iVar5 = func_327(iVar4, 1);
		if (func_328(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*iParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*iParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_208(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_77(iParam1, -1638171711))
			{
				*iParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*iParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_329(1868067663, &uVar0))
			{
				*iParam2 = 939463734;
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
				iVar10 = func_330(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_330(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_208(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_77(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*iParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_331(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*iParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

int func_170(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_148(iParam1, 1, 0) };
		iParam3 = func_332(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_333(iParam1, iParam2, func_327(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_334(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_327(iParam3, 1)])
			{
				func_335(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_336(32768) && iParam1 != &Global_1946804->f_57[func_327(iParam3, 1)])
			{
				func_337();
				func_335(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_335(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_338(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_335(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_339(0);
			func_340(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_335(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_171()
{
	return func_341(512);
}

void func_172(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_342(471747275))
	{
		Global_40.f_4283.f_307.f_1 = (Global_40.f_4283.f_307.f_1 + iParam0);
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			func_343(471747275);
		}
	}
}

float func_173(var uParam0)
{
	if (!func_95(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_344(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_345() - uParam0->f_1);
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_175(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_345() - fParam1);
	func_346(uParam0, 1);
	func_347(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	if (func_348(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_349(iParam0))
	{
		return 0;
	}
	if (!func_351(func_350(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0)
{
	if (func_352())
	{
		return 1;
	}
	if (!func_351(func_353(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0)
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

float func_179(int iParam0, vector3 vParam1)
{
	if (func_354(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	(*Global_1911914)[uParam0->f_55]->f_5 = iParam2;
	(*Global_1911914)[uParam0->f_55]->f_6 = iParam1;
	(*Global_1911914)[uParam0->f_55]->f_7 = 1;
	(*Global_1911914)[uParam0->f_55]->f_8 = 0;
	Global_1911914->f_1576++;
	uParam0->f_55++;
	if (iParam2 == 600942249 || iParam2 == -257768755)
	{
		func_355(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_356(uParam0, iParam1);
	}
}

void func_181(var uParam0, int iParam1, int iParam2)
{
	iVar2 = func_53(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_137(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_55 >= 175)
			{
			}
			else
			{
				iVar14 = func_138(iVar13, iVar0);
				if (func_21(iVar14, 0) && iVar14 != iParam1)
				{
					func_180(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_139(iVar0);
	}
}

void func_182(int iParam0)
{
	func_139(*iParam0);
	*iParam0 = -1;
}

void func_183(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = (*Global_1911914)[iParam1]->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (_databinding_is_data_id_valid((*Global_1911914)[iParam1]->f_1))
	{
		_databinding_remove_data_entry((*Global_1911914)[iParam1]->f_1);
	}
	iVar5 = _databinding_add_data_container(uParam0->f_40, &cVar1);
	(*Global_1911914)[iParam1]->f_1 = iVar5;
	iVar6 = (*Global_1911914)[iParam1]->f_5;
	iVar7 = func_131(iVar0, iVar6, bParam3, 0);
	iVar8 = func_129(iVar0, 0, 0);
	iVar9 = func_130(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	if (func_187(iVar0, &Var10, 805880880, 0, 0, 0))
	{
		_databinding_add_data_string(iVar5, "texture", Var10);
		_databinding_add_data_string(iVar5, "textureDictionary", Var10.f_1);
	}
	_databinding_add_data_hash(iVar5, "name", iVar0);
	_databinding_add_data_int(iVar5, "eOutputItem", iVar0);
	_databinding_add_data_int(iVar5, "eCost", iVar6);
	_databinding_add_data_int(iVar5, "iIndex", iParam1);
	if (!Global_1911914->f_1579 && func_124(iVar0, iVar6, 1))
	{
		bVar13 = true;
		(*Global_1911914)[iParam1]->f_7 = 0;
	}
	_databinding_add_data_int(iVar5, "iCurCostVariant", (*Global_1911914)[iParam1]->f_8);
	_databinding_add_data_int(iVar5, "iNumCostVariants", (*Global_1911914)[iParam1]->f_7);
	_databinding_add_data_bool(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar14, func_132(iVar9, iVar7), 8);
	_databinding_add_data_string(iVar5, "count", &cVar14);
	_databinding_add_data_bool(iVar5, "visible", false);
	bVar16 = false;
	if (func_36(4096))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && func_53(iVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36(8192))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && iVar0 == 1831763320), 1, 0);
	}
	else
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && func_185(iVar0))
	{
		if (func_186(iVar0, iVar6, uParam0, bParam3, &iVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			iVar0 = iVar17;
			iVar6 = iVar18;
			_databinding_write_data_hash_string_from_parent(iVar5, "name", iVar17);
			_databinding_write_data_int_from_parent(iVar5, "eOutputItem", iVar17);
			_databinding_write_data_int_from_parent(iVar5, "eCost", iVar18);
			_databinding_write_data_int_from_parent(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == 278772510)
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			(*Global_1911914)[iParam1]->f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (func_121(iVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			(*Global_1911914)[iParam1]->f_2 = 1;
		}
	}
	else
	{
		(*Global_1911914)[iParam1]->f_2 = 0;
	}
	if (bVar16)
	{
	}
	_databinding_add_data_bool(iVar5, "lockVisible", bVar13);
	_databinding_add_data_int(iVar5, "enabled", iVar15);
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
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_40, -1, -2047994727, iVar5);
	}
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_185(int iParam0)
{
	if (func_36(4096))
	{
		if (func_53(iParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (func_36(8192))
	{
		if (iParam0 != 1831763320)
		{
			return false;
		}
	}
	return true;
}

bool func_186(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!Global_1911914->f_1579 && func_124(iParam0, iParam1, 1))
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
		iVar12 = func_53(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		if (uParam2->f_32)
		{
			Var2 = { func_136(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
			if (func_137(Var2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					iVar14 = func_138(iVar13, iVar0);
					if (iParam0 == iVar14)
					{
					}
					else if (!Global_1911914->f_1579 && func_124(iVar14, 278772510, 1))
					{
					}
					else if (func_88(iVar14, 278772510, 0, bParam3, 0, 0) && !func_89(iVar14, 1, 0))
					{
						func_139(iVar0);
						*iParam4 = iVar14;
						*iParam5 = 278772510;
						*iParam6 = iVar13;
						return true;
					}
					iVar13++;
				}
				func_139(iVar0);
			}
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_136(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_137(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_138(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1911914->f_1579 && func_124(iVar16, -214678071, 1))
					{
					}
					else if (func_88(iVar16, -214678071, 0, bParam3, 0, 0) && !func_89(iVar16, 1, 0))
					{
						func_139(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_139(iVar0);
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
					if (Var18 != -489628648 && (Global_1911914->f_1579 || !func_124(iParam0, Var18, 1)))
					{
						if (func_88(iParam0, Var18, 0, bParam3, 0, 0) && !func_89(iParam0, 1, 0))
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

bool func_187(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_188(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_21(iParam0, 0))
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

bool func_189(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_193(iParam0, iParam2, &Var0, &iVar31, bParam7, 0))
	{
		return false;
	}
	if (func_23() == 0 && iParam6 != 0)
	{
		return false;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = func_80(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_357(iVar32))
			{
				Jump @390; //curOff = 134
			}
			else if (&Var0[iVar34] == 773203532 && func_358(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_359(&(Var0[iVar34]), iParam6);
				}
				else
				{
					iVar33 = func_129(&(Var0[iVar34]), 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_194(&(Var0[iVar34])) || func_195(&(Var0[iVar34])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_197(7, &(Var0[iVar34]), &iVar36);
						}
						iVar38 = func_196(&(Var0[iVar34]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && does_entity_exist(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; //curOff = 330
							if (bParam5 && ((iVar33 + func_198(7, &(Var0[iVar34]))) + func_199(&(Var0[iVar34]))) >= iVar32)
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

int func_190(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_77(iParam0, 1399091007))
	{
		func_360(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_361(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_362(&Var0, func_203(0));
	}
	if (!func_363(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_364(iVar14);
	return uVar15;
}

int func_192(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_147(bParam3), iParam0);
}

bool func_193(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_21(iParam0, 0))
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
		func_365(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_194(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -887064662))
	{
		return true;
	}
	return func_195(iParam0);
}

bool func_195(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_196(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_194(iParam0) && !func_195(iParam0))
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
	iVar13 = func_53(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_137(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_138(iVar15, iVar1);
			if (func_21(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_366(iVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = func_359(iVar14, iParam1);
					}
					else
					{
						iVar17 = func_129(iVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_368(iVar16, func_367(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_139(iVar1);
	}
	return iVar0;
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_369(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
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
		if (!func_370(iVar28))
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

int func_198(int iParam0, int iParam1)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_369(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
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

int func_199(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_35);
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

bool func_200(int iParam0)
{
	return func_102(iParam0, 2);
}

struct<4> func_201(bool bParam0)
{
	return func_202(1328661203, func_371(), -1591664384, bParam0);
}

struct<4> func_202(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_147(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_203(bool bParam0)
{
	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_202(923904168, func_201(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_202(923904168, func_201(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_202(923904168, func_201(bParam0), -740156546, 0);
}

bool func_204(int iParam0, bool bParam1)
{
	if (func_208(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_264(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_205(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_214(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_206(int iParam0, var uParam1, int iParam2)
{
	if (func_372(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_207(bool bParam0)
{
	iVar0 = func_147(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_202(271701509, func_201(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_202(271701509, func_201(bParam0), 12999093, 0);
}

int func_208(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_209(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_208(iParam0);
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

bool func_210(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_147(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_211(int iParam0)
{
	if (!func_21(*iParam0, 0))
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

bool func_212(int iParam0)
{
	return func_127(iParam0) == -427144552;
}

bool func_213(int iParam0, var uParam1, bool bParam2)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_148(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_373((386 + iVar29), 1);
		if (func_205(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_206(iParam0, &Var6, iVar5);
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

int func_214(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_202(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_147(bParam6), &Var0, 0);
	return uVar4;
}

void func_215(int iParam0, int iParam1)
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
	func_374(iParam0, iParam1);
}

int func_216(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

float func_217(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_218(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_375(iParam0);
	if (bParam3)
	{
		func_376(iParam0, sParam1, iParam2);
	}
}

bool func_219(int iParam0, int iParam1, bool bParam2)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(iParam0);
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
		if (!func_377(iParam0, 1))
		{
			return false;
		}
	}
	return func_129(iParam0, 0, bParam2) >= iParam1;
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_369(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
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
			if (!func_370(iVar28))
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
						func_307(iParam1, 1, 752097756);
						if (does_entity_exist(iVar28))
						{
							iVar31 = func_378(iVar28);
							if (!func_21(iVar31, 0))
							{
								iVar31 = func_379(iVar28);
							}
							if (func_21(iVar31, 0))
							{
								func_380(iVar31, 1, 1, -142743235, 0);
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

bool func_221(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_148(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_381(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_202(iParam0, Var0, Var0.f_4, bParam4) };
	return func_382(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_222(int iParam0, int iParam1)
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
		iVar12 = func_53(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_136(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_137(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_138(iVar14, iVar0);
					if (func_21(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_129(iVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_383(iVar13, iParam0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_139(iVar0);
		}
	}
}

bool func_223(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_190(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_164(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_219(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_311(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_129(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_129(iParam0, 0, 0) - iParam1) < 0)
		{
			func_223(iParam0, func_129(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_127(iParam0) == -427144552)
	{
		if (!func_384(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_221(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_164(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_385(iParam0, iParam1);
	return true;
}

void func_224(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (is_entity_a_ped(iVar0))
			{
				iVar13 = func_386(iVar1, &uVar2);
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
			else
			{
				func_387(iVar1, &uVar17, &uVar18, &iVar16, &uVar19);
				if (func_388(&iVar15, iVar1, iVar16, uVar17) && iVar15 == iParam0)
				{
					_0x0d0db2b6af19a987(&iVar0);
				}
			}
		}
	}
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_369(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
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
		else if (func_389(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (!func_382(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	return !iParam0 <= 0;
}

int func_229(int iParam0)
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
			return -1040706491;
		case 20:
			return -1910627346;
		case 23:
			return -1812487593;
		case 26:
			return 1983971282;
		case 27:
			return 1561519041;
		case 28:
			return -980496853;
		case 29:
			return -1738887126;
		case 31:
			return 424771379;
		case 33:
			return 787316814;
		case 34:
			return 984616481;
		case 37:
			return 1078285403;
		case 38:
			return -262897007;
		case 39:
			return -1727702531;
		case 40:
			return 1783324404;
		case 41:
			return 1288848815;
		case 42:
			return 918090738;
		case 43:
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
		case 21:
			return -819513569;
		case 22:
			return 1906968775;
		case 24:
			return -135434663;
		case 25:
			return 920123680;
		case 30:
			return 150470908;
		case 32:
			return -1665125257;
		case 35:
			return 1587928307;
		case 36:
			return -1738925422;
	}
	return 0;
}

bool func_230(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_231(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_208(iParam1);
		iVar5 = func_390(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_148(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_202(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_147(0);
			Var37 = { func_148(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_202(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_208(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_391(Var42, Var6.f_9, &Var20, 0))
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

struct<4> func_232()
{
	Var0 = { func_201(0) };
	return func_202(856287005, Var0, -218846335, 0);
}

bool func_233(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_149(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_147(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_234(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_231(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_232() };
	Var14 = { func_202(iParam0, Var10, iVar9, 0) };
	if (func_392(Var14, iParam1))
	{
		if (func_393(iParam0))
		{
			if (func_394(325139909, &iVar18))
			{
				if (func_234(iVar18, 0))
				{
				}
			}
		}
		else if (func_235(iParam0))
		{
			if (func_394(325139909, &iVar19))
			{
				if (func_234(iVar19, 0))
				{
				}
			}
			if (func_394(986998820, &iVar20))
			{
				if (func_234(iVar20, 0))
				{
				}
			}
			iVar21 = func_236(iParam0);
			if (func_21(iVar21, 0))
			{
				if (func_234(iVar21, 1))
				{
				}
			}
		}
		func_237();
		return true;
	}
	return false;
}

bool func_235(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_236(int iParam0)
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

int func_237()
{
	Var0 = { func_148(856287005, 0, 0) };
	Var5 = { func_202(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_208(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_395(Var5, -415648720, 0);
	}
	if (!func_21(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_390(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_395(Var5, iVar11, 0);
			if (!func_21(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_235(iVar14) || func_393(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_235(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_235(iVar14) && func_396(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_397(iVar11, &Var16, 1))
									{
										if (!func_392(Var16, 1))
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

bool func_238()
{
	return !&Global_1911774;
}

void func_239(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_240(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_241(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

int func_242(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_243(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_244(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_398(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_245(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_212(iParam0) && func_399(iParam0))
		{
			func_400(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_246(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_401(iParam0, iParam1);
	Var0 = { func_148(iParam0, 0, 1) };
	iVar5 = func_192(iParam0, &Var0, 0, 0);
	iVar6 = func_402(iParam0, 0);
	if ((iVar5 > 1 && !func_403()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_77(iParam0, -2051813666))
		{
			func_254(583, 1);
		}
		else
		{
			func_254(582, 0);
		}
	}
	if (func_149(iParam0, &Var0, *iParam1, 0, 0))
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

void func_247(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_53(iParam0, -949239683))
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

bool func_248(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_249(iParam0) != 0;
}

int func_249(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_404())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_405(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_250(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_251(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_404())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_250(iVar0))
		{
			if (func_219(func_405(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_252(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_168(48);
	func_406(0, -1);
}

bool func_253(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_273((*Global_1347702)[iParam0]->f_15, 1);
}

void func_254(int iParam0, bool bParam1)
{
	func_407(iParam0, &iVar0, &iVar1);
	if (!func_408(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_409(iVar0, iVar1);
}

int func_255(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_256(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_257()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_258(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_273((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_259(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_14(iParam0))
	{
		return false;
	}
	return func_410((*Global_1347702)[iParam0]->f_15);
}

int func_260()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_219(func_411(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_257() && (func_259(38) || func_253(38)))
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
			if (func_257() && (func_259(39) || func_253(39)))
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
			iVar9 = func_412(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_257() && (func_259(41) || func_253(41)))
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
			if (func_257() && (func_259(49) || func_253(49)))
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
			iVar9 = func_412(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_413(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_414(iParam0, iVar13, iVar14))
	{
	}
	if (func_415(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_416(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_417(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_418(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_419(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_262(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_257() && (func_259(38) || func_253(38)))
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
			if (func_257() && (func_259(39) || func_253(39)))
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
			if (func_257() && (func_259(49) || func_253(49)))
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
		if (func_257() && (func_259(38) || func_253(38)))
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
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_422(_create_var_string(2, sVar0), _create_var_string(2, func_421(func_256(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_257() && (func_259(39) || func_253(39)))
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
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_257() && (func_259(49) || func_253(49)))
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
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_420(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_264(int iParam0)
{
	if (!func_423(iParam0))
	{
		return false;
	}
	return func_424(iParam0);
}

void func_265(int iParam0)
{
	if (!func_423(iParam0))
	{
		return;
	}
	func_425(iParam0);
	func_426(iParam0);
}

bool func_266(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_148(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_373((386 + iVar28), 1);
			if (func_205(iParam0, &Var0, iVar5, 0))
			{
				if (func_206(iParam0, &Var6, iVar5))
				{
					Var29 = { func_202(iParam0, Var0, iVar5, 0) };
					func_382(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_80(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_267(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_427(iParam0, iParam1);
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

bool func_267(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_269(iParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_161(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_23() == -1)
		{
			func_162(iVar0);
			if (iParam1 == 1248274121)
			{
				func_428(iVar0);
			}
		}
		if (!func_149(iParam0, &uVar1, 1, 0, 0))
		{
			func_400(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_429(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_266(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_266(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_266(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_430())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_431(iVar0))
				{
					func_266(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_266(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_432(Global_35, 2, 0, 1);
				if ((((func_230(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_264(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_230(iVar7) && func_264(24))
				{
					if (!func_266(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_266(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_266(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_254(480, 1);
	}
	return true;
}

bool func_269(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_270(int iParam0, int iParam1, int iParam2)
{
	if (!func_269(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_230(iVar4))
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
	if (func_219(611073244, 1, 0) && iParam2 == -897553835)
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
		func_302(func_433(iParam0), func_242(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_273((*Global_1835011)[14]->f_1, 1))
			{
				func_254(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_267(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_307(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_271(int iParam0)
{
	if ((iParam0 == -615217896 && !func_434()) || iParam0 != -615217896)
	{
		if (func_169(Global_35, iParam0, &uVar0))
		{
			func_170(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_293();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_293();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_293();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_291();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_289();
			break;
	}
}

void func_272(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_289();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_290();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_291();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_292();
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
			func_293();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_435();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_436();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

bool func_273(int iParam0, bool bParam1)
{
	switch (func_437(iParam0))
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

void func_274(int iParam0)
{
	bVar0 = func_77(iParam0, -2017733358);
	if (func_438() < 3)
	{
		if (bVar0)
		{
			if (func_440(func_439(iParam0), iParam0))
			{
				func_302(79, func_242(func_439(iParam0)), 1);
			}
			else
			{
				func_302(78, func_242(func_439(iParam0)), 1);
			}
		}
		else
		{
			func_302(80, func_242(func_441(iParam0)), 1);
		}
	}
}

bool func_275()
{
	if (((((func_442(839908568, 400) || func_442(-1134030454, 400)) || func_442(623353496, 400)) || func_442(-344413337, 400)) || func_442(-1664948962, 400)) || func_442(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_443(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_444(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_445(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_277(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_261(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_263(51, 0, 0, 0, 0, -1, 0);
			func_446(8192);
			break;
		case 581047644:
			func_261(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_263(51, 0, 0, 0, 0, -1, 0);
			func_446(524288);
			break;
		case -644199619:
			func_261(39, 0, 0, 0, 0, 0, 1, 0);
			func_263(39, 0, 0, 0, 0, -1, 0);
			func_447(16);
			break;
		case 684296857:
			func_261(41, 0, 0, 0, 0, 0, 1, 0);
			func_263(41, 0, 0, 0, 0, -1, 0);
			func_448(8);
			break;
		case 466137807:
			func_261(49, 0, 0, 0, 0, 0, 1, 0);
			func_263(49, 0, 0, 0, 0, -1, 0);
			func_449(16);
			break;
		case -1087522507:
			func_261(43, 0, 0, -1791518714, func_450(1), 0, -1, 0);
			func_451(1);
			break;
		case -405829000:
			func_261(43, 0, 0, -2087881550, func_450(2), 0, -1, 0);
			func_451(2);
			break;
		case 378660860:
			func_261(43, 0, 0, 1908068621, func_450(4), 0, -1, 0);
			func_451(4);
			break;
		case 1566111097:
			func_261(43, 0, 0, 1611247019, func_450(8), 0, -1, 0);
			func_451(8);
			break;
		case 1276007140:
			func_261(43, 0, 0, 1319635688, func_450(16), 0, -1, 0);
			func_451(16);
			break;
	}
}

void func_278(int iParam0)
{
	if (func_452() == 1)
	{
		if (func_253(39))
		{
			func_254(342, 0);
		}
		else
		{
			func_254(343, 0);
			func_447(1);
		}
	}
	if (func_452() >= 30)
	{
		func_254(344, 0);
	}
	func_261(39, 0, 0, 0, 0, 0, -1, 0);
	func_263(39, 0, 0, func_452(), 30, 1, 0);
}

void func_279(int iParam0)
{
	if (func_453() == 1)
	{
		if (func_253(49))
		{
			func_254(409, 0);
		}
		else
		{
			func_254(410, 0);
			func_449(1);
		}
	}
	if (func_453() >= 10)
	{
		func_254(411, 0);
	}
	func_261(49, 0, 0, 0, 0, 0, -1, 0);
	func_263(49, 0, 0, func_453(), 10, 1, 0);
}

void func_280(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_254(437, 0);
			func_254(440, 0);
			func_454(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_261(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_263(51, 0, 0, sVar0, func_412(-949689219, 20), 1, 0);
			func_446(1);
			func_455(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_454(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_261(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_263(51, 0, 0, sVar0, func_412(-1248968496, 20), 1, 0);
			func_446(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_454(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_261(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_263(51, 0, 0, sVar0, func_412(1706369307, 20), 1, 0);
			func_446(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_454(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_261(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_263(51, 0, 0, sVar0, func_412(1520110311, 20), 1, 0);
			func_446(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_254(438, 0);
			func_454(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_261(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_263(51, 0, 0, sVar0, func_412(-1992824800, 20), 1, 0);
			func_446(32768);
			break;
		default:
			func_254(439, 0);
			break;
	}
}

void func_281()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_282(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_253(43))
		{
			if (iParam0 == 281887510)
			{
				func_254(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_254(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_254(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_254(400, 0);
			}
		}
		else if (func_77(iParam0, 412399755))
		{
			func_456(-1791518714);
			if (func_457() == 0)
			{
				func_406(0, 10);
				iVar1 = func_458(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_253(44))
		{
			if (iParam0 == -222563712)
			{
				func_254(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_254(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_254(401, 0);
			}
		}
		else if (func_77(iParam0, 709057512))
		{
			func_456(-2087881550);
			if (func_457() == 1)
			{
				func_406(0, 10);
				iVar1 = func_458(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_253(45))
		{
			if (iParam0 == 2116770557)
			{
				func_254(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_254(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_254(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_254(398, 0);
			}
		}
		else if (func_77(iParam0, -1478961327))
		{
			func_456(1908068621);
			if (func_457() == 2)
			{
				func_406(0, 10);
				iVar1 = func_458(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_461(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_462(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_168(48);
					}
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_253(46))
		{
			if (iParam0 == 2085530337)
			{
				func_254(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_254(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_254(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_254(406, 0);
			}
		}
		else if (func_77(iParam0, -1238404098))
		{
			func_456(1611247019);
			if (func_457() == 3)
			{
				func_406(0, 10);
				iVar1 = func_458(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_253(47))
		{
			if (iParam0 == -1521783510)
			{
				func_254(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_254(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_254(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_254(403, 0);
			}
		}
		else if (func_77(iParam0, 1160548794))
		{
			func_456(1319635688);
			if (func_457() == 4)
			{
				func_406(0, 10);
				iVar1 = func_458(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_459(iParam0) < func_460(iParam0))
					{
						func_261(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_263(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_283(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_461(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_462(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_168(48);
		}
	}
}

void func_284(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_219(func_463(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_464(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_465(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_276(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_276(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_276(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_276(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_276(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_276(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_276(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_276(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_276(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_276(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_276(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_276(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_276(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_466())
			{
				func_276(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_276(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_276(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_276(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_276(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_276(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_276(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_276(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_276(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_276(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_276(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_276(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_276(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_286(int iParam0)
{
	if (func_253(41))
	{
		func_254(363, 0);
	}
	else
	{
		func_254(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_467(-1865241121);
			func_468(-642026005);
			func_469(-642026005);
			func_406(0, 10);
			break;
		case -2108314374:
			func_467(2117142684);
			func_468(-940584364);
			func_469(-940584364);
			func_406(0, 10);
			break;
		case -1193798153:
			func_467(-1409326024);
			func_468(1972645282);
			func_469(1972645282);
			func_406(0, 10);
			break;
		case -787702678:
			func_467(-641744968);
			func_468(1667205433);
			func_469(1667205433);
			func_406(0, 10);
			break;
		case -804542901:
			func_467(-946988203);
			func_468(1362715885);
			func_469(1362715885);
			func_406(0, 10);
			break;
		case -1696275132:
			func_467(-646136018);
			func_468(1053540370);
			func_469(1053540370);
			func_406(0, 10);
			break;
		case -161595323:
			func_467(-955835837);
			func_468(-1100103852);
			func_469(-1100103852);
			func_406(0, 10);
			break;
		case -1114363619:
			func_467(-179276075);
			func_468(-1409869209);
			func_469(-1409869209);
			func_406(0, 10);
			break;
		case -368407134:
			func_467(-492711560);
			func_468(-1760235357);
			func_469(-1760235357);
			func_406(0, 10);
			break;
		case 1997759228:
			func_467(1764383959);
			func_468(-138366827);
			func_469(-138366827);
			func_406(0, 10);
			break;
		case 1265573293:
			func_467(317501533);
			func_468(-1261163843);
			func_469(-1261163843);
			func_406(0, 10);
			break;
		case -1030441283:
			func_467(817753087);
			func_468(-963523016);
			func_469(-963523016);
			func_406(0, 10);
			break;
		case -1490884871:
			func_467(576606016);
			func_468(560825326);
			func_469(560825326);
			func_406(0, 10);
			break;
		case -395458616:
			func_467(814934957);
			func_468(858269539);
			func_469(858269539);
			break;
	}
}

void func_287(int iParam0, int iParam1)
{
	func_360(iParam0, iParam1, &uVar0);
}

bool func_288(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_432(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_432(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_470("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_471(&Var3, iVar2, iVar0, iVar1))
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
						func_364(iVar0);
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

void func_289()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_290()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_291()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_292()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_293()
{
	func_472();
	func_473();
	func_474();
}

void func_294(int iParam0, int iParam1, bool bParam2)
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

void func_295(int iParam0, bool bParam1)
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
	func_420(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_296(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_297(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_298(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_299(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_300(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_301(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_302(int iParam0, int iParam1, bool bParam2)
{
	func_407(iParam0, &iVar0, &iVar1);
	if (!func_408(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_475(iParam0, 1024))
	{
		return;
	}
	func_409(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_303(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_407(iParam0, &iVar0, &iVar1);
	if (!func_408(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_475(iParam0, 1024))
	{
		return;
	}
	func_409(iVar0, iVar1);
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

int func_304()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_404())
	{
		return func_305();
	}
	iVar4 = (func_404() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_404())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_476(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_405(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_305()
{
	iVar0 = get_random_int_in_range(0, func_404());
	return func_405(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_306(int iParam0)
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

bool func_307(int iParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_148(iParam0, 0, 1) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	return func_233(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_308(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	switch (func_208(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_477(81053684, 0) <= 0)
			{
				func_335(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_335(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_478(iParam0);
			if (func_479(iVar0))
			{
				func_480(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_335(30, iParam0, 0, 0, 0);
			}
			if (func_481() == -2125499975 || func_481() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_335(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_481() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_335(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_482(-525676072, 0))
			{
				if (func_483(-525676072, &iVar1))
				{
					func_335(33, iVar1, 0, 0, 0);
				}
			}
			func_335(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_484(99217379))
		{
			func_170(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_265(24);
		if (func_288(&iVar2, 0))
		{
			func_266(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_309(int iParam0)
{
	if (func_77(iParam0, 943695443))
	{
		func_485(0, iParam0);
	}
	else if (func_77(iParam0, -2096528786))
	{
		func_485(1, iParam0);
	}
	else if (func_77(iParam0, -1094167013))
	{
		func_485(2, iParam0);
	}
	else if (func_77(iParam0, 1936654645))
	{
		func_485(3, iParam0);
	}
	else if (func_77(iParam0, 1306489306))
	{
		func_485(4, iParam0);
	}
	else if (func_77(iParam0, 435762317))
	{
		func_485(5, iParam0);
	}
	else if (func_77(iParam0, 1259363210))
	{
		func_485(6, iParam0);
	}
	else if (func_77(iParam0, 881398259))
	{
		func_485(7, iParam0);
	}
	else if (func_77(iParam0, -541549214))
	{
		func_485(8, iParam0);
	}
	else if (func_77(iParam0, 130796156))
	{
		func_485(-1, iParam0);
	}
}

int func_310(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_486(&Var4, 1356624740);
	return func_487(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_311(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	if (func_77(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_77(iParam0, -537818634))
			{
				return func_488(189951448);
			}
			else
			{
				return func_488(1176172851);
			}
		}
	}
	else if (func_77(iParam0, -537818634))
	{
		return func_488(-963660207);
	}
	if (func_77(iParam0, 2084895747))
	{
		return func_488(1694039471);
	}
	return Var2;
}

void func_312(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_23() == -1)
			{
				if (func_273((*Global_1835011)[4]->f_1, 1))
				{
					func_254(109, 1);
				}
			}
			break;
	}
}

void func_313(int iParam0, char* sParam1)
{
	sVar0 = func_490(func_489(0));
	func_244(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_491(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_314(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_318(iParam1);
	if (!func_492(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_192(iParam0, &Var0, 1, 0);
	iVar6 = func_402(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (func_77(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_316(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

bool func_317(int iParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { func_136(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar12, &iVar13))
			{
				if (func_193(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46])
						{
							*iParam2 = (*iParam2 + Var14[iVar46]->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		_0xcbb7b6edfa933ade(iVar11);
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
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_319(int iParam0)
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

float func_320(int iParam0)
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
			return func_493(iParam0);
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
			return func_493(iParam0);
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
			return func_493(iParam0);
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

bool func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_264(18);
		case 2:
			return func_264(20);
		case 1:
			return func_264(19);
		default:
			break;
	}
	return true;
}

int func_322(int iParam0)
{
	return func_494(&(Global_40.f_11095.f_11[iParam0]));
}

void func_323(int iParam0, float fParam1, bool bParam2)
{
	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_264(31))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_322(iParam0);
	if (func_495(iParam0) && func_496(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_497(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_498(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_254(func_499(iParam0), 0);
					}
					func_500(iParam0, iVar2, iVar3);
					func_113(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_324(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_325(int iParam0)
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

int func_326(int iParam0)
{
	Var0 = { func_148(iParam0, 1, 0) };
	return func_332(Var0.f_4);
}

int func_327(int iParam0, int iParam1)
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

int func_328(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_77(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_329(int iParam0, var uParam1)
{
	iVar1 = func_327(func_501(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_208(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_330(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_327(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_336(524288))
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

bool func_331(int iParam0)
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

int func_332(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_502(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_333(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_503();
	if (iParam2 == 39)
	{
		Var0 = { func_148(iParam0, 1, 0) };
		iParam2 = func_327(func_332(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_77(iParam0, 866047851) && func_328(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_336(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_504(func_502(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_505(iParam2);
	func_506(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_507(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_507(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_508(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_509(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_510(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_510(&(Global_1946804->f_1378), 1, 0);
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
				func_511(func_502(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_334(bool bParam0, bool bParam1, bool bParam2)
{
	func_512(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_513(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_514(Var0);
}

bool func_336(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_337()
{
	func_515(&(Global_1946804->f_2776));
	func_516(32768);
	func_511(1108822547, 8, 6);
}

int func_338(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_327(iParam0, 1);
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

void func_339(int iParam0)
{
	if (func_517(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_518(Var0);
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_518(Var0);
}

bool func_341(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_342(int iParam0)
{
	if (!func_519(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_4283.f_307, func_520(iParam0, 1));
}

void func_343(int iParam0)
{
	if (!func_519(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_4283.f_307), func_520(iParam0, 1));
}

bool func_344(var uParam0)
{
	return func_174(*uParam0, 2);
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

void func_346(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_348(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return func_521(32, iParam0);
}

bool func_349(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return true;
	}
	return false;
}

int func_350(int iParam0)
{
	if (!func_349(iParam0))
	{
		return 0;
	}
	return Global_1132155->f_12[iParam0]->f_2;
}

int func_351(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	return func_522(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_352()
{
	return Global_1955569->f_866;
}

int func_353(int iParam0)
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

bool func_354(int iParam0)
{
	if (func_523(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

void func_355(var uParam0, int iParam1, int iParam2)
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
				if ((Var1.f_2 == 1644203656 && Var1 != -489628648) && (Global_1911914->f_1579 || !func_124(iParam1, Var1, 1)))
				{
					((*Global_1911914)[(uParam0->f_55 - 1)])->f_7++;
				}
			}
			else
			{
				((*Global_1911914)[(uParam0->f_55 - 1)])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_356(var uParam0, int iParam1)
{
	iVar2 = func_53(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_137(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_138(iVar13, iVar0);
			if (func_21(iVar14, 0))
			{
				if (Global_1911914->f_1579 || !func_124(iVar14, 278772510, 1))
				{
					((*Global_1911914)[(uParam0->f_55 - 1)])->f_7++;
				}
			}
			iVar13++;
		}
		func_139(iVar0);
	}
}

bool func_357(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_524(1);
}

bool func_358(int iParam0)
{
	return false;
}

int func_359(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	uVar9 = _0xc97e0d2302382211(func_147(0), &Var5, 0);
	return uVar9;
}

void func_360(int iParam0, int iParam1, var uParam2)
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

struct<14> func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_362(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_363(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_147(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_364(int iParam0)
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

void func_365(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_366(int iParam0)
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

int func_367(int iParam0)
{
	if (func_77(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_77(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_77(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_368(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_21(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_369(int iParam0)
{
	iParam0 = func_216(iParam0);
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

bool func_370(int iParam0)
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

struct<4> func_371()
{
	return Var0;
}

bool func_372(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_147(0);
	*uParam1 = { func_202(iParam0, func_203(0), iParam3, 0) };
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

int func_373(int iParam0, int iParam1)
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

void func_374(int iParam0, int iParam1)
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

void func_375(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_524(1) < iParam0)
	{
		iParam0 = func_524(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_488(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_376(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_244(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_377(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_190(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_470("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_471(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_230(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_364(iVar1);
				return true;
			}
			iVar3++;
		}
		func_364(iVar1);
	}
	return false;
}

int func_378(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_387(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_388(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_379(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_525(iVar1);
		}
	}
	return iVar0;
}

int func_380(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam1 = func_526(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_527(0);
		if (does_entity_exist(iVar0))
		{
			func_528(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_529(iParam0, iParam1, bParam2, iParam3);
}

bool func_381(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_530(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_80(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_147(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_382(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_530(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_210(*uParam1, &Var0, bParam6, 0))
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
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_147(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_383(int iParam0, int iParam1)
{
	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_367(iParam0);
	iVar2 = func_366(iParam0);
	if (iVar2 != 0)
	{
		func_223(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_531(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

bool func_384(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_361(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_362(&Var0, func_203(0));
	}
	if (!func_363(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_471(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_382(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_364(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_385(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_77(iParam0, 606799272))
		{
			func_532(iParam0, iParam1);
		}
		if (func_77(iParam0, -1112814642) && func_77(iParam0, -1697809989))
		{
			func_284(iParam0, iParam1, 1, 0);
		}
	}
}

int func_386(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_387(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

void func_387(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
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

bool func_388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

bool func_389(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	return func_382(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_390(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_391(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_147(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_210(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_392(struct<4> Param0, int iParam4)
{
	if (!func_80(0))
	{
		return func_533(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_210(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_147(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_393(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (func_77(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_394(int iParam0, int iParam1)
{
	if (!func_534(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_232() };
	*iParam1 = func_395(Var0, iParam0, 0);
	if (!func_21(*iParam1, 0))
	{
		return false;
	}
	return true;
}

int func_395(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_391(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_396(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_361(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_362(&Var2, func_232());
	if (func_363(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_471(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_21(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_396(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_364(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_364(iVar0);
	}
	return false;
}

void func_398(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_399(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (func_241(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_149(iParam0, &uVar0, 1, 0, 0);
	}
	return func_219(iParam0, 1, 0);
}

void func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_127(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_161(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_146(iVar0))
	{
		if (func_23() == -1)
		{
			func_162(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_129(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_164(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_401(int iParam0, int iParam1)
{
	if (func_77(iParam0, 58855631))
	{
		func_535(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_402(int iParam0, bool bParam1)
{
	if (func_269(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_147(bParam1), iParam0, 0);
}

bool func_403()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_257())
	{
		return false;
	}
	if (!func_273((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_273((*Global_1835011)[2]->f_1, 1) && func_273((*Global_1347702)[120]->f_15, 1)) && !func_273((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_273((*Global_1835011)[37]->f_1, 1) && !func_273((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_273((*Global_1835011)[57]->f_1, 1) && !func_273((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_273((*Global_1835011)[26]->f_1, 1) && !func_273((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_273((*Global_1835011)[62]->f_1, 1) && func_273((*Global_1835011)[63]->f_1, 1)) && !func_273((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_273((*Global_1835011)[75]->f_1, 1) && !func_273((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_273((*Global_1835011)[76]->f_1, 1) && !func_273((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_273((*Global_1835011)[40]->f_1, 1) && func_273((*Global_1835011)[41]->f_1, 1)) && !func_273((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_273((*Global_1835011)[62]->f_1, 1) && func_273((*Global_1835011)[63]->f_1, 1)) && !func_273((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_273((*Global_1835011)[65]->f_1, 1) && func_273((*Global_1835011)[66]->f_1, 1)) && !func_273((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

int func_404()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_405(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_406(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_536(&Global_0, 8);
	}
	if (!func_257() || func_23() != -1)
	{
		return;
	}
	func_536(&Global_0, 1);
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_408(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_537(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_538(iParam0))
	{
		return false;
	}
	if (func_539(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_475(iParam0, 1)) || func_540(32768))
	{
		if (!func_475(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_541())
	{
		return false;
	}
	return true;
}

void func_409(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_410(int iParam0)
{
	iVar0 = func_437(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_411(int iParam0)
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

int func_412(int iParam0, int iParam1)
{
	if (!func_542(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_413(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_260() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_543(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_544(), 12);
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
			else if (func_452() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_545(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_452(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_546(), 13);
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
			else if (func_453() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_547(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_453(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_412(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_414(int iParam0, int iParam1, int iParam2)
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

bool func_415(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_416(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_548(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_219(iVar2, 1, 0) || func_550(func_549(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_421(func_548(iVar0))), func_421(func_548(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_452() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_551(iVar0)), func_551(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_545() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_551(iVar0)), func_551(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_551(iVar0)), func_551(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_463(iParam3, func_552(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_459(iVar2) - iParam7) >= func_412(iParam3, func_553(iVar0));
				}
				else
				{
					bVar1 = func_459(iVar2) >= func_412(iParam3, func_553(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_459(iVar2) + iParam7) >= func_412(iParam3, func_553(iVar0));
			}
			else
			{
				bVar1 = func_459(iVar2) >= func_412(iParam3, func_553(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_554(iVar2)), func_554(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_555(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_556(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_556(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_453() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_557(iVar0)), func_557(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_547() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_557(iVar0)), func_557(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_557(iVar0)), func_557(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_463(iParam3, func_552(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_459(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_558(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_558(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_559(iVar2)), func_559(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_418(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_546() >= 13)
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

bool func_419(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_16(func_560(0)) && ((func_561(0) == 1 || func_561(0) == 8) || func_561(0) == 6))
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

var func_420(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_421(int iParam0)
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

var func_422(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_423(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_424(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_425(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_426(int iParam0)
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
			func_562(1);
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
			func_563(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_563(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_563(3);
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
			func_564(1);
			break;
		case 34:
			func_565(1);
			break;
		case 35:
			func_566(1);
			break;
		case 36:
			break;
		case 37:
			func_567(0);
			break;
		case 38:
			func_568(0);
			break;
		case 39:
			func_569(0);
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
			if ((!&Global_1879534 && func_257()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_422("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_254(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_257()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_422("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_254(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_257()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_422("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_254(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_257()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_422("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_254(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_23() == -1)
			{
				if (!func_484(99217379) || func_570(99217379) == 2110595215)
				{
					if (func_430())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_219(iVar0, 1, 0))
					{
						func_307(iVar0, 1, 752097756);
					}
					func_170(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_219(1013902307, 1, 0))
				{
					func_307(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_219(1013902307, 1, 0))
				{
					func_307(1013902307, 1, 752097756);
				}
				if (!func_219(142640135, 1, 0))
				{
					func_307(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_219(786809402, 1, 0))
				{
					func_307(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_219(786809402, 1, 0))
				{
					func_307(786809402, 1, 752097756);
				}
				if (!func_219(-518019409, 1, 0))
				{
					func_307(-518019409, 1, 752097756);
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
			func_571();
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

void func_427(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_132(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_428(int iParam0)
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
	iVar2 = func_572();
	func_573(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_429(int iParam0)
{
	if (func_22(iParam0))
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

bool func_430()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_433(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_264(50))
			{
				if (!func_264(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_264(51))
			{
				if (!func_264(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_434()
{
	return _unlock_is_unlocked(-121456797);
}

void func_435()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_436()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_437(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_574(iParam0);
}

int func_438()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_219(func_575(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_439(int iParam0)
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

bool func_440(int iParam0, int iParam1)
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
	if (func_219(iVar0, 1, 0) && func_219(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_441(int iParam0)
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

bool func_442(int iParam0, int iParam1)
{
	iVar0 = func_576(iParam0);
	if (iVar0 != -15)
	{
		func_573(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_577(iVar0, 1);
	}
	return false;
}

int func_443(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_219(1811977508, 1, 0))
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
			if (func_21(iVar25, 0) && func_77(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_444(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_244(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_445(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_578())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_244(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_579(iVar0);
			func_580(iVar0, 0, 0);
		}
		func_244(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_160(func_488(1644987397), iVar1);
	}
}

void func_446(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_447(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_448(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_449(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_450(int iParam0)
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
	iVar1 = func_459(iVar9);
	iVar2 = func_459(iVar10);
	iVar3 = func_459(iVar11);
	iVar5 = func_460(iVar9);
	iVar6 = func_460(iVar10);
	iVar7 = func_460(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_459(iVar12);
		iVar8 = func_460(iVar12);
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

void func_451(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_452()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_581(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_453()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_454(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_558(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_558(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_558(iVar0))
		{
			*iParam2++;
		}
		if (func_558(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_558(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_558(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_558(iVar0))
		{
			*iParam2++;
		}
		if (func_558(iVar1))
		{
			*iParam2++;
		}
		if (func_558(iVar0) && func_558(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_558(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_558(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_558(iVar0))
		{
			*iParam2++;
		}
		if (func_558(iVar1))
		{
			*iParam2++;
		}
		if (func_558(iVar2))
		{
			*iParam2++;
		}
		if ((func_558(iVar0) && func_558(iVar1)) && func_558(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_558(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_558(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_558(iVar0))
		{
			*iParam2++;
		}
		if (func_558(iVar1))
		{
			*iParam2++;
		}
		if (func_558(iVar2))
		{
			*iParam2++;
		}
		if (func_558(iVar3))
		{
			*iParam2++;
		}
		if (((func_558(iVar0) && func_558(iVar1)) && func_558(iVar2)) && func_558(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_455(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_582(1497516462);
			func_583(2016141805);
			func_583(1010885152);
			func_583(-502324015);
			break;
		case 2016141805:
			func_583(1497516462);
			func_582(2016141805);
			func_583(1010885152);
			func_583(-502324015);
			break;
		case 1010885152:
			func_583(1497516462);
			func_583(2016141805);
			func_582(1010885152);
			func_583(-502324015);
			break;
		case -502324015:
			func_583(1497516462);
			func_583(2016141805);
			func_583(1010885152);
			func_582(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_583(-538889627);
			func_583(-538880323);
			func_583(-1056767524);
			func_582(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_584();
			func_582(iParam0);
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
			func_585();
			func_582(iParam0);
			break;
		case 2019386373:
			func_583(-664252410);
			func_583(2109952320);
			func_582(2019386373);
			break;
		case -664252410:
			func_583(2019386373);
			func_583(2109952320);
			func_582(-664252410);
			break;
		case 2109952320:
			func_583(2019386373);
			func_583(-664252410);
			func_582(2109952320);
			break;
		case -1674179981:
			func_583(-1835851517);
			func_583(-1838352012);
			func_582(-1674179981);
			break;
		case -1835851517:
			func_583(-1674179981);
			func_583(-1838352012);
			func_582(-1835851517);
			break;
		case -1838352012:
			func_583(-1674179981);
			func_583(-1835851517);
			func_582(-1838352012);
			break;
		case -1717960576:
			func_583(210001842);
			func_582(-1717960576);
			break;
		case 210001842:
			func_583(-1717960576);
			func_582(210001842);
			break;
		case -150493654:
			func_583(-1271608261);
			func_583(1846061697);
			func_583(-1145519186);
			func_582(-150493654);
			break;
		case -1271608261:
			func_583(-150493654);
			func_583(1846061697);
			func_583(-1145519186);
			func_582(-1271608261);
			break;
		case 1846061697:
			func_583(-150493654);
			func_583(-1271608261);
			func_583(-1145519186);
			func_582(1846061697);
			break;
		case -1145519186:
			func_583(-150493654);
			func_583(-1271608261);
			func_583(1846061697);
			func_582(-1145519186);
			break;
		case 1766284049:
			func_583(280705402);
			func_583(1926308480);
			func_582(1766284049);
			break;
		case 280705402:
			func_583(1766284049);
			func_583(1926308480);
			func_582(280705402);
			break;
		case 1926308480:
			func_583(1766284049);
			func_583(280705402);
			func_582(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_583(439465264);
				func_582(1609506757);
			}
			else
			{
				func_583(1609506757);
				func_583(439465264);
			}
			break;
		case 439465264:
			if (func_586(1609506757))
			{
				if (bParam1)
				{
					func_582(439465264);
				}
				else
				{
					func_583(439465264);
				}
			}
			break;
		case 1822001510:
			func_583(-1612662716);
			func_582(1822001510);
			break;
		case -1612662716:
			func_583(1822001510);
			func_582(-1612662716);
			break;
		case 1306158345:
			func_583(1952610440);
			func_583(-223469678);
			func_583(-404698347);
			func_583(1517904467);
			func_582(1306158345);
			break;
		case 1952610440:
			func_583(1306158345);
			func_583(-223469678);
			func_583(-404698347);
			func_583(1517904467);
			func_582(1952610440);
			break;
		case -223469678:
			func_583(1306158345);
			func_583(1952610440);
			func_583(-404698347);
			func_583(1517904467);
			func_582(-223469678);
			break;
		case -404698347:
			func_583(1306158345);
			func_583(1952610440);
			func_583(-223469678);
			func_583(1517904467);
			func_582(-404698347);
			break;
		case 1517904467:
			func_583(1306158345);
			func_583(1952610440);
			func_583(-223469678);
			func_583(-404698347);
			func_582(1517904467);
			break;
		case 1376646519:
			func_583(931649776);
			func_583(-434590080);
			func_583(1743048395);
			func_583(449774763);
			func_582(1376646519);
			break;
		case 931649776:
			func_583(1376646519);
			func_583(-434590080);
			func_583(1743048395);
			func_583(449774763);
			func_582(931649776);
			break;
		case -434590080:
			func_583(1376646519);
			func_583(931649776);
			func_583(1743048395);
			func_583(449774763);
			func_582(-434590080);
			break;
		case 1743048395:
			func_583(1376646519);
			func_583(931649776);
			func_583(-434590080);
			func_583(449774763);
			func_582(1743048395);
			break;
		case 449774763:
			func_583(1376646519);
			func_583(931649776);
			func_583(-434590080);
			func_583(1743048395);
			func_582(449774763);
			break;
		case -1414537028:
			func_583(38162571);
			func_583(1350391819);
			func_583(54073871);
			func_582(-1414537028);
			break;
		case 38162571:
			func_583(-1414537028);
			func_583(1350391819);
			func_583(54073871);
			func_582(38162571);
			break;
		case 1350391819:
			func_583(-1414537028);
			func_583(38162571);
			func_583(54073871);
			func_582(1350391819);
			break;
		case 54073871:
			func_583(-1414537028);
			func_583(38162571);
			func_583(1350391819);
			func_582(54073871);
			break;
		case 198200492:
			func_582(198200492);
			func_583(-1124061431);
			func_583(52706132);
			func_583(-259123672);
			break;
		case -1124061431:
			func_583(198200492);
			func_582(-1124061431);
			func_583(52706132);
			func_583(-259123672);
			break;
		case 52706132:
			func_583(198200492);
			func_583(-1124061431);
			func_582(52706132);
			func_583(-259123672);
			break;
		case -259123672:
			func_583(198200492);
			func_583(-1124061431);
			func_583(52706132);
			func_582(-259123672);
			break;
		case -919512195:
			func_582(-919512195);
			func_583(-1925798111);
			func_583(420709909);
			func_583(1703426636);
			break;
		case -1925798111:
			func_582(-1925798111);
			func_583(-919512195);
			func_583(420709909);
			func_583(1703426636);
			break;
		case 420709909:
			func_582(420709909);
			func_583(-919512195);
			func_583(-1925798111);
			func_583(1703426636);
			break;
		case 1703426636:
			func_582(1703426636);
			func_583(-919512195);
			func_583(-1925798111);
			func_583(420709909);
			break;
		case -1223121209:
			func_582(-1223121209);
			func_583(630808005);
			break;
		case 630808005:
			func_582(630808005);
			func_583(-1223121209);
			break;
		case 1453909576:
			func_582(1453909576);
			func_583(1643531967);
			break;
		case 1643531967:
			func_582(1643531967);
			func_583(1453909576);
			break;
		case 0:
			func_582(0);
			func_583(473295046);
			func_583(-1738165526);
			break;
		case 473295046:
			func_582(473295046);
			func_583(0);
			func_583(-1738165526);
			break;
		case -1738165526:
			func_582(-1738165526);
			func_583(0);
			func_583(473295046);
			break;
		case 932909855:
			func_582(932909855);
			func_583(2051822093);
			break;
		case 2051822093:
			func_582(2051822093);
			func_583(932909855);
			break;
		case 405586984:
			func_582(405586984);
			func_583(1509509592);
			func_583(-959357075);
			func_583(-1311865656);
			break;
		case 1509509592:
			func_582(1509509592);
			func_583(405586984);
			func_583(-959357075);
			func_583(-1311865656);
			break;
		case -959357075:
			func_582(-959357075);
			func_583(1509509592);
			func_583(405586984);
			func_583(-1311865656);
			break;
		case -1311865656:
			func_582(-1311865656);
			func_583(1509509592);
			func_583(-959357075);
			func_583(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_582(-524145696);
			}
			else
			{
				func_583(-524145696);
			}
			func_583(1626481264);
			func_583(282809459);
			break;
		case 282809459:
			func_582(282809459);
			func_583(1626481264);
			func_583(-524145696);
			break;
		case 1626481264:
			func_582(1626481264);
			func_583(-524145696);
			func_583(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_582(885203519);
			}
			else
			{
				func_583(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_582(-1080627546);
			}
			else
			{
				func_583(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_586(iParam0))
				{
					func_582(iParam0);
				}
			}
			else if (func_586(iParam0))
			{
				func_583(iParam0);
			}
			break;
	}
}

void func_456(int iParam0)
{
	if (!func_587(iParam0))
	{
		func_589(func_588(iParam0));
	}
}

int func_457()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_587(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_458(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_459(iVar9);
	iVar2 = func_459(iVar10);
	iVar3 = func_459(iVar11);
	iVar5 = func_460(iVar9);
	iVar6 = func_460(iVar10);
	iVar7 = func_460(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_459(iVar12);
		iVar8 = func_460(iVar12);
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

int func_459(int iParam0)
{
	if (func_219(iParam0, 1, 0))
	{
		iVar0 = func_129(iParam0, 0, 0);
	}
	return iVar0;
}

int func_460(int iParam0)
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

int func_461(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_462(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_463(int iParam0, int iParam1)
{
	if (!func_542(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_464(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_463(iParam1, 5) || iParam0 == func_463(iParam1, 6)) || iParam0 == func_463(iParam1, 7)) || iParam0 == func_463(iParam1, 8)) || iParam0 == func_463(iParam1, 9))
	{
		func_454(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_261(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_263(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_465(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_463(iParam1, 5) || iParam0 == func_463(iParam1, 6)) || iParam0 == func_463(iParam1, 7)) || iParam0 == func_463(iParam1, 8)) || iParam0 == func_463(iParam1, 9))
	{
		if (func_454(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_261(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_263(51, 0, 0, iVar0, func_412(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_261(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_263(51, 0, 0, iVar0, func_412(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_466()
{
	if (func_410((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_467(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_468(int iParam0)
{
	if (!func_590(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_469(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_470(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_147(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_471(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_472()
{
	if (func_591())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_592(2);
	}
	if (Global_1347477->f_119)
	{
		return func_592(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_593();
	fVar2 = func_594();
	fVar3 = func_595();
	fVar4 = func_596();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_597()));
	fVar7 = (func_592(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_598(3, round((to_float(iVar8) * fVar10)), 0);
	func_599(3, fVar9, fVar9 > 100f);
	return func_600(fVar7, -100f, 100f);
}

float func_473()
{
	if (func_591())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_592(1);
	}
	if (Global_1347477->f_119)
	{
		return func_592(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_593();
	fVar2 = func_594();
	fVar3 = func_595();
	fVar4 = func_596();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_597()));
	fVar7 = (func_592(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_598(2, round((to_float(iVar8) * fVar10)), 0);
	func_599(2, fVar9, fVar9 > 100f);
	return func_600(fVar7, -100f, 100f);
}

float func_474()
{
	if (func_591())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_592(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_601())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_602())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_592(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_593();
	fVar2 = func_594();
	fVar3 = func_595();
	fVar4 = func_596();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_597()));
	fVar7 = (func_592(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_598(1, round((to_float(iVar8) * fVar10)), 0);
	func_599(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_592(0);
	}
	return func_600(fVar7, -100f, 100f);
}

bool func_475(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_476(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_477(int iParam0, bool bParam1)
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
				return func_603();
			}
			break;
	}
	return 0;
}

int func_478(int iParam0)
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

bool func_479(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_480(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (func_604(iParam0))
	{
		return;
	}
	if (!func_605(iParam0))
	{
		func_606(iParam0, 1, 0);
	}
	iVar0 = func_607(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_608(iParam0, 512))
		{
			func_335(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_609() && !bParam1) && !func_1(0, 0, 1))
	{
		func_610(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_611(iParam0, 6);
	if (bParam2)
	{
		if (!func_1(0, 0, 1))
		{
			func_406(1, 4);
		}
	}
}

int func_481()
{
	return Global_1946804->f_1;
}

bool func_482(int iParam0, bool bParam1)
{
	return func_477(iParam0, 0) < func_612(iParam0, bParam1);
}

bool func_483(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_208(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_484(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_327(iParam0, 1)] != &Global_1946804->f_57[func_327(iParam0, 1)];
}

void func_485(int iParam0, int iParam1)
{
	if (func_77(iParam1, 130796156))
	{
		func_613(iParam1, 0);
	}
	else if (func_77(iParam1, 930141731))
	{
		func_613(iParam1, 1);
		func_614(iParam0);
	}
}

void func_486(var uParam0, int iParam1)
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

int func_487(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_615(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_616(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_488(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_489(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_490(int iParam0)
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

int func_491(int iParam0)
{
	if (!func_617(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_492(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_208(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_618(iParam0);
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

float func_493(int iParam0)
{
	iVar4 = func_319(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_494(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_619(iVar6) - func_619(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_494(float fParam0)
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

int func_495(int iParam0)
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

int func_496(int iParam0)
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

int func_497(float fParam0, float fParam1)
{
	iVar0 = func_494(fParam0);
	fVar1 = to_float(func_619(iVar0));
	fVar2 = to_float(func_619(iVar0 + 1));
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

int func_498(int iParam0)
{
	if (func_620(iParam0, &iVar0))
	{
		return func_619(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_621())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_621())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_621())
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

int func_499(int iParam0)
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

void func_500(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_622(iParam0));
	sVar4 = func_624(func_623(iVar3, iParam2));
	sVar6 = func_625(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_626(iParam0));
	iVar8 = func_627(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_628(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_420(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_629(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_501(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_332(iVar0);
}

int func_502(int iParam0, int iParam1)
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

void func_503()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_504(int iParam0)
{
	func_511(iParam0, 8, 6);
}

void func_505(int iParam0)
{
	func_630(&(Global_1946804->f_2589), iParam0);
}

void func_506(int iParam0, int iParam1)
{
	func_631(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_507(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_508(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_208(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_632(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_506(iVar1, iVar3);
		}
	}
	if (func_484(-1586649372) && func_632(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_506(iVar1, iVar3);
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
						func_506(iVar1, iVar3);
					}
				}
			}
			func_633(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_633(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_506(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 525
				func_633(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 656
				func_633(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 691
				func_633(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 786
				func_633(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1416; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_208(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_331(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_208(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
				}
				Jump @1416; //curOff = 1131
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_77(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 1229
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_331(&(Global_1946804->f_1497.f_1[iVar1])) || func_77(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_506(iVar1, iVar3);
					}
				}
			}
			switch (func_208(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_208(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_208(&(uParam0->f_1[iVar1])) || func_77(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_506(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_509(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_634(0);
	if (iParam2 != 0 && func_635(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_636(iParam0, func_502(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_510(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_23() != -1;
	iVar7 = func_634(0);
	if (func_336(32768))
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
			iVar5 = func_502(iVar0, 1);
			if (func_637(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_637(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_330(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_638(uParam0);
				if (iVar3 > 0)
				{
					if (!func_336(524288))
					{
						func_513(524288);
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
							iVar5 = func_502(iVar0, 1);
							if (func_637(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_637(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_330(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_506(iVar0, iParam2);
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
					func_516(524288);
				}
			}
		}
	}
}

void func_511(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_327(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_327(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_327(iParam0, 1)])->f_10 && iParam1));
}

void func_512(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_639(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_640(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_607(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_607(Global_40.f_7729);
				Global_1946804->f_1378 = func_607(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_641(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_642(0, 1);
	}
}

void func_513(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_514(struct<4> Param0)
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
			if (func_643(Param0))
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
			func_644(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_513(8);
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
			if (func_643(Param0))
			{
				return;
			}
			func_644(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_513(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_340(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_515(var uParam0)
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

void func_516(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_517(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_518(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_643(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_643(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_644(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_513(8);
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_520(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
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

bool func_521(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_645(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_646())
	{
		return func_645(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_645(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_522(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
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
	if (!_0x271f95e55c663b8b(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = bParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_647(uParam1, iParam0, Var1);
	return 1;
}

bool func_523(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_524(int iParam0)
{
	return _money_get_cash_balance();
}

int func_525(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_387(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_388(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
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

int func_526(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iParam1 = func_648(player_ped_id(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_527(0);
	if (does_entity_exist(iVar0))
	{
		func_528(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_527(int iParam0)
{
	if (func_649(iParam0))
	{
		if (func_23() == -1)
		{
			iVar0 = _get_last_mount(Global_35);
			if (!does_entity_exist(iVar0))
			{
				iVar0 = func_156(func_216(0));
			}
		}
		else
		{
			iVar0 = _get_last_mount(func_650());
		}
	}
	else if (func_23() == -1)
	{
		iVar0 = func_156(0);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(get_player_index());
	}
	return iVar0;
}

int func_528(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = _inventory_get_ped_inventory_id(*iParam0);
	iVar1 = func_651(iVar0, iParam1);
	if (func_652(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_311(iParam1) };
		if (_stat_id_is_valid(&Var2))
		{
			_0xbd861ae8a5181ed7(&Var2, *iParam2);
		}
		if (func_653(iParam1))
		{
			func_654(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_654(*iParam0, iParam1, *iParam2);
			func_648(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_651(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_529(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_129(iParam0, 0, 0);
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
		if (!func_223(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_655(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_610("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_530(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_531(int iParam0, int iParam1, int iParam2, int iParam3)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, func_656(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_21(&(uVar0[iVar16]), 0) && !func_77(&(uVar0[iVar16]), 1286414894)) && !&uVar0[iVar16] == iParam2)
		{
			func_165(&(uVar0[iVar16]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_657(func_80(0), 1, 0);
	return iVar17;
}

void func_532(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_253(43))
		{
			if (func_77(iParam0, 412399755))
			{
				func_456(-1791518714);
				if (func_457() == 0)
				{
					func_406(0, 10);
					iVar0 = func_658(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_459(iParam0) < func_460(iParam0))
						{
							func_261(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_253(44))
		{
			if (func_77(iParam0, 709057512))
			{
				func_456(-2087881550);
				if (func_457() == 1)
				{
					func_406(0, 10);
					iVar0 = func_658(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_459(iParam0) < func_460(iParam0))
						{
							func_261(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_253(45))
		{
			if (func_77(iParam0, -1478961327))
			{
				func_456(1908068621);
				if (func_457() == 2)
				{
					func_406(0, 10);
					iVar0 = func_658(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_459(iParam0) < func_460(iParam0))
						{
							func_261(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_253(46))
		{
			if (func_77(iParam0, -1238404098))
			{
				func_456(1611247019);
				if (func_457() == 3)
				{
					func_406(0, 10);
					iVar0 = func_658(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_459(iParam0) < func_460(iParam0))
						{
							func_261(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_253(47))
		{
			if (func_77(iParam0, 1160548794))
			{
				func_456(1319635688);
				if (func_457() == 4)
				{
					func_406(0, 10);
					iVar0 = func_658(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_459(iParam0) < func_460(iParam0))
						{
							func_261(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_533(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_210(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_127(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_659(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_660(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_661(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_662(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_663(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_151(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_534(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_208(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_390(iParam0);
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

int func_535(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_21(iParam0, 0))
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

void func_536(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_537(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_538(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_475(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_475(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_539(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_475(iParam0, 65536) && !func_475(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_475(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_475(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_540(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_541()
{
	return Global_1905944->f_5694;
}

bool func_542(int iParam0, var uParam1)
{
	if (!func_664(iParam0))
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

int func_543()
{
	return func_665(Global_40.f_12019);
}

int func_544()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_411(iVar1);
		if (func_219(iVar2, 1, 0) || func_550(func_549(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_545()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_666(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_546()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_555(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_547()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_548(int iParam0)
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

int func_549(int iParam0)
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

bool func_550(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_551(int iParam0)
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

int func_552(int iParam0)
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

int func_553(int iParam0)
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

char* func_554(int iParam0)
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

bool func_555(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_556(int iParam0)
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

char* func_557(int iParam0)
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

bool func_558(int iParam0)
{
	if (func_667(iParam0) && func_219(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_668(iParam0) && func_669(iParam0))
	{
		return true;
	}
	return false;
}

char* func_559(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_242(iParam0));
}

int func_560(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_561(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_562(bool bParam0)
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

void func_563(int iParam0)
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

void func_564(bool bParam0)
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

void func_565(bool bParam0)
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

void func_566(bool bParam0)
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

void func_567(bool bParam0)
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

void func_568(bool bParam0)
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

void func_569(bool bParam0)
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

int func_570(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_327(iParam0, 1)]);
}

void func_571()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_670();
		_unlock_set_unlocked(-1526891582, true);
		func_162(-916314281);
		func_307(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_162(494733111);
		func_307(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_572()
{
	return &Global_1899515;
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_671(*iParam0);
	iVar1 = func_672(*iParam0);
	iVar2 = func_673(*iParam0);
	iVar3 = func_674(*iParam0);
	iVar4 = func_675(*iParam0);
	iVar5 = func_676(*iParam0);
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
	iVar6 = func_677(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_677(iVar1, iVar0);
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
	func_678(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_574(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_679(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_575(int iParam0)
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

int func_576(int iParam0)
{
	return func_680(iParam0, -1);
}

bool func_577(int iParam0, bool bParam1)
{
	return func_681(func_572(), iParam0, bParam1);
}

bool func_578()
{
	if (func_434())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_579(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_682((Global_40.f_4283.f_325 + iParam0));
}

void func_580(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_578())
	{
		func_244(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_244(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_581(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_582(int iParam0)
{
	iVar0 = func_683(iParam0, 1);
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

void func_583(int iParam0)
{
	iVar0 = func_683(iParam0, 1);
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

void func_584()
{
	func_583(-939420910);
	func_583(-1187950766);
	func_583(356365161);
	func_583(753127042);
	func_583(-2038424081);
	func_583(1884271742);
	func_583(459290420);
}

void func_585()
{
	func_583(704802028);
	func_583(588987611);
	func_583(2008888900);
	func_583(1649996811);
	func_583(227918160);
	func_583(168171957);
	func_583(1193080109);
	func_583(-491981251);
	func_583(-639037538);
	func_583(-618620429);
}

bool func_586(int iParam0)
{
	iVar0 = func_683(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_587(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_588(int iParam0)
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

void func_589(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_590(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_591()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_592(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_593()
{
	fVar0 = func_684(13);
	iVar1 = func_685(fVar0);
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

float func_594()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_595()
{
	if (func_434())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_596()
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

float func_597()
{
	return Global_1955565->f_3;
}

void func_598(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_686(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_599(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_686(iParam0, 2, 0, 0);
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

float func_600(float fParam0, float fParam1, float fParam2)
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

bool func_601()
{
	return func_684(12) <= -99f;
}

bool func_602()
{
	return func_684(12) >= 99f;
}

int func_603()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_208(iVar1) == -999503751)
		{
			if (func_687() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_604(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_608(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_605(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_608(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_606(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (!func_605(iParam0))
	{
		func_611(iParam0, 2);
		if (bParam2)
		{
			if (!func_1(0, 0, 1))
			{
				func_406(1, 4);
			}
		}
		if ((!func_609() && !bParam1) && !func_1(0, 0, 1))
		{
			func_610(_create_var_string(10, "OUT_JOURN_ADD", func_688(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_607(int iParam0)
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

bool func_608(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_609()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

var func_610(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_611(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_612(int iParam0, bool bParam1)
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

void func_613(int iParam0, bool bParam1)
{
	iVar0 = func_689(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_265(50);
			}
			else
			{
				func_265(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_265(51);
			}
			else
			{
				func_265(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_690(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_289();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_289();
			}
			break;
		case 3:
			func_265(24);
			if (bParam1)
			{
				if (!func_690(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_289();
				}
			}
			break;
	}
}

void func_614(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_691(0))
			{
				iVar0++;
			}
			if (func_691(2))
			{
				iVar0++;
			}
			if (func_691(4))
			{
				iVar0++;
			}
			if (!func_692(16))
			{
				if (iVar0 == 1)
				{
					func_693();
					func_254(456, 1);
					func_694(16);
				}
			}
			if (!func_692(32))
			{
				if (iVar0 >= 3)
				{
					func_693();
					func_254(456, 1);
					func_694(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_691(1))
			{
				iVar0++;
			}
			if (func_691(3))
			{
				iVar0++;
			}
			if (func_691(7))
			{
				iVar0++;
			}
			if (!func_692(1))
			{
				if (iVar0 == 1)
				{
					func_695();
					func_254(457, 1);
					func_694(1);
				}
			}
			if (!func_692(2))
			{
				if (iVar0 >= 3)
				{
					func_695();
					func_254(457, 1);
					func_694(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_691(5))
			{
				iVar0++;
			}
			if (func_691(6))
			{
				iVar0++;
			}
			if (func_691(8))
			{
				iVar0++;
			}
			if (!func_692(4))
			{
				if (iVar0 == 1)
				{
					func_696();
					func_254(455, 1);
					func_694(4);
				}
			}
			if (!func_692(8))
			{
				if (iVar0 >= 3)
				{
					func_696();
					func_254(455, 1);
					func_694(8);
				}
			}
			break;
	}
}

void func_615(var uParam0)
{
	func_486(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_486(uParam0, 617531372);
	}
	else
	{
		func_486(uParam0, 291123060);
	}
}

void func_616(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_697(uParam0))
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

bool func_617(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_618(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

int func_619(int iParam0)
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

bool func_620(int iParam0, int iParam1)
{
	return false;
}

bool func_621()
{
	return false;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_147(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_147(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_147(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_623(int iParam0, int iParam1)
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

char* func_624(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_625(int iParam0)
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

char* func_626(int iParam0)
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

int func_627(int iParam0)
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

int func_628(int iParam0)
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

int func_629(int iParam0)
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

void func_630(var uParam0, int iParam1)
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
			if ((func_698(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_698(uParam0->f_2[iVar0], 1))
				{
					func_699(uParam0->f_2[iVar0], 2, 6);
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

void func_631(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_700(uParam0, 1))
	{
		func_701(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_632(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_633(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_506(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_506(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_506(iVar2, iVar0);
		}
	}
}

int func_634(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_481();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_635(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_636(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_637(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_327(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_638(var uParam0)
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

void func_639(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_702(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_703(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_640(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

void func_641(int iParam0, bool bParam1, int iParam2)
{
	func_704(&(Global_1946804->f_1378), iParam0);
	func_705(2, iParam0, 6);
	if (bParam1)
	{
		func_642(0, 1);
	}
}

void func_642(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_706(0);
	}
	if (bParam0)
	{
		func_513(8);
		func_513(512);
	}
	else
	{
		func_513(8);
		func_513(16);
	}
}

bool func_643(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_644(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_645(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_646()
{
	return Global_1109400->f_245;
}

void func_647(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_697(uParam0))
	{
		return;
	}
	if (&Global_1224424 < 20)
	{
		Global_1224424 = &Global_1224424 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224424->f_1[iVar0] = { *(Global_1224424->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224424->f_1[(&Global_1224424 - 1)]) = { Var1 };
}

int func_648(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iParam2;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar1);
	iVar4 = get_itemset_size(iVar1);
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
			else
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar9 = get_ped_index_from_entity_index(iVar2);
					func_387(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_388(&iVar0, iVar9, iVar5, iVar6);
					if (!func_21(iVar0, 0))
					{
						iVar0 = func_379(iVar2);
					}
				}
				else
				{
					iVar0 = func_379(iVar2);
				}
				if (iVar0 == iParam1)
				{
					_0xed00d72f81cf7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_707(iVar2);
						_0x0d0db2b6af19a987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	destroy_itemset(iVar1);
	return iParam2;
}

bool func_649(int iParam0)
{
	if (func_23() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = _get_last_mount(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
		else if (is_ped_on_mount(Global_35))
		{
			iVar0 = get_mount(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = _get_last_mount(func_650());
		if (iVar0 != _0xf49f14462f0ae27c(get_player_index()))
		{
			return true;
		}
	}
	return false;
}

int func_650()
{
	return get_player_ped(255);
}

int func_651(int iParam0, int iParam1)
{
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_708(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_652(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	if (func_709(iParam0))
	{
		iVar1 = func_710(iParam0);
		if (func_21(iParam1, 0))
		{
			if (func_653(iParam1))
			{
				func_711(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_712(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_653(int iParam0)
{
	if (!func_316(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_713(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_654(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return iParam2;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (_0x0ceeb6f4780b1f2f(iParam0, iVar0) == iVar1)
		{
			_0x627f7f3a0c4c51ff(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
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

bool func_655(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0 = { func_311(iParam0) };
	if (_stat_id_is_valid(&Var0))
	{
		_0xbd861ae8a5181ed7(&Var0, iParam1);
	}
	func_714(iParam0, iParam1);
	return func_389(iParam0, iParam1, bParam2, iParam3);
}

int func_656(int iParam0)
{
	if (func_77(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_77(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_77(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

void func_657(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689->f_4 = bParam0;
	Global_1935689->f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689->f_5 = 0;
	}
	if (bParam1 || (func_715() && iParam2 == 0))
	{
		func_716(1);
		func_717(1);
	}
}

int func_658(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_459(iVar9);
	iVar2 = func_459(iVar10);
	iVar3 = func_459(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_459(iVar12);
	}
	iVar5 = func_460(iVar9);
	iVar6 = func_460(iVar10);
	iVar7 = func_460(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_460(iVar12);
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

struct<28> func_659(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_147(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_663(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_660(int iParam0, var uParam1, bool bParam2)
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
					func_215(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_215(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_215(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_661(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_147(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_663(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_662(int iParam0, var uParam1, bool bParam2)
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
					func_215(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_215(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_215(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_663(var uParam0)
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

bool func_664(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_665(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_666(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_667(int iParam0)
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

int func_668(int iParam0)
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

int func_669(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_718(&iVar0, 0, iVar95, &Var1) && !func_718(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_719(iVar0, &Var1);
			if (func_21(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_670()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_720(Global_35, &uVar0);
	Var30 = { func_201(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_721(0);
	func_722(7);
	func_723(-1623728698, 1, 1, 0);
	if (func_481() == 1160113249)
	{
		func_723(-763730846, 1, 1, 1);
		func_723(-361635024, 1, 1, 1);
	}
	func_724(Global_35, &uVar0);
}

int func_671(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_184(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_672(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_673(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_674(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_675(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_676(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_677(int iParam0, int iParam1)
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

void func_678(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_725(iParam0, iParam6);
	func_726(iParam0, iParam5);
	func_727(iParam0, iParam4);
	func_728(iParam0, iParam3);
	func_729(iParam0, iParam2);
	func_730(iParam0, iParam1);
}

int func_679(int iParam0)
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

int func_680(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_147(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_725(&uVar6, iVar0);
	func_726(&uVar6, iVar1);
	func_727(&uVar6, iVar2);
	func_728(&uVar6, iVar3);
	func_729(&uVar6, iVar4);
	func_730(&uVar6, iVar5);
	return uVar6;
}

bool func_681(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_731(iParam1) || !func_731(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_682(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_488(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_683(int iParam0, int iParam1)
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

float func_684(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_685(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_686(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_240(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_240(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_687()
{
	return Global_1946804->f_1497;
}

char* func_688(int iParam0)
{
	iVar0 = func_607(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_559(iVar0);
}

int func_689(int iParam0)
{
	if (func_732(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_733(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_734(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_735(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_690(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_219(func_736(iVar0, iParam0), 1, 0))
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

bool func_691(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_219(func_737(iVar0, iParam0), 1, 0))
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

bool func_692(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_693()
{
	if (func_23() != -1)
	{
		return;
	}
	func_307(1654063339, 1, 752097756);
	iVar0 = func_322(1);
	func_500(1, iVar0, 0);
}

void func_694(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_695()
{
	if (func_23() != -1)
	{
		return;
	}
	func_307(1623931083, 1, 752097756);
	iVar0 = func_322(2);
	func_500(2, iVar0, 0);
}

void func_696()
{
	if (func_23() != -1)
	{
		return;
	}
	func_307(-1845241476, 1, 752097756);
	iVar0 = func_322(0);
	func_500(0, iVar0, 0);
}

bool func_697(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_698(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_699(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_700(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_701(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_703(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_704(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_702(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_703(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_705(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
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

void func_706(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_707(int iParam0)
{
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	iVar1 = 878851736;
	iVar2 = Global_40.f_4283;
	if (func_738(get_entity_model(iVar0), iVar2))
	{
		iVar1 = -1708424762;
	}
	else
	{
		func_386(get_ped_index_from_entity_index(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_21(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_739(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_740(&(uVar3[iVar15]), iVar2);
				if (func_741(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_742(&iVar1);
	if (func_741(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

struct<4> func_708(int iParam0, int iParam1)
{
	Var0 = { func_743(iParam0) };
	return func_744(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_709(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_710(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_710(int iParam0)
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

void func_711(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_745(iParam1);
	iVar1 = func_746(iVar0, 1);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = (&Global_40.f_1095.f_1[iParam0]->f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = func_747(&(Global_40.f_1095.f_1[iParam0]->f_298[iVar1]), 0, 10);
}

int func_712(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_748(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_311(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_651(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_651(iParam0, iParam1) - iParam2) < 0)
		{
			func_712(iParam0, iParam1, func_129(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_749(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_164(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_713(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619;
		case 1:
			return -1569450319;
		case 2:
			return 854596618;
		case 3:
			return -150200864;
		case 4:
			return 2109269555;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072;
		case 7:
			return -1858513856;
		case 8:
			return -868657362;
		case 9:
			return 1603936352;
		case 10:
			return -702790226;
		case 11:
			return -888740979;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1528935719;
		case 16:
			return 1150939141;
		case 17:
			return -1558096473;
		case 18:
			return -794277189;
		case 19:
			return -1517904196;
		case 20:
			return -1827027577;
		case 21:
			return -662178186;
		case 22:
			return -1035515486;
		case 23:
			return 238733925;
		case 24:
			return 1647012424;
		case 25:
			return 500722008;
		case 26:
			return 1642484975;
		case 27:
			return 1710714415;
		case 28:
			return 699990316;
		case 29:
			return -1648383828;
		case 30:
			return -1379330323;
		case 31:
			return -99092070;
		case 32:
			return 1963510418;
		case 33:
			return 2047376405;
		case 34:
			return -395646254;
		case 35:
			return 1584468323;
		case 36:
			return 1969175294;
		case 37:
			return 657906142;
		case 38:
			return -57190831;
		case 39:
			return -308965548;
		case 40:
			return -1102272634;
		case 41:
			return 554578289;
		case 42:
			return -983605026;
		case 43:
			return -1544126829;
		case 44:
			return -103050851;
		case 45:
			return -476045512;
		case 46:
			return 1796037447;
		case 47:
			return 1795984405;
		case 48:
			return -734947450;
		case 49:
			return -1317365569;
		case 50:
			return 1729948479;
		case 51:
			return 1466150167;
		case 52:
			return 1145777975;
		case 53:
			return 85441452;
		case 54:
			return 653400939;
		case 55:
			return 552246565;
		case 56:
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

void func_714(int iParam0, int iParam1)
{
	if (func_23() == -1)
	{
		iVar0 = func_156(7);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(player_id());
	}
	func_654(iVar0, iParam0, iParam1);
}

bool func_715()
{
	if ((Global_1935689->f_10195 != (Global_1935689->f_19.f_203 - 1) || func_750(func_527(0), Global_1935689->f_10190, 0) > 0) || Global_1935689->f_10195 == 15)
	{
		return true;
	}
	return false;
}

void func_716(int iParam0)
{
	Global_1935689->f_11 = iParam0;
}

void func_717(int iParam0)
{
	Global_1935689->f_10 = iParam0;
}

bool func_718(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_369(iParam1) && !func_751(iParam1))
	{
		iVar0 = func_156(iParam1);
	}
	else
	{
		return false;
	}
	func_752(uParam3);
	iVar5 = func_753(iParam2);
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

void func_719(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_387(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_388(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_720(int iParam0, var uParam1)
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
		if (func_230(iVar31))
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

void func_721(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_21(iVar1, 0))
		{
			func_754(iVar1, 0, bParam0);
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

void func_722(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_755(352481484);
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
		if (func_208(iVar2) != -999503751)
		{
			func_756(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_757(iVar2, 0))
		{
			func_758(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_723(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_759(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_760(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_761(0))
	{
		func_762(iParam0, 1);
		if (func_481() == 1160113249)
		{
			func_762(func_761(-2125499975), 0);
		}
		else
		{
			func_762(func_761(1160113249), 0);
		}
	}
	func_763();
	if (func_764(iVar0))
	{
		_0x766315a564594401(func_147(0), iParam0, 0);
	}
	func_758(iParam0, bParam3);
	if (bParam2)
	{
		func_642(0, 0);
	}
}

void func_724(int iParam0, var uParam1)
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
				if (func_146(uParam1[iVar0]))
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

void func_725(int iParam0, int iParam1)
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

void func_726(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_727(int iParam0, int iParam1)
{
	iVar0 = func_672(*iParam0);
	iVar1 = func_671(*iParam0);
	if (iParam1 < 1 || iParam1 > func_677(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_728(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_729(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_730(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_731(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_676(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_675(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_674(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_671(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_672(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_673(iParam0);
	if (iVar5 < 1 || iVar5 > func_677(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_732(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_733(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_734(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_735(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_736(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_765(iParam0);
		case 1:
			return func_766(iParam0);
		case 2:
			return func_767(iParam0);
		case 3:
			return func_768(iParam0);
	}
	return 0;
}

int func_737(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_769(iParam0);
		case 1:
			return func_770(iParam0);
		case 2:
			return func_771(iParam0);
		case 3:
			return func_772(iParam0);
		case 4:
			return func_773(iParam0);
		case 5:
			return func_774(iParam0);
		case 6:
			return func_775(iParam0);
		case 7:
			return func_776(iParam0);
		case 8:
			return func_777(iParam0);
	}
	return 0;
}

bool func_738(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1003616053:
				case -541762431:
				case 1755643085:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1963605336:
				case -466054788:
				case -166054593:
				case 134747314:
				case 490159652:
				case 1110710183:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1892280447:
				case -1598866821:
				case -1295720802:
				case 122748261:
				case 463643368:
				case 1746830155:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -2021043433:
				case 41707457:
				case 543892122:
				case 1702636991:
				case 2105463796:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_739(int iParam0)
{
	if ((func_77(iParam0, -839724752) || func_77(iParam0, -887064662)) || func_77(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_740(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 878851736;
	}
	if (!func_739(iParam0))
	{
		return 878851736;
	}
	if (func_778(iParam0, iParam1))
	{
		return -1708424762;
	}
	else if (func_77(iParam0, -1690954218))
	{
		return -1760041550;
	}
	else if (func_77(iParam0, 1149630095))
	{
		return -1760041550;
	}
	else if (func_77(iParam0, 194498509))
	{
		return 116793994;
	}
	else if (func_77(iParam0, 43251425))
	{
		return 1869130580;
	}
	return 1869130580;
}

bool func_741(int iParam0, int iParam1)
{
	iVar0[0] = 878851736;
	iVar0[1] = 1762298001;
	iVar0[2] = 1869130580;
	iVar0[3] = 1336518004;
	iVar0[4] = 116793994;
	iVar0[5] = 515084529;
	iVar0[6] = -1760041550;
	iVar0[7] = -1977068039;
	iVar0[8] = -1708424762;
	iVar0[9] = -399865011;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_742(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736:
				*iParam0 = 1762298001;
				break;
			case 1869130580:
				*iParam0 = 1336518004;
				break;
			case 116793994:
				*iParam0 = 515084529;
				break;
			case -1760041550:
				*iParam0 = -1977068039;
				break;
			case -1708424762:
				*iParam0 = -399865011;
				break;
		}
	}
}

struct<5> func_743(int iParam0)
{
	Var0 = { func_744(iParam0, 1328661203, func_371(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_744(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_21(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_745(int iParam0)
{
	if (!func_653(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 0;
		case -1858513856:
			return 7;
		case -1827027577:
			return 20;
		case -1791452194:
			return 14;
		case -1648383828:
			return 29;
		case -1569450319:
			return 1;
		case -1558096473:
			return 17;
		case -1544126829:
			return 43;
		case -1517904196:
			return 19;
		case -1379330323:
			return 30;
		case -1317365569:
			return 49;
		case -1102272634:
			return 40;
		case -1035515486:
			return 22;
		case -983605026:
			return 42;
		case -888740979:
			return 11;
		case -868657362:
			return 8;
		case -794277189:
			return 18;
		case -734947450:
			return 48;
		case -702790226:
			return 10;
		case -662178186:
			return 21;
		case -476045512:
			return 45;
		case -395646254:
			return 34;
		case -308965548:
			return 39;
		case -150200864:
			return 3;
		case -103050851:
			return 44;
		case -99092070:
			return 31;
		case -57190831:
			return 38;
		case 0:
			return 56;
		case 85441452:
			return 53;
		case 238733925:
			return 23;
		case 459744337:
			return 12;
		case 500722008:
			return 25;
		case 552246565:
			return 55;
		case 554578289:
			return 41;
		case 653400939:
			return 54;
		case 657906142:
			return 37;
		case 699990316:
			return 28;
		case 854596618:
			return 2;
		case 1145777975:
			return 52;
		case 1150939141:
			return 16;
		case 1248540072:
			return 6;
		case 1466150167:
			return 51;
		case 1528935719:
			return 15;
		case 1584468323:
			return 35;
		case 1603936352:
			return 9;
		case 1642484975:
			return 26;
		case 1647012424:
			return 24;
		case 1710714415:
			return 27;
		case 1729948479:
			return 50;
		case 1795984405:
			return 47;
		case 1796037447:
			return 46;
		case 1914602340:
			return 13;
		case 1963510418:
			return 32;
		case 1969175294:
			return 36;
		case 2047376405:
			return 33;
		case 2109269555:
			return 4;
		case 2116849039:
			return 5;
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

int func_747(int iParam0, int iParam1, int iParam2)
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

bool func_748(int iParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam1, 0))
	{
		return false;
	}
	return func_651(iParam0, iParam1) >= iParam2;
}

int func_749(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_743(iParam0) };
	Var5 = { func_744(iParam0, iParam1, Var0, Var0.f_4) };
	return func_779(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_750(int iParam0, int iParam1, bool bParam2)
{
	if (func_780())
	{
		iVar0 = func_781(iParam1, 0);
	}
	else
	{
		iVar0 = func_129(iParam1, bParam2, 0);
		if (does_entity_exist(iParam0))
		{
			iVar0 = (iVar0 + func_651(_inventory_get_ped_inventory_id(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689->f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_751(int iParam0)
{
	iParam0 = func_216(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_369(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_752(var uParam0)
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

int func_753(int iParam0)
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

void func_754(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_208(iParam0))
	{
		case -2061583405:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_782(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_763();
	}
	if (bParam1)
	{
		func_642(0, 0);
	}
}

void func_755(int iParam0)
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
	Var2 = { func_361(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_363(&Var2, &iVar0, &iVar1, 0))
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
		func_364(iVar0);
	}
}

void func_756(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_783(iParam2, *uParam0);
	func_784(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_757(int iParam0, int iParam1)
{
	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_214(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_147(0), &Var5, iParam1);
	return true;
}

void func_758(int iParam0, bool bParam1)
{
	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_214(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_147(0), &Var5, bParam1);
}

bool func_759(int iParam0)
{
	if (func_23() == -1)
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

int func_760(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_785(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_757(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_208(iParam0) != -999503751)
	{
		func_756(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_761(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_481();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_762(int iParam0, int iParam1)
{
	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_214(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_147(0), &Var5);
	return 1;
}

void func_763()
{
	if (func_23() == -1)
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

bool func_764(int iParam0)
{
	return func_787(func_786(iParam0));
}

int func_765(int iParam0)
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

int func_766(int iParam0)
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

int func_767(int iParam0)
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

int func_768(int iParam0)
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

int func_769(int iParam0)
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

int func_770(int iParam0)
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

int func_771(int iParam0)
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

int func_772(int iParam0)
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

int func_773(int iParam0)
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

int func_774(int iParam0)
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

int func_775(int iParam0)
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

int func_776(int iParam0)
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

int func_777(int iParam0)
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

bool func_778(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509:
				case -1866642239:
				case -1816929509:
				case -1508120809:
				case 1001171791:
				case 1023080408:
				case 1197831625:
				case 1210345318:
				case 1846915545:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093:
				case -1836227998:
				case -1610329427:
				case -1310590179:
				case -244657613:
				case 58634176:
				case 472142656:
				case 619479575:
				case 727522818:
				case 785407605:
				case 992366796:
					return true;
				default:
					break;
			}
			Jump @307; //curOff = 190
			switch (iParam0)
			{
				case -1956973834:
				case -1643384846:
				case -1424697962:
				case -738999731:
				case -5376850:
				case 566023444:
				case 915880986:
				case 1425358430:
					return true;
				default:
					break;
			}
			Jump @307; //curOff = 253
			switch (iParam0)
			{
				case -1726572562:
				case -1017987135:
				case 485620834:
				case 1471975165:
				case 1570826681:
				case 2058475216:
					return true;
				default:
					break;
			}
			return false;
		}

int func_779(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_530(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_788(iParam0, *uParam2, &Var0, 0))
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

bool func_780()
{
	if ((func_789(Global_1935689->f_10186, 1) || func_789(Global_1935689->f_10186, 2)) || func_789(Global_1935689->f_10186, 4))
	{
		return true;
	}
	return false;
}

int func_781(int iParam0, bool bParam1)
{
	iVar1 = func_129(iParam0, bParam1, 0);
	if (func_789(Global_1935689->f_10186, 1))
	{
		iVar0 = func_156(func_216(0));
		iVar1 = (iVar1 + func_651(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_789(Global_1935689->f_10186, 2))
	{
		iVar0 = func_156(func_216(1));
		iVar1 = (iVar1 + func_651(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_789(Global_1935689->f_10186, 4))
	{
		iVar0 = func_156(func_216(6));
		iVar1 = (iVar1 + func_651(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	return iVar1;
}

int func_782(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_785(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_208(iParam0) != -999503751)
		{
			func_790(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_208(iParam0) != -999503751)
	{
		func_790(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_757(iParam0, 1);
	return 1;
}

void func_783(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_784(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_791(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_327(func_326(iParam1), 1);
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
		func_792(uParam0);
	}
}

bool func_785(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_786(int iParam0)
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

bool func_787(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_788(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_789(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_790(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_793(iParam1);
	func_794(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_795(&(uParam0->f_26), iVar1);
		if (func_796(uParam0->f_26, &iVar0))
		{
			func_797(iVar0, iVar1);
		}
	}
}

void func_791(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_798(&(uParam0->f_3));
}

void func_792(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_799(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_793(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_794(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_795(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_791(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_796(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_797(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_798(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_799(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_800(func_481());
	if (*uParam0)
	{
		func_798(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_23() != -1, uParam2);
	*uParam0 = 1;
}

int func_800(int iParam0)
{
	if (func_23() == -1)
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

