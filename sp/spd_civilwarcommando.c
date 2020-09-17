void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -324807411;
	iLocal_15 = -1594634038;
	iLocal_16 = -1025740342;
	if (has_force_cleanup_occurred(555))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		func_2();
		func_3();
		func_4();
		func_5();
		func_6(7, iLocal_244, &iLocal_240, &uLocal_248, &uLocal_187, 0, 1097859072, 0);
		func_7(iLocal_240, &iLocal_183, 524288, 7, 0);
		iVar0 = 0;
		iLocal_185 = func_9(&iLocal_240, &iLocal_123, 20f, &Local_144, &iVar0, 0f, 2, 0, 0, func_8(iLocal_239, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		switch (iLocal_179)
		{
			case 0:
				func_10();
				func_11(1);
				break;
			case 1:
				if (func_12())
				{
					func_11(2);
				}
				break;
			case 2:
				if (func_13())
				{
					func_11(3);
				}
				break;
			case 3:
				vVar1 = { get_entity_coords(iLocal_240, true, false) - get_entity_coords(Global_35, true, false) };
				fVar4 = atan2(vVar1.y, vVar1.x);
				if (fVar4 < 0f)
				{
					fVar4 = (360f + fVar4);
				}
				fVar4 = (fVar4 - 140f);
				if (fVar4 <= -67f)
				{
					iVar5 = 3;
				}
				else if (fVar4 <= -22f)
				{
					iVar5 = 5;
				}
				else if (fVar4 >= 67f)
				{
					iVar5 = 2;
				}
				else if (fVar4 >= 22f)
				{
					iVar5 = 4;
				}
				else
				{
					iVar5 = 1;
				}
				if (!func_14(iLocal_183, 16))
				{
					if (iLocal_185 == 0 || iLocal_185 == 1)
					{
						iLocal_184 = (700 + get_game_timer());
						func_15(&iLocal_183, 16);
					}
				}
				sVar6 = func_16(iVar5);
				if (iLocal_180 == 0 || iVar5 != iLocal_180)
				{
					_0xdf7b5144e25cd3fe(iLocal_182, sVar6);
					iLocal_180 = iVar5;
				}
				if (((func_17(iLocal_240, Global_35, 0, 15f, 0) || (func_14(iLocal_183, 16) && get_game_timer() >= iLocal_184)) || func_14(iLocal_183, 16384)) && _0x23e33cb9f4a3f547(iLocal_182, sVar6))
				{
					_set_anim_scene_playback_list_bool(iLocal_182, sVar6, true);
					func_11(4);
				}
				break;
			case 4:
				if (!func_14(iLocal_183, 16384))
				{
					if (!func_14(iLocal_183, 1))
					{
						if (_get_anim_scene_progress(iLocal_182) >= 0.15f)
						{
							if (func_19(func_18(0)))
							{
								func_15(&iLocal_183, 1);
								func_20(Local_144[0], 0, 0);
								func_20(Local_144[1], 0, 0);
							}
						}
					}
					else
					{
						if (!func_14(iLocal_183, 64))
						{
							if (is_scripted_speech_playing(iLocal_240))
							{
								func_15(&iLocal_183, 64);
							}
						}
						func_21();
					}
				}
				if (_0x005e6f28dd7ed58d(iLocal_182, "U_M_O_CmrCivilwarcommando_01"))
				{
					if (!func_14(iLocal_183, 16384))
					{
						func_11(5);
					}
					else
					{
						func_11(8);
					}
				}
				break;
			case 5:
				func_21();
				if (!func_14(iLocal_183, 64))
				{
					bVar7 = is_scripted_speech_playing(iLocal_240);
					if (bVar7 || (get_game_timer() >= iLocal_184 && !bVar7))
					{
						func_15(&iLocal_183, 64);
					}
				}
				else if (!func_14(iLocal_183, 32))
				{
					if (!is_scripted_speech_playing(iLocal_240))
					{
						func_22(Local_144[0], "INTERACT_DEFUSE");
						func_20(Local_144[0], 1, 0);
						func_20(Local_144[1], 1, 0);
						iLocal_239 = 2;
						func_23(&iLocal_123, 0);
						Local_144[0]->f_13 = "";
						Local_144[1]->f_13 = "";
						func_15(&iLocal_183, 32);
					}
				}
				else
				{
					bVar8 = false;
					if (iLocal_185 == 0)
					{
						func_15(&iLocal_183, 128);
						bVar8 = true;
					}
					else if (iLocal_185 != 1)
					{
					}
					else
					{
						func_15(&iLocal_183, 256);
						bVar8 = true;
					}
					if (bVar8)
					{
						func_24(7, &iLocal_240, &iLocal_183, 2097152);
						iLocal_239 = 3;
						func_23(&iLocal_123, 0);
					}
				}
				sLocal_181 = func_16(func_25());
				if (func_14(iLocal_183, 128))
				{
					if (_is_anim_scene_loaded(iLocal_182, true, false) && _0x23e33cb9f4a3f547(iLocal_182, sLocal_181))
					{
						func_11(6);
					}
				}
				else if (func_14(iLocal_183, 256))
				{
					if (!func_14(iLocal_183, 1024))
					{
						if (func_19(func_18(4)))
						{
							func_15(&iLocal_183, 1024);
						}
					}
					else if (!func_14(iLocal_183, 2048))
					{
						if (!func_26())
						{
							if (is_scripted_speech_playing(iLocal_240) && get_current_scripted_conversation_line(func_18(4)) == 1)
							{
								iLocal_184 = (1200 + get_game_timer());
								func_15(&iLocal_183, 8388608);
								func_15(&iLocal_183, 2048);
							}
						}
						else if (!func_14(iLocal_183, 4096))
						{
							if (!_0xa2cac9def0195e6f(1))
							{
								if (func_19(func_18(5)))
								{
									iLocal_184 = (1200 + get_game_timer());
									func_15(&iLocal_183, 4096);
									func_15(&iLocal_183, 2048);
								}
							}
						}
					}
					else if (get_game_timer() >= iLocal_184 && !_0x54b187f111d9c6f8(iLocal_240, 0))
					{
						func_15(&iLocal_183, 32768);
						func_11(8);
					}
				}
				else if (get_game_timer() >= iLocal_184)
				{
					if (!func_14(iLocal_183, 2))
					{
						if (func_19(func_18(1)))
						{
							func_15(&iLocal_183, 2);
							iLocal_184 = get_game_timer() + 6500;
						}
					}
					else if (!func_14(iLocal_183, 4))
					{
						if (func_19(func_18(2)))
						{
							func_15(&iLocal_183, 4);
							iLocal_184 = get_game_timer() + 5500;
						}
					}
					else if (!func_14(iLocal_183, 8))
					{
						if (func_19(func_18(3)))
						{
							func_15(&iLocal_183, 8);
							func_15(&iLocal_183, 32768);
							iLocal_184 = get_game_timer() + 1500;
						}
					}
					else
					{
						func_15(&iLocal_183, 8388608);
						func_11(8);
					}
				}
				break;
			case 6:
				_0xc9caeaeec1256e54(724769646);
				func_27();
				func_28();
				sLocal_181 = func_16(func_25());
				if ((_does_anim_scene_exist(iLocal_182) && !_is_anim_scene_finished(iLocal_182, false)) && !_is_anim_scene_started(iLocal_182, false))
				{
					start_anim_scene(iLocal_182);
				}
				if (_is_anim_scene_finished(iLocal_182, false))
				{
					func_11(7);
				}
				break;
			case 8:
				if (!does_blip_exist(iLocal_243))
				{
					if (func_29(iLocal_240, 0))
					{
						iLocal_243 = _blip_add_for_entity(831283580, iLocal_240);
					}
				}
				if (!is_ped_in_combat(iLocal_240, 0))
				{
					set_ped_combat_attributes(iLocal_240, 46, true);
					set_ped_combat_attributes(iLocal_240, 5, true);
					task_combat_ped(iLocal_240, Global_35, 0, 0);
				}
				func_30(&(iLocal_17[6]));
				break;
			case 7:
				if (get_game_timer() >= iLocal_184)
				{
					if (func_31(Global_35, &(iLocal_17[5]), 0, 1))
					{
						task_turn_ped_to_face_entity(iLocal_240, Global_35, 1000, -1082130432, -1082130432, -1082130432);
					}
					else
					{
						task_turn_ped_to_face_coord(iLocal_240, 2022.659f, 618.8069f, 156.3129f, 1000);
					}
					iLocal_184 = (get_random_int_in_range(2000, 3500) + get_game_timer());
				}
				break;
		}
		if (!func_14(iLocal_183, 65536))
		{
			if (iLocal_179 == 7)
			{
				func_33(7, func_32());
				func_15(&iLocal_183, 65536);
			}
		}
	}
}

