void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_15 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_16 = "facials@gen_male@portrait";
	StringCopy(&cLocal_31, "", 32);
	StringCopy(&cLocal_35, "", 32);
	sLocal_39 = "CameraViewfinder";
	sLocal_40 = "CameraTakePicture";
	sLocal_41 = "CameraTransitionBlink";
	bLocal_50 = true;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	iLocal_206 = 4;
	iLocal_207 = -1534086282;
	iLocal_209 = -193491261;
	if (has_force_cleanup_occurred(515))
	{
		func_1(&Local_51, 0);
		func_2();
		terminate_this_thread();
	}
	while (bLocal_50)
	{
		if (iLocal_21 == 1)
		{
			func_3();
		}
		if (func_4(&(Local_51.f_1[2]), 1))
		{
			if (is_bit_set(&Global_1958009, 5))
			{
				func_5(&(Local_51.f_1[2]), 0, 1, 1);
			}
			else
			{
				func_5(&(Local_51.f_1[2]), 1, 1, 1);
			}
		}
		if (func_4(&(Local_51.f_1[8]), 1))
		{
			if (bLocal_202)
			{
				func_5(&(Local_51.f_1[8]), 0, 1, 1);
			}
			else
			{
				func_5(&(Local_51.f_1[8]), 1, 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(1048576);
		func_6(32768);
		func_6(65536);
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
		if (bLocal_50)
		{
			if (func_7(&Local_51))
			{
				bLocal_50 = true;
			}
			else
			{
				bLocal_50 = false;
			}
		}
		func_8(Local_51);
		func_9(&Local_51);
		func_10(&(Local_51.f_73), &(Local_51.f_74), &(Local_51.f_77), &(Local_51.f_78), 1301263553, -39308912, -1450761377, -771458680, 2);
		if (func_11(&(Local_51.f_1[2]), 1) || func_11(&(Local_51.f_1[7]), 1))
		{
			iLocal_42 = 1;
			if (func_12(&Local_51) == 3)
			{
				func_13(&Local_51, 12);
			}
			else if (func_12(&Local_51) != 6)
			{
			}
			else
			{
				func_14();
				if (_0x4ad019591e94c064("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_177 = get_game_timer();
				bLocal_178 = true;
				func_15();
				Global_1958006 = 0;
				func_13(&Local_51, 4);
			}
		}
		func_16(&Local_51);
		iVar0 = func_12(&Local_51);
		if (func_17())
		{
		}
		func_18(&(Local_51.f_51));
		func_19(&(Local_51.f_51));
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_21 = 0;
					uLocal_29 = _databinding_add_data_container_from_path("", "playerCamera");
					uLocal_30 = _databinding_add_data_string(uLocal_29, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_13(&Local_51, 1);
				}
				else
				{
					if (func_22(&Local_51))
					{
						_0xa42edf1e88734a7e();
						iLocal_21 = 1;
						func_23(&Local_51);
					}
					func_13(&Local_51, 1);
				}
				break;
			case 1:
				if (func_22(&Local_51))
				{
					func_24();
					func_23(&Local_51);
				}
				func_25();
				iLocal_17 = get_game_timer();
				func_13(&Local_51, 2);
				break;
			case 2:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				if (func_26(iLocal_17) && func_27(Global_34, 1, 0, 0) == -1016714371)
				{
					func_13(&Local_51, 3);
				}
				break;
			case 4:
				func_9(&Local_51);
				func_28();
				_0x2804658eb7d8a50b(5, 499451365);
				if (bLocal_178)
				{
					if ((get_game_timer() - iLocal_177) > 500)
					{
						_display_hud_component(959420967);
						set_cam_active(Local_51.f_14, false);
						render_script_cams(false, false, 3000, true, false, 0);
						detach_cam(Local_51.f_14);
						destroy_cam(Local_51.f_14, false);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_13(&Local_51, 3);
						func_29();
						bLocal_178 = false;
						func_30();
					}
				}
				break;
			case 3:
				_0x2804658eb7d8a50b(5, 499451365);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((get_game_timer() - iLocal_170) > 100)
				{
					func_31();
					iLocal_170 = get_game_timer();
				}
				if (func_22(&Local_51))
				{
					func_32(&Local_51);
					func_33(3);
					func_34(1);
					func_23(&Local_51);
				}
				set_player_forced_aim(get_player_index(), false, 0, -1, false);
				if (iLocal_42 == 1 && &Global_1958007 == 0)
				{
					if (is_control_released(0, 2003789289))
					{
						iLocal_42 = 0;
					}
					else
					{
						iLocal_42 = 1;
					}
				}
				if (&Global_1958007 != 1)
				{
				}
				else
				{
					iLocal_42 = 0;
				}
				if (bLocal_169 && iLocal_42 == 0)
				{
					func_5(&(Local_51.f_1[0]), 1, 1, 1);
					if (func_35(&(Local_51.f_1[0]), 1) || &Global_1958007 == 1)
					{
						clear_ped_tasks(player_ped_id(), 1, 0);
						disable_control_action(0, 1301263553, false);
						disable_control_action(0, -39308912, false);
						if (&Global_1958007 == 1)
						{
							Global_1958007 = 0;
						}
						Global_1958006 = 1;
						func_15();
						_hide_hud_component(959420967);
						func_36();
						iLocal_149 = get_game_timer();
						func_13(&Local_51, 5);
					}
				}
				else
				{
					func_5(&(Local_51.f_1[0]), 0, 1, 1);
				}
				if ((get_game_timer() - iLocal_152) > 600)
				{
					func_37();
					iLocal_152 = get_game_timer();
				}
				if (bLocal_151)
				{
					func_5(&(Local_51.f_1[1]), 1, 1, 1);
					if (func_35(&(Local_51.f_1[1]), 1))
					{
						if (func_38(Global_34, 0))
						{
						}
						else
						{
							iLocal_174 = 0;
							iLocal_176 = 0;
							func_15();
							func_13(&Local_51, 8);
							if (!func_39(&uLocal_171))
							{
								func_40(&uLocal_171, 1);
							}
							if (!Local_51.f_95)
							{
								Local_51.f_95 = 1;
								_0xc6136b40fffb778b(Local_51.f_95);
							}
							if (_0x4ad019591e94c064("Place_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
							{
								_play_sound_from_entity("Place_Tripod", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(&(Local_51.f_1[1]), 0, 1, 1);
				}
				break;
			case 5:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_28();
				if (func_41() && (get_game_timer() - iLocal_149) > 500)
				{
					func_42();
					clear_ped_tasks(player_ped_id(), 1, 0);
					Local_51.f_52 = { get_entity_coords(Global_34, true, false) };
					Local_51.f_55 = { get_entity_rotation(Global_34, 2) };
					Local_51.f_67 = { Local_51.f_55, Local_51.f_55.f_1, Local_51.f_55.f_2 };
					Local_51.f_61 = { _get_object_offset_from_coords(Local_51.f_52, Local_51.f_55.f_2, 0f, 0.3f, 0.5f) };
					Local_51.f_93 = 0;
					Local_51.f_67 = { 0f, 0f, 0f };
					Local_51.f_66 = 0f;
					Local_51.f_65 = 0f;
					Local_51.f_14 = create_cam_with_params("KIT_CAMERA", Local_51.f_61, Local_51.f_67, 65f, false, 2);
					fLocal_148 = Local_51.f_55.f_2;
					if (func_43() != 0)
					{
						attach_cam_to_ped_bone(Local_51.f_14, Global_34, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						attach_cam_to_ped_bone(Local_51.f_14, Global_34, 21030, 0f, 0.6f, 0f, true);
					}
					set_cam_near_clip(Local_51.f_14, 0.25f);
					Local_51.f_15 = 5f;
					Local_51.f_15.f_1 = 2f;
					Local_51.f_15.f_2 = 128f;
					Local_51.f_15.f_3 = 25f;
					Local_51.f_15.f_4 = 25f;
					Local_51.f_15.f_5 = 60f;
					Local_51.f_15.f_6 = 1;
					Local_51.f_15.f_7 = 0;
					Local_51.f_15.f_8 = 1;
					Local_51.f_15.f_9 = 1;
					_0xe4b7945ef4f1bfb2(Local_51.f_14, &(Local_51.f_15));
					_0x9f97e85ec142255e(Local_51.f_14, Local_51.f_93);
					_0x42ed56b02e05d109(Local_51.f_14, false);
					set_cam_active(Local_51.f_14, true);
					render_script_cams(true, true, 0, false, false, 0);
					if (_0x4ad019591e94c064("Expand_Camera", Global_34, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Expand_Camera", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
					}
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_37();
					iLocal_152 = get_game_timer();
					func_30();
					_0x9f6d859c80708b26(1, 0);
					func_13(&Local_51, 6);
				}
				break;
			case 6:
				_0x3c8f74e8fe751614();
				_0x2804658eb7d8a50b(4, 1499787188);
				if (iLocal_43 == 0)
				{
					if (!is_player_ready_for_cutscene(player_id()))
					{
						Global_1958008 = 1;
						iLocal_43 = 1;
					}
				}
				if (is_bit_set(&Global_1958009, 6))
				{
				}
				else
				{
					_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_51))
				{
					func_33(6);
					func_23(&Local_51);
				}
				func_44(&Local_51);
				if (iLocal_46 == 0)
				{
					if (func_45(&(Local_51.f_1[6])) && !func_46(&Local_51, 32))
					{
						func_32(&Local_51);
						if (_0x4ad019591e94c064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
						{
							_play_sound_from_entity("Take_Photo", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_47(1);
						func_48(&Local_51, 32);
					}
					if (!func_46(&Local_51, 32))
					{
						if (func_45(&(Local_51.f_1[5])))
						{
							func_49();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_51))
				{
					Local_51.f_1[6] = func_50("CAM_TAKE_PHOTO", 129547951, Global_34, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(1);
					func_51("CAM_SNAP", 0, 0, 1);
					func_23(&Local_51);
				}
				if (func_52())
				{
					if (!func_46(&Local_51, 16))
					{
						func_13(&Local_51, 3);
					}
					else
					{
						func_13(&Local_51, 13);
					}
				}
				else
				{
					func_53(&Local_51);
				}
				break;
			case 10:
				func_54(&Local_51);
				func_28();
				_0x2804658eb7d8a50b(5, 499451365);
				iLocal_42 = 1;
				if (iLocal_175 == 0)
				{
					if (func_55(&uLocal_171) > 500)
					{
						if (does_cam_exist(Local_51.f_14))
						{
							set_cam_active(Local_51.f_14, false);
							render_script_cams(false, false, 3000, true, false, 0);
							destroy_cam(Local_51.f_14, false);
						}
						if (func_56())
						{
							clear_ped_tasks_immediately(player_ped_id(), false, true);
							set_entity_heading(Global_34, fLocal_203);
						}
						set_current_ped_weapon(Global_34, -1016714371, true, 0, false, false);
						set_ped_current_weapon_visible(Global_34, true, true, true, false);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_29();
						iLocal_175 = 1;
					}
				}
				if (func_55(&uLocal_171) > 1000)
				{
					_display_hud_component(959420967);
					func_30();
					func_57(&uLocal_171);
					func_14();
					func_13(&Local_51, 3);
				}
				break;
			case 8:
				func_54(&Local_51);
				func_28();
				if (iLocal_174 == 0)
				{
					if (func_55(&uLocal_171) > 500)
					{
						set_ped_current_weapon_visible(Global_34, false, false, true, false);
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						_set_entity_coords_and_heading(Global_34, vLocal_153, fLocal_164, true, false, true);
						clear_ped_tasks_immediately(player_ped_id(), false, true);
						func_42();
						bLocal_202 = false;
						iLocal_174 = 1;
					}
				}
				if (iLocal_174 == 1)
				{
					if (iLocal_176 == 0)
					{
						if (func_55(&uLocal_171) > 300)
						{
							iLocal_176 = 1;
							func_58(&Local_51);
						}
					}
					else if (func_55(&uLocal_171) > 1000)
					{
						func_57(&uLocal_171);
						func_59(&Local_51);
						func_30();
						_0x9f6d859c80708b26(1, 0);
						func_13(&Local_51, 9);
					}
				}
				break;
			case 9:
				func_54(&Local_51);
				_0x3c8f74e8fe751614();
				if (Local_51.f_95)
				{
					Local_51.f_95 = 0;
					_0xc6136b40fffb778b(Local_51.f_95);
				}
				_0x2804658eb7d8a50b(4, 1499787188);
				_uiprompt_set_active_group_this_frame(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_59(&Local_51);
				if (func_35(&(Local_51.f_1[6]), 1) && !func_46(&Local_51, 32))
				{
					func_32(&Local_51);
					if (_0x4ad019591e94c064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
					{
						_play_sound_from_entity("Take_Photo", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_47(1);
					func_48(&Local_51, 32);
				}
				else if (func_35(&(Local_51.f_1[1]), 1))
				{
					if (!Local_51.f_95)
					{
						Local_51.f_95 = 1;
						_0xc6136b40fffb778b(Local_51.f_95);
					}
					func_13(&Local_51, 8);
				}
				if (!func_46(&Local_51, 32))
				{
					if (func_45(&(Local_51.f_1[5])))
					{
						func_49();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_32(&Local_51);
				set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_34, 1, 0, 0, 0);
				func_13(&Local_51, 13);
				break;
			case 13:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_2();
				func_1(&Local_51, 1);
				if (_get_ped_crouch_movement(Global_34))
				{
				}
				else if (func_56())
				{
					clear_ped_tasks_immediately(Global_34, false, true);
				}
				terminate_this_thread();
				break;
		}
		wait(0);
		if (func_60())
		{
			if (func_61(&uLocal_188) > 1f)
			{
				func_62();
			}
		}
	}
	if (_get_ped_crouch_movement(Global_34))
	{
	}
	else if (func_56())
	{
		clear_ped_tasks_immediately(Global_34, false, true);
	}
	func_2();
	func_1(&Local_51, 1);
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	func_63();
	func_64(&(uParam0->f_51));
	_0x9f6d859c80708b26(0, 0);
	if (uParam0->f_95)
	{
		uParam0->f_95 = 0;
		_0xc6136b40fffb778b(uParam0->f_95);
	}
	set_player_forced_aim(get_player_index(), false, 0, -1, false);
	if (does_cam_exist(uParam0->f_14))
	{
		destroy_cam(uParam0->f_14, false);
	}
	set_no_loading_screen(false);
	_display_hud_component(959420967);
	Global_1958006 = 0;
	Global_1958007 = 0;
	_0x531a78d6bf27014b("CAMERA_SOUNDSET");
	clear_facial_idle_anim_override(Global_34);
	remove_clip_set(sLocal_16);
	remove_anim_dict(sLocal_15);
	_0xf1142e5d64b47802(false, false);
	_0x614682e715adbaac();
	_0xd45547d8396f002a();
	func_32(uParam0);
	func_34(1);
	display_radar(true);
	_text_database_delete("CAMERA");
}

void func_2()
{
	if (iLocal_19 == 1)
	{
		_0x00a15b94cba4f76f(iLocal_45);
	}
	_databinding_remove_data_entry(uLocal_29);
	_uistatemachine_destroy(1459179713);
	if (_uiflowblock_is_loaded(iLocal_208))
	{
		_uiflowblock_release(&iLocal_208);
	}
	iLocal_208 = 0;
	func_29();
	if (animpostfx_is_running(sLocal_41))
	{
		animpostfx_stop(sLocal_41);
	}
	_0x37d7bdba89f13959("CameraViewfinder");
	_0x37d7bdba89f13959("CameraTransitionBlink");
	func_14();
	if (get_is_task_active(Global_34, 3))
	{
		clear_ped_tasks_immediately(player_ped_id(), false, true);
	}
}

void func_3()
{
	Local_51.f_89 = _0xb28894cd7408bd0c();
	if (Local_51.f_89 == 1)
	{
	}
	if (Local_51.f_89 == 0)
	{
		bLocal_20 = false;
		iLocal_22 = _0x78c56b8a7b1d000c();
		iLocal_23 = _0x8e587fcd30e05592();
		uLocal_29 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_30 = _databinding_add_data_string(uLocal_29, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_65();
		iLocal_21 = 0;
		bLocal_25 = true;
		iLocal_26 = get_game_timer();
	}
	else if (Local_51.f_89 == 2)
	{
		bLocal_20 = true;
		uLocal_29 = _databinding_add_data_container_from_path("", "playerCamera");
		uLocal_30 = _databinding_add_data_string(uLocal_29, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_21 = 0;
		bLocal_25 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (bParam1)
	{
		func_68(iParam0, 4);
		if (bParam3)
		{
			func_69(iVar0, 1);
		}
		func_70(iVar0, 1);
	}
	else
	{
		func_71(iParam0, 4);
		func_70(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

bool func_7(var uParam0)
{
	if (&Global_1958008 == 1)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1958008 = 0;
		return false;
	}
	if (!is_player_dead(player_id()))
	{
		if (get_entity_submerged_level(Global_34) > 0.33f)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return false;
		}
		if (_0x7fc84e85d98f063d(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return false;
		}
		if (_is_ped_lassoed(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return false;
		}
	}
	if (func_72())
	{
		if ((func_73(16) || func_73(37)) || func_74(Global_1915715->f_20241.f_1))
		{
		}
		else
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return false;
		}
	}
	if (is_entity_on_fire(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (!func_75(Global_34, 0))
	{
		return false;
	}
	if (!is_player_playing(player_id()))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if ((!does_entity_exist(Global_34) || is_ped_injured(Global_34)) || is_entity_dead(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (!func_76(-1016714371, 1))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (func_12(uParam0) == 8)
	{
	}
	if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
	{
		if (func_27(Global_34, 1, 0, 1) != -1016714371)
		{
			if (func_77(uParam0) == 0)
			{
				return false;
			}
		}
	}
	if (func_78())
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (is_ped_in_any_vehicle(Global_34, true) && !is_entity_dead(get_vehicle_ped_is_in(Global_34, true)))
	{
		func_79("CAM_VEH", 10000, 0, 0, 0, 1);
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	if (Global_1940258->f_52)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return false;
	}
	return true;
}

void func_8(struct<91> Param0, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96)
{
	set_ped_reset_flag(Global_34, 129, true);
	set_ped_reset_flag(Global_34, 173, true);
	if (Param0.f_90 == 9)
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
	if (!Param0.f_90 == 3)
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
	if (func_80(Global_34))
	{
		iVar0 = get_mount(Global_34);
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
	if (!uParam0->f_90 == 3)
	{
		disable_control_action(0, 255439828, false);
		func_81(0);
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
	if (does_cam_exist(uParam0->f_13) && is_cam_active(uParam0->f_13))
	{
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -2105631000, false);
	}
	disable_control_action(0, -1722177808, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*uParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*uParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

bool func_11(int iParam0, bool bParam1)
{
	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_90;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_90 = iParam1;
	func_82(uParam0);
}

void func_14()
{
	_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
	_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!animpostfx_is_running(sLocal_41))
	{
		animpostfx_play(sLocal_41);
	}
}

void func_16(var uParam0)
{
	if (func_4(&(uParam0->f_1[6]), 1))
	{
		if (uParam0->f_91 == 0 && iLocal_21 == 0)
		{
			func_5(&(uParam0->f_1[6]), 1, 1, 1);
			if (bLocal_25)
			{
				if ((get_game_timer() - iLocal_26) > 2500)
				{
					iLocal_22 = _0x78c56b8a7b1d000c();
					func_65();
					iLocal_26 = get_game_timer();
				}
			}
		}
		else
		{
			func_5(&(uParam0->f_1[6]), 0, 1, 1);
		}
	}
	switch (uParam0->f_91)
	{
		case 1:
			if (is_control_just_pressed(2, 217814591))
			{
				_0x00a15b94cba4f76f(iLocal_45);
				bLocal_20 = true;
				func_83(uParam0, 2);
				iLocal_19 = 0;
			}
			break;
		case 0:
			if (func_46(uParam0, 32))
			{
				func_32(uParam0);
				if (func_20() || bLocal_20)
				{
					func_84(uParam0);
					func_83(uParam0, 2);
				}
				else if (iLocal_22 == iLocal_23)
				{
					func_84(uParam0);
					if (iLocal_45 == 0)
					{
						Var0.f_2 = 0;
						Var0.f_7 = get_hash_key("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_45 = func_85(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_83(uParam0, 1);
						iLocal_19 = 1;
					}
					else
					{
						bLocal_20 = true;
						func_83(uParam0, 2);
					}
				}
				else
				{
					func_83(uParam0, 2);
				}
			}
			if (func_46(uParam0, 128))
			{
				_0x614682e715adbaac();
				_0x494a9874f17a7d50(1);
				func_83(uParam0, 7);
			}
			break;
		case 2:
			Local_51.f_96 = 0;
			func_47(0);
			func_83(uParam0, 3);
			iLocal_49 = get_game_timer();
			break;
		case 3:
			if ((get_game_timer() - iLocal_49) > 0)
			{
				iLocal_49 = get_game_timer();
				func_29();
				func_86();
				if (func_20() || bLocal_20)
				{
					func_83(uParam0, 4);
				}
				else
				{
					_0xd45547d8396f002a();
					begin_take_high_quality_photo();
					iLocal_22++;
					func_65();
					set_no_loading_screen(true);
					func_83(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_89 = get_status_of_take_high_quality_photo();
			if (uParam0->f_89 == 1)
			{
			}
			if (uParam0->f_89 == 0)
			{
				StringCopy(&cVar19, "", 32);
				iVar23 = func_87();
				if (func_88(iVar23))
				{
					MemCopy(&cVar19, {func_89(iVar23)}, 4);
				}
				if (is_string_null_or_empty(&cVar19))
				{
					iVar24 = func_90();
					StringCopy(&cVar19, func_91(iVar24), 32);
				}
				_0xd1031b83ac093bc7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_92();
				if (func_93(iVar29))
				{
					StringCopy(&cVar25, func_94(iVar29), 16);
					StringCopy(&cVar27, func_95(iVar29), 16);
				}
				_0x9937facbbf267244(&cVar25);
				_0x8952e857696b8a79(&cVar27);
				func_84(uParam0);
				save_high_quality_photo(0);
				iLocal_24 = 0;
				func_83(uParam0, 6);
			}
			else if (uParam0->f_89 == 2)
			{
				func_83(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_24 == 0)
			{
				set_no_loading_screen(false);
				func_42();
				func_33(func_12(uParam0));
				func_5(&(uParam0->f_1[6]), 0, 1, 1);
				func_96(691, 0);
				iLocal_24 = 1;
			}
			uParam0->f_89 = get_status_of_save_high_quality_photo();
			if (uParam0->f_89 == 0)
			{
				Local_51.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				if (_0x4ad019591e94c064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_89 == 2)
			{
				Local_51.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
			}
			break;
		case 4:
			if ((get_game_timer() - iLocal_49) > 300)
			{
				set_no_loading_screen(false);
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				func_42();
				func_33(func_12(uParam0));
				if (_0x4ad019591e94c064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_96(691, 0);
			}
			break;
		case 7:
			uParam0->f_89 = _0x13430d3d5a45f14b(1);
			if (uParam0->f_89 == 0)
			{
				_0xf1142e5d64b47802(true, false);
				func_48(uParam0, 256);
				func_97(uParam0, 128);
				func_83(uParam0, 0);
			}
			else if (uParam0->f_89 == 2)
			{
				func_97(uParam0, 128);
				func_83(uParam0, 0);
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

void func_18(var uParam0)
{
	if ((get_frame_count() % 30) == 0 || func_98(&Global_1301321, 16))
	{
		func_99(uParam0);
	}
}

void func_19(var uParam0)
{
	if ((get_frame_count() % 10) == 0 || func_98(&Global_1301321, 16))
	{
		func_100();
		if (!is_itemset_valid(*uParam0) || get_itemset_size(*uParam0) <= 0)
		{
			return;
		}
		func_101(uParam0);
	}
	if (func_98(&Global_1301321, 16))
	{
		func_102(Global_1301321, 16);
	}
}

bool func_20()
{
	return &Global_1958005;
}

void func_21()
{
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "-", 32);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	_databinding_write_data_string(uLocal_30, &cLocal_31);
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
	func_63();
	Global_1301321->f_1 = create_itemset(true);
}

void func_25()
{
	_text_database_request("CAMERA");
	request_anim_dict(sLocal_15);
	request_clip_set(sLocal_16);
	_0x5199405eabfbd7f0("CameraViewfinder");
	_0x5199405eabfbd7f0("CameraTransitionBlink");
}

bool func_26(int iParam0)
{
	iVar0 = 1;
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
	if (!has_clip_set_loaded(sLocal_16))
	{
		iVar0 = 0;
	}
	if (!has_anim_dict_loaded(sLocal_15))
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
	return iVar0;
}

int func_27(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_28()
{
	_uiprompt_disable_prompt_type_this_frame(10);
	_uiprompt_disable_prompt_type_this_frame(11);
	_uiprompt_disable_prompt_type_this_frame(9);
	_uiprompt_disable_prompt_type_this_frame(8);
	_uiprompt_disable_prompt_type_this_frame(7);
	_uiprompt_disable_prompt_type_this_frame(6);
	_uiprompt_disable_prompt_type_this_frame(5);
	_uiprompt_disable_prompt_type_this_frame(4);
	_uiprompt_disable_prompt_type_this_frame(3);
	_uiprompt_disable_prompt_type_this_frame(2);
	_uiprompt_disable_prompt_type_this_frame(1);
	_uiprompt_disable_prompt_type_this_frame(0);
	set_ped_reset_flag(Global_1296859->f_8, 129, true);
	set_ped_reset_flag(Global_1296859->f_8, 103, true);
}

void func_29()
{
	if (animpostfx_is_running(sLocal_39))
	{
		animpostfx_stop(sLocal_39);
	}
}

void func_30()
{
	if (animpostfx_is_running(sLocal_41))
	{
		_0xc5cb91d65852ed7e(sLocal_41);
	}
}

void func_31()
{
	vLocal_156 = { get_entity_coords(Global_34, true, false) };
	fVar0 = get_entity_heading(Global_34);
	vVar1 = { _get_object_offset_from_coords(vLocal_156, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { _get_object_offset_from_coords(vLocal_156, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { _get_object_offset_from_coords(vLocal_156, fVar0, 0.75f, 0f, 0f) };
	if (_get_ped_crouch_movement(Global_34))
	{
		bLocal_169 = false;
		return;
	}
	if ((_0x0c9dbf48c6ba6e4c(Global_34, vVar1.x, vVar1.y, vVar1.z, 3167) && _0x0c9dbf48c6ba6e4c(Global_34, vVar4.x, vVar4.y, vVar4.z, 3167)) && _0x0c9dbf48c6ba6e4c(Global_34, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_169 = true;
	}
	else
	{
		bLocal_169 = false;
	}
}

void func_32(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_66(&(uParam0->f_1[iVar0])))
		{
			func_103(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_104(6, 0);
			func_104(3, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(0, 1);
			func_104(1, 1);
			func_104(2, 1);
			break;
		case 6:
			func_104(0, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 8:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 9:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 10:
			func_104(2, 0);
			func_104(0, 0);
			func_104(3, 0);
			func_104(1, 0);
			func_104(5, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(6, 0);
			func_104(9, 0);
			func_104(4, 0);
			break;
		case 7:
			func_104(2, 0);
			func_104(0, 0);
			func_104(6, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(1, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			break;
	}
}

void func_34(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_35(int iParam0, bool bParam1)
{
	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_36()
{
	if (iLocal_206 == 0)
	{
		iLocal_206 = 1;
	}
}

void func_37()
{
	vLocal_156 = { get_entity_coords(Global_34, true, false) };
	fVar0 = get_entity_heading(Global_34);
	vVar1 = { _get_object_offset_from_coords(vLocal_156, fVar0, 0f, 4f, 0f) };
	if (func_105(player_id(), 1))
	{
		vVar1.f_2 = (vVar1.z + 1f);
	}
	else
	{
		vVar1.f_2 = (vVar1.z + 50f);
	}
	get_ground_z_for_3d_coord(vVar1, &fVar4, false);
	get_ground_z_for_3d_coord(vLocal_156, &uVar5, false);
	if ((vLocal_156.z - fVar4) > 3f)
	{
		bLocal_151 = false;
		return;
	}
	if (is_player_riding_train(player_id()))
	{
		bLocal_151 = false;
		return;
	}
	if (is_ped_on_mount(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (_0x50f124e6ef188b22(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (get_number_of_fires_in_range(vLocal_156, 2f) > 0)
	{
		bLocal_151 = false;
		return;
	}
	if ((fVar4 - vLocal_156.z) > 1f)
	{
		bLocal_151 = false;
		return;
	}
	if (is_entity_in_water(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (func_38(Global_34, 0))
	{
		bLocal_151 = false;
		return;
	}
	if (_get_ped_crouch_movement(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (test_vertical_probe_against_all_water(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_151 = false;
		return;
	}
	if (is_point_on_road(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_151 = false;
		return;
	}
	fVar6 = 1f;
	if (_0x0c9dbf48c6ba6e4c(Global_34, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_151 = true;
	}
	else
	{
		bLocal_151 = false;
	}
	if (bLocal_151)
	{
		vLocal_153 = { vLocal_156.x, vLocal_156.y, (vLocal_156.z - 1f) };
		fLocal_164 = fVar0;
		vLocal_159 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_38(int iParam0, int iParam1)
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

bool func_39(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_39(uParam0))
	{
		func_107(uParam0);
	}
}

bool func_41()
{
	switch (iLocal_206)
	{
		case 0:
			if (iLocal_207 == iLocal_209)
			{
			}
			break;
		case 1:
			iLocal_208 = _uiflowblock_request(iLocal_207);
			iLocal_206 = 2;
			break;
		case 2:
			if (_uiflowblock_is_loaded(iLocal_208))
			{
				_uiflowblock_enter(iLocal_208, iLocal_209);
				_uistatemachine_create(1459179713, iLocal_208);
				iLocal_206 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_42()
{
	if (!animpostfx_is_running(sLocal_39))
	{
		animpostfx_play(sLocal_39);
	}
}

int func_43()
{
	return Global_1572887->f_13;
}

void func_44(var uParam0)
{
	set_player_forced_aim(get_player_index(), true, 0, -1, false);
	if (uParam0->f_73 > 0 && IntToFloat(uParam0->f_73) > 89f)
	{
		uParam0->f_73 = round(89f);
	}
	else if (uParam0->f_73 < 0 && IntToFloat(uParam0->f_73) < -89f)
	{
		uParam0->f_73 = round(-89f);
	}
	if (uParam0->f_74 > 0 && IntToFloat(uParam0->f_74) > 89f)
	{
		uParam0->f_74 = round(89f);
	}
	else if (uParam0->f_74 < 0 && IntToFloat(uParam0->f_74) < -89f)
	{
		uParam0->f_74 = round(-89f);
	}
	if (uParam0->f_73 != uParam0->f_75)
	{
		uParam0->f_75 = uParam0->f_73;
		fVar0 = ((to_float(uParam0->f_73) - -89f) / (89f - -89f));
		uParam0->f_81 = fVar0;
	}
	else
	{
		uParam0->f_85 = 0f;
	}
	if (uParam0->f_74 != uParam0->f_76)
	{
		uParam0->f_76 = uParam0->f_74;
		fVar1 = ((to_float(uParam0->f_74) - -89f) / (89f - -89f));
		uParam0->f_82 = fVar1;
	}
	else
	{
		uParam0->f_86 = 0f;
	}
	fVar4 = 50f;
	fVar5 = -25f;
	fVar2 = 68f;
	fVar3 = -85f;
	fVar9 = uParam0->f_65;
	fVar10 = uParam0->f_66;
	fVar8 = -1f;
	if (uParam0->f_77 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_77 = absi(uParam0->f_77);
	}
	fVar6 = ((to_float(uParam0->f_77) - 0f) / (89f - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_65 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_78 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_78 = absi(uParam0->f_78);
	}
	fVar7 = ((to_float(uParam0->f_78) - 0f) / (89f - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_66 = fVar10;
	uParam0->f_67 = { Vector(fLocal_148, 0f, 0f) + Vector(uParam0->f_65, 0f, uParam0->f_66) };
	func_108(uParam0);
	func_109(uParam0);
	set_cam_params(uParam0->f_14, uParam0->f_61, uParam0->f_67, 50f, 0, 1, 1, 2, 0, 0);
	if ((get_game_timer() - iLocal_170) > 100)
	{
		if (iLocal_44 == 0)
		{
			fVar11 = get_entity_heading(Global_34);
			vVar12 = { _get_object_offset_from_coords(vLocal_156, fVar11, 0f, 0.25f, 0f) };
			func_31();
			if ((!_0x0c9dbf48c6ba6e4c(Global_34, vVar12.x, vVar12.y, vVar12.z, 3167) || !_0x0c9dbf48c6ba6e4c(Global_34, uParam0->f_61, 3167)) || bLocal_169 == 0)
			{
				if (func_43() == 0 && is_player_riding_train(player_id()))
				{
				}
				else if (is_ped_in_any_boat(Global_34))
				{
				}
				else
				{
					Global_1958008 = 1;
					iLocal_44 = 1;
				}
			}
		}
		iLocal_170 = get_game_timer();
	}
}

bool func_45(int iParam0)
{
	iVar0 = func_67(iParam0);
	iVar1 = (*Global_1951255)[iVar0]->f_4;
	return (func_35(iParam0, 1) && is_control_just_pressed(2, iVar1));
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0->f_92 && iParam1) != 0;
}

void func_47(int iParam0)
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

void func_48(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 || iParam1);
}

void func_49()
{
	_launch_app_with_entry("social_club_feed", "launch_to_photos");
}

int func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_110(iVar0, 2))
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
				func_111(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

var func_51(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_79(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_52()
{
	if (!is_player_free_aiming(player_id()))
	{
	}
	return false;
}

int func_53(var uParam0)
{
	if (is_control_just_pressed(2, 129547951) && !func_46(uParam0, 32))
	{
		_play_sound_from_entity("CLICK", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
		func_47(1);
		func_48(uParam0, 32);
	}
	return 1;
}

void func_54(var uParam0)
{
	vLocal_156 = { get_entity_coords(Global_34, true, false) };
	if (!_is_ped_lassoed(Global_34))
	{
		if (func_43() == 0)
		{
			if (get_distance_between_coords(vLocal_156, vLocal_153, true) > 20f)
			{
				Global_1958008 = 1;
			}
			else if (get_distance_between_coords(vLocal_156, vLocal_153, true) > 3f)
			{
				Global_1958008 = 1;
			}
		}
		else if (get_distance_between_coords(vLocal_156, vLocal_153, true) > 3f)
		{
			_set_entity_coords_and_heading(Global_34, vLocal_153, fLocal_164, true, false, true);
			_set_entity_health(player_ped_id(), 0, 0);
		}
	}
}

int func_55(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0;
	}
	if (func_112(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_113() - round((uParam0->f_1 * 1000f)));
}

bool func_56()
{
	if (_0x3bdfcf25b58b0415(Global_34) == 0 && is_ped_using_any_scenario(Global_34))
	{
		return true;
	}
	return false;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0)
{
	if (func_22(uParam0))
	{
		func_33(8);
		func_23(uParam0);
	}
	func_114(uParam0);
	func_115();
	func_116();
	uParam0->f_72 = 0;
	iLocal_200 = 0;
	bLocal_162 = true;
	bLocal_163 = false;
	_hide_hud_component(959420967);
}

void func_59(var uParam0)
{
	func_117(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((fLocal_165 - 0.07f) > -10f)
		{
			if (uParam0->f_77 > 100)
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.6f);
				fLocal_165 = (fLocal_165 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.2f);
				fLocal_165 = (fLocal_165 - 0.07f);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		if ((fLocal_165 + 0.07f) < 10f)
		{
			if (uParam0->f_77 < -100)
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.6f);
				fLocal_165 = (fLocal_165 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.2f);
				fLocal_165 = (fLocal_165 + 0.07f);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if (is_look_inverted())
		{
		}
		if ((fLocal_204 - 0.07f) > -10f)
		{
			if (uParam0->f_78 > 100)
			{
				vLocal_166.x = (vLocal_166.x - 0.6f);
				fLocal_204 = (fLocal_204 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x - 0.2f);
				fLocal_204 = (fLocal_204 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if (is_look_inverted())
		{
		}
		if ((fLocal_204 + 0.07f) < 10f)
		{
			if (uParam0->f_78 < -100)
			{
				vLocal_166.x = (vLocal_166.x + 0.6f);
				fLocal_204 = (fLocal_204 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x + 0.2f);
				fLocal_204 = (fLocal_204 + 0.07f);
			}
		}
	}
	if (bLocal_162)
	{
		if (_0x0c9dbf48c6ba6e4c(Global_34, vLocal_159, 3167))
		{
			bLocal_163 = false;
		}
		else
		{
			bLocal_163 = true;
		}
		bLocal_162 = false;
	}
	if ((func_35(&(uParam0->f_1[7]), 1) || func_38(Global_34, 0)) || bLocal_163)
	{
		if (func_38(Global_34, 0))
		{
			if (func_118(Global_34, 242628503))
			{
				clear_ped_tasks(Global_34, 1, 0);
			}
		}
		else if (func_119(player_id(), 1, 0, 1))
		{
		}
		_0x9f6d859c80708b26(0, 0);
		if (_0x4ad019591e94c064("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
		{
			_play_sound_from_entity("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_175 = 0;
		func_32(uParam0);
		func_13(uParam0, 10);
		func_15();
		clear_facial_idle_anim_override(Global_34);
		set_facial_idle_anim_override(Global_34, "portrait_normal", sLocal_15);
		if (!func_39(&uLocal_171))
		{
			set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
			func_40(&uLocal_171, 1);
		}
	}
	if (func_120(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71++;
			if (uParam0->f_71 == 8)
			{
				uParam0->f_71 = 0;
			}
			if (_0x4ad019591e94c064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("Change_Expression", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			clear_facial_idle_anim_override(Global_34);
			set_facial_idle_anim_override(Global_34, &(sLocal_179[uParam0->f_71]), sLocal_15);
		}
	}
	if (func_120(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71 = (uParam0->f_71 - 1);
			if (uParam0->f_71 < 0)
			{
				uParam0->f_71 = 7;
			}
			if (_0x4ad019591e94c064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("Change_Expression", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			clear_facial_idle_anim_override(Global_34);
			set_facial_idle_anim_override(Global_34, &(sLocal_179[uParam0->f_71]), sLocal_15);
		}
	}
	uParam0->f_26 = { func_121(get_player_index()) + get_entity_forward_vector(Global_34) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_0x66f9eb44342bb4c5(Global_34, &(uParam0->f_26));
	if (bLocal_202 == 0)
	{
		if (func_120(&(uParam0->f_1[8]), 1, 1))
		{
			bLocal_202 = true;
			uParam0->f_72++;
			if (uParam0->f_72 == 7)
			{
				uParam0->f_72 = 0;
			}
			if (_0x4ad019591e94c064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("Change_Pose", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_202 == 0)
	{
		if (func_120(&(uParam0->f_1[8]), 0, 1))
		{
			bLocal_202 = true;
			uParam0->f_72 = (uParam0->f_72 - 1);
			if (uParam0->f_72 < 0)
			{
				uParam0->f_72 = 6;
			}
			if (_0x4ad019591e94c064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("Change_Pose", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_202)
	{
		switch (iLocal_200)
		{
			case 0:
				break;
			case 1:
				if ((get_game_timer() - iLocal_201) > 200)
				{
					iLocal_200 = 2;
				}
				break;
			case 2:
				func_123(uParam0);
				iLocal_200 = 3;
				iLocal_201 = get_game_timer();
				break;
			case 3:
				if ((get_game_timer() - iLocal_201) > 500)
				{
					iLocal_200 = 4;
					iLocal_201 = get_game_timer();
					func_30();
				}
				break;
			case 4:
				if ((get_game_timer() - iLocal_201) > 700)
				{
					iLocal_200 = 0;
					bLocal_202 = false;
				}
				break;
			default:
				break;
		}
	}
	func_109(uParam0);
	set_cam_params(uParam0->f_14, uParam0->f_61, vLocal_166, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_60()
{
	return iLocal_191;
}

float func_61(var uParam0)
{
	if (!func_39(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_112(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_124() - uParam0->f_1);
}

void func_62()
{
	func_57(&uLocal_188);
	iLocal_191 = 0;
}

void func_63()
{
	if (is_itemset_valid(Global_1301321->f_1))
	{
		_0x20a4bf0e09bee146(Global_1301321->f_1);
		destroy_itemset(Global_1301321->f_1);
	}
}

void func_64(var uParam0)
{
	if (is_itemset_valid(*uParam0))
	{
		_0x20a4bf0e09bee146(*uParam0);
		destroy_itemset(*uParam0);
	}
}

void func_65()
{
	StringCopy(&cLocal_31, "", 32);
	_int_to_string(iLocal_22, "%i", &cLocal_31);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "", 32);
	_int_to_string(iLocal_23, "%i", &cLocal_35);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	_databinding_write_data_string(uLocal_30, &cLocal_31);
}

bool func_66(int iParam0)
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

int func_67(int iParam0)
{
	return iParam0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_69(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_110(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_72()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_73(int iParam0)
{
	if (func_72())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
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
	if (func_98(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_76(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_128(iParam0);
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
			if (!func_129(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_130(iParam0))
			{
				return true;
			}
			break;
	}
	return func_131(iParam0, 0, 0, 0) >= iParam1;
}

int func_77(var uParam0)
{
	return uParam0->f_91;
}

bool func_78()
{
	return Global_1940311->f_1;
}

var func_79(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_80(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		func_132(4);
	}
	func_132(2);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_82(var uParam0)
{
	*uParam0 = 1;
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_91 = iParam1;
}

void func_84(var uParam0)
{
	bVar3 = false;
	if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = 0;
	}
	_0x2705d18c11b61046(iVar2);
	if (is_itemset_valid(Global_1301321->f_1) && get_itemset_size(Global_1301321->f_1) > 0)
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= (get_itemset_size(Global_1301321->f_1) - 1))
		{
			iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar4, Global_1301321->f_1));
			iVar1 = get_entity_model(iVar0);
			if (iVar1 != uParam0->f_25)
			{
				bVar3 = true;
				uParam0->f_25 = iVar1;
			}
			iVar4++;
		}
	}
	if (bVar3)
	{
		_0x4d31051a4ca83787(Global_1301321->f_1);
	}
	_0x0777d65ee8a17517(-1124919603, 0, 0f, iVar2, uParam0->f_93, floor(uParam0->f_15.f_3), iVar1, func_134(func_133(0)));
}

int func_85(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_86()
{
	if (!animpostfx_is_running(sLocal_40))
	{
		animpostfx_play(sLocal_40);
	}
}

int func_87()
{
	return Global_1893587->f_2;
}

bool func_88(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_89(int iParam0)
{
	if (!func_88(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1887339)[iParam0]->f_23;
}

int func_90()
{
	return _get_water_map_zone_at_coords(Global_35);
}

char* func_91(int iParam0)
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

int func_92()
{
	return Global_1896622->f_41;
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_94(int iParam0)
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
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_95(int iParam0)
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
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_96(int iParam0, bool bParam1)
{
	func_135(iParam0, &iVar0, &iVar1);
	if (!func_136(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_137(iVar0, iVar1);
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 - (uParam0->f_92 && iParam1));
}

bool func_98(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_99(var uParam0)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar0 = create_itemset(false);
	_0x59b57c4b06531e1e(get_entity_coords(Global_34, true, false), func_138(), iVar0, 1);
	if (get_itemset_size(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (get_itemset_size(*uParam0) - 1))
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar5, *uParam0));
			iVar2 = get_entity_model(iVar1);
			iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar5, *uParam0));
			if (((!does_entity_exist(iVar1) || is_entity_dead(iVar1)) || func_139(Global_34, iVar1, 1, 1) > (func_138() + 10f)) || func_140(iVar3, 1))
			{
				func_141(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (get_itemset_size(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (get_itemset_size(iVar0) - 1))
		{
			iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar5, iVar0));
			bVar4 = false;
			if (!func_142(iVar3, 0) && !func_140(iVar3, 1))
			{
				iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar5, iVar0));
				iVar2 = get_entity_model(iVar1);
				if (is_ped_a_player(iVar3) && !_0x0e2f43516f998269(iVar3))
				{
					bVar4 = true;
				}
				if (func_143(iVar3))
				{
					if (func_144(iVar3))
					{
						bVar4 = true;
					}
					if (_0xf49f14462f0ae27c(get_player_index()) == iVar3)
					{
						bVar4 = true;
					}
					if (iVar2 == 674267496)
					{
						bVar4 = true;
					}
					if (func_145(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_146(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
}

void func_100()
{
	if (get_itemset_size(Global_1301321->f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (get_itemset_size(Global_1301321->f_1) - 1))
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_1301321->f_1));
			if (does_entity_exist(iVar1))
			{
				iVar2 = _0x3ffb15534067dcd4(iVar1);
				if (!is_entity_dead(iVar2))
				{
					iVar3 = func_147(get_entity_model(iVar1));
					if (is_ped_a_player(iVar2))
					{
						if (func_148(iVar1))
						{
							if (func_149(iVar2))
							{
								if (func_98(&Global_1301321, 256) && iVar2 == Global_34)
								{
									if (!func_98(&Global_1301321, 64))
									{
										func_150(iVar2);
									}
								}
							}
							else
							{
								func_150(iVar2);
							}
						}
						else
						{
							func_150(iVar2);
						}
					}
					else if (func_151(iVar2))
					{
						if (!func_148(iVar1))
						{
							func_150(iVar2);
						}
					}
					else if (!func_152(iVar2, iVar3))
					{
						func_150(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_101(var uParam0)
{
	iVar3 = 0;
	while (iVar3 <= (get_itemset_size(*uParam0) - 1))
	{
		iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, *uParam0));
		if (does_entity_exist(iVar0))
		{
			iVar1 = _0x3ffb15534067dcd4(iVar0);
			if (!is_entity_dead(iVar1))
			{
				iVar2 = func_147(get_entity_model(iVar0));
				if (is_ped_a_player(iVar1))
				{
					if (func_148(iVar0))
					{
						if (!_0x5102307ce88798eb(iVar1))
						{
							request_ped_visibility_tracking(iVar1);
						}
						else if (func_149(iVar1))
						{
							if (func_98(&Global_1301321, 256) && iVar1 == Global_34)
							{
								if (func_98(&Global_1301321, 64))
								{
									func_146(iVar0, Global_1301321->f_1);
								}
							}
							else
							{
								func_146(iVar0, Global_1301321->f_1);
							}
						}
					}
				}
				else if (func_151(iVar1))
				{
					if (func_148(iVar0))
					{
						if (!_0x5102307ce88798eb(iVar1))
						{
							request_ped_visibility_tracking(iVar1);
						}
						else if (func_149(iVar1))
						{
							func_146(iVar0, Global_1301321->f_1);
						}
					}
				}
				else if (func_153(iVar1, iVar2))
				{
					func_146(iVar0, Global_1301321->f_1);
				}
			}
		}
		iVar3++;
	}
}

void func_102(var uParam0, int iParam1)
{
	func_154(uParam0, iParam1);
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_66(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_67(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_155(iVar0);
	*uParam0 = 0;
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_66(&(Local_51.f_1[iParam0])))
		{
			if (iParam0 == 9)
			{
				Local_51.f_1[iParam0] = func_157(func_156(iParam0), 129385309, -811138093, 0);
			}
			else if (iParam0 == 8)
			{
				Local_51.f_1[iParam0] = func_157(func_156(iParam0), -1923356207, -133104843, 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_51.f_93 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_51.f_1[iParam0] = func_159(sVar0, func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				Local_51.f_1[iParam0] = func_159(func_156(iParam0), func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			if (iParam0 == 4)
			{
				func_160(&(Local_51.f_1[iParam0]), 11, 1, 1);
			}
			func_161(&(Local_51.f_1[iParam0]), -857683846, 0, 1);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[&Local_51.f_1[iParam0]]->f_3, true);
		}
	}
	else if (func_66(&(Local_51.f_1[iParam0])))
	{
		func_103(Local_51.f_1[iParam0], 1, 1);
	}
}

bool func_105(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_98((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107(var uParam0)
{
	func_162(uParam0, 0f);
}

void func_108(var uParam0)
{
	fLocal_150 = get_control_normal(0, 1206668322);
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 60f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.6f);
			_0xe4b7945ef4f1bfb2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_27)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 25f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.6f);
			_0xe4b7945ef4f1bfb2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
}

void func_109(var uParam0)
{
	if (iLocal_46 == 0)
	{
		if (func_45(&(uParam0->f_1[3])))
		{
			if (_0x4ad019591e94c064("DOF_Change", Global_34, "CAMERA_SOUNDSET", -2))
			{
				_play_sound_from_entity("DOF_Change", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_47 = get_game_timer();
			iLocal_46 = 1;
			iLocal_48 = 0;
		}
	}
	else if ((get_game_timer() - iLocal_47) > 300 && iLocal_48 == 0)
	{
		if (uParam0->f_93 == 0)
		{
			uParam0->f_93 = 1;
			iVar0 = func_67(&(Local_51.f_1[3]));
			_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_93 = 0;
			iVar1 = func_67(&(Local_51.f_1[3]));
			_uiprompt_set_text((*Global_1951255)[iVar1]->f_3, "CAM_FOCUS_LOCKE");
		}
		_0x9f97e85ec142255e(uParam0->f_14, uParam0->f_93);
		iLocal_48 = 1;
	}
	else
	{
		if ((get_game_timer() - iLocal_47) > 500)
		{
		}
		if ((get_game_timer() - iLocal_47) > 850)
		{
			iLocal_46 = 0;
			iLocal_48 = 0;
		}
	}
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_111(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_69(iParam0, 1);
	func_70(iParam0, 1);
	func_71(iParam0, 128);
}

bool func_112(var uParam0)
{
	return func_106(*uParam0, 2);
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

void func_114(var uParam0)
{
	if (does_cam_exist(uParam0->f_14))
	{
		set_cam_active(uParam0->f_14, false);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_14, false);
	}
	fLocal_203 = get_entity_heading(Global_34);
	uParam0->f_52 = { get_entity_coords(Global_34, true, false) };
	uParam0->f_55 = { get_entity_rotation(Global_34, 2) };
	uParam0->f_67 = { uParam0->f_55, uParam0->f_55.f_1, (uParam0->f_55.f_2 - 180f) };
	uParam0->f_61 = { vLocal_159 };
	uParam0->f_93 = 0;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	vLocal_166 = { uParam0->f_67 };
	vLocal_166.x = (vLocal_166.x + 1f);
	uParam0->f_26.f_3 = get_player_index();
	uParam0->f_26.f_4 = 21030;
	if (!does_cam_exist(uParam0->f_14))
	{
		fVar0 = 50f;
		uParam0->f_14 = create_cam_with_params("KIT_CAMERA", uParam0->f_61, uParam0->f_67, fVar0, true, 2);
	}
	uParam0->f_15 = 25f;
	uParam0->f_15.f_1 = 2f;
	uParam0->f_15.f_2 = 128f;
	uParam0->f_15.f_3 = 30f;
	uParam0->f_15.f_4 = 30f;
	uParam0->f_15.f_5 = 90f;
	uParam0->f_15.f_6 = 1;
	uParam0->f_15.f_7 = 0;
	uParam0->f_15.f_8 = 1;
	uParam0->f_15.f_9 = 1;
	_0xe4b7945ef4f1bfb2(uParam0->f_14, &(uParam0->f_15));
	_0x9f97e85ec142255e(uParam0->f_14, uParam0->f_93);
	_0x42ed56b02e05d109(uParam0->f_14, false);
	set_cam_active(uParam0->f_14, true);
	render_script_cams(true, false, 3000, true, false, 0);
}

void func_115()
{
	sLocal_179[0] = "portrait_normal";
	sLocal_179[1] = "portrait_happy";
	sLocal_179[2] = "portrait_pensive";
	sLocal_179[3] = "portrait_pensive_2";
	sLocal_179[4] = "portrait_relaxed";
	sLocal_179[5] = "portrait_angry";
	sLocal_179[6] = "portrait_angry_2";
	sLocal_179[7] = "portrait_annoyed";
}

void func_116()
{
	iLocal_192[0] = 0;
	iLocal_192[1] = 1;
	iLocal_192[2] = 2;
	iLocal_192[3] = 3;
	iLocal_192[4] = 4;
	iLocal_192[5] = 5;
	iLocal_192[6] = 6;
}

void func_117(var uParam0)
{
	fLocal_150 = get_control_normal(0, 1206668322);
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 90f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.9f);
			_0xe4b7945ef4f1bfb2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_27)
			{
				if (_0x4ad019591e94c064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_In", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		_0x0f2a2175734926d8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 30f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.9f);
			_0xe4b7945ef4f1bfb2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (_0x4ad019591e94c064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					_play_sound_from_entity("Zoom_Out", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		_0x0f2a2175734926d8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
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

int func_119(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_163(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

bool func_120(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

Vector3 func_121(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_122()
{
	bLocal_202 = true;
	iLocal_201 = get_game_timer();
	iLocal_200 = 1;
	func_15();
}

void func_123(var uParam0)
{
	func_164(uParam0);
	switch (&iLocal_192[uParam0->f_72])
	{
		case 0:
			break;
		case 1:
			func_165(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A", 333292554);
			break;
		case 2:
			func_165(1904532698, "WORLD_HUMAN_STERNGUY", -730803145);
			break;
		case 3:
			break;
		case 4:
			func_165(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", -571916863);
			break;
		case 5:
			break;
		case 6:
			func_165(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", 710326353);
			break;
	}
}

float func_124()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_126(int iParam0)
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

bool func_127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_128(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_129(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_166(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_167("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_168(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_169(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_170(iVar1);
				return true;
			}
			iVar3++;
		}
		func_170(iVar1);
	}
	return false;
}

bool func_130(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_171(iParam0);
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
	iVar1 = func_172(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_173(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_174(iParam0);
	iVar2 = func_173(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_131(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_128(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_166(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_175(iParam0, 0);
	}
	if (func_176(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_177(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_178(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_177(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_132(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

struct<2> func_133(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_134(struct<2> Param0)
{
	return func_179(Param0);
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_136(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_180(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_181(iParam0))
	{
		return false;
	}
	if (func_182(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_183(iParam0, 1)) || func_184(32768))
	{
		if (!func_183(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_185())
	{
		return false;
	}
	return true;
}

void func_137(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

float func_138()
{
	return 130f;
}

float func_139(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_140(int iParam0, bool bParam1)
{
	if (bParam1 && _0x0e2f43516f998269(iParam0))
	{
		return true;
	}
	if (_0xb655db7582aec805(iParam0))
	{
		return true;
	}
	if (get_ped_config_flag(iParam0, 11, true))
	{
		return true;
	}
	if (get_ped_config_flag(iParam0, 580, true))
	{
		return true;
	}
	return false;
}

void func_141(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (is_in_itemset(iParam0, iParam1))
		{
			remove_from_itemset(iParam0, iParam1);
		}
	}
}

bool func_142(int iParam0, bool bParam1)
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

bool func_143(int iParam0)
{
	uVar0 = func_186(iParam0);
	if (_0x9a100f1cf4546629(uVar0) && !_0x0e2f43516f998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0)
{
	iVar0 = get_ped_relationship_group_hash(iParam0);
	if (((!_0x118d476a6f1a13f1(iParam0) && !func_187(iParam0, 0)) && !func_188(iParam0)) && iVar0 != 543319108)
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0)
{
	if (func_98(&Global_1301321, 4096))
	{
		switch (iParam0)
		{
			case -2063183075:
			case -2021043433:
			case -2011226991:
			case -1963605336:
			case -1892280447:
			case -1797625440:
			case -1568716381:
			case -1414989025:
			case -1211566332:
			case -1170118274:
			case -1143398950:
			case -1124266369:
			case -1098441944:
			case -753902995:
			case -407730502:
			case -50684386:
			case 40345436:
			case 90264823:
			case 252669332:
			case 457416415:
			case 480688259:
			case 556355544:
			case 730092646:
			case 759906147:
			case 1074477367:
			case 1088428104:
			case 1110710183:
			case 1458540991:
			case 1556473961:
			case 1654513481:
			case 1755643085:
			case 2028722809:
				return true;
		}
	}
	return false;
}

void func_146(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

int func_147(int iParam0)
{
	if (is_model_valid(iParam0))
	{
		iVar0 = _0xa65aa1ace81e5a77(iParam0);
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_148(int iParam0)
{
	return (is_entity_on_screen(iParam0) && !is_entity_occluded(iParam0));
}

bool func_149(int iParam0)
{
	return (_0x5102307ce88798eb(iParam0) && is_tracked_ped_visible(iParam0));
}

void func_150(int iParam0)
{
	iVar0 = func_186(iParam0);
	if (_0x5102307ce88798eb(iParam0))
	{
		_0x3088634cf8c819cf(iParam0);
	}
	func_141(iVar0, Global_1301321->f_1);
}

bool func_151(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_189(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_152(int iParam0, int iParam1)
{
	iVar0 = func_186(iParam0);
	if (((((func_148(iVar0) && !func_140(iParam0, 1)) && has_entity_clear_los_to_entity(Global_34, iVar0, 3455)) && func_190(iParam0, 1050253722, 1060320051, 0, 1061158912)) && func_149(iParam0)) && func_191(iParam0) >= func_192(iParam1))
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	iVar0 = func_186(iParam0);
	if (((func_148(iVar0) && !func_140(iParam0, 1)) && has_entity_clear_los_to_entity(Global_34, iVar0, 3455)) && func_190(iParam0, 1050253722, 1060320051, 0.2f, 1061158912))
	{
		if (!_0x5102307ce88798eb(iParam0))
		{
			request_ped_visibility_tracking(iParam0);
		}
		else if (func_149(iParam0) && func_191(iParam0) >= func_192(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_155(int iParam0)
{
	if (!func_193(iParam0))
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

char* func_156(int iParam0)
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
		case 6:
			return "CAM_TAKE_PHOTO";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	return "INVALID_USE_CONTEXT";
}

int func_157(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

int func_158(int iParam0)
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

int func_159(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_162(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_124() - fParam1);
	func_194(uParam0, 1);
	func_195(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
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

void func_164(var uParam0)
{
	set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
	if (func_56())
	{
		clear_ped_tasks(player_ped_id(), 1, 0);
	}
	set_entity_heading(Global_34, fLocal_203);
}

void func_165(int iParam0, char* sParam1, int iParam2)
{
	if (func_43() == 0)
	{
		if (iParam0 == 0)
		{
			return;
		}
		if (is_string_null_or_empty(sParam1))
		{
			return;
		}
		if (iParam2 == 0)
		{
			return;
		}
		if (!func_118(Global_34, 242628503))
		{
			open_sequence_task(&iLocal_18);
			_task_start_scenario_in_place(0, iParam0, 0, true, 0, -1f, false);
			close_sequence_task(iLocal_18);
			task_perform_sequence(Global_34, iLocal_18);
			clear_sequence_task(&iLocal_18);
		}
	}
	else
	{
		iLocal_205 = create_scenario_point(iParam0, vLocal_153, fLocal_203, 0, 0, 1);
		_set_scenario_point_flag(iLocal_205, 25, true);
		_set_scenario_point_flag(iLocal_205, 23, true);
		open_sequence_task(&iLocal_18);
		_task_use_scenario_point(0, iLocal_205, sParam1, -1, false, true, 0, false, 0f, false);
		close_sequence_task(iLocal_18);
		task_perform_sequence(Global_34, iLocal_18);
	}
}

int func_166(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_196(iParam0, 1399091007))
	{
		func_197(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_167(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_177(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_169(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_170(int iParam0)
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

int func_171(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_172(int iParam0)
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

int func_173(var uParam0, int iParam1)
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

int func_174(int iParam0)
{
	iVar0 = func_171(iParam0);
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

int func_175(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_198(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_200(&Var0, func_199(0));
	}
	if (!func_201(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_170(iVar14);
	return uVar15;
}

int func_176(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_177(bool bParam0)
{
	if (func_43() == -1)
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

struct<4> func_178(int iParam0, bool bParam1)
{
	Var0 = { func_202(iParam0, bParam1, 0) };
	return func_203(iParam0, Var0, Var0.f_4, bParam1);
}

int func_179(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_204(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_180(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_181(int iParam0)
{
	if (func_183(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_182(int iParam0)
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

bool func_183(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_184(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_185()
{
	if (!func_205())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_186(int iParam0)
{
	return iParam0;
}

bool func_187(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (get_animal_tuning_bool_param(iParam0, 58))
	{
		if (bParam1)
		{
			return is_entity_in_air(iParam0, 1);
		}
		return true;
	}
	return false;
}

bool func_188(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

int func_189(int iParam0)
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
		if (iParam0 == Global_1903136[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_190(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_206(get_entity_coords(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_191(int iParam0)
{
	return (func_207(iParam0) * 100f);
}

float func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
		case 1:
			return 0.02f;
		case 2:
			return 0.02f;
		case 3:
			return 0.03f;
		case 4:
			return 0.03f;
	}
	return 0.03f;
}

bool func_193(int iParam0)
{
	return func_110(iParam0, 2);
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_196(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return func_209(func_208(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0, var uParam1, var uParam2)
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

struct<14> func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_199(bool bParam0)
{
	iVar0 = func_177(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_203(923904168, func_210(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_203(923904168, func_210(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_203(923904168, func_210(bParam0), -740156546, 0);
}

void func_200(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_201(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_177(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_202(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_210(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_128(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_203(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_199(bParam1) };
			if (bParam2 && func_211(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_212(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_212(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_213(iParam0, &Var6, 1728382685))
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
			Var0 = { func_214(bParam1) };
			switch (func_171(iParam0))
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
			if (func_215(iParam0, -1823706425))
			{
				Var0 = { func_203(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_215(iParam0, -1483207246))
			{
				Var0 = { func_203(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_203(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_215(iParam0, -1653629781))
			{
				Var0 = { func_203(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_216(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_215(iParam0, -1653629781))
			{
				Var0 = { func_203(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_203(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_127(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_177(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_204(struct<2> Param0, var uParam2)
{
	if (!func_217(Param0))
	{
		return false;
	}
	func_218(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_205()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_206(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_207(int iParam0)
{
	iVar0 = func_186(iParam0);
	_0xf3fda9a617a15145(iVar0, &vVar1, &vVar4);
	if (!get_screen_coord_from_world_coord(vVar1, &Var7, &(Var7.f_1)) || !get_screen_coord_from_world_coord(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = absf((Var10 - Var7));
	fVar14 = absf((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

int func_208(int iParam0)
{
	return iParam0;
}

int func_209(int iParam0, int iParam1)
{
	if (!func_219(iParam0, 2))
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

struct<4> func_210(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_177(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_203(1328661203, func_220(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_203(1328661203, func_220(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_203(1328661203, func_220(), -1591664384, bParam0);
}

bool func_211(int iParam0, bool bParam1)
{
	if (func_171(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_221();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_222(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_213(int iParam0, var uParam1, int iParam2)
{
	if (func_223(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_214(bool bParam0)
{
	iVar0 = func_177(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_203(271701509, func_210(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_203(271701509, func_210(bParam0), 12999093, 0);
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_171(iParam0);
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
			if (func_224(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_216(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_225(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_217(struct<2> Param0)
{
	if (!func_226(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_227(Param0))
	{
		return false;
	}
	return true;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_219(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_220()
{
	return Var0;
}

bool func_221()
{
	return (func_228(-1185145312, 0, 0, 0) > 0 && func_229(func_203(889965687, func_210(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_222(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_176(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_203(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_177(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_177(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_223(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_177(0);
	*uParam1 = { func_203(iParam0, func_199(0), iParam3, 0) };
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

bool func_224(int iParam0, int iParam1, int iParam2)
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

bool func_225(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_177(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_226(int iParam0)
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

int func_227(int iParam0)
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

int func_228(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_230(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_177(bParam1), iParam0, iParam3);
}

int func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_231(&uParam0, iParam4, bParam5, iParam6);
}

bool func_230(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_231(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_232(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_177(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_225(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

