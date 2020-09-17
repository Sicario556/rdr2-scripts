void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&uLocal_133);
	}
	while ((!func_2(1) && !func_3(32768)) && !func_4(&uLocal_133, &uScriptParam_0))
	{
		func_5(&uLocal_133);
		if (func_6(&uLocal_133))
		{
		}
		else
		{
			wait(0);
		}
	}
	func_1(&uLocal_133);
}

void func_1(var uParam0)
{
	func_7(uParam0);
	func_8(uParam0);
	func_9(uParam0->f_1, 4096);
	if (uParam0->f_236)
	{
		_0x93624b36e8851b42(get_player_index());
	}
	func_9(uParam0->f_1, 65536);
	uParam0->f_237 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(&(uParam0->f_24[iVar0])))
		{
			_delete_anim_scene(&(uParam0->f_24[iVar0]));
		}
		iVar0++;
	}
	func_10(&(uParam0->f_157));
	terminate_this_thread();
}

bool func_2(bool bParam0)
{
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
	return false;
}

bool func_3(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_4(var uParam0, var uParam1)
{
	bVar0 = func_11(uParam0, uParam1);
	if (_does_volume_exist(Global_1935369->f_5[uParam0->f_1]->f_4))
	{
		if (is_entity_in_volume(player_ped_id(), Global_1935369->f_5[uParam0->f_1]->f_4, true, 0))
		{
			if (!func_12(uParam0->f_1, 65536))
			{
				func_13(uParam0->f_1, 65536);
				iVar1 = func_14(*uParam0);
				iVar2 = func_15(iVar1);
				iVar3 = func_16(*uParam0);
				_0x775b2ed944e44973(func_17(iVar2), func_18(iVar1), func_19(iVar3), uParam0->f_2);
			}
		}
		else if (func_12(uParam0->f_1, 65536))
		{
			func_9(uParam0->f_1, 65536);
			_0xf78e669fdc202e73(0, 0);
		}
	}
	if (func_12(uParam0->f_1, 65536))
	{
		uParam0->f_224 = func_20(&(uParam0->f_624), -1, 0);
	}
	if (func_12(uParam0->f_1, 2097152))
	{
		func_21(&(uParam0->f_624));
		func_20(&(uParam0->f_624), -1, 0);
		func_9(uParam0->f_1, 2097152);
	}
	if (bVar0)
	{
		if (!func_22(33, 4))
		{
			func_9(uParam0->f_1, 1024);
		}
		if (uParam0->f_5 > 1)
		{
			set_ped_reset_flag(uParam0->f_13, 49, true);
		}
		if (uParam0->f_5 != 23)
		{
			func_23();
		}
	}
	else if (!func_12(uParam0->f_1, 4194304))
	{
		func_13(uParam0->f_1, 1024);
	}
	bVar4 = is_ped_fleeing(uParam0->f_13);
	if (!func_12(uParam0->f_1, 16777216) && bVar4)
	{
		func_13(uParam0->f_1, 16777216);
	}
	if ((((((((uParam0->f_5 == 24 || uParam0->f_5 == 8) && func_12(uParam0->f_1, 65536)) && !func_12(uParam0->f_1, 16777216)) && func_24(uParam0->f_13, 0)) && func_25(*uParam0)) && !func_26(110)) && !func_26(107)) && !func_27(16))
	{
		bVar5 = func_28(&(uParam0->f_250));
		if (is_player_free_aiming_at_entity(get_player_index(), uParam0->f_13) && !func_29(uParam0->f_14, 0))
		{
			if (!bVar5)
			{
				func_30(&(uParam0->f_250), 0);
			}
			else if (func_31(&(uParam0->f_250)))
			{
				func_32(&(uParam0->f_250));
			}
		}
		else if (bVar5)
		{
			func_33(&(uParam0->f_250));
		}
		if ((Local_14.f_59 == 6 || (bVar5 && func_34(&(uParam0->f_250)) > 4f)) || (is_ped_in_combat(Global_35, 0) && is_ped_shooting(Global_35)))
		{
			if (func_29(uParam0->f_14, 0))
			{
				func_35(uParam0->f_14, 0, 1, 0, 1);
			}
			func_36(&(uParam0->f_250));
			stop_current_playing_speech(uParam0->f_13, 0);
			func_37(uParam0);
			func_13(uParam0->f_1, 128);
			uParam0->f_13 = func_38(uParam0->f_14, 0, 0, 0, 1, 1);
			iVar6 = func_39(uParam0);
			if (!func_40(_0xf70f00013a62f866(iVar6)))
			{
				_0xfc3db99c8144cd81(uParam0->f_13, iVar6, 0, 0, 0);
				set_ped_combat_movement(uParam0->f_13, 1);
			}
			_0x8acc0506743a8a5c(uParam0->f_13, 1307780291, 2, -1082130432);
			set_blocking_of_non_temporary_events(uParam0->f_13, true);
			set_ped_combat_attributes(uParam0->f_13, 58, true);
			set_ped_combat_attributes(uParam0->f_13, 5, true);
			set_ped_combat_attributes(uParam0->f_13, 30, true);
			set_ped_combat_attributes(uParam0->f_13, 40, true);
			set_ped_combat_attributes(uParam0->f_13, 67, true);
			func_41(uParam0, 23);
			if (func_42(uParam0->f_238))
			{
				func_43(uParam0->f_238, 0, 1);
			}
			return false;
		}
	}
	iVar7 = func_14(*uParam0);
	iVar8 = func_15(iVar7);
	switch (uParam0->f_5)
	{
		case 0:
			func_44(uParam0, uParam1);
			func_45(&(uParam0->f_624), 8);
			func_46(&(uParam0->f_624), 0);
			break;
		case 1:
			if (func_47(uParam0))
			{
				func_48(uParam0);
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (func_12(uParam0->f_1, 65536))
			{
				func_49(uParam0);
			}
			break;
		case 3:
			if (func_50(uParam0))
			{
				func_41(uParam0, 4);
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				func_41(uParam0, 5);
			}
			break;
		case 5:
			if (func_52(uParam0))
			{
				if (func_42(uParam0->f_238))
				{
					func_43(uParam0->f_238, 1, 1);
				}
				func_53(&(uParam0->f_624), 8);
				func_46(&(uParam0->f_624), 1);
				func_54(&(uParam0->f_624));
				if (&Global_1935369->f_5[uParam0->f_1])
				{
					func_41(uParam0, 8);
				}
				else
				{
					func_45(&(uParam0->f_624), 8);
					func_46(&(uParam0->f_624), 0);
					func_55(&(uParam0->f_624));
					func_20(&(uParam0->f_624), -1, 0);
					func_41(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_12(uParam0->f_1, 65536))
			{
				func_53(&(uParam0->f_624), 8);
				func_46(&(uParam0->f_624), 1);
				func_56();
				func_41(uParam0, 8);
			}
			break;
		case 8:
			if (func_57() != -1 && !get_ped_config_flag(uParam0->f_13, 297, true))
			{
				set_ped_config_flag(uParam0->f_13, 297, true);
			}
			if (func_42(uParam0->f_22))
			{
				func_58(&(uParam0->f_22), 1, 1);
			}
			vVar9 = { get_entity_coords(uParam0->f_13, true, false) };
			if (absf((vVar9.z - Global_36.f_2)) > 1.5f)
			{
				func_59(&(uParam0->f_624));
			}
			bVar12 = _0xec7e480ff8bd0bed(Global_35);
			if (bVar12 && func_60(uParam0->f_238, 1))
			{
				func_62(func_61(uParam0->f_238), 0);
			}
			else if (!bVar12 && !func_60(uParam0->f_238, 1))
			{
				func_62(func_61(uParam0->f_238), 1);
			}
			if ((func_22(33, 4) || func_63(get_player_index(), 1)) || func_64(&uVar13))
			{
				func_13(uParam0->f_1, 1024);
				func_59(&(uParam0->f_624));
				if (func_42(uParam0->f_238))
				{
					func_43(uParam0->f_238, 0, 1);
				}
			}
			else if (!func_65(uParam0->f_238, 1))
			{
				func_43(uParam0->f_238, 1, 1);
			}
			if ((uParam0->f_266 && func_67(Global_36, func_66(*uParam0)) > 5f) && !is_sphere_visible(func_66(*uParam0), 1.5f))
			{
				if (_does_volume_exist(uParam0->f_239))
				{
					_delete_volume(uParam0->f_239);
				}
				func_68(uParam0);
				uParam0->f_266 = 0;
			}
			if (!func_12(uParam0->f_1, 65536))
			{
				func_45(&(uParam0->f_624), 8);
				func_46(&(uParam0->f_624), 0);
				_display_hud_component(-1347445791);
				iVar14 = -15;
				if (Global_1935436->f_18.f_11 != 0)
				{
					iVar14 = func_69();
					func_70(&iVar14, 0, 0, 8, 0, 0, 0);
					func_71(func_14(*uParam0), 256);
				}
				func_72(Local_14.f_1, iVar14);
				func_41(uParam0, 7);
				return false;
			}
			uParam0->f_256++;
			if (!bVar0)
			{
				if (func_42(uParam0->f_238))
				{
					func_58(&(uParam0->f_238), 1, 1);
				}
				func_45(&(uParam0->f_624), 8);
				uParam0->f_260 = uParam0->f_259;
				func_41(uParam0, 24);
				uParam0->f_256 = 0;
				func_46(&(uParam0->f_624), 0);
				if (func_73(27))
				{
					if (func_42(uParam0->f_238))
					{
						func_58(&(uParam0->f_238), 1, 1);
					}
				}
				_display_hud_component(-1347445791);
				return false;
			}
			if (&Global_1935369->f_5[uParam0->f_1])
			{
				_hide_hud_component(-1347445791);
			}
			else
			{
				_display_hud_component(-1347445791);
			}
			if (func_74(uParam0, uParam1))
			{
				if (func_42(uParam0->f_238))
				{
					func_62(func_61(uParam0->f_238), 0);
				}
				if (uParam0->f_229)
				{
					func_41(uParam0, 10);
					Global_1935369->f_51 = 1;
					return false;
				}
				else
				{
					func_41(uParam0, 10);
				}
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_35);
				Global_1935369->f_51 = 1;
			}
			if (func_75(uParam0))
			{
				switch (uParam0->f_225)
				{
					case 1:
					case 3:
						uParam0->f_212 = { *uParam0->f_24[4] };
						func_13(uParam0->f_1, 4);
						func_76(uParam0, 0);
						uParam0->f_267 = func_77(uParam0, uParam0->f_225);
						uParam0->f_267.f_2 = 6f;
						if (func_78(uParam0->f_267, 0))
						{
							func_79(&(uParam0->f_267));
						}
						iVar15 = &uParam0->f_624.f_332[2];
						break;
					case 2:
						uParam0->f_212 = { *uParam0->f_24[5] };
						func_13(uParam0->f_1, 8);
						func_76(uParam0, 0);
						uParam0->f_267 = func_77(uParam0, uParam0->f_225);
						uParam0->f_267.f_2 = 1f;
						if (func_78(uParam0->f_267, 0))
						{
							func_79(&(uParam0->f_267));
						}
						if (*uParam0 == 2)
						{
							iVar15 = 100;
						}
						else
						{
							iVar15 = &uParam0->f_624.f_332[3];
						}
						break;
				}
				func_80(iVar15, 0, 0, 1, 1);
				func_81(iVar8, iVar7, uParam0->f_267, 1, iVar15);
				uParam0->f_226 = uParam0->f_225;
				Local_14.f_107 = { uParam0->f_212 };
				uParam0->f_233 = 1;
				func_83(func_82(1328660713), 1);
				func_41(uParam0, 9);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
				func_84(&(uParam0->f_237), 1);
				clear_ped_secondary_task(Global_35);
				if (func_42(uParam0->f_238))
				{
					func_62(func_61(uParam0->f_238), 0);
				}
				uParam0->f_265 = 0;
				func_68(uParam0);
				func_85(0);
				Global_1935369->f_51 = 1;
			}
			break;
		case 9:
			if (func_60(uParam0->f_238, 1))
			{
				func_62(func_61(uParam0->f_238), 0);
			}
			func_59(&(uParam0->f_624));
			set_ped_can_play_gesture_anims(uParam0->f_13, 0, 1);
			set_ped_can_play_ambient_anims(uParam0->f_13, false);
			func_86();
			if (_0x34a0671be613d3d0(uParam0->f_212))
			{
				func_41(uParam0, 22);
				func_85(1);
				reset_anim_scene(uParam0->f_212, 0);
				if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
				{
					load_anim_scene(uParam0->f_212);
				}
				return false;
			}
			if ((uParam0->f_242 > 1 && uParam0->f_242 < 6) && (_0x0c3cb2e600c8977d(Global_35, 1) || !is_ped_using_any_scenario(Global_35)))
			{
				func_58(&(uParam0->f_22), 1, 1);
				func_41(uParam0, 22);
				func_85(1);
				abort_anim_scene(uParam0->f_212, false);
				reset_anim_scene(uParam0->f_212, 0);
				if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
				{
					load_anim_scene(uParam0->f_212);
				}
				return false;
			}
			switch (uParam0->f_242)
			{
				case 0:
					func_87(uParam0);
					_0x541b8576615c33de(uParam0->f_240, uParam0->f_10);
					if (!_does_scenario_point_exist(uParam0->f_7))
					{
						uParam0->f_7 = create_scenario_point(-545460140, uParam0->f_10, uParam0->f_9, 0, 0, 0);
						_0xa7479fb665361edb(uParam0->f_7, 0);
						_0xe69fda40aac3efc0(uParam0->f_7, 0);
						_set_scenario_point_flag(uParam0->f_7, 32, true);
					}
					if (!_does_scenario_point_exist(uParam0->f_8))
					{
						uParam0->f_8 = create_scenario_point(1579488576, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, func_88()), (uParam0->f_9 - 180f), 0, 0, 0);
						_0xa7479fb665361edb(uParam0->f_8, 0);
						_0xe69fda40aac3efc0(uParam0->f_8, 0);
					}
					if (uParam0->f_212.f_2 == 5)
					{
						set_anim_scene_origin(uParam0->f_212, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, 0f, 0f, -0.0035f), 0f, 0f, (uParam0->f_9 - 95f), 2);
					}
					else if (uParam0->f_212.f_2 == 4)
					{
						set_anim_scene_origin(uParam0->f_212, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, 0f, 0f, -0.0035f), 0f, 0f, (uParam0->f_9 - 100f), 2);
					}
					uParam0->f_227 = 1;
					func_13(uParam0->f_1, 2);
					func_76(uParam0, 1);
					break;
				case 1:
					set_ped_reset_flag(Global_35, 202, true);
					if (!_is_anim_scene_started(uParam0->f_212, false))
					{
						func_89(uParam0);
						_0xfdecca06e8b81346(uParam0->f_13);
						if (_does_volume_exist(uParam0->f_241))
						{
							_delete_volume(uParam0->f_241);
						}
						uParam0->f_241 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
						func_90(uParam0->f_241, 0);
						set_blocking_of_non_temporary_events(uParam0->f_13, true);
						start_anim_scene(uParam0->f_212);
						_0x2208438012482a1a(uParam0->f_13, false, false);
						func_76(uParam0, 6);
						_0x4161648394262fdf(Global_36, 2.5f);
						set_gameplay_cam_relative_heading(get_gameplay_cam_relative_heading(), 1f);
						set_gameplay_cam_relative_pitch(get_gameplay_cam_relative_pitch(), 1f);
						if (_does_volume_exist(uParam0->f_240))
						{
							func_91(uParam0->f_240, 0);
							_0xb56d41a694e42e86(uParam0->f_240, 10208, 0, 0, -1, -1, 0);
							_0x18262cafebb5fbe1(uParam0->f_240, 10208, 0, 0, -1, -1, 0);
						}
					}
					break;
				case 6:
					set_ped_reset_flag(Global_35, 202, true);
					if (has_anim_event_fired(Global_35, 1552626522))
					{
						func_92(&(uParam0->f_157), uParam0->f_212, uParam0->f_7);
					}
					if (_is_anim_scene_active(uParam0->f_212))
					{
						func_93(&(uParam0->f_157), &(uParam0->f_212));
					}
					if (!uParam0->f_265 && _get_anim_scene_progress(uParam0->f_212) > 0.15f)
					{
						if (does_entity_exist(&(uParam0->f_157[2])))
						{
							set_entity_visible(&(uParam0->f_157[2]), false);
						}
						uParam0->f_265 = 1;
					}
					if (has_anim_event_fired(Global_35, 264094903))
					{
						uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_35, "p_bottleBeer01x_PH_R_HAND", 1);
						_task_item_interaction_2(Global_35, -24362764, &(uParam0->f_157[5]), -1775366913, 1587785400, 1, 0, -1f);
						uParam0->f_157[5] = 0;
					}
					if (has_anim_event_fired(Global_35, -1763749661))
					{
						if (uParam0->f_212.f_2 == 4)
						{
							sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_ARTHUR";
						}
						else if (uParam0->f_212.f_2 == 5)
						{
							sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A";
						}
						_set_scenario_point_coords(uParam0->f_7, get_offset_from_entity_in_world_coords(Global_35, 0f, 0f, -get_entity_height_above_ground(Global_35)), true);
						_set_scenario_point_heading(uParam0->f_7, get_entity_heading(Global_35), true);
						_task_use_scenario_point(Global_35, uParam0->f_7, sVar16, 0, false, true, 0, false, 0.3f, true);
					}
					if (!_is_anim_scene_started(uParam0->f_212, false) && _0x9c54041bb66bcf9e(Global_35, uParam0->f_7))
					{
						if (uParam0->f_212.f_2 == 4)
						{
							_0x0751d461f06e41ce(player_id(), 42, 1, 1);
							_0x0751d461f06e41ce(player_id(), 8, 0, 1);
							uParam0->f_236 = 1;
						}
						set_blocking_of_non_temporary_events(uParam0->f_13, false);
						func_94(&(uParam0->f_212));
						func_95(uParam0);
						if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
						{
							load_anim_scene(uParam0->f_212);
						}
						func_41(uParam0, 20);
						func_13(uParam0->f_1, 2);
						Global_1935369->f_51 = 0;
					}
					break;
				case 2:
					if (!_0x68821369a2ceadd5(Global_35, -308722001))
					{
						_0xd65fdc686a031c83(Global_35, -308722001, 2f);
						_0x6d07b371e9439019(Global_35);
					}
					if (_0xc488b8c0e52560d8(Global_35))
					{
						func_76(uParam0, 3);
					}
					break;
				case 3:
					if (!_0xc488b8c0e52560d8(Global_35))
					{
						vVar18 = { _get_scenario_point_coords(uParam0->f_8, true) };
						fVar17 = _get_scenario_point_heading(uParam0->f_8, true);
						set_anim_scene_origin(uParam0->f_212, vVar18, 0f, 0f, (fVar17 + 90f), 2);
						func_89(uParam0);
						if (_does_volume_exist(uParam0->f_241))
						{
							_delete_volume(uParam0->f_241);
						}
						uParam0->f_241 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
						func_90(uParam0->f_241, 0);
						set_blocking_of_non_temporary_events(uParam0->f_13, true);
						start_anim_scene(uParam0->f_212);
						_0x2208438012482a1a(uParam0->f_13, false, false);
						func_76(uParam0, 5);
					}
					break;
				case 5:
					if (!uParam0->f_265 && _get_anim_scene_progress(uParam0->f_212) > 0.4f)
					{
						if (does_entity_exist(&(uParam0->f_157[2])))
						{
							set_entity_visible(&(uParam0->f_157[2]), false);
						}
						uParam0->f_265 = 1;
					}
					if (has_anim_event_fired(Global_35, 864365833) && !uParam0->f_234)
					{
						if (uParam0->f_225 == 1 || uParam0->f_225 == 3)
						{
							if (_0x3bbdd6143ff16f98(Global_35, &(uParam0->f_157[5]), "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_ARTHUR", 1))
							{
								uParam0->f_234 = 1;
							}
						}
						else if (uParam0->f_225 == 2)
						{
							if (_0x3bbdd6143ff16f98(Global_35, &(uParam0->f_157[11]), "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
							{
								uParam0->f_234 = 1;
							}
						}
					}
					if ((has_anim_event_fired(uParam0->f_13, 1179642452) || !_is_anim_scene_started(uParam0->f_212, false)) && !_0x68821369a2ceadd5(Global_35, uParam0->f_261))
					{
						_0xd65fdc686a031c83(Global_35, uParam0->f_261, 4f);
						_0x6d07b371e9439019(Global_35);
					}
					if (!_is_anim_scene_started(uParam0->f_212, false) && uParam0->f_234)
					{
						set_blocking_of_non_temporary_events(uParam0->f_13, false);
						reset_anim_scene(uParam0->f_212, 0);
						if (uParam0->f_225 == 1)
						{
							uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_35, "p_bottleBeer01x_PH_R_HAND", 1);
							_task_item_interaction_2(Global_35, -24362764, &(uParam0->f_157[5]), -1775366913, 1587785400, 1, 0, -1f);
							set_object_as_no_longer_needed(uParam0->f_157[5]);
							uParam0->f_157[5] = 0;
							_0x0751d461f06e41ce(player_id(), 42, 1, 1);
							_0x0751d461f06e41ce(player_id(), 8, 0, 1);
							uParam0->f_236 = 1;
						}
						func_95(uParam0);
						if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
						{
							load_anim_scene(uParam0->f_212);
						}
						func_13(uParam0->f_1, 2);
						Global_1935369->f_51 = 0;
						func_41(uParam0, 20);
					}
					break;
			}
			break;
		case 10:
			if (uParam0->f_229)
			{
				_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_35);
				uParam0->f_16 = create_camera_with_params(26379945, func_96(*uParam1), func_97(*uParam1), 30f, false, 2);
				uParam0->f_17 = create_camera_with_params(26379945, _get_object_offset_from_coords(get_cam_coord(uParam0->f_16), 0f, 0f, 0f, 0.75f), func_97(*uParam1), func_98(*uParam1), false, 2);
				set_cam_active(uParam0->f_16, true);
				render_script_cams(true, false, 3000, true, false, 0);
				set_player_control(player_id(), false, 0, false);
				display_radar(false);
			}
			if (is_valid_interior(get_interior_at_coords(func_99(*uParam0))))
			{
				pin_interior_in_memory(get_interior_at_coords(func_99(*uParam0)));
			}
			func_30(&(uParam0->f_246), 1);
			func_41(uParam0, 12);
			break;
		case 12:
			enable_control_action(0, 782960533, false);
			if (!uParam0->f_229)
			{
				if (uParam0->f_225 == 4)
				{
					uParam0->f_212 = { *uParam0->f_24[1] };
					func_13(uParam0->f_1, 32);
					func_100(33, 1);
					iVar21 = &uParam0->f_624.f_332[1];
				}
				else if (uParam0->f_225 == 5)
				{
					func_13(uParam0->f_1, 64);
					func_100(33, 1);
					iVar21 = &uParam0->f_624.f_332[0];
					uParam0->f_212 = { *uParam0->f_24[3] };
				}
				Local_14.f_107 = { uParam0->f_212 };
				uParam0->f_232 = 1;
			}
			if (uParam0->f_229 && !uParam0->f_231)
			{
				uParam0->f_231 = 1;
				return false;
			}
			if (!func_42(uParam0->f_19))
			{
				uParam0->f_19 = func_102(func_101(0, *uParam0), -719620017, Global_35, 3, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_103(uParam0->f_19, func_101(0, *uParam0), &(uParam0->f_624.f_332[1]), 1);
				if (func_104(1) < &uParam0->f_624.f_332[1])
				{
					func_43(uParam0->f_19, 0, 1);
				}
			}
			if (!func_42(uParam0->f_20) && *uParam0 != 6)
			{
				uParam0->f_20 = func_102(func_101(1, *uParam0), -163964935, Global_35, 3, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_103(uParam0->f_20, func_101(1, *uParam0), &(uParam0->f_624.f_332[0]), 1);
				if (func_104(1) < &uParam0->f_624.f_332[0])
				{
					func_43(uParam0->f_20, 0, 1);
				}
			}
			if (!func_42(uParam0->f_21))
			{
				uParam0->f_21 = func_105("CANCEL_ORDER", 992265328, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (func_106(uParam0->f_19, 1))
			{
				uParam0->f_225 = 4;
				if (uParam0->f_229)
				{
					func_93(&(uParam0->f_157), &(uParam0->f_212));
					uParam0->f_212 = { *uParam0->f_24[0] };
					Local_14.f_107 = { uParam0->f_212 };
				}
				func_13(uParam0->f_1, 32);
				func_100(33, 1);
				iVar21 = &uParam0->f_624.f_332[1];
				uParam0->f_232 = 1;
			}
			if (func_106(uParam0->f_20, 1))
			{
				uParam0->f_225 = 5;
				if (uParam0->f_229)
				{
					func_93(&(uParam0->f_157), &(uParam0->f_212));
					uParam0->f_212 = { *uParam0->f_24[2] };
					Local_14.f_107 = { uParam0->f_212 };
				}
				func_13(uParam0->f_1, 64);
				func_100(33, 1);
				iVar21 = &uParam0->f_624.f_332[0];
				uParam0->f_232 = 1;
			}
			if (uParam0->f_232)
			{
				func_80(iVar21, 0, 0, 1, 1);
				func_58(&(uParam0->f_19), 1, 1);
				func_58(&(uParam0->f_20), 1, 1);
				func_58(&(uParam0->f_21), 1, 1);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (uParam0->f_225 == 5)
				{
					uParam0->f_267 = func_77(uParam0, uParam0->f_225);
					uParam0->f_267.f_2 = 6f;
					uParam0->f_445 = -339970078;
					uParam0->f_445.f_2 = 6f;
					if (func_78(uParam0->f_267, 0))
					{
						func_79(&(uParam0->f_267));
					}
					if (func_78(uParam0->f_445, 0))
					{
						func_79(&(uParam0->f_445));
					}
				}
				else if (uParam0->f_225 == 4)
				{
					uParam0->f_267 = func_77(uParam0, uParam0->f_225);
					uParam0->f_267.f_2 = 10f;
					if (func_78(uParam0->f_267, 0))
					{
						func_79(&(uParam0->f_267));
					}
				}
				func_81(iVar8, iVar7, uParam0->f_267, 1, iVar21);
				uParam0->f_267.f_1 = 0;
				if (uParam0->f_229 || uParam0->f_235)
				{
					if (uParam0->f_212.f_2 == 0 || uParam0->f_212.f_2 == 1)
					{
						uParam0->f_212.f_6 = { _get_object_offset_from_coords(uParam0->f_212.f_6, uParam0->f_212.f_9.f_2, 0f, -0.25f, 0f) };
					}
					set_anim_scene_origin(uParam0->f_212, uParam0->f_212.f_6, uParam0->f_212.f_9, 2);
				}
				else
				{
					if (*uParam0 == 0 || *uParam0 == 6)
					{
						_set_anim_scene_playback_list_bool(uParam0->f_212, &(uParam0->f_212.f_3[1]), true);
					}
					set_anim_scene_origin(uParam0->f_212, _get_object_offset_from_coords(func_66(*uParam0), func_107(*uParam0), 0f, 0f, 0f), 0f, 0f, func_107(*uParam0), 2);
					set_anim_scene_int(uParam0->f_212, "CameraIndex", func_108(*uParam0), false);
				}
				func_68(uParam0);
				if (!_does_volume_exist(uParam0->f_239))
				{
					uParam0->f_239 = _create_volume_box_with_custom_name(func_109(*uParam1), 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, "Food_Order_Blocking_Volume");
					func_91(uParam0->f_239, 0);
					_0xb56d41a694e42e86(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
					_0x18262cafebb5fbe1(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
				}
				else
				{
					func_91(uParam0->f_239, 0);
					_0xb56d41a694e42e86(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
					_0x18262cafebb5fbe1(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
				}
				func_13(uParam0->f_1, 2);
				func_83(func_82(-1081285383), 1);
				func_30(&(uParam0->f_246), 1);
				func_41(uParam0, 14);
			}
			else if (func_110(uParam0->f_21, 1))
			{
				func_62(func_61(uParam0->f_238), 1);
				set_player_control(player_id(), true, 0, false);
				render_script_cams(false, false, 3000, true, false, 0);
				display_radar(true);
				func_58(&(uParam0->f_21), 1, 1);
				func_58(&(uParam0->f_19), 1, 1);
				func_58(&(uParam0->f_20), 1, 1);
				func_41(uParam0, 22);
			}
			break;
		case 14:
			disable_all_control_actions(0);
			if (uParam0->f_229 || uParam0->f_235)
			{
				if (!is_entity_dead(uParam0->f_13))
				{
					_0x2208438012482a1a(uParam0->f_13, false, false);
				}
				if (!_is_anim_scene_started(uParam0->f_212, false))
				{
					if (_does_volume_exist(uParam0->f_241))
					{
						_delete_volume(uParam0->f_241);
					}
					uParam0->f_241 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
					func_90(uParam0->f_241, 0);
					set_blocking_of_non_temporary_events(uParam0->f_13, true);
					start_anim_scene(uParam0->f_212);
				}
				uParam0->f_264 = 1;
				func_41(uParam0, 16);
			}
			break;
		case 16:
			disable_all_control_actions(0);
			if (uParam0->f_264)
			{
				render_script_cams(false, false, 3000, true, false, 0);
				func_89(uParam0);
				if (does_cam_exist(uParam0->f_16))
				{
					destroy_cam(uParam0->f_16, false);
				}
				if (does_cam_exist(uParam0->f_17))
				{
					destroy_cam(uParam0->f_17, false);
				}
				uParam0->f_264 = 0;
			}
			set_ped_reset_flag(Global_35, 202, true);
			if (has_anim_event_fired(Global_35, -392967985))
			{
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 992265328, false);
			}
			if (_is_anim_scene_finished(uParam0->f_212, false))
			{
				func_111(&(uParam0->f_6), uParam0->f_212.f_2, uParam0->f_23, *uParam0);
				func_92(&(uParam0->f_157), uParam0->f_212, uParam0->f_6);
				set_blocking_of_non_temporary_events(uParam0->f_13, false);
				func_94(&(uParam0->f_212));
				if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
				{
					load_anim_scene(uParam0->f_212);
				}
				uParam0->f_262 = uParam0->f_212.f_2;
				if (uParam0->f_212.f_2 == 1 || uParam0->f_212.f_2 == 0)
				{
					attach_entity_to_entity(&(uParam0->f_157[0]), Global_35, get_ped_bone_index(Global_35, 37709), 0f, -0.1f, 0f, 0f, 0f, -90f, false, false, false, false, 2, true, false, false);
					set_anim_scene_entity(&(uParam0->f_24[10]), "p_plate17x_PH_L_HAND", &(uParam0->f_157[1]), 0);
				}
				set_entity_visible(&(uParam0->f_157[12]), true);
				uParam0->f_212 = { *uParam0->f_24[10] };
				if (uParam0->f_262 == 1 || uParam0->f_262 == 0)
				{
					set_anim_scene_origin(uParam0->f_212, _get_object_offset_from_coords(func_66(*uParam0), func_107(*uParam0), 0f, 0f, 0f), 0f, 0f, func_107(*uParam0), 2);
				}
				else
				{
					set_anim_scene_origin(uParam0->f_212, _get_object_offset_from_coords(func_66(*uParam0), func_107(*uParam0), 0f, 0f, 0f), 0f, 0f, func_107(*uParam0), 2);
				}
				start_anim_scene(uParam0->f_212);
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				func_13(uParam0->f_1, 2);
				Global_1935369->f_51 = 0;
				uParam0->f_264 = 1;
				func_112(uParam0);
				_0x669655ffb29ef1a9(&(uParam0->f_157[1]), 0, "Stew_Fill", 0f);
				set_entity_visible(&(uParam0->f_157[10]), false);
				set_entity_visible(&(uParam0->f_157[11]), false);
				if (uParam0->f_262 == 3 || uParam0->f_262 == 2)
				{
					set_entity_visible(&(uParam0->f_157[5]), false);
					set_entity_visible(&(uParam0->f_157[3]), false);
					set_entity_visible(&(uParam0->f_157[6]), false);
					set_entity_visible(&(uParam0->f_157[7]), false);
					set_entity_visible(&(uParam0->f_157[8]), false);
				}
				func_41(uParam0, 19);
				return false;
			}
			break;
		case 20:
			func_113();
			func_59(&(uParam0->f_624));
			func_114(uParam0);
			if (_0xec7e480ff8bd0bed(Global_35))
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, -1292666904, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
			bVar22 = _0xc488b8c0e52560d8(Global_35);
			if (bVar22)
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, 129547951, false);
			}
			if (is_ped_active_in_scenario(Global_35, 1))
			{
				return false;
			}
			if (uParam0->f_212.f_2 == 4)
			{
				uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_35, "p_bottleBeer01x_PH_R_HAND", 1);
				if (does_entity_exist(&(uParam0->f_157[5])))
				{
					delete_object(uParam0->f_157[5]);
				}
			}
			uParam0->f_157[11] = _0x4d0d2e3d8bc000eb(Global_35, "p_shotGlass01x_PH_L_Hand", 1);
			func_85(1);
			func_41(uParam0, 22);
			break;
		case 21:
			bVar23 = _0xc488b8c0e52560d8(Global_35);
			if (bVar23)
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, 129547951, false);
				disable_control_action(0, -124244224, false);
			}
			func_113();
			if (uParam0->f_263)
			{
				if (func_115(Global_35, "Player_Sick_Drinking_Cough", -128067431, 0, 1, 0, 0, 1))
				{
					uParam0->f_263 = 0;
				}
			}
			if (func_74(uParam0, uParam1))
			{
				if (func_60(uParam0->f_238, 1))
				{
					func_62(func_61(uParam0->f_238), 0);
				}
				if (uParam0->f_229)
				{
					func_41(uParam0, 10);
					return false;
				}
				else
				{
					func_41(uParam0, 10);
				}
				func_58(&(uParam0->f_22), 1, 1);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_35);
				func_85(1);
				Global_1935369->f_51 = 1;
			}
			if (func_75(uParam0))
			{
				switch (uParam0->f_225)
				{
					case 1:
					case 3:
						uParam0->f_212 = { *uParam0->f_24[6] };
						func_13(uParam0->f_1, 4);
						uParam0->f_261 = 1406647490;
						if (uParam0->f_226 == 2)
						{
							uParam0->f_212 = { *uParam0->f_24[8] };
						}
						uParam0->f_267 = func_77(uParam0, uParam0->f_225);
						uParam0->f_267.f_2 = 6f;
						if (func_78(uParam0->f_267, 0))
						{
							func_79(&(uParam0->f_267));
						}
						iVar24 = &uParam0->f_624.f_332[2];
						break;
					case 2:
						uParam0->f_261 = -1017213009;
						uParam0->f_212 = { *uParam0->f_24[7] };
						func_13(uParam0->f_1, 8);
						if (uParam0->f_226 == 1 || uParam0->f_226 == 3)
						{
							uParam0->f_212 = { *uParam0->f_24[9] };
						}
						uParam0->f_267 = func_77(uParam0, uParam0->f_225);
						uParam0->f_267.f_2 = 1f;
						if (func_78(uParam0->f_267, 0))
						{
							func_79(&(uParam0->f_267));
						}
						if (*uParam0 == 2)
						{
							iVar24 = 100;
						}
						else
						{
							iVar24 = &uParam0->f_624.f_332[3];
						}
						break;
				}
				func_80(iVar24, 0, 0, 1, 1);
				func_81(iVar8, iVar7, uParam0->f_267, 1, iVar24);
				func_83(func_82(1328660713), 1);
				Local_14.f_107 = { uParam0->f_212 };
				func_9(uParam0->f_1, 4096);
				uParam0->f_226 = uParam0->f_225;
				uParam0->f_265 = 0;
				Global_1935369->f_51 = 1;
				func_13(uParam0->f_1, 2);
				func_76(uParam0, 2);
				func_41(uParam0, 9);
			}
			if (is_ped_active_in_scenario(Global_35, 1))
			{
				return false;
			}
			func_85(1);
			func_41(uParam0, 22);
			break;
		case 19:
			disable_all_control_actions(0);
			if (uParam0->f_264)
			{
				if (uParam0->f_262 == 1 || uParam0->f_262 == 0)
				{
					func_116(&fVar25, &fVar26, *uParam0);
					set_gameplay_cam_relative_heading(fVar25, 1f);
					set_gameplay_cam_relative_pitch(fVar26, 1f);
				}
				else
				{
					func_117(&fVar25, &fVar26, *uParam0);
					set_gameplay_cam_relative_heading(fVar25, 1f);
					set_gameplay_cam_relative_pitch(fVar26, 1f);
				}
				uParam0->f_264 = 0;
			}
			if (has_anim_event_fired(Global_35, 1698491282))
			{
				detach_entity(&(uParam0->f_157[0]), false, true);
				func_118(uParam0->f_157[0]->f_3, &vVar27, &uVar30, _get_scenario_point_heading(uParam0->f_6, true));
				set_entity_coords(&(uParam0->f_157[0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar27), true, false, true, true);
			}
			if (_is_anim_scene_finished(uParam0->f_212, false))
			{
				func_94(&(uParam0->f_212));
				if (!_is_anim_scene_loaded(uParam0->f_212, true, false))
				{
					load_anim_scene(uParam0->f_212);
				}
				uParam0->f_235 = 0;
				uParam0->f_266 = 1;
				uParam0->f_267.f_2 = 1f;
				uParam0->f_445.f_2 = 1f;
				func_119(&(uParam0->f_267), 1);
				if (uParam0->f_262 != 1 && uParam0->f_262 != 0)
				{
					func_119(&(uParam0->f_445), 1);
				}
				func_7(uParam0);
				func_41(uParam0, 22);
			}
			break;
		case 22:
			if (!func_120(Global_35, -76381094))
			{
				uParam0->f_245 = 0;
				if (_does_scenario_point_exist(uParam0->f_8))
				{
					_delete_scenario_point(uParam0->f_8);
				}
				if (_does_scenario_point_exist(uParam0->f_7))
				{
					_delete_scenario_point(uParam0->f_7);
				}
				if (func_60(uParam0->f_238, 1))
				{
					func_62(func_61(uParam0->f_238), 0);
				}
				uParam0->f_229 = 0;
				uParam0->f_231 = 0;
				uParam0->f_232 = 0;
				Global_1935369->f_51 = 0;
				uParam0->f_227 = 0;
				func_58(&(uParam0->f_22), 1, 1);
				set_ped_config_flag(uParam0->f_13, 315, false);
				uParam0->f_964 = _0xb223249b7798eeed(Global_35, 798764373, 1, 1558937268);
				func_41(uParam0, 4);
				return false;
			}
			else
			{
				func_59(&(uParam0->f_624));
				disable_control_action(0, 129547951, false);
				disable_control_action(0, -1292666904, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
			break;
		case 24:
			func_59(&(uParam0->f_624));
			if (_does_anim_scene_exist(uParam0->f_212) && _is_anim_scene_started(uParam0->f_212, false))
			{
				func_121(uParam0);
				func_58(&(uParam0->f_21), 1, 1);
				func_58(&(uParam0->f_19), 1, 1);
				func_58(&(uParam0->f_20), 1, 1);
				func_41(uParam0, 25);
			}
			if (bVar0)
			{
				if (uParam0->f_260 == uParam0->f_259)
				{
					if (func_122(*uParam1))
					{
						if (!func_42(uParam0->f_238))
						{
							uParam0->f_238 = func_123("SERVICE_ORDER", -473983589, func_99(*uParam1), 1.2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						}
					}
					uParam0->f_624 = 0;
					func_53(&(uParam0->f_624), 8);
					func_46(&(uParam0->f_624), 1);
					set_ped_config_flag(uParam0->f_13, 315, false);
					func_41(uParam0, 8);
					return false;
				}
			}
			else
			{
				uParam0->f_260 = uParam0->f_259;
			}
			break;
		case 23:
			if (!func_24(uParam0->f_13, 0))
			{
				return false;
			}
			func_59(&(uParam0->f_624));
			if (((!func_124(uParam0->f_237, 4) && !func_120(uParam0->f_13, 242628503)) && !_0x916b8e075abc8b4e(uParam0->f_13, 1)) && !is_any_speech_playing(uParam0->f_13))
			{
				_0x802092b07e3b1eea(uParam0->f_13, func_125(uParam0), 0);
				_0xfdecca06e8b81346(uParam0->f_13);
				task_perform_sequence(uParam0->f_13, uParam0->f_211);
				func_84(&(uParam0->f_237), 4);
			}
			if (has_anim_event_fired(uParam0->f_13, 1880282835) && !func_124(uParam0->f_237, 8))
			{
				task_duck(uParam0->f_13, -1);
				force_ped_motion_state(uParam0->f_13, 1140525470, false, 1, false);
				func_84(&(uParam0->f_237), 8);
			}
			if (func_126(392538360))
			{
				if (func_124(uParam0->f_237, 8) && _give_weapon_to_ped_2(uParam0->f_13, 392538360, 1000, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false) == 392538360)
				{
					func_127(&(uParam0->f_237), 8);
					set_current_ped_weapon(uParam0->f_13, 392538360, true, 0, true, false);
				}
			}
			else if (func_126(1845102363))
			{
				if (func_124(uParam0->f_237, 1845102363) && _give_weapon_to_ped_2(uParam0->f_13, 392538360, 1000, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false) == 1845102363)
				{
					func_127(&(uParam0->f_237), 1845102363);
					set_current_ped_weapon(uParam0->f_13, 392538360, true, 0, true, false);
				}
			}
			else if (func_124(uParam0->f_237, 8) && _give_weapon_to_ped_2(uParam0->f_13, 379542007, 1000, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false) == 379542007)
			{
				func_127(&(uParam0->f_237), 8);
				set_current_ped_weapon(uParam0->f_13, 379542007, true, 0, true, false);
			}
			if ((!func_124(uParam0->f_237, 8) && get_script_task_status(uParam0->f_13, 242628503, true) == 8) && !func_120(uParam0->f_13, 780511057))
			{
				if (!does_blip_exist(uParam0->f_623))
				{
					uParam0->f_623 = _blip_add_for_entity(831283580, uParam0->f_13);
				}
				task_combat_ped(uParam0->f_13, Global_35, 0, 16);
			}
			break;
		case 25:
			func_8(uParam0);
			func_41(uParam0, 0);
			break;
	}
	return false;
}

void func_5(var uParam0)
{
	Local_14.f_103 = *uParam0;
	Local_14.f_104 = uParam0->f_1;
	Local_14.f_105 = uParam0->f_5;
	Local_14.f_106 = uParam0->f_225;
	Local_14.f_107 = { uParam0->f_212 };
}

bool func_6(var uParam0)
{
	switch (uParam0->f_258)
	{
		case 0:
			if (vdist2(Global_36, uParam0->f_2) > (33f * 33f))
			{
				return true;
			}
			break;
		case 1:
			if (func_128() == -1)
			{
				return true;
			}
			break;
		case 2:
			if (does_entity_exist(uParam0->f_13) && is_entity_dead(uParam0->f_13))
			{
				return true;
			}
			break;
		case 3:
			if (func_129(&Global_1935630, 2097152))
			{
				return true;
			}
			break;
	}
	uParam0->f_258++;
	if (uParam0->f_258 > 3)
	{
		uParam0->f_258 = 0;
	}
	return false;
}

void func_7(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_6))
	{
		_delete_scenario_point(uParam0->f_6);
	}
}

void func_8(var uParam0)
{
	if (uParam0->f_229)
	{
		if (!is_entity_dead(uParam0->f_13))
		{
			clear_ped_tasks(uParam0->f_13, 1, 0);
		}
		if (func_57() == -1)
		{
			_0xa2b18ff8d39f6d87(func_130(uParam0->f_14));
			if (func_131(uParam0->f_14))
			{
				func_35(uParam0->f_14, 0, 1, 0, 0);
			}
		}
	}
	func_21(&(uParam0->f_624));
	_0x66bc28e50e85270e(uParam0->f_964);
	if (_does_scenario_point_exist(uParam0->f_8))
	{
		_delete_scenario_point(uParam0->f_8);
	}
	if (_does_scenario_point_exist(uParam0->f_7))
	{
		_delete_scenario_point(uParam0->f_7);
	}
	if (func_57() != -1)
	{
		enable_control_action(0, -128997553, true);
		set_player_lockon(player_id(), true);
	}
	if (_does_volume_exist(uParam0->f_241))
	{
		_delete_volume(uParam0->f_241);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_94(uParam0->f_24[iVar0]);
		iVar0++;
	}
	func_85(1);
	func_9(uParam0->f_1, 128);
	clear_sequence_task(&(uParam0->f_211));
	_display_hud_component(-1347445791);
	func_132(&(uParam0->f_624.f_8), 1, 0);
	func_133(uParam0);
}

void func_9(int iParam0, int iParam1)
{
	func_134(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

void func_10(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (does_entity_belong_to_this_script(uParam0[iVar0], true))
			{
				delete_object((*uParam0)[iVar0]);
			}
			else
			{
				set_object_as_no_longer_needed((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_11(var uParam0, var uParam1)
{
	bVar0 = func_24(uParam0->f_13, 72);
	switch (uParam0->f_259)
	{
		case 0:
			if (!func_24(Global_35, 0))
			{
				return 0;
			}
			break;
		case 1:
			if (!bVar0)
			{
				if (uParam0->f_5 == 1)
				{
					return 0;
				}
				iVar1 = _0x112ddf56300bc6e5(uParam0->f_15);
				if (_0x800df3fc913355f3(iVar1))
				{
					uParam0->f_13 = _0x31c70a716cae1fee(iVar1);
					func_127(&(uParam0->f_237), 16);
					func_135(&(uParam0->f_624.f_295), 0);
				}
				return 0;
			}
			else
			{
				uParam0->f_624.f_325 = uParam0->f_13;
				if (uParam0->f_624.f_339 == -1)
				{
					uParam0->f_624.f_339 = func_136(uParam0->f_624.f_325, 0);
				}
				if (func_12(uParam0->f_1, 65536) && !func_124(uParam0->f_237, 16))
				{
					func_51(uParam0);
				}
				if (!get_ped_config_flag(uParam0->f_13, 87, true))
				{
					set_ped_config_flag(uParam0->f_13, 87, true);
					set_ped_config_flag(uParam0->f_13, 447, true);
					set_ped_config_flag(uParam0->f_13, 325, true);
					if (func_25(*uParam0))
					{
						set_ped_combat_attributes(uParam0->f_13, 58, true);
					}
				}
			}
			break;
		case 2:
			if (func_57() == -1 && func_137(uParam0->f_14, 1))
			{
				if (Global_1935369->f_50 == 0)
				{
					return 0;
				}
			}
			break;
		case 3:
			if (is_ped_in_combat(Global_35, 0) || is_ped_in_melee_combat(Global_35))
			{
				return 0;
			}
			break;
		case 4:
			if (_0x331550b212014b92(Global_35, uParam0->f_13))
			{
				return 0;
			}
			break;
		case 5:
			if (func_12(uParam0->f_1, 2048))
			{
				return 0;
			}
			break;
		case 6:
			if (func_12(uParam0->f_1, 1))
			{
				return 0;
			}
			break;
		case 7:
			if (func_138(Global_1935369->f_5[uParam0->f_1]->f_5, 1, uParam0->f_1))
			{
				return 0;
			}
			break;
		case 8:
			if (bVar0 && is_ped_fleeing(uParam0->f_13))
			{
				return 0;
			}
			break;
		case 9:
			if (func_139(Global_35))
			{
				return 0;
			}
			break;
		case 10:
			if (bVar0 && _is_ped_hogtied(uParam0->f_13))
			{
				return 0;
			}
			break;
		case 11:
			if (func_140(1))
			{
				return 0;
			}
			break;
		case 12:
			if (_is_ped_carrying(Global_35))
			{
				return 0;
			}
			break;
		case 13:
			if (bVar0 && !func_143(uParam0->f_13, func_142(func_141(*uParam0)), 1, 0))
			{
				return 0;
			}
			break;
		case 14:
			if (func_144(player_id(), 1, 0, 1))
			{
				return 0;
			}
			break;
	}
	uParam0->f_259++;
	if (uParam0->f_259 > 14)
	{
		uParam0->f_259 = 0;
	}
	return 1;
}

bool func_12(int iParam0, int iParam1)
{
	return func_145(Global_1935369->f_5[iParam0]->f_7, iParam1);
}

void func_13(int iParam0, int iParam1)
{
	func_146(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 2:
			return 52;
		case 1:
			return 53;
		case 3:
			return 33;
		case 4:
			return 93;
		case 7:
			return 97;
		case 6:
			return 81;
		case 5:
			return 70;
		case 8:
			return 83;
		default:
			break;
	}
	return -1;
}

int func_15(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0)
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

int func_20(var uParam0, int iParam1, int iParam2)
{
	func_84(&(uParam0->f_1), uParam0->f_326);
	uParam0->f_7 = func_24(uParam0->f_325, 0);
	if (iParam1 == 21 && uParam0->f_7)
	{
		_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 43, 1, 1);
	}
	if (uParam0->f_339 == -1 && uParam0->f_7)
	{
		uParam0->f_339 = func_136(uParam0->f_325, 0);
	}
	if (uParam0->f_339 == 74 && _0xa00df706c60173d1(-877355938) == 984264800)
	{
		if (is_string_null_or_empty(uParam0->f_337))
		{
			func_135(&(uParam0->f_295), 0);
			_0x946d46cd6dfb9742(player_id(), 0, -1688654430);
		}
		uParam0->f_337 = "COMP_PEARSON";
		uParam0->f_338 = 2;
	}
	else if (uParam0->f_339 == 74 && _0xa00df706c60173d1(-877355938) != 984264800)
	{
		if (func_147(45) && _0x0772f87d7b07719a(player_id(), 0, -1688654430))
		{
			_0xcddd4b74660e2335(player_id(), 0, -1688654430);
		}
	}
	if (func_124(uParam0->f_323, 64) || func_124(uParam0->f_323, 1))
	{
		func_148(&(uParam0->f_8), 1, 1, 1, 0);
		return -1;
	}
	if ((!func_124(uParam0->f_323, 4) && func_124(uParam0->f_1, 1)) && is_ped_dead_or_dying(uParam0->f_325, true))
	{
		func_148(&(uParam0->f_8), 1, 1, 1, 0);
		enable_control_action(0, -1616532217, true);
		func_146(&(uParam0->f_326), 4);
		return -1;
	}
	if (func_124(uParam0->f_1, 1) && (((_0x0eaf918f751f27ba(uParam0->f_325) || is_ped_in_combat(uParam0->f_325, 0)) || is_ped_fleeing(uParam0->f_325)) || _is_ped_hogtied(uParam0->f_325)))
	{
		func_21(uParam0);
		if (get_ped_config_flag(uParam0->f_325, 315, true))
		{
			set_ped_config_flag(uParam0->f_325, 130, false);
			set_ped_config_flag(uParam0->f_325, 315, false);
		}
		enable_control_action(0, -1616532217, true);
		return -1;
	}
	if (uParam0->f_339 == 138)
	{
		if (func_149(77))
		{
			set_ped_config_flag(uParam0->f_325, 301, true);
			func_21(uParam0);
			return -1;
		}
	}
	else if (uParam0->f_339 == 1)
	{
		if (func_150(5))
		{
			func_151(uParam0, 0);
			func_21(uParam0);
			return -1;
		}
		else if (func_73(6))
		{
			func_21(uParam0);
			func_45(uParam0, 32);
			return -1;
		}
	}
	else if (uParam0->f_339 == 16)
	{
		if (func_73(6))
		{
			func_21(uParam0);
			func_45(uParam0, 32);
			return -1;
		}
	}
	else if ((uParam0->f_339 == 476 || uParam0->f_339 == 492) || uParam0->f_339 == 474)
	{
		if (func_73(69))
		{
			func_21(uParam0);
			return -1;
		}
	}
	bVar0 = func_152(&(uParam0->f_325), 1, 0, 0);
	if (!bVar0)
	{
		*uParam0 = 0;
		if (uParam0->f_3)
		{
			uParam0->f_3 = 0;
			if ((uParam0->f_7 && iParam1 != 22) && _0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
			}
		}
	}
	else
	{
		if (uParam0->f_339 == 219)
		{
			if (func_27(22))
			{
				return -1;
			}
		}
		else if (uParam0->f_339 == 138)
		{
			if ((((func_73(73) && func_153((*Global_1835011)[73]->f_1) == 1) || func_26(107)) || func_149(106)) || func_149(16))
			{
				func_21(uParam0);
				return -1;
			}
			if ((uParam0->f_322 != -1 && func_12(uParam0->f_322, 8388608)) && func_26(110))
			{
				func_21(uParam0);
				return -1;
			}
		}
		else if (uParam0->f_339 == 9)
		{
			if (func_73(14))
			{
				func_154(uParam0, 0);
				return 0;
			}
		}
		else if (uParam0->f_339 == 137)
		{
			if (func_73(27))
			{
				func_155(uParam0->f_8[9], 9);
				func_156(uParam0->f_8[9], 1, 0);
				func_21(uParam0);
				return -1;
			}
		}
		else if (uParam0->f_339 == 2)
		{
			if (func_149(27))
			{
				return -1;
			}
		}
		if (*uParam0 == 0 && !uParam0->f_3)
		{
			func_55(uParam0);
			uParam0->f_3 = 1;
		}
		if (func_124(uParam0->f_1, 1))
		{
			enable_control_action(0, -1616532217, true);
		}
		if (uParam0->f_7)
		{
			if (func_124(uParam0->f_1, 1) || iParam1 == 22)
			{
				if (!_0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 0))
				{
					_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 1);
					_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 1);
				}
			}
			else if (_0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
			}
		}
	}
	if (!func_124(uParam0->f_1, 1))
	{
		if (func_124(uParam0->f_323, 32) && !get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_151(uParam0, 0);
		}
		else if (!func_124(uParam0->f_323, 32) && get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_151(uParam0, 1);
		}
	}
	if (func_27(2) && uParam0->f_339 == 508)
	{
		func_157(uParam0, 1);
	}
	if (!func_124(uParam0->f_1, 1) && func_124(uParam0->f_1, 128))
	{
		vVar1 = { get_entity_coords(uParam0->f_325, true, false) };
		if (_is_ped_carrying(Global_35) || absf((vVar1.z - Global_36.f_2)) > 0.75f)
		{
			func_158(&(uParam0->f_8));
		}
	}
	if (func_124(uParam0->f_1, 1))
	{
		uParam0->f_295.f_12[0] = _uiprompt_get_group_id_for_target_entity(uParam0->f_325);
		uParam0->f_295.f_12[1] = -1073177089;
		uParam0->f_295.f_12[2] = -1721306936;
		uParam0->f_295.f_12[3] = 1651111721;
	}
	else if (func_124(uParam0->f_1, 128) && func_124(uParam0->f_1, 32))
	{
		uParam0->f_295.f_12[0] = _uiprompt_get_group_id_for_target_entity(uParam0->f_325);
		uParam0->f_295.f_12[1] = 1651111721;
	}
	if ((uParam0->f_322 != -1 && func_12(uParam0->f_322, 131072)) && func_124(uParam0->f_1, 1))
	{
		func_21(uParam0);
		if (get_ped_config_flag(uParam0->f_325, 315, true))
		{
			set_ped_config_flag(uParam0->f_325, 130, false);
			set_ped_config_flag(uParam0->f_325, 315, false);
		}
		return -1;
	}
	if ((func_124(uParam0->f_323, 1) && *uParam0 == 12) && !func_124(uParam0->f_1, 1))
	{
		func_159(uParam0);
	}
	if (func_124(uParam0->f_1, 1024))
	{
		set_ped_config_flag(uParam0->f_325, 301, true);
		return -1;
	}
	iVar4 = 1;
	if (func_124(uParam0->f_323, 32) || (func_12(&Global_1935369, 2048) && func_124(uParam0->f_1, 1)))
	{
		func_161(&(uParam0->f_325), &(uParam0->f_295), 0f, &(uParam0->f_8), 0, 1, 0, 0, func_160(3, 0, 0), 0, 0, 2, -1082130432);
	}
	else if (func_124(uParam0->f_1, 1))
	{
		iVar4 |= 67108864;
		func_161(&(uParam0->f_325), &(uParam0->f_295), uParam0->f_324, &(uParam0->f_8), 0, 3, 0, 0, iVar4, 0, 0, 2, -1082130432);
	}
	else
	{
		if (func_124(uParam0->f_1, 64) || func_124(uParam0->f_1, 32768))
		{
			func_162(&(uParam0->f_295), 26);
		}
		func_161(&(uParam0->f_325), &(uParam0->f_295), uParam0->f_324, &(uParam0->f_8), 0, 3, 0, uParam0->f_337, 1, 0, 0, uParam0->f_338, -1082130432);
	}
	if (uParam0->f_295.f_1 == 12 && !func_124(uParam0->f_1, 1))
	{
		func_159(uParam0);
	}
	if (func_124(uParam0->f_1, 8192))
	{
		if (get_ped_config_flag(uParam0->f_325, 130, true))
		{
			func_154(uParam0, 1);
		}
		if (get_ped_config_flag(uParam0->f_325, 315, true))
		{
			set_ped_config_flag(uParam0->f_325, 315, false);
		}
	}
	switch (*uParam0)
	{
		case 7:
			if ((Global_1914319->f_18941.f_15 || Global_1914319->f_18941.f_18) || _0x7c7e4ab748ea3b07())
			{
				func_163(uParam0->f_8[11]);
			}
			if (func_165(func_164(func_128())) || Global_1914319->f_18941.f_18)
			{
				func_163(uParam0->f_8[9]);
			}
			if (uParam0->f_295.f_1 == 11)
			{
				func_156(uParam0->f_8[11], 0, 0);
				func_166(1, uParam0);
			}
			if (uParam0->f_295.f_1 == 9)
			{
				func_156(uParam0->f_8[9], 0, 0);
				func_166(2, uParam0);
				return -1;
			}
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_154(uParam0, 0);
			}
			return 0;
		case 8:
		case 9:
		case 11:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_154(uParam0, 0);
			}
			return 0;
		case 5:
		case 10:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_154(uParam0, 0);
			}
			return 0;
		case 2:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_154(uParam0, 0);
			}
			if (uParam0->f_295.f_1 == 3)
			{
				func_167(uParam0);
				return 4;
			}
			if (uParam0->f_295.f_1 == 4)
			{
				func_167(uParam0);
				return 5;
			}
			if (uParam0->f_295.f_1 == 1)
			{
				func_167(uParam0);
				return 1;
			}
			if (uParam0->f_295.f_1 == 0)
			{
				func_167(uParam0);
				return 2;
			}
			if ((Global_1914319->f_18941.f_15 || Global_1914319->f_18941.f_18) || _0x7c7e4ab748ea3b07())
			{
				func_163(uParam0->f_8[7]);
			}
			if (func_165(func_164(func_128())) || Global_1914319->f_18941.f_18)
			{
				func_163(uParam0->f_8[6]);
			}
			if (uParam0->f_295.f_1 == 7)
			{
				func_166(1, uParam0);
				func_167(uParam0);
				return -1;
			}
			if (uParam0->f_295.f_1 == 6)
			{
				func_166(2, uParam0);
				func_167(uParam0);
				return -1;
			}
			break;
		case 12:
			if (Global_1914319->f_18941.f_15 || Global_1914319->f_18941.f_18)
			{
				func_163(uParam0->f_8[11]);
			}
			if (func_165(func_164(func_128())) || Global_1914319->f_18941.f_18)
			{
				func_163(uParam0->f_8[9]);
			}
			if (uParam0->f_295.f_1 == 11)
			{
				func_156(uParam0->f_8[11], 0, 0);
				func_166(1, uParam0);
			}
			if (uParam0->f_295.f_1 == 9)
			{
				func_156(uParam0->f_8[9], 0, 0);
				func_166(2, uParam0);
				return -1;
			}
			break;
		case 6:
			if (get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_154(uParam0, 0);
			}
			if (Global_1914319->f_18975 != -1 && uParam0->f_295.f_1 == 11)
			{
				Global_1914319->f_18970 = 6;
				return 6;
			}
			if (!uParam0->f_6)
			{
				disable_control_action(0, -1616532217, false);
			}
			Global_1914319->f_18970 = -1;
			return -1;
	}
	return -1;
}

