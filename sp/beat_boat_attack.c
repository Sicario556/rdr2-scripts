void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_713 = 1;
	iLocal_720 = 1;
	iLocal_721 = 1;
	iLocal_732 = 1;
	iLocal_748 = -1;
	fLocal_760 = 1f;
	fLocal_761 = 1f;
	fLocal_762 = 1f;
	Local_15.f_3 = func_1(&vScriptParam_0);
	Local_15.f_161 = func_2(vScriptParam_0.z, 2);
	func_3();
	func_4(&Local_15, 1);
	if (has_force_cleanup_occurred(523))
	{
		func_5(get_cause_of_most_recent_force_cleanup(), 106);
		iLocal_745 = 1;
	}
	while (true)
	{
		func_7(bVar743, 463, 0);
		if (bVar743)
		{
			wait(0);
		}
		else
		{
			switch (iVar711)
			{
				case 1:
					if (func_8(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_9(&Local_15, &uLocal_809, &uLocal_808);
						func_10(&Local_15, 1);
						iLocal_713 = 0;
					}
					else if (Local_15.f_160)
					{
						func_6();
					}
					break;
				case 0:
					if (func_11())
					{
						iLocal_713 = 3;
					}
					break;
				case 3:
					if (func_12())
					{
						iLocal_713 = 4;
					}
					break;
				case 4:
					if (!func_13(&Local_15, &uLocal_395, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					func_14();
					if (func_15())
					{
						Local_15.f_50 = 1;
						iLocal_744 = 1;
						func_6();
					}
					if (func_16(&Local_15, &uLocal_395, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			wait(Local_15.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3()
{
}

void func_4(var uParam0, bool bParam1)
{
	func_17(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_18("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5(int iParam0, int iParam1)
{
	iVar0 = 1;
	while (iVar0 <= 512)
	{
		if (func_19(iParam0, iVar0))
		{
		}
		iVar0 *= 2;
	}
}

void func_6()
{
	if (iVar742 == 0)
	{
		Local_15.f_45 = 0;
	}
	else
	{
		Local_15.f_45 = 1;
	}
	func_20(&Local_15, &uLocal_395, &iLocal_401, iLocal_14, uVar807, uVar806, 0, 1, 0, 1);
	if (_0x91a5f9cbebb9d936(uVar506))
	{
		_0xd17672447692478e(uVar507, 0);
		clear_ped_non_creation_area();
		remove_scenario_blocking_area(uVar506, true);
	}
	set_boat_anchor(iVar405, false);
	_0x9cf1836c03fb67a2(uLocal_410[0], 1);
	_0x9cf1836c03fb67a2(uLocal_410[1], 1);
	_0x9cf1836c03fb67a2(uLocal_410[2], 1);
	stop_audio_scene("BOAT_ATTACK_SCENE");
	func_21(1);
	if (does_entity_exist(iVar405))
	{
		if (Local_15.f_46 == 0 && Local_15.f_48 == 0)
		{
			if (_0xc9b4b3a36f81fd75(iVar405))
			{
				_delete_propset(_0xa079300af757fb1a(iVar405), true, true);
			}
		}
		_0xba8818212633500a(iVar405, 0, 0);
		set_vehicle_as_no_longer_needed(&iLocal_407);
	}
	func_22(&Local_15);
	func_23(Local_544[0], &Local_650);
	func_24(&(uLocal_395[0]), 1, 1);
	func_24(&(uLocal_395[1]), 1, 1);
	func_24(&(uLocal_395[2]), 1, 1);
	terminate_this_thread();
}

void func_7(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_25(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_8(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_26(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_27(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_28(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_29(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_30(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_9(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

bool func_11()
{
	switch (iVar712)
	{
		case 0:
			if (func_31(&Local_15))
			{
				func_32();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				func_38();
				func_21(0);
				func_39();
				func_40();
				func_41();
				iLocal_714 = 1;
			}
			break;
		case 1:
			if (!func_42(&Local_222))
			{
				return false;
			}
			if (!func_43(&Local_209))
			{
				return false;
			}
			if (!get_is_waypoint_recording_loaded(sVar462))
			{
				return false;
			}
			if (!_0xd9130842d7226045("REBAT_Sounds", 0))
			{
				return false;
			}
			if (!func_44(&uLocal_386))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12()
{
	switch (iVar713)
	{
		case 0:
			if (func_45(Local_15.f_51, Local_15.f_51.f_3, &Local_222, &uLocal_395, 1, 0, -1, 1))
			{
				func_46();
				iLocal_715 = 1;
			}
			break;
		case 1:
			if (!func_47())
			{
				return false;
			}
			else if (iVar701 == 0)
			{
				uLocal_703 = _0xa079300af757fb1a(iVar405);
			}
			if ((does_entity_exist(iVar405) && !is_entity_dead(iVar405)) && !_0xc9b4b3a36f81fd75(iVar405))
			{
				_0xc0f0417a90402742(iVar405, uVar700);
				func_48();
				func_49();
				iLocal_715 = 6;
			}
			break;
		case 6:
			if (!is_entity_dead(iVar405))
			{
				_get_rowing_oars(iVar405, &uLocal_408, &uLocal_409);
			}
			if (!is_entity_dead(iVar406) && !is_entity_dead(iVar407))
			{
				func_50();
				return true;
			}
			break;
	}
	return false;
}

bool func_13(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_51(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_52(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_53(&(uParam0->f_5));
			}
			func_54(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_55(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_56(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_57(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_58(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_59(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_28(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_60(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_14()
{
	func_61();
	if (iLocal_14 == 0)
	{
		func_62();
	}
	else
	{
		func_63();
	}
	if (is_explosion_in_sphere(25, get_entity_coords(iVar405, true, false), 5f))
	{
		set_boat_anchor(iVar405, false);
		remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
	}
	if (_does_anim_scene_exist(Local_536.f_1))
	{
		if (_is_anim_scene_started(Local_536.f_1, false))
		{
			fLocal_759 = _get_anim_scene_progress(Local_536.f_1);
		}
	}
}

bool func_15()
{
	if (iLocal_14 == 0)
	{
		switch (iVar702)
		{
			case 0:
				func_64();
				break;
			case 1:
				func_65();
				break;
			case 2:
				func_66();
				break;
			case 3:
				func_67();
				break;
			case 4:
				func_68();
				break;
			case 5:
				func_69();
				break;
			case 7:
				set_ped_keep_task(&(uLocal_395[0]), true);
				set_ped_keep_task(&(uLocal_395[1]), true);
				set_ped_keep_task(&(uLocal_395[2]), true);
				set_ped_keep_task(&(uLocal_395[3]), true);
				set_ped_keep_task(&(uLocal_395[4]), true);
				Local_15.f_50 = 1;
				Local_15.f_44 = 1;
				iLocal_744 = 1;
				return true;
			case 6:
				if (func_70(&(uLocal_395[0]), 1, 0) >= 100f)
				{
					set_ped_keep_task(&(uLocal_395[0]), true);
					set_ped_keep_task(&(uLocal_395[1]), true);
					set_ped_keep_task(&(uLocal_395[2]), true);
					set_ped_keep_task(&(uLocal_395[3]), true);
					set_ped_keep_task(&(uLocal_395[4]), true);
					Local_15.f_50 = 1;
					Local_15.f_160 = 1;
					iLocal_744 = 1;
					func_6();
				}
				break;
		}
	}
	else
	{
		switch (iVar703)
		{
			case 0:
				func_71();
				break;
			case 1:
				func_72();
				break;
			case 2:
				func_73();
				break;
			case 4:
				func_74();
				break;
			case 3:
				func_75();
				break;
			case 6:
				set_ped_keep_task(&(uLocal_395[0]), true);
				set_ped_keep_task(&(uLocal_395[1]), true);
				set_ped_keep_task(&(uLocal_395[3]), true);
				set_ped_keep_task(&(uLocal_395[4]), true);
				Local_15.f_50 = 1;
				Local_15.f_44 = 1;
				iLocal_744 = 1;
				return true;
			case 5:
				if (func_70(&(uLocal_395[0]), 1, 0) >= 100f)
				{
					set_ped_keep_task(&(uLocal_395[0]), true);
					set_ped_keep_task(&(uLocal_395[1]), true);
					set_ped_keep_task(&(uLocal_395[3]), true);
					set_ped_keep_task(&(uLocal_395[4]), true);
					Local_15.f_50 = 1;
					Local_15.f_160 = 1;
					iLocal_744 = 1;
					func_6();
				}
				break;
		}
	}
	return false;
}

bool func_16(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_76())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_77(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_28(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_28(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_28(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_78(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_78(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

void func_17(int iParam0)
{
	func_79(iParam0, 0);
	func_80(iParam0, 0);
	func_81(iParam0, 1);
	func_82(iParam0, 1);
	func_83(iParam0, 0);
	func_84(iParam0, 1);
	func_85(iParam0, 1, 1, 1);
}

var func_18(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_86(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_87(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_86(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_20(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_88(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_89(uParam0->f_3, 524288);
		}
	}
	if (func_90(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_90(uParam1[iVar0], 0, 0))
			{
				func_91(uParam1[iVar0], bVar3);
				if (func_92(uParam0, (*uParam1)[iVar0]))
				{
					func_93((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_90(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(uParam1[iVar0]))
						{
							set_ped_stealth_movement(uParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(uParam1[iVar0]))
						{
							_set_ped_crouch_movement(uParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_95(uParam1[iVar0], 1073741824, func_94(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_96(uParam0);
	}
	func_22(uParam0);
	if (!uParam0->f_186)
	{
		func_51(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_97(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_98(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_99(Local_15.f_51, 20f, 5);
	}
	else
	{
		func_100(Local_15.f_51, 20f, 0, 0, 6);
	}
}

void func_22(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

void func_23(int* iParam0, var uParam1)
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
	func_101(iParam0, uParam1, 1);
	func_102(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_24(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_25(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_103(iVar0))
	{
		return false;
	}
	if (func_19(iVar0, 1) || func_19(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_26(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_104(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_105(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_55(iParam0, 128))
			{
				if (!func_106(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_107(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_108(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_109(*uParam1))
				{
					return func_110(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_111(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_105(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_112(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_113(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_114(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_55(iParam0, 128))
			{
				if (!func_115(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_110(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_107(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_112(uParam1))
					{
						return func_110(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_116(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_105(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_110(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_18("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_18("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_27(var uParam0, int iParam1)
{
	if (func_28(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_118(iParam1, func_117(uParam0), &(uParam0->f_172)))
		{
			if (func_90(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_28(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_29(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_120(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_28(uParam0->f_3, 1) && !func_28(uParam0->f_3, 32))
	{
		func_120(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_28(uParam0->f_3, 2) && !func_28(uParam0->f_3, 32))
	{
		func_120(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_121(uParam0->f_171, 1);
	}
	if (func_28(uParam0->f_3, 1))
	{
		func_120(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_122(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_30(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

bool func_31(var uParam0)
{
	iVar0 = func_123(uParam0->f_3);
	iVar1 = func_124(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_32()
{
	iLocal_14 = func_125(Local_15.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_33()
{
	iLocal_702 = -1739821843;
	_request_propset(iVar700);
}

void func_34()
{
	vLocal_465 = { 2419.09f, 907.4f, 71.97f };
	fLocal_477 = 293.77f;
	vLocal_468 = { 2420.07f, 899.47f, 72.83f };
	fLocal_478 = 58.53f;
	vLocal_471 = { 2421.39f, 901.6f, 72.59f };
	fLocal_479 = 75.07f;
	vLocal_474 = { 2423.11f, 899.19f, 72.91f };
	fLocal_480 = 30.85f;
	vLocal_481 = { 2418.8f, 900.67f, 72.63f };
	vLocal_484 = { 2420.97f, 898.25f, 72.95f };
	fLocal_487 = 250.56f;
	fLocal_488 = 245.69f;
	vLocal_495 = { 2452.39f, 962.7f, 73.49f };
	vLocal_489 = { 2376.15f, 939.91f, 71.58f };
	vLocal_492 = { 2361.71f, 989.53f, 71.96f };
	*vLocal_498[0] = { 2446.24f, 898.92f, 72.7f };
	*vLocal_498[1] = { 2425.82f, 886.51f, 72.71f };
	*vLocal_498[2] = { 2428.84f, 916.49f, 70.82f };
	iLocal_510 = 1;
}

void func_35()
{
	switch (iLocal_14)
	{
		case 0:
			Local_222[0]->f_1 = 363815774;
			Local_222[0]->f_3 = -1843906223;
			Local_222[1]->f_1 = 363815774;
			Local_222[1]->f_3 = -2131880195;
			Local_222[2]->f_1 = 363815774;
			Local_222[2]->f_3 = -443523004;
			Local_222[3]->f_1 = -79611918;
			Local_222[3]->f_3 = 1175253274;
			Local_222[4]->f_1 = -79611918;
			Local_222[4]->f_3 = -490526072;
			break;
		case 1:
			Local_222[0]->f_1 = 363815774;
			Local_222[0]->f_3 = -1843906223;
			Local_222[1]->f_1 = 363815774;
			Local_222[1]->f_3 = -2131880195;
			Local_222[3]->f_1 = -79611918;
			Local_222[3]->f_3 = 1175253274;
			Local_222[4]->f_1 = -79611918;
			Local_222[4]->f_3 = -490526072;
			break;
	}
	func_126(&Local_222);
}

void func_36()
{
	request_model(-1613317544, false);
	request_model(-1671495534, false);
}

void func_37()
{
	switch (iLocal_14)
	{
		case 0:
			sLocal_414[0] = "RE_BA_RKR_V1_TALK_A";
			sLocal_414[1] = "RE_BA_RKR_V1_TALK_B";
			sLocal_414[2] = "RE_BA_RKR_V1_TALK_C";
			sLocal_414[3] = "RE_BA_RKR_V1_TALK_D";
			sLocal_414[4] = "RE_BA_RKR_V1_TALK_E";
			sLocal_414[5] = "RE_BA_RKR_V1_TALK_F";
			sLocal_414[6] = "RE_BA_RKR_V1_TALK_G";
			sLocal_414[7] = "RE_BA_RKR_V1_TALK_H";
			sLocal_414[13] = "RE_BA_RKR_V1_REST_B";
			sLocal_414[14] = "RE_BA_RKR_V1_REST_C";
			sLocal_414[15] = "RE_BA_RKR_V1_WARN_A";
			sLocal_414[16] = "RE_BA_RKR_V1_WARN_FEUD_FOLLOW";
			sLocal_414[17] = "RE_BA_RKR_V1_WARN_B";
			sLocal_414[8] = "CHALLENGE_THREATEN_ARMED";
			sLocal_414[9] = "RE_BA_RKR_V1_ATTACK_B";
			sLocal_414[10] = "RE_BA_RKR_V1_ATTACK_C";
			sLocal_414[11] = "CALLOUT_JUST_KILL_EM_MALE";
			sLocal_414[12] = "GENERIC_ANGRY_REACTION";
			sLocal_414[21] = "RE_BA_RKR_V1_DISPOSE_A";
			sLocal_414[22] = "RE_BA_RKR_V1_DISPOSE_B";
			sLocal_414[23] = "RE_BA_RKR_V1_DISPOSE_C";
			sLocal_414[24] = "RE_BA_RKR_V1_DISPOSE_D";
			sLocal_414[25] = "RE_BA_RKR_V1_DISPOSE_E";
			sLocal_414[26] = "RE_BA_RKR_V1_DISPOSE_F";
			sLocal_414[30] = "RE_BA_RKR_V1_PLAYER_POS_A0";
			sLocal_414[31] = "RE_BA_RKR_V1_PLAYER_NEG_A0";
			sLocal_414[32] = "RE_BA_RKR_V1_PLAYER_POS_A";
			sLocal_414[33] = "RE_BA_RKR_V1_PLAYER_NEG_A";
			sLocal_414[36] = "RE_BA_RKR_V1_PLAYER_POS_B";
			sLocal_414[37] = "RE_BA_RKR_V1_PLAYER_NEG_B";
			sLocal_414[34] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_414[35] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_414[38] = "WHO_GOES_THERE";
			sLocal_414[39] = "WHO_GOES_THERE";
			sLocal_414[43] = "RE_BA_RKR_V1_WARN_A";
			break;
		case 1:
			sLocal_414[0] = "RE_BA_RKR_V2_TALK_A";
			sLocal_414[1] = "RE_BA_RKR_V2_TALK_B";
			sLocal_414[2] = "RE_BA_RKR_V2_TALK_C";
			sLocal_414[3] = "RE_BA_RKR_V2_TALK_D";
			sLocal_414[4] = "RE_BA_RKR_V2_TALK_E";
			sLocal_414[5] = "RE_BA_RKR_V2_TALK_F";
			sLocal_414[6] = "RE_BA_RKR_V2_TALK_G";
			sLocal_414[7] = "RE_BA_RKR_V2_TALK_H";
			sLocal_414[15] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[16] = "RE_BA_RKR_V2_WARN_A_FEUD";
			sLocal_414[17] = "RE_BA_RKR_V2_WARN_B";
			sLocal_414[18] = "RE_BA_RKR_V2_WARN_B_FEUD";
			sLocal_414[19] = "RE_BA_RKR_V2_WARN_C";
			sLocal_414[20] = "RE_BA_RKR_V2_WARN_C_FEUD_AGGRO";
			sLocal_414[8] = "OPENS_FIRE";
			sLocal_414[9] = "PLEAD_HOGTIED";
			sLocal_414[10] = "TAUNT_GEN_MALE";
			sLocal_414[11] = "TAUNT_GEN_MALE";
			sLocal_414[12] = "GENERIC_SHOCKED_HIGH";
			sLocal_414[21] = "RE_BA_RKR_V2_DISPOSE_A";
			sLocal_414[22] = "RE_BA_RKR_V2_DISPOSE_B";
			sLocal_414[23] = "RE_BA_RKR_V2_DISPOSE_C";
			sLocal_414[24] = "RE_BA_RKR_V2_DISPOSE_D";
			sLocal_414[25] = "RE_BA_RKR_V2_DISPOSE_CARRY";
			sLocal_414[27] = "RE_BA_RKR_V2_DISPOSE_E";
			sLocal_414[28] = "RE_BA_RKR_V2_AFTER_A";
			sLocal_414[29] = "RE_BA_RKR_V2_AFTER_B";
			sLocal_414[32] = "RE_BA_RKR_V2_PLAYER_POS_A0";
			sLocal_414[33] = "RE_BA_RKR_V2_PLAYER_NEG_A0";
			sLocal_414[34] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[35] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[36] = "RE_BA_RKR_V2_PLAYER_POS_A";
			sLocal_414[37] = "RE_BA_RKR_V2_PLAYER_NEG_A";
			sLocal_414[38] = "WHATS_YOUR_PROBLEM";
			sLocal_414[39] = "WHATS_YOUR_PROBLEM";
			sLocal_414[40] = "RE_BA_RKR_V2_PLAYER_B_DEFUSE";
			sLocal_414[41] = "RE_BA_RKR_V2_PLAYER_B_ANTAGONIZE";
			sLocal_414[42] = "DISMISSIVE_REACT";
			sLocal_414[43] = "TAUNT_GEN_MALE";
			break;
	}
}

void func_38()
{
	Local_383[0] = "script_re@boat_attack";
	Local_383[0]->f_1 = "breakout_fwd_male_a";
	func_127(&(Local_383[0]), &uLocal_386);
}

void func_39()
{
	Local_536.f_5 = "script@beat@wilderness@boatattack@boatattack_b";
}

void func_40()
{
	sLocal_464 = "rebat_loc1";
	request_waypoint_recording(sVar462);
}

void func_41()
{
	if (iLocal_14 == 0)
	{
		func_128(Local_650[0], "RE_INTER_POS", &(sLocal_414[30]), -163964935, 0, 0, 0, 1, 0);
		func_128(Local_650[1], "RE_INTER_ANTAGONIZE", &(sLocal_414[31]), 648122183, 0, 0, 0, 1, 0);
	}
	else
	{
		func_128(Local_650[0], "RE_INTER_POS", &(sLocal_414[32]), -163964935, 0, 0, 0, 1, 0);
		func_128(Local_650[1], "RE_INTER_ANTAGONIZE", &(sLocal_414[33]), 648122183, 0, 0, 0, 1, 0);
	}
}

bool func_42(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_129((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_43(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_44(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_45(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_130() || !func_131((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_46()
{
	Local_209[0]->f_8 = create_object(-1671495534, vLocal_474, true, true, false, false, true);
}

bool func_47()
{
	if (does_entity_exist(iVar405))
	{
		return true;
	}
	else
	{
		iLocal_407 = create_vehicle(-1613317544, vLocal_465, fVar475, true, true, false, false);
	}
	return false;
}

void func_48()
{
	Local_15.f_178 = 1;
	if (iLocal_14 == 0)
	{
		set_ambient_voice_name(&(uLocal_395[0]), "0203_G_M_M_UniInbred_03_WHITE_01");
		set_ambient_voice_name(&(uLocal_395[1]), "0202_G_M_M_UniInbred_02_WHITE_02");
		set_ambient_voice_name(&(uLocal_395[2]), "0201_G_M_M_UniInbred_02_WHITE_01");
		_request_ped_emotional_preset(&(uLocal_395[1]), "TaskCombat_Panic");
		_0xf7ea250b9a919e03(-1638944626, &(uLocal_395[1]));
		set_ped_relationship_group_hash(&(uLocal_395[0]), -401180987);
		set_ped_relationship_group_hash(&(uLocal_395[1]), -401180987);
		set_ped_relationship_group_hash(&(uLocal_395[2]), -401180987);
		_set_entity_coords_and_heading(iVar405, vLocal_465, fVar475, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[0]), vLocal_468, fVar476, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[1]), vLocal_471, fVar477, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[2]), vLocal_474, fVar478, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[3]), vLocal_481, fVar485, false, true, true);
		_set_entity_coords_and_heading(&(uLocal_395[4]), vLocal_484, fVar486, false, true, true);
		set_ped_into_vehicle(&(uLocal_395[0]), iVar405, 3);
		remove_all_ped_weapons(&(uLocal_395[3]), true, true);
		remove_all_ped_weapons(&(uLocal_395[4]), true, true);
		set_ped_config_flag(&(uLocal_395[0]), 282, true);
		set_ped_config_flag(&(uLocal_395[1]), 282, true);
		set_ped_config_flag(&(uLocal_395[2]), 282, true);
		set_ped_config_flag(&(uLocal_395[0]), 6, true);
		set_ped_config_flag(&(uLocal_395[1]), 6, true);
		set_ped_config_flag(&(uLocal_395[2]), 6, true);
		stop_ped_speaking(&(uLocal_395[3]), true);
		stop_ped_speaking(&(uLocal_395[4]), true);
		set_ped_combat_movement(&(uLocal_395[0]), 2);
		set_ped_combat_movement(&(uLocal_395[1]), 1);
		set_ped_combat_movement(&(uLocal_395[2]), 1);
		set_ped_combat_attributes(&(uLocal_395[0]), 112, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 112, false);
		set_ped_combat_attributes(&(uLocal_395[2]), 112, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 46, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 46, true);
		set_ped_combat_attributes(&(uLocal_395[2]), 46, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 17, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 17, false);
		set_ped_combat_attributes(&(uLocal_395[2]), 17, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 5, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 5, true);
		set_ped_combat_attributes(&(uLocal_395[2]), 5, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 47, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 47, true);
		set_ped_combat_attributes(&(uLocal_395[2]), 47, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 0, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 0, false);
		set_ped_combat_attributes(&(uLocal_395[2]), 0, false);
		set_ped_flee_attributes(&(uLocal_395[0]), 512, true);
		set_ped_flee_attributes(&(uLocal_395[1]), 512, true);
		set_ped_flee_attributes(&(uLocal_395[2]), 512, true);
		remove_all_ped_weapons(&(uLocal_395[0]), true, true);
		remove_all_ped_weapons(&(uLocal_395[1]), true, true);
		remove_all_ped_weapons(&(uLocal_395[2]), true, true);
		func_133(&(uLocal_395[0]), func_132(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
		func_133(&(uLocal_395[1]), func_132(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
		func_133(&(uLocal_395[2]), func_132(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
		func_134(&(uLocal_395[0]), &Local_15, 0);
		func_134(&(uLocal_395[1]), &Local_15, 0);
		func_134(&(uLocal_395[2]), &Local_15, 0);
		_0xf1c03a5352243a30(&(uLocal_395[2]));
		_set_boat_anchor_buoyancy_coefficient(iVar405, 100f);
		_0x1098cda477890165(iVar405, 1);
		uLocal_410[0] = _0xfa50f79257745e74(*vLocal_498[0], 10f, 1, 4, 0);
		uLocal_410[1] = _0xfa50f79257745e74(*vLocal_498[1], 10f, 1, 4, 0);
		uLocal_410[2] = _0xfa50f79257745e74(*vLocal_498[2], 20f, 1, 319, 0);
		func_135(&(uLocal_395[0]), -885810591, 1, 0);
		func_135(&(uLocal_395[1]), -885810591, 1, 0);
		func_135(&(uLocal_395[2]), -885810591, 1, 0);
		set_boat_anchor(iVar405, true);
		_0x8acc0506743a8a5c(&(uLocal_395[2]), 166028666, 1, -1082130432);
	}
	else
	{
		set_ambient_voice_name(&(uLocal_395[0]), "0204_G_M_M_UniInbred_03_WHITE_02");
		set_ambient_voice_name(&(uLocal_395[1]), "0199_G_M_M_UniInbred_01_WHITE_01");
		_request_ped_emotional_preset(&(uLocal_395[1]), "TaskCombat_Panic");
		_0xf7ea250b9a919e03(-1638944626, &(uLocal_395[1]));
		set_ped_relationship_group_hash(&(uLocal_395[0]), -401180987);
		set_ped_relationship_group_hash(&(uLocal_395[1]), -401180987);
		_set_entity_coords_and_heading(iVar405, vLocal_465, fVar475, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[0]), vLocal_468, fVar476, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[1]), vLocal_471, fVar477, true, false, true);
		_set_entity_coords_and_heading(&(uLocal_395[3]), vLocal_481, fVar485, false, true, true);
		_set_entity_coords_and_heading(&(uLocal_395[4]), vLocal_484, fVar486, false, true, true);
		stop_ped_speaking(&(uLocal_395[3]), true);
		stop_ped_speaking(&(uLocal_395[4]), true);
		set_ped_into_vehicle(&(uLocal_395[0]), iVar405, 3);
		set_ped_into_vehicle(&(uLocal_395[1]), iVar405, -1);
		remove_all_ped_weapons(&(uLocal_395[3]), true, true);
		remove_all_ped_weapons(&(uLocal_395[4]), true, true);
		set_ped_config_flag(&(uLocal_395[0]), 282, true);
		set_ped_config_flag(&(uLocal_395[1]), 282, true);
		set_ped_config_flag(&(uLocal_395[0]), 6, true);
		set_ped_config_flag(&(uLocal_395[1]), 6, true);
		set_ped_combat_movement(&(uLocal_395[0]), 2);
		set_ped_combat_movement(&(uLocal_395[1]), 1);
		set_ped_combat_attributes(&(uLocal_395[0]), 112, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 112, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 46, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 46, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 17, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 17, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 5, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 5, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 47, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 47, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 0, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 0, false);
		set_ped_flee_attributes(&(uLocal_395[0]), 512, true);
		set_ped_flee_attributes(&(uLocal_395[1]), 512, true);
		remove_all_ped_weapons(&(uLocal_395[0]), true, true);
		remove_all_ped_weapons(&(uLocal_395[1]), true, true);
		func_133(&(uLocal_395[0]), func_132(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
		func_133(&(uLocal_395[1]), func_132(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
		func_134(&(uLocal_395[0]), &Local_15, 0);
		func_134(&(uLocal_395[1]), &Local_15, 0);
		_set_boat_anchor_buoyancy_coefficient(iVar405, 100f);
		_0x1098cda477890165(iVar405, 1);
		uLocal_410[0] = _0xfa50f79257745e74(*vLocal_498[0], 10f, 1, 4, 0);
		uLocal_410[1] = _0xfa50f79257745e74(*vLocal_498[1], 10f, 1, 4, 0);
		uLocal_410[2] = _0xfa50f79257745e74(*vLocal_498[2], 20f, 1, 319, 0);
		func_135(&(uLocal_395[0]), -885810591, 1, 0);
		func_135(&(uLocal_395[1]), -885810591, 1, 0);
	}
}

void func_49()
{
	func_136(&(Local_15.f_5), 1);
	func_82(&(Local_15.f_5), 1);
	func_80(&(Local_15.f_5), 1);
	func_81(&(Local_15.f_5), 1);
	func_79(&(Local_15.f_5), 1);
	func_137(&(Local_15.f_5), 1);
	func_138(&(Local_15.f_5), 1);
}

void func_50()
{
	if (iLocal_14 == 0)
	{
		Local_536.f_1 = _create_anim_scene(Local_536.f_5, 0, 0, false, true);
		set_anim_scene_origin(Local_536.f_1, get_entity_coords(iVar405, true, false), get_entity_rotation(iVar405, 2), 2);
		set_anim_scene_entity(Local_536.f_1, "MALE_A", &(uLocal_395[2]), 0);
		set_anim_scene_entity(Local_536.f_1, "CIG", Local_209[0]->f_8, 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_B", &(uLocal_395[1]), 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_C", &(uLocal_395[0]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]), 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_A", iVar406, 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_B", iVar407, 0);
		set_anim_scene_entity(Local_536.f_1, "rowboat", iVar405, 0);
		if (!_is_anim_scene_loaded(Local_536.f_1, true, false))
		{
			load_anim_scene(Local_536.f_1);
		}
		set_anim_scene_bool(Local_536.f_1, "BOOL_START", false, false);
		set_anim_scene_bool(Local_536.f_1, "Bool", true, false);
		set_anim_scene_bool(Local_536.f_1, "DEAD_BOOL", false, false);
		_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_ENTER");
	}
	else
	{
		Local_536.f_1 = _create_anim_scene(Local_536.f_5, 0, 0, false, true);
		set_anim_scene_origin(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]), 0);
		if (!_is_anim_scene_loaded(Local_536.f_1, true, false))
		{
			load_anim_scene(Local_536.f_1);
		}
		set_anim_scene_bool(Local_536.f_1, "DEAD_BOOL", false, false);
		_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_DEAD_LOOP");
	}
}

void func_51(var uParam0, int iParam1)
{
	vVar0 = { func_139(uParam0) };
	iVar3 = func_97(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_52(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_53(var uParam0)
{
	func_81(uParam0, 1);
	func_140(uParam0, 20);
}

void func_54(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_55(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_56(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_119(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_141())
	{
		func_142(1);
	}
	func_143(iParam2, uParam0->f_43);
	func_144(iParam2, 0, 0, 0, 0);
	if (func_145(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_88(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_146(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_57(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_58(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_147())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_55(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_56(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_57(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_148(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_149(uParam0, bVar0);
		func_150(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_151(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_56(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_57(&(uParam0->f_121));
		}
	}
}

bool func_59(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_28(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_152())
			{
				fVar0 = 15f;
			}
		}
		if (func_153(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_154(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_153(uParam2, fVar1))
		{
			if (!func_155((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_156(uParam2->f_3, 2) && func_157(2))
		{
			return false;
		}
		if (func_28(iParam0, 4194304) || func_28(iParam0, 33554432))
		{
			if (func_158(1))
			{
				return false;
			}
		}
	}
	if (func_159(Global_35))
	{
		return false;
	}
	if (func_160(0, 1, 1) && !func_161(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_28(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_162(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_154(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_163())
		{
			return false;
		}
		iVar2 = func_165(func_164());
		if (func_166(iVar2))
		{
			if (func_167(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_168(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_169(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_60(var uParam0, int iParam1)
{
	if (func_170(uParam0->f_51))
	{
		func_171(uParam0->f_51, 0);
		fVar0 = func_172(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_173());
		bVar1 = func_94(!func_28(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_175(iVar2, func_174(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_61()
{
	if (!is_entity_dead(&(uLocal_395[0])))
	{
		switch (iVar707)
		{
			case 0:
				_0x8b3b71c80a29a4bb(&(uLocal_395[0]), -725351883, 6);
				break;
			case 1:
				_0x8b3b71c80a29a4bb(&(uLocal_395[0]), -1561793977, 6);
				break;
			case 2:
				_0x8b3b71c80a29a4bb(&(uLocal_395[0]), 137506481, 6);
				break;
		}
	}
	if (!is_entity_dead(&(uLocal_395[1])))
	{
		switch (iVar708)
		{
			case 0:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), -988409641, 6);
				break;
			case 1:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), 320243264, 6);
				break;
			case 2:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), -78783508, 6);
				break;
			case 3:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), -1561793977, 6);
				break;
			case 5:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), -725351883, 6);
				break;
			case 4:
				_0x8b3b71c80a29a4bb(&(uLocal_395[1]), 137506481, 6);
				break;
		}
	}
	if (!is_entity_dead(&(uLocal_395[2])))
	{
		switch (iVar709)
		{
			case 0:
				_0x8b3b71c80a29a4bb(&(uLocal_395[2]), 1201781013, 6);
				break;
			case 1:
				_0x8b3b71c80a29a4bb(&(uLocal_395[2]), 320243264, 6);
				break;
			case 2:
				_0x8b3b71c80a29a4bb(&(uLocal_395[2]), 137506481, 6);
				break;
		}
	}
}

void func_62()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iVar702 == 2)
	{
		return;
	}
	iVar0 = func_177(uLocal_395[2], Local_544[2], 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, func_176(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	iVar1 = func_177(uLocal_395[0], Local_544[0], 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, func_176(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	iVar2 = func_177(uLocal_395[1], Local_544[1], 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, func_176(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	switch (iVar705)
	{
		case 0:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					break;
				case 3:
					if (!func_178(&uLocal_775))
					{
						func_179(&uLocal_775);
					}
					if (func_180(&uLocal_775) >= 2f)
					{
						iLocal_735 = 1;
						iLocal_707 = 5;
						iLocal_708 = 0;
						Local_650[0]->f_13 = &sLocal_414[32];
						Local_650[1]->f_13 = &sLocal_414[33];
					}
					break;
			}
			break;
		case 1:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_181(&(uLocal_395[2]), Global_35, &(sLocal_414[43]), 3f, 0))
					{
						iLocal_708 = 3;
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[2]), Global_35, &(sLocal_414[43]), 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					iLocal_707 = 5;
					iLocal_708 = 0;
					break;
			}
			break;
		case 2:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[34]), 0f, 0))
						{
							iLocal_738 = 1;
							func_183(2);
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[2]), Global_35, &(sLocal_414[35]), 0f, 0))
						{
							iLocal_738 = 1;
							func_183(2);
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					break;
			}
			break;
		case 3:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[38]), 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[39]), 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					func_184(uLocal_395[2], Local_544[2], &Local_650, 1, 1);
					func_184(uLocal_395[0], Local_544[0], &Local_650, 1, 1);
					func_184(uLocal_395[1], Local_544[1], &Local_650, 1, 1);
					break;
			}
			break;
		case 5:
			func_185(Local_650[0], 0, 0);
			func_185(Local_650[1], 0, 0);
			func_185(Local_650[2], 0, 0);
			break;
	}
}

void func_63()
{
	iVar0 = -1;
	iVar1 = -1;
	if (iVar703 == 3)
	{
		return;
	}
	iVar0 = func_177(uLocal_395[0], Local_544[0], 30f, &Local_650, &(Local_15.f_192), 0f, 1, 0, 0, func_176(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	iVar1 = func_177(uLocal_395[1], Local_544[1], 30f, &Local_650, &(Local_15.f_192), 0f, 1, 0, 0, func_176(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	switch (iVar705)
	{
		case 0:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[34]), 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[35]), 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					if (func_182(-4f, 1, &(uLocal_395[0]), 1) && func_182(-4f, 1, &(uLocal_395[1]), 1))
					{
						func_186(Local_544[0], 0);
						func_186(Local_544[1], 0);
						func_187(Local_650[0], "RE_INTER_DEFUSE");
						Local_650[0]->f_13 = &sLocal_414[36];
						Local_650[1]->f_13 = &sLocal_414[37];
						func_185(Local_650[0], 1, 0);
						func_185(Local_650[1], 1, 0);
						func_188(Local_650[0], 0);
						func_188(Local_650[1], 0);
						iLocal_708 = 0;
						iLocal_707 = 3;
					}
					break;
			}
			break;
		case 3:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_182(0f, 1, Global_35, 1))
					{
						func_189(&(uLocal_395[0]), Global_35, &(sLocal_414[38]), 0, -1082130432, 1, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
						iLocal_708 = 3;
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[39]), 0f, 1))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					if (func_182(-4f, 1, &(uLocal_395[0]), 1) && func_182(-4f, 1, &(uLocal_395[1]), 1))
					{
						func_186(Local_544[0], 0);
						func_186(Local_544[1], 0);
						Local_650[0]->f_13 = &sLocal_414[40];
						Local_650[1]->f_13 = &sLocal_414[41];
						func_187(Local_650[0], "RE_INTER_DEFUSE");
						func_185(Local_650[0], 1, 0);
						func_185(Local_650[1], 1, 0);
						func_188(Local_650[0], 0);
						func_188(Local_650[1], 0);
						iLocal_708 = 0;
						iLocal_707 = 4;
					}
					break;
			}
			break;
		case 4:
			switch (iVar706)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[42]), 0f, 1))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (func_182(0f, 1, Global_35, 1))
					{
						if (func_181(&(uLocal_395[0]), Global_35, &(sLocal_414[43]), 0f, 1))
						{
							iLocal_738 = 1;
							func_190(3);
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					func_185(Local_650[0], 0, 0);
					func_185(Local_650[1], 0, 0);
					func_185(Local_650[2], 0, 0);
					break;
			}
			break;
		case 5:
			func_185(Local_650[0], 0, 0);
			func_185(Local_650[1], 0, 0);
			func_185(Local_650[2], 0, 0);
			break;
	}
}

void func_64()
{
	iLocal_729 = 1;
	func_191();
	func_192();
	func_193(65f);
	if (func_194(&Local_15, 1f, 150f, 60f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
	{
		func_185(Local_650[1], 1, 0);
		set_anim_scene_bool(Local_536.f_1, "BOOL_START", true, false);
		_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_DEAD_LOOP");
		func_193(160f);
		start_audio_scene("BOAT_ATTACK_SCENE");
		func_183(1);
	}
}

void func_65()
{
	iLocal_730 = 1;
	iLocal_729 = 0;
	func_195();
	func_196();
	func_197(Global_35, &(uLocal_395[0]), &uLocal_511, -1, 50);
	if ((iVar720 == 1 || bVar735) || iVar733 == 1)
	{
		func_198();
		if (iVar730 == 1)
		{
			if (func_199())
			{
				func_200();
			}
		}
		else
		{
			func_200();
		}
	}
	else
	{
		func_201();
		if (iVar718 == 0)
		{
			func_202();
		}
	}
	func_203();
	func_204();
	if (is_ped_in_vehicle(&(uLocal_395[2]), iVar405, false) && fVar757 >= 0.99f)
	{
		iLocal_735 = 0;
		iLocal_707 = 1;
		iLocal_708 = 0;
		remove_anim_scene_entity(Local_536.f_1, "MALE_A", &(uLocal_395[2]));
		remove_anim_scene_entity(Local_536.f_1, "MALE_B", &(uLocal_395[1]));
		remove_anim_scene_entity(Local_536.f_1, "MALE_C", &(uLocal_395[0]));
		remove_anim_scene_entity(Local_536.f_1, "OAR_A", iVar406);
		remove_anim_scene_entity(Local_536.f_1, "OAR_B", iVar407);
		remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
		set_anim_scene_origin(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		attach_anim_scene_to_entity(Local_536.f_1, iVar405, 0);
		_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_DUMP_EM_HERE");
		_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_DEAD_LOOP", true);
		func_183(3);
	}
	if (_0x3ab6c7b0bb0df4b1(&(uLocal_395[1]), Local_536.f_1) && fVar757 >= 0.93f)
	{
		iLocal_710 = 1;
		iLocal_711 = 1;
	}
	if (_0x3ab6c7b0bb0df4b1(&(uLocal_395[1]), Local_536.f_1) && fVar757 >= 0.96f)
	{
		iLocal_710 = 3;
		iLocal_711 = 0;
	}
	func_205();
	func_206();
	func_192();
	func_207();
}

void func_66()
{
	func_208();
	set_boat_anchor(iVar405, false);
	remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
	iLocal_709 = 2;
	iLocal_710 = 4;
	iLocal_711 = 2;
	if (!is_entity_dead(&(uLocal_395[0])))
	{
		set_ped_seeing_range(&(uLocal_395[0]), 120f);
	}
	if (!is_entity_dead(&(uLocal_395[1])))
	{
		set_ped_seeing_range(&(uLocal_395[1]), 120f);
	}
	if (!is_entity_dead(&(uLocal_395[2])))
	{
		set_ped_seeing_range(&(uLocal_395[2]), 120f);
	}
	func_209();
	func_22(&Local_15);
	if (iVar726 == 1)
	{
		func_210();
	}
	else if (iVar728 == 1)
	{
		func_211();
	}
	else if (iVar727 == 1)
	{
		func_211();
	}
	if ((is_entity_at_coord(iVar405, Local_15.f_51, 10f, 10f, 10f, false, true, 0) || iVar508 == 0) || func_212(5, 5) == 1)
	{
		set_ped_combat_attributes(&(uLocal_395[0]), 1, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 1, false);
		set_ped_combat_attributes(&(uLocal_395[2]), 1, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 3, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 3, true);
		set_ped_combat_attributes(&(uLocal_395[2]), 3, true);
	}
	else
	{
		set_ped_combat_attributes(&(uLocal_395[0]), 1, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 1, true);
		set_ped_combat_attributes(&(uLocal_395[2]), 1, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 3, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 3, false);
		set_ped_combat_attributes(&(uLocal_395[2]), 3, false);
	}
	func_213();
	if (!is_ped_dead_or_dying(&(uLocal_395[0]), true))
	{
		if (!does_blip_exist(&(iLocal_401[0])))
		{
			iLocal_401[0] = _blip_add_for_entity(831283580, &(uLocal_395[0]));
		}
	}
	if (!is_ped_dead_or_dying(&(uLocal_395[1]), true))
	{
		if (!does_blip_exist(&(iLocal_401[1])))
		{
			iLocal_401[1] = _blip_add_for_entity(831283580, &(uLocal_395[1]));
		}
	}
	if (!is_ped_dead_or_dying(&(uLocal_395[2]), true))
	{
		if (!does_blip_exist(&(iLocal_401[2])))
		{
			iLocal_401[2] = _blip_add_for_entity(831283580, &(uLocal_395[2]));
		}
	}
	func_207();
}

void func_67()
{
	iLocal_730 = 0;
	if (!func_214())
	{
		func_202();
	}
	if (!func_192())
	{
		if ((is_ped_in_vehicle(&(uLocal_395[0]), iVar405, false) && is_ped_in_vehicle(&(uLocal_395[1]), iVar405, false)) && is_ped_in_vehicle(&(uLocal_395[2]), iVar405, false))
		{
			if (is_ped_in_vehicle(&(uLocal_395[1]), iVar405, false) || iVar729 == 1)
			{
				if (iVar721 == 0)
				{
					iLocal_723 = 1;
					iLocal_710 = 2;
					set_boat_anchor(iVar405, false);
					fLocal_759 = 0f;
					task_boat_mission(&(uLocal_395[1]), iVar405, 0, 0, vLocal_489, 4, 3f, 16777216, 4f, 20509);
				}
			}
		}
		if (func_215())
		{
			func_216();
		}
		if (is_entity_at_coord(&(uLocal_395[0]), vLocal_489, 10f, 10f, 10f, false, true, 0) && !_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_DUMP_EM_HERE"))
		{
			set_anim_scene_bool(Local_536.f_1, "Bool", true, false);
			_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_DUMP_EM_HERE");
			_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		}
		if (is_entity_at_coord(&(uLocal_395[0]), vLocal_489, 5f, 5f, 10f, false, true, 0))
		{
			func_179(&uLocal_769);
			func_183(4);
		}
	}
	func_207();
	func_205();
	func_206();
}

void func_68()
{
	iLocal_728 = 1;
	func_208();
	if (func_180(&uLocal_769) > 3f && iVar722 == 0)
	{
		set_boat_anchor(iVar405, true);
		func_179(&uLocal_766);
		iLocal_709 = 1;
		iLocal_710 = 3;
		set_anim_scene_entity(Local_536.f_1, "MALE_A", &(uLocal_395[2]), 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_B", &(uLocal_395[1]), 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_C", &(uLocal_395[0]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]), 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_A", iVar406, 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_B", iVar407, 0);
		set_anim_scene_entity(Local_536.f_1, "rowboat", iVar405, 0);
		_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		Local_15.f_44 = 1;
		func_217();
		iLocal_724 = 1;
	}
	if (iVar720 == 0 && iVar722 == 1)
	{
		func_197(&(uLocal_395[2]), &(uLocal_395[1]), &uLocal_511, -1, 15);
		func_218();
	}
	if (func_215() || iVar733 == 1)
	{
		func_216();
	}
	if (iVar723 == 1)
	{
		func_210();
	}
	if (func_180(&uLocal_766) >= 2f)
	{
		if (fVar757 >= 0.99f)
		{
			if (iVar721 == 1)
			{
				iLocal_723 = 0;
				iLocal_709 = 0;
				iLocal_710 = 2;
				set_boat_anchor(iVar405, false);
				func_22(&Local_15);
				_0x7c06330bfdda182e(iVar405);
				task_boat_mission(&(uLocal_395[1]), iVar405, 0, 0, vLocal_492, 4, 3f, 16777216, 1f, 4125);
			}
		}
		else
		{
			func_219();
		}
		if (fVar757 >= 0.53f)
		{
			remove_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]));
		}
		if (fVar757 >= 0.83f)
		{
			remove_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]));
		}
	}
	func_192();
	func_207();
	func_205();
	func_206();
	if (is_entity_at_coord(&(uLocal_395[0]), vLocal_492, 5f, 5f, 10f, false, true, 0))
	{
		if (iVar705 != 3 && iVar705 != 4)
		{
			func_187(Local_650[0], "RE_INTER_POS");
			func_188(Local_650[0], 0);
			func_188(Local_650[1], 0);
			func_185(Local_650[0], 1, 0);
			func_185(Local_650[1], 1, 0);
			iLocal_708 = 0;
			Local_650[0]->f_13 = &sLocal_414[36];
			Local_650[1]->f_13 = &sLocal_414[37];
			iLocal_707 = 3;
		}
		set_boat_anchor(iVar405, true);
		func_183(5);
	}
}

void func_69()
{
	func_192();
	func_207();
	func_220();
	func_221();
	if (func_214())
	{
		func_222();
	}
	if (!func_223(&(uLocal_395[0]), 242628503))
	{
		clear_sequence_task(&uLocal_717);
		open_sequence_task(&uLocal_717);
		task_leave_vehicle(0, uVar405, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			task_follow_waypoint_recording(0, uVar462, 0, 9216, -1, 0, 0, -1);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		_task_move_in_traffic_2(0, 2520.57f, 817.82f, 72.93f, 1073741824, 1f, 528, 0);
		task_wander_in_area(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128, 1086324736, 1);
		close_sequence_task(iVar715);
		_task_perform_sequence_2(&(uLocal_395[0]), iVar715, 0.5f, 0.5f);
		clear_sequence_task(&uLocal_717);
	}
	if (!func_223(&(uLocal_395[1]), 242628503))
	{
		clear_sequence_task(&uLocal_718);
		open_sequence_task(&uLocal_718);
		task_leave_vehicle(0, uVar405, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			task_follow_waypoint_recording_at_offset(0, uVar462, 0.5f, 0, 9216, -1, 0);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		_task_move_in_traffic_2(0, 2520.57f, 817.82f, 72.93f, 1073741824, 1f, 528, 0);
		task_wander_in_area(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128, 1086324736, 1);
		close_sequence_task(iVar716);
		task_perform_sequence(&(uLocal_395[1]), iVar716);
		clear_sequence_task(&uLocal_718);
	}
	if (!func_223(&(uLocal_395[2]), 242628503))
	{
		clear_sequence_task(&uLocal_719);
		open_sequence_task(&uLocal_719);
		task_leave_vehicle(0, uVar405, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			task_follow_waypoint_recording_at_offset(0, uVar462, -0.5f, 0, 9216, -1, 0);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		_task_move_in_traffic_2(0, 2520.57f, 817.82f, 72.93f, 1073741824, 1f, 528, 0);
		task_wander_in_area(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128, 1086324736, 1);
		close_sequence_task(iVar717);
		_task_perform_sequence_2(&(uLocal_395[2]), iVar717, 1f, 1f);
		clear_sequence_task(&uLocal_719);
	}
}

float func_70(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_224(Global_35, iParam0, bParam1, bParam2);
}

void func_71()
{
	iLocal_729 = 1;
	func_192();
	func_193(65f);
	func_225();
	if (iLocal_14 == 1 && iVar731 == 0)
	{
		iLocal_733 = 1;
		iLocal_709 = 0;
		iLocal_710 = 2;
	}
	if (func_194(&Local_15, 1f, 150f, 60f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
	{
		task_boat_mission(&(uLocal_395[1]), iVar405, 0, 0, vLocal_489, 4, 2f, 48, 4f, 20509);
		func_188(Local_650[0], 0);
		func_185(Local_650[1], 1, 0);
		func_193(160f);
		func_190(1);
	}
}

void func_72()
{
	iLocal_730 = 0;
	func_197(Global_35, &(uLocal_395[0]), &uLocal_511, -1, 50);
	if (!func_226())
	{
		func_227();
	}
	else
	{
		func_228();
	}
	if (!func_192())
	{
		if (is_ped_in_vehicle(&(uLocal_395[0]), iVar405, false) && is_ped_in_vehicle(&(uLocal_395[1]), iVar405, false))
		{
			if (iVar721 == 0)
			{
				iLocal_723 = 1;
				set_boat_anchor(iVar405, false);
				fLocal_759 = 0f;
			}
		}
		if (bVar744 && func_182(-5f, 1, 0, 0))
		{
			if (is_entity_at_coord(&(uLocal_395[0]), vLocal_489, 10f, 10f, 10f, false, true, 0) && !_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_DUMP_EM_HERE"))
			{
				set_anim_scene_bool(Local_536.f_1, "Bool", true, false);
				_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_DUMP_EM_HERE");
			}
			if (is_entity_at_coord(&(uLocal_395[0]), vLocal_489, 5f, 5f, 10f, false, true, 0))
			{
				func_179(&uLocal_769);
				func_190(2);
			}
		}
	}
	func_205();
	func_206();
}

void func_73()
{
	iLocal_728 = 1;
	func_208();
	if (func_180(&uLocal_769) > 3f && iVar722 == 0)
	{
		set_boat_anchor(iVar405, true);
		func_179(&uLocal_766);
		iLocal_710 = 3;
		iLocal_709 = 1;
		set_anim_scene_origin(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		attach_anim_scene_to_entity(Local_536.f_1, iVar405, 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_B", &(uLocal_395[1]), 0);
		set_anim_scene_entity(Local_536.f_1, "MALE_C", &(uLocal_395[0]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]), 0);
		set_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]), 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_A", iVar406, 0);
		set_anim_scene_entity(Local_536.f_1, "OAR_B", iVar407, 0);
		set_anim_scene_entity(Local_536.f_1, "rowboat", iVar405, 0);
		_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		func_217();
		Local_15.f_44 = 1;
		iLocal_724 = 1;
	}
	if (!func_226())
	{
		func_229();
	}
	else
	{
		func_228();
	}
	if (func_180(&uLocal_766) >= 2f)
	{
		if (fVar757 >= 0.99f)
		{
			if (iVar721 == 1)
			{
				iLocal_723 = 0;
				iLocal_709 = 0;
				iLocal_710 = 2;
				set_boat_anchor(iVar405, false);
				func_22(&Local_15);
				_0x7c06330bfdda182e(iVar405);
				task_boat_mission(&(uLocal_395[1]), iVar405, 0, 0, vLocal_492, 4, 3f, 16777216, 1f, 4125);
			}
		}
		else
		{
			func_219();
		}
		if (fVar757 >= 0.53f)
		{
			remove_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]));
		}
		if (fVar757 >= 0.83f)
		{
			remove_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]));
		}
	}
	if (!func_226())
	{
		if (iVar721 == 0)
		{
			func_230();
		}
	}
	func_192();
	func_205();
	func_206();
	if (is_entity_at_coord(&(uLocal_395[0]), vLocal_492, 5f, 5f, 10f, false, true, 0))
	{
		if (iVar705 != 3 && iVar705 != 4)
		{
			func_187(Local_650[0], "RE_INTER_POS");
			func_188(Local_650[0], 0);
			func_188(Local_650[1], 0);
			func_185(Local_650[0], 1, 0);
			func_185(Local_650[1], 1, 0);
			iLocal_708 = 0;
			Local_650[0]->f_13 = &sLocal_414[36];
			Local_650[1]->f_13 = &sLocal_414[37];
			iLocal_707 = 3;
		}
		set_boat_anchor(iVar405, true);
		func_190(4);
	}
}

void func_74()
{
	func_192();
	func_205();
	func_220();
	if (func_226())
	{
		func_222();
	}
	if (!func_223(&(uLocal_395[0]), 242628503))
	{
		clear_sequence_task(&uLocal_717);
		open_sequence_task(&uLocal_717);
		task_leave_vehicle(0, uVar405, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			task_follow_waypoint_recording(0, uVar462, 0, 9216, -1, 0, 0, -1);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		_task_move_in_traffic_2(0, 2520.57f, 817.82f, 72.93f, 1073741824, 1f, 528, 0);
		task_wander_in_area(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128, 1086324736, 1);
		close_sequence_task(iVar715);
		_task_perform_sequence_2(&(uLocal_395[0]), iVar715, 0.5f, 0.5f);
		clear_sequence_task(&uLocal_717);
	}
	if (!func_223(&(uLocal_395[1]), 242628503))
	{
		clear_sequence_task(&uLocal_718);
		open_sequence_task(&uLocal_718);
		task_leave_vehicle(0, uVar405, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			task_follow_waypoint_recording_at_offset(0, uVar462, 0.5f, 0, 9216, -1, 0);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		_task_move_in_traffic_2(0, 2520.57f, 817.82f, 72.93f, 1073741824, 1f, 528, 0);
		task_wander_in_area(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128, 1086324736, 1);
		close_sequence_task(iVar716);
		task_perform_sequence(&(uLocal_395[1]), iVar716);
		clear_sequence_task(&uLocal_718);
	}
}

void func_75()
{
	func_208();
	set_boat_anchor(iVar405, false);
	iLocal_709 = 2;
	iLocal_710 = 4;
	if (!is_entity_dead(&(uLocal_395[0])))
	{
		set_ped_seeing_range(&(uLocal_395[0]), 120f);
	}
	if (!is_entity_dead(&(uLocal_395[1])))
	{
		set_ped_seeing_range(&(uLocal_395[1]), 120f);
	}
	func_209();
	func_22(&Local_15);
	if (iVar726 == 1)
	{
		func_210();
	}
	else if (iVar728 == 1)
	{
		func_211();
	}
	else if (iVar727 == 1)
	{
		func_211();
	}
	if ((is_entity_at_coord(iVar405, Local_15.f_51, 10f, 10f, 10f, false, true, 0) || iVar508 == 0) || func_212(5, 5) == 1)
	{
		set_ped_combat_attributes(&(uLocal_395[0]), 1, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 1, false);
		set_ped_combat_attributes(&(uLocal_395[0]), 3, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 3, true);
	}
	else if (is_ped_dead_or_dying(&(uLocal_395[1]), true))
	{
		set_ped_combat_attributes(&(uLocal_395[0]), 1, true);
		set_ped_combat_attributes(&(uLocal_395[1]), 1, true);
		set_ped_combat_attributes(&(uLocal_395[0]), 3, false);
		set_ped_combat_attributes(&(uLocal_395[1]), 3, false);
	}
	if (!func_178(&uLocal_763))
	{
		func_179(&uLocal_763);
	}
	if (!func_231(&(uLocal_395[0]), 0))
	{
		if (iVar723 == 0 || iVar726 == 0)
		{
			if (!is_entity_dead(&(uLocal_395[0])))
			{
				task_combat_ped(&(uLocal_395[0]), player_ped_id(), 0, 16);
			}
		}
		else if (_is_anim_scene_finished(Local_536.f_1, false) || iVar725 == 1)
		{
			if (!is_entity_dead(&(uLocal_395[0])))
			{
				task_combat_ped(&(uLocal_395[0]), player_ped_id(), 0, 16);
			}
		}
	}
	if (!func_231(&(uLocal_395[1]), 0) && func_180(&uLocal_763) >= 0.8f)
	{
		if (iVar723 == 0 || iVar726 == 0)
		{
			if (!is_entity_dead(&(uLocal_395[1])))
			{
				task_combat_ped(&(uLocal_395[1]), player_ped_id(), 0, 0);
			}
		}
		else if (_is_anim_scene_finished(Local_536.f_1, false) || iVar725 == 1)
		{
			if (!is_entity_dead(&(uLocal_395[1])))
			{
				task_combat_ped(&(uLocal_395[1]), player_ped_id(), 0, 16);
			}
		}
	}
	if (!is_ped_dead_or_dying(&(uLocal_395[0]), true))
	{
		if (!does_blip_exist(&(iLocal_401[0])))
		{
			iLocal_401[0] = _blip_add_for_entity(831283580, &(uLocal_395[0]));
		}
	}
	if (!is_ped_dead_or_dying(&(uLocal_395[1]), true))
	{
		if (!does_blip_exist(&(iLocal_401[1])))
		{
			iLocal_401[1] = _blip_add_for_entity(831283580, &(uLocal_395[1]));
		}
	}
}

bool func_76()
{
	if (!func_232(Global_1395482->f_1))
	{
		return false;
	}
	return func_233(Global_1395482->f_1, 32);
}

bool func_77(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return false;
	}
	return (1 == func_234(iParam0) || 2 == func_234(iParam0));
}

float func_78(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 16384);
	}
	else
	{
		func_54(&(uParam0->f_1), 16384);
	}
}

void func_80(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 2048);
	}
	else
	{
		func_54(&(uParam0->f_1), 2048);
	}
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 256);
	}
	else
	{
		func_54(&(uParam0->f_1), 256);
	}
}

void func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(iParam0, 16);
	}
	else
	{
		func_235(iParam0, 67108864);
		func_235(iParam0, 16);
	}
}

void func_83(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(iParam0->f_1), 128);
	}
	else
	{
		func_54(&(iParam0->f_1), 128);
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(iParam0, 256);
	}
	else
	{
		func_235(iParam0, 256);
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_54(iParam0, 268435456);
	}
	else
	{
		func_235(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_54(iParam0, 1073741824);
	}
	else
	{
		func_235(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_54(iParam0, 536870912);
	}
	else
	{
		func_235(iParam0, 536870912);
	}
}

var func_86(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_87(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_236(sParam1));
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_89(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_237(iParam0, iParam1);
}

void func_91(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_238(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_92(var uParam0, var uParam1)
{
	if (func_28(uParam0->f_3, 16777216))
	{
		if (func_239(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_93(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_94(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_95(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_90(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_94(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_240(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_96(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_241(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_242(uParam0);
	func_243(uParam0);
	func_244(uParam0);
	if (!func_245(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_171(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_246();
	}
	if (!func_247(uParam0->f_3) && !func_28(uParam0->f_3, 256))
	{
		func_248(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_249(uParam0->f_173);
	func_249(uParam0->f_172);
}

int func_97(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_250() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_99(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_251(vVar0, vVar3, 0f) };
	vVar9 = { func_252(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_100(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_251(vVar0, vVar3, 0f) };
	vVar9 = { func_252(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

void func_101(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_253(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_186(iParam0, 0);
		}
	}
}

void func_102(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_254((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_253(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_103(int iParam0)
{
	if (((func_19(iParam0, 1) && func_19(iParam0, 2)) && func_19(iParam0, 8)) && func_19(iParam0, 512))
	{
		return true;
	}
	return false;
}

Vector3 func_104(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_119(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_255(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_256(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_105(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_28(iParam0, 32))
	{
		if (func_257(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_258(Global_35, &(uParam1->f_12)) };
				if (!func_109(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_259(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_172(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_173());
		if (func_260(Global_1310750[iParam0], 33554432))
		{
			func_175(iVar0, func_174(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_175(iVar0, func_174(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_28(iParam0, 1))
		{
			func_261(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_262(iParam0);
}

bool func_106(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_263(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_55(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_264(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_264(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_107(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_265(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_28(iParam0, 1))
			{
				if (func_55(iParam0, 2))
				{
				}
			}
			func_266(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_267(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_267(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_77(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_108(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_255(iParam1))
	{
		if (!func_268(iParam1, iVar0))
		{
			vVar4 = { func_104(iParam1, iVar0) };
			if (!func_109(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_114(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_269(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_109(vVar4))
	{
	}
	return vVar1;
}

bool func_109(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_110(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_18("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_111(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_255(iParam0))
	{
		vVar1 = { func_104(iParam0, iVar0) };
		if (func_270(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_112(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_113(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_271(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_272(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_109(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_273(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_110(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_114(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_107(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_28(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_115(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_116(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_274(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_275(iParam0, uParam2))
	{
		return false;
	}
	if (!func_276(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_277(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_117(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_118(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_119(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_120(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_121(int iParam0, int iParam1)
{
	if (func_278(iParam0))
	{
		return;
	}
	if (func_279(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_122(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_235(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_124(bool bParam0)
{
	if (bParam0)
	{
		return func_280(Global_1359489->f_4);
	}
	get_group_size(func_281(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_281(), iVar3);
		if (func_282(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_283(iParam0) % iParam1);
	}
	return (func_284(iParam0) % iParam1);
}

void func_126(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_285(&((*uParam0)[iVar0]->f_1));
		func_285(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_127(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

void func_128(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_254(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_286(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_287(iParam0->f_6, iParam0->f_5, 0);
			}
			func_288(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_187(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_129(var uParam0)
{
	if (!func_289(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_289(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_130()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_131(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_290(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_291(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_292(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_293(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_294(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_290(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_291(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_295(&(uParam0->f_22)));
					Var2 = { func_290(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_291(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_292(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_296(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_297(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	if ((func_298(iParam0, 16777216) && func_298(iParam0, 33554432)) && func_298(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_298(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_298(iParam0, 16777216))
	{
		if (!func_299(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_298(iParam0, 268435456) && func_300(iVar2))
	{
		if (!func_299(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_299(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_301(iParam3, 1);
	bVar1 = func_301(iParam3, 2);
	bVar2 = !func_301(iParam3, 4);
	bVar3 = func_301(iParam3, 8);
	bVar4 = !func_301(iParam3, 16);
	bVar5 = func_301(iParam3, 32);
	bVar6 = func_301(iParam3, 64);
	return func_302(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_134(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_303(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_304(iParam0);
		func_305(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 8);
	}
	else
	{
		func_54(&(uParam0->f_1), 8);
	}
}

void func_137(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 4);
	}
	else
	{
		func_54(&(uParam0->f_1), 4);
	}
}

void func_138(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(&(uParam0->f_1), 2);
	}
	else
	{
		func_54(&(uParam0->f_1), 2);
	}
}

Vector3 func_139(var uParam0)
{
	return uParam0->f_51;
}

void func_140(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_141()
{
	return &Global_1935436 == 2;
}

void func_142(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_143(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_28(iParam0, 2))
	{
		func_307(iParam0, func_306(iParam1));
	}
	else
	{
		func_309(iParam0, func_308());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_310(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_311(iParam0, 0);
	func_312(iParam0);
	func_313(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_28(iParam0, 16))
	{
		func_144(iParam0, 0, 0, 0, 0);
	}
}

void func_144(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_314() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_119(iVar1) && !func_28(iVar1, iParam2)) && (!bParam3 || !func_161(iVar1))) && (!bParam4 || !func_315(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_316(iVar0);
			}
		}
		iVar0++;
	}
}

int func_145(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_146(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_260(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_28(uParam0->f_3, 1073741824))
			{
				func_317(2, -1, 0, 0, 0);
			}
			else
			{
				func_317(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_317(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_318(1, uParam0->f_177))
				{
					func_319(16, uParam0->f_177);
					func_320(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_321(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_317(8, -1, 0, 0, 0);
	}
}

int func_147()
{
	if (func_299(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_322())
		{
			return 1;
		}
	}
	return 0;
}

bool func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_149(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_28(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_28(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_28(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_28(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_28(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_28(uParam0->f_3, 1))
		{
		}
		else if (func_28(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_150(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_323(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_324(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_325() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_151(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_57(uParam0);
	return true;
}

bool func_152()
{
	return (Global_1894899 & 1 != 0 && func_164() != -1);
}

bool func_153(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_326(bParam1, bParam2, bParam3);
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

bool func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_328(func_327());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	return (func_145(iParam0) && iParam1) != 0;
}

bool func_157(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_329(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_330(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_331(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_332(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_333(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_334(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_335(iVar3))
	{
		return true;
	}
	return false;
}

bool func_158(bool bParam0)
{
	if (func_336(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_159(int iParam0)
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

bool func_160(int iParam0, bool bParam1, bool bParam2)
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
		if (func_337())
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
		iVar0 = func_338(&(Global_1898164->f_1[0]));
		if (func_339(iVar0) && func_340((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_341(&(Global_1898164->f_1[0])))
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

bool func_161(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	if (func_342(64) && func_343(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_162(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_344(iVar0) || func_345(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_163()
{
	return Global_1894899 & 4 != 0;
}

int func_164()
{
	return Global_1894899->f_2;
}

int func_165(int iParam0)
{
	if (!func_346(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_166(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_167(vector3 vParam0, int iParam3)
{
	if (!func_166(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_168(vector3 vParam0)
{
	if (func_109(vParam0))
	{
		return false;
	}
	fVar0 = func_94(func_152(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_169(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_179(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_179(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_178(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_347(uParam0, fParam2))
		{
			return true;
		}
		if (func_178(uParam0))
		{
			func_348(uParam0);
		}
	}
	return false;
}

bool func_170(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_171(vector3 vParam0, int iParam3)
{
	if (func_109(vParam0))
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
			if (func_270(vVar2, vParam0, 2f, 1))
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

float func_172(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0f;
	}
	if (!func_349(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_173()
{
	return "unnamed";
}

char* func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_175(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_261(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_176(int iParam0, int iParam1, int iParam2)
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

int func_177(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_350(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_351(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_352(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_353(558))
				{
					func_354(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_178(var uParam0)
{
	return func_355(*uParam0, 1);
}

void func_179(var uParam0)
{
	func_356(uParam0, 0f);
}

float func_180(var uParam0)
{
	if (!func_178(uParam0))
	{
		return 0f;
	}
	if (func_357(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_325() - uParam0->f_1);
}

bool func_181(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!func_178(&uLocal_772))
	{
		func_179(&uLocal_772);
	}
	else if (func_180(&uLocal_772) > fParam3)
	{
		func_358(iParam0, iParam1, sParam2, 0, -1082130432, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_348(&uLocal_772);
		return true;
	}
	return false;
}

bool func_182(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_359(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_360(fParam0))
	{
		return false;
	}
	return true;
}

void func_183(int iParam0)
{
	iLocal_704 = iParam0;
	if (iVar701 == 2)
	{
		Local_15.f_44 = 1;
	}
}

void func_184(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_361(uParam0);
		func_23(iParam1, uParam2);
	}
	func_24(*uParam0, 1, bParam4);
}

void func_185(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_362(iParam0, 13))
	{
		func_363(iParam0, 0);
	}
	else
	{
		func_364(iParam0, 0);
	}
	if (func_254(iParam0->f_6))
	{
		if (bParam2)
		{
			func_253(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_186(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_348(&(iParam0->f_18));
}

void func_187(int* iParam0, char* sParam1)
{
	if (func_254(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_287(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_364(iParam0, 1);
}

void func_188(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_362(iParam0, 4))
		{
			func_253(&(iParam0->f_6), 1, 1);
			func_363(iParam0, 4);
		}
	}
	else if (func_362(iParam0, 4))
	{
		func_364(iParam0, 4);
		func_363(iParam0, 14);
	}
}

int func_189(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_152())
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
				if (func_70(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_224(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_179(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_365(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_367(func_366(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_190(int iParam0)
{
	iLocal_705 = iParam0;
	if (iVar702 == 3)
	{
		Local_15.f_44 = 1;
	}
}

void func_191()
{
	if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_ENTER"))
	{
		_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_ENTER", true);
	}
	if (_is_anim_scene_loaded(Local_536.f_1, true, false) && !_is_anim_scene_started(Local_536.f_1, false))
	{
		start_anim_scene(Local_536.f_1);
	}
}

bool func_192()
{
	if (func_368(&uLocal_395, &(Local_15.f_5), &uLocal_716, &uLocal_757, 0, 2, 1))
	{
		Local_15.f_46 = 1;
		Local_15.f_44 = 1;
		iLocal_744 = 1;
		if (iLocal_14 == 0)
		{
			stop_current_playing_speech(&(uLocal_395[0]), 0);
			stop_current_playing_speech(&(uLocal_395[1]), 0);
			stop_current_playing_speech(&(uLocal_395[2]), 0);
			func_183(2);
		}
		else
		{
			func_190(3);
			set_ped_combat_attributes(&(uLocal_395[0]), 1, false);
			set_ped_combat_attributes(&(uLocal_395[1]), 1, false);
			set_ped_combat_attributes(&(uLocal_395[0]), 3, true);
			set_ped_combat_attributes(&(uLocal_395[1]), 3, true);
		}
		return true;
	}
	return false;
}

void func_193(float fParam0)
{
	if (!does_blip_exist(Local_15.f_181))
	{
		if (func_369(Global_35, Local_15.f_51, 1) <= fParam0)
		{
			func_370(&(uLocal_395[2]), 5000);
		}
	}
}

bool func_194(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_149(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_147())
	{
		bVar1 = true;
		fVar3 = func_94(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_150(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_150(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_151(&(uParam0->f_121), iParam4, fParam1))
		{
			func_57(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_97(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_56(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_57(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_97(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_195()
{
	if (_is_anim_scene_started(Local_536.f_1, false))
	{
		if (_0x1f0e401031e20146(Local_536.f_1, "PBL_ENTER") && _0x3ab6c7b0bb0df4b1(&(uLocal_395[2]), Local_536.f_1))
		{
			if (fVar757 <= 0.67f)
			{
				iLocal_732 = 1;
			}
			else
			{
				iLocal_732 = 0;
			}
		}
	}
}

void func_196()
{
	fVar1 = 3f;
	if (is_ped_on_mount(Global_35))
	{
		fVar0 = get_ped_desired_move_blend_ratio(get_mount(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 2.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 3f;
		}
		else
		{
			fVar1 = 4f;
		}
	}
	else
	{
		fVar0 = get_ped_desired_move_blend_ratio(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 4f;
		}
	}
	iVar2 = 20;
	if (_get_ped_crouch_movement(Global_35))
	{
		iVar2 = 10;
	}
	if ((has_entity_clear_los_to_entity(&(uLocal_395[2]), Global_35, 17) || has_entity_clear_los_to_entity(&(uLocal_395[1]), Global_35, 17)) || has_entity_clear_los_to_entity(&(uLocal_395[0]), Global_35, 17))
	{
		if (!func_178(&uLocal_778) && is_entity_at_coord(Global_35, get_entity_coords(iVar405, true, false), IntToFloat(iVar2), IntToFloat(iVar2), 4f, false, true, 0))
		{
			func_179(&uLocal_778);
			iLocal_736 = 1;
		}
		if (func_180(&uLocal_778) >= fVar1)
		{
			if (is_entity_at_coord(Global_35, get_entity_coords(iVar405, true, false), IntToFloat(iVar2), IntToFloat(iVar2), 4f, false, true, 0) && iVar734 == 1)
			{
				iLocal_737 = 1;
			}
			else if (iVar710 == 0)
			{
				iLocal_736 = 0;
				iLocal_737 = 0;
				func_348(&uLocal_778);
			}
		}
	}
}

void func_197(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_224(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		task_look_at_entity(iParam0, iParam1, -1, 2108, 51, 1);
	}
	else
	{
		task_clear_look_at(iParam0);
	}
}

void func_198()
{
	func_221();
	func_22(&Local_15);
	switch (iVar747)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_395[0]), 0);
			stop_current_playing_speech(&(uLocal_395[1]), 0);
			stop_current_playing_speech(&(uLocal_395[2]), 0);
			if (func_182(-4f, 1, 0, 0))
			{
				if (func_358(&(uLocal_395[2]), player_ped_id(), &(sLocal_414[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_185(Local_650[0], 0, 0);
					func_185(Local_650[1], 0, 0);
					func_179(&uLocal_790);
					uLocal_749 = iVar747 + 1;
				}
			}
			break;
		case 1:
			if (func_182(0f, 1, &(uLocal_395[2]), 1) || func_180(&uLocal_790) > 4f)
			{
				iLocal_731 = 1;
				func_187(Local_650[0], "INTERACT_DEFUSE");
				iLocal_707 = 2;
				func_188(Local_650[0], 0);
				func_185(Local_650[0], 1, 0);
				func_185(Local_650[1], 1, 0);
				iLocal_708 = 0;
				func_348(&uLocal_793);
				Local_650[0]->f_13 = &sLocal_414[32];
				Local_650[1]->f_13 = &sLocal_414[33];
				iLocal_722 = 1;
				uLocal_749 = iVar747 + 1;
			}
			break;
		case 2:
			stop_current_playing_speech(&(uLocal_395[1]), 0);
			if (!func_371(player_id(), &(uLocal_395[2]), Local_544[2]) || func_182(-4f, 1, 0, 0))
			{
				if (func_182(-4f, 1, 0, 0))
				{
					func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_179(&uLocal_784);
					uLocal_749 = iVar747 + 1;
				}
			}
			break;
		case 3:
			if (!func_371(player_id(), &(uLocal_395[2]), Local_544[2]) || func_182(0f, 1, &(uLocal_395[1]), 1))
			{
				if (func_180(&uLocal_784) > 5f)
				{
					if (func_182(0f, 1, Global_35, 1))
					{
						iLocal_738 = 1;
						func_183(2);
					}
				}
			}
			break;
	}
}

bool func_199()
{
	switch (iVar710)
	{
		case 0:
			task_play_anim(&(uLocal_395[2]), &(Local_383[0]), Local_383[0]->f_1, 1.5f, -1.5f, -1, 32768, 0f, false, 0, false, 0, false);
			iLocal_712 = 1;
			break;
		case 1:
			if (is_entity_playing_anim(&(uLocal_395[2]), &(Local_383[0]), Local_383[0]->f_1, 1))
			{
				iLocal_712 = 2;
			}
			break;
		case 2:
			if (!is_entity_dead(&(uLocal_395[2])))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[2]), &(Local_383[0]), Local_383[0]->f_1) >= 0.9f || !is_entity_playing_anim(&(uLocal_395[2]), &(Local_383[0]), Local_383[0]->f_1, 1))
				{
					iLocal_712 = 3;
					iLocal_732 = 0;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_200()
{
	if (!func_223(&(uLocal_395[2]), 1630799643))
	{
		_give_weapon_to_ped_2(&(uLocal_395[2]), func_132(268435456, 1056964608, 1065353216), 999, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		task_aim_gun_at_entity(&(uLocal_395[2]), Global_35, -1, 0, 1);
		func_179(&uLocal_793);
	}
}

void func_201()
{
	if (func_192())
	{
		iLocal_720 = 0;
	}
	if (iVar718 == 1)
	{
		switch (iVar745)
		{
			case 0:
				if (fVar757 >= 0.42f)
				{
					if (func_372())
					{
						func_373(1515458263, &(uLocal_395[1]), 1);
					}
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 1:
				if (fVar757 >= 0.47f)
				{
					if (func_372())
					{
						func_373(1515458263, &(uLocal_395[2]), 1);
					}
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 2:
				if (fVar757 >= 0.51f)
				{
					if (func_372())
					{
						func_373(1515458263, &(uLocal_395[0]), 1);
					}
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 3:
				if (fVar757 >= 0.59f)
				{
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 4:
				if (fVar757 >= 0.63f)
				{
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 5:
				if (fVar757 >= 0.68f)
				{
					uLocal_747 = iVar745 + 1;
				}
				break;
			case 6:
				if (fVar757 >= 0.77f)
				{
					uLocal_747 = iVar745 + 1;
					iLocal_744 = 1;
				}
				break;
			case 7:
				if (fVar757 >= 0.85f)
				{
					iLocal_720 = 0;
					iLocal_744 = 1;
				}
				break;
		}
	}
}

void func_202()
{
	switch (iVar748)
	{
		case 0:
			if (func_182(-4f, 1, 0, 1))
			{
				uLocal_750 = iVar748 + 1;
			}
			break;
		case 1:
			if (func_182(-4f, 1, 0, 1))
			{
				uLocal_750 = iVar748 + 1;
			}
			break;
		case 2:
			if (func_182(-4f, 1, 0, 1))
			{
				uLocal_750 = iVar748 + 1;
			}
			break;
		case 3:
			if (func_182(-4f, 1, 0, 1))
			{
				uLocal_750 = iVar748 + 1;
			}
			break;
	}
}

void func_203()
{
	if (iVar729 == 1)
	{
		if (_does_anim_scene_exist(Local_536.f_1))
		{
			remove_anim_scene_entity(Local_536.f_1, "CIG", Local_209[0]->f_8);
		}
		if (fVar757 >= 0.5f && fVar757 <= 0.77f)
		{
			set_current_ped_weapon(&(uLocal_395[1]), func_132(268435456, 1056964608, 1065353216), false, 0, false, false);
			if (!func_374())
			{
				if (!func_223(&(uLocal_395[1]), -1794415470) && !func_223(&(uLocal_395[1]), 242628503))
				{
					clear_sequence_task(&uLocal_718);
					open_sequence_task(&uLocal_718);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 3);
					close_sequence_task(iVar716);
					_task_perform_sequence_2(&(uLocal_395[1]), iVar716, 0.5f, 0.5f);
					clear_sequence_task(&uLocal_718);
				}
			}
		}
		if (func_374())
		{
			if (!is_ped_in_vehicle(&(uLocal_395[2]), iVar405, true))
			{
				if (!func_223(&(uLocal_395[2]), -1794415470))
				{
					task_enter_vehicle(&(uLocal_395[2]), iVar405, 20000, 0, 1f, 1, 0);
				}
			}
			if (!is_ped_in_vehicle(&(uLocal_395[1]), iVar405, true) && iVar720 == 0)
			{
				if (!func_223(&(uLocal_395[1]), -1794415470))
				{
					task_enter_vehicle(&(uLocal_395[1]), iVar405, 20000, -1, 1f, 1, 0);
				}
			}
		}
	}
}

void func_204()
{
	if (func_178(&uLocal_793))
	{
		if (func_180(&uLocal_793) > 7f)
		{
			set_boat_anchor(iVar405, false);
			remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
			stop_current_playing_speech(&(uLocal_395[0]), 0);
			stop_current_playing_speech(&(uLocal_395[1]), 0);
			stop_current_playing_speech(&(uLocal_395[2]), 0);
			if (iVar702 != 2)
			{
				func_183(2);
			}
		}
	}
}

void func_205()
{
	if (is_ped_in_vehicle(player_ped_id(), iVar405, true))
	{
		set_boat_anchor(iVar405, false);
		remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
		stop_current_playing_speech(&(uLocal_395[0]), 0);
		stop_current_playing_speech(&(uLocal_395[1]), 0);
		stop_current_playing_speech(&(uLocal_395[2]), 0);
		if (iLocal_14 == 0)
		{
			func_183(2);
		}
		else
		{
			func_190(3);
		}
	}
}

int func_206()
{
	if (is_ped_on_specific_vehicle(Global_35, iVar405))
	{
		set_boat_anchor(iVar405, false);
		remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
		stop_current_playing_speech(&(uLocal_395[0]), 0);
		stop_current_playing_speech(&(uLocal_395[1]), 0);
		stop_current_playing_speech(&(uLocal_395[2]), 0);
		if (iLocal_14 == 0)
		{
			func_183(2);
		}
		else
		{
			func_190(3);
		}
		return 1;
	}
	return 0;
}

void func_207()
{
	if (((is_ped_dead_or_dying(&(uLocal_395[0]), true) || _is_ped_hogtied(&(uLocal_395[0]))) && (is_ped_dead_or_dying(&(uLocal_395[1]), true) || _is_ped_hogtied(&(uLocal_395[1])))) && (is_ped_dead_or_dying(&(uLocal_395[2]), true) || _is_ped_hogtied(&(uLocal_395[2]))))
	{
		func_183(7);
	}
}

void func_208()
{
	if (_does_anim_scene_exist(Local_536.f_1) && _is_anim_scene_started(Local_536.f_1, false))
	{
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			if (((((_0x1f0e401031e20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_A1") || _0x1f0e401031e20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2")) || _0x1f0e401031e20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_B1")) || _0x1f0e401031e20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2")) || _0x1f0e401031e20146(Local_536.f_1, "PBL_BREAKOUT_LEAN")) || _0x1f0e401031e20146(Local_536.f_1, "PBL_DUMP_EM_HERE"))
			{
				_0xba8818212633500a(iVar405, 0, 1);
			}
			else
			{
				_0xba8818212633500a(iVar405, 0, 0);
			}
		}
		else
		{
			_0xba8818212633500a(iVar405, 0, 0);
		}
	}
	else
	{
		_0xba8818212633500a(iVar405, 0, 0);
	}
}

void func_209()
{
	if (iVar736 == 0)
	{
		uVar0[0] = &uLocal_395[0];
		uVar0[1] = &uLocal_395[1];
		uVar0[2] = &uLocal_395[2];
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (!is_entity_dead(&(uVar0[iVar4])) && !is_ped_ragdoll(&(uVar0[iVar4])))
			{
				func_375(&(uVar0[iVar4]), 0, &(Local_15.f_5), &uLocal_716, 0, 0);
				if (_is_ped_hogtied(&(uVar0[iVar4])) || _is_ped_lassoed(&(uVar0[iVar4])))
				{
					if (iVar737 == 0)
					{
						iLocal_739 = 1;
						iLocal_748 = 1;
					}
				}
				if (iVar714 == 8)
				{
					if (iVar738 == 0)
					{
						iLocal_740 = 1;
						iLocal_748 = 3;
					}
				}
				if (iVar714 == 4 || iVar714 == 256)
				{
					if (iVar741 == 0)
					{
						iLocal_743 = 1;
						iLocal_748 = 4;
					}
				}
				if (((iVar714 == 0 || iVar714 == 8192) || iVar714 == 1) || iVar714 == 32)
				{
					if (iVar739 == 0)
					{
						iLocal_741 = 1;
						iLocal_748 = 0;
					}
				}
				if (_0x29fce825613fefca(&(uVar0[iVar4]), 500) || _0xd0b7aeb56229d317(Global_35) == &uVar0[iVar4])
				{
					if (iVar740 == 0)
					{
						iLocal_742 = 1;
						iLocal_748 = 2;
					}
				}
				switch (iVar746)
				{
					case 0:
						if (func_181(&(uVar0[iVar4]), Global_35, &(sLocal_414[8]), 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 1:
						if (func_181(&(uVar0[iVar4]), Global_35, &(sLocal_414[9]), 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 2:
						if (func_181(&(uVar0[iVar4]), Global_35, &(sLocal_414[10]), 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 3:
						if (func_181(&(uVar0[iVar4]), Global_35, &(sLocal_414[11]), 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 4:
						if (iLocal_14 == 0)
						{
							if (&uVar0[iVar4] == &uLocal_395[0])
							{
								sVar5 = "GENERIC_ANGRY_REACTION";
							}
							else if (&uVar0[iVar4] == &uLocal_395[1])
							{
								sVar5 = "GENERIC_ANGRY_REACTION";
							}
							else if (&uVar0[iVar4] == &uLocal_395[2])
							{
								sVar5 = "GENERIC_CURSE_HIGH";
							}
						}
						else if (&uVar0[iVar4] == &uLocal_395[0])
						{
							sVar5 = "GENERIC_CURSE_HIGH";
						}
						else if (&uVar0[iVar4] == &uLocal_395[1])
						{
							sVar5 = "GENERIC_SHOCKED_HIGH";
						}
						if (iLocal_14 == 0 && &uVar0[iVar4] == &uLocal_395[2])
						{
							if (func_181(&(uVar0[iVar4]), Global_35, sVar5, 0.8f, 1))
							{
								iLocal_748 = -1;
								iLocal_738 = 1;
							}
						}
						else if (iLocal_14 == 1 && &uVar0[iVar4] == &uLocal_395[0])
						{
							if (func_181(&(uVar0[iVar4]), Global_35, sVar5, 0.8f, 1))
							{
								iLocal_748 = -1;
								iLocal_738 = 1;
							}
						}
						else if (func_181(&(uVar0[iVar4]), Global_35, sVar5, 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
				}
			}
			iVar4++;
		}
	}
}

void func_210()
{
	iLocal_725 = 1;
	if (func_376(&(uLocal_395[0]), "safetobreakout_breakout_dump_a1", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[0]), "safetobreakout_breakout_dump_a2", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[0]), "safetobreakout_breakout_lean", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[0]), "safetobreakout_breakout_dump_b1", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[0]), "safetobreakout_breakout_dump_b2", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[1]), "safetobreakout_breakout_dump_a1", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[1]), "safetobreakout_breakout_dump_a2", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[1]), "safetobreakout_breakout_lean", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[1]), "safetobreakout_breakout_dump_b1", 1067030938))
	{
	}
	if (func_376(&(uLocal_395[1]), "safetobreakout_breakout_dump_b2", 1067030938))
	{
	}
	if ((fVar757 < 0.35f && iVar725 == 0) && iVar724 == 0)
	{
		iLocal_727 = 1;
		_delete_anim_scene(Local_536.f_1);
		remove_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]));
		remove_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]));
		remove_anim_scene_entity(Local_536.f_1, "MALE_B", &(uLocal_395[1]));
		remove_anim_scene_entity(Local_536.f_1, "MALE_C", &(uLocal_395[0]));
	}
	if (iVar725 == 0)
	{
		if ((fVar757 >= 0.35f && fVar757 < 0.52f) && iVar724 == 0)
		{
			if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2"))
			{
				iLocal_727 = 1;
				iLocal_726 = 1;
			}
		}
		if ((fVar757 >= 0.55f && fVar757 < 0.7f) && iVar724 == 0)
		{
			if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_BREAKOUT_LEAN"))
			{
				iLocal_726 = 1;
				iLocal_727 = 1;
			}
		}
		if ((fVar757 >= 0.7f && fVar757 < 0.8f) && iVar724 == 0)
		{
			if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2"))
			{
				iLocal_726 = 1;
				iLocal_727 = 1;
			}
		}
		if ((fVar757 >= 0.8f && fVar757 < 0.99f) && iVar724 == 0)
		{
			if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_BREAKOUT_LEAN"))
			{
				iLocal_727 = 1;
				iLocal_726 = 1;
			}
		}
	}
}

void func_211()
{
	if (!is_ped_ragdoll(&(uLocal_395[4])))
	{
		set_ped_to_ragdoll(&(uLocal_395[4]), 1000, 4000, 0, false, true, false);
	}
	if (!is_ped_ragdoll(&(uLocal_395[3])))
	{
		set_ped_to_ragdoll(&(uLocal_395[3]), 1000, 4000, 0, false, true, false);
	}
	remove_anim_scene_entity(Local_536.f_1, "VICTIM_A", &(uLocal_395[3]));
	remove_anim_scene_entity(Local_536.f_1, "VICTIM_B", &(uLocal_395[4]));
}

int func_212(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_90(&(uLocal_395[iVar0]), 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_213()
{
	switch (iVar704)
	{
		case 0:
			Local_15.f_44 = 1;
			func_179(&uLocal_763);
			iLocal_706 = 1;
			break;
		case 1:
			if (!func_231(&(uLocal_395[0]), 0) && func_180(&uLocal_763) >= 0.8f)
			{
				if (iVar723 == 0 || iVar726 == 0)
				{
					if (!is_entity_dead(&(uLocal_395[0])))
					{
						task_combat_ped(&(uLocal_395[0]), player_ped_id(), 16384, 16);
						set_blocking_of_non_temporary_events(&(uLocal_395[0]), false);
					}
				}
				else if (_is_anim_scene_finished(Local_536.f_1, false) || iVar725 == 1)
				{
					if (!is_entity_dead(&(uLocal_395[0])))
					{
						set_blocking_of_non_temporary_events(&(uLocal_395[0]), false);
						task_combat_ped(&(uLocal_395[0]), player_ped_id(), 16384, 16);
					}
				}
			}
			if (!func_231(&(uLocal_395[1]), 0) && func_180(&uLocal_763) >= 0.2f)
			{
				if (iVar723 == 0 || iVar726 == 0)
				{
					if (!is_entity_dead(&(uLocal_395[1])))
					{
						task_combat_ped(&(uLocal_395[1]), player_ped_id(), 0, 0);
						set_blocking_of_non_temporary_events(&(uLocal_395[1]), false);
					}
				}
				else if (_is_anim_scene_finished(Local_536.f_1, false) || iVar725 == 1)
				{
					if (!is_entity_dead(&(uLocal_395[1])))
					{
						set_blocking_of_non_temporary_events(&(uLocal_395[1]), false);
						task_combat_ped(&(uLocal_395[1]), player_ped_id(), 16384, 16);
					}
				}
			}
			if (iVar730 == 1)
			{
				if (func_199())
				{
					if (!func_223(&(uLocal_395[2]), 780511057))
					{
						if (!is_entity_dead(&(uLocal_395[2])))
						{
							set_blocking_of_non_temporary_events(&(uLocal_395[2]), false);
							task_combat_ped(&(uLocal_395[2]), player_ped_id(), 16384, 16);
						}
					}
				}
			}
			else if (!func_223(&(uLocal_395[2]), 780511057))
			{
				if (!is_entity_dead(&(uLocal_395[2])))
				{
					set_blocking_of_non_temporary_events(&(uLocal_395[2]), false);
					task_combat_ped(&(uLocal_395[2]), player_ped_id(), 16384, 16);
				}
			}
			break;
	}
}

bool func_214()
{
	if (_get_ped_crouch_movement(player_ped_id()))
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 6f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 6f);
		}
		if (!is_entity_dead(&(uLocal_395[2])))
		{
			set_ped_seeing_range(&(uLocal_395[2]), 6f);
		}
	}
	else
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 60f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 60f);
		}
		if (!is_entity_dead(&(uLocal_395[2])))
		{
			set_ped_seeing_range(&(uLocal_395[2]), 60f);
		}
	}
	if (func_224(&(uLocal_395[2]), player_ped_id(), 1, 1) <= 12f)
	{
		if (!func_374())
		{
			if ((has_entity_clear_los_to_entity_in_front(&(uLocal_395[0]), player_ped_id(), 17) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[1]), player_ped_id(), 17)) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[2]), player_ped_id(), 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_215()
{
	if (_get_ped_crouch_movement(player_ped_id()))
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 6f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 6f);
		}
		if (!is_entity_dead(&(uLocal_395[2])))
		{
			set_ped_seeing_range(&(uLocal_395[2]), 6f);
		}
	}
	else
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 60f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 60f);
		}
		if (!is_entity_dead(&(uLocal_395[2])))
		{
			set_ped_seeing_range(&(uLocal_395[2]), 60f);
		}
	}
	if (func_224(&(uLocal_395[2]), player_ped_id(), 1, 1) <= 15f)
	{
		if (!func_374())
		{
			if ((has_entity_clear_los_to_entity_in_front(&(uLocal_395[0]), player_ped_id(), 17) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[1]), player_ped_id(), 17)) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[2]), player_ped_id(), 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_216()
{
	func_221();
	switch (iVar751)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_395[2]), 0);
			if (func_181(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[19]), 1.2f, 0))
			{
				uLocal_753 = iVar751 + 1;
				func_179(&uLocal_787);
			}
			break;
		case 1:
			if ((func_182(0f, 1, &(uLocal_395[0]), 1) && func_182(0f, 1, &(uLocal_395[1]), 1)) && func_182(0f, 1, Global_35, 1))
			{
				if (func_180(&uLocal_787) > 4f)
				{
					func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_753 = iVar751 + 1;
				}
			}
			else
			{
				func_179(&uLocal_787);
			}
			break;
	}
}

void func_217()
{
	_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2");
	_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2");
	_0xdf7b5144e25cd3fe(Local_536.f_1, "PBL_BREAKOUT_LEAN");
}

void func_218()
{
	if (func_192())
	{
		iLocal_721 = 0;
	}
	if (iVar719 == 1)
	{
		switch (iVar749)
		{
			case 0:
				if (fVar757 >= 0.12f)
				{
					uLocal_751 = iVar749 + 1;
				}
				break;
			case 1:
				if (fVar757 >= 0.33f)
				{
					uLocal_751 = iVar749 + 1;
				}
				break;
			case 2:
				if (func_182(-4f, 1, 0, 0))
				{
					uLocal_751 = iVar749 + 1;
				}
				break;
			case 3:
				if (func_182(-4f, 1, 0, 0))
				{
					uLocal_751 = iVar749 + 1;
				}
				break;
			case 4:
				if (fVar757 >= 0.85f)
				{
					iLocal_721 = 0;
				}
				break;
		}
	}
}

int func_219()
{
	if ((!_does_anim_scene_exist(Local_536.f_1) || !_is_anim_scene_started(Local_536.f_1, false)) || !_0x1f0e401031e20146(Local_536.f_1, "PBL_DUMP_EM_HERE"))
	{
		return 0;
	}
	if (func_224(&(uLocal_395[1]), player_ped_id(), 1, 1) <= 8f)
	{
		if (!func_374())
		{
			if ((has_entity_clear_los_to_entity_in_front(&(uLocal_395[0]), player_ped_id(), 17) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[1]), player_ped_id(), 17)) || (func_90(&(uLocal_395[2]), 0, 1) && has_entity_clear_los_to_entity_in_front(&(uLocal_395[2]), player_ped_id(), 17)))
			{
				set_boat_anchor(iVar405, false);
				remove_anim_scene_entity(Local_536.f_1, "rowboat", iVar405);
				stop_current_playing_speech(&(uLocal_395[0]), 0);
				stop_current_playing_speech(&(uLocal_395[1]), 0);
				stop_current_playing_speech(&(uLocal_395[2]), 0);
				if (iVar702 != 2)
				{
					func_183(2);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_220()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if ((is_waypoint_playback_going_on_for_ped(&(uLocal_395[0]), 0) && is_waypoint_playback_going_on_for_ped(&(uLocal_395[1]), 0)) && is_waypoint_playback_going_on_for_ped(&(uLocal_395[2]), 0))
	{
		waypoint_recording_get_closest_waypoint(sVar462, get_entity_coords(&(uLocal_395[0]), true, false), &iVar0);
		waypoint_recording_get_closest_waypoint(sVar462, get_entity_coords(&(uLocal_395[1]), true, false), &iVar1);
		waypoint_recording_get_closest_waypoint(sVar462, get_entity_coords(&(uLocal_395[2]), true, false), &iVar2);
		if (iVar0 > iVar1)
		{
			fLocal_761 = 1.2f;
			fLocal_760 = 1f;
		}
		else
		{
			fLocal_761 = 1f;
			fLocal_760 = 1.2f;
		}
		if (iVar0 > iVar2)
		{
			fLocal_762 = 1.2f;
			fLocal_760 = 1f;
		}
		else
		{
			fLocal_762 = 1f;
			fLocal_760 = 1.2f;
		}
		if (iVar1 > iVar2)
		{
			fLocal_762 = 1.2f;
			fLocal_761 = 1f;
		}
		else
		{
			fLocal_762 = 1f;
			fLocal_761 = 1.2f;
		}
		waypoint_playback_override_speed(&(uLocal_395[0]), uVar758, 1, -1f, 0);
		waypoint_playback_override_speed(&(uLocal_395[1]), uVar759, 1, -1f, 0);
		waypoint_playback_override_speed(&(uLocal_395[2]), uVar760, 1, -1f, 0);
	}
}

void func_221()
{
	iVar0 = 15;
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = 20;
	}
	switch (iVar756)
	{
		case 0:
			if ((func_70(&(uLocal_395[0]), 1, 1) < IntToFloat(iVar0) || func_70(&(uLocal_395[1]), 1, 1) < IntToFloat(iVar0)) || func_70(&(uLocal_395[2]), 1, 1) < IntToFloat(iVar0))
			{
				func_197(&(uLocal_395[0]), Global_35, &uLocal_511, -1, 15);
				func_179(&uLocal_781);
				uLocal_758 = iVar756 + 1;
			}
			break;
		case 1:
			if (func_180(&uLocal_781) > 1f)
			{
				func_197(&(uLocal_395[1]), Global_35, &uLocal_511, -1, 15);
				func_179(&uLocal_781);
				uLocal_758 = iVar756 + 1;
			}
			break;
		case 2:
			if (func_180(&uLocal_781) > 1.5f)
			{
				func_197(&(uLocal_395[2]), Global_35, &uLocal_511, -1, 15);
				func_179(&uLocal_781);
				uLocal_758 = iVar756 + 1;
			}
			break;
		case 3:
			func_197(&(uLocal_395[0]), Global_35, &uLocal_511, -1, 15);
			func_197(&(uLocal_395[1]), Global_35, &uLocal_511, -1, 15);
			func_197(&(uLocal_395[2]), Global_35, &uLocal_511, -1, 15);
			break;
	}
}

void func_222()
{
	if (iLocal_14 == 0)
	{
		switch (iVar750)
		{
			case 0:
				if (func_182(-4f, 1, 0, 0))
				{
					if (func_377(1, 1))
					{
						func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[16]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_358(&(uLocal_395[2]), player_ped_id(), &(sLocal_414[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uLocal_752 = iVar750 + 1;
				}
				break;
			case 1:
				if (func_182(0f, 1, 0, 0))
				{
					if (func_377(1, 1))
					{
						func_358(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[16]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_358(&(uLocal_395[2]), player_ped_id(), &(sLocal_414[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uLocal_752 = iVar750 + 1;
				}
				break;
			case 2:
				if (func_182(-4f, 1, 0, 0))
				{
					func_183(2);
					uLocal_752 = iVar750 + 1;
				}
				break;
		}
	}
	else
	{
		switch (iVar750)
		{
			case 0:
				if (func_182(-4f, 1, 0, 0))
				{
					if (func_377(1, 1))
					{
						func_358(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[16]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_358(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uLocal_752 = iVar750 + 1;
				}
				break;
			case 1:
				if (func_182(0f, 1, 0, 0))
				{
					if (func_377(1, 1))
					{
						func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[18]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uLocal_752 = iVar750 + 1;
				}
				break;
			case 2:
				if (func_182(-4f, 1, 0, 0))
				{
					func_190(3);
					uLocal_752 = iVar750 + 1;
				}
				break;
		}
	}
}

bool func_223(int iParam0, int iParam1)
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

float func_224(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_225()
{
	if (_0x23e33cb9f4a3f547(Local_536.f_1, "PBL_DEAD_LOOP"))
	{
		_set_anim_scene_playback_list_bool(Local_536.f_1, "PBL_DEAD_LOOP", true);
	}
	if (_is_anim_scene_loaded(Local_536.f_1, true, false) && !_is_anim_scene_started(Local_536.f_1, false))
	{
		attach_anim_scene_to_entity(Local_536.f_1, iVar405, 0);
		start_anim_scene(Local_536.f_1);
	}
}

bool func_226()
{
	if (_get_ped_crouch_movement(player_ped_id()))
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 6f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 6f);
		}
	}
	else
	{
		if (!is_entity_dead(&(uLocal_395[0])))
		{
			set_ped_seeing_range(&(uLocal_395[0]), 60f);
		}
		if (!is_entity_dead(&(uLocal_395[1])))
		{
			set_ped_seeing_range(&(uLocal_395[1]), 60f);
		}
	}
	if (func_224(&(uLocal_395[1]), player_ped_id(), 1, 1) <= 15f)
	{
		if ((has_entity_clear_los_to_entity_in_front(&(uLocal_395[0]), player_ped_id(), 17) || has_entity_clear_los_to_entity_in_front(&(uLocal_395[1]), player_ped_id(), 17)) || (!func_378() && !_get_ped_crouch_movement(player_ped_id())))
		{
			return true;
		}
	}
	return false;
}

void func_227()
{
	switch (iVar752)
	{
		case 0:
			if (func_182(-4f, 1, 0, 0))
			{
				if (func_372())
				{
					func_373(1515458263, &(uLocal_395[0]), 1);
				}
				func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[0]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 1:
			if (func_182(1f, 1, 0, 0))
			{
				if (func_372())
				{
					func_373(1515458263, &(uLocal_395[1]), 1);
				}
				func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[1]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 2:
			if (func_182(-6f, 1, 0, 0))
			{
				func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[2]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 3:
			if (func_182(-6f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[3]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 4:
			if (func_182(2f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[4]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 5:
			if (func_182(-4f, 1, 0, 0))
			{
				func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[5]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 6:
			if (func_182(1f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[6]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				uLocal_754 = iVar752 + 1;
			}
			break;
		case 7:
			if (func_182(-5f, 1, 0, 0))
			{
				func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[7]), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				iLocal_746 = 1;
				uLocal_754 = iVar752 + 1;
			}
			break;
	}
}

void func_228()
{
	func_221();
	func_22(&Local_15);
	switch (iVar747)
	{
		case 0:
			func_379(0);
			if (func_182(-4f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_185(Local_650[0], 0, 0);
				func_185(Local_650[1], 0, 0);
				func_179(&uLocal_790);
				uLocal_749 = iVar747 + 1;
			}
			break;
		case 1:
			if (func_182(0f, 1, &(uLocal_395[0]), 1) || func_180(&uLocal_790) > 4f)
			{
				func_186(Local_544[0], 0);
				func_186(Local_544[1], 0);
				Local_650[0]->f_13 = &sLocal_414[36];
				Local_650[1]->f_13 = &sLocal_414[37];
				func_185(Local_650[0], 1, 0);
				func_185(Local_650[1], 1, 0);
				func_188(Local_650[0], 0);
				func_188(Local_650[1], 0);
				func_187(Local_650[0], "INTERACT_DEFUSE");
				iLocal_708 = 0;
				iLocal_707 = 3;
				uLocal_749 = iVar747 + 1;
			}
			break;
		case 2:
			if (func_182(-3f, 1, 0, 0))
			{
				func_358(&(uLocal_395[1]), player_ped_id(), &(sLocal_414[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_749 = iVar747 + 1;
			}
			break;
		case 3:
			if (func_182(-3f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), player_ped_id(), &(sLocal_414[19]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_749 = iVar747 + 1;
			}
			break;
		case 4:
			if (!func_378() && func_182(-5f, 1, 0, 0))
			{
				func_190(3);
			}
			break;
	}
}

void func_229()
{
	switch (iVar753)
	{
		case 0:
			if (is_entity_playing_anim(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c", 1))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c") < 0.01f)
				{
					if (_get_entity_anim_current_time(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c") > 0f && func_182(0, 1, &(uLocal_395[0]), 1))
					{
						if (func_372())
						{
							func_373(1515458263, &(uLocal_395[1]), 1);
						}
						func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[21]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_755 = iVar753 + 1;
					}
				}
				else
				{
					uLocal_755 = iVar753 + 1;
				}
			}
			break;
		case 1:
			if (is_entity_playing_anim(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") < 0.13f)
				{
					if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") > 0.125f && func_182(0, 1, &(uLocal_395[1]), 1))
					{
						func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[22]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_755 = iVar753 + 1;
					}
				}
				else
				{
					uLocal_755 = iVar753 + 1;
				}
			}
			break;
		case 2:
			if (is_entity_playing_anim(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") < 0.27f)
				{
					if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") > 0.26f && func_182(0, 1, &(uLocal_395[1]), 1))
					{
						func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_755 = iVar753 + 1;
					}
				}
				else
				{
					uLocal_755 = iVar753 + 1;
				}
			}
			break;
		case 3:
			if (is_entity_playing_anim(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") < 0.67f)
				{
					if (_get_entity_anim_current_time(&(uLocal_395[1]), "script_re@boat_attack", "dump_em_here_male_b") > 0.66f && func_182(0, 1, &(uLocal_395[1]), 1))
					{
						func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[24]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_755 = iVar753 + 1;
					}
				}
				else
				{
					uLocal_755 = iVar753 + 1;
				}
			}
			break;
		case 4:
			if (is_entity_playing_anim(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c", 1))
			{
				if (_get_entity_anim_current_time(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c") < 0.77f)
				{
					if (_get_entity_anim_current_time(&(uLocal_395[0]), "script_re@boat_attack", "dump_em_here_male_c") > 0.76f && func_182(0, 1, &(uLocal_395[0]), 1))
					{
						func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[27]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_755 = iVar753 + 1;
					}
				}
				else
				{
					uLocal_755 = iVar753 + 1;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_230()
{
	switch (iVar754)
	{
		case 0:
			if (func_182(1f, 1, 0, 0))
			{
				func_358(&(uLocal_395[1]), &(uLocal_395[0]), &(sLocal_414[28]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_756 = iVar754 + 1;
			}
			break;
		case 1:
			if (func_182(-5f, 1, 0, 0))
			{
				func_358(&(uLocal_395[0]), &(uLocal_395[1]), &(sLocal_414[29]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_756 = iVar754 + 1;
			}
			break;
	}
}

bool func_231(int iParam0, bool bParam1)
{
	if (((((func_223(iParam0, 780511057) || func_223(iParam0, -219932022)) || func_223(iParam0, 1120685857)) || func_223(iParam0, -2117564886)) || func_223(iParam0, 655999185)) || func_223(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_223(iParam0, -653332088) || func_223(iParam0, 167901368))
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

bool func_232(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_233(int iParam0, int iParam1)
{
	if (!func_232(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_234(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_235(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_236(char* sParam0)
{
	return sParam0;
}

bool func_237(int iParam0, int iParam1)
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
	if (func_380(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_380(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_380(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_380(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_380(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_380(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_380(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_380(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
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

void func_240(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_241(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_242(var uParam0)
{
	if (func_254(uParam0->f_162))
	{
		func_253(&(uParam0->f_162), 1, 1);
	}
	if (func_254(uParam0->f_163))
	{
		func_253(&(uParam0->f_163), 1, 1);
	}
	if (func_254(uParam0->f_164))
	{
		func_253(&(uParam0->f_164), 1, 1);
	}
	if (func_254(uParam0->f_165))
	{
		func_253(&(uParam0->f_165), 1, 1);
	}
}

void func_243(var uParam0)
{
	if (uParam0->f_170)
	{
		func_381();
	}
}

void func_244(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_382(32);
		func_248(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_245(var uParam0)
{
	if (func_383(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_384(uParam0->f_3);
		func_146(uParam0, 0, 1);
		func_385(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_386(0, 0);
		return true;
	}
	return false;
}

void func_246()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_247(int iParam0)
{
	if (!func_119(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_248(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_234(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_250() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_249(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_250()
{
	return Global_1572887->f_12;
}

Vector3 func_251(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_252(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_253(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_254(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_387(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_388(iVar0);
	*uParam0 = 0;
}

bool func_254(int iParam0)
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

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_257(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_258(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_109(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_259(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_18("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_260(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_261(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_109(vParam0))
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
		if (func_170(vParam0))
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
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_389(iVar0, bParam8);
	return iVar0;
}

void func_262(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_390(iParam0);
}

void func_263(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_264(int iParam0)
{
	if (func_55(iParam0, 2))
	{
		return 200;
	}
	if (func_55(iParam0, 4))
	{
		return 70;
	}
	if (func_55(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_265(int iParam0)
{
	if (func_28(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_308() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_28(iParam0, 2);
		bVar1 = func_28(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_152())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_266(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_55(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_267(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_55(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_55(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_268(int iParam0, int iParam1)
{
	iVar0 = (func_256(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_269(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_109(vParam1))
	{
		return false;
	}
	if (func_274(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_77(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_270(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_271(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_94(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_277(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_391();
			iParam4->f_2 = func_369(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_277(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_391();
		iParam4->f_2 = func_369(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_272(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_391() - *uParam0) >= iParam1;
	}
	return false;
}

int func_273(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_109(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_274(int iParam0, vector3 vParam1)
{
	if (!func_28(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_392(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_28(iParam0, 33554432))
	{
		if (func_393(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_275(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_55(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_28(iParam0, 1) && !func_28(iParam0, 2))
	{
		if (func_28(iParam0, 4096) || func_28(iParam0, 2048))
		{
			if (func_394(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_395())
	{
		return false;
	}
	return true;
}

bool func_277(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_396(vVar0, vParam0) > func_396(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_278(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_279(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_280(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_397(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_281()
{
	return get_player_group(get_player_index());
}

bool func_282(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_250() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_283(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_284(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

void func_285(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_286(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_287(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_288(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	if (bParam1)
	{
		func_398(iParam0, 4);
		func_399(iVar0, 1);
		func_400(iVar0, 1);
	}
	else
	{
		func_401(iParam0, 4);
		func_400(iVar0, 0);
	}
}

bool func_289(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_290(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_291(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_402((fParam0 + fParam1));
}

int func_292(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_403(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_404(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_405(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_405(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_406(iVar0))
		{
			func_297(iVar0, &(uParam1->f_23), 0);
		}
		if (func_406(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_407(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_408(&(uParam1->f_22)));
			func_410(iVar0, func_409(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_411(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_412(&(uParam1->f_22)))
		{
			func_413(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_414(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_380(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_406(iVar0))
		{
			func_416(iVar0, !func_415(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_417(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_418(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_418(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_293(int iParam0, int iParam1)
{
	if (func_419(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_294(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_420(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_295(var uParam0)
{
	return func_380(*uParam0, 32);
}

int func_296(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_297(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_90(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_298(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_299(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_300(int iParam0)
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

bool func_301(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_299(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_299(iVar4) && iVar4 != iVar0)
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
	if (func_250() == -1 && !func_300(iVar0))
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
				if (func_300(-183018591))
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
		if (iParam0 != Global_35 && func_299(iVar0))
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
		func_421(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_422(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_423(iVar0))
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

bool func_303(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_304(int iParam0)
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

var func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_306(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_424(1);
	}
	else
	{
		iVar0 = func_425(iParam0);
	}
	return iVar0;
}

void func_307(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_426(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_427(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_308()
{
	return Global_1897952->f_41;
}

void func_309(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_55(iParam0, 8192))
	{
		iVar0 = func_427(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_310(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_248(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_311(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_28(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_428(262144, iVar0, 0, 1);
		}
	}
	if (func_28(iParam0, 128))
	{
		func_428(128, iVar0, 0, 1);
	}
	else if (func_28(iParam0, 524288))
	{
		func_428(524288, iVar0, 0, 1);
	}
	else if (func_28(iParam0, 536870912))
	{
		func_428(536870912, iVar0, 0, 1);
	}
	else if (func_28(iParam0, 4194304))
	{
		func_428(4194304, iVar0, 0, 1);
	}
	else if (func_28(iParam0, 8388608))
	{
		func_428(8388608, iVar0, 0, 1);
	}
}

void func_312(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_313(bool bParam0)
{
	if (!bParam0 && func_429(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_314()
{
	return Global_1310750->f_16037;
}

bool func_315(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_316(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_119(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_430(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_431(Global_1393447, 1);
	func_432();
	func_433();
	func_434((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_391() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_435();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_428(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_428(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_428(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_436(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_437(to_float(iVar0), 1, 0);
	}
	else
	{
		func_437((to_float(200) / 3f), 1, 0);
	}
}

bool func_318(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_319(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_320(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_322()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_323(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_324(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_323(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_325() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_325()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_326(bool bParam0, bool bParam1, bool bParam2)
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

int func_327()
{
	return &Global_1899515;
}

int func_328(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_330(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_331(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_332(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_333(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_334(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_335(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_336(bool bParam0, int iParam1, int iParam2)
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

bool func_337()
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

int func_338(int iParam0)
{
	if (!func_341(iParam0))
	{
		return -1;
	}
	return func_439(func_438(iParam0));
}

bool func_339(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_340(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_341(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_342(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_343(int iParam0)
{
	return func_28(iParam0, Global_1310750->f_16072 | 64);
}

int func_344(int iParam0)
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

int func_345(int iParam0)
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

bool func_346(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_347(var uParam0, float fParam1)
{
	if (!func_178(uParam0))
	{
		return false;
	}
	if (func_440(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_348(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_349(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_350(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_351(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_350(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_94(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_179(&(iParam1->f_13));
		}
		if (func_441(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_442(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_351(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_361(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_443(*uParam0, 1, 1);
						}
					}
					else if (func_444(iParam1, 22))
					{
						func_443(*uParam0, 0, 1);
					}
				}
				if (func_445(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_446(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_447(iParam8);
					if (func_448(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_449(uParam3);
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
					func_450(iParam1, uParam3, fVar8);
					if (func_451(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_102(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_452(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_445(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_453(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_448(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_446(uParam0, func_445(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_447(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_102(uParam3, 0, 0, 1, 1);
					}
					func_454(iParam1, 1);
				}
				func_450(iParam1, uParam3, fVar8);
				if (func_452(uParam0, iParam1, fParam4, bVar6))
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
			func_23(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_352(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_455(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_358(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_353(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_250() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_354(int iParam0, bool bParam1)
{
	func_456(iParam0, &iVar0, &iVar1);
	if (!func_457(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_458(iVar0, iVar1);
}

bool func_355(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_356(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_325() - fParam1);
	func_459(uParam0, 1);
	func_460(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_357(var uParam0)
{
	return func_355(*uParam0, 2);
}

bool func_358(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_189(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_359(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_360(float fParam0)
{
	if (func_461(1))
	{
		return true;
	}
	if (func_178(&uLocal_0) && !func_462(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_361(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

bool func_362(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_363(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_364(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_365(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_366(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_463(iParam0, &Var0);
}

int func_367(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_368(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_464(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_375(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

float func_369(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_370(var uParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	func_465(&Var0, uParam0, 1, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
	_0x66f9eb44342bb4c5(Global_35, &Var0);
}

bool func_371(int iParam0, var uParam1, var uParam2)
{
	if (func_466(uParam2))
	{
		return true;
	}
	if (func_467(iParam0, &uParam1))
	{
		return true;
	}
	return false;
}

bool func_372()
{
	if (bVar734 || iVar705 != 0)
	{
		return false;
	}
	return true;
}

void func_373(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_374()
{
	if (((!is_ped_facing_ped(player_ped_id(), &(uLocal_395[0]), 80f) && !is_ped_facing_ped(player_ped_id(), &(uLocal_395[1]), 80f)) && !is_ped_facing_ped(player_ped_id(), &(uLocal_395[2]), 80f)) && get_ped_desired_move_blend_ratio(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

bool func_375(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_468(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_469(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_470(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_471(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_472(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_473(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_154(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_470(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_474(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_475(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_476(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_477(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_477(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_470(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_478(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_479(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_480(iParam2, 4000))
				{
					if ((func_481(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_482(iParam2, iParam0)) && func_483(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_481(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_482(iParam2, iParam0)) && func_483(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_484(iParam0, Global_1935630->f_41))
							{
								func_485();
								*uParam3 = 2;
								func_470(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_484(iParam0, Global_1935630->f_41))
						{
							func_485();
							*uParam3 = 2;
							func_470(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_486(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_391() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_485();
						*uParam3 = 2;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_487())
					{
						if (func_484(iParam0, Global_1935630->f_42))
						{
							func_485();
							*uParam3 = 2;
							func_470(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_488(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_470(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_489(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_490(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_491(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_492(iParam2, 4000))
				{
					if (func_493(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_470(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_494(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_470(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_495(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_470(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_376(int iParam0, char* sParam1, int iParam2)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, get_hash_key(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_377(int iParam0, bool bParam1)
{
	if (!func_496(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

bool func_378()
{
	if ((!is_ped_facing_ped(player_ped_id(), &(uLocal_395[0]), 80f) && !is_ped_facing_ped(player_ped_id(), &(uLocal_395[1]), 80f)) && get_entity_speed(Global_35) >= 0.1f)
	{
		return true;
	}
	return false;
}

void func_379(int iParam0)
{
	func_348(&uLocal_0);
	func_497(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_498();
}

bool func_380(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_381()
{
	func_499(23);
}

void func_382(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_383(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_384(int iParam0)
{
	iVar0 = func_500(iParam0);
	if (iVar0 != 0)
	{
		func_501(-1, 24, 0, iVar0);
	}
}

void func_385(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_503(func_502(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_28(iParam0, 2))
	{
		func_504(iParam0, func_306(iParam3));
	}
	if (func_28(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_308();
		}
		func_505(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_55(iParam0, 65536))
	{
		func_506(iParam0, iParam1);
		func_507(iParam0, func_104(iParam0, iParam1));
		func_382(128);
	}
	func_310(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_311(iParam0, 1);
	if (!bParam2)
	{
		func_382(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_508(524288);
	}
	if (func_509(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_509(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_386(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_510(&Global_0, 8);
	}
	if (!func_511() || func_250() != -1)
	{
		return;
	}
	func_510(&Global_0, 1);
}

int func_387(int iParam0)
{
	return iParam0;
}

void func_388(int iParam0)
{
	if (!func_512(iParam0))
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

int func_389(int iParam0, bool bParam1)
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

void func_390(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

int func_391()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_392(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_109(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_393(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_109(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_394(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_109(*Global_1310750->f_16043[iVar0]))
		{
			if (func_78(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_395()
{
	iVar0 = func_513(func_164());
	if (iVar0 == 8)
	{
		iVar1 = func_165(func_164());
		if (func_167(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_514(func_424(0)))
	{
		return false;
	}
	if (func_515())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_396(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_397(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_398(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_399(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_516(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_400(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_401(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_402(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_403(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_517(&uParam1))
	{
		return 1;
	}
	if (!func_518(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_404(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_405(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_519(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_406(int iParam0)
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

bool func_407(var uParam0)
{
	return func_380(*uParam0, 4);
}

bool func_408(var uParam0)
{
	return func_380(*uParam0, 64);
}

bool func_409(var uParam0)
{
	return func_380(*uParam0, 8);
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_411(var uParam0)
{
	return func_380(*uParam0, 128);
}

bool func_412(var uParam0)
{
	return func_380(*uParam0, 2048);
}

void func_413(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_414(var uParam0)
{
	return func_380(*uParam0, 1024);
}

bool func_415(var uParam0)
{
	return func_380(*uParam0, 256);
}

void func_416(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_417(var uParam0)
{
	return func_380(*uParam0, 512);
}

bool func_418(var uParam0)
{
	return func_380(*uParam0, 4096);
}

int func_419(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

int func_420(int iParam0)
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

int func_421(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_520(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_521((386 + iVar28), 1);
			if (func_522(iParam0, &Var0, iVar5, 0))
			{
				if (func_523(iParam0, &Var6, iVar5))
				{
					Var29 = { func_524(iParam0, Var0, iVar5, 0) };
					func_525(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_526(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_527(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_528(iParam0, iParam1);
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

void func_422(int iParam0, int iParam1, float fParam2)
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

bool func_423(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_424(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_529(1, 0, 0);
	}
	else
	{
		iVar0 = func_164();
	}
	return func_425(iVar0);
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_426(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_427(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_428(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_260(Global_1310750[iVar0], iParam0))
		{
			if (!func_247(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_530(iVar0) < func_531(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_310(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_429(int iParam0)
{
	iVar0 = func_532(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_430(int iParam0)
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

void func_431(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_432()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_533(iVar0, 128))
		{
			func_534(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_433()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_533(iVar0, 128) && func_533(iVar0, 1))
		{
			func_534(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_434(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_435()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_28(iVar0, 16777216))
		{
			if (!func_535(iVar0))
			{
				func_536(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_436(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_248(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_248(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_248(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_248(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_248(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_248(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_248(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_437(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_325();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_438(int iParam0)
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

int func_439(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

float func_440(var uParam0)
{
	if (!func_178(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_357(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_325() - uParam0->f_1);
}

bool func_441(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_537(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_102(uParam2, 0, 0, 1, 0);
				func_54(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_538(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_235(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_442(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_2(iParam4, 32);
		func_101(iParam1, uParam2, 0);
		iVar5 = func_539(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_102(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_444(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_444(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
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
				iParam6 = func_540(uParam0);
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
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_541(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_542(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_444(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_443(*uParam0, 1, 1);
			}
			else
			{
				func_443(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_443(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_444(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_445(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_543(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_446(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
					iVar0 = (iVar0 + 1);
				}
			}
			func_544(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_447(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_448(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_545(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_546(Global_35)) || func_547(Global_35)) || func_548(Global_35));
	fVar12 = -1f;
	if (func_178(&(iParam1->f_13)))
	{
		fVar12 = func_440(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_254((*uParam4)[iVar0]->f_6);
		func_549(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_550(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_551(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_102(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_552(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_101(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_553(iParam1, fParam6, iParam1->f_9))
					{
						func_179(&(iParam1->f_18));
						if (bVar6)
						{
							func_552(uParam4, 0, 0);
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
		func_554(iParam1, fParam2);
	}
	return bVar5;
}

void func_449(var uParam0)
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

void func_450(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_555((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_554(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_451(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_556(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_557(iParam1, 0);
				func_101(iParam1, uParam2, func_444(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_452(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_179(&(iParam1->f_18));
			return false;
		}
		else if (func_178(&(iParam1->f_18)))
		{
			func_348(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_178(&(iParam1->f_18)))
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
	return func_462(&(iParam1->f_18), fParam2);
	return true;
}

void func_453(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_549(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_454(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_455(int* iParam0)
{
	if (func_444(iParam0, 0))
	{
		if (func_558(iParam0))
		{
			func_454(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_456(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_457(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_559(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_560(iParam0))
	{
		return false;
	}
	if (func_561(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_562(iParam0, 1)) || func_563(32768))
	{
		if (!func_562(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_564())
	{
		return false;
	}
	return true;
}

void func_458(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_459(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_460(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_461(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_462(var uParam0, float fParam1)
{
	if (func_347(uParam0, fParam1))
	{
		func_348(uParam0);
		return true;
	}
	return false;
}

bool func_463(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_464(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_465(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_466(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_467(int iParam0, var uParam1)
{
	uVar0 = *uParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	func_565(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_566(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_54(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_158(1))
						{
							func_54(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_158(1) || *iParam0 & 8192 != 0))
				{
					func_235(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_567(iParam0))
			{
				iParam0->f_15 = func_391();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_391() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_568(iParam0);
}

bool func_469(int iParam0, int iParam1)
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
			if (!func_569(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_570(iParam0, iVar2) <= func_571(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_572(iParam2, 1, 1, 1, 0))
	{
		func_54(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_573(iParam1, 1);
	func_246();
}

bool func_471(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_574(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_575(iParam1);
			if (func_576(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_577(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_573(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_573(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_472(int iParam0, int iParam1, int iParam2)
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
	if (func_578(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_575(iParam2);
		if (func_576(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_577(iParam2)
				{
					func_573(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_473(int iParam0, int iParam1)
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
	if (func_569(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_577(iParam1)
		{
			fVar3 = func_575(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_474(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_391();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_475(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_579(iParam2);
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
			if (func_483(iParam2, iParam1))
			{
				func_573(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_476(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_580(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_483(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_573(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_477(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_581(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_573(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_573(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_582(iParam1, vVar0, vVar4))
					{
						func_573(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_573(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_582(iParam1, vVar0, vVar7))
					{
						func_573(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_569(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_583(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_584(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_585(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_586(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_587(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_479(int iParam0, int iParam1)
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

bool func_480(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_391();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_481(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_588(iVar0, &iVar2))
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
	if (func_589(iVar0, iParam0))
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

int func_482(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_483(int iParam0, int iParam1)
{
	if (func_590(iParam0))
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

bool func_484(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_224(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_485()
{
}

bool func_486(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_591(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_391();
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
						if (func_369(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_391();
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

bool func_487()
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
	if ((func_391() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_488(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_571(iParam0);
	if (iParam0->f_12 > func_592(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_593(iParam1);
	iVar1 = func_594(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_595(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_490(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_596(iParam0, iParam1, 1))
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
					if (!func_597(iParam1, iParam0))
					{
						if (func_369(iVar4, Global_36, 1) < 7f)
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

bool func_491(int iParam0, int iParam1)
{
	if (!func_598(0))
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

bool func_492(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_391();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_493(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_494(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_391();
	}
	else if (func_391() - iParam1->f_4) > func_599(iParam1)
	{
		return func_600(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_495(int iParam0, int iParam1)
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

bool func_496(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_498()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_499(int iParam0)
{
	if (func_250() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_237(func_601(iVar0), 0))
		{
			if (is_ped_group_member(func_601(iVar0), func_281(), 1))
			{
				func_602(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_501(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_603() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_603();
					}
					func_604(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_235(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_502(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_503(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_504(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_426(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_427(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_505(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_55(iParam0, 8192))
	{
		iVar0 = func_427(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_506(int iParam0, int iParam1)
{
	iVar0 = (func_256(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_507(int iParam0, vector3 vParam1)
{
	if (func_28(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_109(vParam1))
	{
		return;
	}
	if (!func_119(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_109(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_270(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_508(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_536(iVar0, iParam0);
		iVar0++;
	}
}

int func_509(int iParam0)
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
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_510(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_511()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_512(int iParam0)
{
	return func_516(iParam0, 2);
}

int func_513(int iParam0)
{
	if (!func_346(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_514(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_515()
{
	return Global_1894899 & 2 != 0;
}

bool func_516(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_517(var uParam0)
{
	return func_380(*uParam0, 1);
}

bool func_518(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_605(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_519(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_606(iParam1))
		{
			func_607(iParam0, 41788943);
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
			func_608(iParam0, 0, 1);
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
			func_609(iParam0, 0);
			bVar0 = true;
		}
		func_610(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<5> func_520(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_611(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_612(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_613(bParam1) };
			if (bParam2 && func_614(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_522(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_522(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_523(iParam0, &Var5, 1728382685))
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
			Var0 = { func_615(bParam1) };
			switch (func_616(iParam0))
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
			if (func_617(iParam0, -1823706425))
			{
				Var0 = { func_524(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_617(iParam0, -1483207246))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_618(Var0, &Var27, bParam1, 0))
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

int func_521(int iParam0, int iParam1)
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

bool func_522(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_619(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_523(int iParam0, var uParam1, int iParam2)
{
	if (func_620(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_524(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_621(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_622(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_525(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_623(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(*uParam1, &Var0, bParam6, 0))
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
	if (!func_526(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_622(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_526(bool bParam0)
{
	if (func_250() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_622(bParam0));
}

int func_527(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_624(iParam0))
	{
		return 0;
	}
	if (!func_526(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_528(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_464(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_529(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_625(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_530(int iParam0)
{
	if (func_119(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_531(int iParam0)
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

int func_532(int iParam0, int iParam1)
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

bool func_533(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_534(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_535(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_536(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_537(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_626((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_538(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_555((*uParam0)[iVar0]))
		{
			func_363((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_539(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_627(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_254((*uParam2)[iVar0]->f_6))
		{
			func_363((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_540(var uParam0)
{
	iVar0 = func_239(*uParam0);
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

int func_541(var uParam0, int iParam1)
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

void func_542(int* iParam0, int* iParam1)
{
	if (!func_444(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_363(iParam1, 19);
			func_557(iParam0, 23);
			func_628(iParam1, 2);
		}
	}
}

bool func_543(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_629(16))
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
					func_630(16);
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

void func_544(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_627(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_545(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_546(int iParam0)
{
	return (func_631(iParam0, 4) || func_631(iParam0, 5));
}

int func_547(int iParam0)
{
	return func_631(iParam0, 7);
}

int func_548(int iParam0)
{
	return func_631(iParam0, 6);
}

void func_549(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_555(iParam1))
		{
			clear_bit(iParam1, 14);
			func_627(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_550(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_632(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_633(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_288(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_288(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_634(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_551(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_635(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_636(iParam1, 1))
	{
		func_637(iParam1, 1);
		return true;
	}
	return false;
}

void func_552(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_185((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_553(int* iParam0, float fParam1, bool bParam2)
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

void func_554(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_555(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_556(int iParam0)
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

void func_557(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_558(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_559(int iParam0, int iParam1)
{
	if (func_250() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_560(int iParam0)
{
	if (func_250() != -1)
	{
		if (func_562(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_562(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_561(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_562(iParam0, 65536) && !func_562(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_562(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_562(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_562(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_563(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_564()
{
	return Global_1905944->f_5694;
}

void func_565(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_638();
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
			func_639(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_566(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_567(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_250() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_640(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_640(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_594(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_568(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_641(iParam0);
	}
}

bool func_569(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_594(iParam2);
	}
	else
	{
		iVar1 = func_593(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_594(iParam0);
	}
	else
	{
		iVar0 = func_593(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
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

float func_570(int iParam0, int iParam1)
{
	return func_224(iParam0, iParam1, 1, 1);
}

float func_571(int iParam0)
{
	return iParam0->f_26;
}

bool func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_573(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(iParam0, 134217728);
	}
	else
	{
		func_235(iParam0, 134217728);
	}
}

bool func_574(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_224(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_642(iVar0, 0)))
		{
			if (func_643(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_575(int iParam0)
{
	return iParam0->f_17;
}

bool func_576(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_577(int iParam0)
{
	return iParam0->f_18;
}

bool func_578(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_642(iVar0, 0)))
		{
			if (func_644(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_579(int iParam0)
{
	return iParam0->f_23;
}

int func_580(int iParam0)
{
	return iParam0->f_21;
}

int func_581(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_582(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_645(iParam0, vParam4, 0.5f))
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

int func_583(int iParam0)
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
	if (func_646(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_584(int iParam0)
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

bool func_585(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_159(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_586(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_159(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_587(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_159(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_588(int iParam0, int iParam1)
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

bool func_589(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_647(iParam0, 1, 0, 0) != 2055893578)
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

bool func_590(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_591(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_369(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_592(int iParam0)
{
	return iParam0->f_24;
}

int func_593(int iParam0)
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

int func_594(int iParam0)
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

int func_595(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_588(Global_35, &iVar1))
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
		fVar2 = func_224(iParam0, player_ped_id(), 0, 1);
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
		if (func_224(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_596(int iParam0, int iParam1, bool bParam2)
{
	func_336(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_597(iParam1, iVar0))
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
				if (!bParam2 || !func_597(iParam1, iVar1))
				{
					if (func_369(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_597(int iParam0, int iParam1)
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

int func_598(int iParam0)
{
	if (func_648())
	{
		return 0;
	}
	return func_649((*Global_1347702)[58]->f_15, 1);
}

int func_599(int iParam0)
{
	return iParam0->f_20;
}

int func_600(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
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

int func_601(int iParam0)
{
	if (!func_650(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_602(int iParam0, int iParam1)
{
	if (!func_651(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_603()
{
	return &Global_1899515;
}

void func_604(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_652(*uParam0);
	iVar1 = func_653(*uParam0);
	iVar2 = func_654(*uParam0);
	iVar3 = func_328(*uParam0);
	iVar4 = func_655(*uParam0);
	iVar5 = func_656(*uParam0);
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
	iVar6 = func_657(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_657(iVar1, iVar0);
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
	func_658(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_605(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_606(int iParam0)
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

void func_607(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_659(iParam0, iParam1))
		{
			if (func_660(iParam0, iParam1))
			{
				if (func_661(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_662(iParam0);
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

void func_608(int iParam0, int iParam1, bool bParam2)
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

void func_609(int iParam0, bool bParam1)
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

void func_610(int iParam0, int iParam1)
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

struct<4> func_611(bool bParam0)
{
	return func_524(1328661203, func_663(), -1591664384, bParam0);
}

int func_612(int iParam0)
{
	if (!func_621(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_613(bool bParam0)
{
	iVar0 = func_622(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_524(923904168, func_611(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_524(923904168, func_611(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_524(923904168, func_611(bParam0), -740156546, 0);
}

bool func_614(int iParam0, bool bParam1)
{
	if (func_616(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_664(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_615(bool bParam0)
{
	iVar0 = func_622(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_524(271701509, func_611(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_524(271701509, func_611(bParam0), 12999093, 0);
}

int func_616(int iParam0)
{
	if (!func_621(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_617(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_616(iParam0);
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

bool func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_622(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_619(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_621(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_524(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_622(bParam6), &Var0, 0);
	return uVar4;
}

bool func_620(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_622(0);
	*uParam1 = { func_524(iParam0, func_613(0), iParam3, 0) };
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

bool func_621(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_622(bool bParam0)
{
	if (func_250() == -1)
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

bool func_623(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_624(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_625(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

int func_626(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_627(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_254(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_253(&(iParam1->f_6), 0, 1);
	}
	if (!func_254(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_555(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_665(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_254(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_634(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_666(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_667(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_286(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_666(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_288(iParam1->f_6, 0, 1);
				}
				else
				{
					func_288(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_628(int* iParam0, int iParam1)
{
	if (!func_362(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_363(iParam0, 14);
		}
	}
}

bool func_629(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_630(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_631(int iParam0, int iParam1)
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

bool func_632(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_633(int iParam0, bool bParam1)
{
	if (bParam1 && !func_254(iParam0))
	{
		return false;
	}
	return !func_516(iParam0, 4);
}

void func_634(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_254(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	func_666(iParam0, 18, 0, 1);
	func_666(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_635(int iParam0, bool bParam1)
{
	if (bParam1 && !func_254(iParam0))
	{
		return false;
	}
	iVar0 = func_387(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_636(int iParam0, bool bParam1)
{
	if (bParam1 && !func_254(iParam0))
	{
		return false;
	}
	iVar0 = func_387(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_637(int iParam0, bool bParam1)
{
	if (bParam1 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_638()
{
	if (func_668())
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

void func_639(var uParam0, var uParam1)
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

int func_640(int iParam0)
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
	if (iParam0->f_6 == 3)
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

void func_641(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_235(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_54(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_642(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_643(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_644(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_644(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_645(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_646(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_647(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_648()
{
	if (func_250() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_649(int iParam0, bool bParam1)
{
	switch (func_669(iParam0))
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

bool func_650(int iParam0)
{
	return iParam0 > -1;
}

bool func_651(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_652(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_367(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_653(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_654(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_655(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_656(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_657(int iParam0, int iParam1)
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

void func_658(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_670(uParam0, iParam6);
	func_671(uParam0, iParam5);
	func_672(uParam0, iParam4);
	func_673(uParam0, iParam3);
	func_674(uParam0, iParam2);
	func_675(uParam0, iParam1);
}

bool func_659(int iParam0, int iParam1)
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

bool func_660(int iParam0, int iParam1)
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

bool func_661(int iParam0, int iParam1)
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
	if (!func_659(iParam0, iVar0))
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

void func_662(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_663()
{
	return Var0;
}

bool func_664(int iParam0)
{
	if (!func_676(iParam0))
	{
		return false;
	}
	return func_677(iParam0);
}

int func_665(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_516(iVar0, 2))
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
				func_678(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_666(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_667(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_254(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_668()
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

int func_669(int iParam0)
{
	if (!func_341(iParam0))
	{
		return -1;
	}
	return func_679(iParam0);
}

void func_670(var uParam0, int iParam1)
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

void func_671(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_672(var uParam0, int iParam1)
{
	iVar0 = func_653(*uParam0);
	iVar1 = func_652(*uParam0);
	if (iParam1 < 1 || iParam1 > func_657(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_673(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_674(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_675(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_676(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_677(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_678(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_399(iParam0, 1);
	func_400(iParam0, 1);
	func_401(iParam0, 128);
}

int func_679(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_680(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_680(int iParam0)
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

