void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&Local_77);
	}
	while (true)
	{
		wait(0);
		if (iLocal_76 > 2)
		{
			func_2(21, Local_77.f_290, Local_77.f_146[0], &(Local_77.f_136), &(Local_77.f_331), 0, 1097859072, 0);
			func_3(&Local_77, Local_77.f_290, &iLocal_76);
			func_4(&Local_77, &iLocal_76);
			if (func_5(21, &(Local_77.f_146[0]), 1, 1) && iLocal_76 > 2)
			{
				func_6(&Local_77, &(Local_77.f_158), "s_base", 0);
			}
			else
			{
				func_7(&Local_77, &iLocal_76);
				func_8(&Local_77, &iLocal_76);
				func_9(&(Local_77.f_146[0]), &(Local_77.f_160), 16384, 21, 0);
				func_10();
				func_11(&Local_77, Local_77.f_148[0], &(Local_77.f_160));
				func_12();
				func_13(&(Local_77.f_146[0]), &(Local_77.f_160), 67108864, 16777216, 134217728, "SPECIAL_PED_CHELONIAN_FOCUS", "PoorJoeConvo");
				func_14(Local_77.f_160, 262144);
				if (func_15(Global_35, Local_77.f_154, 0, 1))
				{
					set_ped_reset_flag(Global_35, 168, true);
				}
				switch (iLocal_76)
				{
					case 0:
						func_16(&Local_77, &iLocal_76);
						break;
					case 1:
						if (func_17(&Local_77))
						{
							func_18(&iLocal_76, 2);
						}
						break;
					case 2:
						func_19(&Local_77, &iLocal_76);
						break;
					case 3:
						func_20(&Local_77, &iLocal_76);
						break;
					case 5:
						func_21(&Local_77, &iLocal_76);
						break;
					case 8:
						func_22(&Local_77, &iLocal_76);
						break;
					case 9:
						func_23(&Local_77, &iLocal_76);
						break;
					case 6:
						func_24(&Local_77, &iLocal_76, 0);
						break;
					case 7:
						func_24(&Local_77, &iLocal_76, 1);
						break;
					case 10:
						func_25(&Local_77, &iLocal_76);
						break;
					case 11:
						func_26(&Local_77, &iLocal_76);
						break;
					case 12:
						func_27(&Local_77, &iLocal_76);
						break;
					case 13:
						func_28(&Local_77, &iLocal_76);
						break;
					case 14:
						func_29(&Local_77, &iLocal_76);
						break;
					case 15:
						func_30(&Local_77, &iLocal_76);
						break;
					case 17:
						break;
					case 4:
						func_31(&Local_77, &iLocal_76);
						break;
					case 16:
						func_32(&Local_77, &iLocal_76);
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
	func_33(&(uParam0->f_291));
	func_34(&(uParam0->f_312));
	func_35(21);
	func_36();
	func_37(Local_14[0], 0);
	func_38(&(Local_14[0]->f_21), 0, 0, 1, 0);
	func_39(Local_14[0], &(Local_14[0]->f_21));
	func_40(uParam0->f_146[0]);
	func_41();
	func_42(&(uParam0->f_146[0]));
	func_43(uParam0->f_155);
	_0xc67a4910425f11f1(player_id(), "PoorJoeConvo");
	if (!is_entity_dead(&(uParam0->f_146[0])))
	{
		remove_entity_from_audio_mix_group(&(uParam0->f_146[0]), 0f);
		delete_ped(uParam0->f_146[0]);
	}
	if (does_entity_exist(&(uParam0->f_148[0])))
	{
		delete_object(uParam0->f_148[0]);
	}
	if (_does_volume_exist(uParam0->f_150))
	{
		func_44(uParam0->f_150);
		_delete_volume(uParam0->f_150);
	}
	if (_does_volume_exist(uParam0->f_152))
	{
		_0x74c2b3dc0b294102(uParam0->f_152);
		_0xa1cfb35069d23c23(uParam0->f_152);
		_delete_volume(uParam0->f_152);
	}
	if (_does_volume_exist(uParam0->f_151))
	{
		_delete_volume(uParam0->f_151);
	}
	if (_does_volume_exist(uParam0->f_153))
	{
		_delete_volume(uParam0->f_153);
	}
	if (_does_volume_exist(uParam0->f_154))
	{
		_delete_volume(uParam0->f_154);
	}
	if (_does_volume_exist(uParam0->f_155))
	{
		_delete_volume(uParam0->f_155);
	}
	if (_text_database_has_loaded("SPPRJAU"))
	{
		_text_database_delete("SPPRJAU");
	}
	if (_text_database_has_loaded("SPPJ"))
	{
		_text_database_delete("SPPJ");
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
			Global_40.f_11623[iParam0]->f_2 = func_45();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_46(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_47(uParam3))
	{
		func_48(uParam3, 0f);
	}
	else if (func_49(uParam3) >= 2f)
	{
		if (!func_50(Global_40.f_11623[iParam0]->f_2))
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_52(uParam3);
			return 1;
		}
		else
		{
			func_51(iParam0);
			*uParam4 = 1;
			func_52(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_3(var uParam0, int iParam1, int iParam2)
{
	if (*iParam2 <= 2)
	{
		return;
	}
	if (!_does_volume_exist((*(*Global_1396257)[21])[iParam1]->f_47))
	{
		func_1(uParam0);
	}
	if (!func_53(Global_35, 0))
	{
		if (*iParam2 == 11)
		{
			func_54(uParam0);
		}
		func_1(uParam0);
	}
	else if (!is_entity_in_volume(Global_35, (*(*Global_1396257)[21])[iParam1]->f_47, true, 0))
	{
		if (!func_47(&(uParam0->f_127)))
		{
			func_55(&(uParam0->f_127), 0);
		}
		else if (func_49(&(uParam0->f_127)) > 10f)
		{
			func_52(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (func_56(21, iParam1, &(uParam0->f_291), &(uParam0->f_146[0])))
	{
		uParam0->f_330 = 1;
		if (func_57(&(uParam0->f_291)))
		{
			func_1(uParam0);
		}
	}
}

void func_4(var uParam0, int iParam1)
{
	if (does_entity_exist(&(uParam0->f_146[0])))
	{
		if (!func_53(&(uParam0->f_146[0]), 0))
		{
			if (*iParam1 == 11)
			{
				func_54(uParam0);
			}
			func_1(uParam0);
		}
		else if (((*iParam1 >= 3 && *iParam1 <= 15) && *iParam1 != 11) && func_58(&(uParam0->f_146[0]), 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
		{
			if (!func_59(uParam0->f_160, 128))
			{
				if (func_59(Local_77.f_160, 16777216))
				{
					func_60(&(Local_77.f_160), 16777216);
					func_60(&(Local_77.f_160), 262144);
					func_61(0);
					if (func_62(&(Local_77.f_312)))
					{
						func_34(&(Local_77.f_312));
					}
				}
				func_63(&(uParam0->f_160), 128);
				func_51(21);
				func_18(iParam1, 16);
			}
		}
	}
}

bool func_5(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_64())
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
		if (func_65(0) == 7 || func_66())
		{
			return true;
		}
	}
	if (func_67(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_6(var uParam0, var uParam1, char* sParam2, bool bParam3)
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
			if (!_0x1f0e401031e20146(*uParam1, sParam2) && _0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				_set_anim_scene_playback_list_bool(*uParam1, sParam2, true);
				return false;
			}
			else if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				if ((_0x8d81e7824b7753f7(*uParam1, "s_base", 1) || _0x8d81e7824b7753f7(*uParam1, "s_base_hide_loop", 1)) || (_get_anim_scene_progress(*uParam1) > 0.99f && bParam3))
				{
					if (func_68(uParam1, uParam0->f_156))
					{
						uParam0->f_156 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	if (*iParam1 >= 16 || *iParam1 <= 2)
	{
		return;
	}
	func_69(&(uParam0->f_145), uParam0->f_153, uParam0->f_146[0], &(uParam0->f_175), &(uParam0->f_133), 5000);
}

void func_8(var uParam0, int iParam1)
{
	if (func_59(uParam0->f_160, 64))
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 10)
	{
		if (uParam0->f_172 < 2)
		{
			if (func_70(uParam0->f_146[0], 249295937))
			{
				func_63(&(uParam0->f_160), 64);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_71(iParam3);
	if (fParam4 == 0f)
	{
		if (func_46(iParam0, Global_35, 15f, 1))
		{
			if (!func_72(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_73(uParam1, iParam2);
				}
			}
		}
		else if (func_72(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_74(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_72(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_73(uParam1, iParam2);
			}
		}
	}
	else if (func_72(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_74(uParam1, iParam2);
	}
}

void func_10()
{
	if (func_75())
	{
		if (func_76(iLocal_74) > -1)
		{
			if (func_77())
			{
				func_78(Local_14[iLocal_74], 0);
				func_37(Local_14[iLocal_74], 0);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				if (!func_59(iLocal_75, 2))
				{
					func_40(Local_77.f_146[0]);
					func_38(&(Local_14[iLocal_74]->f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_78(Local_14[iLocal_74], 0);
		func_40(Local_77.f_146[0]);
		func_37(Local_14[iLocal_74], 0);
		func_38(&(Local_14[iLocal_74]->f_21), 0, 0, 1, 0);
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	if (is_entity_dead(&(uParam0->f_146[0])) || is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (!func_59(*uParam2, 1024))
	{
		if (is_entity_touching_entity(*uParam1, &(uParam0->f_146[0])))
		{
		}
		else if (is_entity_touching_entity(*uParam1, Global_35))
		{
			apply_damage_to_ped(Global_35, 20, 0, 64826, *uParam1);
			shake_gameplay_cam("JOLT_SHAKE", 0.5f);
			_play_sound_from_entity("Stone_Hit_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
			_0xa6847bba4fcdd13f(Global_35, "PAIN_LOW");
			set_ped_to_ragdoll(Global_35, 0, 0, 1, false, false, false);
			apply_force_to_entity(Global_35, 1, Vector(3.5f, 3.5f, 3.5f) * func_79(Global_36 - get_entity_coords(*uParam1, false, false)), 0f, 0f, 0f, 0, false, false, true, false, true);
			func_63(uParam2, 1024);
		}
		else if (!is_entity_in_air(*uParam1, 0))
		{
			_play_sound_from_entity("Stone_Miss_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
			func_63(uParam2, 1024);
		}
	}
}

void func_12()
{
	if (func_59(Local_77.f_160, 131072))
	{
		func_80(Local_77.f_146[0], 1, 1, 1, 1, 1, 1, 1);
	}
}

void func_13(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6)
{
	if (!func_72(*uParam1, iParam2))
	{
		return;
	}
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		_0xc67a4910425f11f1(player_id(), sParam6);
		return;
	}
	if (func_72(*uParam1, iParam3))
	{
		if (!func_72(*uParam1, iParam4))
		{
			_0x3946fc742ac305cd(player_id(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam6);
			func_73(uParam1, iParam4);
		}
	}
	else if (func_72(*uParam1, iParam4))
	{
		_0xc67a4910425f11f1(player_id(), sParam6);
		func_74(uParam1, iParam4);
	}
}

void func_14(var uParam0, int iParam1)
{
	if (func_72(uParam0, iParam1))
	{
		disable_all_control_actions(0);
		disable_all_control_actions(1);
		enable_control_action(0, -124244224, true);
		enable_control_action(0, 648122183, true);
		enable_control_action(0, -163964935, true);
		enable_control_action(0, -668070958, true);
		enable_control_action(0, 1250966545, true);
		func_81();
		_0xc9caeaeec1256e54(-1679307491);
		if (!get_ped_config_flag(Global_35, 174, true))
		{
			set_ped_config_flag(Global_35, 174, true);
		}
		func_82();
	}
	else if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

bool func_15(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_16(var uParam0, int iParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_158))
	{
		uParam0->f_158 = _create_anim_scene("script@specialped@pdprj_poor_joe@ig@ig_1@ig_1", 2, 0, false, true);
	}
	if (_does_anim_scene_exist(uParam0->f_158))
	{
		load_anim_scene(uParam0->f_158);
		request_model(uParam0->f_143, false);
		request_model(uParam0->f_144, false);
		_text_database_request("SPPJ");
		_text_database_request("SPPRJAU");
		_text_database_request("SPDEF");
		func_83(uParam0);
		func_84(uParam0->f_150, "SP_POOR_JOE_Block", 1, 0, 0, 0, -1082130432);
		_0xb56d41a694e42e86(uParam0->f_152, 0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(uParam0->f_152, 0, 0, 0, -1, -1, 0);
		func_85(uParam0->f_155, 0, 224, 0);
		uParam0->f_142 = func_87(21, 0, 9, func_86(21));
		if (!func_88(uParam0->f_142))
		{
			return;
		}
		if (func_89())
		{
			func_90(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_90(uParam0, Global_35, "ARTHUR", 0);
		}
		func_91(&(uParam0->f_291));
		func_92(&(uParam0->f_98));
		func_93(&(uParam0->f_98), 1);
		func_94(&(uParam0->f_98), 1);
		func_95(&(uParam0->f_98), 0);
		func_96(&(uParam0->f_98), 0);
		func_97(&(uParam0->f_98), 1);
		func_98(&(uParam0->f_98), 1);
		func_99(&(uParam0->f_98), 1);
		func_100(&(uParam0->f_98), 0);
		func_101(&(uParam0->f_98), 0);
		func_102(&(uParam0->f_98), 1);
		func_103(&(uParam0->f_98), 0);
		func_104(&(uParam0->f_98), 0);
		func_105(&(uParam0->f_98), 1);
		func_106(&(uParam0->f_98), 1);
		func_107(&(uParam0->f_98), 1);
		func_108(&(uParam0->f_98), 1);
		func_109(&(uParam0->f_98), 1);
		func_110(&(uParam0->f_98), 1);
		func_111(&(uParam0->f_98), 1);
		request_ptfx_asset();
		if (func_88(uParam0->f_142))
		{
			uParam0->f_161 = func_112(uParam0->f_142);
		}
		func_18(iParam1, 1);
	}
}

bool func_17(var uParam0)
{
	_0xed9582b3da8f02b4(1);
	if (((((((has_model_loaded(uParam0->f_143) && has_model_loaded(uParam0->f_144)) && _text_database_has_loaded("SPPRJAU")) && _text_database_has_loaded("SPPJ")) && _text_database_has_loaded("SPDEF")) && _is_anim_scene_loaded(uParam0->f_158, true, false)) && _0x5c16855277819bbf() == 1) && has_ptfx_asset_loaded())
	{
		if (func_113(&(uParam0->f_142), &(uParam0->f_161)))
		{
			return true;
		}
	}
	if (!has_model_loaded(uParam0->f_143))
	{
	}
	if (!has_model_loaded(uParam0->f_144))
	{
	}
	if (!_text_database_has_loaded("SPPRJAU"))
	{
	}
	if (!_is_anim_scene_loaded(uParam0->f_158, true, false))
	{
	}
	if (_0x5c16855277819bbf() != 1)
	{
	}
	if (!has_ptfx_asset_loaded())
	{
	}
	return false;
}

void func_18(int iParam0, int iParam1)
{
	if (!(iParam1 == 4 || iParam1 == 8))
	{
		if (func_59(Local_77.f_160, 2097152))
		{
			func_60(&(Local_77.f_160), 2097152);
		}
	}
	if (((iParam1 == 10 || iParam1 == 11) || iParam1 == 16) || iParam1 == 17)
	{
		if (func_59(Local_77.f_160, 1048576))
		{
			func_60(&(Local_77.f_160), 1048576);
		}
	}
	*iParam0 = iParam1;
}

void func_19(var uParam0, int iParam1)
{
	Var0 = { func_114(2) };
	Var4 = { func_114(1) };
	if (func_115(uParam0->f_146[0], uParam0->f_143, Var0, Var0.f_3, 1, 0, 1) && func_116(uParam0->f_148[0], uParam0->f_144, Var4))
	{
		if (func_53(&(uParam0->f_146[0]), 0))
		{
			func_117(&(uParam0->f_146[0]), 21);
			add_entity_to_audio_mix_group(&(uParam0->f_146[0]), "special_ped_group", 0f);
			set_ped_config_flag(&(uParam0->f_146[0]), 297, true);
			set_ped_config_flag(&(uParam0->f_146[0]), 130, true);
			set_ped_config_flag(&(uParam0->f_146[0]), 317, true);
			set_ped_config_flag(&(uParam0->f_146[0]), 315, true);
			set_ped_config_flag(&(uParam0->f_146[0]), 344, true);
			_0xae6004120c18df97(&(uParam0->f_146[0]), 0, 0);
			func_118(&(uParam0->f_146[0]), 1);
			_0x4ad019591e94c064("Stone_Hit_Player", Global_35, "SP_Poor_Joe_Sounds", -2);
			_0x4ad019591e94c064("Stone_Miss_Player", Global_35, "SP_Poor_Joe_Sounds", -2);
			func_63(&(uParam0->f_160), 1024);
			func_90(uParam0, &(uParam0->f_146[0]), "POOR_JOE", 0);
			uParam0->f_159 = func_119(uParam0);
			uParam0->f_173 = 1;
			func_61(0);
			func_120(0, 0, "SPD_UC_GRT", "", -163964935, 0, 0, 0);
			func_120(0, 1, "SPD_UC_ANT", "", 648122183, 0, 0, 0);
			func_122(0, func_121(3, 0, 0), 0);
			func_123(0, 0, 10);
			func_123(0, 1, 10);
			func_124(0, 0);
			func_63(&(Local_77.f_160), 1048576);
			_set_entity_coords_and_heading(&(uParam0->f_146[0]), Var0, Var0.f_3, true, false, true);
			_set_entity_coords_and_heading(&(uParam0->f_148[0]), Var4, Var4.f_3, true, false, true);
			set_anim_scene_entity(uParam0->f_158, "CS_POORJOE", &(uParam0->f_146[0]), 0);
			if (!func_89())
			{
				set_anim_scene_bool(uParam0->f_158, "b_PlayerArthur", true, false);
				set_anim_scene_entity(uParam0->f_158, "ARTHUR", Global_35, 0);
			}
			else
			{
				set_anim_scene_bool(uParam0->f_158, "b_PlayerArthur", false, false);
				set_anim_scene_entity(uParam0->f_158, "JOHN", Global_35, 0);
			}
			func_18(iParam1, 3);
		}
	}
}

void func_20(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), "pl_base", 0))
	{
		func_18(iParam1, 5);
	}
}

void func_21(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (!func_125(Global_35, uParam0->f_151, 1, 0))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_126((uParam0->f_163 % 9)), 0))
	{
		start_particle_fx_non_looped_at_coord("scr_leaves_descend", 2705.561f, 2367.957f, 172f, 0f, 0f, 0f, 1f, false, false, false);
		func_128(21, func_127());
		uParam0->f_163++;
		func_18(iParam1, 8);
	}
}

void func_22(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (func_129(Global_36, get_entity_coords(&(uParam0->f_146[0]), false, false)) > 20f)
	{
		return;
	}
	if (func_130(uParam0, iParam1))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_131((uParam0->f_162 % 6)), 0))
	{
		func_18(iParam1, 4);
		uParam0->f_171 = get_game_timer() + 2500;
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_132((uParam0->f_166 % 11)), 0))
	{
		uParam0->f_166++;
		func_18(iParam1, 8);
	}
}

void func_24(var uParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	bVar0 = has_anim_event_fired(&(uParam0->f_146[0]), 904987901);
	bVar1 = has_anim_event_fired(&(uParam0->f_146[0]), -1161663078);
	if (bParam2)
	{
		func_133(uParam0->f_146[0], uParam0->f_148[0], &(uParam0->f_160), bVar0, bVar1);
		if (func_6(uParam0, &(uParam0->f_158), func_134((uParam0->f_165 % 5)), 0))
		{
			uParam0->f_165++;
			func_18(iParam1, 8);
		}
	}
	else
	{
		func_133(uParam0->f_146[0], uParam0->f_148[0], &(uParam0->f_160), bVar0, bVar1);
		if (func_6(uParam0, &(uParam0->f_158), func_135((uParam0->f_164 % 18)), 0))
		{
			if (uParam0->f_164 == 4 || uParam0->f_164 == 14)
			{
				func_136(uParam0);
			}
			uParam0->f_164++;
			func_18(iParam1, 8);
		}
	}
}

void func_25(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_137((uParam0->f_167 % 3)), 1))
	{
		uParam0->f_167++;
		func_18(iParam1, 11);
	}
}

void func_26(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (!_0xa2cac9def0195e6f(0))
	{
		if (!func_59(uParam0->f_160, 65536))
		{
			if (func_58(&(uParam0->f_146[0]), 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
			{
				func_138(uParam0, "PDRPJ_AGGRO");
				func_63(&(uParam0->f_160), 65536);
				return;
			}
		}
		if (!func_59(uParam0->f_160, 32768) && !func_47(&(uParam0->f_139)))
		{
			func_139(&(uParam0->f_139));
		}
		if (uParam0->f_169 < 3 && func_140(&(uParam0->f_139), 6f))
		{
			func_138(uParam0, func_141((uParam0->f_168 % 9)));
			uParam0->f_168++;
			uParam0->f_169++;
			return;
		}
		else if (!func_59(uParam0->f_160, 32768) && uParam0->f_169 >= 3)
		{
			func_63(&(uParam0->f_160), 32768);
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	cVar0 = "pl_conversation_enter";
	if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
	{
		func_18(iParam1, 13);
	}
}

void func_28(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	func_142(&(Local_77.f_312), "PRJ_UC_POS", "PRJ_UC_NEG", 0, 2, 25000, 0, -1, -1);
	if (func_62(&(Local_77.f_312)))
	{
		if (func_143(&(Local_77.f_312)))
		{
			if (func_144(&(Local_77.f_312)))
			{
				func_34(&(Local_77.f_312));
				func_63(&(Local_77.f_160), 4194304);
			}
			else if (func_145(&(Local_77.f_312)))
			{
				func_34(&(Local_77.f_312));
				func_63(&(Local_77.f_160), 8388608);
			}
		}
	}
	if (func_59(Local_77.f_160, 4194304) || func_59(Local_77.f_160, 8388608))
	{
		func_63(&(Local_77.f_160), 268435456);
		func_18(iParam1, 14);
	}
}

void func_29(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (func_59(Local_77.f_160, 4194304))
	{
		cVar0 = "pl_conversation_pos";
		fVar1 = 0.773f;
	}
	else if (func_59(Local_77.f_160, 8388608))
	{
		cVar0 = "pl_conversation_neg";
		fVar1 = 0.623f;
	}
	if (!is_string_null_or_empty(cVar0))
	{
		if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
		{
			func_60(&(Local_77.f_160), 262144);
			func_60(&(Local_77.f_160), 16777216);
			func_61(0);
			func_63(&(Local_77.f_160), 1048576);
			if (func_59(Local_77.f_160, 4194304))
			{
				func_18(iParam1, 8);
			}
			else if (func_59(Local_77.f_160, 8388608))
			{
				func_18(iParam1, 11);
			}
		}
		if (_0x1f0e401031e20146(uParam0->f_158, cVar0) && _get_anim_scene_progress(uParam0->f_158) >= fVar1)
		{
			func_60(&(Local_77.f_160), 262144);
			func_60(&(Local_77.f_160), 16777216);
			func_61(0);
			func_63(&(Local_77.f_160), 1048576);
		}
	}
	else
	{
		func_60(&(Local_77.f_160), 262144);
		func_60(&(Local_77.f_160), 16777216);
		func_61(0);
		func_63(&(Local_77.f_160), 1048576);
		func_18(iParam1, 8);
	}
}

void func_30(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(uParam0->f_146[0])) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (uParam0->f_290 == 0)
	{
		cVar0 = "pl_conversation_arthur_01";
		fVar1 = 0.711f;
	}
	else if (uParam0->f_290 == 1)
	{
		cVar0 = "pl_conversation_arthur_02";
		fVar1 = 0.808f;
	}
	if (!is_string_null_or_empty(cVar0))
	{
		if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
		{
			func_60(&(Local_77.f_160), 262144);
			func_60(&(Local_77.f_160), 16777216);
			func_61(0);
			func_63(&(Local_77.f_160), 1048576);
			func_18(iParam1, 8);
		}
		if (_0x1f0e401031e20146(uParam0->f_158, cVar0) && _get_anim_scene_progress(uParam0->f_158) >= fVar1)
		{
			func_60(&(Local_77.f_160), 262144);
			func_60(&(Local_77.f_160), 16777216);
			func_61(0);
			func_63(&(Local_77.f_160), 1048576);
		}
	}
	else
	{
		func_60(&(Local_77.f_160), 262144);
		func_60(&(Local_77.f_160), 16777216);
		func_61(0);
		func_63(&(Local_77.f_160), 1048576);
		func_18(iParam1, 8);
	}
}

void func_31(var uParam0, int iParam1)
{
	if (func_130(uParam0, iParam1))
	{
		return;
	}
	if (uParam0->f_171 < get_game_timer())
	{
		func_146(uParam0, iParam1);
	}
}

void func_32(var uParam0, int iParam1)
{
	if (!does_entity_exist(Global_35) || !does_entity_exist(&(uParam0->f_146[0])))
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_148[0])))
	{
		return;
	}
	if (is_entity_attached_to_any_ped(&(uParam0->f_148[0])))
	{
		detach_entity(&(uParam0->f_148[0]), true, true);
	}
	if (func_6(uParam0, &(uParam0->f_158), func_147(uParam0), 1))
	{
		func_146(uParam0, iParam1);
		func_18(iParam1, 11);
	}
}

void func_33(var uParam0)
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
	if (func_47(&(uParam0->f_13)))
	{
		func_52(&(uParam0->f_13));
	}
}

void func_34(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_148(uParam0->f_5))
		{
			func_149(&(uParam0->f_5), 1, 1);
		}
		if (func_148(uParam0->f_6))
		{
			func_149(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_stop("MissionChoice");
		}
		uParam0->f_2 = 0;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
	}
}

void func_35(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_150(0, -1);
	}
	func_151();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_36()
{
	if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

void func_37(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_52(&(iParam0->f_18));
}

void func_38(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_148((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_149(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_39(int* iParam0, var uParam1)
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
	func_152(iParam0, uParam1, 1);
	func_38(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_40(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_41()
{
	func_153(Local_77.f_146[0], Local_14[0], &(Local_14[0]->f_21), 1, 1);
}

void func_42(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 330, true);
		set_ped_config_flag(iParam0, 413, true);
		set_ped_config_flag(iParam0, 130, true);
		set_ped_config_flag(iParam0, 315, true);
	}
}

void func_43(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_44(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_154(vVar0, 0);
}

int func_45()
{
	return &Global_1899515;
}

bool func_46(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_47(var uParam0)
{
	return func_155(*uParam0, 1);
}

void func_48(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_156() - fParam1);
	func_157(uParam0, 1);
	func_158(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_49(var uParam0)
{
	if (!func_47(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_159(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_156() - uParam0->f_1);
}

bool func_50(int iParam0)
{
	return iParam0 != -15;
}

void func_51(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_45();
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_53(int iParam0, int iParam1)
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
	if (func_59(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_54(var uParam0)
{
	delete_ped(uParam0->f_146[0]);
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1 || !func_47(uParam0))
	{
		func_139(uParam0);
	}
}

bool func_56(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_65(0) == 1 || func_65(0) == 2) || func_65(0) == 8) || func_160(&Global_1935630, 2048))
			{
				func_63(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_65(0) == 11)
			{
				func_63(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_65(0) == 6)
			{
				func_63(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_63(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_161((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_161((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_45();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_161(iVar2) > func_161(iVar1))
				{
					if (func_161(iVar0) > func_161(iVar2) + 1 || func_161(iVar0) < func_161(iVar1))
					{
						func_63(uParam2, 32);
					}
				}
				else if (func_161(iVar0) > func_161(iVar2) + 1 && func_161(iVar0) < func_161(iVar1))
				{
					func_63(uParam2, 32);
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
					if (((func_162(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_162(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_163(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_163(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_164((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_63(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_165(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_166(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_47(&(uParam2->f_13)))
					{
						func_48(&(uParam2->f_13), 0f);
					}
					else if (func_167(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_52(&(uParam2->f_13));
						func_63(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_47(&(uParam2->f_13)))
					{
						func_52(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_168())
			{
				func_63(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_169())
			{
				func_63(uParam2, 2048);
			}
		}
		if (func_160(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_63(uParam2, 128);
		}
		if (func_67(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_63(uParam2, 256);
		}
	}
	if ((((((((((func_59(*uParam2, 2) || func_59(*uParam2, 4)) || func_59(*uParam2, 8)) || func_59(*uParam2, 16)) || func_59(*uParam2, 32)) || func_59(*uParam2, 64)) || func_59(*uParam2, 128)) || func_59(*uParam2, 256)) || func_59(*uParam2, 512)) || func_59(*uParam2, 1024)) || func_59(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_57(var uParam0)
{
	if (((((func_59(*uParam0, 2) || func_59(*uParam0, 4)) || func_59(*uParam0, 16)) || func_59(*uParam0, 128)) || func_59(*uParam0, 1024)) || func_59(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_170(uParam2, 1, iVar0);
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
			if (func_171(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_172(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_173(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_174(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_175(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_176(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_172(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_177(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_178(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_179(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_180(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_180(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_172(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_181(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_182(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_183(uParam2, 4000))
				{
					if ((func_184(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_185(uParam2, iParam0)) && func_186(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_184(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_185(uParam2, iParam0)) && func_186(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_187(iParam0, Global_1935630->f_41))
							{
								func_188();
								*uParam3 = 2;
								func_172(iParam0, uParam2, *uParam3);
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
						if (func_187(iParam0, Global_1935630->f_41))
						{
							func_188();
							*uParam3 = 2;
							func_172(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_189(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_190() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_188();
						*uParam3 = 2;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_191())
					{
						if (func_187(iParam0, Global_1935630->f_42))
						{
							func_188();
							*uParam3 = 2;
							func_172(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_192(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_172(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_193(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_194(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_195(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_196(uParam2, 4000))
				{
					if (func_197(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_172(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_198(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_172(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_199(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_172(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_59(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_60(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_61(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	iLocal_74 = iParam0;
}

bool func_62(var uParam0)
{
	return uParam0->f_3;
}

void func_63(var uParam0, int iParam1)
{
	func_73(uParam0, iParam1);
}

bool func_64()
{
	if (func_201() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_202((*Global_1392915)[iVar0]->f_4))
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

int func_65(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_66()
{
	return Global_1310750->f_16077 != 0;
}

bool func_67(var uParam0, int iParam1)
{
	return func_203(*uParam0, iParam1);
}

bool func_68(var uParam0, char* sParam1)
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

void func_69(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
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
	if (!func_47(uParam4))
	{
		func_48(uParam4, 0f);
	}
	else if (func_167(uParam4) > 1000)
	{
		if (!is_entity_in_volume(Global_35, iParam1, true, 0))
		{
			if (func_204(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = &uVar0[0];
				func_48(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_48(uParam4, 0f);
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

bool func_70(var uParam0, int iParam1)
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

char* func_71(int iParam0)
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

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_75()
{
	if (((func_205(Global_35, &(Local_77.f_146[0]), 1, 0) <= 15f && func_59(Local_77.f_160, 1048576)) && !func_59(Local_77.f_160, 128)) && !func_59(Local_77.f_160, 65536))
	{
		return true;
	}
	return false;
}

int func_76(int iParam0)
{
	iVar0 = -1;
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = func_206(Local_77.f_146[0], Local_14[iParam0], 15f, &(Local_14[iParam0]->f_21), 0f, 2, Local_14[iParam0]->f_57, iVar1, Local_14[iParam0]->f_56, 0, 0, 2, -1082130432);
	if (func_207())
	{
		func_78(Local_14[iParam0], 1);
		if (iVar0 > -1)
		{
			Local_14[iParam0]->f_58 = iVar0;
		}
		return iVar0;
	}
	else
	{
		func_78(Local_14[iParam0], 0);
	}
	return iVar0;
}

bool func_77()
{
	if (func_208() == 0)
	{
		if (func_209(0, &iVar0))
		{
			if (iVar0 == 0)
			{
				if (func_89())
				{
					func_210(Global_35, "GREET_GENERAL", -417894478, &(Local_77.f_146[0]), 1, 0, 0, 1);
				}
				else
				{
					func_210(Global_35, "GREET_GENERAL", -417894478, &(Local_77.f_146[0]), 1, 0, 0, 1);
				}
			}
			else if (iVar0 == 1)
			{
				if (func_89())
				{
					if (Local_77.f_290 == 0)
					{
						func_210(Global_35, "INSULT_MALE_CONV_PART1", -417894478, &(Local_77.f_146[0]), 1, "JOHN_PLAYER", 13, 1);
					}
					else if (Local_77.f_290 == 1)
					{
						func_210(Global_35, "INSULT_MALE_CONV_PART1", -417894478, &(Local_77.f_146[0]), 1, "JOHN_PLAYER", 15, 1);
					}
					else
					{
						func_210(Global_35, "INSULT_MALE_CONV_PART1", -417894478, &(Local_77.f_146[0]), 1, "JOHN_PLAYER", 19, 1);
					}
				}
				else if (Local_77.f_290 == 0)
				{
					func_210(Global_35, "INSULT_POORJOE_CONV_PART1", -417894478, &(Local_77.f_146[0]), 1, 0, 1, 1);
				}
				else
				{
					switch (get_random_int_in_range(0, 2))
					{
						case 0:
							func_210(Global_35, "INSULT_POORJOE_CONV_PART3", -417894478, &(Local_77.f_146[0]), 1, 0, 1, 1);
							break;
						case 1:
							func_210(Global_35, "INSULT_POORJOE_CONV_PART1", -417894478, &(Local_77.f_146[0]), 1, 0, 2, 1);
							break;
					}
				}
			}
			func_211(21, Local_77.f_146[0], &(Local_77.f_160), 512);
			if (!func_59(Local_77.f_160, 262144))
			{
				func_63(&(Local_77.f_160), 262144);
				func_63(&(Local_77.f_160), 67108864);
				func_63(&(Local_77.f_160), 16777216);
			}
			func_212(&Local_77);
			func_63(&(Local_77.f_160), 524288);
			if (Local_77.f_290 != 2)
			{
				func_63(&(Local_77.f_160), 268435456);
			}
		}
	}
	func_60(&(Local_77.f_160), 1048576);
	func_60(&(Local_77.f_160), 2097152);
	return true;
}

void func_78(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_213(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_214(uParam0->f_21[iVar0], 1, 0))
			{
				func_215(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_214(uParam0->f_21[iVar0], 1, 0))
			{
				func_215(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

Vector3 func_79(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_80(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (((_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, bParam6, bParam7) && (!bParam5 || !is_entity_dead(iVar0))) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == *uParam0)
	{
		_0x0751d461f06e41ce(get_player_index(), 3, 0, iParam1);
		_0x0751d461f06e41ce(get_player_index(), 4, 0, iParam2);
		_0x0751d461f06e41ce(get_player_index(), 7, 0, iParam3);
		return 1;
	}
	if (bParam4)
	{
		func_216();
	}
	return 0;
}

void func_81()
{
	Global_1905944->f_5695 = 1;
}

void func_82()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_217(0);
	}
}

void func_83(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_150))
	{
		Var0 = { func_218(0) };
		uParam0->f_150 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_151))
	{
		Var0 = { func_218(1) };
		uParam0->f_151 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_152))
	{
		Var0 = { func_218(2) };
		uParam0->f_152 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_153))
	{
		Var0 = { func_218(3) };
		uParam0->f_153 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_154))
	{
		Var0 = { func_218(4) };
		uParam0->f_154 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!_does_volume_exist(uParam0->f_155))
	{
		Var0 = { func_218(5) };
		uParam0->f_154 = _create_volume_by_hash_with_custom_name(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
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
	iVar6 = func_219(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_220(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

int func_86(int iParam0)
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

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_88(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_89()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_90(var uParam0, int iParam1, char* sParam2, bool bParam3)
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

void func_91(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_92(var uParam0)
{
	func_93(uParam0, 0);
	func_109(uParam0, 0);
	func_105(uParam0, 1);
	func_101(uParam0, 1);
	func_226(uParam0, 0);
	func_102(uParam0, 1);
	func_227(uParam0, 1, 1, 1);
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 16384);
	}
	else
	{
		func_229(&(uParam0->f_1), 16384);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 524288);
	}
	else
	{
		func_229(&(uParam0->f_1), 524288);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 131072);
	}
	else
	{
		func_229(&(uParam0->f_1), 131072);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 4);
	}
	else
	{
		func_228(uParam0, 4);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 8);
	}
	else
	{
		func_229(&(uParam0->f_1), 8);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 8);
	}
	else
	{
		func_228(uParam0, 8);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 32);
	}
	else
	{
		func_228(uParam0, 32);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 64);
	}
	else
	{
		func_228(uParam0, 64);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 16);
	}
	else
	{
		func_228(uParam0, 67108864);
		func_228(uParam0, 16);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 256);
	}
	else
	{
		func_228(uParam0, 256);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 524288);
	}
	else
	{
		func_228(uParam0, 524288);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 2);
	}
	else
	{
		func_228(uParam0, 2);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 256);
	}
	else
	{
		func_229(&(uParam0->f_1), 256);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 4);
	}
	else
	{
		func_229(&(uParam0->f_1), 4);
	}
}

void func_107(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 16);
	}
	else
	{
		func_229(&(uParam0->f_1), 16);
	}
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 2);
	}
	else
	{
		func_229(&(uParam0->f_1), 2);
	}
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 2048);
	}
	else
	{
		func_229(&(uParam0->f_1), 2048);
	}
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_228(&(uParam0->f_1), 1);
	}
	else
	{
		func_229(&(uParam0->f_1), 1);
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 128);
	}
	else
	{
		func_228(uParam0, 128);
	}
}

int func_112(int iParam0)
{
	if (!func_88(iParam0))
	{
		return -1;
	}
	return func_230(iParam0);
}

bool func_113(var uParam0, var uParam1)
{
	if (func_88(*uParam0))
	{
		*uParam1 = func_112(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

struct<4> func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 2706.158f, 2370.946f, 165.3596f };
			Var0.f_3 = 195.579f;
			break;
		case 1:
			Var0 = { 2706.158f, 2370.946f, 165.3596f };
			Var0.f_3 = 195.579f;
			break;
		case 5:
			Var0 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_3 = 195.579f;
			break;
		case 2:
			Var0 = { 2706.285f, 2370.085f, 169.8426f };
			Var0.f_3 = 165.0252f;
			break;
		case 3:
			Var0 = { 2707.254f, 2369.777f, 169.8719f };
			Var0.f_3 = 189.4668f;
			break;
		case 4:
			Var0 = { 2706.539f, 2369.864f, 169.785f };
			Var0.f_3 = -125.94f;
			break;
	}
	return Var0;
}

int func_115(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_231(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_231(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_116(var uParam0, int iParam1, vector3 vParam2)
{
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = create_object(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_117(int iParam0, int iParam1)
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

void func_118(int iParam0, bool bParam1)
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

int func_119(var uParam0)
{
	uParam0->f_290 = func_232(21);
	if (uParam0->f_290 == 0)
	{
		iVar0 = 0;
		uParam0->f_162 = 0;
		uParam0->f_163 = 0;
		uParam0->f_164 = 0;
		uParam0->f_165 = 0;
		uParam0->f_166 = 0;
		uParam0->f_167 = 0;
		uParam0->f_168 = 0;
		return iVar0;
	}
	else if (uParam0->f_290 == 1)
	{
		iVar0 = 1;
		uParam0->f_162 = 2;
		uParam0->f_163 = 3;
		uParam0->f_164 = 6;
		uParam0->f_165 = 2;
		uParam0->f_166 = 4;
		uParam0->f_167 = 1;
		uParam0->f_168 = 3;
		return iVar0;
	}
	else if (uParam0->f_290 == 2)
	{
		uParam0->f_162 = 4;
		uParam0->f_163 = 6;
		uParam0->f_164 = 12;
		uParam0->f_165 = 4;
		uParam0->f_166 = 8;
		uParam0->f_167 = 2;
		uParam0->f_168 = 6;
		iVar0 = 2;
		return iVar0;
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!func_200(iParam0))
	{
		return;
	}
	if (!func_233(iParam1))
	{
		return;
	}
	func_234(Local_14[iParam0]->f_21[iParam1], sParam2, sParam3, iParam4, iParam5, iParam6, 0, 1, 0);
	if (bParam7)
	{
		func_235(Local_14[iParam0], iParam1, 1);
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
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

void func_122(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_236(iParam0);
	}
	Local_14[iParam0]->f_56 = iParam1;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	func_237(Local_14[iParam0]->f_21[iParam1], iParam2);
}

void func_124(int iParam0, int iParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	Local_14[iParam0]->f_57 = iParam1;
}

bool func_125(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char[] func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Notice_A";
		case 1:
			return "pl_Notice_B";
		case 2:
			return "pl_Notice_C";
		case 3:
			return "pl_Notice_D";
		case 4:
			return "pl_Notice_E";
		case 5:
			return "pl_Notice_F";
		case 6:
			return "pl_Notice_G";
		case 7:
			return "pl_Notice_H";
		case 8:
			return "pl_Notice_I";
		default:
			break;
	}
	return "pl_Notice_A";
}

bool func_127()
{
	if (func_201() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_238(1786474035, 0);
			}
			else
			{
				func_238(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_238(1417967521, 0);
			}
			else
			{
				func_238(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_238(-755110140, 0);
			}
			else if (func_239(55))
			{
				func_238(-1437550882, 0);
			}
			else
			{
				func_238(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_238(2063812437, 0);
			}
			else
			{
				func_238(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_238(-1558441298, 0);
			}
			else
			{
				func_238(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_238(1071640065, 0);
			}
			else
			{
				func_238(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_238(928184916, 0);
			}
			else
			{
				func_238(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

float func_129(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_130(var uParam0, int iParam1)
{
	if (is_entity_dead(&(uParam0->f_146[0])) || is_entity_dead(Global_35))
	{
		return false;
	}
	if (func_59(uParam0->f_160, 33554432))
	{
		return false;
	}
	if (func_59(uParam0->f_160, 524288))
	{
		if (func_240())
		{
			func_63(&(uParam0->f_160), 33554432);
			if (uParam0->f_290 == 2)
			{
				func_18(iParam1, 12);
			}
			else
			{
				func_18(iParam1, 15);
			}
		}
		return true;
	}
	else if (!func_59(Local_77.f_160, 2097152))
	{
		func_63(&(Local_77.f_160), 2097152);
	}
	return false;
}

char[] func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_idle_01";
		case 1:
			return "pl_idle_02";
		case 2:
			return "pl_idle_03";
		case 3:
			return "pl_idle_04";
		case 4:
			return "pl_idle_05";
		case 5:
			return "pl_idle_06";
		default:
			break;
	}
	return "pl_idle_01";
}

char[] func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Linger_A";
		case 1:
			return "pl_Linger_B";
		case 2:
			return "pl_Linger_D";
		case 3:
			return "pl_Linger_E";
		case 4:
			return "pl_Linger_C";
		case 5:
			return "pl_Linger_F";
		case 6:
			return "pl_Linger_G";
		case 7:
			return "pl_Linger_H";
		case 8:
			return "pl_Linger_I_01";
		case 9:
			return "pl_Linger_I_02";
		case 10:
			return "pl_Linger_J";
		default:
			break;
	}
	return "pl_Linger_A";
}

void func_133(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (is_entity_dead(*uParam0) || is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (!is_entity_attached_to_entity(*uParam1, *uParam0) && bParam4)
	{
		attach_entity_to_entity(*uParam1, *uParam0, get_ped_bone_index(*uParam0, 64847), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, false, false);
		set_entity_visible(*uParam1, true);
	}
	else if (bParam3 && is_entity_attached_to_entity(*uParam1, *uParam0))
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		vVar0.f_2 = (vVar0.z + 0.5f);
		vVar3 = { vVar0 - get_entity_coords(*uParam1, true, false) };
		vVar3 = { func_79(vVar3) };
		if (func_241(vVar3, get_entity_forward_vector(*uParam0)) < 0.5f)
		{
			vVar7 = { get_entity_forward_vector(*uParam0) };
			vVar3 = { func_79(vVar7) };
		}
		fVar6 = 40f;
		detach_entity(*uParam1, true, true);
		apply_force_to_entity(*uParam1, 1, vVar3 * Vector(fVar6, fVar6, fVar6), 0f, 0f, 0f, 0, false, false, true, false, true);
		func_60(uParam2, 1024);
	}
}

char[] func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Throw_Rock_No_Speech_01";
		case 1:
			return "pl_Throw_Rock_No_Speech_02";
		case 2:
			return "pl_Throw_Rock_No_Speech_03";
		case 3:
			return "pl_Throw_Rock_No_Speech_04";
		case 4:
			return "pl_Throw_Rock_No_Speech_05";
		default:
			break;
	}
	return "pl_Throw_Rock_No_Speech_01";
}

char[] func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Throw_Rock_A";
		case 1:
			return "pl_Throw_Rock_C";
		case 2:
			return "pl_Throw_Rock_D";
		case 3:
			return "pl_Throw_Rock_E";
		case 4:
			return "pl_Throw_Rock_F";
		case 5:
			return "pl_Throw_Rock_G";
		case 6:
			return "pl_Throw_Rock_B";
		case 7:
			return "pl_Throw_Rock_H";
		case 8:
			return "pl_Throw_Rock_I";
		case 9:
			return "pl_Throw_Rock_J";
		case 10:
			return "pl_Throw_Rock_K";
		case 11:
			return "pl_Throw_Rock_No_Speech_01";
		case 12:
			return "pl_Throw_Rock_M";
		case 13:
			return "pl_Throw_Rock_N";
		case 14:
			return "pl_Throw_Rock_O";
		case 15:
			return "pl_Throw_Rock_P";
		case 16:
			return "pl_Throw_Rock_Q";
		case 17:
			return "pl_Throw_Rock_R";
		default:
			break;
	}
	return "pl_Throw_Rock_A";
}

void func_136(var uParam0)
{
	func_63(&(uParam0->f_161), 16);
	_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(&(uParam0->f_146[0]), &uVar0));
}

char[] func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Hide_Linger_A";
		case 1:
			return "pl_Hide_Linger_B";
		case 2:
			return "pl_Hide_Linger_C";
		default:
			break;
	}
	return "pl_Hide_Linger_A";
}

int func_138(var uParam0, char* sParam1)
{
	if (is_entity_dead(&(uParam0->f_146[0])))
	{
		return 0;
	}
	vVar0 = { func_242(sParam1) };
	if (!func_243(&vVar0))
	{
		func_244(uParam0, vVar0, 0, -1, 0, 0);
		return 1;
	}
	return 0;
}

void func_139(var uParam0)
{
	func_48(uParam0, 0f);
}

bool func_140(var uParam0, float fParam1)
{
	if (func_245(uParam0, fParam1))
	{
		func_52(uParam0);
		return true;
	}
	return false;
}

char* func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PDRPJ_HIDEA";
		case 1:
			return "PDRPJ_HIDEB";
		case 2:
			return "PDRPJ_HIDEC";
		case 3:
			return "PDRPJ_HIDED";
		case 4:
			return "PDRPJ_HIDEE";
		case 5:
			return "PDRPJ_HIDEF";
		case 6:
			return "PDRPJ_HIDEG";
		case 7:
			return "PDRPJ_HIDEH";
		case 8:
			return "PDRPJ_HIDEI";
		default:
			break;
	}
	return "PDRPJ_HIDEA";
}

void func_142(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = _create_var_string(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_246(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_246(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_247(uParam0->f_5, 1);
		}
		func_248(uParam0->f_5, 17, 1, 1);
		func_248(uParam0->f_6, 17, 1, 1);
		func_249(uParam0->f_5, 6, 1);
		func_249(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = get_game_timer() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = (get_game_timer() + round((to_float(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = _uiprompt_set_register_horizontal_orientation();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_play("MissionChoice");
		}
		_0x6339c1ea3979b5f7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_143(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_148(uParam0->f_5) || !func_148(uParam0->f_6))
		{
			return false;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_5]->f_3) && func_250(uParam0->f_5, 1)) || func_251(uParam0->f_5, 1))
		{
			if (func_252(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_6]->f_3) && func_250(uParam0->f_6, 1)) || func_251(uParam0->f_6, 1))
		{
			if (func_252(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = get_game_timer();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_5]->f_3))
				{
					fVar2 = func_253(uParam0->f_6, 1);
					fVar3 = func_253(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_149(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_246(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_246(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_149(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_246(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_247(uParam0->f_5, 1);
						}
						func_249(uParam0->f_5, 6, 1);
						func_249(uParam0->f_6, 6, 1);
						func_248(uParam0->f_5, 17, 1, 1);
						func_248(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_6]->f_3))
			{
				fVar2 = func_253(uParam0->f_5, 1);
				fVar3 = func_253(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_149(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_246(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_246(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_149(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_246(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_247(uParam0->f_5, 1);
					}
					func_249(uParam0->f_5, 6, 1);
					func_249(uParam0->f_6, 6, 1);
					func_248(uParam0->f_5, 17, 1, 1);
					func_248(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_144(var uParam0)
{
	return *uParam0 == 1;
}

bool func_145(var uParam0)
{
	return *uParam0 == 2;
}

void func_146(var uParam0, int iParam1)
{
	if ((uParam0->f_330 && func_254(&(uParam0->f_291))) && !func_57(&(uParam0->f_291)))
	{
		func_18(iParam1, 10);
		return;
	}
	switch (uParam0->f_170)
	{
		case 0:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 1:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 2:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 3:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 7);
			break;
		case 4:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 5:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 6:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 7:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 8:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 9:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 7);
			break;
		case 10:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 11:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 12:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 13:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 14:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 15:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 10);
			break;
	}
}

char[] func_147(var uParam0)
{
	switch (uParam0->f_173)
	{
		case 1:
			return "pl_Front_Quick_Exit";
		case 2:
			return "pl_Left_Quick_Exit";
		case 3:
			return "pl_Right_Quick_Exit";
	}
	return "pl_Front_Quick_Exit";
}

bool func_148(int iParam0)
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

void func_149(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_148(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_255(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_256(iVar0);
	*uParam0 = 0;
}

void func_150(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_257(&Global_0, 8);
	}
	if (!func_258() || func_201() != -1)
	{
		return;
	}
	func_257(&Global_0, 1);
}

void func_151()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

void func_152(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_149(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_37(iParam0, 0);
		}
	}
}

void func_153(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_40(uParam0);
		func_39(iParam1, uParam2);
	}
	func_259(*uParam0, 1, bParam4);
}

void func_154(vector3 vParam0, int iParam3)
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
			if (func_261(vVar2, vParam0, 2f, 1))
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

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_156()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_159(var uParam0)
{
	return func_155(*uParam0, 2);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_161(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_162(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_202((*Global_1835011)[iParam0]->f_1);
}

int func_163(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_262((*Global_1835011)[iParam0]->f_1);
}

bool func_164(int iParam0)
{
	iVar0 = func_263();
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

int func_165(var uParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_264(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_265(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_266(iVar1, 0))
		{
			func_267(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_167(var uParam0)
{
	if (!func_47(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_159(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_190() - round((uParam0->f_1 * 1000f)));
}

bool func_168()
{
	return Global_1392040->f_6;
}

bool func_169()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

void func_170(var uParam0, bool bParam1, int iParam2)
{
	func_268(iParam2);
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
		uParam0->f_13 = func_269(0);
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
							func_229(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_270(1))
						{
							func_229(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_270(1) || *uParam0 & 8192 != 0))
				{
					func_228(uParam0, 33554432);
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
			if (func_271(uParam0))
			{
				uParam0->f_15 = func_190();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_190() - uParam0->f_15) > 500)
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
	func_272(uParam0);
}

bool func_171(int iParam0, var uParam1)
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
			if (!func_273(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_274(iParam0, iVar2) <= func_275(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_172(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_276(iParam2, 1, 1, 1, 0))
	{
		func_229(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_277(uParam1, 1);
	func_278();
}

bool func_173(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_279(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_280(uParam1);
			if (func_281(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_282(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_277(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_277(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_174(int iParam0, int iParam1, var uParam2)
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
	if (func_283(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_280(uParam2);
		if (func_281(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_282(uParam2)
				{
					func_277(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_175(int iParam0, var uParam1)
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
	if (func_273(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_282(uParam1)
		{
			fVar3 = func_280(uParam1);
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

int func_176(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_284(bParam1, bParam2, bParam3);
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

bool func_177(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_178(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_285(uParam2);
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
			if (func_186(uParam2, iParam1))
			{
				func_277(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_179(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_286(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_186(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_277(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_180(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_287(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_277(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_277(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_288(iParam1, vVar0, vVar4))
					{
						func_277(uParam2, 1);
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
					func_277(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_288(iParam1, vVar0, vVar7))
					{
						func_277(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_181(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_273(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_289(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_290(&(Global_1935630->f_34[iVar0])))
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
			if (func_291(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_292(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_293(uParam1, iParam0, fVar1, iVar0))
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

bool func_182(int iParam0, var uParam1)
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

bool func_183(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_184(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_294(iVar0, &iVar2))
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
	if (func_295(iVar0, iParam0))
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

int func_185(var uParam0, int iParam1)
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

bool func_186(var uParam0, int iParam1)
{
	if (func_296(uParam0))
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

bool func_187(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_205(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_188()
{
}

bool func_189(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_297(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_190();
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
						if (func_298(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_190();
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

int func_190()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_191()
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
	if ((func_190() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_192(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_275(uParam0);
	if (uParam0->f_12 > func_299(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_300(iParam1);
	iVar1 = func_301(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_193(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_302(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_194(int iParam0, var uParam1)
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
		if (func_303(iParam0, uParam1, 1))
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
					if (!func_304(uParam1, iParam0))
					{
						if (func_298(iVar4, Global_36, 1) < 7f)
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

bool func_195(int iParam0, var uParam1)
{
	if (!func_305(0))
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

bool func_196(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_197(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_198(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_190();
	}
	else if (func_190() - uParam1->f_4) > func_306(uParam1)
	{
		return func_307(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_199(var uParam0, int iParam1)
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

bool func_200(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return false;
	}
	return true;
}

int func_201()
{
	return Global_1572887->f_12;
}

bool func_202(int iParam0)
{
	iVar0 = func_308(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_203(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_204(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
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
				if (func_309(iVar1, bParam5, bParam6, 1, 0, 0) && !decor_exist_on(iVar1, "bIgnoreThisPed"))
				{
					if (!func_310(iVar1, uParam2))
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

float func_205(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_206(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_311(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_312(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_139(&(iParam1->f_13));
		}
		if (func_313(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_314(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_206(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_40(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_315(*uParam0, 1, 1);
						}
					}
					else if (func_316(iParam1, 22))
					{
						func_315(*uParam0, 0, 1);
					}
				}
				if (func_317(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_318(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_319(iParam8);
					if (func_320(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_321(uParam3);
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
					func_322(iParam1, uParam3, fVar8);
					if (func_323(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_38(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_324(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_317(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_325(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_320(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_318(uParam0, func_317(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_319(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_38(uParam3, 0, 0, 1, 1);
					}
					func_326(iParam1, 1);
				}
				func_322(iParam1, uParam3, fVar8);
				if (func_324(uParam0, iParam1, fParam4, bVar6))
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
			func_39(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_207()
{
	if (((((((does_entity_exist(Global_35) && !Global_1935630->f_12) && _does_volume_exist(Local_77.f_151)) && is_entity_in_volume(Global_35, Local_77.f_151, true, 0)) && !func_327()) && !func_59(Local_77.f_160, 268435456)) && func_59(Local_77.f_160, 1048576)) && func_59(Local_77.f_160, 2097152))
	{
		func_328(0, 1);
		return true;
	}
	else
	{
		func_328(0, 0);
	}
	return false;
}

int func_208()
{
	return iLocal_74;
}

bool func_209(int iParam0, var uParam1)
{
	if (!func_200(iParam0))
	{
		return false;
	}
	if (Local_14[iParam0]->f_58 == -1)
	{
		return false;
	}
	iVar0 = Local_14[iParam0]->f_58;
	if (!func_233(iVar0))
	{
		return false;
	}
	*uParam1 = iVar0;
	return true;
}

bool func_210(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_329(iParam0, &Var0);
}

void func_211(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_72(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_331(func_330(-1342635612)) < 5)
	{
		func_332(func_330(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_45();
	func_73(uParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_212(var uParam0)
{
	switch (uParam0->f_159)
	{
		case 0:
			func_333(21, 1);
			break;
		case 1:
			func_333(21, 2);
			break;
		case 2:
			func_333(21, 12);
			break;
	}
	func_334(21);
}

var func_213(var uParam0)
{
	return uParam0;
}

bool func_214(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_148(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_335(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_215(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_336(iParam0, 13))
	{
		func_237(iParam0, 0);
	}
	else
	{
		func_337(iParam0, 0);
	}
	if (func_148(iParam0->f_6))
	{
		if (bParam2)
		{
			func_149(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_216()
{
	_0x93624b36e8851b42(get_player_index());
}

void func_217(bool bParam0)
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

struct<11> func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = -432403087;
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = 665633627;
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 15f, 15f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = -1612834106;
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 81.29333f };
			Var0.f_7 = { 9.33105f, 4.768036f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = 665633627;
			Var0.f_1 = { 2706.214f, 2366.14f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 90f };
			Var0.f_7 = { 11f, 12f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = 665633627;
			Var0.f_1 = { 2706.054f, 2369.111f, 169.591f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "No Climb";
			break;
		case 5:
			Var0 = 665633627;
			Var0.f_1 = { 2706.116f, 2370.54f, 166.8774f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 46.571f, 48.75949f, 24.01915f };
			Var0.f_10 = "No Animals";
			break;
	}
	return Var0;
}

int func_219(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
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
		if (func_338(vParam0))
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
	func_339(iVar0, bParam8);
	return iVar0;
}

void func_220(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
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
	if (!func_340(iParam2))
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
	func_341(iVar1, 0);
	func_342(iVar1, 0);
	func_343(iVar1, 0);
	func_344(iVar1, 0);
	func_345(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_346(iVar1, iParam4);
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
		func_228(&(uParam0->f_1), 128);
	}
	else
	{
		func_229(&(uParam0->f_1), 128);
	}
}

void func_227(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_229(uParam0, 268435456);
	}
	else
	{
		func_228(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_229(uParam0, 1073741824);
	}
	else
	{
		func_228(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_229(uParam0, 536870912);
	}
	else
	{
		func_228(uParam0, 536870912);
	}
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_230(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_231(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_347(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

var func_232(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

bool func_233(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_234(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_148(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_348(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_349(iParam0->f_6, iParam0->f_5, 0);
			}
			func_350(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_351(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_235(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_352(iParam0, 5);
		if (bParam2)
		{
			func_352(iParam0, 6);
		}
		else
		{
			func_326(iParam0, 6);
		}
	}
}

void func_236(int iParam0)
{
	if (!func_200(iParam0))
	{
		return;
	}
	func_37(Local_14[iParam0], 0);
}

void func_237(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_238(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_353(iParam0, 0);
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
		func_354(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_239(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_240()
{
	if (func_356(func_355(Global_35, 0, 1, 0)) || func_356(func_355(Global_35, 1, 1, 0)))
	{
		_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
		return false;
	}
	if (!is_scripted_speech_playing(Global_35))
	{
		return true;
	}
	return false;
}

float func_241(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_242(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_243(var uParam0)
{
	return _0xd89504d9d7d5057d(uParam0);
}

bool func_244(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_357(vParam1, uParam0);
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

bool func_245(var uParam0, float fParam1)
{
	if (!func_47(uParam0))
	{
		return false;
	}
	if (func_49(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_246(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_358(iVar0, 2))
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
		func_359(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_247(int iParam0, bool bParam1)
{
	if (!func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

void func_248(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_249(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_250(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_255(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_251(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_255(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_252(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_253(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return 0f;
	}
	iVar0 = func_255(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

int func_254(var uParam0)
{
	if ((((func_59(*uParam0, 32) || func_59(*uParam0, 64)) || func_59(*uParam0, 512)) || func_59(*uParam0, 256)) || func_59(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	return iParam0;
}

void func_256(int iParam0)
{
	if (!func_360(iParam0))
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

void func_257(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_258()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_259(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_260(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_261(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_262(int iParam0)
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
		iVar0 = func_361(iParam0);
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

int func_263()
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

bool func_264(var uParam0, vector3 vParam1, float fParam4)
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

bool func_265(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_362(Global_35, *iParam1, 0))
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

bool func_266(int iParam0, bool bParam1)
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

void func_267(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_363(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_268(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_364();
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
			func_365(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_269(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_270(bool bParam0)
{
	if (func_366(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_271(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_201() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_367(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_367(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_301(iVar0) == -1)
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

void func_272(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_368(uParam0);
	}
}

bool func_273(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_301(iParam2);
	}
	else
	{
		iVar1 = func_300(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_301(iParam0);
	}
	else
	{
		iVar0 = func_300(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_203(*uParam1, 8388608))
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

float func_274(int iParam0, int iParam1)
{
	return func_205(iParam0, iParam1, 1, 1);
}

float func_275(var uParam0)
{
	return uParam0->f_26;
}

bool func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_277(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_229(uParam0, 134217728);
	}
	else
	{
		func_228(uParam0, 134217728);
	}
}

void func_278()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_279(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_205(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_369(iVar0, 0)))
		{
			if (func_370(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_280(var uParam0)
{
	return uParam0->f_17;
}

bool func_281(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_203(*uParam0, 4194304))
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

int func_282(var uParam0)
{
	return uParam0->f_18;
}

bool func_283(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_369(iVar0, 0)))
		{
			if (func_371(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)
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

float func_285(var uParam0)
{
	return uParam0->f_23;
}

int func_286(var uParam0)
{
	return uParam0->f_21;
}

int func_287(var uParam0)
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

bool func_288(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_372(iParam0, vParam4, 0.5f))
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

int func_289(int iParam0)
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
	if (func_373(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_290(int iParam0)
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

bool func_291(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_374(iParam1))
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

bool func_292(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_374(iParam1))
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

bool func_293(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_374(iParam1))
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

bool func_294(int iParam0, int iParam1)
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

bool func_295(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_375(iParam0, 1, 0, 0) != 2055893578)
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

bool func_296(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_297(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_298(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_298(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_299(var uParam0)
{
	return uParam0->f_24;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

int func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_294(Global_35, &iVar1))
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
		fVar2 = func_205(iParam0, player_ped_id(), 0, 1);
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
		if (func_205(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_303(int iParam0, var uParam1, bool bParam2)
{
	func_366(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_304(uParam1, iVar0))
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
				if (!bParam2 || !func_304(uParam1, iVar1))
				{
					if (func_298(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_304(var uParam0, int iParam1)
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

int func_305(int iParam0)
{
	if (func_89())
	{
		return 0;
	}
	return func_376((*Global_1347702)[58]->f_15, 1);
}

int func_306(var uParam0)
{
	return uParam0->f_20;
}

int func_307(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_308(int iParam0)
{
	if (!func_88(iParam0))
	{
		return -1;
	}
	return func_361(iParam0);
}

bool func_309(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_377(iParam0))
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
		if (func_378(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_310(int iParam0, var uParam1)
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

void func_311(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_312(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_313(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_379(iParam0, uParam1))
		{
			if (!func_203(uParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_38(uParam2, 0, 0, 1, 0);
				func_229(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_203(uParam1->f_10, 1))
		{
			func_380(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_228(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_314(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_203(iParam4, 32);
		func_152(iParam1, uParam2, 0);
		iVar5 = func_381(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_38(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_203(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_203(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_203(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_203(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_203(iParam4, 8388608) || func_203(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_203(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_203(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_316(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_316(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_203(iParam4, 67108864))
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
				iParam6 = func_382(uParam0);
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
			if (func_203(iParam4, 268435456))
			{
				iVar8 = func_383(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_384(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_316(iParam1, 23))
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
			if (func_203(iParam4, 2) || func_203(iParam4, 16))
			{
				func_315(*uParam0, 1, 1);
			}
			else
			{
				func_315(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_315(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_316(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_317(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_385(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_318(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_386(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_203(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_319(int iParam0)
{
	if (func_203(iParam0, 4))
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
	if (func_203(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_203(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_320(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_387(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_388(Global_35)) || func_389(Global_35)) || func_390(Global_35));
	fVar12 = -1f;
	if (func_47(&(iParam1->f_13)))
	{
		fVar12 = func_49(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_148((*uParam4)[iVar0]->f_6);
		func_391(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_392(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_393(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_38(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_394(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_152(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_395(iParam1, fParam6, iParam1->f_9))
					{
						func_139(&(iParam1->f_18));
						if (bVar6)
						{
							func_394(uParam4, 0, 0);
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
		func_396(iParam1, fParam2);
	}
	return bVar5;
}

void func_321(var uParam0)
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

void func_322(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_397((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_396(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_323(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_398(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_352(iParam1, 0);
				func_152(iParam1, uParam2, func_316(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_324(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_139(&(iParam1->f_18));
			return false;
		}
		else if (func_47(&(iParam1->f_18)))
		{
			func_52(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_47(&(iParam1->f_18)))
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
	return func_140(&(iParam1->f_18), fParam2);
	return true;
}

void func_325(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_391(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_326(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_327()
{
	if (_is_ped_carrying(Global_35) || func_399())
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, bool bParam1)
{
	if (!func_200(iParam0))
	{
		return;
	}
	if (func_208() == iParam0)
	{
		if (bParam1)
		{
			if (func_400(iParam0) != 1)
			{
				func_122(iParam0, 1, 1);
			}
		}
		else if (func_400(iParam0) != func_121(3, 0, 0))
		{
			func_122(iParam0, func_121(3, 0, 0), 1);
		}
	}
}

bool func_329(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

struct<2> func_330(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_331(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_332(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_333(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_334(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

bool func_335(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	return !func_358(iParam0, 4);
}

bool func_336(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_337(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_338(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_339(int iParam0, bool bParam1)
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

bool func_340(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_341(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_401(iParam0);
	}
	else
	{
		func_402(iParam0, iParam1);
	}
	func_403();
}

void func_342(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_343(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_344(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_345(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_346(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_347(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_404(iParam1))
		{
			func_405(iParam0, 41788943);
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
			func_406(iParam0, 0, 1);
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
			func_407(iParam0, 0);
			bVar0 = true;
		}
		func_408(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_348(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_349(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (bParam1)
	{
		func_409(iParam0, 4);
		func_410(iVar0, 1);
		func_411(iVar0, 1);
	}
	else
	{
		func_412(iParam0, 4);
		func_411(iVar0, 0);
	}
}

void func_351(int* iParam0, char* sParam1)
{
	if (func_148(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_349(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_337(iParam0, 1);
}

void func_352(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_353(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_413(1);
	}
}

void func_354(int iParam0)
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
			func_353(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_413(1);
	}
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_356(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_357(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_358(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_359(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_410(iParam0, 1);
	func_411(iParam0, 1);
	func_412(iParam0, 128);
}

bool func_360(int iParam0)
{
	return func_358(iParam0, 2);
}

int func_361(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_414(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_362(int iParam0, int iParam1, bool bParam2)
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

bool func_363(int iParam0, int iParam1)
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

bool func_364()
{
	if (func_415())
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

void func_365(var uParam0, var uParam1)
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

bool func_366(bool bParam0, int iParam1, int iParam2)
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

int func_367(var uParam0)
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

void func_368(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_228(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_229(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_369(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_370(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_371(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_371(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_372(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_373(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_374(int iParam0)
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

int func_375(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_376(int iParam0, bool bParam1)
{
	switch (func_308(iParam0))
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

bool func_377(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_416(), 1))
	{
		return true;
	}
	return false;
}

int func_378(int iParam0, bool bParam1)
{
	return func_417(iParam0, Global_1894899->f_2, bParam1);
}

bool func_379(int iParam0, var uParam1)
{
	if (uParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_418((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_380(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_397((*uParam0)[iVar0]))
		{
			func_237((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_381(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_419(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_148((*uParam2)[iVar0]->f_6))
		{
			func_237((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_382(var uParam0)
{
	iVar0 = func_420(*uParam0);
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

int func_383(var uParam0, int iParam1)
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

void func_384(int* iParam0, int* iParam1)
{
	if (!func_316(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_237(iParam1, 19);
			func_352(iParam0, 23);
			func_421(iParam1, 2);
		}
	}
}

bool func_385(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_422(16))
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
					func_423(16);
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

void func_386(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_419(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_387(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_388(int iParam0)
{
	return (func_424(iParam0, 4) || func_424(iParam0, 5));
}

int func_389(int iParam0)
{
	return func_424(iParam0, 7);
}

int func_390(int iParam0)
{
	return func_424(iParam0, 6);
}

void func_391(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_397(iParam1))
		{
			clear_bit(iParam1, 14);
			func_419(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_392(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_425(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_335(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_350(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_350(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_426(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_393(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_250(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_427(iParam1, 1))
	{
		func_428(iParam1, 1);
		return true;
	}
	return false;
}

void func_394(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_215((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_395(int* iParam0, float fParam1, bool bParam2)
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

void func_396(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_397(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_398(int iParam0)
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

bool func_399()
{
	if (func_429(Global_35) || func_430(Global_35))
	{
		return true;
	}
	return false;
}

int func_400(int iParam0)
{
	return Local_14[iParam0]->f_56;
}

int func_401(int iParam0)
{
	iVar0 = func_414(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_431(iVar0);
}

int func_402(int iParam0, int iParam1)
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
			func_432(iVar2);
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

void func_403()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_404(int iParam0)
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

void func_405(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_433(iParam0, iParam1))
		{
			if (func_434(iParam0, iParam1))
			{
				if (func_435(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_436(iParam0);
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

void func_406(int iParam0, int iParam1, bool bParam2)
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

void func_407(int iParam0, bool bParam1)
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

void func_408(int iParam0, bool bParam1)
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

void func_409(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_410(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_358(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_411(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_412(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		func_229(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_228(&(Global_40.f_12019.f_42), 1);
	}
}

int func_414(int iParam0)
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

bool func_415()
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

int func_416()
{
	return get_player_group(get_player_index());
}

int func_417(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_437(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_438(iParam0, iVar0, iVar1, bParam2);
}

int func_418(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_419(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_148(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_149(&(iParam1->f_6), 0, 1);
	}
	if (!func_148(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_397(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_439(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_148(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_426(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_248(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_440(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_348(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_248(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_350(iParam1->f_6, 0, 1);
				}
				else
				{
					func_350(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_420(int iParam0)
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

void func_421(int* iParam0, int iParam1)
{
	if (!func_336(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_237(iParam0, 14);
		}
	}
}

bool func_422(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_423(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_424(int iParam0, int iParam1)
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

bool func_425(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_148(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	func_248(iParam0, 18, 0, 1);
	func_248(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_427(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_255(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_428(int iParam0, bool bParam1)
{
	if (bParam1 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_429(int iParam0)
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
		iVar2 = func_441(iVar9);
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

int func_430(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = func_442();
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

int func_431(int iParam0)
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

int func_432(int iParam0)
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

bool func_433(int iParam0, int iParam1)
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

bool func_434(int iParam0, int iParam1)
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

bool func_435(int iParam0, int iParam1)
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
	if (!func_433(iParam0, iVar0))
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

void func_436(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_437(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_201() != -1;
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

int func_438(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_443(iVar2) != 0 && _0x800df3fc913355f3(func_444(iVar2)))
		{
			if (func_444(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_439(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_358(iVar0, 2))
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
				func_359(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_440(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_148(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_441(int iParam0)
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

int func_442()
{
	return Global_1900383->f_393;
}

int func_443(int iParam0)
{
	if (!func_445(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_444(int iParam0)
{
	if (!func_445(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_445(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