void func_21(var uParam0)
{
	if (!uParam0->f_2)
	{
		func_148(&(uParam0->f_8), 1, 1, 1, 0);
		uParam0->f_2 = 1;
	}
}

bool func_22(int iParam0, int iParam1)
{
	return func_145(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

void func_23()
{
	func_168(&Local_14);
}

bool func_24(int iParam0, int iParam1)
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
	if (func_124(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_124(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_124(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_124(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_124(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_124(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_124(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_124(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_25(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return true;
		case 0:
			return false;
		case 2:
			return false;
		case 5:
			return true;
		case 3:
			return false;
		case 8:
			return true;
		case 6:
			return true;
		case 1:
			return true;
		case 7:
			return false;
		default:
			break;
	}
	return false;
}

bool func_26(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_27(int iParam0)
{
	if (func_57() != -1)
	{
		return false;
	}
	if (!func_169(iParam0))
	{
		return false;
	}
	return func_170((*Global_1347702)[iParam0]->f_15);
}

bool func_28(var uParam0)
{
	return func_171(*uParam0, 1);
}

bool func_29(int iParam0, bool bParam1)
{
	if (func_57() != -1)
	{
		return false;
	}
	if (!func_172(iParam0))
	{
		return false;
	}
	if (!func_131(iParam0) && bParam1)
	{
		return false;
	}
	return func_137(iParam0, 1);
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1 || !func_28(uParam0))
	{
		func_173(uParam0);
	}
}

bool func_31(var uParam0)
{
	return func_171(*uParam0, 2);
}

void func_32(var uParam0)
{
	if (!func_28(uParam0))
	{
	}
	if (func_31(uParam0))
	{
		uParam0->f_1 = (func_174() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_175(uParam0, 2);
	}
}

void func_33(var uParam0)
{
	if (!func_28(uParam0))
	{
	}
	if (!func_31(uParam0))
	{
		uParam0->f_2 = (func_174() - uParam0->f_1);
		func_176(uParam0, 2);
	}
}

float func_34(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_31(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_174() - uParam0->f_1);
}

void func_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_172(iParam0))
	{
		return;
	}
	if (!func_137(iParam0, 1))
	{
		return;
	}
	if (!func_137(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_131(iParam0)) && func_177(iParam0))
	{
		return;
	}
	func_178(iParam0, 1);
	func_179(iParam0);
	if (func_181(func_180(iParam0)))
	{
		iVar0 = func_130(iParam0);
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
		func_178(iParam0, 16);
	}
	if (func_137(iParam0, 128) && !bParam3)
	{
		func_182(iParam0, 0);
	}
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_37(var uParam0)
{
	if (!func_40(func_125(uParam0)))
	{
		open_sequence_task(&(uParam0->f_211));
		task_duck(0, 0);
		task_set_crouch_movement(0, true, 0, false);
		task_go_straight_to_coord(0, func_125(uParam0), 1f, 20000, func_183(uParam0), 1056964608, 0);
		task_play_anim(0, "SCRIPT_AMB@TOWN@SALOON@SHOTGUN_DEFEND@CROUCH@RIGHT@MALE_A@TRANS", "UNARMED_TRANS_ARMED", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		close_sequence_task(uParam0->f_211);
	}
}

int func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_184(iParam0, 1))
	{
		return 0;
	}
	if (func_181(func_180(iParam0)))
	{
		iVar1 = func_130(iParam0);
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
	if ((bParam4 && !func_131(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_185(iParam0, 1);
	func_186(iParam0);
	if (bParam3)
	{
		func_185(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_39(var uParam0)
{
	switch (*uParam0)
	{
		case 5:
			return _create_volume_box(-313.6224f, 806.3742f, 118.36f, 0.103256f, 0.729426f, 8.057368f, 1.370759f, 4.48593f, 2.167254f);
		case 4:
			return _create_volume_box(-5519.094f, -2906.416f, -2.42426f, 0f, 0f, 29.7476f, 4.646879f, 1.709401f, 2.221644f);
		case 8:
			return _create_volume_box(2948.876f, 528.6862f, 45.18506f, 0f, 0f, 2.159656f, 4.01404f, 1.792071f, 1.489259f);
		case 6:
			return _create_volume_box(-239.0906f, 770.6214f, 117.1581f, 0f, 0f, 19.54201f, 1.487085f, 3.461255f, 2.343404f);
		case 1:
			return _create_volume_box(2792.629f, -1167.659f, 47.59157f, 0f, 0f, 61.40447f, 3.790417f, 1.434095f, 1.482956f);
		default:
			break;
	}
	return _create_volume_box(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

bool func_40(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	if (uParam0->f_5 != iParam1)
	{
		Local_14.f_105 = iParam1;
		uParam0->f_5 = iParam1;
	}
}

bool func_42(int iParam0)
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

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (bParam1)
	{
		func_187(iParam0, 4);
		func_62(iVar0, 1);
		func_188(iVar0, 1);
	}
	else
	{
		func_189(iParam0, 4);
		func_188(iVar0, 0);
	}
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	Local_14.f_103 = *uParam1;
	Local_14.f_104 = uParam1->f_1;
	iVar0 = func_142(func_141(*uParam0));
	if (func_57() == -1)
	{
		uParam0->f_14 = func_190(*uParam1);
		uParam0->f_15 = func_191(*uParam1);
		func_192(uParam0->f_14, iVar0, 1);
	}
	if (_does_volume_exist(iVar0))
	{
		_0x4a8fefc43fd8ac9b(iVar0, 1, 1);
	}
	uParam0->f_624.f_326 = 1;
	uParam0->f_624.f_5 = func_122(*uParam1);
	uParam0->f_624.f_324 = func_193(*uParam0);
	uParam0->f_624.f_322 = uParam1->f_1;
	if (*uParam0 != 6)
	{
		uParam0->f_624.f_327[0] = func_101(1, *uParam1);
	}
	uParam0->f_624.f_327[1] = func_101(0, *uParam1);
	if (uParam0->f_624.f_295.f_6 == -1)
	{
		func_194(&(uParam0->f_624.f_295), 1, 0);
	}
	if ((*uParam0 == 3 || *uParam0 == 0) || *uParam0 == 2)
	{
		uParam0->f_624.f_326 |= 128;
	}
	if (*uParam0 == 6)
	{
		func_45(&(uParam0->f_624), 2);
		func_195(&(uParam0->f_624), func_77(uParam0, 4), 0, -24362764, -368374107);
	}
	else if (!func_122(*uParam0))
	{
		func_195(&(uParam0->f_624), 0, 0, -24362764, -368374107);
	}
	else
	{
		func_195(&(uParam0->f_624), func_77(uParam0, 4), func_77(uParam0, 5), -24362764, -368374107);
	}
	uParam0->f_245 = 0;
	if (func_122(*uParam1))
	{
		uParam0->f_238 = func_123("SERVICE_ORDER", -473983589, func_99(*uParam1), 1.2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		uParam0->f_964 = _0xb223249b7798eeed(Global_35, 798764373, 1, 1558937268);
		func_43(uParam0->f_238, 0, 1);
	}
	func_196(uParam0);
	func_197(&(uParam0->f_157), *uParam0);
	uParam0->f_249 = 0;
	uParam0->f_245 = 0;
	func_41(uParam0, 1);
}

void func_45(var uParam0, int iParam1)
{
	if (!func_124(uParam0->f_323, iParam1) && iParam1 == 32)
	{
		if (!func_124(uParam0->f_1, 1))
		{
			func_167(uParam0);
		}
		func_135(&(uParam0->f_295), 0);
	}
	func_84(&(uParam0->f_323), iParam1);
}

void func_46(var uParam0, bool bParam1)
{
	func_156(uParam0->f_8[12], bParam1, 0);
	func_156(uParam0->f_8[11], bParam1, 0);
	func_156(uParam0->f_8[9], bParam1, 0);
	func_156(uParam0->f_8[10], bParam1, 0);
}

bool func_47(var uParam0)
{
	iVar0 = _0x112ddf56300bc6e5(uParam0->f_15);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return false;
	}
	if (!_0x4afc7288c77238b3(iVar0))
	{
		return false;
	}
	if (!func_24(uParam0->f_13, 0))
	{
		uParam0->f_13 = _0x31c70a716cae1fee(iVar0);
	}
	if (!func_24(uParam0->f_13, 0))
	{
		return false;
	}
	uParam0->f_624.f_325 = uParam0->f_13;
	if (uParam0->f_624.f_339 == -1)
	{
		uParam0->f_624.f_339 = func_136(uParam0->f_624.f_325, 0);
	}
	func_198("SLFD");
	if (!_text_database_has_loaded("SLFD"))
	{
		return false;
	}
	return true;
}

void func_48(var uParam0)
{
	Local_14 = 33;
	iVar0 = func_128();
	switch (iVar0)
	{
		case 76:
			if (Local_14.f_104 == 1)
			{
				Local_14.f_1 = 81;
				Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[1];
				Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[1];
				Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[1];
			}
			else
			{
				Local_14.f_1 = 70;
				Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
				Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
				Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
				Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[0];
			}
			break;
		case 5:
			if (Local_14.f_104 == 1)
			{
				Local_14.f_1 = 53;
				Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[1];
				Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[1];
				Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[1];
				Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[1];
			}
			else
			{
				Local_14.f_1 = 52;
				Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
				Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
				Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
				Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[0];
			}
			break;
		case 92:
			Local_14.f_1 = 83;
			Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
			Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
			Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
			break;
		case 38:
			Local_14.f_1 = 11;
			Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
			Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
			Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
			Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[0];
			break;
		case 105:
			Local_14.f_1 = 33;
			Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
			Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
			Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
			Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[0];
			break;
		case 115:
			Local_14.f_1 = 93;
			Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
			Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
			Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
			Global_1914319->f_3[Local_14]->f_33 = &Global_1935369->f_64[0];
			break;
		case 120:
			Local_14.f_1 = 97;
			Global_1914319->f_3[Local_14]->f_25 = &Global_1935369->f_55[0];
			Global_1914319->f_3[Local_14]->f_26 = &Global_1935369->f_58[0];
			Global_1914319->f_3[Local_14]->f_28 = &Global_1935369->f_61[0];
			break;
	}
	Global_1914319->f_3[Local_14]->f_23 = uParam0->f_13;
	Local_14.f_21 = 1;
	Local_14.f_22 = 44442;
	Local_14.f_41 = 1;
	Local_14.f_42 = 44993;
	Local_14.f_39 = 1;
	Local_14.f_40 = 45246;
	Local_14.f_33 = 1;
	Local_14.f_34 = 46596;
}

void func_49(var uParam0)
{
	if (uParam0->f_249 == 0)
	{
		request_anim_dict("SCRIPT_AMB@TOWN@SALOON@SHOTGUN_DEFEND@CROUCH@RIGHT@MALE_A@TRANS");
		uParam0->f_249++;
		return;
	}
	if (uParam0->f_249 == 1)
	{
		_request_scenario_type(-545460140, 1, get_entity_model(Global_35), 0);
		uParam0->f_249++;
		return;
	}
	if (uParam0->f_249 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 13)
		{
			if (uParam0->f_157[iVar0]->f_2 != 0)
			{
				request_model(uParam0->f_157[iVar0]->f_2, false);
			}
			iVar0++;
		}
		uParam0->f_249++;
		uParam0->f_245 = 0;
		return;
	}
	if (uParam0->f_249 == 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			if (func_203(uParam0->f_24[iVar1]->f_2, *uParam0) && !func_122(*uParam0))
			{
			}
			else
			{
				load_anim_scene(&(uParam0->f_24[iVar1]));
				iVar2 = 0;
				while (iVar2 < uParam0->f_24[iVar1]->f_1)
				{
					if (!_0x0df57f86fe71dbe5(&(uParam0->f_24[iVar1]), &(uParam0->f_24[iVar1]->f_3[iVar2])))
					{
						_0xdf7b5144e25cd3fe(&(uParam0->f_24[iVar1]), &(uParam0->f_24[iVar1]->f_3[iVar2]));
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_249++;
		uParam0->f_245 = 0;
	}
	uParam0->f_249 = 0;
	uParam0->f_245 = 0;
	func_41(uParam0, 3);
}

bool func_50(var uParam0)
{
	if (!has_anim_dict_loaded("SCRIPT_AMB@TOWN@SALOON@SHOTGUN_DEFEND@CROUCH@RIGHT@MALE_A@TRANS"))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_203(uParam0->f_24[iVar0]->f_2, *uParam0) && !func_122(*uParam0))
		{
		}
		else
		{
			if (!_does_anim_scene_exist(&(uParam0->f_24[iVar0])))
			{
				return false;
			}
			if (func_204(uParam0->f_24[iVar0]->f_2))
			{
			}
			else
			{
				if (!_is_anim_scene_loaded(&(uParam0->f_24[iVar0]), true, false))
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < uParam0->f_24[iVar0]->f_1)
				{
					if (!_0x23e33cb9f4a3f547(&(uParam0->f_24[iVar0]), &(uParam0->f_24[iVar0]->f_3[iVar1])))
					{
						if (!_0x0df57f86fe71dbe5(&(uParam0->f_24[iVar0]), &(uParam0->f_24[iVar0]->f_3[iVar1])))
						{
							_0xdf7b5144e25cd3fe(&(uParam0->f_24[iVar0]), &(uParam0->f_24[iVar0]->f_3[iVar1]));
						}
						return false;
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 13)
	{
		if (uParam0->f_157[iVar2]->f_2 != 0)
		{
			if (!has_model_loaded(uParam0->f_157[iVar2]->f_2))
			{
				return false;
			}
		}
		iVar2++;
	}
	return true;
}

bool func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_205(*uParam0, &(uParam0->f_24[iVar0]->f_6), &(uParam0->f_24[iVar0]->f_9));
		if (!func_122(*uParam0) && func_203(uParam0->f_24[iVar0]->f_2, *uParam0))
		{
		}
		else if (_does_anim_scene_exist(&(uParam0->f_24[iVar0])))
		{
			if (((uParam0->f_24[iVar0]->f_2 == 6 || uParam0->f_24[iVar0]->f_2 == 7) || uParam0->f_24[iVar0]->f_2 == 8) || uParam0->f_24[iVar0]->f_2 == 9)
			{
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "BARTENDER", uParam0->f_13, 0);
			}
			else if (uParam0->f_24[iVar0]->f_2 == 10)
			{
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "PLAYER", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "PLAYER", Global_35, 0);
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "BARTENDER", uParam0->f_13, 0);
			}
		}
		iVar0++;
	}
	func_84(&(uParam0->f_237), 16);
	return true;
}

bool func_52(var uParam0)
{
	iVar0 = uParam0->f_245;
	while (iVar0 <= (13 - 1))
	{
		uParam0->f_245++;
		if (uParam0->f_157[iVar0]->f_2 != 0)
		{
			if (func_206(uParam0->f_157[iVar0], *uParam0, uParam0))
			{
			}
			else
			{
				iVar0++;
			}
			if (uParam0->f_245 >= 13)
			{
				return true;
			}
			return false;
		}
	}
}

void func_53(var uParam0, int iParam1)
{
	if (func_124(uParam0->f_323, iParam1) && iParam1 == 32)
	{
		if (!func_124(uParam0->f_1, 1))
		{
			func_167(uParam0);
		}
		func_135(&(uParam0->f_295), 0);
	}
	func_127(&(uParam0->f_323), iParam1);
}

void func_54(var uParam0)
{
	func_207(uParam0->f_325, &(uParam0->f_8), uParam0->f_324, 3, 0, 0, 0, 0, 0);
}

void func_55(var uParam0)
{
	if ((func_24(uParam0->f_325, 0) && !func_124(uParam0->f_1, 1)) && !func_124(uParam0->f_1, 8192))
	{
		func_154(uParam0, 0);
	}
	if (func_124(uParam0->f_1, 1))
	{
		func_21(uParam0);
		*uParam0 = 2;
		func_208(uParam0);
	}
	else if (func_124(uParam0->f_1, 8) || func_124(uParam0->f_1, 32768))
	{
		*uParam0 = 5;
		func_154(uParam0, 0);
	}
	else if (func_124(uParam0->f_1, 1024))
	{
		*uParam0 = -1;
	}
	else if (func_124(uParam0->f_1, 32))
	{
		if (func_124(uParam0->f_1, 128))
		{
			func_209(uParam0->f_8[12], 14);
			func_210(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -739444689, 0, 0, 0, 1, 0);
			func_156(uParam0->f_8[12], 1, 0);
			uParam0->f_8[12]->f_10 = 1;
			func_211(uParam0);
		}
		else
		{
			func_212(uParam0->f_8[12]);
			func_213(uParam0->f_8[12], 1);
			func_209(uParam0->f_8[12], 14);
		}
		*uParam0 = 7;
	}
	else if (func_124(uParam0->f_1, 64))
	{
		*uParam0 = 8;
	}
	else if (func_124(uParam0->f_1, 16))
	{
		*uParam0 = 9;
	}
	else if (func_124(uParam0->f_1, 512))
	{
		*uParam0 = 10;
	}
	else if (func_124(uParam0->f_1, 128))
	{
		*uParam0 = 12;
		func_211(uParam0);
	}
	else if (func_124(uParam0->f_1, 256))
	{
		*uParam0 = 11;
	}
	uParam0->f_2 = 0;
	if (func_124(uParam0->f_323, 8))
	{
		func_156(uParam0->f_8[12], 0, 0);
		func_156(uParam0->f_8[11], 0, 0);
		func_156(uParam0->f_8[9], 0, 0);
		func_156(uParam0->f_8[10], 0, 0);
	}
	if (func_124(uParam0->f_323, 1))
	{
		func_213(uParam0->f_8[9], 1);
		func_213(uParam0->f_8[10], 1);
		func_213(uParam0->f_8[11], 1);
		func_213(uParam0->f_8[12], 1);
		func_156(uParam0->f_8[12], 0, 0);
		uParam0->f_2 = 1;
	}
}

void func_56()
{
	func_214(0);
	func_215();
	func_173(&(Local_14.f_80));
}

int func_57()
{
	return Global_1572887->f_12;
}

void func_58(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_42(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_61(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_216(iVar0);
	*uParam0 = 0;
}

void func_59(var uParam0)
{
	if (is_ped_dead_or_dying(uParam0->f_325, true))
	{
		return;
	}
	func_163(uParam0->f_8[11]);
	func_163(uParam0->f_8[12]);
	func_163(uParam0->f_8[10]);
	func_163(uParam0->f_8[9]);
}

bool func_60(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

int func_61(int iParam0)
{
	return iParam0;
}

void func_62(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_217(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

bool func_63(int iParam0, bool bParam1)
{
	if (!func_144(iParam0, 0, 1, bParam1))
	{
		return false;
	}
	_0x9c5bd8c562565ce6(&Var0);
	return Var0.f_16;
}

bool func_64(int iParam0)
{
	if (-1829635046 == func_218(81053684))
	{
		if (func_219(iParam0))
		{
			return true;
		}
	}
	else if (func_220(-525676072, iParam0))
	{
		if (func_219(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_65(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	return !func_217(iParam0, 4);
}

Vector3 func_66(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -310.4637f, 801.1637f, 118.483f;
		case 8:
			return 2946.04f, 519.01f, 44.87f;
		case 0:
			return -818f, -1317.78f, 47.38f;
		case 2:
			return 2632.468f, -1220.674f, 52.88f;
		case 4:
			return -5510.793f, -2916.249f, -2.26f;
		case 3:
			return 1343.654f, -1370.071f, 80f;
		case 6:
			return -241.28f, 765.98f, 117.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

float func_67(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_68(var uParam0)
{
	vVar1 = { func_99(*uParam0) };
	vVar1.f_2 = (vVar1.z - 0.1f);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (does_entity_exist(&(uParam0->f_157[iVar0])))
		{
			if (uParam0->f_157[iVar0]->f_3 == 1)
			{
				_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Stew_Fill", 1f);
			}
			set_entity_coords(&(uParam0->f_157[iVar0]), vVar1, true, false, true, true);
			set_entity_visible(&(uParam0->f_157[iVar0]), false);
		}
		iVar0++;
	}
}

int func_69()
{
	return &Global_1899515;
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_221(*iParam0);
	iVar1 = func_222(*iParam0);
	iVar2 = func_223(*iParam0);
	iVar3 = func_224(*iParam0);
	iVar4 = func_225(*iParam0);
	iVar5 = func_226(*iParam0);
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
		iVar7 = func_227(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_228(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_71(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_72(int iParam0, int iParam1)
{
	iVar0 = func_69();
	if (iParam1 != -15)
	{
		iVar0 = iParam1;
	}
	Global_20710.f_1630[iParam0] = iVar0;
	func_71(iParam0, 8);
}

bool func_73(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_170((*Global_1835011)[iParam0]->f_1);
}

bool func_74(var uParam0, var uParam1)
{
	if (func_42(uParam0->f_238) && func_106(uParam0->f_238, 1))
	{
		uParam0->f_229 = 1;
		return true;
	}
	if (func_230(*uParam1))
	{
		if (uParam0->f_224 == 4 || uParam0->f_224 == 5)
		{
			if (uParam0->f_224 == 5 && func_124(uParam0->f_624.f_323, 2))
			{
				return false;
			}
			uParam0->f_225 = uParam0->f_224;
			Local_14.f_106 = uParam0->f_224;
			func_231(1);
			uParam0->f_235 = 1;
			return true;
		}
	}
	return false;
}

bool func_75(var uParam0)
{
	if ((uParam0->f_224 == 1 || uParam0->f_224 == 3) || uParam0->f_224 == 2)
	{
		func_231(0);
		uParam0->f_225 = uParam0->f_224;
		Local_14.f_106 = uParam0->f_224;
		return true;
	}
	return false;
}

void func_76(var uParam0, int iParam1)
{
	if (uParam0->f_242 != iParam1)
	{
		uParam0->f_242 = iParam1;
	}
}

int func_77(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1:
		case 7:
			switch (iParam1)
			{
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 4:
					return 567164682;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 4:
					return 524494682;
				case 5:
					return -1403873319;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 4:
					return 1947534744;
				case 5:
					return -1939600995;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
					return -396143217;
				case 5:
					return 1955751248;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 4:
					return 187734596;
				case 5:
					return -1505924449;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 4:
					return 599184882;
				case 5:
					return -1335566375;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 4:
					return 1833815265;
				case 5:
					return -2034071102;
				case 1:
					return -24362764;
				case 2:
					return -368374107;
				case 3:
					return -24362764;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_79(var uParam0)
{
	_item_database_fillout_item_effects_ids(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		_item_database_fillout_item_effects_id_info(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0]);
		iVar0++;
	}
}

void func_80(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_232(iParam0);
	if (bParam3)
	{
		func_233(iParam0, sParam1, iParam2);
	}
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_234(iParam1, iParam2);
	func_235(iParam1, iParam4);
	func_236(iParam1, iParam4);
	_0x2a374e6f0075ee81(func_17(iParam0), func_18(iParam1), iParam2, iParam3, iParam4);
}

struct<2> func_82(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_83(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_84(var uParam0, int iParam1)
{
	func_237(uParam0, iParam1);
}

void func_85(bool bParam0)
{
	Global_1395601->f_1 = !bParam0;
}

void func_86()
{
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 527275493, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -124244224, false);
	func_238(0);
}

void func_87(var uParam0)
{
	fVar0 = -1f;
	fVar4 = -1f;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_240 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 0.75f, 0.75f, 3f);
	iVar11 = 0;
	while (iVar11 < func_239(uParam0))
	{
		iVar12 = create_itemset(true);
		func_240(uParam0, &vVar8, &uVar1, iVar11);
		fVar2 = func_241(Global_36, vVar8);
		_0x541b8576615c33de(uParam0->f_240, vVar8);
		iVar13 = _0x886171a12f400b89(uParam0->f_240, iVar12, 1);
		bVar17 = false;
		iVar15 = 0;
		while (iVar15 < iVar13)
		{
			iVar16 = get_indexed_item_in_itemset(iVar15, iVar12);
			iVar14 = iVar16;
			if (does_entity_exist(iVar14) && iVar14 == Global_35)
			{
				bVar17 = true;
			}
			iVar15++;
		}
		if (bVar17)
		{
			iVar13 = (iVar13 - 1);
		}
		if (iVar13 > 0)
		{
			if (fVar4 == -1f || fVar2 < fVar4)
			{
				fVar4 = fVar2;
				uVar3 = uVar1;
				vVar5 = { vVar8 };
			}
		}
		else if (fVar0 == -1f || fVar2 < fVar0)
		{
			fVar0 = fVar2;
			uParam0->f_9 = uVar1;
			uParam0->f_10 = { vVar8 };
		}
		destroy_itemset(iVar12);
		iVar11++;
	}
	if (func_40(uParam0->f_10))
	{
		uParam0->f_9 = uVar3;
		uParam0->f_10 = { vVar5 };
	}
}

Vector3 func_88()
{
	return -0.235327f, 1.850775f, 0f;
}

void func_89(var uParam0)
{
	switch (uParam0->f_212.f_2)
	{
		case 0:
		case 1:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[0]), true);
			set_entity_visible(&(uParam0->f_157[1]), true);
			break;
		case 2:
		case 3:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[3]), true);
			set_entity_visible(&(uParam0->f_157[4]), true);
			set_entity_visible(&(uParam0->f_157[6]), true);
			set_entity_visible(&(uParam0->f_157[7]), true);
			set_entity_visible(&(uParam0->f_157[8]), true);
			set_entity_visible(&(uParam0->f_157[9]), true);
			set_entity_visible(&(uParam0->f_157[5]), false);
			set_entity_visible(&(uParam0->f_157[10]), false);
			set_entity_visible(&(uParam0->f_157[11]), false);
			break;
		case 4:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[5]), true);
			break;
		case 5:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[10]), true);
			set_entity_visible(&(uParam0->f_157[11]), true);
			break;
		case 6:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[5]), true);
			break;
		case 8:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[10]), true);
			set_entity_visible(&(uParam0->f_157[11]), true);
			set_entity_visible(&(uParam0->f_157[5]), true);
			break;
		case 9:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[10]), true);
			set_entity_visible(&(uParam0->f_157[11]), true);
			set_entity_visible(&(uParam0->f_157[5]), true);
			break;
		case 7:
			set_entity_visible(&(uParam0->f_157[2]), true);
			set_entity_visible(&(uParam0->f_157[10]), true);
			set_entity_visible(&(uParam0->f_157[11]), true);
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_91(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_92(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (_0x6f1f0b17109309da(vParam1.x, (*uParam0)[iVar0]->f_1))
		{
			if (does_entity_exist(_get_anim_scene_object(vParam1.x, (*uParam0)[iVar0]->f_1, false)))
			{
				switch ((*uParam0)[iVar0]->f_3)
				{
					case 11:
						if (vParam1.z == 5)
						{
							_0x3bbdd6143ff16f98(Global_35, uParam0[iVar0], "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1);
						}
						else
						{
							_0x3bbdd6143ff16f98(Global_35, uParam0[iVar0], (*uParam0)[iVar0]->f_1, func_242(vParam1.z), func_243(vParam1.z), 1);
							remove_anim_scene_entity(vParam1.x, (*uParam0)[iVar0]->f_1, uParam0[iVar0]);
						}
						break;
					case 2:
						set_entity_visible(uParam0[iVar0], false);
						break;
					case 6:
					case 7:
					case 8:
						if (_0x8360c47380b6f351(uParam13, uParam0[iVar0], (*uParam0)[iVar0]->f_1, 1))
						{
							freeze_entity_position(uParam0[iVar0], true);
						}
						break;
					case 3:
					case 4:
					case 5:
					case 9:
						if (vParam1.z == 4)
						{
							_0x3bbdd6143ff16f98(Global_35, uParam0[iVar0], "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_ARTHUR", 1);
							set_object_as_no_longer_needed((*uParam0)[iVar0]);
							(*uParam0)[iVar0] = 0;
							return;
						}
						if (_0x8360c47380b6f351(uParam13, uParam0[iVar0], (*uParam0)[iVar0]->f_1, 0))
						{
							freeze_entity_position(uParam0[iVar0], true);
							if ((*uParam0)[iVar0]->f_3 == 5)
							{
								set_entity_visible(uParam0[iVar0], false);
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_93(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (_0x6f1f0b17109309da(*uParam1, (*uParam0)[iVar0]->f_1))
		{
			if (does_entity_exist(_get_anim_scene_object(*uParam1, (*uParam0)[iVar0]->f_1, false)) && _0x9d1eca9337be9fc3(*uParam1, (*uParam0)[iVar0]->f_1))
			{
				remove_anim_scene_entity(*uParam1, (*uParam0)[iVar0]->f_1, uParam0[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_94(var uParam0)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		reset_anim_scene(*uParam0, 0);
	}
}

void func_95(var uParam0)
{
	if (does_entity_exist(&(uParam0->f_157[10])))
	{
		set_entity_visible(&(uParam0->f_157[10]), false);
	}
	if (does_entity_exist(&(uParam0->f_157[2])))
	{
		set_entity_visible(&(uParam0->f_157[2]), false);
	}
}

Vector3 func_96(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -5517.186f, -2906.734f, -0.857f;
		case 0:
			return -816.5977f, -1318.233f, 44.5387f;
		case 2:
			return 2638.748f, -1225.585f, 54.1549f;
		case 5:
			return -312.9782f, 803.8256f, 119.7144f;
		case 3:
			return 1341.348f, -1374.031f, 81.1884f;
		case 8:
			return 2946.473f, 528.4269f, 46.3007f;
		case 6:
			return -240.3546f, 770.9362f, 118.963f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_97(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -89.4999f, 0f, 28.5084f;
		case 0:
			return -84.1352f, 0f, 89.4453f;
		case 2:
			return -89.4999f, 0f, -90.0676f;
		case 5:
			return -81.1662f, 0f, 11.2887f;
		case 3:
			return -85.5849f, 0f, 77.4291f;
		case 8:
			return -89.4999f, 0f, -89.8969f;
		case 6:
			return -81.5211f, -0.5133f, -60.1639f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_98(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 30f;
		case 0:
			return 30f;
		case 2:
			return 30f;
		case 5:
			return 30f;
		case 3:
			return 30f;
		case 8:
			return 30f;
		default:
			break;
	}
	return 30f;
}

Vector3 func_99(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -5516.599f, -2907.429f, -1.6631f;
		case 0:
			return -816.9209f, -1318.194f, 43.7589f;
		case 2:
			return 2638.948f, -1225.612f, 53.4419f;
		case 5:
			return -313.0251f, 804.1559f, 119.0524f;
		case 3:
			return 1341.083f, -1373.943f, 80.5376f;
		case 8:
			return 2946.676f, 528.3839f, 45.4084f;
		case 6:
			return -240.0568f, 771.0867f, 118.144f;
		case 1:
			return 2793f, -1169f, 47.7f;
		case 7:
			return -3700.6f, -2595f, 13.5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_100(int iParam0, int iParam1)
{
	Global_1914319->f_3[iParam0]->f_411 = iParam1;
}

char* func_101(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_VAN_HORN";
				case 1:
					return "ORDER_STEAK_VAN_HORN";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_VALENTINE_KEANES";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_VALENTINE";
				case 1:
					return "ORDER_STEAK_VALENTINE";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_SAINT_DENIS";
				case 1:
					return "ORDER_STEAK_SAINT_DENIS";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_TUMBLEWEED";
				case 1:
					return "ORDER_STEAK_TUMBLEWEED";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_RHODES";
				case 1:
					return "ORDER_STEAK_RHODES";
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ORDER_STEW_BLACKWATER";
				case 1:
					return "ORDER_STEAK_BLACKWATER";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_102(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_217(iVar0, 2))
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
				func_244(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_103(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_104(int iParam0)
{
	return _money_get_cash_balance();
}

int func_105(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_217(iVar0, 2))
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
		func_244(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_106(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

float func_107(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 98.7073f;
		case 8:
			return 88.5f;
		case 0:
			return -48f;
		case 2:
			return 88.9527f;
		case 4:
			return 307.0684f;
		case 3:
			return 80f;
		case 6:
			return -70.3f;
		default:
			break;
	}
	return 0f;
	return 0f;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2;
		case 0:
			return 2;
		case 2:
			return 2;
		case 5:
			return 2;
		case 3:
			return 3;
		case 8:
			return 2;
		case 6:
			return 1;
		default:
			break;
	}
	return 2;
}

Vector3 func_109(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -311.1603f, 801.0953f, 118.8291f;
		case 8:
			return 2946.04f, 519.01f, 44.87f;
		case 0:
			return -818f, -1317.78f, 47.38f;
		case 2:
			return 2631.16f, -1222.652f, 52.3804f;
		case 4:
			return -5510.427f, -2915.605f, -1.892f;
		case 3:
			return 1342.987f, -1369.971f, 80.3599f;
		case 6:
			return -240.312f, 766.3163f, 117.8389f;
		default:
			break;
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

bool func_110(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_111(var uParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			*uParam0 = create_scenario_point(-1177373461, func_66(iParam3), func_107(iParam3), 0, 0, 0);
			break;
		case 2:
		case 3:
			*uParam0 = create_scenario_point(798764373, func_66(iParam3), func_107(iParam3), 0, 0, 0);
			break;
	}
}

void func_112(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (does_entity_exist(&(uParam0->f_157[iVar0])))
		{
			switch (uParam0->f_157[iVar0]->f_3)
			{
				case 1:
					func_118(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
					freeze_entity_position(&(uParam0->f_157[iVar0]), true);
					_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Stew_Fill", 0f);
					set_entity_coords(&(uParam0->f_157[iVar0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar1), true, false, true, true);
					set_entity_rotation(&(uParam0->f_157[iVar0]), vVar4, 2, true);
					break;
				case 0:
					func_118(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
					set_entity_coords(&(uParam0->f_157[iVar0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar1), true, false, true, true);
					set_entity_rotation(&(uParam0->f_157[iVar0]), vVar4, 2, true);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					if ((uParam0->f_212.f_2 == 2 || uParam0->f_212.f_2 == 3) || uParam0->f_212.f_2 == 10)
					{
						func_118(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
						if (!func_40(vVar1))
						{
							if (uParam0->f_157[iVar0]->f_3 == 6)
							{
								_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Food_DOF_Fill", 0f);
							}
							if (uParam0->f_157[iVar0]->f_3 == 7 || uParam0->f_157[iVar0]->f_3 == 8)
							{
								if (uParam0->f_212.f_2 != 10)
								{
									_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Food_DOF_Fill", 3f);
								}
								else
								{
									_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Food_DOF_Fill", 0f);
								}
							}
							set_entity_coords(&(uParam0->f_157[iVar0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar1), true, false, true, true);
							set_entity_rotation(&(uParam0->f_157[iVar0]), vVar4, 2, true);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_113()
{
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 527275493, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	func_238(0);
}

void func_114(var uParam0)
{
	if ((uParam0->f_225 != 2 && uParam0->f_225 != 1) && uParam0->f_225 != 3)
	{
		return;
	}
	if (has_anim_event_fired(Global_35, -219856583) && IntToFloat(uParam0->f_267.f_1) < uParam0->f_267.f_2)
	{
		func_245(uParam0->f_225);
		func_119(&(uParam0->f_267), IntToFloat(uParam0->f_267.f_1) >= uParam0->f_267.f_2);
		uParam0->f_267.f_1++;
	}
	if (has_anim_event_fired(Global_35, 442509369) && IntToFloat(uParam0->f_267.f_1) < uParam0->f_267.f_2)
	{
	}
	if (has_anim_event_fired(Global_35, 574156416))
	{
		_0xd65fdc686a031c83(Global_35, -872596011, 3f);
		_0x6d07b371e9439019(Global_35);
		func_86();
	}
	if (has_anim_event_fired(Global_35, -1456814372))
	{
		uParam0->f_228 = 1;
		uParam0->f_157[5] = _0x05a0100ea714db68(Global_35, -1775366913);
		if (uParam0->f_212.f_2 != 4)
		{
			_0x3bbdd6143ff16f98(Global_35, &(uParam0->f_157[5]), "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_ARTHUR", 1);
		}
		clear_ped_secondary_task(Global_35);
	}
	if (IntToFloat(uParam0->f_267.f_1) >= uParam0->f_267.f_2)
	{
		uParam0->f_267.f_1 = 0;
		if (uParam0->f_225 == 1 || uParam0->f_225 == 3)
		{
			_0xd65fdc686a031c83(Global_35, -872596011, 1f);
			_0x6d07b371e9439019(Global_35);
			func_86();
		}
		else
		{
			if (func_246(0))
			{
				uParam0->f_263 = 1;
			}
			func_86();
			func_13(uParam0->f_1, 4096);
			uParam0->f_242 = 5;
			func_41(uParam0, 21);
			func_247(uParam0);
			func_127(&(uParam0->f_237), 1);
		}
		uParam0->f_234 = 0;
	}
	if (_0xc488b8c0e52560d8(Global_35))
	{
		func_86();
	}
	if (uParam0->f_228)
	{
	}
	if (has_anim_event_fired(Global_35, 1125903329))
	{
		uParam0->f_267.f_1 = 0;
		func_13(uParam0->f_1, 4096);
		uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_35, "p_bottleBeer01x_PH_R_HAND", 1);
		clear_ped_secondary_task(Global_35);
		func_247(uParam0);
		if (func_246(0))
		{
			uParam0->f_263 = 1;
		}
		_0x0751d461f06e41ce(player_id(), 42, 1, 0);
		_0x0751d461f06e41ce(player_id(), 8, 0, 0);
		func_127(&(uParam0->f_237), 1);
		uParam0->f_242 = 5;
		func_41(uParam0, 21);
		uParam0->f_228 = 0;
		uParam0->f_234 = 0;
	}
}

bool func_115(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_248(iParam0, &Var0);
}

void func_116(float fParam0, float fParam1, int iParam2)
{
	switch (iParam2)
	{
		case 5:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 8:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 0:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 2:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 4:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 3:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 6:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
	}
}

void func_117(float fParam0, float fParam1, int iParam2)
{
	switch (iParam2)
	{
		case 5:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 8:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 0:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 2:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 4:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 3:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
		case 6:
			*fParam0 = 151.524f;
			*fParam1 = -1.6588f;
			break;
	}
}

void func_118(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -0.155f, 0.54f, 0.31f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		case 4:
			*uParam1 = { 0.155f, 0.54f, 0.31f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		case 0:
			*uParam1 = { -0.15f, 0.44f, 0.3f };
			*uParam2 = { 0f, 0f, (90f + fParam3) };
			break;
		case 1:
			*uParam1 = { 0f, 0.54f, 0.3f };
			*uParam2 = { 0f, 0f, (90f + fParam3) };
			break;
		case 6:
			*uParam1 = { 0.028202f, 0.517729f, 0.313623f };
			*uParam2 = { 0f, 0f, (40.30627f + fParam3) };
			break;
		case 7:
			*uParam1 = { -0.049391f, 0.551208f, 0.31084f };
			*uParam2 = { 0f, 0f, (-114.9295f + fParam3) };
			break;
		case 8:
			*uParam1 = { 0.002734f, 0.59766f, 0.31084f };
			*uParam2 = { 0f, 0f, (-161.4093f + fParam3) };
			break;
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		case 9:
			*uParam1 = { 0f, 0.54f, 0.3f };
			*uParam2 = { 0f, 0f, (90f + fParam3) };
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			break;
	}
}

void func_119(var uParam0, bool bParam1)
{
	if ((func_249(*uParam0, 1573112293) || func_249(*uParam0, 672467738)) || func_249(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	_0xd962f8579d702db5();
	Global_1935496->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == uParam0->f_33[iVar0]->f_1)
		{
			fVar1 = func_250(0, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_251((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1);
			func_252(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0]->f_1)
		{
			fVar2 = func_250(2, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_253((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_252(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0]->f_1)
		{
			fVar3 = func_250(1, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_254((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
			func_252(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0]->f_1)
		{
			fVar4 = func_255((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_256(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_257(fVar4, 1, bVar8, 1);
				func_252(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0]->f_1)
		{
			fVar5 = func_255((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_256(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_258(fVar5, 1, bVar8, 1);
				func_252(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0]->f_1)
		{
			fVar6 = func_255((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
			if (func_256(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_259(fVar6, 1, bVar8, 1);
				func_252(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0]->f_1)
		{
			func_260((to_float(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0]->f_1)
			{
				fVar7 = func_261(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
				func_262(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			bVar11 = true;
		}
	}
	func_263(*uParam0, bParam1, bVar9, bVar11);
	func_264(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

bool func_120(int iParam0, int iParam1)
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

void func_121(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_is_anim_scene_started(&(uParam0->f_24[iVar0]), false))
		{
			abort_anim_scene(&(uParam0->f_24[iVar0]), false);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (uParam0->f_157[iVar1]->f_2 != 0 && does_entity_exist(&(uParam0->f_157[iVar1])))
		{
			delete_object(uParam0->f_157[iVar1]);
		}
		iVar1++;
	}
}

bool func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 4:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 5:
			return true;
		case 8:
			return true;
		case 6:
			return true;
		case 1:
			return false;
		case 7:
			return false;
		default:
			break;
	}
	return false;
}

int func_123(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_40(vParam2))
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
		if (func_217(iVar0, 2))
		{
			if (func_265(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_244(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_124(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_125(var uParam0)
{
	switch (*uParam0)
	{
		case 5:
			return -313.03f, 805.254f, 117.981f;
		case 4:
			return -5517.107f, -2905.854f, -2.751f;
		case 8:
			return 2948.506f, 528.047f, 44.348f;
		case 6:
			return -239.512f, 771.452f, 117.085f;
		case 1:
			return 2792.144f, -1168.741f, 46.934f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_126(int iParam0)
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

void func_127(var uParam0, int iParam1)
{
	func_266(uParam0, iParam1);
}

int func_128()
{
	return Global_1894899->f_2;
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_130(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_131(int iParam0)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_156((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_133(var uParam0)
{
	if (func_42(uParam0->f_19))
	{
		func_58(&(uParam0->f_19), 1, 1);
	}
	if (func_42(uParam0->f_20))
	{
		func_58(&(uParam0->f_20), 1, 1);
	}
	if (func_42(uParam0->f_21))
	{
		func_58(&(uParam0->f_21), 1, 1);
	}
	func_58(&(uParam0->f_22), 1, 1);
	if (does_cam_exist(uParam0->f_16))
	{
		destroy_cam(uParam0->f_16, false);
	}
	if (does_cam_exist(uParam0->f_17))
	{
		destroy_cam(uParam0->f_17, false);
	}
	if (func_57() == -1 && uParam0->f_14 != -1)
	{
		if (func_131(uParam0->f_14))
		{
			clear_ped_tasks(uParam0->f_13, 1, 0);
			_0xa2b18ff8d39f6d87(func_130(uParam0->f_14));
			func_35(uParam0->f_14, 0, 1, 0, 0);
		}
	}
	else
	{
		clear_ped_tasks(uParam0->f_13, 1, 0);
	}
	uParam0->f_227 = 0;
	if (is_valid_interior(get_interior_at_coords(func_99(*uParam0))))
	{
		unpin_interior(get_interior_at_coords(func_99(*uParam0)));
	}
	if (_does_volume_exist(uParam0->f_239))
	{
		_delete_volume(uParam0->f_239);
	}
	func_58(&(uParam0->f_238), 1, 1);
	uParam0->f_229 = 0;
	uParam0->f_231 = 0;
	uParam0->f_232 = 0;
	Global_1935369->f_51 = 0;
	if (!func_73(34))
	{
		set_player_control(player_id(), true, 0, false);
		display_radar(true);
	}
	uParam0->f_13 = 0;
	func_36(&(uParam0->f_246));
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_135(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_36(&(iParam0->f_24));
}

int func_136(int iParam0, bool bParam1)
{
	return func_267(iParam0, Global_1894899->f_2, bParam1);
}

bool func_137(int iParam0, int iParam1)
{
	if (func_57() != -1)
	{
		return false;
	}
	if (!func_172(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_138(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_268(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_269(iVar0, -423064657, 1))
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_269(iVar0, 557524588, 1) || func_269(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
			case 1:
				if (func_269(iVar0, 1792646445, 1) || func_269(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_139(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_270();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return false;
	}
	_0x20a4bf0e09bee146(iVar1);
	find_all_attached_carriable_entities(iParam0, iVar1);
	bVar2 = false;
	iVar3 = get_itemset_size(iVar1);
	if (iVar3 > 0)
	{
		if (is_in_itemset(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	destroy_itemset(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

bool func_140(bool bParam0)
{
	if (func_271(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_142(int iParam0)
{
	return Global_1935369->f_5[iParam0]->f_4;
}

bool func_143(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_144(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_272(bParam1, bParam2, bParam3);
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

bool func_145(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_147(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return func_274(iParam0);
}

void func_148(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_42((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_58(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_19 = 0;
						(*uParam0)[iVar0]->f_18 = "";
						(*uParam0)[iVar0]->f_20 = 0;
						(*uParam0)[iVar0]->f_16 = "";
						(*uParam0)[iVar0]->f_17 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_149(int iParam0)
{
	if (!func_169(iParam0))
	{
		return false;
	}
	if (!func_275(iParam0, 0))
	{
		return false;
	}
	if (func_276((*Global_1347702)[iParam0]->f_13, 64))
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_277((*Global_1835011)[iParam0]->f_1);
}

void func_151(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_325))
	{
		set_ped_config_flag(uParam0->f_325, 297, bParam1);
		set_ped_config_flag(uParam0->f_325, 315, !bParam1);
	}
}

bool func_152(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_278(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

int func_153(int iParam0)
{
	if (!func_279(iParam0))
	{
		return -1;
	}
	return func_280(iParam0);
}

void func_154(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_325))
	{
		set_ped_config_flag(uParam0->f_325, 130, !bParam1);
	}
}

void func_155(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_156(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_281(iParam0, 13))
	{
		func_209(iParam0, 0);
	}
	else
	{
		func_155(iParam0, 0);
	}
	if (func_42(iParam0->f_6))
	{
		if (bParam2)
		{
			func_58(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_157(var uParam0, bool bParam1)
{
	func_213(uParam0->f_8[9], bParam1);
	func_213(uParam0->f_8[10], bParam1);
	func_213(uParam0->f_8[11], bParam1);
	func_213(uParam0->f_8[12], bParam1);
}

void func_158(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_209((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

void func_159(var uParam0)
{
	switch (*uParam0)
	{
		case 2:
			if (!uParam0->f_5)
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_BARTENDER", 0, -491432029, 0, 0, 0, 1, 0);
			}
			else
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_FOOD", 0, -491432029, 0, 0, 0, 1, 0);
			}
			*uParam0 = 3;
			func_208(uParam0);
			break;
		case 3:
			if (func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 4;
			}
			else if (!uParam0->f_5)
			{
				*uParam0 = 2;
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
			}
			else
			{
				*uParam0 = 4;
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_BARTENDER", 0, -491432029, 0, 0, 0, 1, 0);
			}
			func_208(uParam0);
			break;
		case 4:
			if (func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 12;
				func_211(uParam0);
			}
			else
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 3;
				func_208(uParam0);
			}
			break;
		case 5:
			func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TRADE", 0, -491432029, 0, 0, 0, 1, 0);
			*uParam0 = 6;
			func_282(uParam0);
			break;
		case 11:
			func_210(uParam0->f_8[12], "SERVICE_TOGGLE_FENCE", 0, -491432029, 0, 0, 0, 1, 0);
			func_282(uParam0);
			*uParam0 = 6;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (func_124(uParam0->f_1, 128))
			{
				if (*uParam0 == 7)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_GUNSMITH", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 9)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_POSTOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 10)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TICKETOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 8)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_BUTCHER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				*uParam0 = 12;
				func_211(uParam0);
			}
			else
			{
				if (*uParam0 == 7)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_GUNSMITH", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 9)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_POSTOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 10)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TICKETOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 8)
				{
					func_210(uParam0->f_8[12], "SERVICE_TOGGLE_BUTCHER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				*uParam0 = 6;
				func_282(uParam0);
			}
			break;
		case 12:
			func_21(uParam0);
			if (func_124(uParam0->f_1, 1))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 3;
				func_208(uParam0);
			}
			else if ((func_124(uParam0->f_1, 32) || func_124(uParam0->f_1, 16)) || func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				if (func_124(uParam0->f_1, 32))
				{
					*uParam0 = 7;
				}
				else if (func_124(uParam0->f_1, 16))
				{
					*uParam0 = 9;
				}
				else if (func_124(uParam0->f_1, 512))
				{
					*uParam0 = 10;
				}
			}
			break;
		case 6:
			if (func_124(uParam0->f_1, 32) && func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 7;
			}
			else if (func_124(uParam0->f_1, 32) && !func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 7;
				func_208(uParam0);
			}
			else if (func_124(uParam0->f_1, 16) && func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 9;
			}
			else if (func_124(uParam0->f_1, 16))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 9;
			}
			else if (func_124(uParam0->f_1, 512))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 10;
			}
			else if (func_124(uParam0->f_1, 64))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 8;
			}
			else if (func_124(uParam0->f_1, 256))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 11;
			}
			else if (func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 12;
				func_211(uParam0);
			}
			else if (func_124(uParam0->f_1, 8) || func_124(uParam0->f_1, 32768))
			{
				func_210(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				func_154(uParam0, 0);
				*uParam0 = 5;
			}
			break;
	}
	func_134(&(uParam0->f_326), 16);
}

int func_160(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_161(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_283(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_284(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_173(&(iParam1->f_19));
		}
		if (func_285(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_286(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_161(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_287(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_288(*uParam0, 1, 1);
						}
					}
					else if (func_289(iParam1, 22))
					{
						func_288(*uParam0, 0, 1);
					}
				}
				if (func_152(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_290(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_291(iParam8);
					if (func_292(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_293(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_294(iParam1, uParam3, fVar8);
					if (func_295(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_148(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_296(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_152(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_297(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_292(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_290(uParam0, func_152(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_291(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_148(uParam3, 0, 0, 1, 1);
					}
					func_298(iParam1, 1);
				}
				func_294(iParam1, uParam3, fVar8);
				if (func_296(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_299(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_162(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_163(int* iParam0)
{
	func_209(iParam0, 9);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_165(int iParam0)
{
	if (!func_300(iParam0))
	{
		return false;
	}
	return Global_40.f_9384[iParam0] & 1 != 0;
}

void func_166(int iParam0, var uParam1)
{
	func_301(iParam0);
}

void func_167(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = 0;
}

void func_168(int iParam0)
{
	func_302(iParam0->f_1);
	if (func_57() != -1)
	{
		return;
	}
	if (func_303(iParam0->f_1))
	{
		return;
	}
	if (func_304(iParam0->f_1))
	{
		return;
	}
	if (func_305(iParam0->f_1))
	{
		return;
	}
	if (func_306(iParam0->f_1))
	{
		if (!func_307(*iParam0))
		{
			func_308(iParam0, 16384);
		}
		else
		{
			func_309(iParam0, 16384);
		}
		func_310(iParam0);
		return;
	}
	if (!func_311(iParam0))
	{
		return;
	}
	if (*iParam0 == 19)
	{
		if (!func_312(17))
		{
			return;
		}
		iParam0->f_4 = func_313(17);
		if (!func_24(iParam0->f_4, 0))
		{
			return;
		}
	}
	else if (!func_314(*iParam0, &(iParam0->f_4)))
	{
		return;
	}
	if (!func_24(iParam0->f_4, 10))
	{
		return;
	}
	if (func_315(iParam0->f_1))
	{
		if (func_316(iParam0->f_4))
		{
			stop_current_playing_speech(iParam0->f_4, 0);
		}
		return;
	}
	if (func_317(iParam0) || func_318(iParam0))
	{
		Global_1935630->f_27 = func_319();
		if (((func_278(iParam0->f_4, 0, 0, 0) || (Global_1935630->f_27 && func_320(iParam0->f_4, 1, 1, 1, 0, 0))) && iParam0->f_59 == 0) && !func_321(*iParam0, iParam0->f_1))
		{
			func_322(iParam0->f_1);
		}
		iVar0 = func_323(iParam0);
		switch (iParam0->f_50)
		{
			case 0:
				if (func_307(*iParam0) && !func_324(iParam0, 1024))
				{
					func_325(iParam0, 1);
				}
				break;
			case 1:
				if (*iParam0 != 19)
				{
					_0x85f500f4e24ca43e(iParam0->f_4, 0f);
					_0x9b9b9fa0ea283e3d(iParam0->f_4, 0f);
				}
				func_326(iParam0);
				func_327(*iParam0, 0, 1);
				func_328(iParam0);
				func_329(iParam0);
				func_330(iParam0);
				func_331(iParam0);
				if (func_321(*iParam0, iParam0->f_1))
				{
					func_325(iParam0, 10);
				}
				else
				{
					func_332(1);
					if (func_333(iVar0))
					{
						func_322(iParam0->f_1);
						func_325(iParam0, 11);
					}
					else if (func_321(*iParam0, iParam0->f_1))
					{
						func_325(iParam0, 10);
					}
					else if (((((func_334(iParam0->f_1) || func_335(*iParam0)) || *iParam0 == 22) || (func_28(&(iParam0->f_83)) && func_336(&(iParam0->f_83)) < 5f)) || func_337(Global_35)) || func_324(iParam0, 16384))
					{
						func_325(iParam0, 5);
						func_338(iParam0->f_1);
						func_173(&(iParam0->f_68));
						func_173(&(iParam0->f_80));
						func_173(&(iParam0->f_83));
						func_36(&(iParam0->f_74));
						func_339(iParam0);
					}
					else
					{
						func_325(iParam0, 2);
					}
				}
				break;
			case 2:
				if (!func_307(*iParam0))
				{
					func_325(iParam0, 12);
				}
				else if (func_333(iVar0))
				{
					func_322(iParam0->f_1);
					func_325(iParam0, 11);
				}
				else if (func_340(iParam0))
				{
					func_325(iParam0, 3);
					func_173(&(iParam0->f_68));
					func_173(&(iParam0->f_80));
					func_173(&(iParam0->f_83));
					func_36(&(iParam0->f_74));
					func_339(iParam0);
				}
				break;
			case 3:
				if (!func_307(*iParam0))
				{
					func_325(iParam0, 12);
				}
				else if (func_333(iVar0))
				{
					func_322(iParam0->f_1);
					func_325(iParam0, 11);
				}
				else if (func_341(iParam0))
				{
					func_36(&(iParam0->f_74));
					func_325(iParam0, 5);
				}
				break;
			case 5:
				if (!func_307(*iParam0))
				{
					func_325(iParam0, 12);
				}
				else if (func_333(iVar0))
				{
					func_322(iParam0->f_1);
					func_325(iParam0, 11);
				}
				else
				{
					if (!func_335(*iParam0))
					{
						if (iParam0->f_21 && func_342(iParam0))
						{
						}
						else if (!func_343(iParam0) && !func_344(iParam0))
						{
							func_345(iParam0);
						}
						if (func_346(*iParam0))
						{
							func_325(iParam0, 6);
							func_36(&(iParam0->f_80));
						}
					}
					if (func_321(*iParam0, iParam0->f_1))
					{
						func_325(iParam0, 10);
					}
				}
				break;
			case 6:
				if (func_347(iParam0, 1))
				{
					func_325(iParam0, 7);
					func_36(&(iParam0->f_68));
					func_36(&(iParam0->f_80));
					func_36(&(iParam0->f_71));
					func_36(&(iParam0->f_74));
				}
				break;
			case 7:
				if (iParam0->f_21 && func_342(iParam0))
				{
				}
				else
				{
					func_348(iParam0);
				}
				if (!func_346(*iParam0))
				{
					func_325(iParam0, 8);
				}
				break;
			case 8:
				if (func_347(iParam0, 0))
				{
					func_325(iParam0, 5);
					func_173(&(iParam0->f_68));
					func_173(&(iParam0->f_80));
					func_36(&(iParam0->f_71));
					func_36(&(iParam0->f_74));
				}
				break;
			case 10:
				if (!func_349(iParam0->f_1, 64))
				{
					func_71(iParam0->f_1, 64);
				}
				func_350(iParam0);
				break;
			case 11:
				if (!func_307(*iParam0))
				{
					func_325(iParam0, 12);
				}
				else
				{
					if (func_351(iParam0, iVar0))
					{
						func_325(iParam0, 5);
						func_173(&(iParam0->f_68));
						func_173(&(iParam0->f_80));
					}
					if (func_321(*iParam0, iParam0->f_1))
					{
						func_325(iParam0, 10);
					}
				}
				break;
			case 12:
				if (((((*iParam0 == 22 || func_352(iParam0->f_1)) || func_335(*iParam0)) || func_336(&(iParam0->f_83)) < 5f) || func_337(Global_35)) || func_353(iParam0))
				{
					func_354(iParam0->f_1);
					func_308(iParam0, 8192);
					func_308(iParam0, 16384);
					func_173(&(iParam0->f_83));
					func_355(iParam0);
					func_326(iParam0);
					if (*iParam0 != 19)
					{
						_0x85f500f4e24ca43e(iParam0->f_4, -1f);
						_0x9b9b9fa0ea283e3d(iParam0->f_4, -1f);
					}
				}
				break;
		}
	}
}

bool func_169(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_170(int iParam0)
{
	iVar0 = func_356(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_171(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_172(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_173(var uParam0)
{
	func_357(uParam0, 0f);
}

float func_174()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_177(int iParam0)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_178(int iParam0, int iParam1)
{
	if (func_57() != -1)
	{
		return;
	}
	if (!func_172(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_179(int iParam0)
{
	if (!func_172(iParam0))
	{
		return;
	}
	iVar0 = func_358(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_180(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_181(int iParam0)
{
	return iParam0 != 0;
}

int func_182(int iParam0, bool bParam1)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_137(iParam0, 2))
	{
		return 0;
	}
	if (func_180(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_130(iParam0)))
	{
		return 1;
	}
	if (func_137(iParam0, 1) && !bParam1)
	{
		func_185(iParam0, 128);
		return 1;
	}
	func_178(iParam0, 129);
	func_179(iParam0);
	_0xfc77c5b44d5ff7c0(func_130(iParam0));
	func_359(iParam0, 0);
	return 1;
}

float func_183(var uParam0)
{
	switch (*uParam0)
	{
		case 5:
			return -78.48f;
		case 4:
			return 210.96f;
		case 8:
			return 182.88f;
		case 6:
			return 114.48f;
		case 1:
			return 243.36f;
		default:
			break;
	}
	return 0f;
}

bool func_184(int iParam0, bool bParam1)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	if ((func_137(iParam0, 1) && !func_131(iParam0)) && func_177(iParam0))
	{
		return false;
	}
	if (!func_137(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_360(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_185(int iParam0, int iParam1)
{
	if (func_57() != -1)
	{
		return;
	}
	if (!func_172(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_186(int iParam0)
{
	if (!func_172(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

void func_187(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_188(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_189(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 443;
		case 0:
			return 508;
		case 4:
			return 351;
		case 7:
			return 432;
		default:
			break;
	}
	return -1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 49689699;
		case 6:
			return 1690461416;
		case 3:
			return -1792832235;
		case 2:
			return 785713260;
		case 1:
			return -2099882877;
		case 8:
			return 41051113;
		case 0:
			return -53891762;
		case 4:
			return 1016865322;
		case 7:
			return 19124873;
		default:
			break;
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	if (func_57() != -1)
	{
		return 0;
	}
	if (!func_360(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

float func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4f;
		case 4:
			return 4f;
		case 2:
			return 7.5f;
		case 3:
			return 7.5f;
		case 5:
			return 7.5f;
		case 8:
			return 7.5f;
		case 6:
			return 5f;
		case 1:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 7.5f;
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_6 < -1 || (uParam0->f_6 > -1 && uParam0->f_6 > 3))
	{
		return;
	}
	uParam0->f_6 = iParam1;
	if (bParam2)
	{
		func_135(uParam0, 0);
	}
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 != 0)
	{
		uParam0->f_332[0] = func_361(iParam2, -915411861, 1, 0, 0);
	}
	if (iParam1 != 0)
	{
		uParam0->f_332[1] = func_361(iParam1, -915411861, 1, 0, 0);
	}
	if (iParam3 != 0)
	{
		uParam0->f_332[2] = func_361(iParam3, -915411861, 1, 0, 0);
	}
	if (iParam4 != 0)
	{
		uParam0->f_332[3] = func_361(iParam4, -915411861, 1, 0, 0);
	}
}

void func_196(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!func_122(*uParam0) && func_203(iVar0, *uParam0))
		{
		}
		else
		{
			func_362(uParam0->f_24[iVar0], iVar0, *uParam0);
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	if (!func_122(iParam1))
	{
		func_363(uParam0, -686064834, "DRINK", 5);
		func_363(uParam0, -1971689092, "BOTTLE", 10);
		func_363(uParam0, -911874060, "shot", 11);
		func_363(uParam0, -615159064, "COIN", 2);
	}
	else
	{
		func_363(uParam0, 389673974, "KNIFE", 3);
		func_363(uParam0, 382293518, "FORK", 4);
		func_363(uParam0, -1638036806, "p_plate17x_PH_L_HAND", 9);
		func_363(uParam0, -975913766, "NAPKIN", 12);
		func_363(uParam0, -615159064, "COIN", 2);
		func_363(uParam0, -755866836, "p_spoon01x_PH_R_HAND", 0);
		func_363(uParam0, -686064834, "DRINK", 5);
		func_363(uParam0, -1971689092, "BOTTLE", 10);
		func_363(uParam0, -911874060, "shot", 11);
		switch (iParam1)
		{
			case 5:
				func_363(uParam0, -1375755183, "Main", 6);
				func_363(uParam0, -1621868985, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 2:
				func_363(uParam0, -999607173, "Main", 6);
				func_363(uParam0, -1763136482, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 4:
				func_363(uParam0, 2098372840, "Main", 6);
				func_363(uParam0, -1915884981, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 0:
				func_363(uParam0, 1257705601, "Main", 6);
				func_363(uParam0, -157095540, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 3:
				func_363(uParam0, -142475421, "Main", 6);
				func_363(uParam0, 1098641034, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 8:
				func_363(uParam0, -1103060970, "Main", 6);
				func_363(uParam0, 559479694, "p_bowl04x_stew_PH_L_HAND", 1);
				func_363(uParam0, 1857766991, "SIDE1", 7);
				func_363(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 6:
				func_363(uParam0, -1776489172, "p_bowl04x_stew_PH_L_HAND", 1);
				break;
		}
	}
}

int func_198(char* sParam0)
{
	fVar0 = _text_database_request(sParam0);
	if (fVar0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_199(var uParam0)
{
	switch (Local_14.f_95)
	{
		case 0:
			func_364(uParam0);
			if (func_278(uParam0->f_4, 0, 0, 0))
			{
				func_214(1);
			}
			if (Local_14.f_105 == 10)
			{
				func_214(2);
			}
			else if (Local_14.f_105 > 8 && Local_14.f_105 <= 22)
			{
				func_214(3);
			}
			if (func_365(uParam0))
			{
				func_214(12);
			}
			break;
		case 1:
			func_366(uParam0);
			if (Local_14.f_105 == 9 || Local_14.f_105 == 14)
			{
				func_214(3);
			}
			if (!func_278(uParam0->f_4, 0, 0, 0))
			{
				func_214(0);
			}
			if (func_365(uParam0))
			{
				func_214(12);
			}
			break;
		case 2:
			func_367(uParam0);
			if (Local_14.f_105 == 14)
			{
				func_214(3);
			}
			if (Local_14.f_105 == 8)
			{
				func_214(0);
			}
			break;
		case 3:
			if (func_368() || Local_14.f_105 == 9)
			{
				func_214(4);
			}
			else
			{
				func_214(5);
			}
			break;
		case 4:
			if (Local_14.f_105 == 8)
			{
				func_214(0);
			}
			if (func_369(uParam0))
			{
				func_214(6);
			}
			break;
		case 5:
			if (func_370(uParam0) && ((Local_14.f_105 == 18 || Local_14.f_105 == 19) || Local_14.f_105 == 20))
			{
				func_214(6);
			}
			break;
		case 6:
			if (Local_14.f_105 == 9 || Local_14.f_105 == 14)
			{
				func_214(5);
			}
			if (Local_14.f_105 == 22 || Local_14.f_105 == 21)
			{
				func_214(7);
			}
			if (Local_14.f_105 == 8)
			{
				func_214(0);
			}
			break;
		case 7:
			if (func_371(uParam0))
			{
				func_214(8);
			}
			break;
		case 8:
			if (Local_14.f_105 == 9 || Local_14.f_105 == 14)
			{
				func_214(3);
			}
			if (Local_14.f_105 == 8)
			{
				func_214(0);
			}
			break;
		case 12:
			if (func_372(uParam0, 0))
			{
				func_214(0);
			}
			break;
	}
	return 1;
}

int func_200(int iParam0)
{
	if (func_373(Global_35, 1, 0, 0) != -1569615261)
	{
		if (func_374(iParam0))
		{
			if (is_player_targetting_anything(player_id()))
			{
				if (func_320(iParam0->f_4, 1, 1, 1, 0, 0))
				{
					return 9;
				}
				return 11;
			}
			return 10;
		}
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, false, false))
	{
		if (does_entity_exist(iVar0))
		{
			if (is_entity_a_ped(iVar0))
			{
				if (iVar0 != Local_14.f_97)
				{
					iVar1 = get_ped_index_from_entity_index(iVar0);
					if (_0xa454d234e45bb6e5(iVar1, player_id()))
					{
						Local_14.f_97 = iVar0;
						Local_14.f_96++;
						if (func_375(iVar1))
						{
							Local_14.f_96 = 2;
						}
						if (!func_28(&(Local_14.f_98)))
						{
							func_30(&(Local_14.f_98), 1);
						}
						else
						{
							func_173(&(Local_14.f_98));
						}
					}
				}
			}
		}
	}
	if (Local_14.f_96 > 0)
	{
		if (func_34(&(Local_14.f_98)) >= 10f)
		{
			func_36(&(Local_14.f_98));
			Local_14.f_96 = 0;
		}
		if (Local_14.f_96 >= 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	iVar0 = 0;
	if (func_335(*uParam0))
	{
		iVar0 = 2;
		vVar1 = { get_entity_coords(uParam0->f_4, true, false) };
		if (Global_36.f_2 > (vVar1.z + 2f))
		{
			iVar0 = 3;
		}
	}
	else if (func_376(uParam0->f_4, Global_35, 1) > 25f)
	{
		iVar0 = 1;
	}
	switch (uParam0->f_59)
	{
		case 1:
			switch (uParam0->f_61)
			{
				case 2:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "UNAUTHORIZED_BEHIND_BAR";
							uParam0->f_56 = 4;
							return 1;
						case 1:
							if (_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) > 0.7f)
							{
								uParam0->f_44 = func_377(36);
							}
							else
							{
								uParam0->f_44 = func_377(3);
							}
							uParam0->f_56 = 5;
							return 1;
					}
					break;
				case 1:
					switch (uParam0->f_54)
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									uParam0->f_44 = "NO_INSULTS_HERE";
									break;
								case 1:
									uParam0->f_44 = "WHATS_GOING_ON_OVER_THERE";
									break;
								case 3:
									uParam0->f_44 = "WHATS_GOING_ON_UPSTAIRS";
									break;
							}
							uParam0->f_56 = 5;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "PUT_WEAPON_AWAY";
							if (!func_324(uParam0, 2048))
							{
								uParam0->f_56 = 5;
							}
							return 1;
						case 1:
							if (func_324(uParam0, 2048))
							{
								uParam0->f_45 = 1;
								uParam0->f_44 = func_377(41);
								uParam0->f_56 = 4;
							}
							return 1;
					}
					break;
				case 11:
					switch (uParam0->f_54)
					{
						case 0:
							if (_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) > 0.7f)
							{
								uParam0->f_44 = func_377(36);
							}
							else
							{
								uParam0->f_44 = func_377(4);
							}
							if (!func_324(uParam0, 2048))
							{
								uParam0->f_56 = 5;
							}
							return 1;
						case 1:
							if (func_324(uParam0, 2048))
							{
								uParam0->f_45 = 1;
								uParam0->f_44 = func_377(42);
								uParam0->f_56 = 4;
							}
							return 1;
					}
					break;
				case 8:
					switch (uParam0->f_54)
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									uParam0->f_44 = "NO_FIGHTING_HERE";
									break;
								case 1:
									uParam0->f_44 = "WHATS_GOING_ON_OVER_THERE";
									break;
								case 2:
									uParam0->f_44 = "WHATS_GOING_ON_UPSTAIRS";
									break;
							}
							if (!func_324(uParam0, 2048))
							{
								uParam0->f_56 = 5;
							}
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (uParam0->f_61)
			{
				case 1:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "COOL_IT_BAR";
							uParam0->f_56 = 5;
							return 1;
					}
					break;
				case 3:
				case 6:
				case 7:
				case 8:
					switch (uParam0->f_54)
					{
						case 0:
							if (_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) > 0.7f)
							{
								uParam0->f_44 = func_377(36);
							}
							else
							{
								uParam0->f_44 = func_377(4);
							}
							uParam0->f_56 = 4;
							return 1;
					}
					break;
			}
			break;
		case 3:
			switch (uParam0->f_61)
			{
				case 1:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "COOL_IT_BAR_ESCALATED";
							uParam0->f_56 = 15;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "PUT_WEAPON_AWAY_ESCALATED";
							uParam0->f_56 = 5;
							return 1;
						default:
							break;
					}
					break;
				case 11:
					uParam0->f_44 = "MISBEHAVIOR_HIGH";
					uParam0->f_56 = 15;
					return 1;
			}
			break;
		case 4:
			switch (uParam0->f_61)
			{
				case 1:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = func_377(26);
							uParam0->f_56 = 1;
							return 1;
						default:
							uParam0->f_44 = func_377(27);
							uParam0->f_56 = 60;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_54)
					{
						case 0:
							uParam0->f_44 = "NO_SERVICE_WEAPON_EQUIPPED";
							uParam0->f_56 = 10;
							return 1;
						case 1:
							uParam0->f_44 = func_377(26);
							uParam0->f_56 = 1;
							return 1;
						default:
							uParam0->f_44 = func_377(27);
							uParam0->f_56 = 60;
							return 1;
					}
					break;
			}
			break;
		case 5:
			switch (uParam0->f_60)
			{
				case 1:
				case 2:
					switch (uParam0->f_62)
					{
						case 10:
							switch (uParam0->f_54)
							{
								case 0:
									uParam0->f_44 = "END_MISBEHAVIOR";
									uParam0->f_56 = 5;
									return 1;
								default:
									break;
							}
							break;
					}
					break;
				case 3:
				case 4:
					switch (uParam0->f_62)
					{
						case 8:
						case 10:
						case 11:
							switch (uParam0->f_54)
							{
								case 0:
									uParam0->f_44 = "END_MISBEHAVIOR_ESCALATED";
									uParam0->f_56 = 5;
									return 1;
								case 1:
									uParam0->f_44 = "";
									uParam0->f_56 = -1;
									return 1;
								default:
									break;
							}
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_202(var uParam0)
{
	if (_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) > 0.7f)
	{
		uParam0->f_44 = func_378(36);
		return 1;
	}
	return 0;
}

bool func_203(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return true;
		case 2:
		case 3:
			if (iParam1 == 6)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_204(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

void func_205(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = { 0f, 0f, 120f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 4:
			*uParam2 = { 0f, 0f, 60f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), -0.2f, 0.88f, -1.05f) };
			break;
		case 2:
			*uParam2 = { 0f, 0f, -60f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), -0.1f, 0f, -1.05f) };
			break;
		case 3:
			*uParam2 = { 0f, 0f, 110f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 5:
			*uParam2 = { 0f, 0f, 40f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 6:
			*uParam2 = { 0f, 0f, -40f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 8:
			*uParam2 = { 0f, 0f, -60f };
			*uParam1 = { _get_object_offset_from_coords(func_99(iParam0), func_379(iParam0), 0f, -0.1f, -1.05f) };
			break;
	}
}

bool func_206(var uParam0, int iParam1, var uParam2)
{
	vVar0 = { func_99(iParam1) };
	vVar0.f_2 = (vVar0.z - 0.1f);
	iVar3 = 0;
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_object(uParam0->f_2, vVar0, true, true, false, false, true);
		set_entity_visible(*uParam0, false);
		set_entity_can_be_damaged(*uParam0, false);
		iVar3 = 1;
	}
	switch (uParam0->f_3)
	{
		case 1:
			set_anim_scene_entity(&(uParam2->f_24[0]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[1]), uParam0->f_1, *uParam0, 0);
			break;
		case 0:
			set_anim_scene_entity(&(uParam2->f_24[0]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[1]), uParam0->f_1, *uParam0, 0);
			break;
		case 2:
			if (func_122(iParam1))
			{
				set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
				set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
				set_anim_scene_entity(&(uParam2->f_24[0]), uParam0->f_1, *uParam0, 0);
				set_anim_scene_entity(&(uParam2->f_24[1]), uParam0->f_1, *uParam0, 0);
			}
			set_anim_scene_entity(&(uParam2->f_24[4]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[5]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[6]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[7]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[9]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[8]), uParam0->f_1, *uParam0, 0);
			break;
		case 5:
			set_anim_scene_entity(&(uParam2->f_24[4]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[6]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[9]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[8]), uParam0->f_1, *uParam0, 0);
			if (func_122(iParam1))
			{
				set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
				set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
			}
			break;
		case 10:
		case 11:
			set_anim_scene_entity(&(uParam2->f_24[5]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[7]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[9]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[8]), uParam0->f_1, *uParam0, 0);
			break;
		case 3:
			set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
			break;
		case 4:
			set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[10]), uParam0->f_1, *uParam0, 0);
			break;
		case 6:
		case 7:
		case 8:
			set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
			break;
		case 12:
			set_anim_scene_entity(&(uParam2->f_24[10]), uParam0->f_1, *uParam0, 0);
			break;
		case 9:
			set_anim_scene_entity(&(uParam2->f_24[2]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[3]), uParam0->f_1, *uParam0, 0);
			set_anim_scene_entity(&(uParam2->f_24[10]), uParam0->f_1, *uParam0, 0);
			break;
	}
	return iVar3;
}

void func_207(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_380(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_208(var uParam0)
{
	switch (*uParam0)
	{
		case 2:
			enable_control_action(0, -1616532217, true);
			if (func_381(func_128(), uParam0->f_322) != 2)
			{
				func_382(uParam0->f_8[0], "SERVICE_WHISKEY", &(uParam0->f_332[3]), 0, -163964935, 0, 0, 5, 1);
			}
			else
			{
				func_382(uParam0->f_8[0], "SERVICE_WHISKEY", 100, 0, -163964935, 0, 0, 5, 1);
			}
			func_383(uParam0->f_8[0], -1073177089, -1, -1, 0, 0);
			uParam0->f_8[0]->f_10 = 1;
			func_382(uParam0->f_8[1], "SERVICE_BEER", &(uParam0->f_332[2]), 0, -1616532217, 0, 0, 5, 1);
			func_383(uParam0->f_8[1], -1073177089, -1, -1, 0, 0);
			uParam0->f_8[1]->f_10 = 1;
			func_210(uParam0->f_8[2], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
			func_383(uParam0->f_8[2], -1073177089, -1, -1, 1, 0);
			uParam0->f_8[2]->f_10 = 1;
			if (uParam0->f_5)
			{
				if (!func_124(uParam0->f_323, 2))
				{
					func_382(uParam0->f_8[4], &(uParam0->f_327[0]), &(uParam0->f_332[0]), 0, -163964935, 0, 0, 5, 1);
					func_383(uParam0->f_8[4], -1721306936, -1, -1, 0, 0);
					uParam0->f_8[4]->f_10 = 1;
				}
				else
				{
					func_156(uParam0->f_8[4], 0, 0);
					func_213(uParam0->f_8[4], 1);
				}
				func_382(uParam0->f_8[3], &(uParam0->f_327[1]), &(uParam0->f_332[1]), 0, -1616532217, 0, 0, 5, 1);
				func_383(uParam0->f_8[3], -1721306936, -1, -1, 0, 0);
				uParam0->f_8[3]->f_10 = 1;
				func_210(uParam0->f_8[5], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
				func_383(uParam0->f_8[5], -1721306936, -1, -1, 1, 0);
				uParam0->f_8[5]->f_10 = 1;
			}
			if (func_124(uParam0->f_1, 128))
			{
				func_382(uParam0->f_8[7], "SERVICE_BATH", func_361(470467759, -915411861, 1, 0, 0), 0, -1616532217, 0, 0, 5, 1);
				func_383(uParam0->f_8[7], 1651111721, -1, -1, 0, 0);
				uParam0->f_8[7]->f_10 = 1;
				func_382(uParam0->f_8[6], "SERVICE_ROOM", func_361(1334501804, -915411861, 1, 0, 0), 0, -163964935, 0, 0, 5, 1);
				func_383(uParam0->f_8[6], 1651111721, -1, -1, 0, 0);
				uParam0->f_8[6]->f_10 = 1;
				func_210(uParam0->f_8[8], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
				func_383(uParam0->f_8[8], 1651111721, -1, -1, 1, 0);
				uParam0->f_8[8]->f_10 = 1;
			}
			func_210(uParam0->f_8[11], "SERVICE_TOGGLE_DRINKS", 0, -1616532217, 0, 0, 0, 1, 0);
			func_383(uParam0->f_8[11], -1, -1, -1073177089, 0, 0);
			uParam0->f_8[11]->f_10 = 1;
			if (uParam0->f_5)
			{
				func_210(uParam0->f_8[9], "SERVICE_TOGGLE_FOOD", 0, -163964935, 0, 0, 0, 1, 0);
				func_383(uParam0->f_8[9], -1, -1, -1721306936, 0, 0);
				uParam0->f_8[9]->f_10 = 1;
			}
			if (func_124(uParam0->f_1, 128))
			{
				func_210(uParam0->f_8[10], "SERVICE_TOGGLE_LODGING", 0, 648122183, 0, 0, 0, 1, 0);
				func_383(uParam0->f_8[10], -1, -1, 1651111721, 0, 0);
				uParam0->f_8[10]->f_10 = 1;
			}
			break;
	}
}

void func_209(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_210(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_18 = iParam2;
	iParam0->f_20 = iParam8;
	iParam0->f_16 = iParam4;
	iParam0->f_17 = iParam5;
	if (bParam7)
	{
		if (func_42(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_103(iParam0->f_6, iParam0->f_5, iParam0->f_19, 0);
			}
			else
			{
				func_384(iParam0->f_6, iParam0->f_5, 0);
			}
			func_43(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_385(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_211(var uParam0)
{
	func_383(uParam0->f_8[12], -1, -1, 1651111721, 0, 0);
	if (func_124(uParam0->f_1, 128))
	{
		func_383(uParam0->f_8[10], -1, -1, 1651111721, 0, 0);
		func_382(uParam0->f_8[11], "SERVICE_BATH", func_361(470467759, -915411861, 1, 0, 0), 0, -1616532217, 0, 0, 5, 1);
		func_383(uParam0->f_8[11], 1651111721, -1, -1, 0, 0);
		uParam0->f_8[11]->f_10 = 1;
		func_382(uParam0->f_8[9], "SERVICE_ROOM", func_361(1334501804, -915411861, 1, 0, 0), 0, -163964935, 0, 0, 5, 1);
		func_383(uParam0->f_8[9], 1651111721, -1, -1, 0, 0);
		uParam0->f_8[9]->f_10 = 1;
		func_210(uParam0->f_8[10], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
		func_383(uParam0->f_8[10], 1651111721, -1, -1, 1, 0);
		uParam0->f_8[10]->f_10 = 1;
	}
	if ((Global_1914319->f_18941.f_15 || Global_1914319->f_18941.f_18) || _0x7c7e4ab748ea3b07())
	{
		func_156(uParam0->f_8[11], 0, 0);
	}
	if (func_165(func_164(func_128())) || Global_1914319->f_18941.f_18)
	{
		func_156(uParam0->f_8[9], 0, 0);
	}
}

void func_212(int* iParam0)
{
	func_210(iParam0, "", 0, -163964935, 0, 0, 0, 1, 0);
}

void func_213(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_281(iParam0, 4))
		{
			func_58(&(iParam0->f_6), 1, 1);
			func_209(iParam0, 4);
		}
	}
	else if (func_281(iParam0, 4))
	{
		func_155(iParam0, 4);
		func_209(iParam0, 14);
	}
}

void func_214(int iParam0)
{
	if (Local_14.f_95 != iParam0)
	{
		func_36(&(Local_14.f_68));
		if (((iParam0 != 1 && Local_14.f_95 != 1) && iParam0 != 2) && Local_14.f_95 != 2)
		{
			func_36(&(Local_14.f_80));
		}
		func_386(&Local_14);
		Local_14.f_95 = iParam0;
	}
}

void func_215()
{
	Local_14.f_94 = 0;
}

void func_216(int iParam0)
{
	if (!func_387(iParam0))
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

bool func_217(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_218(int iParam0)
{
	iVar0 = func_389(func_388(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_219(int iParam0)
{
	if (func_220(81053684, iParam0))
	{
		return true;
	}
	if (func_220(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_220(int iParam0, int iParam1)
{
	iVar1 = func_389(func_388(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_390(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_221(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_391(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_222(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_224(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_225(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_226(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_227(int iParam0, int iParam1)
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

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_392(iParam0, iParam6);
	func_393(iParam0, iParam5);
	func_394(iParam0, iParam4);
	func_395(iParam0, iParam3);
	func_396(iParam0, iParam2);
	func_397(iParam0, iParam1);
}

bool func_229(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_230(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		case 5:
			return true;
		case 3:
			return true;
		case 8:
			return true;
		case 6:
			return true;
		case 1:
			return false;
		case 7:
			return false;
		default:
			break;
	}
	return false;
}

void func_231(bool bParam0)
{
	if (bParam0)
	{
		func_398(1);
	}
	else
	{
		Local_14.f_101++;
	}
	func_399(&Local_14);
}

void func_232(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_104(1) < iParam0)
	{
		iParam0 = func_104(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_82(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_233(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_400(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_234(int iParam0, int iParam1)
{
	if (func_57() == 0)
	{
		return 1;
	}
	if (!func_78(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0] = iParam1;
	return 1;
}

int func_235(int iParam0, int iParam1)
{
	if (func_57() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_83(func_82(19354810), iParam1);
	Global_20710[iVar0]->f_43 = (Global_20710[iVar0]->f_43 + iParam1);
	return 1;
}

int func_236(int iParam0, int iParam1)
{
	if (func_57() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0]->f_44 = (Global_20710[iVar0]->f_44 + iParam1);
	return 1;
}

void func_237(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		func_401(4);
	}
	func_401(2);
	set_bit(&(Global_1956580->f_1), 0);
}

int func_239(var uParam0)
{
	switch (*uParam0)
	{
		case 5:
			return 6;
		case 6:
			return 5;
		case 3:
			return 3;
		case 8:
			return 4;
		case 4:
			return 5;
		case 2:
			return 6;
		case 1:
			return 2;
		case 0:
			return 5;
		case 7:
			return 7;
		default:
			break;
	}
	return 0;
}

void func_240(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (*uParam0)
	{
		case 5:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -311.64f, 805.49f, 117.98f };
					*uParam2 = 100.88f;
					break;
				case 1:
					*uParam1 = { -311.72f, 805.94f, 117.98f };
					*uParam2 = 100.88f;
					break;
				case 2:
					*uParam1 = { -311.81f, 806.44f, 117.98f };
					*uParam2 = 100.88f;
					break;
				case 3:
					*uParam1 = { -311.87f, 806.87f, 117.98f };
					*uParam2 = 100.88f;
					break;
				case 4:
					*uParam1 = { -311.94f, 807.24f, 117.98f };
					*uParam2 = 100.88f;
					break;
				case 5:
					*uParam1 = { -312.15f, 808.32f, 117.98f };
					*uParam2 = 100.88f;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -240.86f, 770.25f, 117.09f };
					*uParam2 = -65.896f;
					break;
				case 1:
					*uParam1 = { -240.65f, 769.85f, 117.09f };
					*uParam2 = -65.896f;
					break;
				case 2:
					*uParam1 = { -240.5f, 769.44f, 117.09f };
					*uParam2 = -68.896f;
					break;
				case 3:
					*uParam1 = { -240.35f, 768.97f, 117.09f };
					*uParam2 = -68.896f;
					break;
				case 4:
					*uParam1 = { -240.15f, 768.48f, 117.09f };
					*uParam2 = -68.896f;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 1341.86f, -1375.52f, 79.48f };
					*uParam2 = 78.939f;
					break;
				case 1:
					*uParam1 = { 1341.83f, -1375.25f, 79.48f };
					*uParam2 = 78.939f;
					break;
				case 2:
					*uParam1 = { 1339.86f, -1372.09f, 79.48f };
					*uParam2 = 169.498f;
					break;
				case 3:
					*uParam1 = { 1339.61f, -1372.08f, 79.48f };
					*uParam2 = 169.498f;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 2947.98f, 526.34f, 44.34f };
					*uParam2 = -1.977f;
					break;
				case 1:
					*uParam1 = { 2948.39f, 526.31f, 44.34f };
					*uParam2 = -1.977f;
					break;
				case 2:
					*uParam1 = { 2948.94f, 526.3f, 44.34f };
					*uParam2 = -1.977f;
					break;
				case 3:
					*uParam1 = { 2945.6f, 527.92f, 44.35f };
					*uParam2 = -85.647f;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -5519.08f, -2908.68f, -2.75f };
					*uParam2 = 33.327f;
					break;
				case 1:
					*uParam1 = { -5517.4f, -2907.79f, -2.75f };
					*uParam2 = 33.327f;
					break;
				case 2:
					*uParam1 = { -5517f, -2907.52f, -2.75f };
					*uParam2 = 33.327f;
					break;
				case 3:
					*uParam1 = { -5516.42f, -2907.21f, -2.75f };
					*uParam2 = 33.327f;
					break;
				case 4:
					*uParam1 = { -5516.02f, -2906.96f, -2.75f };
					*uParam2 = 33.327f;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 2638.02f, -1223.1f, 52.38f };
					*uParam2 = -91.296f;
					break;
				case 1:
					*uParam1 = { 2638.1f, -1224.7f, 52.38f };
					*uParam2 = -91.296f;
					break;
				case 2:
					*uParam1 = { 2638.13f, -1225.48f, 52.38f };
					*uParam2 = -91.296f;
					break;
				case 3:
					*uParam1 = { 2638.1f, -1225.4f, 52.38f };
					*uParam2 = -91.296f;
					break;
				case 4:
					*uParam1 = { 2638.08f, -1226.11f, 52.38f };
					*uParam2 = -91.296f;
					break;
				case 5:
					*uParam1 = { 2637.88f, -1227f, 52.38f };
					*uParam2 = -91.296f;
					break;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 2794.23f, -1168.62f, 46.92f };
					*uParam2 = 60.267f;
					break;
				case 1:
					*uParam1 = { 2794.42f, -1168.35f, 46.92f };
					*uParam2 = 60.267f;
					break;
			}
			break;
		case 0:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -815.88f, -1320.3f, 42.68f };
					*uParam2 = 92.96f;
					break;
				case 1:
					*uParam1 = { -815.89f, -1319.77f, 42.68f };
					*uParam2 = 92.96f;
					break;
				case 2:
					*uParam1 = { -815.86f, -1318.76f, 42.68f };
					*uParam2 = 92.96f;
					break;
				case 3:
					*uParam1 = { -815.87f, -1318.37f, 42.68f };
					*uParam2 = 92.96f;
					break;
				case 4:
					*uParam1 = { -819.37f, -1316.2f, 42.68f };
					*uParam2 = -177.683f;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -3701.39f, -2592.35f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 1:
					*uParam1 = { -3701.37f, -2592.8f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 2:
					*uParam1 = { -3701.38f, -2593.43f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 3:
					*uParam1 = { -3701.34f, -2594.52f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 4:
					*uParam1 = { -3701.36f, -2595.32f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 5:
					*uParam1 = { -3701.34f, -2596.47f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 6:
					*uParam1 = { -3701.12f, -2600.46f, -14.31f };
					*uParam2 = -89.803f;
					break;
				case 7:
					*uParam1 = { -3701.16f, -2601.39f, -14.31f };
					*uParam2 = -89.803f;
					break;
			}
			break;
	}
}

float func_241(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

char* func_242(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE";
		case 0:
			return "PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE";
		case 2:
			return "PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK";
		case 3:
			return "PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK";
		default:
			break;
	}
	return "";
}

char* func_243(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE_STEW_ARTHUR";
		case 0:
			return "PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE_STEW_ARTHUR";
		case 2:
			return "PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK_RESTFRONT_MALE_A";
		case 3:
			return "PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK_RESTFRONT_MALE_A";
		default:
			break;
	}
	return "";
}

void func_244(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_62(iParam0, 1);
	func_188(iParam0, 1);
	func_189(iParam0, 128);
}

void func_245(int iParam0)
{
	iVar0 = func_402(iParam0);
	if (func_403())
	{
		func_405(func_404(iVar0));
	}
	Global_1935436->f_3 = get_game_timer();
}

bool func_246(int iParam0)
{
	if (func_406())
	{
		return false;
	}
	return func_407((*Global_1347702)[58]->f_15, 1);
}

void func_247(var uParam0)
{
	func_206(uParam0->f_157[5], *uParam0, uParam0);
	func_206(uParam0->f_157[11], *uParam0, uParam0);
	func_206(uParam0->f_157[2], *uParam0, uParam0);
	func_206(uParam0->f_157[10], *uParam0, uParam0);
	set_anim_scene_entity(&(uParam0->f_24[6]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[7]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[9]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[8]), "BARTENDER", uParam0->f_13, 0);
}

bool func_248(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_249(int iParam0, int iParam1)
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

float func_250(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_35));
			fVar1 = to_float(get_entity_max_health(Global_35, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_35);
			fVar1 = _get_ped_max_stamina(Global_35);
			break;
		case 2:
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			fVar1 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_251(float fParam0, bool bParam1)
{
	fVar0 = (50f * fParam0);
	iVar1 = round((fVar0 + IntToFloat(get_entity_health(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		_0x835f131e7dc8f97a(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_252(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_253(float fParam0)
{
	_0x51345ae20f22c261(player_id(), (fParam0 * 14f), 0, 0, 0);
}

void func_254(float fParam0)
{
	if (func_57() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_255(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_256(var uParam0, var uParam1, float fParam2)
{
	if (func_57() != -1)
	{
		return true;
	}
	if (!func_246(0))
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
		func_115(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
			func_408(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_115(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_257(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_57() == 0)
	{
		func_409(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_410(0);
	if (bParam1)
	{
		func_411(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_412();
	}
	if (bParam2)
	{
		fParam0 = func_413(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_415(0, func_414(fParam0, -100f, 100f), bParam1);
}

void func_258(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_57() == 0)
	{
		func_409(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_410(2);
	if (bParam1)
	{
		func_411(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_413(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_415(2, func_414(fParam0, -100f, 100f), bParam1);
}

void func_259(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_57() == 0)
	{
		func_409(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_410(1);
	if (bParam1)
	{
		func_411(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_413(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_415(1, func_414(fParam0, -100f, 100f), bParam1);
}

void func_260(float fParam0, bool bParam1)
{
	fVar0 = func_416(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_147(17))
	{
		return;
	}
	if (func_417())
	{
		iVar1 = func_418(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_418(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_69();
			func_419(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_420(&fVar3, &fVar4);
		func_421(13, func_414(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_408(94, 0);
		}
	}
}

float func_261(float fParam0, int iParam1)
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

void func_262(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_422(iParam0))
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
			sVar1 = func_423(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_424(-1);
			func_425(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_423(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_426(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_423(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_427(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_428(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_428(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_428(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_249(iParam0, -537818634))
	{
		func_83(func_82(-704089207), 1);
	}
	if (func_249(iParam0, -1457797660))
	{
		func_83(func_82(-1909697259), 1);
	}
	if (func_249(iParam0, 1573112293))
	{
		func_430(func_429(&iParam0), 1);
	}
	if (func_249(iParam0, 1939071949))
	{
		func_83(func_431(1368284188, -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_83(func_431(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628:
			func_83(func_431(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_83(func_431(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_83(func_431(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_83(func_431(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_83(func_431(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -834705084:
			func_83(func_431(1368284188, 497247514), 1);
			break;
		case 433340626:
		case 1895068170:
			func_83(func_431(1368284188, 1199394531), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_83(func_431(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_83(func_431(1368284188, -208442209), 1);
			break;
	}
	if (func_57() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_83(func_431(1368284188, 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_83(func_82(704570463), 1);
	}
}

void func_264(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (does_entity_exist(uParam0->f_174))
		{
			_0x18ff3110cf47115d(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

bool func_265(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_267(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_432(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_433(iParam0, uVar0, iVar1, bParam2);
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_269(int iParam0, int iParam1, bool bParam2)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	if (!func_435(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_436(iParam0, iParam1);
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

int func_270()
{
	return Global_1900383->f_393;
}

bool func_271(bool bParam0, var uParam1, var uParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_272(bool bParam0, bool bParam1, bool bParam2)
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

bool func_273(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_274(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_275(int iParam0, bool bParam1)
{
	if (func_57() != -1)
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

bool func_276(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_277(int iParam0)
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
		iVar0 = func_437(iParam0);
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

bool func_278(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_438(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_439(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_279(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_280(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_281(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_282(var uParam0)
{
	if (Global_1914319->f_18975 != -1 && func_136(uParam0->f_325, 0) == Global_1914319->f_18975)
	{
		func_210(uParam0->f_8[11], &(Global_1914319->f_18971), 0, -1616532217, 0, 0, 0, 1, 0);
		uParam0->f_6 = 1;
	}
	else
	{
		func_213(uParam0->f_8[11], 1);
		uParam0->f_6 = 0;
	}
}

void func_283(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_284(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_285(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_440(iParam0, iParam1))
		{
			if (!func_145(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_148(uParam2, 0, 0, 1, 0);
				func_146(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_145(iParam1->f_10, 1))
		{
			func_441(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_134(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_286(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_145(iParam4, 32);
		func_442(iParam1, uParam2, 0);
		iVar5 = func_443(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_148(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_145(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_145(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_145(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_145(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_145(iParam4, 8388608) || func_145(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_145(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_145(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_289(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_289(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_145(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_444(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_145(iParam4, 268435456))
			{
				iVar8 = func_445(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_446(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_289(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_145(iParam4, 2) || func_145(iParam4, 16))
			{
				func_288(*uParam0, 1, 1);
			}
			else
			{
				func_288(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_287(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_288(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_289(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_290(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_207(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_145(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_291(int iParam0)
{
	if (func_145(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_145(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_145(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_292(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_104(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_447(Global_35)) || func_448(Global_35)) || func_449(Global_35));
	fVar12 = -1f;
	if (func_28(&(iParam1->f_19)))
	{
		fVar12 = func_34(&(iParam1->f_19));
	}
	iVar13 = 0;
	while (iVar13 < iParam1->f_12)
	{
		if (&iParam1->f_12[iVar13] != 0)
		{
			_uiprompt_set_ambient_group_this_frame(*uParam0, fParam3, 1, 1, &(iParam1->f_12[iVar13]), 0, 0);
		}
		iVar13++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_42((*uParam4)[iVar0]->f_6);
		func_450(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_451(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (bVar4)
			{
				if ((*uParam4)[iVar0]->f_11.f_2 != -1)
				{
					_uiprompt_add_group_link((*uParam4)[iVar0]->f_11, (*Global_1945938)[(*uParam4)[iVar0]->f_6]->f_3, (*uParam4)[iVar0]->f_11.f_2);
					Jump @735; //curOff = 396
				}
				else if ((*uParam4)[iVar0]->f_11.f_4)
				{
					_uiprompt_add_group_return_link((*uParam4)[iVar0]->f_11, (*Global_1945938)[(*uParam4)[iVar0]->f_6]->f_3);
				}
				else if (!bParam18 && !bVar5)
				{
					if (func_452(iParam12, (*uParam4)[iVar0]->f_6))
					{
						if (!bVar7)
						{
							func_148(uParam4, 0, 0, 1, bParam5);
						}
						if (bVar6)
						{
							func_132(uParam4, 0, 0);
						}
						if (is_bit_set(uParam4[iVar0], 11))
						{
							func_442(iParam1, uParam4, is_bit_set(*iParam1, 6));
						}
						iParam1->f_1 = iVar0;
						bVar5 = true;
						iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
						if (!iParam1->f_9)
						{
							set_bit(iParam1, 0);
						}
						if (!bVar2)
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_16))
							{
								if (!is_string_null_or_empty((*uParam4)[iVar0]->f_17))
								{
									task_play_anim(Global_35, (*uParam4)[iVar0]->f_16, (*uParam4)[iVar0]->f_17, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
								}
							}
						}
						if (func_453(iParam1, fParam6, iParam1->f_9))
						{
							func_173(&(iParam1->f_24));
							if (bVar6)
							{
								func_132(uParam4, 0, 0);
							}
							iParam1->f_2 = 2;
						}
						if (iParam1->f_2 != 2)
						{
							if (iParam1->f_2 != 3)
							{
								if (bVar8)
								{
									iParam1->f_2 = 0;
								}
							}
						}
						if (!bParam14)
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
				if (bVar3)
				{
					func_454(iParam1, fParam2);
				}
				return bVar5;
			}
		}
	}
}

void func_293(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_294(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_455((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_454(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_295(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_456(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_162(iParam1, 0);
				func_442(iParam1, uParam2, func_289(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_296(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_173(&(iParam1->f_24));
			return 0;
		}
		else if (func_28(&(iParam1->f_24)))
		{
			func_36(&(iParam1->f_24));
			return 0;
		}
	}
	if (!func_28(&(iParam1->f_24)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return 0;
		}
	}
	return func_457(&(iParam1->f_24), fParam2);
	return 1;
}

void func_297(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_450(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_298(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_299(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 5;
	Var1.f_18 = 1073741824;
	Var1.f_22 = 1;
	Var28.f_2 = 570;
	Var28.f_3 = 1065353216;
	Var28.f_4 = -1082130432;
	Var28.f_9 = 2;
	Var28.f_11 = -1;
	Var28.f_11.f_1 = -1;
	Var28.f_11.f_2 = -1;
	func_442(iParam0, uParam1, 1);
	func_148(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 27);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var28, 22);
		iVar0++;
	}
}

bool func_300(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_301(int iParam0)
{
	Global_1395601->f_2 = iParam0;
}

void func_302(int iParam0)
{
	if (!func_229(iParam0))
	{
		return;
	}
	if (&Global_1914319->f_18594[iParam0] == 0)
	{
		return;
	}
	Global_1914319->f_18594[iParam0] = 0;
}

bool func_303(int iParam0)
{
	return func_458(iParam0, 131072);
}

bool func_304(int iParam0)
{
	return func_458(iParam0, 8388608);
}

bool func_305(int iParam0)
{
	return func_458(iParam0, 1048576);
}

bool func_306(int iParam0)
{
	return func_458(iParam0, 67108864);
}

bool func_307(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, Global_36);
}

void func_308(int iParam0, int iParam1)
{
	if (func_324(iParam0, iParam1))
	{
		func_134(&(iParam0->f_92), iParam1);
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!func_324(iParam0, iParam1))
	{
		func_146(&(iParam0->f_92), iParam1);
	}
}

void func_310(int iParam0)
{
	if (func_459(4))
	{
		func_460(4);
	}
	if (func_459(2))
	{
		func_460(2);
	}
	iParam0->f_49 = 0;
	func_461(iParam0, 0);
}

bool func_311(int iParam0)
{
	switch (*iParam0)
	{
		case -1:
		case 5:
		case 11:
		case 15:
		case 16:
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
		case 34:
			return false;
		default:
			break;
	}
	return true;
}

bool func_312(int iParam0)
{
	if (!func_462(iParam0))
	{
		return false;
	}
	if (!func_463(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_313(int iParam0)
{
	if (!func_464(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_314(int iParam0, var uParam1)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	if (func_57() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*uParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*uParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0)
{
	return func_458(iParam0, 33554432);
}

bool func_316(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_466();
	if (func_229(iVar0))
	{
		if (func_467(iVar0))
		{
			return true;
		}
	}
	return is_any_speech_playing(iParam0);
}

int func_317(int iParam0)
{
	if (!func_24(Global_35, 0))
	{
		return 0;
	}
	if (*iParam0 == 9)
	{
		return 1;
	}
	if ((func_468(iParam0->f_4, *iParam0) || func_469(iParam0->f_4, *iParam0)) || iParam0->f_50 == 10)
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)
{
	if (iParam0->f_59 > 0 && iParam0->f_59 != 5)
	{
		return 1;
	}
	return 0;
}

bool func_319()
{
	if (func_470())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

bool func_320(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_471(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_472(iVar0, 0)))
		{
			if (func_473(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_321(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	if (func_474(iParam1))
	{
		return false;
	}
	return func_458(Global_1914319->f_3[iParam0]->f_10, 1024);
}

void func_322(int iParam0)
{
	if (!func_229(iParam0))
	{
		return;
	}
	func_146(Global_1914319->f_18594[iParam0], 1);
}

int func_323(int iParam0)
{
	if (*iParam0 == 19)
	{
		return 0;
	}
	if (!does_entity_exist(iParam0->f_4))
	{
		return 0;
	}
	if (func_321(*iParam0, iParam0->f_1))
	{
		return 0;
	}
	if (func_335(*iParam0))
	{
		if (_0x7f9b9791d4cb71f6(iParam0->f_4, Global_35, 0, 0) != 1)
		{
			return 0;
		}
	}
	if (*iParam0 == 22)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam0->f_41)
	{
		iVar1 = func_475(iParam0);
		iVar0 = func_476(iParam0, iVar0, iVar1);
	}
	if (iParam0->f_59 != 0 && _does_volume_exist(Global_1914319->f_3[*iParam0]->f_25))
	{
		iVar2 = 0;
		while (iVar2 < get_number_of_events(0))
		{
			switch (get_event_at_index(0, iVar2))
			{
				case 402722103:
				case 2145012826:
					if (get_event_data(0, iVar2, &Var3, 9))
					{
						if (((((is_entity_a_ped(Var3.f_1) && get_ped_index_from_entity_index(Var3.f_1) == Global_35) && is_entity_a_ped(Var3)) && is_ped_human(get_ped_index_from_entity_index(Var3))) && (is_ped_injured(get_ped_index_from_entity_index(Var3)) || get_ped_config_flag(get_ped_index_from_entity_index(Var3), 11, true))) && _0xf256a75210c5c0eb(Global_1914319->f_3[*iParam0]->f_25, Var3.f_6))
						{
							iVar0 = func_476(iParam0, iVar0, 14);
						}
						else
						{
							iVar2++;
						}
						if (_is_ped_carrying(Global_35))
						{
							iVar12 = _get_first_entity_ped_is_carrying(Global_35);
							if (is_entity_a_ped(iVar12))
							{
								if (is_ped_human(get_ped_index_from_entity_index(iVar12)))
								{
									if (_is_ped_hogtied(get_ped_index_from_entity_index(iVar12)) && !is_entity_dead(iVar12))
									{
										iVar0 = func_476(iParam0, iVar0, 6);
									}
									else if (is_entity_dead(iVar12))
									{
										iVar0 = func_476(iParam0, iVar0, 7);
									}
								}
								else if ((((*iParam0 != 10 && *iParam0 != 18) && *iParam0 != 17) && *iParam0 != 2) && *iParam0 != 1)
								{
									iVar0 = func_476(iParam0, iVar0, 3);
								}
							}
						}
						if (func_373(Global_35, 1, 0, 0) != -1569615261)
						{
							if (iParam0->f_59 == 0)
							{
								if (!func_477())
								{
									bVar13 = true;
								}
							}
							if (!is_player_control_on(player_id()))
							{
								bVar13 = true;
							}
							if (!bVar13)
							{
								if (func_374(iParam0))
								{
									if (!(func_478(*iParam0) && iParam0->f_59 == 0) || func_320(iParam0->f_4, 1, 1, 1, 0, 0))
									{
										iVar0 = func_476(iParam0, iVar0, 9);
									}
									if (Global_1935630->f_25)
									{
										iVar0 = func_476(iParam0, iVar0, 12);
									}
								}
							}
						}
						if (iParam0->f_59 > 0)
						{
							if (!func_28(&(iParam0->f_89)))
							{
								func_30(&(iParam0->f_89), 1);
							}
							else if (func_34(&(iParam0->f_89)) > 4f)
							{
								if (_does_volume_exist(Global_1914319->f_3[*iParam0]->f_25))
								{
									func_479(Global_1914319->f_3[*iParam0]->f_25, &Var14);
									if ((!func_40(Var14) && !func_40(Var14.f_3)) && Var14.f_6 > 0f)
									{
										if (is_bullet_in_angled_area(Var14, Var14.f_3, Var14.f_6, false))
										{
											iVar0 = func_476(iParam0, iVar0, 12);
										}
									}
								}
								func_173(&(iParam0->f_89));
							}
						}
						if (func_480(Global_35, 0))
						{
							iVar0 = func_476(iParam0, iVar0, 8);
						}
						if (func_143(Global_35, Global_1914319->f_3[*iParam0]->f_28, 1, 0))
						{
							iVar0 = func_476(iParam0, iVar0, 2);
						}
						if (func_481(iParam0) && func_482(&iVar21))
						{
							if (func_249(iVar21, 160827531))
							{
								iVar0 = func_476(iParam0, iVar0, 4);
							}
							else if (func_249(iVar21, -1303648999))
							{
								iVar0 = func_476(iParam0, iVar0, 5);
							}
							else
							{
								iVar0 = func_476(iParam0, iVar0, 5);
							}
						}
						if (func_63(player_id(), 1))
						{
							iVar0 = func_476(iParam0, iVar0, 13);
						}
						return iVar0;
					}
					default:
						break;
			}
		}
	}
}

bool func_324(int iParam0, int iParam1)
{
	return func_145(iParam0->f_92, iParam1);
}

void func_325(int iParam0, int iParam1)
{
	if (iParam0->f_50 != iParam1)
	{
		func_483(iParam0);
		iParam0->f_50 = iParam1;
		iParam0->f_11 = 0;
		iParam0->f_10 = 0;
		func_386(iParam0);
	}
}

void func_326(int iParam0)
{
	if (iParam0->f_59 != 0 || iParam0->f_61 != 0)
	{
		func_327(*iParam0, 0, 1);
		iParam0->f_59 = 0;
		iParam0->f_61 = 0;
	}
	iParam0->f_57 = 0;
	iParam0->f_58 = 0;
}

void func_327(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_484(iParam0, 4);
		}
		else
		{
			func_485(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_486(iParam0, 4);
	}
	else
	{
		func_487(iParam0, 33554432);
	}
	_0x9b4e793b1cb6550a();
	func_488(iParam0);
}

void func_328(int iParam0)
{
	if (iParam0->f_52 != 0)
	{
		iParam0->f_52 = 0;
	}
}

void func_329(int iParam0)
{
	func_308(iParam0, 64);
	func_308(iParam0, 32);
	func_308(iParam0, 256);
	func_308(iParam0, 8192);
}

void func_330(int iParam0)
{
	if (func_349(iParam0->f_1, 8))
	{
		iVar0 = &Global_20710.f_1630[iParam0->f_1];
		func_489(iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6);
		if (iVar4 >= 28)
		{
			iParam0->f_43 = 6;
		}
		else if (iVar4 >= 7)
		{
			iParam0->f_43 = 5;
		}
		else if (iVar4 > 0)
		{
			iParam0->f_43 = 4;
		}
		else if (iVar3 > 0)
		{
			iParam0->f_43 = 3;
		}
		else if (iVar2 > 0)
		{
			iParam0->f_43 = 2;
		}
		else if (iVar1 > 0)
		{
			iParam0->f_43 = 1;
		}
	}
	else if (func_490(iParam0))
	{
		iParam0->f_43 = 5;
	}
}

void func_331(int iParam0)
{
	if (func_349(iParam0->f_1, 64))
	{
		if (!func_490(iParam0))
		{
			func_491(iParam0->f_4, Global_35, iParam0->f_4, 0, 0, 10);
		}
	}
	func_492(iParam0->f_1, 64);
}

void func_332(int iParam0)
{
	if (Global_1914319->f_18903 != iParam0)
	{
		Global_1914319->f_18903 = iParam0;
	}
}

bool func_333(int iParam0)
{
	return iParam0 != 0;
}

bool func_334(int iParam0)
{
	return func_458(iParam0, 134217728);
}

bool func_335(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_33))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_33, Global_36);
}

float func_336(var uParam0)
{
	if (!func_28(uParam0))
	{
		return 0f;
	}
	if (func_31(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_174() - uParam0->f_1);
}

bool func_337(int iParam0)
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

void func_338(int iParam0)
{
	func_493(iParam0, 134217728);
}

void func_339(int iParam0)
{
	iParam0->f_60 = 0;
	iParam0->f_62 = 0;
}

bool func_340(int iParam0)
{
	if (func_334(iParam0->f_1))
	{
		func_461(iParam0, 0);
		return true;
	}
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			if (func_494(iParam0))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
			}
			else
			{
				func_495(iParam0);
			}
			break;
		case 4:
			if (func_496(iParam0, iParam0->f_44))
			{
				func_461(iParam0, 6);
			}
			else
			{
				func_495(iParam0);
				func_461(iParam0, 1);
			}
			break;
		case 6:
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

bool func_341(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			if (func_497(iParam0))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
			}
			else
			{
				func_495(iParam0);
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

var func_342(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_22);
	return StackVal;
}

bool func_343(int iParam0)
{
	iVar0 = func_373(Global_35, 1, 0, 0);
	if (iVar0 != -1569615261)
	{
		if (iVar0 != 1549070292 && (func_498(iVar0) || func_249(iVar0, -1653669750)))
		{
			return false;
		}
	}
	if (func_499(iParam0))
	{
		return true;
	}
	if (func_278(iParam0->f_4, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_344(int iParam0)
{
	if (*iParam0 == 19)
	{
		return false;
	}
	switch (iParam0->f_52)
	{
		case 0:
			if ((func_500(iParam0, 1, 0) || !func_501(*iParam0, -1)) && func_502(&(iParam0->f_83), 120f))
			{
				if (!func_316(iParam0->f_4))
				{
					func_503(iParam0);
					func_496(iParam0, iParam0->f_44);
					func_504(iParam0, 1);
					func_173(&(iParam0->f_83));
				}
				return true;
			}
			break;
		case 1:
			if ((!func_501(*iParam0, -1) && func_502(&(iParam0->f_83), 60f)) && !func_316(iParam0->f_4))
			{
				func_503(iParam0);
				func_496(iParam0, iParam0->f_44);
				func_504(iParam0, 2);
			}
			return true;
		case 2:
			if (func_501(*iParam0, -1))
			{
				func_504(iParam0, 0);
			}
			return true;
	}
	return false;
}

void func_345(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				if (iParam0->f_18)
				{
					if ((func_78(iParam0->f_14, 0) && func_502(&(iParam0->f_68), 5f)) && ((!func_28(&(iParam0->f_71)) && func_502(&(iParam0->f_77), 5f)) || func_502(&(iParam0->f_71), 85f)))
					{
						func_461(iParam0, 2);
					}
					else if (func_502(&(iParam0->f_68), 30f))
					{
						func_461(iParam0, 1);
					}
				}
				else
				{
					if (func_28(&(iParam0->f_71)))
					{
						func_36(&(iParam0->f_71));
					}
					if (iParam0->f_11)
					{
						if (func_78(iParam0->f_12, 0))
						{
							if (func_78(iParam0->f_13, 0) && iParam0->f_13 == iParam0->f_12)
							{
								iParam0->f_10++;
							}
							else
							{
								iParam0->f_10 = 1;
							}
						}
						func_399(iParam0);
						iParam0->f_11 = 0;
						if (func_502(&(iParam0->f_68), 5f) && (!func_28(&(iParam0->f_74)) || func_502(&(iParam0->f_74), 10f)))
						{
							func_173(&(iParam0->f_74));
							func_461(iParam0, 3);
						}
					}
					if (!func_28(&(iParam0->f_68)))
					{
						func_30(&(iParam0->f_68), 0);
					}
					else if (func_502(&(iParam0->f_68), 30f) && *iParam0 != 19)
					{
						func_461(iParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (func_505(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 2:
			if (func_506(iParam0, 1))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
				func_173(&(iParam0->f_71));
			}
			break;
		case 3:
			iParam0->f_2 = 1;
			if (func_507(iParam0))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
				func_173(&(iParam0->f_80));
			}
			break;
		case 4:
			if (func_496(iParam0, iParam0->f_44))
			{
				func_173(&(iParam0->f_68));
			}
			func_461(iParam0, 6);
			break;
		case 6:
			iParam0->f_11 = 0;
			func_461(iParam0, 0);
			break;
	}
}

bool func_346(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_508(iParam0, 8388608);
}

bool func_347(int iParam0, bool bParam1)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			if (func_509(iParam0, bParam1))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

void func_348(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				if (!func_28(&(iParam0->f_68)))
				{
					func_30(&(iParam0->f_68), 0);
				}
				if (iParam0->f_11)
				{
					if ((!func_28(&(iParam0->f_74)) && func_502(&(iParam0->f_68), 1.5f)) || (func_502(&(iParam0->f_74), 6f) && func_502(&(iParam0->f_68), 5f)))
					{
						func_461(iParam0, 1);
					}
				}
				else if ((func_510(iParam0) && !iParam0->f_16) && (iParam0->f_2 == 1 || iParam0->f_2 == 0))
				{
					if (func_502(&(iParam0->f_68), 10f) && func_502(&(iParam0->f_77), 6f))
					{
						bVar0 = true;
					}
					else if (((!func_28(&(iParam0->f_68)) || func_502(&(iParam0->f_68), 6f)) && iParam0->f_6) && iParam0->f_7)
					{
						if (iParam0->f_7)
						{
							iParam0->f_7 = 0;
						}
						bVar0 = true;
					}
					if (bVar0)
					{
						func_461(iParam0, 2);
					}
				}
				else if (func_502(&(iParam0->f_68), 30f) && *iParam0 != 19)
				{
					func_461(iParam0, 3);
				}
			}
			if (iParam0->f_11)
			{
				if (iParam0->f_2 == 2)
				{
					func_511(iParam0);
				}
				else
				{
					func_399(iParam0);
				}
				if (func_78(iParam0->f_12, 0))
				{
					if (func_78(iParam0->f_13, 0) && iParam0->f_13 == iParam0->f_12)
					{
						iParam0->f_10++;
					}
					else
					{
						iParam0->f_10 = 1;
					}
				}
				iParam0->f_11 = 0;
			}
			break;
		case 1:
			if (func_507(iParam0))
			{
				func_461(iParam0, 4);
				func_173(&(iParam0->f_74));
			}
			break;
		case 2:
			if (func_506(iParam0, 0))
			{
				iParam0->f_16 = 1;
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
			}
			break;
		case 3:
			if (func_502(&(iParam0->f_77), 210f))
			{
				if (func_490(iParam0))
				{
					iParam0->f_44 = func_512(28);
				}
				else if (iParam0->f_3 && func_368())
				{
					iParam0->f_44 = func_513(22);
				}
				else
				{
					iParam0->f_44 = func_512(27);
				}
				func_461(iParam0, 4);
				func_173(&(iParam0->f_77));
			}
			else if (func_505(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 4:
			if (func_496(iParam0, iParam0->f_44))
			{
				func_173(&(iParam0->f_68));
			}
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			break;
	}
}

bool func_349(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_350(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (iParam0->f_64 != Global_1914319->f_18903)
			{
				iParam0->f_63 = 0;
				iParam0->f_64 = Global_1914319->f_18903;
			}
			if (((!func_514(iParam0, 8) && !func_515(Global_1914319->f_18903)) && func_324(iParam0, 2)) && iParam0->f_63 != 0)
			{
				return;
			}
			if (Global_1914319->f_18903 == 1)
			{
				return;
			}
			func_461(iParam0, 1);
			break;
		case 1:
			if (func_516(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 4:
			if (is_string_null_or_empty(iParam0->f_44))
			{
				func_461(iParam0, 6);
			}
			else
			{
				if (!func_324(iParam0, 2))
				{
					func_309(iParam0, 2);
				}
				if (func_496(iParam0, iParam0->f_44))
				{
					iParam0->f_63++;
					func_461(iParam0, 0);
				}
				else
				{
					func_461(iParam0, 6);
				}
			}
			break;
		case 6:
			iParam0->f_63 = 0;
			func_332(1);
			func_461(iParam0, 0);
			break;
	}
}

bool func_351(int iParam0, int iParam1)
{
	if (*iParam0 == 19)
	{
		return false;
	}
	switch (iParam0->f_59)
	{
		case 0:
			func_517(iParam0, iParam1);
			break;
		case 1:
			func_518(iParam0, iParam1);
			break;
		case 2:
			func_519(iParam0, iParam1);
			break;
		case 3:
			func_520(iParam0, iParam1);
			break;
		case 4:
			func_521(iParam0, iParam1);
			break;
		case 6:
			func_522(iParam0);
			break;
		case 5:
			func_523(iParam0, iParam1);
			break;
		default:
			break;
	}
	if (iParam0->f_59 < 6)
	{
		if (iParam0->f_61 == 9 || (iParam0->f_62 == 9 && iParam0->f_59 == 5))
		{
			func_322(iParam0->f_1);
		}
	}
	if (iParam0->f_59 != 0)
	{
		func_524(iParam0->f_1);
	}
	return (iParam0->f_59 == 0 && func_525(iParam0, 0));
}

bool func_352(int iParam0)
{
	return func_526(iParam0, 2);
}

bool func_353(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (func_316(iParam0->f_4))
			{
				stop_current_playing_speech(iParam0->f_4, 0);
			}
			func_461(iParam0, 1);
			break;
		case 1:
			if (func_527(iParam0))
			{
				if (are_strings_equal(iParam0->f_44, ""))
				{
					func_461(iParam0, 6);
				}
				else
				{
					func_461(iParam0, 4);
				}
			}
			else
			{
				func_495(iParam0);
			}
			break;
		case 4:
			if (func_496(iParam0, iParam0->f_44) || iParam0->f_53 == 2)
			{
				func_461(iParam0, 6);
			}
			else
			{
				func_495(iParam0);
				func_461(iParam0, 1);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_354(int iParam0)
{
	func_528(iParam0, 2);
}

void func_355(int iParam0)
{
	if (iParam0->f_50 != 0)
	{
		func_483(iParam0);
		func_386(iParam0);
		iParam0->f_11 = 0;
		iParam0->f_50 = 0;
	}
}

int func_356(int iParam0)
{
	if (!func_279(iParam0))
	{
		return -1;
	}
	return func_437(iParam0);
}

void func_357(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_174() - fParam1);
	func_176(uParam0, 1);
	func_175(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_358(int iParam0)
{
	iVar0 = func_130(iParam0);
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

void func_359(int iParam0, int iParam1)
{
	if (!func_172(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_360(int iParam0, bool bParam1)
{
	if (func_57() != -1)
	{
		return false;
	}
	if (!func_172(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_130(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_358(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_130(iParam0));
}

int func_361(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_249(iParam0, -5284486))
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
		if (func_529(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_530(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_531(iVar62, iVar61);
					if (func_78(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_361(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_361(iVar63, -915411861, 1, 0, 0));
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
	if (!func_529(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_362(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 0:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@stew@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 0;
					}
					break;
				case 1:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@stew@action_quick", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 1;
					}
					break;
				case 2:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@fork_knife@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 2;
					}
					break;
				case 3:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@fork_knife@action_quick", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 3;
					}
					break;
				case 4:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_beer@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 4;
					}
					break;
				case 5:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_whiskey@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 5;
					}
					break;
				case 6:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@reorder_beer@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 6;
					}
					break;
				case 7:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@reorder_whiskey@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 7;
					}
					break;
				case 9:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_whiskey_from_beer@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 9;
					}
					break;
				case 8:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_beer_from_whiskey@action", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 8;
					}
					break;
				case 10:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@table@table_exit@EXIT_PL", 0, "s_Exit_Left", false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 10;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@stew@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 0;
					}
					break;
				case 2:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@fork_knife@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 2;
					}
					break;
				case 1:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@stew@action_female_quick", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 1;
					}
					break;
				case 3:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@bar@fork_knife@action_female_quick", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 3;
					}
					break;
				case 4:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_beer@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 4;
					}
					break;
				case 5:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_whiskey@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 5;
					}
					break;
				case 6:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@reorder_beer@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 6;
					}
					break;
				case 7:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@reorder_whiskey@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 7;
					}
					break;
				case 9:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_whiskey_from_beer@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 9;
					}
					break;
				case 8:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_drink_order@order_beer_from_whiskey@action_female", 0, 0, false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 8;
					}
					break;
				case 10:
					if (!_does_anim_scene_exist(*uParam0))
					{
						*uParam0 = _create_anim_scene("scenario@mech@prop_player_food_order@table@table_exit@EXIT_PL", 0, "s_Exit_Left", false, true);
						uParam0->f_1 = 0;
						uParam0->f_2 = 10;
					}
					break;
			}
			break;
	}
}

void func_363(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	(*uParam0)[iParam3]->f_2 = iParam1;
	(*uParam0)[iParam3]->f_1 = sParam2;
	(*uParam0)[iParam3]->f_3 = iParam3;
}

void func_364(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (_0x54b187f111d9c6f8(iParam0->f_4, 0))
			{
				func_173(&(iParam0->f_68));
			}
			else if (!func_316(iParam0->f_4))
			{
				if (!func_28(&(iParam0->f_68)))
				{
					func_30(&(iParam0->f_68), 0);
				}
				else if (func_502(&(iParam0->f_68), 75f))
				{
					func_461(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_532(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			func_173(&(iParam0->f_68));
			break;
	}
}

bool func_365(var uParam0)
{
	if (!func_533(func_128()) || *uParam0 != Global_1914319->f_18941.f_10)
	{
		return false;
	}
	if (func_459(4))
	{
		if (!func_459(16))
		{
			return true;
		}
		func_460(4);
	}
	if (func_459(2))
	{
		if (!func_459(8))
		{
			return true;
		}
		func_460(2);
	}
	return false;
}

void func_366(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				if (!func_28(&(iParam0->f_68)))
				{
					if (!func_534(2))
					{
						func_461(iParam0, 1);
					}
					else
					{
						func_173(&(iParam0->f_68));
					}
				}
				else if (func_502(&(iParam0->f_68), 30f))
				{
					func_461(iParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_534(2) && !func_535(iParam0))
			{
				if (func_490(iParam0))
				{
					iParam0->f_44 = func_378(3);
				}
				else
				{
					iParam0->f_44 = func_378(1);
				}
				func_398(2);
			}
			else if (func_336(&(iParam0->f_80)) > 205f)
			{
				iParam0->f_44 = func_378(2);
			}
			else if (func_490(iParam0))
			{
				iParam0->f_44 = func_378(5);
			}
			else
			{
				iParam0->f_44 = func_378(4);
			}
			func_461(iParam0, 4);
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			func_173(&(iParam0->f_68));
			break;
	}
}

void func_367(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				if (!func_28(&(iParam0->f_71)))
				{
					func_173(&(iParam0->f_71));
				}
				else if (func_502(&(iParam0->f_71), 30f))
				{
					func_461(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_490(iParam0))
			{
				func_461(iParam0, 6);
			}
			else
			{
				iParam0->f_44 = func_378(7);
				func_461(iParam0, 4);
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			func_173(&(iParam0->f_71));
			break;
	}
}

bool func_368()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(Global_35))
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			func_536(iParam0);
			func_461(iParam0, 4);
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

bool func_370(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (func_537())
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			if (!func_316(iParam0->f_4) && func_538(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_371(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4))
			{
				if ((!_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) < 0.4f) || get_random_int_in_range(0, 3) == 0)
				{
					func_461(iParam0, 1);
				}
				else
				{
					func_461(iParam0, 6);
				}
			}
			break;
		case 1:
			if (func_490(iParam0))
			{
				func_461(iParam0, 6);
			}
			else
			{
				switch (Local_14.f_106)
				{
					case 4:
					case 5:
						iParam0->f_44 = func_378(25);
						break;
					default:
						if (_0x50f124e6ef188b22(Global_35) && _0x6fb76442469abd68(Global_35) > 0.4f)
						{
							iParam0->f_44 = "";
							Local_14.f_102 = 0;
						}
						else
						{
							iParam0->f_44 = func_378(13);
							Local_14.f_102 = 1;
						}
						break;
				}
				func_461(iParam0, 4);
			}
			break;
		case 4:
			func_496(iParam0, iParam0->f_44);
			func_461(iParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_372(int iParam0, bool bParam1)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_316(iParam0->f_4) && !func_316(Global_35))
			{
				func_461(iParam0, 1);
			}
			break;
		case 1:
			func_539(iParam0, bParam1);
			func_461(iParam0, 4);
			break;
		case 4:
			if (is_string_null_or_empty(iParam0->f_44))
			{
				func_461(iParam0, 6);
			}
			else
			{
				uVar0 = iParam0->f_49;
				func_496(iParam0, iParam0->f_44);
				iParam0->f_49 = uVar0;
				iParam0->f_49++;
				func_461(iParam0, 0);
			}
			break;
		case 6:
			if (func_459(4))
			{
				func_460(4);
			}
			if (func_459(2))
			{
				func_460(2);
			}
			iParam0->f_49 = 0;
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

int func_373(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_374(int iParam0)
{
	iVar0 = func_373(Global_35, 1, 0, 0);
	if (((iVar0 != 1549070292 && (func_498(iVar0) || func_249(iVar0, -1653669750))) && !(*iParam0 == 6 && func_535(iParam0))) && !(_0x6abad7b0a854f8fb(iVar0) || iVar0 == 1247405313))
	{
		return true;
	}
	return false;
}

bool func_375(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -1909449322:
		case -1213601266:
		case 240900868:
		case 729192041:
		case 979645508:
		case 1649972612:
		case 1820607364:
		case 1988888198:
			return true;
	}
	return false;
}

float func_376(int iParam0, int iParam1, bool bParam2)
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
	return func_67(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PUT_WEAPON_AWAY_ESCALATED";
		case 1:
			return "PUT_WEAPON_AWAY_WARY";
		case 2:
			return "PUT_WEAPON_AWAY";
		case 3:
			return "MISBEHAVING_LOW";
		case 4:
			return "MISBEHAVING_MED";
		case 5:
			return "MISBEHAVING_HIGH";
		case 6:
			return "WELCOME_MASK";
		case 7:
			return "UNAUTHORIZED_AREA_NEAR";
		case 8:
			return "UNAUTHORIZED_AREA_FAR";
		case 9:
			return "WELCOME_CARRYING_HOGTIED_PED";
		case 10:
			return "WELCOME_CARRYING_DEAD_PED";
		case 11:
			return "WELCOME_GET_THAT_OUT_OF_HERE";
		case 12:
			return "GUN";
		case 13:
			return "INTIMIDATED_GEN";
		case 14:
			return "INTIMIDATED_ROB_SHOPKEEPER_RESIST";
		case 15:
			return "CHALLENGE_THREATEN_ARMED_SHOP";
		case 16:
			return "NO_FIGHTING_HERE";
		case 17:
			return "NO_INSULTS_HERE";
		case 18:
			return "CUT_THAT_OUT";
		case 19:
			return "WHATS_YOUR_PROBLEM";
		case 20:
			return "MASK_ESCALATED";
		case 21:
			return "MASK_NOT_REMOVED";
		case 22:
			return "LAW_THREAT";
		case 23:
			return "GET_OUT_SHOP";
		case 24:
			return "LEAVE_NOW_SHOP";
		case 25:
			return "NO_SERVICE";
		case 26:
			return "IGNORING_YOU";
		case 27:
			return "SILENCE";
		case 28:
			return "FIGHT";
		case 29:
			return "GET_THE_LAW";
		case 30:
			return "END_MISBEHAVIOR";
		case 31:
			return "END_MISBEHAVIOR_ESCALATED";
		case 33:
			return "WELCOME_BACK_BEHAVING_NOW";
		case 32:
			return "MASK_REMOVED";
		case 34:
			return "WELCOME_WANTED";
		case 35:
			return "WELCOME_WANTED_COMBATIVE";
		case 36:
			return "MISBEHAVIOR_DRUNK_CUSTOMER";
		case 37:
			return "PLAYER_MISBEHAVIOR_DEFUSE";
		case 38:
			return "PLAYER_FOLLOWS_INSTRUCTION";
		case 39:
			return "PLAYER_REMOVE_MASK";
		case 40:
			return "PLAYER_FOLLOWS_INSTRUCTION_ESCALATED";
		case 41:
			return "PLAYER_DISMISSES";
		case 42:
			return "PLAYER_RETALIATES";
		case 43:
			return "PLAYER_HOLDUP_DEFUSE";
		case 44:
			return "PLAYER_GOADS_FIGHT";
		case 45:
			return "PLAYER_GOADS_FLEE";
		default:
			break;
	}
	return "";
}

char* func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RIGHT_WITH_YOU_SHOUTED";
		case 1:
			return "CAN_I_HELP_YOU";
		case 2:
			return "CAN_I_HELP_YOU_LINGERING";
		case 3:
			return "CAN_I_HELP_YOU_WARY";
		case 4:
			return "TAKE_YOUR_TIME";
		case 5:
			return "TAKE_YOUR_TIME_WARY";
		case 6:
			return "FOOD_OR_DRINK";
		case 7:
			return "MENU_IDLING";
		case 8:
			return "CHAT_PREPARE_DRINK";
		case 9:
			return "HANGING_AROUND";
		case 10:
			return "HANGING_AROUND_WARY";
		case 11:
			return "GENERIC_BUY_RESPONSE_SHOUTED";
		case 12:
			return "SELL_FOOD_ITEM_AGAIN";
		case 13:
			return "OFFER_ANOTHER_DRINK";
		case 14:
			return "CHAT_SHOPKEEPER_GOSSIP";
		case 15:
			return "CHAT_1907";
		case 16:
			return "CHAT_SHOPKEEPER_LOCATION";
		case 17:
			return "PROMOTE_MINIGAME";
		case 18:
			return "HAND_OVER_BAR_DRINK_BEER";
		case 19:
			return "HAND_OVER_BAR_DRINK_WHISKEY";
		case 20:
			return "HAND_OVER_BAR_ITEM";
		case 21:
			return "HAND_OVER_BAR_ITEM_WARY";
		case 22:
			return "HAND_OVER_BAR_FOOD";
		case 23:
			return "HAND_OVER_BAR_DRINK";
		case 24:
			return "HAND_OVER_BAR_QUALITY_DRINK";
		case 25:
			return "FINISHED_FOOD";
		case 26:
			return "HOWS_IT_GOING_PROSTITUTE";
		case 27:
			return "PLAYER_ORDER_WHISKEY";
		case 28:
			return "PLAYER_ORDER_BEER";
		case 29:
			return "PLAYER_ORDER_SPECIAL_DRINK";
		case 30:
			return "PLAYER_ORDER_GENERIC_DRINK";
		case 31:
			return "PLAYER_ACCEPT_ANOTHER_DRINK";
		case 32:
			return "PLAYER_ORDER_DRINK_DRUNK";
		case 33:
			return "PLAYER_ORDER_ANOTHER_DRINK_DRUNK";
		case 34:
			return "PLAYER_ORDER_GENERIC_FOOD";
		case 35:
			return "DRINK_ORDER_HESITANT";
		case 36:
			return "FAREWELL_DRUNK";
		default:
			break;
	}
	return "";
}

float func_379(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 25.3172f;
		case 0:
			return 102.4604f;
		case 2:
			return 270.0392f;
		case 5:
			return 4.0936f;
		case 3:
			return 82.7164f;
		case 8:
			return 280.8514f;
		default:
			break;
	}
	return 0f;
}

void func_380(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_42(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_58(&(iParam1->f_6), 0, 1);
	}
	if (!func_42(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_455(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_102(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_42(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					if (iParam1->f_11 != -1)
					{
						iVar1 = iParam1->f_11;
					}
					else
					{
						iVar1 = _uiprompt_get_group_id_for_target_entity(iParam0);
						iParam1->f_11 = iVar1;
					}
					func_540(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_541(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_542(iParam1->f_6, sVar0, iParam1->f_21, iParam1->f_19, 1);
					}
					else
					{
						func_103(iParam1->f_6, sVar0, iParam1->f_19, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_541(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_43(iParam1->f_6, 0, 1);
				}
				else
				{
					func_43(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_381(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_382(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_19 = iParam2;
	func_209(iParam0, 1);
	func_210(iParam0, sParam1, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	uParam0->f_11 = iParam1;
	uParam0->f_11.f_1 = iParam2;
	uParam0->f_11.f_2 = iParam3;
	uParam0->f_11.f_4 = iParam4;
	uParam0->f_11.f_3 = iParam5;
}

void func_384(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_385(int* iParam0, char* sParam1)
{
	if (func_42(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_384(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_155(iParam0, 1);
}

void func_386(int iParam0)
{
	if (iParam0->f_51 != 0)
	{
		iParam0->f_51 = 0;
	}
}

bool func_387(int iParam0)
{
	return func_217(iParam0, 2);
}

int func_388(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_543(iVar0);
}

int func_389(int iParam0, int iParam1)
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

int func_390(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_391(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_392(int iParam0, int iParam1)
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

void func_393(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_394(int iParam0, int iParam1)
{
	iVar0 = func_222(*iParam0);
	iVar1 = func_221(*iParam0);
	if (iParam1 < 1 || iParam1 > func_227(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_395(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_396(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_397(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_398(int iParam0)
{
	func_146(&(Local_14.f_94), iParam0);
}

void func_399(int iParam0)
{
	func_309(iParam0, 32);
}

var func_400(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_544(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_401(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_402(int iParam0)
{
	iVar0 = -24362764;
	switch (iParam0)
	{
		case 1:
		case 3:
			iVar0 = -24362764;
			break;
		case 2:
			iVar0 = -368374107;
			break;
	}
	return iVar0;
}

bool func_403()
{
	if (func_545(0, 0, 1))
	{
		switch (func_546(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
			default:
				break;
		}
		if (func_57() == -1)
		{
			if (_get_number_of_references_of_script_with_name_hash(1895447864) > 0)
			{
				return false;
			}
		}
	}
	return true;
}

float func_404(int iParam0)
{
	switch (iParam0)
	{
		case -24362764:
			fVar0 = 0.025f;
			break;
		case -368374107:
			fVar0 = 0.1f;
			break;
		default:
			fVar0 = 0.025f;
			break;
	}
	if (func_547(-127011478, 1, 0))
	{
		fVar0 = (fVar0 * 0.5f);
	}
	return fVar0;
}

void func_405(float fParam0)
{
	func_548((Global_1935436->f_9 + fParam0));
}

bool func_406()
{
	if (func_57() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_407(int iParam0, bool bParam1)
{
	switch (func_356(iParam0))
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

void func_408(int iParam0, bool bParam1)
{
	func_549(iParam0, &iVar0, &iVar1);
	if (!func_550(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_551(iVar0, iVar1);
}

void func_409(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_413(iParam0, fParam1, 1);
	}
	func_553(iParam0, (func_552(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_410(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_411(float fParam0)
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

void func_412()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_413(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_69();
	func_70(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_554(iParam0, 2);
	if (func_556(iVar0, func_555(iParam0, 2), 1))
	{
		func_557(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_408(88, bParam2);
		return 0f;
	}
	func_558(iParam0, func_69(), 2);
	func_557(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_414(float fParam0, float fParam1, float fParam2)
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

void func_415(int iParam0, float fParam1, bool bParam2)
{
	if (func_57() != -1)
	{
		return;
	}
	if (!func_147(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_559(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_560(iParam0), iVar0);
	func_562(func_561(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_563(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_408(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_408(func_564(iParam0), 1);
	}
	sVar1 = func_565(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

float func_416(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

bool func_417()
{
	if (func_57() != -1)
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
	return func_566(Global_1347477->f_195, 0);
}

int func_418(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_419(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_221(*iParam0);
	iVar1 = func_222(*iParam0);
	iVar2 = func_223(*iParam0);
	iVar3 = func_224(*iParam0);
	iVar4 = func_225(*iParam0);
	iVar5 = func_226(*iParam0);
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
	iVar6 = func_227(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_227(iVar1, iVar0);
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
	func_228(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_420(float fParam0, float fParam1)
{
	if (!func_567())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_421(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_568(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_569(1, bVar1, 1, sVar2);
		func_570(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_559(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_571();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_559(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_559(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_422(int iParam0)
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

char* func_423(int iParam0)
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

void func_424(int iParam0)
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
	iVar1 = func_572(2);
	func_573(to_float((iParam0 * iVar1)), 0);
}

void func_425(bool bParam0)
{
	if (func_57() != -1)
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
		func_408(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_408(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_574(1, bParam0, 1);
	func_571();
	Global_40.f_11095.f_43 = bParam0;
}

void func_426(int iParam0)
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
	iVar1 = func_575(2);
	func_576(to_float((iParam0 * iVar1)));
}

void func_427(int iParam0)
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
	iVar1 = func_577(2);
	func_578(to_float((iParam0 * iVar1)), 0);
}

void func_428(int iParam0, bool bParam1, bool bParam2)
{
	func_553(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_429(int iParam0)
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

void func_430(int iParam0, int iParam1)
{
	Var0 = { func_431(-372368982, func_579(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_83(func_580(106002964), iParam1);
}

struct<2> func_431(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_432(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_57() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_433(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_180(iVar2) != 0 && _0x800df3fc913355f3(func_130(iVar2)))
		{
			if (func_130(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_434(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_435(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_436(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	func_581(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

int func_437(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_582(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_438(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_439(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_440(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_583((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_441(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_455((*uParam0)[iVar0]))
		{
			func_209((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_442(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_58(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_135(iParam0, 0);
		}
	}
}

int func_443(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_380(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_42((*uParam2)[iVar0]->f_6))
		{
			func_209((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_444(var uParam0)
{
	iVar0 = func_584(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_445(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_446(int* iParam0, int* iParam1)
{
	if (!func_289(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_209(iParam1, 19);
			func_162(iParam0, 23);
			func_585(iParam1, 2);
		}
	}
}

bool func_447(int iParam0)
{
	return (func_586(iParam0, 4) || func_586(iParam0, 5));
}

bool func_448(int iParam0)
{
	return func_586(iParam0, 7);
}

bool func_449(int iParam0)
{
	return func_586(iParam0, 6);
}

void func_450(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_455(iParam1))
		{
			clear_bit(iParam1, 14);
			func_380(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_451(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_587(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_65(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_43(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_43(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_540(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_452(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_106(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_588(iParam1, 1))
	{
		func_589(iParam1, 1);
		return true;
	}
	return false;
}

bool func_453(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_454(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_18)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_455(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_456(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

int func_457(var uParam0, float fParam1)
{
	if (func_502(uParam0, fParam1))
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

bool func_458(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_459(int iParam0)
{
	return func_145(Global_1395601->f_3, iParam0);
}

void func_460(int iParam0)
{
	func_134(&(Global_1395601->f_3), iParam0);
}

void func_461(int iParam0, int iParam1)
{
	if (iParam0->f_51 != iParam1)
	{
		iParam0->f_51 = iParam1;
	}
}

bool func_462(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_463(int iParam0)
{
	return func_590(iParam0, 16, 1);
}

bool func_464(int iParam0)
{
	return iParam0 > -1;
}

bool func_465(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_466()
{
	if (func_591())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_467(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_458(iParam0, 1073741824);
}

int func_468(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam1]->f_25))
	{
		if (func_143(iParam0, Global_1914319->f_3[iParam1]->f_25, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_469(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam1]->f_30))
	{
		if (func_143(iParam0, Global_1914319->f_3[iParam1]->f_30, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_470()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

float func_471(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

var func_472(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_473(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_592(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_474(int iParam0)
{
	bVar0 = func_458(iParam0, 256);
	return bVar0;
}

int func_475(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_42);
	return StackVal;
}

int func_476(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 > iParam1 || (iParam2 != 0 && iParam0->f_59 == 5))
	{
		return iParam2;
	}
	return iParam1;
}

bool func_477()
{
	if (func_438(4))
	{
		return Global_1935630->f_27;
	}
	return func_319();
}

bool func_478(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 5:
		case 10:
		case 12:
		case 17:
		case 18:
		case 22:
			return true;
		default:
			break;
	}
	return false;
}

int func_479(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	vVar6 = { _0x18675bc914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { _get_object_offset_from_coords(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { _get_object_offset_from_coords(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

bool func_480(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_481(int iParam0)
{
	switch (*iParam0)
	{
		case 4:
		case 10:
		case 12:
		case 13:
		case 14:
		case 17:
		case 18:
			return 0;
		default:
			break;
	}
	return 1;
}

var func_482(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1914319->f_19661 == iVar0)
	{
		*iParam0 = Global_1914319->f_19660;
	}
	else
	{
		Global_1914319->f_19661 = iVar0;
		Global_1914319->f_19659 = func_64(iParam0);
		Global_1914319->f_19660 = *iParam0;
	}
	return Global_1914319->f_19659;
}

void func_483(int iParam0)
{
	if (iParam0->f_53 != 0)
	{
		iParam0->f_53 = 0;
	}
}

void func_484(int iParam0, int iParam1)
{
	func_146(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_485(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_486(int iParam0, int iParam1)
{
	func_134(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_487(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_488(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_593(func_69(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_490(int iParam0)
{
	iVar0 = _0x7cc2186c32d3540a(iParam0->f_4, player_id());
	return (iVar0 == 2 || iVar0 == 3);
}

void func_491(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (does_entity_exist(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 48;
		Var0.f_3 = uParam2;
		Var0.f_8 = iParam4;
		Var0.f_11 = iParam5;
		Var0.f_13 = iParam3;
		_0x88bc5f4aef77fc4e(&Var0, 17);
	}
}

void func_492(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (&Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_493(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

bool func_494(int iParam0)
{
	if (func_500(iParam0, 1, 1))
	{
		iParam0->f_44 = func_512(3);
		func_504(iParam0, 1);
		return true;
	}
	iVar0 = _0x7cc2186c32d3540a(iParam0->f_4, player_id());
	if ((((iParam0->f_43 != 0 || *iParam0 == 7) || *iParam0 == 22) || *iParam0 == 20) && iVar0 == 4)
	{
		iVar0 = 0;
	}
	if (*iParam0 == 22)
	{
		iParam0->f_44 = func_594(5);
		return true;
	}
	if (func_63(player_id(), 1))
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			iParam0->f_44 = func_594(12);
		}
		else
		{
			iParam0->f_44 = func_594(11);
		}
		return true;
	}
	if (func_595(iParam0))
	{
		return true;
	}
	if (func_596(iParam0))
	{
		return true;
	}
	if (iParam0->f_53 == 0)
	{
		switch (iParam0->f_43)
		{
			case 0:
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						if (func_368())
						{
							iParam0->f_44 = func_594(2);
							return true;
						}
						else if (is_ped_male(Global_35))
						{
							iParam0->f_44 = func_594(3);
							return true;
						}
						else
						{
							iParam0->f_44 = func_594(4);
							return true;
						}
						break;
				}
				break;
			case 1:
			case 2:
				if (func_597(func_128()) > 0)
				{
					iParam0->f_44 = func_594(25);
					return true;
				}
				if ((iParam0->f_60 != 0 && iParam0->f_60 != 5) && ((iParam0->f_62 == 3 || iParam0->f_62 == 7) || iParam0->f_62 == 6))
				{
					iParam0->f_44 = func_594(26);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						if (*iParam0 == 8)
						{
							iParam0->f_44 = func_594(29);
							return true;
						}
					case 0:
					case 4:
						if (*iParam0 != 7 || func_368())
						{
							iParam0->f_44 = func_594(28);
							return true;
						}
						else if (is_ped_male(Global_35))
						{
							iParam0->f_44 = func_594(32);
							return true;
						}
						else
						{
							iParam0->f_44 = func_594(33);
							return true;
						}
						break;
					case 2:
					case 3:
						if (*iParam0 == 8)
						{
							iParam0->f_44 = func_594(30);
							return true;
						}
						else
						{
							iParam0->f_44 = "";
							return true;
						}
						break;
				}
				break;
			case 3:
			case 4:
				if (func_597(func_128()) > 0)
				{
					iParam0->f_44 = func_594(25);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						iParam0->f_44 = func_594(39);
						break;
					case 0:
					case 4:
						if (*iParam0 == 20 || func_368())
						{
							iParam0->f_44 = func_594(19);
							return true;
						}
						else if (is_ped_male(Global_35))
						{
							iParam0->f_44 = func_594(21);
							return true;
						}
						else
						{
							iParam0->f_44 = func_594(22);
							return true;
						}
						break;
					case 2:
						if (func_368())
						{
							iParam0->f_44 = func_594(37);
						}
						else
						{
							iParam0->f_44 = func_594(17);
						}
						return true;
					case 3:
						iParam0->f_44 = func_594(40);
						return true;
				}
				Jump @963; //curOff = 865
				if (func_597(func_128()) > 0)
				{
					iParam0->f_44 = func_594(25);
					return true;
				}
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						iParam0->f_44 = func_594(23);
						return true;
					case 2:
					case 3:
						iParam0->f_44 = func_594(24);
						return true;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0->f_43)
				{
					case 1:
					case 2:
						iParam0->f_44 = "";
						return true;
					default:
						iParam0->f_44 = func_594(5);
						return true;
				}
			}
			return false;
		}

void func_495(int iParam0)
{
	if (iParam0->f_53 != 2)
	{
		uVar0 = iParam0->f_53 + 1;
		uVar1 = uVar0;
		iParam0->f_53 = uVar1;
	}
}

bool func_496(int iParam0, char* sParam1)
{
	iVar1 = 0;
	if (iParam0->f_45)
	{
		if (func_57() != -1)
		{
			return true;
		}
		if (func_406())
		{
			iVar1 = "JOHN_PLAYER";
		}
		else
		{
			iVar1 = "ARTHUR";
		}
		iVar0 = Global_35;
	}
	else
	{
		iVar0 = iParam0->f_4;
		iVar1 = func_598(iParam0);
		func_599(iParam0, iVar1);
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = iParam0->f_44;
	}
	if (!is_string_null_or_empty(sParam1))
	{
		if (func_24(iVar0, 8))
		{
			if (func_40(iParam0->f_46))
			{
				bVar2 = func_115(iVar0, sParam1, -1478066105, 0, 1, iVar1, iParam0->f_49, 1);
			}
			else
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam1;
				Var3.f_1 = iVar1;
				Var3.f_3 = 291934926;
				Var3.f_2 = iParam0->f_49;
				bVar2 = _play_ambient_speech_at_coords(iParam0->f_46, &Var3);
			}
			if (bVar2)
			{
				if (((!iParam0->f_45 && func_40(iParam0->f_46)) && !are_strings_equal(sParam1, func_377(27))) && !func_600(iParam0))
				{
					fVar11 = 3f;
					if (iParam0->f_59 != 0)
					{
						fVar11 = (to_float(iParam0->f_56) + 2f);
					}
					if (!does_entity_exist(iParam0->f_93))
					{
						if (iParam0->f_50 != 7)
						{
							_0xe7fa07624574b79a(iVar0, Global_35, 1, 1, fVar11, 1, 0, 0, 0);
						}
					}
					else
					{
						if (iParam0->f_50 != 7)
						{
							_0xe7fa07624574b79a(iParam0->f_93, Global_35, 1, 1, fVar11, 1, 0, 0, 0);
						}
						iParam0->f_93 = 0;
					}
				}
			}
		}
	}
	iParam0->f_45 = 0;
	func_36(&(iParam0->f_65));
	if (!func_324(iParam0, 512))
	{
		iParam0->f_46 = { func_601() };
	}
	iParam0->f_49 = 0;
	return bVar2;
}

bool func_497(int iParam0)
{
	Stack.Push(iParam0->f_25);
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_26);
	if (StackVal && StackVal)
	{
		return true;
	}
	switch (iParam0->f_43)
	{
		case 0:
		case 6:
			if (func_490(iParam0))
			{
				iParam0->f_44 = "";
				return true;
			}
			else if (func_368())
			{
				if (iParam0->f_1 == 22)
				{
					iParam0->f_49 = get_random_int_in_range(2, 4);
				}
				iParam0->f_44 = func_594(45);
				return true;
			}
			else
			{
				iParam0->f_44 = func_594(44);
				return true;
			}
			break;
		case 4:
		case 5:
			if (func_490(iParam0))
			{
				iParam0->f_44 = func_512(15);
				return true;
			}
			else
			{
				iParam0->f_44 = func_512(14);
				return true;
			}
			break;
	}
	iParam0->f_44 = "";
	return true;
}

bool func_498(int iParam0)
{
	return func_602(iParam0) == -427144552;
}

bool func_499(int iParam0)
{
	iVar0 = func_603(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (_0xa454d234e45bb6e5(iVar0, player_id()))
		{
			return true;
		}
		if (_0x9337183fda2e9035(iVar0, player_id()))
		{
			return true;
		}
	}
	return false;
}

bool func_500(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_474(iParam0->f_1))
	{
		if (*iParam0 == 15)
		{
			iVar1 = 19;
		}
		else
		{
			iVar1 = 24;
		}
		iVar2 = func_69();
		iVar0 = func_224(iVar2);
		if ((bParam2 && iVar0 > (iVar1 - 2)) || iVar0 > (iVar1 - 1))
		{
			return true;
		}
	}
	return false;
}

bool func_501(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_57() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_604(func_128(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		iVar0 = (func_605(iParam1) || func_607(func_606(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = iVar0;
	}
	return iVar0;
}

bool func_502(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_34(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_503(int iParam0)
{
	if (iParam0->f_31)
	{
		Stack.Push(iParam0);
		Call_Loc(iParam0->f_32);
		return StackVal;
	}
	switch (iParam0->f_52)
	{
		case 0:
			iParam0->f_44 = func_512(3);
			break;
		case 1:
			iParam0->f_44 = func_512(4);
			break;
	}
	return 1;
}

void func_504(int iParam0, int iParam1)
{
	if (iParam0->f_52 != iParam1)
	{
		iParam0->f_52 = iParam1;
	}
}

bool func_505(int iParam0)
{
	Stack.Push(iParam0->f_27);
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_28);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (func_34(&(iParam0->f_80)) > 180f)
	{
		if (func_490(iParam0))
		{
			iParam0->f_44 = func_512(30);
			return true;
		}
		else if (func_535(iParam0))
		{
			iParam0->f_44 = func_512(29);
			return true;
		}
		else
		{
			iParam0->f_44 = func_512(39);
			return true;
		}
	}
	else if (func_490(iParam0))
	{
		iParam0->f_44 = func_512(28);
		return true;
	}
	else
	{
		iVar0 = get_random_int_in_range(0, 7);
		switch (iVar0)
		{
			case 0:
				iParam0->f_44 = func_512(40);
				return true;
			case 1:
				if (iParam0->f_3 && !func_346(*iParam0))
				{
					iParam0->f_44 = func_512(17);
					return true;
				}
				break;
			case 2:
				iParam0->f_44 = func_512(42);
				return true;
			case 3:
				iParam0->f_44 = func_512(43);
				return true;
			case 4:
				iParam0->f_44 = func_512(44);
				return true;
			case 5:
				iParam0->f_44 = func_512(45);
				return true;
			case 6:
				if (!func_608())
				{
					iParam0->f_44 = func_512(46);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_506(int iParam0, bool bParam1)
{
	iVar0 = iParam0->f_14;
	if (!bParam1)
	{
		if (((iParam0->f_3 && iParam0->f_5 == 0) && !iParam0->f_6) && func_502(&(iParam0->f_77), 45f))
		{
			iParam0->f_44 = func_513(22);
			return true;
		}
	}
	else if (func_490(iParam0) || func_336(&(iParam0->f_77)) > 30f)
	{
		iParam0->f_44 = func_609(3);
		return true;
	}
	if (func_490(iParam0))
	{
		iParam0->f_44 = "";
		return true;
	}
	Stack.Push(iParam0->f_35);
	Stack.Push(iParam0);
	Stack.Push(iVar0);
	Stack.Push(bParam1);
	Call_Loc(iParam0->f_36);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (!func_78(iVar0, 0))
	{
		iParam0->f_44 = "";
		return true;
	}
	if (func_368())
	{
		if (*iParam0 != 6 && func_361(iParam0->f_12, -915411861, 1, 0, 0) >= 2500)
		{
			if (bParam1)
			{
				iParam0->f_44 = func_609(2);
				return true;
			}
			else
			{
				iParam0->f_44 = func_609(5);
				return true;
			}
		}
		else if (bParam1)
		{
			iParam0->f_44 = func_609(1);
			return true;
		}
		else
		{
			iParam0->f_44 = func_609(4);
			return true;
		}
	}
	else
	{
		iParam0->f_44 = func_609(7);
		return true;
	}
	return false;
}

bool func_507(int iParam0)
{
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			if (iParam0->f_18)
			{
				if (get_random_int_in_range(0, 4) == 0)
				{
					iParam0->f_45 = 1;
					if (iParam0->f_10 > 1 && func_368())
					{
						iParam0->f_44 = func_512(33);
					}
					else
					{
						iParam0->f_44 = func_512(32);
					}
					return true;
				}
			}
			Stack.Push((iParam0->f_10 < 3 && iParam0->f_29));
			Stack.Push(iParam0);
			Call_Loc(iParam0->f_30);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (func_490(iParam0))
			{
				iParam0->f_44 = func_513(4);
				return true;
			}
			else if (func_324(iParam0, 4))
			{
				iParam0->f_44 = func_512(31);
				return true;
			}
			else if (func_324(iParam0, 8))
			{
				iParam0->f_44 = func_513(2);
				return true;
			}
			else if (func_324(iParam0, 16))
			{
				iParam0->f_44 = func_513(1);
				return true;
			}
			else if (iParam0->f_10 > 2)
			{
				if (*iParam0 != 6 && func_361(iParam0->f_12, -915411861, 1, 0, 0) >= 2500)
				{
					iParam0->f_44 = func_513(11);
				}
				else
				{
					iParam0->f_44 = func_513(10);
				}
				return true;
			}
			else if (*iParam0 != 6 && func_361(iParam0->f_12, -915411861, 1, 0, 0) >= 2500)
			{
				iParam0->f_44 = func_513(6);
				return true;
			}
			else
			{
				switch (get_random_int_in_range(0, 4))
				{
					case 0:
						iParam0->f_44 = func_513(9);
						return true;
					case 1:
						iParam0->f_44 = func_513(7);
						return true;
					case 2:
						iParam0->f_44 = func_513(20);
						return true;
					case 3:
						iParam0->f_44 = func_513(21);
						return true;
				}
			}
			break;
		case 2:
			if (func_78(iParam0->f_12, 0))
			{
				iParam0->f_15++;
				if (iParam0->f_10 > 2)
				{
					iParam0->f_44 = func_513(14);
					return true;
				}
				Stack.Push(iParam0->f_29);
				Stack.Push(iParam0);
				Call_Loc(iParam0->f_30);
				if (StackVal && StackVal)
				{
					return true;
				}
				if (!func_490(iParam0))
				{
					if (func_610(iParam0->f_12, 1073741824))
					{
						iParam0->f_44 = func_513(15);
						return true;
					}
					else if (func_610(iParam0->f_12, 268435456))
					{
						iParam0->f_44 = func_513(17);
						return true;
					}
					else if (func_610(iParam0->f_12, 134217728))
					{
						iParam0->f_44 = func_513(18);
						return true;
					}
					else
					{
						switch (get_random_int_in_range(0, 3))
						{
							case 0:
								iParam0->f_44 = func_513(21);
								break;
							case 1:
								iParam0->f_44 = func_513(16);
								break;
							case 2:
								iParam0->f_44 = func_513(20);
								break;
						}
						return true;
					}
				}
				else
				{
					iParam0->f_44 = func_513(4);
					return true;
				}
			}
			break;
		default:
			Stack.Push(iParam0->f_29);
			Stack.Push(iParam0);
			Call_Loc(iParam0->f_30);
			if (StackVal && StackVal)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_508(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_509(int iParam0, bool bParam1)
{
	Stack.Push(iParam0->f_37);
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(iParam0->f_38);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam0->f_2)
		{
			case 1:
				if (iParam0->f_3 && !func_324(iParam0, 256))
				{
					if (func_490(iParam0))
					{
						iParam0->f_44 = func_512(37);
					}
					else if (func_368())
					{
						iParam0->f_45 = 1;
						iParam0->f_44 = func_512(18);
					}
					else
					{
						iParam0->f_44 = func_512(16);
					}
					func_309(iParam0, 256);
					return true;
				}
				else
				{
					iParam0->f_44 = "";
					return true;
				}
				break;
			case 2:
				iParam0->f_44 = func_512(41);
				return true;
			default:
				iParam0->f_44 = "";
				return true;
		}
	}
	else
	{
		switch (iParam0->f_2)
		{
			case 1:
				if (iParam0->f_3)
				{
					if (func_490(iParam0))
					{
						iParam0->f_44 = "";
						return true;
					}
					else
					{
						if (!func_535(iParam0))
						{
							iParam0->f_44 = func_513(5);
						}
						else if (func_368())
						{
							iParam0->f_45 = 1;
							iParam0->f_44 = func_512(19);
						}
						else
						{
							iParam0->f_44 = func_512(36);
						}
						return true;
					}
				}
				else
				{
					iParam0->f_44 = "";
					return true;
				}
				break;
			case 2:
				iParam0->f_44 = "";
				if (func_611(iParam0))
				{
					if (iParam0->f_15 > 1 && func_368())
					{
						iParam0->f_45 = 1;
						iParam0->f_44 = func_512(20);
					}
				}
				return true;
			default:
				iParam0->f_44 = "";
				return true;
		}
	}
	return false;
}

bool func_510(int iParam0)
{
	if (iParam0->f_2 == 1 && (iParam0->f_14 == 0 || func_390(iParam0->f_14) == -2014019346))
	{
		return false;
	}
	return true;
}

void func_511(int iParam0)
{
	func_309(iParam0, 64);
}

char* func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADING_OUT";
		case 1:
			return "END_SHIFT";
		case 3:
			return "CLOSING_WARNING";
		case 4:
			return "CLOSING_EXTENDED";
		case 5:
			return "SHOP_CLOSED";
		case 6:
			return "FAREWELL_SALE";
		case 7:
			return "FAREWELL_BIG_SALE";
		case 8:
			return "FAREWELL_NO_SALE";
		case 9:
			return "FAREWELL_CLOSING";
		case 12:
			return "PLAYER_SHOP_THANKS_FEMALE";
		case 11:
			return "PLAYER_SHOP_THANKS_MALE";
		case 10:
			return "PLAYER_SHOP_THANKS_NEUTRAL";
		case 13:
			return "PLAYER_PRAISE_SERVICE";
		case 2:
			return "SKCF_ANNOUNCE_TRAIN_ARRIVAL";
		case 14:
			return "HAVE_A_LOOK";
		case 15:
			return "HAVE_A_LOOK_WARY";
		case 38:
			return "CAN_I_HELP_YOU_WARY";
		case 16:
			return "ACCEPT_CATALOG";
		case 37:
			return "ACCEPT_CATALOG_WARY";
		case 18:
			return "PLAYER_ENTER_SHOP_CATALOG";
		case 19:
			return "PLAYER_EXIT_CATALOG_PURCHASED";
		case 20:
			return "PLAYER_SELL_MULTIPLE_ITEMS";
		case 17:
			return "SHOP_CATALOG";
		case 41:
			return "ENTER_SELL_MENU";
		case 21:
			return "RIGHT_WITH_YOU";
		case 31:
			return "ON_THE_HOUSE";
		case 27:
			return "TAKE_YOUR_TIME";
		case 28:
			return "TAKE_YOUR_TIME_WARY";
		case 29:
			return "HANGING_AROUND_PURCHASED";
		case 39:
			return "HANGING_AROUND_NO_PURCHASE";
		case 30:
			return "HANGING_AROUND_WARY";
		case 32:
			return "PLAYER_GENERIC_BUY_SHELVES";
		case 33:
			return "PLAYER_GENERIC_BUY_SHELVES_ADDITIONAL";
		case 40:
			return "PROMOTE_STORE";
		case 42:
			return "CHAT_PEDTYPE_DIALOG";
		case 43:
			return "CHAT_SHOPKEEPER_GOSSIP";
		case 44:
			return "CHAT_SHOPKEEPER_LOCATION";
		case 45:
			return "CHAT_LOCAL_AREA";
		case 46:
			return "CHAT_1907";
		case 36:
			return "ANYTHING_ELSE";
		case 24:
			return "GOOD_RIDDANCE";
		case 25:
			return "FAREWELL";
		case 26:
			return "DISMISSIVE_REACT";
		default:
			break;
	}
	return "";
}

char* func_513(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LOCAL_OUTFIT_DISCOUNT";
		case 1:
			return "PRICE_INCREASE";
		case 2:
			return "PRICE_DISCOUNT";
		case 3:
			return "GENERIC_BUY_RESPONSE";
		case 5:
			return "CLOSE_CATALOG_NO_PURCHASE";
		case 6:
			return "SELL_QUALITY_ITEM";
		case 7:
			return "SELL_AVERAGE_ITEM";
		case 8:
			return "SELL_POOR_ITEM";
		case 9:
			return "SELL_QUICK";
		case 10:
			return "SELL_ITEM_AGAIN";
		case 11:
			return "SELL_QUALITY_ITEM_AGAIN";
		case 12:
			return "BUY_INSPECT_ITEM";
		case 13:
			return "BUY_INSPECT_ITEM_UNFRIENDLY";
		case 14:
			return "BUY_ITEM_AGAIN";
		case 15:
			return "BUY_QUALITY_ITEM";
		case 16:
			return "BUY_AVERAGE_ITEM";
		case 17:
			return "BUY_POOR_ITEM";
		case 18:
			return "TAKE_WORTHLESS_ITEM";
		case 19:
			return "BUY_UNIQUE_ITEM";
		case 20:
			return "BUY_OR_SELL_AVERAGE_ITEM";
		case 21:
			return "VOCAL_FX_BUY_RESPONSE";
		case 22:
			return "CATALOG_IDLING";
		default:
			break;
	}
	return "";
}

bool func_514(int iParam0, int iParam1)
{
	if (func_316(iParam0->f_4))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return true;
	}
	if (!func_28(&(iParam0->f_65)))
	{
		func_30(&(iParam0->f_65), 1);
	}
	if (func_34(&(iParam0->f_65)) >= IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_515(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 16:
		case 256:
			return true;
		default:
			break;
	}
	return false;
}

bool func_516(int iParam0)
{
	iParam0->f_44 = "";
	switch (Global_1914319->f_18903)
	{
		case 2:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(9);
					break;
			}
			break;
		case 65536:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(3);
					break;
				case 1:
					iParam0->f_44 = func_612(15);
					break;
				case 2:
					iParam0->f_44 = func_612(8);
					break;
				case 3:
					iParam0->f_44 = func_612(14);
					break;
				case 4:
					iParam0->f_44 = func_612(13);
					break;
				case 5:
					iParam0->f_44 = func_612(9);
					break;
			}
			break;
		case 4:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(15);
					break;
				case 1:
					iParam0->f_44 = func_612(8);
					break;
			}
			break;
		case 8:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(24);
					break;
				case 1:
					iParam0->f_44 = func_612(12);
					break;
			}
			break;
		case 16:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(3);
					break;
			}
			break;
		case 32:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(4);
					break;
			}
			break;
		case 131072:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(8);
					break;
				case 1:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(25);
					break;
			}
			break;
		case 262144:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(14);
					break;
			}
			break;
		case 64:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(13);
					break;
			}
			break;
		case 128:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(6);
					break;
				case 1:
					iParam0->f_44 = func_612(8);
					break;
				case 2:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(25);
					break;
			}
			break;
		case 256:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(11);
					break;
				case 1:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(27);
					break;
			}
			break;
		case 512:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(5);
					break;
			}
			break;
		case 524288:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(15);
					break;
			}
			break;
		case 2048:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(1);
					break;
			}
			break;
		case 4096:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(2);
					break;
			}
			break;
		case 16384:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(23);
					break;
				case 1:
					iParam0->f_44 = func_612(7);
					break;
			}
			break;
		case 32768:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(4);
					break;
			}
			break;
		case 1048576:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(16);
					break;
			}
			break;
		case 2097152:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_45 = 1;
					iParam0->f_44 = func_612(24);
					break;
				case 1:
					iParam0->f_44 = func_612(17);
					break;
			}
			break;
		case 4194304:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(20);
					break;
				case 1:
					if (is_ped_fleeing(iParam0->f_4))
					{
						iParam0->f_45 = 1;
						iParam0->f_44 = func_612(26);
					}
					break;
			}
			break;
		case 8388608:
			switch (iParam0->f_63)
			{
				case 0:
					iParam0->f_44 = func_612(18);
					break;
			}
			break;
	}
	return true;
}

void func_517(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 0))
	{
		func_327(*iParam0, 0, 1);
		func_613(iParam0);
		func_614(iParam0, 0);
	}
	if (iParam1 != 0)
	{
		func_615(iParam0, 1, iParam1);
	}
	if (func_616(iParam0, 0))
	{
		func_617(iParam0);
		func_618(iParam0, 0);
	}
}

void func_518(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 1))
	{
		if (func_316(iParam0->f_4))
		{
			stop_current_playing_speech(iParam0->f_4, 0);
		}
		func_613(iParam0);
		func_614(iParam0, 1);
	}
	func_619(iParam0, iParam1);
	func_620(iParam0, iParam1);
	if (func_621(iParam0))
	{
		func_615(iParam0, 2, iParam1);
	}
	if (func_616(iParam0, 1))
	{
		func_618(iParam0, 1);
	}
}

void func_519(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 2))
	{
		func_613(iParam0);
		func_614(iParam0, 2);
	}
	func_619(iParam0, iParam1);
	func_620(iParam0, iParam1);
	if (func_621(iParam0))
	{
		func_615(iParam0, 3, iParam1);
	}
	if (func_616(iParam0, 2))
	{
		func_618(iParam0, 2);
	}
}

void func_520(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 3))
	{
		func_613(iParam0);
		func_614(iParam0, 3);
	}
	func_619(iParam0, iParam1);
	func_620(iParam0, iParam1);
	if (func_621(iParam0))
	{
		func_615(iParam0, 4, iParam1);
	}
	if (func_616(iParam0, 3))
	{
		func_618(iParam0, 3);
	}
}

void func_521(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 4))
	{
		func_327(*iParam0, 1, 1);
		func_613(iParam0);
		func_614(iParam0, 4);
	}
	func_619(iParam0, iParam1);
	func_620(iParam0, iParam1);
	if (func_621(iParam0) && func_622(iParam0))
	{
		func_615(iParam0, 6, iParam1);
	}
	if (func_616(iParam0, 4))
	{
		func_618(iParam0, 4);
	}
}

void func_522(int iParam0)
{
	if (!func_525(iParam0, 6))
	{
		func_327(*iParam0, 1, 1);
		func_614(iParam0, 6);
	}
	func_623(iParam0);
	if (func_616(iParam0, 6))
	{
		func_618(iParam0, 6);
	}
}

void func_523(int iParam0, int iParam1)
{
	if (!func_525(iParam0, 5))
	{
		func_624(iParam0);
		func_613(iParam0);
		func_614(iParam0, 5);
	}
	func_620(iParam0, iParam1);
	if (func_621(iParam0))
	{
		func_615(iParam0, 0, 0);
	}
	if (func_616(iParam0, 5))
	{
		iParam0->f_56 = -1;
		func_327(*iParam0, 0, 1);
		func_618(iParam0, 5);
	}
}

void func_524(int iParam0)
{
	if (!func_229(iParam0))
	{
		return;
	}
	func_146(Global_1914319->f_18594[iParam0], 2);
}

bool func_525(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_57, iParam1);
}

bool func_526(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15768[iParam0] && iParam1) != 0;
}

bool func_527(int iParam0)
{
	if (*iParam0 == 22)
	{
		iParam0->f_44 = "";
		return true;
	}
	switch (iParam0->f_53)
	{
		case 0:
			if (func_625(iParam0))
			{
				iParam0->f_44 = func_512(24);
				return true;
			}
			if (func_490(iParam0))
			{
				if (func_535(iParam0))
				{
					iParam0->f_44 = func_512(25);
				}
				else
				{
					iParam0->f_44 = func_512(26);
				}
				return true;
			}
			if (!func_501(*iParam0, -1))
			{
				iParam0->f_44 = func_512(9);
				return true;
			}
			Stack.Push(iParam0->f_33);
			Stack.Push(iParam0);
			Call_Loc(iParam0->f_34);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (func_368())
			{
				iParam0->f_45 = 1;
				switch (get_random_int_in_range(0, 3))
				{
					case 0:
						iParam0->f_44 = func_512(10);
						break;
					case 1:
						if (is_ped_male(iParam0->f_4))
						{
							iParam0->f_44 = func_512(11);
						}
						else
						{
							iParam0->f_44 = func_512(12);
						}
						break;
					case 2:
						iParam0->f_44 = func_512(13);
						break;
				}
				return true;
			}
			else if (func_535(iParam0) || func_324(iParam0, 8192))
			{
				iParam0->f_44 = func_512(25);
				return true;
			}
			else if (func_611(iParam0))
			{
				iParam0->f_44 = func_512(6);
				return true;
			}
			else
			{
				iParam0->f_44 = func_512(8);
				return true;
			}
			break;
		case 1:
			if ((func_490(iParam0) || (func_321(*iParam0, iParam0->f_1) || iParam0->f_50 == 10)) || func_63(player_id(), 1))
			{
				iParam0->f_44 = "";
				return true;
			}
			if (func_535(iParam0) || func_611(iParam0))
			{
				iParam0->f_44 = func_512(6);
				return true;
			}
			else
			{
				iParam0->f_44 = func_512(8);
				return true;
			}
			break;
		default:
			iParam0->f_44 = func_512(25);
			return true;
	}
	return false;
}

void func_528(int iParam0, int iParam1)
{
	if (!func_229(iParam0))
	{
		return;
	}
	Global_1914319->f_15768[iParam0] = (&Global_1914319->f_15768[iParam0] - (Global_1914319->f_15768[iParam0] && iParam1));
}

bool func_529(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_78(iParam0, 0))
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
		func_626(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_530(int iParam0, int iParam1)
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

int func_531(int iParam0, int iParam1)
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

int func_532(int iParam0)
{
	if (func_490(iParam0))
	{
		iParam0->f_44 = func_378(10);
		return 1;
	}
	else if (func_336(&(iParam0->f_80)) > 205f)
	{
		iParam0->f_44 = func_378(9);
		func_36(&(iParam0->f_80));
		return 1;
	}
	else
	{
		switch (get_random_int_in_range(0, 7))
		{
			case 0:
				if (!func_535(iParam0))
				{
					iParam0->f_44 = func_378(6);
					return 1;
				}
				break;
			case 1:
				iParam0->f_44 = func_378(14);
				return 1;
			case 2:
				if (func_627())
				{
					iParam0->f_44 = func_378(17);
					return 1;
				}
				break;
			case 3:
				iParam0->f_44 = func_378(16);
				return 1;
			case 4:
				if (func_57() == -1 && !func_608())
				{
					iParam0->f_44 = func_378(15);
					return 1;
				}
				break;
			case 5:
				return func_628(iParam0);
			case 6:
				if (func_629(iParam0->f_4))
				{
					iParam0->f_44 = func_378(26);
					return 1;
				}
				break;
		}
	}
	return 0;
}

bool func_533(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			Global_1914319->f_18941.f_10 = 20;
			return true;
		case 78:
			Global_1914319->f_18941.f_10 = 6;
			return true;
		case 115:
			Global_1914319->f_18941.f_10 = 6;
			return true;
		case 26:
			Global_1914319->f_18941.f_10 = 20;
			return true;
		case 5:
			Global_1914319->f_18941.f_10 = 33;
			return true;
		case 38:
			Global_1914319->f_18941.f_10 = 33;
			return true;
		case 92:
			Global_1914319->f_18941.f_10 = 2;
			return true;
		case 105:
			Global_1914319->f_18941.f_10 = 33;
			return true;
	}
	return false;
}

bool func_534(int iParam0)
{
	return func_145(Local_14.f_94, iParam0);
}

bool func_535(int iParam0)
{
	return func_324(iParam0, 32);
}

void func_536(int iParam0)
{
	iParam0->f_45 = 1;
	switch (Local_14.f_106)
	{
		case 1:
		case 2:
		case 3:
			if (func_630())
			{
				if (Local_14.f_101 > 1)
				{
					iParam0->f_44 = func_378(33);
				}
				else
				{
					iParam0->f_44 = func_378(32);
				}
			}
			else if (func_368())
			{
				iParam0->f_44 = func_378(30);
			}
			else if (Local_14.f_102 == 1)
			{
				iParam0->f_44 = func_378(31);
			}
			else
			{
				switch (Local_14.f_106)
				{
					case 2:
						iParam0->f_44 = func_378(27);
						break;
					case 1:
						iParam0->f_44 = func_378(28);
						break;
					case 3:
						iParam0->f_44 = func_378(29);
						break;
				}
			}
			Local_14.f_102 = 0;
			break;
		case 4:
		case 5:
			if (func_368())
			{
				iParam0->f_44 = func_378(34);
			}
			else
			{
				iParam0->f_44 = func_631(Local_14.f_103, Local_14.f_106, 1);
			}
			break;
	}
}

bool func_537()
{
	iVar0 = Local_14.f_107.f_2;
	iVar1 = Local_14.f_107;
	if (_is_anim_scene_started(iVar1, false))
	{
		fVar2 = _get_anim_scene_duration(iVar1);
		fVar3 = _get_anim_scene_time(iVar1);
		fVar4 = (fVar2 - fVar3);
		if (Local_14.f_106 == 1 || Local_14.f_106 == 2)
		{
			if (fVar4 < 6.5f)
			{
				return true;
			}
		}
		else if (iVar0 == 1 || iVar0 == 3)
		{
			if (fVar4 < 5.3f)
			{
				return true;
			}
		}
		else if (fVar4 < 3f)
		{
			return true;
		}
	}
	return false;
}

bool func_538(int iParam0)
{
	if (func_490(iParam0))
	{
		iParam0->f_44 = func_378(21);
		return true;
	}
	else if (get_random_int_in_range(0, 5) == 0 && !_0x50f124e6ef188b22(Global_35))
	{
		iParam0->f_44 = func_378(20);
		return true;
	}
	else
	{
		switch (Local_14.f_106)
		{
			case 4:
			case 5:
				if (func_368())
				{
					iParam0->f_44 = func_378(22);
					return true;
				}
				else
				{
					iParam0->f_44 = func_631(Local_14.f_103, Local_14.f_106, 0);
					return true;
				}
				break;
			default:
				fVar0 = _0x6fb76442469abd68(Global_35);
				if ((fVar0 >= 0.5f && fVar0 < 0.6f) || fVar0 > 0.8f)
				{
					iParam0->f_44 = func_378(35);
					return true;
				}
				else
				{
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							iParam0->f_44 = func_378(8);
							return true;
						case 1:
							iParam0->f_44 = func_378(23);
							return true;
						case 2:
							if (Local_14.f_106 == 1)
							{
								iParam0->f_44 = func_378(18);
								return true;
							}
							else
							{
								iParam0->f_44 = func_378(19);
								return true;
							}
							break;
					}
				}
				break;
		}
	}
	return false;
}

void func_539(int iParam0, bool bParam1)
{
	iParam0->f_45 = 0;
	iParam0->f_44 = "";
	if (func_459(4))
	{
		switch (iParam0->f_49)
		{
			case 0:
				if (!bParam1)
				{
					iParam0->f_45 = 1;
					iParam0->f_44 = "PLAYER_RENT_ROOM";
				}
				else
				{
					iParam0->f_49 = 1;
					iParam0->f_44 = "SELL_ROOM_RENTAL";
				}
			}
			else if (func_459(2))
			{
				switch (iParam0->f_49)
				{
					case 0:
						if (Global_1914319->f_18941.f_16)
						{
							iParam0->f_44 = "SELL_BATH";
							iParam0->f_49 = 2;
						}
						else if (!bParam1)
						{
							iParam0->f_45 = 1;
							iParam0->f_44 = "PLAY_BUY_BATH";
						}
						else
						{
							iParam0->f_49 = 1;
							if (Global_1914319->f_18941.f_16)
							{
								iParam0->f_44 = "SELL_BATH";
							}
						}
						default:
							break;
				}
			}
		}

void func_540(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_42(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	func_541(iParam0, 18, 0, 1);
	func_541(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

void func_541(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_542(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_543(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_632(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_544(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_545(int iParam0, bool bParam1, bool bParam2)
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
		if (func_633())
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
		iVar0 = func_634(&(Global_1898164->f_1[0]));
		if (func_169(iVar0) && func_635((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_279(&(Global_1898164->f_1[0])))
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

int func_546(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_547(int iParam0, int iParam1, bool bParam2)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_602(iParam0);
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
		if (!func_636(iParam0, 1))
		{
			return false;
		}
	}
	return func_637(iParam0, 0, bParam2) >= iParam1;
}

void func_548(float fParam0)
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

void func_549(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_550(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_638(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_639(iParam0))
	{
		return false;
	}
	if (func_640(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_641(iParam0, 1)) || func_3(32768))
	{
		if (!func_641(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_642())
	{
		return false;
	}
	return true;
}

void func_551(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

float func_552(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_643();
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

int func_553(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_643();
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
		func_644(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_645(iVar0, iParam0, fParam1);
	func_646(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_560(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_554(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_643();
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

int func_555(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_643();
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

bool func_556(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_647(iParam1) || !func_647(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_557(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_643();
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

void func_558(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_643();
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

int func_559(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_560(int iParam0)
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

int func_561(int iParam0)
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

void func_562(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_648(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_563(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_564(int iParam0)
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

char* func_565(int iParam0)
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

bool func_566(int iParam0, bool bParam1)
{
	return func_556(func_69(), iParam0, bParam1);
}

bool func_567()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_568(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_569(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_570(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_648(0, 1, bParam0, bParam1);
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

void func_571()
{
	func_649();
	func_650();
	func_651();
}

int func_572(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_643();
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

void func_573(float fParam0, int iParam1)
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

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

int func_575(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_643();
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

void func_576(float fParam0)
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

int func_577(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_643();
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

void func_578(float fParam0, bool bParam1)
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

int func_579(int iParam0)
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

struct<2> func_580(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_581(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_652(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_582(int iParam0)
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

int func_583(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_584(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_585(int* iParam0, int iParam1)
{
	if (!func_281(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_209(iParam0, 14);
		}
	}
}

int func_586(int iParam0, int iParam1)
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

bool func_587(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_19)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_588(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_589(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_590(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_464(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_591()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_592(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_593(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_556(iParam0, iParam1, 1))
	{
		iVar0 = func_222(iParam1);
		iVar1 = func_221(iParam0);
		iVar2 = (func_221(iParam0) - func_221(iParam1));
		iVar3 = (func_222(iParam0) - func_222(iParam1));
		iVar4 = (func_223(iParam0) - func_223(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_225(iParam0) - func_225(iParam1));
		iVar7 = (func_226(iParam0) - func_226(iParam1));
	}
	else
	{
		iVar0 = func_222(iParam0);
		iVar1 = func_221(iParam1);
		iVar2 = (func_221(iParam1) - func_221(iParam0));
		iVar3 = (func_222(iParam1) - func_222(iParam0));
		iVar4 = (func_223(iParam1) - func_223(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_225(iParam1) - func_225(iParam0));
		iVar7 = (func_226(iParam1) - func_226(iParam0));
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
		iVar4 = (iVar4 + func_227(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_653(to_float(iVar0 + 1), 0f, 12f));
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
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

char* func_594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WELCOME_NONE";
		case 1:
			return "RANG_BELL";
		case 15:
			return "RECENT_ROBBERY_COMBATIVE";
		case 2:
			return "NEW_WELCOME";
		case 3:
			return "NEW_WELCOME_MALE";
		case 4:
			return "NEW_WELCOME_FEMALE";
		case 5:
			return "WELCOME";
		case 6:
			return "WELCOME_SHERIFF";
		case 12:
			return "WELCOME_WANTED_COMBATIVE";
		case 7:
			return "WELCOME_MALE";
		case 8:
			return "WELCOME_FEMALE";
		case 9:
			return "WELCOME_POSSE";
		case 10:
			return "WELCOME_UNFRIENDLY";
		case 16:
			return "WELCOME_GOOD_MEMORY";
		case 17:
			return "WELCOME_WARY_MEMORY";
		case 18:
			return "WELCOME_BAD_MEMORY";
		case 44:
			return "WELCOME_FOLLOW_UP_HIGHLIGHT_STORE";
		case 45:
			return "WELCOME_FOLLOW_UP_HIGHLIGHT_ITEM";
		case 19:
			return "WELCOME_BACK";
		case 20:
			return "WELCOME_BACK_FRIENDLY";
		case 21:
			return "WELCOME_BACK_MALE";
		case 22:
			return "WELCOME_BACK_FEMALE";
		case 23:
			return "WELCOME_BACK_FOLLOW_UP_LONG_TIME";
		case 24:
			return "WELCOME_BACK_FOLLOW_UP_LONG_TIME_WARY";
		case 25:
			return "WELCOME_BACK_WANTED_HISTORY";
		case 26:
			return "WELCOME_BACK_BEHAVING_NOW";
		case 27:
			return "WELCOME_BACK_COMBATIVE";
		case 28:
			return "WELCOME_BACK_ALREADY";
		case 29:
			return "WELCOME_BACK_ALREADY_FRIENDLY";
		case 30:
			return "WELCOME_BACK_ALREADY_WARY";
		case 31:
			return "WELCOME_BACK_ALREADY_COMBATIVE";
		case 32:
			return "WELCOME_BACK_ALREADY_MALE";
		case 33:
			return "WELCOME_BACK_ALREADY_FEMALE";
		case 34:
			return "HEADS_UP_MEMORY_SHOPKEEPER_LIVES";
		case 35:
			return "HEADS_UP_MEMORY_THIEF";
		case 36:
			return "HEADS_UP_TROUBLE_RECENTLY";
		case 37:
			return "HEADS_UP_WARNED_RECENTLY";
		case 38:
			return "HEADS_UP_ARRESTED_RECENTLY";
		case 39:
			return "HEADS_UP_MEMORY_PLEASANT";
		case 40:
			return "HEADS_UP_MEMORY_TROUBLE";
		case 41:
			return "WELCOME_POST_DRUNK_POS";
		case 42:
			return "COOLED_DOWN_ASSAULT";
		case 43:
			return "COOLED_DOWN_ROBBERY";
		default:
			break;
	}
	return "WELCOME";
}

bool func_595(int iParam0)
{
	if (func_349(iParam0->f_1, 128))
	{
		if (func_368())
		{
			iParam0->f_44 = func_594(34);
		}
		else
		{
			iParam0->f_44 = func_594(42);
		}
		func_492(iParam0->f_1, 128);
		return true;
	}
	iVar0 = func_654();
	if (func_655(iVar0))
	{
		iVar1 = &Global_1934266->f_317[iVar0];
		func_489(iVar1, &uVar2, &uVar3, &uVar4, &iVar5, &iVar6, &iVar7);
		if (((iVar6 == 0 && iVar7 == 0) && iVar5 <= 7) && iParam0->f_43 >= 4)
		{
			if (func_368())
			{
				iParam0->f_44 = func_594(38);
				return true;
			}
		}
	}
	if (func_656(iParam0->f_4, Global_35, 22, -1, 0, 0, 0))
	{
		if (func_368() && iParam0->f_43 >= 4)
		{
			if (func_368())
			{
				iParam0->f_44 = func_594(35);
			}
			else
			{
				iParam0->f_44 = func_594(43);
			}
			return true;
		}
	}
	if (func_349(iParam0->f_1, 256))
	{
		if (iParam0->f_43 <= 4)
		{
			iParam0->f_44 = func_594(41);
		}
		func_492(iParam0->f_1, 256);
		return true;
	}
	return false;
}

bool func_596(int iParam0)
{
	if (iParam0->f_23)
	{
		Stack.Push(iParam0);
		Call_Loc(iParam0->f_24);
		return StackVal;
	}
	return false;
}

int func_597(int iParam0)
{
	if (!func_657(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_31.f_2;
}

char* func_598(int iParam0)
{
	if (*iParam0 == 19)
	{
		return "PEARSON";
	}
	if (*iParam0 == 18)
	{
		if (is_string_null_or_empty(Global_1393529->f_288[18]))
		{
			func_658(18, iParam0->f_4);
		}
		return func_659(*Global_1393529->f_288[18]);
	}
	iVar0 = func_128();
	switch (iVar0)
	{
		case 76:
			switch (iParam0->f_1)
			{
				case 74:
					return "0478_U_M_M_ValGenStoreOwner_01";
				case 75:
					return "0479_U_M_M_ValGunsmith_01";
				case 73:
					return "0477_U_M_M_ValDoctor_01";
				case 79:
					return "0480_U_M_M_ValHotelOwner_01";
				case 77:
				case 78:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 76:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				case 80:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				case 69:
					return "0710_U_M_M_ValBarber_01";
				case 70:
					return "0475_U_M_M_ValBartender_01";
				case 81:
					return "0686_U_M_O_ValBartender_01";
				case 72:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(76);
					}
					return func_659(*Global_1393529->f_288[10]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 78:
			switch (iParam0->f_1)
			{
				case 0:
					return "0036_U_M_M_AsbGunsmith_01";
				case 2:
				case 3:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 1:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 92:
			switch (iParam0->f_1)
			{
				case 82:
					return "0509_U_M_O_VhTExoticShopkeeper_01";
				case 85:
				case 86:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 83:
					return "1038_U_F_M_VhTBartender_01";
				case 84:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 38:
			switch (iParam0->f_1)
			{
				case 7:
					return "0083_U_M_O_BlWGeneralStoreOwner_01";
				case 17:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 13:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				case 9:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 14:
				case 15:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 11:
					return "0080_U_M_O_BlWBartender_01";
				case 12:
					return "1099_U_M_O_BLWPhotographer_01";
				case 10:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(38);
					}
					return func_659(*Global_1393529->f_288[10]);
				case 16:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 26:
			switch (iParam0->f_1)
			{
				case 61:
					return "0678_U_M_M_StrGenStoreOwner_01";
				case 65:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 62:
					return "1039_U_M_M_StrWelcomeCenter_01";
				case 63:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				case 64:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				case 60:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(26);
					}
					return func_659(*Global_1393529->f_288[10]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 5:
			switch (iParam0->f_1)
			{
				case 39:
					return "0315_U_M_M_NbxDoctor_01";
				case 42:
					return "0317_U_M_M_NbxGeneralStoreOwner_01";
				case 43:
					return "0319_U_M_M_NbxGunsmith_01";
				case 47:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 41:
					return "0679_U_M_M_NBXShadyDealer_01";
				case 37:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 44:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				case 45:
				case 46:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 48:
					if (is_string_null_or_empty(Global_1393529->f_288[12]))
					{
						if (does_entity_exist(iParam0->f_4))
						{
							func_658(12, iParam0->f_4);
						}
					}
					return func_659(*Global_1393529->f_288[12]);
				case 49:
					if (is_string_null_or_empty(Global_1393529->f_288[13]))
					{
						if (does_entity_exist(iParam0->f_4))
						{
							func_658(13, iParam0->f_4);
						}
					}
					return func_659(*Global_1393529->f_288[13]);
				case 50:
					if (is_string_null_or_empty(Global_1393529->f_288[14]))
					{
						if (does_entity_exist(iParam0->f_4))
						{
							func_658(14, iParam0->f_4);
						}
					}
					return func_659(*Global_1393529->f_288[14]);
				case 52:
					return "0311_U_M_M_NbxBartender_01";
				case 53:
					return "0312_U_M_M_NbxBartender_02";
				case 51:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				case 38:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(5);
					}
					return func_659(*Global_1393529->f_288[10]);
				case 54:
					return "1100_U_M_M_SDPhotographer_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 105:
			switch (iParam0->f_1)
			{
				case 28:
					if (does_entity_exist(iParam0->f_4))
					{
						if (is_ped_model(iParam0->f_4, 984264800))
						{
							return "PEARSON_SHOPKEEPER";
						}
						else
						{
							return "0400_U_M_M_RhdGenStoreOwner_01";
						}
					}
					if (func_406())
					{
						return "PEARSON_SHOPKEEPER";
					}
					else
					{
						return "0400_U_M_M_RhdGenStoreOwner_01";
					}
					break;
				case 29:
					return "0401_U_M_M_RhdGunsmith_01";
				case 30:
				case 31:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				case 27:
					return "0694_U_M_M_RhdGenStoreOwner_02";
				case 33:
					return "0397_U_M_M_RhdBartender_01";
				case 32:
					if (is_string_null_or_empty(Global_1393529->f_288[22]))
					{
						func_662();
					}
					return func_659(*Global_1393529->f_288[22]);
				case 26:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(105);
					}
					return func_659(*Global_1393529->f_288[10]);
				default:
					return "SHOPKEEPER_TEST_PED";
			}
			break;
		case 28:
			switch (iParam0->f_1)
			{
				case 87:
					return "1036_U_M_M_WalGeneralStoreOwner_01";
				case 88:
				case 89:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 101:
			switch (iParam0->f_1)
			{
				case 35:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 69:
			switch (iParam0->f_1)
			{
				case 18:
					return "EMR_Son1";
				case 20:
				case 21:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 115:
			switch (iParam0->f_1)
			{
				case 90:
					return "1084_U_F_M_TumGeneralStoreOwner_01";
				case 91:
					return "1085_U_M_M_TumGunsmith_01";
				case 93:
					return "1087_U_M_M_TumBartender_01";
				case 92:
					if (is_string_null_or_empty(Global_1393529->f_288[10]))
					{
						func_663(115);
					}
					return func_659(*Global_1393529->f_288[10]);
				case 94:
					if (is_string_null_or_empty(Global_1393529->f_288[9]))
					{
						func_661();
					}
					return func_659(*Global_1393529->f_288[9]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 120:
			switch (iParam0->f_1)
			{
				case 95:
					return "1076_U_M_M_ArmGeneralStoreOwner_01";
				case 97:
					return "1077_U_M_O_ArmBartender_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 3:
			switch (iParam0->f_1)
			{
				case 22:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
		case 117:
			switch (iParam0->f_1)
			{
				case 99:
				case 100:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 23:
			switch (iParam0->f_1)
			{
				case 23:
				case 24:
					if (is_string_null_or_empty(Global_1393529->f_288[2]))
					{
						func_660(iVar0);
					}
					return func_659(*Global_1393529->f_288[2]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 11:
			if (is_string_null_or_empty(Global_1393529->f_288[11]))
			{
				func_664();
			}
			return func_659(*Global_1393529->f_288[11]);
		default:
			return "SHOPKEEPER_TEST_PED";
	}
	return "SHOPKEEPER_TEST_PED";
}

void func_599(int iParam0, char* sParam1)
{
	if (func_324(iParam0, 128))
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = func_598(iParam0);
	}
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0->f_4))
	{
		set_ambient_voice_name(iParam0->f_4, sParam1);
		func_309(iParam0, 128);
	}
}

bool func_600(int iParam0)
{
	if (iParam0->f_59 == 5 || iParam0->f_59 == 0)
	{
		if ((iParam0->f_62 == 9 || iParam0->f_62 == 10) || iParam0->f_62 == 11)
		{
			return true;
		}
	}
	else if ((iParam0->f_61 == 9 || iParam0->f_61 == 10) || iParam0->f_61 == 11)
	{
		return true;
	}
	return false;
}

Vector3 func_601()
{
	return 0f, 0f, 0f;
}

int func_602(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_603(int iParam0)
{
	if (*iParam0 != 33 && iParam0->f_1 != 69)
	{
		return 0;
	}
	iVar1 = get_ped_nearby_peds(player_ped_id(), &uVar2, -1, -1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (does_entity_exist(&(uVar2[iVar0])))
		{
			if (is_entity_dead(&(uVar2[iVar0])))
			{
			}
			else if (!is_ped_human(&(uVar2[iVar0])))
			{
			}
			else if (&uVar2[iVar0] == iParam0->f_4)
			{
			}
			else
			{
				return &(uVar2[iVar0]);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_604(int iParam0, int iParam1)
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

int func_605(int iParam0)
{
	if (!func_229(iParam0))
	{
		return 0;
	}
	iVar0 = func_15(iParam0);
	if ((((((((((iVar0 == 2 && func_147(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_474(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_606(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_607(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_224(func_69());
	if (func_145(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_145(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_608()
{
	if (func_57() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_NONE";
		case 1:
			return "SALES_PITCH";
		case 2:
			return "SALES_PITCH_LUXURY";
		case 3:
			return "PUSH_SALE";
		case 4:
			return "SALES_PITCH_BROWSING_GENERAL_GOODS";
		case 5:
			return "SALES_PITCH_BROWSING_LUXURY_GOODS";
		case 6:
			return "SALES_PITCH_GOLD_PREMIUM";
		case 7:
			return "SALES_PITCH_OTHER_CUSTOMERS";
		default:
			break;
	}
	return "";
}

bool func_610(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_611(int iParam0)
{
	return func_324(iParam0, 64);
}

char* func_612(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STEAL_SINGLE_ITEM";
		case 2:
			return "STEAL_MULTIPLE_ITEM";
		case 3:
			return "HOLDUP_DONT_KILL_ME";
		case 4:
			return "HOLDUP_DONT_SHOOT";
		case 5:
			return "HOLDUP_REGISTER_FAR";
		case 6:
			return "HOLDUP_REGISTER";
		case 7:
			return "HOLDUP_HURRY";
		case 8:
			return "HOLDUP_GIVE_CASH";
		case 9:
			return "HOLDUP_HELP";
		case 10:
			return "HOLDUP_RUN";
		case 11:
			return "HOLDUP_ATTACK";
		case 12:
			return "HOLDUP_LEAVE";
		case 13:
			return "HOLDUP_DONE_GO_AWAY";
		case 14:
			return "HOLDUP_DONE";
		case 15:
			return "HOLDUP_WAITING_ROBBERY";
		case 16:
			return "GUN_AIMED_AT_LINGERING";
		case 17:
			return "HOLDUP_HOLDUP_DEFUSE";
		case 18:
			return "HOLDUP_SECOND_THOUGHT_RETALIATE";
		case 20:
			return "HOLDUP_RUN";
		case 19:
			return "POST_THEFT";
		case 21:
			return "PLAYER_HOLDUP_ROB";
		case 22:
			return "PLAYER_HOLDUP_ROB_FAR";
		case 23:
			return "PLAYER_HOLDUP_HURRY";
		case 24:
			return "PLAYER_HOLDUP_DEFUSE";
		case 25:
			return "PLAYER_HOLDUP_GIVE_CASH";
		case 26:
			return "PLAYER_GOADS_FLEE";
		case 27:
			return "PLAYER_GOADS_FIGHT";
		default:
			break;
	}
	return "";
}

void func_613(int iParam0)
{
	if (!func_600(iParam0))
	{
		return;
	}
	switch (iParam0->f_59)
	{
		case 1:
		case 2:
			if (!_0x916b8e075abc8b4e(iParam0->f_4, 1))
			{
				if (func_665(iParam0))
				{
					_0xaab050da48b57978(iParam0->f_4, "Default_Brave", Global_35, -1, 4);
				}
				else
				{
					_0xaab050da48b57978(iParam0->f_4, "Default_Scared", Global_35, -1, 4);
				}
				_0xe7fa07624574b79a(iParam0->f_4, Global_35, 2, 1, -1f, 1, 0, 0, 0);
			}
			break;
		case 3:
		case 4:
			if (!func_665(iParam0))
			{
				if (!func_120(iParam0->f_4, -1519143300))
				{
					_0x935cf6e42baf7f4d(iParam0->f_4);
					_0x541e5b41dca45828(iParam0->f_4, 1, 0);
					_0x62fdad5e01d2dd47(iParam0->f_4, get_entity_coords(Global_35, true, false), 2, 0);
					task_hands_up(iParam0->f_4, -1, Global_35, -1, false);
				}
			}
			break;
		case 0:
		case 5:
			_0x935cf6e42baf7f4d(iParam0->f_4);
			if (func_120(iParam0->f_4, -1519143300))
			{
				clear_ped_tasks(iParam0->f_4, 1, 0);
			}
			break;
	}
}

void func_614(int iParam0, int iParam1)
{
	set_bit(&(iParam0->f_57), iParam1);
}

void func_615(int iParam0, int iParam1, int iParam2)
{
	func_666(iParam0, iParam0->f_59);
	if (iParam0->f_62 == iParam2 && iParam0->f_43 <= 3)
	{
		if (iParam0->f_59 == 5 || (iParam0->f_59 == 0 && iParam0->f_60 != 5))
		{
			bVar0 = true;
			iParam1 = iParam0->f_60;
			iParam0->f_54 = iParam0->f_55 + 1;
		}
	}
	iParam0->f_60 = iParam0->f_59;
	iParam0->f_59 = iParam1;
	iParam0->f_62 = iParam0->f_61;
	iParam0->f_61 = iParam2;
	iParam0->f_55 = iParam0->f_54;
	if (!bVar0)
	{
		iParam0->f_54 = 0;
	}
	if (iParam0->f_60 == 0)
	{
		iParam0->f_60 = iParam1;
		iParam0->f_62 = iParam2;
	}
	iParam0->f_57 = 0;
	func_461(iParam0, 0);
	func_667(iParam0, iParam1, iParam2);
	if (get_random_int_in_range(0, 3) == 0)
	{
		func_308(iParam0, 2048);
	}
	else
	{
		func_309(iParam0, 2048);
	}
}

bool func_616(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_58, iParam1);
}

void func_617(int iParam0)
{
	iParam0->f_56 = -1;
	iParam0->f_51 = 0;
	iParam0->f_44 = "";
	func_308(iParam0, 4096);
}

void func_618(int iParam0, int iParam1)
{
	clear_bit(&(iParam0->f_58), iParam1);
}

void func_619(int iParam0, int iParam1)
{
	if ((iParam1 == 12 && iParam0->f_61 != 12) || iParam1 == 14)
	{
		if (iParam0->f_59 < 6)
		{
			func_615(iParam0, 6, iParam1);
		}
	}
}

void func_620(int iParam0, int iParam1)
{
	if (iParam0->f_61 != iParam1)
	{
		if (iParam1 == 0)
		{
			func_615(iParam0, 5, iParam1);
		}
		else
		{
			func_615(iParam0, 1, iParam1);
		}
	}
}

bool func_621(int iParam0)
{
	switch (iParam0->f_51)
	{
		case 0:
			if (!func_514(iParam0, iParam0->f_56))
			{
				return false;
			}
			if (func_316(iParam0->f_4) || func_316(Global_35))
			{
				return false;
			}
			func_483(iParam0);
			func_461(iParam0, 1);
			break;
		case 1:
			if (func_668(iParam0))
			{
				func_461(iParam0, 4);
			}
			break;
		case 4:
			if (is_string_null_or_empty(iParam0->f_44))
			{
				func_461(iParam0, 6);
			}
			else if (are_strings_equal(iParam0->f_44, "SILENCE"))
			{
				iParam0->f_54++;
				func_461(iParam0, 0);
			}
			else if (func_496(iParam0, iParam0->f_44))
			{
				iParam0->f_54++;
				func_461(iParam0, 0);
			}
			else
			{
				func_495(iParam0);
				func_461(iParam0, 1);
			}
			break;
		case 6:
			iParam0->f_54 = 0;
			func_461(iParam0, 0);
			return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	switch (iParam0->f_61)
	{
		case 8:
		case 9:
		case 13:
		case 14:
			return true;
	}
	return false;
}

void func_623(int iParam0)
{
	if (!func_349(iParam0->f_1, 64))
	{
		func_71(iParam0->f_1, 64);
	}
	if (!func_669(iParam0))
	{
		return;
	}
	if (func_24(iParam0->f_4, 10))
	{
		if (is_ped_injured(iParam0->f_4) || iParam0->f_59 == 6)
		{
			if ((((!func_670(iParam0->f_4, 0) && !func_120(iParam0->f_4, -2055662961)) && !func_120(iParam0->f_4, 518218985)) && !func_120(iParam0->f_4, 242628503)) && !func_120(iParam0->f_4, 474215631))
			{
				_0x406808610220405b(func_130(Global_1914319->f_3[*iParam0]->f_21));
				if (func_665(iParam0))
				{
					if (*iParam0 == 6)
					{
						func_671(iParam0->f_4, 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 1, 0, 0, 0);
						set_current_ped_weapon(iParam0->f_4, 379542007, false, 0, false, false);
						_0x802092b07e3b1eea(iParam0->f_4, get_entity_coords(Global_35, true, false), 3);
						task_combat_ped(iParam0->f_4, Global_35, 0, 0);
					}
					else
					{
						func_671(iParam0->f_4, -618550132, 1, 0, 4, 0, 0, 1056964608, 1065353216, -1, 1, 0, 0, 0);
						set_current_ped_weapon(iParam0->f_4, -618550132, false, 0, false, false);
						_0x802092b07e3b1eea(iParam0->f_4, get_entity_coords(Global_35, true, false), 3);
						open_sequence_task(&iVar0);
						task_swap_weapon(0, 1, 0, 0, 0);
						task_melee(0, Global_35, 0, 1, 1, 1065353216, 1, -1082130432);
						func_672(iParam0->f_4, &iVar0, 0, 0, 1, 1);
					}
					set_ped_combat_attributes(iParam0->f_4, 54, true);
				}
				else if (*iParam0 == 2 || *iParam0 == 1)
				{
					_0x463803429297117c(iParam0->f_4, get_entity_coords(Global_35, true, false), 3, 0);
					task_cower(iParam0->f_4, -1, Global_35, 0);
				}
				else if (func_12(&Global_1935369, 65536) && func_25(func_381(func_128(), &Global_1935369)))
				{
					iParam0->f_59 = 6;
				}
				else
				{
					_0xeeed8fafec331a70(iParam0->f_4, get_entity_coords(Global_35, true, false), 3);
					set_ped_flee_attributes(iParam0->f_4, 128, true);
					_task_smart_flee_style_ped(iParam0->f_4, Global_35, 2, 32768, -1082130432, -1, 0);
				}
				func_673(1);
				_0x710448d44a64c213(1);
				Var1.f_6 = -1082130432;
				Var1.f_7 = -1082130432;
				Var1.f_8 = -1082130432;
				Var1.f_9 = -1082130432;
				Var1.f_10 = -1082130432;
				Var1.f_11 = -1082130432;
				Var1.f_12 = -1;
				Var1.f_13 = -1;
				Var1 = -998484125;
				Var1.f_1 = Global_35;
				_0xca1315c33b9a2847(&Var1);
				if (*iParam0 == 22)
				{
					set_ped_config_flag(iParam0->f_4, 146, true);
					set_ped_config_flag(iParam0->f_4, 148, true);
				}
				else
				{
					set_ped_config_flag(iParam0->f_4, 146, false);
					set_ped_config_flag(iParam0->f_4, 148, false);
					iVar18 = func_128();
					if (iVar18 != 120 && iVar18 != 92)
					{
						if (func_674(iParam0->f_4))
						{
							iVar19 = 195938434;
						}
						else
						{
							iVar19 = -1810065318;
						}
						_0xd7494ded50c6ef52(player_id(), iVar19, 2);
						_0xc6c4e15cf7d52fea(iParam0->f_4, 1000f);
						_0x10827b5a0aac56a7(player_id(), iVar19, iParam0->f_4);
						_0xf0b67bad53c35bd9(iParam0->f_4, Global_35, iParam0->f_4, Global_36, iVar19);
					}
				}
			}
		}
	}
	if (!func_324(iParam0, 4096))
	{
		if (func_621(iParam0))
		{
			func_309(iParam0, 4096);
		}
	}
}

void func_624(int iParam0)
{
	iParam0->f_56 = 1;
	if (func_324(iParam0, 2048))
	{
		return;
	}
	switch (iParam0->f_62)
	{
		case 2:
			iParam0->f_56 = 30;
			break;
		case 8:
			iParam0->f_56 = 10;
			break;
		case 9:
		case 10:
		case 11:
			iParam0->f_56 = 5;
			break;
	}
}

bool func_625(int iParam0)
{
	if (func_63(player_id(), 1))
	{
		return true;
	}
	if (func_321(*iParam0, iParam0->f_1) || iParam0->f_50 == 10)
	{
		return true;
	}
	if ((func_490(iParam0) && !func_535(iParam0)) && ((iParam0->f_62 == 9 || iParam0->f_62 == 10) || iParam0->f_62 == 11))
	{
		return true;
	}
	return false;
}

void func_626(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_627()
{
	switch (Local_14.f_103)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 8:
			return true;
	}
	return false;
}

int func_628(int iParam0)
{
	if (!func_533(func_128()) || *iParam0 != Global_1914319->f_18941.f_10)
	{
		return 0;
	}
	if (func_335(Global_1914319->f_18941.f_10))
	{
		return 0;
	}
	if (func_368())
	{
		if (!func_675())
		{
			if (func_459(16))
			{
				iParam0->f_44 = "PROMOTE_ROOM_RENTAL_AGAIN";
			}
			else
			{
				iParam0->f_44 = "PROMOTE_ROOM_RENTAL";
			}
		}
		else if (func_459(16))
		{
			iParam0->f_44 = "HOW_IS_ITEM_ROOM";
			func_460(16);
		}
		return 1;
	}
	else
	{
		if (func_28(&(Global_1914319->f_18941.f_19)) && func_34(&(Global_1914319->f_18941.f_19)) < 60f)
		{
			return 0;
		}
		if (func_459(8))
		{
			iParam0->f_44 = "POST_BATH";
			func_173(&(Global_1914319->f_18941.f_19));
			func_460(8);
		}
		else if (!func_676())
		{
			if (func_368())
			{
				iParam0->f_44 = "PROMOTE_BATH_NEUTRAL";
			}
			else if (is_ped_male(Global_35))
			{
				iParam0->f_44 = "PROMOTE_BATH_MALE";
			}
			else
			{
				iParam0->f_44 = "PROMOTE_BATH_FEMALE";
			}
		}
		return 1;
	}
	return 0;
}

bool func_629(int iParam0)
{
	iVar0 = create_itemset(true);
	iVar2 = 0;
	vVar5 = { get_entity_coords(iParam0, true, false) };
	iVar8 = _0x59b57c4b06531e1e(vVar5, 10f, iVar0, 1);
	if (iVar8 == 0)
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 < iVar8)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar3 = iVar1;
		if (((does_entity_exist(iVar3) && is_entity_a_ped(iVar3)) && func_375(iVar3)) && has_entity_clear_los_to_entity(iParam0, iVar3, 17))
		{
			Local_14.f_93 = iVar3;
			iVar2 = 1;
		}
		else
		{
			iVar4++;
		}
	}
	destroy_itemset(iVar0);
	return iVar2;
}

bool func_630()
{
	return &Global_1935436 == 2;
}

char* func_631(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_OATMEAL";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_OATMEAL";
					}
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_PEACH_COBBLER";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_PEACH_COBBLER";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_PRAIRIE_CHICKEN";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_PRAIRIE_CHICKEN";
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_LOBSTER_BISQUE";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_LOBSTER_BISQUE";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_PRIME_RIB";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_PRIME_RIB";
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_CHILI";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_CHILLI";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_ROAST_BEEF";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_ROAST_BEEF";
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_CRACKED_WHEAT_MILK";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_WHEAT_AND_MILK";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_FRIED_CATFISH";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_FRIED_CATFISH";
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_BEEF_STEW";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_BEEF_STEW";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_LAMBS_FRY";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_LAMBS_FRY";
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PLAYER_ORDER_FISH_STEW";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_FISH_STEW";
					}
					break;
				case 5:
					if (bParam2)
					{
						return "PLAYER_ORDER_LAMBS_HEART";
					}
					else
					{
						return "HAND_OVER_BAR_FOOD_LAMBS_HEART";
					}
					break;
			}
			break;
	}
	return "";
}

int func_632(int iParam0, int iParam1)
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

bool func_633()
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

int func_634(int iParam0)
{
	if (!func_279(iParam0))
	{
		return -1;
	}
	return func_678(func_677(iParam0));
}

bool func_635(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_636(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_679(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_680("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_681(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_682(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_683(iVar1);
				return true;
			}
			iVar3++;
		}
		func_683(iVar1);
	}
	return false;
}

int func_637(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_679(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_684(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_685(bParam2), iParam0, 0);
	return uVar2;
}

bool func_638(int iParam0, int iParam1)
{
	if (func_57() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_639(int iParam0)
{
	if (func_57() != -1)
	{
		if (func_641(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_641(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_640(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_641(iParam0, 65536) && !func_641(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_641(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_641(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_641(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_642()
{
	return Global_1905944->f_5694;
}

int func_643()
{
	if (func_686())
	{
		return 1;
	}
	return 0;
}

void func_644(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_643();
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

void func_645(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_565(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_687(iParam1), fParam2, -1);
	}
}

void func_646(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_643();
	}
	iVar0 = get_game_timer();
	func_688(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_689(iParam0, iVar0, iParam3);
	}
}

bool func_647(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_226(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_225(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_221(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_222(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_223(iParam0);
	if (iVar5 < 1 || iVar5 > func_227(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_648(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_568(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_568(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_649()
{
	if (func_690())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_410(2);
	}
	if (Global_1347477->f_119)
	{
		return func_410(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_691();
	fVar2 = func_692();
	fVar3 = func_693();
	fVar4 = func_694();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_695()));
	fVar7 = (func_410(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_696(3, round((to_float(iVar8) * fVar10)), 0);
	func_697(3, fVar9, fVar9 > 100f);
	return func_414(fVar7, -100f, 100f);
}

float func_650()
{
	if (func_690())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_410(1);
	}
	if (Global_1347477->f_119)
	{
		return func_410(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_691();
	fVar2 = func_692();
	fVar3 = func_693();
	fVar4 = func_694();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_695()));
	fVar7 = (func_410(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_696(2, round((to_float(iVar8) * fVar10)), 0);
	func_697(2, fVar9, fVar9 > 100f);
	return func_414(fVar7, -100f, 100f);
}

float func_651()
{
	if (func_690())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_410(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_698())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_699())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_410(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_691();
	fVar2 = func_692();
	fVar3 = func_693();
	fVar4 = func_694();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_695()));
	fVar7 = (func_410(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_696(1, round((to_float(iVar8) * fVar10)), 0);
	func_697(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_410(0);
	}
	return func_414(fVar7, -100f, 100f);
}

int func_652(int iParam0, int iParam1)
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

float func_653(float fParam0, float fParam1, float fParam2)
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

int func_654()
{
	return Global_1897952->f_41;
}

bool func_655(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_656(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = iParam2;
		Var0.f_4 = iParam4;
		Var0.f_7 = iParam3;
		Var0.f_9 = iParam5;
		Var0.f_10 = iParam6;
		return _0xfdf38e2b711bf78e(&Var0, 17);
	}
	return false;
}

bool func_657(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_658(int iParam0, int iParam1)
{
	iVar0 = -1406986790;
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = _0xb292203008ebbaac(iParam1);
	if (iVar0 == 788161705)
	{
		StringCopy(Global_1393529->f_288[iParam0], "0840_S_M_M_MarketVendor_01_BLACK_01", 64);
	}
	else if (get_random_int_in_range(0, 4) >= 2)
	{
		StringCopy(Global_1393529->f_288[iParam0], "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[iParam0], "0839_S_M_M_MarketVendor_01_WHITE_02", 64);
	}
}

var func_659(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_660(int iParam0)
{
	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_73(29))
			{
				if (func_700(29) && func_701() <= func_702(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_73(3))
			{
				if (func_700(3) && func_701() <= func_702(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_73(25))
			{
				if (func_700(25) && func_701() <= func_702(25))
				{
					StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_661()
{
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_662()
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_663(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_664()
{
	StringCopy(Global_1393529->f_288[11], "EA_LCMP_Foreman", 64);
}

bool func_665(int iParam0)
{
	switch (*iParam0)
	{
		case 6:
		case 10:
		case 26:
		case 28:
		case 29:
			return true;
		default:
			break;
	}
	if (func_128() == 92 && *iParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_666(int iParam0, int iParam1)
{
	set_bit(&(iParam0->f_58), iParam1);
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 8:
				case 9:
				case 11:
					bVar0 = true;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam2)
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
				case 12:
				case 14:
				case default:
					bVar0 = true;
					break;
				case 0:
					break;
			}
			break;
		case 4:
			switch (iParam2)
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
				case 12:
				case 14:
				case default:
					bVar0 = true;
					break;
				case 0:
					break;
			}
			break;
	}
	if (bVar0)
	{
		iVar1 = func_69();
		Global_20710.f_1784[iParam0->f_1] = iVar1;
		func_491(iParam0->f_4, Global_35, iParam0->f_4, 0, 0, 10);
	}
}

bool func_668(int iParam0)
{
	iParam0->f_44 = "";
	iParam0->f_56 = -1;
	if (iParam0->f_39)
	{
		if (func_703(iParam0))
		{
			return true;
		}
	}
	if (iParam0->f_53 == 0)
	{
		switch (iParam0->f_59)
		{
			case 1:
				switch (iParam0->f_61)
				{
					case 2:
						switch (iParam0->f_54)
						{
							case 0:
								iVar0 = 0;
								if (func_335(*iParam0))
								{
									iVar0 = 2;
								}
								else if (func_376(iParam0->f_4, Global_35, 1) > 4f)
								{
									iVar0 = 1;
								}
								if (iVar0 == 0)
								{
									iParam0->f_44 = func_377(7);
								}
								else
								{
									iParam0->f_44 = func_377(8);
								}
								iParam0->f_56 = 4;
								break;
							case 1:
								iParam0->f_44 = func_377(3);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(6);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 8:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(16);
								if (!func_324(iParam0, 2048))
								{
									iParam0->f_56 = 5;
								}
								break;
							case 1:
								if (func_324(iParam0, 2048))
								{
									iParam0->f_45 = 1;
									iParam0->f_44 = func_377(42);
									iParam0->f_56 = 5;
								}
								break;
						}
						break;
					case 9:
					case 12:
						switch (iParam0->f_54)
						{
							case 0:
								if (func_665(iParam0))
								{
									iParam0->f_44 = func_377(14);
								}
								else
								{
									iVar1 = func_373(Global_35, 1, 0, 0);
									if (iVar1 != 0 && _0x705be297eebdb95d(iVar1))
									{
										iParam0->f_44 = func_377(12);
									}
									else
									{
										iParam0->f_44 = func_377(2);
									}
								}
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 6:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(9);
								if (!func_324(iParam0, 2048))
								{
									iParam0->f_56 = 5;
								}
								break;
							case 1:
								if (func_324(iParam0, 2048))
								{
									iParam0->f_45 = 1;
									iParam0->f_44 = func_377(41);
									iParam0->f_56 = 4;
								}
								break;
						}
						break;
					case 7:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(10);
								if (!func_324(iParam0, 2048))
								{
									iParam0->f_56 = 5;
								}
								break;
							case 1:
								if (func_324(iParam0, 2048))
								{
									iParam0->f_45 = 1;
									iParam0->f_44 = func_377(41);
									iParam0->f_56 = 4;
								}
								break;
						}
						break;
					case 3:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(11);
								if (!func_324(iParam0, 2048))
								{
									iParam0->f_56 = 5;
								}
								break;
							case 1:
								if (func_324(iParam0, 2048))
								{
									iParam0->f_45 = 1;
									iParam0->f_44 = func_377(41);
									iParam0->f_56 = 4;
								}
								break;
						}
						break;
					case 13:
						switch (iParam0->f_54)
						{
							case 0:
								if (!is_ped_in_combat(Global_35, 0))
								{
									if (func_490(iParam0))
									{
										iParam0->f_44 = func_377(35);
									}
									else
									{
										iParam0->f_44 = func_377(34);
									}
								}
								if (!func_324(iParam0, 2048))
								{
									iParam0->f_56 = 3;
								}
								break;
							case 1:
								if (func_324(iParam0, 2048))
								{
									iParam0->f_45 = 1;
									iParam0->f_44 = func_377(42);
									iParam0->f_56 = 3;
								}
								break;
						}
						break;
				}
				break;
			case 2:
				switch (iParam0->f_61)
				{
					case 2:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(19);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(20);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
					case 8:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(4);
								iParam0->f_56 = 4;
								break;
						}
						break;
				}
				break;
			case 3:
				switch (iParam0->f_61)
				{
					case 8:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(5);
								iParam0->f_56 = 10;
								break;
						}
						break;
					case 2:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(5);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(21);
								iParam0->f_56 = 15;
								break;
							case 1:
								iParam0->f_44 = func_377(26);
								iParam0->f_56 = 1;
								break;
							default:
								if (func_278(iParam0->f_4, 0, 0, 0))
								{
									iParam0->f_44 = func_377(3);
									iParam0->f_56 = 30;
								}
								else
								{
									iParam0->f_44 = func_377(27);
									iParam0->f_56 = 2;
								}
								break;
						}
						break;
					case 9:
					case 12:
						switch (iParam0->f_54)
						{
							case 0:
								if (func_665(iParam0))
								{
									iParam0->f_44 = func_377(15);
								}
								else
								{
									iParam0->f_44 = func_377(22);
								}
								iParam0->f_56 = 4;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(23);
								iParam0->f_56 = 5;
								break;
						}
						break;
				}
				break;
			case 4:
				switch (iParam0->f_61)
				{
					case 2:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(25);
								iParam0->f_56 = 10;
								break;
							default:
								iParam0->f_44 = func_377(24);
								iParam0->f_56 = 15;
								break;
						}
						break;
					case 8:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(24);
								iParam0->f_56 = 5;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(24);
								iParam0->f_56 = 15;
								break;
							case 1:
								iParam0->f_44 = func_377(26);
								iParam0->f_56 = 1;
								break;
							default:
								iParam0->f_44 = func_377(27);
								iParam0->f_56 = 60;
								break;
						}
						break;
					case 13:
						switch (iParam0->f_54)
						{
							case 0:
								iParam0->f_44 = func_377(5);
								iParam0->f_56 = 3;
								break;
						}
						break;
				}
				break;
			case 6:
				switch (iParam0->f_54)
				{
					case 0:
						if (func_665(iParam0))
						{
							iParam0->f_44 = func_377(28);
						}
						else
						{
							iParam0->f_44 = func_377(29);
						}
						iParam0->f_56 = 0;
						break;
					case 1:
						iParam0->f_45 = 1;
						if (func_665(iParam0))
						{
							iParam0->f_44 = func_377(44);
						}
						else
						{
							iParam0->f_44 = func_377(45);
						}
						iParam0->f_56 = 2;
						break;
				}
				break;
			case 5:
				if (func_335(*iParam0) && _0x7f9b9791d4cb71f6(iParam0->f_4, Global_35, 0, 0) != 1)
				{
					iParam0->f_44 = "";
				}
				else
				{
					switch (iParam0->f_60)
					{
						case 1:
						case 2:
							switch (iParam0->f_62)
							{
								case 2:
								case 8:
									switch (iParam0->f_54)
									{
										case 0:
											if (func_324(iParam0, 2048))
											{
												iParam0->f_45 = 1;
												iParam0->f_44 = func_377(37);
												iParam0->f_56 = 10;
											}
											else
											{
												iParam0->f_54++;
												iParam0->f_44 = func_377(30);
												iParam0->f_56 = 10;
											}
											break;
										case 9:
										case 12:
											switch (iParam0->f_54)
											{
												case 0:
													if (func_324(iParam0, 2048))
													{
														iParam0->f_45 = 1;
														iParam0->f_44 = func_377(43);
														iParam0->f_56 = 2;
													}
													else
													{
														iParam0->f_54++;
														iParam0->f_44 = func_377(31);
														iParam0->f_56 = 5;
													}
													break;
												case 4:
												case 5:
													switch (iParam0->f_54)
													{
														case 0:
															if (func_324(iParam0, 2048))
															{
																iParam0->f_45 = 1;
																iParam0->f_44 = func_377(39);
																iParam0->f_56 = 1;
															}
															else
															{
																iParam0->f_54++;
																iParam0->f_44 = func_377(32);
																iParam0->f_56 = 10;
															}
															break;
														case 3:
														case 6:
														case 7:
															switch (iParam0->f_54)
															{
																case 0:
																	iParam0->f_44 = func_377(33);
																	iParam0->f_56 = 2;
																	break;
															}
															break;
														case 13:
															switch (iParam0->f_54)
															{
																case 0:
																	iParam0->f_44 = func_377(31);
																	iParam0->f_56 = 2;
																	break;
															}
															break;
													}
													break;
												case 3:
												case 4:
													switch (iParam0->f_62)
													{
														case 3:
														case 6:
														case 7:
														case 8:
														case 13:
															switch (iParam0->f_54)
															{
																case 0:
																	if (func_324(iParam0, 2048))
																	{
																		iParam0->f_45 = 1;
																		iParam0->f_44 = func_377(40);
																		iParam0->f_56 = 10;
																	}
																	else
																	{
																		iParam0->f_54++;
																		iParam0->f_44 = func_377(31);
																		iParam0->f_56 = 10;
																	}
																	break;
																case 2:
																	switch (iParam0->f_54)
																	{
																		case 0:
																			if (func_324(iParam0, 2048))
																			{
																				iParam0->f_45 = 1;
																				iParam0->f_44 = func_377(40);
																				iParam0->f_56 = 30;
																			}
																			else
																			{
																				iParam0->f_54++;
																				iParam0->f_44 = func_377(31);
																				iParam0->f_56 = 10;
																			}
																			break;
																		case 9:
																		case 12:
																			switch (iParam0->f_54)
																			{
																				case 0:
																					if (func_324(iParam0, 2048))
																					{
																						iParam0->f_45 = 1;
																						iParam0->f_44 = func_377(43);
																						iParam0->f_56 = 1;
																					}
																					else
																					{
																						iParam0->f_54++;
																						iParam0->f_44 = func_377(31);
																						iParam0->f_56 = 2;
																					}
																					break;
																				case 4:
																				case 5:
																					switch (iParam0->f_54)
																					{
																						case 0:
																							if (func_324(iParam0, 2048))
																							{
																								iParam0->f_45 = 1;
																								iParam0->f_44 = func_377(39);
																								iParam0->f_56 = 1;
																							}
																							else
																							{
																								iParam0->f_54++;
																								iParam0->f_44 = func_377(32);
																								iParam0->f_56 = 10;
																							}
																							break;
																					}
																					break;
																			}
																		}
																		break;
																}
															}
															else
															{
																switch (iParam0->f_59)
																{
																	case 1:
																	case 2:
																	case 3:
																		switch (iParam0->f_61)
																		{
																			case 9:
																				switch (iParam0->f_54)
																				{
																					case 0:
																						iParam0->f_44 = func_377(13);
																						iParam0->f_56 = 8;
																						break;
																				}
																				break;
																			case 3:
																			case 6:
																			case 7:
																				switch (iParam0->f_54)
																				{
																					case 0:
																						iParam0->f_44 = func_377(11);
																						iParam0->f_56 = 8;
																						break;
																				}
																				break;
																		}
																		break;
																}
															}
															return true;
														}

bool func_669(int iParam0)
{
	if ((((((((((((((*iParam0 == 20 || *iParam0 == 10) || *iParam0 == 18) || *iParam0 == 17) || *iParam0 == 5) || *iParam0 == 2) || *iParam0 == 1) || *iParam0 == 33) || *iParam0 == 8) || *iParam0 == 21) || *iParam0 == 12) || *iParam0 == 22) || *iParam0 == 13) || *iParam0 == 14) || *iParam0 == 9)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(1848756007) <= 0 && _get_number_of_references_of_script_with_name_hash(564662301) <= 0)
	{
		return true;
	}
	if (iParam0->f_61 == 8 || iParam0->f_61 == 14)
	{
		return true;
	}
	return false;
}

bool func_670(int iParam0, bool bParam1)
{
	if (((((func_120(iParam0, 780511057) || func_120(iParam0, -219932022)) || func_120(iParam0, 1120685857)) || func_120(iParam0, -2117564886)) || func_120(iParam0, 655999185)) || func_120(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_120(iParam0, -653332088) || func_120(iParam0, 167901368))
		{
			return true;
		}
		if (is_ped_shooting(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_671(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_682(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_682(iVar4) && iVar4 != iVar0)
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
	if (func_57() == -1 && !func_126(iVar0))
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
				if (func_126(-183018591))
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
		if (iParam0 != Global_35 && func_682(iVar0))
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
		func_704(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_705(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_706(iVar0))
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

void func_672(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_673(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_707(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_708(Global_1935630, 4194304);
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

bool func_674(int iParam0)
{
	if ((is_ped_injured(iParam0) || is_ped_fatally_injured(iParam0)) || get_entity_health(iParam0) < get_entity_max_health(iParam0, false))
	{
		return true;
	}
	return false;
}

bool func_675()
{
	return func_165(func_709(func_128()));
}

bool func_676()
{
	return Global_1914319->f_18941.f_15;
}

int func_677(int iParam0)
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

int func_678(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_679(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_249(iParam0, 1399091007))
	{
		func_710(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_680(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_685(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_681(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_682(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_683(int iParam0)
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

int func_684(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_711(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_713(&Var0, func_712(0));
	}
	if (!func_714(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_683(iVar14);
	return uVar15;
}

int func_685(bool bParam0)
{
	if (func_57() == -1)
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

bool func_686()
{
	return Global_1955569->f_866;
}

char* func_687(int iParam0)
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

void func_688(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_643();
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

void func_689(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_643();
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

bool func_690()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_691()
{
	fVar0 = func_416(13);
	iVar1 = func_418(fVar0);
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

float func_692()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_693()
{
	if (func_715())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_694()
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

float func_695()
{
	return Global_1955565->f_3;
}

void func_696(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_648(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_697(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_648(iParam0, 2, 0, 0);
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

bool func_698()
{
	return func_416(12) <= -99f;
}

bool func_699()
{
	return func_416(12) >= 99f;
}

bool func_700(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_407((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_701()
{
	if (!func_407((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_407((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_407((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_407((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_407((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_407((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_407((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_702(int iParam0)
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

bool func_703(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_40);
	return StackVal;
}

int func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_716(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_717((386 + iVar28), 1);
			if (func_718(iParam0, &Var0, iVar5, 0))
			{
				if (func_719(iParam0, &Var6, iVar5))
				{
					Var29 = { func_720(iParam0, Var0, iVar5, 0) };
					func_721(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_722(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_723(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_724(iParam0, iParam1);
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

void func_705(int iParam0, int iParam1, float fParam2)
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

bool func_706(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_707(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_708(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_709(int iParam0)
{
	if (!func_657(iParam0))
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

void func_710(int iParam0, var uParam1, var uParam2)
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

struct<14> func_711(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_712(bool bParam0)
{
	iVar0 = func_685(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_720(923904168, func_725(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_720(923904168, func_725(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_720(923904168, func_725(bParam0), -740156546, 0);
}

void func_713(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_714(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_685(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_715()
{
	return _unlock_is_unlocked(-121456797);
}

struct<5> func_716(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_725(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_602(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_720(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_712(bParam1) };
			if (bParam2 && func_726(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_718(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_718(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_719(iParam0, &Var5, 1728382685))
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
			Var0 = { func_727(bParam1) };
			switch (func_390(iParam0))
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
			if (func_728(iParam0, -1823706425))
			{
				Var0 = { func_720(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_728(iParam0, -1483207246))
			{
				Var0 = { func_720(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_729(Var0, &Var27, bParam1, 0))
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

int func_717(int iParam0, int iParam1)
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

bool func_718(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_730(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_719(int iParam0, var uParam1, int iParam2)
{
	if (func_731(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_720(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_78(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_685(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_721(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_732(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_729(*uParam1, &Var0, bParam6, 0))
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
	if (!func_722(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_685(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_722(bool bParam0)
{
	if (func_57() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_685(bParam0));
}

int func_723(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_733(iParam0))
	{
		return 0;
	}
	if (!func_722(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_724(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_734(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

struct<4> func_725(bool bParam0)
{
	return func_720(1328661203, func_735(), -1591664384, bParam0);
}

bool func_726(int iParam0, bool bParam1)
{
	if (func_390(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_147(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_727(bool bParam0)
{
	iVar0 = func_685(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_720(271701509, func_725(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_720(271701509, func_725(bParam0), 12999093, 0);
}

bool func_728(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_390(iParam0);
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

bool func_729(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_685(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_730(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_720(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_685(bParam6), &Var0, 0);
	return uVar4;
}

bool func_731(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_685(0);
	*uParam1 = { func_720(iParam0, func_712(0), iParam3, 0) };
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

bool func_732(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_733(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_734(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> func_735()
{
	return Var0;
}

