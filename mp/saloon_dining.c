void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&uLocal_234);
	}
	bVar0 = func_2() == -1;
	while ((!func_3(bVar0) && !func_4(32768)) && !func_5(&uLocal_234, &uScriptParam_0))
	{
		func_6(&uLocal_234);
		if (func_7(&uLocal_234))
		{
		}
		else
		{
			wait(0);
		}
	}
	func_1(&uLocal_234);
}

void func_1(var uParam0)
{
	func_8(uParam0);
	func_9(uParam0);
	func_10(uParam0->f_1, 4096);
	if (uParam0->f_235)
	{
		_0x93624b36e8851b42(get_player_index());
	}
	func_10(uParam0->f_1, 65536);
	uParam0->f_236 = 0;
	_0x37d7bdba89f13959("CamTransitionBlinkSlow");
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(&(uParam0->f_24[iVar0])))
		{
			_delete_anim_scene(&(uParam0->f_24[iVar0]));
		}
		iVar0++;
	}
	func_11(&(uParam0->f_157));
	if (uParam0->f_963)
	{
		set_ped_config_flag(Global_34, 334, false);
		uParam0->f_963 = 0;
	}
	terminate_this_thread();
}

int func_2()
{
	return Global_1572887->f_13;
}

int func_3(bool bParam0)
{
	if (bParam0)
	{
		return func_12(1);
	}
	return func_13(0, 0);
}

bool func_4(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_5(var uParam0, var uParam1)
{
	bVar0 = func_2() == -1;
	if (bVar0)
	{
		bVar1 = func_14(uParam0, uParam1);
	}
	else
	{
		bVar1 = func_15(uParam0, uParam1);
	}
	if (_does_volume_exist(Global_1940018->f_5[uParam0->f_1]->f_4))
	{
		if (is_entity_in_volume(player_ped_id(), Global_1940018->f_5[uParam0->f_1]->f_4, true, 0))
		{
			if (!func_16(uParam0->f_1, 65536))
			{
				func_17(uParam0->f_1, 65536);
			}
		}
		else if (func_16(uParam0->f_1, 65536))
		{
			func_10(uParam0->f_1, 65536);
		}
	}
	if (bVar0)
	{
		if (func_16(uParam0->f_1, 65536))
		{
			uParam0->f_223 = func_18(&(uParam0->f_622), -1, 0);
		}
		if (func_16(uParam0->f_1, 2097152))
		{
			func_19(&(uParam0->f_622));
			func_18(&(uParam0->f_622), -1, 0);
			func_10(uParam0->f_1, 2097152);
		}
	}
	else
	{
		uParam0->f_223 = func_20(&(uParam0->f_622));
	}
	if (bVar1)
	{
		if (func_16(uParam0->f_1, 1024))
		{
			func_10(uParam0->f_1, 1024);
		}
		if (uParam0->f_5 > 1)
		{
			set_ped_reset_flag(uParam0->f_13, 49, true);
		}
		func_21();
	}
	else if (!func_16(uParam0->f_1, 4194304))
	{
		func_17(uParam0->f_1, 1024);
	}
	iVar2 = func_22(*uParam0);
	iVar3 = func_23(iVar2);
	func_24(uParam0);
	switch (uParam0->f_5)
	{
		case 0:
			func_25(uParam0, uParam1);
			func_26(&(uParam0->f_622), 8);
			func_27(&(uParam0->f_622), 0);
			break;
		case 1:
			if (func_28(uParam0))
			{
				func_29(uParam0);
				func_30(uParam0, 2);
			}
			break;
		case 2:
			if (func_16(uParam0->f_1, 65536))
			{
				func_31(uParam0);
			}
			break;
		case 3:
			if (func_32(uParam0))
			{
				func_30(uParam0, 4);
			}
			break;
		case 4:
			if (func_33(uParam0))
			{
				func_30(uParam0, 5);
			}
			break;
		case 5:
			if (func_34(uParam0))
			{
				if (func_35(uParam0->f_237))
				{
					func_36(uParam0->f_237, 1, 1, 1);
				}
				func_37(&(uParam0->f_622), 8);
				func_27(&(uParam0->f_622), 1);
				func_38(&(uParam0->f_622));
				if (&Global_1940018->f_5[uParam0->f_1])
				{
					func_30(uParam0, 8);
				}
				else
				{
					func_26(&(uParam0->f_622), 8);
					func_27(&(uParam0->f_622), 0);
					func_39(&(uParam0->f_622));
					func_18(&(uParam0->f_622), -1, 0);
					func_30(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_16(uParam0->f_1, 65536))
			{
				func_37(&(uParam0->f_622), 8);
				func_27(&(uParam0->f_622), 1);
				func_40();
				func_30(uParam0, 8);
			}
			break;
		case 8:
			if (!does_entity_exist(uParam0->f_622.f_325) && does_entity_exist(uParam0->f_13))
			{
				uParam0->f_622.f_325 = uParam0->f_13;
			}
			if (!bVar0 && !get_ped_config_flag(uParam0->f_13, 297, true))
			{
				set_ped_config_flag(uParam0->f_13, 297, true);
			}
			if (func_35(uParam0->f_22))
			{
				func_41(&(uParam0->f_22), 1, 1);
			}
			vVar4 = { get_entity_coords(uParam0->f_13, true, false) };
			if (((((absf((vVar4.z - Global_35.f_2)) > 1.5f || is_ped_using_any_scenario(Global_34)) || _is_ped_carrying(Global_34)) || func_42(Global_34)) || _0xec7e480ff8bd0bed(Global_34)) || func_44(func_43(*uParam0), 30, uParam0->f_13))
			{
				func_45(&(uParam0->f_622));
			}
			bVar7 = _0xec7e480ff8bd0bed(Global_34);
			if (bVar7 && func_46(uParam0->f_237, 1))
			{
				func_48(func_47(uParam0->f_237), 0);
			}
			else if (!bVar7 && !func_46(uParam0->f_237, 1))
			{
				func_48(func_47(uParam0->f_237), 1);
			}
			if (func_49(&uVar8))
			{
				func_17(uParam0->f_1, 1024);
				func_45(&(uParam0->f_622));
				if (func_35(uParam0->f_237))
				{
					func_36(uParam0->f_237, 0, 1, 1);
				}
			}
			else if (!func_50(uParam0->f_237, 1))
			{
				if (func_35(uParam0->f_237))
				{
					func_36(uParam0->f_237, 1, 1, 1);
				}
			}
			if ((uParam0->f_264 && func_52(Global_35, func_51(*uParam0)) > 5f) && !is_sphere_visible(func_51(*uParam0), 1.5f))
			{
				if (_does_volume_exist(uParam0->f_238))
				{
					_delete_volume(uParam0->f_238);
				}
				func_53(uParam0);
				uParam0->f_264 = 0;
			}
			if (!func_16(uParam0->f_1, 65536))
			{
				func_26(&(uParam0->f_622), 8);
				func_27(&(uParam0->f_622), 0);
				_display_hud_component(-1347445791);
				_display_hud_component(1422092402);
				iVar9 = -15;
				if (Global_1940085->f_28.f_8 != 0)
				{
					iVar9 = func_54();
					func_55(&iVar9, 0, 0, 8, 0, 0, 0);
					func_56(func_22(*uParam0), 256);
				}
				func_57(&(Local_18.f_1), iVar9);
				func_30(uParam0, 7);
				return false;
			}
			uParam0->f_255++;
			if (!bVar1)
			{
				if (func_35(uParam0->f_237))
				{
					func_36(uParam0->f_237, 0, 1, 1);
				}
				func_26(&(uParam0->f_622), 8);
				func_30(uParam0, 25);
				uParam0->f_255 = 0;
				func_27(&(uParam0->f_622), 0);
				_display_hud_component(-1347445791);
				_display_hud_component(1422092402);
				return false;
			}
			if (&Global_1940018->f_5[uParam0->f_1])
			{
				_hide_hud_component(-1347445791);
				if (func_2() == 0)
				{
					_hide_hud_component(1422092402);
				}
			}
			else
			{
				_display_hud_component(-1347445791);
				_display_hud_component(1422092402);
			}
			if (func_58(uParam0, uParam1))
			{
				if (func_35(uParam0->f_237))
				{
					func_48(func_47(uParam0->f_237), 0);
				}
				if (uParam0->f_228)
				{
					func_30(uParam0, 10);
					return false;
				}
				else
				{
					func_30(uParam0, 10);
				}
				set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_34);
				Global_1940018->f_51 = 1;
			}
			if (func_59(uParam0))
			{
				switch (uParam0->f_224)
				{
					case 1:
					case 3:
						uParam0->f_211 = { *uParam0->f_24[4] };
						func_17(uParam0->f_1, 4);
						func_60(uParam0, 0);
						uParam0->f_265 = func_61(uParam0, uParam0->f_224);
						uParam0->f_265.f_2 = 6f;
						if (func_62(uParam0->f_265, 0))
						{
							func_63(&(uParam0->f_265));
						}
						iVar10 = &uParam0->f_622.f_332[2];
						break;
					case 2:
						uParam0->f_211 = { *uParam0->f_24[5] };
						func_17(uParam0->f_1, 8);
						func_60(uParam0, 0);
						uParam0->f_265 = func_61(uParam0, uParam0->f_224);
						uParam0->f_265.f_2 = 1f;
						if (func_62(uParam0->f_265, 0))
						{
							func_63(&(uParam0->f_265));
						}
						if (*uParam0 == 2)
						{
							iVar10 = 100;
						}
						else
						{
							iVar10 = &uParam0->f_622.f_332[3];
						}
						break;
				}
				func_64(iVar10, 0, 0, 1, 0);
				_0x2a374e6f0075ee81(func_65(iVar3), func_66(iVar2), uParam0->f_265, 1, iVar10);
				uParam0->f_225 = uParam0->f_224;
				Local_18.f_203 = { uParam0->f_211 };
				uParam0->f_232 = 1;
				func_68(func_67(1328660713), 1);
				func_68(func_70(1328660713, func_69(iVar2)), 1);
				set_ped_reset_flag(Global_34, 175, true);
				if (!is_ped_in_cover(Global_34, 0, 0))
				{
					set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
					set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
					_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 1);
					func_30(uParam0, 20);
				}
				else
				{
					vVar11.x = Global_34;
					vVar11.f_1 = 1;
					vVar11.f_2 = { Global_35 };
					task_exit_cover(&vVar11);
					func_30(uParam0, 21);
				}
				func_71(&(uParam0->f_236), 1);
				clear_ped_secondary_task(Global_34);
				if (func_35(uParam0->f_237))
				{
					func_48(func_47(uParam0->f_237), 0);
				}
				uParam0->f_263 = 0;
				func_53(uParam0);
				Global_1940018->f_51 = 1;
			}
			break;
		case 9:
			if (func_46(uParam0->f_237, 1))
			{
				func_48(func_47(uParam0->f_237), 0);
			}
			func_45(&(uParam0->f_622));
			set_ped_can_play_gesture_anims(uParam0->f_13, 0, 1);
			set_ped_can_play_ambient_anims(uParam0->f_13, false);
			func_72();
			if (_0x34a0671be613d3d0(uParam0->f_211))
			{
				func_30(uParam0, 24);
				reset_anim_scene(uParam0->f_211, 0);
				if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
				{
					load_anim_scene(uParam0->f_211);
				}
				return false;
			}
			if ((uParam0->f_241 > 1 && uParam0->f_241 < 6) && (_0x0c3cb2e600c8977d(Global_34, 1) || !is_ped_using_any_scenario(Global_34)))
			{
				func_41(&(uParam0->f_22), 1, 1);
				func_30(uParam0, 24);
				abort_anim_scene(uParam0->f_211, false);
				reset_anim_scene(uParam0->f_211, 0);
				if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
				{
					load_anim_scene(uParam0->f_211);
				}
				return false;
			}
			switch (uParam0->f_241)
			{
				case 0:
					func_73(uParam0);
					_0x541b8576615c33de(uParam0->f_239, uParam0->f_10);
					if (!_does_scenario_point_exist(uParam0->f_7))
					{
						uParam0->f_7 = create_scenario_point(-545460140, uParam0->f_10, uParam0->f_9, 0, 0, 0);
						_0xa7479fb665361edb(uParam0->f_7, 0);
						_0xe69fda40aac3efc0(uParam0->f_7, 0);
						_set_scenario_point_flag(uParam0->f_7, 32, true);
					}
					if (!_does_scenario_point_exist(uParam0->f_8))
					{
						uParam0->f_8 = create_scenario_point(1579488576, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, func_74()), (uParam0->f_9 - 180f), 0, 0, 0);
						_0xa7479fb665361edb(uParam0->f_8, 0);
						_0xe69fda40aac3efc0(uParam0->f_8, 0);
					}
					if (uParam0->f_211.f_2 == 5)
					{
						set_anim_scene_origin(uParam0->f_211, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, 0f, 0f, -0.003f), 0f, 0f, (uParam0->f_9 - 95f), 2);
					}
					else if (uParam0->f_211.f_2 == 4)
					{
						set_anim_scene_origin(uParam0->f_211, _get_object_offset_from_coords(uParam0->f_10, uParam0->f_9, 0f, 0f, -0.0035f), 0f, 0f, (uParam0->f_9 - 100f), 2);
					}
					uParam0->f_226 = 1;
					func_17(uParam0->f_1, 2);
					func_60(uParam0, 1);
					func_75(uParam0);
					func_76(1, 1, 1, 0);
					break;
				case 1:
					set_ped_reset_flag(Global_34, 202, true);
					if (!_is_anim_scene_started(uParam0->f_211, false))
					{
						func_77(uParam0);
						_0xfdecca06e8b81346(uParam0->f_13);
						if (_does_volume_exist(uParam0->f_240))
						{
							_delete_volume(uParam0->f_240);
						}
						uParam0->f_240 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
						func_78(uParam0->f_240, 0);
						start_anim_scene(uParam0->f_211);
						_0x2208438012482a1a(uParam0->f_13, false, false);
						func_60(uParam0, 6);
						_0x4161648394262fdf(Global_35, 2.5f);
						set_gameplay_cam_relative_heading(get_gameplay_cam_relative_heading(), 1f);
						set_gameplay_cam_relative_pitch(get_gameplay_cam_relative_pitch(), 1f);
						if (_does_volume_exist(uParam0->f_239))
						{
							func_79(uParam0->f_239, 0);
							_0xb56d41a694e42e86(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
							_0x18262cafebb5fbe1(uParam0->f_239, 10208, 0, 0, -1, -1, 0);
						}
					}
					break;
				case 6:
					set_ped_reset_flag(Global_34, 202, true);
					if (has_anim_event_fired(Global_34, 1552626522))
					{
						func_80(&(uParam0->f_157), uParam0->f_211, uParam0->f_7);
					}
					if (_is_anim_scene_active(uParam0->f_211))
					{
						func_81(&(uParam0->f_157), &(uParam0->f_211));
					}
					if (!uParam0->f_263 && _get_anim_scene_progress(uParam0->f_211) > 0.15f)
					{
						if (does_entity_exist(&(uParam0->f_157[2])))
						{
							set_entity_visible(&(uParam0->f_157[2]), false);
						}
						uParam0->f_263 = 1;
					}
					if (has_anim_event_fired(Global_34, 264094903))
					{
						uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_34, "p_bottleBeer01x_PH_R_HAND", 1);
						_task_item_interaction_2(Global_34, -24362764, &(uParam0->f_157[5]), -1775366913, 1587785400, 1, 0, -1f);
						uParam0->f_157[5] = 0;
					}
					if (has_anim_event_fired(Global_34, -1763749661))
					{
						if (uParam0->f_211.f_2 == 4)
						{
							if (is_ped_male(Global_34))
							{
								sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A";
							}
							else
							{
								sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_FEMALE_A";
							}
						}
						else if (uParam0->f_211.f_2 == 5)
						{
							if (is_ped_male(Global_34))
							{
								sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A";
							}
							else
							{
								sVar16 = "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_FEMALE_A";
							}
						}
						_set_scenario_point_coords(uParam0->f_7, get_offset_from_entity_in_world_coords(Global_34, 0f, 0f, -get_entity_height_above_ground(Global_34)), true);
						_set_scenario_point_heading(uParam0->f_7, get_entity_heading(Global_34), true);
						_task_use_scenario_point(Global_34, uParam0->f_7, sVar16, 0, false, true, 0, false, 0.3f, true);
					}
					if (!_is_anim_scene_started(uParam0->f_211, false) && _0x9c54041bb66bcf9e(Global_34, uParam0->f_7))
					{
						if (uParam0->f_211.f_2 == 4)
						{
							_0x0751d461f06e41ce(player_id(), 42, 1, 1);
							_0x0751d461f06e41ce(player_id(), 8, 0, 1);
							uParam0->f_235 = 1;
						}
						func_82(&(uParam0->f_211));
						func_83(uParam0);
						if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
						{
							load_anim_scene(uParam0->f_211);
						}
						func_30(uParam0, 22);
						func_17(uParam0->f_1, 2);
						Global_1940018->f_51 = 0;
						func_76(0, 1, 1, 0);
					}
					break;
				case 2:
					if (!_0x68821369a2ceadd5(Global_34, -308722001))
					{
						_0xd65fdc686a031c83(Global_34, -308722001, 2f);
						_0x6d07b371e9439019(Global_34);
					}
					if (_0xc488b8c0e52560d8(Global_34))
					{
						func_60(uParam0, 3);
					}
					break;
				case 3:
					if (!_0xc488b8c0e52560d8(Global_34))
					{
						vVar18 = { _get_scenario_point_coords(uParam0->f_8, true) };
						fVar17 = _get_scenario_point_heading(uParam0->f_8, true);
						set_anim_scene_origin(uParam0->f_211, vVar18, 0f, 0f, (fVar17 + 90f), 2);
						func_77(uParam0);
						if (_does_volume_exist(uParam0->f_240))
						{
							_delete_volume(uParam0->f_240);
						}
						uParam0->f_240 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
						func_78(uParam0->f_240, 0);
						start_anim_scene(uParam0->f_211);
						_0x2208438012482a1a(uParam0->f_13, false, false);
						func_60(uParam0, 5);
					}
					break;
				case 5:
					if (!uParam0->f_263 && _get_anim_scene_progress(uParam0->f_211) > 0.4f)
					{
						if (does_entity_exist(&(uParam0->f_157[2])))
						{
							set_entity_visible(&(uParam0->f_157[2]), false);
						}
						uParam0->f_263 = 1;
					}
					if (has_anim_event_fired(Global_34, 864365833) && !uParam0->f_233)
					{
						if (uParam0->f_224 == 1 || uParam0->f_224 == 3)
						{
							if (is_ped_male(Global_34))
							{
								if (_0x3bbdd6143ff16f98(Global_34, &(uParam0->f_157[5]), "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
								{
									uParam0->f_233 = 1;
								}
							}
							else if (_0x3bbdd6143ff16f98(Global_34, &(uParam0->f_157[5]), "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_FEMALE_A", 1))
							{
								uParam0->f_233 = 1;
							}
						}
						else if (uParam0->f_224 == 2)
						{
							if (is_ped_male(Global_34))
							{
								if (_0x3bbdd6143ff16f98(Global_34, &(uParam0->f_157[5]), "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
								{
									uParam0->f_233 = 1;
								}
							}
							else if (_0x3bbdd6143ff16f98(Global_34, &(uParam0->f_157[5]), "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_FEMALE_A", 1))
							{
								uParam0->f_233 = 1;
							}
						}
					}
					if ((has_anim_event_fired(uParam0->f_13, 1179642452) || !_is_anim_scene_started(uParam0->f_211, false)) && !_0x68821369a2ceadd5(Global_34, uParam0->f_259))
					{
						_0xd65fdc686a031c83(Global_34, uParam0->f_259, 4f);
						_0x6d07b371e9439019(Global_34);
					}
					if (!_is_anim_scene_started(uParam0->f_211, false) && uParam0->f_233)
					{
						reset_anim_scene(uParam0->f_211, 0);
						if (uParam0->f_224 == 1)
						{
							uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_34, "p_bottleBeer01x_PH_R_HAND", 1);
							_task_item_interaction_2(Global_34, -24362764, &(uParam0->f_157[5]), -1775366913, 1587785400, 1, 0, -1f);
							set_object_as_no_longer_needed(uParam0->f_157[5]);
							uParam0->f_157[5] = 0;
							_0x0751d461f06e41ce(player_id(), 42, 1, 1);
							_0x0751d461f06e41ce(player_id(), 8, 0, 1);
							uParam0->f_235 = 1;
						}
						func_83(uParam0);
						if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
						{
							load_anim_scene(uParam0->f_211);
						}
						func_17(uParam0->f_1, 2);
						Global_1940018->f_51 = 0;
						func_30(uParam0, 22);
					}
					break;
			}
			break;
		case 10:
			if (uParam0->f_228)
			{
				_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_34);
				uParam0->f_16 = create_camera_with_params(26379945, func_84(*uParam1), func_85(*uParam1), 30f, false, 2);
				uParam0->f_17 = create_camera_with_params(26379945, _get_object_offset_from_coords(get_cam_coord(uParam0->f_16), 0f, 0f, 0f, 0.75f), func_85(*uParam1), func_86(*uParam1), false, 2);
				set_cam_active(uParam0->f_16, true);
				render_script_cams(true, false, 3000, true, false, 0);
				set_player_control(player_id(), false, 0, false);
				display_radar(false);
			}
			if (is_valid_interior(get_interior_at_coords(func_87(*uParam0))))
			{
				pin_interior_in_memory(get_interior_at_coords(func_87(*uParam0)));
			}
			func_88(&(uParam0->f_245), 1);
			func_75(uParam0);
			_0x4b05b97ba46f419d(0);
			func_76(1, 0, 1, 0);
			func_30(uParam0, 12);
			break;
		case 12:
			enable_control_action(0, 782960533, false);
			if (!uParam0->f_228)
			{
				if (uParam0->f_224 == 4)
				{
					uParam0->f_211 = { *uParam0->f_24[1] };
					func_17(uParam0->f_1, 32);
					func_89(30, 1);
					iVar21 = &uParam0->f_622.f_332[1];
				}
				else if (uParam0->f_224 == 5)
				{
					func_17(uParam0->f_1, 64);
					func_89(30, 1);
					iVar21 = &uParam0->f_622.f_332[0];
					uParam0->f_211 = { *uParam0->f_24[3] };
				}
				Local_18.f_203 = { uParam0->f_211 };
				uParam0->f_231 = 1;
			}
			if (uParam0->f_228 && !uParam0->f_230)
			{
				uParam0->f_230 = 1;
				return false;
			}
			if (!func_35(uParam0->f_19))
			{
				uParam0->f_19 = func_91(func_90(0, *uParam0), -719620017, Global_34, 3, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_92(uParam0->f_19, func_90(0, *uParam0), &(uParam0->f_622.f_332[1]), 1);
				if (func_93() < &uParam0->f_622.f_332[1])
				{
					func_36(uParam0->f_19, 0, 1, 1);
				}
			}
			if (!func_35(uParam0->f_20) && *uParam0 != 6)
			{
				uParam0->f_20 = func_91(func_90(1, *uParam0), -473983589, Global_34, 3, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_92(uParam0->f_20, func_90(1, *uParam0), &(uParam0->f_622.f_332[0]), 1);
				if (func_93() < &uParam0->f_622.f_332[0])
				{
					func_36(uParam0->f_20, 0, 1, 1);
				}
			}
			if (!func_35(uParam0->f_21))
			{
				uParam0->f_21 = func_94("CANCEL_ORDER", 992265328, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (func_95(uParam0->f_19, 1))
			{
				uParam0->f_224 = 4;
				if (uParam0->f_228)
				{
					func_81(&(uParam0->f_157), &(uParam0->f_211));
					uParam0->f_211 = { *uParam0->f_24[0] };
					Local_18.f_203 = { uParam0->f_211 };
				}
				func_17(uParam0->f_1, 32);
				func_89(30, 1);
				iVar21 = &uParam0->f_622.f_332[1];
				uParam0->f_231 = 1;
				Global_1940018->f_51 = 1;
			}
			if (func_95(uParam0->f_20, 1))
			{
				uParam0->f_224 = 5;
				if (uParam0->f_228)
				{
					func_81(&(uParam0->f_157), &(uParam0->f_211));
					uParam0->f_211 = { *uParam0->f_24[2] };
					Local_18.f_203 = { uParam0->f_211 };
				}
				func_17(uParam0->f_1, 64);
				func_89(30, 1);
				iVar21 = &uParam0->f_622.f_332[0];
				uParam0->f_231 = 1;
			}
			if (uParam0->f_231)
			{
				func_64(iVar21, 0, 0, 1, 0);
				func_41(&(uParam0->f_19), 1, 1);
				func_41(&(uParam0->f_20), 1, 1);
				func_41(&(uParam0->f_21), 1, 1);
				uParam0->f_964 = clone_ped(Global_34, 0f, true, true);
				set_current_ped_weapon(uParam0->f_964, -1569615261, false, 0, false, false);
				_0x2208438012482a1a(uParam0->f_964, false, false);
				if (uParam0->f_224 == 5)
				{
					uParam0->f_265 = func_61(uParam0, uParam0->f_224);
					uParam0->f_265.f_2 = 6f;
					uParam0->f_443 = -339970078;
					uParam0->f_443.f_2 = 6f;
					if (func_62(uParam0->f_265, 0))
					{
						func_63(&(uParam0->f_265));
					}
					if (func_62(uParam0->f_443, 0))
					{
						func_63(&(uParam0->f_443));
					}
				}
				else if (uParam0->f_224 == 4)
				{
					uParam0->f_265 = func_61(uParam0, uParam0->f_224);
					uParam0->f_265.f_2 = 10f;
					if (func_62(uParam0->f_265, 0))
					{
						func_63(&(uParam0->f_265));
					}
				}
				_0x2a374e6f0075ee81(func_65(iVar3), func_66(iVar2), uParam0->f_265, 1, iVar21);
				uParam0->f_265.f_1 = 0;
				if (uParam0->f_228 || uParam0->f_234)
				{
					if (uParam0->f_211.f_2 == 0 || uParam0->f_211.f_2 == 1)
					{
						uParam0->f_211.f_6 = { _get_object_offset_from_coords(uParam0->f_211.f_6, uParam0->f_211.f_9.f_2, 0f, -0.25f, 0f) };
					}
					set_anim_scene_origin(uParam0->f_211, uParam0->f_211.f_6, uParam0->f_211.f_9, 2);
				}
				else
				{
					if (*uParam0 == 0 || *uParam0 == 6)
					{
						_set_anim_scene_playback_list_bool(uParam0->f_211, &(uParam0->f_211.f_3[1]), true);
					}
					set_anim_scene_origin(uParam0->f_211, _get_object_offset_from_coords(func_51(*uParam0), func_96(*uParam0), 0f, 0f, 0f), 0f, 0f, func_96(*uParam0), 2);
					set_anim_scene_int(uParam0->f_211, "CameraIndex", func_97(*uParam0), false);
				}
				set_anim_scene_entity(uParam0->f_211, "PLAYER", uParam0->f_964, 0);
				if (uParam0->f_228)
				{
					set_cam_params(uParam0->f_16, func_98(*uParam1), func_99(*uParam1), func_100(*uParam1), 0, 1, 1, 2, 1, 0);
					shake_cam(uParam0->f_16, "HAND_SHAKE", 1f);
				}
				else
				{
					uParam0->f_16 = create_camera_with_params(26379945, func_98(*uParam1), func_99(*uParam1), func_100(*uParam1), false, 2);
					set_cam_active(uParam0->f_16, true);
					shake_cam(uParam0->f_16, "HAND_SHAKE", 1f);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
				_0xc9caeaeec1256e54(1331687942);
				func_53(uParam0);
				func_77(uParam0);
				if (!_does_volume_exist(uParam0->f_238))
				{
					uParam0->f_238 = _create_volume_box_with_custom_name(func_101(*uParam1), 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, "Food_Order_Blocking_Volume");
					func_79(uParam0->f_238, 0);
					_0xb56d41a694e42e86(uParam0->f_238, 10208, 0, 0, -1, -1, 0);
					_0x18262cafebb5fbe1(uParam0->f_238, 10208, 0, 0, -1, -1, 0);
				}
				else
				{
					func_79(uParam0->f_238, 0);
					_0xb56d41a694e42e86(uParam0->f_238, 10208, 0, 0, -1, -1, 0);
					_0x18262cafebb5fbe1(uParam0->f_238, 10208, 0, 0, -1, -1, 0);
				}
				func_17(uParam0->f_1, 2);
				func_68(func_67(-1081285383), 1);
				func_88(&(uParam0->f_245), 1);
				func_30(uParam0, 14);
			}
			else if (func_102(uParam0->f_21, 1))
			{
				func_48(func_47(uParam0->f_237), 1);
				set_player_control(player_id(), true, 0, false);
				display_radar(true);
				func_41(&(uParam0->f_21), 1, 1);
				func_41(&(uParam0->f_19), 1, 1);
				func_41(&(uParam0->f_20), 1, 1);
				func_76(0, 1, 1, 0);
				_0x4b05b97ba46f419d(1);
				func_30(uParam0, 24);
			}
			break;
		case 14:
			disable_all_control_actions(0);
			_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(1331687942);
			if (uParam0->f_228 || uParam0->f_234)
			{
				if (!is_entity_dead(uParam0->f_13))
				{
					_0x2208438012482a1a(uParam0->f_13, false, false);
				}
				if (!_is_anim_scene_started(uParam0->f_211, false))
				{
					if (_does_volume_exist(uParam0->f_240))
					{
						_delete_volume(uParam0->f_240);
					}
					uParam0->f_240 = _create_volume_cylinder(get_entity_coords(uParam0->f_13, true, false), 0f, 0f, 0f, 0.25f, 0.25f, 3f);
					func_78(uParam0->f_240, 0);
					start_anim_scene(uParam0->f_211);
					func_88(&(uParam0->f_965), 1);
				}
				uParam0->f_262 = 1;
				func_30(uParam0, 16);
			}
			break;
		case 16:
			disable_all_control_actions(0);
			_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(1331687942);
			set_ped_reset_flag(uParam0->f_964, 202, true);
			if (has_anim_event_fired(uParam0->f_964, -392967985))
			{
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 992265328, false);
			}
			if (func_103(&(uParam0->f_965)) > 3400)
			{
				abort_anim_scene(uParam0->f_211, false);
				func_104(&(uParam0->f_6), uParam0->f_211.f_2, uParam0->f_23, *uParam0);
				func_80(&(uParam0->f_157), uParam0->f_211, uParam0->f_6);
				func_82(&(uParam0->f_211));
				if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
				{
					load_anim_scene(uParam0->f_211);
				}
				uParam0->f_260 = uParam0->f_211.f_2;
				if (uParam0->f_211.f_2 == 1 || uParam0->f_211.f_2 == 0)
				{
					attach_entity_to_entity(&(uParam0->f_157[0]), uParam0->f_964, get_ped_bone_index(uParam0->f_964, 37709), 0f, -0.1f, 0f, 0f, 0f, -90f, false, false, false, false, 2, true, false, false);
					set_anim_scene_entity(&(uParam0->f_24[10]), "p_plate17x_PH_L_HAND", &(uParam0->f_157[1]), 0);
				}
				set_entity_visible(&(uParam0->f_157[12]), true);
				uParam0->f_211 = { *uParam0->f_24[10] };
				if (uParam0->f_260 == 1 || uParam0->f_260 == 0)
				{
					set_anim_scene_origin(uParam0->f_211, _get_object_offset_from_coords(func_51(*uParam0), func_96(*uParam0), 0f, 0f, 0f), 0f, 0f, func_96(*uParam0), 2);
				}
				else
				{
					set_anim_scene_origin(uParam0->f_211, _get_object_offset_from_coords(func_51(*uParam0), func_96(*uParam0), 0f, 0f, 0f), 0f, 0f, func_96(*uParam0), 2);
				}
				set_anim_scene_entity(uParam0->f_211, "PLAYER", uParam0->f_964, 0);
				start_anim_scene(uParam0->f_211);
				func_88(&(uParam0->f_965), 1);
				create_model_hide_excluding_script_objects(func_51(*uParam1), 1f, func_105(*uParam0), false);
				uParam0->f_968 = create_object(func_105(*uParam0), func_51(*uParam1), false, true, false, true, false);
				_set_entity_coords_and_heading_no_offset(uParam0->f_968, func_51(*uParam1) + Vector(-0.5f, 0f, 0f), (func_96(*uParam1) + 180f), false, true);
				freeze_entity_position(uParam0->f_968, true);
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				func_17(uParam0->f_1, 2);
				Global_1940018->f_51 = 0;
				uParam0->f_262 = 1;
				func_106(uParam0);
				_0x669655ffb29ef1a9(&(uParam0->f_157[1]), 0, "Stew_Fill", 0f);
				set_entity_visible(&(uParam0->f_157[10]), false);
				set_entity_visible(&(uParam0->f_157[11]), false);
				if (uParam0->f_260 == 3 || uParam0->f_260 == 2)
				{
					set_entity_visible(&(uParam0->f_157[5]), false);
					set_entity_visible(&(uParam0->f_157[3]), false);
					set_entity_visible(&(uParam0->f_157[6]), false);
					set_entity_visible(&(uParam0->f_157[7]), false);
					set_entity_visible(&(uParam0->f_157[8]), false);
				}
				func_30(uParam0, 19);
				return false;
			}
			break;
		case 21:
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, 129547951, false);
			func_45(&(uParam0->f_622));
			if (!is_ped_in_cover(Global_34, 0, 0))
			{
				set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 1);
				func_30(uParam0, 20);
			}
			break;
		case 20:
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, 129547951, false);
			func_45(&(uParam0->f_622));
			if (!_0xec7e480ff8bd0bed(Global_34))
			{
				if (uParam0->f_211.f_2 == 4)
				{
					if (does_entity_exist(&(uParam0->f_157[5])))
					{
						_task_item_interaction_2(Global_34, -24362764, &(uParam0->f_157[5]), -1775366913, -664271430, 1, 0, 0f);
					}
				}
				else if (uParam0->f_211.f_2 == 5)
				{
					if (does_entity_exist(&(uParam0->f_157[10])))
					{
						_task_item_interaction_2(Global_34, -1679900928, &(uParam0->f_157[10]), 1737033966, -68870885, 1, 0, 0f);
					}
				}
				if (!_0xec7e480ff8bd0bed(Global_34))
				{
					func_30(uParam0, 24);
				}
				else
				{
					func_17(uParam0->f_1, 2);
				}
			}
			iVar22 = _get_item_interaction_from_ped(Global_34);
			if (iVar22 == -664271430 || iVar22 == -68870885)
			{
				if (!func_107(&(uParam0->f_245)))
				{
					animpostfx_play("CamTransitionBlink");
					func_88(&(uParam0->f_245), 0);
				}
				else if (func_103(&(uParam0->f_245)) > 250)
				{
					func_108(&(uParam0->f_245));
					if (uParam0->f_211.f_2 == 4)
					{
						set_entity_visible(&(uParam0->f_157[5]), true);
						set_object_as_no_longer_needed(uParam0->f_157[5]);
					}
					else if (uParam0->f_211.f_2 == 5)
					{
						set_entity_visible(&(uParam0->f_157[10]), true);
						set_object_as_no_longer_needed(uParam0->f_157[10]);
					}
					Global_1940018->f_52++;
					func_30(uParam0, 24);
				}
			}
			break;
		case 22:
			func_109(uParam0);
			func_45(&(uParam0->f_622));
			func_110(uParam0);
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, -1292666904, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
			bVar23 = _0xc488b8c0e52560d8(Global_34);
			if (bVar23)
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, 129547951, false);
			}
			disable_control_action(0, -124244224, false);
			if (!bVar0)
			{
				if (!func_111() && is_ped_active_in_scenario(Global_34, 1))
				{
					return false;
				}
			}
			else if (is_ped_active_in_scenario(Global_34, 1))
			{
				return false;
			}
			if (uParam0->f_211.f_2 == 4)
			{
				uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_34, "p_bottleBeer01x_PH_R_HAND", 1);
				if (does_entity_exist(&(uParam0->f_157[5])))
				{
					delete_object(uParam0->f_157[5]);
				}
			}
			uParam0->f_157[11] = _0x4d0d2e3d8bc000eb(Global_34, "p_shotGlass01x_PH_L_Hand", 1);
			func_30(uParam0, 24);
			break;
		case 23:
			bVar24 = _0xc488b8c0e52560d8(Global_34);
			if (bVar24)
			{
				disable_control_action(0, 992265328, false);
				disable_control_action(0, 129547951, false);
				disable_control_action(0, -124244224, false);
			}
			func_109(uParam0);
			if (uParam0->f_261)
			{
				if (func_112(Global_34, "Player_Sick_Drinking_Cough", -128067431, 0, 1, 0, 0, 1))
				{
					uParam0->f_261 = 0;
				}
			}
			if (func_58(uParam0, uParam1))
			{
				if (func_46(uParam0->f_237, 1))
				{
					func_48(func_47(uParam0->f_237), 0);
				}
				if (uParam0->f_228)
				{
					func_30(uParam0, 10);
					return false;
				}
				else
				{
					func_30(uParam0, 10);
				}
				func_41(&(uParam0->f_22), 1, 1);
				set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_34, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 1);
				clear_ped_secondary_task(Global_34);
				Global_1940018->f_51 = 1;
			}
			if (func_59(uParam0))
			{
				switch (uParam0->f_224)
				{
					case 1:
					case 3:
						uParam0->f_211 = { *uParam0->f_24[6] };
						func_17(uParam0->f_1, 4);
						uParam0->f_259 = 1406647490;
						if (uParam0->f_225 == 2)
						{
							uParam0->f_211 = { *uParam0->f_24[8] };
						}
						uParam0->f_265 = func_61(uParam0, uParam0->f_224);
						uParam0->f_265.f_2 = 6f;
						if (func_62(uParam0->f_265, 0))
						{
							func_63(&(uParam0->f_265));
						}
						iVar25 = &uParam0->f_622.f_332[2];
						break;
					case 2:
						uParam0->f_259 = -1017213009;
						uParam0->f_211 = { *uParam0->f_24[7] };
						func_17(uParam0->f_1, 8);
						if (uParam0->f_225 == 1 || uParam0->f_225 == 3)
						{
							uParam0->f_211 = { *uParam0->f_24[9] };
						}
						uParam0->f_265 = func_61(uParam0, uParam0->f_224);
						uParam0->f_265.f_2 = 1f;
						if (func_62(uParam0->f_265, 0))
						{
							func_63(&(uParam0->f_265));
						}
						if (*uParam0 == 2)
						{
							iVar25 = 100;
						}
						else
						{
							iVar25 = &uParam0->f_622.f_332[3];
						}
						break;
				}
				func_64(iVar25, 0, 0, 1, 0);
				_0x2a374e6f0075ee81(func_65(iVar3), func_66(iVar2), uParam0->f_265, 1, iVar25);
				func_68(func_67(1328660713), 1);
				func_68(func_70(1328660713, func_69(iVar2)), 1);
				Local_18.f_203 = { uParam0->f_211 };
				func_10(uParam0->f_1, 4096);
				uParam0->f_225 = uParam0->f_224;
				uParam0->f_263 = 0;
				Global_1940018->f_51 = 1;
				func_17(uParam0->f_1, 2);
				func_60(uParam0, 2);
				func_30(uParam0, 9);
			}
			if (is_ped_active_in_scenario(Global_34, 1))
			{
				return false;
			}
			func_30(uParam0, 24);
			break;
		case 19:
			disable_all_control_actions(0);
			_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(1331687942);
			if (uParam0->f_262)
			{
				set_cam_params(uParam0->f_16, func_113(*uParam1), func_114(*uParam1), func_115(*uParam1), 0, 1, 1, 2, 1, 0);
				_0x2208438012482a1a(uParam0->f_964, false, false);
				uParam0->f_262 = 0;
			}
			if (func_103(&(uParam0->f_965)) > 3500)
			{
				detach_entity(&(uParam0->f_157[0]), false, true);
				func_116(uParam0->f_157[0]->f_3, &vVar26, &uVar29, _get_scenario_point_heading(uParam0->f_6, true));
				set_entity_coords(&(uParam0->f_157[0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar26), true, false, true, true);
				abort_anim_scene(uParam0->f_211, true);
				func_82(&(uParam0->f_211));
				remove_model_hide(func_51(*uParam1), 1f, func_105(*uParam1), 0);
				delete_entity(&(uParam0->f_968));
				if (!_is_anim_scene_loaded(uParam0->f_211, true, false))
				{
					load_anim_scene(uParam0->f_211);
				}
				if (does_entity_exist(uParam0->f_964))
				{
					delete_ped(&(uParam0->f_964));
				}
				func_76(0, 1, 1, 0);
				_0x4b05b97ba46f419d(1);
				uParam0->f_234 = 0;
				uParam0->f_264 = 1;
				uParam0->f_265.f_2 = 1f;
				uParam0->f_443.f_2 = 1f;
				func_117(&(uParam0->f_265), 1);
				if (uParam0->f_260 != 1 && uParam0->f_260 != 0)
				{
					func_117(&(uParam0->f_443), 1);
				}
				func_8(uParam0);
				func_30(uParam0, 24);
			}
			break;
		case 24:
			if (does_cam_exist(uParam0->f_16))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_cam(uParam0->f_16, false);
			}
			if (!func_118(Global_34, -76381094))
			{
				if (uParam0->f_963 == 1)
				{
					set_ped_config_flag(Global_34, 334, false);
					uParam0->f_963 = 0;
				}
				uParam0->f_244 = 0;
				if (_does_scenario_point_exist(uParam0->f_8))
				{
					_delete_scenario_point(uParam0->f_8);
				}
				if (_does_scenario_point_exist(uParam0->f_7))
				{
					_delete_scenario_point(uParam0->f_7);
				}
				if (func_46(uParam0->f_237, 1))
				{
					func_48(func_47(uParam0->f_237), 0);
				}
				uParam0->f_228 = 0;
				uParam0->f_230 = 0;
				uParam0->f_231 = 0;
				Global_1940018->f_51 = 0;
				uParam0->f_226 = 0;
				func_41(&(uParam0->f_22), 1, 1);
				set_ped_config_flag(uParam0->f_13, 315, false);
				uParam0->f_962 = _0xb223249b7798eeed(Global_34, 798764373, 1, 1558937268);
				func_30(uParam0, 4);
				return false;
			}
			else
			{
				func_45(&(uParam0->f_622));
			}
			break;
		case 25:
			func_45(&(uParam0->f_622));
			if (_does_anim_scene_exist(uParam0->f_211) && _is_anim_scene_started(uParam0->f_211, false))
			{
				func_119(uParam0);
				func_41(&(uParam0->f_21), 1, 1);
				func_41(&(uParam0->f_19), 1, 1);
				func_41(&(uParam0->f_20), 1, 1);
				func_30(uParam0, 26);
			}
			if (bVar1)
			{
				if (func_35(uParam0->f_237))
				{
					func_36(uParam0->f_237, 1, 1, 1);
				}
				uParam0->f_622 = 0;
				func_37(&(uParam0->f_622), 8);
				func_27(&(uParam0->f_622), 1);
				set_ped_config_flag(uParam0->f_13, 315, false);
				func_30(uParam0, 8);
				return false;
			}
			break;
		case 26:
			func_9(uParam0);
			func_30(uParam0, 0);
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	Local_18.f_199 = *uParam0;
	Local_18.f_200 = uParam0->f_1;
	Local_18.f_201 = uParam0->f_5;
	Local_18.f_202 = uParam0->f_224;
	Local_18.f_203 = { uParam0->f_211 };
}

