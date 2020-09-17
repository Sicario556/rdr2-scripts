void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		wait(0);
		if (Local_14 > 2)
		{
			func_2(20, Local_14.f_248, &(Local_14.f_146), &(Local_14.f_137), &(Local_14.f_273), 0, 1097859072, 0);
			func_3(&Local_14, Local_14.f_248);
			func_4(&Local_14);
			if (func_5(20, Local_14.f_146, 1, 1) && Local_14 > 2)
			{
				func_7(&Local_14, &(Local_14.f_154), func_6(2), 0, 0, 0);
			}
			else
			{
				func_8(&Local_14);
				func_9(&Local_14);
				func_10(&Local_14, &Local_14);
				func_11(Local_14.f_146, &(Local_14.f_155), 128, 20, 0);
				if (does_entity_exist(Local_14.f_146) && func_12(Global_35, Local_14.f_148, 0, 1))
				{
					_0xfc3f638be2b6bb02();
				}
				switch (Local_14)
				{
					case 0:
						func_13(&Local_14);
						break;
					case 1:
						if (func_14(&Local_14))
						{
							func_15(&Local_14, 2);
						}
						break;
					case 2:
						func_16(&Local_14);
						break;
					case 3:
						if (is_entity_in_volume(Global_35, Local_14.f_148, true, 0))
						{
							if (Local_14.f_270 && !func_17(Local_14.f_155, 256))
							{
								func_15(&Local_14, 4);
							}
							else
							{
								func_15(&Local_14, 6);
							}
						}
						break;
					case 4:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_18(&(Local_14.f_155), 256);
							func_21(&(Local_14.f_1), func_20(func_19(Local_14.f_161)), 0, -1, 0, 0);
						}
						else
						{
							func_15(&Local_14, 5);
						}
						break;
					case 5:
						if (!_0xa2cac9def0195e6f(1))
						{
							func_22(&(Local_14.f_131), 0f);
							Local_14.f_152 = to_float(get_random_int_in_range(3, 5));
							func_15(&Local_14, 8);
						}
						break;
					case 6:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_21(&(Local_14.f_1), func_20(func_23(Local_14.f_156)), 0, -1, 0, 0);
						}
						else
						{
							Local_14.f_156 = (1 + Local_14.f_156);
							func_15(&Local_14, 7);
						}
						break;
					case 7:
						if (!is_scripted_speech_playing(Local_14.f_146) && Local_14.f_156 <= Local_14.f_157)
						{
							func_22(&(Local_14.f_131), 0f);
							Local_14.f_152 = to_float(get_random_int_in_range(3, 5));
							func_15(&Local_14, 8);
						}
						else if (!is_scripted_speech_playing(Local_14.f_146) && Local_14.f_156 > Local_14.f_157)
						{
							func_15(&Local_14, 9);
						}
						break;
					case 8:
						if (func_24(&(Local_14.f_131)) > Local_14.f_152)
						{
							func_15(&Local_14, 6);
						}
						break;
					case 9:
						func_25(&Local_14);
						break;
					case 10:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(0), 0, 0, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 11:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(1), 0, 0, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 21:
						func_26(&Local_14);
						break;
					case 12:
						func_27(&Local_14);
						break;
					case 13:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(5), 1, 1, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 14:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(6), 1, 1, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 15:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(7), 1, 1, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 16:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(8), 1, 1, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 17:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(9), 1, 1, 0))
						{
							func_15(&Local_14, 21);
						}
						break;
					case 26:
						func_28(&Local_14);
						break;
					case 22:
						if ((!func_17(Local_14.f_155, 2048) && !func_17(Local_14.f_155, 8192)) && !func_17(Local_14.f_155, 4096))
						{
							func_18(&(Local_14.f_155), 2048);
						}
						func_7(&Local_14, &(Local_14.f_154), func_29(Local_14.f_158), 1, 0, 0);
						if (!func_30(&(Local_14.f_140)))
						{
							func_31(&(Local_14.f_140));
						}
						if (func_17(Local_14.f_155, 8192) || func_17(Local_14.f_155, 4096))
						{
							if (!is_scripted_speech_playing(Global_35))
							{
								func_32(&(Local_14.f_140));
								func_15(&Local_14, 23);
							}
						}
						else if (func_33(&(Local_14.f_140), 9f))
						{
							func_34(&(Local_14.f_155), 2048);
							func_15(&Local_14, 25);
						}
						break;
					case 23:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_35(&Local_14);
						}
						else
						{
							func_15(&Local_14, 24);
						}
						break;
					case 24:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_15(&Local_14, 25);
						}
						break;
					case 27:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(10), 0, 0, 1) || _is_anim_scene_finished(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 35);
						}
						break;
					case 28:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(11), 0, 0, 1) || _is_anim_scene_finished(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 35);
						}
						break;
					case 29:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(12), 0, 0, 1) || _is_anim_scene_finished(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 35);
						}
						break;
					case 30:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(13), 0, 0, 1) || _is_anim_scene_finished(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 35);
						}
						break;
					case 31:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(14), 0, 0, 1) || _is_anim_scene_finished(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 35);
						}
						break;
					case 32:
						if (!func_17(Local_14.f_155, 512))
						{
							open_sequence_task(&iVar0);
							task_follow_nav_mesh_to_coord(0, -2729.398f, 704.7125f, 173.0246f, 2f, 20000, 0.25f, 0, -136.81f);
							func_36(Local_14.f_146, &iVar0, 0, 0, 1, 1);
							func_18(&(Local_14.f_155), 512);
						}
						else if (!func_37(Local_14.f_146, 242628503) || func_38(Local_14.f_146, -2729.398f, 704.7125f, 173.0246f, 1) <= 0.55f)
						{
							task_cower(Local_14.f_146, -1, Global_35, 0);
							func_15(&Local_14, 36);
						}
						break;
					case 25:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(15), 0, 0, 1))
						{
							func_34(&(Local_14.f_155), 1024);
							func_15(&Local_14, 33);
						}
						break;
					case 33:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_21(&(Local_14.f_1), func_20(func_23(28)), 0, -1, 0, 0);
						}
						else
						{
							func_15(&Local_14, 34);
						}
						break;
					case 34:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_15(&Local_14, 35);
						}
						break;
					case 35:
						break;
					case 36:
						if (Local_14.f_272 && !is_scripted_speech_playing(Local_14.f_146))
						{
							func_39(&Local_14);
						}
						else
						{
							Local_14.f_272 = 0;
							func_15(&Local_14, 37);
						}
						break;
					case 37:
						if (!is_scripted_speech_playing(Local_14.f_146))
						{
							func_15(&Local_14, 35);
						}
						break;
					case 38:
						break;
					case 39:
						break;
					case 40:
						func_40(&(Local_14.f_146), 2);
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(int iParam0)
{
	func_41(&(iParam0->f_249));
	func_42(20);
	if (func_43(iParam0->f_143))
	{
		if (iParam0->f_271)
		{
			func_44(iParam0->f_143, 1);
		}
	}
	func_45(&(iParam0->f_211), 0, 1, 1, 0);
	func_46(&(iParam0->f_190), &(iParam0->f_211));
	if (!is_entity_dead(iParam0->f_146))
	{
		remove_entity_from_audio_mix_group(iParam0->f_146, 0f);
		set_ped_as_no_longer_needed(&(iParam0->f_146));
	}
	if (_does_volume_exist(iParam0->f_147))
	{
		func_47(iParam0->f_147);
		_delete_volume(iParam0->f_147);
	}
	if (_does_volume_exist(iParam0->f_149))
	{
		_0x74c2b3dc0b294102(iParam0->f_149);
		_0xa1cfb35069d23c23(iParam0->f_149);
		_delete_volume(iParam0->f_149);
	}
	if (_does_volume_exist(iParam0->f_148))
	{
		_0x74c2b3dc0b294102(iParam0->f_148);
		_0xa1cfb35069d23c23(iParam0->f_148);
		_delete_volume(iParam0->f_148);
	}
	if (_does_volume_exist(iParam0->f_150))
	{
		_delete_volume(iParam0->f_150);
	}
	terminate_this_thread();
}