void func_1()
{
	iVar0 = 0;
	while (iVar0 < iLocal_17)
	{
		func_30(&(iLocal_17[iVar0]));
		iVar0++;
	}
	func_34(&iLocal_240, &uLocal_186, 161068336, 20f, 1);
	remove_scenario_blocking_area(uLocal_188, false);
	if (does_entity_exist(iLocal_241))
	{
		delete_object(&iLocal_241);
	}
	if (does_entity_exist(iLocal_242))
	{
		set_object_as_no_longer_needed(&iLocal_242);
	}
	if (!is_entity_dead(iLocal_240))
	{
		_0x39a2fc5af55a52b1(iLocal_240, -1);
		set_ped_as_no_longer_needed(&iLocal_240);
	}
	if (func_14(iLocal_183, 262144))
	{
		func_35();
	}
	_0x36559148b78853b3(1, 1, 0);
	func_36(&iLocal_189);
	func_37(7);
	terminate_this_thread();
}

void func_2()
{
	if (!func_29(Global_35, 0))
	{
		func_1();
	}
	else if (func_14(iLocal_183, 16777216) && !is_entity_in_volume(Global_35, (*(*Global_1396257)[7])[iLocal_244]->f_47, true, 0))
	{
		if (!func_38(&uLocal_245))
		{
			func_39(&uLocal_245, 0);
		}
		else if (func_40(&uLocal_245) > 10f)
		{
			func_1();
		}
	}
	else if (func_14(iLocal_183, 16777216) && func_41(7, iLocal_244, &iLocal_189, iLocal_240))
	{
		if (func_42(&iLocal_189) || func_14(iLocal_189, 8))
		{
			func_1();
		}
	}
}