int func_7(var uParam0)
{
	if (func_2() == 0)
	{
		return func_120(uParam0);
	}
	switch (uParam0->f_257)
	{
		case 0:
			if (vdist2(Global_35, uParam0->f_2) > (33f * 33f))
			{
				return 1;
			}
			break;
		case 1:
			if (func_121() == -1)
			{
				return 1;
			}
			break;
		case 2:
			if (does_entity_exist(uParam0->f_13) && is_entity_dead(uParam0->f_13))
			{
				return 1;
			}
			break;
		case 3:
			if (func_122(&Global_1940258, 4194304))
			{
				return 1;
			}
			break;
	}
	uParam0->f_257++;
	if (uParam0->f_257 > 3)
	{
		uParam0->f_257 = 0;
	}
	return 0;
}

void func_8(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_6))
	{
		_delete_scenario_point(uParam0->f_6);
	}
}

void func_9(var uParam0)
{
	if (uParam0->f_228)
	{
		if (!is_entity_dead(uParam0->f_13))
		{
			clear_ped_tasks(uParam0->f_13, 1, 0);
		}
		if (func_2() == -1)
		{
			_0xa2b18ff8d39f6d87(func_123(uParam0->f_14));
			if (func_124(uParam0->f_14))
			{
				func_125(uParam0->f_14, 0, 1, 0, 0);
			}
		}
	}
	func_19(&(uParam0->f_622));
	_0x66bc28e50e85270e(uParam0->f_962);
	if (_does_scenario_point_exist(uParam0->f_8))
	{
		_delete_scenario_point(uParam0->f_8);
	}
	if (_does_scenario_point_exist(uParam0->f_7))
	{
		_delete_scenario_point(uParam0->f_7);
	}
	if (func_2() != -1)
	{
		enable_control_action(0, -128997553, true);
		set_player_lockon(player_id(), true);
	}
	if (_does_volume_exist(uParam0->f_240))
	{
		_delete_volume(uParam0->f_240);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_82(uParam0->f_24[iVar0]);
		iVar0++;
	}
	if (does_entity_exist(uParam0->f_968))
	{
		remove_model_hide(func_51(*uParam0), 1f, func_105(*uParam0), 0);
		delete_entity(&(uParam0->f_968));
	}
	if (does_entity_exist(uParam0->f_964))
	{
		delete_ped(&(uParam0->f_964));
	}
	if (&Global_1940018->f_5[uParam0->f_1])
	{
		_display_hud_component(-1347445791);
		_display_hud_component(1422092402);
	}
	func_126(&(uParam0->f_622.f_8), 1, 0);
	func_127(uParam0);
}

void func_10(int iParam0, int iParam1)
{
	func_128(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

void func_11(var uParam0)
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

int func_12(bool bParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	return 0;
}

int func_13(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return 0;
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
			return 1;
		}
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_14(var uParam0, var uParam1)
{
	bVar0 = func_129(uParam0->f_13, 72);
	switch (uParam0->f_258)
	{
		case 0:
			if (!func_129(Global_34, 0))
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
					func_130(&(uParam0->f_236), 16);
					func_131(&(uParam0->f_622.f_295), 0);
				}
				return 0;
			}
			else
			{
				uParam0->f_622.f_325 = uParam0->f_13;
				if (uParam0->f_622.f_339 == -1)
				{
					uParam0->f_622.f_339 = func_132(uParam0->f_622.f_325, 0);
				}
				if (func_16(uParam0->f_1, 65536) && !func_133(uParam0->f_236, 16))
				{
					func_33(uParam0);
				}
				if (!get_ped_config_flag(uParam0->f_13, 87, true))
				{
					set_ped_config_flag(uParam0->f_13, 87, true);
					set_ped_config_flag(uParam0->f_13, 447, true);
					set_ped_config_flag(uParam0->f_13, 325, true);
				}
			}
			break;
		case 2:
			if (func_2() == -1 && func_134(uParam0->f_14, 1))
			{
				if (Global_1940018->f_50 == 0)
				{
					return 0;
				}
			}
			break;
		case 3:
			if (is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34))
			{
				return 0;
			}
			break;
		case 4:
			if (_0x331550b212014b92(Global_34, uParam0->f_13))
			{
				return 0;
			}
			break;
		case 5:
			if (func_16(uParam0->f_1, 2048))
			{
				return 0;
			}
			break;
		case 6:
			if (func_16(uParam0->f_1, 1))
			{
				return 0;
			}
			break;
		case 7:
			break;
		case 8:
			if (bVar0 && is_ped_fleeing(uParam0->f_13))
			{
				return 0;
			}
			break;
		case 9:
			if (func_135(Global_34))
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
			if (func_136(1, 0))
			{
				return 0;
			}
			break;
		case 12:
			if (_is_ped_carrying(Global_34))
			{
				return 0;
			}
			break;
		case 13:
			if (bVar0 && !func_139(uParam0->f_13, func_138(func_137(*uParam0)), 1, 0))
			{
				return 0;
			}
			break;
	}
	uParam0->f_258++;
	if (uParam0->f_258 > 13)
	{
		uParam0->f_258 = 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1)
{
	if (!does_entity_exist(uParam0->f_13))
	{
		if (func_140(*uParam0, &uVar0))
		{
			uParam0->f_13 = uVar0;
		}
		else
		{
			return 0;
		}
	}
	if (func_141(1106247680, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		return 0;
	}
	iVar1 = func_138(func_137(*uParam0));
	if (!_does_volume_exist(iVar1))
	{
		return 0;
	}
	else if (!func_139(uParam0->f_13, iVar1, 1, 0))
	{
		return 0;
	}
	if (func_142(uParam0->f_1))
	{
		return 0;
	}
	if (func_143(30))
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)
{
	return func_144(Global_1940018->f_5[iParam0]->f_7, iParam1);
}

void func_17(int iParam0, int iParam1)
{
	func_145(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

int func_18(var uParam0, int iParam1, int iParam2)
{
	func_71(&(uParam0->f_1), uParam0->f_326);
	uParam0->f_7 = func_129(uParam0->f_325, 0);
	if (func_133(uParam0->f_323, 64) || func_133(uParam0->f_323, 1))
	{
		func_146(&(uParam0->f_8), 1, 1, 1, 0);
		return -1;
	}
	if (!func_133(uParam0->f_323, 4) && is_ped_dead_or_dying(uParam0->f_325, true))
	{
		func_146(&(uParam0->f_8), 1, 1, 1, 0);
		enable_control_action(0, -1616532217, true);
		func_145(&(uParam0->f_326), 4);
		return -1;
	}
	if (func_133(uParam0->f_1, 1) && (((_0x0eaf918f751f27ba(uParam0->f_325) || is_ped_in_combat(uParam0->f_325, 0)) || is_ped_fleeing(uParam0->f_325)) || _is_ped_hogtied(uParam0->f_325)))
	{
		func_19(uParam0);
		if (get_ped_config_flag(uParam0->f_325, 315, true))
		{
			set_ped_config_flag(uParam0->f_325, 130, false);
			set_ped_config_flag(uParam0->f_325, 315, false);
		}
		enable_control_action(0, -1616532217, true);
		return -1;
	}
	bVar0 = func_147(&(uParam0->f_325), 1, 0, 0);
	if (!bVar0)
	{
		*uParam0 = 0;
		if (uParam0->f_3)
		{
			uParam0->f_3 = 0;
			if (uParam0->f_7 && _0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
			}
		}
	}
	else
	{
		if (*uParam0 == 0 && !uParam0->f_3)
		{
			func_39(uParam0);
			uParam0->f_3 = 1;
		}
		if (func_133(uParam0->f_1, 1))
		{
			enable_control_action(0, -1616532217, true);
		}
		if (uParam0->f_7)
		{
			if (func_133(uParam0->f_1, 1))
			{
				if (!_0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 0))
				{
					_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 1);
				}
			}
			else if (_0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
			}
		}
	}
	if (!func_133(uParam0->f_1, 1))
	{
		if (func_133(uParam0->f_323, 32) && !get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_148(uParam0, 0);
		}
		else if (!func_133(uParam0->f_323, 32) && get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_148(uParam0, 1);
		}
	}
	if (!func_133(uParam0->f_1, 1) && func_133(uParam0->f_1, 128))
	{
		vVar1 = { get_entity_coords(uParam0->f_325, true, false) };
		if (_is_ped_carrying(Global_34) || absf((vVar1.z - Global_35.f_2)) > 0.75f)
		{
			func_149(&(uParam0->f_8));
		}
	}
	if (func_133(uParam0->f_1, 1))
	{
		uParam0->f_295.f_12[0] = _uiprompt_get_group_id_for_target_entity(uParam0->f_325);
		uParam0->f_295.f_12[1] = -1073177089;
		uParam0->f_295.f_12[2] = -1721306936;
		uParam0->f_295.f_12[3] = 1651111721;
	}
	else if (func_133(uParam0->f_1, 128) && func_133(uParam0->f_1, 32))
	{
		uParam0->f_295.f_12[0] = _uiprompt_get_group_id_for_target_entity(uParam0->f_325);
		uParam0->f_295.f_12[1] = 1651111721;
	}
	if ((func_133(uParam0->f_323, 1) && *uParam0 == 12) && !func_133(uParam0->f_1, 1))
	{
		func_150(uParam0);
	}
	if (func_133(uParam0->f_1, 1024))
	{
		set_ped_config_flag(uParam0->f_325, 301, true);
		return -1;
	}
	iVar4 = 1;
	if (func_133(uParam0->f_323, 32) || (func_16(&Global_1940018, 2048) && func_133(uParam0->f_1, 1)))
	{
		func_152(&(uParam0->f_325), &(uParam0->f_295), 0f, &(uParam0->f_8), 0, 1, 0, 0, func_151(3, 0, 0), 0, 0, 2, -1082130432);
	}
	else if (func_133(uParam0->f_1, 1))
	{
		iVar4 |= 67108864;
		func_152(&(uParam0->f_325), &(uParam0->f_295), uParam0->f_324, &(uParam0->f_8), 0, 3, 0, 0, iVar4, 0, 0, 2, -1082130432);
	}
	else
	{
		func_152(&(uParam0->f_325), &(uParam0->f_295), uParam0->f_324, &(uParam0->f_8), 0, 3, 0, uParam0->f_337, 1, 0, 0, uParam0->f_338, -1082130432);
	}
	if (uParam0->f_295.f_1 == 12 && !func_133(uParam0->f_1, 1))
	{
		func_150(uParam0);
	}
	if (func_133(uParam0->f_1, 8192))
	{
		if (get_ped_config_flag(uParam0->f_325, 130, true))
		{
			func_153(uParam0, 1);
		}
		if (get_ped_config_flag(uParam0->f_325, 315, true))
		{
			set_ped_config_flag(uParam0->f_325, 315, false);
		}
	}
	switch (*uParam0)
	{
		case 7:
			if ((Global_1915715->f_22449.f_15 || Global_1915715->f_22449.f_17) || _0x7c7e4ab748ea3b07())
			{
				func_154(uParam0->f_8[11]);
			}
			if (Global_1915715->f_22449.f_17)
			{
				func_154(uParam0->f_8[9]);
			}
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			return 0;
		case 8:
		case 9:
		case 11:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			return 0;
		case 5:
		case 10:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			return 0;
		case 2:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			if (uParam0->f_295.f_1 == 3)
			{
				func_155(uParam0);
				return 4;
			}
			if (uParam0->f_295.f_1 == 4)
			{
				func_155(uParam0);
				return 5;
			}
			if (uParam0->f_295.f_1 == 1)
			{
				func_155(uParam0);
				return 1;
			}
			if (uParam0->f_295.f_1 == 0)
			{
				func_155(uParam0);
				return 2;
			}
			if ((Global_1915715->f_22449.f_15 || Global_1915715->f_22449.f_17) || _0x7c7e4ab748ea3b07())
			{
				func_154(uParam0->f_8[7]);
			}
			if (Global_1915715->f_22449.f_17)
			{
				func_154(uParam0->f_8[6]);
			}
			break;
		case 12:
			if (Global_1915715->f_22449.f_15 || Global_1915715->f_22449.f_17)
			{
				func_154(uParam0->f_8[11]);
			}
			if (Global_1915715->f_22449.f_17)
			{
				func_154(uParam0->f_8[9]);
			}
			break;
		case 6:
			if (get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			if (Global_1915715->f_22483 != -1 && uParam0->f_295.f_1 == 11)
			{
				Global_1915715->f_22478 = 6;
				return 6;
			}
			if (!uParam0->f_6)
			{
				disable_control_action(0, -1616532217, false);
			}
			Global_1915715->f_22478 = -1;
			return -1;
	}
	return -1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_2)
	{
		func_146(&(uParam0->f_8), 1, 1, 1, 0);
		uParam0->f_2 = 1;
	}
}

int func_20(var uParam0)
{
	func_71(&(uParam0->f_1), uParam0->f_326);
	uParam0->f_7 = func_129(uParam0->f_325, 0);
	if (!uParam0->f_7)
	{
		return -1;
	}
	bVar0 = func_147(&(uParam0->f_325), 1, 0, 0);
	if (!bVar0)
	{
		*uParam0 = 0;
		if (uParam0->f_3)
		{
			uParam0->f_3 = 0;
			if (uParam0->f_7 && _0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
			{
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
				_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
			}
		}
	}
	else if (bVar0)
	{
		if (*uParam0 == 0 && !uParam0->f_3)
		{
			func_39(uParam0);
			uParam0->f_3 = 1;
		}
		if ((uParam0->f_7 && func_133(uParam0->f_1, 1)) && !_0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 0))
		{
			_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 1);
		}
		else if ((uParam0->f_7 && !func_133(uParam0->f_1, 1)) && _0xea8f168a76a0b9bc(get_player_index(), uParam0->f_325, 8, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 1, 0);
			_0xa3db37edf9a74635(get_player_index(), uParam0->f_325, 8, 0, 0);
		}
	}
	if (!func_133(uParam0->f_1, 1))
	{
		if (func_133(uParam0->f_323, 32) && !get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_148(uParam0, 0);
		}
		else if (!func_133(uParam0->f_323, 32) && get_ped_config_flag(uParam0->f_325, 315, true))
		{
			func_148(uParam0, 1);
		}
	}
	if (func_133(uParam0->f_1, 1))
	{
		uParam0->f_295.f_12[0] = _uiprompt_get_group_id_for_target_entity(uParam0->f_325);
		uParam0->f_295.f_12[1] = -1073177089;
		uParam0->f_295.f_12[2] = -1721306936;
		uParam0->f_295.f_12[3] = 1651111721;
	}
	if (func_133(uParam0->f_1, 1024) || func_156(Global_34, uParam0->f_325, 1) > (uParam0->f_324 * uParam0->f_324))
	{
		set_ped_config_flag(uParam0->f_325, 301, true);
		return -1;
	}
	else if (get_ped_config_flag(uParam0->f_325, 301, true))
	{
		set_ped_config_flag(uParam0->f_325, 301, false);
	}
	iVar1 = 1;
	if (func_133(uParam0->f_323, 32) || (func_16(&Global_1940018, 2048) && func_133(uParam0->f_1, 1)))
	{
		func_152(&(uParam0->f_325), &(uParam0->f_295), 0f, &(uParam0->f_8), 0, 1, 0, 0, func_151(3, 0, 0), 0, 0, 2, -1082130432);
	}
	else
	{
		uParam0->f_295.f_1 = -1;
		iVar1 |= 67108864;
		func_152(&(uParam0->f_325), &(uParam0->f_295), uParam0->f_324, &(uParam0->f_8), 0, 3, 0, "BLIP_BARTENDER", iVar1, 0, 0, 2, -1082130432);
	}
	if (uParam0->f_295.f_1 == 12 && !func_133(uParam0->f_1, 1))
	{
		func_150(uParam0);
	}
	switch (*uParam0)
	{
		case 2:
			if (!get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			if (uParam0->f_295.f_1 == 3)
			{
				func_155(uParam0);
				return 4;
			}
			if (uParam0->f_295.f_1 == 4)
			{
				func_155(uParam0);
				return 5;
			}
			if (uParam0->f_295.f_1 == 1)
			{
				func_155(uParam0);
				return 1;
			}
			if (uParam0->f_295.f_1 == 0)
			{
				func_155(uParam0);
				return 2;
			}
			disable_control_action(0, 1287709438, false);
			break;
		case 6:
			if (get_ped_config_flag(uParam0->f_325, 130, true))
			{
				func_153(uParam0, 0);
			}
			if (Global_1915715->f_22483 != -1 && uParam0->f_295.f_1 == 11)
			{
				Global_1915715->f_22478 = 6;
				return 6;
			}
			if (!uParam0->f_6)
			{
				disable_control_action(0, -1616532217, false);
			}
			Global_1915715->f_22478 = -1;
			return -1;
	}
	return -1;
}

void func_21()
{
	func_157(&Local_18);
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 2:
			return 54;
		case 1:
			return 56;
		case 3:
			return 36;
		case 4:
			return 105;
		case 7:
			return 110;
		case 6:
			return 91;
		case 5:
			return 79;
		case 8:
			return 94;
		default:
			break;
	}
	return -1;
}

