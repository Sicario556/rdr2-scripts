void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_15);
	}
	while (true)
	{
		wait(0);
		if (!func_2(Local_15.f_173, 4194304))
		{
			if (does_entity_exist(&(Local_15.f_149[0])) && (is_ped_injured(&(Local_15.f_149[0])) || _is_ped_hogtied(&(Local_15.f_149[0]))))
			{
				func_3(575725904);
				func_4(&(Local_15.f_173), 4194304);
			}
		}
		if (!func_2(Local_15.f_173, 134217728))
		{
			if (does_entity_exist(&(Local_15.f_149[0])))
			{
				if (!_0x5102307ce88798eb(&(Local_15.f_149[0])))
				{
					request_ped_visibility_tracking(&(Local_15.f_149[0]));
				}
				else if (is_entity_visible_to_script(&(Local_15.f_149[0])) && func_5(&(Local_15.f_149[0]), 35f, -1082130432, -1082130432, 80f))
				{
					func_7(28, func_6());
					func_4(&(Local_15.f_173), 134217728);
				}
			}
		}
		if (!func_8(28, 4194304))
		{
			if (func_9(Global_35, 0, 1, 0) == 575725904)
			{
				func_10(28, 4194304, 1);
			}
		}
		if (func_11(28, &(Local_15.f_149[0]), 1, 1) && iLocal_14 > 2)
		{
			if (!func_12(Global_35, Local_15.f_155, 0, 1))
			{
				func_14(&Local_15, &(Local_15.f_172), func_13(27), 0, 1);
			}
			else
			{
				if (!func_2(Local_15.f_173, 536870912))
				{
					if (func_16(28, func_15(), Local_15.f_149[0], &(Local_15.f_136), &(Local_15.f_291), 0, 1097859072, 0))
					{
						func_4(&(Local_15.f_173), 536870912);
					}
				}
				func_17(&Local_15, func_15(), &iLocal_14);
				func_18(&Local_15, &iLocal_14);
				func_19(&Local_15, &iLocal_14);
				func_20(&Local_15, &iLocal_14);
				func_21(&Local_15, &iLocal_14);
				func_22(&(Local_15.f_149[0]), &(Local_15.f_173), 2048, 28, 0);
				switch (iLocal_14)
				{
					case 0:
						func_23(&Local_15, &iLocal_14);
						break;
					case 1:
						if (func_24(&Local_15))
						{
							func_25(&Local_15, &iLocal_14, 2);
						}
						break;
					case 2:
						func_26(&Local_15, &iLocal_14);
						break;
					case 3:
						func_27(&Local_15, &iLocal_14);
						break;
					case 5:
						func_28(&Local_15, &iLocal_14);
						break;
					case 6:
						func_29(&Local_15, &iLocal_14);
						break;
					case 7:
						func_30(&Local_15, &iLocal_14);
						break;
					case 8:
						func_31(&Local_15, &iLocal_14);
						break;
					case 9:
						func_32(&Local_15, &iLocal_14);
						break;
					case 13:
						if (Local_15.f_170 >= 6 && (!does_entity_exist(&(Local_15.f_149[0])) || is_ped_dead_or_dying(&(Local_15.f_149[0]), true)))
						{
						}
						if (does_entity_exist(&(Local_15.f_149[0])))
						{
							if (!_0x5102307ce88798eb(&(Local_15.f_149[0])))
							{
								request_ped_visibility_tracking(&(Local_15.f_149[0]));
							}
							if (func_33(Global_35, &(Local_15.f_149[0]), 1, 1) > 80f && !is_tracked_ped_visible(&(Local_15.f_149[0])))
							{
								if (does_entity_exist(&(Local_15.f_149[0])))
								{
									delete_ped(Local_15.f_149[0]);
								}
								func_1(&Local_15);
							}
						}
						break;
					case 11:
						func_34(&Local_15, &iLocal_14);
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(var uParam0)
{
	func_35(&(uParam0->f_269));
	func_36(uParam0->f_166);
	func_37(&(uParam0->f_230), 0, 1, 1, 0);
	func_38(&(uParam0->f_209), &(uParam0->f_230));
	if (_is_tracked_point_valid(uParam0->f_180))
	{
		destroy_tracked_point(uParam0->f_180);
	}
	if (!is_entity_dead(&(uParam0->f_149[0])))
	{
		remove_entity_from_audio_mix_group(&(uParam0->f_149[0]), 0f);
		_0x39a2fc5af55a52b1(&(uParam0->f_149[0]), -1);
		set_ped_as_no_longer_needed(uParam0->f_149[0]);
	}
	if (!does_entity_exist(&(uParam0->f_151[0])))
	{
		set_entity_as_no_longer_needed(uParam0->f_151[0]);
	}
	if (_does_anim_scene_exist(uParam0->f_172))
	{
		_delete_anim_scene(uParam0->f_172);
	}
	func_39(1973911195, 1, 0, 0, 1, 1f, 0, 0);
	_0xc07b91b996c1de89(1973911195, 1);
	func_40(1973911195);
	if (_does_volume_exist(uParam0->f_154))
	{
		func_41(uParam0->f_154);
		_delete_volume(uParam0->f_154);
	}
	if (_does_volume_exist(uParam0->f_155))
	{
		_delete_volume(uParam0->f_155);
	}
	if (_does_volume_exist(uParam0->f_156))
	{
		_delete_volume(uParam0->f_156);
	}
	if (_does_volume_exist(uParam0->f_158))
	{
		_0x74c2b3dc0b294102(uParam0->f_158);
		_0xa1cfb35069d23c23(uParam0->f_158);
		_delete_volume(uParam0->f_158);
	}
	if (_does_volume_exist(uParam0->f_157))
	{
		_0x74c2b3dc0b294102(uParam0->f_157);
		_0xa1cfb35069d23c23(uParam0->f_157);
		_delete_volume(uParam0->f_157);
	}
	if (_does_volume_exist(uParam0->f_159))
	{
		_delete_volume(uParam0->f_159);
	}
	if (_does_volume_exist(uParam0->f_160))
	{
		_delete_volume(uParam0->f_160);
	}
	if (_does_volume_exist(uParam0->f_165))
	{
		_delete_volume(uParam0->f_165);
	}
	if (_does_volume_exist(uParam0->f_161))
	{
		_delete_volume(uParam0->f_161);
	}
	if (_does_volume_exist(uParam0->f_162))
	{
		_delete_volume(uParam0->f_162);
	}
	if (_does_volume_exist(uParam0->f_163))
	{
		_delete_volume(uParam0->f_163);
	}
	if (_does_volume_exist(uParam0->f_164))
	{
		_delete_volume(uParam0->f_164);
	}
	if (_does_volume_exist(uParam0->f_166))
	{
		_delete_volume(uParam0->f_166);
	}
	if (_does_volume_exist((*(*Global_1396257)[28])[func_15()]->f_47))
	{
		_delete_volume((*(*Global_1396257)[28])[func_15()]->f_47);
	}
	if (does_blip_exist(uParam0->f_292))
	{
		remove_blip(&(uParam0->f_292));
	}
	func_42(28);
	terminate_this_thread();
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_43(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

void func_4(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

bool func_5(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_45(iParam0, Global_36, 1);
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

bool func_6()
{
	if (func_46() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_7(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_47(1786474035, 0);
			}
			else
			{
				func_47(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_47(1417967521, 0);
			}
			else
			{
				func_47(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_47(-755110140, 0);
			}
			else if (func_48(55))
			{
				func_47(-1437550882, 0);
			}
			else
			{
				func_47(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_47(2063812437, 0);
			}
			else
			{
				func_47(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_47(-1558441298, 0);
			}
			else
			{
				func_47(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_47(1071640065, 0);
			}
			else
			{
				func_47(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_47(928184916, 0);
			}
			else
			{
				func_47(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

bool func_8(int iParam0, int iParam1)
{
	return func_49(Global_40.f_11623[iParam0]->f_1, iParam1);
}

int func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_50(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
	else
	{
		func_51(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
}

bool func_11(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_52())
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
		if (func_53(0) == 7 || func_54())
		{
			return true;
		}
	}
	if (func_55(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_12(int iParam0, int iParam1, int iParam2, bool bParam3)
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

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_a_mans_home";
			break;
		case 1:
			sVar0 = "pl_are_you_deaf";
			break;
		case 2:
			sVar0 = "pl_get_lost";
			break;
		case 3:
			sVar0 = "pl_go_away";
			break;
		case 4:
			sVar0 = "pl_go_away_now";
			break;
		case 5:
			sVar0 = "pl_very_unhappy";
			break;
		case 6:
			sVar0 = "pl_run_outside_A";
			break;
		case 7:
			sVar0 = "pl_run_outside_B";
			break;
		case 8:
			sVar0 = "pl_run_outside_C";
			break;
		case 9:
			sVar0 = "pl_run_outside_D";
			break;
		case 10:
			sVar0 = "pl_run_outside_E";
			break;
		case 11:
			sVar0 = "pl_out_of_the_house";
			break;
		case 12:
			sVar0 = "pl_back_in_the_house";
			break;
		case 13:
			sVar0 = "pl_back_in_the_house_02";
			break;
		case 14:
			sVar0 = "pl_shoot_sky_A";
			break;
		case 15:
			sVar0 = "pl_shoot_sky_B";
			break;
		case 16:
			sVar0 = "pl_shoot_sky_C";
			break;
		case 17:
			sVar0 = "pl_flinch_down_01";
			break;
		case 18:
			sVar0 = "pl_flinch_down_02";
			break;
		case 19:
			sVar0 = "pl_flinch_left_01";
			break;
		case 20:
			sVar0 = "pl_flinch_left_02";
			break;
		case 21:
			sVar0 = "pl_flinch_right_01";
			break;
		case 22:
			sVar0 = "pl_flinch_right_02";
			break;
		case 23:
			sVar0 = "pl_flinch_feet";
			break;
		case 24:
			sVar0 = "pl_turn_left";
			break;
		case 25:
			sVar0 = "pl_turn_right";
			break;
		case 26:
			sVar0 = "pl_outside_idle_base";
			break;
		case 27:
			sVar0 = "pl_inside_idle_base";
			break;
		case 28:
			sVar0 = "pl_idle_01";
			break;
		case 29:
			sVar0 = "pl_idle_02";
			break;
		case 30:
			sVar0 = "pl_idle_03";
			break;
	}
	return sVar0;
}

bool func_14(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (_does_anim_scene_exist(*uParam1))
	{
		if (!_is_anim_scene_started(*uParam1, false))
		{
			start_anim_scene(*uParam1);
		}
		if (_is_anim_scene_started(*uParam1, false))
		{
			if ((!_0x23e33cb9f4a3f547(*uParam1, sParam2) && !_0x0df57f86fe71dbe5(*uParam1, sParam2)) && !_0x1f0e401031e20146(*uParam1, sParam2))
			{
				_0xdf7b5144e25cd3fe(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!func_56(uParam0->f_149[0], 0, 0))
				{
					return false;
				}
			}
			if (!_0x1f0e401031e20146(*uParam1, sParam2) && _0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				_set_anim_scene_playback_list_bool(*uParam1, sParam2, true);
				set_anim_scene_bool(*uParam1, "bLoop", bParam3, false);
				return false;
			}
			else if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				if (_0x8d81e7824b7753f7(*uParam1, "s_outside_idle_base", 1) || _0x8d81e7824b7753f7(*uParam1, "s_inside_idle_base", 1))
				{
					if (func_57(uParam1, uParam0->f_167))
					{
						uParam0->f_167 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_15()
{
	return 0;
}

bool func_16(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_58();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_59(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_60(uParam3))
	{
		func_61(uParam3, 0f);
	}
	else if (func_62(uParam3) >= 2f)
	{
		if (!func_63(Global_40.f_11623[iParam0]->f_2))
		{
			func_64(iParam0);
			*uParam4 = 1;
			func_65(uParam3);
			return true;
		}
		else
		{
			func_64(iParam0);
			*uParam4 = 1;
			func_65(uParam3);
			return true;
		}
	}
	return false;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	if (!_does_volume_exist((*(*Global_1396257)[28])[func_15()]->f_47))
	{
		func_1(uParam0);
	}
	if (!func_66(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!is_entity_in_volume(Global_35, (*(*Global_1396257)[28])[func_15()]->f_47, true, 0))
	{
		if (!func_60(&(uParam0->f_127)))
		{
			func_67(&(uParam0->f_127), 0);
		}
		else if (func_62(&(uParam0->f_127)) > 10f)
		{
			func_65(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (func_68(28, iParam1, &(uParam0->f_269), &(uParam0->f_149[0])))
	{
		if (func_69(&(uParam0->f_269)) || func_2(uParam0->f_269, 8))
		{
			func_1(uParam0);
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_149[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (!func_66(&(uParam0->f_149[0]), 0))
	{
		if (!func_2(uParam0->f_173, 67108864))
		{
			if (_does_anim_scene_exist(uParam0->f_172) && _is_anim_scene_started(uParam0->f_172, false))
			{
				_delete_anim_scene(uParam0->f_172);
			}
			func_25(uParam0, iParam1, 13);
			func_70(&(uParam0->f_209), 0);
			set_ped_config_flag(&(uParam0->f_149[0]), 315, false);
			func_38(&(uParam0->f_209), &(uParam0->f_230));
			func_4(&(uParam0->f_173), 67108864);
		}
	}
	else if ((*iParam1 > 3 && *iParam1 <= 8) && get_interior_from_entity(&(uParam0->f_149[0])) == 0)
	{
		if ((func_71(&(uParam0->f_149[0]), 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0) || func_59(Global_35, &(uParam0->f_149[0]), 4f, 1)) || get_player_wanted_level(player_id()) > 0)
		{
			if (!func_2(uParam0->f_173, 128))
			{
				func_72(uParam0->f_230[0], 1);
				func_72(uParam0->f_230[1], 1);
				if (!func_2(uParam0->f_173, 536870912))
				{
					func_64(28);
					func_4(&(uParam0->f_173), 536870912);
				}
				func_4(&(uParam0->f_173), 128);
				func_25(uParam0, iParam1, 11);
			}
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	if (*iParam1 >= 11 || *iParam1 <= 2)
	{
		return;
	}
	task_look_at_entity(&(uParam0->f_149[0]), Global_35, -1, 0, 51, 0);
}

void func_20(var uParam0, int iParam1)
{
	if (func_2(uParam0->f_173, 64))
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 8)
	{
		if (!func_2(uParam0->f_173, 32768))
		{
			if (func_73(uParam0->f_149[0], 1715123483))
			{
				func_4(&(uParam0->f_173), 32768);
				uParam0->f_178++;
				if (uParam0->f_178 >= 2)
				{
					func_4(&(uParam0->f_173), 64);
				}
			}
		}
	}
	if (!is_ped_injured(&(uParam0->f_149[0])))
	{
		if (!is_scripted_speech_playing(&(uParam0->f_149[0])))
		{
			func_74(&(uParam0->f_173), 32768);
		}
	}
}

void func_21(var uParam0, int iParam1)
{
	iVar1 = 0;
	if (is_entity_dead(&(uParam0->f_149[0])))
	{
		return;
	}
	iVar0 = func_76(uParam0->f_149[0], &(uParam0->f_209), 25f, &(uParam0->f_230), &iVar1, 0f, 2, 0, 0, func_75(uParam0->f_268, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	if (func_2(uParam0->f_173, 65536))
	{
		if (((func_77(&(uParam0->f_149[0]), 1, 1, 1, 0, 0) || is_scripted_speech_playing(&(uParam0->f_149[0]))) || is_scripted_speech_playing(Global_35)) || func_2(uParam0->f_173, 16777216))
		{
			func_78(uParam0->f_230[0], 0, 0);
			func_78(uParam0->f_230[1], 0, 0);
		}
		else if (!func_2(uParam0->f_173, 524288))
		{
			if (!func_2(uParam0->f_173, 1048576))
			{
				func_78(uParam0->f_230[0], 1, 0);
			}
			func_78(uParam0->f_230[1], 1, 0);
		}
		switch (iVar0)
		{
			case 0:
				func_4(&(uParam0->f_173), 1048576);
				func_4(&(uParam0->f_173), 16777216);
				break;
			case 1:
				uParam0->f_177 = 2;
				func_4(&(uParam0->f_173), 524288);
				break;
		}
		if (func_2(uParam0->f_173, 16777216))
		{
			if (is_scripted_speech_playing(&(uParam0->f_149[0])))
			{
				func_74(&(uParam0->f_173), 16777216);
			}
		}
	}
	else if (func_2(uParam0->f_173, 131072))
	{
		if (!func_2(uParam0->f_173, 262144))
		{
			if (is_scripted_speech_playing(&(uParam0->f_149[0])))
			{
				func_4(&(uParam0->f_173), 262144);
			}
		}
		else if ((!is_scripted_speech_playing(&(uParam0->f_149[0])) && !is_scripted_speech_playing(Global_35)) && !func_2(uParam0->f_173, 8388608))
		{
			func_4(&(uParam0->f_173), 65536);
		}
	}
}

void func_22(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_79(iParam3);
	if (fParam4 == 0f)
	{
		if (func_59(iParam0, Global_35, 15f, 1))
		{
			if (!func_80(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_44(uParam1, iParam2);
				}
			}
		}
		else if (func_80(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_81(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_80(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_44(uParam1, iParam2);
			}
		}
	}
	else if (func_80(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_81(uParam1, iParam2);
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_172))
	{
		uParam0->f_172 = _create_anim_scene(func_82(), 0, func_13(27), false, true);
	}
	if (_does_anim_scene_exist(uParam0->f_172))
	{
		load_anim_scene(uParam0->f_172);
		request_model(uParam0->f_146, false);
		_text_database_request("SPTTLAU");
		func_83(uParam0);
		func_84(uParam0->f_154, "SP_TINY_HERMIT_Block", 1, 0, 0, 0, -1082130432);
		_0xb56d41a694e42e86(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		uParam0->f_145 = func_86(28, func_15(), 9, func_85(28));
		if (!func_87(uParam0->f_145))
		{
		}
		if (func_88())
		{
			func_89(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_89(uParam0, Global_35, "ARTHUR", 0);
		}
		uParam0->f_168 = "TINY_HERMIT";
		func_90(&(uParam0->f_269));
		func_91(&(uParam0->f_98));
		func_92(&(uParam0->f_98), 1);
		func_93(&(uParam0->f_98), 1);
		func_94(&(uParam0->f_98), 0);
		func_95(&(uParam0->f_98), 0);
		func_96(&(uParam0->f_98), 1);
		func_97(&(uParam0->f_98), 1);
		func_98(&(uParam0->f_98), 1);
		func_99(&(uParam0->f_98), 0);
		func_100(&(uParam0->f_98), 0);
		func_101(&(uParam0->f_98), 1);
		func_102(&(uParam0->f_98), 1);
		func_103(&(uParam0->f_98), 1);
		func_104(&(uParam0->f_98), 1);
		func_105(&(uParam0->f_98), 1);
		func_106(&(uParam0->f_98), 1);
		func_107(&(uParam0->f_98), 1);
		func_108(&(uParam0->f_98), 1);
		func_109(&(uParam0->f_98), 1);
		func_110(&(uParam0->f_98), 25f);
		if (func_87(uParam0->f_145))
		{
			uParam0->f_170 = func_111(uParam0->f_145);
			uParam0->f_176 = func_112(uParam0->f_145);
			if (uParam0->f_170 < 1)
			{
				uParam0->f_170 = 1;
			}
			uParam0->f_171 = uParam0->f_170;
			func_25(uParam0, iParam1, 1);
		}
	}
}

bool func_24(var uParam0)
{
	_0xed9582b3da8f02b4(1);
	if (((has_model_loaded(uParam0->f_146) && _is_anim_scene_loaded(uParam0->f_172, true, false)) && _text_database_has_loaded("SPTTLAU")) && _0x5c16855277819bbf() == 1)
	{
		return true;
	}
	if (!has_model_loaded(uParam0->f_146))
	{
	}
	if (!_is_anim_scene_loaded(uParam0->f_172, true, false))
	{
	}
	if (!_text_database_has_loaded("SPTTLAU"))
	{
	}
	if (_0x5c16855277819bbf() != 1)
	{
	}
	return false;
}

void func_25(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 11:
			func_64(28);
			if (_is_anim_scene_started(uParam0->f_172, false))
			{
				iVar0 = _get_anim_scene_object(uParam0->f_172, "p_door60", false);
				if (does_entity_exist(iVar0))
				{
					remove_anim_scene_entity(uParam0->f_172, "p_door60", iVar0);
				}
			}
			break;
		case 8:
			func_78(uParam0->f_230[0], 0, 0);
			func_78(uParam0->f_230[1], 0, 0);
			func_4(&(uParam0->f_173), 8388608);
			func_74(&(uParam0->f_173), 65536);
			break;
	}
	*iParam1 = iParam2;
}

void func_26(var uParam0, int iParam1)
{
	Var0 = { func_113(0) };
	if (func_114(uParam0->f_149[0], uParam0->f_146, Var0, Var0.f_3, 1, 0, 1))
	{
		if (func_66(&(uParam0->f_149[0]), 0))
		{
			func_115(&(uParam0->f_149[0]), 28);
			func_116(&(uParam0->f_149[0]), 0);
			func_39(1973911195, 0, 0.05f, 0, 1, 0, 1, 0);
			add_entity_to_audio_mix_group(&(uParam0->f_149[0]), "special_ped_group", 0f);
			if (func_8(28, 4194304))
			{
				iVar4 = func_117(13631488, 1056964608, 1065353216);
				func_118(&(uParam0->f_149[0]), iVar4, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			else
			{
				_give_weapon_to_ped_2(&(uParam0->f_149[0]), 575725904, -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
			set_blocking_of_non_temporary_events(&(uParam0->f_149[0]), true);
			set_ped_relationship_group_hash(&(uParam0->f_149[0]), -1976316465);
			set_ped_keep_task(&(uParam0->f_149[0]), true);
			func_119(uParam0, 0);
			set_ped_max_health(&(uParam0->f_149[0]), 250);
			func_120(&(uParam0->f_149[0]), 250);
			set_ped_config_flag(&(uParam0->f_149[0]), 297, true);
			set_ped_config_flag(&(uParam0->f_149[0]), 143, true);
			set_ped_config_flag(&(uParam0->f_149[0]), 317, true);
			set_ped_config_flag(&(uParam0->f_149[0]), 344, true);
			if (func_88())
			{
				func_121(&(uParam0->f_149[0]), 1689938120);
			}
			uParam0->f_151[0] = get_current_ped_weapon_entity_index(&(uParam0->f_149[0]), 0);
			func_89(uParam0, &(uParam0->f_149[0]), uParam0->f_168, 0);
			_set_entity_coords_and_heading(&(uParam0->f_149[0]), Var0, Var0.f_3, true, false, true);
			set_anim_scene_entity(uParam0->f_172, "CS_TINYHERMIT", &(uParam0->f_149[0]), 0);
			set_anim_scene_entity(uParam0->f_172, "w_shotgun_doubleBarrel01", &(uParam0->f_151[0]), 0);
			if (_does_anim_scene_exist(uParam0->f_172))
			{
				if (!_is_anim_scene_started(uParam0->f_172, false))
				{
					start_anim_scene(uParam0->f_172);
				}
			}
			func_122(uParam0->f_166, 0, 2016, 0);
			func_123(uParam0);
			func_25(uParam0, iParam1, 3);
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	bVar0 = false;
	func_124(uParam0);
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_149[0])))
	{
		return;
	}
	if (_does_anim_scene_exist(uParam0->f_172) && _0x1f0e401031e20146(uParam0->f_172, func_13(27)))
	{
		_0x80fdeb3a9e9aa578(&(uParam0->f_149[0]), 0);
	}
	if (!func_2(uParam0->f_173, 268435456))
	{
		if (func_12(Global_35, uParam0->f_156, 0, 1))
		{
			return;
		}
	}
	if (func_12(Global_35, uParam0->f_155, 0, 1))
	{
		if (!func_2(uParam0->f_173, 268435456))
		{
			if (!func_12(Global_35, uParam0->f_156, 0, 1))
			{
				func_4(&(uParam0->f_173), 268435456);
			}
		}
	}
	else
	{
		return;
	}
	if (uParam0->f_176 <= 9)
	{
		func_126(uParam0, func_125(uParam0->f_176), &bVar0);
		if (bVar0)
		{
			uParam0->f_176++;
			func_127(uParam0->f_145, uParam0->f_176);
		}
	}
	else if (is_string_null_or_empty(func_128(uParam0->f_181)))
	{
		uParam0->f_181 = { func_129(uParam0) };
	}
	else if (func_126(uParam0, uParam0->f_181, &bVar0))
	{
		uParam0->f_181 = { func_130("") };
	}
	if (func_12(Global_35, uParam0->f_165, 0, 1))
	{
		if (uParam0->f_180 == -1)
		{
			uParam0->f_180 = create_tracked_point();
			set_tracked_point_info(uParam0->f_180, get_entity_coords(&(uParam0->f_149[0]), true, false), 1f);
			func_131(&(uParam0->f_139));
		}
		else if (func_132(&(uParam0->f_139)) > 0.2f)
		{
			if (_0xdfe332a5da6fe7c9(uParam0->f_180) <= 5 && func_59(Global_35, &(uParam0->f_149[0]), 20f, 1))
			{
				func_133(28, uParam0->f_149[0], &(uParam0->f_173), 4);
				_0x36559148b78853b3(1, 1, 0);
				func_25(uParam0, iParam1, 5);
			}
		}
	}
}

void func_28(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_149[0])))
	{
		return;
	}
	if (uParam0->f_170 > 6)
	{
		func_25(uParam0, iParam1, 9);
	}
	else if (!is_scripted_speech_playing(&(uParam0->f_149[0])))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_134(uParam0->f_171)), 0, 1))
		{
			uParam0->f_170++;
			if (func_87(uParam0->f_145))
			{
				func_135(uParam0->f_145, uParam0->f_170);
			}
			func_25(uParam0, iParam1, 6);
		}
		else if (!func_2(uParam0->f_173, 131072))
		{
			if (_is_anim_scene_started(uParam0->f_172, false))
			{
				if (_get_anim_scene_time(uParam0->f_172) >= 4f)
				{
					_0x36559148b78853b3(1, 0, 0);
					func_4(&(uParam0->f_173), 131072);
				}
			}
		}
	}
}

void func_29(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_149[0]))) || !_does_volume_exist(uParam0->f_157)) || !_does_volume_exist(uParam0->f_158))
	{
		return;
	}
	if (!func_59(Global_35, &(uParam0->f_149[0]), 25f, 1) || !is_entity_in_volume(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((func_59(Global_35, &(uParam0->f_149[0]), 4f, 1) || is_entity_in_volume(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !is_scripted_speech_playing(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!is_scripted_speech_playing(&(uParam0->f_149[0])) && !is_scripted_speech_playing(Global_35))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_136(uParam0->f_171)), 0, 1))
		{
			uParam0->f_177++;
			func_25(uParam0, iParam1, 7);
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_149[0]))) || !_does_volume_exist(uParam0->f_158)) || !_does_volume_exist(uParam0->f_157))
	{
		return;
	}
	if (!func_59(Global_35, &(uParam0->f_149[0]), 25f, 1) || !is_entity_in_volume(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((func_59(Global_35, &(uParam0->f_149[0]), 4f, 1) || is_entity_in_volume(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !is_scripted_speech_playing(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!func_2(uParam0->f_173, 524288))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_137(uParam0->f_171)), 0, 1))
		{
			func_25(uParam0, iParam1, 8);
		}
	}
}

void func_31(var uParam0, int iParam1)
{
	iVar0 = func_138(uParam0->f_171);
	if (func_14(uParam0, &(uParam0->f_172), func_13(iVar0), 0, 1))
	{
		func_25(uParam0, iParam1, 9);
	}
	if (_0x1f0e401031e20146(uParam0->f_172, func_13(iVar0)))
	{
		if (uParam0->f_290 && !func_2(uParam0->f_173, 4096))
		{
			if (iVar0 == 12)
			{
				fVar1 = 0.4731f;
			}
			else
			{
				fVar1 = 0.4297f;
			}
			if (_get_anim_scene_progress(uParam0->f_172) >= fVar1)
			{
				iVar2 = _get_anim_scene_object(uParam0->f_172, "p_door60", false);
				if (does_entity_exist(iVar2))
				{
					remove_anim_scene_entity(uParam0->f_172, "p_door60", iVar2);
				}
				func_39(1973911195, 1, 0, 0, 1, 0, 1, 0);
				_0xc07b91b996c1de89(1973911195, 1);
				func_4(&(uParam0->f_173), 4096);
			}
		}
		uParam0->f_290 = 1;
	}
}

void func_32(var uParam0, int iParam1)
{
	if (get_interior_from_entity(Global_35) != 0)
	{
		func_25(uParam0, iParam1, 11);
	}
	switch (uParam0->f_265)
	{
		case 0:
			reset_anim_scene(uParam0->f_172, 0);
			if (!func_2(uParam0->f_173, 8192))
			{
				uParam0->f_292 = _blip_add_for_entity(831283580, &(uParam0->f_149[0]));
				func_4(&(uParam0->f_173), 8192);
			}
			set_ped_config_flag(&(uParam0->f_149[0]), 226, true);
			set_ped_config_flag(&(uParam0->f_149[0]), 268, true);
			set_ped_combat_attributes(&(uParam0->f_149[0]), 67, true);
			set_ped_combat_attributes(&(uParam0->f_149[0]), 30, true);
			set_ped_combat_attributes(&(uParam0->f_149[0]), 111, false);
			set_ped_flee_attributes(&(uParam0->f_149[0]), 512, true);
			set_blocking_of_non_temporary_events(&(uParam0->f_149[0]), false);
			set_ped_config_flag(&(uParam0->f_149[0]), 168, true);
			func_139(uParam0, 1);
			break;
		case 1:
			func_140(uParam0);
			break;
		case 2:
			if (func_141(uParam0))
			{
				func_139(uParam0, 1);
			}
			break;
	}
	if (uParam0->f_265 == 1 || uParam0->f_265 == 2)
	{
		func_142(uParam0);
	}
}

float func_33(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_34(var uParam0, int iParam1)
{
	if (!func_2(uParam0->f_173, 8192))
	{
		uParam0->f_292 = _blip_add_for_entity(831283580, &(uParam0->f_149[0]));
		func_37(&(uParam0->f_230), 0, 1, 1, 0);
		func_4(&(uParam0->f_173), 8192);
	}
	if (!func_2(uParam0->f_173, 256))
	{
		if (!func_143(&(uParam0->f_172)))
		{
			func_74(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			func_4(&(uParam0->f_173), 256);
			return;
		}
	}
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_149[0])))
	{
		return;
	}
	bVar0 = false;
	if ((get_interior_from_entity(Global_35) != 0 && get_interior_from_entity(&(uParam0->f_149[0])) != 0) || func_33(Global_35, &(uParam0->f_149[0]), 1, 1) < 7f)
	{
		bVar0 = true;
	}
	func_119(uParam0, bVar0);
	if (!func_145(&(uParam0->f_149[0]), 780511057))
	{
		if (!func_2(uParam0->f_173, 2097152))
		{
			if (func_146(&(uParam0->f_149[0]), "OPENS_FIRE", -435184212, Global_35, uParam0->f_168, 0))
			{
				func_4(&(uParam0->f_173), 2097152);
			}
		}
		set_ped_config_flag(&(uParam0->f_149[0]), 315, false);
		_0xfc3db99c8144cd81(&(uParam0->f_149[0]), uParam0->f_158, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(uParam0->f_149[0]), false);
		task_combat_ped(&(uParam0->f_149[0]), Global_35, 0, 0);
	}
	func_142(uParam0);
}

void func_35(var uParam0)
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
	if (func_60(&(uParam0->f_13)))
	{
		func_65(&(uParam0->f_13));
	}
}

void func_36(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_37(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_147((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_148(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_38(int* iParam0, var uParam1)
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
	func_149(iParam0, uParam1, 1);
	func_37(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_39(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_152(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_153(iParam0, 1);
			}
			else
			{
				func_154(iParam0, 1);
			}
		}
		else
		{
			func_155(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_156())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_40(int iParam0)
{
	if (func_151(iParam0) && func_157())
	{
		remove_door_from_system(iParam0);
	}
}

void func_41(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_158(vVar0, 0);
}

void func_42(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_159(0, -1);
	}
	func_160();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_43(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_45(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_46()
{
	return Global_1572887->f_12;
}

void func_47(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_161(iParam0, 0);
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
		func_162(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_48(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_49(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_52()
{
	if (func_46() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_163((*Global_1392915)[iVar0]->f_4))
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

int func_53(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_54()
{
	return Global_1310750->f_16077 != 0;
}

bool func_55(var uParam0, int iParam1)
{
	return func_49(*uParam0, iParam1);
}

bool func_56(var uParam0, float fParam1, float fParam2)
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
			if (func_59(Global_35, *uParam0, 25f, 1))
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
		if (func_59(Global_35, *uParam0, fParam1, 1))
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

bool func_57(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x1f0e401031e20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = _0xa9016536015de29d(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = _0x23e33cb9f4a3f547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = _0x0df57f86fe71dbe5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

int func_58()
{
	return &Global_1899515;
}

bool func_59(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_60(var uParam0)
{
	return func_164(*uParam0, 1);
}

void func_61(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_165() - fParam1);
	func_166(uParam0, 1);
	func_167(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_62(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_168(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_165() - uParam0->f_1);
}

bool func_63(int iParam0)
{
	return iParam0 != -15;
}

void func_64(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_58();
}

void func_65(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_66(int iParam0, int iParam1)
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
	if (func_2(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_2(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_2(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_2(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_2(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_2(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_2(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_2(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_131(uParam0);
	}
}

bool func_68(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_53(0) == 1 || func_53(0) == 2) || func_53(0) == 8) || func_169(&Global_1935630, 2048))
			{
				func_4(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_53(0) == 11)
			{
				func_4(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_53(0) == 6)
			{
				func_4(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_4(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_170((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_170((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_58();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_170(iVar2) > func_170(iVar1))
				{
					if (func_170(iVar0) > func_170(iVar2) + 1 || func_170(iVar0) < func_170(iVar1))
					{
						func_4(uParam2, 32);
					}
				}
				else if (func_170(iVar0) > func_170(iVar2) + 1 && func_170(iVar0) < func_170(iVar1))
				{
					func_4(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_171(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_171(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_172(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_172(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_173((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_4(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_174(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_175(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_60(&(uParam2->f_13)))
					{
						func_61(&(uParam2->f_13), 0f);
					}
					else if (func_176(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_65(&(uParam2->f_13));
						func_4(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_60(&(uParam2->f_13)))
					{
						func_65(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_177())
			{
				func_4(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_178())
			{
				func_4(uParam2, 2048);
			}
		}
		if (func_169(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_4(uParam2, 128);
		}
		if (func_55(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_4(uParam2, 256);
		}
	}
	if ((((((((((func_2(*uParam2, 2) || func_2(*uParam2, 4)) || func_2(*uParam2, 8)) || func_2(*uParam2, 16)) || func_2(*uParam2, 32)) || func_2(*uParam2, 64)) || func_2(*uParam2, 128)) || func_2(*uParam2, 256)) || func_2(*uParam2, 512)) || func_2(*uParam2, 1024)) || func_2(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0)
{
	if (((((func_2(*uParam0, 2) || func_2(*uParam0, 4)) || func_2(*uParam0, 16)) || func_2(*uParam0, 128)) || func_2(*uParam0, 1024)) || func_2(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

void func_70(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_65(&(iParam0->f_18));
}

bool func_71(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_179(uParam2, 1, iVar0);
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
			if (func_180(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_181(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_182(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_183(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_184(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_185(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_181(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_186(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_187(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_188(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_189(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_189(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_181(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_190(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_191(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_192(uParam2, 4000))
				{
					if ((func_193(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_194(uParam2, iParam0)) && func_195(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_193(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_194(uParam2, iParam0)) && func_195(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_196(iParam0, Global_1935630->f_41))
							{
								func_197();
								*uParam3 = 2;
								func_181(iParam0, uParam2, *uParam3);
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
						if (func_196(iParam0, Global_1935630->f_41))
						{
							func_197();
							*uParam3 = 2;
							func_181(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_198(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_199() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_197();
						*uParam3 = 2;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_200())
					{
						if (func_196(iParam0, Global_1935630->f_42))
						{
							func_197();
							*uParam3 = 2;
							func_181(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_201(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_181(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_202(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_203(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_204(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_205(uParam2, 4000))
				{
					if (func_206(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_181(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_207(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_181(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_208(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_181(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_72(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_209(iParam0, 4))
		{
			func_148(&(iParam0->f_6), 1, 1);
			func_210(iParam0, 4);
		}
	}
	else if (func_209(iParam0, 4))
	{
		func_211(iParam0, 4);
		func_210(iParam0, 14);
	}
}

bool func_73(var uParam0, int iParam1)
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

void func_74(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

int func_75(int iParam0, int iParam1, int iParam2)
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

int func_76(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_212(&iVar0);
	if (func_49(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_213(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_49(iVar0, 134217728))
	{
		func_214(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_215(558))
				{
					func_216(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_77(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_33(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_217(iVar0, 0)))
		{
			if (func_218(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_78(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_209(iParam0, 13))
	{
		func_210(iParam0, 0);
	}
	else
	{
		func_211(iParam0, 0);
	}
	if (func_147(iParam0->f_6))
	{
		if (bParam2)
		{
			func_148(&(iParam0->f_6), 0, 1);
		}
	}
}

char* func_79(int iParam0)
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

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_82()
{
	return "script@specialped@pdttl_tiny_hermit@ig@ig_1@ig_1";
}

void func_83(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_154))
	{
		Var0 = { func_219(0) };
		uParam0->f_154 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_155))
	{
		Var0 = { func_219(1) };
		uParam0->f_155 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_156))
	{
		Var0 = { func_219(2) };
		uParam0->f_156 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_157))
	{
		Var0 = { func_219(3) };
		uParam0->f_157 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_158))
	{
		Var0 = { func_219(4) };
		uParam0->f_158 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_159))
	{
		Var0 = { func_219(5) };
		uParam0->f_159 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_160))
	{
		Var0 = { func_219(6) };
		uParam0->f_160 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_165))
	{
		Var0 = { func_219(7) };
		uParam0->f_165 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_161))
	{
		Var0 = { func_219(8) };
		uParam0->f_161 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_162))
	{
		Var0 = { func_219(9) };
		uParam0->f_162 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_163))
	{
		Var0 = { func_219(10) };
		uParam0->f_163 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_164))
	{
		Var0 = { func_219(11) };
		uParam0->f_164 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_166))
	{
		Var0 = { func_219(12) };
		uParam0->f_166 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

int func_84(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_220(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_85(int iParam0)
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

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_221())
	{
		iVar2 = func_221();
	}
	iVar5 = func_222(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_223(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_223(iVar6) == 0)
			{
				return func_224(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_223(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_223(iVar6) == 0)
			{
				return func_224(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_224(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_87(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_88()
{
	if (func_46() != -1)
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
	if (func_225(uParam0, iParam1, sParam2))
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

void func_90(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_91(var uParam0)
{
	func_92(uParam0, 0);
	func_106(uParam0, 0);
	func_102(uParam0, 1);
	func_100(uParam0, 1);
	func_226(uParam0, 0);
	func_101(uParam0, 1);
	func_227(uParam0, 1, 1, 1);
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 16384);
	}
	else
	{
		func_50(&(uParam0->f_1), 16384);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 524288);
	}
	else
	{
		func_50(&(uParam0->f_1), 524288);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 131072);
	}
	else
	{
		func_50(&(uParam0->f_1), 131072);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 4);
	}
	else
	{
		func_51(uParam0, 4);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 8);
	}
	else
	{
		func_50(&(uParam0->f_1), 8);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 8);
	}
	else
	{
		func_51(uParam0, 8);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 32);
	}
	else
	{
		func_51(uParam0, 32);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 64);
	}
	else
	{
		func_51(uParam0, 64);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 16);
	}
	else
	{
		func_51(uParam0, 67108864);
		func_51(uParam0, 16);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 256);
	}
	else
	{
		func_51(uParam0, 256);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 256);
	}
	else
	{
		func_50(&(uParam0->f_1), 256);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 4);
	}
	else
	{
		func_50(&(uParam0->f_1), 4);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 16);
	}
	else
	{
		func_50(&(uParam0->f_1), 16);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 2);
	}
	else
	{
		func_50(&(uParam0->f_1), 2);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 2048);
	}
	else
	{
		func_50(&(uParam0->f_1), 2048);
	}
}

void func_107(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 1);
	}
	else
	{
		func_50(&(uParam0->f_1), 1);
	}
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 128);
	}
	else
	{
		func_51(uParam0, 128);
	}
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 262144);
	}
	else
	{
		func_51(uParam0, 262144);
	}
}

void func_110(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

int func_111(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_228(iParam0);
}

int func_112(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_229(iParam0);
}

struct<4> func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
	}
	return Var0;
}

bool func_114(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_230(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_230(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0xa0bc8faed8cfeb3c(*uParam0))
	{
		return true;
	}
	return false;
}

void func_115(int iParam0, int iParam1)
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

void func_116(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_231(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (((func_232(iParam0, 8388608) && func_232(iParam0, 1048576)) && func_232(iParam0, 2097152)) && func_232(iParam0, 4194304))
	{
		return -183018591;
	}
	iVar0 = _0xf8204ef17410bf43(-594562071, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(970310034, iParam1, iParam2, 0);
	iVar2 = _0xf8204ef17410bf43(-1212426201, iParam1, iParam2, 0);
	iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
	while (func_233(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = 1845102363;
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_234(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_232(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_232(iParam0, 1048576))
	{
		if (!func_43(iVar5) || _0xf2f585411e748b9c(iVar1, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_232(iParam0, 2097152))
	{
		if (!func_43(iVar5) || _0xf2f585411e748b9c(iVar3, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_232(iParam0, 4194304))
	{
		if (!func_43(iVar5) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_43(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

int func_118(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_43(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_43(iVar4) && iVar4 != iVar0)
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
	if (func_46() == -1 && !func_234(iVar0))
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
				if (func_234(-183018591))
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
		if (iParam0 != Global_35 && func_43(iVar0))
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
		func_235(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_236(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_237(iVar0))
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

void func_119(var uParam0, bool bParam1)
{
	set_ped_combat_movement(&(uParam0->f_149[0]), 1);
	_0x815c0074a1bc0d93(&(uParam0->f_149[0]), 2);
	set_ped_combat_attributes(&(uParam0->f_149[0]), 0, true);
	set_ped_combat_attributes(&(uParam0->f_149[0]), 50, true);
	set_ped_combat_attributes(&(uParam0->f_149[0]), 46, false);
	_0xb8de69d9473b7593(&(uParam0->f_149[0]), 0);
	set_ped_path_can_use_climbovers(&(uParam0->f_149[0]), false);
	if (bParam1)
	{
		set_ped_combat_ability(&(uParam0->f_149[0]), 2);
		set_ped_accuracy(&(uParam0->f_149[0]), 100);
		_0xe1b3be07d3aadded(&(uParam0->f_149[0]), 4, 1);
	}
	else
	{
		set_ped_combat_ability(&(uParam0->f_149[0]), 1);
		set_ped_accuracy(&(uParam0->f_149[0]), 10);
		_0xe1b3be07d3aadded(&(uParam0->f_149[0]), 4, 0);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		_set_entity_health(iParam0, iParam1, 0);
	}
}

void func_121(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_238(iParam0, iParam1))
		{
			if (func_239(iParam0, iParam1))
			{
				if (func_240(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_241(iParam0);
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

void func_122(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_242(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_123(var uParam0)
{
	Var0 = { func_243(1) };
	func_245(uParam0->f_230[0], Var0, func_244(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_243(2) };
	sVar2 = func_246(&iVar3);
	func_245(uParam0->f_230[1], Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	func_247(&(uParam0->f_149[0]), &(uParam0->f_230), 25f, 2, 0, 0, 0, 0, 0);
	func_78(uParam0->f_230[0], 0, 0);
	func_78(uParam0->f_230[1], 0, 0);
	if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_HERMIT")))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_HERMIT"));
	}
	uParam0->f_268 = 3;
}

void func_124(var uParam0)
{
	if (!func_2(uParam0->f_173, 256))
	{
		if (!func_143(&(uParam0->f_172)))
		{
			func_74(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			func_4(&(uParam0->f_173), 256);
			return;
		}
	}
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_248(0) };
			break;
		case 1:
			vVar0 = { func_248(1) };
			break;
		case 2:
			vVar0 = { func_248(11) };
			break;
		case 3:
			vVar0 = { func_248(3) };
			break;
		case 4:
			vVar0 = { func_248(14) };
			break;
		case 5:
			vVar0 = { func_248(29) };
			break;
		case 6:
			vVar0 = { func_248(6) };
			break;
		case 7:
			vVar0 = { func_248(7) };
			break;
		case 8:
			vVar0 = { func_248(8) };
			break;
		case 9:
			vVar0 = { func_248(25) };
			break;
	}
	return vVar0;
}

bool func_126(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!func_2(uParam0->f_173, 1024))
	{
		if (func_249(uParam0, vParam1, 0, -1, 0, 0))
		{
			func_4(&(uParam0->f_173), 1024);
			*bParam4 = 1;
		}
	}
	else if (!func_251(func_250(&vParam1)))
	{
		if (!func_60(&(uParam0->f_142)))
		{
			func_131(&(uParam0->f_142));
		}
		if (func_252(&(uParam0->f_142), 7f))
		{
			func_74(&(uParam0->f_173), 1024);
			return true;
		}
	}
	return false;
}

void func_127(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	func_253(iParam0, iParam1);
}

var func_128(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

Vector3 func_129(var uParam0)
{
	iVar3 = func_254(0, 23, uParam0->f_179);
	switch (iVar3)
	{
		case 0:
			vVar0 = { func_130("SPTTL_SPEECHC") };
			break;
		case 1:
			vVar0 = { func_130("SPTTL_SPEECHE") };
			break;
		case 2:
			vVar0 = { func_130("SPTTL_SPEECHF") };
			break;
		case 3:
			vVar0 = { func_130("SPTTL_SPEECHJ") };
			break;
		case 4:
			vVar0 = { func_130("SPTTL_LINGERA") };
			break;
		case 5:
			vVar0 = { func_130("SPTTL_LINGERC") };
			break;
		case 6:
			vVar0 = { func_130("SPTTL_LINGERD") };
			break;
		case 7:
			vVar0 = { func_130("SPTTL_LINGERF") };
			break;
		case 8:
			vVar0 = { func_130("SPTTL_LINGERG") };
			break;
		case 9:
			vVar0 = { func_130("SPTTL_LINGERH") };
			break;
		case 10:
			vVar0 = { func_130("SPTTL_LINGERI") };
			break;
		case 11:
			vVar0 = { func_130("SPTTL_LINGERJ") };
			break;
		case 12:
			vVar0 = { func_130("SPTTL_LINGERK") };
			break;
		case 13:
			vVar0 = { func_130("SPTTL_LINGERL") };
			break;
		case 14:
			vVar0 = { func_130("SPTTL_LINGERM") };
			break;
		case 15:
			vVar0 = { func_130("SPTTL_LINGERN") };
			break;
		case 16:
			vVar0 = { func_130("SPTTL_LINGERO") };
			break;
		case 17:
			vVar0 = { func_130("SPTTL_LINGERQ") };
			break;
		case 18:
			vVar0 = { func_130("SPTTL_LINGERR") };
			break;
		case 19:
			vVar0 = { func_130("SPTTL_RETURNA") };
			break;
		case 20:
			vVar0 = { func_130("SPTTL_RETURNC") };
			break;
		case 21:
			vVar0 = { func_130("SPTTL_RETURND") };
			break;
		case 22:
			vVar0 = { func_130("SPTTL_RETURNE") };
			break;
	}
	if (!is_bit_set(uParam0->f_175, iVar3))
	{
		set_bit(&(uParam0->f_175), iVar3);
		uParam0->f_179 = iVar3;
		return vVar0;
	}
	if (func_255(uParam0->f_175) >= 23)
	{
		uParam0->f_175 = 0;
	}
	return func_130("");
}

Vector3 func_130(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_131(var uParam0)
{
	func_61(uParam0, 0f);
}

float func_132(var uParam0)
{
	if (!func_60(uParam0))
	{
		return 0f;
	}
	if (func_168(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_165() - uParam0->f_1);
}

void func_133(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_80(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_257(func_256(-1342635612)) < 5)
	{
		func_258(func_256(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_58();
	func_44(uParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		case 2:
			iVar0 = 7;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 9;
			break;
		case 5:
			iVar0 = 10;
			break;
		case 6:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_135(int iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	func_259(iParam0, iParam1);
}

int func_136(int iParam0)
{
	switch (iParam0)
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
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 14;
			break;
		case 2:
			iVar0 = 15;
			break;
		case 3:
			iVar0 = 16;
			break;
		case 4:
			iVar0 = 15;
			break;
		case 5:
			iVar0 = 14;
			break;
		case 6:
			iVar0 = 16;
			break;
	}
	return iVar0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 13;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 13;
			break;
		case 5:
			iVar0 = 12;
			break;
		case 6:
			iVar0 = 13;
			break;
	}
	return iVar0;
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_266 = uParam0->f_265;
	uParam0->f_265 = iParam1;
}

void func_140(var uParam0)
{
	if (func_12(Global_35, uParam0->f_164, 0, 1))
	{
		if (uParam0->f_267 != 4 || !func_260(uParam0, 4))
		{
			func_261(uParam0, 4);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_163, 0, 1))
	{
		if (uParam0->f_267 != 3 || !func_260(uParam0, 3))
		{
			func_261(uParam0, 3);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_162, 0, 1))
	{
		if (uParam0->f_267 != 2 || !func_260(uParam0, 2))
		{
			func_261(uParam0, 2);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (func_12(Global_35, uParam0->f_161, 0, 1))
	{
		if (uParam0->f_267 != 1 || !func_260(uParam0, 1))
		{
			func_261(uParam0, 1);
			func_139(uParam0, 2);
		}
		else if (!func_262(&(uParam0->f_149[0]), 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (!func_145(&(uParam0->f_149[0]), -1073489615))
	{
		func_263(uParam0, 0);
	}
}

bool func_141(var uParam0)
{
	if (func_260(uParam0, uParam0->f_267))
	{
		return true;
	}
	else if (!func_145(&(uParam0->f_149[0]), 242628503))
	{
		func_261(uParam0, uParam0->f_267);
	}
	return false;
}

void func_142(var uParam0)
{
	if (func_2(uParam0->f_173, 2097152))
	{
		switch (uParam0->f_303)
		{
			case 0:
				func_67(&(uParam0->f_304), 0);
				if (uParam0->f_307 <= 0f)
				{
					uParam0->f_307 = get_random_float_in_range(8f, 12f);
				}
				if (func_264(&(uParam0->f_304), uParam0->f_307))
				{
					uParam0->f_303 = 1;
				}
				break;
			case 1:
				if (func_265(uParam0))
				{
					uParam0->f_303 = 2;
				}
				break;
			case 2:
				if (!is_string_null_or_empty(uParam0->f_302))
				{
					if (func_266(&(uParam0->f_149[0]), uParam0->f_302, -435184212, Global_35, 1, "TINY_HERMIT", uParam0->f_301, 1))
					{
						uParam0->f_293[uParam0->f_300] = 1;
						func_131(&(uParam0->f_304));
						uParam0->f_303 = 3;
					}
				}
				break;
			case 3:
				if (func_264(&(uParam0->f_304), 2f))
				{
					uParam0->f_303 = 4;
				}
				break;
			case 4:
				uParam0->f_302 = "";
				uParam0->f_300 = -1;
				uParam0->f_301 = 0;
				uParam0->f_307 = -1f;
				func_65(&(uParam0->f_304));
				uParam0->f_303 = 0;
				break;
		}
	}
}

bool func_143(var uParam0)
{
	bVar0 = _is_anim_scene_loaded(*uParam0, true, false);
	bVar1 = _is_anim_scene_started(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = _does_anim_scene_exist(*uParam0);
	bVar2 = _is_anim_scene_loading(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*uParam0);
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

void func_144(var uParam0)
{
	set_anim_scene_entity(uParam0->f_172, "CS_TINYHERMIT", &(uParam0->f_149[0]), 0);
	set_anim_scene_entity(uParam0->f_172, "w_shotgun_doubleBarrel01", &(uParam0->f_151[0]), 0);
}

bool func_145(int iParam0, int iParam1)
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

bool func_146(int iParam0, char* sParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = uParam3;
	return func_267(iParam0, &Var0);
}

bool func_147(int iParam0)
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

void func_148(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_147(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_268(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_269(iVar0);
	*uParam0 = 0;
}

void func_149(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_148(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_70(iParam0, 0);
		}
	}
}

int func_150(int iParam0, bool bParam1, bool bParam2)
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

bool func_151(int iParam0)
{
	if (func_270(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_152(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_153(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_155(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_156()
{
	return true;
}

bool func_157()
{
	return true;
}

void func_158(vector3 vParam0, int iParam3)
{
	if (func_271(vParam0))
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
			if (func_272(vVar2, vParam0, 2f, 1))
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

void func_159(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_273(&Global_0, 8);
	}
	if (!func_274() || func_46() != -1)
	{
		return;
	}
	func_273(&Global_0, 1);
}

void func_160()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

void func_161(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_275(1);
	}
}

void func_162(int iParam0)
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
			func_161(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_275(1);
	}
}

bool func_163(int iParam0)
{
	iVar0 = func_276(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_165()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_168(var uParam0)
{
	return func_164(*uParam0, 2);
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_170(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_171(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_163((*Global_1835011)[iParam0]->f_1);
}

int func_172(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_277((*Global_1835011)[iParam0]->f_1);
}

bool func_173(int iParam0)
{
	iVar0 = func_278();
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

int func_174(var uParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_279(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_280(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_281(iVar1, 0))
		{
			func_282(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_176(var uParam0)
{
	if (!func_60(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_168(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_199() - round((uParam0->f_1 * 1000f)));
}

bool func_177()
{
	return Global_1392040->f_6;
}

bool func_178()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

void func_179(var uParam0, bool bParam1, int iParam2)
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
							func_50(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_285(1))
						{
							func_50(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_285(1) || *uParam0 & 8192 != 0))
				{
					func_51(uParam0, 33554432);
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
				uParam0->f_15 = func_199();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_199() - uParam0->f_15) > 500)
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

bool func_180(int iParam0, var uParam1)
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

void func_181(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_291(iParam2, 1, 1, 1, 0))
	{
		func_50(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_292(uParam1, 1);
	func_293();
}

bool func_182(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_77(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_294(uParam1);
			if (func_295(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_296(uParam1);
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

bool func_183(int iParam0, int iParam1, var uParam2)
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
	if (func_297(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_294(uParam2);
		if (func_295(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_296(uParam2)
				{
					func_292(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_184(int iParam0, var uParam1)
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
		else if (get_game_timer() - uParam1->f_3) > func_296(uParam1)
		{
			fVar3 = func_294(uParam1);
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

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_298(bParam1, bParam2, bParam3);
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

bool func_186(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_187(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_299(uParam2);
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
			if (func_195(uParam2, iParam1))
			{
				func_292(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_188(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_300(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_195(uParam2, iParam1))
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

bool func_189(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_301(uParam2);
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
					if (func_302(iParam1, vVar0, vVar4))
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
					if (func_302(iParam1, vVar0, vVar7))
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

bool func_190(int iParam0, var uParam1)
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
			bVar13 = func_303(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_304(&(Global_1935630->f_34[iVar0])))
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
			if (func_305(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_306(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_307(uParam1, iParam0, fVar1, iVar0))
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

bool func_191(int iParam0, var uParam1)
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

bool func_192(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_308(iVar0, &iVar2))
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
	if (func_309(iVar0, iParam0))
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

int func_194(var uParam0, int iParam1)
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

bool func_195(var uParam0, int iParam1)
{
	if (func_310(uParam0))
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

bool func_196(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_33(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_197()
{
}

bool func_198(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_311(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_199();
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
						if (func_45(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_199();
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

int func_199()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_200()
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
	if ((func_199() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_201(var uParam0, int iParam1)
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
	if (uParam0->f_12 > func_312(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_313(iParam1);
	iVar1 = func_314(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_202(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_315(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_203(int iParam0, var uParam1)
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
		if (func_316(iParam0, uParam1, 1))
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
					if (!func_317(uParam1, iParam0))
					{
						if (func_45(iVar4, Global_36, 1) < 7f)
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

bool func_204(int iParam0, var uParam1)
{
	if (!func_318(0))
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

bool func_205(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_199();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_207(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_199();
	}
	else if (func_199() - uParam1->f_4) > func_319(uParam1)
	{
		return func_320(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_208(var uParam0, int iParam1)
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

bool func_209(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_210(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_211(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_212(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_213(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_212(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_321(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_131(&(iParam1->f_13));
		}
		if (func_322(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_323(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_213(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_324(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_325(*uParam0, 1, 1);
						}
					}
					else if (func_326(iParam1, 22))
					{
						func_325(*uParam0, 0, 1);
					}
				}
				if (func_327(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_328(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_329(iParam8);
					if (func_330(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_331(uParam3);
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
					func_332(iParam1, uParam3, fVar8);
					if (func_333(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_37(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_334(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_327(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_335(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_330(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_328(uParam0, func_327(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_329(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_37(uParam3, 0, 0, 1, 1);
					}
					func_336(iParam1, 1);
				}
				func_332(iParam1, uParam3, fVar8);
				if (func_334(uParam0, iParam1, fParam4, bVar6))
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
			func_38(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_214(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_337(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_338(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_215(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_46() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_216(int iParam0, bool bParam1)
{
	func_339(iParam0, &iVar0, &iVar1);
	if (!func_340(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_341(iVar0, iVar1);
}

var func_217(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_218(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_342(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

struct<11> func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = 665633627;
			Var0.f_1 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { 3025.943f, 1772.33f, 83.2056f };
			Var0.f_4 = { 0f, 0f, -23f };
			Var0.f_7 = { 25f, 25f, 30f };
			Var0.f_10 = "Seen";
			break;
		case 2:
			Var0 = -1612834106;
			Var0.f_1 = { 3044.034f, 1771.698f, 85.75678f };
			Var0.f_4 = { 0f, 0f, -20f };
			Var0.f_7 = { 25f, 10f, 10f };
			Var0.f_10 = "SeenBlock";
			break;
		case 3:
			Var0 = 665633627;
			Var0.f_1 = { 3026.856f, 1775.335f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 6f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 4:
			Var0 = -1612834106;
			Var0.f_1 = { 3024.427f, 1769.17f, 85.09901f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 18f, 25f, 20f };
			Var0.f_10 = "StayAway";
			break;
		case 5:
			Var0 = 665633627;
			Var0.f_1 = { 3023.705f, 1768.557f, 83.9391f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 16f, 8f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 6:
			Var0 = -1612834106;
			Var0.f_1 = { 3027.851f, 1779.131f, 83.547f };
			Var0.f_4 = { 0f, 0f, -19.151f };
			Var0.f_7 = { 8.632f, 6.255f, 7.358f };
			Var0.f_10 = "ShackInterior";
			break;
		case 7:
			Var0 = 665633627;
			Var0.f_1 = { 3023.276f, 1768.44f, 82.777f };
			Var0.f_7 = { 9.314f, 12.025f, 6.857f };
			Var0.f_4 = { 0f, 0f, -19.986f };
			Var0.f_10 = "ShackExit";
			break;
		case 8:
			Var0 = -1612834106;
			Var0.f_1 = { 3023.799f, 1768.604f, 82.897f };
			Var0.f_4 = { 0f, 0f, -21.129f };
			Var0.f_7 = { 24.44f, 15.408f, 11.345f };
			Var0.f_10 = "ShackAimFront";
			break;
		case 9:
			Var0 = -1612834106;
			Var0.f_1 = { 3016.639f, 1783.032f, 82.197f };
			Var0.f_4 = { 0f, 0f, -21.276f };
			Var0.f_7 = { 14.542f, 18.82f, 13.379f };
			Var0.f_10 = "ShackAimSideWindow";
			break;
		case 10:
			Var0 = -1612834106;
			Var0.f_1 = { 3030.316f, 1790.982f, 82.668f };
			Var0.f_4 = { 0f, 0f, -21.489f };
			Var0.f_7 = { 25.242f, 16.928f, 12.362f };
			Var0.f_10 = "ShackAimBack";
			break;
		case 11:
			Var0 = -1612834106;
			Var0.f_1 = { 3024.178f, 1775.486f, 82.984f };
			Var0.f_4 = { 0f, 0f, -20.785f };
			Var0.f_7 = { 2.388f, 2.673f, 6.328f };
			Var0.f_10 = "ShackAtDoor";
			break;
		case 12:
			Var0 = 665633627;
			Var0.f_1 = { 3022.437f, 1764.7f, 82.499f };
			Var0.f_4 = { 0f, 0f, -19.998f };
			Var0.f_7 = { 47.598f, 38.92f, 12.015f };
			Var0.f_10 = "ShackAnimalRestrictions";
			break;
	}
	return Var0;
}

int func_220(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_271(vParam0))
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
		if (func_343(vParam0))
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
	func_344(iVar0, bParam8);
	return iVar0;
}

int func_221()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_223(int iParam0)
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

int func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_345(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_221())
	{
		return -1;
	}
	iVar0 = func_222(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_346(iVar1, 0);
	func_347(iVar1, 0);
	func_259(iVar1, 0);
	func_253(iVar1, 0);
	func_348(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_349(iVar1, iParam4);
	}
	return iVar1;
}

bool func_225(var uParam0, int iParam1, char* sParam2)
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

void func_226(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(&(uParam0->f_1), 128);
	}
	else
	{
		func_50(&(uParam0->f_1), 128);
	}
}

void func_227(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_50(uParam0, 268435456);
	}
	else
	{
		func_51(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_50(uParam0, 1073741824);
	}
	else
	{
		func_51(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_50(uParam0, 536870912);
	}
	else
	{
		func_51(uParam0, 536870912);
	}
}

int func_228(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_230(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_350(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_231(int iParam0)
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

bool func_232(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_233(int iParam0)
{
	switch (iParam0)
	{
		case -1098045850:
		case 392538360:
			return true;
		default:
			break;
	}
	return false;
}

bool func_234(int iParam0)
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

int func_235(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_351(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_352((386 + iVar28), 1);
			if (func_353(iParam0, &Var0, iVar5, 0))
			{
				if (func_354(iParam0, &Var6, iVar5))
				{
					Var29 = { func_355(iParam0, Var0, iVar5, 0) };
					func_356(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_357(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_358(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_359(iParam0, iParam1);
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

void func_236(int iParam0, int iParam1, float fParam2)
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

bool func_237(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_238(int iParam0, int iParam1)
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

bool func_239(int iParam0, int iParam1)
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

bool func_240(int iParam0, int iParam1)
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
	if (!func_238(iParam0, iVar0))
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

void func_241(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_242(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

struct<2> func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = "SPTH_UC_TALK";
			Var0.f_1 = -163964935;
			break;
		case 1:
			Var0 = "INTERACT_DEFUSE";
			Var0.f_1 = -163964935;
			break;
		case 2:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = 648122183;
			break;
	}
	return Var0;
}

char* func_244()
{
	return "DEFUSE_ON_PROPERTY";
}

void func_245(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_147(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_360(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_361(iParam0->f_6, iParam0->f_5, 0);
			}
			func_362(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_363(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

char* func_246(int iParam0)
{
	if (func_6())
	{
		switch (get_random_int_in_range(0, 7))
		{
			case 0:
				*iParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART1";
			case 1:
				*iParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART3";
			case 2:
				*iParam0 = 6;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART3";
			case 3:
				*iParam0 = 5;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 4:
				*iParam0 = 4;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
			case 5:
				*iParam0 = 3;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 6:
				*iParam0 = 1;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
		}
	}
	else
	{
		switch (get_random_int_in_range(0, 5))
		{
			case 0:
				*iParam0 = 15;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam0 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam0 = 1;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam0 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam0 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam0 = 1;
	return "INSULT_MALE_CONV_PART1";
}

void func_247(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_364(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

Vector3 func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_130("SPTTL_SPEECHA") };
			break;
		case 1:
			vVar0 = { func_130("SPTTL_SPEECHB") };
			break;
		case 3:
			vVar0 = { func_130("SPTTL_SPEECHD") };
			break;
		case 6:
			vVar0 = { func_130("SPTTL_SPEECHG") };
			break;
		case 7:
			vVar0 = { func_130("SPTTL_SPEECHH") };
			break;
		case 8:
			vVar0 = { func_130("SPTTL_SPEECHI") };
			break;
		case 11:
			vVar0 = { func_130("SPTTL_LINGERB") };
			break;
		case 14:
			vVar0 = { func_130("SPTTL_LINGERE") };
			break;
		case 25:
			vVar0 = { func_130("SPTTL_LINGERP") };
			break;
		case 29:
			vVar0 = { func_130("SPTTL_RETURNB") };
			break;
	}
	return vVar0;
}

bool func_249(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_365(vParam1, uParam0);
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

var func_250(var uParam0)
{
	return uParam0;
}

bool func_251(var uParam0)
{
	if (_0xd89504d9d7d5057d(uParam0) && _0x1ecc76792f661cf5(uParam0))
	{
		return true;
	}
	return false;
}

bool func_252(var uParam0, float fParam1)
{
	if (func_264(uParam0, fParam1))
	{
		func_65(uParam0);
		return true;
	}
	return false;
}

void func_253(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_366())
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
			iVar0 = func_367(func_366(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_255(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_256(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_257(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_258(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_259(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

bool func_260(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	vVar0 = { func_368(iParam1) };
	if (func_369(&(uParam0->f_149[0]), vVar0, 0) <= (0.5f * 0.5f))
	{
		return true;
	}
	return false;
}

int func_261(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if ((!func_66(&(uParam0->f_149[0]), 0) || is_player_dead(player_id())) || !does_entity_exist(Global_35))
	{
		return 0;
	}
	uParam0->f_267 = iParam1;
	Var0 = { func_368(iParam1) };
	if (!func_260(uParam0, iParam1))
	{
		if (!func_145(&(uParam0->f_149[0]), -1672495956))
		{
			task_follow_nav_mesh_to_coord_advanced(&(uParam0->f_149[0]), Var0, 2f, -1, 0.1f, 2, Var4, Var0.f_3);
		}
	}
	else if (!func_145(&(uParam0->f_149[0]), -1073489615))
	{
		task_aim_at_entity(&(uParam0->f_149[0]), Global_35, -1, 0, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_262(int iParam0, bool bParam1)
{
	if (((((func_145(iParam0, 780511057) || func_145(iParam0, -219932022)) || func_145(iParam0, 1120685857)) || func_145(iParam0, -2117564886)) || func_145(iParam0, 655999185)) || func_145(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_145(iParam0, -653332088) || func_145(iParam0, 167901368))
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

int func_263(var uParam0, int iParam1)
{
	if ((!func_66(&(uParam0->f_149[0]), 0) || is_player_dead(player_id())) || !does_entity_exist(Global_35))
	{
		return 0;
	}
	clear_ped_tasks(&(uParam0->f_149[0]), 1, 0);
	if (!func_2(uParam0->f_173, 2097152))
	{
		if (func_146(&(uParam0->f_149[0]), "OPENS_FIRE", -435184212, Global_35, uParam0->f_168, 0))
		{
			func_4(&(uParam0->f_173), 2097152);
		}
	}
	set_ped_combat_movement(&(uParam0->f_149[0]), 0);
	task_combat_ped(&(uParam0->f_149[0]), Global_35, 0, 0);
	return 1;
}

bool func_264(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_62(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_265(var uParam0)
{
	sVar0 = "";
	iVar1 = get_random_int_in_range(0, 6);
	iVar2 = -1;
	if (&uParam0->f_293[iVar1])
	{
		return false;
	}
	switch (iVar1)
	{
		case 0:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 0;
			break;
		case 1:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 1;
			break;
		case 2:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 0;
			break;
		case 3:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 1;
			break;
		case 4:
			sVar0 = "GENERIC_INSULT_HIGH_MALE";
			iVar2 = 0;
			break;
		case 5:
			sVar0 = "GENERIC_INSULT_HIGH_NEUTRAL";
			iVar2 = 0;
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		uParam0->f_302 = sVar0;
		uParam0->f_300 = iVar1;
		uParam0->f_301 = iVar2;
		return true;
	}
	return false;
}

bool func_266(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
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
	return func_267(iParam0, &Var0);
}

bool func_267(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_268(int iParam0)
{
	return iParam0;
}

void func_269(int iParam0)
{
	if (!func_370(iParam0))
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

bool func_270(int iParam0)
{
	return iParam0 != 0;
}

bool func_271(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_272(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_273(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_274()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		func_50(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_51(&(Global_40.f_12019.f_42), 1);
	}
}

int func_276(int iParam0)
{
	if (!func_87(iParam0))
	{
		return -1;
	}
	return func_371(iParam0);
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
		iVar0 = func_371(iParam0);
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

int func_278()
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

bool func_279(var uParam0, vector3 vParam1, float fParam4)
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

bool func_280(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_372(Global_35, *iParam1, 0))
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

bool func_281(int iParam0, bool bParam1)
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

void func_282(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_145(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_283(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_373();
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
			func_374(&(Global_1935630->f_34), &(Global_1935630->f_39));
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
	if (func_375(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_286(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_46() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_376(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_376(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_314(iVar0) == -1)
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
		func_377(uParam0);
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
		iVar1 = func_314(iParam2);
	}
	else
	{
		iVar1 = func_313(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_314(iParam0);
	}
	else
	{
		iVar0 = func_313(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_49(*uParam1, 8388608))
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
	return func_33(iParam0, iParam1, 1, 1);
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
		func_50(uParam0, 134217728);
	}
	else
	{
		func_51(uParam0, 134217728);
	}
}

void func_293()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

float func_294(var uParam0)
{
	return uParam0->f_17;
}

bool func_295(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_49(*uParam0, 4194304))
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

int func_296(var uParam0)
{
	return uParam0->f_18;
}

bool func_297(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_217(iVar0, 0)))
		{
			if (func_342(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_298(bool bParam0, bool bParam1, bool bParam2)
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

float func_299(var uParam0)
{
	return uParam0->f_23;
}

int func_300(var uParam0)
{
	return uParam0->f_21;
}

int func_301(var uParam0)
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

bool func_302(int iParam0, vector3 vParam1, vector3 vParam4)
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

int func_303(int iParam0)
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

bool func_304(int iParam0)
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

bool func_305(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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

bool func_307(var uParam0, int iParam1, float fParam2, int iParam3)
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

bool func_308(int iParam0, int iParam1)
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

bool func_309(int iParam0, int iParam1)
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

bool func_310(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_311(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_45(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_312(var uParam0)
{
	return uParam0->f_24;
}

int func_313(int iParam0)
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

int func_314(int iParam0)
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

int func_315(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_308(Global_35, &iVar1))
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
		fVar2 = func_33(iParam0, player_ped_id(), 0, 1);
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
		if (func_33(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_316(int iParam0, var uParam1, bool bParam2)
{
	func_375(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_317(uParam1, iVar0))
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
				if (!bParam2 || !func_317(uParam1, iVar1))
				{
					if (func_45(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_317(var uParam0, int iParam1)
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

int func_318(int iParam0)
{
	if (func_88())
	{
		return 0;
	}
	return func_382((*Global_1347702)[58]->f_15, 1);
}

int func_319(var uParam0)
{
	return uParam0->f_20;
}

int func_320(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_321(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_322(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_383(iParam0, iParam1))
		{
			if (!func_49(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_37(uParam2, 0, 0, 1, 0);
				func_50(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_49(iParam1->f_10, 1))
		{
			func_384(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_51(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_323(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_49(iParam4, 32);
		func_149(iParam1, uParam2, 0);
		iVar5 = func_385(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_37(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_49(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_49(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_49(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_49(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_49(iParam4, 8388608) || func_49(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_49(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_49(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_326(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_326(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_49(iParam4, 67108864))
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
				iParam6 = func_386(uParam0);
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
			if (func_49(iParam4, 268435456))
			{
				iVar8 = func_387(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_388(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_326(iParam1, 23))
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
			if (func_49(iParam4, 2) || func_49(iParam4, 16))
			{
				func_325(*uParam0, 1, 1);
			}
			else
			{
				func_325(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_324(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_325(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_326(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_327(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_389(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_328(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_247(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_49(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_329(int iParam0)
{
	if (func_49(iParam0, 4))
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
	if (func_49(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_49(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_330(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_390(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_391(Global_35)) || func_392(Global_35)) || func_393(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_62(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_147((*uParam4)[iVar0]->f_6);
		func_394(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_395(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_396(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_37(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_397(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_149(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_398(iParam1, fParam6, iParam1->f_9))
					{
						func_131(&(iParam1->f_18));
						if (bVar6)
						{
							func_397(uParam4, 0, 0);
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
		func_399(iParam1, fParam2);
	}
	return bVar5;
}

void func_331(var uParam0)
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

void func_332(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_400((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_399(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_333(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_401(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_402(iParam1, 0);
				func_149(iParam1, uParam2, func_326(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_334(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_131(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_65(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_60(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_252(&(iParam1->f_18), fParam2);
	return true;
}

void func_335(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_394(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_336(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_337(int* iParam0)
{
	if (func_326(iParam0, 0))
	{
		if (func_403(iParam0))
		{
			func_336(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_338(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_404(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_405(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_406(iParam0))
	{
		return false;
	}
	if (func_407(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_408(iParam0, 1)) || func_409(32768))
	{
		if (!func_408(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_410())
	{
		return false;
	}
	return true;
}

void func_341(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_342(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_343(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_344(int iParam0, bool bParam1)
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

bool func_345(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_346(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_411(iParam0);
	}
	else
	{
		func_412(iParam0, iParam1);
	}
	func_413();
}

void func_347(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_348(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_349(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_350(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_414(iParam1))
		{
			func_121(iParam0, 41788943);
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
			func_415(iParam0, 0, 1);
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
			func_416(iParam0, 0);
			bVar0 = true;
		}
		func_417(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<5> func_351(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_418(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_419(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_355(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_420(bParam1) };
			if (bParam2 && func_421(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_353(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_353(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_354(iParam0, &Var5, 1728382685))
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
			Var0 = { func_422(bParam1) };
			switch (func_423(iParam0))
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
			if (func_424(iParam0, -1823706425))
			{
				Var0 = { func_355(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_424(iParam0, -1483207246))
			{
				Var0 = { func_355(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_425(Var0, &Var27, bParam1, 0))
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

int func_352(int iParam0, int iParam1)
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

bool func_353(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_426(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_354(int iParam0, var uParam1, int iParam2)
{
	if (func_427(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_355(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_428(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_429(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_356(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_430(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_425(*uParam1, &Var0, bParam6, 0))
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
	if (!func_357(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_429(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_357(bool bParam0)
{
	if (func_46() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_429(bParam0));
}

int func_358(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_431(iParam0))
	{
		return 0;
	}
	if (!func_357(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_359(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_432(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_360(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_361(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_362(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (bParam1)
	{
		func_433(iParam0, 4);
		func_434(iVar0, 1);
		func_435(iVar0, 1);
	}
	else
	{
		func_436(iParam0, 4);
		func_435(iVar0, 0);
	}
}

void func_363(int* iParam0, char* sParam1)
{
	if (func_147(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_361(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_211(iParam0, 1);
}

void func_364(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_147(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_148(&(iParam1->f_6), 0, 1);
	}
	if (!func_147(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_400(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_437(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_147(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_438(iParam1->f_6, iParam0, 0, 1, iVar1);
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
						func_360(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_439(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_362(iParam1->f_6, 0, 1);
				}
				else
				{
					func_362(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_365(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_366()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_367(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

struct<4> func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Var0 = { 3028.76f, 1776f, 84.13f };
			Var0.f_3 = 166.34f;
			break;
		case 2:
			Var0 = { 3024f, 1778.85f, 84.2f };
			Var0.f_3 = 77.92f;
			break;
		case 3:
			Var0 = { 3030.3f, 1780.6f, 84.19f };
			Var0.f_3 = -14.89f;
			break;
		case 4:
			Var0 = { 3026.38f, 1780.4f, 84.21f };
			Var0.f_3 = 149.54f;
			break;
	}
	return Var0;
}

float func_369(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_441(vVar0, vParam1);
}

bool func_370(int iParam0)
{
	return func_442(iParam0, 2);
}

int func_371(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_372(int iParam0, int iParam1, bool bParam2)
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

bool func_373()
{
	if (func_444())
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

void func_374(var uParam0, var uParam1)
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

bool func_375(bool bParam0, int iParam1, int iParam2)
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

int func_376(var uParam0)
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

void func_377(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_51(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_50(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
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
	switch (func_276(iParam0))
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

bool func_383(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_445((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_384(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_400((*uParam0)[iVar0]))
		{
			func_210((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_385(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_364(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_147((*uParam2)[iVar0]->f_6))
		{
			func_210((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_386(var uParam0)
{
	iVar0 = func_446(*uParam0);
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

int func_387(var uParam0, int iParam1)
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

void func_388(int* iParam0, int* iParam1)
{
	if (!func_326(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_210(iParam1, 19);
			func_402(iParam0, 23);
			func_447(iParam1, 2);
		}
	}
}

bool func_389(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_448(16))
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
					func_449(16);
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

int func_390(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_391(int iParam0)
{
	return (func_450(iParam0, 4) || func_450(iParam0, 5));
}

int func_392(int iParam0)
{
	return func_450(iParam0, 7);
}

int func_393(int iParam0)
{
	return func_450(iParam0, 6);
}

void func_394(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_400(iParam1))
		{
			clear_bit(iParam1, 14);
			func_364(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_395(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_451(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_452(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_362(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_362(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_438(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_396(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_453(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_454(iParam1, 1))
	{
		func_455(iParam1, 1);
		return true;
	}
	return false;
}

void func_397(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_398(int* iParam0, float fParam1, bool bParam2)
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

void func_399(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_400(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_401(int iParam0)
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

void func_402(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_403(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_404(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_456())
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
				if (func_457(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_33(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_131(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_458(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_367(func_266(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_405(int iParam0, int iParam1)
{
	if (func_46() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_406(int iParam0)
{
	if (func_46() != -1)
	{
		if (func_408(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_408(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_407(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_408(iParam0, 65536) && !func_408(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_408(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_408(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_408(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_409(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_410()
{
	return Global_1905944->f_5694;
}

int func_411(int iParam0)
{
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_459(iVar0);
}

int func_412(int iParam0, int iParam1)
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
			func_460(iVar2);
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

void func_413()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_414(int iParam0)
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

void func_415(int iParam0, int iParam1, bool bParam2)
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

void func_416(int iParam0, bool bParam1)
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

void func_417(int iParam0, bool bParam1)
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

struct<4> func_418(bool bParam0)
{
	return func_355(1328661203, func_461(), -1591664384, bParam0);
}

int func_419(int iParam0)
{
	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_420(bool bParam0)
{
	iVar0 = func_429(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_355(923904168, func_418(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_355(923904168, func_418(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_355(923904168, func_418(bParam0), -740156546, 0);
}

bool func_421(int iParam0, bool bParam1)
{
	if (func_423(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_462(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_422(bool bParam0)
{
	iVar0 = func_429(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_355(271701509, func_418(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_355(271701509, func_418(bParam0), 12999093, 0);
}

int func_423(int iParam0)
{
	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_424(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_423(iParam0);
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

bool func_425(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_429(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_426(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_355(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_429(bParam6), &Var0, 0);
	return uVar4;
}

bool func_427(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_429(0);
	*uParam1 = { func_355(iParam0, func_420(0), iParam3, 0) };
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

bool func_428(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_429(bool bParam0)
{
	if (func_46() == -1)
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

bool func_430(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_432(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_433(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_434(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_442(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_435(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_436(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_437(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_442(iVar0, 2))
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
				func_463(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_438(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	func_439(iParam0, 18, 0, 1);
	func_439(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

void func_439(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_440(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

float func_441(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_442(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_443(int iParam0)
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

bool func_444()
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

int func_445(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_446(int iParam0)
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

void func_447(int* iParam0, int iParam1)
{
	if (!func_209(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_210(iParam0, 14);
		}
	}
}

bool func_448(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_449(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_450(int iParam0, int iParam1)
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

bool func_451(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_452(int iParam0, bool bParam1)
{
	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	return !func_442(iParam0, 4);
}

bool func_453(int iParam0, bool bParam1)
{
	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_454(int iParam0, bool bParam1)
{
	if (bParam1 && !func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_455(int iParam0, bool bParam1)
{
	if (bParam1 && !func_147(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_456()
{
	return (Global_1894899 & 1 != 0 && func_464() != -1);
}

float func_457(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_33(Global_35, iParam0, bParam1, bParam2);
}

bool func_458(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_459(int iParam0)
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

int func_460(int iParam0)
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

struct<4> func_461()
{
	return Var0;
}

bool func_462(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_466(iParam0);
}

void func_463(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_434(iParam0, 1);
	func_435(iParam0, 1);
	func_436(iParam0, 128);
}

int func_464()
{
	return Global_1894899->f_2;
}

bool func_465(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_466(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

