void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 93760123;
	iLocal_15 = 1071795929;
	iLocal_16 = 1651707011;
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
		func_6(0, iLocal_200, &iLocal_183, &uLocal_204, &bLocal_151, 0, 1097859072, 0);
		func_7();
		func_8();
		func_9(iLocal_183, &iLocal_139, 16384, 0, 0);
		if (!func_10(iLocal_139, 4194304))
		{
			if (does_entity_exist(iLocal_183))
			{
				if (_0x131ec9247e7a2903(iLocal_183))
				{
					add_entity_to_audio_mix_group(iLocal_183, "special_ped_group", 0f);
					func_11(&iLocal_139, 4194304);
				}
			}
		}
		if (!func_10(iLocal_139, 8192))
		{
			if (does_entity_exist(iLocal_183))
			{
				if (!_0x5102307ce88798eb(iLocal_183))
				{
					request_ped_visibility_tracking(iLocal_183);
				}
				else if ((bLocal_150 && func_12(iLocal_183, 80f, -1082130432, -1082130432, -1082130432)) || func_10(iLocal_139, 256))
				{
					func_14(0, func_13());
					func_11(&iLocal_139, 8192);
				}
			}
		}
		switch (iLocal_115)
		{
			case 0:
				func_15();
				func_16(1);
				break;
			case 1:
				if (func_17())
				{
					func_16(2);
				}
				break;
			case 2:
				if (func_18())
				{
					if (iLocal_200 < 5)
					{
						func_16(3);
					}
					else
					{
						func_16(4);
					}
				}
				break;
			case 3:
				func_19();
				break;
			case 5:
				func_20();
				break;
			case 4:
				func_21();
				break;
			case 6:
				if (!is_scripted_speech_playing(iLocal_183) && iLocal_200 != 5)
				{
					func_1();
				}
				if (iLocal_200 == 5)
				{
					if (!func_10(iLocal_139, 2097152))
					{
						_0xdf7b5144e25cd3fe(iLocal_138, "pbl_IG2_Hanging_Rope");
						if (_0x23e33cb9f4a3f547(iLocal_138, "pbl_IG2_Hanging_Rope"))
						{
							_set_anim_scene_playback_list_bool(iLocal_138, "pbl_IG2_Hanging_Rope", true);
							func_11(&iLocal_139, 2097152);
						}
					}
					else if (!_is_anim_scene_paused(iLocal_138))
					{
						if (_is_anim_scene_started(iLocal_138, false) && _get_anim_scene_progress(iLocal_138) > 0.9f)
						{
							set_anim_scene_paused(iLocal_138, true);
						}
					}
				}
				break;
		}
		if (!func_10(iLocal_139, 1024))
		{
			if (func_22())
			{
				func_11(&iLocal_139, 1024);
			}
		}
		else
		{
			func_23();
		}
		if (!func_10(iLocal_139, 1))
		{
			if (iLocal_200 == 5)
			{
				if (func_10(iLocal_139, 256))
				{
					func_11(&iLocal_139, 1);
				}
			}
			else if (func_10(iLocal_139, 8) || bLocal_151)
			{
				func_24(0, &iLocal_183, &iLocal_139, 32768);
				func_11(&iLocal_139, 1);
			}
		}
	}
}

void func_1()
{
	if (iLocal_200 == 5)
	{
		set_scenario_group_enabled("RARE_ORCHIDS_AGNES_LADYSLIPPER", false);
	}
	if (func_10(iLocal_139, 1))
	{
		iLocal_144++;
		if (iLocal_144 < func_25(iLocal_200))
		{
			func_26(iLocal_199, iLocal_144);
		}
		else
		{
			iLocal_200++;
			func_26(iLocal_199, 0);
			if (iLocal_200 > 5)
			{
				func_27(0, 12);
			}
			else
			{
				func_27(0, iLocal_200);
			}
		}
	}
	if (func_10(iLocal_139, 512))
	{
		clear_weather_type_persist();
	}
	if (does_entity_exist(iLocal_183) && func_10(iLocal_139, 4194304))
	{
		remove_entity_from_audio_mix_group(iLocal_183, 0f);
	}
	if (_0x580d71dfe0088e34("Spirits", "PDADD_Sounds"))
	{
		_0x0f2a2175734926d8("Spirits", "PDADD_Sounds");
		_0x9d746964e0cf2c5f("Spirits", "PDADD_Sounds");
	}
	if (_0x580d71dfe0088e34("Drone", "PDADD_Sounds"))
	{
		_0x0f2a2175734926d8("Drone", "PDADD_Sounds");
		_0x9d746964e0cf2c5f("Drone", "PDADD_Sounds");
	}
	if (_does_volume_exist(iLocal_186))
	{
		func_28(iLocal_186);
		_0xd17672447692478e(iLocal_186, 0);
		_delete_volume(iLocal_186);
	}
	if (_does_volume_exist(iLocal_188))
	{
		_0x74c2b3dc0b294102(iLocal_188);
		_0xa1cfb35069d23c23(iLocal_188);
		_delete_volume(iLocal_188);
	}
	if (_does_volume_exist(iLocal_187))
	{
		_0x74c2b3dc0b294102(iLocal_187);
		_0xa1cfb35069d23c23(iLocal_187);
		_delete_volume(iLocal_187);
	}
	if (does_entity_exist(iLocal_183))
	{
		delete_ped(&iLocal_183);
	}
	if (func_10(iLocal_139, 2))
	{
		_0xc2b8164c3be871a4();
		_0x55285f885f662169();
		if (func_10(iLocal_139, 8388608))
		{
			_0x285438c26c732f9d();
			func_29(&iLocal_139, 8388608);
		}
	}
	func_30(&iLocal_117);
	func_31(0);
	terminate_this_thread();
}

