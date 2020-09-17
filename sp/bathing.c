void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = 1;
	iLocal_44 = 1;
	sLocal_45 = "X";
	fLocal_67 = 0f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	bLocal_78 = true;
	sLocal_302 = "Script_Mini_Game_Bathing_Regular";
	sLocal_303 = "Script_Mini_Game_Bathing_Deluxe";
	sLocal_304 = "MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_305 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_306 = "MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_307 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_308 = "MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_309 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_310 = "MINI_GAMES@BATHING@DELUXE@MAID";
	sLocal_311 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@MAID";
	iLocal_312 = 1018603920;
	iLocal_313 = 1583018006;
	iLocal_314 = -1074884633;
	iLocal_315 = 4;
	iLocal_325 = 23;
	fLocal_326 = 4f;
	fLocal_327 = 4f;
	Local_82 = -1;
	func_1(Global_35);
	if (vScriptParam_0.z != -1)
	{
	}
	else
	{
		Local_82.f_6 = func_2();
	}
	if (has_force_cleanup_occurred(523))
	{
		func_3(&Local_82);
	}
	Local_82.f_6 = func_2();
	if (!func_4(&Local_82))
	{
		func_3(&Local_82);
	}
	iLocal_21 = 0;
	while (!func_5(&Local_82))
	{
		func_6(&Local_82);
		func_7();
		wait(0);
	}
	func_3(&Local_82);
}

void func_1(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	func_8();
	Global_1905942 = Global_40.f_7729;
	if (func_9(32768))
	{
		func_10(&(Global_1946804->f_1735.f_120));
		func_11();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else
	{
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, 0, 0);
	}
}

int func_2()
{
	return Global_1894899->f_2;
}