int func_23(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_24(var uParam0)
{
	bVar0 = func_44(func_43(*uParam0), 30, uParam0->f_13);
	if (func_158(*uParam0, &iVar2))
	{
		iVar1 = Global_1051439->f_3634[iVar2]->f_15;
		iVar3 = Global_1051439->f_3634[iVar2]->f_6;
	}
	bVar4 = does_entity_exist(iVar1);
	if (!bVar0)
	{
		if (func_159(30, 1))
		{
			func_160(30, 1);
			clear_ped_tasks(uParam0->f_13, 1, 0);
			if (_does_scenario_point_exist(iVar3) && !is_entity_dead(uParam0->f_13))
			{
				iVar5 = get_script_task_status(uParam0->f_13, -76381094, true);
				if ((iVar5 != 0 && iVar5 != 1) && !func_161(30, 4194304))
				{
					_task_use_scenario_point(uParam0->f_13, iVar3, 0, 0, true, false, 0, false, -1f, false);
				}
			}
			if (bVar4)
			{
				_0x541e5b41dca45828(iVar1, 3, 0);
			}
		}
	}
	else
	{
		iVar6 = get_script_task_status(uParam0->f_13, 474215631, true);
		if (iVar6 != 1 && iVar6 != 0)
		{
			iVar6 = get_script_task_status(uParam0->f_13, -76381094, true);
			if (iVar6 == 1)
			{
				_0xf1c03a5352243a30(uParam0->f_13);
				clear_ped_tasks(uParam0->f_13, 1, 0);
			}
			else
			{
				task_cower(uParam0->f_13, -1, Global_34, 0);
			}
		}
		else
		{
			func_162(30, 1);
		}
		if (bVar4)
		{
			if (!_0x916b8e075abc8b4e(iVar1, 1) || (is_ped_shooting(Global_34) && is_ped_facing_ped(Global_34, iVar1, 60f)))
			{
				_0xe7fa07624574b79a(iVar1, Global_34, 3, 1, -1f, 1, 0, 0, 0);
			}
		}
	}
	return bVar0;
}

void func_25(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	Local_18.f_199 = *uParam1;
	Local_18.f_200 = uParam1->f_1;
	iVar0 = func_138(func_137(*uParam0));
	bVar1 = func_2() == -1;
	if (bVar1)
	{
		uParam0->f_14 = func_163(*uParam1);
		uParam0->f_15 = func_164(*uParam1);
		func_165(uParam0->f_14, iVar0, 1);
	}
	_0x4a8fefc43fd8ac9b(iVar0, 1, 1);
	uParam0->f_622.f_326 = 1;
	uParam0->f_622.f_5 = func_166(*uParam1);
	if (bVar1)
	{
		uParam0->f_622.f_324 = func_167(*uParam0);
	}
	else
	{
		uParam0->f_622.f_324 = 3f;
	}
	uParam0->f_622.f_322 = uParam1->f_1;
	if (*uParam0 != 6)
	{
		uParam0->f_622.f_327[0] = func_90(1, *uParam1);
	}
	uParam0->f_622.f_327[1] = func_90(0, *uParam1);
	if (uParam0->f_622.f_295.f_6 == -1)
	{
		func_168(&(uParam0->f_622.f_295), 1, 0);
	}
	if (bVar1)
	{
		if ((*uParam0 == 3 || *uParam0 == 0) || *uParam0 == 2)
		{
			uParam0->f_622.f_326 |= 128;
		}
	}
	if (*uParam0 == 6)
	{
		func_26(&(uParam0->f_622), 2);
		func_169(&(uParam0->f_622), func_61(uParam0, 4), 0, -24362764, -368374107);
	}
	else if (!func_166(*uParam0))
	{
		func_169(&(uParam0->f_622), 0, 0, -24362764, -368374107);
	}
	else
	{
		func_169(&(uParam0->f_622), func_61(uParam0, 4), func_61(uParam0, 5), -24362764, -368374107);
	}
	uParam0->f_244 = 0;
	if (func_35(uParam0->f_237))
	{
		func_36(uParam0->f_237, 0, 1, 1);
	}
	if (func_166(*uParam1))
	{
		uParam0->f_237 = func_170("SERVICE_ORDER", -473983589, func_87(*uParam1), 1.2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		uParam0->f_962 = _0xb223249b7798eeed(Global_34, 798764373, 1, 1558937268);
		func_36(uParam0->f_237, 0, 1, 1);
	}
	func_171(uParam0);
	func_172(&(uParam0->f_157), *uParam0);
	uParam0->f_248 = 0;
	uParam0->f_244 = 0;
	func_30(uParam0, 1);
}

void func_26(var uParam0, int iParam1)
{
	if (!func_133(uParam0->f_323, iParam1) && iParam1 == 32)
	{
		if (!func_133(uParam0->f_1, 1))
		{
			func_155(uParam0);
		}
		func_131(&(uParam0->f_295), 0);
	}
	func_71(&(uParam0->f_323), iParam1);
}

void func_27(var uParam0, bool bParam1)
{
	func_173(uParam0->f_8[12], bParam1, 0);
	func_173(uParam0->f_8[11], bParam1, 0);
	func_173(uParam0->f_8[9], bParam1, 0);
	func_173(uParam0->f_8[10], bParam1, 0);
}

bool func_28(var uParam0)
{
	if (func_2() == -1)
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
		if (!func_129(uParam0->f_13, 0))
		{
			uParam0->f_13 = _0x31c70a716cae1fee(iVar0);
		}
	}
	else if (func_140(*uParam0, &uVar1))
	{
		uParam0->f_13 = uVar1;
	}
	if (!func_129(uParam0->f_13, 0))
	{
		return false;
	}
	uParam0->f_622.f_325 = uParam0->f_13;
	if (uParam0->f_622.f_339 == -1)
	{
		uParam0->f_622.f_339 = func_132(uParam0->f_622.f_325, 0);
	}
	func_174("SLFD");
	if (!_text_database_has_loaded("SLFD"))
	{
		return false;
	}
	return true;
}

void func_29(var uParam0)
{
	Local_18 = 30;
	iVar0 = func_121();
	bVar1 = true;
	if (func_2() != -1)
	{
		bVar1 = false;
	}
	switch (iVar0)
	{
		case 81:
			if (Local_18.f_200 == 1)
			{
				Local_18.f_1 = 91;
				if (bVar1)
				{
					Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[1];
					Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[1];
					Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[1];
				}
				else
				{
					Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[1];
					Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[1];
					Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[1];
				}
			}
			else
			{
				Local_18.f_1 = 79;
				if (bVar1)
				{
					Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
					Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
					Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
					Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[0];
				}
				else
				{
					Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
					Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
					Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
					Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[0];
				}
			}
			break;
		case 5:
			if (Local_18.f_200 == 1)
			{
				Local_18.f_1 = 56;
				if (bVar1)
				{
					Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[1];
					Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[1];
					Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[1];
					Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[1];
				}
				else
				{
					Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[1];
					Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[1];
					Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[1];
					Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[1];
				}
			}
			else
			{
				Local_18.f_1 = 54;
				if (bVar1)
				{
					Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
					Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
					Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
					Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[0];
				}
				else
				{
					Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
					Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
					Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
					Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[0];
				}
			}
			break;
		case 98:
			Local_18.f_1 = 94;
			if (bVar1)
			{
				Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
				Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
				Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
			}
			else
			{
				Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
				Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
				Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
			}
			break;
		case 40:
			Local_18.f_1 = 10;
			if (bVar1)
			{
				Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
				Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
				Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
				Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[0];
			}
			else
			{
				Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
				Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
				Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
				Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[0];
			}
			break;
		case 111:
			Local_18.f_1 = 36;
			if (bVar1)
			{
				Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
				Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
				Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
				Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[0];
			}
			else
			{
				Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
				Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
				Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
				Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[0];
			}
			break;
		case 121:
			Local_18.f_1 = 105;
			if (bVar1)
			{
				Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
				Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
				Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
				Global_1915715->f_3[Local_18]->f_33 = &Global_1940018->f_64[0];
			}
			else
			{
				Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
				Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
				Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
				Global_1051439->f_72[Local_18]->f_28 = &Global_1940018->f_64[0];
			}
			break;
		case 127:
			Local_18.f_1 = 110;
			if (bVar1)
			{
				Global_1915715->f_3[Local_18]->f_25 = &Global_1940018->f_55[0];
				Global_1915715->f_3[Local_18]->f_26 = &Global_1940018->f_58[0];
				Global_1915715->f_3[Local_18]->f_28 = &Global_1940018->f_61[0];
			}
			else
			{
				Global_1051439->f_72[Local_18]->f_24 = &Global_1940018->f_55[0];
				Global_1051439->f_72[Local_18]->f_25 = &Global_1940018->f_58[0];
				Global_1051439->f_72[Local_18]->f_27 = &Global_1940018->f_61[0];
			}
			break;
	}
	if (bVar1)
	{
		Global_1915715->f_3[Local_18]->f_23 = uParam0->f_13;
	}
	else
	{
		Global_1051439->f_72[Local_18]->f_21 = uParam0->f_13;
	}
	Local_18.f_20 = 1;
	Local_18.f_21 = 43398;
	Local_18.f_40 = 1;
	Local_18.f_41 = 43778;
	Local_18.f_38 = 1;
	Local_18.f_39 = 44064;
	Local_18.f_32 = 1;
	Local_18.f_33 = 45363;
}

void func_30(var uParam0, int iParam1)
{
	if (uParam0->f_5 != iParam1)
	{
		Local_18.f_201 = iParam1;
		uParam0->f_5 = iParam1;
	}
}

void func_31(var uParam0)
{
	if (uParam0->f_248 == 0)
	{
		request_anim_dict("SCRIPT_AMB@TOWN@SALOON@SHOTGUN_DEFEND@CROUCH@RIGHT@MALE_A@TRANS");
		uParam0->f_248++;
		return;
	}
	if (uParam0->f_248 == 1)
	{
		_request_scenario_type(-545460140, 1, get_entity_model(Global_34), 0);
		_0x5199405eabfbd7f0("CamTransitionBlink");
		uParam0->f_248++;
		return;
	}
	if (uParam0->f_248 == 2)
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
		uParam0->f_248++;
		uParam0->f_244 = 0;
		return;
	}
	if (uParam0->f_248 == 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			if (func_179(uParam0->f_24[iVar1]->f_2, *uParam0) && !func_166(*uParam0))
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
		uParam0->f_248++;
		uParam0->f_244 = 0;
	}
	uParam0->f_248 = 0;
	uParam0->f_244 = 0;
	func_30(uParam0, 3);
}

bool func_32(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_179(uParam0->f_24[iVar0]->f_2, *uParam0) && !func_166(*uParam0))
		{
		}
		else
		{
			if (!_does_anim_scene_exist(&(uParam0->f_24[iVar0])))
			{
				return false;
			}
			if (func_180(uParam0->f_24[iVar0]->f_2))
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

bool func_33(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_181(*uParam0, &(uParam0->f_24[iVar0]->f_6), &(uParam0->f_24[iVar0]->f_9));
		if (!func_166(*uParam0) && func_179(uParam0->f_24[iVar0]->f_2, *uParam0))
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
			}
			else if (uParam0->f_24[iVar0]->f_2 == 0 && uParam0->f_24[iVar0]->f_2 == 2)
			{
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "BARTENDER", uParam0->f_13, 0);
			}
			else
			{
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "PLAYER", Global_34, 0);
				set_anim_scene_entity(&(uParam0->f_24[iVar0]), "BARTENDER", uParam0->f_13, 0);
			}
		}
		iVar0++;
	}
	func_71(&(uParam0->f_236), 16);
	return true;
}

bool func_34(var uParam0)
{
	iVar0 = uParam0->f_244;
	while (iVar0 <= (13 - 1))
	{
		uParam0->f_244++;
		if (uParam0->f_157[iVar0]->f_2 != 0)
		{
			if (func_182(uParam0->f_157[iVar0], *uParam0, uParam0))
			{
			}
			else
			{
				iVar0++;
			}
			if (uParam0->f_244 >= 13)
			{
				return true;
			}
			return false;
		}
	}
}

bool func_35(int iParam0)
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

void func_36(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (bParam1)
	{
		func_183(iParam0, 4);
		if (bParam3)
		{
			func_48(iVar0, 1);
		}
		func_184(iVar0, 1);
	}
	else
	{
		func_185(iParam0, 4);
		func_184(iVar0, 0);
	}
}

void func_37(var uParam0, int iParam1)
{
	if (func_133(uParam0->f_323, iParam1) && iParam1 == 32)
	{
		if (!func_133(uParam0->f_1, 1))
		{
			func_155(uParam0);
		}
		func_131(&(uParam0->f_295), 0);
	}
	func_130(&(uParam0->f_323), iParam1);
}

void func_38(var uParam0)
{
	func_186(uParam0->f_325, &(uParam0->f_8), uParam0->f_324, 3, 0, 0, 0, 0, 0);
}

void func_39(var uParam0)
{
	if ((func_129(uParam0->f_325, 0) && !func_133(uParam0->f_1, 1)) && !func_133(uParam0->f_1, 8192))
	{
		func_153(uParam0, 0);
	}
	if (func_133(uParam0->f_1, 1))
	{
		func_19(uParam0);
		*uParam0 = 2;
		func_187(uParam0);
	}
	else if (func_133(uParam0->f_1, 8))
	{
		*uParam0 = 5;
		func_153(uParam0, 0);
	}
	else if (func_133(uParam0->f_1, 1024))
	{
		*uParam0 = -1;
	}
	else if (func_133(uParam0->f_1, 32))
	{
		if (func_133(uParam0->f_1, 128))
		{
			func_188(uParam0->f_8[12], 14);
			func_189(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, 648122183, 0, 0, 0, 1, 0);
			func_173(uParam0->f_8[12], 1, 0);
			uParam0->f_8[12]->f_10 = 1;
			func_190(uParam0);
		}
		else
		{
			func_191(uParam0->f_8[12]);
			func_192(uParam0->f_8[12], 1);
			func_188(uParam0->f_8[12], 14);
		}
		*uParam0 = 7;
	}
	else if (func_133(uParam0->f_1, 64))
	{
		*uParam0 = 8;
	}
	else if (func_133(uParam0->f_1, 16))
	{
		*uParam0 = 9;
	}
	else if (func_133(uParam0->f_1, 512))
	{
		*uParam0 = 10;
	}
	else if (func_133(uParam0->f_1, 128))
	{
		*uParam0 = 12;
		func_190(uParam0);
	}
	else if (func_133(uParam0->f_1, 256))
	{
		*uParam0 = 11;
	}
	uParam0->f_2 = 0;
	if (func_133(uParam0->f_323, 8))
	{
		func_173(uParam0->f_8[12], 0, 0);
		func_173(uParam0->f_8[11], 0, 0);
		func_173(uParam0->f_8[9], 0, 0);
		func_173(uParam0->f_8[10], 0, 0);
	}
	if (func_133(uParam0->f_323, 1))
	{
		func_192(uParam0->f_8[9], 1);
		func_192(uParam0->f_8[10], 1);
		func_192(uParam0->f_8[11], 1);
		func_192(uParam0->f_8[12], 1);
		func_173(uParam0->f_8[12], 0, 0);
		uParam0->f_2 = 1;
	}
}

void func_40()
{
	func_193(0);
	func_194();
	func_195(&(Local_18.f_79));
}

