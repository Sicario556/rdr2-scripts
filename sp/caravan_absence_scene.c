void __EntryFunction__()
{
	iVar0 = 0;
	func_1(Global_1935630, 8388608);
	iVar6 = 0;
	vVar7 = { -2593.506f, 457.0906f, 145.9973f };
	if (has_force_cleanup_occurred(523))
	{
		func_2(&iVar6);
		func_3(Global_1935630, 8388608);
		terminate_this_thread();
	}
	while (!_0x9e4ef615e307fbbe())
	{
		_0xc9caeaeec1256e54(1331687942);
		_0x5651516d947abc53();
		switch (iVar0)
		{
			case 0:
				do_screen_fade_out(1500);
				func_4(0);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				func_5(&iVar0, 1);
				break;
			case 1:
				if (is_screen_faded_out())
				{
					set_player_control(player_id(), false, 0, true);
					if (func_6(Global_35))
					{
						iVar4 = get_mount(Global_35);
						_remove_ped_from_mount(Global_35, true, false);
						_set_entity_coords_and_heading(iVar4, -2589.782f, 466.6921f, 145.0417f, 75.2096f, true, false, true);
					}
					else if (is_ped_in_any_vehicle(Global_35, false))
					{
						iVar3 = get_vehicle_ped_is_using(Global_35);
						_0xe0b61ed8bb37712f(Global_35);
						_set_entity_coords_and_heading(iVar3, -2618.071f, 460.2562f, 144.8576f, 7.2663f, true, false, true);
					}
					func_4(1);
					_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 1);
					func_7();
					func_8(0);
					func_5(&iVar0, 2);
				}
				break;
			case 2:
				iVar6 = func_9(ScriptParam_0);
				sVar28 = func_10(iVar6);
				if (is_string_null_or_empty(sVar28))
				{
					iVar6 = 0;
				}
				if (iVar6 != 0)
				{
					iVar2 = _create_anim_scene(func_12(func_11("cutscene@", sVar28, 1, 63)), 256, sVar28, false, true);
					if (!_does_anim_scene_exist(iVar2))
					{
						iVar6 = 0;
					}
					else
					{
						load_anim_scene(iVar2);
					}
				}
				iVar1 = _create_anim_scene("script@fast_travel@sky@skytl_0900_01clear", 0, 0, false, true);
				load_anim_scene(iVar1);
				if (iVar6 == 2)
				{
					func_13(&uVar5, 0);
				}
				else if (iVar6 != 1)
				{
				}
				else
				{
					func_14(&uVar5, 0);
				}
				Global_40.f_4283.f_574 = (Global_40.f_4283.f_574 || iVar6);
				func_5(&iVar0, 3);
				break;
			case 3:
				bVar13 = func_15(iVar6);
				bVar14 = (iVar6 == 0 || (_is_anim_scene_loaded(iVar2, true, false) && _get_anim_scene_entity_matrix(iVar2, "JOHN", &vVar16, false, 0, 2)));
				bVar15 = _is_anim_scene_loaded(iVar1, true, false);
				if (((bVar14 && bVar13) && bVar15) && func_16(iVar6))
				{
					if (iVar6 != 0)
					{
						func_17(iVar2, iVar6);
					}
					switch (iVar6)
					{
						case 8:
						case 16:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							func_5(&iVar0, 9);
							break;
						case 0:
							vVar10 = { vVar7 };
							func_5(&iVar0, 11);
							break;
						case 1:
						case 2:
						case 4:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							func_5(&iVar0, 4);
							break;
					}
					if (func_18(Global_35, 0))
					{
						set_entity_coords(Global_35, vVar10, true, false, true, true);
						freeze_entity_position(Global_35, true);
					}
				}
				break;
			case 4:
				func_19(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				advance_clock_time_to(func_20(), 0, 0);
				func_5(&iVar0, 5);
				break;
			case 5:
				start_anim_scene(iVar1);
				start_audio_scene("Mission_Transition_Clouds_Scene");
				func_5(&iVar0, 6);
				break;
			case 6:
				fVar29 = _get_anim_scene_time(iVar1);
				if ((fVar29 > 1.2f && !is_screen_faded_in()) && !is_screen_fading_in())
				{
					do_screen_fade_in(500);
				}
				if (fVar29 > 8.7f)
				{
					func_5(&iVar0, 7);
				}
				break;
			case 7:
				start_anim_scene(iVar2);
				stop_audio_scene("Mission_Transition_Clouds_Scene");
				freeze_entity_position(Global_35, false);
				func_5(&iVar0, 8);
				break;
			case 8:
				if (_get_anim_scene_progress(iVar2) > 0.9f)
				{
					_0x1b70811d3bf75db9(1, 0);
				}
				if (_is_anim_scene_active(iVar2))
				{
					do_screen_fade_out(0);
					if (iVar6 != 4)
					{
						func_5(&iVar0, 18);
					}
					else
					{
						func_5(&iVar0, 17);
					}
				}
				break;
			case 9:
				do_screen_fade_in(500);
				start_anim_scene(iVar2);
				freeze_entity_position(Global_35, false);
				func_5(&iVar0, 10);
				break;
			case 10:
				if (_get_anim_scene_progress(iVar2) > 0.9f)
				{
					_0x1b70811d3bf75db9(1, 0);
				}
				if (_is_anim_scene_active(iVar2))
				{
					do_screen_fade_out(0);
					func_5(&iVar0, 13);
				}
				break;
			case 11:
				start_anim_scene(iVar1);
				start_audio_scene("Mission_Transition_Clouds_Scene");
				func_5(&iVar0, 12);
				break;
			case 12:
				fVar30 = _get_anim_scene_time(iVar1);
				if ((fVar30 > 1.3f && !is_screen_faded_in()) && !is_screen_fading_in())
				{
					do_screen_fade_in(500);
				}
				if (fVar30 > 8.5f)
				{
					func_5(&iVar0, 13);
				}
				break;
			case 13:
				func_19(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				advance_clock_time_to(func_20(), 0, 0);
				func_5(&iVar0, 14);
				break;
			case 14:
				func_21();
				if (iVar6 == 8 || iVar6 == 16)
				{
					_0x69d65e89ffd72313(0, 0);
					do_screen_fade_in(1500);
				}
				else
				{
					stop_audio_scene("Mission_Transition_Clouds_Scene");
				}
				func_22(&uLocal_12, 0);
				func_5(&iVar0, 15);
				break;
			case 15:
				if (!is_screen_faded_out() && func_23(&uLocal_12) > 6f)
				{
					if (iVar6 != 0)
					{
						func_5(&iVar0, 16);
					}
					else
					{
						do_screen_fade_out(1000);
						func_5(&iVar0, 18);
					}
				}
				break;
			case 16:
				set_entity_coords(Global_35, -2571.372f, 454.4025f, 144.7018f, true, false, true, true);
				set_entity_heading(Global_35, 266.6689f);
				set_gameplay_cam_relative_heading(0f, 1f);
				freeze_entity_position(Global_35, false);
				simulate_player_input_gait(player_id(), 1f, 3000, 266.3258f, false, true);
				func_5(&iVar0, 21);
				break;
			case 18:
				if (is_screen_faded_out())
				{
					if (does_cam_exist(iLocal_15))
					{
						render_script_cams(false, false, 3000, true, false, 0);
						set_cam_active(iLocal_15, false);
						destroy_cam(iLocal_15, false);
					}
					iVar31 = 0;
					if (_0x6eead6af637da752(-2519.942f, 420.925f, 146.9122f, 705257970, 2f, 1))
					{
						iVar31 = _find_closest_active_scenario_point_of_type(-2519.942f, 420.925f, 146.9122f, 705257970, 2f, 1, false);
					}
					freeze_entity_position(Global_35, false);
					if (_does_scenario_point_exist(iVar31))
					{
						_task_use_scenario_point(Global_35, iVar31, 0, 1300, false, true, 0, false, -1f, false);
						func_22(&uLocal_19, 0);
						func_5(&iVar0, 19);
					}
					else
					{
						set_entity_coords(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
						set_entity_heading(Global_35, 90f);
						set_gameplay_cam_relative_heading(0f, 1f);
						func_5(&iVar0, 20);
					}
				}
				break;
			case 19:
				if (get_script_task_status(Global_35, -76381094, true) == 1 && is_ped_active_in_scenario(Global_35, 0))
				{
					if (!func_24(&uLocal_16))
					{
						func_22(&uLocal_16, 0);
					}
					else if (func_25(&uLocal_16) > 0.3f)
					{
						set_gameplay_cam_relative_heading(-165f, 1f);
						func_5(&iVar0, 20);
					}
				}
				else if (func_25(&uLocal_19) > 2f)
				{
					set_entity_coords(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
					set_entity_heading(Global_35, 90f);
					set_gameplay_cam_relative_heading(0f, 1f);
					func_5(&iVar0, 20);
				}
				break;
			case 20:
				do_screen_fade_in(800);
				simulate_player_input_gait(player_id(), 1f, 3000, 90f, false, true);
				func_5(&iVar0, 21);
				break;
			case 17:
				set_entity_coords(Global_35, -2564.423f, 403.3554f, 147.3823f, true, false, true, true);
				set_entity_heading(Global_35, 148f);
				set_gameplay_cam_relative_heading(0f, 1f);
				freeze_entity_position(Global_35, false);
				simulate_player_input_gait(player_id(), 1f, 3000, 148f, false, true);
				do_screen_fade_in(800);
				func_5(&iVar0, 21);
				break;
			case 21:
				iVar32 = func_26(iLocal_10, 709, 714, 0);
				if (func_27(iVar32, 1))
				{
					func_28(iVar32, 1, 1, 0, 0);
				}
				if (does_cam_exist(iLocal_15))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_cam_active(iLocal_15, false);
					destroy_cam(iLocal_15, false);
				}
				if (iVar6 != 2)
				{
					if (iVar6 == 1)
					{
						func_14(&uVar5, 1);
					}
				}
				else
				{
					func_13(&uVar5, 1);
				}
				if (!func_29(1))
				{
					func_30(-579939614, 1, 0, 1103626240);
				}
				func_2(&iVar6);
				freeze_entity_position(Global_35, false);
				set_player_control(player_id(), true, 0, false);
				func_5(&iVar0, 22);
				break;
			case 22:
				_0x7de4643157ad646c(get_id_of_this_thread());
				break;
		}
		wait(0);
	}
	func_3(Global_1935630, 8388608);
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(int iParam0)
{
	func_31(*iParam0);
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_4(bool bParam0)
{
	if (func_32())
	{
		Global_1357509 = 1;
	}
	if (func_33(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_5(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
	}
}

bool func_6(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_7()
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = func_34();
	bVar1 = false;
	if (does_entity_exist(iVar0))
	{
		bVar1 = true;
	}
	iVar2 = create_itemset(false);
	if (!is_itemset_valid(iVar2))
	{
		return;
	}
	_0x20a4bf0e09bee146(iVar2);
	find_all_attached_carriable_entities(Global_35, iVar2);
	iVar3 = get_itemset_size(iVar2);
	if (iVar3 == 0)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = get_indexed_item_in_itemset(iVar4, iVar2);
		iVar6 = iVar5;
		if (does_entity_exist(iVar6))
		{
			_0xed00d72f81cf7278(iVar6, 0, 0);
			if (bVar1 && iVar6 == iVar0)
			{
				_set_entity_coords_and_heading(iVar6, -2589.73f, 462.719f, 145.099f, 1.44f, true, false, true);
			}
			else
			{
				_set_entity_coords_and_heading(iVar6, -2595.92f, 474.3518f, 144.948f, 83.4473f, true, false, true);
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar2);
}

void func_8(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_35(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_36(iVar1))
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

int func_9(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = 0;
		set_bit(&iVar2, iVar1);
		iVar0 = iVar2;
		if (func_37(uParam0, iVar0))
		{
			if (func_38(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return 0;
}

char* func_10(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 8:
			sVar0 = "PTL_MCS1";
			break;
		case 16:
			sVar0 = "PTL_MCS2";
			break;
		case 4:
			sVar0 = "PTL_MCS3";
			break;
		case 1:
			sVar0 = "PTL_MCS5";
			break;
		case 2:
			sVar0 = "PTL_MCS4";
			break;
	}
	return sVar0;
}

struct<8> func_11(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

var func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_13(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_39(202123401, -1f, 1);
		func_40(202123401, 4, 0);
		iVar4 = _create_volume_box(-2547.044f, 419.8942f, 147.9372f, 0f, 0f, 0f, 25f, 25f, 3f);
		*uParam0 = create_itemset(true);
		iVar3 = _0x886171a12f400b89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = get_indexed_item_in_itemset(iVar2, *uParam0);
			iVar1 = iVar0;
			if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
			{
				set_entity_visible(iVar1, bParam1);
			}
			iVar2++;
		}
		func_41(iVar4);
	}
	else
	{
		func_39(202123401, 0f, 1);
		func_40(202123401, 0, 0);
		iVar3 = get_itemset_size(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = get_indexed_item_in_itemset(iVar2, *uParam0);
			iVar1 = iVar0;
			if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
			{
				set_entity_visible(iVar1, bParam1);
			}
			iVar2++;
		}
		destroy_itemset(*uParam0);
	}
}

void func_14(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		iVar4 = _create_volume_box(-2514.243f, 432.0485f, 146.8721f, 0f, 0f, 0f, 2f, 2f, 2f);
		*uParam0 = create_itemset(true);
		iVar3 = _0x886171a12f400b89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = get_indexed_item_in_itemset(iVar2, *uParam0);
			iVar1 = iVar0;
			if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
			{
				set_entity_visible(iVar1, bParam1);
			}
			iVar2++;
		}
		func_41(iVar4);
	}
	else
	{
		iVar3 = get_itemset_size(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = get_indexed_item_in_itemset(iVar2, *uParam0);
			iVar1 = iVar0;
			if (does_entity_exist(iVar1) && is_entity_a_ped(iVar1))
			{
				set_entity_visible(iVar1, bParam1);
			}
			iVar2++;
		}
		destroy_itemset(*uParam0);
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			request_model(219205323, false);
			request_model(1786194379, false);
			if (has_model_loaded(219205323) && has_model_loaded(1786194379))
			{
				return 1;
			}
			break;
		case 2:
			request_model(-1679658797, false);
			request_model(858540986, false);
			if (has_model_loaded(-1679658797) && has_model_loaded(858540986))
			{
				return 1;
			}
			break;
		case 1:
			request_model(-50684386, false);
			request_model(-197909103, false);
			request_model(-1937484496, false);
			request_model(-1403420972, false);
			if (((has_model_loaded(-50684386) && has_model_loaded(-197909103)) && has_model_loaded(-1937484496)) && has_model_loaded(-1403420972))
			{
				return 1;
			}
			break;
		case 0:
		case 8:
		case 16:
			return 1;
	}
	return 0;
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (does_entity_exist(iLocal_2))
			{
				if (does_entity_exist(iLocal_3))
				{
					if (!does_entity_exist(iLocal_10))
					{
						if (func_42(709, 0))
						{
							iLocal_10 = func_43(709, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_3 = create_object(858540986, -2552.5f, 422.8f, 148.7f, true, true, false, false, true);
				}
			}
			else
			{
				iLocal_2 = func_44(-1679658797, 2552.5f, 424.8f, 148.7f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			break;
		case 4:
			if (does_entity_exist(iLocal_0))
			{
				if (does_entity_exist(iLocal_1))
				{
					if (!does_entity_exist(iLocal_10))
					{
						if (func_42(710, 0))
						{
							iLocal_10 = func_43(710, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_1 = create_object(1786194379, -2565.166f, 404.6969f, 147.5132f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_0 = create_vehicle(219205323, -2564.759f, 405.6364f, 147.536f, 0f, true, true, false, false);
				return false;
			}
			break;
		case 1:
			if (does_entity_exist(iLocal_4))
			{
				if (does_entity_exist(iLocal_5))
				{
					if (does_entity_exist(iLocal_6))
					{
						if (iLocal_7 != 0)
						{
							if (_0x1ff441d7954f8709(iLocal_7))
							{
								if (!does_entity_exist(iLocal_10))
								{
									if (func_42(714, 0))
									{
										iLocal_10 = func_43(714, 1, 0, 1, 1, 1);
									}
								}
								else
								{
									return true;
								}
							}
						}
						else
						{
							if (iLocal_11 == 0)
							{
								iLocal_11 = 1;
								iLocal_7 = _0x6f3068258a499e52(-1403420972, -2515.028f, 430.2761f, 146.9727f, 11);
							}
							return false;
						}
					}
					else
					{
						iLocal_6 = create_object(-1937484496, -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
						return false;
					}
				}
				else
				{
					iLocal_5 = create_object(-197909103, -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_4 = func_44(-50684386, -2513.196f, 414.9384f, 146.8074f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (does_entity_exist(iLocal_4))
				{
					_set_ped_scale(iLocal_4, 1f);
				}
				return false;
			}
			break;
		case 8:
			if (iLocal_8 != 0)
			{
				if (_0x1ff441d7954f8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = _0x6f3068258a499e52(-542955242, -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 16:
			if (iLocal_8 != 0)
			{
				if (_0x1ff441d7954f8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = _0x6f3068258a499e52(-542955242, -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 0:
			return true;
	}
	return false;
}

void func_17(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
		case 16:
			set_anim_scene_entity(iParam0, "JOHN", Global_35, 0);
			set_anim_scene_entity(iParam0, "ABIGAILROBERTS", func_45(13), 0);
			set_anim_scene_entity(iParam0, "p_door04x", _0x4735e2a4bb83d9da(iLocal_8), 0);
			break;
		case 2:
			set_anim_scene_entity(iParam0, "JOHN", Global_35, 0);
			if (iLocal_9 == 0)
			{
				iLocal_10 = _0x31c70a716cae1fee(_0x112ddf56300bc6e5(1033990353));
			}
			set_anim_scene_entity(iParam0, "DavidGeddes", iLocal_10, 0);
			set_anim_scene_entity(iParam0, "Horse_01", iLocal_2, 0);
			set_anim_scene_entity(iParam0, "p_brushHorse01x", iLocal_3, 0);
			break;
		case 4:
			if (iLocal_9 == 0)
			{
				iLocal_10 = _0x31c70a716cae1fee(_0x112ddf56300bc6e5(1981782315));
			}
			set_anim_scene_entity(iParam0, "JOHN", Global_35, 0);
			set_anim_scene_entity(iParam0, "TomDickens", iLocal_10, 0);
			set_anim_scene_entity(iParam0, "CART06", iLocal_0, 0);
			set_anim_scene_entity(iParam0, "p_hayBale03x", iLocal_1, 0);
			break;
		case 1:
			if (iLocal_9 == 0)
			{
				iLocal_10 = _0x31c70a716cae1fee(_0x112ddf56300bc6e5(1899337255));
			}
			set_anim_scene_entity(iParam0, "JOHN", Global_35, 0);
			set_anim_scene_entity(iParam0, "ABE", iLocal_10, 0);
			set_anim_scene_entity(iParam0, "cow", iLocal_4, 0);
			set_anim_scene_entity(iParam0, "p_cs_bucket01x", iLocal_5, 0);
			set_anim_scene_entity(iParam0, "p_stool02x", iLocal_6, 0);
			set_anim_scene_entity(iParam0, "p_val_gate2m02x", _0x4735e2a4bb83d9da(iLocal_7), 0);
			break;
	}
}

bool func_18(int iParam0, int iParam1)
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
	if (func_46(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_46(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_46(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_47(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_48(iParam1);
	}
	if ((bParam3 && func_49(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_50(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_51(Global_40.f_7729, 4096);
		func_52(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_53(iParam0);
	}
	func_54();
	if (!func_55(iParam1))
	{
		func_57(iVar0, iParam0, func_56(iParam1), 1, 0, 1);
	}
	func_58(iParam0);
	return 1;
}

int func_20()
{
	if (func_59((*Global_1835011)[64]->f_1, 1))
	{
		return 15;
	}
	return 9;
}

void func_21()
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
			vVar0 = { -2630.748f, 494.9098f, 166.4427f };
			vVar3 = { -5.5882f, -0.6052f, -136.2172f };
			fVar6 = 26.8916f;
			break;
		case 1:
			vVar0 = { -2607.747f, 313.8794f, 150.8527f };
			vVar3 = { 2.8811f, 0f, -29.0874f };
			fVar6 = 37.8065f;
			break;
		case 2:
			vVar0 = { -2593.301f, 516.9439f, 145.0856f };
			vVar3 = { 1.1034f, -0.6875f, -150.0637f };
			fVar6 = 26.922f;
			break;
		case 3:
			vVar0 = { -2578.31f, 439.7971f, 146.6813f };
			vVar3 = { 8.7918f, -0.4415f, -129.2381f };
			fVar6 = 37.8087f;
			break;
		case 4:
			vVar0 = { -2584.975f, 399.6115f, 150.8719f };
			vVar3 = { 1.2934f, -0.2442f, -55.7509f };
			fVar6 = 26.8832f;
			break;
		case 5:
		default:
			vVar0 = { -2524.076f, 428.6737f, 148.6333f };
			vVar3 = { 3.7283f, -0.5313f, 119.6752f };
			fVar6 = 42.8312f;
			break;
	}
	iLocal_15 = create_camera_with_params(26379945, vVar0, vVar3, fVar6, true, 2);
	render_script_cams(true, false, 3000, true, false, 0);
	shake_cam(iLocal_15, "HAND_SHAKE", 0.1f);
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1 || !func_24(uParam0))
	{
		func_60(uParam0);
	}
}

float func_23(var uParam0)
{
	if (!func_24(uParam0))
	{
		return 0f;
	}
	if (func_61(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_62() - uParam0->f_1);
}

bool func_24(var uParam0)
{
	return func_63(*uParam0, 1);
}

float func_25(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_61(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_62() - uParam0->f_1);
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_64(iVar2) != 0 && _0x800df3fc913355f3(func_65(iVar2)))
		{
			if (func_65(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_27(int iParam0, bool bParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_68(iParam0) && bParam1)
	{
		return false;
	}
	return func_69(iParam0, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_67(iParam0))
	{
		return;
	}
	if (!func_69(iParam0, 1))
	{
		return;
	}
	if (!func_69(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_68(iParam0)) && func_70(iParam0))
	{
		return;
	}
	func_71(iParam0, 1);
	func_72(iParam0);
	if (func_73(func_64(iParam0)))
	{
		iVar0 = func_65(iParam0);
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
		func_71(iParam0, 16);
	}
	if (func_69(iParam0, 128) && !bParam3)
	{
		func_74(iParam0, 0);
	}
}

bool func_29(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return false;
	}
	iVar0 = func_75(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765->f_338;
}

void func_30(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_76(iParam0, iParam1, bParam2, fParam3);
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (_0x1ff441d7954f8709(iLocal_8))
			{
				set_model_as_no_longer_needed(-542955242);
				_0xd2b9c78537ed5759(iLocal_8);
			}
			break;
		case 4:
			if (does_entity_exist(iLocal_1))
			{
				delete_object(&iLocal_1);
				set_model_as_no_longer_needed(1786194379);
			}
			if (does_entity_exist(iLocal_0))
			{
				delete_vehicle(&iLocal_0);
				set_model_as_no_longer_needed(219205323);
			}
			break;
		case 2:
			if (does_entity_exist(iLocal_2))
			{
				delete_ped(&iLocal_2);
				set_model_as_no_longer_needed(-1679658797);
			}
			if (does_entity_exist(iLocal_3))
			{
				delete_object(&iLocal_3);
				set_model_as_no_longer_needed(858540986);
			}
			break;
		case 1:
			if (does_entity_exist(iLocal_5))
			{
				delete_object(&iLocal_5);
				set_model_as_no_longer_needed(-197909103);
			}
			if (does_entity_exist(iLocal_4))
			{
				delete_ped(&iLocal_4);
				set_model_as_no_longer_needed(-50684386);
			}
			if (does_entity_exist(iLocal_6))
			{
				delete_object(&iLocal_6);
				set_model_as_no_longer_needed(-1937484496);
			}
			if (_0x1ff441d7954f8709(iLocal_7))
			{
				set_model_as_no_longer_needed(-1403420972);
				_0xd2b9c78537ed5759(iLocal_7);
			}
			break;
	}
}

bool func_32()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_77(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_34()
{
	return Global_1900383->f_393;
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_36(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_37(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (func_78(13, 1, 1))
			{
				return true;
			}
			break;
		case 1:
			if (func_27(714, 0))
			{
				return false;
			}
			return true;
		case 2:
			if (func_27(709, 0))
			{
				return false;
			}
			return true;
		case 4:
			if (func_27(710, 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_39(int iParam0, float fParam1, int iParam2)
{
	func_79(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	func_79(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_41(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_42(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	if (func_69(iParam0, 32) && !bParam1)
	{
		func_81(iParam0, _create_persistent_character(func_64(iParam0)));
		if (func_66() == -1)
		{
			if (func_69(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_65(iParam0));
				func_71(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_65(iParam0));
		}
		return false;
	}
	if (!func_82(iParam0) && func_66() == -1)
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_65(iParam0)))
	{
		func_71(iParam0, 128);
		return true;
	}
	func_81(iParam0, _create_persistent_character(func_64(iParam0)));
	_0x4f81ead1de8fa19b(func_65(iParam0));
	if (func_69(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_65(iParam0));
		func_71(iParam0, 2048);
	}
	return true;
}

int func_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_83(iParam0, 1))
	{
		return 0;
	}
	if (func_73(func_64(iParam0)))
	{
		iVar1 = func_65(iParam0);
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
	if ((bParam4 && !func_68(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_84(iParam0, 1);
	func_85(iParam0);
	if (bParam3)
	{
		func_84(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_44(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_86(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_45(int iParam0)
{
	if (!func_87(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_46(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_47(int iParam0)
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

int func_48(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_88();
	}
	if (func_66() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

bool func_49(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_50(int iParam0, int iParam1)
{
	iVar0 = func_90(iParam1);
	func_91(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_51(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_52(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_53(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_54()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_92(1))
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
	task_play_anim(Global_35, func_93(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_94(1);
	remove_anim_dict(func_93());
}

bool func_55(int iParam0)
{
	return false;
}

int func_56(int iParam0)
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

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_95(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_66() != -1)
	{
		return;
	}
	func_96();
	if (bParam5)
	{
		if (!func_97(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_92(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_98();
	}
	func_99(iVar3, 1, 1, 1, 1, 1);
	func_100(31, 0, 0, 0, 0);
	func_101(0);
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
			func_100(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_100(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_102(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_58(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

bool func_59(int iParam0, bool bParam1)
{
	switch (func_103(iParam0))
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

void func_60(var uParam0)
{
	func_104(uParam0, 0f);
}

bool func_61(var uParam0)
{
	return func_63(*uParam0, 2);
}

float func_62()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_64(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_65(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_66()
{
	return Global_1572887->f_12;
}

bool func_67(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_68(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_69(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_70(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_71(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_72(int iParam0)
{
	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_73(int iParam0)
{
	return iParam0 != 0;
}

int func_74(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	if (!func_69(iParam0, 2))
	{
		return 0;
	}
	if (func_64(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_65(iParam0)))
	{
		return 1;
	}
	if (func_69(iParam0, 1) && !bParam1)
	{
		func_84(iParam0, 128);
		return 1;
	}
	func_71(iParam0, 129);
	func_72(iParam0);
	_0xfc77c5b44d5ff7c0(func_65(iParam0));
	func_81(iParam0, 0);
	return 1;
}

int func_75(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_76(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_75(iParam1);
	if (iVar0 == -1)
	{
		func_106(iParam0, iParam1, fParam3);
		func_107(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_108(iVar0);
		func_106(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_107(bParam2, fParam3);
		return;
	}
}

void func_77(int iParam0)
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

bool func_78(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_109(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_18(func_45(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_110(iParam0, 1, 0))
	{
		return false;
	}
	if (func_109(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_80(int iParam0)
{
	if (func_111(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_81(int iParam0, int iParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_82(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_83(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if ((func_69(iParam0, 1) && !func_68(iParam0)) && func_70(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_112(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_84(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_85(int iParam0)
{
	if (!func_67(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_113(iParam1))
		{
			func_114(iParam0, 41788943);
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
			func_115(iParam0, 0, 1);
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
			func_116(iParam0, 0);
			bVar0 = true;
		}
		func_117(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_87(int iParam0)
{
	return iParam0 > -1;
}

int func_88()
{
	if (func_66() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_118();
	}
	if (func_66() == -1)
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

void func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_92(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

char* func_93()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_94(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_95(int iParam0)
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

void func_96()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_97(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_119(uParam0, iParam3, iParam2) && !func_120(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_92(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_121(1108822547);
		}
		else
		{
			func_122(1108822547);
		}
	}
	func_123(uParam0, 0, 0);
	func_124(iParam5);
	return true;
}

void func_98()
{
	func_125(&(Global_1946804->f_2776));
	func_94(32768);
	func_126(1108822547, 8, 6);
}

void func_99(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_88()) || bParam5)
		{
			func_127();
		}
	}
	if (func_66() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_128(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_47(Global_40.f_7729);
				Global_1946804->f_1378 = func_47(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_56(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_129(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_130(0, 1);
	}
	func_124(0);
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_131(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_132(Var0);
}

void func_101(int iParam0)
{
	if (func_133(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_134(Var0);
}

void func_102(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_66() != -1;
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
			func_131(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_135(iParam1, 29, bVar4, 1, 0);
			func_135(iParam1, 31, bVar4, 1, 0);
			func_135(iParam1, 30, bVar4, 1, 0);
			func_135(iParam1, 22, bVar4, 1, 0);
			func_135(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_92(32768) && func_136(1108822547, 8)) && func_137(10, iParam3))
	{
		func_138(iParam1, 0, 1);
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
			iVar3 = func_139(iVar1, 1);
			if (func_136(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_137(iVar1, iParam3))
				{
				}
				else if ((func_136(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_136(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_135(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_140(iVar3, 1, 6);
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
								func_135(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_136(iVar3, 1))
							{
								func_126(iVar3, 1, 6);
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

int func_103(int iParam0)
{
	if (!func_141(iParam0))
	{
		return -1;
	}
	return func_142(iParam0);
}

void func_104(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_62() - fParam1);
	func_143(uParam0, 1);
	func_144(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_105(int iParam0)
{
	iVar0 = func_65(iParam0);
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

void func_106(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765->f_337 >= 6)
	{
		return;
	}
	Global_1934765->f_318[Global_1934765->f_337] = iParam0;
	Global_1934765->f_318[Global_1934765->f_337]->f_1 = iParam1;
	Global_1934765->f_318[Global_1934765->f_337]->f_2 = fParam2;
	Global_1934765->f_337++;
}

void func_107(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_145();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_146(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

void func_108(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

bool func_109(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_87(iParam0))
		{
			return false;
		}
	}
	func_147(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	if (func_148(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_148(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_148(iParam0, 4, 1))
	{
		return false;
	}
	if (func_109(iParam0, 33, 1))
	{
		return false;
	}
	if (func_149(iParam0))
	{
		return false;
	}
	if (func_150(iParam0))
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

bool func_111(int iParam0)
{
	return iParam0 != 0;
}

bool func_112(int iParam0, bool bParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_65(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_105(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_65(iParam0));
}

bool func_113(int iParam0)
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

void func_114(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_151(iParam0, iParam1))
		{
			if (func_152(iParam0, iParam1))
			{
				if (func_153(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_53(iParam0);
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

void func_115(int iParam0, int iParam1, bool bParam2)
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

void func_116(int iParam0, bool bParam1)
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

void func_117(int iParam0, int iParam1)
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

int func_118()
{
	return Global_1946804->f_1;
}

bool func_119(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_48(iParam1) != iParam2)
	{
		return false;
	}
	if (func_154(2, iParam1))
	{
		func_155(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_120(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_90(iParam6);
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
		func_157(uParam0, func_156(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_158(iVar3, 1);
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
							if (func_159(iVar3) && func_160(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_161(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_121(int iParam0)
{
	func_126(iParam0, 8, 6);
}

void func_122(int iParam0)
{
	func_140(iParam0, 8, 6);
}

void func_123(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_66() != -1;
	iVar7 = func_162(0);
	if (func_92(32768))
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
			iVar5 = func_139(iVar0, 1);
			if (func_136(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_136(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_163(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_164(uParam0);
				if (iVar3 > 0)
				{
					if (!func_92(524288))
					{
						func_131(524288);
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
							iVar5 = func_139(iVar0, 1);
							if (func_136(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_136(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_163(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_165(iVar0, iParam2);
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
					func_94(524288);
				}
			}
		}
	}
}

void func_124(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_125(var uParam0)
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

void func_126(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_158(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_158(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_158(iParam0, 1)])->f_10 && iParam1));
}

void func_127()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_128(int iParam0)
{
	iVar0 = func_90(0);
	iVar1 = 0;
	func_91(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_129(int iParam0, bool bParam1, int iParam2)
{
	func_166(&(Global_1946804->f_1378), iParam0);
	func_167(2, iParam0, 6);
	if (bParam1)
	{
		func_130(0, 1);
	}
}

void func_130(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_124(0);
	}
	if (bParam0)
	{
		func_131(8);
		func_131(512);
	}
	else
	{
		func_131(8);
		func_131(16);
	}
}

void func_131(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_132(struct<4> Param0)
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
			if (func_168(Param0))
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
			func_169(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_131(8);
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
			if (func_168(Param0))
			{
				return;
			}
			func_169(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_131(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_170(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_134(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_168(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_168(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_169(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_131(8);
}

void func_135(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_139(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_171(iParam4);
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

bool func_136(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_158(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_137(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_136(1108822547, 6))
	{
		if (bParam2)
		{
			func_135(iParam0, iVar0, func_66() != -1, 0, 0);
			func_140(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_126(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_139(int iParam0, int iParam1)
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

void func_140(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_158(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_158(iParam0, 1)])->f_10 || iParam1);
}

bool func_141(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_142(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_172(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_145()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_173(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_146(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return 0;
	}
	iVar0 = func_174(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_175(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_176(iParam0, bParam1, fParam2);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_148(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_87(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_149(int iParam0)
{
	return func_148(iParam0, 16, 1);
}

bool func_150(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_151(int iParam0, int iParam1)
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

bool func_152(int iParam0, int iParam1)
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

bool func_153(int iParam0, int iParam1)
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
	if (!func_151(iParam0, iVar0))
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

bool func_154(int iParam0, int iParam1)
{
	if (func_66() == -1)
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

void func_155(var uParam0, int iParam1)
{
	if (func_66() == -1)
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

int func_156(int iParam0)
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

void func_157(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_177(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_139(iVar0, 1);
			if (func_137(iVar0, iParam1))
			{
				vVar4 = { func_178(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_136(iVar7, 4))
				{
					func_126(iVar7, 4, 6);
				}
			}
			else
			{
				func_140(iVar7, 4, 6);
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

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_66() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_91(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_160(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_161(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_179(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_137(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_165(iVar1, iVar3);
		}
	}
	if (func_180(-1586649372) && func_137(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_165(iVar1, iVar3);
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
						func_165(iVar1, iVar3);
					}
				}
			}
			func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_181(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_181(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_181(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_165(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_179(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_182(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_179(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_183(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
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
						func_165(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_182(&(Global_1946804->f_1497.f_1[iVar1])) || func_183(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
			}
			switch (func_179(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_179(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_179(&(uParam0->f_1[iVar1])) || func_183(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_162(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_118();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_158(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_92(524288))
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

int func_164(var uParam0)
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

void func_165(int iParam0, int iParam1)
{
	func_184(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_166(var uParam0, int iParam1)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_185(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_186(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (func_66() == -1)
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

bool func_168(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_169(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_170(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_134(Var0);
}

int func_171(int iParam0)
{
	iVar0 = func_179(iParam0);
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

int func_172(int iParam0)
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

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		case -1324765740:
			return 4;
		case -1119640448:
			return 6;
		case -1015925347:
			return 8;
		case -857562377:
			return 7;
		case -579939614:
			return 10;
		case -193557170:
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case 54488187:
			return 2;
		case 100010212:
			return 11;
		case 679418883:
			return 0;
		case 880414984:
			return 12;
		case 1077154516:
			return 1;
		case 1620037762:
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

int func_175(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_176(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_174(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_187(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_187(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_187(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_175(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

bool func_177(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_178(int iParam0, int iParam1)
{
	if (func_66() == -1)
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

int func_179(int iParam0)
{
	if (!func_188(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_180(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_158(iParam0, 1)] != &Global_1946804->f_57[func_158(iParam0, 1)];
}

void func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_165(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_165(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_165(iVar2, iVar0);
		}
	}
}

bool func_182(int iParam0)
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

bool func_183(int iParam0, int iParam1)
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

void func_184(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_189(uParam0, 1))
	{
		func_190(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_186(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

int func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		case -1439599467:
			return 23;
		case -1317052143:
			return 12;
		case -1233681761:
			return 19;
		case -1148613331:
			return 9;
		case -702816767:
			return 3;
		case -416908843:
			return 13;
		case -273223690:
			return 15;
		case -173507739:
			return 6;
		case 0:
			return 22;
		case 212278652:
			return 14;
		case 433385945:
			return 10;
		case 603685163:
			return 17;
		case 669657108:
			return 0;
		case 725623432:
			return 21;
		case 821931868:
			return 1;
		case 839715153:
			return 7;
		case 1420204096:
			return 11;
		case 1500834021:
			return 8;
		case 1632247697:
			return 18;
		case 1679686673:
			return 16;
		case 1974067816:
			return 5;
		case 2082228755:
			return 20;
		case 2137137442:
			return 4;
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

bool func_188(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_190(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