int func_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0]->f_2 = func_48();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_49(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_30(uParam3))
	{
		func_22(uParam3, 0f);
	}
	else if (func_24(uParam3) >= 2f)
	{
		if (!func_50(Global_40.f_11623[iParam0]->f_2))
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
		else
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_32(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_52(Global_35, 0))
	{
		func_1(iParam0);
	}
	else if (!func_12(Global_35, (*(*Global_1396257)[20])[iParam1]->f_47, 0, 1))
	{
		func_1(iParam0);
	}
	else if (func_53(20, iParam1, &(iParam0->f_249), iParam0->f_146))
	{
		func_1(iParam0);
	}
}

void func_4(int iParam0)
{
	if (does_entity_exist(iParam0->f_146))
	{
		if (!func_52(iParam0->f_146, 0))
		{
			func_1(iParam0);
		}
		else if ((*iParam0 > 2 && *iParam0 < 26) || ((*iParam0 > 32 && *iParam0 < 38) && *iParam0 != 37))
		{
			if (!iParam0->f_272 && func_54(iParam0->f_146, 0, &(iParam0->f_99), &(iParam0->f_127), 0, 0))
			{
				func_55(&(iParam0->f_99), &(iParam0->f_127));
				iParam0->f_272 = 1;
				iParam0->f_271 = 1;
				_0x36559148b78853b3(1, 0, 0);
				func_34(&(iParam0->f_155), 1024);
				func_34(&(iParam0->f_155), 2048);
				if ((*iParam0 >= 4 && *iParam0 <= 8) || (*iParam0 >= 33 && *iParam0 <= 35))
				{
					func_15(iParam0, 36);
					return;
				}
				if ((*iParam0 >= 9 && *iParam0 <= 11) || *iParam0 == 25)
				{
					func_15(iParam0, 32);
					return;
				}
				if (*iParam0 != 36)
				{
					func_15(iParam0, 26);
				}
			}
		}
	}
}

bool func_5(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_56())
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
		if (func_57(0) == 7 || func_58())
		{
			return true;
		}
	}
	if (func_59(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Enter_From_Sit";
			break;
		case 1:
			sVar0 = "pbl_Enter_From_Crouch";
			break;
		case 2:
			sVar0 = "pbl_Idle_A";
			break;
		case 3:
			sVar0 = "pbl_Idle_B";
			break;
		case 4:
			sVar0 = "pbl_Idle_C";
			break;
		case 5:
			sVar0 = "pbl_SpeechA_Im_Not_The_Devil";
			break;
		case 6:
			sVar0 = "pbl_SpeechB_I_See_You_Man";
			break;
		case 7:
			sVar0 = "pbl_SpeechC_I_Dont_Want_Presents";
			break;
		case 8:
			sVar0 = "pbl_SpeechD_My_Philosophy_Is";
			break;
		case 9:
			sVar0 = "pbl_SpeechE_Nothing_Makes_Me_Long";
			break;
		case 10:
			sVar0 = "pbl_Aggro_A";
			break;
		case 11:
			sVar0 = "pbl_Aggro_B";
			break;
		case 12:
			sVar0 = "pbl_Aggro_C";
			break;
		case 13:
			sVar0 = "pbl_Aggro_D";
			break;
		case 14:
			sVar0 = "pbl_Aggro_E";
			break;
		case 15:
			sVar0 = "pbl_Walk_Exit_to_Sitting";
			break;
	}
	return sVar0;
}