void func_3()
{
	bVar0 = false;
	if (func_29(iLocal_240, 0))
	{
		if (func_31(Global_35, &(iLocal_17[5]), 0, 1))
		{
			if (((iLocal_179 == 4 || iLocal_179 == 5) || iLocal_179 == 6) || iLocal_179 == 7)
			{
				if (!func_14(iLocal_183, 1048576))
				{
					task_look_at_entity(iLocal_240, Global_35, -1, 0, 51, 0);
					func_15(&iLocal_183, 1048576);
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
	}
	if (bVar0)
	{
		if (func_14(iLocal_183, 1048576))
		{
			task_clear_look_at(iLocal_240);
			func_43(&iLocal_183, 1048576);
		}
	}
}

void func_4()
{
	if (iLocal_179 == 6)
	{
		if (!is_ped_headtracking_entity(Global_35, iLocal_240))
		{
			task_look_at_entity(Global_35, iLocal_240, -1, 0, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(Global_35, iLocal_240))
	{
		task_clear_look_at(Global_35);
	}
}

void func_5()
{
	if (!func_14(iLocal_183, 16384))
	{
		if (func_44(iLocal_240, 0, &uLocal_210, &uLocal_238, 0, 0))
		{
			func_45(Local_144[0], 1);
			func_45(Local_144[1], 1);
			func_15(&iLocal_183, 16384);
			if (iLocal_179 >= 5)
			{
				func_11(8);
			}
		}
	}
	else
	{
		if (!func_14(iLocal_183, 8388608))
		{
			if (!func_14(iLocal_183, 4194304))
			{
				stop_current_playing_speech(iLocal_240, 0);
				stop_current_playing_ambient_speech(iLocal_240, 0);
				stop_scripted_conversation(func_18(0), false, false);
				func_15(&iLocal_183, 4194304);
			}
		}
		if (!func_14(iLocal_183, 32768))
		{
			if (func_19(func_18(8)))
			{
				func_15(&iLocal_183, 32768);
			}
		}
	}
}

int func_6(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*iParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*iParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_46();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_47(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_38(uParam3))
	{
		func_48(uParam3, 0f);
	}
	else if (func_40(uParam3) >= 2f)
	{
		if (!func_49(Global_40.f_11623[iParam0]->f_2))
		{
			func_50(iParam0);
			*uParam4 = 1;
			func_51(uParam3);
			return 1;
		}
		else
		{
			func_50(iParam0);
			*uParam4 = 1;
			func_51(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_52(iParam3);
	if (fParam4 == 0f)
	{
		if (func_47(iParam0, Global_35, 15f, 1))
		{
			if (!func_53(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_54(iParam1, iParam2);
				}
			}
		}
		else if (func_53(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_55(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_53(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_54(iParam1, iParam2);
			}
		}
	}
	else if (func_53(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_55(iParam1, iParam2);
	}
}

int func_8(int iParam0, int iParam1, int iParam2)
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

int func_9(int iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_56(&iVar0);
	if (func_57(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_58(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_57(iVar0, 134217728))
	{
		func_59(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_60(558))
				{
					func_61(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_10()
{
	func_62();
	_text_database_request("SPCWCAU");
	_text_database_request("SPCW");
	request_model(iLocal_14, false);
	request_model(iLocal_15, false);
	request_model(iLocal_16, false);
	request_anim_dict(func_63());
	func_64();
	func_65(&(iLocal_17[0]), "SP_CWC_Block", 1, 0, 0, 0, -1082130432);
	_0xb56d41a694e42e86(&(iLocal_17[4]), 2500607, 0, 0, -1, -1, 10);
	uLocal_188 = func_66(&(iLocal_17[4]), 0, 0, 0);
	_0xed9582b3da8f02b4(1);
	iLocal_182 = _create_anim_scene(func_67(), 0, func_16(0), false, true);
	load_anim_scene(iLocal_182);
	func_68(&iLocal_189);
	func_69(&uLocal_210);
	func_70(&uLocal_210, 1);
	func_71(&uLocal_210, 0);
	func_72(&uLocal_210, 0);
	func_73(&uLocal_210, 0);
	func_74(&uLocal_210, 1);
	func_75(&uLocal_210, 1);
	func_76(&uLocal_210, 1);
	func_77(&uLocal_210, 32);
	func_78(&uLocal_210, 0);
}

void func_11(int iParam0)
{
	iLocal_179 = iParam0;
	switch (iParam0)
	{
		case 5:
			func_79(iLocal_240, 0);
			iLocal_184 = get_game_timer() + 2000;
			task_aim_gun_at_entity(iLocal_240, Global_35, -1, 0, 1);
			iLocal_184 = get_game_timer() + 7000;
			sLocal_181 = func_16(func_25());
			reset_anim_scene(iLocal_182, sLocal_181);
			load_anim_scene(iLocal_182);
			break;
		case 6:
			_0x3946fc742ac305cd(player_id(), iLocal_240, "COMMANDO_INTERACT_FOCUS", 0f, 0f, 0f, 0, "CommandoConvo");
			func_80(iLocal_240);
			func_45(Local_144[0], 1);
			func_45(Local_144[1], 1);
			iLocal_184 = get_game_timer() + 5000;
			task_turn_ped_to_face_entity(Global_35, iLocal_240, 2000, -1082130432, -1082130432, -1082130432);
			set_player_control(player_id(), false, 0, false);
			clear_ped_tasks(iLocal_240, 1, 0);
			if (func_81())
			{
				if (iLocal_244 == 0 || iLocal_244 == 2)
				{
					sVar0 = "player_zero";
				}
				else if (iLocal_244 == 1)
				{
					sVar0 = "ARTHUR";
				}
			}
			else
			{
				sVar0 = "JOHN";
			}
			set_anim_scene_entity(iLocal_182, sVar0, Global_35, 0);
			set_anim_scene_entity(iLocal_182, "p_cs_rag01x", iLocal_241, 0);
			set_anim_scene_entity(iLocal_182, "U_M_O_CmrCivilwarcommando_01", iLocal_240, 0);
			set_anim_scene_entity(iLocal_182, "p_chair02x", iLocal_242, 0);
			func_15(&iLocal_183, 262144);
			break;
		case 7:
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_COMMANDO_01"));
			func_45(Local_144[0], 0);
			func_45(Local_144[1], 0);
			func_22(Local_144[0], "INTERACT_GREET");
			func_35();
			break;
		case 8:
			func_50(7);
			set_ped_sphere_defensive_area(iLocal_240, get_entity_coords(iLocal_240, true, false), 6f, 0, 0, 0);
			func_82(&iLocal_123, &Local_144);
			func_15(&iLocal_183, 16384);
			break;
	}
}

bool func_12()
{
	if (!_text_database_has_loaded("SPCWCAU") || !_text_database_has_loaded("SPCW"))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_14))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_15))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_16))
	{
		return false;
	}
	if (!has_anim_dict_loaded(func_63()))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iLocal_182, true, false))
	{
		return false;
	}
	if (_0x5c16855277819bbf() != 1)
	{
		return false;
	}
	return true;
}

bool func_13()
{
	vVar1 = { func_83() };
	if ((func_84(&uVar0, vVar1, vVar1.f_3) && func_85(&uVar0, vVar1)) && func_86(&uVar0))
	{
		set_ped_relationship_group_hash(iLocal_240, 623901053);
		set_blocking_of_non_temporary_events(iLocal_240, true);
		set_ped_keep_task(iLocal_240, true);
		func_87(iLocal_240, 7);
		if (func_88())
		{
			func_89(&uLocal_25, Global_35, "JOHN", 0);
		}
		else
		{
			func_89(&uLocal_25, Global_35, "ARTHUR", 0);
		}
		func_89(&uLocal_25, iLocal_240, "COMMANDO", 0);
		func_90(&iLocal_240, &uLocal_186, 161068336, 20f, -1082130432);
		func_91();
		if (func_81())
		{
			if (iLocal_244 == 0 || iLocal_244 == 2)
			{
				sVar5 = "player_zero";
			}
			else if (iLocal_244 == 1)
			{
				sVar5 = "ARTHUR";
			}
		}
		else
		{
			sVar5 = "JOHN";
		}
		_0x7c00cfc48a782dc0(&(iLocal_17[6]), iLocal_240, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		set_anim_scene_entity(iLocal_182, "U_M_O_CmrCivilwarcommando_01", iLocal_240, 0);
		set_anim_scene_entity(iLocal_182, "p_cs_rag01x", iLocal_241, 0);
		set_anim_scene_entity(iLocal_182, sVar5, Global_35, 0);
		set_anim_scene_entity(iLocal_182, "p_chair02x", iLocal_242, 0);
		start_anim_scene(iLocal_182);
		return true;
	}
	return false;
}

bool func_14(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_15(int iParam0, int iParam1)
{
	func_54(iParam0, iParam1);
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_sitting_base_01";
		case 1:
			return "Pl_enter_front";
		case 2:
			return "Pl_enter_90_L";
		case 3:
			return "Pl_enter_90_R";
		case 4:
			return "Pl_enter_45_L";
		case 5:
			return "Pl_enter_45_R";
		case 6:
			return "Pl_P_well_aint_from_south";
		case 7:
			return "Pl_P_I_aint_no_southerner";
		case 8:
			return "Pl_P_I_guess_so";
		case 9:
			return "Pl_P_I_suppose_so";
		case 10:
			return "Pl_P_I_dont_have_a_side";
	}
	return "";
}

bool func_17(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_92(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_47(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

char* func_18(int iParam0)
{
	switch (iLocal_244)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "SPCWC_IG1_INTRO";
				case 1:
					return "SPCWC_IG1_WARN1";
				case 2:
					return "SPCWC_IG1_WARN2";
				case 3:
					return "SPCWC_IG1_SHOOT";
				case 4:
					return "SPCWC_IG1_NEG";
				case 6:
					return "SPCWC_IG1_POS";
				case 8:
					return "SPCWC_IG1_SHOOT";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "SPCWC_IG2_INTRO";
				case 1:
					return "SPCWC_IG2_WARN1";
				case 2:
					return "SPCWC_IG2_WARN2";
				case 3:
					return "SPCWC_IG2_SHOOT";
				case 4:
					return "SPCWC_IG2_NEG";
				case 6:
					return "SPCWC_IG2_POS";
				case 8:
					return "SPCWC_IG1_SHOOT";
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "SPCWC_IG3_INTRO";
				case 1:
					return "SPCWC_IG3_WARN1";
				case 2:
					return "SPCWC_IG3_WARN2";
				case 3:
					return "SPCWC_IG3_SHOOT";
				case 4:
					return "SPCWC_IG3_NEG1";
				case 5:
					return "SPCWC_IG3_NEG2";
				case 6:
					return "SPCWC_IG3_POS1";
				case 7:
					return "SPCWC_IG3_POS2";
				case 8:
					return "SPCWC_IG1_SHOOT";
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "SPCWC_IG4_INTRO";
				case 1:
					return "SPCWC_IG4_WARN1";
				case 2:
					return "SPCWC_IG4_WARN2";
				case 3:
					return "SPCWC_IG4_SHOOT";
				case 4:
					return "SPCWC_IG4_NEG1";
				case 5:
					return "SPCWC_IG4_NEG2";
				case 6:
					return "SPCWC_IG4_POS1";
				case 7:
					return "SPCWC_IG4_POS2";
				case 8:
					return "SPCWC_IG5_SHOOT";
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "SPCWC_IG5_INTRO";
				case 1:
					return "SPCWC_IG5_WARN1";
				case 2:
					return "SPCWC_IG5_WARN2";
				case 3:
					return "SPCWC_IG5_SHOOT";
				case 4:
					return "SPCWC_IG5_NEG";
				case 6:
					return "SPCWC_IG5_POS1";
				case 7:
					return "SPCWC_IG5_POS2";
				case 8:
					return "SPCWC_IG5_SHOOT";
			}
			break;
	}
	return "";
}

bool func_19(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return func_93(&uLocal_25, cVar0, 0, -1, 0, 0);
}

void func_20(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_94(iParam0, 13))
	{
		func_95(iParam0, 0);
	}
	else
	{
		func_96(iParam0, 0);
	}
	if (func_97(iParam0->f_6))
	{
		if (bParam2)
		{
			func_98(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_21()
{
	if (!func_14(iLocal_183, 131072))
	{
		if (func_99(&iLocal_240, 1715123483))
		{
			func_15(&iLocal_183, 131072);
		}
	}
}

void func_22(int* iParam0, char* sParam1)
{
	if (func_97(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_100(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_96(iParam0, 1);
}

void func_23(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_51(&(iParam0->f_18));
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (func_53(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_102(func_101(-1342635612)) < 5)
	{
		func_103(func_101(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_46();
	func_54(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_25()
{
	switch (iLocal_244)
	{
		case 0:
			return 6;
		case 1:
			return 7;
		case 2:
			return 8;
		case 3:
			return 9;
		case 4:
			return 10;
		default:
			break;
	}
	return 6;
}

bool func_26()
{
	return (iLocal_244 == 2 || iLocal_244 == 3);
}

void func_27()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_104(0);
	}
}

void func_28()
{
	Global_1905944->f_5695 = 1;
}

bool func_29(int iParam0, int iParam1)
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
	if (func_14(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_30(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_31(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_32()
{
	switch (iLocal_244)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 12;
		default:
			break;
	}
	return 0;
}

void func_33(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_34(int iParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!does_entity_exist(*iParam0))
		{
			return;
		}
		if (!is_shocking_event_in_sphere(iParam2, get_entity_coords(*iParam0, true, false), fParam3))
		{
			return;
		}
	}
	remove_shocking_event(*uParam1);
}

void func_35()
{
	set_player_control(player_id(), true, 0, false);
	_0xc67a4910425f11f1(player_id(), "CommandoConvo");
	func_43(&iLocal_183, 262144);
}

void func_36(int iParam0)
{
	if (is_itemset_valid(iParam0->f_18))
	{
		destroy_itemset(iParam0->f_18);
	}
	if (is_itemset_valid(iParam0->f_19))
	{
		destroy_itemset(iParam0->f_19);
	}
	if (_does_volume_exist(iParam0->f_20))
	{
		_delete_volume(iParam0->f_20);
	}
	if (func_38(&(iParam0->f_13)))
	{
		func_51(&(iParam0->f_13));
	}
}

void func_37(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_105(0, -1);
	}
	func_106();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_38(var uParam0)
{
	return func_107(*uParam0, 1);
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1 || !func_38(uParam0))
	{
		func_108(uParam0);
	}
}

float func_40(var uParam0)
{
	if (!func_38(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_109(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_110() - uParam0->f_1);
}

bool func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_111(0) == 1 || func_111(0) == 2) || func_111(0) == 8) || func_112(&Global_1935630, 2048))
			{
				func_15(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_111(0) == 11)
			{
				func_15(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_111(0) == 6)
			{
				func_15(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_15(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_113((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_113((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_46();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_113(iVar2) > func_113(iVar1))
				{
					if (func_113(iVar0) > func_113(iVar2) + 1 || func_113(iVar0) < func_113(iVar1))
					{
						func_15(iParam2, 32);
					}
				}
				else if (func_113(iVar0) > func_113(iVar2) + 1 && func_113(iVar0) < func_113(iVar1))
				{
					func_15(iParam2, 32);
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
					if (((func_114(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_114(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_115(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_115(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_116((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_15(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_117(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_118(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_38(&(iParam2->f_13)))
					{
						func_48(&(iParam2->f_13), 0f);
					}
					else if (func_119(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_51(&(iParam2->f_13));
						func_15(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_38(&(iParam2->f_13)))
					{
						func_51(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_120())
			{
				func_15(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_121())
			{
				func_15(iParam2, 2048);
			}
		}
		if (func_112(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_15(iParam2, 128);
		}
		if (func_122(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_15(iParam2, 256);
		}
	}
	if ((((((((((func_14(*iParam2, 2) || func_14(*iParam2, 4)) || func_14(*iParam2, 8)) || func_14(*iParam2, 16)) || func_14(*iParam2, 32)) || func_14(*iParam2, 64)) || func_14(*iParam2, 128)) || func_14(*iParam2, 256)) || func_14(*iParam2, 512)) || func_14(*iParam2, 1024)) || func_14(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (((((func_14(*iParam0, 2) || func_14(*iParam0, 4)) || func_14(*iParam0, 16)) || func_14(*iParam0, 128)) || func_14(*iParam0, 1024)) || func_14(*iParam0, 2048))
	{
		return true;
	}
	return false;
}

void func_43(int iParam0, int iParam1)
{
	func_55(iParam0, iParam1);
}

bool func_44(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_123(uParam2, 1, iVar0);
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
			if (func_124(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_125(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_126(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_127(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_128(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_129(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_125(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_130(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_131(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_132(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_133(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_133(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_125(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_134(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_135(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_136(uParam2, 4000))
				{
					if ((func_137(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_138(uParam2, iParam0)) && func_139(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_137(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_138(uParam2, iParam0)) && func_139(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_140(iParam0, Global_1935630->f_41))
							{
								func_141();
								*uParam3 = 2;
								func_125(iParam0, uParam2, *uParam3);
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
						if (func_140(iParam0, Global_1935630->f_41))
						{
							func_141();
							*uParam3 = 2;
							func_125(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_142(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_143() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_141();
						*uParam3 = 2;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_144())
					{
						if (func_140(iParam0, Global_1935630->f_42))
						{
							func_141();
							*uParam3 = 2;
							func_125(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_145(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_125(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_146(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_147(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_148(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_149(uParam2, 4000))
				{
					if (func_150(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_125(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_151(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_125(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_152(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_125(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_45(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_94(iParam0, 4))
		{
			func_98(&(iParam0->f_6), 1, 1);
			func_95(iParam0, 4);
		}
	}
	else if (func_94(iParam0, 4))
	{
		func_96(iParam0, 4);
		func_95(iParam0, 14);
	}
}

int func_46()
{
	return &Global_1899515;
}

bool func_47(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_48(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_110() - fParam1);
	func_153(uParam0, 1);
	func_154(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_49(int iParam0)
{
	return iParam0 != -15;
}

void func_50(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_46();
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char* func_52(int iParam0)
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

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_55(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_56(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_57(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_58(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_56(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_155(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_108(&(iParam1->f_13));
		}
		if (func_156(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_157(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_58(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_158(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_159(*iParam0, 1, 1);
						}
					}
					else if (func_160(iParam1, 22))
					{
						func_159(*iParam0, 0, 1);
					}
				}
				if (func_161(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_162(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_163(iParam8);
					if (func_164(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_165(uParam3);
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
					func_166(iParam1, uParam3, fVar8);
					if (func_167(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_168(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_169(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_161(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_170(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_164(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_162(iParam0, func_161(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_163(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_168(uParam3, 0, 0, 1, 1);
					}
					func_171(iParam1, 1);
				}
				func_166(iParam1, uParam3, fVar8);
				if (func_169(iParam0, iParam1, fParam4, bVar6))
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
			func_82(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_59(int* iParam0, var uParam1, int iParam2)
{
	iVar0 = func_172(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_173(Global_35, *iParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_60(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_174() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_61(int iParam0, bool bParam1)
{
	func_175(iParam0, &iVar0, &iVar1);
	if (!func_176(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_177(iVar0, iVar1);
}

void func_62()
{
	if (!func_14(iLocal_183, 16777216))
	{
		iLocal_244 = func_178(7);
		if (func_88())
		{
			if (iLocal_244 < 3)
			{
				iLocal_244 = 3;
			}
		}
		func_15(&iLocal_183, 16777216);
	}
}

char* func_63()
{
	switch (iLocal_244)
	{
		case 0:
			return "script_special_ped@pdcwc_civil_war_commando@ig@ig1_arthur";
		case 1:
			return "script_special_ped@pdcwc_civil_war_commando@ig@ig2_arthur";
		case 2:
			return "script_special_ped@pdcwc_civil_war_commando@ig@ig3_arthur";
		case 3:
			return "script_special_ped@pdcwc_civil_war_commando@ig@ig4_john";
		case 4:
			return "script_special_ped@pdcwc_civil_war_commando@ig@ig5_john";
	}
	return "";
}

void func_64()
{
	iLocal_17[0] = _create_volume_sphere_with_custom_name(2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 100f, 100f, 100f, "CWC_VOL_RANDOM_EVENT_BLOCKER");
	iLocal_17[1] = _create_volume_cylinder_with_custom_name(2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 5f, 5f, 7f, "CWC_VOL_LOOK_IK");
	iLocal_17[2] = _create_volume_cylinder_with_custom_name(2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 8f, 8f, 7f, "CWC_VOL_SPEECH_RANGE");
	iLocal_17[3] = _create_volume_cylinder_with_custom_name(2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 5f, 5f, 7f, "CWC_VOL_TALK_RANGE");
	iLocal_17[4] = _create_volume_cylinder_with_custom_name(2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 3f, 3f, 7f, "CWC_VOL_PED_AVOIDANCE");
	iLocal_17[6] = _0x0eb78c2b156635b1(665633627, 2015.593f, 623.3331f, 157.6585f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
	_0x5b23dff8e0948bb2(&(iLocal_17[6]), 0);
	_0xbe551c2cc421185d(&(iLocal_17[6]), 1);
	iLocal_17[5] = _create_volume_aggregate_with_custom_name("CWC_VOL_LOOK_AT");
	_0x39816f6f94f385ad(&(iLocal_17[5]), 2023.958f, 617.214f, 158.8349f, 0f, 0f, -30f, 23f, 35f, 15f);
	_0x39816f6f94f385ad(&(iLocal_17[5]), 2025.146f, 631.483f, 158f, 0f, 0f, -30f, 35f, 18f, 16f);
	_0x39816f6f94f385ad(&(iLocal_17[5]), 2016.196f, 625.6975f, 158.8349f, 0f, 0f, -30f, 4f, 3f, 15f);
	_0x39816f6f94f385ad(&(iLocal_17[5]), 2007.084f, 613.6472f, 158.8349f, 0f, 0f, -30f, 6f, 12f, 15f);
}

int func_65(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_179(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

var func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_180(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

char* func_67()
{
	switch (iLocal_244)
	{
		case 0:
			return "script@specialped@pdcwc_civil_war_commando@ig@ig1_arthur@ig1_arthur";
		case 1:
			return "script@specialped@pdcwc_civil_war_commando@ig@ig2_arthur@ig2_arthur";
		case 2:
			return "script@specialped@pdcwc_civil_war_commando@ig@ig3_arthur@ig3_arthur";
		case 3:
			return "script@specialped@pdcwc_civil_war_commando@ig@ig4_john@ig4_john";
		case 4:
			return "script@specialped@pdcwc_civil_war_commando@ig@ig5_john@ig5_john";
	}
	return "";
}

void func_68(int iParam0)
{
	iParam0->f_1 = 1;
	iParam0->f_2 = 1;
	iParam0->f_4 = 1;
	iParam0->f_5 = 1;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
	iParam0->f_8 = 0;
	iParam0->f_9 = 1;
	iParam0->f_10 = 1;
	iParam0->f_11 = 1.75f;
	iParam0->f_12 = 2.25f;
	iParam0->f_16 = 45000;
}

void func_69(var uParam0)
{
	func_70(uParam0, 0);
	func_78(uParam0, 0);
	func_181(uParam0, 1);
	func_182(uParam0, 1);
	func_183(uParam0, 0);
	func_184(uParam0, 1);
	func_185(uParam0, 1, 1, 1);
}

void func_70(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 16384);
	}
	else
	{
		func_187(&(uParam0->f_1), 16384);
	}
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 131072);
	}
	else
	{
		func_187(&(uParam0->f_1), 131072);
	}
}

void func_72(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 4);
	}
	else
	{
		func_186(uParam0, 4);
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 2);
	}
	else
	{
		func_186(uParam0, 2);
	}
}

void func_74(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 2);
	}
	else
	{
		func_187(&(uParam0->f_1), 2);
	}
}

void func_75(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 8);
	}
	else
	{
		func_187(&(uParam0->f_1), 8);
	}
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 4);
	}
	else
	{
		func_187(&(uParam0->f_1), 4);
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 2048);
	}
	else
	{
		func_187(&(uParam0->f_1), 2048);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_188(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_80(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			decor_remove(iParam0, "honor_block");
		}
	}
}

bool func_81()
{
	if (func_174() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_82(int* iParam0, var uParam1)
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
	func_189(iParam0, uParam1, 1);
	func_168(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

struct<4> func_83()
{
	Var0 = { 2016.26f, 623.0106f, 158.6706f };
	Var0.f_3 = -167.98f;
	return Var0;
}

int func_84(var uParam0, vector3 vParam1, var uParam4)
{
	if (*uParam0)
	{
		return 0;
	}
	if (does_entity_exist(iLocal_240))
	{
		return 1;
	}
	iLocal_240 = func_190(iLocal_14, vParam1, uParam4, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (does_entity_exist(iLocal_240))
	{
		*uParam0 = 1;
		return 1;
	}
	return 0;
}

int func_85(var uParam0, vector3 vParam1)
{
	if (*uParam0)
	{
		return 0;
	}
	if (does_entity_exist(iLocal_241))
	{
		return 1;
	}
	iLocal_241 = create_object(iLocal_15, vParam1, true, true, false, false, true);
	if (does_entity_exist(iLocal_241))
	{
		*uParam0 = 1;
		return 1;
	}
	return 0;
}

int func_86(var uParam0)
{
	if (*uParam0)
	{
		return 0;
	}
	if (does_entity_exist(iLocal_242))
	{
		return 1;
	}
	iLocal_242 = create_object(iLocal_16, 2015.818f, 623.6882f, 157.6772f, true, true, false, false, true);
	_set_entity_coords_and_heading(iLocal_242, 2015.818f, 623.6882f, 157.6772f, 48.79f, true, false, true);
	if (does_entity_exist(iLocal_242))
	{
		*uParam0 = 1;
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1)
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

bool func_88()
{
	if (func_174() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_89(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_191(uParam0, iParam1, sParam2))
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

void func_90(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*iParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *iParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_91()
{
	sVar0 = func_192(&iVar1);
	func_194(Local_144[0], "INTERACT_GREET", func_193(), -163964935, 0, 0, 0, 1, 0);
	func_194(Local_144[1], "INTERACT_INSULT", sVar0, 648122183, 0, 0, 0, 1, iVar1);
	func_195(iLocal_240, &Local_144, 20f, 2, 0, 0, 0, 0, 0);
	func_20(Local_144[0], 1, 0);
	func_20(Local_144[1], 1, 0);
	iLocal_239 = 3;
	func_23(&iLocal_123, 0);
	set_ped_config_flag(iLocal_240, 297, true);
}

bool func_92(int iParam0, int iParam1, float fParam2)
{
	return func_196(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_93(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_197(cParam1, cParam0);
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

bool func_94(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_95(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_96(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_97(int iParam0)
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

void func_98(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_97(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_198(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_199(iVar0);
	*uParam0 = 0;
}

bool func_99(int iParam0, int iParam1)
{
	if (is_scripted_speech_playing(*iParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *iParam0);
		return true;
	}
	return false;
}

void func_100(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

struct<2> func_101(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_102(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_103(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_104(bool bParam0)
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

void func_105(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_200(&Global_0, 8);
	}
	if (!func_201() || func_174() != -1)
	{
		return;
	}
	func_200(&Global_0, 1);
}

void func_106()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_107(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_108(var uParam0)
{
	func_48(uParam0, 0f);
}

bool func_109(var uParam0)
{
	return func_107(*uParam0, 2);
}

float func_110()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_111(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_112(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_113(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_114(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_202((*Global_1835011)[iParam0]->f_1);
}

int func_115(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_203((*Global_1835011)[iParam0]->f_1);
}

bool func_116(int iParam0)
{
	iVar0 = func_204();
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

int func_117(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_205(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*iParam0) };
	vVar5 = { get_entity_coords(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_206(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
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
		vVar8 = { get_entity_coords(*iParam0, true, false) };
		if (!func_207(iVar1, 0))
		{
			func_208(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_119(var uParam0)
{
	if (!func_38(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_109(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_143() - round((uParam0->f_1 * 1000f)));
}

bool func_120()
{
	return Global_1392040->f_6;
}

bool func_121()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_122(var uParam0, int iParam1)
{
	return func_57(*uParam0, iParam1);
}

void func_123(var uParam0, bool bParam1, int iParam2)
{
	func_209(iParam2);
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
		uParam0->f_13 = func_210(0);
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
							func_187(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_211(1))
						{
							func_187(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_211(1) || *uParam0 & 8192 != 0))
				{
					func_186(uParam0, 33554432);
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
			if (func_212(uParam0))
			{
				uParam0->f_15 = func_143();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_143() - uParam0->f_15) > 500)
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
	func_213(uParam0);
}

bool func_124(int iParam0, var uParam1)
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
			if (!func_214(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_215(iParam0, iVar2) <= func_216(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_125(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_217(iParam2, 1, 1, 1, 0))
	{
		func_187(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_218(uParam1, 1);
	func_219();
}

bool func_126(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_220(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_221(uParam1);
			if (func_222(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_223(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_218(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_218(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_127(int iParam0, int iParam1, var uParam2)
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
	if (func_224(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_221(uParam2);
		if (func_222(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_223(uParam2)
				{
					func_218(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_128(int iParam0, var uParam1)
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
	if (func_214(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_223(uParam1)
		{
			fVar3 = func_221(uParam1);
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

int func_129(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_225(bParam1, bParam2, bParam3);
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

bool func_130(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_131(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_226(uParam2);
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
			if (func_139(uParam2, iParam1))
			{
				func_218(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_132(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_227(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_139(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_218(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_133(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_228(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_218(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_218(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_229(iParam1, vVar0, vVar4))
					{
						func_218(uParam2, 1);
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
					func_218(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_229(iParam1, vVar0, vVar7))
					{
						func_218(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_134(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_214(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_230(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_231(&(Global_1935630->f_34[iVar0])))
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
			if (func_232(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_233(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_234(uParam1, iParam0, fVar1, iVar0))
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

bool func_135(int iParam0, var uParam1)
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

bool func_136(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_235(iVar0, &iVar2))
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
	if (func_236(iVar0, iParam0))
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

int func_138(var uParam0, int iParam1)
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

bool func_139(var uParam0, int iParam1)
{
	if (func_237(uParam0))
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

bool func_140(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_238(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_141()
{
}

bool func_142(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_239(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_143();
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
						if (func_240(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_143();
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

int func_143()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_144()
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
	if ((func_143() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_145(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_216(uParam0);
	if (uParam0->f_12 > func_241(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_242(iParam1);
	iVar1 = func_243(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_146(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_244(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_147(int iParam0, var uParam1)
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
		if (func_245(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
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
					if (!func_246(uParam1, iParam0))
					{
						if (func_240(iVar4, Global_36, 1) < 7f)
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

bool func_148(int iParam0, var uParam1)
{
	if (!func_247(0))
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

bool func_149(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_151(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_143();
	}
	else if (func_143() - uParam1->f_4) > func_248(uParam1)
	{
		return func_249(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_155(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_156(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_250(iParam0, iParam1))
		{
			if (!func_57(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_168(uParam2, 0, 0, 1, 0);
				func_187(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_57(iParam1->f_10, 1))
		{
			func_251(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_186(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_157(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_57(iParam4, 32);
		func_189(iParam1, uParam2, 0);
		iVar5 = func_252(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_168(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_57(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_57(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_57(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_57(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_57(iParam4, 8388608) || func_57(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_57(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_57(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_160(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_160(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_57(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_253(iParam0);
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
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_57(iParam4, 268435456))
			{
				iVar8 = func_254(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_255(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_160(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_57(iParam4, 2) || func_57(iParam4, 16))
			{
				func_159(*iParam0, 1, 1);
			}
			else
			{
				func_159(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_158(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_160(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_256(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_162(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_195(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_57(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_163(int iParam0)
{
	if (func_57(iParam0, 4))
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
	if (func_57(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_57(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_164(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_257(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_258(Global_35)) || func_259(Global_35)) || func_260(Global_35));
	fVar12 = -1f;
	if (func_38(&(iParam1->f_13)))
	{
		fVar12 = func_40(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_97((*uParam4)[iVar0]->f_6);
		func_261(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_262(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_263(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_168(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_264(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_189(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_265(iParam1, fParam6, iParam1->f_9))
					{
						func_108(&(iParam1->f_18));
						if (bVar6)
						{
							func_264(uParam4, 0, 0);
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
		func_266(iParam1, fParam2);
	}
	return bVar5;
}

void func_165(var uParam0)
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

void func_166(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_267((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_266(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_167(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_268(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_269(iParam1, 0);
				func_189(iParam1, uParam2, func_160(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_168(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_97((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_98(&((*uParam0)[iVar0]->f_6), 1, 1);
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

int func_169(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_108(&(iParam1->f_18));
			return 0;
		}
		else if (func_38(&(iParam1->f_18)))
		{
			func_51(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_38(&(iParam1->f_18)))
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
	return func_270(&(iParam1->f_18), fParam2);
	return 1;
}

void func_170(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_261(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_171(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_172(int* iParam0)
{
	if (func_160(iParam0, 0))
	{
		if (func_271(iParam0))
		{
			func_171(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_173(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_272(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_174()
{
	return Global_1572887->f_12;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_176(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_273(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	if (func_275(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_276(iParam0, 1)) || func_277(32768))
	{
		if (!func_276(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_278())
	{
		return false;
	}
	return true;
}

void func_177(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_178(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

int func_179(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_279(vParam0))
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
		if (func_280(vParam0))
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
	func_281(iVar0, bParam8);
	return iVar0;
}

void func_180(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_181(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 256);
	}
	else
	{
		func_187(&(uParam0->f_1), 256);
	}
}

void func_182(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 16);
	}
	else
	{
		func_186(uParam0, 67108864);
		func_186(uParam0, 16);
	}
}

void func_183(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 128);
	}
	else
	{
		func_187(&(uParam0->f_1), 128);
	}
}

void func_184(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 256);
	}
	else
	{
		func_186(uParam0, 256);
	}
}

void func_185(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_187(uParam0, 268435456);
	}
	else
	{
		func_186(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_187(uParam0, 1073741824);
	}
	else
	{
		func_186(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_187(uParam0, 536870912);
	}
	else
	{
		func_186(uParam0, 536870912);
	}
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

void func_189(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_98(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_23(iParam0, 0);
		}
	}
}

int func_190(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_282(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_191(var uParam0, int iParam1, char* sParam2)
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

char* func_192(int iParam0)
{
	switch (get_random_int_in_range(0, 5))
	{
		case 0:
			*iParam0 = 16;
			return "INSULT_MALE_CONV_PART1";
		case 1:
			*iParam0 = 1;
			return "INSULT_MALE_CONV_PART1";
		case 2:
			*iParam0 = 15;
			return "INSULT_MALE_CONV_PART1";
		case 3:
			*iParam0 = 18;
			return "INSULT_MALE_CONV_PART1";
		case 4:
			*iParam0 = 19;
			return "INSULT_MALE_CONV_PART1";
	}
	*iParam0 = 16;
	return "INSULT_MALE_CONV_PART1";
}

char* func_193()
{
	return "GREET_GENERAL";
}

void func_194(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_97(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_283(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_100(iParam0->f_6, iParam0->f_5, 0);
			}
			func_284(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_22(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_195(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_285(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_196(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_197(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(int iParam0)
{
	if (!func_286(iParam0))
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

void func_200(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_201()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_202(int iParam0)
{
	iVar0 = func_287(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_203(int iParam0)
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
		iVar0 = func_288(iParam0);
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

int func_204()
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

bool func_205(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_206(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		uVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = uVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_289(Global_35, *iParam1, 0))
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

bool func_207(int iParam0, bool bParam1)
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

void func_208(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_290(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_209(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_291();
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
			func_292(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_210(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_211(bool bParam0)
{
	if (func_293(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_212(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_174() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_294(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_294(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_243(iVar0) == -1)
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

void func_213(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_295(uParam0);
	}
}

bool func_214(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_243(iParam2);
	}
	else
	{
		iVar1 = func_242(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_243(iParam0);
	}
	else
	{
		iVar0 = func_242(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_57(*uParam1, 8388608))
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

float func_215(int iParam0, int iParam1)
{
	return func_238(iParam0, iParam1, 1, 1);
}

float func_216(var uParam0)
{
	return uParam0->f_26;
}

bool func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_218(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_187(uParam0, 134217728);
	}
	else
	{
		func_186(uParam0, 134217728);
	}
}

void func_219()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_220(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_238(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_296(iVar0, 0)))
		{
			if (func_297(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_221(var uParam0)
{
	return uParam0->f_17;
}

bool func_222(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_57(*uParam0, 4194304))
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

int func_223(var uParam0)
{
	return uParam0->f_18;
}

bool func_224(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_296(iVar0, 0)))
		{
			if (func_298(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_225(bool bParam0, bool bParam1, bool bParam2)
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

float func_226(var uParam0)
{
	return uParam0->f_23;
}

int func_227(var uParam0)
{
	return uParam0->f_21;
}

int func_228(var uParam0)
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

bool func_229(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_196(iParam0, vParam4, 0.5f))
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

int func_230(int iParam0)
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
	if (func_299(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_231(int iParam0)
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

bool func_232(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_300(iParam1))
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

bool func_233(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_300(iParam1))
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

bool func_234(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_300(iParam1))
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

bool func_235(int iParam0, int iParam1)
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

bool func_236(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_301(iParam0, 1, 0, 0) != 2055893578)
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

bool func_237(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_238(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_239(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_240(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_240(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_241(var uParam0)
{
	return uParam0->f_24;
}

int func_242(int iParam0)
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

int func_243(int iParam0)
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

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_235(Global_35, &iVar1))
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
		fVar2 = func_238(iParam0, player_ped_id(), 0, 1);
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
		if (func_238(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_245(int iParam0, var uParam1, bool bParam2)
{
	func_293(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_246(uParam1, iVar0))
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
				if (!bParam2 || !func_246(uParam1, iVar1))
				{
					if (func_240(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_246(var uParam0, int iParam1)
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

int func_247(int iParam0)
{
	if (func_88())
	{
		return 0;
	}
	return func_302((*Global_1347702)[58]->f_15, 1);
}

int func_248(var uParam0)
{
	return uParam0->f_20;
}

int func_249(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_250(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_303((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_251(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_267((*uParam0)[iVar0]))
		{
			func_95((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_252(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_285(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_97((*uParam2)[iVar0]->f_6))
		{
			func_95((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_253(int iParam0)
{
	iVar0 = func_304(*iParam0);
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

int func_254(var uParam0, int iParam1)
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

void func_255(int* iParam0, int* iParam1)
{
	if (!func_160(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_95(iParam1, 19);
			func_269(iParam0, 23);
			func_305(iParam1, 2);
		}
	}
}

bool func_256(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_306(16))
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
					func_307(16);
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

int func_257(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_258(int iParam0)
{
	return (func_308(iParam0, 4) || func_308(iParam0, 5));
}

int func_259(int iParam0)
{
	return func_308(iParam0, 7);
}

int func_260(int iParam0)
{
	return func_308(iParam0, 6);
}

void func_261(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_267(iParam1))
		{
			clear_bit(iParam1, 14);
			func_285(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_262(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_309(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_310(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_284(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_284(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_311(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_263(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_312(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_313(iParam1, 1))
	{
		func_314(iParam1, 1);
		return true;
	}
	return false;
}

void func_264(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_20((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_265(int* iParam0, float fParam1, bool bParam2)
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

void func_266(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_267(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_268(int iParam0)
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

void func_269(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_270(var uParam0, float fParam1)
{
	if (func_315(uParam0, fParam1))
	{
		func_51(uParam0);
		return 1;
	}
	return 0;
}

bool func_271(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_272(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	uParam5 = uParam5;
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
		if (func_316())
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
				if (func_317(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_238(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_108(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_318(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_2 = uParam5;
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
				iVar2 = func_320(func_319(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_273(int iParam0, int iParam1)
{
	if (func_174() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_274(int iParam0)
{
	if (func_174() != -1)
	{
		if (func_276(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_276(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_275(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_276(iParam0, 65536) && !func_276(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_276(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_276(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_276(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_277(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_278()
{
	return Global_1905944->f_5694;
}

bool func_279(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_280(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_281(int iParam0, bool bParam1)
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

void func_282(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_321(iParam1))
		{
			func_322(iParam0, 41788943);
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
			func_323(iParam0, 0, 1);
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
			func_324(iParam0, 0);
			bVar0 = true;
		}
		func_325(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_283(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_284(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (bParam1)
	{
		func_326(iParam0, 4);
		func_327(iVar0, 1);
		func_328(iVar0, 1);
	}
	else
	{
		func_329(iParam0, 4);
		func_328(iVar0, 0);
	}
}

void func_285(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_97(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_98(&(iParam1->f_6), 0, 1);
	}
	if (!func_97(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_267(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_330(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_97(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_311(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_331(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_332(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_283(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_331(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_284(iParam1->f_6, 0, 1);
				}
				else
				{
					func_284(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

bool func_286(int iParam0)
{
	return func_333(iParam0, 2);
}

int func_287(int iParam0)
{
	if (!func_334(iParam0))
	{
		return -1;
	}
	return func_288(iParam0);
}

int func_288(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_335(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_289(int iParam0, int iParam1, bool bParam2)
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

bool func_290(int iParam0, int iParam1)
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

bool func_291()
{
	if (func_336())
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

void func_292(var uParam0, var uParam1)
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

bool func_293(bool bParam0, int iParam1, int iParam2)
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

int func_294(var uParam0)
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

void func_295(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_186(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_187(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_296(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_297(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_298(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_298(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_299(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_300(int iParam0)
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

int func_301(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_302(int iParam0, bool bParam1)
{
	switch (func_287(iParam0))
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

int func_303(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_304(int iParam0)
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

void func_305(int* iParam0, int iParam1)
{
	if (!func_94(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_95(iParam0, 14);
		}
	}
}

bool func_306(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_307(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_308(int iParam0, int iParam1)
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

bool func_309(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_310(int iParam0, bool bParam1)
{
	if (bParam1 && !func_97(iParam0))
	{
		return false;
	}
	return !func_333(iParam0, 4);
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_97(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	func_331(iParam0, 18, 0, 1);
	func_331(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_312(int iParam0, bool bParam1)
{
	if (bParam1 && !func_97(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_313(int iParam0, bool bParam1)
{
	if (bParam1 && !func_97(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_314(int iParam0, bool bParam1)
{
	if (bParam1 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_315(var uParam0, float fParam1)
{
	if (!func_38(uParam0))
	{
		return false;
	}
	if (func_40(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_316()
{
	return (Global_1894899 & 1 != 0 && func_337() != -1);
}

float func_317(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_238(Global_35, iParam0, bParam1, bParam2);
}

bool func_318(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_319(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_338(iParam0, &Var0);
}

int func_320(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_321(int iParam0)
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

void func_322(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_339(iParam0, iParam1))
		{
			if (func_340(iParam0, iParam1))
			{
				if (func_341(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_342(iParam0);
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

void func_323(int iParam0, int iParam1, bool bParam2)
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

void func_324(int iParam0, bool bParam1)
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

void func_325(int iParam0, int iParam1)
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

void func_326(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_327(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_333(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_330(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_333(iVar0, 2))
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
				func_343(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_331(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_332(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_97(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_333(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_334(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_335(int iParam0)
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

bool func_336()
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

int func_337()
{
	return Global_1894899->f_2;
}

bool func_338(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_339(int iParam0, int iParam1)
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

bool func_340(int iParam0, int iParam1)
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

bool func_341(int iParam0, int iParam1)
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
	if (!func_339(iParam0, iVar0))
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

void func_342(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_343(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_327(iParam0, 1);
	func_328(iParam0, 1);
	func_329(iParam0, 128);
}

