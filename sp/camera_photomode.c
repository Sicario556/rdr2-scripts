void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	fLocal_10 = -10f;
	fLocal_14 = 18.88f;
	fLocal_15 = -18.88f;
	fLocal_16 = 18.88f;
	fLocal_17 = -18.88f;
	fLocal_18 = 18.88f;
	fLocal_19 = -18.88f;
	iLocal_22 = _get_system_time();
	sLocal_24 = "PhotoMode_Bounds";
	fLocal_25 = 1f;
	fLocal_26 = 1f;
	fLocal_27 = 0.1f;
	bLocal_30 = true;
	sLocal_44 = "adjust_loop_a";
	sLocal_45 = "adjust_loop_b";
	sLocal_46 = "adjust_oneshot_a";
	sLocal_47 = "adjust_oneshot_b";
	StringCopy(&cLocal_64, "", 32);
	StringCopy(&cLocal_68, "", 32);
	StringCopy(&cLocal_72, "", 32);
	StringCopy(&cLocal_77, "", 64);
	StringCopy(&cLocal_85, "", 32);
	sLocal_89 = "CameraViewfinder";
	sLocal_90 = "PhotoMode_TakePicture";
	sLocal_91 = "CameraTransitionBlink";
	sLocal_92 = "No_PostFx_Applied";
	sLocal_93 = "No_PostFx_Applied";
	bLocal_102 = true;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	iLocal_398 = 4;
	iLocal_399 = -1534086282;
	iLocal_401 = -193491261;
	if (has_force_cleanup_occurred(515))
	{
		func_1(&Local_103, 0);
		func_2();
		terminate_this_thread();
	}
	if (func_3())
	{
		set_bit(Global_1357505, 3);
		func_4(0);
	}
	if (_0xd6bd313cfa41e57a(2139949496) || _0xd6bd313cfa41e57a(-416594956))
	{
		bLocal_20 = true;
	}
	if (!animpostfx_is_running(sLocal_90))
	{
		_0x2804658eb7d8a50b(4, -508131217);
	}
	while (bLocal_102)
	{
		_0xc37792a3f9c90771();
		set_input_exclusive(0, 789834906);
		if (iLocal_50 != 1)
		{
		}
		else
		{
			func_5();
		}
		if (func_6(&(Local_103.f_1[2]), 1))
		{
			if (is_bit_set(&Global_1357510, 5))
			{
				func_7(&(Local_103.f_1[2]), 0, 1);
			}
			else
			{
				func_7(&(Local_103.f_1[2]), 1, 1);
			}
		}
		if (func_6(&(Local_103.f_1[8]), 1))
		{
			if (bVar392)
			{
				func_7(&(Local_103.f_1[8]), 0, 1);
			}
			else
			{
				func_7(&(Local_103.f_1[8]), 1, 1);
			}
		}
		func_8(2);
		func_8(4);
		func_8(8);
		func_8(16);
		func_8(32);
		func_8(128);
		func_8(256);
		func_8(512);
		func_8(1024);
		func_8(2048);
		func_8(4096);
		func_8(16384);
		func_8(1);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -711536720, false);
		if (bLocal_102)
		{
			if (func_9(&Local_103))
			{
				bLocal_102 = true;
			}
			else
			{
				bLocal_102 = false;
			}
		}
		func_10(Local_103);
		func_11(&Local_103);
		func_12(&(Local_103.f_90), &(Local_103.f_91), &(Local_103.f_94), &(Local_103.f_95), 1301263553, -39308912, -1450761377, -771458680, 2);
		if (func_13(&(Local_103.f_1[2]), 1) || func_13(&(Local_103.f_1[7]), 1))
		{
			iLocal_94 = 1;
			if (func_14(&Local_103) != 3)
			{
				if (func_14(&Local_103) == 6)
				{
					func_15();
					if (_0x4ad019591e94c064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					iLocal_248 = get_game_timer();
					bLocal_249 = true;
					func_16();
					Global_1357507 = 0;
					func_17(&Local_103, 4);
				}
			}
			else
			{
				func_17(&Local_103, 15);
			}
		}
		func_18(&Local_103);
		iVar0 = func_14(&Local_103);
		if (func_19())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_50 = 0;
					uLocal_58 = _databinding_add_data_container_from_path("", "playerCamera");
					uLocal_59 = _databinding_add_data_string(uLocal_58, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_17(&Local_103, 1);
				}
				else
				{
					if (func_22(&Local_103))
					{
						_0xa42edf1e88734a7e();
						iLocal_50 = 1;
						func_23(&Local_103);
					}
					func_17(&Local_103, 1);
				}
				break;
			case 1:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_24();
				Local_103.f_89 = 0;
				func_25();
				iLocal_31 = get_game_timer();
				iLocal_32 = get_sound_id();
				iLocal_33 = get_sound_id();
				iLocal_36 = get_sound_id();
				iLocal_37 = get_sound_id();
				iLocal_40 = get_sound_id();
				iLocal_41 = get_sound_id();
				func_17(&Local_103, 2);
				_0x7c709c01d43d94cd();
				break;
			case 2:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				if (func_26())
				{
					if (_0x2db524750dc41ed4())
					{
						if (func_27(iLocal_31, iLocal_22))
						{
							if (func_28())
							{
								func_29(1);
								if (func_30())
								{
									Local_103.f_89 = &Global_1357504;
									func_31();
									func_17(&Local_103, 14);
								}
								else
								{
									func_17(&Local_103, 12);
								}
								_hide_hud_component(-1404924319);
								func_32();
							}
						}
					}
				}
				else if (func_27(iLocal_31, iLocal_22) && func_33(Global_35, 1, 0, 0) == -1016714371)
				{
					func_17(&Local_103, 3);
				}
				break;
			case 4:
				func_11(&Local_103);
				_0x2804658eb7d8a50b(5, 499451365);
				if (bLocal_249)
				{
					if ((get_game_timer() - iLocal_248) > 500)
					{
						_display_hud_component(-1404924319);
						set_cam_active(Local_103.f_32, false);
						render_script_cams(false, false, 3000, true, false, 0);
						detach_cam(Local_103.f_32);
						destroy_cam(Local_103.f_32, false);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_17(&Local_103, 3);
						func_34();
						bLocal_249 = false;
						func_35();
					}
				}
				break;
			case 3:
				_0x2804658eb7d8a50b(5, 499451365);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((get_game_timer() - iLocal_240) > 100)
				{
					func_36();
					iLocal_240 = get_game_timer();
				}
				if (func_22(&Local_103))
				{
					func_37(&Local_103);
					func_38(3);
					func_39(1);
					func_23(&Local_103);
				}
				set_player_forced_aim(get_player_index(), false, 0, -1, false);
				if (iLocal_94 == 1 && &Global_1357508 == 0)
				{
					if (is_control_released(0, 2003789289))
					{
						iLocal_94 = 0;
					}
					else
					{
						iLocal_94 = 1;
					}
				}
				if (&Global_1357508 == 1)
				{
					iLocal_94 = 0;
				}
				if (bLocal_239 && iLocal_94 == 0)
				{
					func_7(&(Local_103.f_1[0]), 1, 1);
					if (func_40(&(Local_103.f_1[0]), 1) || &Global_1357508 == 1)
					{
						if (!func_26())
						{
							clear_ped_tasks(player_ped_id(), 1, 0);
							disable_control_action(0, 1301263553, false);
							disable_control_action(0, -39308912, false);
						}
						if (&Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_16();
						_hide_hud_component(-1404924319);
						func_41();
						iLocal_216 = get_game_timer();
						func_17(&Local_103, 5);
					}
				}
				else
				{
					func_7(&(Local_103.f_1[0]), 0, 1);
				}
				if ((get_game_timer() - iLocal_219) > 600)
				{
					func_42();
					iLocal_219 = get_game_timer();
				}
				if (bLocal_218)
				{
					func_7(&(Local_103.f_1[1]), 1, 1);
					if (func_40(&(Local_103.f_1[1]), 1))
					{
						if (func_43(Global_35, 0))
						{
						}
						else
						{
							iLocal_245 = 0;
							iLocal_247 = 0;
							func_16();
							func_17(&Local_103, 8);
							if (!func_44(&uLocal_242))
							{
								func_45(&uLocal_242, 1);
							}
							if (_0x4ad019591e94c064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								_play_sound_from_entity("Place_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_7(&(Local_103.f_1[1]), 0, 1);
				}
				break;
			case 5:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				if (func_46() && (get_game_timer() - iLocal_216) > 500)
				{
					func_47();
					if (!func_26())
					{
						clear_ped_tasks(player_ped_id(), 1, 0);
					}
					Local_103.f_68 = { get_entity_coords(Global_35, true, false) };
					Local_103.f_71 = { get_entity_rotation(Global_35, 2) };
					Local_103.f_83 = { Local_103.f_71, Local_103.f_71.f_1, Local_103.f_71.f_2 };
					Local_103.f_77 = { _get_object_offset_from_coords(Local_103.f_68, Local_103.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_103.f_110 = 0;
					Local_103.f_83 = { 0f, 0f, 0f };
					Local_103.f_82 = 0f;
					Local_103.f_81 = 0f;
					Local_103.f_32 = create_cam_with_params("KIT_CAMERA", Local_103.f_77, Local_103.f_83, 65f, false, 2);
					attach_cam_to_ped_bone(Local_103.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					set_cam_near_clip(Local_103.f_32, 0.25f);
					Local_103.f_33 = 5f;
					Local_103.f_33.f_1 = 2f;
					Local_103.f_33.f_2 = 128f;
					Local_103.f_33.f_3 = 25f;
					Local_103.f_33.f_4 = 25f;
					Local_103.f_33.f_5 = 60f;
					Local_103.f_33.f_6 = 1;
					Local_103.f_33.f_7 = 0;
					Local_103.f_33.f_8 = 1;
					Local_103.f_33.f_9 = 1;
					_0xe4b7945ef4f1bfb2(Local_103.f_32, &(Local_103.f_33));
					_0x9f97e85ec142255e(Local_103.f_32, Local_103.f_110);
					_0x42ed56b02e05d109(Local_103.f_32, false);
					set_cam_active(Local_103.f_32, true);
					render_script_cams(true, true, 0, false, false, 0);
					if (_0x4ad019591e94c064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_42();
					iLocal_219 = get_game_timer();
					func_35();
					func_17(&Local_103, 6);
				}
				break;
			case 6:
				_0x3c8f74e8fe751614();
				_0x2804658eb7d8a50b(4, 1499787188);
				if (iLocal_95 != 0)
				{
				}
				else if (!is_player_ready_for_cutscene(player_id()))
				{
					Global_1357509 = 1;
					iLocal_95 = 1;
				}
				if (is_bit_set(&Global_1357510, 6))
				{
				}
				else
				{
					_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_103))
				{
					func_38(6);
					func_23(&Local_103);
				}
				func_48(&Local_103);
				if (iLocal_98 == 0)
				{
					if (func_49(&(Local_103.f_1[6])) && !func_50(&Local_103, 32))
					{
						func_37(&Local_103);
						func_51(1);
						func_52(&Local_103, 32);
					}
					if (!func_50(&Local_103, 32))
					{
						if (func_49(&(Local_103.f_1[5])))
						{
							func_53();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_103))
				{
					Local_103.f_1[6] = func_54("CAM_TAKE_PHOTO", 129547951, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_39(1);
					func_55("CAM_SNAP", 0, 0, 1);
					func_23(&Local_103);
				}
				if (func_56())
				{
					if (!func_50(&Local_103, 16))
					{
						func_17(&Local_103, 3);
					}
					else
					{
						func_17(&Local_103, 16);
					}
				}
				else
				{
					func_57(&Local_103);
				}
				break;
			case 10:
				func_58(&Local_103);
				_0x2804658eb7d8a50b(5, 499451365);
				iLocal_94 = 1;
				if (iLocal_246 == 0)
				{
					if (func_59(&uLocal_242) > 500)
					{
						if (does_cam_exist(Local_103.f_32))
						{
							set_cam_active(Local_103.f_32, false);
							render_script_cams(false, false, 3000, true, false, 0);
							destroy_cam(Local_103.f_32, false);
						}
						if (!func_26())
						{
							clear_ped_tasks_immediately(player_ped_id(), false, true);
						}
						set_current_ped_weapon(Global_35, -1016714371, true, 0, false, false);
						set_ped_current_weapon_visible(Global_35, true, true, true, false);
						set_entity_heading(Global_35, fVar393);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_34();
						iLocal_246 = 1;
					}
				}
				if (func_59(&uLocal_242) > 1000)
				{
					_display_hud_component(-1404924319);
					func_35();
					func_60(&uLocal_242);
					func_15();
					func_17(&Local_103, 3);
				}
				break;
			case 8:
				func_58(&Local_103);
				if (iLocal_245 != 0)
				{
				}
				else if (func_59(&uLocal_242) > 500)
				{
					set_ped_current_weapon_visible(Global_35, false, false, true, false);
					if (!func_26())
					{
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						_set_entity_coords_and_heading(Global_35, vLocal_220, fLocal_231, true, false, true);
						clear_ped_tasks_immediately(player_ped_id(), false, true);
					}
					func_47();
					iLocal_394 = 0;
					iLocal_245 = 1;
				}
				if (iLocal_245 == 1)
				{
					if (iLocal_247 == 0)
					{
						if (func_59(&uLocal_242) > 300)
						{
							iLocal_247 = 1;
							func_61(&Local_103);
						}
					}
					else if (func_59(&uLocal_242) > 1000)
					{
						func_60(&uLocal_242);
						func_62(&Local_103);
						func_35();
						func_17(&Local_103, 9);
					}
				}
				break;
			case 9:
				func_58(&Local_103);
				_0x3c8f74e8fe751614();
				_0x2804658eb7d8a50b(4, 1499787188);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_62(&Local_103);
				if (func_40(&(Local_103.f_1[6]), 1) && !func_50(&Local_103, 32))
				{
					func_37(&Local_103);
					func_51(1);
					func_52(&Local_103, 32);
				}
				else if (func_40(&(Local_103.f_1[1]), 1))
				{
					func_17(&Local_103, 8);
				}
				if (!func_50(&Local_103, 32))
				{
					if (func_49(&(Local_103.f_1[5])))
					{
						func_53();
					}
				}
				break;
			case 7:
				func_17(&Local_103, 12);
				break;
			case 15:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_37(&Local_103);
				func_17(&Local_103, 16);
				break;
			case 16:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_2();
				func_1(&Local_103, 1);
				if (_get_ped_crouch_movement(Global_35))
				{
				}
				terminate_this_thread();
				break;
		}
		wait(0);
		if (func_63())
		{
			if (func_64(&uLocal_259) > 1f)
			{
				func_65();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			_0x8505e05fc8822843(0);
			if (bLocal_23)
			{
				if (timera() > 1200)
				{
					if (animpostfx_is_running(sLocal_24))
					{
						animpostfx_stop(sLocal_24);
					}
					bLocal_23 = false;
				}
			}
			else if (_0xef9a3132a0aa6b19())
			{
				settimera(0);
				if (!animpostfx_is_running(sLocal_24))
				{
					animpostfx_play(sLocal_24);
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						play_sound_frontend("hide_hud", "Photo_Mode_Sounds", true, 0);
					}
				}
				bLocal_23 = true;
			}
			func_66();
			if (func_13(&(Local_103.f_1[20]), 1))
			{
				if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
				{
					play_sound_frontend("reset", "Photo_Mode_Sounds", true, 0);
				}
			}
			fLocal_14 = _0x2533baffbe737e54();
			if (fLocal_15 == fLocal_14)
			{
			}
			else
			{
				fLocal_15 = fLocal_14;
				func_32();
			}
			if (func_67(&(Local_103.f_1[21]), 0, 1))
			{
				if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
				{
					play_sound_frontend("lens_up", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_103.f_1[21]), 1, 1))
			{
				if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
				{
					play_sound_frontend("lens_down", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_103.f_1[22]), 0, 1))
			{
				if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
				{
					play_sound_frontend(sLocal_46, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_103.f_1[22]), 1, 1))
			{
				if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
				{
					play_sound_frontend(sLocal_47, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (_0x14c4a49e36c29e49())
			{
				if (iLocal_241 != 0)
				{
				}
				else
				{
					if (_0xf824530b612fe0ce())
					{
						iLocal_241 = 1;
					}
					else
					{
						iLocal_241 = 2;
					}
					func_32();
					func_37(&Local_103);
					func_38(12);
				}
				if (iLocal_241 != 1)
				{
					if (iLocal_241 == 2)
					{
						if (_0xf824530b612fe0ce())
						{
							iLocal_241 = 1;
							func_32();
							func_37(&Local_103);
							func_38(12);
						}
					}
				}
				else if (!_0xf824530b612fe0ce())
				{
					iLocal_241 = 2;
					func_32();
					func_37(&Local_103);
					func_38(12);
				}
			}
			else
			{
				iLocal_241 = 0;
			}
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(12);
				func_23(&Local_103);
			}
			_0x2804658eb7d8a50b(4, -508131217);
			_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_PMB", 1, 0, 0, 0);
			if (iLocal_35 == 0)
			{
				if (is_control_just_pressed(0, 592761574))
				{
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						_0xce5d0ffe83939af1(iLocal_33, "zoom_out", "Photo_Mode_Sounds", 1);
					}
					iLocal_35 = 1;
				}
			}
			else if (is_control_released(0, 592761574) || _0x2ab7c81b3f70570c())
			{
				_0x3210bcb36af7621b(iLocal_33);
				iLocal_35 = 0;
			}
			if (iLocal_34 == 0)
			{
				if (is_control_just_pressed(0, 1535392713))
				{
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						_0xce5d0ffe83939af1(iLocal_32, "zoom_In", "Photo_Mode_Sounds", 1);
					}
					iLocal_34 = 1;
				}
			}
			else if (is_control_released(0, 1535392713) || _0x2ab7c81b3f70570c())
			{
				_0x3210bcb36af7621b(iLocal_32);
				iLocal_34 = 0;
			}
			if (!func_50(&Local_103, 32))
			{
				if (func_13(&(Local_103.f_1[19]), 1))
				{
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						play_sound_frontend("effects", "Photo_Mode_Sounds", true, 0);
					}
					_0x3210bcb36af7621b(iLocal_32);
					_0x3210bcb36af7621b(iLocal_33);
					_0x3210bcb36af7621b(iLocal_36);
					_0x3210bcb36af7621b(iLocal_37);
					_0x3210bcb36af7621b(iLocal_40);
					_0x3210bcb36af7621b(iLocal_41);
					func_17(&Local_103, 13);
					func_32();
				}
			}
		}
		if (iVar0 != 13)
		{
		}
		else
		{
			func_66();
			func_68();
			func_69();
			_0x8505e05fc8822843(1);
			fLocal_16 = _0x4653a741d17f2cd0();
			if (fLocal_17 != fLocal_16)
			{
				fLocal_17 = fLocal_16;
				func_32();
			}
			fLocal_18 = _0x18fc740ffdcd7454();
			if (fLocal_19 == fLocal_18)
			{
			}
			else
			{
				fLocal_19 = fLocal_18;
				func_32();
			}
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(13);
				func_23(&Local_103);
			}
			_0x2804658eb7d8a50b(4, -508131217);
			_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_PMA", 1, 0, 0, 0);
			if (!func_50(&Local_103, 32))
			{
				if (func_13(&(Local_103.f_1[19]), 1))
				{
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						play_sound_frontend("effects", "Photo_Mode_Sounds", true, 0);
					}
					_0x3210bcb36af7621b(iLocal_36);
					_0x3210bcb36af7621b(iLocal_37);
					_0x3210bcb36af7621b(iLocal_40);
					_0x3210bcb36af7621b(iLocal_41);
					func_31();
					func_17(&Local_103, 14);
					func_32();
				}
				func_70();
			}
		}
		if (iVar0 != 14)
		{
		}
		else
		{
			func_66();
			_0x8505e05fc8822843(2);
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(14);
				func_23(&Local_103);
			}
			_0x2804658eb7d8a50b(4, -508131217);
			_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_PME", 1, 0, 0, 0);
			if (!func_50(&Local_103, 32))
			{
				func_71();
				func_72();
			}
			if (!func_50(&Local_103, 32))
			{
				if (func_13(&(Local_103.f_1[19]), 1))
				{
					if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
					{
						play_sound_frontend("effects", "Photo_Mode_Sounds", true, 0);
					}
					_0x3210bcb36af7621b(iLocal_36);
					_0x3210bcb36af7621b(iLocal_37);
					_0x3210bcb36af7621b(iLocal_40);
					_0x3210bcb36af7621b(iLocal_41);
					func_17(&Local_103, 12);
					func_32();
				}
			}
		}
		if (_get_number_of_references_of_script_with_name_hash(1433015236) > 0)
		{
			bLocal_102 = false;
		}
		if (is_bit_set(&Global_1357505, 8))
		{
			bLocal_102 = false;
		}
	}
	func_2();
	func_1(&Local_103, 1);
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	if (func_26())
	{
		Global_1357504 = uParam0->f_89;
		_display_hud_component(-1404924319);
	}
	Global_1357503 = 0;
	func_29(0);
	_0xf5793bb386e1ff9c(0);
	_0xcdcd7b2d49aee73a(0);
	if (does_cam_exist(uParam0->f_32))
	{
		destroy_cam(uParam0->f_32, false);
	}
	set_no_loading_screen(false);
	_display_hud_component(959420967);
	Global_1357507 = 0;
	Global_1357508 = 0;
	_0x531a78d6bf27014b("CAMERA_SOUNDSET");
	if (!func_26())
	{
		clear_facial_idle_anim_override(Global_35);
	}
	remove_clip_set(func_73());
	remove_anim_dict(func_74());
	_0xf1142e5d64b47802(false, false);
	_0x614682e715adbaac();
	_0xd45547d8396f002a();
	func_37(uParam0);
	func_39(1);
	display_radar(true);
	_text_database_delete("CAMERA");
	if (get_hash_of_this_script_name() == 778601866)
	{
		func_75();
		Global_1935496->f_127 = 1;
	}
}

void func_2()
{
	if (iLocal_48 == 1)
	{
		_0x00a15b94cba4f76f(iLocal_97);
	}
	_databinding_remove_data_entry(uLocal_58);
	_uistatemachine_destroy(1459179713);
	_uiflowblock_release(&iLocal_400);
	iLocal_400 = 0;
	func_34();
	func_76();
	if (animpostfx_is_running(sLocal_91))
	{
		animpostfx_stop(sLocal_91);
	}
	if (animpostfx_is_running(sLocal_24))
	{
		animpostfx_stop(sLocal_24);
	}
	_0x37d7bdba89f13959(sLocal_24);
	_0x37d7bdba89f13959("CameraViewfinder");
	_0x37d7bdba89f13959("CameraTransitionBlink");
	if (animpostfx_is_running(sLocal_92))
	{
		animpostfx_stop(sLocal_92);
	}
	iLocal_343 = 0;
	while (iVar341 < 39)
	{
		_0x37d7bdba89f13959(&(sLocal_303[iVar341]));
		iLocal_343 = iVar341 + 1;
	}
	func_15();
	func_77();
	func_51(0);
}

bool func_3()
{
	return !Global_40.f_12017;
}

void func_4(bool bParam0)
{
	Global_40.f_12017 = !bParam0;
}

void func_5()
{
	Local_103.f_106 = _0xb28894cd7408bd0c();
	if (Local_103.f_106 == 1)
	{
	}
	if (Local_103.f_106 == 0)
	{
		bLocal_49 = false;
		iLocal_51 = _0x78c56b8a7b1d000c();
		if (is_pc_version())
		{
			iLocal_52 = _0x8e587fcd30e05592();
		}
		else
		{
			iLocal_52 = _0x8e587fcd30e05592();
		}
		uLocal_58 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_59 = _databinding_add_data_string(uLocal_58, "cameraRollCapacityLabel", " ");
		uLocal_60 = _databinding_add_data_string(uLocal_58, "photoModeLabel0", " ");
		uLocal_61 = _databinding_add_data_string(uLocal_58, "photoModeLabel1", " ");
		uLocal_62 = _databinding_add_data_string(uLocal_58, "photoModeLabel2", " ");
		uLocal_63 = _databinding_add_data_string(uLocal_58, "photoModeLabel3", " ");
		fLocal_19 = _0x18fc740ffdcd7454();
		func_32();
		iLocal_50 = 0;
		bLocal_54 = true;
		iLocal_55 = get_game_timer();
	}
	else if (Local_103.f_106 == 2)
	{
		bLocal_49 = true;
		uLocal_58 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_59 = _databinding_add_data_string(uLocal_58, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_50 = 0;
		bLocal_54 = false;
	}
}

bool func_6(int iParam0, bool bParam1)
{
	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

void func_7(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (bParam1)
	{
		func_80(iParam0, 4);
		func_81(iVar0, 1);
		func_82(iVar0, 1);
	}
	else
	{
		func_83(iParam0, 4);
		func_82(iVar0, 0);
	}
}

void func_8(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

bool func_9(var uParam0)
{
	if (&Global_1357509 == 1)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1357509 = 0;
		return false;
	}
	if (!func_26())
	{
		if (!is_entity_dead(Global_35))
		{
			if (get_entity_submerged_level(Global_35) > 0.33f)
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				return false;
			}
			if (_0x7fc84e85d98f063d(Global_35))
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_26())
	{
		if (func_84())
		{
			if (func_85(19) || func_86(Global_1914319->f_16855.f_1))
			{
			}
			else
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_26())
	{
		if (is_entity_on_fire(Global_35))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
	}
	if (!func_87(Global_35, 0))
	{
		return false;
	}
	if (!is_player_playing(player_id()))
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		return false;
	}
	if ((!does_entity_exist(Global_35) || is_ped_injured(Global_35)) || is_entity_dead(Global_35))
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		return false;
	}
	if (!func_26())
	{
		if (!func_88(-1016714371, 1, 0))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
		if (func_14(uParam0) == 8)
		{
		}
		if ((func_14(uParam0) != 8 && func_14(uParam0) != 9) && func_14(uParam0) != 10)
		{
			if (func_33(Global_35, 1, 0, 1) != -1016714371)
			{
				if (func_89(uParam0) == 0)
				{
					return false;
				}
			}
		}
	}
	if (func_90())
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		return false;
	}
	if (!func_26())
	{
		if (is_ped_in_any_vehicle(Global_35, true) && !is_entity_dead(get_vehicle_ped_is_in(Global_35, true)))
		{
			func_91("CAM_VEH", 10000, 0, 0, 0, 1);
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
	}
	return true;
}

void func_10(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	set_ped_reset_flag(Global_35, 129, true);
	set_ped_reset_flag(Global_35, 173, true);
	if (Param0.f_107 == 9)
	{
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
		disable_control_action(0, 308778731, false);
		disable_control_action(0, 1002303471, false);
		disable_control_action(0, -236813012, false);
		disable_control_action(0, -1971208180, false);
	}
	disable_control_action(2, -1304887797, false);
	disable_control_action(2, 130948705, false);
	disable_control_action(0, 1632043089, false);
	disable_control_action(2, 1623727326, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	if (!Param0.f_107 == 3)
	{
		disable_control_action(0, -1404316431, false);
	}
	disable_control_action(0, -796643617, false);
	disable_control_action(0, -141724873, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, 648122183, false);
	disable_control_action(0, -163964935, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1664638556, false);
	if (func_92(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (!is_ped_injured(iVar0))
		{
			set_ped_reset_flag(iVar0, 53, true);
			set_ped_reset_flag(iVar0, 153, true);
			_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
		}
	}
}

void func_11(var uParam0)
{
	disable_control_action(0, -128997553, false);
	set_input_exclusive(0, 1360019509);
	if ((((func_14(uParam0) == 8 || func_14(uParam0) == 9) || func_14(uParam0) == 10) || func_14(uParam0) == 5) || func_14(uParam0) == 6)
	{
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
	}
	if (!uParam0->f_107 == 3)
	{
		disable_control_action(0, 255439828, false);
		func_93(0);
		disable_control_action(0, -813019446, false);
	}
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1101824977, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -711536720, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -640622144, false);
	if (does_cam_exist(uParam0->f_31) && is_cam_active(uParam0->f_31))
	{
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -2105631000, false);
	}
	if (&Global_1357503 == 0)
	{
		disable_control_action(0, -1722177808, false);
	}
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
}

void func_12(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (_is_using_keyboard(iParam8))
	{
		*uParam0 = floor(get_control_normal(iParam8, iParam4));
		*uParam1 = floor(get_control_normal(iParam8, iParam5));
		*uParam2 = floor((get_control_unbound_normal(iParam8, iParam6) * 250f));
		*uParam3 = floor((get_control_unbound_normal(iParam8, iParam7) * 250f));
	}
	else
	{
		*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
		*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
		*uParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
		*uParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
	}
}

bool func_13(int iParam0, bool bParam1)
{
	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_14(var uParam0)
{
	return uParam0->f_107;
}

void func_15()
{
	_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
	_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_16()
{
	if (!animpostfx_is_running(sLocal_91))
	{
		animpostfx_play(sLocal_91);
	}
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_94(uParam0);
}

void func_18(var uParam0)
{
	if (func_30())
	{
		if (func_6(&(uParam0->f_1[19]), 1))
		{
			func_7(&(uParam0->f_1[19]), 0, 1);
		}
		if (func_6(&(uParam0->f_1[23]), 1))
		{
			func_7(&(uParam0->f_1[23]), 0, 1);
		}
	}
	if (bLocal_30 == 1)
	{
		if (func_6(&(uParam0->f_1[14]), 1) && (_get_system_time() - iLocal_22) > 3000)
		{
			func_7(&(uParam0->f_1[14]), 1, 1);
		}
		if (func_6(&(uParam0->f_1[18]), 1))
		{
			if ((uParam0->f_108 == 0 && iLocal_50 == 0) && (_get_system_time() - iLocal_22) > 1000)
			{
				func_7(&(uParam0->f_1[18]), 1, 1);
				if (bLocal_54)
				{
					if ((get_game_timer() - iLocal_55) > 2500)
					{
						iLocal_51 = _0x78c56b8a7b1d000c();
						func_32();
						iLocal_55 = get_game_timer();
					}
				}
			}
			else
			{
				func_7(&(uParam0->f_1[18]), 0, 1);
				if (bLocal_30 == 0)
				{
				}
			}
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (is_control_just_pressed(2, 217814591))
			{
				_0x00a15b94cba4f76f(iLocal_97);
				bLocal_49 = true;
				func_95(uParam0, 2);
				iLocal_48 = 0;
			}
			break;
		case 0:
			if (func_50(uParam0, 32))
			{
				if (!func_26())
				{
					func_37(uParam0);
				}
				if (func_20() || bLocal_49)
				{
					func_95(uParam0, 2);
				}
				else if (iLocal_51 == iLocal_52)
				{
					if (iLocal_97 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = get_hash_key("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_97 = func_96(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_95(uParam0, 1);
						iLocal_48 = 1;
					}
					else
					{
						bLocal_49 = true;
						func_95(uParam0, 2);
					}
				}
				else
				{
					func_95(uParam0, 2);
				}
			}
			if (func_50(uParam0, 128))
			{
				_0x614682e715adbaac();
				_0x494a9874f17a7d50(1);
				func_95(uParam0, 7);
			}
			break;
		case 2:
			Local_103.f_112 = 0;
			func_51(0);
			func_95(uParam0, 3);
			iLocal_101 = get_game_timer();
			break;
		case 3:
			if ((get_game_timer() - iLocal_101) > 0 || func_26())
			{
				iLocal_101 = get_game_timer();
				if (func_20() || bLocal_49)
				{
					func_95(uParam0, 4);
				}
				else
				{
					_0xd45547d8396f002a();
					begin_take_high_quality_photo();
					iLocal_51++;
					func_32();
					set_no_loading_screen(true);
					func_95(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = get_status_of_take_high_quality_photo();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				_0xfa91736933ab3d93(1);
				_0x8b3296278328b5eb(Local_103.f_89);
				if (func_14(uParam0) == 8 || func_14(uParam0) == 9)
				{
					_0x2705d18c11b61046(1);
				}
				else
				{
					_0x2705d18c11b61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_97();
				if (func_98(iVar23))
				{
					MemCopy(&cVar19, {func_99(iVar23)}, 4);
				}
				if (is_string_null_or_empty(&cVar19))
				{
					iVar24 = func_100();
					StringCopy(&cVar19, func_101(iVar24), 32);
				}
				_0xd1031b83ac093bc7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_102();
				if (func_103(iVar29))
				{
					StringCopy(&cVar25, func_104(iVar29), 16);
					StringCopy(&cVar27, func_105(iVar29), 16);
				}
				_0x9937facbbf267244(&cVar25);
				_0x8952e857696b8a79(&cVar27);
				save_high_quality_photo(0);
				iLocal_53 = 0;
				func_95(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_95(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_53 == 0)
			{
				set_no_loading_screen(false);
				func_38(func_14(uParam0));
				func_7(&(uParam0->f_1[6]), 0, 1);
				iLocal_53 = 1;
			}
			uParam0->f_106 = get_status_of_save_high_quality_photo();
			if (uParam0->f_106 == 0)
			{
				Local_103.f_112 = 1;
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_107();
			}
			else if (uParam0->f_106 == 2)
			{
				Local_103.f_112 = 1;
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_107();
			}
			break;
		case 4:
			if ((get_game_timer() - iLocal_101) > 300 || func_26())
			{
				set_no_loading_screen(false);
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_38(func_14(uParam0));
				func_108(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = _0x13430d3d5a45f14b(1);
			if (uParam0->f_106 == 0)
			{
				_0xf1142e5d64b47802(true, false);
				func_52(uParam0, 256);
				func_106(uParam0, 128);
				func_95(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_106(uParam0, 128);
				func_95(uParam0, 0);
			}
			break;
	}
}

bool func_19()
{
	if (does_entity_exist(player_ped_id()))
	{
		if (decor_exist_on(player_ped_id(), "camera_takingPic"))
		{
			return decor_get_bool(player_ped_id(), "camera_takingPic");
		}
	}
	return false;
}

bool func_20()
{
	return &Global_1357506;
}

void func_21()
{
	StringCopy(&cLocal_64, "-", 32);
	StringConCat(&cLocal_64, " / ", 32);
	StringCopy(&cLocal_68, "-", 32);
	StringConCat(&cLocal_64, &cLocal_68, 32);
	_databinding_write_data_string(uLocal_59, &cLocal_64);
}

bool func_22(var uParam0)
{
	return *uParam0;
}

void func_23(var uParam0)
{
	*uParam0 = 0;
}

void func_24()
{
	sLocal_303[0] = "No_PostFX_Applied";
	sLocal_263[0] = "CAM_PM_F_V0";
	sLocal_303[1] = "PhotoMode_FilterVintage01";
	iLocal_344[1] = 2;
	sLocal_263[1] = "CAM_PM_F_V1";
	sLocal_303[2] = "PhotoMode_FilterVintage02";
	iLocal_344[2] = 2;
	sLocal_263[2] = "CAM_PM_F_V2";
	sLocal_303[3] = "PhotoMode_FilterVintage03";
	iLocal_344[3] = 2;
	sLocal_263[3] = "CAM_PM_F_V3";
	sLocal_303[4] = "PhotoMode_FilterVintage04";
	iLocal_344[4] = 2;
	sLocal_263[4] = "CAM_PM_F_V4";
	sLocal_303[5] = "PhotoMode_FilterVintage05";
	iLocal_344[5] = 2;
	sLocal_263[5] = "CAM_PM_F_V5";
	sLocal_303[6] = "PhotoMode_FilterVintage06";
	iLocal_344[6] = 2;
	sLocal_263[6] = "CAM_PM_F_V6";
	sLocal_303[7] = "PhotoMode_FilterVintage07";
	iLocal_344[7] = 2;
	sLocal_263[7] = "CAM_PM_F_V7";
	sLocal_303[8] = "PhotoMode_FilterVintage08";
	iLocal_344[8] = 2;
	sLocal_263[8] = "CAM_PM_F_V8";
	sLocal_303[9] = "PhotoMode_FilterVintage09";
	iLocal_344[9] = 2;
	sLocal_263[9] = "CAM_PM_F_V9";
	sLocal_303[10] = "PhotoMode_FilterVintage10";
	iLocal_344[10] = 2;
	sLocal_263[10] = "CAM_PM_F_V10";
	sLocal_303[11] = "PhotoMode_FilterModern01";
	iLocal_344[11] = 1;
	sLocal_263[11] = "CAM_PM_F_M1";
	sLocal_303[12] = "PhotoMode_FilterModern02";
	iLocal_344[12] = 1;
	sLocal_263[12] = "CAM_PM_F_M2";
	sLocal_303[13] = "PhotoMode_FilterModern03";
	iLocal_344[13] = 1;
	sLocal_263[13] = "CAM_PM_F_M3";
	sLocal_303[14] = "PhotoMode_FilterModern04";
	iLocal_344[14] = 1;
	sLocal_263[14] = "CAM_PM_F_M4";
	sLocal_303[15] = "PhotoMode_FilterModern05";
	iLocal_344[15] = 1;
	sLocal_263[15] = "CAM_PM_F_M5";
	sLocal_303[16] = "PhotoMode_FilterModern06";
	iLocal_344[16] = 1;
	sLocal_263[16] = "CAM_PM_F_M6";
	sLocal_303[17] = "PhotoMode_FilterModern07";
	iLocal_344[17] = 1;
	sLocal_263[17] = "CAM_PM_F_M7";
	sLocal_303[18] = "PhotoMode_FilterModern08";
	iLocal_344[18] = 1;
	sLocal_263[18] = "CAM_PM_F_M8";
	sLocal_303[19] = "PhotoMode_FilterModern09";
	iLocal_344[19] = 1;
	sLocal_263[19] = "CAM_PM_F_M9";
	sLocal_303[20] = "PhotoMode_FilterModern10";
	iLocal_344[20] = 1;
	sLocal_263[20] = "CAM_PM_F_M10";
	sLocal_303[21] = "PhotoMode_FilterGame01";
	iLocal_344[21] = 0;
	sLocal_263[21] = "CAM_PM_F_S1";
	sLocal_303[22] = "PhotoMode_FilterGame02";
	iLocal_344[22] = 0;
	sLocal_263[22] = "CAM_PM_F_S2";
	sLocal_303[23] = "PhotoMode_FilterGame03";
	iLocal_344[23] = 0;
	sLocal_263[23] = "CAM_PM_F_S3";
	sLocal_303[24] = "PhotoMode_FilterGame04";
	iLocal_344[24] = 0;
	sLocal_263[24] = "CAM_PM_F_S4";
	sLocal_303[25] = "PhotoMode_FilterGame05";
	iLocal_344[25] = 0;
	sLocal_263[25] = "CAM_PM_F_S5";
	sLocal_303[26] = "PhotoMode_FilterGame06";
	iLocal_344[26] = 0;
	sLocal_263[26] = "CAM_PM_F_S6";
	sLocal_303[27] = "PhotoMode_FilterGame07";
	iLocal_344[27] = 0;
	sLocal_263[27] = "CAM_PM_F_S7";
	sLocal_303[28] = "PhotoMode_FilterGame08";
	iLocal_344[28] = 0;
	sLocal_263[28] = "CAM_PM_F_S8";
	sLocal_303[29] = "PhotoMode_FilterGame09";
	iLocal_344[29] = 0;
	sLocal_263[29] = "CAM_PM_F_S9";
	sLocal_303[30] = "PhotoMode_FilterGame10";
	iLocal_344[30] = 0;
	sLocal_263[30] = "CAM_PM_F_S10";
	sLocal_303[31] = "PhotoMode_FilterGame11";
	iLocal_344[31] = 0;
	sLocal_263[31] = "CAM_PM_F_S11";
	sLocal_303[32] = "PhotoMode_FilterGame12";
	iLocal_344[32] = 0;
	sLocal_263[32] = "CAM_PM_F_S12";
	sLocal_303[33] = "PhotoMode_FilterGame13";
	iLocal_344[33] = 0;
	sLocal_263[33] = "CAM_PM_F_S13";
	sLocal_303[34] = "PhotoMode_FilterGame14";
	iLocal_344[34] = 0;
	sLocal_263[34] = "CAM_PM_F_S14";
	sLocal_303[35] = "PhotoMode_FilterGame15";
	iLocal_344[35] = 0;
	sLocal_263[35] = "CAM_PM_F_S15";
	sLocal_303[36] = "PhotoMode_FilterGame16";
	iLocal_344[36] = 0;
	sLocal_263[36] = "CAM_PM_F_S16";
	sLocal_303[37] = "PhotoMode_FilterGame17";
	iLocal_344[37] = 0;
	sLocal_263[37] = "CAM_PM_F_S17";
	sLocal_303[38] = "PhotoMode_FilterGame18";
	iLocal_344[38] = 0;
	sLocal_263[38] = "CAM_PM_F_S18";
}

void func_25()
{
	if (func_26())
	{
		_text_database_request("CAMERA");
	}
	else
	{
		_text_database_request("CAMERA");
		request_anim_dict(func_74());
		request_clip_set(func_73());
		_0x5199405eabfbd7f0("CameraViewfinder");
		_0x5199405eabfbd7f0("CameraTransitionBlink");
	}
}

bool func_26()
{
	return &Global_1357503;
}

bool func_27(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_26())
	{
		if (!_text_database_has_loaded("CAMERA"))
		{
			if ((_get_system_time() - iParam1) > 5000)
			{
				set_bit(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0) == 0)
		{
			if ((_get_system_time() - iParam1) > 5000)
			{
				set_bit(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (_0xbf2dd155b2adcd0a("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (_0xbf2dd155b2adcd0a("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!_text_database_has_loaded("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!has_clip_set_loaded(func_73()))
		{
			iVar0 = 0;
		}
		if (!has_anim_dict_loaded(func_74()))
		{
			iVar0 = 0;
		}
		if (!_0xd9130842d7226045("CAMERA_SOUNDSET", 0))
		{
			if ((get_game_timer() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_28()
{
	if (_0xea41d44a8d42057b())
	{
		return true;
	}
	return false;
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		_pause_script_threads(true);
		_uiprompt_enable_prompt_type_this_frame(6);
		_0xec3d8c228fe553d7(0);
	}
	else
	{
		_pause_script_threads(false);
		_0x41afa5f228b0b6b0();
		_0xec3d8c228fe553d7(1);
	}
}

bool func_30()
{
	set_bit(Global_1357505, 0);
	if (_get_number_of_references_of_script_with_name_hash(-2036486134) > 0)
	{
		if (func_109(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 30f)
		{
			return true;
		}
	}
	if (_0x3da7a10583a4bec0())
	{
		return true;
	}
	if (_is_ped_sliding(Global_35))
	{
		return true;
	}
	if (is_task_move_network_active(Global_35))
	{
		return true;
	}
	if (!is_player_control_on(player_id()))
	{
		return true;
	}
	if (is_cinematic_cam_rendering())
	{
		return true;
	}
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		return true;
	}
	if (func_110())
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(773227447) > 0)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-1255458557) > 0)
	{
		return true;
	}
	if (bLocal_20)
	{
		return true;
	}
	if (does_cam_exist(get_rendering_cam()))
	{
		return true;
	}
	if (_0x20389408f0e93b9a())
	{
		return true;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || Global_1914319->f_18941.f_17)
	{
		return true;
	}
	clear_bit(Global_1357505, 0);
	return false;
}

void func_31()
{
	if (iLocal_76 == 0)
	{
		Local_103.f_89 = &Global_1357504;
		iLocal_76 = 1;
	}
	if (Local_103.f_89 != 0)
	{
		sLocal_92 = &sLocal_303[Local_103.f_89];
		func_111();
		func_32();
	}
}

void func_32()
{
	if (bLocal_30 == 0)
	{
		_databinding_write_data_string(uLocal_59, " ");
		_databinding_write_data_string(uLocal_60, " ");
		_databinding_write_data_string(uLocal_61, " ");
		_databinding_write_data_string(uLocal_62, " ");
		_databinding_write_data_string(uLocal_63, " ");
	}
	else
	{
		if (func_14(&Local_103) == 12)
		{
			func_112();
		}
		if (func_14(&Local_103) == 13)
		{
			func_113();
		}
		if (func_14(&Local_103) == 14)
		{
			func_114();
		}
		StringCopy(&cLocal_64, "", 32);
		_int_to_string(iLocal_51, "%i", &cLocal_64);
		StringConCat(&cLocal_64, " / ", 32);
		StringCopy(&cLocal_68, "", 32);
		_int_to_string(iLocal_52, "%i", &cLocal_68);
		StringConCat(&cLocal_64, &cLocal_68, 32);
		_databinding_write_data_string(uLocal_59, &cLocal_64);
	}
}

int func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_34()
{
	if (func_26())
	{
	}
	else if (animpostfx_is_running(sLocal_89))
	{
		animpostfx_stop(sLocal_89);
	}
}

void func_35()
{
	if (animpostfx_is_running(sLocal_91))
	{
		_0xc5cb91d65852ed7e(sLocal_91);
	}
}

void func_36()
{
	vLocal_223 = { get_entity_coords(Global_35, true, false) };
	fVar0 = get_entity_heading(Global_35);
	vVar1 = { _get_object_offset_from_coords(vLocal_223, fVar0, 0f, 2f, -0.2f) };
	if (_get_ped_crouch_movement(Global_35))
	{
		bLocal_239 = false;
		return;
	}
	if (_0x0c9dbf48c6ba6e4c(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_239 = true;
	}
	else
	{
		bLocal_239 = false;
	}
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_78(&(uParam0->f_1[iVar0])))
		{
			func_115(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_38(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 1);
			func_116(14, 1);
			func_116(15, 1);
			func_116(16, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(20, 1);
			func_116(21, 1);
			func_116(22, 1);
			func_116(17, 0);
			func_116(23, 0);
			func_116(24, 0);
			func_116(25, 0);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 13:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 0);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 1);
			func_116(24, 0);
			func_116(25, 0);
			if (bLocal_11)
			{
				func_116(26, 1);
				func_7(&(Local_103.f_1[26]), 0, 1);
			}
			else
			{
				func_116(26, 1);
				func_7(&(Local_103.f_1[26]), 1, 1);
			}
			func_116(27, 1);
			func_116(28, 1);
			break;
		case 14:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 0);
			if (Local_103.f_89 == 0)
			{
				func_116(24, 1);
				func_7(&(Local_103.f_1[24]), 0, 1);
			}
			else
			{
				func_116(24, 1);
				func_7(&(Local_103.f_1[24]), 1, 1);
			}
			func_116(25, 1);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 3:
			func_116(6, 0);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(0, 1);
			func_116(1, 1);
			func_116(2, 1);
			break;
		case 6:
			func_116(0, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 8:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 9:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 10:
			func_116(2, 0);
			func_116(0, 0);
			func_116(3, 0);
			func_116(1, 0);
			func_116(5, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(6, 0);
			func_116(9, 0);
			func_116(4, 0);
			break;
		case 7:
			func_116(2, 0);
			func_116(0, 0);
			func_116(6, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(1, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			break;
	}
	if ((_get_system_time() - iLocal_22) > 3000)
	{
		func_117(bLocal_30);
	}
	else
	{
		if ((_get_system_time() - iLocal_22) < 1000)
		{
			func_7(&(Local_103.f_1[18]), 0, 1);
		}
		func_7(&(Local_103.f_1[14]), 0, 1);
	}
}

void func_39(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_40(int iParam0, bool bParam1)
{
	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_41()
{
	if (iVar396 == 0)
	{
		iLocal_398 = 1;
	}
}

void func_42()
{
	vLocal_223 = { get_entity_coords(Global_35, true, false) };
	fVar0 = get_entity_heading(Global_35);
	vVar1 = { _get_object_offset_from_coords(vLocal_223, fVar0, 0f, 4f, 0f) };
	get_ground_z_for_3d_coord(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, false);
	get_ground_z_for_3d_coord(vLocal_223, &uVar5, false);
	if ((vLocal_223.z - fVar4) > 3f)
	{
		bLocal_218 = false;
		return;
	}
	if (is_player_riding_train(player_id()))
	{
		bLocal_218 = false;
		return;
	}
	if (is_ped_on_mount(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (_0x50f124e6ef188b22(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (get_number_of_fires_in_range(vLocal_223, 2f) > 0)
	{
		bLocal_218 = false;
		return;
	}
	if ((fVar4 - vLocal_223.z) > 1f)
	{
		bLocal_218 = false;
		return;
	}
	if (is_entity_in_water(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (func_43(Global_35, 0))
	{
		bLocal_218 = false;
		return;
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (test_vertical_probe_against_all_water(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_218 = false;
		return;
	}
	if (is_point_on_road(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_218 = false;
		return;
	}
	fVar6 = 1f;
	if (_0x0c9dbf48c6ba6e4c(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_218 = true;
	}
	else
	{
		bLocal_218 = false;
	}
	if (bLocal_218)
	{
		vLocal_220 = { vLocal_223.x, vLocal_223.y, (vLocal_223.z - 1f) };
		fLocal_231 = fVar0;
		vLocal_226 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_43(int iParam0, int iParam1)
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

bool func_44(var uParam0)
{
	return func_118(*uParam0, 1);
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1 || !func_44(uParam0))
	{
		func_119(uParam0);
	}
}

bool func_46()
{
	switch (iVar396)
	{
		case 0:
			if (iVar397 == iVar399)
			{
			}
			break;
		case 1:
			iLocal_400 = _uiflowblock_request(iVar397);
			iLocal_398 = 2;
			break;
		case 2:
			if (_uiflowblock_is_loaded(uVar398))
			{
				_uiflowblock_enter(uVar398, iVar399);
				_uistatemachine_create(1459179713, uVar398);
				iLocal_398 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_47()
{
	if (func_26())
	{
	}
	else if (!animpostfx_is_running(sLocal_89))
	{
		animpostfx_play(sLocal_89);
	}
}

void func_48(var uParam0)
{
	if (uParam0->f_90 > 0 && IntToFloat(uParam0->f_90) > 89f)
	{
		uParam0->f_90 = round(89f);
	}
	else if (uParam0->f_90 < 0 && IntToFloat(uParam0->f_90) < -89f)
	{
		uParam0->f_90 = round(-89f);
	}
	if (uParam0->f_91 > 0 && IntToFloat(uParam0->f_91) > 89f)
	{
		uParam0->f_91 = round(89f);
	}
	else if (uParam0->f_91 < 0 && IntToFloat(uParam0->f_91) < -89f)
	{
		uParam0->f_91 = round(-89f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((to_float(uParam0->f_90) - -89f) / (89f - -89f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((to_float(uParam0->f_91) - -89f) / (89f - -89f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0f;
	}
	vVar6 = { get_entity_rotation(Global_35, 2) };
	fVar4 = 50f;
	if ((func_120((*Global_1347702)[85]->f_15) || func_120((*Global_1347702)[86]->f_15)) || func_120((*Global_1347702)[87]->f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((func_120((*Global_1347702)[85]->f_15) || func_120((*Global_1347702)[86]->f_15)) || func_120((*Global_1347702)[87]->f_15))
	{
		fVar2 = 38f;
		fVar3 = -40f;
	}
	else
	{
		fVar2 = 68f;
		fVar3 = -85f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_94 = absi(uParam0->f_94);
	}
	fVar9 = ((to_float(uParam0->f_94) - 0f) / (89f - 0f));
	fVar12 = (fVar12 + (fVar9 * fVar11));
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_95 = absi(uParam0->f_95);
	}
	fVar10 = ((to_float(uParam0->f_95) - 0f) / (89f - 0f));
	fVar13 = (fVar13 + (fVar10 * fVar11));
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0f, 0f) + Vector(uParam0->f_81, 0f, uParam0->f_82) };
	func_121(uParam0);
	func_122(uParam0);
	set_cam_params(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((func_120((*Global_1347702)[85]->f_15) || func_120((*Global_1347702)[86]->f_15)) || func_120((*Global_1347702)[87]->f_15))
	{
	}
	else if ((get_game_timer() - iLocal_240) > 100)
	{
		if (iLocal_96 == 0)
		{
			fVar14 = get_entity_heading(Global_35);
			vVar15 = { _get_object_offset_from_coords(vLocal_223, fVar14, 0f, 0.25f, 0f) };
			if (!_0x0c9dbf48c6ba6e4c(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_96 = 1;
			}
		}
		iLocal_240 = get_game_timer();
	}
}

bool func_49(int iParam0)
{
	iVar0 = func_79(iParam0);
	iVar1 = (*Global_1945938)[iVar0]->f_4;
	return (func_40(iParam0, 1) && is_control_just_pressed(2, iVar1));
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_51(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "camera_takingPic", true);
		}
		else if (decor_exist_on(player_ped_id(), "camera_takingPic"))
		{
			decor_remove(player_ped_id(), "camera_takingPic");
		}
	}
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_53()
{
	_launch_app_with_entry("social_club_feed", "launch_to_photos");
}

int func_54(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_123(iVar0, 2))
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
				func_124(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

var func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_91(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_56()
{
	if (!is_player_free_aiming(player_id()))
	{
	}
	return false;
}

int func_57(var uParam0)
{
	if (is_control_just_pressed(2, 129547951) && !func_50(uParam0, 32))
	{
		_play_sound_from_entity("CLICK", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		func_51(1);
		func_52(uParam0, 32);
	}
	return 1;
}

void func_58(var uParam0)
{
	vLocal_223 = { get_entity_coords(Global_35, true, false) };
	if (get_distance_between_coords(vLocal_223, vLocal_220, true) > 3f)
	{
		_set_entity_coords_and_heading(Global_35, vLocal_220, fLocal_231, true, false, true);
		_set_entity_health(player_ped_id(), 0, 0);
	}
}

int func_59(var uParam0)
{
	if (!func_44(uParam0))
	{
		return 0;
	}
	if (func_125(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_126() - round((uParam0->f_1 * 1000f)));
}

void func_60(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_61(var uParam0)
{
	if (func_22(uParam0))
	{
		func_38(8);
		func_23(uParam0);
	}
	func_127(uParam0);
	func_128();
	func_129();
	uParam0->f_88 = 0;
	iLocal_392 = 0;
	bLocal_229 = true;
	bLocal_230 = false;
	_hide_hud_component(-1404924319);
}

void func_62(var uParam0)
{
	func_130(uParam0);
	if (_0x6cd79468a1e595c6(0))
	{
		vLocal_233 = { vLocal_236 };
		fLocal_232 = 0f;
		fLocal_396 = 0f;
	}
	if (_is_using_keyboard(0))
	{
		fVar1 = (get_control_unbound_normal(0, -1450761377) * 4.5f);
		fVar2 = (get_control_unbound_normal(0, -771458680) * 4.5f);
		fVar0 = func_131(vLocal_236.z, (vLocal_233.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - -30f);
		}
		else
		{
			vLocal_233.f_2 = (vLocal_233.z - fVar1);
		}
		fVar0 = func_131(vLocal_236.x, (vLocal_233.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_233.x = (vLocal_236.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.x = (vLocal_236.x - -30f);
		}
		else
		{
			vLocal_233.x = (vLocal_233.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_232 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.6f);
					fLocal_232 = (fLocal_232 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.2f);
					fLocal_232 = (fLocal_232 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_232 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.6f);
					fLocal_232 = (fLocal_232 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.2f);
					fLocal_232 = (fLocal_232 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (is_look_inverted())
			{
			}
			if ((fVar393 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_233.x = (vLocal_233.x - 0.6f);
					fLocal_396 = (fVar393 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x - 0.2f);
					fLocal_396 = (fVar393 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (is_look_inverted())
			{
			}
			if ((fVar393 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_233.x = (vLocal_233.x + 0.6f);
					fLocal_396 = (fVar393 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x + 0.2f);
					fLocal_396 = (fVar393 + 0.07f);
				}
			}
		}
	}
	if (bLocal_229)
	{
		if (_0x0c9dbf48c6ba6e4c(Global_35, vLocal_226, 3167))
		{
			bLocal_230 = false;
		}
		else
		{
			bLocal_230 = true;
		}
		bLocal_229 = false;
	}
	if ((func_40(&(uParam0->f_1[7]), 1) || func_43(Global_35, 0)) || bLocal_230)
	{
		if (func_43(Global_35, 0))
		{
		}
		else if (func_132(player_id(), 1, 0, 1))
		{
		}
		if (_0x4ad019591e94c064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			_play_sound_from_entity("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_246 = 0;
		func_37(uParam0);
		func_17(uParam0, 10);
		func_16();
		clear_facial_idle_anim_override(Global_35);
		set_facial_idle_anim_override(Global_35, "portrait_normal", func_74());
		if (!func_44(&uLocal_242))
		{
			set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			func_45(&uLocal_242, 1);
		}
	}
	if (func_67(&(uParam0->f_1[9]), 0, 1))
	{
		if (iVar259 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			clear_facial_idle_anim_override(Global_35);
			set_facial_idle_anim_override(Global_35, &(sLocal_250[uParam0->f_87]), func_74());
		}
	}
	if (func_67(&(uParam0->f_1[9]), 1, 1))
	{
		if (iVar259 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			clear_facial_idle_anim_override(Global_35);
			set_facial_idle_anim_override(Global_35, &(sLocal_250[uParam0->f_87]), func_74());
		}
	}
	uParam0->f_43 = { func_133(get_player_index()) + get_entity_forward_vector(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_0x66f9eb44342bb4c5(Global_35, &(uParam0->f_43));
	if (bVar391 == 0)
	{
		if (func_67(&(uParam0->f_1[8]), 1, 1))
		{
			iLocal_394 = 1;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_134();
		}
	}
	if (bVar391 == 0)
	{
		if (func_67(&(uParam0->f_1[8]), 0, 1))
		{
			iLocal_394 = 1;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_134();
		}
	}
	if (bVar391)
	{
		switch (iVar389)
		{
			case 0:
				break;
			case 1:
				if ((get_game_timer() - iVar390) > 200)
				{
					iLocal_392 = 2;
				}
				break;
			case 2:
				func_135(uParam0);
				iLocal_392 = 3;
				iLocal_393 = get_game_timer();
				break;
			case 3:
				if ((get_game_timer() - iVar390) > 500)
				{
					iLocal_392 = 4;
					iLocal_393 = get_game_timer();
					func_35();
				}
				break;
			case 4:
				if ((get_game_timer() - iVar390) > 700)
				{
					iLocal_392 = 0;
					iLocal_394 = 0;
				}
				break;
			default:
				break;
		}
	}
	func_122(uParam0);
	set_cam_params(uParam0->f_32, uParam0->f_77, vLocal_233, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_63()
{
	return uVar260;
}

float func_64(var uParam0)
{
	if (!func_44(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_136() - uParam0->f_1);
}

void func_65()
{
	func_60(&uLocal_259);
	iLocal_262 = 0;
}

void func_66()
{
	if (func_13(&(Local_103.f_1[14]), 1))
	{
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend("hide_hud", "Photo_Mode_Sounds", true, 0);
		}
		if (bLocal_30)
		{
			bLocal_30 = false;
			func_37(&Local_103);
			func_38(func_14(&Local_103));
			func_117(0);
		}
		else
		{
			bLocal_30 = true;
			func_37(&Local_103);
			func_38(func_14(&Local_103));
			func_117(1);
		}
		func_32();
	}
	if (func_137(&(Local_103.f_1[7]), 1))
	{
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend("back", "Photo_Mode_Sounds", true, 0);
		}
		func_138();
		func_17(&Local_103, 15);
	}
	if (bLocal_30)
	{
		if (iLocal_48 == 0)
		{
			if (iLocal_21 == 0)
			{
				if (!func_6(&(Local_103.f_1[14]), 1))
				{
					func_37(&Local_103);
					if (func_14(&Local_103) == 14)
					{
						func_38(14);
					}
					else if (func_14(&Local_103) == 12)
					{
						func_38(12);
					}
					else if (func_14(&Local_103) == 13)
					{
						func_38(13);
					}
					settimerb(0);
					iLocal_21 = 1;
				}
			}
			else if (timerb() > 2500)
			{
				if (!func_6(&(Local_103.f_1[14]), 1))
				{
					set_bit(Global_1357505, 1);
					func_138();
					func_17(&Local_103, 15);
				}
				else
				{
					iLocal_21 = 0;
				}
			}
		}
		else
		{
			iLocal_21 = 0;
		}
	}
	else
	{
		iLocal_21 = 0;
	}
	if ((func_49(&(Local_103.f_1[18])) && !func_50(&Local_103, 32)) && (_get_system_time() - iLocal_22) > 1000)
	{
		settimerb(0);
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend("take_photo", "Photo_Mode_Sounds", true, 0);
		}
		if (animpostfx_is_running(sLocal_24))
		{
			animpostfx_stop(sLocal_24);
		}
		func_51(1);
		func_52(&Local_103, 32);
	}
	if (!func_50(&Local_103, 32))
	{
		if ((_get_system_time() - iLocal_22) > 500)
		{
			if (func_49(&(Local_103.f_1[5])))
			{
				func_53();
			}
		}
	}
}

bool func_67(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_68()
{
	if (get_control_normal(0, -2006271410) > 0.3f)
	{
		if (bLocal_38 == 0 && fLocal_19 > 0.2f)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (fLocal_19 < 0.2f || fLocal_19 == 0.2f)
		{
			_0x3210bcb36af7621b(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		_0x3210bcb36af7621b(iLocal_36);
		bLocal_38 = false;
	}
	if (get_control_normal(0, -2006271410) < -0.3f)
	{
		if (bLocal_39 == 0 && fLocal_19 < 49.6f)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (fLocal_19 > 49.6f || fLocal_19 == 49.6f)
		{
			_0x3210bcb36af7621b(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		_0x3210bcb36af7621b(iLocal_37);
		bLocal_39 = false;
	}
}

void func_69()
{
	if (get_control_normal(0, 649703018) > 0.3f)
	{
		if (bLocal_42 == 0 && fLocal_17 > 0.1f)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_40, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_42 = true;
			}
		}
		else if (fLocal_17 <= 0.1f)
		{
			_0x3210bcb36af7621b(iLocal_40);
			bLocal_38 = false;
		}
	}
	else if (bLocal_42)
	{
		_0x3210bcb36af7621b(iLocal_40);
		bLocal_42 = false;
	}
	if (get_control_normal(0, 649703018) < -0.3f)
	{
		if ((bLocal_43 == 0 && fLocal_17 < 99.9f) && fLocal_17 > 0f)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_41, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_43 = true;
			}
		}
		else if (fLocal_17 > 99.9f || fLocal_17 < 0f)
		{
			_0x3210bcb36af7621b(iLocal_41);
			bLocal_43 = false;
		}
	}
	else if (bLocal_43)
	{
		_0x3210bcb36af7621b(iLocal_41);
		bLocal_43 = false;
	}
}

void func_70()
{
	if (func_30())
	{
		if (!bLocal_11)
		{
			return;
		}
	}
	_0xf5793bb386e1ff9c(1);
	if (func_67(&(Local_103.f_1[26]), 0, 1))
	{
		if (!bLocal_12)
		{
			_0xc8d0611d9a0cf5d3(0.1f);
			fLocal_10 = _0x06c0d8bb6b04a709();
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				play_sound_frontend(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
			func_32();
		}
	}
	if (func_67(&(Local_103.f_1[26]), 1, 1))
	{
		_0xc8d0611d9a0cf5d3(-0.1f);
		fLocal_10 = _0x06c0d8bb6b04a709();
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend(sLocal_47, "Photo_Mode_Sounds", false, 2);
		}
		func_32();
	}
	if (func_40(&(Local_103.f_1[27]), 1))
	{
		if (bLocal_11)
		{
			bLocal_11 = false;
			_0x5cd6a2cce5087161(0);
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				play_sound_frontend(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
		}
		else
		{
			bLocal_11 = true;
			_0x5cd6a2cce5087161(1);
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				play_sound_frontend(sLocal_47, "Photo_Mode_Sounds", false, 2);
			}
		}
		func_38(13);
		func_32();
	}
}

void func_71()
{
	if (func_67(&(Local_103.f_1[24]), 0, 1))
	{
		if (fLocal_25 < 1f)
		{
			fLocal_25 = (fLocal_25 + fLocal_27);
			_0xcab4dd2d5b2b7246(sLocal_92, fLocal_25);
			play_sound_frontend(sLocal_46, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(&(Local_103.f_1[24]), 1, 1))
	{
		if (fLocal_25 > 0.1f)
		{
			fLocal_25 = (fLocal_25 - fLocal_27);
			_0xcab4dd2d5b2b7246(sLocal_92, fLocal_25);
			play_sound_frontend(sLocal_47, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(&(Local_103.f_1[17]), 0, 1))
	{
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend("filter_left", "Photo_Mode_Sounds", true, 0);
		}
		_0xcab4dd2d5b2b7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = &sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89 = (Local_103.f_89 - 1);
		if (Local_103.f_89 < 0)
		{
			Local_103.f_89 = 38;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = &sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
	if (func_67(&(Local_103.f_1[17]), 1, 1))
	{
		if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
		{
			play_sound_frontend("filter_right", "Photo_Mode_Sounds", true, 0);
		}
		_0xcab4dd2d5b2b7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = &sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89++;
		if (Local_103.f_89 == 39)
		{
			Local_103.f_89 = 0;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = &sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
}

void func_72()
{
	if (func_30())
	{
		if (!bLocal_11)
		{
			if (!animpostfx_is_running("PauseMenuIn"))
			{
				_0x9229ed770975bd9e();
				fLocal_10 = _0x06c0d8bb6b04a709();
				bLocal_11 = true;
			}
			return;
		}
	}
	_0xf5793bb386e1ff9c(1);
	fVar0 = 0.0125f;
	if (_is_using_keyboard(0))
	{
		fVar0 = 0.025f;
	}
	if (get_control_normal(0, 1212117119) > 0.3f)
	{
		_0x62b9f9a1272aed80(-fVar0);
		fLocal_9 = _0x98f4154989b81ec6();
		func_32();
		if (bLocal_38 == 0 && iLocal_29 > 0)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (iLocal_29 == 0)
		{
			_0x3210bcb36af7621b(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		_0x3210bcb36af7621b(iLocal_36);
		bLocal_38 = false;
	}
	if (get_control_normal(0, 1212117119) < -0.3f)
	{
		_0x62b9f9a1272aed80(fVar0);
		fLocal_9 = _0x98f4154989b81ec6();
		func_32();
		if (bLocal_39 == 0 && iLocal_29 < 14)
		{
			if (_0xd9130842d7226045("Photo_Mode_Sounds", 0))
			{
				_0xce5d0ffe83939af1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (iLocal_29 == 14)
		{
			_0x3210bcb36af7621b(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		_0x3210bcb36af7621b(iLocal_37);
		bLocal_39 = false;
	}
}

char* func_73()
{
	return "facials@gen_male@portrait";
}

char* func_74()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_75()
{
	Global_1935496->f_29 = 0;
}

void func_76()
{
	if (animpostfx_is_running(sLocal_92))
	{
		animpostfx_stop(sLocal_92);
	}
}

void func_77()
{
	_0x3210bcb36af7621b(iLocal_32);
	_0x3210bcb36af7621b(iLocal_33);
	_0x3210bcb36af7621b(iLocal_36);
	_0x3210bcb36af7621b(iLocal_37);
	_0x3210bcb36af7621b(iLocal_40);
	_0x3210bcb36af7621b(iLocal_41);
	release_sound_id(iLocal_32);
	release_sound_id(iLocal_33);
	release_sound_id(iLocal_36);
	release_sound_id(iLocal_37);
	release_sound_id(iLocal_40);
	release_sound_id(iLocal_41);
}

bool func_78(int iParam0)
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

int func_79(int iParam0)
{
	return iParam0;
}

void func_80(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_81(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_123(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_82(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_84()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_85(int iParam0)
{
	if (func_84())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (!func_140(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1)
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
	if (func_142(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_88(int iParam0, int iParam1, bool bParam2)
{
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_144(iParam0);
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
		if (!func_145(iParam0, 1))
		{
			return false;
		}
	}
	return func_146(iParam0, 0, bParam2) >= iParam1;
}

int func_89(var uParam0)
{
	return uParam0->f_108;
}

bool func_90()
{
	return Global_1935689->f_1;
}

var func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_92(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		func_147(4);
	}
	func_147(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_94(var uParam0)
{
	*uParam0 = 1;
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_97()
{
	return Global_1894899->f_2;
}

bool func_98(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_99(int iParam0)
{
	if (!func_98(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1888801)[iParam0]->f_22;
}

int func_100()
{
	return _get_water_map_zone_at_coords(Global_36);
}

char* func_101(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return "WATER_AURORA_BASIN";
		case 795414694:
			return "WATER_BARROW_LAGOON";
		case -557290573:
			return "WATER_BAYOU_NWA";
		case 650214731:
			return "WATER_BEARTOOTH_BECK";
		case -1073312073:
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007:
			return "WATER_DAKOTA_RIVER";
		case 1245451421:
			return "WATER_DEADBOOT_CREEK";
		case 469159176:
			return "WATER_DEWBERRY_CREEK";
		case -105598602:
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360:
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577:
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009:
			return "WATER_HOT_SPRINGS";
		case -1229593481:
			return "WATER_KAMASSA_RIVER";
		case -1369817450:
			return "WATER_LAKE_DON_JULIO";
		case 592454541:
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421:
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316:
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150:
			return "WATER_MATTLOCK_POND";
		case -811730579:
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193:
			return "WATER_OWANJILA";
		case 2005774838:
			return "WATER_RINGNECK_CREEK";
		case -1504425495:
			return "WATER_SAN_LUIS_RIVER";
		case -247856387:
			return "WATER_SEA_OF_CORONADO";
		case -823661292:
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770:
			return "WATER_SPIDER_GORGE";
		case -1287619521:
			return "WATER_STILLWATER_CREEK";
		case -1781130443:
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730:
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_102()
{
	return Global_1897952->f_41;
}

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

void func_107()
{
	if (!animpostfx_is_running(sLocal_90))
	{
		animpostfx_play(sLocal_90);
	}
}

void func_108(int iParam0, bool bParam1)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_110()
{
	if (func_151())
	{
		iVar0 = _0x804425c4bbd00883(Global_35);
		if (func_152(iVar0) == 2041469314 || func_152(iVar0) == -77448735)
		{
			return false;
		}
		else
		{
			if (func_152(iVar0) == 0)
			{
				if (_get_number_of_references_of_script_with_name_hash(52395882) > 0 || _get_number_of_references_of_script_with_name_hash(-1741532193) > 0)
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_111()
{
	if (!_0xbf2dd155b2adcd0a(sLocal_92))
	{
		_0x5199405eabfbd7f0(sLocal_92);
	}
	if (!animpostfx_is_running(sLocal_92))
	{
		animpostfx_play(sLocal_92);
	}
}

void func_112()
{
	StringCopy(&cLocal_77, "", 64);
	if (iLocal_241 == 1 || iLocal_241 == 0)
	{
		StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_IN_ORBIT"), 64);
	}
	if (iLocal_241 == 2)
	{
		StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_IN_FREE"), 64);
	}
	_databinding_write_data_string(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_LENS"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_15 == -18.88f)
	{
		StringCopy(&cLocal_77, " ", 64);
	}
	else
	{
		StringCopy(&cLocal_77, _0x2b6846401d68e563(fLocal_15, 1), 64);
	}
	StringConCat(&cLocal_77, "mm", 64);
	_databinding_write_data_string(uLocal_61, &cLocal_77);
	_databinding_write_data_string(uLocal_62, " ");
	_databinding_write_data_string(uLocal_63, " ");
}

void func_113()
{
	if (!bLocal_13)
	{
		_0x9229ed770975bd9e();
		fLocal_10 = _0x06c0d8bb6b04a709();
		bLocal_13 = true;
	}
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_EXPOSURE"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = ceil((fLocal_10 * 10f));
	iLocal_28 += 161;
	if (iLocal_28 > 240 || iLocal_28 == 240)
	{
		iLocal_28 = 240;
		bLocal_12 = true;
	}
	else
	{
		bLocal_12 = false;
	}
	_int_to_string(iLocal_28, "%i", &cLocal_85);
	StringConCat(&cLocal_77, &cLocal_85, 64);
	_databinding_write_data_string(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	if (bLocal_11)
	{
		StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_EXLOCKON"), 64);
	}
	else
	{
		StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_EXLOCKOFF"), 64);
	}
	_databinding_write_data_string(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_FOCDIST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	StringConCat(&cLocal_77, _0x2b6846401d68e563(fLocal_19, 1), 64);
	StringConCat(&cLocal_77, "m", 64);
	_databinding_write_data_string(uLocal_62, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_BLUR"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_17 < 0f && fLocal_17 > -1f)
	{
		StringConCat(&cLocal_77, "0.0", 64);
	}
	else if (fLocal_17 == -1f)
	{
		StringConCat(&cLocal_77, "100.0", 64);
	}
	else
	{
		StringConCat(&cLocal_77, _0x2b6846401d68e563(fLocal_17, 1), 64);
	}
	_databinding_write_data_string(uLocal_63, &cLocal_77);
}

void func_114()
{
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_CONTRAST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = ceil((fLocal_9 * 10f));
	iLocal_28 = (iLocal_28 - 6);
	if (iLocal_28 > 14)
	{
		iLocal_28 = 14;
	}
	if (iLocal_28 < 0)
	{
		iLocal_28 = 0;
	}
	_int_to_string(iLocal_28, "%i", &cLocal_85);
	iLocal_29 = iLocal_28;
	StringConCat(&cLocal_77, &cLocal_85, 64);
	_databinding_write_data_string(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cLocal_77, ":", 64);
	StringConCat(&cLocal_77, " ", 64);
	if (&iLocal_344[Local_103.f_89] == 2)
	{
		StringConCat(&cLocal_77, _get_label_text_2(&(sLocal_263[Local_103.f_89])), 64);
	}
	if (&iLocal_344[Local_103.f_89] == 1)
	{
		StringConCat(&cLocal_77, _get_label_text_2(&(sLocal_263[Local_103.f_89])), 64);
	}
	if (&iLocal_344[Local_103.f_89] == 0)
	{
		StringConCat(&cLocal_77, _get_label_text_2(&(sLocal_263[Local_103.f_89])), 64);
	}
	_databinding_write_data_string(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, " ", 64);
	StringConCat(&cLocal_77, _get_label_text_2("CAM_PM_HUD_FILTINTEN"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = ceil((fLocal_25 * 100f));
	_int_to_string(iLocal_28, "%i", &cLocal_72);
	StringConCat(&cLocal_77, &cLocal_72, 64);
	StringConCat(&cLocal_77, "%", 64);
	_databinding_write_data_string(uLocal_62, &cLocal_77);
	_databinding_write_data_string(uLocal_63, " ");
}

void func_115(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_78(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_79(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_153(iVar0);
	*uParam0 = 0;
}

void func_116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_78(&(Local_103.f_1[iParam0])))
		{
			if (iParam0 == 16)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 129385309, -811138093, 0);
			}
			else if (iParam0 == 17)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 1331955845, 1772064008, 0);
			}
			else if (iParam0 == 24)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 579261547, -1287523321, 0);
			}
			else if (iParam0 == 26)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), -967957884, -1392007771, 0);
			}
			else if (iParam0 == 13)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 592761574, 1535392713, 0);
			}
			else if (iParam0 == 21)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 111171576, -1321674599, 0);
			}
			else if (iParam0 == 22)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), 787094826, -1763243948, 0);
			}
			else if (iParam0 == 25)
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), 1212117119, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else if (iParam0 == 28)
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), 649703018, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				_uiprompt_set_allowed_action((*Global_1945938)[&Local_103.f_1[iParam0]]->f_3, -2018477760);
				_uiprompt_set_allowed_action((*Global_1945938)[&Local_103.f_1[iParam0]]->f_3, 74488305);
			}
			else if (iParam0 == 3)
			{
				if (Local_103.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_103.f_1[iParam0] = func_156(sVar0, func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			if (iParam0 == 4)
			{
				func_158(&(Local_103.f_1[iParam0]), 11, 1, 1);
			}
			if (bLocal_30)
			{
				func_159(&(Local_103.f_1[iParam0]), -857683846, 0, 1);
			}
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[&Local_103.f_1[iParam0]]->f_3, true);
		}
		_0xf4a5c4509bf923b1((*Global_1945938)[&Local_103.f_1[iParam0]]->f_3, 6);
		_uiprompt_enable_prompt_type_this_frame(6);
	}
	else if (func_78(&(Local_103.f_1[iParam0])))
	{
		func_115(Local_103.f_1[iParam0], 1, 1);
	}
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	else
	{
		func_138();
	}
	func_160(&(Local_103.f_1[14]), bParam0, 0);
	func_160(&(Local_103.f_1[15]), bParam0, 0);
	func_160(&(Local_103.f_1[13]), bParam0, 0);
	func_160(&(Local_103.f_1[19]), bParam0, 0);
	func_160(&(Local_103.f_1[20]), bParam0, 0);
	func_160(&(Local_103.f_1[21]), bParam0, 0);
	func_160(&(Local_103.f_1[22]), bParam0, 0);
	func_160(&(Local_103.f_1[5]), bParam0, 0);
	func_160(&(Local_103.f_1[18]), bParam0, 0);
	func_160(&(Local_103.f_1[7]), bParam0, 0);
	func_160(&(Local_103.f_1[23]), bParam0, 0);
	func_160(&(Local_103.f_1[28]), bParam0, 0);
	func_160(&(Local_103.f_1[26]), bParam0, 0);
	func_160(&(Local_103.f_1[27]), bParam0, 0);
	func_160(&(Local_103.f_1[17]), bParam0, 0);
	func_160(&(Local_103.f_1[24]), bParam0, 0);
	func_160(&(Local_103.f_1[25]), bParam0, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_119(var uParam0)
{
	func_161(uParam0, 0f);
}

bool func_120(int iParam0)
{
	iVar0 = func_162(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_121(var uParam0)
{
	fLocal_217 = get_control_normal(0, 1206668322);
	if (fLocal_217 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60f)
		{
			if (_is_using_keyboard(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.6f);
			}
			_0xe4b7945ef4f1bfb2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25f)
		{
			if (_is_using_keyboard(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.6f);
			}
			_0xe4b7945ef4f1bfb2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_57)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

void func_122(var uParam0)
{
	if (iLocal_98 == 0)
	{
		if (func_49(&(uParam0->f_1[3])))
		{
			if (_0x4ad019591e94c064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_99 = get_game_timer();
			iLocal_98 = 1;
			iLocal_100 = 0;
		}
	}
	else if ((get_game_timer() - iLocal_99) > 300 && iLocal_100 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_79(&(Local_103.f_1[3]));
			_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_79(&(Local_103.f_1[3]));
			_uiprompt_set_text((*Global_1945938)[iVar1]->f_3, "CAM_FOCUS_LOCKE");
		}
		_0x9f97e85ec142255e(uParam0->f_32, uParam0->f_110);
		iLocal_100 = 1;
	}
	else
	{
		if ((get_game_timer() - iLocal_99) > 500)
		{
		}
		if ((get_game_timer() - iLocal_99) > 850)
		{
			iLocal_98 = 0;
			iLocal_100 = 0;
		}
	}
}

bool func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_124(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_81(iParam0, 1);
	func_82(iParam0, 1);
	func_83(iParam0, 128);
}

bool func_125(var uParam0)
{
	return func_118(*uParam0, 2);
}

int func_126()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_127(var uParam0)
{
	if (does_cam_exist(uParam0->f_32))
	{
		set_cam_active(uParam0->f_32, false);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_32, false);
	}
	fLocal_395 = get_entity_heading(Global_35);
	uParam0->f_68 = { get_entity_coords(Global_35, true, false) };
	uParam0->f_71 = { get_entity_rotation(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_226 };
	uParam0->f_110 = 0;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	vLocal_233 = { uParam0->f_83 };
	vLocal_233.x = (vLocal_233.x + 1f);
	vLocal_236 = { vLocal_233 };
	uParam0->f_43.f_3 = get_player_index();
	uParam0->f_43.f_4 = 21030;
	if (!does_cam_exist(uParam0->f_32))
	{
		fVar0 = 50f;
		uParam0->f_32 = create_cam_with_params("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25f;
	uParam0->f_33.f_1 = 2f;
	uParam0->f_33.f_2 = 128f;
	uParam0->f_33.f_3 = 30f;
	uParam0->f_33.f_4 = 30f;
	uParam0->f_33.f_5 = 90f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	_0xe4b7945ef4f1bfb2(uParam0->f_32, &(uParam0->f_33));
	_0x9f97e85ec142255e(uParam0->f_32, uParam0->f_110);
	_0x42ed56b02e05d109(uParam0->f_32, false);
	set_cam_active(uParam0->f_32, true);
	render_script_cams(true, false, 3000, true, false, 0);
}

void func_128()
{
	sLocal_250[0] = "portrait_normal";
	sLocal_250[1] = "portrait_happy";
	sLocal_250[2] = "portrait_pensive";
	sLocal_250[3] = "portrait_pensive_2";
	sLocal_250[4] = "portrait_relaxed";
	sLocal_250[5] = "portrait_angry";
	sLocal_250[6] = "portrait_angry_2";
	sLocal_250[7] = "portrait_annoyed";
}

void func_129()
{
	iLocal_384[0] = 0;
	iLocal_384[1] = 1;
	iLocal_384[2] = 2;
	iLocal_384[3] = 3;
	iLocal_384[4] = 4;
	iLocal_384[5] = 5;
	iLocal_384[6] = 6;
}

void func_130(var uParam0)
{
	fLocal_217 = get_control_normal(0, 1206668322);
	if (fLocal_217 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90f)
		{
			if (_is_using_keyboard(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.9f);
			}
			_0xe4b7945ef4f1bfb2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30f)
		{
			if (_is_using_keyboard(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.9f);
			}
			_0xe4b7945ef4f1bfb2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_57)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

float func_131(float fParam0, float fParam1)
{
	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(floor(fVar0))) * 360f) - 180f);
	return fVar0;
}

int func_132(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_163(bParam1, bParam2, bParam3);
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

Vector3 func_133(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_134()
{
	iLocal_394 = 1;
	iLocal_393 = get_game_timer();
	iLocal_392 = 1;
	func_16();
}

void func_135(var uParam0)
{
	func_164(uParam0);
	switch (&iLocal_384[uParam0->f_88])
	{
		case 0:
			func_165(Global_35);
			break;
		case 1:
			func_166(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_166(1904532698, "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_166(-22664287, "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_166(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			set_entity_heading(Global_35, (fVar392 + 180f));
			break;
		case 6:
			func_166(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

float func_136()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_137(int iParam0, bool bParam1)
{
	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return _uiprompt_is_just_released((*Global_1945938)[iVar0]->f_3);
}

void func_138()
{
	_databinding_write_data_string(uLocal_59, " ");
	_databinding_write_data_string(uLocal_60, " ");
	_databinding_write_data_string(uLocal_61, " ");
	_databinding_write_data_string(uLocal_62, " ");
	_databinding_write_data_string(uLocal_63, " ");
}

void func_139()
{
	_0x37d7bdba89f13959(sLocal_93);
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_141(int iParam0)
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

bool func_142(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_144(int iParam0)
{
	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_145(int iParam0, int iParam1)
{
	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_167(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_168("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_169(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_170(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_171(iVar1);
				return true;
			}
			iVar3++;
		}
		func_171(iVar1);
	}
	return false;
}

int func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_167(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_172(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_173(bParam2), iParam0, 0);
	return uVar2;
}

void func_147(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_174(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_175(iParam0))
	{
		return false;
	}
	if (func_176(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_177(iParam0, 1)) || func_178(32768))
	{
		if (!func_177(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_179())
	{
		return false;
	}
	return true;
}

void func_150(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_151()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

int func_152(int iParam0)
{
	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_153(int iParam0)
{
	if (!func_180(iParam0))
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

char* func_154(int iParam0)
{
	if (func_26())
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_SAVE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			case 11:
				return "CAM_PM_MOVEMENT";
			case 12:
				return "CAM_PM_CAMERA";
			case 13:
				if (iLocal_241 == 2)
				{
					return "CAM_PM_HEIGHT";
				}
				else
				{
					return "CAM_PM_ZOOM";
				}
				break;
			case 14:
				return "CAM_PM_HUD_TOGGLE";
			case 15:
				return "CAM_PM_ORBIT_TOGGLE";
			case 16:
				return "CAM_PM_DOF";
			case 17:
				return "CAM_PM_FILTERS";
			case 18:
				return "CAM_SAVE_PHOTO";
			case 20:
				return "CAM_PM_RESET";
			case 21:
				return "CAM_PM_S_LENS";
			case 22:
				return "CAM_PM_ROTATE";
			case 23:
				return "CAM_PM_FOCLENGTH";
			case 24:
				return "CAM_PM_FILINTENS";
			case 25:
				return "CAM_PM_CONTRAST";
			case 26:
				return "CAM_PM_EXPOSURE";
			case 27:
				return "CAM_PM_EXPOLOCK";
			case 28:
				return "CAM_PM_APERTURE";
			case 19:
				if (func_14(&Local_103) == 14)
				{
					return "CAM_PM_B_MODE";
				}
				else if (func_14(&Local_103) == 12)
				{
					return "CAM_PM_A_MODE";
				}
				else if (func_14(&Local_103) == 13)
				{
					return "CAM_PM_E_MODE";
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_TAKE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			default:
				break;
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_155(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_123(iVar0, 2))
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
		func_124(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

int func_156(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_123(iVar0, 2))
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
		func_124(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1606906090;
		case 7:
			return 789834906;
		case 0:
			return 2003789289;
		case 3:
			return 805566940;
		case 1:
			return -1403444502;
		case 4:
			return 1206668322;
		case 8:
			return 129385309;
		case 9:
			return -1923356207;
		case 6:
			return 1157240002;
		case 5:
			return -588681881;
		case 11:
			return 1326671122;
		case 12:
			return 787094826;
		case 13:
			return 592761574;
		case 14:
			return 2140165621;
		case 15:
			return -1626951012;
		case 16:
			return 129385309;
		case 17:
			return 1331955845;
		case 18:
			return -1584354617;
		case 19:
			return -1892490517;
		case 20:
			return -1576420009;
		case 21:
			return -1321674599;
		case 22:
			return 787094826;
		case 23:
			return -2006271410;
		case 24:
			return 579261547;
		case 25:
			return 1212117119;
		case 26:
			return -967957884;
		case 27:
			return -1646228111;
		case 28:
			return 649703018;
		default:
			break;
	}
	return 0;
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_160(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	func_81(iVar0, bParam1);
}

void func_161(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_136() - fParam1);
	func_181(uParam0, 1);
	func_182(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_162(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_184(iParam0);
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
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

void func_164(var uParam0)
{
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
	clear_ped_tasks_immediately(player_ped_id(), false, true);
	set_entity_heading(Global_35, fVar392);
}

void func_165(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		clear_ped_tasks_immediately(iParam0, false, true);
		force_ped_motion_state(iParam0, -1871534317, true, 0, false);
		clear_ped_tasks(iParam0, 1, 0);
		task_stand_still(iParam0, -1);
		set_ped_stealth_movement(iParam0, 0, 0, 0);
	}
}

void func_166(int iParam0, char* sParam1)
{
	uLocal_397 = create_scenario_point(iParam0, vLocal_220, uVar391, 0, 0, 1);
	_set_scenario_point_flag(iVar393, 25, true);
	_set_scenario_point_flag(iVar393, 23, true);
	_task_use_scenario_point(Global_35, iVar393, sParam1, -1, false, true, 0, false, 0f, false);
}

int func_167(int iParam0, int iParam1)
{
	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_185(iParam0, 1399091007))
	{
		func_186(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_168(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_173(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_169(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_170(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_171(int iParam0)
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

int func_172(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_187(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_189(&Var0, func_188(0));
	}
	if (!func_190(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_171(iVar14);
	return uVar15;
}

int func_173(bool bParam0)
{
	if (func_191() == -1)
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

bool func_174(int iParam0, int iParam1)
{
	if (func_191() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_175(int iParam0)
{
	if (func_191() != -1)
	{
		if (func_177(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_177(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_177(iParam0, 65536) && !func_177(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_177(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_177(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_177(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_178(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_179()
{
	return Global_1905944->f_5694;
}

bool func_180(int iParam0)
{
	return func_123(iParam0, 2);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_183(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_184(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_192(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_185(int iParam0, int iParam1)
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

void func_186(int iParam0, var uParam1, var uParam2)
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

struct<14> func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_188(bool bParam0)
{
	iVar0 = func_173(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_194(923904168, func_193(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_194(923904168, func_193(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_194(923904168, func_193(bParam0), -740156546, 0);
}

void func_189(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_190(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_173(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_191()
{
	return Global_1572887->f_12;
}

int func_192(int iParam0)
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

struct<4> func_193(bool bParam0)
{
	return func_194(1328661203, func_195(), -1591664384, bParam0);
}

struct<4> func_194(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_143(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_173(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_195()
{
	return Var0;
}

