void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_27 = 3f;
	fLocal_42 = 33.6376f;
	sLocal_43 = "script@common@cnv_camp@mini_games@poker_dynamic@intro";
	if (has_force_cleanup_occurred(555))
	{
		func_1();
		terminate_this_thread();
	}
	while (!func_2())
	{
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	func_3(2);
	if (func_4(iLocal_14))
	{
		func_5(&iLocal_14, 1, 1);
	}
	if (does_blip_exist(iLocal_31))
	{
		remove_blip(&iLocal_31);
	}
	if (does_cam_exist(iLocal_38))
	{
		destroy_cam(iLocal_38, false);
	}
	if (_does_anim_scene_exist(iLocal_44))
	{
		reset_anim_scene(iLocal_44, 0);
		remove_anim_scene_entity(iLocal_44, "PLAYER", Global_35);
		_delete_anim_scene(iLocal_44);
	}
	if (bLocal_34)
	{
		set_player_control(player_id(), true, 0, false);
	}
	if (_does_volume_exist(iLocal_32))
	{
		remove_scenario_blocking_area(uLocal_33, false);
		_delete_volume(iLocal_32);
	}
}

bool func_2()
{
	switch (iLocal_37)
	{
		case 0:
			if (func_6())
			{
				iLocal_37 = 1;
			}
			break;
		case 1:
			if (func_7(vLocal_23, 6f, 4, 1))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			iVar1 = get_clock_hours();
			if ((!func_9(func_8()) || func_10(2, 0, 1)) || !(iVar1 < 2 || iVar1 > 10))
			{
				return true;
			}
			if (func_11() != 1)
			{
				return true;
			}
			if (((((bVar0 && !_is_ped_carrying(Global_35)) && func_12(0)) && !Global_1327590->f_19745) && !is_ped_active_in_scenario(Global_35, 1)) && !(get_current_ped_weapon(Global_35, &iVar2, true, 0, true) && (iVar2 == -1016714371 || iVar2 == -160924582)))
			{
				if (!does_blip_exist(iLocal_31))
				{
					iLocal_31 = _blip_add_for_coord(-678244495, vLocal_23);
					set_blip_sprite(iLocal_31, 1243830185, true);
					func_13(iLocal_31, func_8());
					iVar3 = func_14(-1341684320);
					if (iVar3 != 0)
					{
						set_blip_flash_timer(iLocal_31, iVar3, -1);
					}
				}
				else
				{
					_set_blip_flash_style(iLocal_31, 724623647);
				}
				if (!func_4(iLocal_14))
				{
					iLocal_14 = func_16(func_15(-1341684320), -473983589, vLocal_23, fLocal_27, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
				}
				else
				{
					func_17(iLocal_14, 1, 1);
					if (func_18(171))
					{
						func_19(171);
					}
				}
			}
			else
			{
				if (does_blip_exist(iLocal_31))
				{
					_blip_set_modifier(iLocal_31, 724623647);
				}
				if (func_4(iLocal_14))
				{
					func_17(iLocal_14, 0, 1);
				}
				if (func_20(iLocal_14, 1))
				{
					if (!func_21(171))
					{
						func_22(171, 0);
					}
				}
				return false;
			}
			if (func_23(iLocal_14, 1))
			{
				if (func_4(iLocal_14))
				{
					func_5(&iLocal_14, 1, 1);
				}
				if (!_does_volume_exist(iLocal_32))
				{
					iLocal_32 = _create_volume_sphere(vLocal_23, 0f, 0f, 0f, 4f, 4f, 4f);
					uLocal_33 = _0x4c39c95ae5db1329(iLocal_32, 0, 15);
				}
				if (does_blip_exist(iLocal_31))
				{
					remove_blip(&iLocal_31);
				}
				if (!does_cam_exist(iLocal_38))
				{
					vLocal_39 = { func_25(func_24()) };
					vLocal_39.f_2 = (vLocal_39.z + 1.1f);
					iLocal_38 = create_camera_with_params(26379945, vLocal_39, 0f, 0f, 0f, fLocal_42, false, 2);
				}
				bLocal_34 = true;
				func_26(4);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				iLocal_37 = 2;
			}
			break;
		case 2:
			if (!func_27(&uLocal_28))
			{
				func_28(&uLocal_28);
			}
			else
			{
				set_player_control(player_id(), false, 0, false);
				if (_is_anim_scene_loaded(iLocal_44, true, false))
				{
					if (_0x23e33cb9f4a3f547(iLocal_44, "PL_INTRO"))
					{
						vVar4 = { Global_36 };
						vVar4.f_2 = (vVar4.z + 1f);
						set_anim_scene_entity(iLocal_44, "PLAYER", Global_35, 0);
						set_anim_scene_origin(iLocal_44, vVar4, 0f, 0f, 0f, 2);
						clear_ped_tasks_immediately(Global_35, false, true);
						start_anim_scene(iLocal_44);
						func_29(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_POKER", -1454469014, 0, 1, 0, 0, 1);
						func_30(2, iLocal_44);
						func_31(vLocal_23, 4f, 0);
						iVar7 = func_32(vLocal_23, 1134972004, 4f, 1);
						if (does_entity_exist(iVar7))
						{
							delete_object(&iVar7);
						}
						iVar7 = func_32(vLocal_23, 587066646, 4f, 1);
						if (does_entity_exist(iVar7))
						{
							delete_object(&iVar7);
						}
						func_33(&iLocal_32, 0);
						iLocal_37 = 3;
					}
					else
					{
						_0xdf7b5144e25cd3fe(iLocal_44, "PL_INTRO");
					}
				}
			}
			break;
		case 3:
			if (func_34(24, func_8(), vLocal_23, fLocal_26, 100, &iLocal_15, 0, 1, 0))
			{
				func_35(&uLocal_28, 1);
				set_player_control(player_id(), true, 0, false);
				iVar8 = 0;
				while (iVar8 < 27)
				{
					if (func_36(iVar8) && !func_38(func_37(iVar8), &iLocal_15))
					{
						add_entity_to_audio_mix_group(func_37(iVar8), "Minigame_Non_Participant_Ped_group", 0f);
					}
					iVar8++;
				}
				iLocal_37 = 4;
			}
			break;
		case 4:
			_pause_clock_this_frame(true);
			if (!bLocal_36)
			{
				if (!is_any_speech_playing(Global_35))
				{
					if (func_29(&(iLocal_15[2]), "MINIGAME_COMPANION_CALLOVER_RESPONSE", -1932641429, Global_35, 1, 0, 0, 1))
					{
						bLocal_36 = true;
					}
				}
			}
			if (!_is_anim_scene_started(iLocal_44, false))
			{
				if (!bLocal_35)
				{
					bLocal_35 = true;
					reset_anim_scene(iLocal_44, 0);
					remove_anim_scene_entity(iLocal_44, "PLAYER", Global_35);
					_delete_anim_scene(iLocal_44);
				}
			}
			if (!func_39(24))
			{
				remove_scenario_blocking_area(uLocal_33, false);
				_delete_volume(iLocal_32);
				iLocal_37 = 5;
			}
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < 27)
			{
				if (func_36(iVar9) && !func_38(func_37(iVar9), &iLocal_15))
				{
					remove_entity_from_audio_mix_group(func_37(iVar9), 0f);
				}
				iVar9++;
			}
			iVar10 = 0;
			while (iVar10 < 6)
			{
				iLocal_15[iVar10] = func_40();
				iVar10++;
			}
			iLocal_22 = 0;
			func_28(&uLocal_28);
			func_41(24, 1);
			iLocal_37 = 6;
			break;
		case 6:
			if (!_is_anim_scene_started(iLocal_44, false))
			{
				if (func_42(&uLocal_28, 90f))
				{
					func_43(&uLocal_28);
					iLocal_37 = 7;
				}
			}
			break;
		case 7:
			iLocal_37 = 0;
			break;
	}
	return false;
}

void func_3(int iParam0)
{
	if (func_44() != -1)
	{
		return;
	}
	func_45(iParam0, 1);
}

bool func_4(int iParam0)
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

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_4(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_46(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_47(iVar0);
	*iParam0 = 0;
}

bool func_6()
{
	if (!func_48(player_ped_id(), 0))
	{
		return false;
	}
	iLocal_44 = _create_anim_scene(sLocal_43, 0, "PL_INTRO", false, true);
	if (_does_anim_scene_exist(iLocal_44))
	{
		load_anim_scene(iLocal_44);
	}
	vLocal_23 = { func_25(func_24()) };
	fLocal_26 = func_49(func_24());
	return true;
}

bool func_7(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_50(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return _0x51e52c9687fcdeec(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

int func_8()
{
	return Global_40.f_4283.f_1;
}

bool func_9(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	return func_52(iParam0, 8);
}

bool func_10(int iParam0, bool bParam1, bool bParam2)
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
		if (func_53())
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
		iVar0 = func_54(&(Global_1898164->f_1[0]));
		if (func_55(iVar0) && func_56((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_57(&(Global_1898164->f_1[0])))
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

int func_11()
{
	return Global_40.f_4283.f_4;
}

bool func_12(int iParam0)
{
	if (func_7(func_58(iParam0, func_24()), 6f, 4, 1))
	{
		return false;
	}
	if (func_59(&(Global_1391438->f_5), 2048))
	{
		return false;
	}
	if (func_60(iParam0) == 0)
	{
		return false;
	}
	iVar0 = func_24();
	if (iVar0 == 3 && !func_61(28))
	{
		return false;
	}
	switch (iVar0)
	{
		case 1:
			if (func_62(180573150, 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_62(-404697685, 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		return false;
	}
	iVar2 = get_clock_hours();
	if (iVar2 >= 17 && iVar2 < 21)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (func_59(&(Global_1391438->f_5), 256))
			{
				return false;
			}
			if (!func_63(-1341684320))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 10))
			{
				return false;
			}
			if (func_64(-1341684320))
			{
				return false;
			}
			break;
		case 1:
			if (func_65(2038046186) == 0 && func_24() == 2)
			{
				return false;
			}
			if (func_59(&(Global_1391438->f_5), 512))
			{
				return false;
			}
			if (func_62(-558867971, 1))
			{
				return false;
			}
			if (!func_63(-1567081107))
			{
				return false;
			}
			if (!(iVar2 > 6 && iVar2 < 20))
			{
				return false;
			}
			if (func_64(-1567081107))
			{
				return false;
			}
			break;
		case 2:
			if (!(func_65(-103573613) || func_65(194099983)) && func_24() < 2)
			{
				return false;
			}
			if (func_59(&(Global_1391438->f_5), 1024))
			{
				return false;
			}
			if (!func_63(-1511391406))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 20))
			{
				return false;
			}
			if (func_64(-1511391406))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_13(int iParam0, int iParam1)
{
	if (func_51(iParam1))
	{
		if (func_66(Global_1934051->f_33))
		{
			iVar0 = func_67(iParam1);
			if (iVar0 != 0)
			{
				_blip_set_modifier(iParam0, iVar0);
			}
		}
	}
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case -1511391406:
			return 73;
		case -1341684320:
			return 72;
		case -1567081107:
			return 74;
		case 1784895540:
			return 75;
		case 654481153:
			return 76;
		case 565221344:
			return 78;
		case -919476462:
			return 77;
		case -1670940721:
			return 79;
		case 754620122:
			return 81;
		default:
			break;
	}
	return 0;
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
		case 654481153:
			return "ACT_FISHING_PROMPT";
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
		case -2036347356:
			return "ACT_POKER_PROMPT";
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
		case -919476462:
			return "ACT_COACH_PROMPT";
		case -1670940721:
			return "ACT_BANK_PROMPT";
		case 380107708:
			return "ACT_TRAIN_PROMPT";
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
		case -1739349092:
			return "ACT_RETURN_PROMPT";
		case -301635006:
			return "ACT_MISSION_PROMPT";
		default:
			break;
	}
	return "ACT_INVALID_PROMPT";
}

int func_16(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_50(vParam2))
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
		if (func_68(iVar0, 2))
		{
			if (func_69(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_70(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_17(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_4(iParam0))
	{
		return;
	}
	iVar0 = func_46(iParam0);
	if (bParam1)
	{
		func_71(iParam0, 4);
		func_72(iVar0, 1);
		func_73(iVar0, 1);
	}
	else
	{
		func_74(iParam0, 4);
		func_73(iVar0, 0);
	}
}

bool func_18(int iParam0)
{
	func_75(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_19(int iParam0)
{
	func_75(iParam0, &iVar0, &iVar1);
	func_76(iVar0, iVar1);
}

bool func_20(int iParam0, bool bParam1)
{
	if (bParam1 && !func_4(iParam0))
	{
		return false;
	}
	iVar0 = func_46(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

bool func_21(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_44() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_22(int iParam0, bool bParam1)
{
	func_75(iParam0, &iVar0, &iVar1);
	if (!func_77(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_78(iVar0, iVar1);
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1 && !func_4(iParam0))
	{
		return false;
	}
	iVar0 = func_46(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_24()
{
	return Global_40.f_4283;
}

Vector3 func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -138.7686f, -27.4923f, 95.0878f;
		case 2:
			return 663.2041f, -1266.61f, 42.8666f;
		case 3:
			return 1871.706f, -1863.183f, 41.8185f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_26(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (iLocal_22 >= 3)
		{
		}
		else
		{
			if (func_79(iVar0))
			{
				iLocal_15[func_80(iLocal_22)] = func_37(iVar0);
				func_81(iVar0, 2, 1, -1);
				iLocal_22++;
			}
			iVar0++;
		}
	}
	iLocal_15[0] = Global_35;
	return 1;
}

bool func_27(var uParam0)
{
	return func_82(*uParam0, 1);
}

void func_28(var uParam0)
{
	func_83(uParam0, 0f);
}

bool func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_84(iParam0, &Var0);
}

void func_30(int iParam0, int iParam1)
{
	Global_1899528->f_61.f_4 = iParam1;
}

void func_31(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_32(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	fVar2 = (fParam4 * 2f);
	func_85(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	if (!_does_volume_exist(iVar0))
	{
		return 0;
	}
	iVar5 = create_itemset(true);
	iVar3 = _0x886171a12f400b89(iVar0, iVar5, 3);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar4, iVar5));
		if (!is_entity_dead(iVar1))
		{
			if (get_entity_model(iVar1) == iParam3)
			{
				destroy_itemset(iVar5);
				func_86(iVar0);
				if (bParam5)
				{
					if (!does_entity_belong_to_this_script(iVar1, true))
					{
						set_entity_as_mission_entity(iVar1, true, true);
					}
				}
				return iVar1;
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar5);
	func_86(iVar0);
	return 0;
}

void func_33(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_87(iVar0, &iParam1))
		{
		}
		else if (func_36(iVar0) && !func_88(iVar0))
		{
			if (is_entity_in_volume(func_37(iVar0), *iParam0, true, 0))
			{
				clear_ped_tasks_immediately(func_37(iVar0), false, true);
				_0xd4b614179bcd0654(func_89(iVar0, 0));
				_0x631cd2d77fdc0316(func_89(iVar0, 0));
			}
		}
		iVar0++;
	}
}

bool func_34(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	func_90(iParam0, &vVar4, 1);
	vVar4.f_2 = iParam1;
	if (vVar4.y == -1)
	{
		return false;
	}
	iVar14 = func_91(vVar4.y, 1);
	request_script_with_name_hash(iVar14);
	if (has_script_with_name_hash_loaded(iVar14))
	{
		if (!func_92(vVar4.y))
		{
			func_93(vVar4.y);
		}
		iVar1 = func_94(&vVar4, 0, iParam10);
		if (iVar1 == -1)
		{
			return false;
		}
		(*Global_1392915)[iVar1]->f_2 = iParam1;
		(*Global_1392915)[iVar1]->f_6 = { vParam2 };
		(*Global_1392915)[iVar1]->f_9 = fParam5;
		(*Global_1392915)[iVar1]->f_10 = iParam6;
		iVar0 = (*Global_1392915)[iVar1]->f_4;
		if (func_95(iVar0) || (!func_96(iVar0) && func_97(0) != iVar0))
		{
			iVar2 = func_98(iVar0);
			if (iVar2 == -1)
			{
				func_99(iVar0);
			}
		}
		if (func_96(iVar0))
		{
			func_100(iVar0);
		}
		if (_get_number_of_references_of_script_with_name_hash(iVar14) > 0)
		{
			if (iParam8 == 1)
			{
				func_101(vVar4.y, 0);
			}
			return true;
		}
		Var15 = -1;
		Var15.f_1 = -1;
		Var15.f_2 = -1;
		Var15.f_4 = -1;
		Var15.f_11 = -1;
		Var15.f_12 = -1;
		Var15.f_23 = 6;
		Var15.f_30 = -1;
		Var15.f_31 = 255;
		if (*iParam7 > Var15.f_23)
		{
			return false;
		}
		iVar3 = 0;
		while (iVar3 < Var15.f_23)
		{
			Var15.f_23[iVar3] = 0;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < *iParam7)
		{
			Var15.f_23[iVar3] = iParam7[iVar3];
			iVar3++;
		}
		Var15.f_13 = iParam9;
		if (func_102(iParam0, &Var15, &uVar49, 0, 1))
		{
			if (iParam8 == 1)
			{
				func_101(vVar4.y, 0);
			}
			return true;
		}
	}
	return false;
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1 || !func_27(uParam0))
	{
		func_28(uParam0);
	}
}

bool func_36(int iParam0)
{
	if (func_103(iParam0))
	{
		if (func_48(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_37(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_38(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_39(int iParam0)
{
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_107(func_106(iVar0)))
	{
		return true;
	}
	return false;
}

int func_40()
{
	return -1;
}

int func_41(int iParam0, bool bParam1)
{
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_108(iParam0, 1);
	func_109(iVar0);
	if (bParam1)
	{
		func_110(Global_1899778, iVar0);
	}
	func_111(iVar0);
	return 1;
}

bool func_42(var uParam0, float fParam1)
{
	if (func_112(uParam0, fParam1))
	{
		func_43(uParam0);
		return true;
	}
	return false;
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_44()
{
	return Global_1572887->f_12;
}

void func_45(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_113(iVar0) == iParam0)
		{
			iVar1 = func_114(iVar0);
			func_108(iVar1, 1);
			func_109(iVar0);
			if (bParam1)
			{
				func_110(Global_1899778, iVar0);
			}
			func_111(iVar0);
		}
		iVar0++;
	}
}

int func_46(int iParam0)
{
	return iParam0;
}

void func_47(int iParam0)
{
	if (!func_115(iParam0))
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

bool func_48(int iParam0, int iParam1)
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
	if (func_116(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_116(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_116(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_116(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_116(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_116(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_116(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_116(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_49(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f;
		case 2:
			return -50.6f;
		case 3:
			return -80f;
		default:
			break;
	}
	return 0f;
}

bool func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_51(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_52(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_53()
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

int func_54(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_118(func_117(iParam0));
}

bool func_55(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_57(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

Vector3 func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_25(iParam1);
		case 1:
		case 2:
			return func_119(iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_59(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((((((func_120(21, 1, 1) && !func_62(1863892775, 1)) || func_120(17, 1, 1)) || func_120(19, 1, 1)) || func_120(9, 1, 1)) || (func_120(1, 1, 1) && !func_62(627421591, 1))) || func_120(18, 1, 1)) || func_120(4, 1, 1))
			{
				return 1;
			}
			break;
		case 1:
			if ((((func_120(22, 1, 1) || func_120(15, 1, 1)) || func_120(13, 1, 1)) || func_120(17, 1, 1)) || func_120(5, 1, 1))
			{
				return 1;
			}
			break;
		case 2:
			if (((func_120(2, 1, 1) || func_120(6, 1, 1)) || func_120(9, 1, 1)) || (func_120(11, 1, 1) && func_121((*Global_1347702)[134]->f_15, 1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_61(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_121((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_122(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_63(int iParam0)
{
	switch (iParam0)
	{
		case 654481153:
			if (!func_123() || !func_61(16))
			{
				return false;
			}
			return true;
		case 1784895540:
			if (!func_61(15))
			{
				return false;
			}
			return true;
		case -2036347356:
		case -1567081107:
		case -1511391406:
		case -1341684320:
			return func_92(func_124(iParam0));
		case -919476462:
			return func_125(3);
		default:
			break;
	}
	return true;
}

bool func_64(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1391438->f_7[iVar0]->f_8 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_65(int iParam0)
{
	iVar0 = func_126(func_24(), iParam0);
	return func_127(iVar0) > 0;
}

bool func_66(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 38:
			return 417546980;
		case 69:
			return -117334654;
		case 76:
			return -357010019;
		case 78:
			return 719613628;
		case 92:
			return 1459616333;
		case 105:
			return 1607757565;
		case 115:
			return -161326102;
		case 120:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_69(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_70(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_72(iParam0, 1);
	func_73(iParam0, 1);
	func_74(iParam0, 128);
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_72(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_68(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_74(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_76(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_77(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_128(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_129(iParam0))
	{
		return false;
	}
	if (func_130(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_131(iParam0, 1)) || func_132(32768))
	{
		if (!func_131(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_133())
	{
		return false;
	}
	return true;
}

void func_78(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_79(int iParam0)
{
	if (!func_120(iParam0, 1, 1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 21:
			if (func_62(1863892775, 1) == 0)
			{
				return true;
			}
			break;
		case 1:
		case 4:
		case 9:
		case 17:
		case 18:
		case 19:
			return true;
	}
	return false;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_81(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_134(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 || iParam1);
		(*Global_1360165)[iParam0]->f_142 = &Global_1899515;
		func_135(&((*Global_1360165)[iParam0]->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_83(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_136() - fParam1);
	func_137(uParam0, 1);
	func_138(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_84(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_85(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_139());
	}
}

void func_86(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	iVar0 = func_140(iParam0);
	return (*iParam1 && iVar0) != 0;
}

bool func_88(int iParam0)
{
	return func_141(iParam0, 16, 1);
}

int func_89(int iParam0, bool bParam1)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_142(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

int func_90(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = get_random_int_in_range(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return 19547436;
	}
	switch (iParam0)
	{
		case 2:
			return 19547436;
		case 0:
			return 648454729;
		case 1:
			return 639632500;
		case 3:
			return 504839342;
		case 4:
			return 1221273613;
		case 5:
			return 1966390672;
		case 6:
			return -761450110;
		default:
			break;
	}
	return 0;
}

bool func_92(int iParam0)
{
	if (!func_143(iParam0))
	{
		return false;
	}
	return (!func_144() || is_bit_set(Global_40.f_7854, iParam0));
}

void func_93(int iParam0)
{
	if (!func_143(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_7854), iParam0);
}

int func_94(var uParam0, bool bParam1, int iParam2)
{
	if (func_44() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_145())
	{
		return -1;
	}
	if (!func_92(uParam0->f_1))
	{
		return -1;
	}
	if (func_146(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_105(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_147(&iVar2))
		{
			return -1;
		}
	}
	func_148(*uParam0, iVar2);
	bVar1 = func_149(uParam0->f_1, 131072);
	func_150(uParam0->f_1);
	iVar3 = func_151(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2] = *uParam0;
	(*Global_1392915)[iVar2]->f_1 = uParam0->f_1;
	(*Global_1392915)[iVar2]->f_2 = uParam0->f_2;
	(*Global_1392915)[iVar2]->f_3 = uParam0->f_3;
	(*Global_1392915)[iVar2]->f_4 = iVar3;
	(*Global_1392915)[iVar2]->f_5 = uParam0->f_9;
	(*Global_1392915)[iVar2]->f_6 = { uParam0->f_5 };
	(*Global_1392915)[iVar2]->f_9 = uParam0->f_8;
	(*Global_1392915)[iVar2]->f_10 = floor(uParam0->f_4);
	(*Global_1392915)[iVar2]->f_11 = iVar2;
	Global_1392915->f_121[iVar2] = 0;
	Global_1392915->f_121[iVar2]->f_2 = bParam1;
	Global_1392915->f_121[iVar2]->f_17 = iParam2;
	Global_1392915->f_121[iVar2]->f_1 = 0;
	Global_1392915->f_121[iVar2]->f_6 = 0;
	Global_1392915->f_121[iVar2]->f_12 = get_interior_at_coords(uParam0->f_5);
	Global_1392915->f_121[iVar2]->f_16 = 0;
	if (Global_1392915->f_121[iVar2]->f_12 != 0)
	{
		Global_1392915->f_121[iVar2]->f_9 = { _get_interior_position(Global_1392915->f_121[iVar2]->f_12) };
	}
	else
	{
		Global_1392915->f_121[iVar2]->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_152(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_152(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_152(uParam0->f_1, 131072);
	}
	if (func_95(iVar3) || (!func_96(iVar3) && func_97(0) != iVar3))
	{
		iVar0 = func_98(iVar3);
		if (iVar0 == -1)
		{
			func_99(iVar3);
		}
	}
	return iVar2;
}

bool func_95(int iParam0)
{
	return func_153(iParam0) == 0;
}

bool func_96(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_154(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_97(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_98(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_99(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_95(iParam0))
	{
		return -1;
	}
	if (func_44() != -1)
	{
		iVar2 = func_98(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_156(iVar1, 1);
			func_155(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_98(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_57(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_156(iVar0, 1);
					func_155(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_100(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_96(iParam0))
	{
		return;
	}
	func_157(iParam0, 2);
}

void func_101(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (func_149(iParam0, 2))
		{
			func_152(iParam0, 4);
			func_158(iParam0, 2);
		}
	}
	else
	{
		func_152(iParam0, 2);
	}
}

bool func_102(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar1 = func_105(iParam0);
	if (iVar1 == -1)
	{
		return false;
	}
	iVar4 = func_113(iVar1);
	if (iVar4 == -1)
	{
		return false;
	}
	iVar5 = func_91(iVar4, iParam4);
	disable_control_action(2, 782960533, true);
	set_ped_reset_flag(Global_35, 219, true);
	set_ped_reset_flag(Global_35, 220, true);
	set_ped_reset_flag(Global_35, 264, true);
	if (has_script_with_name_hash_loaded(iVar5))
	{
		func_150(iVar4);
		if (Global_1392915->f_121[iVar1]->f_2)
		{
			func_152(iVar4, 65536);
		}
		*uParam1 = { *(*Global_1392915)[iVar1] };
		uParam1->f_11 = iVar1;
		uParam1->f_12 = iVar4;
		uParam1->f_14 = { uParam1->f_6 };
		uParam1->f_17 = uParam1->f_9;
		uParam1->f_18 = to_float(uParam1->f_10);
		if (iParam3 == 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_23)
			{
				if (func_159(iVar4, uParam1->f_14, uParam1->f_17, iVar0, &iVar2, 0, 0))
				{
					uParam1->f_23[iVar0] = iVar2;
					if (iVar2 == Global_35)
					{
						uParam1->f_30 = iVar0;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_23)
		{
			if (!is_entity_dead(&(uParam1->f_23[iVar0])))
			{
				if (&uParam1->f_23[iVar0] == Global_35)
				{
					uParam1->f_30 = iVar0;
				}
			}
			iVar0++;
		}
		if (iParam0 == 0)
		{
			func_160(23, 1);
		}
		_hide_ped_weapons(player_ped_id(), 2, false);
		if (uParam1->f_12 != 5 && uParam1->f_12 != 6)
		{
			_hide_hud_component(372886907);
		}
		*uParam2 = start_new_script_with_name_hash_and_args(iVar5, uParam1, 34, 6500);
		func_161();
		func_162();
		func_163((*Global_1392915)[iVar1]->f_4, 1, 0);
		Global_1899528->f_45[iVar4] = func_164();
		func_135(Global_1899528->f_45[iVar4], 0, 0, &(Global_1899528->f_53[iVar4]), 0, 0, 0, 0);
		func_165(iVar1);
		func_166(-1, 0, 0, 0, 0);
		if (func_167(iVar4, &uVar3))
		{
			func_168(uVar3);
		}
		set_script_with_name_hash_as_no_longer_needed(iVar5);
		return true;
	}
	return false;
}

bool func_103(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_104(int iParam0)
{
	return iParam0 > -1;
}

int func_105(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_106(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_4;
}

bool func_107(int iParam0)
{
	iVar0 = func_153(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_108(int iParam0, int iParam1)
{
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_113(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_169(iParam0))
	{
		return 1;
	}
	func_170(iParam0);
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_7))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_7);
	}
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_8))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_8);
	}
	Global_1392915->f_121[iVar0]->f_1 = 0;
	func_165(iVar0);
	iVar2 = func_98((*Global_1392915)[iVar0]->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_171((*Global_1392915)[iVar0]->f_4);
		}
		if (does_blip_exist(Global_1898346[iVar2]))
		{
			remove_blip((*Global_1898346)[iVar2]);
		}
		func_172(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0];
	if (func_173(iParam0))
	{
		return;
	}
	if (func_57((*Global_1392915)[iParam0]->f_4))
	{
		func_174((*Global_1392915)[iParam0]->f_4, 1, 2);
	}
	(*Global_1392915)[iParam0]->f_1 = -1;
	func_148(iVar0, -1);
}

void func_110(var uParam0, int iParam1)
{
	iVar0 = Global_1392915[iParam1];
	if (!func_175(iVar0))
	{
		return;
	}
	if (func_66(&(uParam0->f_34[iVar0])))
	{
		func_176(uParam0->f_34[iVar0], 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_111(int iParam0)
{
	func_177((*Global_1392915)[iParam0]);
	func_178(Global_1392915->f_121[iParam0]);
}

bool func_112(var uParam0, float fParam1)
{
	if (!func_27(uParam0))
	{
		return false;
	}
	if (func_179(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_113(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

int func_114(int iParam0)
{
	return Global_1392915[iParam0];
}

bool func_115(int iParam0)
{
	return func_68(iParam0, 2);
}

bool func_116(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_117(int iParam0)
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

int func_118(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

Vector3 func_119(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -118.119f, -27.6134f, 94.804f;
		case 2:
			return 665.5017f, -1243.862f, 43.143f;
		case 3:
			return 1881.669f, -1874.046f, 41.8096f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_120(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_180(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_48(func_37(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_181(iParam0, 1, 0))
	{
		return false;
	}
	if (func_180(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_121(int iParam0, bool bParam1)
{
	switch (func_153(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_122(int iParam0)
{
	func_182(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_123()
{
	return has_ped_got_weapon(Global_35, -1415022764, 0, false);
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
		case -1567081107:
			return 1;
		case -1511391406:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_125(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	if (func_44() == 0)
	{
		return true;
	}
	return (!func_144() || is_bit_set(Global_40.f_7856, iParam0));
}

int func_126(int iParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_185(0, func_184(iParam1, 1), 11, 2116153146);
	}
	return func_185(0, func_184(iParam1, 1), 11, iParam1);
}

int func_127(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return shift_right(func_186(iParam0) & 2147418112, 16);
}

bool func_128(int iParam0, int iParam1)
{
	if (func_44() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_129(int iParam0)
{
	if (func_44() != -1)
	{
		if (func_131(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_131(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_130(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_131(iParam0, 65536) && !func_131(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_131(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_131(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_131(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_132(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_133()
{
	return Global_1905944->f_5694;
}

bool func_134(int iParam0, int iParam1, bool bParam2)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (!func_187(iParam0))
	{
		return false;
	}
	if (func_188(iParam0, -2147483648))
	{
		return true;
	}
	if (func_188(iParam0, 1073741824))
	{
		return true;
	}
	iVar0 = func_189(iParam1);
	if (iVar0 < (*Global_1360165)[iParam0]->f_22)
	{
		return true;
	}
	if (iVar0 == (*Global_1360165)[iParam0]->f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_188(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_190(*uParam0);
	iVar1 = func_191(*uParam0);
	iVar2 = func_192(*uParam0);
	iVar3 = func_193(*uParam0);
	iVar4 = func_194(*uParam0);
	iVar5 = func_195(*uParam0);
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
	iVar6 = func_196(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_196(iVar1, iVar0);
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
	func_197(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
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

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_139()
{
	return "unnamed";
}

int func_140(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_141(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_104(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_142(int iParam0)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_198(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

bool func_143(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_144()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_145()
{
	return Global_1894899->f_2;
}

bool func_146(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	return func_52(iParam0, 33554432);
}

bool func_147(int iParam0)
{
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_173(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_148(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_149(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_150(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_151(int iParam0, int iParam1)
{
	return func_185(iParam0, iParam1, 4, get_hash_key(func_199(iParam1)));
}

void func_152(int iParam0, int iParam1)
{
	if (!func_149(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

int func_153(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_154(iParam0);
}

int func_154(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_200(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_155(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_95(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_201(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_201(iParam0)))
		{
			_0xca41e86545413b5b(func_202(iParam0), func_54(iParam0), func_203(iParam0), func_201(iParam0), Global_36);
		}
	}
	func_157(iParam0, 1);
	bParam1 = bParam1;
}

void func_156(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_117(Global_1898330[iParam0]);
		func_204((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_157(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_205(iParam0, iParam1);
}

void func_158(int iParam0, int iParam1)
{
	if (func_149(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

bool func_159(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	fVar8 = (0.25f * 2f);
	if (!func_206(iParam0, vParam1, uParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = create_itemset(true);
	if (!is_itemset_valid(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_207(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = _0x886171a12f400b89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar7, iVar4));
		if (func_208(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !is_ped_a_player(iVar3)))
			{
				func_86(iVar5);
				_0x20a4bf0e09bee146(iVar4);
				destroy_itemset(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	func_86(iVar5);
	_0x20a4bf0e09bee146(iVar4);
	destroy_itemset(iVar4);
	return false;
}

void func_160(int iParam0, int iParam1)
{
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_113(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	Global_1392915->f_121[iVar0]->f_19 = iParam1;
}

void func_161()
{
	Global_1899528->f_2 = 0;
}

void func_162()
{
	if (Global_1899528->f_202 != 0)
	{
		if (Global_1899528->f_202 == _0xc17f69e1418cd11f(1))
		{
			func_209(1);
		}
		Global_1899528->f_202 = 0;
		Global_1899528->f_203 = 0;
	}
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_96(iParam0))
	{
		return;
	}
	iVar0 = func_202(iParam0);
	if (bParam1)
	{
		if (func_201(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_201(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_210(func_54(iParam0));
			}
			if (func_44() != 0)
			{
				_0xb2a38826e5886e83(func_201(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_201(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_211(iParam0);
	if (!func_57(func_97(0)))
	{
		func_157(iParam0, 3);
		func_212(bParam2);
		if (func_44() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_213(1);
		}
		func_214(iParam0, -1);
		if (bParam1 && !func_132(2))
		{
			func_215(&Global_0, 1024);
		}
		if (func_44() == -1)
		{
			func_216(&(Global_1347343->f_11), 536870912);
			func_217(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_218(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_219(0);
			}
		}
		if (func_44() == -1)
		{
			iVar1 = func_220(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_221();
				switch (iVar1)
				{
					case 0:
						func_222(0);
						break;
					case 1:
						func_222(1);
						break;
					case 2:
						func_222(2);
						break;
					case 3:
						func_222(3);
						break;
					case 4:
						func_222(4);
						break;
					case 5:
						func_222(5);
						break;
					case 6:
						func_222(5);
						break;
					case 7:
						func_222(7);
						break;
					case 8:
						func_222(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_54(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_222(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_54(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_222(11);
						break;
					default:
						iVar1 = func_221();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_223(0);
									break;
								case 1:
									func_223(1);
									break;
								case 2:
									func_223(2);
									break;
								case 3:
									func_223(3);
									break;
								case 4:
									func_223(4);
									break;
								case 5:
									func_223(5);
									break;
								case 6:
									func_223(5);
									break;
								case 7:
									func_223(7);
									break;
								case 8:
									func_223(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_224(1);
	}
	else
	{
		func_214(iParam0, -1);
		func_157(iParam0, 4);
	}
	func_225(iParam0, 0);
}

var func_164()
{
	return &Global_1899515;
}

int func_165(int iParam0)
{
	if (func_4(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_5(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

void func_166(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_226() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_227(iVar1) && !func_228(iVar1, iParam2)) && (!bParam3 || !func_229(iVar1))) && (!bParam4 || !func_230(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_231(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_167(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			*uParam1 = 9;
			return true;
		case 0:
			*uParam1 = 11;
			return true;
		case 3:
			*uParam1 = 14;
			return true;
		case 1:
			*uParam1 = 12;
			return true;
		default:
			break;
	}
	return false;
}

void func_168(var uParam0)
{
	if ((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_44() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_232(Global_1894899->f_2);
	Global_1898077->f_1 = 3;
	Global_1898077->f_2 = 0;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_8 = uParam0;
	Global_1898077->f_9 = iVar1;
	func_233(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
}

bool func_169(int iParam0)
{
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_113(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

void func_170(int iParam0)
{
	if (func_44() != -1)
	{
		return;
	}
	if (!func_234(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

void func_171(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_96(iParam0))
	{
		func_174(iParam0, 0, 2);
	}
	iVar0 = func_98(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_172(int iParam0, int iParam1)
{
	if (!func_235(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

bool func_173(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

void func_174(int iParam0, bool bParam1, int iParam2)
{
	if (!func_57(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_107(iParam0) && !func_96(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_201(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_107(iParam0))
	{
		iParam2 = -1;
	}
	if (func_154(iParam0) == 3 || (func_154(iParam0) == 1 && _0x01f4d242765c6b24(func_201(iParam0))))
	{
		func_236(func_202(iParam0), func_201(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_10(0, 1, 0)) && !func_237(&Global_1935630, 32768))
		{
			iVar0 = func_220(iParam0);
			if (iVar0 != -1)
			{
				func_238(0);
			}
			else if (func_202(iParam0) == 8)
			{
				iVar0 = func_221();
				if (iVar0 != -1)
				{
					func_238(0);
				}
			}
		}
	}
	func_157(iParam0, 0);
	if (func_97(0) == iParam0)
	{
		func_212(1);
		func_213(0);
		func_224(1);
	}
	func_225(iParam0, 1);
	func_239(iParam0);
}

bool func_175(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

void func_176(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_240(*uParam0, -1);
		func_241(*uParam0, 0);
		func_242(*uParam0, 0);
		if (does_blip_exist(&(Global_36308[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*uParam0]));
			}
			remove_blip(Global_36308[*uParam0]);
		}
	}
	*uParam0 = -1;
}

void func_177(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

void func_178(var uParam0)
{
	if (func_4(uParam0->f_3))
	{
		func_5(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

float func_179(var uParam0)
{
	if (!func_27(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_243(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_136() - uParam0->f_1);
}

bool func_180(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_104(iParam0))
		{
			return false;
		}
	}
	func_244(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_181(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (func_141(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_141(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_141(iParam0, 4, 1))
	{
		return false;
	}
	if (func_180(iParam0, 33, 1))
	{
		return false;
	}
	if (func_88(iParam0))
	{
		return false;
	}
	if (func_245(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_246(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_183(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
			return 15;
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

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_247())
	{
		iVar2 = func_247();
	}
	iVar5 = func_248(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_117(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_117(iVar6) == 0)
			{
				return func_249(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_117(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_117(iVar6) == 0)
			{
				return func_249(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_249(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_186(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

bool func_187(int iParam0)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_140 != 0 || (*Global_1360165)[iParam0]->f_141 != 0)
	{
		return true;
	}
	return false;
}

bool func_188(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_250(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_191(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_192(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_193(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_194(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_195(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_196(int iParam0, int iParam1)
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

void func_197(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, iParam6);
	func_252(uParam0, iParam5);
	func_253(uParam0, iParam4);
	func_254(uParam0, iParam3);
	func_255(uParam0, iParam2);
	func_256(uParam0, iParam1);
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_200(int iParam0)
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

int func_201(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_202(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_257(func_117(iParam0));
}

int func_203(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_258(func_117(iParam0));
}

void func_204(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_257(iParam0);
	*uParam1 = func_118(iParam0);
	*uParam2 = func_258(iParam0);
}

void func_205(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_259(iParam0);
	}
	else
	{
		func_260(iParam0, iParam1);
	}
	func_261();
}

bool func_206(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_143(iParam0))
	{
		return false;
	}
	if (!func_262(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*uParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (get_ground_z_for_3d_coord(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return true;
}

void func_207(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_139());
	}
}

bool func_208(int iParam0, int iParam1)
{
	if (func_263(iParam1))
	{
		return false;
	}
	if (func_264(iParam1))
	{
		return true;
	}
	if (iParam0 == 2)
	{
		if (!is_ped_male(iParam1))
		{
			return false;
		}
		if (_0xbd0e4f52f6d95242(iParam1))
		{
			return false;
		}
		if (is_ped_active_in_scenario(iParam1, 0))
		{
			if (_is_ped_using_scenario_hash(iParam1, -55367021))
			{
				return true;
			}
			if (_is_ped_using_scenario_hash(iParam1, -2043611403))
			{
				return true;
			}
			if (_is_ped_using_scenario_hash(iParam1, -1426662425))
			{
				return true;
			}
		}
		if (_0x3ab6c7b0bb0df4b1(iParam1, -1))
		{
			return true;
		}
		if (func_265(iParam1))
		{
			return true;
		}
		if (((!is_entity_playing_anim(iParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !is_entity_playing_anim(iParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1)) && !is_entity_playing_anim(iParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1)) && !(is_task_move_network_active(iParam1) && _0xcacc2f9d994504b7(iParam1) == 319699045))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if (_0xbd0e4f52f6d95242(iParam1))
		{
			return false;
		}
		if (is_ped_active_in_scenario(iParam1, 0))
		{
			if (_is_ped_using_scenario_hash(iParam1, -402120378))
			{
				return true;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			StringCopy(&cVar1, "mini_games@dominoes@enter_exit@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (is_entity_playing_anim(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			StringCopy(&cVar1, "mini_games@dominoes@game@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (is_entity_playing_anim(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			iVar0++;
		}
		if (is_task_move_network_active(iParam1))
		{
			return _0xcacc2f9d994504b7(iParam1) == -672963996;
		}
		return func_265(iParam1);
	}
	else if (iParam0 == 0)
	{
		if (is_ped_active_in_scenario(iParam1, 0))
		{
			if (_is_ped_using_scenario_hash(iParam1, -1473436841))
			{
				return true;
			}
		}
		if (_0x3ab6c7b0bb0df4b1(iParam1, -1))
		{
			return true;
		}
		return func_265(iParam1);
	}
	return true;
}

void func_209(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_210(int iParam0)
{
	if (!func_266(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), uVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_211(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_267(iParam0, func_186(iParam0) + 1);
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_268(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_269(Global_1935630, 4194304);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

int func_213(bool bParam0)
{
	if (!bParam0 && func_270(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_214(int iParam0, int iParam1)
{
	iVar0 = func_271(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_272(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_273(iVar0, iParam1);
	return iParam1;
}

void func_215(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_217(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_218(bool bParam0)
{
	func_274(bParam0);
	func_275(bParam0);
	func_276(bParam0);
	func_277(bParam0);
	func_278(bParam0);
	func_279(bParam0);
	func_280(bParam0);
	func_281(bParam0);
}

void func_219(bool bParam0)
{
	if (func_44() != -1)
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
		func_22(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_22(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_282(1, bParam0, 1);
	func_283();
	Global_40.f_11095.f_43 = bParam0;
}

int func_220(int iParam0)
{
	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_54(iParam0);
			return func_284(iVar0);
		case 8:
			iVar1 = func_54(iParam0);
			if (func_56((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_285(iVar1);
			}
			break;
	}
	return -1;
}

int func_221()
{
	if (!func_121((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_121((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_121((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_121((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_121((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_121((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_121((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_222(int iParam0)
{
	iVar0 = 0;
	if (func_44() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_286(Global_1898077->f_7, Global_1898077->f_3);
}

void func_223(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_44() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_287(Global_1898077->f_7, Global_1898077->f_4);
}

void func_224(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_225(int iParam0, bool bParam1)
{
	if (func_44() != -1)
	{
		return;
	}
	if (func_97(0) != iParam0)
	{
		return;
	}
	if (func_288(iParam0))
	{
		if (bParam1)
		{
			func_289(-525676072);
		}
		else
		{
			func_290(-525676072);
		}
	}
}

int func_226()
{
	return Global_1310750->f_16037;
}

bool func_227(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_228(int iParam0, int iParam1)
{
	if (!func_227(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_229(int iParam0)
{
	if (!func_227(iParam0))
	{
		return false;
	}
	if (func_291(64) && func_292(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_230(int iParam0)
{
	if (!func_227(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_231(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_227(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_293(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_233(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_234(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

bool func_235(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_44() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_237(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_238(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_44() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_294(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_295();
		Global_1898077->f_9 = func_232(Global_1894899->f_2);
		func_233(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_239(int iParam0)
{
	return func_296(func_271(iParam0));
}

void func_240(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_241(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_242(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

bool func_243(var uParam0)
{
	return func_82(*uParam0, 2);
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_245(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_246(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_247()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (iParam3 < 0 || iParam3 > func_247())
	{
		return -1;
	}
	iVar0 = func_248(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_205(iVar1, 0);
	func_267(iVar1, 0);
	func_298(iVar1, 0);
	func_299(iVar1, 0);
	func_300(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_301(iVar1, iParam4);
	}
	return iVar1;
}

int func_250(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_253(var uParam0, int iParam1)
{
	iVar0 = func_191(*uParam0);
	iVar1 = func_190(*uParam0);
	if (iParam1 < 1 || iParam1 > func_196(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_257(int iParam0)
{
	return iParam0 & 31;
}

int func_258(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_259(int iParam0)
{
	iVar0 = func_200(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_302(iVar0);
}

int func_260(int iParam0, int iParam1)
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
			func_303(iVar2);
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

void func_261()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_262(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_263(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (is_ped_injured(iParam0))
	{
		return true;
	}
	if (!is_ped_human(iParam0))
	{
		return true;
	}
	if (is_ped_on_mount(iParam0))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam0, true))
	{
		return true;
	}
	if (_0xb086c8c0f5701d14(iParam0))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (_is_ped_lassoed(iParam0) || _is_ped_hogtied(iParam0))
	{
		return true;
	}
	if (is_ped_shooting(iParam0))
	{
		return true;
	}
	if (is_ped_fleeing(iParam0))
	{
		return true;
	}
	if (!is_entity_upright(iParam0, 90f) || is_entity_upsidedown(iParam0))
	{
		return true;
	}
	if (_0x3e592d0486dec0f6(iParam0) || is_ped_falling(iParam0))
	{
		return true;
	}
	if (is_ped_getting_up(iParam0) || is_ped_getting_into_a_vehicle(iParam0))
	{
		return true;
	}
	if (_is_ped_carrying(iParam0))
	{
		return true;
	}
	if (_0x0e99e3bf11bb6367(iParam0) || _0x3bdfcf25b58b0415(iParam0))
	{
		return true;
	}
	if (is_ped_in_cover(iParam0, 0, 0))
	{
		return true;
	}
	if (is_ped_diving(iParam0))
	{
		return true;
	}
	if (_0xc48a9eb0d499b3e5(iParam0))
	{
		return true;
	}
	if (is_ped_climbing(iParam0))
	{
		return true;
	}
	return false;
}

bool func_264(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (decor_exist_on(iParam0, "PedSeatedForMinigame"))
	{
		return decor_get_bool(iParam0, "PedSeatedForMinigame");
	}
	return false;
}

bool func_265(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_sitting_in_any_vehicle(iParam0))
	{
		return true;
	}
	if (!is_ped_still(iParam0))
	{
		return false;
	}
	if (!is_entity_upright(iParam0, 90f))
	{
		return false;
	}
	if (_get_ped_crouch_movement(iParam0))
	{
		return false;
	}
	if (get_ped_stealth_movement(iParam0))
	{
		return false;
	}
	if (is_ped_jumping(iParam0))
	{
		return false;
	}
	if (is_ped_ragdoll(iParam0))
	{
		return false;
	}
	vVar10 = { get_ped_bone_coords(iParam0, 56200, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2]->f_2) > 0.7f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 65478, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_304(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_304(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

bool func_266(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_267(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_270(int iParam0)
{
	iVar0 = func_305(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_271(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_272(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_117(iParam0);
		func_204(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_273(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_306((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_306(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_57(&(Global_1898164->f_1[0])))
	{
		func_157(&(Global_1898164->f_1[0]), 3);
	}
}

void func_274(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_176(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_275(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_176(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_276(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_176(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_277(bool bParam0)
{
	func_176(Global_1956614, bParam0);
}

void func_278(bool bParam0)
{
	func_176(&(Global_1415412->f_3), bParam0);
}

void func_279(bool bParam0)
{
	if (func_66(Global_1934051->f_33))
	{
		func_307(Global_1934051->f_33, 7148155);
	}
	func_176(&(Global_1934051->f_33), bParam0);
}

void func_280(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_309(func_308(iVar0));
		if (iVar1 != 0)
		{
			func_307(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_176((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_281(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_240(iVar0, -1);
		func_241(iVar0, 0);
		func_242(iVar0, 0);
		if (does_blip_exist(&(Global_36308[iVar0])))
		{
			if (bParam0)
			{
				set_radar_zoom(&(Global_36308[iVar0]));
			}
			remove_blip(Global_36308[iVar0]);
		}
		iVar0++;
	}
}

void func_282(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_283()
{
	func_310();
	func_311();
	func_312();
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_286(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_287(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

bool func_288(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_54(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_54(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_289(int iParam0)
{
	iVar2 = func_313(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_314(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_316(func_315(iParam0), 6);
}

void func_290(int iParam0)
{
	iVar2 = func_313(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_314(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_317(func_315(iParam0), 6);
}

bool func_291(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_292(int iParam0)
{
	return func_228(iParam0, Global_1310750->f_16072 | 64);
}

void func_293(int iParam0)
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

void func_294(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_295()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_296(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_273(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_297(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_302(int iParam0)
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

int func_303(int iParam0)
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

float func_304(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_306(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_307(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

float func_310()
{
	if (func_318())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_319(2);
	}
	if (Global_1347477->f_119)
	{
		return func_319(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_320();
	fVar2 = func_321();
	fVar3 = func_322();
	fVar4 = func_323();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_324()));
	fVar7 = (func_319(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_325(3, round((to_float(iVar8) * fVar10)), 0);
	func_326(3, fVar9, fVar9 > 100f);
	return func_327(fVar7, -100f, 100f);
}

float func_311()
{
	if (func_318())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_319(1);
	}
	if (Global_1347477->f_119)
	{
		return func_319(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_320();
	fVar2 = func_321();
	fVar3 = func_322();
	fVar4 = func_323();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_324()));
	fVar7 = (func_319(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_325(2, round((to_float(iVar8) * fVar10)), 0);
	func_326(2, fVar9, fVar9 > 100f);
	return func_327(fVar7, -100f, 100f);
}

float func_312()
{
	if (func_318())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_319(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_328())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_329())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_319(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_320();
	fVar2 = func_321();
	fVar3 = func_322();
	fVar4 = func_323();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_324()));
	fVar7 = (func_319(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_325(1, round((to_float(iVar8) * fVar10)), 0);
	func_326(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_319(0);
	}
	return func_327(fVar7, -100f, 100f);
}

int func_313(bool bParam0)
{
	if (func_44() == -1)
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

int func_314(int iParam0)
{
	if (!func_330(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_316(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_317(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_318()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_319(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_320()
{
	fVar0 = func_331(13);
	iVar1 = func_332(fVar0);
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

float func_321()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_322()
{
	if (func_333())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_323()
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

float func_324()
{
	return Global_1955565->f_3;
}

void func_325(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_334(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_326(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_334(iParam0, 2, 0, 0);
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

float func_327(float fParam0, float fParam1, float fParam2)
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

bool func_328()
{
	return func_331(12) <= -99f;
}

bool func_329()
{
	return func_331(12) >= 99f;
}

bool func_330(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

float func_331(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_332(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_333()
{
	return _unlock_is_unlocked(-121456797);
}

char* func_334(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_335(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_335(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

char* func_335(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

