void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	StringCopy(&cLocal_27, "", 32);
	StringCopy(&cLocal_31, "", 32);
	sLocal_35 = "CameraViewfinder";
	sLocal_36 = "CameraTakePicture";
	sLocal_37 = "CameraTransitionBlink";
	bLocal_46 = true;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	iLocal_220 = 4;
	iLocal_221 = -1534086282;
	iLocal_223 = -193491261;
	if (has_force_cleanup_occurred(515))
	{
		func_1(&Local_47, 0);
		func_2();
		terminate_this_thread();
	}
	while (bLocal_46)
	{
		if (iLocal_13 == 1)
		{
			func_3();
		}
		if (func_4(&(Local_47.f_1[2]), 1))
		{
			if (is_bit_set(&Global_1357510, 5))
			{
				func_5(&(Local_47.f_1[2]), 0, 1);
			}
			else
			{
				func_5(&(Local_47.f_1[2]), 1, 1);
			}
		}
		if (func_4(&(Local_47.f_1[8]), 1))
		{
			if (bLocal_216)
			{
				func_5(&(Local_47.f_1[8]), 0, 1);
			}
			else
			{
				func_5(&(Local_47.f_1[8]), 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(4096);
		func_6(16384);
		func_6(1);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -711536720, false);
		if (bLocal_46)
		{
			if (func_7(&Local_47))
			{
				bLocal_46 = true;
			}
			else
			{
				bLocal_46 = false;
			}
		}
		func_8(Local_47);
		func_9(&Local_47);
		func_10(&(Local_47.f_90), &(Local_47.f_91), &(Local_47.f_94), &(Local_47.f_95), 1301263553, -39308912, -1450761377, -771458680, 2);
		if (func_11(&(Local_47.f_1[2]), 1) || func_11(&(Local_47.f_1[7]), 1))
		{
			iLocal_38 = 1;
			if (func_12(&Local_47) == 3)
			{
				func_13(&Local_47, 15);
			}
			else if (func_12(&Local_47) != 6)
			{
			}
			else
			{
				func_14();
				if (_0x4ad019591e94c064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_191 = get_game_timer();
				bLocal_192 = true;
				func_15();
				Global_1357507 = 0;
				func_13(&Local_47, 4);
			}
		}
		func_16(&Local_47);
		iVar0 = func_12(&Local_47);
		if (func_17())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_18())
				{
					iLocal_13 = 0;
					uLocal_21 = _databinding_add_data_container_from_path("", "playerCamera");
					uLocal_22 = _databinding_add_data_string(uLocal_21, "cameraRollCapacityLabel", "Disabled");
					func_19();
					func_13(&Local_47, 1);
				}
				else
				{
					if (func_20(&Local_47))
					{
						_0xa42edf1e88734a7e();
						iLocal_13 = 1;
						func_21(&Local_47);
					}
					func_13(&Local_47, 1);
				}
				break;
			case 1:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_22();
				iLocal_10 = get_game_timer();
				func_13(&Local_47, 2);
				break;
			case 2:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				if (func_23())
				{
					if (func_24(iLocal_10, 0))
					{
						func_13(&Local_47, 12);
						_hide_hud_component(959420967);
						set_game_paused(true);
					}
				}
				else if (func_24(iLocal_10, 0) && func_25(Global_35, 1, 0, 0) == -1016714371)
				{
					func_13(&Local_47, 3);
				}
				break;
			case 4:
				func_9(&Local_47);
				_0x2804658eb7d8a50b(5, 499451365);
				if (bLocal_192)
				{
					if ((get_game_timer() - iLocal_191) > 500)
					{
						_display_hud_component(959420967);
						set_cam_active(Local_47.f_32, false);
						render_script_cams(false, false, 3000, true, false, 0);
						detach_cam(Local_47.f_32);
						destroy_cam(Local_47.f_32, false);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_13(&Local_47, 3);
						func_26();
						bLocal_192 = false;
						func_27();
					}
				}
				break;
			case 3:
				_0x2804658eb7d8a50b(5, 499451365);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((get_game_timer() - iLocal_184) > 100)
				{
					func_28();
					iLocal_184 = get_game_timer();
				}
				if (func_20(&Local_47))
				{
					func_29(&Local_47);
					func_30(3);
					func_31(1);
					func_21(&Local_47);
				}
				set_player_forced_aim(get_player_index(), false, 0, -1, false);
				if (iLocal_38 == 1 && &Global_1357508 == 0)
				{
					if (is_control_released(0, 2003789289))
					{
						iLocal_38 = 0;
					}
					else
					{
						iLocal_38 = 1;
					}
				}
				if (&Global_1357508 == 1)
				{
					iLocal_38 = 0;
				}
				if (bLocal_183 && iLocal_38 == 0)
				{
					func_5(&(Local_47.f_1[0]), 1, 1);
					if (func_32(&(Local_47.f_1[0]), 1) || &Global_1357508 == 1)
					{
						clear_ped_tasks(player_ped_id(), 1, 0);
						disable_control_action(0, 1301263553, false);
						disable_control_action(0, -39308912, false);
						if (&Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_15();
						_hide_hud_component(959420967);
						func_33();
						iLocal_160 = get_game_timer();
						func_13(&Local_47, 5);
					}
				}
				else
				{
					func_5(&(Local_47.f_1[0]), 0, 1);
				}
				if ((get_game_timer() - iLocal_163) > 600)
				{
					func_34();
					iLocal_163 = get_game_timer();
				}
				if (bLocal_162)
				{
					func_5(&(Local_47.f_1[1]), 1, 1);
					if (func_32(&(Local_47.f_1[1]), 1))
					{
						if (func_35(Global_35, 0))
						{
						}
						else
						{
							iLocal_188 = 0;
							iLocal_190 = 0;
							func_15();
							func_13(&Local_47, 8);
							if (!func_36(&uLocal_185))
							{
								func_37(&uLocal_185, 1);
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
					func_5(&(Local_47.f_1[1]), 0, 1);
				}
				break;
			case 5:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				if (func_38() && (get_game_timer() - iLocal_160) > 500)
				{
					func_39();
					clear_ped_tasks(player_ped_id(), 1, 0);
					Local_47.f_68 = { get_entity_coords(Global_35, true, false) };
					Local_47.f_71 = { get_entity_rotation(Global_35, 2) };
					Local_47.f_83 = { Local_47.f_71, Local_47.f_71.f_1, Local_47.f_71.f_2 };
					Local_47.f_77 = { _get_object_offset_from_coords(Local_47.f_68, Local_47.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_47.f_110 = 0;
					Local_47.f_83 = { 0f, 0f, 0f };
					Local_47.f_82 = 0f;
					Local_47.f_81 = 0f;
					Local_47.f_32 = create_cam_with_params("KIT_CAMERA", Local_47.f_77, Local_47.f_83, 65f, false, 2);
					attach_cam_to_ped_bone(Local_47.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					set_cam_near_clip(Local_47.f_32, 0.25f);
					Local_47.f_33 = 5f;
					Local_47.f_33.f_1 = 2f;
					Local_47.f_33.f_2 = 128f;
					Local_47.f_33.f_3 = 25f;
					Local_47.f_33.f_4 = 25f;
					Local_47.f_33.f_5 = 60f;
					Local_47.f_33.f_6 = 1;
					Local_47.f_33.f_7 = 0;
					Local_47.f_33.f_8 = 1;
					Local_47.f_33.f_9 = 1;
					_0xe4b7945ef4f1bfb2(Local_47.f_32, &(Local_47.f_33));
					_0x9f97e85ec142255e(Local_47.f_32, Local_47.f_110);
					_0x42ed56b02e05d109(Local_47.f_32, false);
					set_cam_active(Local_47.f_32, true);
					render_script_cams(true, true, 0, false, false, 0);
					if (_0x4ad019591e94c064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_34();
					iLocal_163 = get_game_timer();
					func_27();
					func_13(&Local_47, 6);
				}
				break;
			case 6:
				_0x3c8f74e8fe751614();
				_0x2804658eb7d8a50b(4, 1499787188);
				if (iLocal_39 == 0)
				{
					if (!is_player_ready_for_cutscene(player_id()))
					{
						Global_1357509 = 1;
						iLocal_39 = 1;
					}
				}
				if (is_bit_set(&Global_1357510, 6))
				{
				}
				else
				{
					_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_20(&Local_47))
				{
					func_30(6);
					func_21(&Local_47);
				}
				func_40(&Local_47);
				if (iLocal_42 == 0)
				{
					if (func_41(&(Local_47.f_1[6])) && !func_42(&Local_47, 32))
					{
						func_29(&Local_47);
						if (_0x4ad019591e94c064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
						{
							_play_sound_from_entity("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_43(1);
						func_44(&Local_47, 32);
					}
					if (!func_42(&Local_47, 32))
					{
						if (func_41(&(Local_47.f_1[5])))
						{
							func_45();
						}
					}
				}
				break;
			case 11:
				if (func_20(&Local_47))
				{
					Local_47.f_1[6] = func_46("CAM_TAKE_PHOTO", 129547951, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_31(1);
					func_47("CAM_SNAP", 0, 0, 1);
					func_21(&Local_47);
				}
				if (func_48())
				{
					if (!func_42(&Local_47, 16))
					{
						func_13(&Local_47, 3);
					}
					else
					{
						func_13(&Local_47, 16);
					}
				}
				else
				{
					func_49(&Local_47);
				}
				break;
			case 10:
				func_50(&Local_47);
				_0x2804658eb7d8a50b(5, 499451365);
				iLocal_38 = 1;
				if (iLocal_189 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						if (does_cam_exist(Local_47.f_32))
						{
							set_cam_active(Local_47.f_32, false);
							render_script_cams(false, false, 3000, true, false, 0);
							destroy_cam(Local_47.f_32, false);
						}
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						set_current_ped_weapon(Global_35, -1016714371, true, 0, false, false);
						set_ped_current_weapon_visible(Global_35, true, true, true, false);
						set_entity_heading(Global_35, fLocal_217);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_26();
						iLocal_189 = 1;
					}
				}
				if (func_51(&uLocal_185) > 1000)
				{
					_display_hud_component(959420967);
					func_27();
					func_52(&uLocal_185);
					func_14();
					func_13(&Local_47, 3);
				}
				break;
			case 8:
				func_50(&Local_47);
				if (iLocal_188 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						set_ped_current_weapon_visible(Global_35, false, false, true, false);
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						_set_entity_coords_and_heading(Global_35, vLocal_164, fLocal_175, true, false, true);
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						func_39();
						bLocal_216 = false;
						iLocal_188 = 1;
					}
				}
				if (iLocal_188 != 1)
				{
				}
				else if (iLocal_190 == 0)
				{
					if (func_51(&uLocal_185) > 300)
					{
						iLocal_190 = 1;
						func_53(&Local_47);
					}
				}
				else if (func_51(&uLocal_185) > 1000)
				{
					func_52(&uLocal_185);
					func_54(&Local_47);
					func_27();
					func_13(&Local_47, 9);
				}
				break;
			case 9:
				func_50(&Local_47);
				_0x3c8f74e8fe751614();
				_0x2804658eb7d8a50b(4, 1499787188);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_54(&Local_47);
				if (func_32(&(Local_47.f_1[6]), 1) && !func_42(&Local_47, 32))
				{
					func_29(&Local_47);
					if (_0x4ad019591e94c064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_43(1);
					func_44(&Local_47, 32);
				}
				else if (func_32(&(Local_47.f_1[1]), 1))
				{
					func_13(&Local_47, 8);
				}
				if (!func_42(&Local_47, 32))
				{
					if (func_41(&(Local_47.f_1[5])))
					{
						func_45();
					}
				}
				break;
			case 7:
				break;
			case 15:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_29(&Local_47);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_35, 1, 0, 0, 0);
				func_13(&Local_47, 16);
				break;
			case 16:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_2();
				func_1(&Local_47, 1);
				if (_get_ped_crouch_movement(Global_35))
				{
				}
				else
				{
					clear_ped_tasks(Global_35, 1, 0);
				}
				terminate_this_thread();
				break;
		}
		wait(0);
		if (func_55())
		{
			if (func_56(&uLocal_202) > 1f)
			{
				func_57();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			_0x2804658eb7d8a50b(4, 1499787188);
			_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_PM", 1, 0, 0, 0);
			if (func_11(&(Local_47.f_1[7]), 1))
			{
				func_13(&Local_47, 15);
			}
			if (func_20(&Local_47))
			{
				func_29(&Local_47);
				func_30(12);
				func_31(1);
				func_21(&Local_47);
			}
			if (func_41(&(Local_47.f_1[6])) && !func_42(&Local_47, 32))
			{
				set_game_paused(false);
				func_29(&Local_47);
				if (_0x4ad019591e94c064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Take_Photo", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_43(1);
				func_44(&Local_47, 32);
				bLocal_9 = true;
			}
			if (!func_42(&Local_47, 32))
			{
				if (bLocal_9)
				{
					set_game_paused(true);
					bLocal_9 = false;
				}
				if (func_41(&(Local_47.f_1[5])))
				{
					func_45();
				}
			}
		}
	}
	func_2();
	func_1(&Local_47, 1);
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	if (func_58())
	{
		Global_1357504 = uParam0->f_89;
		_display_hud_component(-1404924319);
	}
	Global_1357503 = 0;
	func_59(0);
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
	if (!func_58())
	{
		clear_facial_idle_anim_override(Global_35);
	}
	remove_clip_set(func_60());
	remove_anim_dict(func_61());
	_0xf1142e5d64b47802(false, false);
	_0x614682e715adbaac();
	_0xd45547d8396f002a();
	func_29(uParam0);
	func_31(1);
	display_radar(true);
	_text_database_delete("CAMERA");
	if (get_hash_of_this_script_name() == 778601866)
	{
		func_62();
		Global_1935496->f_127 = 1;
	}
}

void func_2()
{
	if (iLocal_11 == 1)
	{
		_0x00a15b94cba4f76f(iLocal_41);
	}
	_databinding_remove_data_entry(uLocal_21);
	_uistatemachine_destroy(1459179713);
	_uiflowblock_release(&iLocal_222);
	iLocal_222 = 0;
	func_26();
	if (animpostfx_is_running(sLocal_37))
	{
		animpostfx_stop(sLocal_37);
	}
	_0x37d7bdba89f13959("CameraViewfinder");
	_0x37d7bdba89f13959("CameraTransitionBlink");
	func_14();
	func_43(0);
}

void func_3()
{
	Local_47.f_106 = _0xb28894cd7408bd0c();
	if (Local_47.f_106 == 1)
	{
	}
	if (Local_47.f_106 == 0)
	{
		bLocal_12 = false;
		iLocal_14 = _0x78c56b8a7b1d000c();
		iLocal_15 = _0x8e587fcd30e05592();
		uLocal_21 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_22 = _databinding_add_data_string(uLocal_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		uLocal_23 = _databinding_add_data_string(uLocal_21, "photoModeLabel0", " ");
		uLocal_24 = _databinding_add_data_string(uLocal_21, "photoModeLabel1", " ");
		uLocal_25 = _databinding_add_data_string(uLocal_21, "photoModeLabel2", " ");
		uLocal_26 = _databinding_add_data_string(uLocal_21, "photoModeLabel3", " ");
		func_63();
		iLocal_13 = 0;
		bLocal_17 = true;
		iLocal_18 = get_game_timer();
	}
	else if (Local_47.f_106 == 2)
	{
		bLocal_12 = true;
		uLocal_21 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_22 = _databinding_add_data_string(uLocal_21, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_13 = 0;
		bLocal_17 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (bParam1)
	{
		func_66(iParam0, 4);
		func_67(iVar0, 1);
		func_68(iVar0, 1);
	}
	else
	{
		func_69(iParam0, 4);
		func_68(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

bool func_7(var uParam0)
{
	if (&Global_1357509 == 1)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1357509 = 0;
		return false;
	}
	if (!func_58())
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
	if (!func_58())
	{
		if (func_70())
		{
			if (func_71(19) || func_72(Global_1914319->f_16855.f_1))
			{
			}
			else
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_58())
	{
		if (is_entity_on_fire(Global_35))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
	}
	if (!func_73(Global_35, 0))
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
	if (!func_58())
	{
		if (!func_74(-1016714371, 1, 0))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
		if (func_12(uParam0) == 8)
		{
		}
		if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
		{
			if (func_25(Global_35, 1, 0, 1) != -1016714371)
			{
				if (func_75(uParam0) == 0)
				{
					return false;
				}
			}
		}
	}
	if (func_76())
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		return false;
	}
	if (!func_58())
	{
		if (is_ped_in_any_vehicle(Global_35, true) && !is_entity_dead(get_vehicle_ped_is_in(Global_35, true)))
		{
			func_77("CAM_VEH", 10000, 0, 0, 0, 1);
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			return false;
		}
	}
	return true;
}

void func_8(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
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
	if (func_78(Global_35))
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

void func_9(var uParam0)
{
	disable_control_action(0, -128997553, false);
	set_input_exclusive(0, 1360019509);
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
	}
	if (!uParam0->f_107 == 3)
	{
		disable_control_action(0, 255439828, false);
		func_79(0);
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

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_11(int iParam0, bool bParam1)
{
	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_107;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_80(uParam0);
}

void func_14()
{
	_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
	_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!animpostfx_is_running(sLocal_37))
	{
		animpostfx_play(sLocal_37);
	}
}

void func_16(var uParam0)
{
	if (func_4(&(uParam0->f_1[6]), 1))
	{
		if (uParam0->f_108 == 0 && iLocal_13 == 0)
		{
			func_5(&(uParam0->f_1[6]), 1, 1);
			if (bLocal_17)
			{
				if ((get_game_timer() - iLocal_18) > 2500)
				{
					iLocal_14 = _0x78c56b8a7b1d000c();
					func_63();
					iLocal_18 = get_game_timer();
				}
			}
		}
		else
		{
			func_5(&(uParam0->f_1[6]), 0, 1);
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (is_control_just_pressed(2, 217814591))
			{
				_0x00a15b94cba4f76f(iLocal_41);
				bLocal_12 = true;
				func_81(uParam0, 2);
				iLocal_11 = 0;
			}
			break;
		case 0:
			if (func_42(uParam0, 32))
			{
				func_29(uParam0);
				if (func_18() || bLocal_12)
				{
					func_81(uParam0, 2);
				}
				else if (iLocal_14 == iLocal_15)
				{
					if (iLocal_41 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = get_hash_key("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_41 = func_82(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_81(uParam0, 1);
						iLocal_11 = 1;
					}
					else
					{
						bLocal_12 = true;
						func_81(uParam0, 2);
					}
				}
				else
				{
					func_81(uParam0, 2);
				}
			}
			if (func_42(uParam0, 128))
			{
				_0x614682e715adbaac();
				_0x494a9874f17a7d50(1);
				func_81(uParam0, 7);
			}
			break;
		case 2:
			Local_47.f_112 = 0;
			func_43(0);
			func_81(uParam0, 3);
			iLocal_45 = get_game_timer();
			break;
		case 3:
			if ((get_game_timer() - iLocal_45) > 0)
			{
				iLocal_45 = get_game_timer();
				if (!func_23())
				{
					func_83();
				}
				if (func_18() || bLocal_12)
				{
					func_81(uParam0, 4);
				}
				else
				{
					_0xd45547d8396f002a();
					begin_take_high_quality_photo();
					iLocal_14++;
					func_63();
					set_no_loading_screen(true);
					func_81(uParam0, 5);
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
				if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
				{
					_0x2705d18c11b61046(1);
				}
				else
				{
					_0x2705d18c11b61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_84();
				if (func_85(iVar23))
				{
					MemCopy(&cVar19, {func_86(iVar23)}, 4);
				}
				if (is_string_null_or_empty(&cVar19))
				{
					iVar24 = func_87();
					StringCopy(&cVar19, func_88(iVar24), 32);
				}
				_0xd1031b83ac093bc7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_89();
				if (func_90(iVar29))
				{
					StringCopy(&cVar25, func_91(iVar29), 16);
					StringCopy(&cVar27, func_92(iVar29), 16);
				}
				_0x9937facbbf267244(&cVar25);
				_0x8952e857696b8a79(&cVar27);
				save_high_quality_photo(0);
				iLocal_16 = 0;
				func_81(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_81(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_16 == 0)
			{
				set_no_loading_screen(false);
				func_39();
				func_30(func_12(uParam0));
				func_5(&(uParam0->f_1[6]), 0, 1);
				func_93(600, 0);
				iLocal_16 = 1;
			}
			uParam0->f_106 = get_status_of_save_high_quality_photo();
			if (uParam0->f_106 == 0)
			{
				Local_47.f_112 = 1;
				func_94(uParam0, 32);
				func_81(uParam0, 0);
				if (_0x4ad019591e94c064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_106 == 2)
			{
				Local_47.f_112 = 1;
				func_94(uParam0, 32);
				func_81(uParam0, 0);
			}
			break;
		case 4:
			if ((get_game_timer() - iLocal_45) > 300)
			{
				set_no_loading_screen(false);
				func_94(uParam0, 32);
				func_81(uParam0, 0);
				func_39();
				func_30(func_12(uParam0));
				if (_0x4ad019591e94c064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_93(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = _0x13430d3d5a45f14b(1);
			if (uParam0->f_106 == 0)
			{
				_0xf1142e5d64b47802(true, false);
				func_44(uParam0, 256);
				func_94(uParam0, 128);
				func_81(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_94(uParam0, 128);
				func_81(uParam0, 0);
			}
			break;
	}
}

bool func_17()
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

bool func_18()
{
	return &Global_1357506;
}

void func_19()
{
	_databinding_write_data_string(uLocal_23, " ");
	_databinding_write_data_string(uLocal_24, " ");
	_databinding_write_data_string(uLocal_25, " ");
	_databinding_write_data_string(uLocal_26, " ");
	StringCopy(&cLocal_27, "-", 32);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	_databinding_write_data_string(uLocal_22, &cLocal_27);
}

bool func_20(var uParam0)
{
	return *uParam0;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
}

void func_22()
{
	if (func_58())
	{
		_text_database_request("CAMERA");
	}
	else
	{
		_text_database_request("CAMERA");
		request_anim_dict(func_61());
		request_clip_set(func_60());
		_0x5199405eabfbd7f0("CameraViewfinder");
		_0x5199405eabfbd7f0("CameraTransitionBlink");
	}
}

bool func_23()
{
	return false;
}

bool func_24(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_58())
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
		if (!has_clip_set_loaded(func_60()))
		{
			iVar0 = 0;
		}
		if (!has_anim_dict_loaded(func_61()))
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

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_26()
{
	if (animpostfx_is_running(sLocal_35))
	{
		animpostfx_stop(sLocal_35);
	}
}

void func_27()
{
	if (animpostfx_is_running(sLocal_37))
	{
		_0xc5cb91d65852ed7e(sLocal_37);
	}
}

void func_28()
{
	vLocal_167 = { get_entity_coords(Global_35, true, false) };
	fVar0 = get_entity_heading(Global_35);
	vVar1 = { _get_object_offset_from_coords(vLocal_167, fVar0, 0f, 2f, -0.2f) };
	if (_get_ped_crouch_movement(Global_35))
	{
		bLocal_183 = false;
		return;
	}
	if (_0x0c9dbf48c6ba6e4c(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_183 = true;
	}
	else
	{
		bLocal_183 = false;
	}
}

void func_29(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_64(&(uParam0->f_1[iVar0])))
		{
			func_95(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_96(6, 1);
			func_96(7, 1);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			break;
		case 3:
			func_96(6, 0);
			func_96(3, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(0, 1);
			func_96(1, 1);
			func_96(2, 1);
			break;
		case 6:
			func_96(0, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 8:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 9:
			func_96(0, 0);
			func_96(1, 0);
			func_96(2, 0);
			func_96(5, 1);
			func_96(8, 1);
			func_96(9, 1);
			func_96(3, 1);
			func_96(4, 1);
			func_96(6, 1);
			func_96(7, 1);
			break;
		case 10:
			func_96(2, 0);
			func_96(0, 0);
			func_96(3, 0);
			func_96(1, 0);
			func_96(5, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			func_96(6, 0);
			func_96(9, 0);
			func_96(4, 0);
			break;
		case 7:
			func_96(2, 0);
			func_96(0, 0);
			func_96(6, 0);
			func_96(4, 0);
			func_96(5, 0);
			func_96(1, 0);
			func_96(8, 0);
			func_96(9, 0);
			func_96(7, 0);
			break;
	}
}

void func_31(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_32(int iParam0, bool bParam1)
{
	if (bParam1 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_33()
{
	if (iLocal_220 == 0)
	{
		iLocal_220 = 1;
	}
}

void func_34()
{
	vLocal_167 = { get_entity_coords(Global_35, true, false) };
	fVar0 = get_entity_heading(Global_35);
	vVar1 = { _get_object_offset_from_coords(vLocal_167, fVar0, 0f, 4f, 0f) };
	get_ground_z_for_3d_coord(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, false);
	get_ground_z_for_3d_coord(vLocal_167, &uVar5, false);
	if ((vLocal_167.z - fVar4) > 3f)
	{
		bLocal_162 = false;
		return;
	}
	if (is_player_riding_train(player_id()))
	{
		bLocal_162 = false;
		return;
	}
	if (is_ped_on_mount(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (_0x50f124e6ef188b22(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (get_number_of_fires_in_range(vLocal_167, 2f) > 0)
	{
		bLocal_162 = false;
		return;
	}
	if ((fVar4 - vLocal_167.z) > 1f)
	{
		bLocal_162 = false;
		return;
	}
	if (is_entity_in_water(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (func_35(Global_35, 0))
	{
		bLocal_162 = false;
		return;
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (test_vertical_probe_against_all_water(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_162 = false;
		return;
	}
	if (is_point_on_road(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_162 = false;
		return;
	}
	fVar6 = 1f;
	if (_0x0c9dbf48c6ba6e4c(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_162 = true;
	}
	else
	{
		bLocal_162 = false;
	}
	if (bLocal_162)
	{
		vLocal_164 = { vLocal_167.x, vLocal_167.y, (vLocal_167.z - 1f) };
		fLocal_175 = fVar0;
		vLocal_170 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_35(int iParam0, int iParam1)
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

bool func_36(var uParam0)
{
	return func_97(*uParam0, 1);
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1 || !func_36(uParam0))
	{
		func_98(uParam0);
	}
}

bool func_38()
{
	switch (iLocal_220)
	{
		case 0:
			if (iLocal_221 == iLocal_223)
			{
			}
			break;
		case 1:
			iLocal_222 = _uiflowblock_request(iLocal_221);
			iLocal_220 = 2;
			break;
		case 2:
			if (_uiflowblock_is_loaded(iLocal_222))
			{
				_uiflowblock_enter(iLocal_222, iLocal_223);
				_uistatemachine_create(1459179713, iLocal_222);
				iLocal_220 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_39()
{
	if (func_23())
	{
	}
	else if (!animpostfx_is_running(sLocal_35))
	{
		animpostfx_play(sLocal_35);
	}
}

void func_40(var uParam0)
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
	if ((func_99((*Global_1347702)[85]->f_15) || func_99((*Global_1347702)[86]->f_15)) || func_99((*Global_1347702)[87]->f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((func_99((*Global_1347702)[85]->f_15) || func_99((*Global_1347702)[86]->f_15)) || func_99((*Global_1347702)[87]->f_15))
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
	func_100(uParam0);
	func_101(uParam0);
	set_cam_params(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((func_99((*Global_1347702)[85]->f_15) || func_99((*Global_1347702)[86]->f_15)) || func_99((*Global_1347702)[87]->f_15))
	{
	}
	else if ((get_game_timer() - iLocal_184) > 100)
	{
		if (iLocal_40 == 0)
		{
			fVar14 = get_entity_heading(Global_35);
			vVar15 = { _get_object_offset_from_coords(vLocal_167, fVar14, 0f, 0.25f, 0f) };
			if (!_0x0c9dbf48c6ba6e4c(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_40 = 1;
			}
		}
		iLocal_184 = get_game_timer();
	}
}

bool func_41(int iParam0)
{
	iVar0 = func_65(iParam0);
	iVar1 = (*Global_1945938)[iVar0]->f_4;
	return (func_32(iParam0, 1) && is_control_just_pressed(2, iVar1));
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_43(int iParam0)
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

void func_44(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_45()
{
	_launch_app_with_entry("social_club_feed", "launch_to_photos");
}

int func_46(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_102(iVar0, 2))
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
				func_103(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

var func_47(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_77(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_48()
{
	if (!is_player_free_aiming(player_id()))
	{
	}
	return false;
}

int func_49(var uParam0)
{
	if (is_control_just_pressed(2, 129547951) && !func_42(uParam0, 32))
	{
		_play_sound_from_entity("CLICK", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		func_43(1);
		func_44(uParam0, 32);
	}
	return 1;
}

void func_50(var uParam0)
{
	vLocal_167 = { get_entity_coords(Global_35, true, false) };
	if (get_distance_between_coords(vLocal_167, vLocal_164, true) > 3f)
	{
		_set_entity_coords_and_heading(Global_35, vLocal_164, fLocal_175, true, false, true);
		_set_entity_health(player_ped_id(), 0, 0);
	}
}

int func_51(var uParam0)
{
	if (!func_36(uParam0))
	{
		return 0;
	}
	if (func_104(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_105() - round((uParam0->f_1 * 1000f)));
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_53(var uParam0)
{
	if (func_20(uParam0))
	{
		func_30(8);
		func_21(uParam0);
	}
	func_106(uParam0);
	func_107();
	func_108();
	uParam0->f_88 = 0;
	iLocal_214 = 0;
	bLocal_173 = true;
	bLocal_174 = false;
	_hide_hud_component(959420967);
}

void func_54(var uParam0)
{
	func_109(uParam0);
	if (_0x6cd79468a1e595c6(0))
	{
		vLocal_177 = { vLocal_180 };
		fLocal_176 = 0f;
		fLocal_218 = 0f;
	}
	if (_is_using_keyboard(0))
	{
		fVar1 = (get_control_unbound_normal(0, -1450761377) * 4.5f);
		fVar2 = (get_control_unbound_normal(0, -771458680) * 4.5f);
		fVar0 = func_110(vLocal_180.z, (vLocal_177.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - -30f);
		}
		else
		{
			vLocal_177.f_2 = (vLocal_177.z - fVar1);
		}
		fVar0 = func_110(vLocal_180.x, (vLocal_177.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_177.x = (vLocal_180.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.x = (vLocal_180.x - -30f);
		}
		else
		{
			vLocal_177.x = (vLocal_177.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_176 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.6f);
					fLocal_176 = (fLocal_176 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.2f);
					fLocal_176 = (fLocal_176 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_176 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.6f);
					fLocal_176 = (fLocal_176 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.2f);
					fLocal_176 = (fLocal_176 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (is_look_inverted())
			{
			}
			if ((fLocal_218 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_177.x = (vLocal_177.x - 0.6f);
					fLocal_218 = (fLocal_218 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x - 0.2f);
					fLocal_218 = (fLocal_218 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (is_look_inverted())
			{
			}
			if ((fLocal_218 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_177.x = (vLocal_177.x + 0.6f);
					fLocal_218 = (fLocal_218 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x + 0.2f);
					fLocal_218 = (fLocal_218 + 0.07f);
				}
			}
		}
	}
	if (bLocal_173)
	{
		if (_0x0c9dbf48c6ba6e4c(Global_35, vLocal_170, 3167))
		{
			bLocal_174 = false;
		}
		else
		{
			bLocal_174 = true;
		}
		bLocal_173 = false;
	}
	if ((func_32(&(uParam0->f_1[7]), 1) || func_35(Global_35, 0)) || bLocal_174)
	{
		if (func_35(Global_35, 0))
		{
		}
		else if (func_111(player_id(), 1, 0, 1))
		{
		}
		if (_0x4ad019591e94c064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			_play_sound_from_entity("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_189 = 0;
		func_29(uParam0);
		func_13(uParam0, 10);
		func_15();
		clear_facial_idle_anim_override(Global_35);
		set_facial_idle_anim_override(Global_35, "portrait_normal", func_61());
		if (!func_36(&uLocal_185))
		{
			set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			func_37(&uLocal_185, 1);
		}
	}
	if (func_112(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			clear_facial_idle_anim_override(Global_35);
			set_facial_idle_anim_override(Global_35, &(sLocal_193[uParam0->f_87]), func_61());
		}
	}
	if (func_112(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			clear_facial_idle_anim_override(Global_35);
			set_facial_idle_anim_override(Global_35, &(sLocal_193[uParam0->f_87]), func_61());
		}
	}
	uParam0->f_43 = { func_113(get_player_index()) + get_entity_forward_vector(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_0x66f9eb44342bb4c5(Global_35, &(uParam0->f_43));
	if (bLocal_216 == 0)
	{
		if (func_112(&(uParam0->f_1[8]), 1, 1))
		{
			bLocal_216 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_114();
		}
	}
	if (bLocal_216 == 0)
	{
		if (func_112(&(uParam0->f_1[8]), 0, 1))
		{
			bLocal_216 = true;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_114();
		}
	}
	if (bLocal_216)
	{
		switch (iLocal_214)
		{
			case 0:
				break;
			case 1:
				if ((get_game_timer() - iLocal_215) > 200)
				{
					iLocal_214 = 2;
				}
				break;
			case 2:
				func_115(uParam0);
				iLocal_214 = 3;
				iLocal_215 = get_game_timer();
				break;
			case 3:
				if ((get_game_timer() - iLocal_215) > 500)
				{
					iLocal_214 = 4;
					iLocal_215 = get_game_timer();
					func_27();
				}
				break;
			case 4:
				if ((get_game_timer() - iLocal_215) > 700)
				{
					iLocal_214 = 0;
					bLocal_216 = false;
				}
				break;
			default:
				break;
		}
	}
	func_101(uParam0);
	set_cam_params(uParam0->f_32, uParam0->f_77, vLocal_177, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_55()
{
	return iLocal_205;
}

float func_56(var uParam0)
{
	if (!func_36(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_104(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_116() - uParam0->f_1);
}

void func_57()
{
	func_52(&uLocal_202);
	iLocal_205 = 0;
}

bool func_58()
{
	return &Global_1357503;
}

void func_59(bool bParam0)
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

char* func_60()
{
	return "facials@gen_male@portrait";
}

char* func_61()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_62()
{
	Global_1935496->f_29 = 0;
}

void func_63()
{
	_databinding_write_data_string(uLocal_23, " ");
	_databinding_write_data_string(uLocal_24, " ");
	_databinding_write_data_string(uLocal_25, " ");
	_databinding_write_data_string(uLocal_26, " ");
	StringCopy(&cLocal_27, "", 32);
	_int_to_string(iLocal_14, "%i", &cLocal_27);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "", 32);
	_int_to_string(iLocal_15, "%i", &cLocal_31);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	_databinding_write_data_string(uLocal_22, &cLocal_27);
}

bool func_64(int iParam0)
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

int func_65(int iParam0)
{
	return iParam0;
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_67(int iParam0, bool bParam1)
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

void func_68(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_69(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_70()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_71(int iParam0)
{
	if (func_70())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_118(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_73(int iParam0, int iParam1)
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
	if (func_119(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_119(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_119(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_74(int iParam0, int iParam1, bool bParam2)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
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
		if (!func_122(iParam0, 1))
		{
			return false;
		}
	}
	return func_123(iParam0, 0, bParam2) >= iParam1;
}

int func_75(var uParam0)
{
	return uParam0->f_108;
}

bool func_76()
{
	return Global_1935689->f_1;
}

var func_77(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_78(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_79(bool bParam0)
{
	if (bParam0)
	{
		func_124(4);
	}
	func_124(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_80(var uParam0)
{
	*uParam0 = 1;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_82(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_83()
{
	if (!animpostfx_is_running(sLocal_36))
	{
		animpostfx_play(sLocal_36);
	}
}

int func_84()
{
	return Global_1894899->f_2;
}

bool func_85(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_86(int iParam0)
{
	if (!func_85(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1888801)[iParam0]->f_22;
}

int func_87()
{
	return _get_water_map_zone_at_coords(Global_36);
}

char* func_88(int iParam0)
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

int func_89()
{
	return Global_1897952->f_41;
}

bool func_90(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_91(int iParam0)
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

char* func_92(int iParam0)
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

void func_93(int iParam0, bool bParam1)
{
	func_125(iParam0, &iVar0, &iVar1);
	if (!func_126(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_127(iVar0, iVar1);
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_64(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_65(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_128(iVar0);
	*uParam0 = 0;
}

void func_96(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_64(&(Local_47.f_1[iParam0])))
		{
			if (iParam0 == 9)
			{
				Local_47.f_1[iParam0] = func_130(func_129(iParam0), 129385309, -811138093, 0);
			}
			else if (iParam0 == 8)
			{
				Local_47.f_1[iParam0] = func_130(func_129(iParam0), -1923356207, -133104843, 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_47.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_47.f_1[iParam0] = func_132(sVar0, func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				Local_47.f_1[iParam0] = func_132(func_129(iParam0), func_131(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			if (iParam0 == 4)
			{
				func_133(&(Local_47.f_1[iParam0]), 11, 1, 1);
			}
			func_134(&(Local_47.f_1[iParam0]), -857683846, 0, 1);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[&Local_47.f_1[iParam0]]->f_3, true);
		}
	}
	else if (func_64(&(Local_47.f_1[iParam0])))
	{
		func_95(Local_47.f_1[iParam0], 1, 1);
	}
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_98(var uParam0)
{
	func_135(uParam0, 0f);
}

bool func_99(int iParam0)
{
	iVar0 = func_136(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_100(var uParam0)
{
	fLocal_161 = get_control_normal(0, 1206668322);
	if (fLocal_161 < -0.2f)
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
			if (!bLocal_19)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
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
			if (!bLocal_20)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

void func_101(var uParam0)
{
	if (iLocal_42 == 0)
	{
		if (func_41(&(uParam0->f_1[3])))
		{
			if (_0x4ad019591e94c064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_43 = get_game_timer();
			iLocal_42 = 1;
			iLocal_44 = 0;
		}
	}
	else if ((get_game_timer() - iLocal_43) > 300 && iLocal_44 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_65(&(Local_47.f_1[3]));
			_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_65(&(Local_47.f_1[3]));
			_uiprompt_set_text((*Global_1945938)[iVar1]->f_3, "CAM_FOCUS_LOCKE");
		}
		_0x9f97e85ec142255e(uParam0->f_32, uParam0->f_110);
		iLocal_44 = 1;
	}
	else
	{
		if ((get_game_timer() - iLocal_43) > 500)
		{
		}
		if ((get_game_timer() - iLocal_43) > 850)
		{
			iLocal_42 = 0;
			iLocal_44 = 0;
		}
	}
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_103(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_67(iParam0, 1);
	func_68(iParam0, 1);
	func_69(iParam0, 128);
}

bool func_104(var uParam0)
{
	return func_97(*uParam0, 2);
}

int func_105()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_106(var uParam0)
{
	if (does_cam_exist(uParam0->f_32))
	{
		set_cam_active(uParam0->f_32, false);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_32, false);
	}
	fLocal_217 = get_entity_heading(Global_35);
	uParam0->f_68 = { get_entity_coords(Global_35, true, false) };
	uParam0->f_71 = { get_entity_rotation(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_170 };
	uParam0->f_110 = 0;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	vLocal_177 = { uParam0->f_83 };
	vLocal_177.x = (vLocal_177.x + 1f);
	vLocal_180 = { vLocal_177 };
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

void func_107()
{
	sLocal_193[0] = "portrait_normal";
	sLocal_193[1] = "portrait_happy";
	sLocal_193[2] = "portrait_pensive";
	sLocal_193[3] = "portrait_pensive_2";
	sLocal_193[4] = "portrait_relaxed";
	sLocal_193[5] = "portrait_angry";
	sLocal_193[6] = "portrait_angry_2";
	sLocal_193[7] = "portrait_annoyed";
}

void func_108()
{
	iLocal_206[0] = 0;
	iLocal_206[1] = 1;
	iLocal_206[2] = 2;
	iLocal_206[3] = 3;
	iLocal_206[4] = 4;
	iLocal_206[5] = 5;
	iLocal_206[6] = 6;
}

void func_109(var uParam0)
{
	fLocal_161 = get_control_normal(0, 1206668322);
	if (fLocal_161 < -0.2f)
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
			if (!bLocal_19)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_19 = true;
			}
		}
		else if (bLocal_19)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_19 = false;
		}
	}
	else if (bLocal_19)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_19 = false;
	}
	if (fLocal_161 > 0.2f)
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
			if (!bLocal_20)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_20 = false;
		}
	}
	else if (bLocal_20)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_20 = false;
	}
}

float func_110(float fParam0, float fParam1)
{
	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(floor(fVar0))) * 360f) - 180f);
	return fVar0;
}

int func_111(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_137(bParam1, bParam2, bParam3);
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

bool func_112(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_64(iParam0))
	{
		return false;
	}
	iVar0 = func_65(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1945938)[iVar0]->f_3, iParam1);
}

Vector3 func_113(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_114()
{
	bLocal_216 = true;
	iLocal_215 = get_game_timer();
	iLocal_214 = 1;
	func_15();
}

void func_115(var uParam0)
{
	func_138(uParam0);
	switch (&iLocal_206[uParam0->f_88])
	{
		case 0:
			func_139(Global_35);
			break;
		case 1:
			func_140(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_140(1904532698, "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_140(-22664287, "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_140(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			set_entity_heading(Global_35, (fLocal_217 + 180f));
			break;
		case 6:
			func_140(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

float func_116()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_117(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_118(int iParam0)
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

bool func_119(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_121(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_122(int iParam0, int iParam1)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_141(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_142("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_143(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_144(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_145(iVar1);
				return true;
			}
			iVar3++;
		}
		func_145(iVar1);
	}
	return false;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_141(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_146(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_147(bParam2), iParam0, 0);
	return uVar2;
}

void func_124(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_148(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_149(iParam0))
	{
		return false;
	}
	if (func_150(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_151(iParam0, 1)) || func_152(32768))
	{
		if (!func_151(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_153())
	{
		return false;
	}
	return true;
}

void func_127(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_128(int iParam0)
{
	if (!func_154(iParam0))
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

char* func_129(int iParam0)
{
	switch (iParam0)
	{
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
	if (iParam0 == 6)
	{
		if (func_23())
		{
			return "CAM_SAVE_PHOTO";
		}
		else
		{
			return "CAM_TAKE_PHOTO";
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_130(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		func_103(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1606906090;
		case 7:
			return -1531087707;
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
			return -399281322;
		default:
			break;
	}
	return 0;
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		func_103(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_134(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_64(iParam0))
	{
		return;
	}
	iVar0 = func_65(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_135(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_116() - fParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_136(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_158(iParam0);
}

int func_137(bool bParam0, bool bParam1, bool bParam2)
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

void func_138(var uParam0)
{
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
	clear_ped_tasks_immediately(player_ped_id(), false, true);
	set_entity_heading(Global_35, fLocal_217);
}

void func_139(int iParam0)
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

void func_140(int iParam0, char* sParam1)
{
	iLocal_219 = create_scenario_point(iParam0, vLocal_164, fLocal_217, 0, 0, 1);
	_set_scenario_point_flag(iLocal_219, 25, true);
	_set_scenario_point_flag(iLocal_219, 23, true);
	_task_use_scenario_point(Global_35, iLocal_219, sParam1, -1, false, true, 0, false, 0f, false);
}

int func_141(int iParam0, int iParam1)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_159(iParam0, 1399091007))
	{
		func_160(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_142(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_147(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_143(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_144(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_145(int iParam0)
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

int func_146(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_161(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_163(&Var0, func_162(0));
	}
	if (!func_164(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_145(iVar14);
	return uVar15;
}

int func_147(bool bParam0)
{
	if (func_165() == -1)
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

bool func_148(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_149(int iParam0)
{
	if (func_165() != -1)
	{
		if (func_151(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_151(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_150(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_151(iParam0, 65536) && !func_151(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_151(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_151(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_151(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_152(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_153()
{
	return Global_1905944->f_5694;
}

bool func_154(int iParam0)
{
	return func_102(iParam0, 2);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_157(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_158(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_166(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_159(int iParam0, int iParam1)
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

void func_160(int iParam0, var uParam1, var uParam2)
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

struct<14> func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_162(bool bParam0)
{
	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_168(923904168, func_167(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_168(923904168, func_167(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_168(923904168, func_167(bParam0), -740156546, 0);
}

void func_163(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_164(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_147(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_165()
{
	return Global_1572887->f_12;
}

int func_166(int iParam0)
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

struct<4> func_167(bool bParam0)
{
	return func_168(1328661203, func_169(), -1591664384, bParam0);
}

struct<4> func_168(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_120(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_147(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_169()
{
	return Var0;
}