void func_2()
{
	if (!_does_volume_exist((*(*Global_1396257)[0])[func_32(0)]->f_47))
	{
		func_1();
	}
	if (!func_33(Global_35, 0))
	{
		func_1();
	}
	else if (!is_entity_in_volume(Global_35, (*(*Global_1396257)[0])[func_32(0)]->f_47, true, 0))
	{
		if (!func_34(&uLocal_201))
		{
			func_35(&uLocal_201, 0);
		}
		else if (func_36(&uLocal_201) > 10f)
		{
			func_1();
		}
	}
	else if (func_37(0, func_32(0), &iLocal_117, iLocal_183))
	{
		if (func_10(iLocal_117, 32) && ((iLocal_200 < 5 && func_10(iLocal_139, 32)) || (iLocal_200 == 5 && func_38())))
		{
			if (!func_10(iLocal_139, 65536))
			{
				func_11(&iLocal_139, 65536);
			}
			if (!func_10(iLocal_139, 131072))
			{
				func_11(&iLocal_139, 131072);
			}
			if (!func_10(iLocal_139, 262144))
			{
				func_11(&iLocal_139, 262144);
			}
			if (!func_10(iLocal_139, 524288))
			{
				func_11(&iLocal_139, 524288);
			}
			if (!func_10(iLocal_139, 256))
			{
				func_11(&iLocal_139, 256);
			}
			if (!bLocal_152)
			{
				bLocal_152 = true;
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_3()
{
	if (iLocal_115 == 3)
	{
		if (!is_ped_headtracking_entity(iLocal_183, Global_35))
		{
			task_look_at_entity(iLocal_183, Global_35, -1, 0, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(iLocal_183, Global_35))
	{
		task_clear_look_at(iLocal_183);
	}
}

void func_4()
{
	if ((iLocal_115 == 3 || iLocal_115 == 5) && is_entity_at_entity(Global_35, iLocal_183, 12f, 12f, 12f, false, false, 0))
	{
		if (!is_ped_headtracking_entity(Global_35, iLocal_183))
		{
			task_look_at_entity(Global_35, iLocal_183, -1, 0, 51, 0);
		}
	}
	else if (is_ped_headtracking_entity(Global_35, iLocal_183))
	{
		task_clear_look_at(Global_35);
	}
}

void func_5()
{
	if (iLocal_146 < 1)
	{
		iVar0 = get_mount(Global_35);
		if (iVar0 != 0 && func_33(iVar0, 0))
		{
			set_ped_reset_flag(iVar0, 105, true);
			if (is_any_speech_playing(iLocal_183))
			{
				task_horse_action(iVar0, 4, 0, 0);
				iLocal_146++;
			}
		}
	}
	if (bLocal_150)
	{
		if (!bLocal_153)
		{
			if (func_10(iLocal_139, 2048) && !func_10(iLocal_139, 4096))
			{
				iVar1 = get_mount(Global_35);
				if (iVar1 != 0 && func_33(iVar1, 0))
				{
					set_ped_reset_flag(iVar1, 105, true);
					task_horse_action(iVar1, 5, 0, 0);
					func_11(&iLocal_139, 4096);
				}
			}
		}
	}
}

int func_6(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*bParam4)
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
			Global_40.f_11623[iParam0]->f_2 = func_39();
			*bParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_40(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_34(uParam3))
	{
		func_41(uParam3, 0f);
	}
	else if (func_36(uParam3) >= 2f)
	{
		if (!func_42(Global_40.f_11623[iParam0]->f_2))
		{
			func_43(iParam0);
			*bParam4 = 1;
			func_44(uParam3);
			return 1;
		}
		else
		{
			func_43(iParam0);
			*bParam4 = 1;
			func_44(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_7()
{
	if (iLocal_115 > 2)
	{
		if (bLocal_150)
		{
			if (!func_10(iLocal_139, 2))
			{
				_0x196d3acbeba4a44b(0);
				_0xfd05b1dde83749fa("SPD_AGNES_DOWD_01");
				_0x3e2fddbe435a8787();
				_0xd9c24f53631f2372("SPD_AGNES_DOWD_01", iLocal_183, 0);
				_0x402e1a61d2587fcd(0, get_entity_coords(iLocal_183, true, false), 0f, 0f, get_entity_heading(iLocal_183));
				func_11(&iLocal_139, 2);
			}
			if (iLocal_115 < 6)
			{
				if (!does_particle_fx_looped_exist(iLocal_189))
				{
					iLocal_189 = start_particle_fx_looped_at_coord("scr_ped_ghost_haze_stage1", get_entity_coords(iLocal_183, true, false), get_entity_rotation(iLocal_183, 2), 1f, false, false, false, false);
				}
				else
				{
					set_particle_fx_looped_offsets(iLocal_189, get_entity_coords(iLocal_183, true, false), get_entity_rotation(iLocal_183, 2));
				}
			}
			if (iLocal_200 != 5)
			{
				vVar0 = { get_entity_coords(iLocal_183, true, false) - get_entity_coords(Global_35, true, false) };
				fVar3 = (atan2(vVar0.y, vVar0.x) + 90f);
				set_entity_heading(iLocal_183, fVar3);
			}
		}
	}
}

void func_8()
{
	if (func_10(iLocal_139, 16) && iLocal_143 >= 8)
	{
		return;
	}
	if (func_45(&iLocal_183, &uLocal_149, &uLocal_190, &iLocal_143, 8, 0, 7000, 0))
	{
		func_11(&iLocal_139, 16);
	}
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_46(iParam3);
	if (fParam4 == 0f)
	{
		if (func_40(iParam0, Global_35, 15f, 1))
		{
			if (!func_47(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_48(iParam1, iParam2);
				}
			}
		}
		else if (func_47(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_49(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_47(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_48(iParam1, iParam2);
			}
		}
	}
	else if (func_47(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_49(iParam1, iParam2);
	}
}

bool func_10(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_11(int iParam0, int iParam1)
{
	func_48(iParam0, iParam1);
}

bool func_12(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_50(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_13()
{
	if (func_51() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_14(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_52(1786474035, 0);
			}
			else
			{
				func_52(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_52(1417967521, 0);
			}
			else
			{
				func_52(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_52(-755110140, 0);
			}
			else if (func_53(55))
			{
				func_52(-1437550882, 0);
			}
			else
			{
				func_52(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_52(2063812437, 0);
			}
			else
			{
				func_52(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_52(-1558441298, 0);
			}
			else
			{
				func_52(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_52(1071640065, 0);
			}
			else
			{
				func_52(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_52(928184916, 0);
			}
			else
			{
				func_52(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

void func_15()
{
	iLocal_200 = func_32(0);
	iLocal_199 = func_55(0, iLocal_200, 9, func_54(0));
	func_56(&iLocal_117);
	iLocal_144 = func_57(iLocal_199);
	iLocal_141 = func_58(iLocal_200, iLocal_144);
	iLocal_142 = (iLocal_141 + func_59(iLocal_200, iLocal_144));
	bLocal_150 = func_60(iLocal_200, iLocal_144);
	if (bLocal_150)
	{
		fLocal_148 = 1f;
	}
	func_61();
	_text_database_request("SPADAUD");
	request_model(iLocal_14, false);
	request_ptfx_asset();
	if (iLocal_200 == 5)
	{
		request_model(iLocal_15, false);
		request_model(iLocal_16, false);
	}
	func_62(iLocal_186, "SP_AgnesDowd1_Block", 1, 0, 0, 0, -1082130432);
	_0xc1799fafd2fdf52b(iLocal_186, 0, 0, 0);
	_0xb56d41a694e42e86(iLocal_188, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iLocal_188, 0, 0, 0, -1, -1, 0);
	_0xed9582b3da8f02b4(1);
	iVar0 = func_63();
	if (iVar0 == 1500834021 || iVar0 == -702816767)
	{
		if (!func_10(iLocal_139, 512))
		{
			_set_weather_type(iVar0, false, true, false, 0f, false);
			func_11(&iLocal_139, 512);
		}
	}
	iLocal_138 = _create_anim_scene(func_64(iLocal_200), 0, func_65(iLocal_200), false, true);
	load_anim_scene(iLocal_138);
	func_66(&uLocal_154);
	func_67(&uLocal_154, 1);
	func_68(&uLocal_154, 0);
	func_69(&uLocal_154, 0);
	func_70(&uLocal_154, 0);
	func_71(&uLocal_154, 1);
	func_72(&uLocal_154, 1);
	func_73(&uLocal_154, 1);
	func_74(&uLocal_154, 0);
	fLocal_147 = 999999f;
	func_16(1);
}

void func_16(int iParam0)
{
	iLocal_115 = iParam0;
	switch (iParam0)
	{
		case 4:
			vLocal_207 = { 70f, 70f, 120f };
			break;
	}
}

bool func_17()
{
	if (!_text_database_has_loaded("SPADAUD"))
	{
		return false;
	}
	if (!has_model_loaded(iLocal_14))
	{
		return false;
	}
	if (iLocal_200 == 5)
	{
		if (!has_model_loaded(iLocal_16) || !has_model_loaded(iLocal_15))
		{
			return false;
		}
	}
	if (!_is_anim_scene_loaded(iLocal_138, true, false))
	{
		return false;
	}
	if (!has_ptfx_asset_loaded())
	{
		return false;
	}
	if (_0x5c16855277819bbf() != 1)
	{
		return false;
	}
	if (!_0xd9130842d7226045("PDADD_Sounds", 0))
	{
		return false;
	}
	return true;
}

bool func_18()
{
	Var1 = { func_75(0, iLocal_200, (*Global_1396257)[0]->f_633) };
	if (func_76(&uVar0, Var1, Var1.f_3))
	{
		if (iLocal_200 == 5)
		{
			func_78(&iLocal_184, iLocal_16, func_77(1));
			func_78(&iLocal_185, iLocal_15, func_77(2));
			freeze_entity_position(iLocal_185, true);
			set_entity_collision(iLocal_185, false, false);
			set_entity_visible(iLocal_185, false);
			set_entity_collision(iLocal_184, false, false);
			set_anim_scene_entity(iLocal_138, "Noose", iLocal_184, 0);
			set_scenario_group_enabled("RARE_ORCHIDS_AGNES_LADYSLIPPER", true);
		}
		func_79(iLocal_183, 0);
		set_ped_relationship_group_hash(iLocal_183, 623901053);
		set_blocking_of_non_temporary_events(iLocal_183, true);
		set_ped_keep_task(iLocal_183, true);
		set_ped_config_flag(iLocal_183, 6, true);
		set_ped_can_ragdoll_from_player_impact(iLocal_183, false);
		set_ped_config_flag(iLocal_183, 277, true);
		set_entity_collision(iLocal_183, false, false);
		freeze_entity_position(iLocal_183, true);
		set_entity_invincible(iLocal_183, true);
		_0x3743ce6948194349("AZ_Agnes_Dowd_01", get_entity_coords(iLocal_183, true, false), 0f);
		set_ambient_zone_state("AZ_Agnes_Dowd_01", true, true);
		if (_does_volume_exist(iLocal_187))
		{
			_0x7c00cfc48a782dc0(iLocal_187, iLocal_183, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			_0xb56d41a694e42e86(iLocal_187, 0, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(iLocal_187, 0, 0, 0, -1, -1, 0);
		}
		set_entity_visible(iLocal_183, bLocal_150);
		func_80(iLocal_183, 0);
		func_81(&uLocal_17, iLocal_183, "AGNES_DOWD", 0);
		func_82(iLocal_183, -2116139111);
		_play_sound_from_entity("Spirits", iLocal_183, "PDADD_Sounds", false, 0, 0);
		_play_sound_from_entity("Drone", iLocal_183, "PDADD_Sounds", false, 0, 0);
		set_anim_scene_entity(iLocal_138, "AGNES_DOWD", iLocal_183, 0);
		start_anim_scene(iLocal_138);
		return true;
	}
	return false;
}

void func_19()
{
	if (get_game_timer() >= iLocal_140 && iLocal_141 < iLocal_142)
	{
		if (!func_10(iLocal_139, 32))
		{
			if (is_entity_at_entity(Global_35, iLocal_183, 100f, 100f, 100f, false, false, 0))
			{
				func_11(&iLocal_139, 32);
				func_11(&iLocal_139, 8);
			}
		}
		else if (iLocal_141 > func_58(iLocal_200, iLocal_144))
		{
			if (!func_34(&uLocal_196))
			{
				func_83(&uLocal_196);
			}
			else if (is_entity_at_entity(Global_35, iLocal_183, 35f, 35f, 100f, false, false, 0) || func_84(&uLocal_196) > 20f)
			{
				func_16(5);
			}
		}
		else
		{
			func_16(5);
		}
	}
}

void func_20()
{
	sVar0 = func_85(iLocal_200, iLocal_141);
	switch (iLocal_116)
	{
		case 0:
			_0xdf7b5144e25cd3fe(iLocal_138, sVar0);
			iLocal_116 = 1;
			break;
		case 1:
			if (_0x23e33cb9f4a3f547(iLocal_138, sVar0))
			{
				_set_anim_scene_playback_list_bool(iLocal_138, sVar0, true);
				iLocal_116 = 2;
			}
			break;
		case 2:
			if (!func_10(iLocal_139, 1048576))
			{
				func_86(1, 2, 0, 1);
				func_11(&iLocal_139, 1048576);
			}
			if (_0x8d81e7824b7753f7(iLocal_138, func_87(iLocal_200, iLocal_141), 1))
			{
				iLocal_141++;
				iLocal_140 = (get_game_timer() + get_random_int_in_range(2000, 2800));
				iLocal_116 = 0;
				func_11(&iLocal_139, 8);
				func_16(3);
			}
			break;
	}
}

void func_21()
{
	if (!func_10(iLocal_139, 64))
	{
		if (func_88(&iLocal_183, &iLocal_185, &iLocal_184))
		{
			func_11(&iLocal_139, 64);
		}
	}
	else
	{
		if (is_entity_at_entity(Global_35, iLocal_183, 20f, 20f, 30f, false, false, 0))
		{
			if (!_0xa2cac9def0195e6f(1))
			{
				if (!func_10(iLocal_139, 256))
				{
					StringCopy(&cVar0, "SPAD_IG1_4_F", 24);
					if (func_89(&uLocal_17, cVar0, 0, -1, 0, 0))
					{
						func_11(&iLocal_139, 256);
					}
				}
			}
		}
		else if (is_entity_at_entity(Global_35, iLocal_183, 70f, 70f, 120f, false, false, 0))
		{
			if (!_0xa2cac9def0195e6f(1) && !func_10(iLocal_139, 256))
			{
				if (is_entity_at_entity(Global_35, iLocal_183, vLocal_207, false, false, 0) || func_84(&uLocal_193) > 10f)
				{
					if (!func_10(iLocal_139, 65536))
					{
						StringCopy(&cVar0, "SPAD_TOTHETREE", 24);
						if (func_89(&uLocal_17, cVar0, 1, 0, 0, 0))
						{
							vLocal_207 = { 60f, 60f, 120f };
							func_11(&iLocal_139, 65536);
						}
					}
					else if (!func_10(iLocal_139, 131072))
					{
						StringCopy(&cVar0, "SPAD_TOTHETREE", 24);
						if (func_89(&uLocal_17, cVar0, 1, 1, 0, 0))
						{
							vLocal_207 = { 50f, 50f, 120f };
							func_11(&iLocal_139, 131072);
						}
					}
					else if (!func_10(iLocal_139, 262144))
					{
						StringCopy(&cVar0, "SPAD_TOTHETREE", 24);
						if (func_89(&uLocal_17, cVar0, 1, 2, 0, 0))
						{
							vLocal_207 = { 40f, 40f, 120f };
							func_11(&iLocal_139, 262144);
						}
					}
					else if (!func_10(iLocal_139, 524288))
					{
						StringCopy(&cVar0, "SPAD_TOTHETREE", 24);
						if (func_89(&uLocal_17, cVar0, 1, 3, 0, 0))
						{
							func_11(&iLocal_139, 524288);
						}
					}
				}
			}
			else
			{
				func_83(&uLocal_193);
			}
		}
		if (can_ped_ragdoll(iLocal_183))
		{
			vVar3 = { get_entity_coords(iLocal_183, true, false) };
			set_ped_to_ragdoll_with_fall(iLocal_183, 0, 100, 2, 0f, 0f, 0f, (vVar3.z - 1f), 0f, 0f, 0f, 0f, 0f, 0f);
		}
	}
}

bool func_22()
{
	if (bLocal_150 && does_entity_exist(iLocal_183))
	{
		set_entity_alpha(iLocal_183, 1, true);
		fVar0 = 1f;
		fVar1 = 0f;
		func_90(&fLocal_148, fVar0, fVar1, 1);
		if (fLocal_148 <= 0f)
		{
			return true;
		}
	}
	return false;
}

void func_23()
{
	if (iLocal_115 < 6)
	{
		if (!bLocal_153)
		{
			if (bLocal_150)
			{
				if (func_91(iLocal_183, 0, &uLocal_154, &uLocal_182, 0, 0))
				{
					func_43(0);
					bLocal_153 = true;
				}
			}
			if (!bLocal_152)
			{
				if ((iLocal_141 >= iLocal_142 && iLocal_200 < 5) || (iLocal_200 == 5 && func_10(iLocal_139, 256)))
				{
					if (!func_10(iLocal_139, 4))
					{
						func_11(&iLocal_139, 4);
						if (iLocal_200 == 5)
						{
							iVar0 = 2500;
						}
						else
						{
							iVar0 = 1500;
						}
						iLocal_145 = (get_game_timer() + iVar0);
					}
					else if (get_game_timer() >= iLocal_145)
					{
						bLocal_152 = true;
					}
				}
			}
		}
		if (bLocal_150 && does_entity_exist(iLocal_183))
		{
			set_entity_alpha(iLocal_183, 1, true);
			fVar1 = 0f;
			fVar2 = 0f;
			if (bLocal_153)
			{
				fVar1 = 2f;
				fVar2 = 1f;
			}
			else if (bLocal_152)
			{
				fVar1 = 0.6f;
				fVar2 = 1f;
			}
			else
			{
				fVar3 = func_92(Global_35, iLocal_183, 0, 0);
				if (fVar3 < fLocal_147)
				{
					fLocal_147 = fVar3;
				}
				if (fLocal_147 <= 8f)
				{
					fVar1 = 1f;
					fVar2 = 1f;
				}
				else if (fLocal_147 <= 25f)
				{
					fVar1 = 0.7f;
					fVar2 = (1f - ((fLocal_147 - 10f) / 20f));
				}
			}
			if (fVar1 > 0f)
			{
				func_90(&fLocal_148, fVar1, fVar2, 0);
				if (fLocal_148 >= 1f)
				{
					set_entity_alpha(iLocal_183, 255, false);
					set_entity_visible(iLocal_183, false);
					freeze_entity_position(iLocal_183, true);
					set_entity_collision(iLocal_183, false, false);
					_0x55285f885f662169();
					_0xc2b8164c3be871a4();
					_0x5c9c3a466b3296a8(0);
					if (func_10(iLocal_139, 8388608))
					{
						_0x285438c26c732f9d();
						func_29(&iLocal_139, 8388608);
					}
					if (does_entity_exist(iLocal_183))
					{
						if (iLocal_200 == 5)
						{
							remove_anim_scene_entity(iLocal_138, "AGNES_DOWD", iLocal_183);
						}
					}
					remove_particle_fx(iLocal_189, false);
					func_11(&iLocal_139, 2048);
					func_16(6);
				}
			}
		}
		else if (bLocal_152)
		{
			func_16(6);
		}
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (func_47(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_94(func_93(-1342635612)) < 5)
	{
		func_95(func_93(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_39();
	func_48(iParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 4;
		case 5:
			return 1;
	}
	return 0;
}

void func_26(int iParam0, int iParam1)
{
	if (!func_96(iParam0))
	{
		return;
	}
	func_97(iParam0, iParam1);
}

void func_27(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_28(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_98(vVar0, 0);
}

void func_29(int iParam0, int iParam1)
{
	func_49(iParam0, iParam1);
}

void func_30(int iParam0)
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
	if (func_34(&(iParam0->f_13)))
	{
		func_44(&(iParam0->f_13));
	}
}

void func_31(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_99(0, -1);
	}
	func_100();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

int func_32(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

bool func_33(int iParam0, int iParam1)
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
	if (func_10(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_10(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_10(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_10(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_10(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_10(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_10(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_10(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_34(var uParam0)
{
	return func_101(*uParam0, 1);
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1 || !func_34(uParam0))
	{
		func_83(uParam0);
	}
}

float func_36(var uParam0)
{
	if (!func_34(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_102(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_103() - uParam0->f_1);
}

bool func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_104(0) == 1 || func_104(0) == 2) || func_104(0) == 8) || func_105(&Global_1935630, 2048))
			{
				func_11(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_104(0) == 11)
			{
				func_11(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_104(0) == 6)
			{
				func_11(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_11(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_106((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_106((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_39();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_106(iVar2) > func_106(iVar1))
				{
					if (func_106(iVar0) > func_106(iVar2) + 1 || func_106(iVar0) < func_106(iVar1))
					{
						func_11(iParam2, 32);
					}
				}
				else if (func_106(iVar0) > func_106(iVar2) + 1 && func_106(iVar0) < func_106(iVar1))
				{
					func_11(iParam2, 32);
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
					if (((func_107(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_107(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_108(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_108(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_109((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_11(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_110(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_111(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_34(&(iParam2->f_13)))
					{
						func_41(&(iParam2->f_13), 0f);
					}
					else if (func_112(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_44(&(iParam2->f_13));
						func_11(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_34(&(iParam2->f_13)))
					{
						func_44(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_113())
			{
				func_11(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_114())
			{
				func_11(iParam2, 2048);
			}
		}
		if (func_105(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_11(iParam2, 128);
		}
		if (func_115(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_11(iParam2, 256);
		}
	}
	if ((((((((((func_10(*iParam2, 2) || func_10(*iParam2, 4)) || func_10(*iParam2, 8)) || func_10(*iParam2, 16)) || func_10(*iParam2, 32)) || func_10(*iParam2, 64)) || func_10(*iParam2, 128)) || func_10(*iParam2, 256)) || func_10(*iParam2, 512)) || func_10(*iParam2, 1024)) || func_10(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_38()
{
	if ((((func_10(iLocal_139, 65536) || func_10(iLocal_139, 131072)) || func_10(iLocal_139, 262144)) || func_10(iLocal_139, 524288)) || func_10(iLocal_139, 256))
	{
		return true;
	}
	return false;
}

int func_39()
{
	return &Global_1899515;
}

bool func_40(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_41(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_103() - fParam1);
	func_116(uParam0, 1);
	func_117(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_42(int iParam0)
{
	return iParam0 != -15;
}

void func_43(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_39();
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*iParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_34(uParam2))
		{
			func_41(uParam2, 0f);
			return false;
		}
		else if (func_112(uParam2) > iParam6)
		{
			func_44(uParam2);
			*iParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (is_scripted_speech_playing(*iParam0))
	{
		if (fParam7 == 0f)
		{
			if (!does_entity_exist(*iParam0) || !does_entity_exist(Global_35))
			{
				return false;
			}
			fParam7 = func_92(*iParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam5, *iParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

char* func_46(int iParam0)
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

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_49(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

float func_50(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_51()
{
	return Global_1572887->f_12;
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_118(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_119(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_53(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_54(int iParam0)
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

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_120())
	{
		iVar2 = func_120();
	}
	iVar5 = func_121(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_122(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_122(iVar6) == 0)
			{
				return func_123(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_122(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_122(iVar6) == 0)
			{
				return func_123(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_123(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_56(int iParam0)
{
	iParam0->f_1 = 1;
	iParam0->f_2 = 1;
	iParam0->f_4 = 1;
	iParam0->f_5 = 1;
	iParam0->f_6 = 1;
	iParam0->f_7 = 0;
	iParam0->f_8 = 0;
	iParam0->f_9 = 1;
	iParam0->f_10 = 1;
	iParam0->f_11 = 1.75f;
	iParam0->f_12 = 2.25f;
	iParam0->f_16 = 45000;
}

int func_57(int iParam0)
{
	if (!func_96(iParam0))
	{
		return -1;
	}
	return func_124(iParam0);
}

int func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 4;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 4;
				case 3:
					return 6;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 4;
				case 3:
					return 5;
			}
			break;
		case 5:
			return 0;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				case 2:
					return 2;
				case 3:
					return 2;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				case 2:
					return 1;
				case 3:
					return 3;
			}
			break;
		case 5:
			return 1;
	}
	return 1;
}

int func_60(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 1;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_61()
{
	if (!_does_volume_exist(iLocal_186))
	{
		Var0 = { func_125() };
		vVar23 = { func_75(0, iLocal_200, (*Global_1396257)[0]->f_633) };
		iLocal_186 = _create_volume_by_hash_with_custom_name(Var0, vVar23, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iLocal_187))
	{
		Var0 = { func_126() };
		iLocal_187 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iLocal_188))
	{
		Var11 = { func_127(0, iLocal_200, 0, 0) };
		iLocal_188 = _create_volume_by_hash_with_custom_name(Var11.f_1, Var11.f_2, Var11.f_5, Var11.f_8, Var11.f_11);
	}
}

int func_62(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_128(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_63()
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

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return "script@specialped@pdadd_agnes_dowd@ig@ig_2@ig_2";
		default:
			return "script@specialped@pdadd_agnes_dowd@ig@ig_1@ig_1";
	}
	return "INVALID";
}

char* func_65(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "pbl_base_reset";
		case 5:
			return "pbl_IG2_Hanging";
		default:
			break;
	}
	return "pbl_BASE01_reset";
	return "INVALID";
}

void func_66(var uParam0)
{
	func_67(uParam0, 0);
	func_74(uParam0, 0);
	func_129(uParam0, 1);
	func_130(uParam0, 1);
	func_131(uParam0, 0);
	func_132(uParam0, 1);
	func_133(uParam0, 1, 1, 1);
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 16384);
	}
	else
	{
		func_135(&(uParam0->f_1), 16384);
	}
}

void func_68(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 131072);
	}
	else
	{
		func_135(&(uParam0->f_1), 131072);
	}
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_135(uParam0, 4);
	}
	else
	{
		func_134(uParam0, 4);
	}
}

void func_70(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_135(uParam0, 2);
	}
	else
	{
		func_134(uParam0, 2);
	}
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 2);
	}
	else
	{
		func_135(&(uParam0->f_1), 2);
	}
}

void func_72(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 8);
	}
	else
	{
		func_135(&(uParam0->f_1), 8);
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 4);
	}
	else
	{
		func_135(&(uParam0->f_1), 4);
	}
}

void func_74(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 2048);
	}
	else
	{
		func_135(&(uParam0->f_1), 2048);
	}
}

struct<4> func_75(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_136(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_137(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (func_136(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_136(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_136(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

bool func_76(var uParam0, vector3 vParam1, var uParam4)
{
	if (*uParam0)
	{
		return false;
	}
	if (does_entity_exist(iLocal_183))
	{
		return true;
	}
	iLocal_183 = func_138(iLocal_14, vParam1, uParam4, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (does_entity_exist(iLocal_183))
	{
		*uParam0 = 1;
		return true;
	}
	return false;
}

Vector3 func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { 2008.85f, -329.84f, 41.602f };
			break;
		case 1:
			vVar0 = { 2008.85f, -329.84f, 41.602f };
			break;
		case 2:
			vVar0 = { 2008.85f, -329.84f, 41.602f };
			break;
	}
	return vVar0;
}

int func_78(int iParam0, int iParam1, vector3 vParam2)
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

void func_79(int iParam0, int iParam1)
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

void func_80(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_139(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_81(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_140(uParam0, iParam1, sParam2))
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

void func_82(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_141(iParam0, iParam1))
		{
			if (func_142(iParam0, iParam1))
			{
				if (func_143(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_144(iParam0);
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

void func_83(var uParam0)
{
	func_41(uParam0, 0f);
}

float func_84(var uParam0)
{
	if (!func_34(uParam0))
	{
		return 0f;
	}
	if (func_102(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_103() - uParam0->f_1);
}

char* func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "pbl_P1_T01_ACTION_A";
				case 1:
					return "pbl_P1_T01_ACTION_B";
				case 2:
					return "pbl_P1_T01_ACTION_C";
				case 3:
					return "pbl_P1_T01_ACTION_D";
				case 4:
					return "pbl_P1_T02_ACTION_B_ALT";
				case 5:
					return "pbl_P1_T02_ACTION_C";
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "pbl_P2_T01_ACTION_A";
				case 1:
					return "pbl_P2_T03_ACTION_A";
				case 2:
					return "pbl_P2_T03_ACTION_B";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "pbl_P3_T04_ACTION_A";
				case 1:
					return "pbl_P3_T06_ACTION_A";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "pbl_P4_T03_ACTION_A";
				case 1:
					return "pbl_P4_T04_ACTION_A";
				case 2:
					return "pbl_P4_T04_ACTION_B";
				case 3:
					return "pbl_P4_T04_ACTION_C";
				case 4:
					return "pbl_P4_T04_ACTION_D";
				case 5:
					return "pbl_P4_T04_ACTION_E";
				case 6:
					return "pbl_P4_T04_ACTION_F";
				case 7:
					return "pbl_P4_T04_ACTION_G";
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "pbl_T01_Action_A";
				case 1:
					return "pbl_T01_Action_B";
				case 2:
					return "pbl_T01_Action_C";
				case 3:
					return "pbl_T01_Action_D";
				case 4:
					return "pbl_T01_Action_E";
				case 5:
					return "pbl_T02_Action_A";
				case 6:
					return "pbl_T02_Action_B";
				case 7:
					return "pbl_T02_Action_C";
			}
			break;
	}
	return "INVALID";
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_145(Global_1310750[iVar0], iParam0))
		{
			if (!func_146(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_147(iVar0) < func_148(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_149(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

char* func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 4)
			{
				return "s_BASE02_end";
			}
			else
			{
				return "s_BASE01_end";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "s_BASE03_end";
			}
			else
			{
				return "s_BASE03_end";
			}
			break;
		case 2:
			return "s_BASE04_end";
		case 3:
			return "s_BASE04_end";
		case 4:
			return "s_BASE_end";
	}
	return "INVALID";
}

bool func_88(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (!does_entity_exist(*iParam2))
	{
		return false;
	}
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (does_entity_have_physics(*iParam2))
	{
		set_entity_collision(*iParam0, true, false);
		set_anim_scene_origin(iLocal_138, func_77(0), 0f, 0f, 45f, 2);
		return true;
	}
	return false;
}

bool func_89(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_150(cParam1, cParam0);
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

void func_90(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		*fParam0 = (*fParam0 - (fParam1 * timestep()));
	}
	else
	{
		*fParam0 = (*fParam0 + (fParam1 * timestep()));
	}
	if (func_10(iLocal_139, 8388608))
	{
		_0x285438c26c732f9d();
		func_29(&iLocal_139, 8388608);
	}
	if (!func_10(iLocal_139, 8388608))
	{
		_0xa15ccab8ad038291(iLocal_183, 0, 1, *fParam0);
		func_11(&iLocal_139, 8388608);
	}
	if (does_particle_fx_looped_exist(iLocal_189))
	{
		set_particle_fx_looped_evolution(iLocal_189, "intensity", *fParam0, false);
	}
	if (bParam3)
	{
		if (*fParam0 <= fParam2)
		{
			*fParam0 = fParam2;
		}
	}
	else if (*fParam0 >= fParam2)
	{
		*fParam0 = fParam2;
	}
}

bool func_91(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_151(uParam2, 1, iVar0);
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
			if (func_152(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_153(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_154(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_155(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_156(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_157(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_153(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_158(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_159(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_160(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_161(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_161(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_153(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_162(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_163(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_164(uParam2, 4000))
				{
					if ((func_165(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_166(uParam2, iParam0)) && func_167(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_165(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_166(uParam2, iParam0)) && func_167(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_168(iParam0, Global_1935630->f_41))
							{
								func_169();
								*uParam3 = 2;
								func_153(iParam0, uParam2, *uParam3);
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
						if (func_168(iParam0, Global_1935630->f_41))
						{
							func_169();
							*uParam3 = 2;
							func_153(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_170(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_171() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_169();
						*uParam3 = 2;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_172())
					{
						if (func_168(iParam0, Global_1935630->f_42))
						{
							func_169();
							*uParam3 = 2;
							func_153(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_173(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_153(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_174(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_175(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_176(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_177(uParam2, 4000))
				{
					if (func_178(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_153(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_179(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_153(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_180(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_153(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

float func_92(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

struct<2> func_93(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_94(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_96(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_97(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_98(vector3 vParam0, int iParam3)
{
	if (func_181(vParam0))
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
			if (func_182(vVar2, vParam0, 2f, 1))
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

void func_99(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_183(&Global_0, 8);
	}
	if (!func_184() || func_51() != -1)
	{
		return;
	}
	func_183(&Global_0, 1);
}

void func_100()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_102(var uParam0)
{
	return func_101(*uParam0, 2);
}

float func_103()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_104(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_105(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_107(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_185((*Global_1835011)[iParam0]->f_1);
}

int func_108(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_186((*Global_1835011)[iParam0]->f_1);
}

bool func_109(int iParam0)
{
	iVar0 = func_63();
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

int func_110(int iParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*iParam0) };
	vVar3 = { get_entity_coords(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_187(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_188(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_189(iVar1, 0))
		{
			func_190(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_112(var uParam0)
{
	if (!func_34(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_102(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_171() - round((uParam0->f_1 * 1000f)));
}

bool func_113()
{
	return Global_1392040->f_6;
}

bool func_114()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_115(var uParam0, int iParam1)
{
	return func_191(*uParam0, iParam1);
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_192(1);
	}
}

void func_119(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_118(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_192(1);
	}
}

int func_120()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_122(int iParam0)
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

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_193(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_120())
	{
		return -1;
	}
	iVar0 = func_121(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_194(iVar1, 0);
	func_195(iVar1, 0);
	func_97(iVar1, 0);
	func_196(iVar1, 0);
	func_197(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_198(iVar1, iParam4);
	}
	return iVar1;
}

int func_124(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

struct<11> func_125()
{
	Var0 = -432403087;
	Var0.f_1 = { 2021.476f, -293.6755f, 40.64257f };
	Var0.f_4 = { 0f, 0f, -35f };
	Var0.f_7 = { 150f, 150f, 20f };
	Var0.f_10 = "EventBlock_01";
	return Var0;
}

struct<11> func_126()
{
	Var0 = -1612834106;
	Var0.f_1 = { func_199(get_player_index()) };
	Var0.f_4 = { 0f, 0f, 0f };
	Var0.f_7 = { 10f, 10f, 10f };
	Var0.f_10 = "StayAway";
	return Var0;
}

struct<12> func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_1 = 665633627;
			Var0.f_2 = { 2041.771f, -301.8179f, 40.64257f };
			Var0.f_5 = { 0f, 0f, -35f };
			Var0.f_8 = { 125f, 200f, 20f };
			Var0.f_11 = "AgnesDowdInit";
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2434.052f, -1224.941f, 45.8519f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "AndersHelgersonInit";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam3)
					{
						case 0:
							Var0.f_1 = 665633627;
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 1:
							Var0.f_1 = 665633627;
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 2:
							Var0.f_1 = 665633627;
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 3:
							Var0.f_1 = 665633627;
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1791.806f, -422.4149f, 154.8645f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "BlandPreacherInit";
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy4Init";
					break;
				case 9:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy5Init";
					break;
				case 10:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy6Init";
					break;
				case 13:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -5342.735f, -2948.708f, 0.8175f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy7Init";
					break;
				case 4:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy8Init";
					break;
				default:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy8Init";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 120f };
					Var0.f_11 = "ChelonianMasterInit";
					break;
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 180f, 180f, 120f };
					Var0.f_11 = "ChelonianMaster2Init";
					break;
			}
			break;
		case 7:
			Var0.f_1 = 665633627;
			Var0.f_2 = { 2013.938f, 621.8572f, 160.1942f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 140f, 140f, 120f };
			Var0.f_11 = "CivilWarCommandoInit";
			break;
		case 5:
			Var0.f_1 = 665633627;
			Var0.f_2 = { -1504.076f, 2458.008f, 417.758f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 201.2847f, 200f, 120f };
			Var0.f_11 = "CrackpotRobotInit";
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2537.911f, -1205.53f, 56.90488f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "DorotheaWicklowInit";
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -323.7828f, 767.8452f, 121.6327f };
					Var0.f_5 = { 0f, 0f, 9.428618f };
					Var0.f_8 = { 29f, 32.5f, 10f };
					Var0.f_11 = "EndlessStrainerInit";
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = -1612834106;
					Var0.f_2 = { 2691.439f, -1379.215f, 45.53815f };
					Var0.f_5 = { 0f, 0f, 40.27665f };
					Var0.f_8 = { 160f, 220f, 70f };
					Var0.f_11 = "EugenicsProponentInit";
					break;
			}
			break;
		case 11:
			switch (func_200())
			{
				case 105:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 1407.764f, -1377.079f, 79.702f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinRhodesInit";
					return Var0;
				case 38:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinBlackwaterInit";
					return Var0;
				case 126:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinMacfarlaneInit";
					return Var0;
				case 5:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinSaintDenisInit";
					return Var0;
			}
			switch (iParam2)
			{
				case 12:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinTallTreesInit";
					break;
				case 10:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinRoanokeInit";
					break;
				case 15:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinChollaInit";
					break;
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinBayouInit";
					return Var0;
				default:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinTallTreesInit";
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 1710f, 2148f, 319f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 70f };
					Var0.f_11 = "GiantInit";
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 60f, 60f, 20f };
					Var0.f_11 = "GrizzledJonInit";
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 1320.745f, -1291.739f, 75.14026f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "JoeButlerInit";
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 7:
				case 9:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 57.863f };
					Var0.f_11 = "JohnMadmanHeartlandsInit";
					break;
				case 13:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 66.553f };
					Var0.f_11 = "JohnMadmanGaptoothInit";
					break;
				case 10:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 108.806f };
					Var0.f_11 = "JohnMadmanRoanokeInit";
					break;
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 140f, 52.073f };
					Var0.f_11 = "JohnMadmanStrawberryInit";
					break;
				default:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 52.073f };
					Var0.f_11 = "JohnMadmanGeneralInit";
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2627.977f, -1225.307f, 69.61133f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "LillianPowellInit";
					break;
			}
			break;
		case 17:
			Var0.f_1 = 665633627;
			Var0.f_2 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_5 = { 0f, 0f, 36.13133f };
			Var0.f_8 = { 160f, 160f, 40f };
			Var0.f_11 = "MadScientistInit";
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
				case 2:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 100f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
				default:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2725.277f, 709.9713f, 173.0266f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "PhilosopherInit";
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2706.158f, 2370.946f, 165.3596f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "PoorJoeInit";
					break;
			}
			break;
		case 22:
			Var0.f_1 = 665633627;
			Var0.f_2 = { -5511.87f, -2945.988f, -1.198f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 140f, 140f, 30f };
			Var0.f_11 = "SheriffInit";
			break;
		case 23:
			switch (iParam2)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
				case 2:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2440.456f, -462.537f, 40.9104f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
				default:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2922.895f, 636.0865f, 52.2682f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper1Init";
					break;
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper2Init";
					break;
				case 2:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -2913.073f, -2849.159f, 38.86703f };
					Var0.f_5 = { 0f, 0f, 135f };
					Var0.f_8 = { 200f, 120f, 40f };
					Var0.f_11 = "SunWorshipper3Init";
					break;
				case 3:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper4Init";
					break;
				case 4:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper5Init";
					break;
				case 5:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -4399.393f, -3587.901f, 19.91016f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper6Init";
					break;
				case 6:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper7Init";
					break;
				case 7:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -5333.317f, -3534.569f, -22.77217f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper8Init";
					break;
				case 8:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper9Init";
					break;
				case 9:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper10Init";
					break;
				case 10:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -4956.249f, -3198.202f, -4.254218f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper11Init";
					break;
				case 11:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -4594.695f, -3125.494f, -1.754162f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper12Init";
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2371.776f, -861.4393f, 49.7588f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 160f, 160f, 20f };
					Var0.f_11 = "SwampWeirdoInit";
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { -345.2797f, 794.6578f, 115.1777f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 40f };
					Var0.f_11 = "ThomasDowneInit";
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 2647.447f, -1208.416f, 55.34686f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 100f, 30f };
					Var0.f_11 = "TimothyDonahueInit";
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = 665633627;
					Var0.f_2 = { 3025.557f, 1779.699f, 83.2056f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 30f };
					Var0.f_11 = "TinyHermitInit";
					break;
			}
			break;
		case 29:
			Var0.f_1 = 665633627;
			Var0.f_2 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 100f, 100f, 20f };
			Var0.f_11 = "VampireInit";
			break;
	}
	return Var0;
}

int func_128(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_181(vParam0))
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
		if (func_201(vParam0))
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
	func_202(iVar0, bParam8);
	return iVar0;
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 256);
	}
	else
	{
		func_135(&(uParam0->f_1), 256);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_135(uParam0, 16);
	}
	else
	{
		func_134(uParam0, 67108864);
		func_134(uParam0, 16);
	}
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_134(&(uParam0->f_1), 128);
	}
	else
	{
		func_135(&(uParam0->f_1), 128);
	}
}

void func_132(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_135(uParam0, 256);
	}
	else
	{
		func_134(uParam0, 256);
	}
}

void func_133(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_135(uParam0, 268435456);
	}
	else
	{
		func_134(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_135(uParam0, 1073741824);
	}
	else
	{
		func_134(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_135(uParam0, 536870912);
	}
	else
	{
		func_134(uParam0, 536870912);
	}
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_203())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_203())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_203())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_203())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_203())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_203())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_203())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_200())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

int func_138(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_204(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_139(int iParam0)
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

bool func_140(var uParam0, int iParam1, char* sParam2)
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

bool func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0, int iParam1)
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

bool func_143(int iParam0, int iParam1)
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
	if (!func_141(iParam0, iVar0))
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

void func_144(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_146(int iParam0)
{
	if (!func_205(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_147(int iParam0)
{
	if (func_205(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_148(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_149(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_206(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_150(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

void func_151(var uParam0, bool bParam1, int iParam2)
{
	func_207(iParam2);
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
		uParam0->f_13 = func_208(0);
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
							func_135(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_209(1))
						{
							func_135(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_209(1) || *uParam0 & 8192 != 0))
				{
					func_134(uParam0, 33554432);
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
			if (func_210(uParam0))
			{
				uParam0->f_15 = func_171();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_171() - uParam0->f_15) > 500)
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
	func_211(uParam0);
}

bool func_152(int iParam0, var uParam1)
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
			if (!func_212(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_213(iParam0, iVar2) <= func_214(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_153(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_215(iParam2, 1, 1, 1, 0))
	{
		func_135(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_216(uParam1, 1);
	func_217();
}

bool func_154(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_218(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_219(uParam1);
			if (func_220(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_221(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_216(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_216(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_155(int iParam0, int iParam1, var uParam2)
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
	if (func_222(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_219(uParam2);
		if (func_220(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_221(uParam2)
				{
					func_216(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_156(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
	if (func_212(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_221(uParam1)
		{
			fVar3 = func_219(uParam1);
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

int func_157(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_223(bParam1, bParam2, bParam3);
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

bool func_158(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_171();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_159(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_224(uParam2);
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
			if (func_167(uParam2, iParam1))
			{
				func_216(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_160(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_225(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_167(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_216(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_161(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_226(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_216(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_216(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_227(iParam1, vVar0, vVar4))
					{
						func_216(uParam2, 1);
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
					func_216(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_227(iParam1, vVar0, vVar7))
					{
						func_216(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_162(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_212(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_228(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_229(&(Global_1935630->f_34[iVar0])))
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
			if (func_230(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_231(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_232(uParam1, iParam0, fVar1, iVar0))
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

bool func_163(int iParam0, var uParam1)
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

bool func_164(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_171();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_165(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_233(iVar0, &iVar2))
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
	if (func_234(iVar0, iParam0))
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

int func_166(var uParam0, int iParam1)
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

bool func_167(var uParam0, int iParam1)
{
	if (func_235(uParam0))
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

bool func_168(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_92(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_169()
{
}

bool func_170(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_236(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_171();
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
						if (func_50(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_171();
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

int func_171()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_172()
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
	if ((func_171() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_173(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_214(uParam0);
	if (uParam0->f_12 > func_237(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_238(iParam1);
	iVar1 = func_239(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_174(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_240(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_175(int iParam0, var uParam1)
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
		if (func_241(iParam0, uParam1, 1))
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
					if (!func_242(uParam1, iParam0))
					{
						if (func_50(iVar4, Global_36, 1) < 7f)
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

bool func_176(int iParam0, var uParam1)
{
	if (!func_243(0))
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

bool func_177(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_171();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_178(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_179(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_171();
	}
	else if (func_171() - uParam1->f_4) > func_244(uParam1)
	{
		return func_245(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_180(var uParam0, int iParam1)
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

bool func_181(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_182(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_183(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_184()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_185(int iParam0)
{
	iVar0 = func_246(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_186(int iParam0)
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
		iVar0 = func_247(iParam0);
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

bool func_187(var uParam0, vector3 vParam1, float fParam4)
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

bool func_188(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_248(Global_35, *iParam1, 0))
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

bool func_189(int iParam0, bool bParam1)
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

void func_190(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_249(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_191(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		func_135(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_134(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_193(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_194(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_250(iParam0);
	}
	else
	{
		func_251(iParam0, iParam1);
	}
	func_252();
}

void func_195(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_196(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_197(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_198(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

Vector3 func_199(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_200()
{
	return Global_1894899->f_2;
}

bool func_201(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_202(int iParam0, bool bParam1)
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

int func_203()
{
	return Global_1897952->f_41;
}

void func_204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_253(iParam1))
		{
			func_82(iParam0, 41788943);
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
			func_254(iParam0, 0, 1);
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
			func_255(iParam0, 0);
			bVar0 = true;
		}
		func_256(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_205(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_206(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_257(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_51() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_207(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_258();
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
			func_259(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_208(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_209(bool bParam0)
{
	if (func_260(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_210(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_51() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_261(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_261(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_239(iVar0) == -1)
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

void func_211(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_262(uParam0);
	}
}

bool func_212(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_239(iParam2);
	}
	else
	{
		iVar1 = func_238(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_239(iParam0);
	}
	else
	{
		iVar0 = func_238(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_191(*uParam1, 8388608))
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

float func_213(int iParam0, int iParam1)
{
	return func_92(iParam0, iParam1, 1, 1);
}

float func_214(var uParam0)
{
	return uParam0->f_26;
}

bool func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_216(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_135(uParam0, 134217728);
	}
	else
	{
		func_134(uParam0, 134217728);
	}
}

void func_217()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_218(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_92(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_263(iVar0, 0)))
		{
			if (func_264(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_219(var uParam0)
{
	return uParam0->f_17;
}

bool func_220(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_191(*uParam0, 4194304))
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

int func_221(var uParam0)
{
	return uParam0->f_18;
}

bool func_222(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_263(iVar0, 0)))
		{
			if (func_265(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_223(bool bParam0, bool bParam1, bool bParam2)
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

float func_224(var uParam0)
{
	return uParam0->f_23;
}

int func_225(var uParam0)
{
	return uParam0->f_21;
}

int func_226(var uParam0)
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

bool func_227(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_266(iParam0, vParam4, 0.5f))
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

int func_228(int iParam0)
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
	if (func_267(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)
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

bool func_230(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_268(iParam1))
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

bool func_231(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_268(iParam1))
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

bool func_232(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_268(iParam1))
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

bool func_233(int iParam0, int iParam1)
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

bool func_234(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_269(iParam0, 1, 0, 0) != 2055893578)
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

bool func_235(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_236(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_50(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_237(var uParam0)
{
	return uParam0->f_24;
}

int func_238(int iParam0)
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

int func_239(int iParam0)
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

int func_240(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_233(Global_35, &iVar1))
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
		fVar2 = func_92(iParam0, player_ped_id(), 0, 1);
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
		if (func_92(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_241(int iParam0, var uParam1, bool bParam2)
{
	func_260(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_242(uParam1, iVar0))
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
				if (!bParam2 || !func_242(uParam1, iVar1))
				{
					if (func_50(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_242(var uParam0, int iParam1)
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

int func_243(int iParam0)
{
	if (func_270())
	{
		return 0;
	}
	return func_271((*Global_1347702)[58]->f_15, 1);
}

int func_244(var uParam0)
{
	return uParam0->f_20;
}

int func_245(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_246(int iParam0)
{
	if (!func_96(iParam0))
	{
		return -1;
	}
	return func_247(iParam0);
}

int func_247(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_272(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_248(int iParam0, int iParam1, bool bParam2)
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

bool func_249(int iParam0, int iParam1)
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

int func_250(int iParam0)
{
	iVar0 = func_272(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_273(iVar0);
}

int func_251(int iParam0, int iParam1)
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
			func_274(iVar2);
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

void func_252()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_253(int iParam0)
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

void func_254(int iParam0, int iParam1, bool bParam2)
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

void func_255(int iParam0, bool bParam1)
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

void func_256(int iParam0, int iParam1)
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

int func_257(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_258()
{
	if (func_275())
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

void func_259(var uParam0, var uParam1)
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

bool func_260(bool bParam0, int iParam1, int iParam2)
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

int func_261(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
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

void func_262(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_134(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_135(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_263(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_264(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_265(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_265(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_266(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_267(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_268(int iParam0)
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

int func_269(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_270()
{
	if (func_51() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_271(int iParam0, bool bParam1)
{
	switch (func_246(iParam0))
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

int func_272(int iParam0)
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

int func_273(int iParam0)
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

int func_274(int iParam0)
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

bool func_275()
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

