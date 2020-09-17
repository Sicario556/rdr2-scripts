void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_169 = -2006398858;
	iLocal_170 = -2146508301;
	iLocal_171 = -204889358;
	if (has_force_cleanup_occurred(555))
	{
		func_1(1, 0);
	}
	while (true)
	{
		wait(0);
		if ((func_2(27, &(uLocal_173[0]), 1, 1) && iLocal_22 > 2) || func_3(Global_35, 1))
		{
			func_5(&iLocal_188, func_4(), 1, 0, 1, 0, 1);
		}
		else
		{
			func_6(27, 1, uLocal_173[0], &uLocal_156, &uLocal_195, 0, 1097859072, 0);
			func_7(uLocal_173[0]);
			set_ped_can_play_gesture_anims(&(uLocal_173[0]), 0, 1);
			if (_does_volume_exist(iLocal_179) && func_8(Global_35, iLocal_179, 1, 0))
			{
				disable_control_action(0, -762150781, false);
			}
			if (!func_9(Global_35, 0))
			{
				func_1(1, 0);
			}
			else
			{
				if (_does_volume_exist((*(*Global_1396257)[27])[1]->f_47) && !is_entity_in_volume(Global_35, (*(*Global_1396257)[27])[1]->f_47, true, 0))
				{
					if (!func_10(&uLocal_150))
					{
						func_11(&uLocal_150, 0);
					}
					else if (func_12(&uLocal_150) > 10f)
					{
						func_13(&uLocal_150);
						func_1(1, 0);
					}
				}
				if (func_14(27, 1, &uLocal_254, &(uLocal_173[0])))
				{
					iLocal_279 = 1;
					if (func_15(&uLocal_254))
					{
						func_1(1, 0);
					}
				}
			}
			if (iLocal_22 == 28 || (((iLocal_22 >= 6 && iLocal_22 <= 27) && _is_anim_scene_started(iLocal_188, false)) && _0x8d81e7824b7753f7(iLocal_188, "s_base_end", 1)))
			{
				if (bVar277)
				{
					if (func_16(&uLocal_254))
					{
						if ((_does_volume_exist(iLocal_178) && !is_entity_in_volume(Global_35, iLocal_178, true, 0)) && !is_entity_on_screen(&(uLocal_173[0])))
						{
							func_1(1, 1);
						}
					}
				}
			}
			func_17();
			if (iLocal_22 > 2)
			{
				func_18();
			}
			if (iLocal_22 > 2)
			{
				if (!func_19(iLocal_190, 16))
				{
					iVar0 = func_20(iLocal_183, iLocal_179, &uLocal_162, 6f);
					switch (iVar0)
					{
						case 1:
							if (!func_19(iLocal_190, 524288))
							{
								func_21(&iLocal_190, 524288);
							}
							break;
						case 0:
							if (func_19(iLocal_190, 524288))
							{
								func_22(&iLocal_190, 524288);
							}
							break;
					}
				}
				func_23(uLocal_173[0], iLocal_183, iLocal_179, &iLocal_190, 2097152);
			}
			if (func_9(&(uLocal_173[0]), 0) && _0x3ab6c7b0bb0df4b1(&(uLocal_173[0]), -1))
			{
				set_ped_can_play_gesture_anims(&(uLocal_173[0]), 0, 1);
			}
			if (_does_volume_exist(iLocal_180))
			{
				if (is_entity_in_volume(Global_35, iLocal_180, true, 0) && is_entity_in_volume(&(uLocal_173[0]), iLocal_180, true, 0))
				{
					task_look_at_entity(Global_35, &(uLocal_173[0]), -1, 2108, 51, 1);
				}
				else
				{
					func_24(Global_35);
				}
			}
			func_25(iLocal_22);
			func_26(iLocal_22);
			func_27(&(uLocal_173[0]), &iLocal_190, 4096, 27, 0);
			switch (iLocal_22)
			{
				case 0:
					if (!_does_anim_scene_exist(iLocal_188))
					{
						iLocal_188 = _create_anim_scene(func_28(), 32, func_4(), false, true);
					}
					if (!_does_anim_scene_exist(iLocal_189))
					{
						iLocal_189 = _create_anim_scene(func_29(), 32, 0, false, true);
					}
					if (_does_anim_scene_exist(iLocal_188) && _does_anim_scene_exist(iLocal_189))
					{
						load_anim_scene(iLocal_188);
						load_anim_scene(iLocal_189);
						_text_database_request("SPTM");
						_text_database_request("SPTIMAU");
						request_model(iLocal_169, false);
						request_model(iLocal_171, false);
						request_model(iLocal_170, false);
						request_waypoint_recording("spd_tmd_escape");
						func_30();
						_0xed9582b3da8f02b4(1);
						func_31(iLocal_178, "SP_TimothyDonahue2_Block", 1, 0, 0, 0, -1082130432);
						func_32(2644.443f, -1207.946f, 52.3368f, 10f, 0);
						uLocal_185 = func_33(iLocal_181, 0, 0, 0);
						iLocal_168 = func_35(27, 1, 9, func_34(27));
						iLocal_191 = func_36(func_35(27, 0, 9, func_34(27)));
						if (!func_37(iLocal_168))
						{
						}
						if (func_38())
						{
							func_39(&uLocal_23, Global_35, "JOHN", 0);
						}
						else
						{
							func_39(&uLocal_23, Global_35, "ARTHUR", 0);
						}
						func_40(&uLocal_254);
						func_41(&uLocal_121);
						func_42(&uLocal_121, 1);
						func_43(&uLocal_121, 0);
						func_44(&uLocal_121, 0);
						func_45(&uLocal_121, 1);
						func_46(&uLocal_121, 1);
						func_47(&uLocal_121, 1);
						func_48(&uLocal_121, 0);
						func_49(&uLocal_121, 0);
						func_50(&uLocal_121, 1);
						func_51(&uLocal_121, 0);
						func_52(&uLocal_121, 1);
						func_53(&uLocal_121, 1);
						func_54(&uLocal_121, 1);
						func_55(&uLocal_121, 1);
						func_56(&uLocal_121, 1);
						func_57(&uLocal_121, 1);
						func_58(&uLocal_121, 1);
						func_59(&uLocal_121, 1);
						if (func_37(iLocal_168))
						{
							func_60(1);
						}
					}
					break;
				case 1:
					bVar1 = true;
					if (!_is_anim_scene_loaded(iLocal_188, true, false))
					{
						bVar1 = false;
					}
					if (!_is_anim_scene_loaded(iLocal_189, true, false))
					{
						bVar1 = false;
					}
					if (!_text_database_has_loaded("SPTM"))
					{
						bVar1 = false;
					}
					if (!_text_database_has_loaded("SPTIMAU"))
					{
						bVar1 = false;
					}
					if (!has_model_loaded(iLocal_169))
					{
						bVar1 = false;
					}
					if (!has_model_loaded(iLocal_171))
					{
						bVar1 = false;
					}
					if (!has_model_loaded(iLocal_170))
					{
						bVar1 = false;
					}
					if (!get_is_waypoint_recording_loaded("spd_tmd_escape"))
					{
						bVar1 = false;
					}
					if (_0x5c16855277819bbf() == 1)
					{
					}
					else
					{
						bVar1 = false;
					}
					if (bVar1)
					{
						func_60(2);
					}
					break;
				case 2:
					if (((func_61(uLocal_173[0], iLocal_169, 2644.443f, -1207.946f, 52.3368f, 199.0776f, 1, 0, 1) && func_62(&iLocal_175, iLocal_171, 2644.251f, -1208.702f, 53.5354f)) && func_62(&iLocal_176, iLocal_171, 2643.541f, -1208.416f, 53.1764f)) && func_62(&iLocal_177, iLocal_170, 2643.355f, -1208.241f, 52.3474f))
					{
						if (func_9(&(uLocal_173[0]), 0))
						{
							func_63(&(uLocal_173[0]), 27);
							add_entity_to_audio_mix_group(&(uLocal_173[0]), "special_ped_group", 0f);
							set_blocking_of_non_temporary_events(&(uLocal_173[0]), true);
							set_ped_config_flag(&(uLocal_173[0]), 153, true);
							set_ped_config_flag(&(uLocal_173[0]), 448, true);
							set_ped_combat_attributes(&(uLocal_173[0]), 17, true);
							func_39(&uLocal_23, &(uLocal_173[0]), "TIMOTHY_DONAHUE", 0);
							_set_entity_coords_and_heading(&(uLocal_173[0]), 2644.443f, -1207.946f, 52.3368f, 199.0776f, true, false, true);
							_0x3946fc742ac305cd(get_player_index(), &(uLocal_173[0]), "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "TimothyBubble");
							_0x7c00cfc48a782dc0(iLocal_184, &(uLocal_173[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
							func_64(uLocal_173[0], &uLocal_15, -1130398329, 5f, 3600f);
							set_anim_scene_entity(iLocal_188, "cs_timothydonahue", &(uLocal_173[0]), 0);
							set_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x", iLocal_175, 0);
							set_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x^1", iLocal_176, 0);
							set_anim_scene_entity(iLocal_188, "s_bookcart01x", iLocal_177, 0);
							set_anim_scene_entity(iLocal_189, "cs_timothydonahue", &(uLocal_173[0]), 0);
							set_anim_scene_entity(iLocal_189, "p_cs_getrich_book01x^1", iLocal_176, 0);
							set_anim_scene_entity(iLocal_189, "s_bookcart01x", iLocal_177, 0);
							_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(&(uLocal_173[0]), &uLocal_253));
							if (func_38())
							{
								func_65(&(uLocal_173[0]), 1689938120);
							}
							func_66();
							if (func_38())
							{
								if (!func_19(iLocal_191, 1))
								{
									iLocal_193 = 19;
									func_21(&iLocal_191, 1);
								}
								else
								{
									iLocal_193 = func_67(func_35(27, 0, 9, func_34(27)));
								}
								func_68(iLocal_189, "b_PlayerArthur", 0);
								set_anim_scene_entity(iLocal_189, "JOHN", Global_35, 0);
							}
							else
							{
								iLocal_193 = func_67(func_35(27, 0, 9, func_34(27)));
								func_68(iLocal_189, "b_PlayerArthur", 1);
								set_anim_scene_entity(iLocal_189, "ARTHUR", Global_35, 0);
							}
							func_69();
						}
					}
					break;
				case 3:
					if (func_19(iLocal_190, 1))
					{
						func_60(36);
					}
					else if (func_19(iLocal_190, 2) && !func_19(iLocal_190, 4))
					{
						if (_does_anim_scene_exist(iLocal_188))
						{
							if (_is_anim_scene_started(iLocal_188, false))
							{
								if (func_70(&iLocal_189))
								{
									set_anim_scene_entity(iLocal_189, "cs_timothydonahue", &(uLocal_173[0]), 0);
									set_anim_scene_entity(iLocal_189, "p_cs_getrich_book01x^1", iLocal_176, 0);
									set_anim_scene_entity(iLocal_189, "s_bookcart01x", iLocal_177, 0);
									if (func_38())
									{
										func_68(iLocal_189, "b_PlayerArthur", 0);
										set_anim_scene_entity(iLocal_189, "JOHN", Global_35, 0);
									}
									else
									{
										func_68(iLocal_189, "b_PlayerArthur", 1);
										set_anim_scene_entity(iLocal_189, "ARTHUR", Global_35, 0);
									}
									func_60(31);
								}
							}
						}
					}
					else if (_does_anim_scene_exist(iLocal_188))
					{
						if (_is_anim_scene_started(iLocal_188, false) && has_anim_event_fired(&(uLocal_173[0]), -1527527524))
						{
							if (!func_10(&uLocal_153))
							{
								fLocal_187 = to_float(get_random_int_in_range(1, 2));
								func_71(&uLocal_153, 0f);
							}
							else if (func_12(&uLocal_153) > fLocal_187)
							{
								func_69();
								func_13(&uLocal_153);
							}
						}
					}
					break;
				case 28:
					if (func_19(iLocal_190, 524288))
					{
						if (!func_10(&uLocal_165))
						{
							func_11(&uLocal_165, 1);
						}
						else if (func_72(&uLocal_165) > 2f)
						{
							if (is_entity_in_volume(Global_35, iLocal_183, true, 0))
							{
								cVar2 = "PLAYER_LOITERING";
							}
							else
							{
								cVar2 = "PLAYER_STILL_HANGING_BEFOREBOOK";
								iVar3 = func_73(iLocal_192);
							}
							if (!func_19(iLocal_190, 1048576))
							{
								if (are_strings_equal(cVar2, "PLAYER_LOITERING"))
								{
									if (func_74(&(uLocal_173[0]), cVar2, -417894478, Global_35, 1, "TIMOTHY_DONAHUE", 0, 1))
									{
										func_21(&iLocal_190, 1048576);
									}
								}
								else if (iVar3 >= 1)
								{
									if (func_74(&(uLocal_173[0]), cVar2, -417894478, Global_35, 1, "TIMOTHY_DONAHUE", iVar3, 1))
									{
										set_bit(&iLocal_192, iVar3);
										func_21(&iLocal_190, 1048576);
									}
								}
							}
						}
						if (func_19(iLocal_190, 1048576))
						{
							if (!is_scripted_speech_playing(&(uLocal_173[0])))
							{
								func_22(&iLocal_190, 524288);
								func_22(&iLocal_190, 1048576);
								func_13(&uLocal_162);
								func_13(&uLocal_165);
							}
						}
					}
					if (func_19(iLocal_190, 2) && !func_19(iLocal_190, 4))
					{
						if (func_19(iLocal_190, 16))
						{
							func_21(&iLocal_190, 8192);
							if (!is_scripted_speech_playing(Global_35))
							{
								if (!func_19(iLocal_190, 32768))
								{
									StringCopy(&cVar4, "SPTIM_INTRO3", 24);
									if (func_75(&uLocal_23, cVar4, 0, -1, 0, 0))
									{
										func_21(&iLocal_190, 32768);
									}
								}
								else if (!func_19(iLocal_190, 131072))
								{
									if (!_0x54b187f111d9c6f8(&(uLocal_173[0]), 0))
									{
										func_21(&iLocal_190, 131072);
									}
								}
							}
							if (_does_volume_exist(iLocal_179))
							{
								func_76(&iLocal_179, &uLocal_277, &uLocal_278);
							}
							func_77(1);
							if (func_80(&(uLocal_173[0]), iLocal_189, func_78(), func_79(), 1, 1056964608, 20000) && func_19(iLocal_190, 131072))
							{
								if (_does_anim_scene_exist(iLocal_188))
								{
									if (_is_anim_scene_started(iLocal_188, false))
									{
										if (func_70(&iLocal_189))
										{
											set_anim_scene_entity(iLocal_189, "cs_timothydonahue", &(uLocal_173[0]), 0);
											set_anim_scene_entity(iLocal_189, "p_cs_getrich_book01x^1", iLocal_176, 0);
											set_anim_scene_entity(iLocal_189, "s_bookcart01x", iLocal_177, 0);
											if (func_38())
											{
												func_68(iLocal_189, "b_PlayerArthur", 0);
												set_anim_scene_entity(iLocal_189, "JOHN", Global_35, 0);
											}
											else
											{
												func_68(iLocal_189, "b_PlayerArthur", 1);
												set_anim_scene_entity(iLocal_189, "ARTHUR", Global_35, 0);
											}
											_0xc67a4910425f11f1(get_player_index(), "TimothyBubble");
											func_81(iLocal_184);
											func_77(0);
											func_60(31);
										}
									}
								}
							}
						}
					}
					else if (!func_10(&uLocal_159))
					{
						func_11(&uLocal_159, 0);
					}
					else if (func_12(&uLocal_159) > 6f)
					{
						func_13(&uLocal_159);
						func_22(&iLocal_190, 16384);
						func_22(&iLocal_190, 8192);
						func_22(&iLocal_190, 1048576);
						func_13(&uLocal_162);
						func_82(Local_217[0], 0, 0);
						func_82(Local_217[1], 0, 0);
						func_69();
					}
					break;
				case 5:
					break;
				case 6:
					if (func_5(&iLocal_188, func_83(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 7:
					if (func_5(&iLocal_188, func_84(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 8:
					if (func_5(&iLocal_188, func_85(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 9:
					if (func_5(&iLocal_188, func_86(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 10:
					if (func_5(&iLocal_188, func_87(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 11:
					if (func_5(&iLocal_188, func_88(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 12:
					if (func_5(&iLocal_188, func_89(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_60(28);
					}
					break;
				case 13:
					if (func_5(&iLocal_188, func_90(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 14:
					if (func_5(&iLocal_188, func_92(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 15:
					if (func_5(&iLocal_188, func_93(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 16:
					if (func_5(&iLocal_188, func_94(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 17:
					if (func_5(&iLocal_188, func_95(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 18:
					if (func_5(&iLocal_188, func_96(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 19:
					if (func_5(&iLocal_188, func_97(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 20:
					if (func_5(&iLocal_188, func_98(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 21:
					if (func_5(&iLocal_188, func_99(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 22:
					if (func_5(&iLocal_188, func_100(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 23:
					if (func_5(&iLocal_188, func_101(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 24:
					if (func_5(&iLocal_188, func_102(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 25:
					if (func_5(&iLocal_188, func_103(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 26:
					if (func_5(&iLocal_188, func_104(), 1, 0, 1, 0, 1))
					{
						iLocal_194 = (1 + iLocal_194);
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 27:
					if (func_5(&iLocal_188, func_105(), 1, 0, 1, 0, 1))
					{
						iLocal_194++;
						func_91(1, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					if (func_19(iLocal_190, 16) && !func_19(iLocal_190, 4))
					{
						func_91(0, 0, 0);
						func_22(&iLocal_190, 64);
						func_60(28);
					}
					break;
				case 4:
					if (func_19(iLocal_190, 1))
					{
						func_60(36);
					}
					else if (func_19(iLocal_190, 4))
					{
						if (func_70(&iLocal_188))
						{
							set_anim_scene_entity(iLocal_188, "cs_timothydonahue", &(uLocal_173[0]), 0);
							set_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x", iLocal_175, 0);
							set_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x^1", iLocal_176, 0);
							set_anim_scene_entity(iLocal_188, "s_bookcart01x", iLocal_177, 0);
							func_68(iLocal_188, "internal_loop", 0);
							func_68(iLocal_188, "internal_loop_end", 0);
							if (func_5(&iLocal_188, func_4(), 0, 1, 1, 0, 1))
							{
								reset_anim_scene(iLocal_189, 0);
								func_60(28);
							}
						}
					}
					else if (_does_anim_scene_exist(iLocal_189))
					{
						if (_is_anim_scene_started(iLocal_189, false))
						{
							if (has_anim_event_fired(&(uLocal_173[0]), -1527527524))
							{
								_0xc67a4910425f11f1(get_player_index(), "TimothyBubble");
								func_81(iLocal_184);
								func_60(31);
							}
						}
					}
					break;
				case 31:
					func_21(&iLocal_190, 8192);
					if (!is_scripted_speech_playing(Global_35))
					{
						func_5(&iLocal_189, func_79(), 1, 0, 0, 1, 1);
						if (_get_anim_scene_progress(iLocal_189) >= 0.92f)
						{
							if (!func_19(iLocal_190, 4))
							{
								func_21(&iLocal_190, 4);
							}
							func_82(Local_217[0], 0, 0);
							func_82(Local_217[1], 0, 0);
							func_106(27, 12);
							func_107(27);
							func_60(32);
						}
					}
					break;
				case 32:
					if (_does_anim_scene_exist(iLocal_189))
					{
						if (!is_entity_attached(iLocal_176))
						{
							activate_physics(iLocal_176);
						}
						if (_is_anim_scene_finished(iLocal_189, false))
						{
							_0xc67a4910425f11f1(get_player_index(), "TimothyBubble");
							func_81(iLocal_184);
							set_ped_config_flag(&(uLocal_173[0]), 448, false);
							set_ped_config_flag(&(uLocal_173[0]), 153, false);
							func_22(&iLocal_190, 8192);
							iVar7 = get_random_int_in_range(5000, 5200);
							func_108(&(uLocal_173[0]), iVar7);
							func_60(33);
						}
					}
					break;
				case 33:
					if (!is_entity_dead(&(uLocal_173[0])) && !is_entity_dead(Global_35))
					{
						func_109(&(uLocal_173[0]), 1073741824);
						if (!func_19(iLocal_190, 128))
						{
							if (!func_110(&(uLocal_173[0]), 658540077))
							{
								set_ped_move_rate_override(&(uLocal_173[0]), 1.15f);
								force_ped_motion_state(&(uLocal_173[0]), -1415276238, true, 0, false);
								clear_ped_tasks(&(uLocal_173[0]), 1, 0);
								set_ped_can_ragdoll_from_player_impact(&(uLocal_173[0]), true);
								task_follow_waypoint_recording(&(uLocal_173[0]), "spd_tmd_escape", 0, 4194920, 59, 0, 0, -1);
							}
							if (get_ped_waypoint_progress(&(uLocal_173[0])) >= 58)
							{
								use_waypoint_recording_as_assisted_movement_route("spd_tmd_escape", 0, 1065353216, 1056964608, 1);
								func_21(&iLocal_190, 128);
							}
							else
							{
								waypoint_playback_override_speed(&(uLocal_173[0]), 2.1f, 0, -1082130432, 0);
								use_waypoint_recording_as_assisted_movement_route("spd_tmd_escape", 1, 1065353216, 0.9f, 1);
							}
						}
						else
						{
							if (!func_110(&(uLocal_173[0]), 518218985))
							{
								_task_smart_flee_style_ped(&(uLocal_173[0]), Global_35, 3, 0, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_173[0]), true);
								set_ped_combat_attributes(&(uLocal_173[0]), 17, true);
								_0x0eabf182fbb63d72(&(uLocal_173[0]), 6, 0);
							}
							func_81(iLocal_184);
							func_60(36);
						}
					}
					break;
				case 34:
					break;
				case 35:
					break;
				case 36:
					if (fLocal_17 >= 100f)
					{
						if (!_0x5102307ce88798eb(&(uLocal_173[0])))
						{
							request_ped_visibility_tracking(&(uLocal_173[0]));
						}
						if (!is_tracked_ped_visible(&(uLocal_173[0])))
						{
							if (does_entity_exist(&(uLocal_173[0])))
							{
								delete_ped(uLocal_173[0]);
							}
							func_1(1, 0);
						}
					}
					break;
				case 37:
					func_106(27, 12);
					if (fLocal_17 >= 100f)
					{
						if (!_0x5102307ce88798eb(&(uLocal_173[0])))
						{
							request_ped_visibility_tracking(&(uLocal_173[0]));
						}
						if (!is_tracked_ped_visible(&(uLocal_173[0])))
						{
							if (does_entity_exist(&(uLocal_173[0])))
							{
								delete_ped(uLocal_173[0]);
							}
							func_1(1, 0);
						}
					}
					break;
				case 38:
					break;
				default:
					break;
			}
		}
	}
}

void func_1(bool bParam0, bool bParam1)
{
	_0xc67a4910425f11f1(get_player_index(), "TimothyBubble");
	func_111(uLocal_173[0], &uLocal_15, -1130398329, 5f, 1);
	func_112(func_35(27, 0, 9, func_34(27)), iLocal_193);
	func_113(func_35(27, 0, 9, func_34(27)), iLocal_191);
	if (get_is_waypoint_recording_loaded("spd_tmd_escape"))
	{
		use_waypoint_recording_as_assisted_movement_route("spd_tmd_escape", 0, 1065353216, 1056964608, 1);
		remove_waypoint_recording("spd_tmd_escape");
	}
	if (_is_anim_scene_started(iLocal_188, false))
	{
		remove_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x", iLocal_175);
		remove_anim_scene_entity(iLocal_188, "p_cs_getrich_book01x^1", iLocal_176);
	}
	if (_is_anim_scene_started(iLocal_189, false))
	{
		remove_anim_scene_entity(iLocal_189, "p_cs_getrich_book01x^1", iLocal_176);
	}
	if (!is_entity_dead(&(uLocal_173[0])))
	{
		set_blocking_of_non_temporary_events(&(uLocal_173[0]), false);
		func_114(&(uLocal_173[0]), 1, 1);
		set_ped_config_flag(&(uLocal_173[0]), 130, false);
		func_115(&(uLocal_173[0]));
		remove_entity_from_audio_mix_group(&(uLocal_173[0]), 0f);
		if (bParam1)
		{
			_0x39a2fc5af55a52b1(&(uLocal_173[0]), -1);
		}
		set_ped_as_no_longer_needed(uLocal_173[0]);
	}
	if (does_entity_exist(iLocal_175))
	{
		set_object_as_no_longer_needed(&iLocal_175);
	}
	if (does_entity_exist(iLocal_176))
	{
		set_object_as_no_longer_needed(&iLocal_176);
	}
	if (does_entity_exist(iLocal_177))
	{
		set_object_as_no_longer_needed(&iLocal_177);
	}
	if (_does_anim_scene_exist(iLocal_188))
	{
		_delete_anim_scene(iLocal_188);
	}
	if (_does_anim_scene_exist(iLocal_189))
	{
		_delete_anim_scene(iLocal_189);
	}
	if (_0x91a5f9cbebb9d936(uLocal_185))
	{
		remove_scenario_blocking_area(uLocal_185, false);
	}
	if (_does_volume_exist(iLocal_178))
	{
		func_116(iLocal_178);
		_delete_volume(iLocal_178);
	}
	if (_does_volume_exist(iLocal_182))
	{
		_delete_volume(iLocal_182);
	}
	if (_does_volume_exist(iLocal_181))
	{
		_0xb56d41a694e42e86(iLocal_181, 2500607, 0, 0, -1, -1, 10);
		_0xa1cfb35069d23c23(iLocal_181);
		_delete_volume(iLocal_181);
	}
	if (_does_volume_exist(iLocal_180))
	{
		_0x74c2b3dc0b294102(iLocal_180);
		_0xa1cfb35069d23c23(iLocal_180);
		_delete_volume(iLocal_180);
	}
	if (_does_volume_exist(iLocal_179))
	{
		_0x74c2b3dc0b294102(iLocal_179);
		_0xa1cfb35069d23c23(iLocal_179);
		_delete_volume(iLocal_179);
	}
	if (_does_volume_exist(iLocal_183))
	{
		_delete_volume(iLocal_183);
	}
	if (_does_volume_exist((*(*Global_1396257)[27])[1]->f_47))
	{
		_delete_volume((*(*Global_1396257)[27])[1]->f_47);
	}
	if (is_itemset_valid(iVar273))
	{
		destroy_itemset(iVar273);
	}
	if (is_itemset_valid(iLocal_172))
	{
		destroy_itemset(iLocal_172);
	}
	if (is_itemset_valid(iVar271))
	{
		destroy_itemset(iVar271);
	}
	if (is_itemset_valid(iVar272))
	{
		destroy_itemset(iVar272);
	}
	func_117(&uLocal_254);
	func_77(0);
	func_118(27);
	if (bParam0)
	{
		terminate_this_thread();
	}
}

bool func_2(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_119())
		{
			return true;
		}
	}
	if (!is_ped_injured(iParam1))
	{
		if (vdist(Global_36, get_entity_coords(iParam1, true, false)) < 18f || is_scripted_speech_playing(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_120(0) == 7 || func_121())
		{
			return true;
		}
	}
	if (func_122(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_3(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_123(iVar0) || func_124(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

char* func_4()
{
	return "pbl_base_reset";
}

bool func_5(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_does_anim_scene_exist(*iParam0))
	{
		if ((!_is_anim_scene_started(*iParam0, false) && !_0x083d497d57b7400f(&(uLocal_173[0]))) && !bParam5)
		{
			start_anim_scene(*iParam0);
		}
		if (bParam5 && !_is_anim_scene_started(*iParam0, false))
		{
			if ((!_0x23e33cb9f4a3f547(*iParam0, sParam1) && !_0x0df57f86fe71dbe5(*iParam0, sParam1)) && !_0x1f0e401031e20146(*iParam0, sParam1))
			{
				_0xdf7b5144e25cd3fe(*iParam0, sParam1);
			}
			if ((!_0x1f0e401031e20146(*iParam0, sParam1) && _0x23e33cb9f4a3f547(*iParam0, sParam1)) && !_0x083d497d57b7400f(&(uLocal_173[0])))
			{
				_set_anim_scene_playback_list_bool(*iParam0, sParam1, true);
				func_68(*iParam0, "internal_loop", bParam2);
				func_68(*iParam0, "internal_loop_end", bParam3);
				start_anim_scene(*iParam0);
			}
		}
		if (_is_anim_scene_started(*iParam0, false))
		{
			if ((!_0x23e33cb9f4a3f547(*iParam0, sParam1) && !_0x0df57f86fe71dbe5(*iParam0, sParam1)) && !_0x1f0e401031e20146(*iParam0, sParam1))
			{
				_0xdf7b5144e25cd3fe(*iParam0, sParam1);
			}
			if (bParam6)
			{
				if (!func_125(uLocal_173[0], 0, 0))
				{
					return false;
				}
			}
			if ((!_0x1f0e401031e20146(*iParam0, sParam1) && _0x23e33cb9f4a3f547(*iParam0, sParam1)) && !_0x083d497d57b7400f(&(uLocal_173[0])))
			{
				_set_anim_scene_playback_list_bool(*iParam0, sParam1, true);
				func_68(*iParam0, "internal_loop", bParam2);
				func_68(*iParam0, "internal_loop_end", bParam3);
				return false;
			}
			else if (_0x1f0e401031e20146(*iParam0, sParam1))
			{
				if (_0x8d81e7824b7753f7(*iParam0, "s_base_end", 1) && !bParam3)
				{
					if (func_126(iParam0, sLocal_186))
					{
						sLocal_186 = sParam1;
						return true;
					}
				}
				else if (_0x8d81e7824b7753f7(*iParam0, "s_base", 1) && bParam3)
				{
					if (func_126(iParam0, sLocal_186))
					{
						sLocal_186 = sParam1;
						return true;
					}
				}
				else if (bParam3 && has_anim_event_fired(&(uLocal_173[0]), -1527527524))
				{
					if (func_126(iParam0, sLocal_186))
					{
						sLocal_186 = sParam1;
						return true;
					}
				}
				else if (!bParam4)
				{
					if (func_126(iParam0, sLocal_186))
					{
						sLocal_186 = sParam1;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_6(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_127();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_128(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_10(uParam3))
	{
		func_71(uParam3, 0f);
	}
	else if (func_12(uParam3) >= 2f)
	{
		if (!func_129(Global_40.f_11623[iParam0]->f_2))
		{
			func_130(iParam0);
			*uParam4 = 1;
			func_13(uParam3);
			return 1;
		}
		else
		{
			func_130(iParam0);
			*uParam4 = 1;
			func_13(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (does_entity_exist(*uParam0))
	{
		if (!func_10(&uLocal_19))
		{
			func_71(&uLocal_19, 0f);
		}
		else if (func_131(&uLocal_19) >= 1000)
		{
			fLocal_17 = get_distance_between_coords(get_entity_coords(*uParam0, true, false), func_132(get_player_index()), false);
			func_13(&uLocal_19);
		}
	}
}

bool func_8(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_9(int iParam0, int iParam1)
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
	if (func_19(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_10(var uParam0)
{
	return func_133(*uParam0, 1);
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1 || !func_10(uParam0))
	{
		func_134(uParam0);
	}
}

float func_12(var uParam0)
{
	if (!func_10(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_136() - uParam0->f_1);
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_14(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_120(0) == 1 || func_120(0) == 2) || func_120(0) == 8) || func_137(&Global_1935630, 2048))
			{
				func_21(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_120(0) == 11)
			{
				func_21(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_120(0) == 6)
			{
				func_21(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_21(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_138((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_138((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_127();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_138(iVar2) > func_138(iVar1))
				{
					if (func_138(iVar0) > func_138(iVar2) + 1 || func_138(iVar0) < func_138(iVar1))
					{
						func_21(iParam2, 32);
					}
				}
				else if (func_138(iVar0) > func_138(iVar2) + 1 && func_138(iVar0) < func_138(iVar1))
				{
					func_21(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_139(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_139(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_140(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_140(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_141((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_21(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_142(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_143(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_10(&(iParam2->f_13)))
					{
						func_71(&(iParam2->f_13), 0f);
					}
					else if (func_131(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_13(&(iParam2->f_13));
						func_21(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_10(&(iParam2->f_13)))
					{
						func_13(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_144())
			{
				func_21(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_145())
			{
				func_21(iParam2, 2048);
			}
		}
		if (func_137(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_21(iParam2, 128);
		}
		if (func_122(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_21(iParam2, 256);
		}
	}
	if ((((((((((func_19(*iParam2, 2) || func_19(*iParam2, 4)) || func_19(*iParam2, 8)) || func_19(*iParam2, 16)) || func_19(*iParam2, 32)) || func_19(*iParam2, 64)) || func_19(*iParam2, 128)) || func_19(*iParam2, 256)) || func_19(*iParam2, 512)) || func_19(*iParam2, 1024)) || func_19(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_15(var uParam0)
{
	if (((((func_19(*uParam0, 2) || func_19(*uParam0, 4)) || func_19(*uParam0, 16)) || func_19(*uParam0, 128)) || func_19(*uParam0, 1024)) || func_19(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_16(var uParam0)
{
	if ((((func_19(*uParam0, 32) || func_19(*uParam0, 64)) || func_19(*uParam0, 512)) || func_19(*uParam0, 256)) || func_19(*uParam0, 8))
	{
		return true;
	}
	return false;
}

void func_17()
{
	if (!does_entity_exist(&(uLocal_173[0])))
	{
		return;
	}
	if (!func_9(&(uLocal_173[0]), 0))
	{
		if (!func_19(iLocal_190, 8388608))
		{
			func_21(&iLocal_190, 8388608);
		}
	}
	if (iLocal_22 < 2 || iLocal_22 >= 36)
	{
		return;
	}
	if (fLocal_17 > 50f)
	{
		if (!bLocal_18)
		{
			bLocal_18 = func_146(&uLocal_121, &uLocal_149, uLocal_173[0], &uLocal_16, 1101004800);
		}
	}
	else if (!bLocal_18)
	{
		bLocal_18 = func_147(&(uLocal_173[0]), 0, &uLocal_121, &uLocal_149, 0, fLocal_17);
	}
	if (bLocal_18)
	{
		if (does_entity_exist(iLocal_175))
		{
			if (is_entity_attached_to_any_ped(iLocal_175))
			{
				detach_entity(iLocal_175, true, true);
			}
			apply_force_to_entity(iLocal_175, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		}
		if (does_entity_exist(iLocal_176))
		{
			if (is_entity_attached_to_any_ped(iLocal_176))
			{
				detach_entity(iLocal_176, true, true);
			}
			apply_force_to_entity(iLocal_176, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		}
		_0xc67a4910425f11f1(player_id(), "TimothyConvo");
		_0xc67a4910425f11f1(player_id(), "TimothyBubble");
		if (!func_110(&(uLocal_173[0]), 518218985))
		{
			_task_smart_flee_style_ped(&(uLocal_173[0]), Global_35, 3, 0, -1082130432, -1, 0);
		}
		set_ped_combat_attributes(&(uLocal_173[0]), 17, true);
		set_blocking_of_non_temporary_events(&(uLocal_173[0]), false);
		set_ped_keep_task(&(uLocal_173[0]), true);
		_0x0eabf182fbb63d72(&(uLocal_173[0]), 6, 0);
		func_81(iLocal_184);
		func_60(36);
	}
}

void func_18()
{
	if (!_does_volume_exist(iLocal_179))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!func_19(iLocal_190, 2))
	{
		if (is_entity_in_volume(Global_35, iLocal_179, true, 0))
		{
			func_21(&iLocal_190, 2);
		}
	}
	else if (!is_entity_in_volume(Global_35, iLocal_179, true, 0))
	{
		func_22(&iLocal_190, 2);
	}
	if (is_entity_in_volume(Global_35, iLocal_179, true, 0))
	{
		if (func_19(iLocal_190, 16))
		{
			if (func_148(Local_217[0], 1, 0))
			{
				func_82(Local_217[0], 0, 0);
			}
			if (func_148(Local_217[1], 1, 0))
			{
				func_82(Local_217[1], 0, 0);
			}
			if (!func_19(iLocal_190, 262144))
			{
				iLocal_252 = func_149(3, 0, 0);
				func_150(&iLocal_196, 0);
				func_21(&iLocal_190, 262144);
			}
			func_151(&Local_217, 1, 1, 1, 0);
		}
		else
		{
			if (iLocal_22 == 28)
			{
				func_21(&iLocal_190, 16384);
				if (func_19(iLocal_190, 4194304))
				{
					func_22(&iLocal_190, 4194304);
				}
			}
			else if (has_anim_event_fired(&(uLocal_173[0]), 366144440) || func_19(iLocal_190, 4194304))
			{
				if (!func_19(iLocal_190, 4194304))
				{
					func_21(&iLocal_190, 4194304);
				}
				func_21(&iLocal_190, 16384);
			}
			else
			{
				func_22(&iLocal_190, 16384);
			}
			if (((func_152() || is_ped_on_mount(Global_35)) || func_142(uLocal_173[0], &uLocal_275, 1071644672, 1074790400)) || func_153(uLocal_173[0], &uLocal_276, 1071644672, 1074790400))
			{
				func_22(&iLocal_190, 16384);
			}
			if (func_19(iLocal_190, 16384))
			{
				if (!func_148(Local_217[0], 1, 0))
				{
					func_82(Local_217[0], 1, 0);
				}
				if (!func_148(Local_217[1], 1, 0))
				{
					func_82(Local_217[1], 1, 0);
				}
				if (func_19(iLocal_190, 262144))
				{
					iLocal_252 = func_149(2, 0, 0);
					func_150(&iLocal_196, 0);
					func_22(&iLocal_190, 262144);
				}
			}
			else
			{
				if (func_148(Local_217[0], 1, 0))
				{
					func_82(Local_217[0], 0, 0);
				}
				if (func_148(Local_217[1], 1, 0))
				{
					func_82(Local_217[1], 0, 0);
				}
				if (!func_19(iLocal_190, 262144))
				{
					iLocal_252 = func_149(3, 0, 0);
					func_150(&iLocal_196, 0);
					func_21(&iLocal_190, 262144);
				}
			}
		}
	}
	else
	{
		if (func_148(Local_217[0], 1, 0))
		{
			func_82(Local_217[0], 0, 0);
		}
		if (func_148(Local_217[1], 1, 0))
		{
			func_82(Local_217[1], 0, 0);
		}
		if (!func_19(iLocal_190, 262144))
		{
			iLocal_252 = func_149(3, 0, 0);
			func_150(&iLocal_196, 0);
			func_21(&iLocal_190, 262144);
		}
	}
	iVar0 = 0;
	if (fLocal_17 > 20f)
	{
		return;
	}
	iVar1 = func_154(uLocal_173[0], &iLocal_196, 15f, &Local_217, &iVar0, 0f, 2, 0, "", iLocal_252, 0, 0, 2, 1, fLocal_17, 0);
	switch (iVar1)
	{
		case 0:
			if (!func_19(iLocal_190, 16))
			{
				func_155(27, uLocal_173[0], &iLocal_190, 256);
				func_156();
				func_150(&iLocal_196, 0);
				func_134(&uLocal_162);
				func_22(&iLocal_190, 524288);
				func_22(&iLocal_190, 16384);
				func_151(&Local_217, 1, 1, 1, 0);
				func_21(&iLocal_190, 16);
			}
			break;
		case 1:
			if (!func_19(iLocal_190, 16))
			{
				func_155(27, uLocal_173[0], &iLocal_190, 256);
				func_156();
				func_150(&iLocal_196, 0);
				func_134(&uLocal_162);
				func_22(&iLocal_190, 524288);
				func_22(&iLocal_190, 16384);
				func_151(&Local_217, 1, 1, 1, 0);
				func_21(&iLocal_190, 16);
			}
			break;
	}
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_20(int iParam0, int iParam1, var uParam2, float fParam3)
{
	if (_does_volume_exist(iParam0) && _does_volume_exist(iParam1))
	{
		if (is_entity_in_volume(Global_35, iParam0, true, 0) || is_entity_in_volume(Global_35, iParam1, true, 0))
		{
			if (!func_10(uParam2))
			{
				func_11(uParam2, 1);
			}
			else if (func_72(uParam2) > fParam3)
			{
				func_13(uParam2);
				return 1;
			}
		}
		else
		{
			func_13(uParam2);
			return 0;
		}
	}
	return 2;
}

void func_21(int iParam0, int iParam1)
{
	func_157(iParam0, iParam1);
}

void func_22(int iParam0, int iParam1)
{
	func_158(iParam0, iParam1);
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (is_entity_dead(Global_35))
	{
		bVar0 = true;
	}
	if (func_9(*uParam0, 0))
	{
		if (func_159(Global_35, iParam1, 0, 1) || func_159(Global_35, iParam2, 0, 1))
		{
			if (!func_160(*iParam3, iParam4))
			{
				task_look_at_entity(*uParam0, Global_35, -1, 2108, 51, 0);
				func_157(iParam3, iParam4);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_160(*iParam3, iParam4))
		{
			func_24(*uParam0);
			func_158(iParam3, iParam4);
		}
	}
}

void func_24(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

void func_25(int iParam0)
{
	if (func_19(iLocal_190, 2048))
	{
		return;
	}
	if (iParam0 >= 6 && iParam0 <= 27)
	{
		if (iLocal_194 < 2)
		{
			if (func_161(uLocal_173[0], 249295937))
			{
				func_21(&iLocal_190, 2048);
			}
		}
	}
}

void func_26(int iParam0)
{
	if (iParam0 <= 2 || iParam0 >= 36)
	{
		func_162();
		return;
	}
	if (is_entity_dead(&(uLocal_173[0])) || is_entity_dead(Global_35))
	{
		func_162();
		return;
	}
	if (fLocal_17 < 15f)
	{
		if (func_19(iLocal_190, 8192))
		{
			disable_all_control_actions(0);
			disable_all_control_actions(1);
			enable_control_action(0, 648122183, true);
			enable_control_action(0, -163964935, true);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, 1250966545, true);
			_0xc9caeaeec1256e54(724769646);
			func_163();
			func_164();
			if (!func_19(iLocal_190, 65536))
			{
				_0xc67a4910425f11f1(player_id(), "TimothyBubble");
				_0x3946fc742ac305cd(player_id(), &(uLocal_173[0]), "SPECIAL_PED_GENERIC_INTERACT_FOCUS", 0f, 0f, 0f, 0, "TimothyConvo");
				func_21(&iLocal_190, 65536);
			}
		}
		else
		{
			func_162();
		}
	}
	else
	{
		func_162();
	}
}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_165(iParam3);
	if (fParam4 == 0f)
	{
		if (func_128(iParam0, Global_35, 15f, 1))
		{
			if (!func_160(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_157(iParam1, iParam2);
				}
			}
		}
		else if (func_160(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_158(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_160(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_157(iParam1, iParam2);
			}
		}
	}
	else if (func_160(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_158(iParam1, iParam2);
	}
}

char* func_28()
{
	return "script@specialped@pdtmd_timothy_donahue@ig@ig_1@ig_1_selling_books";
}

char* func_29()
{
	return "script@specialped@pdtmd_timothy_donahue@ig@ig_3@ig_3_runaway";
}

void func_30()
{
	if (!_does_volume_exist(iLocal_178))
	{
		iLocal_178 = _create_volume_sphere_with_custom_name(2644.527f, -1208.351f, 52.287f, 0f, 0f, 0f, 32f, 32f, 32f, "RandomEventBlock");
	}
	if (!_does_volume_exist(iLocal_180))
	{
		iLocal_180 = _create_volume_cylinder_with_custom_name(2644.642f, -1210.8f, 61.5079f, 0f, 0f, 0f, 7f, 3f, 10f, "Notice");
	}
	if (!_does_volume_exist(iLocal_179))
	{
		iLocal_179 = _create_volume_cylinder_with_custom_name(2644.405f, -1210.418f, 53.7178f, 0f, 0f, 0f, 1.5f, 2f, 3f, "Trigger");
	}
	if (!_does_volume_exist(iLocal_181))
	{
		iLocal_181 = _create_volume_box_with_custom_name(2644.397f, -1208.503f, 53.77906f, 0f, 0f, 0f, 6f, 2f, 4f, "StayAway");
	}
	if (!_does_volume_exist(iLocal_182))
	{
		iLocal_182 = _create_volume_box_with_custom_name(2642.342f, -1207.344f, 59.44929f, 0f, 0f, 0f, 37f, 25f, 17f, "Speech");
	}
	if (!_does_volume_exist(iLocal_183))
	{
		iLocal_183 = _create_volume_cylinder_with_custom_name(2644.566f, -1208.341f, 53.3452f, 0f, 0f, 0f, 1.1f, 1.1f, 4f, "Close");
	}
	if (!_does_volume_exist(iLocal_184))
	{
		iLocal_184 = _0x0eb78c2b156635b1(665633627, 2644.566f, -1208.341f, 53.3452f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		_0xbe551c2cc421185d(iLocal_184, 1);
		_0x5b23dff8e0948bb2(iLocal_184, 0);
	}
}

int func_31(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_166(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_32(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

var func_33(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_167(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_168())
	{
		iVar2 = func_168();
	}
	iVar5 = func_169(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_170(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_170(iVar6) == 0)
			{
				return func_171(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_170(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_170(iVar6) == 0)
			{
				return func_171(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_171(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_172(iParam0);
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_38()
{
	if (func_173() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_39(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_174(uParam0, iParam1, sParam2))
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

void func_40(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_41(var uParam0)
{
	func_42(uParam0, 0);
	func_57(uParam0, 0);
	func_53(uParam0, 1);
	func_49(uParam0, 1);
	func_175(uParam0, 0);
	func_50(uParam0, 1);
	func_176(uParam0, 1, 1, 1);
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 16384);
	}
	else
	{
		func_178(&(uParam0->f_1), 16384);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 131072);
	}
	else
	{
		func_178(&(uParam0->f_1), 131072);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 4);
	}
	else
	{
		func_177(uParam0, 4);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 8);
	}
	else
	{
		func_178(&(uParam0->f_1), 8);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 8);
	}
	else
	{
		func_177(uParam0, 8);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 32);
	}
	else
	{
		func_177(uParam0, 32);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 64);
	}
	else
	{
		func_177(uParam0, 64);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 16);
	}
	else
	{
		func_177(uParam0, 67108864);
		func_177(uParam0, 16);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 256);
	}
	else
	{
		func_177(uParam0, 256);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 524288);
	}
	else
	{
		func_177(uParam0, 524288);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 2);
	}
	else
	{
		func_177(uParam0, 2);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 256);
	}
	else
	{
		func_178(&(uParam0->f_1), 256);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 4);
	}
	else
	{
		func_178(&(uParam0->f_1), 4);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 16);
	}
	else
	{
		func_178(&(uParam0->f_1), 16);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 2);
	}
	else
	{
		func_178(&(uParam0->f_1), 2);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 2048);
	}
	else
	{
		func_178(&(uParam0->f_1), 2048);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 1);
	}
	else
	{
		func_178(&(uParam0->f_1), 1);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 128);
	}
	else
	{
		func_177(uParam0, 128);
	}
}

void func_60(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			set_ped_config_flag(&(uLocal_173[0]), 448, false);
			set_ped_config_flag(&(uLocal_173[0]), 153, false);
			func_130(27);
			break;
	}
	iLocal_22 = iParam0;
}

int func_61(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_179(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_179(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	if (_0xa0bc8faed8cfeb3c(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1, vector3 vParam2)
{
	if (!does_entity_exist(*iParam0))
	{
		*iParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_63(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

void func_64(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_65(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_180(iParam0, iParam1))
		{
			if (func_181(iParam0, iParam1))
			{
				if (func_182(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_183(iParam0);
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

void func_66()
{
	Var0 = { func_184(0) };
	func_186(Local_217[0], Var0, func_185(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_184(1) };
	sVar2 = func_187(&iVar3, 0);
	func_186(Local_217[1], Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	iLocal_252 = func_149(3, 0, 0);
	func_150(&iLocal_196, 0);
	func_21(&iLocal_190, 262144);
}

int func_67(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_188(iParam0);
}

void func_68(int iParam0, char* sParam1, bool bParam2)
{
	if (_0x6f1f0b17109309da(iParam0, sParam1))
	{
		set_anim_scene_bool(iParam0, sParam1, bParam2, false);
	}
}

void func_69()
{
	iVar0 = iLocal_193;
	if (func_148(Local_217[0], 1, 0))
	{
		func_82(Local_217[0], 0, 0);
	}
	if (func_148(Local_217[1], 1, 0))
	{
		func_82(Local_217[1], 0, 0);
	}
	switch (iVar0)
	{
		case 0:
			iLocal_193++;
			func_60(6);
			break;
		case 1:
			iLocal_193++;
			func_60(7);
			break;
		case 2:
			iLocal_193++;
			func_60(8);
			break;
		case 3:
			iLocal_193++;
			func_60(9);
			break;
		case 4:
			iLocal_193++;
			func_60(10);
			break;
		case 5:
			iLocal_193++;
			func_60(11);
			break;
		case 6:
			iLocal_193 += 2;
			func_60(12);
			break;
		case 7:
			iLocal_193++;
			func_60(13);
			break;
		case 8:
			iLocal_193++;
			func_60(14);
			break;
		case 9:
			iLocal_193 += 2;
			func_60(15);
			break;
		case 10:
			iLocal_193++;
			func_60(16);
			break;
		case 11:
			iLocal_193++;
			func_60(17);
			break;
		case 12:
			iLocal_193++;
			func_60(18);
			break;
		case 13:
			iLocal_193 += 2;
			func_60(19);
			break;
		case 14:
			iLocal_193++;
			func_60(20);
			break;
		case 15:
			iLocal_193++;
			func_60(21);
			break;
		case 16:
			iLocal_193 += 2;
			func_60(22);
			break;
		case 17:
			iLocal_193++;
			func_60(23);
			break;
		case 18:
			iLocal_193++;
			func_60(24);
			break;
		case 19:
			if (func_38())
			{
				iLocal_193++;
			}
			else
			{
				iLocal_193 = 0;
			}
			func_60(25);
			break;
		case 20:
			iLocal_193 = 0;
			func_60(26);
			break;
		case 21:
			iLocal_193 = 0;
			func_60(27);
			break;
		case 22:
			func_60(28);
			break;
		default:
			break;
	}
}

bool func_70(int iParam0)
{
	bVar0 = _is_anim_scene_loaded(*iParam0, true, false);
	bVar1 = _is_anim_scene_started(*iParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = _does_anim_scene_exist(*iParam0);
	bVar2 = _is_anim_scene_loading(*iParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*iParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

void func_71(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_136() - fParam1);
	func_189(uParam0, 1);
	func_190(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_72(var uParam0)
{
	if (!func_10(uParam0))
	{
		return 0f;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_136() - uParam0->f_1);
}

int func_73(int iParam0)
{
	iVar0 = func_191(1, 5, 3);
	if ((is_bit_set(iParam0, 1) && is_bit_set(iParam0, 2)) && is_bit_set(iParam0, 4))
	{
		iParam0 = 0;
	}
	if (!is_bit_set(iParam0, iVar0))
	{
		return iVar0;
	}
	return -1;
}

bool func_74(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_192(iParam0, &Var0);
}

bool func_75(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_193(cParam1, cParam0);
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

void func_76(int iParam0, var uParam1, var uParam2)
{
	if (!_does_volume_exist(*iParam0))
	{
		return;
	}
	if (!is_itemset_valid(*uParam1))
	{
		*uParam1 = create_itemset(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = create_itemset(true);
		iVar3 = _0x886171a12f400b89(*iParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
				iVar2 = _0x3ffb15534067dcd4(iVar1);
				if (is_entity_dead(iVar2))
				{
					add_to_itemset(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		destroy_itemset(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = get_itemset_size(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = get_indexed_item_in_itemset(iVar8, *uParam1);
				iVar6 = _0x3ffb15534067dcd4(iVar5);
				set_entity_no_collision_entity(Global_35, iVar6, true);
				set_entity_no_collision_entity(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_77(bool bParam0)
{
	iVar0 = func_194();
	if (does_entity_exist(iVar0))
	{
		if (bParam0)
		{
			_0x6dad6630ae4a74cb(iVar0, 1);
			set_entity_no_collision_entity(Global_35, iVar0, true);
			set_entity_no_collision_entity(iVar0, Global_35, true);
		}
		else
		{
			_0x6dad6630ae4a74cb(iVar0, 0);
		}
	}
}

char* func_78()
{
	if (func_195())
	{
		return "ARTHUR";
	}
	else if (func_38())
	{
		return "JOHN";
	}
	return "";
}

char[] func_79()
{
	return "pbl_interactive";
}

bool func_80(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, float fParam5, int iParam6)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iParam0))
	{
		return false;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar1, false, sParam3, 2))
	{
		if (!bLocal_14)
		{
			if (!func_110(Global_35, 242628503))
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				open_sequence_task(&iVar0);
				task_swap_weapon(0, 0, 1, 0, 0);
				task_follow_nav_mesh_to_coord(0, vVar1, 1f, iParam6, fParam5, 4194304, vVar1.f_3.f_2);
				task_turn_ped_to_face_entity(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
				task_enter_anim_scene(0, iParam1, sParam2, sParam3, 1069379748, 0, 0, 20000, -1082130432);
				close_sequence_task(iVar0);
				task_perform_sequence(Global_35, iVar0);
				set_ped_keep_task(Global_35, true);
				clear_sequence_task(&iVar0);
				bLocal_14 = true;
			}
		}
		else if ((bParam4 && !func_110(Global_35, 242628503)) || (((!bParam4 && is_entity_at_coord(Global_35, vVar1, 2.5f, 2.5f, 3f, false, true, 0)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iParam0)))
		{
			bLocal_14 = false;
			return true;
		}
	}
	return false;
}

void func_81(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_82(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_196(iParam0, 13))
	{
		func_197(iParam0, 0);
	}
	else
	{
		func_198(iParam0, 0);
	}
	if (func_199(iParam0->f_6))
	{
		if (bParam2)
		{
			func_200(&(iParam0->f_6), 0, 1);
		}
	}
}

char[] func_83()
{
	return "pbl_p2_loop01";
}

char[] func_84()
{
	return "pbl_p2_loop02";
}

char[] func_85()
{
	return "pbl_p3_loop01";
}

char[] func_86()
{
	return "pbl_p4_loop01";
}

char[] func_87()
{
	return "pbl_p5_loop01";
}

char[] func_88()
{
	return "pbl_p6_loop01";
}

char[] func_89()
{
	return "pbl_p6_loop02";
}

char[] func_90()
{
	return "pbl_p1_loop02";
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

char[] func_92()
{
	return "pbl_p7_loop01";
}

char[] func_93()
{
	return "pbl_p8_p1_loop01";
}

char[] func_94()
{
	return "pbl_p1_loop03";
}

char[] func_95()
{
	return "pbl_p8_p2_loop01";
}

char[] func_96()
{
	return "pbl_p9_p1_loop01";
}

char[] func_97()
{
	return "pbl_p9_p2_loop01";
}

char[] func_98()
{
	return "pbl_p1_loop04";
}

char[] func_99()
{
	return "pbl_p9_p2_loop02";
}

char[] func_100()
{
	return "pbl_p10_loop01";
}

char[] func_101()
{
	return "pbl_p1_loop05";
}

char[] func_102()
{
	return "pbl_p11_P2_loop01";
}

char[] func_103()
{
	return "pbl_p12_loop01";
}

char[] func_104()
{
	return "pbl_p13_loop01";
}

char[] func_105()
{
	return "pbl_p1_loop06";
}

void func_106(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_107(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_108(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_201(iParam0);
		return func_202(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_109(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			waypoint_playback_override_speed(iParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

bool func_110(int iParam0, int iParam1)
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

void func_111(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!does_entity_exist(*uParam0))
		{
			return;
		}
		if (!is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	remove_shocking_event(*uParam1);
}

void func_112(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_203(iParam0, iParam1);
}

void func_113(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_204(iParam0, iParam1);
}

void func_114(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_115(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

void func_116(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_205(vVar0, 0);
}

void func_117(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_10(&(uParam0->f_13)))
	{
		func_13(&(uParam0->f_13));
	}
}

void func_118(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_206(0, -1);
	}
	func_207();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_119()
{
	if (func_173() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_208((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_120(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_121()
{
	return Global_1310750->f_16077 != 0;
}

bool func_122(var uParam0, int iParam1)
{
	return func_209(*uParam0, iParam1);
}

int func_123(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_125(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_128(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_128(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_126(int iParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x1f0e401031e20146(*iParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = _0xa9016536015de29d(*iParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = _0x23e33cb9f4a3f547(*iParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = _0x0df57f86fe71dbe5(*iParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*iParam0, sParam1);
	}
	return false;
}

int func_127()
{
	return &Global_1899515;
}

bool func_128(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_129(int iParam0)
{
	return iParam0 != -15;
}

void func_130(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_127();
}

int func_131(var uParam0)
{
	if (!func_10(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_135(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_210() - round((uParam0->f_1 * 1000f)));
}

Vector3 func_132(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_133(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_134(var uParam0)
{
	func_71(uParam0, 0f);
}

bool func_135(var uParam0)
{
	return func_133(*uParam0, 2);
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

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_139(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_208((*Global_1835011)[iParam0]->f_1);
}

int func_140(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_211((*Global_1835011)[iParam0]->f_1);
}

bool func_141(int iParam0)
{
	iVar0 = func_212();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

bool func_142(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_213(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_143(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_214(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_215(iVar1, 0))
		{
			func_216(&iVar1, vVar8, 1083179008);
		}
		return true;
	}
	return false;
}

bool func_144()
{
	return Global_1392040->f_6;
}

bool func_145()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

int func_146(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!does_entity_exist(*uParam2))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || _0x285d36c5c72b0569(Global_35) <= 1f)
	{
		if (func_147(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((has_entity_been_damaged_by_any_ped(*uParam2) || has_entity_been_damaged_by_any_object(*uParam2)) || has_entity_been_damaged_by_any_vehicle(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (_0x9c81338b2e62ce0a(player_id(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (is_shocking_event_in_sphere(217247011, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (is_shocking_event_in_sphere(956330317, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (is_shocking_event_in_sphere(-966930978, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_147(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_217(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_218(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_220(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_221(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_222(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_223(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_224(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_225(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_226(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_227(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_227(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_228(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_229(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_230(uParam2, 4000))
				{
					if ((func_231(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_232(uParam2, iParam0)) && func_233(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_231(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_232(uParam2, iParam0)) && func_233(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_234(iParam0, Global_1935630->f_41))
							{
								func_235();
								*uParam3 = 2;
								func_219(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_234(iParam0, Global_1935630->f_41))
						{
							func_235();
							*uParam3 = 2;
							func_219(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_236(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_210() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_235();
						*uParam3 = 2;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_237())
					{
						if (func_234(iParam0, Global_1935630->f_42))
						{
							func_235();
							*uParam3 = 2;
							func_219(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_238(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_239(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_240(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_241(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_242(uParam2, 4000))
				{
					if (func_243(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_219(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_244(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_219(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_245(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_219(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_148(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_199(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_246(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_149(int iParam0, int iParam1, int iParam2)
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

void func_150(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_13(&(iParam0->f_18));
}

void func_151(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_199((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_200(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_152()
{
	if (_is_ped_carrying(Global_35) || func_247())
	{
		return true;
	}
	return false;
}

bool func_153(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar1 = { get_entity_forward_vector(*uParam0) };
	vVar4 = { get_entity_coords(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_214(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_154(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_248(&iVar0);
	if (func_209(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_249(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_209(iVar0, 134217728))
	{
		func_250(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_251(558))
				{
					func_252(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_155(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_160(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_254(func_253(-1342635612)) < 5)
	{
		func_255(func_253(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_127();
	func_157(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_156()
{
	func_256();
	func_257(-1, 0, 0, 0, 0);
	func_258(60, 0, 1);
}

void func_157(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_158(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_161(var uParam0, int iParam1)
{
	if (is_scripted_speech_playing(*uParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_162()
{
	if (func_19(iLocal_190, 65536))
	{
		_0xc67a4910425f11f1(player_id(), "TimothyConvo");
		func_22(&iLocal_190, 65536);
	}
}

void func_163()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_259(0);
	}
}

void func_164()
{
	Global_1905944->f_5695 = 1;
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

int func_166(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_260(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_261(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_262(iVar0, bParam8);
	return iVar0;
}

void func_167(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_168()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_170(int iParam0)
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

int func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_263(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_168())
	{
		return -1;
	}
	iVar0 = func_169(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_264(iVar1, 0);
	func_265(iVar1, 0);
	func_203(iVar1, 0);
	func_204(iVar1, 0);
	func_266(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_267(iVar1, iParam4);
	}
	return iVar1;
}

int func_172(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_173()
{
	return Global_1572887->f_12;
}

bool func_174(var uParam0, int iParam1, char* sParam2)
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

void func_175(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_1), 128);
	}
	else
	{
		func_178(&(uParam0->f_1), 128);
	}
}

void func_176(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_178(uParam0, 268435456);
	}
	else
	{
		func_177(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_178(uParam0, 1073741824);
	}
	else
	{
		func_177(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_178(uParam0, 536870912);
	}
	else
	{
		func_177(uParam0, 536870912);
	}
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_179(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_268(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_180(int iParam0, int iParam1)
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

bool func_181(int iParam0, int iParam1)
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

bool func_182(int iParam0, int iParam1)
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
	if (!func_180(iParam0, iVar0))
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

void func_183(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<2> func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = -163964935;
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = 648122183;
			break;
		case 2:
			Var0 = "TM1_UC_BUY";
			Var0.f_1 = -163964935;
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
	}
	return Var0;
}

char* func_185()
{
	return "GREET_MALE";
}

void func_186(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_199(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_269(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_270(iParam0->f_6, iParam0->f_5, 0);
			}
			func_271(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_272(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

char* func_187(int iParam0, bool bParam1)
{
	if (func_195())
	{
		if (bParam1)
		{
			*iParam0 = 2;
			return "INSULT_DONAHUE_CONV_PART1";
		}
		else
		{
			*iParam0 = 1;
			return "INSULT_DONAHUE_CONV_PART1";
		}
	}
	else if (bParam1)
	{
		*iParam0 = 8;
		return "INSULT_MALE_CONV_PART1";
	}
	else
	{
		*iParam0 = 16;
		return "INSULT_MALE_CONV_PART1";
	}
	return "INSULT_MALE_CONV_PART1";
}

int func_188(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_191(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_273())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_274(func_273(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

bool func_192(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_193(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

int func_194()
{
	return Global_1900383->f_393;
}

bool func_195()
{
	if (func_173() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_196(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_197(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_198(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_199(int iParam0)
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

void func_200(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_199(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_275(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_276(iVar0);
	*uParam0 = 0;
}

int func_201(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_202(int iParam0, int iParam1, var uParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_203(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_205(vector3 vParam0, int iParam3)
{
	if (func_260(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_277(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_206(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_278(&Global_0, 8);
	}
	if (!func_279() || func_173() != -1)
	{
		return;
	}
	func_278(&Global_0, 1);
}

void func_207()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_208(int iParam0)
{
	iVar0 = func_280(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_209(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_210()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_211(int iParam0)
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
		iVar0 = func_281(iParam0);
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

int func_212()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_213(var uParam0, vector3 vParam1, int iParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, iParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_214(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_282(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_110(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_217(var uParam0, bool bParam1, int iParam2)
{
	func_283(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_284(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_178(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_285(1))
						{
							func_178(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_285(1) || *uParam0 & 8192 != 0))
				{
					func_177(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_286(uParam0))
			{
				uParam0->f_15 = func_210();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_210() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_287(uParam0);
}

bool func_218(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_288(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_289(iParam0, iVar2) <= func_290(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_219(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_291(iParam2, 1, 1, 1, 0))
	{
		func_178(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_292(uParam1, 1);
	func_293();
}

bool func_220(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_294(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_295(uParam1);
			if (func_296(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_297(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_292(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_292(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_221(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_298(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_295(uParam2);
		if (func_296(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_297(uParam2)
				{
					func_292(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_222(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_288(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_297(uParam1)
		{
			fVar3 = func_295(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_223(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_299(bParam1, bParam2, bParam3);
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

bool func_224(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_210();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_300(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_233(uParam2, iParam1))
			{
				func_292(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_226(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_301(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_233(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_292(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_227(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_302(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_292(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_292(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_303(iParam1, vVar0, vVar4))
					{
						func_292(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_292(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_303(iParam1, vVar0, vVar7))
					{
						func_292(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_228(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_288(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_304(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_305(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_306(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_307(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_308(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_229(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_230(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_210();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_309(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_310(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_233(var uParam0, int iParam1)
{
	if (func_311(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_234(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_312(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_235()
{
}

bool func_236(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_313(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_210();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_314(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_210();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_237()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_210() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_238(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_290(uParam0);
	if (uParam0->f_12 > func_315(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_316(iParam1);
	iVar1 = func_317(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_239(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_318(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_240(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_319(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_320(uParam1, iParam0))
					{
						if (func_314(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_241(int iParam0, var uParam1)
{
	if (!func_321(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_242(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_210();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_243(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_244(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_210();
	}
	else if (func_210() - uParam1->f_4) > func_322(uParam1)
	{
		return func_323(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_245(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_246(int iParam0, bool bParam1)
{
	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	return !func_324(iParam0, 4);
}

bool func_247()
{
	if (func_325(Global_35) || func_326(Global_35))
	{
		return true;
	}
	return false;
}

void func_248(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_249(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_248(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_327(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_134(&(iParam1->f_13));
		}
		if (func_328(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_329(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_249(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_330(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_331(*uParam0, 1, 1);
						}
					}
					else if (func_332(iParam1, 22))
					{
						func_331(*uParam0, 0, 1);
					}
				}
				if (func_333(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_334(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_335(iParam8);
					if (func_336(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_337(uParam3);
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
					func_338(iParam1, uParam3, fVar8);
					if (func_339(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_151(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_340(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_333(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_341(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_336(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_334(uParam0, func_333(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_335(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_151(uParam3, 0, 0, 1, 1);
					}
					func_342(iParam1, 1);
				}
				func_338(iParam1, uParam3, fVar8);
				if (func_340(uParam0, iParam1, fParam4, bVar6))
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
			func_343(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_250(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_344(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_345(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_251(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_173() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_252(int iParam0, bool bParam1)
{
	func_346(iParam0, &iVar0, &iVar1);
	if (!func_347(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_348(iVar0, iVar1);
}

struct<2> func_253(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_254(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_256()
{
	if (!func_349(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_350(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_257(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_351() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_349(iVar1) && !func_352(iVar1, iParam2)) && (!bParam3 || !func_353(iVar1))) && (!bParam4 || !func_354(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_355(iVar0);
			}
		}
		iVar0++;
	}
}

void func_258(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_356(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

void func_259(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_260(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_261(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_262(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_263(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_264(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_357(iParam0);
	}
	else
	{
		func_358(iParam0, iParam1);
	}
	func_359();
}

void func_265(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_266(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_267(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_360(iParam1))
		{
			func_65(iParam0, 41788943);
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
			func_361(iParam0, 0, 1);
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
			func_362(iParam0, 0);
			bVar0 = true;
		}
		func_363(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_269(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_270(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_271(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	if (bParam1)
	{
		func_364(iParam0, 4);
		func_365(iVar0, 1);
		func_366(iVar0, 1);
	}
	else
	{
		func_367(iParam0, 4);
		func_366(iVar0, 0);
	}
}

void func_272(int* iParam0, char* sParam1)
{
	if (func_199(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_270(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_198(iParam0, 1);
}

bool func_273()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_274(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_275(int iParam0)
{
	return iParam0;
}

void func_276(int iParam0)
{
	if (!func_368(iParam0))
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

bool func_277(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_278(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_279()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_280(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_281(iParam0);
}

int func_281(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_369(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_282(int iParam0, int iParam1, bool bParam2)
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

void func_283(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_370();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_371(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_284(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_285(bool bParam0)
{
	if (func_372(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_286(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_173() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_373(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_373(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_317(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_287(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_374(uParam0);
	}
}

bool func_288(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_317(iParam2);
	}
	else
	{
		iVar1 = func_316(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_317(iParam0);
	}
	else
	{
		iVar0 = func_316(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_209(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_289(int iParam0, int iParam1)
{
	return func_312(iParam0, iParam1, 1, 1);
}

float func_290(var uParam0)
{
	return uParam0->f_26;
}

bool func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_292(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(uParam0, 134217728);
	}
	else
	{
		func_177(uParam0, 134217728);
	}
}

void func_293()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_294(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_312(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_375(iVar0, 0)))
		{
			if (func_376(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_295(var uParam0)
{
	return uParam0->f_17;
}

bool func_296(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_209(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_297(var uParam0)
{
	return uParam0->f_18;
}

bool func_298(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_375(iVar0, 0)))
		{
			if (func_377(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_299(bool bParam0, bool bParam1, bool bParam2)
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

float func_300(var uParam0)
{
	return uParam0->f_23;
}

int func_301(var uParam0)
{
	return uParam0->f_21;
}

int func_302(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_303(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_378(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_304(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_379(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_305(int iParam0)
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

bool func_306(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_380(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_307(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_380(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_308(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_380(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_309(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_381(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_311(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_312(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_313(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_314(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_314(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_315(var uParam0)
{
	return uParam0->f_24;
}

int func_316(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_317(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_318(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_309(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_312(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_312(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_319(int iParam0, var uParam1, bool bParam2)
{
	func_372(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_320(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_320(uParam1, iVar1))
				{
					if (func_314(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_320(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_321(int iParam0)
{
	if (func_38())
	{
		return 0;
	}
	return func_382((*Global_1347702)[58]->f_15, 1);
}

int func_322(var uParam0)
{
	return uParam0->f_20;
}

int func_323(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_324(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_325(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return 0;
	}
	_0x20a4bf0e09bee146(iVar0);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar1 = get_itemset_size(iVar0);
	if (iVar1 == 0)
	{
	}
	destroy_itemset(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_383(iVar9);
		if (!_0x608bc6a6aacd5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else
			{
				if (is_entity_dead(iVar7))
				{
				}
				iVar8 = _get_entity_carry_config(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = func_194();
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return 0;
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
		return 1;
	}
	return 0;
}

float func_327(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_328(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_384(iParam0, iParam1))
		{
			if (!func_209(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_151(uParam2, 0, 0, 1, 0);
				func_178(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_209(iParam1->f_10, 1))
		{
			func_385(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_177(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_329(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_209(iParam4, 32);
		func_386(iParam1, uParam2, 0);
		iVar5 = func_387(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_151(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_209(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_209(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_209(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_209(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_209(iParam4, 8388608) || func_209(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_209(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_209(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_332(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_332(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_209(iParam4, 67108864))
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
				iParam6 = func_388(uParam0);
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
			if (func_209(iParam4, 268435456))
			{
				iVar8 = func_389(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_390(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_332(iParam1, 23))
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
			if (func_209(iParam4, 2) || func_209(iParam4, 16))
			{
				func_331(*uParam0, 1, 1);
			}
			else
			{
				func_331(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_330(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_331(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_332(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_333(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_391(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_334(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_392(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_209(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_335(int iParam0)
{
	if (func_209(iParam0, 4))
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
	if (func_209(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_209(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_336(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_393(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_394(Global_35)) || func_395(Global_35)) || func_396(Global_35));
	fVar12 = -1f;
	if (func_10(&(iParam1->f_13)))
	{
		fVar12 = func_12(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_199((*uParam4)[iVar0]->f_6);
		func_397(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_398(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_399(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_151(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_400(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_386(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_401(iParam1, fParam6, iParam1->f_9))
					{
						func_134(&(iParam1->f_18));
						if (bVar6)
						{
							func_400(uParam4, 0, 0);
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
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_402(iParam1, fParam2);
	}
	return bVar5;
}

void func_337(var uParam0)
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

void func_338(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_403((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_402(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_339(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_404(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_405(iParam1, 0);
				func_386(iParam1, uParam2, func_332(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_340(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_134(&(iParam1->f_18));
			return 0;
		}
		else if (func_10(&(iParam1->f_18)))
		{
			func_13(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_10(&(iParam1->f_18)))
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
	return func_406(&(iParam1->f_18), fParam2);
	return 1;
}

void func_341(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_397(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_342(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_343(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_386(iParam0, uParam1, 1);
	func_151(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_344(int* iParam0)
{
	if (func_332(iParam0, 0))
	{
		if (func_407(iParam0))
		{
			func_342(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_345(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_408(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_347(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_409(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_410(iParam0))
	{
		return false;
	}
	if (func_411(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_412(iParam0, 1)) || func_413(32768))
	{
		if (!func_412(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_414())
	{
		return false;
	}
	return true;
}

void func_348(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_349(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_350(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_351()
{
	return Global_1310750->f_16037;
}

bool func_352(int iParam0, int iParam1)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_353(int iParam0)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	if (func_415(64) && func_416(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_354(int iParam0)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_355(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_349(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_417(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_356(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_418(iParam0, iParam1, bParam2);
}

int func_357(int iParam0)
{
	iVar0 = func_369(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_419(iVar0);
}

int func_358(int iParam0, int iParam1)
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
			func_420(iVar2);
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

void func_359()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_360(int iParam0)
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

void func_361(int iParam0, int iParam1, bool bParam2)
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

void func_362(int iParam0, bool bParam1)
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

void func_363(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

void func_364(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_365(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_324(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_366(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_367(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_368(int iParam0)
{
	return func_324(iParam0, 2);
}

int func_369(int iParam0)
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

bool func_370()
{
	if (func_421())
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

void func_371(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_372(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
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
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_373(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_374(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_177(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_178(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_375(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_376(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_377(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_377(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_378(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_380(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_381(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_382(int iParam0, bool bParam1)
{
	switch (func_280(iParam0))
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

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

bool func_384(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_422((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_385(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_403((*uParam0)[iVar0]))
		{
			func_197((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_386(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_200(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_150(iParam0, 0);
		}
	}
}

int func_387(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_423(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_199((*uParam2)[iVar0]->f_6))
		{
			func_197((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_388(var uParam0)
{
	iVar0 = func_424(*uParam0);
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

int func_389(var uParam0, int iParam1)
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

void func_390(int* iParam0, int* iParam1)
{
	if (!func_332(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_197(iParam1, 19);
			func_405(iParam0, 23);
			func_425(iParam1, 2);
		}
	}
}

bool func_391(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_426(16))
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
					func_427(16);
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

void func_392(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_423(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_393(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_394(int iParam0)
{
	return (func_428(iParam0, 4) || func_428(iParam0, 5));
}

int func_395(int iParam0)
{
	return func_428(iParam0, 7);
}

int func_396(int iParam0)
{
	return func_428(iParam0, 6);
}

void func_397(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_403(iParam1))
		{
			clear_bit(iParam1, 14);
			func_423(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_398(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_429(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_246(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_271(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_271(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_430(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_399(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_431(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_432(iParam1, 1))
	{
		func_433(iParam1, 1);
		return true;
	}
	return false;
}

void func_400(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_82((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_401(int* iParam0, float fParam1, bool bParam2)
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

void func_402(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_403(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_404(int iParam0)
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

void func_405(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_406(var uParam0, float fParam1)
{
	if (func_434(uParam0, fParam1))
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

bool func_407(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_408(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_435())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_436(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_312(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_134(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_437(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_274(func_74(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_409(int iParam0, int iParam1)
{
	if (func_173() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_410(int iParam0)
{
	if (func_173() != -1)
	{
		if (func_412(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_412(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_411(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_412(iParam0, 65536) && !func_412(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_412(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_412(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_413(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_414()
{
	return Global_1905944->f_5694;
}

bool func_415(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_416(int iParam0)
{
	return func_352(iParam0, Global_1310750->f_16072 | 64);
}

void func_417(int iParam0)
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

void func_418(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

int func_419(int iParam0)
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

int func_420(int iParam0)
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

bool func_421()
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

int func_422(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_423(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_199(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_200(&(iParam1->f_6), 0, 1);
	}
	if (!func_199(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_403(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_438(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_199(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_430(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_439(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_440(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_269(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_439(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_271(iParam1->f_6, 0, 1);
				}
				else
				{
					func_271(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_424(int iParam0)
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

void func_425(int* iParam0, int iParam1)
{
	if (!func_196(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_197(iParam0, 14);
		}
	}
}

bool func_426(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_427(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_428(int iParam0, int iParam1)
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

bool func_429(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_430(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	func_439(iParam0, 18, 0, 1);
	func_439(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_431(int iParam0, bool bParam1)
{
	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	iVar0 = func_275(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_432(int iParam0, bool bParam1)
{
	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	iVar0 = func_275(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_433(int iParam0, bool bParam1)
{
	if (bParam1 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_434(var uParam0, float fParam1)
{
	if (!func_10(uParam0))
	{
		return false;
	}
	if (func_12(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_435()
{
	return (Global_1894899 & 1 != 0 && func_441() != -1);
}

float func_436(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_312(Global_35, iParam0, bParam1, bParam2);
}

bool func_437(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_438(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_324(iVar0, 2))
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
				func_442(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_439(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_440(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_275(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_441()
{
	return Global_1894899->f_2;
}

void func_442(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_365(iParam0, 1);
	func_366(iParam0, 1);
	func_367(iParam0, 128);
}