bool func_7(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
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
				if (!func_60(&(iParam0->f_146), 0, 0))
				{
					return false;
				}
			}
			if (!_0x1f0e401031e20146(*uParam1, sParam2) && _0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				_set_anim_scene_playback_list_bool(*uParam1, sParam2, true);
				set_anim_scene_bool(*uParam1, "Internal_Loop", bParam3, false);
				wait(0);
				return false;
			}
			else if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				if (((_0x8d81e7824b7753f7(*uParam1, "s_Idle_A", 1) || _0x8d81e7824b7753f7(*uParam1, "s_Idle_B", 1)) || _0x8d81e7824b7753f7(*uParam1, "s_Idle_C", 1)) || (_get_anim_scene_progress(*uParam1) > 0.99f && bParam5))
				{
					if (func_61(uParam1, iParam0->f_151))
					{
						iParam0->f_151 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_8(int iParam0)
{
	if (*iParam0 >= 31 || *iParam0 <= 2)
	{
		return;
	}
	func_62(&(iParam0->f_145), iParam0->f_150, &(iParam0->f_146), &(iParam0->f_165), &(iParam0->f_134), 5000);
}

void func_9(int iParam0)
{
	if (func_17(iParam0->f_155, 64))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 17)
	{
		if (iParam0->f_162 < 2)
		{
			if (func_63(&(iParam0->f_146), 249295937))
			{
				func_18(&(iParam0->f_155), 64);
			}
		}
	}
}

void func_10(int iParam0, int iParam1)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if ((is_entity_in_volume(Global_35, iParam0->f_148, true, 0) && func_17(iParam0->f_155, 1024)) && *iParam1 < 26)
	{
		iVar0 = 0;
		iVar1 = func_64(iParam0->f_246, 10240, 0);
		if (iParam0->f_246 == 0)
		{
			iVar1 |= 1;
		}
		iVar2 = func_65(&(iParam0->f_146), &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 2, 1, iVar0, iVar1, 0, 0, 2, -1082130432);
		if (func_17(iParam0->f_155, 2048))
		{
			func_66(iParam0, 1);
			func_67(iParam0, 0);
			if (iVar2 != -1)
			{
				if (iVar2 == 0)
				{
					if (func_68())
					{
						if (iParam0->f_248 == 0)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 1, 1);
						}
						else if (iParam0->f_248 == 1)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 6, 1);
						}
						else if (iParam0->f_248 == 2)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 8, 1);
						}
						else if (iParam0->f_248 == 3)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 11, 1);
						}
						else if (iParam0->f_248 == 4)
						{
							func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 18, 1);
						}
					}
					else if (iParam0->f_248 == 0)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART1", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 1)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART2", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 2)
					{
						func_69(Global_35, "INSULT_PHILOSOPHER_CONV_PART3", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 3)
					{
						func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "ARTHUR", 17, 1);
					}
					else if (iParam0->f_248 == 4)
					{
						func_69(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "ARTHUR", 18, 1);
					}
					func_18(&(iParam0->f_155), 8192);
				}
				else if (iVar2 == 1)
				{
					func_69(Global_35, "GREET_GENERAL", -417894478, iParam0->f_146, 1, 0, 0, 1);
					func_18(&(iParam0->f_155), 4096);
				}
				func_34(&(iParam0->f_155), 2048);
				func_67(iParam0, 1);
				if (get_current_ped_weapon(Global_35, &iVar3, true, 0, false))
				{
					if (!_is_weapon_lantern(iVar3))
					{
						set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					}
				}
				else
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				}
			}
		}
		else
		{
			func_66(iParam0, 0);
			func_67(iParam0, 1);
		}
	}
	else
	{
		func_66(iParam0, 0);
		func_70(&(iParam0->f_146));
		func_71(&(iParam0->f_190), 0);
		func_45(&(iParam0->f_211), 0, 0, 1, 0);
	}
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_72(iParam3);
	if (fParam4 == 0f)
	{
		if (func_49(iParam0, Global_35, 15f, 1))
		{
			if (!func_73(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_74(uParam1, iParam2);
				}
			}
		}
		else if (func_73(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_75(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_73(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_74(uParam1, iParam2);
			}
		}
	}
	else if (func_73(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_75(uParam1, iParam2);
	}
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

void func_13(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0->f_154))
	{
		iParam0->f_154 = _create_anim_scene(func_76(), 2, func_6(0), false, true);
	}
	if (_does_anim_scene_exist(iParam0->f_154))
	{
		load_anim_scene(iParam0->f_154);
		request_anim_dict(func_77());
		request_model(iParam0->f_144, false);
		_text_database_request("SPPICAU");
		_text_database_request("SPPC");
		func_78(iParam0);
		func_79(iParam0);
		func_80(iParam0->f_147, "SP_Philosopher1_Block", 1, 0, 0, 0, -1082130432);
		_0xb56d41a694e42e86(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		iParam0->f_143 = func_82(20, 0, 9, func_81(20));
		if (!func_43(iParam0->f_143))
		{
		}
		iParam0->f_248 = func_83(20);
		if (iParam0->f_248 == 0)
		{
			iParam0->f_159 = 0;
			iParam0->f_160 = 0;
			iParam0->f_156 = 0;
			iParam0->f_157 = 5;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 1)
		{
			iParam0->f_159 = 1;
			iParam0->f_160 = 1;
			iParam0->f_156 = 6;
			iParam0->f_157 = 11;
			iParam0->f_161 = 1;
		}
		else if (iParam0->f_248 == 2)
		{
			iParam0->f_159 = 2;
			iParam0->f_160 = 2;
			iParam0->f_156 = 12;
			iParam0->f_157 = 17;
			iParam0->f_161 = 2;
		}
		else if (iParam0->f_248 == 3)
		{
			iParam0->f_159 = 3;
			iParam0->f_160 = 3;
			iParam0->f_156 = 18;
			iParam0->f_157 = 22;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 4)
		{
			iParam0->f_159 = 4;
			iParam0->f_160 = 4;
			iParam0->f_156 = 23;
			iParam0->f_157 = 27;
			iParam0->f_161 = 1;
		}
		iVar0 = func_84(iParam0->f_143);
		if (iVar0 != 0)
		{
			iParam0->f_270 = 1;
		}
		func_85(&(iParam0->f_249));
		func_86(&(iParam0->f_99));
		func_87(&(iParam0->f_99), 1);
		func_88(&(iParam0->f_99), 1);
		func_89(&(iParam0->f_99), 0);
		func_90(&(iParam0->f_99), 0);
		func_91(&(iParam0->f_99), 1);
		func_92(&(iParam0->f_99), 1);
		func_93(&(iParam0->f_99), 1);
		func_94(&(iParam0->f_99), 0);
		func_95(&(iParam0->f_99), 0);
		func_96(&(iParam0->f_99), 1);
		func_97(&(iParam0->f_99), 0);
		func_98(&(iParam0->f_99), 0);
		func_99(&(iParam0->f_99), 1);
		func_100(&(iParam0->f_99), 1);
		func_101(&(iParam0->f_99), 1);
		func_102(&(iParam0->f_99), 1);
		func_103(&(iParam0->f_99), 1);
		func_104(&(iParam0->f_99), 1);
		func_105(&(iParam0->f_99), 1);
		func_15(iParam0, 1);
	}
}

bool func_14(int iParam0)
{
	_0xed9582b3da8f02b4(1);
	if (((((has_model_loaded(iParam0->f_144) && _is_anim_scene_loaded(iParam0->f_154, true, false)) && has_anim_dict_loaded(func_77())) && _text_database_has_loaded("SPPICAU")) && _text_database_has_loaded("SPPC")) && _0x5c16855277819bbf() == 1)
	{
		return true;
	}
	return false;
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_16(int iParam0)
{
	Var0 = { func_106(0) };
	if (func_107(&(iParam0->f_146), iParam0->f_144, Var0, Var0.f_3, 1, 0, 1))
	{
		if (func_52(iParam0->f_146, 0))
		{
			func_108(iParam0->f_146, 20);
			add_entity_to_audio_mix_group(iParam0->f_146, "special_ped_group", 0f);
			set_blocking_of_non_temporary_events(iParam0->f_146, true);
			set_ped_path_can_use_climbovers(iParam0->f_146, false);
			_0x88e32db8c1a4aa4b(iParam0->f_146, 20f);
			set_ped_relationship_group_hash(iParam0->f_146, -1976316465);
			func_109(iParam0->f_146, 1);
			func_110(&(iParam0->f_1), iParam0->f_146, "PHILOSOPHER", 0);
			_set_entity_coords_and_heading(iParam0->f_146, Var0, Var0.f_3, true, false, true);
			set_anim_scene_entity(iParam0->f_154, "PHILOSOPHER", iParam0->f_146, 0);
			_0xae6004120c18df97(iParam0->f_146, 0, 0);
			if (((iParam0->f_248 == 1 || iParam0->f_248 == 2) || iParam0->f_248 == 3) || iParam0->f_248 == 4)
			{
				_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(iParam0->f_146, &uVar4));
			}
			func_15(iParam0, 3);
		}
	}
}

bool func_17(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_18(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 29;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 31;
			break;
		default:
			iVar0 = 29;
			break;
	}
	return iVar0;
}

Vector3 func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "SPPIC_INTROA", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SPPIC_INTROB", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SPPIC_INTROC", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SPPIC_INTROD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SPPIC_INTROE", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SPPIC_INTROF", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SPPIC_INTROG", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SPPIC_INTROH", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SPPIC_INTROI", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SPPIC_INTROJ", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SPPIC_INTROK", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SPPIC_INTROL", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SPPIC_INTROM", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SPPIC_INTRON", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SPPIC_GREETA", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SPPIC_GREETB", 24);
			break;
		case 16:
			StringCopy(&cVar0, "SPPIC_GREETC", 24);
			break;
		case 17:
			StringCopy(&cVar0, "SPPIC_GREETD", 24);
			break;
		case 18:
			StringCopy(&cVar0, "SPPIC_GREETE", 24);
			break;
		case 19:
			StringCopy(&cVar0, "SPPIC_GREETF", 24);
			break;
		case 20:
			StringCopy(&cVar0, "SPPIC_GREETG", 24);
			break;
		case 21:
			StringCopy(&cVar0, "SPPIC_GREETH", 24);
			break;
		case 22:
			StringCopy(&cVar0, "SPPIC_GREETI", 24);
			break;
		case 23:
			StringCopy(&cVar0, "SPPIC_GREETJ", 24);
			break;
		case 24:
			StringCopy(&cVar0, "SPPIC_GREETK", 24);
			break;
		case 25:
			StringCopy(&cVar0, "SPPIC_GREETL", 24);
			break;
		case 26:
			StringCopy(&cVar0, "SPPIC_GREETM", 24);
			break;
		case 27:
			StringCopy(&cVar0, "SPPIC_GREETN", 24);
			break;
		case 28:
			StringCopy(&cVar0, "SPPIC_GREETO", 24);
			break;
		case 29:
			StringCopy(&cVar0, "SPPIC_SPEECHF", 24);
			break;
		case 30:
			StringCopy(&cVar0, "SPPIC_SPEECHG", 24);
			break;
		case 31:
			StringCopy(&cVar0, "SPPIC_SPEECHH", 24);
			break;
	}
	return cVar0;
}