void func_3(int iParam0)
{
	set_ped_can_leg_ik(Global_35, true);
	set_ped_leg_ik_mode(Global_35, 2);
	if (bLocal_14 && get_entity_collision_disabled(Global_35))
	{
		set_entity_collision(Global_35, true, false);
		set_entity_dynamic(Global_35, true);
	}
	if (iLocal_66 == 0)
	{
	}
	if (is_valid_interior(iLocal_65))
	{
		unpin_interior(iLocal_65);
	}
	if (does_blip_exist(iParam0->f_5))
	{
		remove_blip(&(iParam0->f_5));
	}
	if (does_blip_exist(iParam0->f_41))
	{
		remove_blip(&(iParam0->f_41));
	}
	if (bLocal_80)
	{
		_0x57a197ad83f66bbf(uVar300);
		bLocal_80 = false;
	}
	if (bLocal_79)
	{
		_0x57a197ad83f66bbf(uVar299);
		bLocal_79 = false;
	}
	func_13();
	func_14("BATH_GOTO_BATH", 1);
	Global_1914319->f_18941.f_17 = 0;
	if (does_anim_dict_exist(sVar305))
	{
		remove_anim_dict(sVar305);
	}
	if (does_anim_dict_exist(sVar307))
	{
		remove_anim_dict(sVar307);
	}
	if (does_anim_dict_exist(sVar301))
	{
		remove_anim_dict(sVar301);
	}
	if (does_anim_dict_exist(sVar303))
	{
		remove_anim_dict(sVar303);
	}
	if (has_clip_set_loaded(sVar306))
	{
		remove_clip_set(sVar306);
	}
	if (has_clip_set_loaded(sVar308))
	{
		remove_clip_set(sVar308);
	}
	if (has_clip_set_loaded(sVar302))
	{
		remove_clip_set(sVar302);
	}
	if (has_clip_set_loaded(sVar304))
	{
		remove_clip_set(sVar304);
	}
	if (does_entity_exist(iLocal_62))
	{
		delete_object(&iLocal_62);
	}
	if (does_entity_exist(iLocal_64))
	{
		delete_object(&iLocal_64);
	}
	if (does_entity_exist(iLocal_63))
	{
		delete_object(&iLocal_63);
	}
	if (does_entity_exist(iParam0->f_135))
	{
		freeze_entity_position(iParam0->f_135, true);
		delete_ped(&(iParam0->f_135));
	}
	if (does_entity_exist(iParam0->f_144))
	{
		freeze_entity_position(iParam0->f_144, true);
		delete_ped(&(iParam0->f_144));
	}
	if (_0x5c16855277819bbf() > 0)
	{
		_0x7d4e70a67a651c71(_0x5c16855277819bbf());
	}
	func_15(iParam0->f_13);
	func_15(iParam0->f_14);
	func_16(iParam0);
	remove_ptfx_asset();
	Global_1395601->f_2 = 0;
	Global_1914319->f_18941.f_15 = 0;
	if (!func_17() && !is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
	if (bLocal_60 && iLocal_61 == 0)
	{
		set_entity_invincible(Global_35, false);
		func_18(Global_35, 1);
		func_19(0);
		trigger_music_event("MG_BATHING_STOP");
		_0xe36d4a38d28d9cfb(0);
		_0x5d6182f3bce1333b(5, -142743235);
	}
	if (bLocal_81 && func_20(&Global_1935630, 2))
	{
		func_21(Global_1935630, 2);
	}
	terminate_this_thread();
}

bool func_4(int iParam0)
{
	iParam0->f_1 = -972966383;
	iParam0->f_2 = -304640465;
	iParam0->f_6 = func_2();
	func_22(iParam0);
	return true;
}

bool func_5(int iParam0)
{
	iParam0->f_130++;
	if (IntToFloat(iParam0->f_130) < 10f)
	{
		return false;
	}
	if (iParam0->f_112 == 4)
	{
		if (func_23(player_id(), 1, 0, 1))
		{
			return true;
		}
		if (_0x7c7e4ab748ea3b07())
		{
			return true;
		}
	}
	iParam0->f_130 = 0;
	if (iParam0->f_17)
	{
		return true;
	}
	if (func_2() != iParam0->f_6 || iParam0->f_6 == -1)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0)
{
	if (bLocal_23)
	{
		if ((get_game_timer() - iLocal_46) > 3000)
		{
			func_24(iParam0, "SCRUB_RESPONSE", 0);
			bLocal_23 = false;
		}
	}
	if (bLocal_27)
	{
		if ((get_game_timer() - iLocal_47) > 3000)
		{
			func_24(iParam0, "DECLINE_SPECIAL_BATH", 1);
			bLocal_27 = false;
		}
	}
	bVar0 = false;
	if (func_2() == 92)
	{
		stop_fire_in_range(iParam0->f_60, 5f);
	}
	if (iParam0->f_112 > 7)
	{
		_disable_first_person_cam_this_frame();
		func_25(iParam0->f_14, 1);
		if (is_ped_injured(Global_35) || is_ped_dead_or_dying(Global_35, true))
		{
			func_18(Global_35, 1);
		}
		set_ped_can_leg_ik(Global_35, false);
		set_ped_leg_ik_mode(Global_35, 0);
		stop_fire_in_range(iParam0->f_60, 10f);
		_0x8370d34bd2e60b73();
		disable_control_action(0, -2131587435, false);
		_0x3c8f74e8fe751614();
		func_26();
		disable_control_action(0, -1722177808, false);
	}
	if (iParam0->f_15 == 1)
	{
		if (iParam0->f_112 == 14 || iParam0->f_112 == 16)
		{
			func_27(iParam0);
		}
		else
		{
			if (func_28(iLocal_16))
			{
				func_29(&iLocal_16, 1, 1);
			}
			if (func_28(iLocal_17))
			{
				func_29(&iLocal_17, 1, 1);
			}
		}
	}
	switch (iParam0->f_112)
	{
		case 0:
			func_30(iParam0, iParam0->f_119, 1);
			func_31(iParam0, 1);
			iParam0->f_19 = 0;
			iParam0->f_112 = 1;
			break;
		case 1:
			func_33(Global_35, func_32(iVar322));
			func_34(iParam0, 0);
			if (iParam0->f_19 && !is_player_control_on(player_id()))
			{
				iParam0->f_19 = 0;
				set_player_control(player_id(), true, 0, false);
			}
			if (iParam0->f_6 == 115)
			{
				func_30(iParam0, iParam0->f_119, 0);
			}
			iParam0->f_3 = 1;
			_0xed9582b3da8f02b4(2);
			StringCopy(&Local_269, "bath_orbit_cam", 64);
			StringCopy(&(Local_269.f_8), "BATH_ORBIT_REQUEST", 64);
			_0x6a4d224fc7643941(&Local_269);
			iParam0->f_31 = 0;
			iParam0->f_30 = 0;
			iParam0->f_32 = 0;
			iParam0->f_113 = 0;
			iParam0->f_115 = 0;
			iParam0->f_33 = 0;
			if (bLocal_78)
			{
				iParam0->f_36 = 0;
				iParam0->f_37 = 0;
			}
			func_35(iParam0);
			iLocal_65 = get_interior_at_coords(iParam0->f_60);
			if (is_valid_interior(iLocal_65))
			{
				if (iParam0->f_6 == 38)
				{
					iLocal_66 = _0x5d1c5d8e62e8ee1c(iLocal_65);
					if (iLocal_66 == 0)
					{
					}
					else if (!_0x113857d66a9cabe6(iLocal_66))
					{
						_0xbfcb17895bb99e4e(iLocal_66, 1);
					}
				}
				pin_interior_in_memory(iLocal_65);
			}
			func_36(&(iParam0->f_131), 1);
			iParam0->f_112 = 3;
			break;
		case 2:
			if (!func_37(iParam0, &uVar1))
			{
				if (iParam0->f_6 == 115)
				{
					func_30(iParam0, iParam0->f_119, 0);
				}
				func_38(iParam0, iParam0->f_10, 0);
				func_36(&(iParam0->f_131), 1);
				iParam0->f_112 = 3;
			}
			break;
		case 3:
			if (func_37(iParam0, &uVar1))
			{
				func_30(iParam0, iParam0->f_119, 1);
				func_34(iParam0, 0);
				func_39();
				iParam0->f_112 = 2;
			}
			if (func_40(&(iParam0->f_131)) && func_41(&(iParam0->f_131)) > 15f)
			{
				iParam0->f_17 = 1;
				func_42(&(iParam0->f_131));
			}
			else
			{
				if ((func_43() && !_is_ped_carrying(Global_35)) && iParam0->f_112 == 3)
				{
					if (func_44(Global_1914319->f_16855.f_1, 262144))
					{
						func_45(Global_1914319->f_16855.f_1, 262144);
					}
					else
					{
						func_46(Global_1914319->f_18941.f_13, 0, 0, 1, 1);
						func_47(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 470467759, 1, Global_1914319->f_18941.f_13);
					}
					Global_1914319->f_18941.f_16 = 1;
					func_48(2);
					func_42(&(iParam0->f_131));
					func_38(iParam0, iParam0->f_10, 1);
					iParam0->f_112 = 4;
				}
				Jump @6168; //curOff = 1022
				if (func_37(iParam0, &uVar1))
				{
					func_30(iParam0, iParam0->f_119, 1);
					func_34(iParam0, 0);
					func_39();
					iParam0->f_112 = 2;
				}
				if ((((func_49(iParam0, 0) && is_entity_in_volume(Global_35, iParam0->f_14, true, 0)) && func_43()) && iParam0->f_112 == 4) && !_is_ped_carrying(Global_35))
				{
					set_entity_invincible(Global_35, true);
					iLocal_62 = create_object(iVar309, iParam0->f_60, iParam0->f_60.f_1, (iParam0->f_60.f_2 - 8f), true, true, false, false, true);
					iLocal_63 = create_object(iVar310, iParam0->f_60, (iParam0->f_60.f_1 + 1f), (iParam0->f_60.f_2 - 5f), true, true, false, false, true);
					iLocal_64 = create_object(iVar311, iParam0->f_60, (iParam0->f_60.f_1 + 0.2f), (iParam0->f_60.f_2 + 2f), true, true, false, false, true);
					StringCopy(&(iParam0->f_96), "s_regular_intro", 32);
					_0x5d6182f3bce1333b(5, -142743235);
					_0xe36d4a38d28d9cfb(1);
					Global_1914319->f_18941.f_17 = 1;
					Global_1935183->f_26 = 1;
					func_50(-1, 0, 0, 0, 0);
					iLocal_300 = 1;
					iParam0->f_112 = 5;
				}
				Jump @6168; //curOff = 1301
				if (iVar297 == 3)
				{
					iLocal_300 = 6;
					if (func_51("BATH_GOTO_BATH", 1))
					{
						func_14("BATH_GOTO_BATH", 1);
					}
					func_39();
					remove_all_ped_weapons(Global_35, true, true);
					if (func_52(Global_35, 0))
					{
						if (is_player_control_on(player_id()))
						{
							set_player_control(player_id(), false, 0, false);
						}
						display_radar(false);
						if (func_52(Global_35, 0))
						{
							clear_ped_tasks(Global_35, 1, 0);
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
						}
					}
					func_33(Global_35, func_32(iVar322));
					request_anim_dict(sVar301);
					request_anim_dict(sVar303);
					request_clip_set(sVar302);
					request_clip_set(sVar304);
					_0x2b6529c54d29037a(uVar299);
					_0x2b6529c54d29037a(uVar300);
					request_anim_dict(sVar305);
					request_anim_dict(sVar307);
					request_clip_set(sVar306);
					request_clip_set(sVar308);
					iParam0->f_38 = func_53(1203988035, -915411861, 1, 0, 0);
					func_34(iParam0, 0);
					func_54(iParam0);
					func_48(8);
					iParam0->f_112 = 6;
				}
				Jump @6168; //curOff = 1553
				if ((((_0x2c04d89a0fb4e244(uVar299) && has_anim_dict_loaded(sVar301)) && has_anim_dict_loaded(sVar303)) && has_clip_set_loaded(sVar302)) && has_clip_set_loaded(sVar304))
				{
					iParam0->f_112 = 7;
				}
				Jump @6168; //curOff = 1619
				if (iVar297 == 8)
				{
					func_55(iParam0);
					if (does_entity_exist(iLocal_63))
					{
					}
					Local_235.f_1 = -455129387;
					Local_235 = 931646849;
					Local_235.f_30 = "BATHING";
					task_move_network_by_name_with_init_params(Global_35, uVar299, &Local_235, 1f, 0, 0, 0);
					iLocal_58 = get_game_timer();
					Local_235.f_1 = -455129387;
					Local_235 = 64669404;
					Local_235.f_30 = "BATHING";
					task_move_network_advanced_by_name_with_init_params(iLocal_64, uVar299, &Local_235, iParam0->f_60, 0f, 0f, iParam0->f_63, 2, 3f, 0, 0, 0, 0);
					_0x2208438012482a1a(Global_35, false, false);
					force_entity_ai_and_animation_update(iLocal_64, true);
					freeze_entity_position(Global_35, true);
					bLocal_14 = true;
					set_entity_collision(Global_35, false, false);
					set_entity_dynamic(Global_35, false);
					if (!is_player_control_on(player_id()))
					{
						set_player_control(player_id(), true, 0, false);
					}
					bLocal_79 = true;
					fLocal_67 = 0f;
					_0x55546004a244302a(Global_35, 1);
					func_56(16, -100f);
					func_36(&uLocal_70, 1);
					iParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 1849
				if (((((iVar298 == 8 && _0x2c04d89a0fb4e244(uVar300)) && has_anim_dict_loaded(sVar305)) && has_anim_dict_loaded(sVar307)) && has_clip_set_loaded(sVar306)) && has_clip_set_loaded(sVar308))
				{
					func_57(iParam0);
					freeze_entity_position(Global_35, true);
					bLocal_14 = true;
					set_entity_collision(Global_35, false, false);
					set_entity_dynamic(Global_35, false);
					bLocal_80 = true;
					freeze_entity_position(iParam0->f_144, true);
					set_entity_collision(iParam0->f_144, false, false);
					set_entity_dynamic(iParam0->f_144, false);
					Local_235.f_1 = -455129387;
					Local_235 = -651856710;
					task_move_network_by_name_with_init_params(Global_35, uVar300, &Local_235, 1f, 0, 0, 0);
					iLocal_58 = get_game_timer();
					Local_235.f_1 = -455129387;
					Local_235 = -1442829246;
					task_move_network_by_name_with_init_params(iParam0->f_144, uVar300, &Local_235, 1f, 0, 0, 0);
					Local_235.f_1 = -455129387;
					Local_235 = 771395316;
					_0x2208438012482a1a(Global_35, false, false);
					_0x2208438012482a1a(iParam0->f_144, false, false);
					fLocal_67 = 0f;
					func_58(iParam0);
					func_36(&uLocal_70, 1);
					iParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 2114
				func_58(iParam0);
				if (func_49(iParam0, 1))
				{
					if (iParam0->f_116 == 0)
					{
						StringCopy(&(iParam0->f_104), "s_deluxe_intro", 32);
						iLocal_301 = 1;
						iParam0->f_112 = 11;
					}
				}
				Jump @6168; //curOff = 2161
				if (iVar298 == 5)
				{
					if (bLocal_53)
					{
						if (!is_ambient_speech_playing(iParam0->f_144) && (get_game_timer() - iLocal_47) > 3000)
						{
							if (func_59(&(iParam0->f_24), "BUY_BATH_SPL", -155487368, get_entity_coords(Global_35, true, false), iParam0->f_38))
							{
								iParam0->f_15 = 1;
								func_46(iParam0->f_38, 0, 0, 1, 1);
								func_60(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 1203988035, 1, iParam0->f_38);
								func_31(iParam0, 1);
								iLocal_301 = 6;
								iParam0->f_112 = 8;
								func_61(iParam0, "PLAYER_ACCEPTS_SPECIAL_BATH");
								iLocal_26 = 1;
								iLocal_47 = get_game_timer();
							}
							else if (func_62(&(iParam0->f_23), "GREET_NEG", 814057702, get_entity_coords(Global_35, true, false), 0, 0, 0, 0))
							{
								func_31(iParam0, 1);
								abort_anim_scene(iParam0->f_69, false);
								_delete_anim_scene(iParam0->f_69);
								iLocal_301 = 8;
								iParam0->f_112 = 7;
								func_61(iParam0, "PLAYER_DECLINES_SPECIAL_BATH");
								bLocal_27 = true;
								iLocal_47 = get_game_timer();
							}
							else
							{
								Jump @2488; //curOff = 2412
								iParam0->f_15 = 1;
								func_46(iParam0->f_38, 0, 0, 1, 1);
								func_60(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 1203988035, 1, iParam0->f_38);
								func_31(iParam0, 1);
								iLocal_301 = 6;
								iParam0->f_112 = 8;
								iLocal_47 = get_game_timer();
								Jump @6168; //curOff = 2485
								Jump @6168; //curOff = 2488
								_delete_anim_scene(iParam0->f_69);
								if (does_entity_exist(iParam0->f_144))
								{
									delete_ped(&(iParam0->f_144));
								}
								iParam0->f_112 = 14;
								Jump @6168; //curOff = 2524
								if (iParam0->f_116 == 0)
								{
									if (func_62(&(iParam0->f_28), "BATH_EXIT", 814057702, get_entity_coords(Global_35, true, false), 0, 0, 0, 0))
									{
										iParam0->f_116 = 1;
										func_31(iParam0, 1);
									}
								}
								if (((iVar320 == 1 && iVar321 == 1) && iVar318 == 1) && iVar319 == 1)
								{
									if (iLocal_77 == 0)
									{
										func_63(100f);
										iLocal_77 = 1;
									}
									if (iLocal_54 == 0)
									{
										iLocal_55 = get_game_timer();
										iLocal_54 = 1;
									}
									else if ((get_game_timer() - iLocal_55) > 15000)
									{
										if (iParam0->f_116 == 0)
										{
											iParam0->f_116 = 1;
											func_31(iParam0, 1);
										}
									}
								}
								func_58(iParam0);
								if (iParam0->f_116 == 0)
								{
									if (func_64(iParam0, "Bathing", 1) || func_64(iParam0, "Intro", 1))
									{
										if (!is_player_control_on(player_id()))
										{
											set_player_control(player_id(), true, 0, false);
										}
										if (iLocal_57 == 1)
										{
											iLocal_57 = 0;
											if (iParam0->f_32 == 0)
											{
												func_65(iParam0->f_25, 1, 1);
											}
											if (iParam0->f_31 == 0)
											{
												func_65(iParam0->f_27, 1, 1);
											}
											if (iParam0->f_30 == 0)
											{
												func_65(iParam0->f_26, 1, 1);
											}
											if (bLocal_53 == 0)
											{
												if (iParam0->f_15 == 0)
												{
													func_65(iParam0->f_24, 1, 1);
												}
											}
										}
										if (iParam0->f_15 == 0)
										{
											if (func_62(&(iParam0->f_25), "BATH_SCRUBHD", -719620017, get_entity_coords(Global_35, true, false), 0, iParam0->f_32, 0, 0))
											{
												func_66(iParam0, 1);
												StringCopy(&(iParam0->f_20), "BATH_SCRUBHD", 24);
												bVar0 = true;
											}
											if (iParam0->f_36 >= 1)
											{
												StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
											}
											else
											{
												StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
											}
											if (func_62(&(iParam0->f_27), &(iParam0->f_20), -473983589, get_entity_coords(Global_35, true, false), 0, iParam0->f_31, 0, 0))
											{
												func_66(iParam0, 2);
												bVar0 = true;
											}
											if (iParam0->f_37 >= 1)
											{
												StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
											}
											else
											{
												StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
											}
											if (func_62(&(iParam0->f_26), &(iParam0->f_20), 1367437629, get_entity_coords(Global_35, true, false), 0, iParam0->f_30, 0, 0))
											{
												func_66(iParam0, 3);
												bVar0 = true;
											}
										}
										else
										{
											if (iVar320 == 0 || iVar321 == 0)
											{
												if (iVar320 == 0)
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(iParam0->f_27), &(iParam0->f_20), -473983589, get_entity_coords(Global_35, true, false), 0, iParam0->f_31, 1, 0))
												{
													func_66(iParam0, 2);
													bVar0 = true;
												}
											}
											if (iVar318 == 0 || iVar319 == 0)
											{
												if (iVar318 == 0)
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
												}
												if (func_62(&(iParam0->f_26), &(iParam0->f_20), 1367437629, get_entity_coords(Global_35, true, false), 0, iParam0->f_30, 1, 0))
												{
													func_66(iParam0, 3);
													bVar0 = true;
												}
											}
										}
										if (bLocal_53 == 0)
										{
											if (iParam0->f_15 == 0)
											{
												if (func_59(&(iParam0->f_24), "BUY_BATH_DLX", -393875690, get_entity_coords(Global_35, true, false), iParam0->f_38) || bLocal_76 == 1)
												{
													if (bLocal_76)
													{
													}
													iParam0->f_112 = 10;
													func_31(iParam0, 1);
												}
											}
										}
										if (bVar0)
										{
											if (func_40(&uLocal_73))
											{
												func_42(&uLocal_73);
											}
											func_31(iParam0, 1);
											fLocal_69 = 0f;
											if (iParam0->f_15)
											{
												iParam0->f_112 = 16;
												iLocal_315 = 4;
												iLocal_316 = 0;
												iLocal_320 = 0;
											}
											else
											{
												if (is_player_control_on(player_id()))
												{
													set_player_control(player_id(), false, 0, false);
												}
												iParam0->f_112 = 17;
											}
										}
										else
										{
											Jump @3650; //curOff = 3417
											iLocal_57 = 1;
											if (iParam0->f_15 == 0)
											{
												if (func_62(&(iParam0->f_25), "BATH_SCRUBHD", -719620017, get_entity_coords(Global_35, true, false), 0, iParam0->f_32, 0, 1))
												{
												}
												if (iParam0->f_36 >= 1)
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(iParam0->f_27), &(iParam0->f_20), -473983589, get_entity_coords(Global_35, true, false), 0, iParam0->f_31, 0, 1))
												{
												}
												if (iParam0->f_37 >= 1)
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
												}
												if (func_62(&(iParam0->f_26), &(iParam0->f_20), 1367437629, get_entity_coords(Global_35, true, false), 0, iParam0->f_30, 0, 1))
												{
												}
												if (bLocal_53 == 0)
												{
													if (func_59(&(iParam0->f_24), "BUY_BATH_DLX", -393875690, get_entity_coords(Global_35, true, false), iParam0->f_38))
													{
													}
													func_65(iParam0->f_24, 0, 1);
												}
											}
											Jump @6168; //curOff = 3650
											if (iVar318 == 0)
											{
												if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Leg"))
												{
													iLocal_321 = 1;
												}
											}
											if (iVar319 == 0)
											{
												if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Leg"))
												{
													iLocal_322 = 1;
												}
											}
											if (iVar320 == 0)
											{
												if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Arm"))
												{
													iLocal_323 = 1;
												}
											}
											if (iVar321 == 0)
											{
												if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Arm"))
												{
													iLocal_324 = 1;
												}
											}
											if (((iVar320 == 1 && iVar321 == 1) && iVar318 == 1) && iVar319 == 1)
											{
												if (iLocal_77 == 0)
												{
													func_63(100f);
													iLocal_77 = 1;
												}
											}
											if (iParam0->f_116 == 0)
											{
												if (func_62(&(iParam0->f_28), "BATH_EXIT", 814057702, get_entity_coords(Global_35, true, false), 0, 0, 0, 0))
												{
													iParam0->f_116 = 1;
													func_31(iParam0, 1);
												}
											}
											if (!func_40(&uLocal_73) && iVar312 == 4)
											{
												func_36(&uLocal_73, 1);
												if (iLocal_15 == 0)
												{
													func_61(iParam0, "SCRUB_DIRECTIONS");
													bLocal_23 = true;
													iLocal_46 = get_game_timer();
												}
											}
											fVar2 = (func_41(&uLocal_73) / 15f);
											if (fVar2 > 1f)
											{
												fVar2 = 1f;
											}
											func_67(iParam0, fVar2);
											if (is_task_move_network_ready_for_transition(Global_35))
											{
												if (iVar312 == 4)
												{
													if (!func_40(&uLocal_317))
													{
														func_36(&uLocal_317, 1);
													}
													if (bVar317 == 0)
													{
														if (func_68(&uLocal_317) > 2000)
														{
															if (((are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Arm") || are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Arm")) || are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Leg")) || are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Leg"))
															{
																if (!iVar312 == 2)
																{
																	if (iVar320 == 0 || iVar321 == 0)
																	{
																		if (iVar320 == 0)
																		{
																			StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
																		}
																		if (func_62(&(iParam0->f_27), &(iParam0->f_20), -473983589, get_entity_coords(Global_35, true, false), 0, iParam0->f_31, 1, 0))
																		{
																			iLocal_316 = 1;
																			func_42(&uLocal_317);
																			func_29(&(iParam0->f_27), 1, 1);
																			func_29(&(iParam0->f_26), 1, 1);
																			func_31(iParam0, 1);
																			request_task_move_network_state_transition(Global_35, "Scrub_Idle");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!func_40(&uLocal_317))
																			{
																				func_36(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(iParam0, "SCRUB_DIRECTIONS");
																				bLocal_23 = true;
																				iLocal_46 = get_game_timer();
																			}
																		}
																	}
																}
																if (!iVar312 == 2)
																{
																	if (iVar318 == 0 || iVar319 == 0)
																	{
																		if (iVar318 == 0)
																		{
																			StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
																		}
																		if (func_62(&(iParam0->f_26), &(iParam0->f_20), 1367437629, get_entity_coords(Global_35, true, false), 0, iParam0->f_30, 1, 0))
																		{
																			iLocal_316 = 2;
																			func_42(&uLocal_317);
																			func_29(&(iParam0->f_26), 1, 1);
																			func_29(&(iParam0->f_27), 1, 1);
																			func_31(iParam0, 1);
																			iLocal_316 = 2;
																			request_task_move_network_state_transition(Global_35, "Scrub_Idle");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!func_40(&uLocal_317))
																			{
																				func_36(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(iParam0, "SCRUB_DIRECTIONS");
																				bLocal_23 = true;
																				iLocal_46 = get_game_timer();
																			}
																		}
																	}
																}
															}
														}
													}
													if (func_68(&uLocal_317) > 8000 || bVar317)
													{
														func_42(&uLocal_317);
														iLocal_316 = 0;
														fLocal_67 = 0f;
														func_42(&uLocal_73);
														func_66(iParam0, 5);
														func_31(iParam0, 1);
														iParam0->f_112 = 14;
													}
												}
												if (iVar312 == 2)
												{
													if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Idle"))
													{
														if (iVar313 != 0)
														{
															if (func_68(&uLocal_317) > 6000)
															{
																if (is_task_move_network_ready_for_transition(Global_35))
																{
																	if (iVar313 == 1)
																	{
																		if (iVar320 == 0)
																		{
																			request_task_move_network_state_transition(Global_35, "Scrub_Left_Arm");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Left_Arm");
																		}
																		else
																		{
																			request_task_move_network_state_transition(Global_35, "Scrub_Right_Arm");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Right_Arm");
																		}
																	}
																	if (iVar313 == 2)
																	{
																		if (iVar318 == 0)
																		{
																			request_task_move_network_state_transition(Global_35, "Scrub_Left_leg");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Left_Leg");
																		}
																		else
																		{
																			request_task_move_network_state_transition(Global_35, "Scrub_Right_Leg");
																			request_task_move_network_state_transition(iParam0->f_144, "Scrub_Right_Leg");
																		}
																	}
																	func_42(&uLocal_317);
																	iLocal_315 = 3;
																}
															}
														}
													}
												}
												if (iVar312 == 3)
												{
													if (iVar313 == 2)
													{
														if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Leg") || are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Leg"))
														{
															iLocal_315 = 4;
														}
													}
													if (iVar313 == 1)
													{
														if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Left_Arm") || are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Right_Arm"))
														{
															iLocal_315 = 4;
														}
													}
												}
											}
											Jump @6168; //curOff = 4871
											if (iParam0->f_117 == 2)
											{
												switch (iParam0->f_115)
												{
													case 1:
														func_62(&(iParam0->f_29), "BATH_SCRUB", -719620017, get_entity_coords(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 2:
														func_62(&(iParam0->f_29), "BATH_SCRUB", -473983589, get_entity_coords(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 3:
														func_62(&(iParam0->f_29), "BATH_SCRUB", 1367437629, get_entity_coords(Global_35, true, false), 1, 0, 0, 0);
														break;
													default:
														func_62(&(iParam0->f_29), "BATH_SCRUB", -473983589, get_entity_coords(Global_35, true, false), 1, 0, 0, 0);
														break;
												}
												if (!is_player_control_on(player_id()))
												{
													set_player_control(player_id(), true, 0, false);
												}
												iParam0->f_34 = 1;
												iParam0->f_112 = 18;
											}
											Jump @6168; //curOff = 5080
											func_58(iParam0);
											if (iParam0->f_116 == 0)
											{
												if (func_69(iParam0))
												{
													if (fLocal_67 >= 1f || bLocal_76 == 1)
													{
														switch (iParam0->f_115)
														{
															case 1:
																iParam0->f_32 = 1;
																break;
															case 2:
																iParam0->f_36++;
																if (iParam0->f_36 >= 2)
																{
																	iParam0->f_31 = 1;
																}
																break;
															case 3:
																iParam0->f_37++;
																if (iParam0->f_37 >= 2)
																{
																	iParam0->f_30 = 1;
																}
																break;
														}
														if ((iParam0->f_32 && iParam0->f_31) && iParam0->f_30)
														{
															func_70("BATH_STAMINA_UP", 10000, 0, 0, 0, 1);
															func_71(200f, 0, 0, 1);
															func_72(-1);
															if (iParam0->f_15)
															{
																func_73(1203988035, 1);
															}
															else
															{
																func_73(470467759, 1);
															}
														}
														fLocal_67 = 0f;
														func_42(&uLocal_73);
														func_66(iParam0, 5);
														func_31(iParam0, 1);
														if (bLocal_78)
														{
															if (bLocal_53)
															{
																iParam0->f_112 = 10;
															}
															else
															{
																iParam0->f_112 = 14;
															}
															bLocal_78 = false;
														}
														else
														{
															iParam0->f_112 = 14;
														}
													}
													else
													{
														Jump @6168; //curOff = 5362
														if (iVar298 == 4)
														{
															iLocal_301 = 6;
															iParam0->f_112 = 20;
														}
														Jump @6168; //curOff = 5382
														if ((iParam0->f_15 && iVar298 == 8) || iParam0->f_15 == 0)
														{
															func_74(iParam0);
															if (does_entity_exist(iParam0->f_144))
															{
																delete_ped(&(iParam0->f_144));
															}
															clear_ped_env_dirt(Global_35);
															if (iParam0->f_6 == 115)
															{
																StringCopy(&(iParam0->f_96), "Pbl_Regular_Outro", 32);
															}
															else
															{
																StringCopy(&(iParam0->f_96), "s_Regular_outro", 32);
															}
															iLocal_300 = 1;
															iParam0->f_112 = 22;
														}
														Jump @6168; //curOff = 5489
														if (iVar297 == 3)
														{
															iLocal_300 = 6;
															func_57(iParam0);
															iParam0->f_112 = 23;
														}
														Jump @6168; //curOff = 5515
														switch (iParam0->f_6)
														{
															case 38:
																fLocal_327 = 2.6f;
																break;
															default:
																fLocal_327 = 2.6f;
																break;
														}
														if (iLocal_61 == 0)
														{
															if (func_75() == 0)
															{
																func_76();
															}
															if (has_anim_event_fired(Global_35, -1347001366))
															{
																clear_ped_wetness(Global_35);
																func_19(0);
																func_13();
																set_entity_invincible(Global_35, false);
																iLocal_61 = 1;
																if (does_entity_exist(_get_anim_scene_object(iParam0->f_68, "BOOTS", false)))
																{
																}
																if (func_77())
																{
																}
																func_18(Global_35, 1);
																func_78(0);
																_0xe3144b932dfdff65(Global_35, 0f, -1, 1, 1);
																clear_ped_damage_decal_by_zone(Global_35, 10, "ALL");
																clear_ped_blood_damage(Global_35);
																func_16(iParam0);
																trigger_music_event("MG_BATHING_STOP");
																_0xe36d4a38d28d9cfb(0);
																_0x5d6182f3bce1333b(5, -142743235);
																if (does_entity_exist(iParam0->f_135))
																{
																	remove_anim_scene_entity(iParam0->f_68, "FEMALE", iParam0->f_135);
																	freeze_entity_position(iParam0->f_135, true);
																	delete_ped(&(iParam0->f_135));
																}
																if (does_entity_exist(iParam0->f_144))
																{
																	freeze_entity_position(iParam0->f_144, true);
																	delete_ped(&(iParam0->f_144));
																}
																iParam0->f_16 = 1;
																release_named_script_audio_bank("BATHING");
																_0x531a78d6bf27014b("BATHING_Sounds");
															}
														}
														if (iVar297 == 8)
														{
															freeze_entity_position(Global_35, false);
															set_entity_collision(Global_35, true, false);
															set_entity_dynamic(Global_35, true);
															func_13();
															if (func_51("BATH_GOTO_BATH", 1))
															{
																func_14("BATH_GOTO_BATH", 1);
															}
															if (!is_player_control_on(player_id()))
															{
																set_player_control(player_id(), true, 0, false);
															}
															if (func_52(Global_35, 0))
															{
															}
															if (func_20(&Global_1935630, 2))
															{
																func_21(Global_1935630, 2);
																bLocal_81 = false;
															}
															if (does_entity_exist(_get_anim_scene_object(iParam0->f_68, "BOOTS", false)))
															{
																remove_anim_scene_entity(iParam0->f_68, "BOOTS", iLocal_62);
															}
															if (does_entity_exist(iLocal_64))
															{
																delete_object(&iLocal_64);
															}
															if (does_entity_exist(iLocal_62))
															{
																set_entity_coords(iLocal_62, iParam0->f_60, iParam0->f_60.f_1, (iParam0->f_60.f_2 - 20f), true, false, true, true);
																_0xcaaf2bccfef37f77(iLocal_62, 80);
																set_object_as_no_longer_needed(&iLocal_62);
															}
															if (does_entity_exist(iLocal_63))
															{
																_0xcaaf2bccfef37f77(iLocal_63, 80);
																set_object_as_no_longer_needed(&iLocal_63);
															}
															if (is_radar_hidden())
															{
																display_radar(true);
															}
															if (!iParam0->f_6 == 38)
															{
																func_30(iParam0, iParam0->f_119, 1);
															}
															Global_1914319->f_18941.f_17 = 0;
															remove_ptfx_asset();
															func_74(iParam0);
															func_57(iParam0);
															if (_0x5c16855277819bbf() > 0)
															{
																_0x7d4e70a67a651c71(_0x5c16855277819bbf());
															}
															func_80(func_79(-2061916883), 1);
															func_81(0, -1);
															iParam0->f_17 = 1;
														}
													}
													func_82(iParam0);
													func_83(iParam0);
													func_84(iParam0);
													func_85(iParam0);
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
			default:
				break;
	}
}

void func_7()
{
	if (iLocal_21 != 99)
	{
		if (iLocal_21 == 0)
		{
			func_86();
		}
		if (iLocal_21 == 1)
		{
			func_87();
		}
		if (iLocal_21 == 2)
		{
			func_88();
		}
		if (iLocal_21 == 3)
		{
			iLocal_21 = 99;
		}
	}
}

void func_8()
{
	func_89(&(Global_1946804->f_1735));
}

bool func_9(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_10(var uParam0)
{
	*uParam0 = Global_1946804->f_2776;
	uParam0->f_1 = Global_1946804->f_2776.f_1;
	uParam0->f_8 = Global_1946804->f_2776.f_8;
	uParam0->f_2 = Global_1946804->f_2776.f_2;
	uParam0->f_3[0] = &Global_1946804->f_2776.f_3[0];
	uParam0->f_3[1] = &Global_1946804->f_2776.f_3[1];
	uParam0->f_3[2] = &Global_1946804->f_2776.f_3[2];
	uParam0->f_3[3] = &Global_1946804->f_2776.f_3[3];
	uParam0->f_9 = Global_1946804->f_2776.f_9;
	uParam0->f_10 = Global_1946804->f_2776.f_10;
	uParam0->f_11 = Global_1946804->f_2776.f_11;
	uParam0->f_12 = 0;
}

void func_11()
{
	func_90(&(Global_1946804->f_2776));
	func_91(32768);
	func_92(1108822547, 8, 6);
}

int func_12(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_93(iParam1);
	}
	if (iVar0 == -1 && !func_95(iVar1, func_94()))
	{
		return 1;
	}
	if (uParam2->f_1 != 0 && func_96(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_97(iParam0, uParam2);
			}
			else
			{
				return 1;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_89(uParam2);
		}
	}
	if (!func_96(uParam2, 1))
	{
		func_98(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_99(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return 1;
			}
		}
		uParam2->f_1 = iVar1;
		func_100(uParam2, 1);
	}
	if (!bParam3)
	{
		return 1;
	}
	return func_97(iParam0, uParam2);
}

void func_13()
{
	if (_0x927b810e43e99932(&Local_269))
	{
		_0x0a5a4f1979abb40e(&Local_269);
	}
}

void func_14(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_101(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_15(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_16(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_particle_fx_looped_exist(&(iParam0->f_120[iVar0])))
		{
			remove_particle_fx(&(iParam0->f_120[iVar0]), false);
		}
		iVar0++;
	}
}

bool func_17()
{
	return Global_1898164->f_163;
}

void func_18(int iParam0, bool bParam1)
{
	func_102(&(Global_1946804->f_1735.f_120));
	func_103(iParam0, &(Global_1946804->f_1735), bParam1, 0, 1, 1);
}

void func_19(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_22(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 5:
			func_104(iParam0);
			break;
		case 76:
			func_105(iParam0);
			break;
		case 78:
			func_106(iParam0);
			break;
		case 26:
			func_107(iParam0);
			break;
		case 38:
			func_108(iParam0);
			break;
		case 92:
			func_109(iParam0);
			break;
		case 105:
			func_110(iParam0);
			break;
		case 115:
			func_111(iParam0);
			break;
		default:
			break;
	}
}

bool func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_112(bParam1, bParam2, bParam3);
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

void func_24(int iParam0, char* sParam1, int iParam2)
{
	switch (iParam0->f_6)
	{
		case 5:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 76:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		case 78:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 26:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 38:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 92:
			sLocal_3 = "1104_U_F_M_VhtBathgirl_01";
			break;
		case 105:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 115:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		default:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
	}
	if (is_ambient_speech_playing(iParam0->f_144))
	{
	}
	else if (iParam2 == 0)
	{
		func_113(iParam0->f_144, sParam1, 1541280898, 0, 1, sLocal_3, 0, 1);
	}
	else
	{
		iVar0 = func_114(iParam0->f_119, 0, 0);
		Var1.f_5 = 1;
		Var1.f_6 = 1;
		Var1 = sParam1;
		Var1.f_1 = sLocal_3;
		Var1.f_3 = -417894478;
		_play_ambient_speech_at_coords(get_entity_coords(iVar0, true, false), &Var1);
	}
}

void func_25(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_26()
{
	iLocal_59 = get_game_timer();
	if ((iLocal_59 - iLocal_58) < 2000 || func_115(Global_35, 76834332) == 0)
	{
		disable_control_action(0, -771458680, false);
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -1067115200, false);
		disable_control_action(0, -1898369514, false);
		disable_control_action(0, 150518893, false);
		disable_control_action(0, -1578429613, false);
		disable_control_action(0, -39308912, false);
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -1882188328, false);
		disable_control_action(0, -763919645, false);
		disable_control_action(0, 1885667965, false);
		disable_control_action(0, -1260100172, false);
	}
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 2011525043, false);
	disable_control_action(0, 527275493, false);
	disable_control_action(0, -427942313, false);
	disable_control_action(0, 1015723376, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
	func_116(0);
}

void func_27(int iParam0)
{
	func_117(iParam0);
	if (iLocal_15 == 1)
	{
		if (iLocal_31 == 0)
		{
			if (iLocal_25 == 0)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
				iLocal_25 = 1;
				iLocal_50 = get_game_timer();
			}
			else if ((get_game_timer() - iLocal_50) > 12000)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
				if (func_28(iLocal_16))
				{
					func_29(&iLocal_16, 1, 1);
				}
				iLocal_31 = 1;
			}
		}
		if (iLocal_32 == 0)
		{
			if (iLocal_31 == 1 && (get_game_timer() - iLocal_50) > 10000)
			{
				if (!func_28(iLocal_17))
				{
					iLocal_17 = func_118("BATH_CHAT", -719620017, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					iLocal_33 = 1;
					iLocal_52 = get_game_timer();
				}
				func_117(iParam0);
				iLocal_32 = 1;
			}
		}
		if (iLocal_31 == 0)
		{
			if (!func_28(iLocal_16))
			{
				iLocal_16 = func_118("BATH_NO_CHAT", -719620017, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				func_117(iParam0);
				if (func_119(iLocal_16, 1))
				{
					iLocal_15 = 0;
					func_29(&iLocal_16, 1, 1);
					if (func_28(iLocal_17))
					{
						func_29(&iLocal_17, 1, 1);
					}
					func_61(iParam0, "NO_TALK");
					bLocal_24 = true;
					iLocal_49 = get_game_timer();
				}
			}
		}
		if (iLocal_33 == 1)
		{
			func_120(iParam0);
		}
	}
	if (bLocal_24)
	{
		if ((get_game_timer() - iLocal_49) > 3500)
		{
			func_24(iParam0, "NO_TALK_RESPONSE", 0);
			bLocal_24 = false;
		}
	}
}

bool func_28(int iParam0)
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

void func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_28(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_121(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_122(iVar0);
	*iParam0 = 0;
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (func_123(iParam1))
	{
		iParam0->f_119 = iParam1;
		if (bParam2)
		{
			if (func_23(player_id(), 1, 0, 1) && iParam0->f_112 > 4)
			{
			}
			else if (!func_124(iParam0->f_119) && !func_125(iParam0->f_119))
			{
				func_126(iParam0->f_119, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_124(iParam0->f_119) && !func_125(iParam0->f_119))
		{
			func_126(iParam0->f_119, 0, 0f, 0, 0, 1f, 0, 0);
		}
	}
}

void func_31(int iParam0, bool bParam1)
{
	if (func_28(iParam0->f_24))
	{
		func_29(&(iParam0->f_24), 1, 1);
	}
	if (func_28(iParam0->f_25))
	{
		func_29(&(iParam0->f_25), 1, 1);
	}
	if (func_28(iParam0->f_26))
	{
		func_29(&(iParam0->f_26), 1, 1);
	}
	if (func_28(iParam0->f_27))
	{
		func_29(&(iParam0->f_27), 1, 1);
	}
	if (func_28(iParam0->f_29))
	{
		func_29(&(iParam0->f_29), 1, 1);
	}
	if (bParam1)
	{
		if (func_28(iParam0->f_23))
		{
			func_29(&(iParam0->f_23), 1, 1);
		}
		if (func_28(iParam0->f_28))
		{
			func_29(&(iParam0->f_28), 1, 1);
		}
	}
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return -1817923036;
		default:
			break;
	}
	return -1496612359;
}

int func_33(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!func_127(iParam0, iParam1))
	{
		return 1;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") && decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
		if (iVar0 == iParam1)
		{
			return 1;
		}
		else
		{
			func_128(iParam0);
		}
	}
	iVar1 = _request_metaped_outfit(get_entity_model(iParam0), iParam1);
	decor_set_int(iParam0, "metaped_outfit_request", iVar1);
	decor_set_int(iParam0, "metaped_outfit_request_name", iParam1);
	return 1;
}

void func_34(int iParam0, bool bParam1)
{
	if (does_blip_exist(iParam0->f_41))
	{
		if (bParam1)
		{
			_blip_set_modifier(iParam0->f_41, 724623647);
		}
		else
		{
			_set_blip_flash_style(iParam0->f_41, 724623647);
			remove_blip(&(iParam0->f_41));
		}
	}
}

void func_35(int iParam0)
{
	request_model(iParam0->f_135.f_8, false);
	request_model(iParam0->f_144.f_8, false);
	request_model(iVar309, false);
	request_model(iVar310, false);
	request_model(iVar311, false);
	request_ptfx_asset();
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1 || !func_40(uParam0))
	{
		func_129(uParam0);
	}
}

bool func_37(int iParam0, var uParam1)
{
	*uParam1 = 1;
	if (func_130(242, 1, 1))
	{
		return true;
	}
	if (Global_1395601->f_1)
	{
		return true;
	}
	if (func_131((*Global_1835011)[7]->f_1) == 3)
	{
		return false;
	}
	if (func_20(&Global_1935630, 2097152))
	{
		*uParam1 = 1;
		return true;
	}
	bVar0 = func_132();
	if (bVar0)
	{
		*uParam1 = 1;
		return true;
	}
	if (func_133(4))
	{
		if (Global_1935630->f_24)
		{
			*uParam1 = 1;
			return true;
		}
	}
	else if (is_ped_in_combat(Global_35, 0))
	{
		*uParam1 = 1;
		return true;
	}
	if (_0x7c7e4ab748ea3b07())
	{
		*uParam1 = 1;
		return true;
	}
	if (func_23(player_id(), 1, 0, 1))
	{
		*uParam1 = 1;
		return true;
	}
	if (func_134(iParam0->f_6))
	{
		*uParam1 = 1;
		return true;
	}
	if (_is_ped_carrying(Global_35))
	{
		*uParam1 = 1;
		return true;
	}
	if (_0x50f124e6ef188b22(Global_35))
	{
		if (iLocal_22 == 0)
		{
			func_70("BATH_DRUNK", 10000, 0, 0, 0, 1);
			iLocal_22 = 1;
		}
		*uParam1 = 1;
		return true;
	}
	if (is_ped_using_any_scenario(player_ped_id()))
	{
		if (func_135(player_ped_id(), 817658057) || func_135(player_ped_id(), 1231068245))
		{
			*uParam1 = 1;
			return true;
		}
	}
	return false;
}

void func_38(int iParam0, vector3 vParam1, bool bParam4)
{
	if (func_136() == -1)
	{
		if (func_77() && iParam0->f_6 == 38)
		{
			if (does_blip_exist(iParam0->f_41))
			{
				remove_blip(&(iParam0->f_41));
			}
			return;
		}
	}
	if (!does_blip_exist(iParam0->f_41))
	{
		iParam0->f_41 = _blip_add_for_coord(iParam0->f_1, vParam1);
		set_blip_sprite(iParam0->f_41, iParam0->f_2, true);
		if (bParam4)
		{
			_blip_set_modifier(iParam0->f_41, -401963276);
		}
	}
	else
	{
		_set_blip_flash_style(iParam0->f_41, 724623647);
	}
}

void func_39()
{
	_uilog_clear_cached_objective();
}

bool func_40(var uParam0)
{
	return func_137(*uParam0, 1);
}

float func_41(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_138(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_139() - uParam0->f_1);
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_43()
{
	return ((has_model_loaded(iVar310) && has_model_loaded(iVar311)) && has_model_loaded(iVar312));
}

bool func_44(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_45(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_46(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_141(iParam0);
	if (bParam3)
	{
		func_142(iParam0, sParam1, iParam2);
	}
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_136() == 0)
	{
		return 1;
	}
	if (func_143(iParam2))
	{
		func_144(iParam1, iParam2, iParam3);
	}
	func_60(iParam0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

void func_48(int iParam0)
{
	func_145(&(Global_1395601->f_3), iParam0);
}

bool func_49(int iParam0, bool bParam1)
{
	if (!request_script_audio_bank("BATHING"))
	{
		return false;
	}
	if (!_0xd9130842d7226045("BATHING_Sounds", 0))
	{
		_0xd9130842d7226045("BATHING_Sounds", 0);
		return false;
	}
	if (bParam1)
	{
		if (!has_model_loaded(iParam0->f_144.f_8))
		{
			request_model(iParam0->f_144.f_8, false);
			return false;
		}
	}
	else if (!has_model_loaded(iParam0->f_135.f_8))
	{
		request_model(iParam0->f_135.f_8, false);
		return false;
	}
	if (_0x5c16855277819bbf() > 0)
	{
		if (bParam1)
		{
			if (!does_entity_exist(iParam0->f_144))
			{
				iParam0->f_144 = func_146(iParam0->f_144.f_8, iParam0->f_144.f_1, iParam0->f_144.f_4, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0);
				return false;
			}
			if (!is_entity_dead(iParam0->f_144))
			{
				set_ped_name_debug(iParam0->f_144, "WASH_MAIDEN");
				set_blocking_of_non_temporary_events(iParam0->f_144, true);
				set_ped_can_leg_ik(iParam0->f_144, false);
				set_ped_leg_ik_mode(iParam0->f_144, 0);
			}
		}
		else
		{
			if (!does_entity_exist(iParam0->f_135))
			{
				iParam0->f_135 = func_146(iParam0->f_135.f_8, iParam0->f_135.f_1, iParam0->f_135.f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			if (!is_entity_dead(iParam0->f_135))
			{
				set_ped_name_debug(iParam0->f_135, "MAIDEN");
				set_blocking_of_non_temporary_events(iParam0->f_135, true);
			}
		}
		return true;
	}
	return false;
}

void func_50(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_147() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_148(iVar1) && !func_149(iVar1, iParam2)) && (!bParam3 || !func_150(iVar1))) && (!bParam4 || !func_151(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_51(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	return func_153(_0x4e88a65968a55c78(&Var0, iParam1));
}

bool func_52(int iParam0, int iParam1)
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
	if (func_154(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_154(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_154(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_53(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_155(iParam0, -5284486))
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
		if (func_156(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_157(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_158(iVar62, iVar61);
					if (func_159(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
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
	if (!func_156(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_54(int iParam0)
{
	iParam0->f_120[6] = start_particle_fx_looped_at_coord("scr_mg_bathing_tub_steam", iParam0->f_60, 90f, 0f, 0f, 1f, false, false, false, false);
}

void func_55(int iParam0)
{
	if (!does_entity_exist(iParam0->f_135) || is_entity_dead(iParam0->f_135))
	{
		return;
	}
	if (!func_160(iParam0->f_135.f_5))
	{
		func_161(iParam0->f_135, iParam0->f_135.f_5, 0f, 2, 1073741824);
	}
}

void func_56(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		uVar2 = func_162(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_163(1, bVar1, 1, uVar2);
		func_164(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_165(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_166();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_165(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_165(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_57(int iParam0)
{
	if (_does_anim_scene_exist(iParam0->f_69))
	{
		_delete_anim_scene(iParam0->f_69);
	}
	iLocal_301 = 0;
}

void func_58(int iParam0)
{
	if (_0x927b810e43e99932(&Local_269))
	{
		func_26();
		_0x8370d34bd2e60b73();
	}
	else if (func_115(Global_35, 76834332))
	{
		Local_269.f_16 = Global_35;
		func_26();
		set_player_cloth_pin_frames(Global_35, true);
		if (iParam0->f_15 == 1)
		{
			set_player_cloth_pin_frames(iParam0->f_144, true);
		}
		_0xb8b207c34285e978(&Local_269);
		_0xac77757c05de9e5a(&Local_269);
	}
}

bool func_59(var uParam0, char* sParam1, int iParam2, vector3 vParam3, int iParam6)
{
	if (!func_160(vParam3))
	{
		if (!func_28(*uParam0))
		{
			if (!is_string_null_or_empty(sParam1))
			{
				*uParam0 = func_167(sParam1, iParam2, vParam3, 1.6f, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_168(*uParam0, sParam1, iParam6, 1);
				func_65(*uParam0, func_169(1) > iParam6, 1);
			}
		}
		else if (func_170(*uParam0, 1))
		{
			if (bLocal_53 == 0)
			{
				iLocal_47 = get_game_timer();
				Var0 = -1;
				Var0.f_1 = 168093330;
				Var0.f_2 = -304640465;
				Var0.f_42 = -711536720;
				Var0.f_43 = -473983589;
				Var0.f_44 = -719620017;
				Var0.f_45 = 1138488863;
				Var0.f_46 = 814057702;
				Var0.f_117 = 1;
				Var0.f_120 = 9;
				func_61(&Var0, "PLAYER_REQUESTS_SPECIAL_BATH");
			}
			return true;
		}
	}
	return false;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_171(iParam1, iParam2);
	func_172(iParam1, iParam4);
	func_173(iParam1, iParam4);
	_0x2a374e6f0075ee81(func_174(iParam0), func_175(iParam1), iParam2, iParam3, iParam4);
}

void func_61(int iParam0, char* sParam1)
{
	if (func_176())
	{
		sVar0 = "JOHN_PLAYER";
		if (!is_ambient_speech_playing(Global_35))
		{
			if (are_strings_equal(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_LOW";
				func_113(Global_35, "LAUGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
			if (are_strings_equal(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				func_113(Global_35, "SIGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	else
	{
		sVar0 = "ARTHUR";
		if (!is_ambient_speech_playing(Global_35))
		{
			if (are_strings_equal(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_HIGH";
				func_113(Global_35, "LAUGH_HIGH", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
			if (are_strings_equal(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				func_113(Global_35, "SIGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	if (is_ambient_speech_playing(iParam0->f_144))
	{
	}
	else
	{
		func_113(Global_35, sParam1, 1541280898, 0, 1, sVar0, 0, 1);
	}
}

bool func_62(var uParam0, char* sParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (iVar308 == 1)
	{
		return false;
	}
	if (!func_28(*uParam0))
	{
		if (!is_string_null_or_empty(sParam1))
		{
			iVar0 = 0;
			if (bParam6)
			{
				if (!func_160(vParam3))
				{
					iVar0 = 7;
					*uParam0 = func_167(sParam1, iParam2, vParam3, 1f, 2, 1, 0, iVar0, 570, 0, 14, 2f, 0, 1704213876, 0);
				}
			}
			else if (!func_160(vParam3))
			{
				*uParam0 = func_167(sParam1, iParam2, vParam3, 1f, 2, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			if (iParam8 == 0)
			{
				if (func_28(*uParam0) && func_177(*uParam0, 0) == bParam7)
				{
					func_65(*uParam0, !bParam7, 1);
				}
			}
			if (bParam9)
			{
				func_65(*uParam0, 0, 1);
			}
		}
	}
	else if (bParam6)
	{
		if (func_178(*uParam0, 1))
		{
			return true;
		}
	}
	else if (func_170(*uParam0, 1))
	{
		return true;
	}
	return false;
}

void func_63(float fParam0)
{
	if (func_179(1) < fParam0)
	{
		func_180(1, fParam0, 0);
	}
	if (func_179(2) < fParam0)
	{
		func_180(2, fParam0, 0);
	}
	if (func_179(0) < fParam0)
	{
		func_180(0, fParam0, 0);
	}
}

bool func_64(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0->f_15)
	{
		if (is_task_move_network_ready_for_transition(Global_35))
		{
			if (are_strings_equal(get_task_move_network_state(Global_35), sParam1) == bParam2)
			{
				return true;
			}
		}
	}
	else if (are_strings_equal(&(iParam0->f_20), "TESTBLOCK"))
	{
		if (is_task_move_network_ready_for_transition(Global_35))
		{
			if (are_strings_equal(get_task_move_network_state(Global_35), sParam1) == bParam2)
			{
				return true;
			}
		}
	}
	else if (is_task_move_network_ready_for_transition(Global_35) && is_task_move_network_ready_for_transition(iLocal_64))
	{
		if (are_strings_equal(get_task_move_network_state(Global_35), sParam1) == bParam2 && are_strings_equal(get_task_move_network_state(iLocal_64), sParam1) == bParam2)
		{
			return true;
		}
	}
	return false;
}

void func_65(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (bParam1)
	{
		func_181(iParam0, 4);
		func_182(iVar0, 1);
		func_183(iVar0, 1);
	}
	else
	{
		func_184(iParam0, 4);
		func_183(iVar0, 0);
	}
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_115 = iParam1;
	if (are_strings_equal(get_task_move_network_state(Global_35), "Bathing") || are_strings_equal(get_task_move_network_state(Global_35), "Intro"))
	{
		iParam0->f_117 = 0;
		if (iParam1 == 5)
		{
			return;
		}
	}
	else if (are_strings_equal(get_task_move_network_state(Global_35), "Scrub_Idle"))
	{
		iParam0->f_113 = iParam0->f_115;
		return;
	}
	else
	{
		iParam0->f_117 = 2;
		if (iParam1 == iParam0->f_114)
		{
			return;
		}
	}
	iParam0->f_113 = 4;
}

void func_67(int iParam0, float fParam1)
{
	if (fParam1 < 1f)
	{
		fParam1 = 1f;
	}
	switch (iParam0->f_115)
	{
		case 1:
			set_particle_fx_looped_evolution(&(iParam0->f_120[0]), "scrub", fParam1, false);
			set_particle_fx_looped_evolution(&(iParam0->f_120[5]), "scrub", fParam1, false);
			break;
		case 2:
			if (iParam0->f_36 >= 1)
			{
				set_particle_fx_looped_evolution(&(iParam0->f_120[4]), "scrub", fParam1, false);
				set_particle_fx_looped_evolution(&(iParam0->f_120[2]), "scrub", fParam1, false);
			}
			else
			{
				set_particle_fx_looped_evolution(&(iParam0->f_120[1]), "scrub", fParam1, false);
				set_particle_fx_looped_evolution(&(iParam0->f_120[3]), "scrub", fParam1, false);
			}
			break;
		case 3:
			if (iParam0->f_37 >= 1)
			{
				set_particle_fx_looped_evolution(&(iParam0->f_120[7]), "scrub", fParam1, false);
			}
			else
			{
				set_particle_fx_looped_evolution(&(iParam0->f_120[8]), "scrub", fParam1, false);
			}
			break;
	}
}

int func_68(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 0;
	}
	if (func_138(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_185() - round((uParam0->f_1 * 1000f)));
}

bool func_69(int iParam0)
{
	if (func_28(iParam0->f_29))
	{
		iParam0->f_40 = func_186(iParam0->f_29, 1);
		if (iParam0->f_34)
		{
			if (iParam0->f_40 > 0.025f)
			{
				func_36(&uLocal_73, 1);
				fLocal_68 = 0f;
				iParam0->f_118 = 0;
				iParam0->f_34 = 0;
			}
		}
	}
	if (func_119(iParam0->f_29, 1))
	{
	}
	if (func_28(iParam0->f_29) && func_119(iParam0->f_29, 1))
	{
		func_67(iParam0, 1f);
		fLocal_67 = 1f;
		return true;
	}
	else
	{
		if (!func_40(&uLocal_73))
		{
			func_36(&uLocal_73, 1);
		}
		if (func_68(&uLocal_73) > 250)
		{
			switch (iParam0->f_118)
			{
				case 0:
					if (iParam0->f_39 > iParam0->f_40)
					{
						fLocal_68 = (fLocal_68 + 1f);
						fLocal_69 = 0f;
					}
					else
					{
						func_67(iParam0, fLocal_69);
						fLocal_68 = 0f;
					}
					if (fLocal_68 > 5f)
					{
						func_187(iParam0);
						iParam0->f_118 = 1;
					}
					func_36(&uLocal_73, 1);
					break;
				case 1:
					if (iParam0->f_40 < 0.1f)
					{
						func_66(iParam0, 5);
						iParam0->f_118 = 2;
					}
					if (iParam0->f_39 < iParam0->f_40)
					{
						iParam0->f_118 = 4;
					}
					break;
				case 2:
					func_31(iParam0, 1);
					iParam0->f_118 = 3;
					break;
				case 3:
					if (func_64(iParam0, "Bathing", 1))
					{
						fLocal_67 = 0f;
						func_42(&uLocal_73);
						iParam0->f_112 = 14;
						iParam0->f_34 = 1;
						iParam0->f_118 = 0;
					}
					break;
				case 4:
					fLocal_68 = 0f;
					func_36(&uLocal_73, 1);
					func_66(iParam0, iParam0->f_114);
					iParam0->f_118 = 0;
					break;
			}
			iParam0->f_39 = iParam0->f_40;
			func_67(iParam0, iParam0->f_39);
		}
	}
	return false;
}

var func_70(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_71(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_136() == 0)
	{
		func_188(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(1);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_190(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(1, func_191(fParam0, -100f, 100f), bParam1);
}

void func_72(int iParam0)
{
	if (func_136() != -1)
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

void func_73(int iParam0, bool bParam1)
{
	Var0.f_1 = 20;
	if ((func_155(iParam0, 1573112293) || func_155(iParam0, 672467738)) || func_155(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_192(iParam0) == 2085633299)
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
				fVar30 = func_193(0, Var22.f_2);
				func_194(Var22.f_2, 1);
				func_195(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_193(2, Var22.f_2);
				func_196(Var22.f_2);
				func_195(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_193(1, Var22.f_2);
				func_72(Var22.f_2);
				func_195(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar33))
				{
					func_199(fVar33, 1, bVar37, bParam1);
					func_195(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar34))
				{
					func_200(fVar34, 1, bVar37, bParam1);
					func_195(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar35))
				{
					func_71(fVar35, 1, bVar37, bParam1);
					func_195(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_201(to_float(Var22.f_3), Var22.f_4);
				func_202(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_203(to_float(Var22.f_2), 1);
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
		if (bVar42 || func_155(iParam0, -537818634))
		{
			func_80(func_79(-704089207), 1);
		}
		if (func_155(iParam0, -1457797660))
		{
			func_80(func_79(-1909697259), 1);
		}
		if (bVar40)
		{
			func_80(func_79(704570463), 1);
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

void func_74(int iParam0)
{
	if (_does_anim_scene_exist(iParam0->f_68))
	{
		_delete_anim_scene(iParam0->f_68);
	}
	iLocal_300 = 0;
}

bool func_75()
{
	return func_204(Global_35, &(Global_1946804->f_1735));
}

int func_76()
{
	func_205(131072);
	return func_97(Global_35, &(Global_1946804->f_1735));
}

bool func_77()
{
	if (func_136() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_78(bool bParam0)
{
	Global_40.f_7748.f_3 = 1;
	iVar0 = func_206();
	func_208(&iVar0, 0, 0, 0, func_207(bParam0, 5, 2), 0, 0, 0);
	if (func_209(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

struct<2> func_79(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_81(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_210(&Global_0, 8);
	}
	if (!func_211() || func_136() != -1)
	{
		return;
	}
	func_210(&Global_0, 1);
}

int func_82(int iParam0)
{
	switch (iVar297)
	{
		case 1:
			if (func_123(iParam0->f_119))
			{
				Var0 = { func_212(iParam0) };
				iParam0->f_68 = _create_anim_scene(&Var0, 0, &(iParam0->f_96), false, true);
				if (does_entity_exist(iParam0->f_135))
				{
					set_anim_scene_entity(iParam0->f_68, "FEMALE", iParam0->f_135, 0);
				}
				set_ped_can_leg_ik(Global_35, false);
				set_ped_leg_ik_mode(Global_35, 0);
				if (func_77())
				{
					set_anim_scene_entity(iParam0->f_68, "ARTHUR", Global_35, 0);
				}
				else
				{
					set_anim_scene_entity(iParam0->f_68, "john_Marston", Global_35, 0);
				}
				if (iParam0->f_6 == 115)
				{
					set_anim_scene_entity(iParam0->f_68, "Door", func_114(1682160693, 0, 0), 0);
				}
				else
				{
					set_anim_scene_entity(iParam0->f_68, "Door", func_114(iParam0->f_119, 0, 0), 0);
				}
				set_anim_scene_entity(iParam0->f_68, "BOOTS", iLocal_62, 0);
				set_anim_scene_entity(iParam0->f_68, "CLOTHES", iLocal_63, 0);
				load_anim_scene(iParam0->f_68);
				iLocal_300 = 2;
			}
			break;
		case 2:
			if (_does_anim_scene_exist(iParam0->f_68))
			{
				if (_is_anim_scene_loaded(iParam0->f_68, true, false))
				{
					_0xdf7b5144e25cd3fe(iParam0->f_68, &(iParam0->f_96));
					iLocal_300 = 3;
				}
				else if (_is_anim_scene_loading(iParam0->f_68, true))
				{
				}
			}
			break;
		case 3:
			if (_0x23e33cb9f4a3f547(iParam0->f_68, &(iParam0->f_96)))
			{
				return 3;
			}
			break;
		case 6:
			func_76();
			func_213(Global_1935630, 2);
			bLocal_81 = true;
			func_30(iParam0, iParam0->f_119, 0);
			func_25(iParam0->f_14, 1);
			clear_ped_tasks_immediately(Global_35, false, true);
			start_anim_scene(iParam0->f_68);
			_get_anim_scene_origin(iParam0->f_68, &uVar8, &uVar11, 2);
			iParam0->f_16 = 1;
			iParam0->f_134 = 0;
			iLocal_300 = 7;
			break;
		case 7:
			if (_is_anim_scene_active(iParam0->f_68))
			{
				if (!are_strings_equal(&(iParam0->f_96), "s_Regular_outro"))
				{
					func_58(iParam0);
				}
			}
			if (!iParam0->f_134)
			{
				switch (iParam0->f_6)
				{
					case 5:
						fLocal_326 = 4.96f;
						break;
					case 115:
						fLocal_326 = 4.98f;
						break;
					case 38:
						fLocal_327 = 4.98f;
						break;
					default:
						fLocal_326 = 4f;
						break;
				}
				if (has_anim_event_fired(Global_35, 613537593))
				{
					if (iParam0->f_16)
					{
						if (bLocal_60 == 0)
						{
							if (func_52(Global_35, 0))
							{
								iParam0->f_16 = 0;
								func_19(1);
								func_214(Global_35, iVar322, 1, 1, 0);
								trigger_music_event("MG_BATHING_START");
								func_215();
								set_entity_invincible(Global_35, true);
								bLocal_60 = true;
							}
						}
					}
					else
					{
						func_216(2, 64, 2, 0, 0);
						iParam0->f_134 = 1;
					}
				}
			}
			if (!_is_anim_scene_started(iParam0->f_68, false) || (_get_anim_scene_progress(iParam0->f_68) > 0.95f && _is_anim_scene_started(iParam0->f_68, false)))
			{
				iLocal_300 = 8;
			}
			break;
	}
	return iVar297;
}

int func_83(int iParam0)
{
	switch (iVar298)
	{
		case 1:
			Var0 = { func_212(iParam0) };
			iParam0->f_69 = _create_anim_scene(&Var0, 2, &(iParam0->f_104), false, true);
			set_anim_scene_entity(iParam0->f_69, "Female", iParam0->f_144, 0);
			if (func_77())
			{
				set_anim_scene_entity(iParam0->f_69, "ARTHUR", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(iParam0->f_69, "john_Marston", Global_35, 0);
			}
			set_anim_scene_entity(iParam0->f_69, "Door", func_114(iParam0->f_119, 0, 0), 0);
			load_anim_scene(iParam0->f_69);
			iLocal_301 = 2;
			break;
		case 2:
			if (_is_anim_scene_loaded(iParam0->f_69, true, false))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_69, &(iParam0->f_104));
				iLocal_301 = 3;
			}
			break;
		case 3:
			if (_0x23e33cb9f4a3f547(iParam0->f_69, &(iParam0->f_104)))
			{
				if (iParam0->f_112 < 19)
				{
					if (bLocal_53 == 0)
					{
						iLocal_48 = get_game_timer();
					}
				}
				iLocal_301 = 4;
			}
			break;
		case 4:
			if (bLocal_53 == 0)
			{
				if ((get_game_timer() - iLocal_48) > 5000)
				{
					start_anim_scene(iParam0->f_69);
					iLocal_301 = 5;
				}
			}
			else
			{
				play_sound_frontend("BATHING_DOOR_KNOCK_MASTER", 0, true, 0);
				iLocal_301 = 5;
				func_24(iParam0, "OFFER_SPECIAL_BATH", 1);
				iLocal_47 = get_game_timer();
			}
			break;
		case 6:
			if ((get_game_timer() - iLocal_47) > 3000 && !is_ambient_speech_playing(Global_35))
			{
				if (iLocal_26 == 1)
				{
					iLocal_26 = 0;
					start_anim_scene(iParam0->f_69);
				}
			}
			if ((get_game_timer() - iLocal_47) > 5000)
			{
				if (iParam0->f_112 < 19)
				{
					set_anim_scene_paused(iParam0->f_69, false);
					iLocal_329 = 0;
				}
				else
				{
					start_anim_scene(iParam0->f_69);
					iLocal_329 = 1;
				}
				iLocal_301 = 7;
			}
			break;
		case 7:
			if (iParam0->f_15)
			{
				if (iLocal_56 == 0)
				{
					if (_0x927b810e43e99932(&Local_269))
					{
						iLocal_56 = 1;
						_0x0a5a4f1979abb40e(&Local_269);
					}
				}
			}
			if (_is_anim_scene_active(iParam0->f_68))
			{
				if (!are_strings_equal(&(iParam0->f_96), "s_Regular_outro"))
				{
					func_58(iParam0);
				}
			}
			if (!_is_anim_scene_started(iParam0->f_69, false) || (_get_anim_scene_progress(iParam0->f_69) > 0.95f && _is_anim_scene_started(iParam0->f_69, false)))
			{
				iLocal_301 = 8;
			}
			if (are_strings_equal(&(iParam0->f_104), "s_deluxe_intro") && _get_anim_scene_progress(iParam0->f_69) > 0.05f)
			{
				if (does_entity_exist(iLocal_64))
				{
					delete_object(&iLocal_64);
					func_24(iParam0, "ACCEPT_SPECIAL_BATH", 0);
				}
			}
			if (are_strings_equal(&(iParam0->f_104), "s_deluxe_Outro"))
			{
				if (_get_anim_scene_progress(iParam0->f_69) > 0f && _is_anim_scene_started(iParam0->f_69, false))
				{
					if (iLocal_28 == 0)
					{
						func_61(iParam0, "END_BATH");
						iLocal_28 = 1;
						iLocal_51 = get_game_timer();
					}
					else if (iLocal_29 == 0)
					{
						if ((get_game_timer() - iLocal_51) > 4000)
						{
							iLocal_29 = 1;
						}
					}
				}
			}
			if (are_strings_equal(&(iParam0->f_104), "s_deluxe_Outro") && (_get_anim_scene_progress(iParam0->f_69) > 0.5f && _is_anim_scene_started(iParam0->f_69, false)))
			{
				if (iLocal_30 == 0)
				{
					if (!is_ambient_speech_playing(Global_35))
					{
						if (iLocal_44 > 3)
						{
							func_24(iParam0, "FAREWELL_LEVEL2", 0);
						}
						else
						{
							func_24(iParam0, "FAREWELL_LEVEL1", 0);
						}
						iLocal_30 = 1;
					}
				}
			}
			if (!bVar326)
			{
				if (_get_anim_scene_progress(iParam0->f_69) > 0.5f && _is_anim_scene_started(iParam0->f_69, false))
				{
					func_58(iParam0);
					iLocal_329 = 1;
				}
			}
			break;
	}
	return iVar298;
}

void func_84(int iParam0)
{
	if (!func_52(Global_35, 0))
	{
		return;
	}
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_float(Global_35, "scrub_freq", fLocal_69);
		set_task_move_network_signal_float(Global_35, "Cleanliness_Right_Arm", fLocal_69);
		set_task_move_network_signal_float(Global_35, "Cleanliness_Left_Arm", fLocal_69);
		set_task_move_network_signal_float(Global_35, "Cleanliness_Left_Leg", fLocal_69);
		set_task_move_network_signal_float(Global_35, "Cleanliness_Right_Leg", fLocal_69);
		set_task_move_network_signal_float(Global_35, "Cleanliness_Head", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "scrub_freq", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "Cleanliness_Right_Arm", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "Cleanliness_Left_Arm", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "Cleanliness_Left_Leg", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "Cleanliness_Right_Leg", fLocal_69);
		set_task_move_network_signal_float(iLocal_64, "Cleanliness_Head", fLocal_69);
		if (iParam0->f_15)
		{
			set_task_move_network_signal_float(iParam0->f_144, "scrub_freq", fLocal_69);
			set_task_move_network_signal_float(iParam0->f_144, "Cleanliness_Right_Arm", fLocal_69);
			set_task_move_network_signal_float(iParam0->f_144, "Cleanliness_Left_Arm", fLocal_69);
			set_task_move_network_signal_float(iParam0->f_144, "Cleanliness_Left_Leg", fLocal_69);
			set_task_move_network_signal_float(iParam0->f_144, "Cleanliness_Right_Leg", fLocal_69);
			set_task_move_network_signal_float(iParam0->f_144, "Cleanliness_Head", fLocal_69);
		}
	}
	switch (iParam0->f_113)
	{
		case 1:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = -719620017;
				if (iParam0->f_15 == 0)
				{
					request_task_move_network_state_transition(Global_35, "Scrub_Head");
					request_task_move_network_state_transition(iLocal_64, "Scrub_Head");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 1;
				iParam0->f_114 = 1;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 2:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = -473983589;
				if (iParam0->f_15)
				{
					if (iVar320 == 0 || iVar321 == 0)
					{
						if (iVar320 == 0)
						{
							request_task_move_network_state_transition(Global_35, "Scrub_Left_Arm");
							request_task_move_network_state_transition(iParam0->f_144, "Scrub_Left_Arm");
						}
						else
						{
							request_task_move_network_state_transition(Global_35, "Scrub_Right_Arm");
							request_task_move_network_state_transition(iParam0->f_144, "Scrub_Right_Arm");
						}
					}
				}
				else if (iParam0->f_36 == 0)
				{
					request_task_move_network_state_transition(Global_35, "Scrub_Right_Arm");
					request_task_move_network_state_transition(iLocal_64, "Scrub_Right_Arm");
				}
				else
				{
					request_task_move_network_state_transition(Global_35, "Scrub_Left_Arm");
					request_task_move_network_state_transition(iLocal_64, "Scrub_Left_Arm");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 2;
				iParam0->f_114 = 2;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 3:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = 1367437629;
				if (iParam0->f_15)
				{
					if (iVar318 == 0 || iVar319 == 0)
					{
						if (iVar318 == 0)
						{
							request_task_move_network_state_transition(Global_35, "Scrub_Left_Leg");
							request_task_move_network_state_transition(iParam0->f_144, "Scrub_Left_Leg");
						}
						else
						{
							request_task_move_network_state_transition(Global_35, "Scrub_Right_Leg");
							request_task_move_network_state_transition(iParam0->f_144, "Scrub_Right_Leg");
						}
					}
				}
				else if (iParam0->f_37 == 0)
				{
					request_task_move_network_state_transition(Global_35, "Scrub_Left_Leg");
					request_task_move_network_state_transition(iLocal_64, "Scrub_Left_Leg");
				}
				else
				{
					request_task_move_network_state_transition(Global_35, "Scrub_Right_Leg");
					request_task_move_network_state_transition(iLocal_64, "Scrub_Right_Leg");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 3;
				iParam0->f_114 = 3;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 4:
			if (((((((func_64(iParam0, "Scrub_Head", 1) || func_64(iParam0, "Scrub_Right_Arm", 1)) || func_64(iParam0, "Scrub_Left_Arm", 1)) || func_64(iParam0, "Scrub_Left_Leg", 1)) || func_64(iParam0, "Scrub_Right_Leg", 1)) || func_64(iParam0, "intro", 1)) || func_64(iParam0, "Bathing", 1)) || func_64(iParam0, "Scrub_Idle", 1))
			{
				request_task_move_network_state_transition(Global_35, "Scrub_Idle");
				if (iParam0->f_15)
				{
					request_task_move_network_state_transition(iParam0->f_144, "Scrub_Idle");
				}
				else
				{
					request_task_move_network_state_transition(iLocal_64, "Scrub_Idle");
				}
				iParam0->f_117 = 1;
				if (iParam0->f_18)
				{
					iParam0->f_113 = 0;
					iParam0->f_18 = 0;
				}
				else
				{
					iParam0->f_113 = iParam0->f_115;
				}
			}
			break;
		case 5:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				request_task_move_network_state_transition(Global_35, "Bathing");
				if (iParam0->f_15)
				{
					request_task_move_network_state_transition(iParam0->f_144, "Bathing");
				}
				else
				{
					request_task_move_network_state_transition(iLocal_64, "Bathing");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 5;
				iParam0->f_117 = 0;
			}
			break;
	}
}

int func_85(int iParam0)
{
	switch (iParam0->f_116)
	{
		case 0:
			break;
		case 1:
			if (iParam0->f_15)
			{
				iParam0->f_112 = 24;
				if (func_77())
				{
				}
				if (func_64(iParam0, "Bathing", 1) || func_64(iParam0, "Intro", 1))
				{
					iParam0->f_116 = 4;
				}
				else
				{
					func_31(iParam0, 1);
					iParam0->f_116 = 4;
				}
			}
			else
			{
				if (func_77())
				{
				}
				func_31(iParam0, 1);
				iParam0->f_116 = 4;
			}
			break;
		case 5:
			if ((get_game_timer() - iVar325) > 500)
			{
				iParam0->f_116 = 6;
				iLocal_328 = get_game_timer();
			}
			break;
		case 6:
			if ((get_game_timer() - iVar325) > 300)
			{
				iParam0->f_116 = 4;
			}
			break;
		case 2:
			if (func_64(iParam0, "Bathing", 1))
			{
				iParam0->f_116 = 4;
			}
			else if (func_64(iParam0, "Scrub_Idle", 1))
			{
				func_66(iParam0, 5);
				iParam0->f_116 = 3;
			}
			break;
		case 3:
			if (func_64(iParam0, "Bathing", 1))
			{
				iParam0->f_116 = 4;
			}
			break;
		case 4:
			if (iParam0->f_15)
			{
				_0x57a197ad83f66bbf(uVar300);
				remove_anim_dict(sVar305);
				remove_anim_dict(sVar307);
				remove_clip_set(sVar306);
				remove_clip_set(sVar308);
				bLocal_80 = false;
			}
			else
			{
				_0x57a197ad83f66bbf(uVar299);
				remove_anim_dict(sVar301);
				remove_anim_dict(sVar303);
				remove_clip_set(sVar302);
				remove_clip_set(sVar304);
				bLocal_79 = false;
			}
			_0x55546004a244302a(Global_35, 0);
			if (iParam0->f_15)
			{
				StringCopy(&(iParam0->f_104), "s_deluxe_Outro", 32);
				iLocal_301 = 1;
				iParam0->f_112 = 19;
			}
			else
			{
				iParam0->f_112 = 20;
			}
			set_entity_collision(Global_35, true, false);
			set_entity_dynamic(Global_35, true);
			if (iParam0->f_15)
			{
				set_entity_collision(iParam0->f_144, true, false);
				set_entity_dynamic(iParam0->f_144, true);
			}
			else
			{
				set_entity_collision(iParam0->f_135, true, false);
				set_entity_dynamic(iParam0->f_135, true);
			}
			iParam0->f_116 = 0;
			return 1;
	}
	return 0;
}

void func_86()
{
	iLocal_18 = get_random_int_in_range(1, 6);
	iLocal_21++;
}

void func_87()
{
	iLocal_19 = get_random_int_in_range(1, 6);
	if (iLocal_19 != iLocal_18)
	{
		iLocal_21++;
	}
}

void func_88()
{
	iLocal_20 = get_random_int_in_range(1, 6);
	if (iLocal_20 != iLocal_18 && iLocal_20 != iLocal_19)
	{
		iLocal_21++;
	}
}

void func_89(var uParam0)
{
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (_0x93ffd92f05ec32fd(&(uParam0->f_135[iVar0])))
		{
			_0x13e7320c762f0477(&(uParam0->f_135[iVar0]));
		}
		uParam0->f_135[iVar0]->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1.f_1[iVar0] = { vVar1 };
		iVar0++;
	}
	func_90(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_90(var uParam0)
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

void func_91(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_218(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_218(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_218(iParam0, 1)])->f_10 && iParam1));
}

int func_93(int iParam0)
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

int func_94()
{
	return Global_1946804->f_1;
}

bool func_95(int iParam0, int iParam1)
{
	iVar0 = func_219(iParam1);
	func_220(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

bool func_96(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_97(int iParam0, var uParam1)
{
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!func_96(uParam1, 2))
	{
		iVar1 = _get_metaped_type(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134] = _0xf6d9e1f3560cbf8e(iVar1, &(uParam1->f_1.f_1[iVar0]), 0, 0, 0);
				uParam1->f_135[uParam1->f_134]->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_100(uParam1, 2);
	}
	return func_204(iParam0, uParam1);
}

void func_98(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_99(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_221(uParam0, iParam3, iParam2) && !func_222(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_9(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_223(1108822547);
		}
		else
		{
			func_224(1108822547);
		}
	}
	func_225(uParam0, 0, 0);
	func_226(iParam5);
	return true;
}

void func_100(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_101(int iParam0)
{
	return iParam0 != 0;
}

void func_102(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	func_205(32768);
	func_224(1108822547);
	Global_1946804->f_2776 = *uParam0;
	Global_1946804->f_2776.f_1 = uParam0->f_1;
	Global_1946804->f_2776.f_8 = uParam0->f_8;
	Global_1946804->f_2776.f_2 = uParam0->f_2;
	Global_1946804->f_2776.f_3[0] = &uParam0->f_3[0];
	Global_1946804->f_2776.f_3[1] = &uParam0->f_3[1];
	Global_1946804->f_2776.f_3[2] = &uParam0->f_3[2];
	Global_1946804->f_2776.f_3[3] = &uParam0->f_3[3];
	Global_1946804->f_2776.f_9 = uParam0->f_9;
	Global_1946804->f_2776.f_10 = uParam0->f_10;
	Global_1946804->f_2776.f_11 = uParam0->f_11;
	Global_1946804->f_2776.f_12 = 1;
	Global_1946804->f_2776.f_13 = _0x3fcbb5fcfd968698(Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), 0);
}

int func_103(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_204(iParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_227(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_228(Global_40.f_7729, 4096);
	func_229(&Global_1905941, 4096);
	Global_40.f_7729 = &Global_1905941;
	func_230(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_231(uParam1->f_1);
	}
	func_232(&(Global_1946804->f_1497), iVar4, 0);
	func_233(iVar3, iParam0, bVar0, 1, bVar1, 0);
	func_234(iParam0);
	if (bParam2)
	{
		func_89(uParam1);
	}
	if (bParam3)
	{
		func_235();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_236(0);
		}
		else
		{
			func_236(2048);
		}
	}
	return 1;
}

void func_104(int iParam0)
{
	iParam0->f_7 = { 2638.085f, -1222.06f, 52.3805f };
	iParam0->f_10 = { 2629.204f, -1222.544f, 58.79413f };
	iParam0->f_57 = { 2629.204f, -1222.544f, 58.79413f };
	iParam0->f_60 = { 2629.4f, -1223.33f, 58.57f };
	iParam0->f_63 = -92.66f;
	iParam0->f_64 = { 2632.809f, -1224.521f, 58.6209f };
	iParam0->f_67 = 215.0591f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(2637.958f, -1222.703f, 53.34919f, 0f, 0f, 0f, 1.320784f, 1.459122f, 2.322307f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(2632.001f, -1223.841f, 59.99991f, 0f, 0f, 0f, 1.308545f, 1.290041f, 1.933383f);
	}
	func_30(iParam0, 779421929, 1);
	iParam0->f_135.f_8 = 1820607364;
	iParam0->f_135.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	iParam0->f_135.f_4 = 180.3602f;
	iParam0->f_135.f_5 = { 2633.394f, -1220.905f, 58.6208f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	iParam0->f_144.f_4 = 180.3602f;
}

void func_105(int iParam0)
{
	iParam0->f_7 = { -325.5526f, 772.9926f, 116.4359f };
	iParam0->f_10 = { -317.4529f, 761.7874f, 116.9925f };
	iParam0->f_57 = { -316.5032f, 761.952f, 117.0856f };
	iParam0->f_60 = { -317.37f, 761.8f, 116.44f };
	iParam0->f_63 = 10.365f;
	iParam0->f_64 = { -320.7008f, 762.7983f, 116.4364f };
	iParam0->f_67 = 27.6598f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(-324.5964f, 774.3613f, 117.5638f, 0f, 0f, 10.75094f, 1.171861f, 1.219162f, 2.336554f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(-319.7882f, 762.5787f, 117.8969f, 0f, 0f, 10.09051f, 3.165397f, 3.414144f, 3.011062f);
	}
	func_30(iParam0, 142240370, 1);
	iParam0->f_135.f_8 = -1909449322;
	iParam0->f_135.f_1 = { -315.477f, 762.7188f, 116.4363f };
	iParam0->f_135.f_4 = 111.4254f;
	iParam0->f_135.f_5 = { -320.5179f, 760.3262f, 116.4364f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { -315.7786f, 763.2852f, 116.4364f };
	iParam0->f_144.f_4 = 151.0521f;
}

void func_106(int iParam0)
{
	iParam0->f_7 = { 2946.603f, 1318.259f, 45.14628f };
	iParam0->f_10 = { 2952.645f, 1334.748f, 43.49384f };
	iParam0->f_57 = { 2952.839f, 1335.296f, 43.84431f };
	iParam0->f_60 = { 2952.65f, 1334.7f, 43.44f };
	iParam0->f_63 = -291.27f;
	iParam0->f_64 = { 2949.637f, 1332.16f, 43.4443f };
	iParam0->f_67 = 73.8945f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(2946.439f, 1318.296f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 2.783344f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(2950.575f, 1332.514f, 44.5119f, 0f, 0f, -14.29171f, 1.4f, 1.4f, 2.139112f);
	}
	func_30(iParam0, -201071322, 1);
	iParam0->f_135.f_8 = 1778509231;
	iParam0->f_135.f_1 = { 2955.49f, 1331.573f, 43.1568f };
	iParam0->f_135.f_4 = 185.3309f;
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { 2952.311f, 1331.225f, 43.4465f };
	iParam0->f_144.f_4 = 185.3309f;
}

void func_107(int iParam0)
{
	iParam0->f_7 = { -1817.711f, -370.8427f, 162.2963f };
	iParam0->f_10 = { -1812.751f, -373.2948f, 166.5692f };
	iParam0->f_57 = { -1812.181f, -372.9395f, 166.7563f };
	iParam0->f_60 = { -1812.83f, -373.23f, 165.5f };
	iParam0->f_63 = 1.206f;
	iParam0->f_64 = { -1817.074f, -372.382f, 165.4968f };
	iParam0->f_67 = 93.9386f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(-1817.337f, -370.7124f, 163.2669f, 0f, 0f, 0f, 2.228559f, 1.483667f, 2.042569f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(-1816.114f, -372.4831f, 166.5074f, 0f, 0f, 0f, 1f, 1.311546f, 2.179981f);
	}
	func_30(iParam0, 1256786197, 1);
	iParam0->f_135.f_8 = -1384606398;
	iParam0->f_135.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	iParam0->f_135.f_4 = 127.2134f;
	iParam0->f_135.f_5 = { -1820.372f, -371.0017f, 165.5055f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	iParam0->f_144.f_4 = 127.2134f;
}

void func_108(int iParam0)
{
	iParam0->f_7 = { -819.2906f, -1316.014f, 42.679f };
	iParam0->f_10 = { -823.8372f, -1318.777f, 42.72203f };
	iParam0->f_57 = { -824.5693f, -1318.995f, 43.08209f };
	iParam0->f_60 = { -823.86f, -1318.84f, 42.68f };
	iParam0->f_63 = -0.459f;
	iParam0->f_64 = { -821.5787f, -1315.662f, 42.6789f };
	iParam0->f_67 = 273.46f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(-819.4305f, -1316.255f, 43.76577f, 0f, 0f, 0f, 2.259355f, 1.861202f, 2.249466f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(-822.7465f, -1316.428f, 43.76577f, 0f, 0f, 0f, 1.756558f, 1.861202f, 2.249466f);
	}
	func_30(iParam0, 1523300673, 1);
	if (!func_124(815031507))
	{
		func_126(815031507, 1, 0f, 0, 0, 1f, 0, 0);
	}
	iParam0->f_135.f_8 = 1759076651;
	iParam0->f_135.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	iParam0->f_135.f_4 = 7.8035f;
	iParam0->f_135.f_5 = { -822.2996f, -1322.037f, 42.6789f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	iParam0->f_144.f_4 = 7.8035f;
}

void func_109(int iParam0)
{
	iParam0->f_7 = { 2982.66f, 570.2827f, 45.2343f };
	iParam0->f_10 = { 2987.552f, 573.1801f, 47.9211f };
	iParam0->f_57 = { 2987.469f, 573.6002f, 47.37005f };
	iParam0->f_60 = { 2987.62f, 573.21f, 46.86f };
	iParam0->f_63 = 83.841f;
	iParam0->f_64 = { 2985.658f, 568.1716f, 46.8491f };
	iParam0->f_67 = 87.0336f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(2982.743f, 570.4231f, 45.01115f, 0f, 0f, -8.056151f, 1.313431f, 1.930706f, 2.590498f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(2986.364f, 568.9269f, 48.00531f, 0f, 0f, -10.72722f, 1.419141f, 1.607003f, 2.485681f);
	}
	func_30(iParam0, 1102743282, 1);
	iParam0->f_135.f_8 = -1213601266;
	iParam0->f_135.f_1 = { 2981.157f, 571.4192f, 46.7198f };
	iParam0->f_135.f_4 = 79.3133f;
	iParam0->f_135.f_5 = { 2982.519f, 567.5594f, 46.84f };
	iParam0->f_144.f_8 = 913841068;
	iParam0->f_144.f_1 = { 2984.119f, 567.6183f, 46.8427f };
	iParam0->f_144.f_4 = 79.3133f;
}

void func_110(int iParam0)
{
	iParam0->f_7 = { 1341.261f, -1376.511f, 79.4836f };
	iParam0->f_10 = { 1337.061f, -1378.161f, 84.3447f };
	iParam0->f_57 = { 1337.098f, -1377.724f, 83.76834f };
	iParam0->f_60 = { 1336.85f, -1378.04f, 83.2897f };
	iParam0->f_63 = 166.469f;
	iParam0->f_64 = { 1339.949f, -1378.94f, 83.2813f };
	iParam0->f_67 = 348.7319f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(1341.261f, -1376.511f, 80.12514f, 0f, 0f, 44.7794f, 1.630602f, 1.866527f, 2.368827f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(1339.067f, -1379.314f, 84.4303f, 0f, 0f, -10.995f, 2.231479f, 2.405224f, 2.365758f);
	}
	func_30(iParam0, -1847993131, 1);
	iParam0->f_135.f_8 = 1988888198;
	iParam0->f_135.f_1 = { 1331.792f, -1372.289f, 83.2976f };
	iParam0->f_135.f_4 = 236.4728f;
	iParam0->f_135.f_5 = { 1341.114f, -1376.192f, 83.2813f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { 1336.905f, -1372.9f, 83.2893f };
	iParam0->f_144.f_4 = 236.4728f;
}

void func_111(int iParam0)
{
	iParam0->f_7 = { -5508.501f, -2963.09f, -1.6307f };
	iParam0->f_10 = { -5513.75f, -2972.575f, -1.72857f };
	iParam0->f_57 = { -5512.97f, -2972.266f, -1.35402f };
	iParam0->f_60 = { -5513.76f, -2972.3f, -1.78f };
	iParam0->f_63 = 15f;
	iParam0->f_64 = { -5520.461f, -2973.847f, -1.7623f };
	iParam0->f_67 = 86.7615f;
	if (!_does_volume_exist(iParam0->f_13))
	{
		iParam0->f_13 = _create_volume_box(-5508.227f, -2963.033f, -1.169532f, 0f, 0f, 14.7478f, 1.694336f, 1.81908f, 2.241587f);
	}
	if (!_does_volume_exist(iParam0->f_14))
	{
		iParam0->f_14 = _create_volume_box(-5518.046f, -2973.222f, -1.7817f, 0f, 0f, 106.1408f, 1.643605f, 1.522556f, 2.447214f);
	}
	func_30(iParam0, 1682160693, 1);
	func_30(iParam0, 1423877126, 0);
	iParam0->f_135.f_8 = 208558043;
	iParam0->f_135.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	iParam0->f_135.f_4 = 171.2193f;
	iParam0->f_135.f_5 = { -5516.737f, -2970.222f, -1.7763f };
	iParam0->f_144.f_8 = -761325639;
	iParam0->f_144.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	iParam0->f_144.f_4 = 171.2193f;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
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

bool func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_237(iParam0, &Var0);
}

int func_114(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_238(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!is_entity_an_object(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

bool func_115(int iParam0, int iParam1)
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

void func_116(bool bParam0)
{
	if (bParam0)
	{
		func_239(4);
	}
	func_239(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_117(int iParam0)
{
	if ((((is_ambient_speech_playing(iParam0->f_144) || is_ambient_speech_playing(Global_35)) || bLocal_24) || bLocal_34) || iLocal_77 == 1)
	{
		if (func_28(iLocal_17))
		{
			func_65(iLocal_17, 0, 1);
		}
		if (func_28(iLocal_16))
		{
			func_65(iLocal_16, 0, 1);
		}
	}
	else
	{
		if (func_28(iLocal_17))
		{
			func_65(iLocal_17, 1, 1);
		}
		if (func_28(iLocal_16))
		{
			func_65(iLocal_16, 1, 1);
		}
	}
	if (iLocal_44 > 7)
	{
		if (func_28(iLocal_17))
		{
			func_29(&iLocal_17, 1, 1);
		}
	}
}

int func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
		if (func_240(iVar0, 2))
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
		func_241(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, bParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_119(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_120(int iParam0)
{
	if (bLocal_34 == 0)
	{
		if ((get_game_timer() - iLocal_52) > 18000)
		{
			if (iLocal_44 > 3)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL2", 0);
			}
			else
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
			}
			iLocal_52 = get_game_timer();
		}
		if (func_170(iLocal_17, 1))
		{
			func_242();
			bLocal_34 = true;
			iLocal_35 = 0;
			func_61(iParam0, &cLocal_36);
			iLocal_52 = get_game_timer();
		}
	}
	else if (iLocal_35 == 0)
	{
		if ((get_game_timer() - iLocal_52) > 4000 && !is_ambient_speech_playing(Global_35))
		{
			func_24(iParam0, &cLocal_40, 0);
			iLocal_52 = get_game_timer();
			iLocal_35 = 1;
			iLocal_44++;
		}
	}
	else if ((get_game_timer() - iLocal_52) > 3500)
	{
		bLocal_34 = false;
		iLocal_35 = 0;
		func_61(iParam0, "SIGH");
	}
}

int func_121(int iParam0)
{
	return iParam0;
}

void func_122(int iParam0)
{
	if (!func_243(iParam0))
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

bool func_123(int iParam0)
{
	return iParam0 != 0;
}

bool func_124(int iParam0)
{
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

int func_125(int iParam0)
{
	return func_246(iParam0, 23);
}

void func_126(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_247(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_248(iParam0, 1);
			}
			else
			{
				func_249(iParam0, 1);
			}
		}
		else
		{
			func_250(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_251())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_127(int iParam0, int iParam1)
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

void func_128(int iParam0)
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

void func_129(var uParam0)
{
	func_252(uParam0, 0f);
}

bool func_130(int iParam0, bool bParam1, bool bParam2)
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
		if (func_253())
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
		iVar0 = func_254(&(Global_1898164->f_1[0]));
		if (func_255(iVar0) && func_256((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_257(&(Global_1898164->f_1[0])))
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

int func_131(int iParam0)
{
	if (!func_257(iParam0))
	{
		return -1;
	}
	return func_258(iParam0);
}

int func_132()
{
	if (func_259(31))
	{
		return 1;
	}
	return 0;
}

bool func_133(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_134(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return func_261(iParam0, 33554432);
}

bool func_135(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

int func_136()
{
	return Global_1572887->f_12;
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_138(var uParam0)
{
	return func_137(*uParam0, 2);
}

float func_139()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_141(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_169(1) < iParam0)
	{
		iParam0 = func_169(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_79(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_142(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_262(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_143(int iParam0)
{
	return func_192(iParam0) == -1784221369;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	if (func_136() == 0)
	{
		return 1;
	}
	func_263(&(Global_20710.f_1126), iParam1, iParam0, iParam2);
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_265(&(Global_20710[iVar0]->f_2), iParam1, iParam0, iParam2);
	return 1;
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_146(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_266(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_147()
{
	return Global_1310750->f_16037;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_150(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_267(64) && func_268(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_151(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_152(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_148(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_269(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

bool func_153(int iParam0)
{
	iVar0 = 6;
	if (func_101(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

bool func_154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_155(int iParam0, int iParam1)
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

bool func_156(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_159(iParam0, 0))
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
		func_270(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0, int iParam1)
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

bool func_159(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_160(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_161(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_271(Global_35) && is_player_teleport_active())
	{
	}
	if (func_272(iParam0))
	{
		if (func_273(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_154(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_161(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_161(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_154(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_154(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_154(iParam5, 129))
	{
		if (func_154(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_154(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_154(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_272(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_154(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_154(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

char* func_162(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_163(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_164(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_274(0, 1, bParam0, bParam1);
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

int func_165(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_166()
{
	func_275();
	func_276();
	func_277();
}

int func_167(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_160(vParam2))
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
		if (func_240(iVar0, 2))
		{
			if (func_278(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_241(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_168(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_169(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_170(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_171(int iParam0, int iParam1)
{
	if (func_136() == 0)
	{
		return 1;
	}
	if (!func_159(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0] = iParam1;
	return 1;
}

int func_172(int iParam0, int iParam1)
{
	if (func_136() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_80(func_79(19354810), iParam1);
	Global_20710[iVar0]->f_43 = (Global_20710[iVar0]->f_43 + iParam1);
	return 1;
}

int func_173(int iParam0, int iParam1)
{
	if (func_136() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0]->f_44 = (Global_20710[iVar0]->f_44 + iParam1);
	return 1;
}

int func_174(int iParam0)
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

int func_175(int iParam0)
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

bool func_176()
{
	if (func_136() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	return !func_240(iParam0, 4);
}

bool func_178(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return _0xb0e8599243b3f568((*Global_1945938)[iVar0]->f_3);
}

float func_179(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_180(int iParam0, float fParam1, bool bParam2)
{
	if (func_136() != -1)
	{
		return;
	}
	if (!func_279(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_165(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_280(iParam0), iVar0);
	func_282(func_281(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_283(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_284(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_284(func_285(iParam0), 1);
	}
	sVar1 = func_286(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_182(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_240(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_183(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_184(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_185()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

float func_186(int iParam0, bool bParam1)
{
	if (bParam1 && !func_28(iParam0))
	{
		return 0f;
	}
	iVar0 = func_121(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

void func_187(int iParam0)
{
	iParam0->f_113 = 4;
	iParam0->f_18 = 1;
}

void func_188(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_190(iParam0, fParam1, 1);
	}
	func_288(iParam0, (func_287(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_189(float fParam0)
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

float func_190(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_206();
	func_289(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_290(iParam0, 2);
	if (func_209(iVar0, func_291(iParam0, 2), 1))
	{
		func_292(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_284(88, bParam2);
		return 0f;
	}
	func_293(iParam0, func_206(), 2);
	func_292(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_191(float fParam0, float fParam1, float fParam2)
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

int func_192(int iParam0)
{
	if (!func_159(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_193(int iParam0, int iParam1)
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

void func_194(int iParam0, bool bParam1)
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

void func_195(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_196(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

float func_197(int iParam0, float fParam1)
{
	return func_294(to_float(iParam0), fParam1);
}

bool func_198(var uParam0, var uParam1, float fParam2)
{
	if (func_136() != -1)
	{
		return true;
	}
	if (!func_295(0))
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
		func_113(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
			func_284(0, 1);
			Global_1347477->f_191.f_2 = (get_game_timer() + 480000);
		}
		func_113(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477->f_191 = (get_game_timer() + 480000);
	*uParam1 = 0;
	return true;
}

void func_199(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_136() == 0)
	{
		func_188(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(0);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_296();
	}
	if (bParam2)
	{
		fParam0 = func_190(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(0, func_191(fParam0, -100f, 100f), bParam1);
}

void func_200(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_136() == 0)
	{
		func_188(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(2);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_190(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(2, func_191(fParam0, -100f, 100f), bParam1);
}

float func_201(float fParam0, int iParam1)
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

void func_202(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_297(iParam0))
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
			sVar1 = func_298(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_299(-1);
			func_300(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_298(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_301(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_298(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_302(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_303(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_303(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_303(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_203(float fParam0, bool bParam1)
{
	fVar0 = func_304(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_279(17))
	{
		return;
	}
	if (func_305())
	{
		iVar1 = func_306(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_306(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_206();
			func_208(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_307(&fVar3, &fVar4);
		func_56(13, func_191(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_284(94, 0);
		}
	}
}

bool func_204(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!_0xb0b2c6d170b0e8e5(&(uParam1->f_135[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return _0xa0bc8faed8cfeb3c(iParam0);
}

void func_205(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

int func_206()
{
	return &Global_1899515;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_308(*iParam0);
	iVar1 = func_309(*iParam0);
	iVar2 = func_310(*iParam0);
	iVar3 = func_311(*iParam0);
	iVar4 = func_312(*iParam0);
	iVar5 = func_313(*iParam0);
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
	iVar6 = func_314(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_314(iVar1, iVar0);
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
	func_315(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_209(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_316(iParam1) || !func_316(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_210(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_211()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

struct<8> func_212(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 5:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_ST_DENIS");
		case 76:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_VALENTINE");
		case 78:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_ANNESBURG");
		case 26:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_STRAWBERRY");
		case 38:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_BLACKWATER");
		case 92:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_VANHORN");
		case 105:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_RHODES");
		case 115:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_TUMBLEWEED");
	}
	return func_317("");
}

void func_213(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_214(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_93(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_318(iParam1);
	}
	if ((bParam3 && func_319(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_95(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_228(Global_40.f_7729, 4096);
		func_229(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_320(iParam0);
	}
	func_235();
	if (!func_321(iParam1))
	{
		func_233(iVar0, iParam0, func_322(iParam1), 1, 0, 1);
	}
	func_234(iParam0);
	return 1;
}

void func_215()
{
	bLocal_53 = false;
	if (func_2() == 92 && &Global_1357513 == 0)
	{
		Global_1357513 = &Global_1357513 + 1;
		bLocal_53 = true;
	}
	else
	{
		if (func_176())
		{
			if (&Global_1357512 == 0)
			{
				Global_1357512 = &Global_1357512 + 1;
				bLocal_53 = true;
			}
			else
			{
				Global_1357512 = &Global_1357512 + 1;
				bLocal_53 = false;
			}
		}
		if (func_77())
		{
			if (&Global_1357511 == 0)
			{
				Global_1357511 = &Global_1357511 + 1;
				bLocal_53 = true;
			}
			else
			{
				Global_1357511 = &Global_1357511 + 1;
				bLocal_53 = false;
			}
		}
	}
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_205(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_323(Var0);
}

void func_217(int iParam0)
{
	if (iParam0->f_15 == 0)
	{
		switch (iParam0->f_115)
		{
			case 1:
				if (!does_particle_fx_looped_exist(&(iParam0->f_120[0])))
				{
					iParam0->f_120[0] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_head", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 21030, 0.4f, false, false, false);
				}
				if (!does_particle_fx_looped_exist(&(iParam0->f_120[5])))
				{
					iParam0->f_120[5] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_torso", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 14412, 0.4f, false, false, false);
				}
				break;
			case 2:
				if (iParam0->f_36 >= 1)
				{
					if (!does_particle_fx_looped_exist(&(iParam0->f_120[4])))
					{
						iParam0->f_120[4] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 53675, 0.5f, false, false, false);
					}
					if (!does_particle_fx_looped_exist(&(iParam0->f_120[2])))
					{
						iParam0->f_120[2] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 37873, 0.6f, false, false, false);
					}
				}
				else
				{
					if (!does_particle_fx_looped_exist(&(iParam0->f_120[1])))
					{
						iParam0->f_120[1] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 46065, 0.6f, false, false, false);
					}
					if (!does_particle_fx_looped_exist(&(iParam0->f_120[3])))
					{
						iParam0->f_120[3] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 54187, 0.5f, false, false, false);
					}
				}
				break;
			case 3:
				if (iParam0->f_37 >= 1)
				{
					if (!does_particle_fx_looped_exist(&(iParam0->f_120[7])))
					{
						iParam0->f_120[7] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 6884, 1.5f, false, false, false);
					}
				}
				else if (!does_particle_fx_looped_exist(&(iParam0->f_120[8])))
				{
					iParam0->f_120[8] = start_particle_fx_looped_on_ped_bone("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 65478, 1.5f, false, false, false);
				}
				break;
		}
	}
}

int func_218(int iParam0, int iParam1)
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

int func_219(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_94();
	}
	if (func_136() == -1)
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

void func_220(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_221(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_318(iParam1) != iParam2)
	{
		return false;
	}
	if (func_324(2, iParam1))
	{
		func_325(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_222(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_219(iParam6);
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
		func_232(uParam0, func_326(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_218(iVar3, 1);
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
							if (func_327(iVar3) && func_328(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_329(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_223(int iParam0)
{
	func_92(iParam0, 8, 6);
}

void func_224(int iParam0)
{
	func_330(iParam0, 8, 6);
}

void func_225(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_136() != -1;
	iVar7 = func_331(0);
	if (func_9(32768))
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
			iVar5 = func_332(iVar0, 1);
			if (func_333(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_333(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_334(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_335(uParam0);
				if (iVar3 > 0)
				{
					if (!func_9(524288))
					{
						func_205(524288);
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
							iVar5 = func_332(iVar0, 1);
							if (func_333(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_333(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_334(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_336(iVar0, iParam2);
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
					func_91(524288);
				}
			}
		}
	}
}

void func_226(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_227(int iParam0)
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

void func_228(int iParam0, int iParam1)
{
	if (!func_337(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_229(int iParam0, int iParam1)
{
	if (!func_337(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_230(var uParam0)
{
	Global_1946804->f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

int func_231(int iParam0)
{
	iVar1 = func_219(0);
	func_220(&(Global_1946804->f_964), iVar1, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		return -1;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &(Global_1946804->f_964), 2049745650))
	{
		return -1;
	}
	return func_326(iVar0);
}

void func_232(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_338(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_332(iVar0, 1);
			if (func_339(iVar0, iParam1))
			{
				vVar4 = { func_340(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_333(iVar7, 4))
				{
					func_92(iVar7, 4, 6);
				}
			}
			else
			{
				func_330(iVar7, 4, 6);
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

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_227(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_136() != -1)
	{
		return;
	}
	func_341();
	if (bParam5)
	{
		if (!func_99(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_9(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_11();
	}
	func_342(iVar3, 1, 1, 1, 1, 1);
	func_216(31, 0, 0, 0, 0);
	func_236(0);
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
			func_216(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_216(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_343(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_234(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

void func_235()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_9(1))
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
	task_play_anim(Global_35, func_344(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_91(1);
	remove_anim_dict(func_344());
}

void func_236(int iParam0)
{
	if (func_345(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_346(Var0);
}

bool func_237(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_238(int iParam0, int iParam1)
{
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_239(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_240(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_241(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_182(iParam0, 1);
	func_183(iParam0, 1);
	func_184(iParam0, 128);
}

void func_242()
{
	switch (iLocal_44)
	{
		case 1:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 2:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 3:
			sLocal_45 = func_347(iLocal_20);
			break;
		case 4:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 5:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 6:
			sLocal_45 = func_347(iLocal_20);
			break;
	}
	if (iLocal_44 < 7)
	{
		StringCopy(&cLocal_36, "SMALLTALK_", 32);
		StringConCat(&cLocal_36, sLocal_45, 32);
		StringCopy(&cLocal_40, "SMALLTALK_RESPONSE_", 32);
		StringConCat(&cLocal_40, sLocal_45, 32);
	}
	else
	{
		StringCopy(&cLocal_36, "CONVO_END", 32);
		StringCopy(&cLocal_40, "CONVO_END_RESPONSE", 32);
	}
}

bool func_243(int iParam0)
{
	return func_240(iParam0, 2);
}

int func_244(int iParam0, bool bParam1, bool bParam2)
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

bool func_245(int iParam0)
{
	if (func_123(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_246(int iParam0, int iParam1)
{
	if (func_136() == 0)
	{
		return 0;
	}
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, 0);
		if (iVar0 != 0)
		{
			return _0x0943113e02322164(get_object_index_from_entity_index(iVar0), iParam1);
		}
	}
	return 0;
}

void func_247(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_245(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_248(int iParam0, bool bParam1)
{
	if (func_245(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_249(int iParam0, bool bParam1)
{
	if (func_245(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_250(int iParam0, bool bParam1)
{
	if (func_245(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_251()
{
	return true;
}

void func_252(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_139() - fParam1);
	func_348(uParam0, 1);
	func_349(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_253()
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

int func_254(int iParam0)
{
	if (!func_257(iParam0))
	{
		return -1;
	}
	return func_351(func_350(iParam0));
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_257(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_258(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_352(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_259(int iParam0)
{
	return (Global_1359489->f_18 && iParam0) != 0;
}

bool func_260(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_261(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

var func_262(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_353(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = func_354(uParam0, iParam1, iParam2);
	if (iVar0 != -1)
	{
		(*uParam0)[iVar0]->f_2 = ((*uParam0)[iVar0]->f_2 + iParam3);
		(*uParam0)[iVar0]->f_1 = func_206();
		func_208(&((*uParam0)[iVar0]->f_1), 0, 0, 5, 0, 0, 0, 0);
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		if (uParam0[iVar2] == 0)
		{
			(*uParam0)[iVar2] = iParam1;
			(*uParam0)[iVar2]->f_2 = iParam3;
			(*uParam0)[iVar2]->f_1 = func_206();
			func_208(&((*uParam0)[iVar2]->f_1), 0, 0, 5, 0, 0, 0, 0);
			(*uParam0)[iVar2]->f_3 = iParam2;
			return;
		}
		if (func_209((*uParam0)[iVar1]->f_1, (*uParam0)[iVar2]->f_1, 1))
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	(*uParam0)[iVar1] = iParam1;
	(*uParam0)[iVar1]->f_2 = iParam3;
	(*uParam0)[iVar1]->f_1 = func_206();
	func_208(&((*uParam0)[iVar1]->f_1), 0, 0, 5, 0, 0, 0, 0);
	(*uParam0)[iVar1]->f_3 = iParam2;
}

int func_264(int iParam0)
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

void func_265(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = func_354(uParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (*uParam0)[iVar0]->f_2;
	if (iParam3 == -1 || iParam3 >= iVar1)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_1 = -15;
		(*uParam0)[iVar0]->f_3 = -1;
	}
	else
	{
		(*uParam0)[iVar0]->f_2 = ((*uParam0)[iVar0]->f_2 - iParam3);
	}
}

void func_266(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_355(iParam1))
		{
			func_356(iParam0, 41788943);
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
			func_357(iParam0, 0, 1);
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
			func_358(iParam0, 0);
			bVar0 = true;
		}
		func_359(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_267(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_268(int iParam0)
{
	return func_149(iParam0, Global_1310750->f_16072 | 64);
}

void func_269(int iParam0)
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

void func_270(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_271(var uParam0)
{
	return uParam0;
}

bool func_272(int iParam0)
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

bool func_273(int iParam0)
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

char* func_274(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_162(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_162(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_275()
{
	if (func_360())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_179(2);
	}
	if (Global_1347477->f_119)
	{
		return func_179(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(3, round((to_float(iVar8) * fVar10)), 0);
	func_367(3, fVar9, fVar9 > 100f);
	return func_191(fVar7, -100f, 100f);
}

float func_276()
{
	if (func_360())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_179(1);
	}
	if (Global_1347477->f_119)
	{
		return func_179(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(2, round((to_float(iVar8) * fVar10)), 0);
	func_367(2, fVar9, fVar9 > 100f);
	return func_191(fVar7, -100f, 100f);
}

float func_277()
{
	if (func_360())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_179(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_368())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_369())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_179(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(1, round((to_float(iVar8) * fVar10)), 0);
	func_367(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_179(0);
	}
	return func_191(fVar7, -100f, 100f);
}

bool func_278(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_279(int iParam0)
{
	if (!func_370(iParam0))
	{
		return false;
	}
	return func_371(iParam0);
}

int func_280(int iParam0)
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

int func_281(int iParam0)
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

void func_282(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_274(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_283(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_284(int iParam0, bool bParam1)
{
	func_372(iParam0, &iVar0, &iVar1);
	if (!func_373(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_374(iVar0, iVar1);
}

int func_285(int iParam0)
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

char* func_286(int iParam0)
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

float func_287(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

int func_288(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_375();
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
		func_376(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_377(iVar0, iParam0, fParam1);
	func_378(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_280(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_308(*iParam0);
	iVar1 = func_309(*iParam0);
	iVar2 = func_310(*iParam0);
	iVar3 = func_311(*iParam0);
	iVar4 = func_312(*iParam0);
	iVar5 = func_313(*iParam0);
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
		iVar7 = func_314(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_315(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_290(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

int func_291(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

void func_292(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_293(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

float func_294(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_295(int iParam0)
{
	if (func_176())
	{
		return 0;
	}
	return func_379((*Global_1347702)[58]->f_15, 1);
}

void func_296()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

bool func_297(int iParam0)
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

char* func_298(int iParam0)
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

void func_299(int iParam0)
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
	iVar1 = func_380(2);
	func_381(to_float((iParam0 * iVar1)), 0);
}

void func_300(bool bParam0)
{
	if (func_136() != -1)
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
		func_284(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_284(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_382(1, bParam0, 1);
	func_166();
	Global_40.f_11095.f_43 = bParam0;
}

void func_301(int iParam0)
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
	iVar1 = func_383(2);
	func_384(to_float((iParam0 * iVar1)));
}

void func_302(int iParam0)
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
	iVar1 = func_385(2);
	func_386(to_float((iParam0 * iVar1)), 0);
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	func_288(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_304(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

bool func_305()
{
	if (func_136() != -1)
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
	return func_387(Global_1347477->f_195, 0);
}

int func_306(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_307(float fParam0, float fParam1)
{
	if (!func_211())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

int func_308(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_207(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_309(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_310(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_311(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_312(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_313(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_314(int iParam0, int iParam1)
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

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_388(iParam0, iParam6);
	func_389(iParam0, iParam5);
	func_390(iParam0, iParam4);
	func_391(iParam0, iParam3);
	func_392(iParam0, iParam2);
	func_393(iParam0, iParam1);
}

bool func_316(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_313(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_312(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_311(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_308(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_309(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_310(iParam0);
	if (iVar5 < 1 || iVar5 > func_314(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

struct<8> func_317(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

int func_318(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_394();
	}
	if (func_136() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

bool func_319(int iParam0, int iParam1)
{
	if (!func_337(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_320(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_321(int iParam0)
{
	return false;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

void func_323(struct<4> Param0)
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
			if (func_395(Param0))
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
			func_396(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_205(8);
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
			if (func_395(Param0))
			{
				return;
			}
			func_396(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_205(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_397(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_324(int iParam0, int iParam1)
{
	if (func_136() == -1)
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

void func_325(var uParam0, int iParam1)
{
	if (func_136() == -1)
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

int func_326(int iParam0)
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

int func_327(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_136() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_220(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_328(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_329(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_398(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_339(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_336(iVar1, iVar3);
		}
	}
	if (func_399(-1586649372) && func_339(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_336(iVar1, iVar3);
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
						func_336(iVar1, iVar3);
					}
				}
			}
			func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_400(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_336(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_400(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_400(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_336(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_398(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_401(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_398(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_155(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
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
						func_336(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_401(&(Global_1946804->f_1497.f_1[iVar1])) || func_155(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
			}
			switch (func_398(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_398(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_398(&(uParam0->f_1[iVar1])) || func_155(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_330(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_218(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_218(iParam0, 1)])->f_10 || iParam1);
}

int func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_94();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_332(int iParam0, int iParam1)
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

bool func_333(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_218(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_334(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_218(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_9(524288))
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

int func_335(var uParam0)
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

void func_336(int iParam0, int iParam1)
{
	func_402(&(Global_1946804->f_2589), iParam0, iParam1);
}

bool func_337(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_338(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_339(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

Vector3 func_340(int iParam0, int iParam1)
{
	if (func_136() == -1)
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

void func_341()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_342(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar1 = true;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_394()) || bParam5)
		{
			func_403();
		}
	}
	if (func_136() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_404(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_93(Global_40.f_7729);
				Global_1946804->f_1378 = func_93(Global_40.f_7729);
				bParam3 = true;
			}
		}
		bVar1 = func_322(iVar0);
	}
	if (bParam3 && bVar1)
	{
		func_405(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_406(0, 1);
	}
	func_226(0);
}

void func_343(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_136() != -1;
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
			func_205(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_407(iParam1, 29, bVar4, 1, 0);
			func_407(iParam1, 31, bVar4, 1, 0);
			func_407(iParam1, 30, bVar4, 1, 0);
			func_407(iParam1, 22, bVar4, 1, 0);
			func_407(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_9(32768) && func_333(1108822547, 8)) && func_339(10, iParam3))
	{
		func_408(iParam1, 0, 1);
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
			iVar3 = func_332(iVar1, 1);
			if (func_333(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_339(iVar1, iParam3))
				{
				}
				else if ((func_333(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_333(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_407(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_330(iVar3, 1, 6);
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
								func_407(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_333(iVar3, 1))
							{
								func_92(iVar3, 1, 6);
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

char* func_344()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_345(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_346(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_395(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_395(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_396(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_205(8);
}

char* func_347(int iParam0)
{
	if (iLocal_44 < 4)
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "A";
				break;
			case 2:
				sVar0 = "B";
				break;
			case 3:
				sVar0 = "C";
				break;
			case 4:
				sVar0 = "D";
				break;
			case 5:
				sVar0 = "E";
				break;
			default:
				sVar0 = "A";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "F";
				break;
			case 2:
				sVar0 = "G";
				break;
			case 3:
				sVar0 = "H";
				break;
			case 4:
				sVar0 = "I";
				break;
			case 5:
				sVar0 = "J";
				break;
			default:
				sVar0 = "F";
				break;
		}
	}
	return sVar0;
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_350(int iParam0)
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

int func_351(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_352(int iParam0)
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

void func_353(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_354(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return -1;
	}
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (uParam0[iVar0] == iParam1 && (*uParam0)[iVar0]->f_3 == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_355(int iParam0)
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

void func_356(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_127(iParam0, iParam1))
		{
			if (func_409(iParam0, iParam1))
			{
				if (func_410(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_320(iParam0);
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

void func_357(int iParam0, int iParam1, bool bParam2)
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

void func_358(int iParam0, bool bParam1)
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

void func_359(int iParam0, int iParam1)
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

bool func_360()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_361()
{
	fVar0 = func_304(13);
	iVar1 = func_306(fVar0);
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

float func_362()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_363()
{
	if (func_411())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_364()
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

float func_365()
{
	return Global_1955565->f_3;
}

void func_366(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_274(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_367(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_274(iParam0, 2, 0, 0);
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

bool func_368()
{
	return func_304(12) <= -99f;
}

bool func_369()
{
	return func_304(12) >= 99f;
}

bool func_370(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_371(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_373(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_412(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_413(iParam0))
	{
		return false;
	}
	if (func_414(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_415(iParam0, 1)) || func_416(32768))
	{
		if (!func_415(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_417())
	{
		return false;
	}
	return true;
}

void func_374(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_375()
{
	if (func_418())
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_377(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_286(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_419(iParam1), fParam2, -1);
	}
}

void func_378(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_375();
	}
	iVar0 = get_game_timer();
	func_420(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_421(iParam0, iVar0, iParam3);
	}
}

int func_379(int iParam0, bool bParam1)
{
	switch (func_131(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_381(float fParam0, int iParam1)
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

void func_382(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

int func_383(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_384(float fParam0)
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

int func_385(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_386(float fParam0, bool bParam1)
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

bool func_387(int iParam0, bool bParam1)
{
	return func_209(func_206(), iParam0, bParam1);
}

void func_388(int iParam0, int iParam1)
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

void func_389(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_390(int iParam0, int iParam1)
{
	iVar0 = func_309(*iParam0);
	iVar1 = func_308(*iParam0);
	if (iParam1 < 1 || iParam1 > func_314(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_391(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_392(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_393(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_394()
{
	if (func_136() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_395(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_396(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_397(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_346(Var0);
}

int func_398(int iParam0)
{
	if (!func_159(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_399(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_218(iParam0, 1)] != &Global_1946804->f_57[func_218(iParam0, 1)];
}

void func_400(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_336(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_336(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_336(iVar2, iVar0);
		}
	}
}

bool func_401(int iParam0)
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

void func_402(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_422(uParam0, 1))
	{
		func_423(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_403()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_404(int iParam0)
{
	iVar0 = func_219(0);
	iVar1 = 0;
	func_220(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_405(int iParam0, bool bParam1, int iParam2)
{
	func_424(&(Global_1946804->f_1378), iParam0);
	func_425(2, iParam0, 6);
	if (bParam1)
	{
		func_406(0, 1);
	}
}

void func_406(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(0);
	}
	if (bParam0)
	{
		func_205(8);
		func_205(512);
	}
	else
	{
		func_205(8);
		func_205(16);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_332(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_426(iParam4);
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

void func_408(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_333(1108822547, 6))
	{
		if (bParam2)
		{
			func_407(iParam0, iVar0, func_136() != -1, 0, 0);
			func_330(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_92(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_409(int iParam0, int iParam1)
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

bool func_410(int iParam0, int iParam1)
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
	if (!func_127(iParam0, iVar0))
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

bool func_411()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_412(int iParam0, int iParam1)
{
	if (func_136() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_413(int iParam0)
{
	if (func_136() != -1)
	{
		if (func_415(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_415(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_414(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_415(iParam0, 65536) && !func_415(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_415(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_415(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_415(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_416(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_417()
{
	return Global_1905944->f_5694;
}

bool func_418()
{
	return Global_1955569->f_866;
}

char* func_419(int iParam0)
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

void func_420(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_421(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

bool func_422(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_423(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_424(var uParam0, int iParam1)
{
	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_427(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_428(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (func_136() == -1)
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

int func_426(int iParam0)
{
	iVar0 = func_398(iParam0);
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

void func_427(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_428(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