void func_41(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_35(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_47(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_196(iVar0);
	*uParam0 = 0;
}

bool func_42(int iParam0)
{
	return (func_197(iParam0, 4) || func_197(iParam0, 5));
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 56;
		case 2:
			return 54;
		case 3:
			return 36;
		case 4:
			return 105;
		case 5:
			return 79;
		case 6:
			return 81;
		case 7:
			return 110;
		case 8:
			return 94;
		default:
			break;
	}
	return -1;
}

bool func_44(int iParam0, int iParam1, int iParam2)
{
	if ((((is_ped_shooting(Global_1296859->f_8) || _0x09d7afd3716da8e1(iParam2, 4000)) || Global_1956200->f_1716[14]) // PointerArith || func_198(iParam0) == 2) || func_141(1106247680, 0))
	{
		if (func_107(&(Global_1051439->f_72[iParam1]->f_69)))
		{
			func_195(&(Global_1051439->f_72[iParam1]->f_69));
		}
		else
		{
			func_88(&(Global_1051439->f_72[iParam1]->f_69), 0);
		}
	}
	if (!func_107(&(Global_1051439->f_72[iParam1]->f_69)) || func_199(&(Global_1051439->f_72[iParam1]->f_69)) >= 10f)
	{
		func_108(&(Global_1051439->f_72[iParam1]->f_69));
		return false;
	}
	else if (vdist2(Global_35, get_entity_coords(iParam2, true, false)) < (30f * 30f))
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_45(var uParam0)
{
	if (is_ped_dead_or_dying(uParam0->f_325, true))
	{
		return;
	}
	func_154(uParam0->f_8[11]);
	func_154(uParam0->f_8[12]);
	func_154(uParam0->f_8[10]);
	func_154(uParam0->f_8[9]);
}

bool func_46(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return false;
	}
	iVar0 = func_47(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

int func_47(int iParam0)
{
	return iParam0;
}

void func_48(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_200(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

bool func_49(int iParam0)
{
	if (-1829635046 == func_201(81053684))
	{
		if (func_202(iParam0))
		{
			return true;
		}
	}
	else if (func_203(-525676072, iParam0) || func_205(func_204(1742327865), -1303648999))
	{
		if (func_202(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_50(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return false;
	}
	return !func_200(iParam0, 4);
}

Vector3 func_51(int iParam0)
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

float func_52(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_53(var uParam0)
{
	vVar1 = { func_87(*uParam0) };
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

int func_54()
{
	return &Global_1902818;
}

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_206(*iParam0);
	iVar1 = func_207(*iParam0);
	iVar2 = func_208(*iParam0);
	iVar3 = func_209(*iParam0);
	iVar4 = func_210(*iParam0);
	iVar5 = func_211(*iParam0);
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
		iVar7 = func_212(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_213(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_56(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
	}
	else
	{
		Global_5860.f_2074[iParam0] = (Global_5860.f_2074[iParam0] || iParam1);
	}
}

void func_57(var uParam0, int iParam1)
{
	iVar0 = func_54();
	if (iParam1 != -15)
	{
		iVar0 = iParam1;
	}
	if (func_2() == -1)
	{
		Global_5860.f_1350[*uParam0] = iVar0;
	}
	else
	{
		Global_17411.f_2763[*uParam0] = iVar0;
	}
	func_56(*uParam0, 8);
}

bool func_58(var uParam0, var uParam1)
{
	if (func_35(uParam0->f_237) && func_95(uParam0->f_237, 1))
	{
		uParam0->f_228 = 1;
		return true;
	}
	if (func_215(*uParam1))
	{
		if (uParam0->f_223 == 4 || uParam0->f_223 == 5)
		{
			if (uParam0->f_223 == 5 && func_133(uParam0->f_622.f_323, 2))
			{
				return false;
			}
			uParam0->f_224 = uParam0->f_223;
			Local_18.f_202 = uParam0->f_223;
			func_216(1);
			uParam0->f_234 = 1;
			return true;
		}
	}
	return false;
}

bool func_59(var uParam0)
{
	if ((uParam0->f_223 == 1 || uParam0->f_223 == 3) || uParam0->f_223 == 2)
	{
		func_216(0);
		uParam0->f_224 = uParam0->f_223;
		Local_18.f_202 = uParam0->f_223;
		return true;
	}
	return false;
}

void func_60(var uParam0, int iParam1)
{
	if (uParam0->f_241 != iParam1)
	{
		uParam0->f_241 = iParam1;
	}
}

int func_61(var uParam0, int iParam1)
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

bool func_62(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_63(var uParam0)
{
	_item_database_fillout_item_effects_ids(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		_item_database_fillout_item_effects_id_info(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0]);
		iVar0++;
	}
}

void func_64(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_2() == 0)
	{
		iVar0 = func_93();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_217(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_218(iParam0);
		if (bParam3)
		{
			func_219(iParam0, sParam1, iParam2);
		}
	}
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
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
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		case 39:
			return 374439621;
		default:
			break;
	}
	return 0;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

struct<2> func_67(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_68(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_69(int iParam0)
{
	iVar0 = func_66(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

struct<2> func_70(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_71(var uParam0, int iParam1)
{
	func_220(uParam0, iParam1);
}

void func_72()
{
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 527275493, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -124244224, false);
	func_221(0);
}

void func_73(var uParam0)
{
	fVar0 = -1f;
	fVar4 = -1f;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_239 = _create_volume_cylinder(Global_35, 0f, 0f, 0f, 0.75f, 0.75f, 3f);
	iVar11 = 0;
	while (iVar11 < func_222(uParam0))
	{
		iVar12 = create_itemset(true);
		func_223(uParam0, &vVar8, &uVar1, iVar11);
		fVar2 = func_224(Global_35, vVar8);
		_0x541b8576615c33de(uParam0->f_239, vVar8);
		iVar13 = _0x886171a12f400b89(uParam0->f_239, iVar12, 1);
		bVar17 = false;
		iVar15 = 0;
		while (iVar15 < iVar13)
		{
			iVar16 = get_indexed_item_in_itemset(iVar15, iVar12);
			iVar14 = iVar16;
			if (does_entity_exist(iVar14) && iVar14 == Global_34)
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
	if (func_225(uParam0->f_10))
	{
		uParam0->f_9 = uVar3;
		uParam0->f_10 = { vVar5 };
	}
}

Vector3 func_74()
{
	return -0.235327f, 1.850775f, 0f;
}

void func_75(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		if (does_entity_exist(&(uParam0->f_157[iVar0])))
		{
			set_entity_visible_in_cutscene(&(uParam0->f_157[iVar0]), 1, 0, 256);
		}
		iVar0++;
	}
}

void func_76(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_2() != 0)
	{
		return;
	}
	iVar0 = player_id();
	if (bParam0)
	{
		if (!network_is_player_in_mp_cutscene(iVar0))
		{
			set_local_player_visible_in_cutscene(iParam1, iParam2, 256);
			Global_1051439->f_3727 = get_unique_int_for_player(iVar0);
			network_set_in_mp_cutscene(true, true, Global_1051439->f_3727, bParam3);
		}
	}
	else if (network_is_player_in_mp_cutscene(iVar0))
	{
		network_set_in_mp_cutscene(false, false, Global_1051439->f_3727, bParam3);
	}
}

void func_77(var uParam0)
{
	switch (uParam0->f_211.f_2)
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

void func_78(var uParam0, int iParam1)
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

void func_79(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_80(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
							if (is_ped_male(Global_34))
							{
								_0x3bbdd6143ff16f98(Global_34, uParam0[iVar0], "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1);
							}
							else
							{
								_0x3bbdd6143ff16f98(Global_34, uParam0[iVar0], "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_FEMALE_A", 1);
							}
						}
						else
						{
							_0x3bbdd6143ff16f98(Global_34, uParam0[iVar0], (*uParam0)[iVar0]->f_1, func_226(vParam1.z), func_227(vParam1.z), 1);
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
							if (is_ped_male(Global_34))
							{
								_0x3bbdd6143ff16f98(Global_34, uParam0[iVar0], "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1);
							}
							else
							{
								_0x3bbdd6143ff16f98(Global_34, uParam0[iVar0], "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_FEMALE_A", 1);
							}
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

void func_81(var uParam0, var uParam1)
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

void func_82(var uParam0)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		reset_anim_scene(*uParam0, 0);
	}
}

void func_83(var uParam0)
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

Vector3 func_84(int iParam0)
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

Vector3 func_85(int iParam0)
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

float func_86(int iParam0)
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

Vector3 func_87(int iParam0)
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

void func_88(var uParam0, bool bParam1)
{
	if (bParam1 || !func_107(uParam0))
	{
		func_195(uParam0);
	}
}

void func_89(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		Global_1915715->f_3[iParam0]->f_412 = iParam1;
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_61 = iParam1;
	}
}

char* func_90(int iParam0, int iParam1)
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

int func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_200(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_228(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_92(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_93()
{
	if (func_2() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_94(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_200(iVar0, 2))
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
		func_228(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_95(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return false;
	}
	iVar0 = func_47(iParam0);
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

float func_96(int iParam0)
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

int func_97(int iParam0)
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

Vector3 func_98(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -5517.186f, -2907.653f, -0.992f;
		case 0:
			return -816.0289f, -1318.665f, 44.43f;
		case 2:
			return 2638.154f, -1225.019f, 54.113f;
		case 5:
			return -313.3652f, 803.1884f, 119.7235f;
		case 3:
			return 1341.879f, -1374.579f, 81.2087f;
		case 8:
			return 2945.783f, 528.8578f, 46.0795f;
		case 6:
			return -241.3127f, 770.954f, 118.931f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_99(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -37.8284f, 0.0033f, -7.671f;
		case 0:
			return -38.3305f, -0.002f, 52.0961f;
		case 2:
			return -38.6082f, -0.0025f, -127.9284f;
		case 5:
			return -38.0108f, -0.0019f, -27.7976f;
		case 3:
			return -38.8269f, 0.0007f, 42.0125f;
		case 8:
			return -39.1966f, 0.0606f, -128.2215f;
		case 6:
			return -34.9732f, 0.011f, -97.0904f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_100(var uParam0)
{
	return 26.9915f;
}

Vector3 func_101(int iParam0)
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

bool func_102(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return false;
	}
	iVar0 = func_47(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_103(var uParam0)
{
	if (!func_107(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_229(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_230() - round((uParam0->f_1 * 1000f)));
}

void func_104(var uParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			*uParam0 = create_scenario_point(-1177373461, func_51(iParam3), func_96(iParam3), 0, 0, 0);
			break;
		case 2:
		case 3:
			*uParam0 = create_scenario_point(798764373, func_51(iParam3), func_96(iParam3), 0, 0, 0);
			break;
	}
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 325252933;
		case 8:
			return 306472818;
		case 0:
			return 325252933;
		case 2:
			return 2096698905;
		case 4:
			return 1999055955;
		case 3:
			return 1609095284;
		case 6:
			return -1443906703;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_106(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (does_entity_exist(&(uParam0->f_157[iVar0])))
		{
			switch (uParam0->f_157[iVar0]->f_3)
			{
				case 1:
					func_116(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
					freeze_entity_position(&(uParam0->f_157[iVar0]), true);
					_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Stew_Fill", 0f);
					set_entity_coords(&(uParam0->f_157[iVar0]), _get_object_offset_from_coords(_get_scenario_point_coords(uParam0->f_6, true), _get_scenario_point_heading(uParam0->f_6, true), vVar1), true, false, true, true);
					set_entity_rotation(&(uParam0->f_157[iVar0]), vVar4, 2, true);
					break;
				case 0:
					func_116(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
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
					if ((uParam0->f_211.f_2 == 2 || uParam0->f_211.f_2 == 3) || uParam0->f_211.f_2 == 10)
					{
						func_116(uParam0->f_157[iVar0]->f_3, &vVar1, &vVar4, _get_scenario_point_heading(uParam0->f_6, true));
						if (!func_225(vVar1))
						{
							if (uParam0->f_157[iVar0]->f_3 == 6)
							{
								_0x669655ffb29ef1a9(&(uParam0->f_157[iVar0]), 0, "Food_DOF_Fill", 0f);
							}
							if (uParam0->f_157[iVar0]->f_3 == 7 || uParam0->f_157[iVar0]->f_3 == 8)
							{
								if (uParam0->f_211.f_2 != 10)
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

bool func_107(var uParam0)
{
	return func_231(*uParam0, 1);
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_109(var uParam0)
{
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 527275493, false);
	disable_control_action(0, -1404316431, false);
	func_221(0);
	if (uParam0->f_963 == 0 && !get_ped_config_flag(Global_34, 334, true))
	{
		set_ped_config_flag(Global_34, 334, true);
		uParam0->f_963 = 1;
	}
}

void func_110(var uParam0)
{
	if ((uParam0->f_224 != 2 && uParam0->f_224 != 1) && uParam0->f_224 != 3)
	{
		return;
	}
	if (has_anim_event_fired(Global_34, -219856583) && IntToFloat(uParam0->f_265.f_1) < uParam0->f_265.f_2)
	{
		func_232(uParam0->f_224);
		func_117(&(uParam0->f_265), IntToFloat(uParam0->f_265.f_1) >= uParam0->f_265.f_2);
		uParam0->f_265.f_1++;
	}
	if (has_anim_event_fired(Global_34, 442509369) && IntToFloat(uParam0->f_265.f_1) < uParam0->f_265.f_2)
	{
	}
	if (has_anim_event_fired(Global_34, 574156416))
	{
		_0xd65fdc686a031c83(Global_34, -872596011, 3f);
		_0x6d07b371e9439019(Global_34);
		func_72();
	}
	if (has_anim_event_fired(Global_34, -1456814372))
	{
		uParam0->f_227 = 1;
		uParam0->f_157[5] = _0x05a0100ea714db68(Global_34, -1775366913);
		if (uParam0->f_211.f_2 != 4)
		{
			_0x3bbdd6143ff16f98(Global_34, &(uParam0->f_157[5]), "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_ARTHUR", 1);
		}
		clear_ped_secondary_task(Global_34);
	}
	if (IntToFloat(uParam0->f_265.f_1) >= uParam0->f_265.f_2)
	{
		uParam0->f_265.f_1 = 0;
		if (uParam0->f_224 == 1 || uParam0->f_224 == 3)
		{
			_0xd65fdc686a031c83(Global_34, -872596011, 1f);
			_0x6d07b371e9439019(Global_34);
			func_72();
		}
		else
		{
			if (func_233(0))
			{
				uParam0->f_261 = 1;
			}
			func_72();
			func_17(uParam0->f_1, 4096);
			uParam0->f_241 = 5;
			func_30(uParam0, 23);
			func_234(uParam0);
			func_130(&(uParam0->f_236), 1);
		}
		uParam0->f_233 = 0;
	}
	if (_0xc488b8c0e52560d8(Global_34))
	{
		func_72();
	}
	if (uParam0->f_227)
	{
	}
	if (has_anim_event_fired(Global_34, 1125903329))
	{
		uParam0->f_265.f_1 = 0;
		func_17(uParam0->f_1, 4096);
		uParam0->f_157[5] = _0x4d0d2e3d8bc000eb(Global_34, "p_bottleBeer01x_PH_R_HAND", 1);
		clear_ped_secondary_task(Global_34);
		func_234(uParam0);
		if (func_233(0))
		{
			uParam0->f_261 = 1;
		}
		_0x0751d461f06e41ce(player_id(), 42, 1, 0);
		_0x0751d461f06e41ce(player_id(), 8, 0, 0);
		func_130(&(uParam0->f_236), 1);
		uParam0->f_241 = 5;
		func_30(uParam0, 23);
		uParam0->f_227 = 0;
		uParam0->f_233 = 0;
	}
}

bool func_111()
{
	return Global_1102219->f_3664;
}

bool func_112(int iParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_235(iParam0, &Var0);
}

Vector3 func_113(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -5509.78f, -2915.599f, -1.5893f;
		case 0:
			return -817.0462f, -1317.045f, 48.0507f;
		case 2:
			return 2631.276f, -1220.56f, 53.5505f;
		case 5:
			return -311.6298f, 801.0786f, 119.1528f;
		case 3:
			return 1342.496f, -1369.773f, 80.6704f;
		case 8:
			return 2944.844f, 519.1336f, 45.5406f;
		case 6:
			return -240.1252f, 766.2955f, 118.2705f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -2.7132f, 0.0002f, 115.3937f;
		case 0:
			return -2.7151f, 0f, 120.3253f;
		case 2:
			return -2.6562f, -0.002f, -102.7478f;
		case 5:
			return -2.3725f, 0.0024f, -93.1075f;
		case 3:
			return -2.6399f, -0.0004f, -111.7022f;
		case 8:
			return -2.697f, 0.0017f, -103.1809f;
		case 6:
			return -2.6474f, -0.0011f, 97.9995f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_115(var uParam0)
{
	return 51.282f;
}

void func_116(int iParam0, var uParam1, var uParam2, float fParam3)
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

void func_117(var uParam0, bool bParam1)
{
	if ((func_205(*uParam0, 1573112293) || func_205(*uParam0, 672467738)) || func_205(*uParam0, -550842268))
	{
		bVar10 = true;
	}
	bVar11 = func_236(*uParam0);
	_0xd962f8579d702db5();
	Global_1940144->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		switch (uParam0->f_33[iVar0]->f_1)
		{
			case -943921969:
				fVar1 = func_237(0, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_238((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				bVar9 = true;
				break;
			case -1104847406:
				fVar2 = func_237(2, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_239((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_237(1, (IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				func_240((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_241((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_242(0, fVar4, 1, 1, bVar10);
				bVar9 = true;
				break;
			case 1857353317:
				fVar5 = func_241((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_242(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_241((IntToFloat(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), (uParam0->f_33[iVar0]->f_5 / uParam0->f_2));
				func_242(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_243((to_float(uParam0->f_33[iVar0]->f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0]->f_1)
					{
						case 2062242710:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(19, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case -826379728:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(0, fVar7, bVar11, 1);
							bVar9 = true;
							break;
						case 1342237631:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_244(to_float(uParam0->f_33[iVar0]->f_3), uParam0->f_33[iVar0]->f_4);
							func_245(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_246(uParam0);
		func_247(*uParam0, bVar8, bVar9, 562618531);
	}
	func_248(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

bool func_118(int iParam0, int iParam1)
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

void func_119(var uParam0)
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

int func_120(var uParam0)
{
	if (func_249(func_43(*uParam0), 1))
	{
		return 1;
	}
	if (vdist2(Global_35, uParam0->f_2) > (33f * 33f))
	{
		return 1;
	}
	if (uParam0->f_5 >= 8)
	{
		if (!does_entity_exist(uParam0->f_13) || is_entity_dead(uParam0->f_13))
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	return Global_1893587->f_2;
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_123(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

bool func_124(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return (*Global_1893775)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_125(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_250(iParam0))
	{
		return;
	}
	if (!func_134(iParam0, 1))
	{
		return;
	}
	if (!func_134(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_124(iParam0)) && func_251(iParam0))
	{
		return;
	}
	func_252(iParam0, 1);
	func_253(iParam0);
	if (func_255(func_254(iParam0)))
	{
		iVar0 = func_123(iParam0);
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
		func_252(iParam0, 16);
	}
	if (func_134(iParam0, 128) && !bParam3)
	{
		func_256(iParam0, 0);
	}
}

void func_126(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_173((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_127(var uParam0)
{
	if (func_35(uParam0->f_19))
	{
		func_41(&(uParam0->f_19), 1, 1);
	}
	if (func_35(uParam0->f_20))
	{
		func_41(&(uParam0->f_20), 1, 1);
	}
	if (func_35(uParam0->f_21))
	{
		func_41(&(uParam0->f_21), 1, 1);
	}
	func_41(&(uParam0->f_22), 1, 1);
	if (does_cam_exist(uParam0->f_16))
	{
		destroy_cam(uParam0->f_16, false);
	}
	if (does_cam_exist(uParam0->f_17))
	{
		destroy_cam(uParam0->f_17, false);
	}
	if (func_2() == -1 && uParam0->f_14 != -1)
	{
		if (func_124(uParam0->f_14))
		{
			clear_ped_tasks(uParam0->f_13, 1, 0);
			_0xa2b18ff8d39f6d87(func_123(uParam0->f_14));
			func_125(uParam0->f_14, 0, 1, 0, 0);
		}
	}
	else
	{
		clear_ped_tasks(uParam0->f_13, 1, 0);
	}
	uParam0->f_226 = 0;
	if (is_valid_interior(get_interior_at_coords(func_87(*uParam0))))
	{
		unpin_interior(get_interior_at_coords(func_87(*uParam0)));
	}
	if (_does_volume_exist(uParam0->f_238))
	{
		_delete_volume(uParam0->f_238);
	}
	func_41(&(uParam0->f_237), 1, 1);
	uParam0->f_228 = 0;
	uParam0->f_230 = 0;
	uParam0->f_231 = 0;
	Global_1940018->f_51 = 0;
	set_player_control(player_id(), true, 0, false);
	display_radar(true);
	uParam0->f_13 = 0;
	func_108(&(uParam0->f_245));
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_129(int iParam0, int iParam1)
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
	if (func_133(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_133(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_133(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_133(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_133(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_133(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_133(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_133(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_130(var uParam0, int iParam1)
{
	func_257(uParam0, iParam1);
}

void func_131(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_108(&(iParam0->f_24));
}

int func_132(int iParam0, bool bParam1)
{
	return func_258(iParam0, Global_1893587->f_2, bParam1);
}

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_134(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_250(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

bool func_135(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_259();
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

bool func_136(bool bParam0, bool bParam1)
{
	if (func_260(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (does_entity_exist(iVar0) && get_ped_config_flag(iVar0, 6, false))
			{
				return false;
			}
			if (does_entity_exist(iVar1) && get_ped_config_flag(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	return Global_1940018->f_5[iParam0]->f_4;
}

bool func_139(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_140(int iParam0, var uParam1)
{
	iVar0 = func_43(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&Global_1051439->f_3634[iVar1] == iVar0)
			{
				if (does_entity_exist(Global_1051439->f_3634[iVar1]->f_7))
				{
					*uParam1 = Global_1051439->f_3634[iVar1]->f_8;
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return false;
}

bool func_141(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_144(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_142(int iParam0)
{
	return func_16(iParam0, 1);
}

bool func_143(int iParam0)
{
	if (iParam0 == 28 && !func_261(64))
	{
		return true;
	}
	if (iParam0 == 35)
	{
		if (!func_262(1))
		{
			return true;
		}
		if (func_263(0, 0, 1))
		{
			return true;
		}
	}
	if (func_264(4, 255))
	{
		if (Global_1051439->f_72[iParam0]->f_49 & 1073741824 != 0)
		{
		}
		else
		{
			return true;
		}
	}
	if (func_265())
	{
		if (!func_266())
		{
			return true;
		}
		if (iParam0 == 38)
		{
			return true;
		}
	}
	if (func_267(player_id()))
	{
		if (iParam0 == 39)
		{
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_268(0) };
			if (func_269(Var0))
			{
				if (func_270(Var0) == -20166336)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		else
		{
			return true;
		}
	}
	if (Global_1071686->f_28778)
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_146(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_35((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_41(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (is_bit_set(uParam0[iVar0], 1))
					{
						_display_hud_component(-1744263063);
					}
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

bool func_147(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_34, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_271(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_148(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_325))
	{
		set_ped_config_flag(uParam0->f_325, 297, bParam1);
		set_ped_config_flag(uParam0->f_325, 315, !bParam1);
	}
}

void func_149(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_188((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

void func_150(var uParam0)
{
	switch (*uParam0)
	{
		case 2:
			if (!uParam0->f_5)
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_BARTENDER", 0, -491432029, 0, 0, 0, 1, 0);
			}
			else
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_FOOD", 0, -491432029, 0, 0, 0, 1, 0);
			}
			*uParam0 = 3;
			func_187(uParam0);
			break;
		case 3:
			if (func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 4;
			}
			else if (!uParam0->f_5)
			{
				*uParam0 = 2;
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
			}
			else
			{
				*uParam0 = 4;
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_BARTENDER", 0, -491432029, 0, 0, 0, 1, 0);
			}
			func_187(uParam0);
			break;
		case 4:
			if (func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 12;
				func_190(uParam0);
			}
			else
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 3;
				func_187(uParam0);
			}
			break;
		case 5:
			func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TRADE", 0, -491432029, 0, 0, 0, 1, 0);
			*uParam0 = 6;
			func_272(uParam0);
			break;
		case 11:
			func_189(uParam0->f_8[12], "SERVICE_TOGGLE_FENCE", 0, -491432029, 0, 0, 0, 1, 0);
			func_272(uParam0);
			*uParam0 = 6;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (func_133(uParam0->f_1, 128))
			{
				if (*uParam0 == 7)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_GUNSMITH", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 9)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_POSTOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 10)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TICKETOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 8)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_BUTCHER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				*uParam0 = 12;
				func_190(uParam0);
			}
			else
			{
				if (*uParam0 == 7)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_GUNSMITH", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 9)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_POSTOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 10)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TICKETOFFICER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				else if (*uParam0 == 8)
				{
					func_189(uParam0->f_8[12], "SERVICE_TOGGLE_BUTCHER", 0, -491432029, 0, 0, 0, 1, 0);
				}
				*uParam0 = 6;
				func_272(uParam0);
			}
			break;
		case 12:
			func_19(uParam0);
			if (func_133(uParam0->f_1, 1))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_DRINKS", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 3;
				func_187(uParam0);
			}
			else if ((func_133(uParam0->f_1, 32) || func_133(uParam0->f_1, 16)) || func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				if (func_133(uParam0->f_1, 32))
				{
					*uParam0 = 7;
				}
				else if (func_133(uParam0->f_1, 16))
				{
					*uParam0 = 9;
				}
				else if (func_133(uParam0->f_1, 512))
				{
					*uParam0 = 10;
				}
			}
			break;
		case 6:
			if (func_133(uParam0->f_1, 32) && func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 7;
			}
			else if (func_133(uParam0->f_1, 32) && !func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 7;
				func_187(uParam0);
			}
			else if (func_133(uParam0->f_1, 16) && func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_LODGING", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 9;
			}
			else if (func_133(uParam0->f_1, 16))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 9;
			}
			else if (func_133(uParam0->f_1, 512))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 10;
			}
			else if (func_133(uParam0->f_1, 64))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 8;
			}
			else if (func_133(uParam0->f_1, 256))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 11;
			}
			else if (func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				*uParam0 = 12;
				func_190(uParam0);
			}
			else if (func_133(uParam0->f_1, 8))
			{
				func_189(uParam0->f_8[12], "SERVICE_TOGGLE_TALK", 0, -491432029, 0, 0, 0, 1, 0);
				func_153(uParam0, 0);
				*uParam0 = 5;
			}
			break;
	}
	func_128(&(uParam0->f_326), 16);
}

int func_151(int iParam0, int iParam1, int iParam2)
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

int func_152(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_273(&iParam8);
		bVar0 = false;
		bVar1 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_34, iParam9, false, 0));
		bVar2 = iParam8 & 32 != false;
		bVar3 = iParam8 & 524288 != false;
		bVar4 = iParam8 & 16777216 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar7 = func_274(fParam12 >= 0f, fParam12, vdist(Global_35, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar4)
		{
			bVar0 = (is_ambient_speech_playing(Global_34) || is_scripted_speech_playing(Global_34));
		}
		if (bVar6 || (bVar4 && bVar0))
		{
			func_195(&(iParam1->f_19));
		}
		if (func_275(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar1)
				{
					if (func_276(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar7))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
					}
				}
				break;
			case 1:
				if (!bVar1 || !fVar7 <= (fParam2 + 5f))
				{
					func_277(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_278(*uParam0, 1, 1);
						}
					}
					else if (func_279(iParam1, 22))
					{
						func_278(*uParam0, 0, 1);
					}
				}
				if (func_147(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_280(uParam0, 1, iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_281(iParam8);
					if (func_282(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_283(uParam3);
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
					func_284(iParam1, uParam3, fVar7);
					if (func_285(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						if (!bVar3)
						{
							func_146(uParam3, 0, 0, 1, 1);
						}
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_286(uParam0, iParam1, fParam4, bVar5))
				{
					uVar8 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar8;
				}
				break;
			case 2:
				if (func_147(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_287(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar2);
					func_282(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 1);
					func_280(uParam0, func_147(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_281(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar3)
					{
						func_146(uParam3, 0, 0, 1, 1);
					}
					func_288(iParam1, 1);
				}
				func_284(iParam1, uParam3, fVar7);
				if (func_286(uParam0, iParam1, fParam4, bVar5))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					uVar9 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar9;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_289(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_153(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_325))
	{
		set_ped_config_flag(uParam0->f_325, 130, !bParam1);
	}
}

void func_154(int* iParam0)
{
	func_188(iParam0, 9);
}

void func_155(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = 0;
}

float func_156(int iParam0, int iParam1, bool bParam2)
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
	return func_52(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_157(int iParam0)
{
	func_290(iParam0->f_1);
	if (!func_291(iParam0))
	{
		return;
	}
	if (func_292(iParam0->f_1))
	{
		return;
	}
	if (func_293(iParam0->f_1))
	{
		return;
	}
	if (func_294(iParam0->f_1))
	{
		return;
	}
	if (func_295(iParam0->f_1))
	{
		if (!func_296(*iParam0))
		{
			func_297(iParam0, 16384);
		}
		else
		{
			func_298(iParam0, 16384);
		}
		func_299(iParam0->f_1, 2048);
		return;
	}
	if (func_300())
	{
		return;
	}
	if (!does_entity_exist(iParam0->f_4) && !func_301(*iParam0, &(iParam0->f_4)))
	{
		return;
	}
	if (!func_129(iParam0->f_4, 10))
	{
		return;
	}
	if (func_302(iParam0->f_1))
	{
		if (func_303(iParam0->f_4))
		{
			func_304(iParam0);
		}
		return;
	}
	if (func_305(*iParam0))
	{
		sVar0 = func_306(*iParam0);
		if (!_text_database_has_loaded(sVar0))
		{
			if (!_0x3cf96e16265b7dc8(sVar0))
			{
				_text_database_request(sVar0);
			}
			return;
		}
	}
	if (func_307(iParam0) || func_308(iParam0))
	{
		if ((func_309(iParam0) && iParam0->f_58 == 0) && !func_310(*iParam0, iParam0->f_1))
		{
			func_311(iParam0->f_1);
		}
		iVar1 = func_312(iParam0);
		switch (iParam0->f_49)
		{
			case 0:
				if (func_296(*iParam0) && _0x7f9b9791d4cb71f6(iParam0->f_4, Global_34, 0, 0) == 1)
				{
					func_313(iParam0, 1);
				}
				break;
			case 1:
				_0x85f500f4e24ca43e(iParam0->f_4, 0f);
				_0x9b9b9fa0ea283e3d(iParam0->f_4, 0f);
				func_314(iParam0);
				func_315(iParam0);
				func_316(iParam0);
				func_317(iParam0);
				if (((func_107(&(iParam0->f_82)) && func_318(&(iParam0->f_82)) < 5f) || func_319(Global_34)) || func_320(iParam0, 16384))
				{
					func_313(iParam0, 5);
					func_321(iParam0->f_1);
					func_195(&(iParam0->f_67));
					func_195(&(iParam0->f_79));
					func_195(&(iParam0->f_82));
					func_322(iParam0);
				}
				else
				{
					func_313(iParam0, 2);
				}
				break;
			case 2:
				if (!func_296(*iParam0))
				{
					func_313(iParam0, 12);
				}
				else if (func_323(iVar1))
				{
					func_311(iParam0->f_1);
					func_313(iParam0, 11);
				}
				else if (func_324(iParam0))
				{
					func_313(iParam0, 3);
					func_195(&(iParam0->f_67));
					func_195(&(iParam0->f_79));
					func_195(&(iParam0->f_82));
					func_322(iParam0);
				}
				break;
			case 3:
				if (!func_296(*iParam0))
				{
					func_313(iParam0, 12);
				}
				else if (func_323(iVar1))
				{
					func_311(iParam0->f_1);
					func_313(iParam0, 11);
				}
				else if (func_325(iParam0))
				{
					func_313(iParam0, 5);
				}
				break;
			case 5:
				if (!func_296(*iParam0))
				{
					func_313(iParam0, 12);
				}
				else if (func_323(iVar1))
				{
					func_311(iParam0->f_1);
					func_313(iParam0, 11);
				}
				else
				{
					if (iParam0->f_20 && func_326(iParam0))
					{
					}
					else if (!func_309(iParam0))
					{
						func_327(iParam0);
					}
					if (func_328(*iParam0))
					{
						func_313(iParam0, 6);
						func_108(&(iParam0->f_79));
					}
				}
				break;
			case 6:
				if (func_329(iParam0, 1))
				{
					func_313(iParam0, 7);
					func_108(&(iParam0->f_67));
					func_108(&(iParam0->f_79));
					func_108(&(iParam0->f_70));
					func_108(&(iParam0->f_73));
				}
				break;
			case 7:
				if (iParam0->f_20 && func_326(iParam0))
				{
				}
				else
				{
					func_330(iParam0);
				}
				if (!func_328(*iParam0))
				{
					func_313(iParam0, 8);
				}
				break;
			case 8:
				if (func_329(iParam0, 0))
				{
					func_313(iParam0, 5);
					func_195(&(iParam0->f_67));
					func_195(&(iParam0->f_79));
					func_108(&(iParam0->f_70));
					func_108(&(iParam0->f_73));
				}
				break;
			case 10:
				if (!func_331(iParam0->f_1, 64))
				{
					func_56(iParam0->f_1, 64);
				}
				func_332(iParam0);
				break;
			case 11:
				if (!func_296(*iParam0))
				{
					func_313(iParam0, 12);
				}
				else
				{
					if (func_333(iParam0, iVar1))
					{
						func_313(iParam0, 5);
						func_195(&(iParam0->f_67));
						func_195(&(iParam0->f_79));
					}
					if (func_310(*iParam0, iParam0->f_1))
					{
						func_313(iParam0, 10);
					}
				}
				break;
			case 12:
				if ((((func_334(iParam0->f_1) || func_335(*iParam0)) || func_318(&(iParam0->f_82)) < 5f) || func_319(Global_34)) || func_336(iParam0))
				{
					func_337(iParam0->f_1);
					func_297(iParam0, 8192);
					func_297(iParam0, 16384);
					func_195(&(iParam0->f_82));
					func_338(iParam0);
					func_339(iParam0);
					_0x85f500f4e24ca43e(iParam0->f_4, -1f);
					_0x9b9b9fa0ea283e3d(iParam0->f_4, -1f);
				}
				break;
		}
	}
}

bool func_158(int iParam0, int iParam1)
{
	iVar0 = func_43(iParam0);
	if (iVar0 != -1)
	{
		*iParam1 = 0;
		while (*iParam1 < 4)
		{
			if (&Global_1051439->f_3634[*iParam1] == iVar0)
			{
				return true;
			}
			*iParam1++;
		}
	}
	return false;
}

bool func_159(int iParam0, int iParam1)
{
	return func_144(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_160(int iParam0, int iParam1)
{
	func_128(&(Global_1051439->f_72[iParam0]->f_50), iParam1);
}

bool func_161(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

void func_162(int iParam0, int iParam1)
{
	func_145(&(Global_1051439->f_72[iParam0]->f_50), iParam1);
}

int func_163(int iParam0)
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
			return 437;
		case 0:
			return 502;
		case 4:
			return 345;
		case 7:
			return 426;
		default:
			break;
	}
	return -1;
}

int func_164(int iParam0)
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

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_123(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

bool func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 4:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 5:
			return false;
		case 8:
			return false;
		case 6:
			return false;
		case 1:
			return false;
		case 7:
			return false;
		default:
			break;
	}
	return false;
}

float func_167(int iParam0)
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

void func_168(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_6 < -1 || (uParam0->f_6 > -1 && uParam0->f_6 > 3))
	{
		return;
	}
	uParam0->f_6 = iParam1;
	if (bParam2)
	{
		func_131(uParam0, 0);
	}
}

void func_169(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 != 0)
	{
		uParam0->f_332[0] = func_341(iParam2, -915411861, 1, 0, 1, 0);
	}
	if (iParam1 != 0)
	{
		uParam0->f_332[1] = func_341(iParam1, -915411861, 1, 0, 1, 0);
	}
	if (iParam3 != 0)
	{
		uParam0->f_332[2] = func_341(iParam3, -915411861, 1, 0, 1, 0);
	}
	if (iParam4 != 0)
	{
		uParam0->f_332[3] = func_341(iParam4, -915411861, 1, 0, 1, 0);
	}
}

int func_170(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_225(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_200(iVar0, 2))
		{
			if (func_342(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
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
		func_228(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_171(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!func_166(*uParam0) && func_179(iVar0, *uParam0))
		{
		}
		else
		{
			func_343(uParam0->f_24[iVar0], iVar0, *uParam0);
		}
		iVar0++;
	}
}

void func_172(var uParam0, int iParam1)
{
	if (!func_166(iParam1))
	{
		func_344(uParam0, -686064834, "DRINK", 5);
		func_344(uParam0, -1971689092, "BOTTLE", 10);
		func_344(uParam0, -911874060, "shot", 11);
		func_344(uParam0, -615159064, "COIN", 2);
	}
	else
	{
		func_344(uParam0, 389673974, "KNIFE", 3);
		func_344(uParam0, 382293518, "FORK", 4);
		func_344(uParam0, -1638036806, "p_plate17x_PH_L_HAND", 9);
		func_344(uParam0, -975913766, "NAPKIN", 12);
		func_344(uParam0, -615159064, "COIN", 2);
		func_344(uParam0, -755866836, "p_spoon01x_PH_R_HAND", 0);
		func_344(uParam0, -686064834, "DRINK", 5);
		func_344(uParam0, -1971689092, "BOTTLE", 10);
		func_344(uParam0, -911874060, "shot", 11);
		switch (iParam1)
		{
			case 5:
				func_344(uParam0, -1375755183, "Main", 6);
				func_344(uParam0, -1621868985, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 2:
				func_344(uParam0, -999607173, "Main", 6);
				func_344(uParam0, -1763136482, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 4:
				func_344(uParam0, 2098372840, "Main", 6);
				func_344(uParam0, -1915884981, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 0:
				func_344(uParam0, 1257705601, "Main", 6);
				func_344(uParam0, -157095540, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 3:
				func_344(uParam0, -142475421, "Main", 6);
				func_344(uParam0, 1098641034, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 8:
				func_344(uParam0, -1103060970, "Main", 6);
				func_344(uParam0, 559479694, "p_bowl04x_stew_PH_L_HAND", 1);
				func_344(uParam0, 1857766991, "SIDE1", 7);
				func_344(uParam0, 1857766991, "SIDE2", 8);
				break;
			case 6:
				func_344(uParam0, -1776489172, "p_bowl04x_stew_PH_L_HAND", 1);
				break;
		}
	}
}

void func_173(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_345(iParam0, 13))
	{
		func_188(iParam0, 0);
	}
	else
	{
		func_346(iParam0, 0);
	}
	if (func_35(iParam0->f_6))
	{
		if (bParam2)
		{
			func_41(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_174(char* sParam0)
{
	fVar0 = _text_database_request(sParam0);
	if (fVar0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_175(var uParam0)
{
	switch (Local_18.f_192)
	{
		case 0:
			func_347(uParam0);
			if (func_271(uParam0->f_4, 0, 0, 0))
			{
				func_193(1);
			}
			if (Local_18.f_201 == 10)
			{
				func_193(2);
			}
			else if (Local_18.f_201 > 8 && Local_18.f_201 <= 24)
			{
				func_193(3);
			}
			break;
		case 1:
			func_348(uParam0);
			if (Global_1940018->f_51)
			{
				func_193(3);
			}
			if (!func_271(uParam0->f_4, 0, 0, 0))
			{
				func_193(0);
			}
			break;
		case 2:
			func_349(uParam0);
			if (Local_18.f_201 == 14)
			{
				func_193(3);
			}
			if (Local_18.f_201 == 8)
			{
				func_193(0);
			}
			break;
		case 3:
			func_193(5);
			break;
		case 4:
			if (Local_18.f_201 == 8)
			{
				func_193(0);
			}
			if (func_350(uParam0))
			{
				func_193(6);
			}
			break;
		case 5:
			if (func_351(uParam0))
			{
				func_193(6);
			}
			break;
		case 6:
			if (Local_18.f_201 == 9 || Local_18.f_201 == 14)
			{
				func_193(5);
			}
			if (Local_18.f_201 == 24 || Local_18.f_201 == 23)
			{
				func_193(7);
			}
			if (Local_18.f_201 == 8)
			{
				func_193(0);
			}
			break;
		case 7:
			func_193(8);
			break;
		case 8:
			func_193(0);
			break;
		case 12:
			break;
	}
	return 1;
}

int func_176(int iParam0)
{
	if (!does_entity_exist(iParam0->f_4))
	{
	}
	if (func_352(Global_34, 1, 0, 0) != -1569615261 && _0x7f9b9791d4cb71f6(iParam0->f_4, Global_34, 1, 0) == 1)
	{
		if (func_353(iParam0))
		{
			if (is_player_targetting_anything(player_id()))
			{
				if (func_354(iParam0->f_4, 1, 1, 1, 0, 0))
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
				if (iVar0 != Local_18.f_194)
				{
					iVar1 = get_ped_index_from_entity_index(iVar0);
					if (_0xa454d234e45bb6e5(iVar1, player_id()))
					{
						Local_18.f_194 = iVar0;
						Local_18.f_193++;
						if (func_355(iVar1))
						{
							Local_18.f_193 = 2;
						}
						if (!func_107(&(Local_18.f_195)))
						{
							func_88(&(Local_18.f_195), 1);
						}
						else
						{
							func_195(&(Local_18.f_195));
						}
					}
				}
			}
		}
	}
	if (Local_18.f_193 > 0)
	{
		if (func_199(&(Local_18.f_195)) >= 10f)
		{
			func_108(&(Local_18.f_195));
			Local_18.f_193 = 0;
		}
		if (Local_18.f_193 >= 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_177(var uParam0)
{
	iVar0 = 0;
	if (func_335(*uParam0))
	{
		iVar0 = 2;
		vVar1 = { get_entity_coords(uParam0->f_4, true, false) };
		if (Global_35.f_2 > (vVar1.z + 2f))
		{
			iVar0 = 3;
		}
	}
	else if (func_156(uParam0->f_4, Global_34, 1) > 25f)
	{
		iVar0 = 1;
	}
	switch (uParam0->f_58)
	{
		case 1:
			switch (uParam0->f_60)
			{
				case 2:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "UNAUTHORIZED_BEHIND_BAR", 0);
							uParam0->f_55 = 4;
							return 1;
						case 1:
							if (_0x50f124e6ef188b22(Global_34) && _0x6fb76442469abd68(Global_34) > 0.7f)
							{
								func_356(uParam0, func_357(36), 0);
							}
							else
							{
								func_356(uParam0, func_357(3), 0);
							}
							uParam0->f_55 = 5;
							return 1;
					}
					break;
				case 1:
					switch (uParam0->f_53)
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									func_356(uParam0, "NO_INSULTS_HERE", 0);
									break;
								case 1:
									func_356(uParam0, "WHATS_GOING_ON_OVER_THERE", 0);
									break;
								case 3:
									func_356(uParam0, "WHATS_GOING_ON_UPSTAIRS", 0);
									break;
							}
							uParam0->f_55 = 5;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "PUT_WEAPON_AWAY", 0);
							uParam0->f_55 = 5;
							return 1;
					}
					break;
				case 11:
					switch (uParam0->f_53)
					{
						case 0:
							if (_0x50f124e6ef188b22(Global_34) && _0x6fb76442469abd68(Global_34) > 0.7f)
							{
								func_356(uParam0, func_357(36), 0);
							}
							else
							{
								func_356(uParam0, func_357(4), 0);
							}
							uParam0->f_55 = 5;
							return 1;
					}
					break;
				case 8:
					switch (uParam0->f_53)
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									func_356(uParam0, "NO_FIGHTING_HERE", 0);
									break;
								case 1:
									func_356(uParam0, "WHATS_GOING_ON_OVER_THERE", 0);
									break;
								case 2:
									func_356(uParam0, "WHATS_GOING_ON_UPSTAIRS", 0);
									break;
							}
							uParam0->f_55 = 5;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (uParam0->f_60)
			{
				case 1:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "COOL_IT_BAR", 0);
							uParam0->f_55 = 5;
							return 1;
					}
					break;
				case 3:
				case 6:
				case 7:
				case 8:
					switch (uParam0->f_53)
					{
						case 0:
							if (_0x50f124e6ef188b22(Global_34) && _0x6fb76442469abd68(Global_34) > 0.7f)
							{
								func_356(uParam0, func_357(36), 0);
							}
							else
							{
								func_356(uParam0, func_357(4), 0);
							}
							uParam0->f_55 = 4;
							return 1;
					}
					break;
			}
			break;
		case 3:
			switch (uParam0->f_60)
			{
				case 1:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "COOL_IT_BAR_ESCALATED", 0);
							uParam0->f_55 = 15;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "PUT_WEAPON_AWAY_ESCALATED", 0);
							uParam0->f_55 = 5;
							return 1;
						default:
							break;
					}
					break;
				case 11:
					func_356(uParam0, "MISBEHAVIOR_HIGH", 0);
					uParam0->f_55 = 15;
					return 1;
			}
			break;
		case 4:
			switch (uParam0->f_60)
			{
				case 1:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, func_357(26), 0);
							uParam0->f_55 = 1;
							return 1;
						default:
							func_356(uParam0, func_357(27), 0);
							uParam0->f_55 = 60;
							return 1;
					}
					break;
				case 10:
					switch (uParam0->f_53)
					{
						case 0:
							func_356(uParam0, "NO_SERVICE_WEAPON_EQUIPPED", 0);
							uParam0->f_55 = 10;
							return 1;
						case 1:
							func_356(uParam0, func_357(26), 0);
							uParam0->f_55 = 1;
							return 1;
						default:
							func_356(uParam0, func_357(27), 0);
							uParam0->f_55 = 60;
							return 1;
					}
					break;
			}
			break;
		case 5:
			switch (uParam0->f_59)
			{
				case 1:
				case 2:
					switch (uParam0->f_61)
					{
						case 10:
							switch (uParam0->f_53)
							{
								case 0:
									func_356(uParam0, "END_MISBEHAVIOR", 0);
									uParam0->f_55 = 5;
									return 1;
								default:
									break;
							}
							break;
					}
					break;
				case 3:
				case 4:
					switch (uParam0->f_61)
					{
						case 8:
						case 10:
						case 11:
							switch (uParam0->f_53)
							{
								case 0:
									func_356(uParam0, "END_MISBEHAVIOR_ESCALATED", 0);
									uParam0->f_55 = 5;
									return 1;
								case 1:
									func_356(uParam0, "", 0);
									uParam0->f_55 = -1;
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

int func_178(var uParam0)
{
	if (_0x50f124e6ef188b22(Global_34) && _0x6fb76442469abd68(Global_34) > 0.7f)
	{
		func_356(uParam0, func_358(36), 0);
		return 1;
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
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

bool func_180(int iParam0)
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

void func_181(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = { 0f, 0f, 120f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 4:
			*uParam2 = { 0f, 0f, 60f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), -0.2f, 0.88f, -1.05f) };
			break;
		case 2:
			*uParam2 = { 0f, 0f, -60f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), -0.1f, 0f, -1.05f) };
			break;
		case 3:
			*uParam2 = { 0f, 0f, 110f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 5:
			*uParam2 = { 0f, 0f, 40f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 6:
			*uParam2 = { 0f, 0f, -40f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), 0f, -0.1f, -1.05f) };
			break;
		case 8:
			*uParam2 = { 0f, 0f, -60f };
			*uParam1 = { _get_object_offset_from_coords(func_87(iParam0), func_359(iParam0), 0f, -0.1f, -1.05f) };
			break;
	}
}

bool func_182(var uParam0, int iParam1, var uParam2)
{
	vVar0 = { func_87(iParam1) };
	vVar0.f_2 = (vVar0.z - 0.1f);
	iVar3 = 0;
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_object(uParam0->f_2, vVar0, false, true, false, false, true);
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
			if (func_166(iParam1))
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
			if (func_166(iParam1))
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

void func_183(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_184(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_185(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_186(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_360(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_187(var uParam0)
{
	switch (*uParam0)
	{
		case 2:
			enable_control_action(0, -1616532217, true);
			if (func_361(func_121(), uParam0->f_322) != 2)
			{
				func_362(uParam0->f_8[0], "SERVICE_WHISKEY", &(uParam0->f_332[3]), 0, -163964935, 0, 0, 5, 1);
			}
			else
			{
				func_362(uParam0->f_8[0], "SERVICE_WHISKEY", 100, 0, -163964935, 0, 0, 5, 1);
			}
			func_363(uParam0->f_8[0], -1073177089, -1, -1, 0, 0);
			uParam0->f_8[0]->f_10 = 1;
			func_362(uParam0->f_8[1], "SERVICE_BEER", &(uParam0->f_332[2]), 0, -1616532217, 0, 0, 5, 1);
			func_363(uParam0->f_8[1], -1073177089, -1, -1, 0, 0);
			uParam0->f_8[1]->f_10 = 1;
			func_189(uParam0->f_8[2], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
			func_363(uParam0->f_8[2], -1073177089, -1, -1, 1, 0);
			uParam0->f_8[2]->f_10 = 1;
			if (uParam0->f_5)
			{
				if (!func_133(uParam0->f_323, 2))
				{
					func_362(uParam0->f_8[4], &(uParam0->f_327[0]), &(uParam0->f_332[0]), 0, -163964935, 0, 0, 5, 1);
					func_363(uParam0->f_8[4], -1721306936, -1, -1, 0, 0);
					uParam0->f_8[4]->f_10 = 1;
				}
				else
				{
					func_173(uParam0->f_8[4], 0, 0);
					func_192(uParam0->f_8[4], 1);
				}
				func_362(uParam0->f_8[3], &(uParam0->f_327[1]), &(uParam0->f_332[1]), 0, -1616532217, 0, 0, 5, 1);
				func_363(uParam0->f_8[3], -1721306936, -1, -1, 0, 0);
				uParam0->f_8[3]->f_10 = 1;
				func_189(uParam0->f_8[5], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
				func_363(uParam0->f_8[5], -1721306936, -1, -1, 1, 0);
				uParam0->f_8[5]->f_10 = 1;
			}
			if (func_133(uParam0->f_1, 128))
			{
				func_362(uParam0->f_8[7], "SERVICE_BATH", 0, 0, -1616532217, 0, 0, 5, 1);
				func_363(uParam0->f_8[7], 1651111721, -1, -1, 0, 0);
				uParam0->f_8[7]->f_10 = 1;
				func_362(uParam0->f_8[6], "SERVICE_ROOM", func_341(1334501804, -915411861, 1, 0, 1, 0), 0, -163964935, 0, 0, 5, 1);
				func_363(uParam0->f_8[6], 1651111721, -1, -1, 0, 0);
				uParam0->f_8[6]->f_10 = 1;
				func_189(uParam0->f_8[8], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
				func_363(uParam0->f_8[8], 1651111721, -1, -1, 1, 0);
				uParam0->f_8[8]->f_10 = 1;
			}
			func_189(uParam0->f_8[11], "SERVICE_TOGGLE_DRINKS", 0, -1616532217, 0, 0, 0, 1, 0);
			func_363(uParam0->f_8[11], -1, -1, -1073177089, 0, 0);
			uParam0->f_8[11]->f_10 = 1;
			if (uParam0->f_5)
			{
				func_189(uParam0->f_8[9], "SERVICE_TOGGLE_FOOD", 0, -163964935, 0, 0, 0, 1, 0);
				func_363(uParam0->f_8[9], -1, -1, -1721306936, 0, 0);
				uParam0->f_8[9]->f_10 = 1;
			}
			if (func_133(uParam0->f_1, 128))
			{
				func_189(uParam0->f_8[10], "SERVICE_TOGGLE_LODGING", 0, 648122183, 0, 0, 0, 1, 0);
				func_363(uParam0->f_8[10], -1, -1, 1651111721, 0, 0);
				uParam0->f_8[10]->f_10 = 1;
			}
			break;
	}
}

void func_188(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_189(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_35(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_92(iParam0->f_6, iParam0->f_5, iParam0->f_19, 0);
			}
			else
			{
				func_364(iParam0->f_6, iParam0->f_5, 0);
			}
			func_36(iParam0->f_6, 0, 1, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_365(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_190(var uParam0)
{
	func_363(uParam0->f_8[12], -1, -1, 1651111721, 0, 0);
	if (func_133(uParam0->f_1, 128))
	{
		func_363(uParam0->f_8[10], -1, -1, 1651111721, 0, 0);
		func_362(uParam0->f_8[11], "SERVICE_BATH", 0, 0, -1616532217, 0, 0, 5, 1);
		func_363(uParam0->f_8[11], 1651111721, -1, -1, 0, 0);
		uParam0->f_8[11]->f_10 = 1;
		func_362(uParam0->f_8[9], "SERVICE_ROOM", func_341(1334501804, -915411861, 1, 0, 1, 0), 0, -163964935, 0, 0, 5, 1);
		func_363(uParam0->f_8[9], 1651111721, -1, -1, 0, 0);
		uParam0->f_8[9]->f_10 = 1;
		func_189(uParam0->f_8[10], "SERVICE_BACK", 0, 648122183, 0, 0, 0, 1, 0);
		func_363(uParam0->f_8[10], 1651111721, -1, -1, 1, 0);
		uParam0->f_8[10]->f_10 = 1;
	}
	if ((Global_1915715->f_22449.f_15 || Global_1915715->f_22449.f_17) || _0x7c7e4ab748ea3b07())
	{
		func_173(uParam0->f_8[11], 0, 0);
	}
	if (Global_1915715->f_22449.f_17)
	{
		func_173(uParam0->f_8[9], 0, 0);
	}
}

void func_191(int* iParam0)
{
	func_189(iParam0, "", 0, -163964935, 0, 0, 0, 1, 0);
}

void func_192(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_345(iParam0, 4))
		{
			func_41(&(iParam0->f_6), 1, 1);
			func_188(iParam0, 4);
		}
	}
	else if (func_345(iParam0, 4))
	{
		func_346(iParam0, 4);
		func_188(iParam0, 14);
	}
}

void func_193(int iParam0)
{
	if (Local_18.f_192 != iParam0)
	{
		func_108(&(Local_18.f_67));
		if (((iParam0 != 1 && Local_18.f_192 != 1) && iParam0 != 2) && Local_18.f_192 != 2)
		{
			func_108(&(Local_18.f_79));
		}
		func_366(&Local_18);
		Local_18.f_192 = iParam0;
	}
}

void func_194()
{
	Local_18.f_191 = 0;
}

void func_195(var uParam0)
{
	func_367(uParam0, 0f);
}

void func_196(int iParam0)
{
	if (!func_368(iParam0))
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

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1051439->f_4682[iVar1]->f_2 != 0 && (&Global_1051439->f_4682[iVar1] == iParam0 || Global_1051439->f_4682[iVar1]->f_1 == iVar0))
		{
			if (Global_1051439->f_4682[iVar1]->f_3 < (get_frame_count() - 1))
			{
				if (Global_1051439->f_4682[iVar1]->f_4 > 0f)
				{
					if (iVar0 == 30 || iVar0 == 31)
					{
						iVar2 = 0;
						while (iVar2 < 4)
						{
							if (&Global_1051439->f_3634[iVar2] == -1 || ((&Global_1051439->f_4682[iVar1] != -1 && &Global_1051439->f_4682[iVar1] != &Global_1051439->f_3634[iVar2]) && &Global_1051439->f_4682[iVar1] != Global_1051439->f_3634[iVar2]->f_9))
							{
							}
							else if (vdist2(Global_35, Global_1051439->f_3634[iVar2]->f_2) > Global_1051439->f_4682[iVar1]->f_4)
							{
								Global_1051439->f_4682[iVar1]->f_2 = 0;
							}
							else
							{
								iVar2++;
							}
						}
					}
					else if (vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > Global_1051439->f_4682[iVar1]->f_4)
					{
						Global_1051439->f_4682[iVar1]->f_2 = 0;
					}
				}
				else
				{
					Global_1051439->f_4682[iVar1]->f_2 = 0;
				}
			}
			return Global_1051439->f_4682[iVar1]->f_2;
		}
		iVar1++;
	}
	return 0;
}

float func_199(var uParam0)
{
	if (!func_107(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_229(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_369() - uParam0->f_1);
}

bool func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_201(int iParam0)
{
	iVar0 = func_371(func_370(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_202(int iParam0)
{
	if (func_203(81053684, iParam0))
	{
		return true;
	}
	if (func_203(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0, int iParam1)
{
	iVar1 = func_371(func_370(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_372(iVar0) == iParam0 || (iParam0 == 81053684 && func_205(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_204(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_371(iParam0, 1)]);
}

bool func_205(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return func_374(func_373(iParam0), iParam1);
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

int func_206(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_375(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_207(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_208(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_209(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_210(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_211(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_212(int iParam0, int iParam1)
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

void func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_376(iParam0, iParam6);
	func_377(iParam0, iParam5);
	func_378(iParam0, iParam4);
	func_379(iParam0, iParam3);
	func_380(iParam0, iParam2);
	func_381(iParam0, iParam1);
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_215(int iParam0)
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

void func_216(bool bParam0)
{
	if (bParam0)
	{
		func_382(1);
	}
	else
	{
		Local_18.f_198++;
	}
	func_383(&Local_18);
}

int func_217(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_384(2084597891, 1, 0) };
	Var6 = { func_385(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_386(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_387(iVar0, Var22);
	}
	return iVar0;
}

void func_218(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_93() < iParam0)
	{
		iParam0 = func_93();
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_67(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_219(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_388(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		func_389(4);
	}
	func_389(2);
	set_bit(&(Global_1957959->f_1), 0);
}

int func_222(var uParam0)
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

void func_223(var uParam0, var uParam1, var uParam2, int iParam3)
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

float func_224(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_225(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

char* func_226(int iParam0)
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

char* func_227(int iParam0)
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

void func_228(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_48(iParam0, 1);
	func_184(iParam0, 1);
	func_185(iParam0, 128);
}

bool func_229(var uParam0)
{
	return func_231(*uParam0, 2);
}

int func_230()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_231(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_232(int iParam0)
{
	iVar0 = func_390(iParam0);
	if (func_391())
	{
		Global_1940085->f_9 = (Global_1940085->f_9 + func_392(iVar0));
		if (Global_1940085->f_9 > 1f)
		{
			Global_1940085->f_9 = 1f;
		}
	}
	Global_1940085->f_3 = get_game_timer();
}

bool func_233(int iParam0)
{
	return false;
}

void func_234(var uParam0)
{
	func_182(uParam0->f_157[5], *uParam0, uParam0);
	func_182(uParam0->f_157[11], *uParam0, uParam0);
	func_182(uParam0->f_157[2], *uParam0, uParam0);
	func_182(uParam0->f_157[10], *uParam0, uParam0);
	set_anim_scene_entity(&(uParam0->f_24[6]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[7]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[9]), "BARTENDER", uParam0->f_13, 0);
	set_anim_scene_entity(&(uParam0->f_24[8]), "BARTENDER", uParam0->f_13, 0);
}

bool func_235(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case -1498871949:
		case -1283370018:
		case -822124724:
		case -818346432:
		case -624685730:
		case -610395813:
		case -545779394:
		case 348064119:
		case 447784640:
		case 827714260:
		case 1269193435:
		case 1532695640:
		case 1739830455:
		case 1847740267:
		case 1958345007:
		case 2103594888:
			return 0;
	}
	return 1;
}

float func_237(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = to_float(get_entity_health(Global_34));
			fVar1 = to_float(get_entity_max_health(Global_34, false));
			break;
		case 1:
			fVar0 = _get_ped_stamina(Global_34);
			fVar1 = _get_ped_max_stamina(Global_34);
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

void func_238(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0x16f2c8c084ab2092(iVar0));
	}
	iVar1 = func_393(2);
	func_394((fParam0 * IntToFloat(iVar1)), 0);
}

void func_239(float fParam0, bool bParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(10);
	}
	iVar0 = func_395(2);
	func_396((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_240(float fParam0)
{
	iVar0 = player_ped_id();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = to_float(_0xfc3b580c4380b5b7(iVar0));
	}
	iVar1 = func_397(2);
	func_398((fParam0 * IntToFloat(iVar1)), 0);
}

float func_241(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_242(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_399(iParam0, fParam1, 1);
	}
	func_401(iParam0, (func_400(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_243(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_402())
	{
		func_403(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_404(109, 0);
		}
	}
}

float func_244(float fParam0, int iParam1)
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

int func_245(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_405(iParam0, fParam1, bParam2, bParam3);
}

void func_246(var uParam0)
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_406(-1196069774, -179343615, 8100);
			break;
	}
}

void func_247(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_205(iParam0, -537818634))
	{
		func_68(func_67(-704089207), 1);
	}
	if (func_205(iParam0, -1457797660))
	{
		func_68(func_67(-1909697259), 1);
	}
	if (func_205(iParam0, 1573112293))
	{
		func_408(func_407(iParam0), 1);
	}
	if (func_205(iParam0, 1939071949))
	{
		func_68(func_70(1368284188, -939665347), 1);
	}
	if (func_205(iParam0, 1992556171))
	{
		func_68(func_67(-1295035230), 1);
	}
	if (func_205(iParam0, 1239889275))
	{
		func_68(func_67(905765416), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_68(func_70(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case -611782825:
			func_68(func_70(1368284188, -1875859641), 1);
			break;
		case 299161628:
			func_68(func_70(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_68(func_70(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_68(func_70(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_68(func_70(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_68(func_70(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -1871448371:
		case -834705084:
		case -623409049:
			func_68(func_70(1368284188, 497247514), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_68(func_70(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_68(func_70(1368284188, -208442209), 1);
			break;
	}
	if (func_2() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_68(func_70(1368284188, 595572217), 1);
		}
	}
	if (bParam1)
	{
		func_68(func_67(704570463), 1);
	}
	func_409(iParam0, iParam3);
}

void func_248(var uParam0)
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

bool func_249(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

bool func_250(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_251(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1893775)[iParam0]->f_2);
}

void func_252(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (!func_250(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

void func_253(int iParam0)
{
	if (!func_250(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

int func_254(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

bool func_255(int iParam0)
{
	return iParam0 != 0;
}

int func_256(int iParam0, bool bParam1)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (!func_134(iParam0, 2))
	{
		return 0;
	}
	if (func_254(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_123(iParam0)))
	{
		return 1;
	}
	if (func_134(iParam0, 1) && !bParam1)
	{
		func_411(iParam0, 128);
		return 1;
	}
	func_252(iParam0, 129);
	func_253(iParam0);
	_0xfc77c5b44d5ff7c0(func_123(iParam0));
	func_412(iParam0, 0);
	return 1;
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_258(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_413(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_414(iParam0, uVar0, iVar1, bParam2);
}

int func_259()
{
	return Global_1903136->f_379;
}

bool func_260(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1940258->f_26))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_26))
		{
			*iParam1 = Global_1940258->f_26;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1940258->f_27))
	{
		if (!bParam0 || is_ped_human(Global_1940258->f_27))
		{
			if (_is_ped_hogtied(Global_1940258->f_27) || is_entity_dead(Global_1940258->f_27))
			{
				*iParam2 = Global_1940258->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258->f_24 && !is_ped_injured(Global_34))
	{
		iVar1 = _get_lassoed_entity(Global_34);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_261(int iParam0)
{
	return func_133((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_262(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_415(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_416(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_263(int iParam0, bool bParam1, bool bParam2)
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
		if (func_265())
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
	if (iParam0 == 0 && func_269(func_268(0)))
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
	switch (func_417(func_268(0)))
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

bool func_264(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_265()
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
	if (!func_269(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_266()
{
	if (func_418(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_419(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_267(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = func_420(iParam0);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return func_421(iVar0);
}

struct<2> func_268(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_269(struct<2> Param0)
{
	if (!func_422(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_423(Param0))
	{
		return false;
	}
	return true;
}

int func_270(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_424(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_271(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_425(16))
	{
		return Global_1940258->f_51 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_426(16);
					Global_1940258->f_51 = get_ped_index_from_entity_index(iVar0);
					if (Global_1940258->f_51 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_272(var uParam0)
{
	if (Global_1915715->f_22483 != -1 && func_132(uParam0->f_325, 0) == Global_1915715->f_22483)
	{
		func_189(uParam0->f_8[11], &(Global_1915715->f_22479), 0, -1616532217, 0, 0, 0, 1, 0);
		uParam0->f_6 = 1;
	}
	else
	{
		func_192(uParam0->f_8[11], 1);
		uParam0->f_6 = 0;
	}
}

void func_273(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_274(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_275(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_427(iParam0, iParam1))
		{
			if (!func_144(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_146(uParam2, 0, 0, 1, 0);
				func_145(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_144(iParam1->f_10, 1))
		{
			func_428(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_128(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_276(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_144(iParam4, 32);
		func_429(iParam1, uParam2, 0);
		iVar5 = func_430(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		iVar6 = 0;
		if (!func_144(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_144(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_144(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_144(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_144(iParam4, 8388608) || func_144(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_144(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_144(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_279(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_279(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_144(iParam4, 67108864))
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
				iParam6 = func_431(uParam0);
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
			if (func_144(iParam4, 268435456))
			{
				iVar8 = func_432(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_433(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_279(iParam1, 23))
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
			if (func_144(iParam4, 2) || func_144(iParam4, 16))
			{
				func_278(*uParam0, 1, 1);
			}
			else
			{
				func_278(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_277(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_278(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_279(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_280(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_186(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_144(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_281(int iParam0)
{
	if (func_144(iParam0, 4))
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
	if (func_144(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_144(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_282(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_93();
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_34);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = _is_ped_carrying(Global_34);
	fVar12 = -1f;
	if (func_107(&(iParam1->f_19)))
	{
		fVar12 = func_199(&(iParam1->f_19));
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
		bVar4 = func_35((*uParam4)[iVar0]->f_6);
		func_434(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_435(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (bVar4)
			{
				if ((*uParam4)[iVar0]->f_11.f_2 != -1)
				{
					_uiprompt_add_group_link((*uParam4)[iVar0]->f_11, (*Global_1951255)[(*uParam4)[iVar0]->f_6]->f_3, (*uParam4)[iVar0]->f_11.f_2);
					Jump @695; //curOff = 356
				}
				else if ((*uParam4)[iVar0]->f_11.f_4)
				{
					_uiprompt_add_group_return_link((*uParam4)[iVar0]->f_11, (*Global_1951255)[(*uParam4)[iVar0]->f_6]->f_3);
				}
				else if (!bParam18 && !bVar5)
				{
					if (func_436(iParam12, (*uParam4)[iVar0]->f_6))
					{
						if (!bVar7)
						{
							func_146(uParam4, 0, 0, 1, bParam5);
						}
						if (bVar6)
						{
							func_126(uParam4, 0, 0);
						}
						if (is_bit_set(uParam4[iVar0], 11))
						{
							func_429(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
									task_play_anim(Global_34, (*uParam4)[iVar0]->f_16, (*uParam4)[iVar0]->f_17, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
								}
							}
						}
						if (func_437(iParam1, fParam6, iParam1->f_9))
						{
							func_195(&(iParam1->f_24));
							if (bVar6)
							{
								func_126(uParam4, 0, 0);
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
					func_438(iParam1, fParam2);
				}
				return bVar5;
			}
		}
	}
}

void func_283(var uParam0)
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

void func_284(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_439((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_438(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_285(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_440(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_441(iParam1, 0);
				func_429(iParam1, uParam2, func_279(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_286(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_195(&(iParam1->f_24));
			return 0;
		}
		else if (func_107(&(iParam1->f_24)))
		{
			func_108(&(iParam1->f_24));
			return 0;
		}
	}
	if (!func_107(&(iParam1->f_24)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_34) || is_scripted_speech_playing(Global_34))
		{
			return 0;
		}
	}
	return func_442(&(iParam1->f_24), fParam2);
	return 1;
}

void func_287(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_434(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_288(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_289(int* iParam0, var uParam1)
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
	func_429(iParam0, uParam1, 1);
	func_146(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 27);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var28, 22);
		iVar0++;
	}
}

void func_290(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	if (&Global_1915715->f_21863[iParam0] == 0)
	{
		return;
	}
	Global_1915715->f_21863[iParam0] = 0;
}

bool func_291(int iParam0)
{
	switch (*iParam0)
	{
		case -1:
		case 5:
		case 9:
		case 11:
		case 12:
		case 13:
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
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return true;
}

bool func_292(int iParam0)
{
	return func_443(iParam0, 131072);
}

bool func_293(int iParam0)
{
	return func_443(iParam0, 8388608);
}

bool func_294(int iParam0)
{
	return func_443(iParam0, 1048576);
}

bool func_295(int iParam0)
{
	return (func_443(iParam0, 67108864) || func_443(iParam0, 2048));
}

bool func_296(int iParam0)
{
	if (!_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1051439->f_72[iParam0]->f_24, Global_35);
	return false;
}

void func_297(int iParam0, int iParam1)
{
	if (func_320(iParam0, iParam1))
	{
		func_128(&(iParam0->f_91), iParam1);
	}
}

void func_298(int iParam0, int iParam1)
{
	if (!func_320(iParam0, iParam1))
	{
		func_145(&(iParam0->f_91), iParam1);
	}
}

void func_299(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

bool func_300()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_301(int iParam0, var uParam1)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return true;
	}
	if (func_2() != -1)
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			*uParam1 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1915715->f_3[iParam0]->f_23))
	{
		*uParam1 = get_ped_index_from_entity_index(Global_1915715->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_302(int iParam0)
{
	return func_443(iParam0, 33554432);
}

bool func_303(int iParam0)
{
	if (!does_entity_exist(iParam0) || func_445(iParam0, 0))
	{
		return true;
	}
	if (((func_446(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

void func_304(int iParam0)
{
	func_447(iParam0->f_43, 0, 0);
	stop_current_playing_speech(iParam0->f_4, 0);
}

bool func_305(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 33:
		case 37:
		case 39:
			return true;
		default:
			break;
	}
	return false;
}

char* func_306(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return "TRAPPAU";
		case 39:
			return "NATURAU";
		case 37:
			return "MAGGAUD";
		case 33:
			return "COOKAUD";
		default:
			break;
	}
	return "";
}

int func_307(int iParam0)
{
	if (!func_129(Global_34, 0))
	{
		return 0;
	}
	if (*iParam0 == 9)
	{
		return 1;
	}
	if (func_448(iParam0->f_4, *iParam0) || iParam0->f_49 == 10)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	if (iParam0->f_58 > 0 && iParam0->f_58 != 5)
	{
		return 1;
	}
	return 0;
}

bool func_309(int iParam0)
{
	iVar0 = func_352(Global_34, 1, 0, 0);
	if (iVar0 != -1569615261)
	{
		if (iVar0 != 1549070292 && (func_449(iVar0) || func_205(iVar0, -1653669750)))
		{
			return false;
		}
	}
	if (func_450(iParam0))
	{
		return true;
	}
	if (func_271(iParam0->f_4, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if (func_451(iParam1))
	{
		return false;
	}
	return func_443(Global_1915715->f_3[iParam0]->f_9, 1024);
}

void func_311(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_145(Global_1915715->f_21863[iParam0], 1);
}

int func_312(int iParam0)
{
	if (!does_entity_exist(iParam0->f_4))
	{
		return 0;
	}
	if (func_310(*iParam0, iParam0->f_1))
	{
		return 0;
	}
	if (func_335(*iParam0))
	{
		if (_0x7f9b9791d4cb71f6(iParam0->f_4, Global_34, 0, 0) != 1)
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (iParam0->f_40)
	{
		iVar1 = func_452(iParam0);
		iVar0 = func_453(iParam0, iVar0, iVar1);
	}
	iVar2 = _get_first_entity_ped_is_carrying(Global_34);
	if (_is_ped_carrying(Global_34))
	{
		if (does_entity_exist(iVar2) && is_entity_a_ped(iVar2))
		{
			if (is_ped_human(get_ped_index_from_entity_index(iVar2)))
			{
				if (_is_ped_hogtied(get_ped_index_from_entity_index(iVar2)) && !is_entity_dead(iVar2))
				{
					iVar0 = func_453(iParam0, iVar0, 6);
				}
				else if (is_entity_dead(iVar2))
				{
					iVar0 = func_453(iParam0, iVar0, 7);
				}
			}
			else if (((((*iParam0 != 10 && *iParam0 != 15) && *iParam0 != 14) && *iParam0 != 2) && *iParam0 != 1) && *iParam0 != 38)
			{
				iVar0 = func_453(iParam0, iVar0, 3);
			}
		}
	}
	if (func_352(Global_34, 1, 0, 0) != -1569615261)
	{
		if (iParam0->f_58 == 0)
		{
			if (!is_player_targetting_anything(player_id()))
			{
				bVar3 = true;
			}
		}
		if (!is_player_control_on(player_id()))
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
			if (func_353(iParam0))
			{
				if (!(func_454(*iParam0) && iParam0->f_58 == 0) || func_354(iParam0->f_4, 1, 1, 1, 0, 0))
				{
					iVar0 = func_453(iParam0, iVar0, 9);
				}
				if (Global_1940258->f_19 || ((iParam0->f_60 == 9 || iParam0->f_60 == 12) && _0x285d36c5c72b0569(Global_34) < IntToFloat(iParam0->f_55)))
				{
					iVar0 = func_453(iParam0, iVar0, 12);
				}
			}
		}
	}
	if (iVar0 != 9 && iVar0 != 12)
	{
		if (func_455(Global_34, 0) || (!func_456(player_id(), 0, 0, 1) && func_144(Global_1051439->f_72[*iParam0]->f_50, 1)))
		{
			iVar0 = func_453(iParam0, iVar0, 8);
		}
	}
	if (iParam0->f_58 > 0)
	{
		if (!func_107(&(iParam0->f_88)))
		{
			func_88(&(iParam0->f_88), 1);
		}
		else if (func_199(&(iParam0->f_88)) > 4f)
		{
			if (_0xb7dbb2986b87e230(iParam0->f_4, 5f))
			{
				iVar0 = func_453(iParam0, iVar0, 12);
			}
			func_195(&(iParam0->f_88));
		}
	}
	if (func_139(Global_34, Global_1051439->f_72[*iParam0]->f_27, 1, 0) && !func_457(0))
	{
		iVar0 = func_453(iParam0, iVar0, 2);
	}
	if (func_458(iParam0) && func_49(&iVar4))
	{
		if (func_205(iVar4, 160827531))
		{
			iVar0 = func_453(iParam0, iVar0, 4);
		}
		else if (func_205(iVar4, -1303648999))
		{
			iVar0 = func_453(iParam0, iVar0, 5);
		}
		else
		{
			iVar0 = func_453(iParam0, iVar0, 5);
		}
	}
	if (func_456(player_id(), 0, 0, 1))
	{
		iVar0 = func_453(iParam0, iVar0, 13);
	}
	return iVar0;
}

void func_313(int iParam0, int iParam1)
{
	if (iParam0->f_49 != iParam1)
	{
		func_459(iParam0);
		iParam0->f_49 = iParam1;
		iParam0->f_12 = 0;
		iParam0->f_11 = 0;
		func_366(iParam0);
	}
}

void func_314(int iParam0)
{
	if (iParam0->f_51 != 0)
	{
		iParam0->f_51 = 0;
	}
}

void func_315(int iParam0)
{
	func_297(iParam0, 64);
	func_297(iParam0, 32);
	func_297(iParam0, 256);
	func_297(iParam0, 8192);
}

void func_316(int iParam0)
{
	if (func_2() == 0)
	{
		iVar0 = &Global_17411.f_2763[iParam0->f_1];
		func_57(&(iParam0->f_1), -15);
	}
	else
	{
		iVar0 = &Global_5860.f_1350[iParam0->f_1];
	}
	if (!func_460(iVar0))
	{
		if (func_461(iParam0))
		{
			iParam0->f_42 = 5;
		}
		else
		{
			iParam0->f_42 = 0;
		}
	}
	else if (func_331(iParam0->f_1, 8) || func_2() == 0)
	{
		func_462(iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6);
		if (iVar4 >= 28)
		{
			iParam0->f_42 = 6;
		}
		else if (iVar4 >= 7)
		{
			iParam0->f_42 = 5;
		}
		else if (iVar4 > 0)
		{
			iParam0->f_42 = 4;
		}
		else if (iVar3 > 0)
		{
			iParam0->f_42 = 3;
		}
		else if (iVar2 > 0)
		{
			iParam0->f_42 = 2;
		}
		else if (iVar1 > 0)
		{
			iParam0->f_42 = 1;
		}
	}
}

void func_317(int iParam0)
{
	if (func_331(iParam0->f_1, 64))
	{
		if (!func_461(iParam0))
		{
			func_463(iParam0->f_4, Global_34, iParam0->f_4, 0, 0, 10);
		}
	}
	func_464(iParam0->f_1, 64);
}

float func_318(var uParam0)
{
	if (!func_107(uParam0))
	{
		return 0f;
	}
	if (func_229(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_369() - uParam0->f_1);
}

bool func_319(int iParam0)
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

bool func_320(int iParam0, int iParam1)
{
	return func_144(iParam0->f_91, iParam1);
}

void func_321(int iParam0)
{
	func_299(iParam0, 134217728);
}

void func_322(int iParam0)
{
	iParam0->f_59 = 0;
	iParam0->f_61 = 0;
}

bool func_323(int iParam0)
{
	return iParam0 != 0;
}

bool func_324(int iParam0)
{
	if (func_465(iParam0->f_1))
	{
		func_466(iParam0, 0);
		return true;
	}
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				func_466(iParam0, 1);
			}
			break;
		case 1:
			if (func_467(iParam0))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
			}
			else
			{
				func_468(iParam0);
			}
			break;
		case 4:
			if (func_469(iParam0, iParam0->f_43))
			{
				func_466(iParam0, 6);
			}
			else
			{
				func_468(iParam0);
				func_466(iParam0, 1);
			}
			break;
		case 6:
			func_466(iParam0, 0);
			return true;
	}
	return false;
}

bool func_325(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				func_466(iParam0, 1);
			}
			break;
		case 1:
			if (func_470(iParam0))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
			}
			else
			{
				func_468(iParam0);
			}
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			return true;
	}
	return false;
}

var func_326(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_21);
	return StackVal;
}

void func_327(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				if (func_471())
				{
					if ((func_62(iParam0->f_15, 0) && func_472(&(iParam0->f_67), 5f)) && ((!func_107(&(iParam0->f_70)) && func_472(&(iParam0->f_76), 0.7f)) || func_472(&(iParam0->f_70), 85f)))
					{
						if (iParam0->f_12)
						{
							if (func_62(iParam0->f_13, 0))
							{
								if (func_62(iParam0->f_14, 0) && iParam0->f_14 == iParam0->f_13)
								{
									iParam0->f_11++;
								}
								else
								{
									iParam0->f_11 = 1;
								}
							}
							func_383(iParam0);
							iParam0->f_12 = 0;
							func_466(iParam0, 3);
						}
						else
						{
							func_466(iParam0, 2);
						}
					}
					else if (func_472(&(iParam0->f_67), 30f))
					{
						func_466(iParam0, 1);
					}
				}
				else
				{
					if (func_107(&(iParam0->f_70)))
					{
						func_108(&(iParam0->f_70));
					}
					if (iParam0->f_12)
					{
						if (func_62(iParam0->f_13, 0))
						{
							if (func_62(iParam0->f_14, 0) && iParam0->f_14 == iParam0->f_13)
							{
								iParam0->f_11++;
							}
							else
							{
								iParam0->f_11 = 1;
							}
						}
						func_383(iParam0);
						iParam0->f_12 = 0;
					}
					if (!func_107(&(iParam0->f_67)))
					{
						func_88(&(iParam0->f_67), 0);
					}
					else if (func_472(&(iParam0->f_67), 30f))
					{
						func_466(iParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (func_473(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 2:
			if (func_474(iParam0, 1))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
				func_195(&(iParam0->f_70));
			}
			break;
		case 3:
			iParam0->f_2 = 1;
			if (func_475(iParam0))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
				func_195(&(iParam0->f_79));
			}
			break;
		case 4:
			if (func_469(iParam0, iParam0->f_43))
			{
				func_195(&(iParam0->f_67));
			}
			func_466(iParam0, 6);
			break;
		case 6:
			iParam0->f_12 = 0;
			func_466(iParam0, 0);
			break;
	}
}

bool func_328(int iParam0)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	return func_476(iParam0, 8388608);
}

bool func_329(int iParam0, bool bParam1)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				func_466(iParam0, 1);
			}
			break;
		case 1:
			if (func_477(iParam0, bParam1))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
			}
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			return true;
	}
	return false;
}

void func_330(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				if (!func_107(&(iParam0->f_67)))
				{
					func_88(&(iParam0->f_67), 0);
				}
				if (iParam0->f_12)
				{
					if ((!func_107(&(iParam0->f_73)) && func_472(&(iParam0->f_67), 1.5f)) || (func_472(&(iParam0->f_73), 6f) && func_472(&(iParam0->f_67), 5f)))
					{
						func_466(iParam0, 1);
					}
				}
				else if ((func_478(iParam0) && !iParam0->f_17) && (iParam0->f_2 == 1 || iParam0->f_2 == 0))
				{
					if (func_472(&(iParam0->f_67), 10f) && func_472(&(iParam0->f_76), 6f))
					{
						bVar0 = true;
					}
					else if (((!func_107(&(iParam0->f_67)) || func_472(&(iParam0->f_67), 6f)) && iParam0->f_7) && iParam0->f_8)
					{
						if (iParam0->f_8)
						{
							iParam0->f_8 = 0;
						}
						bVar0 = true;
					}
					if (bVar0)
					{
						func_466(iParam0, 2);
					}
				}
				else if (func_472(&(iParam0->f_67), 30f))
				{
					func_466(iParam0, 3);
				}
			}
			if (iParam0->f_12)
			{
				if (iParam0->f_2 == 2)
				{
					if (iParam0->f_13 == 0)
					{
						iParam0->f_13 = Global_1940311->f_10893;
					}
					func_479(iParam0);
					if (!func_303(iParam0->f_4))
					{
						func_466(iParam0, 1);
					}
				}
				else
				{
					func_383(iParam0);
				}
				if (func_62(iParam0->f_13, 0))
				{
					if (func_62(iParam0->f_14, 0) && iParam0->f_14 == iParam0->f_13)
					{
						iParam0->f_11++;
					}
					else
					{
						iParam0->f_11 = 1;
					}
				}
				iParam0->f_12 = 0;
			}
			break;
		case 1:
			if (iParam0->f_13 == 0)
			{
				iParam0->f_13 = Global_1940311->f_10893;
			}
			if (func_475(iParam0))
			{
				func_466(iParam0, 4);
				func_195(&(iParam0->f_73));
			}
			break;
		case 2:
			if (func_474(iParam0, 0))
			{
				iParam0->f_17 = 1;
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
			}
			break;
		case 3:
			if (func_472(&(iParam0->f_76), 210f))
			{
				if (func_461(iParam0))
				{
					func_356(iParam0, func_480(28), 0);
				}
				else if (iParam0->f_3 && func_481())
				{
					func_356(iParam0, func_482(22), 0);
				}
				else
				{
					func_356(iParam0, func_480(27), 0);
				}
				func_466(iParam0, 4);
				func_195(&(iParam0->f_76));
			}
			else if (func_473(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 4:
			if (func_469(iParam0, iParam0->f_43))
			{
				func_195(&(iParam0->f_67));
			}
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			break;
	}
}

bool func_331(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_5860.f_2074[iParam0] && iParam1) != 0;
}

void func_332(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (iParam0->f_63 != Global_1051439->f_3729)
			{
				iParam0->f_62 = 0;
				iParam0->f_63 = Global_1051439->f_3729;
			}
			if (((!func_483(iParam0, 8) && !func_484(iParam0->f_63)) && func_320(iParam0, 2)) && iParam0->f_62 != 0)
			{
				return;
			}
			if (iParam0->f_63 == 1)
			{
				return;
			}
			func_466(iParam0, 1);
			break;
		case 1:
			if (func_485(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 4:
			if (is_string_null_or_empty(iParam0->f_43))
			{
				func_466(iParam0, 6);
			}
			else
			{
				if (!func_320(iParam0, 2))
				{
					func_298(iParam0, 2);
				}
				if (func_469(iParam0, iParam0->f_43))
				{
					iParam0->f_62++;
					func_466(iParam0, 0);
				}
				else
				{
					func_466(iParam0, 6);
				}
			}
			break;
		case 6:
			iParam0->f_62 = 0;
			func_486(1);
			func_466(iParam0, 0);
			break;
	}
}

bool func_333(int iParam0, int iParam1)
{
	switch (iParam0->f_58)
	{
		case 0:
			func_487(iParam0, iParam1);
			break;
		case 1:
			func_488(iParam0, iParam1);
			break;
		case 2:
			func_489(iParam0, iParam1);
			break;
		case 3:
			func_490(iParam0, iParam1);
			break;
		case 4:
			func_491(iParam0, iParam1);
			break;
		case 6:
			func_492(iParam0);
			break;
		case 5:
			func_493(iParam0, iParam1);
			break;
		default:
			break;
	}
	if (iParam0->f_58 < 6)
	{
		if (iParam0->f_60 == 9 || (iParam0->f_61 == 9 && iParam0->f_58 == 5))
		{
			func_311(iParam0->f_1);
		}
	}
	if (iParam0->f_58 != 0)
	{
		func_494(iParam0->f_1);
	}
	return (iParam0->f_58 == 0 && func_495(iParam0, 0));
}

bool func_334(int iParam0)
{
	return func_496(iParam0, 2);
}

bool func_335(int iParam0)
{
	if (!_does_volume_exist(Global_1915715->f_3[iParam0]->f_33))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1915715->f_3[iParam0]->f_33, Global_35);
}

bool func_336(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (func_303(iParam0->f_4))
			{
				func_304(iParam0);
			}
			func_466(iParam0, 1);
			break;
		case 1:
			if (func_497(iParam0))
			{
				if (are_strings_equal(iParam0->f_43, ""))
				{
					func_466(iParam0, 6);
				}
				else
				{
					func_466(iParam0, 4);
				}
			}
			else
			{
				func_468(iParam0);
			}
			break;
		case 4:
			if (func_469(iParam0, iParam0->f_43) || iParam0->f_52 == 2)
			{
				func_466(iParam0, 6);
			}
			else
			{
				func_468(iParam0);
				func_466(iParam0, 1);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_337(int iParam0)
{
	func_498(iParam0, 2);
}

void func_338(int iParam0)
{
	if (iParam0->f_49 != 0)
	{
		func_459(iParam0);
		func_366(iParam0);
		iParam0->f_12 = 0;
		iParam0->f_49 = 0;
	}
}

void func_339(int iParam0)
{
	if (iParam0->f_58 != 0 || iParam0->f_60 != 0)
	{
		iParam0->f_58 = 0;
		iParam0->f_60 = 0;
	}
	iParam0->f_56 = 0;
	iParam0->f_57 = 0;
}

bool func_340(int iParam0, bool bParam1)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_250(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_123(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_410(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_123(iParam0));
}

int func_341(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_499(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_500(iParam0))
	{
		return func_502(func_501(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_503(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_342(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_343(var uParam0, int iParam1, int iParam2)
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

void func_344(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	(*uParam0)[iParam3]->f_2 = iParam1;
	(*uParam0)[iParam3]->f_1 = sParam2;
	(*uParam0)[iParam3]->f_3 = iParam3;
}

bool func_345(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_346(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_347(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (_0x54b187f111d9c6f8(iParam0->f_4, 0))
			{
				func_195(&(iParam0->f_67));
			}
			else if (!func_303(iParam0->f_4))
			{
				if (!func_107(&(iParam0->f_67)))
				{
					func_88(&(iParam0->f_67), 0);
				}
				else if (func_472(&(iParam0->f_67), 75f))
				{
					func_466(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_504(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			func_195(&(iParam0->f_67));
			break;
	}
}

void func_348(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				if (!func_107(&(iParam0->f_67)))
				{
					if (!func_505(2))
					{
						func_466(iParam0, 1);
					}
					else
					{
						func_195(&(iParam0->f_67));
					}
				}
				else if (func_472(&(iParam0->f_67), 30f))
				{
					func_466(iParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_505(2) && !func_506(iParam0))
			{
				if (func_461(iParam0))
				{
					func_356(iParam0, func_358(3), 0);
				}
				else
				{
					func_356(iParam0, func_358(1), 0);
				}
				func_382(2);
			}
			else if (func_318(&(iParam0->f_79)) > 205f)
			{
				func_356(iParam0, func_358(2), 0);
			}
			else if (func_461(iParam0))
			{
				func_356(iParam0, func_358(5), 0);
			}
			else
			{
				func_356(iParam0, func_358(4), 0);
			}
			func_466(iParam0, 4);
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			func_195(&(iParam0->f_67));
			break;
	}
}

void func_349(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(iParam0->f_4))
			{
				if (!func_107(&(iParam0->f_70)))
				{
					func_195(&(iParam0->f_70));
				}
				else if (func_472(&(iParam0->f_70), 30f))
				{
					func_466(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_461(iParam0))
			{
				func_466(iParam0, 6);
			}
			else
			{
				func_356(iParam0, func_358(7), 0);
				func_466(iParam0, 4);
			}
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			func_195(&(iParam0->f_70));
			break;
	}
}

bool func_350(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_303(Global_34))
			{
				func_466(iParam0, 1);
			}
			break;
		case 1:
			func_507(iParam0);
			func_466(iParam0, 4);
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			func_466(iParam0, 0);
			return true;
	}
	return false;
}

bool func_351(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (Local_18.f_202 == 1 || Local_18.f_202 == 2)
			{
				func_466(iParam0, 1);
			}
			break;
		case 1:
			if (!func_303(iParam0->f_4) && func_508(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 4:
			func_469(iParam0, iParam0->f_43);
			func_466(iParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

int func_352(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_353(int iParam0)
{
	iVar0 = func_352(Global_34, 1, 0, 0);
	if (((iVar0 != 1549070292 && (func_449(iVar0) || func_205(iVar0, -1653669750))) && !(*iParam0 == 6 && func_506(iParam0))) && !(_0x6abad7b0a854f8fb(iVar0) || _0x49e40483948af062(iVar0)))
	{
		return true;
	}
	return false;
}

bool func_354(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	if ((_is_weapon_lasso(Global_1940258->f_38) || 1151374672 == Global_1940258->f_38) && Global_1940258->f_21)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258->f_34 != 0)
	{
		if (_get_rider_of_mount(Global_1940258->f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_509(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_510(iVar0, 0)))
		{
			if (func_511(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_355(int iParam0)
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

void func_356(int iParam0, char* sParam1, int iParam2)
{
	iParam0->f_43 = sParam1;
	iParam0->f_44 = iParam2;
}

char* func_357(int iParam0)
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

char* func_358(int iParam0)
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

float func_359(int iParam0)
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

void func_360(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_35(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_41(&(iParam1->f_6), 0, 1);
	}
	if (!func_35(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_439(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_91(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_35(iParam1->f_6))
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
					func_512(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_513(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_514(iParam1->f_6, sVar0, iParam1->f_21, iParam1->f_19, 1);
					}
					else
					{
						func_92(iParam1->f_6, sVar0, iParam1->f_19, 1);
					}
					_hide_hud_component(-1744263063);
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_513(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_36(iParam1->f_6, 0, 1, 1);
				}
				else
				{
					func_36(iParam1->f_6, 1, 1, 1);
				}
			}
		}
	}
}

int func_361(int iParam0, int iParam1)
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
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
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
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
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

void func_362(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_19 = iParam2;
	func_188(iParam0, 1);
	func_189(iParam0, sParam1, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_363(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	uParam0->f_11 = iParam1;
	uParam0->f_11.f_1 = iParam2;
	uParam0->f_11.f_2 = iParam3;
	uParam0->f_11.f_4 = iParam4;
	uParam0->f_11.f_3 = iParam5;
}

void func_364(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

void func_365(int* iParam0, char* sParam1)
{
	if (func_35(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_364(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_346(iParam0, 1);
}

void func_366(int iParam0)
{
	if (iParam0->f_50 != 0)
	{
		iParam0->f_50 = 0;
	}
}

void func_367(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_369() - fParam1);
	func_515(uParam0, 1);
	func_516(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_368(int iParam0)
{
	return func_200(iParam0, 2);
}

float func_369()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_370(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_517(iVar0);
}

int func_371(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

int func_372(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_373(int iParam0)
{
	return iParam0;
}

int func_374(int iParam0, int iParam1)
{
	if (!func_518(iParam0, 2))
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

int func_375(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_376(int iParam0, int iParam1)
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

void func_377(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_378(int iParam0, int iParam1)
{
	iVar0 = func_207(*iParam0);
	iVar1 = func_206(*iParam0);
	if (iParam1 < 1 || iParam1 > func_212(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_379(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_380(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_381(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_382(int iParam0)
{
	func_145(&(Local_18.f_191), iParam0);
}

void func_383(int iParam0)
{
	func_298(iParam0, 32);
}

struct<5> func_384(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_519(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_520(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_521(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_522(bParam1) };
			if (bParam2 && func_523(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_524(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_524(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_525(iParam0, &Var6, 1728382685))
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
			Var0 = { func_526(bParam1) };
			switch (func_372(iParam0))
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
			if (func_527(iParam0, -1823706425))
			{
				Var0 = { func_521(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_527(iParam0, -1483207246))
			{
				Var0 = { func_521(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_521(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_527(iParam0, -1653629781))
			{
				Var0 = { func_521(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_528(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_527(iParam0, -1653629781))
			{
				Var0 = { func_521(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_385(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_521(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_529(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_530() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_386(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_531(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_533(func_532(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_534(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_387(int iParam0, struct<17> Param1)
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

var func_388(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_535(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_389(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

int func_390(int iParam0)
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

bool func_391()
{
	if (func_536())
	{
		return false;
	}
	return true;
}

float func_392(int iParam0)
{
	switch (iParam0)
	{
		case -24362764:
			fVar0 = 0.025f;
			break;
		case -368374107:
			fVar0 = 0.025f;
			break;
		default:
			fVar0 = 0.025f;
			break;
	}
	if (func_537(-127011478, 1))
	{
		fVar0 = (fVar0 * 0.5f);
	}
	return fVar0;
}

int func_393(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_538(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_394(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
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

int func_395(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_538(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_396(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_539(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
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
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
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

int func_397(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_538(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_398(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

float func_399(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_54();
	func_55(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_540(iParam0, 2);
	if (func_542(iVar0, func_541(iParam0, 2), 1))
	{
		func_543(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_404(103, bParam2);
		return 0f;
	}
	func_544(iParam0, func_54(), 2);
	func_543(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_400(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_538(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_401(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_538(2);
	}
	iVar0 = player_ped_id();
	if (func_545(iVar0, iParam0, fParam1))
	{
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
			func_546(iParam0, 7000, iParam5);
		}
		func_547(iVar0, iParam0, fParam1);
		func_548(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_402()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_549(Global_1956200->f_1431.f_107, 0);
}

void func_403(float fParam0, int iParam1)
{
	fVar0 = func_550(13, 2);
	iVar1 = func_551(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_552(fVar0, 0f, 100f);
	iVar2 = func_551(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_54();
		func_553(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_554(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

void func_404(int iParam0, bool bParam1)
{
	func_555(iParam0, &iVar0, &iVar1);
	if (!func_556(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_557(iVar0, iVar1);
}

int func_405(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_558(iParam0))
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
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_559(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_560(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_559(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_561(1775828486);
			func_562(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_559(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_563(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_561(350943398);
			func_564(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_564(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_564(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_406(int iParam0, int iParam1, int iParam2)
{
	if (!func_565(iParam1))
	{
		return 0;
	}
	if (!func_566(iParam1))
	{
		return 0;
	}
	if (!func_567(iParam0))
	{
		return 0;
	}
	if (!func_568(iParam0))
	{
		return 0;
	}
	if (!func_569(iParam0))
	{
		func_570(iParam0);
	}
	if (func_571(iParam0, iParam1))
	{
		iVar0 = func_572(iParam0);
		Global_1146212->f_47689.f_63[iVar0] = iParam0;
		Global_1146212->f_47689.f_63[iVar0]->f_1 = (Global_1296859->f_21 + iParam2);
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
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

void func_408(int iParam0, int iParam1)
{
	Var0 = { func_70(-372368982, func_573(iParam0)) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	func_68(func_574(106002964), iParam1);
}

void func_409(int iParam0, int iParam1)
{
	if (func_2() == 0)
	{
		iVar0 = func_575(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_205(iParam0, -136654233))
		{
			chal_add_goal_progress_int(-1823988672, -609313610, 1);
		}
		if ((func_205(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			chal_add_goal_progress_int(-1823988672, 733633210, 1);
		}
		if (func_205(iParam0, 1573112293))
		{
			chal_add_goal_progress_int(-1823988672, -1274788474, 1);
		}
		if (func_205(iParam0, -2085281117) && !func_205(iParam0, -1237028043))
		{
			chal_add_goal_progress_int(-1823988672, -1456129530, 1);
		}
		if (func_205(iParam0, 200705431))
		{
			chal_add_goal_progress_int(-1823988672, 1380824593, 1);
		}
		if (((func_205(iParam0, -887064662) || func_205(iParam0, -839724752)) || func_205(iParam0, 1264218912)) || iParam0 == -1994237933)
		{
			chal_add_goal_progress_int(-1823988672, 381139323, 1);
		}
		if (func_205(iParam0, -764700608))
		{
			chal_add_goal_progress_int(-1823988672, 1844266867, 1);
		}
		if ((iParam0 == -1442667564 || iParam0 == -951828978) || iParam0 == -1477273558)
		{
			chal_add_goal_progress_int(-1823988672, -1075364325, 1);
		}
		if (iParam0 == -1199896558)
		{
			chal_add_goal_progress_int(-1823988672, 2024753712, 1);
		}
	}
}

int func_410(int iParam0)
{
	iVar0 = func_123(iParam0);
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

void func_411(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (!func_250(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

void func_412(int iParam0, int iParam1)
{
	if (!func_250(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

bool func_413(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_2() != -1;
	switch (iParam0)
	{
		case 81:
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
		case 111:
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
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
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

int func_414(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_254(iVar2) != 0 && _0x800df3fc913355f3(func_123(iVar2)))
		{
			if (func_123(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_416(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_417(var uParam0, var uParam1)
{
	return uParam0;
}

int func_418(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_419(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_420(int iParam0)
{
	return Global_1128574[iParam0];
}

bool func_421(int iParam0)
{
	return func_576(iParam0, 1);
}

bool func_422(int iParam0)
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

int func_423(int iParam0)
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

bool func_424(struct<2> Param0, int* iParam2)
{
	if (!func_269(Param0))
	{
		return false;
	}
	func_577(iParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(iParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(iParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(iParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(iParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(iParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(iParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(iParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_425(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

void func_426(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

bool func_427(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_578((bVar1 && !bVar0), Global_34, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_428(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_439((*uParam0)[iVar0]))
		{
			func_188((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_429(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_41(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_131(iParam0, 0);
		}
	}
}

int func_430(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_360(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_35((*uParam2)[iVar0]->f_6))
		{
			func_188((*uParam2)[iVar0], 11);
			return (*Global_1951255)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_431(var uParam0)
{
	return 0;
}

int func_432(var uParam0, int iParam1)
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

void func_433(int* iParam0, int* iParam1)
{
	if (!func_279(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_188(iParam1, 19);
			func_441(iParam0, 23);
			func_579(iParam1, 2);
		}
	}
}

void func_434(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_439(iParam1))
		{
			clear_bit(iParam1, 14);
			func_360(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_435(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_580(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_50(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_36(iParam2->f_6, 0, 1, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_36(iParam2->f_6, 1, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_512(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_436(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_95(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_581(iParam1, 1))
	{
		func_582(iParam1, 1);
		return true;
	}
	return false;
}

bool func_437(int* iParam0, float fParam1, bool bParam2)
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

void func_438(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_18)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_34, 203, true);
	}
}

bool func_439(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_440(int iParam0)
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

void func_441(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_442(var uParam0, float fParam1)
{
	if (func_472(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

bool func_443(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

bool func_444(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_445(int iParam0, bool bParam1)
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

var func_446(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_447(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

bool func_448(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam1]->f_24))
	{
		if (func_139(iParam0, Global_1051439->f_72[iParam1]->f_24, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_449(int iParam0)
{
	return func_520(iParam0) == -427144552;
}

bool func_450(int iParam0)
{
	iVar0 = func_583(iParam0);
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

bool func_451(int iParam0)
{
	bVar0 = func_443(iParam0, 256);
	return bVar0;
}

int func_452(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_41);
	return StackVal;
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 > iParam1 || (iParam2 != 0 && iParam0->f_58 == 5))
	{
		return iParam2;
	}
	return iParam1;
}

bool func_454(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 5:
		case 10:
		case 14:
		case 15:
		case 38:
		case 39:
			return true;
		default:
			break;
	}
	return false;
}

bool func_455(int iParam0, int iParam1)
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

bool func_456(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_584(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

bool func_457(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_458(int iParam0)
{
	return false;
}

void func_459(int iParam0)
{
	if (iParam0->f_52 != 0)
	{
		iParam0->f_52 = 0;
	}
}

bool func_460(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_211(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_209(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_207(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_208(iParam0);
	if (iVar5 < 1 || iVar5 > func_212(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0)
{
	iVar0 = _0x7cc2186c32d3540a(iParam0->f_4, player_id());
	return (iVar0 == 2 || iVar0 == 3);
}

void func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_585(func_54(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_463(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
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

void func_464(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
	}
	else
	{
		Global_5860.f_2074[iParam0] = (&Global_5860.f_2074[iParam0] - (Global_5860.f_2074[iParam0] && iParam1));
	}
}

bool func_465(int iParam0)
{
	return func_443(iParam0, 134217728);
}

void func_466(int iParam0, int iParam1)
{
	if (iParam0->f_50 != iParam1)
	{
		iParam0->f_50 = iParam1;
	}
}

bool func_467(int iParam0)
{
	iVar0 = _0x7cc2186c32d3540a(iParam0->f_4, player_id());
	if (((iParam0->f_42 != 0 || *iParam0 == 7) || *iParam0 == 17) && iVar0 == 4)
	{
		iVar0 = 0;
	}
	if (func_456(player_id(), 1, 0, 1) || func_144(Global_1051439->f_72[*iParam0]->f_50, 1))
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			func_356(iParam0, func_586(12), 0);
		}
		else
		{
			func_356(iParam0, func_586(11), 0);
		}
		return true;
	}
	if (func_587(iParam0))
	{
		return true;
	}
	if (func_588(iParam0))
	{
		return true;
	}
	if (iParam0->f_52 == 0)
	{
		switch (iParam0->f_42)
		{
			case 0:
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						if (func_481())
						{
							func_356(iParam0, func_586(2), 0);
							return true;
						}
						else if (is_ped_male(Global_34))
						{
							func_356(iParam0, func_586(3), 0);
							return true;
						}
						else
						{
							func_356(iParam0, func_586(4), 0);
							return true;
						}
						break;
				}
				break;
			case 1:
			case 2:
				if (func_589(func_121()) > 0)
				{
					func_356(iParam0, func_586(25), 0);
					return true;
				}
				if ((iParam0->f_59 != 0 && iParam0->f_59 != 5) && ((iParam0->f_61 == 3 || iParam0->f_61 == 7) || iParam0->f_61 == 6))
				{
					func_356(iParam0, func_586(26), 0);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						if (*iParam0 == 8)
						{
							func_356(iParam0, func_586(29), 0);
							return true;
						}
					case 0:
					case 4:
						if (*iParam0 != 7 || func_481())
						{
							func_356(iParam0, func_586(28), 0);
							return true;
						}
						else if (is_ped_male(Global_34))
						{
							func_356(iParam0, func_586(32), 0);
							return true;
						}
						else
						{
							func_356(iParam0, func_586(33), 0);
							return true;
						}
						break;
					case 2:
					case 3:
						if (*iParam0 == 8)
						{
							func_356(iParam0, func_586(30), 0);
							return true;
						}
						else
						{
							func_356(iParam0, "", 0);
							return true;
						}
						break;
				}
				break;
			case 3:
			case 4:
				if (func_589(func_121()) > 0)
				{
					func_356(iParam0, func_586(25), 0);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						func_356(iParam0, func_586(39), 0);
						break;
					case 0:
					case 4:
						if (*iParam0 == 17 || func_481())
						{
							func_356(iParam0, func_586(19), 0);
							return true;
						}
						else if (is_ped_male(Global_34))
						{
							func_356(iParam0, func_586(21), 0);
							return true;
						}
						else
						{
							func_356(iParam0, func_586(22), 0);
							return true;
						}
						break;
					case 2:
						if (func_481())
						{
							func_356(iParam0, func_586(37), 0);
						}
						else
						{
							func_356(iParam0, func_586(17), 0);
						}
						return true;
					case 3:
						func_356(iParam0, func_586(40), 0);
						return true;
				}
				break;
			case 5:
			case 6:
				if (func_589(func_121()) > 0)
				{
					func_356(iParam0, func_586(25), 0);
					return true;
				}
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						func_356(iParam0, func_586(23), 0);
						return true;
					case 2:
					case 3:
						func_356(iParam0, func_586(24), 0);
						return true;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_42)
		{
			case 1:
			case 2:
				func_356(iParam0, "", 0);
				return true;
			default:
				func_356(iParam0, func_586(5), 0);
				return true;
		}
	}
	return false;
}

void func_468(int iParam0)
{
	if (iParam0->f_52 != 2)
	{
		uVar0 = iParam0->f_52 + 1;
		uVar1 = uVar0;
		iParam0->f_52 = uVar1;
	}
}

bool func_469(int iParam0, char[4] cParam1)
{
	iVar1 = 0;
	iVar0 = iParam0->f_4;
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_590(iParam0);
		func_591(iParam0, iVar1);
	}
	else
	{
		return false;
	}
	if (is_string_null_or_empty(cParam1))
	{
		cParam1 = iParam0->f_43;
	}
	if (are_strings_equal(cParam1, "SILENCE"))
	{
		return true;
	}
	if (!is_string_null_or_empty(cParam1))
	{
		if (func_129(iVar0, 8))
		{
			if (func_305(*iParam0) && func_144(iParam0->f_44, 2))
			{
				func_592(&(iParam0->f_93), iVar0, iVar1, 1);
				bVar2 = func_594(&(iParam0->f_93), func_593(cParam1), 0, -1, 0, 0);
			}
			else if (func_225(iParam0->f_45))
			{
				iVar3 = -1478066105;
				if ((*iParam0 == 38 || *iParam0 == 15) || *iParam0 == 39)
				{
					iVar3 = 291934926;
				}
				bVar2 = func_112(iVar0, cParam1, iVar3, 0, 0, iVar1, 0, 1);
			}
			else
			{
				Var4.f_5 = 1;
				Var4.f_6 = 1;
				Var4 = cParam1;
				Var4.f_1 = iVar1;
				Var4.f_3 = 291934926;
				bVar2 = _play_ambient_speech_at_coords(iParam0->f_45, &Var4);
			}
			if (bVar2)
			{
				if (((((!func_144(iParam0->f_44, 1) && func_225(iParam0->f_45)) && !are_strings_equal(iParam0->f_43, func_357(27))) && !func_595(iParam0)) && !func_144(Global_1051439->f_72[*iParam0]->f_50, 1)) && (!network_get_entity_is_networked(iVar0) || network_has_control_of_entity(iVar0)))
				{
					fVar12 = 3f;
					if (iParam0->f_58 != 0)
					{
						fVar12 = (to_float(iParam0->f_55) + 2f);
					}
					if (!does_entity_exist(iParam0->f_92))
					{
						if (iParam0->f_49 != 7)
						{
							_0xe7fa07624574b79a(iVar0, Global_34, 1, 1, fVar12, 1, 0, 0, 0);
						}
					}
					else
					{
						if (iParam0->f_49 != 7)
						{
							_0xe7fa07624574b79a(iParam0->f_92, Global_34, 1, 1, fVar12, 1, 0, 0, 0);
						}
						iParam0->f_92 = 0;
					}
				}
			}
		}
	}
	func_108(&(iParam0->f_64));
	if (!func_320(iParam0, 512))
	{
		iParam0->f_45 = { func_596() };
	}
	return bVar2;
}

bool func_470(int iParam0)
{
	Stack.Push(iParam0->f_24);
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_25);
	if (StackVal && StackVal)
	{
		return true;
	}
	switch (iParam0->f_42)
	{
		case 0:
		case 6:
			if (func_461(iParam0))
			{
				func_356(iParam0, "", 0);
				return true;
			}
			else if (iParam0->f_1 == 102 && !is_ped_male(Global_34))
			{
				func_356(iParam0, func_586(44), 0);
				return true;
			}
			else if (func_481())
			{
				func_356(iParam0, func_586(45), 0);
				return true;
			}
			else
			{
				func_356(iParam0, func_586(44), 0);
				return true;
			}
			break;
		case 4:
		case 5:
			if (func_461(iParam0))
			{
				func_356(iParam0, func_480(15), 0);
				return true;
			}
			else
			{
				func_356(iParam0, func_480(14), 0);
				return true;
			}
			break;
	}
	func_356(iParam0, "", 0);
	return true;
}

bool func_471()
{
	if (func_597())
	{
		iVar0 = _0xd04241bbf6d03a5e(player_ped_id());
		return iVar0 != 0;
	}
	return false;
}

bool func_472(var uParam0, float fParam1)
{
	if (!func_107(uParam0))
	{
		return false;
	}
	if (func_199(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_473(int iParam0)
{
	Stack.Push(iParam0->f_26);
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_27);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (func_199(&(iParam0->f_79)) > 180f)
	{
		if (func_461(iParam0))
		{
			func_356(iParam0, func_480(30), 0);
			return true;
		}
		else if (func_506(iParam0))
		{
			func_356(iParam0, func_480(29), 0);
			return true;
		}
		else
		{
			func_356(iParam0, func_480(39), 0);
			return true;
		}
	}
	else if (func_461(iParam0))
	{
		func_356(iParam0, func_480(28), 0);
		return true;
	}
	else
	{
		if (iParam0->f_3)
		{
			iVar0 = get_random_int_in_range(0, 6);
		}
		else
		{
			iVar0 = get_random_int_in_range(1, 6);
		}
		if (iParam0->f_1 == 6)
		{
			if (iVar0 == 5)
			{
				iVar0 = get_random_int_in_range(0, 5);
			}
		}
		switch (iVar0)
		{
			case 0:
				if (iParam0->f_3 && !func_328(*iParam0))
				{
					func_356(iParam0, func_480(17), 0);
					return true;
				}
				break;
			case 1:
				func_356(iParam0, func_480(40), 0);
				return true;
			case 2:
				func_356(iParam0, func_480(42), 0);
				return true;
			case 3:
				func_356(iParam0, func_480(44), 0);
				return true;
			case 4:
				func_356(iParam0, func_480(45), 0);
				return true;
			case 5:
				func_356(iParam0, func_480(43), 0);
				return true;
		}
	}
	return false;
}

bool func_474(int iParam0, bool bParam1)
{
	iVar0 = iParam0->f_15;
	if (!bParam1)
	{
		if (((iParam0->f_3 && iParam0->f_5 == 0) && !iParam0->f_7) && func_472(&(iParam0->f_76), 45f))
		{
			func_356(iParam0, func_482(22), 0);
			return true;
		}
	}
	else if (func_461(iParam0) || func_318(&(iParam0->f_76)) > 30f)
	{
		func_356(iParam0, func_598(3), 0);
		return true;
	}
	if (func_461(iParam0))
	{
		func_356(iParam0, "", 0);
		return true;
	}
	if (iParam0->f_17)
	{
		func_356(iParam0, "", 0);
		return true;
	}
	Stack.Push(iParam0->f_34);
	Stack.Push(iParam0);
	Stack.Push(iVar0);
	Stack.Push(bParam1);
	Call_Loc(iParam0->f_35);
	if (StackVal && StackVal)
	{
		iParam0->f_17 = 1;
		return true;
	}
	if (!func_62(iVar0, 0))
	{
		func_356(iParam0, "", 0);
		return true;
	}
	if (func_481())
	{
		if (*iParam0 != 6 && (func_62(iParam0->f_13, 0) && func_341(iParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500))
		{
			if (bParam1)
			{
				func_356(iParam0, func_598(2), 0);
				return true;
			}
			else
			{
				func_356(iParam0, func_598(5), 0);
				return true;
			}
		}
		else if (bParam1)
		{
			func_356(iParam0, func_598(1), 0);
			return true;
		}
		else
		{
			func_356(iParam0, func_598(4), 0);
			return true;
		}
	}
	else
	{
		func_356(iParam0, func_598(7), 0);
		return true;
	}
	return false;
}

bool func_475(int iParam0)
{
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			if (func_471())
			{
				if (get_random_int_in_range(0, 4) == 0)
				{
					if (func_506(iParam0) && func_481())
					{
						func_356(iParam0, func_480(33), 1);
					}
					else
					{
						func_356(iParam0, func_480(32), 1);
					}
					return true;
				}
			}
			Stack.Push(((iParam0->f_11 < 3 || func_305(*iParam0)) && iParam0->f_28));
			Stack.Push(iParam0);
			Call_Loc(iParam0->f_29);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (func_461(iParam0))
			{
				func_356(iParam0, func_482(4), 0);
				return true;
			}
			else if (func_320(iParam0, 4))
			{
				func_356(iParam0, func_480(31), 0);
				return true;
			}
			else if (func_320(iParam0, 8))
			{
				func_356(iParam0, func_482(2), 0);
				return true;
			}
			else if (func_320(iParam0, 16))
			{
				func_356(iParam0, func_482(1), 0);
				return true;
			}
			else if (iParam0->f_11 > 2)
			{
				if ((*iParam0 != 6 && func_62(iParam0->f_13, 0)) && func_341(iParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
				{
					func_356(iParam0, func_482(11), 0);
				}
				else
				{
					func_356(iParam0, func_482(10), 0);
				}
				return true;
			}
			else if ((*iParam0 != 6 && func_62(iParam0->f_13, 0)) && func_341(iParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
			{
				func_356(iParam0, func_482(6), 0);
				return true;
			}
			else
			{
				switch (get_random_int_in_range(0, 4))
				{
					case 0:
						func_356(iParam0, func_482(9), 0);
						return true;
					case 1:
						func_356(iParam0, func_482(7), 0);
						return true;
					case 2:
						func_356(iParam0, func_482(20), 0);
						return true;
					case 3:
						func_356(iParam0, func_482(21), 0);
						return true;
				}
			}
			break;
		case 2:
			if (!func_62(iParam0->f_13, 0))
			{
				iVar0 = iParam0->f_13;
				if (!func_599(iVar0))
				{
				}
				else
				{
					iParam0->f_16++;
					if (iParam0->f_11 > 2)
					{
						func_356(iParam0, func_482(14), 0);
						return true;
					}
					Stack.Push(iParam0->f_28);
					Stack.Push(iParam0);
					Call_Loc(iParam0->f_29);
					if (StackVal && StackVal)
					{
						return true;
					}
					if (!func_461(iParam0))
					{
						if (func_600(iParam0->f_13, 1073741824) || func_205(iParam0->f_13, -753854379))
						{
							func_356(iParam0, func_482(15), 0);
							return true;
						}
						else if (func_600(iParam0->f_13, 268435456))
						{
							func_356(iParam0, func_482(17), 0);
							return true;
						}
						else if (func_600(iParam0->f_13, 134217728))
						{
							func_356(iParam0, func_482(18), 0);
							return true;
						}
						else
						{
							switch (get_random_int_in_range(0, 3))
							{
								case 0:
									func_356(iParam0, func_482(21), 0);
									break;
								case 1:
									func_356(iParam0, func_482(16), 0);
									break;
								case 2:
									func_356(iParam0, func_482(20), 0);
									break;
							}
							return true;
						}
					}
					else
					{
						func_356(iParam0, func_482(4), 0);
						return true;
					}
					Jump @900; //curOff = 871
					Stack.Push(iParam0->f_28);
					Stack.Push(iParam0);
					Call_Loc(iParam0->f_29);
					if (StackVal && StackVal)
					{
						return true;
					}
				}
				return false;
			}
			default:
				break;
	}
}

bool func_476(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if (func_2() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

bool func_477(int iParam0, bool bParam1)
{
	Stack.Push(iParam0->f_36);
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(iParam0->f_37);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam0->f_2)
		{
			case 1:
				if (iParam0->f_3 && !func_320(iParam0, 256))
				{
					if (func_461(iParam0))
					{
						func_356(iParam0, func_480(37), 0);
					}
					else if (func_481())
					{
						func_356(iParam0, func_480(18), 1);
					}
					else
					{
						func_356(iParam0, func_480(16), 0);
					}
					func_298(iParam0, 256);
					return true;
				}
				else
				{
					func_356(iParam0, "", 0);
					return true;
				}
				break;
			case 2:
				func_356(iParam0, func_480(41), 0);
				return true;
			default:
				func_356(iParam0, "", 0);
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
					if (func_461(iParam0))
					{
						func_356(iParam0, "", 0);
						return true;
					}
					else
					{
						if (!func_506(iParam0))
						{
							func_356(iParam0, func_482(5), 0);
						}
						else if (func_481())
						{
							func_356(iParam0, func_480(19), 1);
						}
						else
						{
							func_356(iParam0, func_480(36), 0);
						}
						return true;
					}
				}
				else
				{
					func_356(iParam0, "", 0);
					return true;
				}
				break;
			case 2:
				iParam0->f_43 = "";
				if (func_601(iParam0))
				{
					if (iParam0->f_16 > 1 && func_481())
					{
						func_356(iParam0, func_480(20), 1);
					}
				}
				return true;
			default:
				func_356(iParam0, "", 0);
				return true;
		}
	}
	return false;
}

bool func_478(int iParam0)
{
	if (iParam0->f_2 == 1 && (iParam0->f_15 == 0 || func_372(iParam0->f_15) == -2014019346))
	{
		return false;
	}
	return true;
}

void func_479(int iParam0)
{
	func_298(iParam0, 64);
}

char* func_480(int iParam0)
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

bool func_481()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

char* func_482(int iParam0)
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

bool func_483(int iParam0, int iParam1)
{
	if (func_303(iParam0->f_4))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return true;
	}
	if (!func_107(&(iParam0->f_64)))
	{
		func_88(&(iParam0->f_64), 1);
	}
	if (func_199(&(iParam0->f_64)) >= IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0)
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

bool func_485(int iParam0)
{
	iParam0->f_43 = "";
	switch (iParam0->f_63)
	{
		case 2:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(9), 0);
					break;
			}
			break;
		case 65536:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(3), 0);
					break;
				case 1:
					func_356(iParam0, func_602(15), 0);
					break;
				case 2:
					func_356(iParam0, func_602(8), 0);
					break;
				case 3:
					func_356(iParam0, func_602(14), 0);
					break;
				case 4:
					func_356(iParam0, func_602(13), 0);
					break;
				case 5:
					func_356(iParam0, func_602(9), 0);
					break;
			}
			break;
		case 4:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(15), 0);
					break;
				case 1:
					func_356(iParam0, func_602(8), 0);
					break;
			}
			break;
		case 8:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(12), 0);
					break;
			}
			break;
		case 16:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(3), 0);
					break;
			}
			break;
		case 32:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(4), 0);
					break;
			}
			break;
		case 131072:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(8), 0);
					break;
				case 1:
					func_356(iParam0, func_602(25), 1);
					break;
			}
			break;
		case 262144:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(14), 0);
					break;
			}
			break;
		case 64:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(13), 0);
					break;
			}
			break;
		case 128:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(6), 0);
					break;
				case 1:
					func_356(iParam0, func_602(8), 0);
					break;
				case 2:
					func_356(iParam0, func_602(25), 1);
					break;
			}
			break;
		case 256:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(11), 0);
					break;
				case 1:
					func_356(iParam0, func_602(27), 1);
					break;
			}
			break;
		case 512:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(5), 0);
					break;
			}
			break;
		case 524288:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(15), 0);
					break;
			}
			break;
		case 2048:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(1), 0);
					break;
			}
			break;
		case 4096:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(2), 0);
					break;
			}
			break;
		case 16384:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(23), 1);
					break;
				case 1:
					func_356(iParam0, func_602(7), 0);
					break;
			}
			break;
		case 32768:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(4), 0);
					break;
			}
			break;
		case 1048576:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(16), 0);
					break;
			}
			break;
		case 2097152:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(24), 1);
					break;
				case 1:
					func_356(iParam0, func_602(17), 0);
					break;
			}
			break;
		case 4194304:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(20), 0);
					break;
				case 1:
					if (is_ped_fleeing(iParam0->f_4))
					{
						func_356(iParam0, func_602(26), 1);
					}
					break;
			}
			break;
		case 8388608:
			switch (iParam0->f_62)
			{
				case 0:
					func_356(iParam0, func_602(18), 0);
					break;
			}
			break;
	}
	return true;
}

void func_486(int iParam0)
{
	if (func_2() == -1)
	{
		if (Global_1915715->f_22406 != iParam0)
		{
			Global_1915715->f_22406 = iParam0;
		}
	}
	else if (Global_1051439->f_3729 != iParam0)
	{
		Global_1051439->f_3729 = iParam0;
	}
}

void func_487(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 0))
	{
		func_603(iParam0);
		func_604(iParam0, 0);
	}
	if (iParam1 != 0)
	{
		func_605(iParam0, 1, iParam1);
	}
	if (func_606(iParam0, 0))
	{
		func_607(iParam0);
		func_608(iParam0, 0);
	}
}

void func_488(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 1))
	{
		func_603(iParam0);
		func_604(iParam0, 1);
	}
	func_609(iParam0, iParam1);
	func_610(iParam0, iParam1);
	if (func_611(iParam0))
	{
		func_605(iParam0, 2, iParam1);
	}
	if (func_606(iParam0, 1))
	{
		func_608(iParam0, 1);
	}
}

void func_489(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 2))
	{
		func_603(iParam0);
		func_604(iParam0, 2);
	}
	func_609(iParam0, iParam1);
	func_610(iParam0, iParam1);
	if (func_611(iParam0))
	{
		func_605(iParam0, 3, iParam1);
	}
	if (func_606(iParam0, 2))
	{
		func_608(iParam0, 2);
	}
}

void func_490(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 3))
	{
		func_603(iParam0);
		func_604(iParam0, 3);
	}
	func_609(iParam0, iParam1);
	func_610(iParam0, iParam1);
	if (func_611(iParam0))
	{
		func_605(iParam0, 4, iParam1);
	}
	if (func_606(iParam0, 3))
	{
		func_608(iParam0, 3);
	}
}

void func_491(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 4))
	{
		func_603(iParam0);
		func_604(iParam0, 4);
	}
	func_609(iParam0, iParam1);
	func_610(iParam0, iParam1);
	if (func_611(iParam0) && func_612(iParam0))
	{
		func_605(iParam0, 6, iParam1);
	}
	if (func_606(iParam0, 4))
	{
		func_608(iParam0, 4);
	}
}

void func_492(int iParam0)
{
	if (!func_495(iParam0, 6))
	{
		func_604(iParam0, 6);
	}
	func_613(iParam0);
	if (func_606(iParam0, 6))
	{
		func_608(iParam0, 6);
	}
}

void func_493(int iParam0, int iParam1)
{
	if (!func_495(iParam0, 5))
	{
		func_614(iParam0);
		func_603(iParam0);
		func_604(iParam0, 5);
	}
	func_610(iParam0, iParam1);
	if (func_611(iParam0))
	{
		func_605(iParam0, 0, 0);
	}
	if (func_606(iParam0, 5))
	{
		iParam0->f_55 = -1;
		func_608(iParam0, 5);
	}
}

void func_494(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_145(Global_1915715->f_21863[iParam0], 2);
}

bool func_495(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_56, iParam1);
}

bool func_496(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_18065[iParam0] && iParam1) != 0;
}

bool func_497(int iParam0)
{
	switch (iParam0->f_52)
	{
		case 0:
			if (func_615(iParam0))
			{
				func_356(iParam0, func_480(24), 0);
				return true;
			}
			if (func_461(iParam0))
			{
				if (func_506(iParam0))
				{
					func_356(iParam0, func_480(25), 0);
				}
				else
				{
					func_356(iParam0, func_480(26), 0);
				}
				return true;
			}
			if (!func_616(*iParam0, -1))
			{
				func_356(iParam0, func_480(9), 0);
				return true;
			}
			Stack.Push(iParam0->f_32);
			Stack.Push(iParam0);
			Call_Loc(iParam0->f_33);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (func_481())
			{
				switch (get_random_int_in_range(0, 3))
				{
					case 0:
						func_356(iParam0, func_480(10), 1);
						break;
					case 1:
						if (is_ped_male(iParam0->f_4))
						{
							func_356(iParam0, func_480(11), 1);
						}
						else
						{
							func_356(iParam0, func_480(12), 1);
						}
						break;
					case 2:
						func_356(iParam0, func_480(13), 1);
						break;
				}
				return true;
			}
			else if (func_506(iParam0) || func_320(iParam0, 8192))
			{
				func_356(iParam0, func_480(25), 0);
				return true;
			}
			else if (func_601(iParam0))
			{
				func_356(iParam0, func_480(6), 0);
				return true;
			}
			else
			{
				func_356(iParam0, func_480(8), 0);
				return true;
			}
			break;
		case 1:
			if (((func_461(iParam0) || (func_310(*iParam0, iParam0->f_1) || iParam0->f_49 == 10)) || func_456(player_id(), 1, 0, 1)) || func_144(Global_1051439->f_72[*iParam0]->f_50, 1))
			{
				func_356(iParam0, "", 0);
				return true;
			}
			if (func_506(iParam0) || func_601(iParam0))
			{
				func_356(iParam0, func_480(6), 0);
				return true;
			}
			else
			{
				func_356(iParam0, func_480(8), 0);
				return true;
			}
			break;
		default:
			func_356(iParam0, func_480(25), 0);
			return true;
	}
	return false;
}

void func_498(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	Global_1915715->f_18065[iParam0] = (&Global_1915715->f_18065[iParam0] - (Global_1915715->f_18065[iParam0] && iParam1));
}

bool func_499(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	if (func_500(iParam0))
	{
		return func_617(func_501(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_500(int iParam0)
{
	if (func_205(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_501(int iParam0, bool bParam1)
{
	if (!func_62(iParam0, 0))
	{
		return func_618(func_373(iParam0), bParam1);
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

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_619(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_503(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_62(iParam0, 0))
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
		func_620(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_504(int iParam0)
{
	if (func_461(iParam0))
	{
		func_356(iParam0, func_358(10), 0);
		return true;
	}
	else if (func_318(&(iParam0->f_79)) > 205f)
	{
		func_356(iParam0, func_358(9), 0);
		func_108(&(iParam0->f_79));
		return true;
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 2:
				if (!func_506(iParam0))
				{
					func_356(iParam0, func_358(6), 0);
					return true;
				}
				break;
			case 1:
			case 3:
				func_356(iParam0, func_358(14), 0);
				return true;
			case 4:
				func_356(iParam0, func_358(16), 0);
				return true;
			case 5:
				if (func_621(iParam0->f_4))
				{
					func_356(iParam0, func_358(26), 0);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_505(int iParam0)
{
	return func_144(Local_18.f_191, iParam0);
}

bool func_506(int iParam0)
{
	return func_320(iParam0, 32);
}

void func_507(int iParam0)
{
	switch (Local_18.f_202)
	{
		case 1:
		case 2:
		case 3:
			if (func_622())
			{
				if (Local_18.f_198 > 1)
				{
					func_356(iParam0, func_358(33), 1);
				}
				else
				{
					func_356(iParam0, func_358(32), 1);
				}
			}
			else if (func_481())
			{
				if (Local_18.f_198 > 1)
				{
					func_356(iParam0, func_358(31), 1);
				}
				else
				{
					func_356(iParam0, func_358(30), 1);
				}
			}
			else
			{
				switch (Local_18.f_202)
				{
					case 2:
						func_356(iParam0, func_358(27), 1);
						break;
					case 1:
						func_356(iParam0, func_358(28), 1);
						break;
					case 3:
						func_356(iParam0, func_358(29), 1);
						break;
				}
			}
			break;
		case 4:
		case 5:
			if (func_481())
			{
				func_356(iParam0, func_358(34), 1);
			}
			else
			{
				func_356(iParam0, func_623(Local_18.f_199, Local_18.f_202, 1), 0);
			}
			break;
	}
}

bool func_508(int iParam0)
{
	if (func_461(iParam0))
	{
		func_356(iParam0, func_358(21), 0);
		return true;
	}
	else if (get_random_int_in_range(0, 5) == 0 && !_0x50f124e6ef188b22(Global_34))
	{
		func_356(iParam0, func_358(20), 0);
		return true;
	}
	else
	{
		switch (Local_18.f_202)
		{
			case 4:
			case 5:
				if (func_481())
				{
					func_356(iParam0, func_358(22), 0);
					return true;
				}
				else
				{
					func_356(iParam0, func_623(Local_18.f_199, Local_18.f_202, 0), 0);
					return true;
				}
				break;
			default:
				fVar0 = _0x6fb76442469abd68(Global_34);
				if ((fVar0 >= 0.5f && fVar0 < 0.6f) || fVar0 > 0.8f)
				{
					func_356(iParam0, func_358(35), 0);
					return true;
				}
				else
				{
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							func_356(iParam0, func_358(8), 0);
							return true;
						case 1:
							func_356(iParam0, func_358(23), 0);
							return true;
						case 2:
							if (Local_18.f_202 == 1)
							{
								func_356(iParam0, func_358(18), 0);
								return true;
							}
							else
							{
								func_356(iParam0, func_358(19), 0);
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

float func_509(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

var func_510(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_511(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_624(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_512(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_35(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	func_513(iParam0, 18, 0, 1);
	func_513(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam4, iParam2);
}

void func_513(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_514(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_517(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_625(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_518(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_519(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_626(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_521(1328661203, func_530(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_521(1328661203, func_530(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_521(1328661203, func_530(), -1591664384, bParam0);
}

int func_520(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_521(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_62(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_626(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_522(bool bParam0)
{
	iVar0 = func_626(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_521(923904168, func_519(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_521(923904168, func_519(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_521(923904168, func_519(bParam0), -740156546, 0);
}

bool func_523(int iParam0, bool bParam1)
{
	if (func_372(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_627();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_524(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_628(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_525(int iParam0, var uParam1, int iParam2)
{
	if (func_629(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_526(bool bParam0)
{
	iVar0 = func_626(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_521(271701509, func_519(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_521(271701509, func_519(bParam0), 12999093, 0);
}

bool func_527(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_372(iParam0);
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
			if (func_630(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_528(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_631(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_529(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_530()
{
	return Var0;
}

bool func_531(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_632(uParam1->f_8, iParam0, iVar0, 2048) || func_632(uParam1->f_8, iParam0, iVar0, 32768)) || func_632(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_632(uParam1->f_8, iParam0, iVar0, 4) || func_632(uParam1->f_8, iParam0, iVar0, 256)) || func_632(uParam1->f_8, iParam0, iVar0, 65536)) || func_632(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_632(uParam1->f_8, iParam0, iVar0, 1) || func_632(uParam1->f_8, iParam0, iVar0, 8)) || func_632(uParam1->f_8, iParam0, iVar0, 65536)) || func_632(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_632(uParam1->f_8, iParam0, iVar0, 1) || func_632(uParam1->f_8, iParam0, iVar0, 16)) || func_632(uParam1->f_8, iParam0, iVar0, 2)) || func_632(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_632(uParam1->f_8, iParam0, iVar0, 8) || func_632(uParam1->f_8, iParam0, iVar0, 4096)) || func_632(uParam1->f_8, iParam0, iVar0, 256)) || func_632(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_532(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_533(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_633(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_633(iParam1, 2, 0, 0);
	return -1;
}

int func_534(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_633(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_535(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_536()
{
	return func_634(func_268(0));
}

bool func_537(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_520(iParam0);
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
			if (!func_635(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_636(iParam0))
			{
				return true;
			}
			break;
	}
	return func_637(iParam0, 0, 0, 0) >= iParam1;
}

int func_538(int iParam0)
{
	return func_639(func_638(iParam0));
}

bool func_539(int iParam0)
{
	fVar0 = (func_640(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

int func_540(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_538(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_2;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_541(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_538(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_1;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_542(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_460(iParam1) || !func_460(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_543(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_544(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_545(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_641(iParam1), ceil(fParam2));
	return true;
}

void func_546(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_547(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_642(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_643(iParam1), fParam2, -1);
	}
}

void func_548(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_538(2);
	}
	uVar0 = Global_1296859->f_21;
	func_644(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_645(iParam0, uVar0, iParam3);
	}
}

bool func_549(int iParam0, bool bParam1)
{
	return func_542(func_54(), iParam0, bParam1);
}

float func_550(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_538(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_551(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_552(float fParam0, float fParam1, float fParam2)
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

void func_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_206(*iParam0);
	iVar1 = func_207(*iParam0);
	iVar2 = func_208(*iParam0);
	iVar3 = func_209(*iParam0);
	iVar4 = func_210(*iParam0);
	iVar5 = func_211(*iParam0);
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
	iVar6 = func_212(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_212(iVar1, iVar0);
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
	func_213(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_554(int iParam0, float fParam1, int iParam2)
{
	if (!func_646(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	func_647(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

void func_555(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_556(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_648(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_649(iParam0))
	{
		return false;
	}
	if (func_650(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_651(iParam0, 1)) || func_4(32768))
	{
		if (!func_651(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_652())
	{
		return false;
	}
	return true;
}

void func_557(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_558(int iParam0)
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

char* func_559(int iParam0)
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

void func_560(int iParam0)
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
	iVar1 = func_393(2);
	func_394(to_float((iParam0 * iVar1)), 0);
}

void func_561(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_653(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_570(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_562(int iParam0)
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
	iVar1 = func_397(2);
	func_398(to_float((iParam0 * iVar1)), 0);
}

void func_563(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_395(2);
	func_396(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_564(int iParam0, bool bParam1, bool bParam2)
{
	func_401(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_565(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

bool func_566(int iParam0)
{
	iVar0 = func_654(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_567(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_568(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_569(int iParam0)
{
	if (!func_568(iParam0))
	{
		return false;
	}
	return &Global_1146212->f_35859.f_919[func_653(iParam0, 1)] == -1;
}

int func_570(int iParam0)
{
	if (!func_568(iParam0))
	{
		return 0;
	}
	iVar0 = func_653(iParam0, 1);
	if (!func_566(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_654(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_655(iParam0, iVar1))
		{
			case 0:
				func_656(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_656(iVar1, iParam0, iVar4);
						func_657(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_657(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_658(iVar1, 1);
				func_659(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_660(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_661(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_571(int iParam0, int iParam1)
{
	if (!func_568(iParam0))
	{
		return false;
	}
	iVar0 = func_653(iParam0, 1);
	if (!func_566(iParam1))
	{
		return false;
	}
	iVar1 = func_654(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return true;
	}
	if (func_566(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_570(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_658(iVar2, 1);
		switch (func_662(iParam0, iVar2))
		{
			case 0:
				func_663(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_659(iVar3, 1);
				iVar4++;
			}
			return true;
		}

int func_572(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (func_664(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_665(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_666(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_667(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_668(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_567(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_669(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_573(int iParam0)
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

struct<2> func_574(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_575(int iParam0, int iParam1)
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

bool func_576(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

void func_577(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_578(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_579(int* iParam0, int iParam1)
{
	if (!func_345(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_188(iParam0, 14);
		}
	}
}

bool func_580(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_581(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return false;
	}
	iVar0 = func_47(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_582(int iParam0, bool bParam1)
{
	if (bParam1 && !func_35(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	_uiprompt_restart_modes((*Global_1951255)[iVar0]->f_3);
}

int func_583(int iParam0)
{
	if (*iParam0 != 30 && iParam0->f_1 != 78)
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

int func_584(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_542(iParam0, iParam1, 1))
	{
		iVar0 = func_207(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_207(iParam0) - func_207(iParam1));
		iVar4 = (func_208(iParam0) - func_208(iParam1));
		iVar5 = (func_209(iParam0) - func_209(iParam1));
		iVar6 = (func_210(iParam0) - func_210(iParam1));
		iVar7 = (func_211(iParam0) - func_211(iParam1));
	}
	else
	{
		iVar0 = func_207(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_207(iParam1) - func_207(iParam0));
		iVar4 = (func_208(iParam1) - func_208(iParam0));
		iVar5 = (func_209(iParam1) - func_209(iParam0));
		iVar6 = (func_210(iParam1) - func_210(iParam0));
		iVar7 = (func_211(iParam1) - func_211(iParam0));
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
		iVar4 = (iVar4 + func_212(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_670(to_float(iVar0 + 1), 0f, 12f));
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

char* func_586(int iParam0)
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

bool func_587(int iParam0)
{
	if (func_331(iParam0->f_1, 128))
	{
		if (func_481())
		{
			func_356(iParam0, func_586(34), 0);
		}
		else
		{
			func_356(iParam0, func_586(42), 0);
		}
		func_464(iParam0->f_1, 128);
		return true;
	}
	iVar0 = func_671();
	if (func_672(iVar0))
	{
		iVar1 = &Global_1939161->f_314[iVar0];
		func_462(iVar1, &uVar2, &uVar3, &uVar4, &iVar5, &iVar6, &iVar7);
		if (((iVar6 == 0 && iVar7 == 0) && iVar5 <= 7) && iParam0->f_42 >= 4)
		{
			if (func_481())
			{
				func_356(iParam0, func_586(38), 0);
				return true;
			}
		}
	}
	if (func_673(iParam0->f_4, Global_34, 22, -1, 0, 0, 0))
	{
		if (func_481() && iParam0->f_42 >= 4)
		{
			if (func_481())
			{
				func_356(iParam0, func_586(35), 0);
			}
			else
			{
				func_356(iParam0, func_586(43), 0);
			}
			return true;
		}
	}
	if (func_331(iParam0->f_1, 256))
	{
		if (iParam0->f_42 <= 4)
		{
			func_356(iParam0, func_586(41), 0);
		}
		func_464(iParam0->f_1, 256);
		return true;
	}
	return false;
}

bool func_588(int iParam0)
{
	if (iParam0->f_22)
	{
		Stack.Push(iParam0);
		Call_Loc(iParam0->f_23);
		return StackVal;
	}
	return false;
}

int func_589(int iParam0)
{
	if (!func_674(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_32.f_2;
}

char* func_590(int iParam0)
{
	switch (*iParam0)
	{
		case 38:
			func_675();
			return func_676(*Global_1959375->f_327[38]);
		case 15:
			func_677();
			return func_676(*Global_1959375->f_327[15]);
		case 39:
			func_678();
			return func_676(*Global_1959375->f_327[39]);
		case 35:
			return "JONES";
		default:
			break;
	}
	iVar0 = func_679(iParam0->f_1);
	switch (iParam0->f_1)
	{
		case 84:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 85:
			return "0479_U_M_M_ValGunsmith_01";
		case 83:
			return "0477_U_M_M_ValDoctor_01";
		case 90:
			return "0480_U_M_M_ValHotelOwner_01";
		case 87:
		case 88:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 86:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 78:
			return "0710_U_M_M_ValBarber_01";
		case 79:
			return "0475_U_M_M_ValBartender_01";
		case 91:
			return "0686_U_M_O_ValBartender_01";
		case 82:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(81);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 0:
			return "0036_U_M_M_AsbGunsmith_01";
		case 1:
		case 2:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 93:
			return "0509_U_M_O_VhTExoticShopkeeper_01";
		case 97:
		case 98:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 94:
			return "1038_U_F_M_VhTBartender_01";
		case 96:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 6:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 19:
			return "0820_S_M_M_Tailor_01_WHITE_01";
		case 13:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 8:
			return "0821_S_M_M_Barber_01_WHITE_01";
		case 14:
		case 15:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 10:
			return "0080_U_M_O_BlWBartender_01";
		case 12:
			return "1099_U_M_O_BLWPhotographer_01";
		case 9:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(40);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 69:
			return "0678_U_M_M_StrGenStoreOwner_01";
		case 74:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 70:
			return "1039_U_M_M_StrWelcomeCenter_01";
		case 71:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 68:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(26);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 45:
			return "0315_U_M_M_NbxDoctor_01";
		case 48:
			return "0317_U_M_M_NbxGeneralStoreOwner_01";
		case 49:
			return "0319_U_M_M_NbxGunsmith_01";
		case 53:
			return "0820_S_M_M_Tailor_01_WHITE_01";
		case 46:
			return "0679_U_M_M_NBXShadyDealer_01";
		case 43:
			return "0821_S_M_M_Barber_01_WHITE_01";
		case 50:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 51:
		case 52:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 54:
			return "0311_U_M_M_NbxBartender_01";
		case 56:
			return "0312_U_M_M_NbxBartender_02";
		case 44:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(5);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 60:
			return "1100_U_M_M_SDPhotographer_01";
		case 33:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 34:
			return "0401_U_M_M_RhdGunsmith_01";
		case 35:
		case 39:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 31:
			return "0694_U_M_M_RhdGenStoreOwner_02";
		case 36:
			return "0397_U_M_M_RhdBartender_01";
		case 30:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(111);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 99:
			return "1036_U_M_M_WalGeneralStoreOwner_01";
		case 100:
		case 101:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 41:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 22:
			return "EMR_Son1";
		case 24:
		case 25:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 102:
			return "1084_U_F_M_TumGeneralStoreOwner_01";
		case 103:
			return "1085_U_M_M_TumGunsmith_01";
		case 105:
			return "1087_U_M_M_TumBartender_01";
		case 104:
			if (is_string_null_or_empty(Global_1959375->f_327[10]))
			{
				func_682(121);
			}
			return func_676(*Global_1959375->f_327[10]);
		case 107:
			if (is_string_null_or_empty(Global_1959375->f_327[9]))
			{
				func_681();
			}
			return func_676(*Global_1959375->f_327[9]);
		case 108:
			return "1076_U_M_M_ArmGeneralStoreOwner_01";
		case 110:
			return "1077_U_M_O_ArmBartender_01";
		case 111:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 26:
			return "0216_U_F_M_LagMother_01";
		case 117:
		case 118:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
		case 27:
		case 28:
			if (is_string_null_or_empty(Global_1959375->f_327[2]))
			{
				func_680(iVar0);
			}
			return func_676(*Global_1959375->f_327[2]);
	}
	return "SHOPKEEPER_TEST_PED";
}

void func_591(int iParam0, char* sParam1)
{
	if (func_2() == 0)
	{
		return;
	}
	if (func_320(iParam0, 128))
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = func_590(iParam0);
	}
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0->f_4))
	{
		set_ambient_voice_name(iParam0->f_4, sParam1);
		func_298(iParam0, 128);
	}
}

void func_592(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_683(uParam0, iParam1, sParam2))
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

Vector3 func_593(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_594(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_684(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_595(int iParam0)
{
	if (func_144(Global_1051439->f_72[*iParam0]->f_50, 1))
	{
		return false;
	}
	if (iParam0->f_58 == 5 || iParam0->f_58 == 0)
	{
		if ((iParam0->f_61 == 9 || iParam0->f_61 == 10) || iParam0->f_61 == 11)
		{
			return true;
		}
	}
	else if ((iParam0->f_60 == 9 || iParam0->f_60 == 10) || iParam0->f_60 == 11)
	{
		return true;
	}
	return false;
}

Vector3 func_596()
{
	return 0f, 0f, 0f;
}

bool func_597()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

char* func_598(int iParam0)
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

bool func_599(int iParam0)
{
	return iParam0 != 0;
}

bool func_600(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_601(int iParam0)
{
	return func_320(iParam0, 64);
}

char* func_602(int iParam0)
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

void func_603(int iParam0)
{
	if (!func_595(iParam0))
	{
		return;
	}
	switch (iParam0->f_58)
	{
		case 1:
		case 2:
			if (!_0x916b8e075abc8b4e(iParam0->f_4, 1) && !network_get_entity_is_networked(iParam0->f_4))
			{
				if (func_685(iParam0))
				{
					_0xaab050da48b57978(iParam0->f_4, "Default_Brave", Global_34, -1, 4);
				}
				else
				{
					_0xaab050da48b57978(iParam0->f_4, "Default_Scared", Global_34, -1, 4);
				}
				_0xe7fa07624574b79a(iParam0->f_4, Global_34, 2, 1, -1f, 1, 0, 0, 0);
			}
			break;
		case 3:
		case 4:
			break;
		case 0:
		case 5:
			if (_0x916b8e075abc8b4e(iParam0->f_4, 1) && !network_get_entity_is_networked(iParam0->f_4))
			{
				_0x935cf6e42baf7f4d(iParam0->f_4);
				_0x541e5b41dca45828(iParam0->f_4, 1, 0);
			}
			break;
	}
}

void func_604(int iParam0, int iParam1)
{
	set_bit(&(iParam0->f_56), iParam1);
}

void func_605(int iParam0, int iParam1, int iParam2)
{
	func_686(iParam0, iParam0->f_58);
	if (iParam0->f_61 == iParam2 && iParam0->f_42 <= 3)
	{
		if (iParam0->f_58 == 5 || (iParam0->f_58 == 0 && iParam0->f_59 != 5))
		{
			bVar0 = true;
			iParam1 = iParam0->f_59;
			iParam0->f_53 = iParam0->f_54 + 1;
		}
	}
	iParam0->f_59 = iParam0->f_58;
	iParam0->f_58 = iParam1;
	iParam0->f_61 = iParam0->f_60;
	iParam0->f_60 = iParam2;
	iParam0->f_54 = iParam0->f_53;
	if (!bVar0)
	{
		iParam0->f_53 = 0;
	}
	if (iParam0->f_59 == 0)
	{
		iParam0->f_59 = iParam1;
		iParam0->f_61 = iParam2;
	}
	iParam0->f_56 = 0;
	func_466(iParam0, 0);
	func_687(iParam0, iParam1, iParam2);
	if (get_random_int_in_range(0, 3) == 0)
	{
		func_297(iParam0, 2048);
	}
	else
	{
		func_298(iParam0, 2048);
	}
}

bool func_606(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_57, iParam1);
}

void func_607(int iParam0)
{
	iParam0->f_55 = -1;
	iParam0->f_50 = 0;
	iParam0->f_43 = "";
	func_297(iParam0, 4096);
}

void func_608(int iParam0, int iParam1)
{
	clear_bit(&(iParam0->f_57), iParam1);
}

void func_609(int iParam0, int iParam1)
{
	if (!func_688(iParam0))
	{
		return;
	}
	if (iParam1 == 12 && iParam0->f_60 != 12)
	{
		if (iParam0->f_58 < 6)
		{
			func_605(iParam0, 6, iParam1);
		}
	}
}

void func_610(int iParam0, int iParam1)
{
	if (iParam0->f_60 != iParam1)
	{
		if (iParam1 == 0)
		{
			if ((iParam0->f_61 != 3 && iParam0->f_61 != 7) && iParam0->f_61 != 6)
			{
				func_605(iParam0, 5, iParam1);
			}
		}
		else
		{
			func_605(iParam0, 1, iParam1);
		}
	}
}

bool func_611(int iParam0)
{
	switch (iParam0->f_50)
	{
		case 0:
			if (!func_483(iParam0, iParam0->f_55))
			{
				return false;
			}
			func_459(iParam0);
			func_466(iParam0, 1);
			break;
		case 1:
			if (func_689(iParam0))
			{
				func_466(iParam0, 4);
			}
			break;
		case 4:
			if (is_string_null_or_empty(iParam0->f_43))
			{
				func_466(iParam0, 6);
			}
			else if (func_469(iParam0, iParam0->f_43))
			{
				iParam0->f_53++;
				func_466(iParam0, 0);
			}
			else
			{
				func_468(iParam0);
				func_466(iParam0, 1);
			}
			break;
		case 6:
			iParam0->f_53 = 0;
			func_466(iParam0, 0);
			return true;
	}
	return false;
}

bool func_612(int iParam0)
{
	if (!func_688(iParam0))
	{
		return false;
	}
	switch (iParam0->f_60)
	{
		case 9:
		case 13:
			return true;
	}
	return false;
}

void func_613(int iParam0)
{
	if (!func_331(iParam0->f_1, 64))
	{
		func_56(iParam0->f_1, 64);
	}
}

void func_614(int iParam0)
{
	iParam0->f_55 = 1;
	if (func_320(iParam0, 2048))
	{
		return;
	}
	switch (iParam0->f_61)
	{
		case 2:
			iParam0->f_55 = 30;
			break;
		case 8:
			iParam0->f_55 = 10;
			break;
		case 9:
		case 10:
		case 11:
			iParam0->f_55 = 5;
			break;
	}
}

bool func_615(int iParam0)
{
	if (func_456(player_id(), 1, 0, 1) || func_144(Global_1051439->f_72[*iParam0]->f_50, 1))
	{
		return true;
	}
	if (func_310(*iParam0, iParam0->f_1) || iParam0->f_49 == 10)
	{
		return true;
	}
	if ((func_461(iParam0) && !func_506(iParam0)) && ((iParam0->f_61 == 9 || iParam0->f_61 == 10) || iParam0->f_61 == 11))
	{
		return true;
	}
	return false;
}

bool func_616(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_690(func_121(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1915715->f_3[iParam0]->f_445 >= iVar1)
		{
			return Global_1915715->f_3[iParam0]->f_446;
		}
		iVar0 = (func_691(iParam1) || func_693(func_692(iParam0)));
		Global_1915715->f_3[iParam0]->f_445 = iVar1;
		Global_1915715->f_3[iParam0]->f_446 = iVar0;
	}
	return iVar0;
}

bool func_617(int iParam0, int iParam1, bool bParam2)
{
	if (!func_694(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_695(iParam0, iParam1);
	}
	return true;
}

int func_618(int iParam0, bool bParam1)
{
	if (!func_518(iParam0, 2))
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

bool func_619(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_694(iParam0))
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
		func_696(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_620(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_372(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_621(int iParam0)
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
		if (((does_entity_exist(iVar3) && is_entity_a_ped(iVar3)) && func_355(iVar3)) && has_entity_clear_los_to_entity(iParam0, iVar3, 17))
		{
			Local_18.f_92 = iVar3;
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

bool func_622()
{
	return &Global_1940085 == 2;
}

char* func_623(int iParam0, int iParam1, bool bParam2)
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

bool func_624(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_625(int iParam0, int iParam1)
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
			return 735520874;
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

int func_626(bool bParam0)
{
	if (func_2() == -1)
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

bool func_627()
{
	return (func_697(-1185145312, 0, 0, 0) > 0 && func_698(func_521(889965687, func_519(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_628(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_529(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_521(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_626(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_626(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_629(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_626(0);
	*uParam1 = { func_521(iParam0, func_522(0), iParam3, 0) };
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

bool func_630(int iParam0, int iParam1, int iParam2)
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

bool func_631(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_626(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_632(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_133(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_699(iParam0, iParam1, iParam2, iParam3);
}

bool func_634(struct<2> Param0)
{
	return func_700(Param0, 1, 4);
}

bool func_635(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_701(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_702("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_703(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_704(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_705(iVar1);
				return true;
			}
			iVar3++;
		}
		func_705(iVar1);
	}
	return false;
}

bool func_636(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_372(iParam0);
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
	iVar1 = func_706(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_707(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_708(iParam0);
	iVar2 = func_707(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_637(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_520(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_701(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_709(iParam0, 0);
	}
	if (func_529(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_626(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_710(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_626(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_638(int iParam0)
{
	return func_711(&(Global_1956200->f_1565), iParam0, 1);
}

int func_639(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_640(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_712(2)));
}

int func_641(int iParam0)
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

char* func_642(int iParam0)
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

char* func_643(int iParam0)
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

void func_644(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_645(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_538(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_646(int iParam0)
{
	if (func_558(iParam0))
	{
		return true;
	}
	else if (func_713(iParam0))
	{
		return true;
	}
	return false;
}

void func_647(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_538(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_648(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_649(int iParam0)
{
	if (func_651(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_650(int iParam0)
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

bool func_651(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_652()
{
	if (!func_714())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_654(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_655(int iParam0, int iParam1)
{
	iVar0 = func_715(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_658(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_656(int iParam0, int iParam1, int iParam2)
{
	if (!func_568(iParam1))
	{
		return 0;
	}
	if (!func_716(iParam0))
	{
		return 0;
	}
	iVar0 = func_658(iParam0, 1);
	func_717(iParam0, iParam1, iParam2);
	if (func_718(*Global_1146212->f_35859.f_3116[iVar0]) && func_719(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_720(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_721(vVar1))
		{
			if (func_722(vVar1.x, vVar1.y, vVar1.z))
			{
				func_723(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_724(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_724(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_657(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_658(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_659(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_660(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_661(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_662(int iParam0, int iParam1)
{
	iVar0 = func_715(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_658(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_663(int iParam0, int iParam1, int iParam2)
{
	if (!func_568(iParam1))
	{
		return 0;
	}
	if (!func_716(iParam0))
	{
		return 0;
	}
	iVar0 = func_658(iParam0, 1);
	if (!func_725(iParam2))
	{
		return 0;
	}
	bVar1 = func_718(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_726(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_727(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_717(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_722(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_723(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_664(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_665(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_666(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_667(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_668(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_669(int iParam0)
{
	iVar0 = func_653(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_670(float fParam0, float fParam1, float fParam2)
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

int func_671()
{
	return Global_1896622->f_41;
}

bool func_672(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_673(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_674(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_675()
{
	StringCopy(Global_1959375->f_327[38], "MADAM_NAZAR", 64);
}

var func_676(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_677()
{
	StringCopy(Global_1959375->f_327[15], "GUS", 64);
}

void func_678()
{
	StringCopy(Global_1959375->f_327[39], "HARRIET", 64);
}

int func_679(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_121() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

void func_680(int iParam0)
{
	switch (iParam0)
	{
		case 98:
			StringCopy(Global_1959375->f_327[2], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1959375->f_327[1], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 40:
			StringCopy(Global_1959375->f_327[2], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1959375->f_327[1], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1959375->f_327[2], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1959375->f_327[1], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		default:
			break;
	}
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1959375->f_327[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1959375->f_327[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1959375->f_327[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1959375->f_327[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1959375->f_327[2], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1959375->f_327[1], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_681()
{
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1959375->f_327[9], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1959375->f_327[9], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1959375->f_327[9], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_682(int iParam0)
{
	if (iParam0 == 81)
	{
		StringCopy(Global_1959375->f_327[10], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 121)
	{
		StringCopy(Global_1959375->f_327[10], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1959375->f_327[10], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1959375->f_327[10], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1959375->f_327[10], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

bool func_683(var uParam0, int iParam1, char* sParam2)
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

void func_684(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&uParam0, uParam3[iVar0], 0))
				{
					add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

bool func_685(int iParam0)
{
	switch (*iParam0)
	{
		case 6:
		case 10:
		case 22:
		case 24:
		case 25:
		case 33:
		case 38:
		case 39:
			return true;
		default:
			break;
	}
	if (func_121() == 98 && *iParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_686(int iParam0, int iParam1)
{
	set_bit(&(iParam0->f_57), iParam1);
}

void func_687(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_54();
		Global_5860.f_1531[iParam0->f_1] = iVar1;
		func_463(iParam0->f_4, Global_34, iParam0->f_4, 0, 0, 10);
	}
}

bool func_688(int iParam0)
{
	if (*iParam0 == 15 || *iParam0 == 39)
	{
		return false;
	}
	return true;
}

bool func_689(int iParam0)
{
	iParam0->f_43 = "";
	iParam0->f_55 = -1;
	if (iParam0->f_38)
	{
		if (func_728(iParam0))
		{
			return true;
		}
	}
	if (iParam0->f_52 == 0)
	{
		switch (iParam0->f_58)
		{
			case 1:
				switch (iParam0->f_60)
				{
					case 2:
						switch (iParam0->f_53)
						{
							case 0:
								iVar0 = 0;
								if (func_335(*iParam0))
								{
									iVar0 = 2;
								}
								else if (func_156(iParam0->f_4, Global_34, 1) > 4f)
								{
									iVar0 = 1;
								}
								if (iVar0 == 0)
								{
									func_356(iParam0, func_357(7), 0);
								}
								else
								{
									func_356(iParam0, func_357(8), 0);
								}
								iParam0->f_55 = 4;
								break;
							case 1:
								func_356(iParam0, func_357(3), 0);
								iParam0->f_55 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(6), 0);
								iParam0->f_55 = 5;
								break;
						}
						break;
					case 8:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(16), 0);
								if (!func_320(iParam0, 2048))
								{
									iParam0->f_55 = 5;
								}
								break;
						}
						break;
					case 9:
					case 12:
						switch (iParam0->f_53)
						{
							case 0:
								if (func_685(iParam0))
								{
									func_356(iParam0, func_357(14), 0);
								}
								else
								{
									iVar1 = func_352(Global_34, 1, 0, 0);
									if (iVar1 != 0 && _0x705be297eebdb95d(iVar1))
									{
										func_356(iParam0, func_357(12), 0);
									}
									else
									{
										func_356(iParam0, func_357(2), 0);
									}
								}
								iParam0->f_55 = 10;
								break;
						}
						break;
					case 6:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(9), 0);
								if (!func_320(iParam0, 2048))
								{
									iParam0->f_55 = 10;
								}
								break;
						}
						break;
					case 7:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(10), 0);
								if (!func_320(iParam0, 2048))
								{
									iParam0->f_55 = 10;
								}
								break;
						}
						break;
					case 3:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(11), 0);
								if (!func_320(iParam0, 2048))
								{
									iParam0->f_55 = 10;
								}
								break;
						}
						break;
					case 13:
						switch (iParam0->f_53)
						{
							case 0:
								if (!is_ped_in_combat(Global_34, 0))
								{
									if (func_461(iParam0))
									{
										func_356(iParam0, func_357(35), 0);
									}
									else
									{
										func_356(iParam0, func_357(34), 0);
									}
								}
								if (!func_320(iParam0, 2048))
								{
									iParam0->f_55 = 5;
								}
								break;
						}
						break;
				}
				break;
			case 2:
				switch (iParam0->f_60)
				{
					case 2:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(19), 0);
								iParam0->f_55 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(20), 0);
								iParam0->f_55 = 5;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
					case 8:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(4), 0);
								iParam0->f_55 = 12;
								break;
						}
						break;
				}
				break;
			case 3:
				switch (iParam0->f_60)
				{
					case 8:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(5), 0);
								iParam0->f_55 = 10;
								break;
						}
						break;
					case 2:
						switch (iParam0->f_53)
						{
							case 0:
								iVar2 = 0;
								if (func_156(iParam0->f_4, Global_34, 1) > 4f)
								{
									iVar2 = 1;
								}
								if (iVar2 == 0)
								{
									func_356(iParam0, func_357(7), 0);
								}
								else
								{
									func_356(iParam0, func_357(8), 0);
								}
								iParam0->f_55 = 5;
								break;
						}
						break;
					case 4:
					case 5:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(21), 0);
								iParam0->f_55 = 15;
								break;
							case 1:
								func_356(iParam0, func_357(26), 0);
								iParam0->f_55 = 1;
								break;
							default:
								if (func_271(iParam0->f_4, 0, 0, 0))
								{
									func_356(iParam0, func_357(3), 0);
									iParam0->f_55 = 30;
								}
								else
								{
									func_356(iParam0, func_357(27), 0);
									iParam0->f_55 = 2;
								}
								break;
						}
						break;
					case 9:
					case 12:
						switch (iParam0->f_53)
						{
							case 0:
								if (func_685(iParam0))
								{
									func_356(iParam0, func_357(15), 0);
								}
								else
								{
									func_356(iParam0, func_357(22), 0);
								}
								iParam0->f_55 = 4;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(19), 0);
								iParam0->f_55 = 15;
								break;
						}
						break;
				}
				break;
			case 4:
				switch (iParam0->f_60)
				{
					case 2:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(26), 0);
								iParam0->f_55 = 10;
								break;
							default:
								func_356(iParam0, func_357(3), 0);
								iParam0->f_55 = 15;
								break;
						}
						break;
					case 8:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(26), 0);
								iParam0->f_55 = 15;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(11), 0);
								iParam0->f_55 = 15;
								break;
							case 1:
								func_356(iParam0, func_357(19), 0);
								iParam0->f_55 = 10;
								break;
							default:
								func_356(iParam0, func_357(22), 0);
								iParam0->f_55 = 60;
								break;
						}
						break;
					case 13:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(5), 0);
								iParam0->f_55 = 3;
								break;
						}
						break;
				}
				break;
			case 6:
				switch (iParam0->f_53)
				{
					case 0:
						if (func_685(iParam0))
						{
							func_356(iParam0, func_357(28), 0);
						}
						else
						{
							func_356(iParam0, func_357(29), 0);
						}
						iParam0->f_55 = 0;
						break;
				}
				break;
			case 5:
				if (func_335(*iParam0) && _0x7f9b9791d4cb71f6(iParam0->f_4, Global_34, 0, 0) != 1)
				{
					iParam0->f_43 = "";
				}
				else
				{
					switch (iParam0->f_59)
					{
						case 1:
						case 2:
							switch (iParam0->f_61)
							{
								case 2:
								case 8:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(30), 0);
											iParam0->f_55 = 10;
											break;
									}
									break;
								case 9:
								case 12:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(31), 0);
											iParam0->f_55 = 5;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(32), 0);
											iParam0->f_55 = 10;
											break;
									}
									break;
								case 3:
								case 6:
								case 7:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(33), 0);
											iParam0->f_55 = 2;
											break;
									}
									break;
								case 13:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(31), 0);
											iParam0->f_55 = 2;
											break;
									}
									break;
							}
							break;
						case 3:
						case 4:
							switch (iParam0->f_61)
							{
								case 3:
								case 6:
								case 7:
								case 8:
								case 13:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(31), 0);
											iParam0->f_55 = 10;
											break;
									}
									break;
								case 2:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(31), 0);
											iParam0->f_55 = 10;
											break;
									}
									break;
								case 9:
								case 12:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(31), 0);
											iParam0->f_55 = 2;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iParam0->f_53)
									{
										case 0:
											func_356(iParam0, func_357(32), 0);
											iParam0->f_55 = 10;
											break;
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
		switch (iParam0->f_58)
		{
			case 1:
			case 2:
			case 3:
				switch (iParam0->f_60)
				{
					case 9:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(13), 0);
								iParam0->f_55 = 8;
								break;
						}
						break;
					case 3:
					case 6:
					case 7:
						switch (iParam0->f_53)
						{
							case 0:
								func_356(iParam0, func_357(11), 0);
								iParam0->f_55 = 8;
								break;
						}
						break;
				}
				break;
		}
	}
	return true;
}

int func_690(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_691(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	if ((((((((((iVar0 == 2 && func_729(27)) || (iVar0 == 15 && iParam0 != 63)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 78) || iVar0 == 30) || iVar0 == 17) || iVar0 == 16) || iVar0 == 9) || func_451(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_692(int iParam0)
{
	if (iParam0 == 12)
	{
		return 65539;
	}
	return 7;
}

int func_693(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_209(func_54());
	if (func_144(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_144(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_695(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

void func_696(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_372(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_697(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_730(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_626(bParam1), iParam0, iParam3);
}

int func_698(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_731(&uParam0, iParam4, bParam5, iParam6);
}

void func_699(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_732(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_700(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_269(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_733(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_701(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_520(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_205(iParam0, 1399091007))
	{
		func_734(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_702(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_626(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_703(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_704(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_705(int iParam0)
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

int func_706(int iParam0)
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

int func_707(var uParam0, int iParam1)
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

int func_708(int iParam0)
{
	iVar0 = func_372(iParam0);
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

int func_709(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_735(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_736(&Var0, func_522(0));
	}
	if (!func_737(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_705(iVar14);
	return uVar15;
}

struct<4> func_710(int iParam0, bool bParam1)
{
	Var0 = { func_384(iParam0, bParam1, 0) };
	return func_521(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_711(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_393(2) * 2;
		case 1:
			return func_397(2) * 2;
		case 2:
			return func_395(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_713(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_714()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_715(int iParam0)
{
	if (func_664(iParam0))
	{
		return (func_572(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_716(int iParam0)
{
	iVar0 = func_658(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_717(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_653(iParam1, 1);
	iVar1 = func_658(iParam0, 1);
	iVar2 = func_654(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_738(iVar3, 1);
		if (!func_739(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_740(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_741(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_742(iVar6))
		{
		}
		else
		{
			iVar8 = func_743(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_744(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_718(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_719(int iParam0, int iParam1)
{
	if (!func_716(iParam0))
	{
		return false;
	}
	if (!func_745(iParam1))
	{
		return false;
	}
	iVar0 = func_746(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_720(int iParam0)
{
	iVar0 = func_747(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_721(vector3 vParam0)
{
	if (!func_716(vParam0.x))
	{
		return false;
	}
	if (!func_568(vParam0.y))
	{
		return false;
	}
	if (!func_725(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_722(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_653(iParam1, 1);
	iVar1 = func_658(iParam0, 1);
	iVar2 = func_654(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_738(iVar3, 1);
		if (!func_739(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_740(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_748(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_742(iVar6))
		{
		}
		else if (!func_749(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_743(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_750(iVar6);
			}
		}
		iVar7++;
	}
	func_751(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_723(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_745(iParam0))
	{
		return;
	}
	iVar0 = func_746(iParam0, 1);
	if (!func_716(iParam1))
	{
		return;
	}
	if (!func_568(iParam2))
	{
		return;
	}
	if (!func_725(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_724(int iParam0)
{
	if (!func_745(iParam0))
	{
		return;
	}
	iVar0 = func_746(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_725(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_726(int iParam0)
{
	if (!func_745(iParam0))
	{
		return false;
	}
	iVar0 = func_752(iParam0);
	if (!func_716(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_727(int iParam0)
{
	if (!func_745(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_746(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

bool func_728(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_39);
	return StackVal;
}

bool func_729(int iParam0)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	return func_754(iParam0);
}

bool func_730(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_731(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_755(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_732(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_756(&(uParam0->f_4));
}

int func_733(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_270(Param0);
	}
	return -1;
}

void func_734(int iParam0, var uParam1, var uParam2)
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

struct<14> func_735(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_736(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_737(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_626(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_738(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
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

bool func_739(int iParam0)
{
	iVar0 = func_738(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_740(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_757(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_741(int iParam0)
{
	if (!func_739(iParam0))
	{
		return;
	}
	iVar0 = func_738(iParam0, 1);
	if (!func_758(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_759(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_760(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_742(int iParam0)
{
	iVar0 = func_743(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_744(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_761();
			break;
		case -2103256604:
			func_762();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_763(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_763(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_763(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_404(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_763(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_765(func_764(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_766();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_758(17);
			break;
		case -824728332:
			func_758(16);
			break;
	}
}

bool func_745(int iParam0)
{
	iVar0 = func_746(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_747(int iParam0)
{
	iVar0 = func_752(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_658(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_767(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_768(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_748(int iParam0)
{
	if (!func_739(iParam0))
	{
		return;
	}
	iVar0 = func_738(iParam0, 1);
	if (!func_758(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_759(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_760(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_749(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_769(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_750(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_761();
			break;
		case -2103256604:
			func_762();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_763(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_763(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_763(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_404(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_763(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_764(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_770(iParam0, 0));
			func_771(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_770(iParam0, 1));
			func_771(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_770(iParam0, 2));
			func_771(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_770(iParam0, 3));
			func_771(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_764(iParam0);
			func_771(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_764(iParam0);
			func_771(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_772();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_758(17);
			break;
		case -824728332:
			func_758(16);
			break;
	}
}

void func_751(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_773(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_774(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

int func_752(int iParam0)
{
	if (!func_745(iParam0))
	{
		return -1;
	}
	iVar0 = func_746(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_753(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_755(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_626(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_631(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_756(var uParam0)
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

float func_757(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_775(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_758(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_759(int iParam0)
{
	iVar0 = func_760(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_760(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
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

void func_761()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_133((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_762()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_765(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_766()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

bool func_767(int iParam0, int iParam1)
{
	if (!func_716(iParam0))
	{
		return false;
	}
	iVar0 = func_658(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_718(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_746(iVar2, 1)];
		Var4 = { func_768(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_776() && !func_777())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_776())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_715(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_715(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_715(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_778(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_779(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_715(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_768(int iParam0)
{
	iVar0 = func_658(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_769(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_775(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_770(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_771(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_772()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_773(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_774(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_775(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_780(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_776()
{
	return Global_1572887->f_6;
}

bool func_777()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_269(func_268(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_419(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_778(var uParam0)
{
	if (func_781(uParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) != 1)
		{
			func_782(uParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) == 1;
}

bool func_779(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_780(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_781(var uParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), uParam0))
	{
		return true;
	}
	return false;
}

void func_782(int iParam0)
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
		func_783(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_784(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_783(int iParam0)
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
	func_784(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_784(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