bool func_21(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_111(vParam1, uParam0);
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

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_112() - fParam1);
	func_113(uParam0, 1);
	func_114(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 14;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 19;
			break;
		case 6:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 15;
			break;
		case 10:
			iVar0 = 17;
			break;
		case 11:
			iVar0 = 18;
			break;
		case 12:
			iVar0 = 10;
			break;
		case 13:
			iVar0 = 12;
			break;
		case 14:
			iVar0 = 11;
			break;
		case 15:
			iVar0 = 7;
			break;
		case 16:
			iVar0 = 8;
			break;
		case 17:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 22;
			break;
		case 19:
			iVar0 = 24;
			break;
		case 20:
			iVar0 = 23;
			break;
		case 21:
			iVar0 = 21;
			break;
		case 22:
			iVar0 = 20;
			break;
		case 23:
			iVar0 = 26;
			break;
		case 24:
			iVar0 = 5;
			break;
		case 25:
			iVar0 = 13;
			break;
		case 26:
			iVar0 = 25;
			break;
		case 27:
			iVar0 = 28;
			break;
		case 28:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

float func_24(var uParam0)
{
	if (!func_30(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_112() - uParam0->f_1);
}

void func_25(int iParam0)
{
	func_117(20, func_116());
	func_18(&(Local_14.f_155), 1024);
	func_15(iParam0, 10);
}

void func_26(int iParam0)
{
	if (is_entity_dead(iParam0->f_146))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (iParam0->f_159 > iParam0->f_160)
	{
		if (iParam0->f_248 == 0)
		{
			func_118(20, 1);
		}
		else if (iParam0->f_248 == 1)
		{
			func_118(20, 2);
		}
		else if (iParam0->f_248 == 2)
		{
			func_118(20, 3);
		}
		else if (iParam0->f_248 == 3)
		{
			func_118(20, 4);
		}
		else if (iParam0->f_248 == 4)
		{
			func_118(20, 12);
		}
		func_119(20);
		func_15(iParam0, 22);
		return;
	}
	if (func_49(Global_35, iParam0->f_146, 15f, 1))
	{
		func_15(iParam0, 12);
		func_32(&(iParam0->f_131));
		return;
	}
	if (!func_30(&(iParam0->f_131)))
	{
		iParam0->f_152 = to_float(get_random_int_in_range(3, 5));
		func_22(&(iParam0->f_131), 0f);
		return;
	}
	else if (func_24(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_158)
	{
		case 0:
			if (func_7(iParam0, &(iParam0->f_154), func_6(2), 0, 0, 0))
			{
				iParam0->f_158++;
				func_32(&(iParam0->f_131));
			}
			break;
		case 1:
			if (func_7(iParam0, &(iParam0->f_154), func_6(3), 0, 0, 0))
			{
				iParam0->f_158++;
				func_32(&(iParam0->f_131));
			}
			break;
		case 2:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				func_32(&(iParam0->f_131));
			}
			break;
		default:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				func_32(&(iParam0->f_131));
			}
			break;
	}
}

void func_27(int iParam0)
{
	if (is_entity_dead(iParam0->f_146))
	{
		return;
	}
	if (!func_30(&(iParam0->f_131)))
	{
		iParam0->f_152 = to_float(get_random_int_in_range(3, 5));
		func_22(&(iParam0->f_131), 0f);
	}
	else if (func_24(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_159)
	{
		case 0:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 13);
			break;
		case 1:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 14);
			break;
		case 2:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 17);
			break;
		case 3:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 15);
			break;
		case 4:
			iParam0->f_159++;
			func_32(&(iParam0->f_131));
			func_15(iParam0, 16);
			break;
		case 5:
			func_32(&(iParam0->f_131));
			func_15(iParam0, 25);
			break;
	}
}

void func_28(int iParam0)
{
	switch (get_random_int_in_range(0, 5))
	{
		case 0:
			func_15(iParam0, 27);
			break;
		case 1:
			func_15(iParam0, 28);
			break;
		case 2:
			func_15(iParam0, 29);
			break;
		case 3:
			func_15(iParam0, 30);
			break;
		case 4:
			func_15(iParam0, 31);
			break;
	}
}

char[] func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_6(2);
		case 1:
			return func_6(3);
		case 2:
			return func_6(4);
		default:
			return func_6(4);
	}
	return func_6(4);
}

bool func_30(var uParam0)
{
	return func_120(*uParam0, 1);
}

void func_31(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_33(var uParam0, float fParam1)
{
	if (func_121(uParam0, fParam1))
	{
		func_32(uParam0);
		return true;
	}
	return false;
}

void func_34(var uParam0, int iParam1)
{
	func_75(uParam0, iParam1);
}

void func_35(int iParam0)
{
	if (iParam0->f_248 == 0)
	{
		if (func_17(Local_14.f_155, 4096))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN_FIRST_TIME", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR_FIRST_TIME", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (func_17(Local_14.f_155, 8192))
		{
			func_69(iParam0->f_146, "GENERIC_MOCK", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 1)
	{
		if (func_17(Local_14.f_155, 4096))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (func_17(Local_14.f_155, 8192))
		{
			func_69(iParam0->f_146, "HEY_IM_TALKING", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 2)
	{
		if (func_17(Local_14.f_155, 4096))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			}
		}
		else if (func_17(Local_14.f_155, 8192))
		{
			func_69(iParam0->f_146, "PLAYER_STILL_HANGING", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 3)
	{
		if (func_17(Local_14.f_155, 4096))
		{
			if (func_68())
			{
				func_69(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 3, 1);
			}
			else
			{
				func_69(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 3, 1);
			}
		}
		else if (func_17(Local_14.f_155, 8192))
		{
			func_69(iParam0->f_146, "GENERIC_GOODBYE", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 4)
	{
		if (func_17(Local_14.f_155, 4096))
		{
			func_69(iParam0->f_146, "HOWS_IT_GOING", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
		else if (func_17(Local_14.f_155, 8192))
		{
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
}

void func_36(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_37(int iParam0, int iParam1)
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

float func_38(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_39(int iParam0)
{
	iVar0 = func_122(0, 10, iParam0->f_274);
	iVar0 = func_123(iVar0, 0, 9);
	iParam0->f_274 = iVar0;
	switch (iParam0->f_274)
	{
		case 0:
			func_69(iParam0->f_146, "STOP_THAT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 1:
			func_69(iParam0->f_146, "CUT_THAT_OUT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 2:
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 3:
			func_69(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			break;
		case 4:
			func_69(iParam0->f_146, "VICTIMIZED_REACT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 5:
			func_69(iParam0->f_146, "GENERIC_INSULT_MED_NEUTRAL", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 6:
			func_69(iParam0->f_146, "GENERIC_INSULT_HIGH_MALE", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 7:
			func_69(iParam0->f_146, "GENERIC_INSULT_HIGH_NEUTRAL", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 8:
			func_69(iParam0->f_146, "GENERIC_CURSE_MED", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 9:
			func_69(iParam0->f_146, "GENERIC_CURSE_HIGH", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
	}
}

void func_40(var uParam0, int iParam1)
{
	if (func_37(*uParam0, 242628503))
	{
		return;
	}
	vVar1 = { func_106(iParam1) };
	clear_ped_tasks(*uParam0, 1, 0);
	open_sequence_task(&iVar0);
	task_go_straight_to_coord(0, vVar1, 1f, 20000, 1193033728, 1056964608, 0);
	task_cower(0, -1, Global_35, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(*uParam0, iVar0);
	clear_sequence_task(&iVar0);
	set_ped_keep_task(*uParam0, true);
}

void func_41(var uParam0)
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
	if (func_30(&(uParam0->f_13)))
	{
		func_32(&(uParam0->f_13));
	}
}

void func_42(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_124(0, -1);
	}
	func_125();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_43(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_44(int iParam0, int iParam1)
{
	if (!func_43(iParam0))
	{
		return;
	}
	func_126(iParam0, iParam1);
}

void func_45(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_127((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_128(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_46(int* iParam0, var uParam1)
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
	func_129(iParam0, uParam1, 1);
	func_45(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_47(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_130(vVar0, 0);
}

int func_48()
{
	return &Global_1899515;
}

bool func_49(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_50(int iParam0)
{
	return iParam0 != -15;
}

void func_51(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_48();
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
	if (func_17(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_53(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_57(0) == 1 || func_57(0) == 2) || func_57(0) == 8) || func_131(&Global_1935630, 2048))
			{
				func_18(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_57(0) == 11)
			{
				func_18(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_57(0) == 6)
			{
				func_18(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_18(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_132((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_132((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_48();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_132(iVar2) > func_132(iVar1))
				{
					if (func_132(iVar0) > func_132(iVar2) + 1 || func_132(iVar0) < func_132(iVar1))
					{
						func_18(uParam2, 32);
					}
				}
				else if (func_132(iVar0) > func_132(iVar2) + 1 && func_132(iVar0) < func_132(iVar1))
				{
					func_18(uParam2, 32);
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
					if (((func_133(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_133(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_134(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_134(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_135((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_18(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_136(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_137(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_30(&(uParam2->f_13)))
					{
						func_22(&(uParam2->f_13), 0f);
					}
					else if (func_138(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_32(&(uParam2->f_13));
						func_18(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_30(&(uParam2->f_13)))
					{
						func_32(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_139())
			{
				func_18(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_140())
			{
				func_18(uParam2, 2048);
			}
		}
		if (func_131(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_18(uParam2, 128);
		}
		if (func_59(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_18(uParam2, 256);
		}
	}
	if ((((((((((func_17(*uParam2, 2) || func_17(*uParam2, 4)) || func_17(*uParam2, 8)) || func_17(*uParam2, 16)) || func_17(*uParam2, 32)) || func_17(*uParam2, 64)) || func_17(*uParam2, 128)) || func_17(*uParam2, 256)) || func_17(*uParam2, 512)) || func_17(*uParam2, 1024)) || func_17(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_141(uParam2, 1, iVar0);
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
			if (func_142(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_144(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_145(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_146(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_147(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_148(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_149(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_150(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_151(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_151(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_152(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_153(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_154(uParam2, 4000))
				{
					if ((func_155(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_156(uParam2, iParam0)) && func_157(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_155(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_156(uParam2, iParam0)) && func_157(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_158(iParam0, Global_1935630->f_41))
							{
								func_159();
								*uParam3 = 2;
								func_143(iParam0, uParam2, *uParam3);
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
						if (func_158(iParam0, Global_1935630->f_41))
						{
							func_159();
							*uParam3 = 2;
							func_143(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_160(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_161() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_159();
						*uParam3 = 2;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_162())
					{
						if (func_158(iParam0, Global_1935630->f_42))
						{
							func_159();
							*uParam3 = 2;
							func_143(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_163(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_164(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_165(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_166(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_167(uParam2, 4000))
				{
					if (func_168(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_143(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_169(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_143(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_170(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_143(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_55(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_161();
		_0xeacebaae0a33fb3f(player_id());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_171(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_56()
{
	if (func_172() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_173((*Global_1392915)[iVar0]->f_4))
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

int func_57(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_58()
{
	return Global_1310750->f_16077 != 0;
}

bool func_59(var uParam0, int iParam1)
{
	return func_174(*uParam0, iParam1);
}

bool func_60(var uParam0, float fParam1, float fParam2)
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
			if (func_49(Global_35, *uParam0, 25f, 1))
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
		if (func_49(Global_35, *uParam0, fParam1, 1))
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

bool func_61(var uParam0, char* sParam1)
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

void func_62(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (is_entity_dead(*uParam2))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_30(uParam4))
	{
		func_22(uParam4, 0f);
	}
	else if (func_138(uParam4) > 1000)
	{
		if (!is_entity_in_volume(Global_35, iParam1, true, 0))
		{
			if (func_175(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = &uVar0[0];
				func_22(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_22(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	_0x66f9eb44342bb4c5(*uParam2, uParam3);
}

bool func_63(var uParam0, int iParam1)
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

int func_64(int iParam0, int iParam1, int iParam2)
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

int func_65(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_176(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_177(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_31(&(iParam1->f_13));
		}
		if (func_178(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_179(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_65(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_70(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_180(*uParam0, 1, 1);
						}
					}
					else if (func_181(iParam1, 22))
					{
						func_180(*uParam0, 0, 1);
					}
				}
				if (func_182(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_183(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_184(iParam8);
					if (func_185(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_186(uParam3);
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
					func_187(iParam1, uParam3, fVar8);
					if (func_188(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_45(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_189(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_182(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_190(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_185(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_183(uParam0, func_182(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_184(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_45(uParam3, 0, 0, 1, 1);
					}
					func_191(iParam1, 1);
				}
				func_187(iParam1, uParam3, fVar8);
				if (func_189(uParam0, iParam1, fParam4, bVar6))
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
			func_46(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_66(int iParam0, bool bParam1)
{
	func_192(iParam0->f_211[0], bParam1, 0);
	func_192(iParam0->f_211[1], bParam1, 0);
}

void func_67(int iParam0, bool bParam1)
{
	if (bParam1 && !iParam0->f_247)
	{
		iParam0->f_246 = 3;
		iParam0->f_247 = bParam1;
		func_71(&(iParam0->f_190), 0);
	}
	else if (!bParam1 && iParam0->f_247)
	{
		iParam0->f_246 = 0;
		iParam0->f_247 = bParam1;
		func_71(&(iParam0->f_190), 0);
	}
}

bool func_68()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_69(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_193(iParam0, &Var0);
}

void func_70(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_71(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_32(&(iParam0->f_18));
}

char* func_72(int iParam0)
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

bool func_73(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_76()
{
	return "script@specialped@pdpic_philosopher_in_cave@ig@ig1@pdpic_ig1";
}

char* func_77()
{
	return "script_special_ped@pdpic_philosopher_in_cave@ig@ig1";
}

void func_78(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_147))
	{
		Var0 = { func_194(0) };
		iParam0->f_147 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_148))
	{
		Var0 = { func_194(1) };
		iParam0->f_148 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_149))
	{
		Var0 = { func_194(2) };
		iParam0->f_149 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(iParam0->f_150))
	{
		Var0 = { func_194(3) };
		iParam0->f_150 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

void func_79(int iParam0)
{
	Var0 = { func_195(0) };
	func_196(iParam0->f_211[0], Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	func_197(iParam0->f_211[0], 10);
	Var0 = { func_195(1) };
	func_196(iParam0->f_211[1], Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	func_197(iParam0->f_211[1], 10);
}

int func_80(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_198(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
			return 813446076;
			return -862094048;
			return -161610929;
			return 419383665;
			return 1809158435;
			return 698747486;
			return 399829678;
			return -1767525506;
			return 1533318556;
			return 846763582;
			return 974338564;
			return 860809165;
			return -1682386507;
			return 420952075;
			return 1340251064;
			return -1417023286;
			return 237608522;
			return 1487910336;
			return 129290505;
			return 1231488843;
			return -499580940;
			return 1953535365;
			return -315419568;
			return -1708806962;
			return 1405526353;
			return -1903564707;
			return -1132839335;
			return 0;
		}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_199())
	{
		iVar2 = func_199();
	}
	iVar5 = func_200(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_201(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_201(iVar6) == 0)
			{
				return func_202(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_201(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_201(iVar6) == 0)
			{
				return func_202(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_202(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

var func_83(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

int func_84(int iParam0)
{
	if (!func_43(iParam0))
	{
		return -1;
	}
	return func_203(iParam0);
}

void func_85(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_86(var uParam0)
{
	func_87(uParam0, 0);
	func_103(uParam0, 0);
	func_99(uParam0, 1);
	func_95(uParam0, 1);
	func_204(uParam0, 0);
	func_96(uParam0, 1);
	func_205(uParam0, 1, 1, 1);
}

void func_87(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 16384);
	}
	else
	{
		func_207(&(uParam0->f_1), 16384);
	}
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 524288);
	}
	else
	{
		func_207(&(uParam0->f_1), 524288);
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 131072);
	}
	else
	{
		func_207(&(uParam0->f_1), 131072);
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 4);
	}
	else
	{
		func_206(uParam0, 4);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 8);
	}
	else
	{
		func_207(&(uParam0->f_1), 8);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 8);
	}
	else
	{
		func_206(uParam0, 8);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 32);
	}
	else
	{
		func_206(uParam0, 32);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 64);
	}
	else
	{
		func_206(uParam0, 64);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 16);
	}
	else
	{
		func_206(uParam0, 67108864);
		func_206(uParam0, 16);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 256);
	}
	else
	{
		func_206(uParam0, 256);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 524288);
	}
	else
	{
		func_206(uParam0, 524288);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 2);
	}
	else
	{
		func_206(uParam0, 2);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 256);
	}
	else
	{
		func_207(&(uParam0->f_1), 256);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 4);
	}
	else
	{
		func_207(&(uParam0->f_1), 4);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 16);
	}
	else
	{
		func_207(&(uParam0->f_1), 16);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 2);
	}
	else
	{
		func_207(&(uParam0->f_1), 2);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 2048);
	}
	else
	{
		func_207(&(uParam0->f_1), 2048);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 1);
	}
	else
	{
		func_207(&(uParam0->f_1), 1);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 128);
	}
	else
	{
		func_206(uParam0, 128);
	}
}

struct<4> func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -2729.008f, 707.4378f, 173.027f };
			Var0.f_3 = 359.6814f;
			break;
		case 1:
			Var0 = { -2723.125f, 721.2363f, 170.1186f };
			Var0.f_3 = 165.3186f;
			break;
		case 2:
			Var0 = { -2729.008f, 707.4378f, 173.027f };
			Var0.f_3 = 0f;
			break;
		case 3:
			Var0 = { -2718.497f, 701.6826f, 175.8392f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

bool func_107(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_208(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_208(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

void func_108(int iParam0, int iParam1)
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

void func_109(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_110(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_209(uParam0, iParam1, sParam2))
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

void func_111(var uParam0, var uParam1, var uParam2, var uParam3)
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

float func_112()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_115(var uParam0)
{
	return func_120(*uParam0, 2);
}

bool func_116()
{
	if (func_172() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_117(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_210(1786474035, 0);
			}
			else
			{
				func_210(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_210(1417967521, 0);
			}
			else
			{
				func_210(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_210(-755110140, 0);
			}
			else if (func_211(55))
			{
				func_210(-1437550882, 0);
			}
			else
			{
				func_210(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_210(2063812437, 0);
			}
			else
			{
				func_210(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_210(-1558441298, 0);
			}
			else
			{
				func_210(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_210(1071640065, 0);
			}
			else
			{
				func_210(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_210(928184916, 0);
			}
			else
			{
				func_210(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

void func_118(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_119(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_120(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_121(var uParam0, float fParam1)
{
	if (!func_30(uParam0))
	{
		return false;
	}
	if (func_24(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_212())
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
			iVar0 = func_213(func_212(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_124(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_214(&Global_0, 8);
	}
	if (!func_215() || func_172() != -1)
	{
		return;
	}
	func_214(&Global_0, 1);
}

void func_125()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

void func_126(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

bool func_127(int iParam0)
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

void func_128(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_127(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_216(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_217(iVar0);
	*uParam0 = 0;
}

void func_129(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_128(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_71(iParam0, 0);
		}
	}
}

void func_130(vector3 vParam0, int iParam3)
{
	if (func_218(vParam0))
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
			if (func_219(vVar2, vParam0, 2f, 1))
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

bool func_131(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_132(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_133(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_173((*Global_1835011)[iParam0]->f_1);
}

int func_134(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_220((*Global_1835011)[iParam0]->f_1);
}

bool func_135(int iParam0)
{
	iVar0 = func_221();
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

int func_136(var uParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_222(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_137(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_223(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_224(iVar1, 0))
		{
			func_225(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_138(var uParam0)
{
	if (!func_30(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_115(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_161() - round((uParam0->f_1 * 1000f)));
}

bool func_139()
{
	return Global_1392040->f_6;
}

bool func_140()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

void func_141(var uParam0, bool bParam1, int iParam2)
{
	func_226(iParam2);
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
		uParam0->f_13 = func_227(0);
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
							func_207(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_228(1))
						{
							func_207(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_228(1) || *uParam0 & 8192 != 0))
				{
					func_206(uParam0, 33554432);
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
			if (func_229(uParam0))
			{
				uParam0->f_15 = func_161();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_161() - uParam0->f_15) > 500)
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
	func_230(uParam0);
}

bool func_142(int iParam0, var uParam1)
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
			if (!func_231(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_232(iParam0, iVar2) <= func_233(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_143(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_234(iParam2, 1, 1, 1, 0))
	{
		func_207(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_171(uParam1, 1);
	func_235();
}

bool func_144(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_236(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_237(uParam1);
			if (func_238(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_239(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_171(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_171(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_145(int iParam0, int iParam1, var uParam2)
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
	if (func_240(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_237(uParam2);
		if (func_238(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_239(uParam2)
				{
					func_171(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_146(int iParam0, var uParam1)
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
	if (func_231(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_239(uParam1)
		{
			fVar3 = func_237(uParam1);
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

int func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_241(bParam1, bParam2, bParam3);
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

bool func_148(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_149(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_242(uParam2);
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
			if (func_157(uParam2, iParam1))
			{
				func_171(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_150(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_243(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_157(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_171(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_151(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_244(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_245(iParam1, vVar0, vVar4))
					{
						func_171(uParam2, 1);
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
					func_171(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_245(iParam1, vVar0, vVar7))
					{
						func_171(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_152(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_231(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_246(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_247(&(Global_1935630->f_34[iVar0])))
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
			if (func_248(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_249(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_250(uParam1, iParam0, fVar1, iVar0))
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

bool func_153(int iParam0, var uParam1)
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

bool func_154(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_251(iVar0, &iVar2))
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
	if (func_252(iVar0, iParam0))
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

int func_156(var uParam0, int iParam1)
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

bool func_157(var uParam0, int iParam1)
{
	if (func_253(uParam0))
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

bool func_158(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_254(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_159()
{
}

bool func_160(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_255(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_161();
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
						if (func_38(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_161();
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

int func_161()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_162()
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
	if ((func_161() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_163(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_233(uParam0);
	if (uParam0->f_12 > func_256(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_257(iParam1);
	iVar1 = func_258(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_164(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_259(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_165(int iParam0, var uParam1)
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
		if (func_260(iParam0, uParam1, 1))
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
					if (!func_261(uParam1, iParam0))
					{
						if (func_38(iVar4, Global_36, 1) < 7f)
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

bool func_166(int iParam0, var uParam1)
{
	if (!func_262(0))
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

bool func_167(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_161();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_168(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_169(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_161();
	}
	else if (func_161() - uParam1->f_4) > func_263(uParam1)
	{
		return func_264(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_170(var uParam0, int iParam1)
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

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(uParam0, 134217728);
	}
	else
	{
		func_206(uParam0, 134217728);
	}
}

int func_172()
{
	return Global_1572887->f_12;
}

bool func_173(int iParam0)
{
	iVar0 = func_265(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_174(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_175(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	*uParam0 = create_itemset(true);
	iVar5 = _0x886171a12f400b89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = get_indexed_item_in_itemset(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((does_entity_exist(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_266(iVar1, bParam5, bParam6, 1, 0, 0) && !decor_exist_on(iVar1, "bIgnoreThisPed"))
				{
					if (!func_267(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar1, get_ped_model_name_in_population_set(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	destroy_itemset(*uParam0);
	return iVar3;
}

void func_176(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_177(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_178(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_268(iParam0, iParam1))
		{
			if (!func_174(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_45(uParam2, 0, 0, 1, 0);
				func_207(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_174(iParam1->f_10, 1))
		{
			func_269(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_206(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_179(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_174(iParam4, 32);
		func_129(iParam1, uParam2, 0);
		iVar5 = func_270(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_45(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_174(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_174(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_174(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_174(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_174(iParam4, 8388608) || func_174(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_174(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_174(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_181(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_181(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_174(iParam4, 67108864))
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
				iParam6 = func_271(uParam0);
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
			if (func_174(iParam4, 268435456))
			{
				iVar8 = func_272(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_273(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_181(iParam1, 23))
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
			if (func_174(iParam4, 2) || func_174(iParam4, 16))
			{
				func_180(*uParam0, 1, 1);
			}
			else
			{
				func_180(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_181(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_182(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_274(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_183(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_275(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_174(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_184(int iParam0)
{
	if (func_174(iParam0, 4))
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
	if (func_174(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_174(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_185(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_276(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_277(Global_35)) || func_278(Global_35)) || func_279(Global_35));
	fVar12 = -1f;
	if (func_30(&(iParam1->f_13)))
	{
		fVar12 = func_24(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_127((*uParam4)[iVar0]->f_6);
		func_280(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_281(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_282(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_45(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_283(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_129(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_284(iParam1, fParam6, iParam1->f_9))
					{
						func_31(&(iParam1->f_18));
						if (bVar6)
						{
							func_283(uParam4, 0, 0);
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
		func_285(iParam1, fParam2);
	}
	return bVar5;
}

void func_186(var uParam0)
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

void func_187(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_286((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_285(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_188(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_287(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_288(iParam1, 0);
				func_129(iParam1, uParam2, func_181(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_189(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_31(&(iParam1->f_18));
			return false;
		}
		else if (func_30(&(iParam1->f_18)))
		{
			func_32(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_30(&(iParam1->f_18)))
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
	return func_33(&(iParam1->f_18), fParam2);
	return true;
}

void func_190(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_280(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_191(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_192(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_289(iParam0, 13))
	{
		func_197(iParam0, 0);
	}
	else
	{
		func_290(iParam0, 0);
	}
	if (func_127(iParam0->f_6))
	{
		if (bParam2)
		{
			func_128(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_193(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

struct<11> func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = -432403087;
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 40f, 40f, 40f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { -2723.835f, 716.816f, 170.667f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 6f, 10f, 3f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = -1612834106;
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 2f, 2f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = 665633627;
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
	}
	return Var0;
}

struct<2> func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = "PC_UC_NEG";
			Var0.f_1 = 648122183;
			break;
		case 1:
			Var0 = "PC_UC_POS";
			Var0.f_1 = -163964935;
			break;
	}
	return Var0;
}

void func_196(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_127(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_291(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_292(iParam0->f_6, iParam0->f_5, 0);
			}
			func_293(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_294(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_197(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_198(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_218(vParam0))
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
		if (func_295(vParam0))
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
	func_296(iVar0, bParam8);
	return iVar0;
}

int func_199()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_201(int iParam0)
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

int func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_297(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_199())
	{
		return -1;
	}
	iVar0 = func_200(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_298(iVar1, 0);
	func_299(iVar1, 0);
	func_126(iVar1, 0);
	func_300(iVar1, 0);
	func_301(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_302(iVar1, iParam4);
	}
	return iVar1;
}

int func_203(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_204(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(&(uParam0->f_1), 128);
	}
	else
	{
		func_207(&(uParam0->f_1), 128);
	}
}

void func_205(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_207(uParam0, 268435456);
	}
	else
	{
		func_206(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_207(uParam0, 1073741824);
	}
	else
	{
		func_206(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_207(uParam0, 536870912);
	}
	else
	{
		func_206(uParam0, 536870912);
	}
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_208(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_303(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_209(var uParam0, int iParam1, char* sParam2)
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

void func_210(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_304(iParam0, 0);
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
		func_305(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_211(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_212()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_213(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_214(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_215()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_216(int iParam0)
{
	return iParam0;
}

void func_217(int iParam0)
{
	if (!func_306(iParam0))
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

bool func_218(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_219(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_220(int iParam0)
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
		iVar0 = func_307(iParam0);
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

int func_221()
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

bool func_222(var uParam0, vector3 vParam1, float fParam4)
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

bool func_223(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_308(Global_35, *iParam1, 0))
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

bool func_224(int iParam0, bool bParam1)
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

void func_225(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_37(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_226(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_309();
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
			func_310(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_227(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_228(bool bParam0)
{
	if (func_311(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_172() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_312(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_312(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_258(iVar0) == -1)
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

void func_230(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_313(uParam0);
	}
}

bool func_231(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_258(iParam2);
	}
	else
	{
		iVar1 = func_257(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_258(iParam0);
	}
	else
	{
		iVar0 = func_257(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_174(*uParam1, 8388608))
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

float func_232(int iParam0, int iParam1)
{
	return func_254(iParam0, iParam1, 1, 1);
}

float func_233(var uParam0)
{
	return uParam0->f_26;
}

bool func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_235()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_236(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_254(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_314(iVar0, 0)))
		{
			if (func_315(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_237(var uParam0)
{
	return uParam0->f_17;
}

bool func_238(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_174(*uParam0, 4194304))
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

int func_239(var uParam0)
{
	return uParam0->f_18;
}

bool func_240(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_314(iVar0, 0)))
		{
			if (func_316(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_241(bool bParam0, bool bParam1, bool bParam2)
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

float func_242(var uParam0)
{
	return uParam0->f_23;
}

int func_243(var uParam0)
{
	return uParam0->f_21;
}

int func_244(var uParam0)
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

bool func_245(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_317(iParam0, vParam4, 0.5f))
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

int func_246(int iParam0)
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
	if (func_318(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_247(int iParam0)
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

bool func_248(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_319(iParam1))
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

bool func_249(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_319(iParam1))
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

bool func_250(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_319(iParam1))
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

bool func_251(int iParam0, int iParam1)
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

bool func_252(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_320(iParam0, 1, 0, 0) != 2055893578)
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

bool func_253(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_254(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_255(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_38(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_256(var uParam0)
{
	return uParam0->f_24;
}

int func_257(int iParam0)
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

int func_258(int iParam0)
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

int func_259(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_251(Global_35, &iVar1))
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
		fVar2 = func_254(iParam0, player_ped_id(), 0, 1);
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
		if (func_254(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_260(int iParam0, var uParam1, bool bParam2)
{
	func_311(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_261(uParam1, iVar0))
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
				if (!bParam2 || !func_261(uParam1, iVar1))
				{
					if (func_38(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_261(var uParam0, int iParam1)
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

int func_262(int iParam0)
{
	if (func_68())
	{
		return 0;
	}
	return func_321((*Global_1347702)[58]->f_15, 1);
}

int func_263(var uParam0)
{
	return uParam0->f_20;
}

int func_264(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_265(int iParam0)
{
	if (!func_43(iParam0))
	{
		return -1;
	}
	return func_307(iParam0);
}

bool func_266(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_322(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_323(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_267(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_268(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_324((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_269(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_286((*uParam0)[iVar0]))
		{
			func_197((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_270(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_325(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_127((*uParam2)[iVar0]->f_6))
		{
			func_197((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_271(var uParam0)
{
	iVar0 = func_326(*uParam0);
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

int func_272(var uParam0, int iParam1)
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

void func_273(int* iParam0, int* iParam1)
{
	if (!func_181(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_197(iParam1, 19);
			func_288(iParam0, 23);
			func_327(iParam1, 2);
		}
	}
}

bool func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_328(16))
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
					func_329(16);
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

void func_275(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_325(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_276(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_277(int iParam0)
{
	return (func_330(iParam0, 4) || func_330(iParam0, 5));
}

int func_278(int iParam0)
{
	return func_330(iParam0, 7);
}

int func_279(int iParam0)
{
	return func_330(iParam0, 6);
}

void func_280(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_286(iParam1))
		{
			clear_bit(iParam1, 14);
			func_325(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_281(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_331(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_332(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_293(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_293(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_333(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_282(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_334(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_335(iParam1, 1))
	{
		func_336(iParam1, 1);
		return true;
	}
	return false;
}

void func_283(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_192((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_284(int* iParam0, float fParam1, bool bParam2)
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

void func_285(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_286(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_287(int iParam0)
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

void func_288(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_289(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_290(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_291(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_292(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_293(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (bParam1)
	{
		func_337(iParam0, 4);
		func_338(iVar0, 1);
		func_339(iVar0, 1);
	}
	else
	{
		func_340(iParam0, 4);
		func_339(iVar0, 0);
	}
}

void func_294(int* iParam0, char* sParam1)
{
	if (func_127(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_292(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_290(iParam0, 1);
}

bool func_295(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_296(int iParam0, bool bParam1)
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

bool func_297(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_341(iParam0);
	}
	else
	{
		func_342(iParam0, iParam1);
	}
	func_343();
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_302(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_303(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_344(iParam1))
		{
			func_345(iParam0, 41788943);
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
			func_346(iParam0, 0, 1);
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
			func_347(iParam0, 0);
			bVar0 = true;
		}
		func_348(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_304(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_349(1);
	}
}

void func_305(int iParam0)
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
			func_304(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_349(1);
	}
}

bool func_306(int iParam0)
{
	return func_350(iParam0, 2);
}

int func_307(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_351(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_308(int iParam0, int iParam1, bool bParam2)
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

bool func_309()
{
	if (func_352())
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

void func_310(var uParam0, var uParam1)
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

bool func_311(bool bParam0, int iParam1, int iParam2)
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

int func_312(var uParam0)
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

void func_313(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_206(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_207(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_314(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_315(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_316(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_316(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_317(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_318(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_319(int iParam0)
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

int func_320(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_321(int iParam0, bool bParam1)
{
	switch (func_265(iParam0))
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

bool func_322(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_353(), 1))
	{
		return true;
	}
	return false;
}

int func_323(int iParam0, bool bParam1)
{
	return func_354(iParam0, Global_1894899->f_2, bParam1);
}

int func_324(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_325(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_127(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_128(&(iParam1->f_6), 0, 1);
	}
	if (!func_127(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_286(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_355(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_127(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_333(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_356(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_357(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_291(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_356(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_293(iParam1->f_6, 0, 1);
				}
				else
				{
					func_293(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_326(int iParam0)
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

void func_327(int* iParam0, int iParam1)
{
	if (!func_289(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_197(iParam0, 14);
		}
	}
}

bool func_328(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_329(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_330(int iParam0, int iParam1)
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

bool func_331(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_332(int iParam0, bool bParam1)
{
	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	return !func_350(iParam0, 4);
}

void func_333(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	func_356(iParam0, 18, 0, 1);
	func_356(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_334(int iParam0, bool bParam1)
{
	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_335(int iParam0, bool bParam1)
{
	if (bParam1 && !func_127(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_336(int iParam0, bool bParam1)
{
	if (bParam1 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_337(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_338(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_350(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_340(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_341(int iParam0)
{
	iVar0 = func_351(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_358(iVar0);
}

int func_342(int iParam0, int iParam1)
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
			func_359(iVar2);
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

void func_343()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_344(int iParam0)
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

void func_345(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_360(iParam0, iParam1))
		{
			if (func_361(iParam0, iParam1))
			{
				if (func_362(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_363(iParam0);
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

void func_346(int iParam0, int iParam1, bool bParam2)
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

void func_347(int iParam0, bool bParam1)
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

void func_348(int iParam0, bool bParam1)
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

void func_349(bool bParam0)
{
	if (bParam0)
	{
		func_207(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_206(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_350(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_351(int iParam0)
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

bool func_352()
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

int func_353()
{
	return get_player_group(get_player_index());
}

int func_354(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_364(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_365(iParam0, iVar0, iVar1, bParam2);
}

int func_355(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_350(iVar0, 2))
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
				func_366(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_356(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_357(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_127(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_358(int iParam0)
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

int func_359(int iParam0)
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

bool func_360(int iParam0, int iParam1)
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

bool func_361(int iParam0, int iParam1)
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

bool func_362(int iParam0, int iParam1)
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
	if (!func_360(iParam0, iVar0))
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

void func_363(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_364(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_172() != -1;
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

int func_365(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_367(iVar2) != 0 && _0x800df3fc913355f3(func_368(iVar2)))
		{
			if (func_368(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_366(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_338(iParam0, 1);
	func_339(iParam0, 1);
	func_340(iParam0, 128);
}

int func_367(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_368(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_369(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

