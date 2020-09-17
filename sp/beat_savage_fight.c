void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_451 = { 0f, 0f, 0f };
	vLocal_454 = { 0f, 0f, 0f };
	iLocal_460 = 1;
	iLocal_462 = 623901053;
	fLocal_856 = 0f;
	iLocal_1263 = -1;
	bVar0 = false;
	if (has_force_cleanup_occurred(523))
	{
		bVar0 = true;
	}
	else
	{
		if (!add_relationship_group("REL_RESAF_CAMPER", &iLocal_462))
		{
			func_1();
		}
		func_2(&uScriptParam_0);
	}
	while (true)
	{
		if (bVar0)
		{
			func_3(bVar0, 701, 0);
			wait(0);
		}
		else
		{
			switch (iVar458)
			{
				case 1:
					if (func_4(&Local_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_5(&Local_14, &iLocal_209, &(Local_14.f_51.f_4));
						func_6();
						func_7(&Local_14, 3);
						func_8();
						iLocal_460 = 0;
					}
					else if (Local_14.f_160)
					{
						func_1();
					}
					break;
				case 0:
					if (func_9())
					{
						iLocal_460 = 3;
					}
					break;
				case 3:
					if (func_10())
					{
						func_11();
						func_12();
						func_13();
						func_14();
						func_15(&uLocal_476, &Local_562, 1);
						if (!is_entity_dead(&(uLocal_469[0])))
						{
							func_16(&(uLocal_469[0]), 0);
							func_17();
							set_ped_config_flag(&(uLocal_469[0]), 252, false);
						}
						if (!is_entity_dead(&(uLocal_469[1])))
						{
							func_16(&(uLocal_469[1]), 0);
							_0x923583741dc87bce(&(uLocal_469[1]), "default_female");
							_0x89f5e7adecccb49c(&(uLocal_469[1]), "intimidated_on_feet");
							set_ped_config_flag(&(uLocal_469[1]), 252, false);
						}
						if (!is_entity_dead(&(uLocal_472[0])))
						{
							func_18(&(uLocal_472[0]), 1);
							set_ped_config_flag(&(uLocal_472[0]), 252, false);
						}
						if (!is_entity_dead(&(uLocal_472[1])))
						{
							func_18(&(uLocal_472[1]), 1);
							set_ped_config_flag(&(uLocal_472[1]), 252, false);
						}
						if (!is_entity_dead(&(uLocal_472[2])))
						{
							func_18(&(uLocal_472[2]), 1);
							set_ped_config_flag(&(uLocal_472[2]), 252, false);
						}
						func_19();
						set_ped_using_action_mode(&(uLocal_472[2]), true, -1, 0);
						func_20();
						func_21();
						func_22();
						set_ambient_zone_state("AZ_RESAF_Area", true, true);
						_0x3743ce6948194349("AZ_RESAF_Area", func_23(&Local_14), 0f);
						iLocal_1279 = 1;
						iLocal_460 = 4;
					}
					break;
				case 4:
					if (!func_24(&Local_14, &uLocal_469, iVar443, 1, 0, 0, 1, 0))
					{
						func_1();
					}
					func_25(&Local_772, 1);
					func_25(&Local_793, 1);
					func_25(&Local_814, 1);
					if (!bVar857)
					{
						func_26();
						func_27();
					}
					if (func_28())
					{
						func_1();
					}
					if (func_30(&Local_14, &uLocal_469, (iVar458 == 4 && func_29()), (iVar458 == 4 && func_29()), iVar458 == 4, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_1();
					}
					break;
			}
			func_31();
			func_32(&Local_14);
		}
	}
}

void func_1()
{
	func_33(&Local_772);
	func_33(&Local_793);
	func_33(&Local_814);
	func_34();
	func_35(&Local_659);
	func_36(1);
	if (_does_propset_exist(iVar457))
	{
		_0x58e0b01d45ca7357(iVar457);
		_set_propset_as_no_longer_needed(iVar457);
	}
	remove_relationship_group(iVar460);
	func_37();
	func_38();
	func_39(54);
	func_40(Global_1935630, 4);
	func_41(-2048655016);
	func_42(&uLocal_1257, 106);
	func_43();
	func_44(1073741824);
	stop_audio_scene("Savage_Fight_Scene");
	stop_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
	trigger_music_event("RESAF_STOP");
	if (bVar1277)
	{
		set_ambient_zone_state("AZ_RESAF_Area", false, true);
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!is_entity_dead(&(uLocal_476[iVar1])))
		{
			set_blocking_of_non_temporary_events(&(uLocal_476[iVar1]), false);
		}
		if (!is_entity_dead(&(uLocal_472[iVar1])))
		{
			set_blocking_of_non_temporary_events(&(uLocal_472[iVar1]), false);
			open_sequence_task(&iVar0);
			if (!is_entity_dead(&(uLocal_476[iVar1])))
			{
				task_mount_animal(0, &(uLocal_476[iVar1]), 20000, -1, 3f, 1, 0, 0);
			}
			_task_smart_flee_style_ped(0, Global_35, 4, 0, -1082130432, -1, 0);
			func_45(&(uLocal_472[iVar1]), &iVar0, 0, 0, 1, 1);
			set_ped_keep_task(&(uLocal_472[iVar1]), true);
		}
		else if (!is_entity_dead(&(uLocal_476[iVar1])))
		{
			_task_smart_flee_style_ped(&(uLocal_476[iVar1]), Global_35, 4, 0, -1082130432, -1, 0);
		}
		if (does_entity_exist(&(uLocal_472[iVar1])))
		{
			if (iVar459 < 1)
			{
				_0x39a2fc5af55a52b1(&(uLocal_472[iVar1]), -1);
			}
			set_ped_as_no_longer_needed(uLocal_472[iVar1]);
		}
		if (does_entity_exist(&(uLocal_476[iVar1])))
		{
			if (iVar459 < 1)
			{
				_0x39a2fc5af55a52b1(&(uLocal_476[iVar1]), -1);
			}
			set_ped_as_no_longer_needed(uLocal_476[iVar1]);
		}
		iVar1++;
	}
	if (iVar459 < 2)
	{
		func_46(&uLocal_469);
		set_ped_as_no_longer_needed(uLocal_469[0]);
		set_ped_as_no_longer_needed(uLocal_469[1]);
	}
	func_47(&Local_14, &uLocal_469, &uLocal_480, iVar443, iLocal_209, Local_14.f_51.f_4, 0, 1, 0, 1);
	func_48();
}

void func_2(var uParam0)
{
	func_49(&Local_14, 1);
	func_50(&Local_14, uParam0);
	func_51(&uLocal_445);
	func_52(&Local_659);
	func_53(iVar442, &uLocal_210);
	func_54(iVar442, &uLocal_232);
	func_55(iVar442, &Local_497, &Local_562, uVar459);
	func_56(&uLocal_1317);
	func_57(&uLocal_1317, 0);
	func_58(&uLocal_1317, 1);
	func_57(&(Local_14.f_5), 0);
	func_59(&(Local_14.f_5), 1);
	func_60();
}

void func_3(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_61(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_4(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_62(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_63(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_64(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_65(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_66(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_5(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 12;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 12;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 12;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 12;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 12;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 12;
			*uParam2 = 5;
			break;
	}
}

void func_6()
{
	vVar0 = { func_68(iLocal_209, func_67(&Local_14)) };
	Local_14.f_51.f_3 = vVar0.z;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_8()
{
	vLocal_451 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), vLocal_454) };
	func_70(&vLocal_451, 1, 10, 0);
}

bool func_9()
{
	switch (iVar462)
	{
		case 0:
			if (func_71(&Local_14))
			{
				if ((!func_75(&Local_772, func_72(), 12507, 12611, 0, 64, 0, 0, 0) || !func_75(&Local_793, func_76(), 12507, 12611, 0, 64, 0, 0, 0)) || !func_75(&Local_814, func_77(), 12507, 12611, 5, 64, 0, 0, 0))
				{
					func_1();
				}
				func_78(&Local_497);
				func_78(&Local_562);
				func_79(&Local_659);
				request_anim_dict(func_80());
				_request_propset(-563691334);
				if (!func_81(-2048655016, 1, Local_497[0]->f_1, 0))
				{
				}
				_0x72d4cb5db927009c(-2002235300, -1, 0);
				_0x72d4cb5db927009c(-618550132, -1, 0);
				_0x72d4cb5db927009c(379542007, -1, 0);
				iLocal_464 = 1;
			}
			break;
		case 1:
			if ((!func_82(&Local_772) || !func_82(&Local_772)) || !func_82(&Local_772))
			{
				return false;
			}
			if (!func_83(&Local_497) || !func_83(&Local_562))
			{
				return false;
			}
			if (!func_84(&Local_659))
			{
				return false;
			}
			if (!has_anim_dict_loaded(func_80()))
			{
				return false;
			}
			if (!_has_propset_loaded(-563691334))
			{
				return false;
			}
			if (!func_85(-2048655016))
			{
				return false;
			}
			if (!func_86())
			{
				return false;
			}
			if ((!_0xff07cf465f48b830(-2002235300) || !_0xff07cf465f48b830(-618550132)) || !_0xff07cf465f48b830(379542007))
			{
				return false;
			}
			if (!prepare_music_event("RESAF_START"))
			{
				return false;
			}
			if (!prepare_music_event("RESAF_FIGHT"))
			{
				return false;
			}
			if (!prepare_music_event("RESAF_STOP"))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_10()
{
	switch (iVar463)
	{
		case 0:
			if (func_87(func_23(&Local_14), func_69(&Local_14), &Local_497, &uLocal_469, 0, 0, -1, 1))
			{
				func_88();
				iLocal_465 = 1;
			}
			break;
		case 1:
			if (bVar1273 || func_87(func_23(&Local_14), func_69(&Local_14), &Local_562, &uLocal_472, 0, 0, -1, 1))
			{
				if (!bVar1273)
				{
					iLocal_1275 = 1;
				}
				if (func_89())
				{
					if (_has_propset_loaded(-563691334))
					{
						func_90(func_23(&Local_14), &Local_659, func_69(&Local_14), 0, 0, -1, 0);
						iLocal_459 = _create_propset(-563691334, func_23(&Local_14), 1, func_69(&Local_14), 1200f, false, true);
						func_91();
						if (does_entity_exist(Local_659[1]->f_8))
						{
							_give_weapon_component_to_weapon_object(&(Local_659[1]->f_8), &(uLocal_472[2]), 752097756, true);
						}
						func_15(&uLocal_476, &Local_562, 1);
						iLocal_465 = 2;
					}
				}
			}
			break;
		case 2:
			if (_does_propset_exist(iVar457) && _0xf42db680a8b2a4d9(iVar457))
			{
				if (func_92(iVar457, 1540392720, &uLocal_458, 0))
				{
					if (func_93())
					{
						if (func_94())
						{
							func_95();
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

void func_11()
{
	func_96(uLocal_490[0], func_23(&Local_14), 6f, 0, 0);
	func_97(uLocal_490[1], func_23(&Local_14), 0.1f, 1, -1, 0);
	func_97(uLocal_490[2], func_23(&Local_14), 3f, 2, -1, 0);
	vVar0 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), 0.43f, -4.73f, 0f) };
	func_97(uLocal_490[3], vVar0, 2.65f, 2, -1, 0);
	vVar0 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), -2.75f, 2.96f, 0f) };
	func_97(uLocal_490[4], vVar0, 1.25f, 2, -1, 0);
	vVar0 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), -1.83f, -1.09f, 0f) };
	func_97(uLocal_490[5], vVar0, 1.25f, 2, -1, 0);
}

void func_12()
{
	func_98(&(uLocal_469[0]), 0, 0);
	func_98(&(uLocal_469[1]), 0, 0);
	func_98(&(uLocal_472[0]), 1, 0);
	func_98(&(uLocal_472[1]), 1, 0);
	func_98(&(uLocal_472[2]), 1, 0);
	func_98(&(uLocal_476[0]), 0, 0);
	func_98(&(uLocal_476[1]), 0, 0);
	func_98(&(uLocal_476[2]), 0, 0);
}

void func_13()
{
	if (_get_anim_scene_entity_matrix(Local_772.f_1, "OBJ_AXE", &Var0, true, "PBL_LOSE", 2))
	{
		set_entity_coords(Local_659[0]->f_8, Var0, true, false, true, true);
		set_entity_rotation(Local_659[0]->f_8, Var0.f_3, 2, true);
		freeze_entity_position(Local_659[0]->f_8, true);
	}
}

void func_14()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 7, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 19, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 20, 1, 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 7, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 19, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 20, 1, 1);
		iVar1++;
	}
}

void func_15(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && *uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist((*uParam1)[iVar0]->f_11))
		{
			(*uParam0)[iVar0] = (*uParam1)[iVar0]->f_11;
		}
		iVar0++;
	}
}

void func_16(int iParam0, int iParam1)
{
	func_99(iParam0, iParam1);
}

void func_17()
{
	_0x923583741dc87bce(&(uLocal_469[0]), "default");
	_0x89f5e7adecccb49c(&(uLocal_469[0]), "action");
}

void func_18(int iParam0, bool bParam1)
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

void func_19()
{
	Var0 = { func_100(Local_793.f_1, "PED_LOOKOUT", "PBL_WIN") };
	func_101(&(uLocal_472[2]), Var0, 2, 1073741824);
}

void func_20()
{
	vVar0 = { 375.8754f, 216.9287f, 117.3961f };
	vVar3 = { 376.2979f, 219.3821f, 117.491f };
	vVar6 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), vVar3 - vVar0) };
	vVar9 = { 0f, 0f, func_102((func_69(&Local_14) + 35.97131f)) };
	vVar12 = { 1f, 0.5803104f, 1f };
	func_103(iVar855);
	iLocal_857 = _create_volume_box_with_custom_name(vVar6, vVar9, vVar12, "RESAF - STUMP");
	if (!_0x19c7567d2f2287d6(iVar855, 7))
	{
	}
}

void func_21()
{
	if (!_does_volume_exist(iVar856))
	{
		vVar0 = { _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), -0.15f, -0.62f, 0f) };
		func_70(&vVar0, 1, 3, 0);
		iLocal_858 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 1f, 1f, 1f);
		if (_does_volume_exist(iVar856))
		{
			_0x19c7567d2f2287d6(iVar856, 7);
		}
	}
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		switch (func_104(iVar0))
		{
			case 1:
				func_107(uLocal_1362[iVar0], _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), func_105(iVar0)), func_106(iVar0));
				break;
			case 0:
				func_108(uLocal_1362[iVar0], _get_object_offset_from_coords(func_23(&Local_14), func_69(&Local_14), func_105(iVar0)), func_106(iVar0));
				break;
		}
		iVar0++;
	}
}

Vector3 func_23(var uParam0)
{
	return uParam0->f_51;
}

bool func_24(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_109(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_110(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_111(&(uParam0->f_5));
			}
			func_112(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_113(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_114(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_115(&(uParam0->f_121));
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
					func_116(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_117(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_64(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_118(uParam0, uParam1[0]);
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

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_119(uParam0, iVar0, 1))
			{
				if (!func_120(uParam0, iVar0))
				{
					func_121(uParam0, &(uParam0->f_15[iVar0]));
					if (!func_122(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (func_119(uParam0, 1, 1))
	{
		if (func_123(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || func_120(uParam0, 1))
			{
				func_124(uParam0, 1);
			}
		}
	}
	if (func_119(uParam0, 0, 1))
	{
		if (has_anim_event_fired(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || func_120(uParam0, 0))
			{
				func_124(uParam0, 0);
			}
		}
	}
	if (func_119(uParam0, 2, 1))
	{
		if (func_125(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || func_120(uParam0, 2))
			{
				func_124(uParam0, 2);
			}
		}
	}
	if (func_119(uParam0, 3, 1))
	{
		if (is_entity_playing_anim(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || func_120(uParam0, 3))
			{
				func_124(uParam0, 3);
			}
		}
	}
	if (func_119(uParam0, 4, 1))
	{
		if (func_120(uParam0, 4))
		{
			func_124(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (_does_anim_scene_exist(uParam0->f_1) && _is_anim_scene_finished(uParam0->f_1, false))
		{
			func_33(uParam0);
		}
	}
}

void func_26()
{
	if (!bVar1268 && !bVar1267)
	{
		if (func_126())
		{
			func_127();
			iLocal_1270 = 1;
		}
	}
}

void func_27()
{
	if (!bVar1266)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_867[iVar0] = func_128(uLocal_469[iVar0], Local_874[iVar0], &(Local_14.f_192), 0, 1, 0, 0, &(iLocal_860[iVar0]), 0, 0, 2, 1, -1082130432);
			iVar0++;
		}
	}
	if (!bVar1267)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iLocal_870[iVar1] = func_128(uLocal_472[iVar1], Local_1025[iVar1], &(Local_14.f_192), 0, 1, 0, 0, &(iLocal_863[iVar0]), 0, 0, 2, 1, -1082130432);
			iVar1++;
		}
	}
}

bool func_28()
{
	func_129();
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
	iVar3 = 0;
	bVar4 = func_29();
	if (bVar446 || bVar1378)
	{
		if (bVar4)
		{
			trigger_music_event("RESAF_STOP");
			iLocal_448 = 0;
			iLocal_1380 = 0;
		}
	}
	if (!bVar1395)
	{
		if ((bVar4 || Local_14.f_46) || func_138(0))
		{
			bVar6 = false;
			iVar5 = 0;
			while (iVar5 < 3)
			{
				if (!is_ped_dead_or_dying(&(uLocal_476[iVar5]), true))
				{
					if (does_entity_exist(&(uLocal_476[iVar5])))
					{
						if (!bVar6)
						{
							if (!has_entity_been_damaged_by_any_ped(&(uLocal_476[iVar5])))
							{
								open_sequence_task(&iVar7);
								task_horse_action(0, 5, 0, 0);
								task_horse_action(0, 1, 0, 0);
								task_stand_still(0, 60000);
								func_45(&(uLocal_476[iVar5]), &iVar7, 0, 0, 1, 1);
								bVar6 = true;
							}
						}
						else
						{
							set_blocking_of_non_temporary_events(&(uLocal_476[iVar5]), false);
						}
					}
				}
				iVar5++;
			}
			iLocal_1397 = 1;
		}
	}
	iVar3 = func_139(&uVar0, &uVar1, &uVar2);
	if (iVar3 != 0)
	{
		func_140();
		func_141();
		stop_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
		if (func_142(iVar3, 1))
		{
			if (!bVar1267)
			{
				func_143();
			}
		}
		if (func_142(iVar3, 2))
		{
			if (!bVar1266)
			{
				func_144();
			}
		}
		func_145();
		if (iVar459 <= 1)
		{
			if (!Local_14.f_48)
			{
				func_114(&Local_14, &(Local_14.f_48), 54, &(Local_14.f_51.f_6));
			}
			iLocal_461 = 2;
		}
		else if (iVar459 > 2)
		{
			if (func_142(iVar3, 1))
			{
				func_146(0);
				func_146(1);
				func_146(2);
			}
		}
	}
	if (func_147(Global_35, func_23(&Local_14), 7f, 1, 1))
	{
		if (func_148())
		{
			if (!func_149(1073741824))
			{
				func_150(1073741824);
			}
		}
		else if (func_149(1073741824))
		{
			func_44(1073741824);
		}
	}
	switch (iVar459)
	{
		case 0:
			func_151(&Local_772);
			func_151(&Local_793);
			func_152(&(uLocal_472[0]), &Local_14, 0);
			func_152(&(uLocal_472[1]), &Local_14, 0);
			func_152(&(uLocal_472[2]), &Local_14, 0);
			start_audio_scene("Savage_Fight_Scene");
			func_153();
			iLocal_461 = 1;
			break;
		case 1:
			if (func_154(&Local_14, 3f, 70f, 45f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0) || iVar3 != 0)
			{
				if (!is_scripted_speech_playing(&(uLocal_469[0])))
				{
					if (!is_scripted_speech_playing(&(uLocal_469[1])))
					{
						switch (iVar443)
						{
							case 0:
								func_155(2);
								break;
							case 1:
								func_155(1);
								break;
						}
						iLocal_461 = 2;
						if (!bVar446)
						{
							trigger_music_event("RESAF_START");
							iLocal_448 = 1;
						}
						if (iVar3 != 0)
						{
							func_156(iVar3);
						}
					}
				}
			}
			else
			{
				func_157();
			}
			break;
		case 2:
			if (func_156(iVar3))
			{
				if (!is_entity_dead(&(uLocal_472[2])))
				{
					func_158(2);
					if (func_159())
					{
						func_160();
					}
					if (!func_138(0))
					{
						func_36(1);
						func_161(2);
					}
				}
				iLocal_1278 = 1;
				if (bVar446 || bVar1378)
				{
					trigger_music_event("RESAF_STOP");
					iLocal_448 = 0;
					iLocal_1380 = 0;
				}
				iLocal_461 = 4;
			}
			break;
		case 4:
			if (func_162())
			{
				if (!func_163())
				{
					if (!is_entity_dead(&(uLocal_472[0])))
					{
						_task_move_in_traffic(&(uLocal_472[0]), 2.5f, 0, 0);
					}
					if (!is_entity_dead(&(uLocal_472[1])))
					{
						if (is_entity_dead(&(uLocal_472[0])))
						{
							_task_move_in_traffic(&(uLocal_472[1]), 2.5f, 0, 0);
						}
						else
						{
							task_follow_to_offset_of_entity(&(uLocal_472[1]), &(uLocal_472[0]), 0f, 0f, 0f, 2.5f, -1, 6f, 1, 1, 0, 0, 1);
						}
					}
					if (!is_entity_dead(&(uLocal_472[2])))
					{
						if (is_entity_dead(&(uLocal_472[0])) && is_entity_dead(&(uLocal_472[1])))
						{
							_task_move_in_traffic(&(uLocal_472[2]), 2.5f, 0, 0);
						}
						else if (!is_entity_dead(&(uLocal_472[0])))
						{
							task_follow_to_offset_of_entity(&(uLocal_472[2]), &(uLocal_472[0]), 0f, 0f, 0f, 2.5f, -1, 10f, 1, 1, 0, 0, 1);
						}
						else if (!is_entity_dead(&(uLocal_472[1])))
						{
							task_follow_to_offset_of_entity(&(uLocal_472[2]), &(uLocal_472[1]), 0f, 0f, 0f, 2.5f, -1, 6f, 1, 1, 0, 0, 1);
						}
					}
				}
				else
				{
					if (!is_entity_dead(&(uLocal_472[0])))
					{
						_task_move_in_traffic(&(uLocal_472[0]), 2.5f, 0, 0);
					}
					if (!is_entity_dead(&(uLocal_472[1])))
					{
						clear_ped_tasks(&(uLocal_472[1]), 1, 0);
					}
					if (!is_entity_dead(&(uLocal_472[2])))
					{
						clear_ped_tasks(&(uLocal_472[2]), 1, 0);
					}
				}
				iLocal_461 = 6;
			}
			break;
		case 3:
			if (func_142(iVar3, 2))
			{
				func_164();
				iLocal_461 = 6;
			}
			else
			{
				switch (iVar461)
				{
					case 0:
						set_ped_reset_flag(&(uLocal_469[0]), 12, true);
						set_ped_reset_flag(&(uLocal_469[1]), 12, true);
						open_sequence_task(&iLocal_208);
						task_play_upper_anim_facing_entity(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE01", Global_35, func_165(0), 4f, -4f, 67108864, 0f, false, false, -1f, 0, 0, -1f);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
						open_sequence_task(&iLocal_208);
						task_go_to_coord_while_aiming_at_entity(0, func_166(0.5f), Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
						iLocal_463 = 1;
						break;
					case 1:
						set_ped_reset_flag(&(uLocal_469[0]), 12, true);
						set_ped_reset_flag(&(uLocal_469[1]), 12, true);
						if (!bVar1392)
						{
							if (func_167(Global_35, &uLocal_469, 20f, 1))
							{
								if (get_sequence_progress(&(uLocal_469[0])) > 0 || (bVar1396 && !is_any_speech_playing(&(uLocal_469[0]))))
								{
									if (!func_168(Global_35, 0))
									{
										if (!bVar1396 || !func_168(&(uLocal_469[0]), 0))
										{
											func_169(Global_35, &(uLocal_469[0]), "RE_SAF_GRI_V1_BECAREFUL", "RE_SAF_GRI_V2_BECAREFUL", -1, -1);
											iLocal_1394 = 1;
										}
									}
								}
								else if (!bVar1396)
								{
									if (is_any_speech_playing(&(uLocal_469[0])))
									{
										iLocal_1398 = 1;
									}
								}
							}
							else
							{
								iLocal_1394 = 1;
							}
						}
						else if (!func_168(Global_35, 0))
						{
							if (get_sequence_progress(&(uLocal_469[0])) > 0)
							{
								open_sequence_task(&iLocal_208);
								task_turn_ped_to_face_entity(0, &(uLocal_469[1]), 0, -1082130432, -1082130432, -1082130432);
								task_play_upper_anim_facing_entity(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE02", &(uLocal_469[1]), func_165(1), 4f, -4f, 67108864, 0f, false, false, -1f, 0, 0, -1f);
								task_turn_ped_to_face_entity(0, &(uLocal_469[1]), -1, -1082130432, -1082130432, -1082130432);
								func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
								iLocal_1350 = func_170(func_23(&Local_14), 1109393408, &(uLocal_469[1]), 1);
								open_sequence_task(&iLocal_208);
								task_turn_ped_to_face_entity(0, &(uLocal_469[0]), 0, -1082130432, -1082130432, -1082130432);
								task_turn_ped_to_face_entity(0, &(uLocal_469[0]), func_171("SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE01"), -1082130432, -1082130432, -1082130432);
								if (func_172(iVar1348, 0, 1))
								{
									task_turn_ped_to_face_entity(0, iVar1348, 0, -1082130432, -1082130432, -1082130432);
									task_go_to_entity(0, iVar1348, -1, 4f, 1f, 2f, 0);
									task_turn_ped_to_face_entity(0, &(uLocal_469[0]), -1, -1082130432, -1082130432, -1082130432);
									if (!func_147(iVar1348, func_23(&Local_14), 10f, 1, 1))
									{
										task_follow_nav_mesh_to_coord(iVar1348, func_23(&Local_14), 1f, -1, 10f, 0, 40000f);
									}
								}
								else
								{
									task_follow_to_offset_of_entity(0, &(uLocal_469[0]), 0f, 0f, 0f, 1f, -1, 2f, 1, 1, 0, 0, 1);
								}
								func_45(&(uLocal_469[1]), &iLocal_208, 1f, 2f, 1, 1);
								iLocal_463 = 2;
							}
						}
						break;
					case 2:
						switch (iVar443)
						{
							case 0:
								func_173(&(uLocal_469[0]), Global_35, "RE_SAF_GRI_V1_ALRIGHTNOW", -1915057924, 0);
								break;
						}
						if (get_sequence_progress(&(uLocal_469[0])) > 0)
						{
							iLocal_463 = 4;
						}
						break;
					case 4:
						func_158(20);
						func_174(12, 0, 0, 0, &(uLocal_469[0]), 0, 1065353216, 0);
						func_175();
						func_176(&uLocal_480);
						iLocal_461 = 6;
						break;
				}
			}
			break;
		case 5:
			if (func_29() || !func_177(&uLocal_472, 80f, 1, 0, -1))
			{
				return true;
			}
			break;
		case 6:
			if (func_142(iVar3, 2))
			{
				func_164();
			}
			else if (!Local_14.f_46)
			{
				if (func_178())
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_29()
{
	if (bVar1275)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_ped_dead_or_dying(&(uLocal_472[iVar0]), true))
		{
			return false;
		}
		iVar0++;
	}
	iLocal_1277 = 1;
	return true;
}

bool func_30(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_179())
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
			else if (func_180(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_64(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_64(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_64(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_181(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_181(Global_36, vVar1) > fVar0)
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

void func_31()
{
	if (!func_182(vLocal_451))
	{
		func_183(&uLocal_1257, vLocal_451, 3, -1082130432);
	}
}

void func_32(var uParam0)
{
	wait(uParam0->f_158);
}

void func_33(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_34()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_184(uLocal_490[iVar0], 1);
		iVar0++;
	}
}

void func_35(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist((*uParam0)[iVar0]->f_8))
		{
			set_object_as_no_longer_needed(&((*uParam0)[iVar0]->f_8));
		}
		iVar0++;
	}
}

void func_36(bool bParam0)
{
	if (bVar1271)
	{
		if (does_entity_exist(Local_659[2]->f_8))
		{
			if (is_entity_attached(Local_659[2]->f_8))
			{
				detach_entity(Local_659[2]->f_8, true, true);
				stop_anim_playback(Local_659[2]->f_8, 0, false);
			}
			activate_physics(Local_659[2]->f_8);
		}
		if (does_entity_exist(Local_659[1]->f_8))
		{
			detach_entity(Local_659[1]->f_8, true, true);
			stop_anim_playback(Local_659[1]->f_8, 0, false);
			if (bParam0 && !is_ped_ragdoll(&(uLocal_472[2])))
			{
				_give_weapon_component_to_weapon_object(&(Local_659[1]->f_8), &(uLocal_472[2]), 752097756, true);
			}
			else
			{
				activate_physics(Local_659[1]->f_8);
			}
		}
		iLocal_1274 = 0;
	}
}

void func_37()
{
	if (_does_volume_exist(iVar856))
	{
		_0x2c87c3e1c7b96ee2(iVar856);
		func_103(iVar856);
	}
}

void func_38()
{
	if (_does_volume_exist(iVar855))
	{
		_0x2c87c3e1c7b96ee2(iVar855);
	}
	func_103(iVar855);
}

void func_39(int iParam0)
{
	if (!func_185(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_41(int iParam0)
{
	return _0x4eddd9e9ca5af985(iParam0);
}

void func_42(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, false);
		remove_named_ptfx_asset(-458373790);
		func_112(&(uParam0->f_1), 4);
	}
}

void func_43()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_184(uLocal_1362[iVar0], 1);
		iVar0++;
	}
}

void func_44(int iParam0)
{
	if (func_149(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_45(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_46(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (is_entity_dead(uParam0[iVar0]))
		{
		}
		else
		{
			func_186(uParam0[iVar0], 0, 0);
		}
		iVar0++;
	}
}

void func_47(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_187(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_188(uParam0->f_3, 524288);
		}
	}
	if (func_172(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_172(uParam1[iVar0], 0, 0))
			{
				func_189(uParam1[iVar0], bVar3);
				if (func_190(uParam0, (*uParam1)[iVar0]))
				{
					func_191((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_172(uParam1[iVar0], 0, 1))
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
							func_193(uParam1[iVar0], 1073741824, func_192(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_194(uParam0);
	}
	func_195(uParam0);
	if (!uParam0->f_186)
	{
		func_109(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_196(uParam0->f_3, uParam0->f_185);
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
		func_197(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_48()
{
	terminate_this_thread();
}

void func_49(var uParam0, bool bParam1)
{
	func_56(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_198("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_50(var uParam0, var uParam1)
{
	uParam0->f_3 = func_199(uParam1);
	uParam0->f_161 = func_142(uParam1->f_2, 2);
}

void func_51(var uParam0)
{
	*uParam0 = func_200(54, 2, 0);
}

void func_52(var uParam0)
{
	(*uParam0)[0]->f_7 = 799179000;
	*(*uParam0)[0] = { 0.5f, 0f, 1.025f };
	(*uParam0)[2]->f_7 = 1146914213;
	*(*uParam0)[2] = { 0f, 0f, 0f };
	(*uParam0)[3]->f_7 = 0;
	(*uParam0)[4]->f_7 = 0;
	(*uParam0)[5]->f_7 = 0;
}

void func_53(int iParam0, var uParam1)
{
	uParam1->f_2 = 20f;
	uParam1->f_1 = 7f;
	*uParam1 = func_201(iParam0 == 0, "RE_SAF_GRI_V1_WARN_AGGRO", "RE_SAF_GRI_V2_WARN_AGGRO");
	uParam1->f_18[0] = func_201(iParam0 == 0, "RE_SAF_GRI_V1_WARN_A", "RE_SAF_GRI_V2_WARN_A");
	uParam1->f_18[1] = func_201(iParam0 == 0, "RE_SAF_GRI_V1_WARN_B", "RE_SAF_GRI_V2_WARN_B");
	uParam1->f_18[2] = func_201(iParam0 == 0, "RE_SAF_GRI_V1_WARN_C", "RE_SAF_GRI_V2_WARN_C");
}

void func_54(int iParam0, var uParam1)
{
	StringCopy(&(uParam1->f_2), "SCRIPT_RE@CAMPFIRE_MASSACRE", 64);
	StringCopy(&(uParam1->f_10), "MAN_UPPER_BODY_LINE01", 64);
	StringCopy(&(uParam1->f_34), func_201(iParam0 == 0, "RE_SAF_GRI_V1_WORDSCANT", "RE_SAF_GRI_V2_WORDSCANT"), 64);
	uParam1->f_79 = 1;
}

void func_55(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0]->f_1 = -1167774274;
			(*uParam1)[0] = 4;
			(*uParam1)[0]->f_3 = -1930139775;
			(*uParam1)[0]->f_31 = uParam3;
			StringCopy(&((*uParam1)[0]->f_23), "0964_A_M_M_RoughTravellers_Black_02", 64);
			(*uParam1)[0]->f_6 = { -3.07f, -0.59f, 0f };
			func_202(&((*uParam1)[0]->f_22));
			(*uParam1)[1]->f_1 = 223180727;
			(*uParam1)[1] = 5;
			(*uParam1)[1]->f_3 = 1187754581;
			(*uParam1)[1]->f_31 = uParam3;
			StringCopy(&((*uParam1)[1]->f_23), "0856_A_F_M_Civ_Poor_Black_TIMID_02", 64);
			(*uParam1)[1]->f_6 = { 3.21f, 5.06f, 0f };
			func_202(&((*uParam1)[1]->f_22));
			(*uParam2)[0]->f_1 = -1421951598;
			(*uParam2)[0] = 22;
			(*uParam2)[0]->f_3 = 1883215998;
			(*uParam2)[0]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[0]->f_23), "0258_G_M_M_UniMountainMen_02_WHITE_02", 64);
			(*uParam2)[0]->f_6 = { -2.37f, -0.17f, 0f };
			func_202(&((*uParam2)[0]->f_22));
			(*uParam2)[1]->f_1 = -1421951598;
			(*uParam2)[1] = 22;
			(*uParam2)[1]->f_3 = -2104935151;
			(*uParam2)[1]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[1]->f_23), "0260_G_M_M_UniMountainMen_03_NATIVE_02", 64);
			(*uParam2)[1]->f_6 = { -2.11f, -2.62f, 0f };
			func_202(&((*uParam2)[1]->f_22));
			(*uParam2)[2]->f_1 = -1421951598;
			(*uParam2)[2] = 22;
			(*uParam2)[2]->f_3 = -1789762909;
			(*uParam2)[2]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[2]->f_23), "0259_G_M_M_UniMountainMen_03_NATIVE_01", 64);
			(*uParam2)[2]->f_6 = { 2.23f, -1.79f, 0f };
			func_202(&((*uParam2)[2]->f_22));
			break;
		case 1:
			(*uParam1)[0]->f_1 = -1167774274;
			(*uParam1)[0] = 4;
			(*uParam1)[0]->f_3 = 2059977514;
			(*uParam1)[0]->f_31 = uParam3;
			StringCopy(&((*uParam1)[0]->f_23), "0899_A_M_M_Civ_Poor_Hispanic_AVOID_04", 64);
			(*uParam1)[0]->f_6 = { -3.07f, -0.59f, 0f };
			func_202(&((*uParam1)[0]->f_22));
			(*uParam1)[1]->f_1 = 223180727;
			(*uParam1)[1] = 5;
			(*uParam1)[1]->f_3 = -1728391502;
			(*uParam1)[1]->f_31 = uParam3;
			StringCopy(&((*uParam1)[1]->f_23), "0845_A_F_M_BlWTownfolk_02_HISPANIC_02", 64);
			(*uParam1)[1]->f_10 = 1;
			(*uParam1)[1]->f_6 = { 3.21f, 5.06f, 0f };
			func_202(&((*uParam1)[1]->f_22));
			(*uParam2)[0]->f_1 = -1421951598;
			(*uParam2)[0] = 22;
			(*uParam2)[0]->f_3 = 1883215998;
			(*uParam2)[0]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[0]->f_23), "0255_G_M_M_UniMountainMen_01_WHITE_01", 64);
			(*uParam2)[0]->f_6 = { -2.37f, -0.17f, 0f };
			func_202(&((*uParam2)[0]->f_22));
			(*uParam2)[1]->f_1 = -1421951598;
			(*uParam2)[1] = 22;
			(*uParam2)[1]->f_3 = -2104935151;
			(*uParam2)[1]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[1]->f_23), "0256_G_M_M_UniMountainMen_01_WHITE_02", 64);
			(*uParam2)[1]->f_6 = { -2.11f, -2.62f, 0f };
			(*uParam2)[1]->f_10 = 1;
			func_202(&((*uParam2)[1]->f_22));
			(*uParam2)[2]->f_1 = -1421951598;
			(*uParam2)[2] = 22;
			(*uParam2)[2]->f_3 = -1789762909;
			(*uParam2)[2]->f_31 = -1448293989;
			StringCopy(&((*uParam2)[2]->f_23), "0257_G_M_M_UniMountainMen_02_WHITE_01", 64);
			(*uParam2)[2]->f_6 = { 3.21f, -5.06f, 0f };
			func_202(&((*uParam2)[2]->f_22));
			break;
	}
	func_203((*uParam2)[0], 5.89f, -3.76f, 0f, 39.7992f, 0, 0, 0);
	func_203((*uParam2)[1], -3.78f, -5.72f, 0f, -24.4f, 0, 0, 0);
	func_203((*uParam2)[2], 4.97f, -6.5f, 0f, 69.46f, 0, 0, 0);
}

void func_56(int iParam0)
{
	func_204(iParam0, 0);
	func_205(iParam0, 0);
	func_206(iParam0, 1);
	func_207(iParam0, 1);
	func_208(iParam0, 0);
	func_209(iParam0, 1);
	func_210(iParam0, 1, 1, 1);
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(&(uParam0->f_1), 16);
	}
	else
	{
		func_112(&(uParam0->f_1), 16);
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 8192);
	}
	else
	{
		func_211(iParam0, 8192);
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 32);
	}
	else
	{
		func_211(iParam0, 32);
	}
}

void func_60()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_212(Local_874[iVar0], "", "", "");
		iLocal_860[iVar0] = func_213(3, 0, 0);
		Local_874[iVar0]->f_74 = 15f;
		func_214(Local_874[iVar0]->f_21[2], 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_212(Local_1025[iVar1], "", "", "");
		iLocal_863[iVar1] = func_213(3, 0, 0);
		Local_1025[iVar1]->f_74 = 30f;
		func_214(Local_1025[iVar1]->f_21[2], 1);
		func_215(Local_1025[iVar1], 1, 1, 0);
		func_217(Local_1025[iVar1], 1, func_216(26));
		iVar1++;
	}
}

bool func_61(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_218(iVar0))
	{
		return false;
	}
	if (func_219(iVar0, 1) || func_219(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_62(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_220(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_221(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_113(iParam0, 128))
			{
				if (!func_222(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_223(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_224(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_182(*uParam1))
				{
					return func_225(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_226(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_142(Param4.f_2, 8))
				{
					func_221(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_227(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_228(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_229(vdist(Global_36, *uParam1), iParam0))
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
			if (func_113(iParam0, 128))
			{
				if (!func_230(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_225(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_223(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_227(uParam1))
					{
						return func_225(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_231(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_221(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_225(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_198("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_198("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	if (func_64(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_232(iParam1, func_67(uParam0), &(uParam0->f_172)))
		{
			if (func_172(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_64(int iParam0, int iParam1)
{
	if (!func_185(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_65(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_233(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_64(uParam0->f_3, 1) && !func_64(uParam0->f_3, 32))
	{
		func_233(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_64(uParam0->f_3, 2) && !func_64(uParam0->f_3, 32))
	{
		func_233(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_234(uParam0->f_171, 1);
	}
	if (func_64(uParam0->f_3, 1))
	{
		func_233(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_235(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_66(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_67(var uParam0)
{
	return uParam0->f_51.f_4;
}

Vector3 func_68(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 185.04f;
				case 1:
					return 0f, 0f, 255.6f;
				case 2:
					return 0f, 0f, 48.24f;
				case 3:
					return 0f, 0f, 22.32f;
				case 4:
					return 0f, 0f, -215.28f;
				case 5:
					return 0f, 0f, -144.72f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_69(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_70(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_236(*uParam0, 0f, 0f, 0f))
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

bool func_71(var uParam0)
{
	iVar0 = func_237(uParam0->f_3);
	iVar1 = func_238(1);
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

char* func_72()
{
	return "script@beat@wilderness@campfiremassacre@malefight";
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_INTRO";
		case 1:
			return "PBL_WIN";
		case 2:
			return "PBL_LOSE";
		case 3:
			return "PBL_INTERRUPT";
		case 4:
			return "PBL_QUICK_KILL";
		case 5:
			return "PBL_HUG";
		default:
			break;
	}
	return func_239("[RESAF]", "RESAF_PBL_NAME: Invalid Index.");
}

void func_74(var uParam0)
{
}

bool func_75(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!is_string_null_or_empty(sParam7))
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = _create_anim_scene(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (!bParam8)
		{
			load_anim_scene(uParam0->f_1);
		}
		return true;
	}
	return false;
}

char* func_76()
{
	return "script@beat@wilderness@campfiremassacre@femalefight";
}

char* func_77()
{
	return "script@beat@wilderness@campfiremassacre@hugscene";
}

void func_78(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_240(&((*uParam0)[iVar0]->f_1));
		func_240(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_79(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

char* func_80()
{
	return "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT";
}

bool func_81(int iParam0, int iParam1, var uParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, uParam2, iParam3);
}

bool func_82(var uParam0)
{
	if (_is_anim_scene_metadata_loaded(uParam0->f_1, false) && _is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		return true;
	}
	if (!_is_anim_scene_loading(uParam0->f_1, true))
	{
		load_anim_scene(uParam0->f_1);
	}
	return false;
}

bool func_83(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_241((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_84(var uParam0)
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

bool func_85(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

bool func_86()
{
	return true;
	bVar0 = false;
	if (iVar443 == 1)
	{
		return true;
	}
	if (!_is_metaped_outfit_request_valid(&(iLocal_487[0])))
	{
		iLocal_487[0] = _request_metaped_outfit(Local_497[0]->f_1, 251649753);
		bVar0 = true;
	}
	else if (!_0x610438375e5d1801(&(iLocal_487[0])))
	{
		bVar0 = true;
	}
	if (!_is_metaped_outfit_request_valid(&(iLocal_487[1])))
	{
		iLocal_487[1] = _request_metaped_outfit(Local_497[1]->f_1, 512435896);
		bVar0 = true;
	}
	else if (!_0x610438375e5d1801(&(iLocal_487[1])))
	{
		bVar0 = true;
	}
	return !bVar0;
}

bool func_87(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_242() || !func_243((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_88()
{
	if (!is_entity_dead(&(uLocal_469[1])))
	{
		remove_all_ped_weapons(&(uLocal_469[1]), true, true);
		func_244(&(uLocal_469[1]), 1789063806);
	}
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		remove_all_ped_weapons(&(uLocal_469[0]), true, true);
		func_245(&(uLocal_469[0]), -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_244(&(uLocal_469[0]), 1285527742);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar0])))
		{
			remove_all_ped_weapons(&(uLocal_472[iVar0]), true, true);
			if (iVar0 == 2)
			{
				func_246(&(uLocal_472[iVar0]), -618550132, -1, 0, 0, 1056964608, 1065353216, 0);
			}
			if (iVar0 != 0)
			{
				func_246(&(uLocal_472[iVar0]), 379542007, -1, 0, 0, 1056964608, 1065353216, 0);
			}
			set_ped_config_flag(&(uLocal_472[iVar0]), 6, true);
			set_ped_using_action_mode(&(uLocal_472[iVar0]), true, -1, 0);
			set_ped_combat_movement(&(uLocal_472[iVar0]), 2);
		}
		iVar0++;
	}
}

bool func_89()
{
	if (!func_247(&(Local_659[1]->f_8), -2002235300))
	{
		return false;
	}
	if (!func_247(&(Local_659[4]->f_8), -618550132))
	{
		return false;
	}
	if (!func_247(&(Local_659[5]->f_8), -618550132))
	{
		return false;
	}
	if (!func_247(&(Local_659[8]->f_8), 379542007))
	{
		return false;
	}
	return true;
}

int func_90(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_248((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_248((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_248((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_248((*iParam3)[iVar0]->f_11, 128))
					{
						func_249(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_248((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_182((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_248((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_102((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_248((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_248((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_248((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_91()
{
	iVar0 = 0;
	while (iVar0 < iVar470)
	{
		if (does_entity_exist(&(uLocal_472[iVar0])))
		{
			if (!is_entity_dead(&(uLocal_472[iVar0])))
			{
				if (does_entity_exist(Local_562[iVar0]->f_11))
				{
					func_250(&(Local_14.f_5), &(uLocal_472[iVar0]), Local_562[iVar0]->f_11, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_92(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (does_entity_exist(*uParam2) && is_entity_an_object(*uParam2))
	{
		return true;
	}
	if (_0xf42db680a8b2a4d9(iParam0))
	{
		iVar0 = create_itemset(false);
		iVar1 = _get_entities_from_propset(iParam0, iVar0, iParam1, false, false);
		if (iVar1 > 0)
		{
			if (iParam3 < 1 && iParam3 < iVar1)
			{
				*uParam2 = _0x18013392501ce5dc(get_indexed_item_in_itemset(0, iVar0));
			}
			else
			{
				*uParam2 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iParam3, iVar0));
			}
		}
		_0x20a4bf0e09bee146(iVar0);
		clean_itemset(iVar0);
		destroy_itemset(iVar0);
		if (does_entity_exist(*uParam2))
		{
			vVar2 = { get_entity_coords(*uParam2, true, false) };
		}
		return (does_entity_exist(*uParam2) && is_entity_an_object(*uParam2));
	}
	return false;
}

bool func_93()
{
	if (does_entity_exist(Local_659[1]->f_8))
	{
		if (!_0xb6cbd40f8ea69e8a(Local_659[1]->f_8))
		{
			return false;
		}
	}
	if (!_0xb6cbd40f8ea69e8a(Local_659[2]->f_8))
	{
		return false;
	}
	return true;
}

bool func_94()
{
	if (!func_251(Local_772.f_1, "PBL_WIN"))
	{
		return false;
	}
	if (!func_251(Local_772.f_1, "PBL_LOSE"))
	{
		return false;
	}
	if (!func_251(Local_793.f_1, "PBL_WIN"))
	{
		return false;
	}
	return true;
}

void func_95()
{
	vVar0 = { func_23(&Local_14) };
	vVar3 = { 0f, 0f, func_69(&Local_14) };
	Local_768 = { vVar0 };
	Local_768.f_3 = vVar3.z;
	func_252(&Local_772, "PED_MALE", &(uLocal_469[0]), 0);
	func_252(&Local_772, "PED_SAVAGE1", &(uLocal_472[0]), 0);
	func_252(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
	func_252(&Local_772, "OBJ_STUMP", iVar456, 0);
	func_252(&Local_772, "OBJ_KNIFE", Local_659[4]->f_8, 0);
	func_252(&Local_772, "OBJ_AXE", Local_659[0]->f_8, 0);
	func_252(&Local_772, "OBJ_GUN", Local_659[8]->f_8, 0);
	func_253(0, 1, 0);
	func_253(0, 2, 0);
	func_253(0, 0, 0);
	func_254(&Local_772, vVar0, vVar3, 2);
	func_252(&Local_793, "PED_FEMALE", &(uLocal_469[1]), 0);
	func_252(&Local_793, "PED_SAVAGE2", &(uLocal_472[1]), 0);
	func_252(&Local_793, "OBJ_ARROW", Local_659[2]->f_8, 0);
	func_252(&Local_793, "OBJ_KNIFE", Local_659[5]->f_8, 0);
	func_253(1, 1, 0);
	func_253(1, 2, 0);
	func_253(1, 0, 0);
	func_254(&Local_793, vVar0, vVar3, 2);
	func_254(&Local_814, vVar0, vVar3, 2);
}

void func_96(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_97(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_97(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_255(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_255(uParam0))
		{
		}
	}
}

void func_98(int iParam0, bool bParam1, float fParam2)
{
	if (!is_entity_dead(iParam0))
	{
		set_entity_is_target_priority(iParam0, bParam1, fParam2);
	}
}

void func_99(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

struct<4> func_100(int iParam0, char* sParam1, char* sParam2)
{
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &Var4, !is_string_null_or_empty(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

void func_101(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_256(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

float func_102(float fParam0)
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

void func_103(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.06f, -0.59f, 0f;
		case 1:
			return 0.06f, -0.59f, 0f;
		case 2:
			return 1.2f, -5.82f, 0f;
		case 3:
			return 0.55f, -6.62f, 0f;
		case 4:
			return 0.96f, -4.94f, 0f;
		case 5:
			return -0.2f, -5.05f, 0f;
		case 6:
			return 1.15f, -4.27f, 0f;
		case 7:
			return -0.39f, -4.18f, 0f;
		case 8:
			return 1.88f, -1.04f, 0f;
		case 9:
			return 1.66f, -2f, 0f;
		case 10:
			return -2.32f, 0.15f, 0f;
		case 11:
			return 4.28f, -0.27f, 0f;
		case 12:
			return 3.15f, -3.35f, 0f;
		case 13:
			return -1.77f, -3.47f, 0f;
		case 14:
			return 0f, 2.76f, 0f;
		case 15:
			return 1.06f, -2.93f, 0f;
		case 16:
			return -1.04f, -1.93f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.5f;
		case 1:
			return 1f;
		case 2:
			return 1.5f;
		case 3:
			return 1.5f;
		case 4:
			return 1.5f;
		case 5:
			return 1.5f;
		case 6:
			return 1.5f;
		case 7:
			return 1.5f;
		case 8:
			return 1.5f;
		case 9:
			return 1.5f;
		case 10:
			return 1.5f;
		case 11:
			return 1f;
		case 12:
			return 1f;
		case 13:
			return 1f;
		case 14:
			return 1f;
		case 15:
			return 1.8f;
		case 16:
			return 1.8f;
		default:
			break;
	}
	return 0f;
}

void func_107(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_97(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_108(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_97(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_109(var uParam0, int iParam1)
{
	vVar0 = { func_23(uParam0) };
	iVar3 = func_196(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_110(var uParam0, var uParam1)
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

void func_111(var uParam0)
{
	func_206(uParam0, 1);
	func_257(uParam0, 20);
}

void func_112(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_185(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_114(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_185(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_258())
	{
		func_259(1);
	}
	func_260(iParam2, uParam0->f_43);
	func_261(iParam2, 0, 0, 0, 0);
	if (func_262(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_187(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_263(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_115(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_116(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_264())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_113(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_114(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_115(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_265(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_266(uParam0, bVar0);
		func_267(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_268(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_114(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_115(&(uParam0->f_121));
		}
	}
}

bool func_117(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_64(uParam2->f_3, 1))
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
			if (func_269())
			{
				fVar0 = 15f;
			}
		}
		if (func_270(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_271(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_270(uParam2, fVar1))
		{
			if (!func_272((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_273(uParam2->f_3, 2) && func_274(2))
		{
			return false;
		}
		if (func_64(iParam0, 4194304) || func_64(iParam0, 33554432))
		{
			if (func_275(1))
			{
				return false;
			}
		}
	}
	if (func_276(Global_35))
	{
		return false;
	}
	if (func_277(0, 1, 1) && !func_278(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_64(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_279(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_271(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_280())
		{
			return false;
		}
		iVar2 = func_282(func_281());
		if (func_283(iVar2))
		{
			if (func_284(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_285(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_286(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_118(var uParam0, int iParam1)
{
	if (func_287(uParam0->f_51))
	{
		func_288(uParam0->f_51, 0);
		fVar0 = func_289(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_290());
		bVar1 = func_192(!func_64(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_292(iVar2, func_291(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_119(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return false;
	}
	return ((!bParam2 || func_293(uParam0, 0, 0, 0)) && is_bit_set(uParam0->f_8, iParam1));
}

bool func_120(var uParam0, int iParam1)
{
	return func_294(uParam0, &(uParam0->f_15[iParam1]));
}

var func_121(var uParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return _0xdf7b5144e25cd3fe(uParam0->f_1, sVar0);
}

bool func_122(var uParam0, int iParam1)
{
	return func_295(uParam0, &(uParam0->f_15[iParam1]));
}

bool func_123(int iParam0, int iParam1)
{
	return (func_296(iParam0) || (_get_anim_scene_duration(iParam0) - _get_anim_scene_time(iParam0)) <= (to_float(iParam1) * 0.001f));
}

void func_124(var uParam0, int iParam1)
{
	uVar0 = &uParam0->f_15[iParam1];
	Stack.Push(uParam0->f_1);
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_6);
	_set_anim_scene_playback_list_bool(StackVal, StackVal, true);
	func_297(uParam0, iParam1, 0);
	uParam0->f_2 = uVar0;
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_5);
}

bool func_125(int iParam0, float fParam1, float fParam2)
{
	return (_get_anim_scene_progress(iParam0) >= fParam1 && _get_anim_scene_progress(iParam0) <= fParam2);
}

bool func_126()
{
	if (bVar1274)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_ped_dead_or_dying(&(uLocal_469[iVar0]), true))
		{
			return false;
		}
		iVar0++;
	}
	iLocal_1276 = 1;
	return true;
}

void func_127()
{
	func_298(0, 0);
}

int func_128(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	return func_299(uParam0, iParam1, iParam1->f_74, &(iParam1->f_21), uParam2, fParam3, iParam4, iParam5, sParam6, iParam7, iParam8, iParam9, iParam10, iParam11, fParam12, 0);
}

void func_129()
{
	if (has_anim_event_fired(&(uLocal_469[0]), 1772761102))
	{
		func_158(4);
		func_158(13);
		_0xdfce8ce9f3ebe93f(&(uLocal_469[0]));
		_0x18ff3110cf47115d(&(uLocal_469[0]), 2, 0);
		apply_ped_damage_pack(&(uLocal_469[0]), "PD_headshot", 2f, 1f);
		func_300(&Local_772, "OBJ_AXE", Local_659[0]->f_8, 0);
		attach_entity_to_entity(Local_659[0]->f_8, &(uLocal_469[0]), get_ped_bone_index(&(uLocal_469[0]), 14411), 0.0977478f, 0.046562f, -0.9032116f, 9.94144f, 9.42334f, -61.85444f, false, false, true, false, 2, true, false, false);
	}
	if (does_entity_exist(Local_659[4]->f_8))
	{
		if (has_anim_event_fired(&(uLocal_469[0]), -411309900))
		{
		}
		else if (has_anim_event_fired(&(uLocal_469[0]), 2010666579))
		{
			func_301(Local_659[4]->f_8, 1, 1);
			_give_weapon_component_to_weapon_object(&(Local_659[4]->f_8), &(uLocal_472[0]), 752097756, false);
		}
	}
	if (does_entity_exist(Local_659[5]->f_8))
	{
		if (has_anim_event_fired(&(uLocal_472[1]), -1407183100))
		{
			func_300(&Local_793, "OBJ_KNIFE", Local_659[5]->f_8, 0);
			func_301(Local_659[5]->f_8, 1, 1);
			attach_entity_to_entity(Local_659[5]->f_8, &(uLocal_472[1]), get_ped_bone_index(&(uLocal_472[1]), 14414), 0.085f, 0.3408f, -0.0775f, 4.76f, 70.56f, -105.89f, false, false, false, false, 2, true, false, false);
		}
	}
	if (!func_138(1))
	{
		if (has_anim_event_fired(&(uLocal_469[0]), 1859627536) || has_anim_event_fired(&(uLocal_469[0]), 465284456))
		{
			func_158(1);
		}
	}
	if (has_anim_event_fired(&(uLocal_469[0]), 741133106))
	{
		func_158(4);
		if (!bVar448)
		{
			if (!func_138(0))
			{
				if (func_302(&(uLocal_469[0]), 80f, 35f, &(Local_14.f_98[0]), -1082130432))
				{
					func_174(2, 0, 0, "RE_HONOR_WATCHED_MURDER", &(uLocal_469[0]), 0, 1065353216, 0);
					iLocal_450 = 1;
				}
			}
		}
		func_141();
	}
	if (has_anim_event_fired(&(uLocal_469[0]), 749672355))
	{
		if (does_entity_exist(Local_659[8]->f_8))
		{
			_give_weapon_component_to_weapon_object(&(Local_659[8]->f_8), &(uLocal_469[0]), 752097756, true);
		}
		else
		{
			func_246(&(uLocal_469[0]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
			set_current_ped_weapon(&(uLocal_469[0]), 379542007, false, 0, false, false);
		}
		remove_all_ped_weapons(&(uLocal_472[0]), true, true);
	}
	if (has_anim_event_fired(&(uLocal_469[1]), 791862723) || has_anim_event_fired(&(uLocal_469[1]), 64006052))
	{
		func_158(5);
		if (!bVar448)
		{
			if (!func_138(0))
			{
				if (func_302(&(uLocal_469[1]), 80f, 35f, &(Local_14.f_98[1]), -1082130432))
				{
					func_174(2, 0, 0, "RE_HONOR_WATCHED_MURDER", &(uLocal_469[1]), 0, 1065353216, 0);
					iLocal_450 = 1;
				}
			}
		}
		func_141();
	}
	if (has_anim_event_fired(&(uLocal_472[0]), 1859627536))
	{
		func_158(11);
	}
	if (has_anim_event_fired(&(uLocal_472[0]), 403254603))
	{
		freeze_entity_position(Local_659[0]->f_8, false);
		func_158(12);
	}
	if (!bVar1269)
	{
		if (has_anim_event_fired(&(uLocal_469[1]), -702964673) && iVar443 == 1)
		{
			set_ped_using_action_mode(&(uLocal_472[2]), true, -1, 0);
			func_303();
			task_turn_ped_to_face_entity(&(uLocal_472[2]), &(uLocal_469[0]), -1, -1082130432, -1082130432, -1082130432);
			func_158(2);
			if (func_159())
			{
				func_160();
			}
		}
	}
	if (has_anim_event_fired(&(uLocal_469[0]), 513527650))
	{
	}
	if (has_anim_event_fired(&(uLocal_472[0]), 1518173945))
	{
		func_304(0);
	}
	if (has_anim_event_fired(&(uLocal_472[1]), 1518173945))
	{
		func_304(1);
	}
	if (!is_entity_dead(&(uLocal_472[1])))
	{
		if (has_anim_event_fired(&(uLocal_472[1]), 741133106))
		{
			func_158(19);
		}
	}
	if (has_anim_event_fired(&(uLocal_469[0]), 1793185209))
	{
		_0xcef4c65de502d367(&(uLocal_469[0]), 1, 0, 1, 0);
	}
}

void func_130()
{
	if (does_blip_exist(&(uLocal_480[0])))
	{
		if (func_138(4) || is_ped_injured(&(uLocal_469[0])))
		{
			func_305(uLocal_480[0]);
		}
	}
	if (does_blip_exist(&(uLocal_480[1])))
	{
		if (func_138(5) || is_ped_injured(&(uLocal_469[1])))
		{
			func_305(uLocal_480[1]);
		}
	}
}

void func_131()
{
	if (iVar443 == 0)
	{
		if (has_anim_event_fired(&(uLocal_472[1]), 316821142))
		{
			func_306(&(uLocal_472[2]), &(uLocal_472[1]), "RE_SAF_GRI_V1_LIVELY_G1", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else
	{
		if (has_anim_event_fired(&(uLocal_469[0]), 329477842))
		{
			func_307(&(uLocal_469[0]), uLocal_480[0], -89429847, 580546400, 0, 0);
			func_307(&(uLocal_469[1]), uLocal_480[1], -89429847, 580546400, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_472[0]), 741133106))
		{
			func_306(&(uLocal_472[2]), &(uLocal_472[2]), "RE_SAF_GRI_V2_WHAT_G2", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_132()
{
	if (!func_138(21) && !is_entity_dead(&(uLocal_469[0])))
	{
		if (!_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), -1))
		{
			if (func_308(&(uLocal_469[0]), 0))
			{
				func_309(&(uLocal_472[0]), &(uLocal_469[0]));
				func_309(&(uLocal_472[1]), &(uLocal_469[0]));
				func_309(&(uLocal_472[2]), &(uLocal_469[0]));
				func_158(21);
			}
		}
	}
}

void func_133()
{
	if (iVar459 <= 1)
	{
		return;
	}
	if (!func_138(14))
	{
		if (_0x005e6f28dd7ed58d(Local_772.f_1, "PED_MALE") || !_0x3ab6c7b0bb0df4b1(&(uLocal_472[0]), Local_772.f_1))
		{
			if (func_138(12))
			{
				if (!func_138(13))
				{
					func_300(&Local_772, "OBJ_AXE", Local_659[0]->f_8, 0);
					activate_physics(Local_659[0]->f_8);
				}
			}
			func_158(14);
		}
	}
}

void func_134()
{
	if (!bVar1358)
	{
		if (func_138(0))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (iVar0 != 0 && !is_entity_dead(Local_562[iVar0]->f_11))
				{
					set_blocking_of_non_temporary_events(Local_562[iVar0]->f_11, false);
				}
				iVar0++;
			}
			iLocal_1360 = 1;
		}
	}
}

void func_135()
{
	if (!bVar1276)
	{
		if ((!Local_14.f_44 && Local_14.f_48) && iVar459 >= 2)
		{
			if (func_147(Global_35, func_23(&Local_14), 60f, 1, 1) && is_sphere_visible(func_23(&Local_14), 3f))
			{
				if (!func_310(&uLocal_841))
				{
					func_311(&uLocal_841);
				}
				else if (func_312(&uLocal_841))
				{
					func_313(&uLocal_841);
				}
				else if (func_314(&uLocal_841, 3f))
				{
					Local_14.f_44 = 1;
				}
			}
			else if (func_310(&uLocal_841))
			{
				if (!func_312(&uLocal_841))
				{
					func_315(&uLocal_841);
				}
			}
		}
	}
}

void func_136()
{
	if (!bVar1385 && !Local_14.f_46)
	{
		if (func_310(&uLocal_1382))
		{
			if (func_314(&uLocal_1382, fVar1379))
			{
				if (func_167(Global_35, &uLocal_469, 20f, 1))
				{
					func_306(Global_35, iVar1384, sVar1383, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1387 = 1;
			}
		}
	}
}

void func_137()
{
	func_316(&(uLocal_469[0]), &Local_772, "PED_MALE", 0);
	func_316(&(uLocal_472[0]), &Local_772, "PED_SAVAGE1", 1);
	func_316(&(uLocal_472[2]), &Local_772, "PED_LOOKOUT", 2);
	func_316(Local_659[4]->f_8, &Local_772, "OBJ_KNIFE", 3);
	func_316(Local_659[0]->f_8, &Local_772, "OBJ_AXE", 4);
	func_316(Local_659[8]->f_8, &Local_772, "OBJ_GUN", 5);
	func_316(&(uLocal_469[1]), &Local_793, "PED_FEMALE", 6);
	func_316(&(uLocal_472[1]), &Local_793, "PED_SAVAGE2", 7);
	func_316(Local_659[2]->f_8, &Local_793, "OBJ_ARROW", 8);
	func_316(Local_659[5]->f_8, &Local_793, "OBJ_KNIFE", 9);
}

bool func_138(int iParam0)
{
	return is_bit_set(iVar444, iParam0);
}

int func_139(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = func_317();
	if (!func_138(0))
	{
		if (!func_138(2))
		{
			if (((func_318() || func_319()) || func_320()) || iVar1)
			{
				func_321();
				func_322("RE_SAF_GRI_V1_AGGRO", "RE_SAF_GRI_V2_AGGRO");
				if (func_159())
				{
					func_160();
				}
				func_158(0);
				func_112(&iVar0, 1);
				func_158(0);
				func_158(2);
			}
		}
		if (!func_142(iVar0, 1))
		{
			if (func_323(&uLocal_472, &(Local_14.f_5), uParam2, &uLocal_446, 0, (3 - 1), 1) || func_324(&uLocal_472))
			{
				func_321();
				if (func_159())
				{
					func_160();
				}
				func_158(0);
				func_112(&iVar0, 1);
				func_158(0);
				func_158(2);
			}
		}
	}
	if (!Local_14.f_46)
	{
		bVar2 = func_325(&(uLocal_469[0]), 0, &uLocal_1317, uParam0, 0, 0);
		bVar3 = func_325(&(uLocal_469[1]), 0, &uLocal_1317, uParam1, 0, 0);
		bVar4 = false;
		if (does_entity_exist(iVar1345))
		{
			if (has_entity_been_damaged_by_entity(iVar1345, Global_35, 1, 1))
			{
				bVar4 = true;
			}
			if (func_326(Global_35, iVar1345, 0))
			{
				bVar4 = true;
			}
		}
		if (!bVar2 && !bVar3)
		{
			if (is_entity_dead(&(uLocal_469[0])) || is_entity_dead(&(uLocal_469[1])))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					bVar2 = func_327(Global_35, &(uLocal_469[1]));
					*uParam0 = 8192;
				}
				else
				{
					bVar3 = func_327(Global_35, &(uLocal_469[0]));
					*uParam1 = 8192;
				}
			}
		}
		if (((bVar4 || bVar2) || bVar3) || func_324(&uLocal_469))
		{
			if (!func_328())
			{
				if (!func_329(*uParam0) || !func_329(*uParam1))
				{
					func_330();
					Local_14.f_46 = 1;
				}
			}
			else
			{
				func_330();
				Local_14.f_46 = 1;
			}
		}
		if (Local_14.f_46)
		{
			func_112(&iVar0, 2);
			func_174(3, 0, 0, 0, &(uLocal_469[0]), 0, 1065353216, 0);
			if (!func_142(iVar0, 1))
			{
				func_112(&iVar0, 1);
			}
		}
	}
	if (!func_310(&uLocal_835))
	{
		if (func_29())
		{
			func_311(&uLocal_835);
		}
	}
	return iVar0;
}

void func_140()
{
	if (func_138(16))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar0])))
		{
			func_331(uLocal_483[iVar0], &(uLocal_472[iVar0]), 0);
		}
		iVar0++;
	}
	func_158(16);
}

void func_141()
{
	if (func_138(17))
	{
		return;
	}
	func_176(&uLocal_480);
	func_158(17);
}

bool func_142(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_143()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar0])))
		{
			func_332(uLocal_472[iVar0], Local_1025[iVar0], &(Local_1025[iVar0]->f_21), 1, 1);
			set_ped_config_flag(&(uLocal_472[iVar0]), 413, true);
			set_ped_config_flag(&(uLocal_472[iVar0]), 330, true);
		}
		iVar0++;
	}
	iLocal_1269 = 1;
}

void func_144()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(uLocal_469[iVar0])))
		{
			func_332(uLocal_469[iVar0], Local_874[iVar0], &(Local_874[iVar0]->f_21), 1, 0);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 3, 2, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 4, 2, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 7, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 19, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 20, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_469[iVar0]), 18, 1, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar1])))
		{
			func_332(uLocal_472[iVar1], Local_1025[iVar1], &(Local_1025[iVar1]->f_21), 1, 0);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 3, 2, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 4, 2, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 7, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 19, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 20, 1, 1);
			_0xa3db37edf9a74635(player_id(), &(uLocal_472[iVar1]), 18, 1, 1);
		}
		iVar1++;
	}
	iLocal_1268 = 1;
}

void func_145()
{
	if (!bVar1378)
	{
		cancel_music_event("RESAF_START");
		trigger_music_event("RESAF_FIGHT");
		iLocal_1380 = 1;
	}
}

void func_146(int iParam0)
{
	if (!is_entity_dead(&(uLocal_472[iParam0])))
	{
		_0x931b241409216c1f(&(uLocal_472[iParam0]), &(uLocal_476[iParam0]), 1);
		open_sequence_task(&iVar0);
		task_combat_ped(0, Global_35, 0, 0);
		func_45(&(uLocal_472[iParam0]), &iVar0, 0, 0, 1, 1);
		set_ped_config_flag(&(uLocal_472[iParam0]), 178, false);
		set_ped_keep_task(&(uLocal_472[iParam0]), true);
		func_331(uLocal_483[iParam0], &(uLocal_472[iParam0]), 0);
	}
}

bool func_147(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_181(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_148()
{
	if (iVar459 < 6)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar0])))
		{
			if (func_147(&(uLocal_472[iVar0]), func_23(&Local_14), 15f, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_149(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_150(int iParam0)
{
	if (!func_149(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_151(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		start_anim_scene(uParam0->f_1);
	}
}

int func_152(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_333(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_153()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(uLocal_469[iVar0])))
		{
			add_entity_to_audio_mix_group(&(uLocal_469[iVar0]), "Savage_Fight_Ped_Group", 0f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar1])))
		{
			add_entity_to_audio_mix_group(&(uLocal_472[iVar1]), "Savage_Fight_Ped_Group", 0f);
		}
		iVar1++;
	}
}

bool func_154(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_266(uParam0, bVar1);
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
	if (uParam0->f_178 && func_264())
	{
		bVar1 = true;
		fVar3 = func_192(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_267(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_267(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_268(&(uParam0->f_121), iParam4, fParam1))
		{
			func_115(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_196(uParam0->f_3, uParam0->f_185), 0);
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
						func_114(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_115(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_196(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_155(int iParam0)
{
	func_334(&Local_772, iParam0, 1, 1);
	func_334(&Local_793, iParam0, 1, 1);
}

bool func_156(int iParam0)
{
	if (!func_29())
	{
		func_335(&(uLocal_469[0]));
		func_335(&(uLocal_469[1]));
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_337(iParam0);
	if (!bVar446)
	{
		if (iVar0 || iVar1)
		{
			iLocal_449 = 1;
		}
	}
	return (iVar0 && iVar1);
}

void func_157()
{
	if (iVar443 == 0)
	{
		func_338();
	}
	else
	{
		func_339();
	}
}

void func_158(int iParam0)
{
	set_bit(&uLocal_447, iParam0);
}

bool func_159()
{
	return uVar1389;
}

void func_160()
{
	if (bVar1389)
	{
		func_340(Local_1025[2]->f_21[0], 0, 0);
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 2)
	{
		func_303();
	}
	_0x12990818c1d35886(&(uLocal_472[iParam0]), 0, 1065353216);
	set_ped_using_action_mode(&(uLocal_472[iParam0]), true, -1, 0);
	open_sequence_task(&iVar0);
	task_mount_animal(0, &(uLocal_476[iParam0]), -1, -1, 1.5f, 1, 0, 0);
	if ((iParam0 != 0 && !is_entity_dead(&(uLocal_472[0]))) && !is_entity_dead(&(uLocal_476[0])))
	{
		task_go_to_entity(0, &(uLocal_476[0]), -1, 5f, 0.101f, 2f, 0);
	}
	func_45(&(uLocal_472[iParam0]), &iVar0, 0, 0, 1, 1);
}

bool func_162()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_472[iVar0])))
		{
			if (!is_ped_on_mount(&(uLocal_472[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_163()
{
	if (!is_entity_dead(&(uLocal_472[0])))
	{
		if (func_341(&uLocal_457, 0, 10, 1))
		{
			func_342(uLocal_472[0], &uLocal_457, 1, 1, 1, 1, 0);
			func_342(uLocal_472[1], &uLocal_457, 0, 1, 1, 1, 0);
			func_342(uLocal_472[2], &uLocal_457, 0, 1, 1, 1, 0);
			return true;
		}
	}
	return false;
}

void func_164()
{
	if (!is_entity_dead(&(uLocal_469[1])))
	{
		set_blocking_of_non_temporary_events(&(uLocal_469[1]), false);
		open_sequence_task(&iLocal_208);
		if (is_ped_on_mount(&(uLocal_469[1])))
		{
			iVar0 = get_mount(&(uLocal_469[1]));
			if (does_entity_exist(iVar0))
			{
				if (_is_mount_seat_free(iVar0, -1) || is_ped_dead_or_dying(&(uLocal_469[0]), true))
				{
					task_mount_animal(0, iVar0, 20000, -1, 2f, 8, 0, 0);
				}
				else
				{
					task_dismount_animal(0, 0, 0, 0, 0, 0);
				}
			}
		}
		_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
		func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
		if (is_entity_dead(&(uLocal_469[0])))
		{
			func_169(&(uLocal_469[1]), Global_35, "DONT_HURT_ME", "DONT_HURT_ME", 1, 1);
		}
		set_ped_as_no_longer_needed(uLocal_469[1]);
	}
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		set_blocking_of_non_temporary_events(&(uLocal_469[0]), false);
		open_sequence_task(&iLocal_208);
		if (_is_ped_carrying(&(uLocal_469[0])))
		{
			iVar1 = func_343(&(uLocal_469[0]));
			if (does_entity_exist(iVar1))
			{
				task_place_carried_entity_at_coord(0, iVar1, get_entity_coords(&(uLocal_469[0]), true, false) + get_entity_forward_vector(&(uLocal_469[0])), 2f, 35);
			}
		}
		_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
		func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
		set_ped_keep_task(&(uLocal_469[0]), true);
		func_169(&(uLocal_469[0]), Global_35, "SICK_BASTARD", "CHALLENGE_THREATEN", -1, 0);
		set_ped_as_no_longer_needed(uLocal_469[0]);
	}
}

int func_165(bool bParam0)
{
	if (bParam0)
	{
		return func_171("SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE02");
	}
	return func_171("SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE01");
}

Vector3 func_166(float fParam0)
{
	vVar0 = { get_entity_coords(&(uLocal_469[0]), true, false) };
	vVar3 = { get_entity_coords(&(uLocal_469[1]), true, false) };
	vVar6 = { func_344(vVar0, vVar3, 1065353216) };
	return vVar3 + vVar6 * Vector(fParam0, fParam0, fParam0);
}

bool func_167(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (is_entity_dead(uParam1[iVar0]))
		{
		}
		else if (func_345(iParam0, uParam1[iVar0], fParam2, bParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_168(int iParam0, bool bParam1)
{
	if (func_172(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

void func_169(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iVar437 == 0)
	{
		func_306(iParam0, iParam1, sParam2, 0, -1082130432, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_306(iParam0, iParam1, sParam3, 0, -1082130432, iParam5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

int func_170(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = func_346(Global_35);
	iVar3 = create_itemset(false);
	iVar5 = _0x59b57c4b06531e1e(vParam0, iParam3, iVar3, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar4, iVar3));
		if (!is_entity_dead(iVar0) && iVar0 != iVar2)
		{
			if ((func_347(iVar0) && !func_348(iVar0)) && !func_349(iVar0))
			{
				if (!is_entity_dead(iParam4))
				{
					if (is_entity_dead(iVar1))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar1 = get_ped_index_from_entity_index(func_350(iParam4, iVar1, iVar0));
					}
				}
				else if (is_entity_dead(iVar1) || func_351(iVar0, vParam0, 0) < func_351(iVar1, vParam0, 0))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	if (!is_entity_dead(iVar1) && bParam5)
	{
		func_352(iVar1);
		set_blocking_of_non_temporary_events(iVar1, true);
	}
	_0x20a4bf0e09bee146(iVar3);
	clean_itemset(iVar3);
	destroy_itemset(iVar3);
	return iVar1;
}

int func_171(char* sParam0, char* sParam1)
{
	return ceil((1000f * get_anim_duration(sParam0, sParam1)));
}

bool func_172(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_353(iParam0, iParam1);
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (has_anim_event_fired(iParam0, iParam3))
		{
			func_306(iParam0, iParam1, sParam2, 0, -1082130432, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			return 1;
		}
	}
	return 0;
}

void func_174(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_354() != -1)
	{
		return;
	}
	if ((Global_36616 && func_355(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_356(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_357(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_358(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_357(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_175()
{
	if (!Local_14.f_44)
	{
		Local_14.f_44 = 1;
	}
}

void func_176(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_305((*uParam0)[iVar0]);
		iVar0++;
	}
}

bool func_177(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (iParam4 == -1 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (!is_ped_injured(uParam0[iVar0]))
		{
			if (func_359(uParam0[iVar0], bParam2, 1) < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_178()
{
	switch (iVar1349)
	{
		case 0:
			func_360();
			iLocal_1351 = 1;
			break;
		case 1:
			return func_361(&(uLocal_469[0]), &uLocal_1348, &(uLocal_469[1]));
	}
	return 0;
}

bool func_179()
{
	if (!func_362(Global_1395482->f_1))
	{
		return false;
	}
	return func_363(Global_1395482->f_1, 32);
}

bool func_180(int iParam0)
{
	if (func_64(iParam0, 1))
	{
		return false;
	}
	return (1 == func_364(iParam0) || 2 == func_364(iParam0));
}

float func_181(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_182(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_183(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_142(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_142(uParam0->f_1, 16))
			{
				func_365(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_366(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_142(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_367(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_369(func_368(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_370(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_371(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_372(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_112(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_112(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_184(var uParam0, int iParam1)
{
	if (func_255(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

bool func_185(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_186(int iParam0, bool bParam1, bool bParam2)
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

char* func_187(int iParam0)
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

void func_188(int iParam0, int iParam1)
{
	if (!func_185(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_189(int iParam0, bool bParam1)
{
	if (func_172(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_373(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_190(var uParam0, var uParam1)
{
	if (func_64(uParam0->f_3, 16777216))
	{
		if (func_374(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_191(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_192(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_193(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_172(iParam0, 0, 1)))
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
			fVar2 = func_192(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_375(&iParam0);
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

void func_194(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_376(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_377(uParam0);
	func_378(uParam0);
	func_379(uParam0);
	if (!func_380(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_288(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_381();
	}
	if (!func_382(uParam0->f_3) && !func_64(uParam0->f_3, 256))
	{
		func_383(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_103(uParam0->f_173);
	func_103(uParam0->f_172);
}

void func_195(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_196(int iParam0, int iParam1)
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

void func_197(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_354() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

var func_198(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_384(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_385(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_384(sVar0, iParam1, 0, 0, 1, 1);
}

var func_199(var uParam0)
{
	return *uParam0;
}

int func_200(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_386(iParam0) % iParam1);
	}
	return (func_387(iParam0) % iParam1);
}

char[] func_201(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_202(var uParam0)
{
	func_388(uParam0, 256);
}

void func_203(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (iParam7 == 0)
	{
		iParam7 = func_389(997958153, 1);
	}
	if (iParam7 == 0)
	{
		iParam7 = -1038436471;
	}
	uParam0->f_12 = iParam7;
	uParam0->f_15 = { vParam1 };
	uParam0->f_18 = fParam4;
	uParam0->f_13 = iParam5;
	uParam0->f_19 = iParam6;
}

void func_204(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(&(uParam0->f_1), 16384);
	}
	else
	{
		func_112(&(uParam0->f_1), 16384);
	}
}

void func_205(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(&(uParam0->f_1), 2048);
	}
	else
	{
		func_112(&(uParam0->f_1), 2048);
	}
}

void func_206(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(&(uParam0->f_1), 256);
	}
	else
	{
		func_112(&(uParam0->f_1), 256);
	}
}

void func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 16);
	}
	else
	{
		func_211(iParam0, 67108864);
		func_211(iParam0, 16);
	}
}

void func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(&(iParam0->f_1), 128);
	}
	else
	{
		func_112(&(iParam0->f_1), 128);
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 256);
	}
	else
	{
		func_211(iParam0, 256);
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_112(iParam0, 268435456);
	}
	else
	{
		func_211(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_112(iParam0, 1073741824);
	}
	else
	{
		func_211(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_112(iParam0, 536870912);
	}
	else
	{
		func_211(iParam0, 536870912);
	}
}

void func_211(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_212(var uParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	func_390(&(uParam0->f_21), cParam1, sParam2, sParam3, 0);
}

int func_213(int iParam0, int iParam1, int iParam2)
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

void func_214(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_391(iParam0, 4))
		{
			func_392(&(iParam0->f_6), 1, 1);
			func_393(iParam0, 4);
		}
	}
	else if (func_391(iParam0, 4))
	{
		func_394(iParam0, 4);
		func_393(iParam0, 14);
	}
}

void func_215(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_340(uParam0->f_21[iParam1], bParam2, bParam3);
}

char* func_216(int iParam0)
{
	if (func_395(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_217(var uParam0, int iParam1, char* sParam2)
{
	func_396(uParam0->f_21[iParam1], sParam2);
}

bool func_218(int iParam0)
{
	if (((func_219(iParam0, 1) && func_219(iParam0, 2)) && func_219(iParam0, 8)) && func_219(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_220(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_185(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_397(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_398(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_221(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_64(iParam0, 32))
	{
		if (func_399(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_400(Global_35, &(uParam1->f_12)) };
				if (!func_182(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_401(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_289(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_290());
		if (func_402(Global_1310750[iParam0], 33554432))
		{
			func_292(iVar0, func_291(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_292(iVar0, func_291(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_64(iParam0, 1))
		{
			func_403(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_404(iParam0);
}

bool func_222(int iParam0, var uParam1)
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
			func_405(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_113(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_406(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_406(iParam0));
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

void func_223(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_407(iParam0))
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
			if (!func_64(iParam0, 1))
			{
				if (func_113(iParam0, 2))
				{
				}
			}
			func_408(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_409(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_409(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_180(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_224(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_397(iParam1))
	{
		if (!func_410(iParam1, iVar0))
		{
			vVar4 = { func_220(iParam1, iVar0) };
			if (!func_182(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_229(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_411(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_182(vVar4))
	{
	}
	return vVar1;
}

int func_225(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_198("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_226(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_397(iParam0))
	{
		vVar1 = { func_220(iParam0, iVar0) };
		if (func_412(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_227(var uParam0)
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

int func_228(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_413(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_414(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_182(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_415(uParam0);
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
	return func_225(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_229(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_223(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_64(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_230(var uParam0, bool bParam1)
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

bool func_231(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_416(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_417(iParam0, uParam2))
	{
		return false;
	}
	if (!func_418(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_419(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_232(int iParam0, int iParam1, var uParam2)
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

void func_233(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_234(int iParam0, int iParam1)
{
	if (func_420(iParam0))
	{
		return;
	}
	if (func_421(iParam0) == iParam1)
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

void func_235(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_211(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_236(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_237(int iParam0)
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

int func_238(bool bParam0)
{
	if (bParam0)
	{
		return func_422(Global_1359489->f_4);
	}
	get_group_size(func_423(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_423(), iVar3);
		if (func_424(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

char* func_239(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_240(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_241(var uParam0)
{
	if (!func_425(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_425(uParam0->f_12))
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

bool func_242()
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

bool func_243(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_426(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_427(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_428(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_429(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_430(uParam0->f_11, 0);
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
					Var2 = { func_426(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_427(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_431(&(uParam0->f_22)));
					Var2 = { func_426(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_427(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_428(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_432(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_433(*uParam1, &(uParam0->f_23), 0);
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

void func_244(int iParam0, int iParam1)
{
	set_ped_config_flag(iParam0, 130, true);
	set_ped_config_flag(iParam0, 413, true);
	set_ped_config_flag(iParam0, 330, true);
	_0x24c82ef607105faa(iParam0, iParam1);
}

int func_245(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_434(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_434(iVar4) && iVar4 != iVar0)
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
	if (func_354() == -1 && !func_435(iVar0))
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
				if (func_435(-183018591))
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
		if (iParam0 != Global_35 && func_434(iVar0))
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
		func_436(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_437(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_438(iVar0))
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

int func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_439(iParam3, 1);
	bVar1 = func_439(iParam3, 2);
	bVar2 = !func_439(iParam3, 4);
	bVar3 = func_439(iParam3, 8);
	bVar4 = !func_439(iParam3, 16);
	bVar5 = func_439(iParam3, 32);
	bVar6 = func_439(iParam3, 64);
	return func_245(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_247(var uParam0, int iParam1)
{
	if (!_0xff07cf465f48b830(iParam1))
	{
		_0x72d4cb5db927009c(iParam1, -1, 0);
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		*uParam0 = _create_weapon_object(iParam1, 24, func_23(&Local_14), true, 1f);
	}
	return (does_entity_exist(*uParam0) && is_entity_an_object(*uParam0));
}

bool func_248(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_249(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_70(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_440(uParam0, iParam1, iParam3);
	func_441(uParam0, iParam2, iParam3);
}

bool func_251(var uParam0, char* sParam1)
{
	if (!_0x23e33cb9f4a3f547(uParam0, sParam1))
	{
		if (!_0x0df57f86fe71dbe5(uParam0, sParam1))
		{
			_0xdf7b5144e25cd3fe(uParam0, sParam1);
		}
		return false;
	}
	return true;
}

void func_252(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_293(uParam0, 0, 0, 0))
	{
		set_anim_scene_entity(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_253(int iParam0, int iParam1, bool bParam2)
{
	cVar0 = func_442(iParam1);
	if (!is_string_null_or_empty(cVar0))
	{
		switch (iParam0)
		{
			case 0:
				func_443(&Local_772, cVar0, bParam2);
				break;
			case 1:
				func_443(&Local_793, cVar0, bParam2);
				break;
		}
	}
}

void func_254(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (func_293(uParam0, 0, 0, 0))
	{
		set_anim_scene_origin(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

bool func_255(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_256(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_444(Global_35) && is_player_teleport_active())
	{
	}
	if (func_347(iParam0))
	{
		if (func_445(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_248(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_256(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_256(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_248(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_248(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_248(iParam5, 129))
	{
		if (func_248(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_248(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_248(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_347(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_248(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_248(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_258()
{
	return &Global_1935436 == 2;
}

void func_259(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_260(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_64(iParam0, 2))
	{
		func_447(iParam0, func_446(iParam1));
	}
	else
	{
		func_449(iParam0, func_448());
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
	func_450(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_451(iParam0, 0);
	func_452(iParam0);
	func_453(1);
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
	if (!func_64(iParam0, 16))
	{
		func_261(iParam0, 0, 0, 0, 0);
	}
}

void func_261(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_454() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_185(iVar1) && !func_64(iVar1, iParam2)) && (!bParam3 || !func_278(iVar1))) && (!bParam4 || !func_455(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_456(iVar0);
			}
		}
		iVar0++;
	}
}

int func_262(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_263(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_402(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_64(uParam0->f_3, 1073741824))
			{
				func_457(2, -1, 0, 0, 0);
			}
			else
			{
				func_457(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_457(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_458(1, uParam0->f_177))
				{
					func_459(16, uParam0->f_177);
					func_460(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_461(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_457(8, -1, 0, 0, 0);
	}
}

int func_264()
{
	if (func_434(Global_1935630->f_44))
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
		else if (func_462())
		{
			return 1;
		}
	}
	return 0;
}

bool func_265(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_266(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_64(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_64(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_64(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_64(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_64(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_64(uParam0->f_3, 1))
		{
		}
		else if (func_64(uParam0->f_3, 2))
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

int func_267(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_463(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_464(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_465() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_268(var uParam0, int iParam1, float fParam2)
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
	func_115(uParam0);
	return true;
}

bool func_269()
{
	return (Global_1894899 & 1 != 0 && func_281() != -1);
}

bool func_270(var uParam0, float fParam1)
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

int func_271(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_466(bParam1, bParam2, bParam3);
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

bool func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_468(func_467());
	if (func_142(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_142(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_142(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_142(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_142(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_142(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_142(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_142(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_142(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_142(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_142(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_142(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_142(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_142(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_142(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_142(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_142(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_273(int iParam0, int iParam1)
{
	return (func_262(iParam0) && iParam1) != 0;
}

bool func_274(int iParam0)
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
	if (iParam0 & 1 == 1 && func_469(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_470(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_471(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_472(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_473(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_474(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_475(iVar3))
	{
		return true;
	}
	return false;
}

bool func_275(bool bParam0)
{
	if (func_476(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_276(int iParam0)
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

bool func_277(int iParam0, bool bParam1, bool bParam2)
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
		if (func_477())
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
		iVar0 = func_478(&(Global_1898164->f_1[0]));
		if (func_479(iVar0) && func_480((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_481(&(Global_1898164->f_1[0])))
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

bool func_278(int iParam0)
{
	if (!func_185(iParam0))
	{
		return false;
	}
	if (func_482(64) && func_483(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_279(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_484(iVar0) || func_485(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_280()
{
	return Global_1894899 & 4 != 0;
}

int func_281()
{
	return Global_1894899->f_2;
}

int func_282(int iParam0)
{
	if (!func_486(iParam0))
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

bool func_283(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_284(vector3 vParam0, int iParam3)
{
	if (!func_283(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_285(vector3 vParam0)
{
	if (func_182(vParam0))
	{
		return false;
	}
	fVar0 = func_192(func_269(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_286(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_311(uParam0);
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
		func_311(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_310(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_314(uParam0, fParam2))
		{
			return true;
		}
		if (func_310(uParam0))
		{
			func_487(uParam0);
		}
	}
	return false;
}

bool func_287(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_288(vector3 vParam0, int iParam3)
{
	if (func_182(vParam0))
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
			if (func_412(vVar2, vParam0, 2f, 1))
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

float func_289(int iParam0)
{
	if (!func_185(iParam0))
	{
		return 0f;
	}
	if (!func_488(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_290()
{
	return "unnamed";
}

char* func_291(int iParam0)
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

int func_292(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_403(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_293(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (bParam1 && !_is_anim_scene_started(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam2 && !_is_anim_scene_finished(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam3 && !_is_anim_scene_metadata_loaded(uParam0->f_1, false))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return _0x23e33cb9f4a3f547(uParam0->f_1, sVar0);
}

bool func_295(var uParam0, var uParam1)
{
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return _0x0df57f86fe71dbe5(uParam0->f_1, sVar0);
}

bool func_296(int iParam0)
{
	return (!_does_anim_scene_exist(iParam0) || _is_anim_scene_finished(iParam0, false));
}

void func_297(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (&uParam0->f_15[iParam1] > -1)
		{
			Stack.Push(uParam0->f_1);
			Stack.Push(&(uParam0->f_15[iParam1]));
			Call_Loc(uParam0->f_6);
			_0xae6ada8fe7e84acc(StackVal, StackVal);
		}
	}
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return;
	}
	clear_bit(&(uParam0->f_8), iParam1);
	uParam0->f_15[iParam1] = -1;
	switch (iParam1)
	{
		case 1:
			uParam0->f_9 = 100;
			break;
		case 0:
			uParam0->f_13 = 0;
			uParam0->f_7 = 0;
			break;
		case 2:
			uParam0->f_10 = -1f;
			break;
		case 3:
			uParam0->f_14 = 0;
			uParam0->f_12 = 0;
			uParam0->f_11 = 0;
			break;
	}
}

void func_298(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_215(Local_1025[iVar0], iParam0, bParam1, 0);
		iVar0++;
	}
}

int func_299(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_489(&iVar0);
	if (func_142(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_490(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_142(iVar0, 134217728))
	{
		func_491(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_492(558))
				{
					func_493(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_300(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_293(uParam0, 0, 0, 0))
	{
		if (!bParam3 || _0x3ab6c7b0bb0df4b1(iParam2, uParam0->f_1))
		{
			remove_anim_scene_entity(uParam0->f_1, sParam1, iParam2);
		}
	}
}

void func_301(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

bool func_302(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_494(iParam0, Global_36, 1);
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

void func_303()
{
	sVar0 = "";
	if (is_entity_playing_anim(&(uLocal_472[2]), "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT", "IDLE_01_LKOUT", 1))
	{
		sVar0 = "IDLE_01_LKOUT";
	}
	else if (is_entity_playing_anim(&(uLocal_472[2]), "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT", "IDLE_02_LKOUT", 1))
	{
		sVar0 = "IDLE_02_LKOUT";
	}
	else if (is_entity_playing_anim(&(uLocal_472[2]), "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT", "IDLE_03_LKOUT", 1))
	{
		sVar0 = "IDLE_03_LKOUT";
	}
	else if (is_entity_playing_anim(&(uLocal_472[2]), "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT", "BASE_LKOUT", 1))
	{
		sVar0 = "BASE_LKOUT";
	}
	if (!is_string_null_or_empty(sVar0))
	{
		stop_anim_task(&(uLocal_472[2]), "SCRIPT_RE@CAMPFIRE_MASSACRE@LKOUT", sVar0, -4f);
	}
}

void func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			_set_ped_body_component(&(uLocal_469[0]), 251649753);
			_update_ped_variation(&(uLocal_469[0]), false, true, true, true, false);
			break;
		case 1:
			_set_ped_body_component(&(uLocal_469[1]), 512435896);
			_update_ped_variation(&(uLocal_469[1]), false, true, true, true, false);
			break;
	}
}

void func_305(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_306(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_495(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_307(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

bool func_308(int iParam0, int iParam1)
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

void func_309(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		register_target(iParam0, iParam1, 1);
	}
}

bool func_310(var uParam0)
{
	return func_496(*uParam0, 1);
}

void func_311(var uParam0)
{
	func_497(uParam0, 0f);
}

bool func_312(var uParam0)
{
	return func_496(*uParam0, 2);
}

void func_313(var uParam0)
{
	if (!func_310(uParam0))
	{
	}
	if (func_312(uParam0))
	{
		uParam0->f_1 = (func_465() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_498(uParam0, 2);
	}
}

bool func_314(var uParam0, float fParam1)
{
	if (!func_310(uParam0))
	{
		return false;
	}
	if (func_499(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_315(var uParam0)
{
	if (!func_310(uParam0))
	{
	}
	if (!func_312(uParam0))
	{
		uParam0->f_2 = (func_465() - uParam0->f_1);
		func_500(uParam0, 2);
	}
}

void func_316(int iParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!is_bit_set(iVar1390, iParam3))
	{
		if (does_entity_exist(iParam0))
		{
			if (!is_bit_set(iVar1389, iParam3))
			{
				if (_0x3ab6c7b0bb0df4b1(iParam0, uParam1->f_1))
				{
					set_bit(&uLocal_1395, iParam3);
				}
			}
			else if (func_501(uParam1, iParam0, sParam2, 1))
			{
				set_entity_collision(iParam0, true, false);
				activate_physics(iParam0);
				if (!is_entity_a_ped(iParam0))
				{
					apply_force_to_entity(iParam0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, false, false, false, true);
				}
				set_bit(&uLocal_1396, iParam3);
			}
		}
	}
}

int func_317()
{
	if (!func_310(&uLocal_1254))
	{
		bVar1 = false;
		bVar2 = func_502(1, &iVar0);
		if (bVar1 || bVar2)
		{
			if (bVar1)
			{
				iLocal_1272 = 1;
				func_306(Global_35, &(uLocal_472[iVar0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_INTERVENE", "RE_SAF_GRI_V2_INTERVENE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			}
			else if (bVar2)
			{
				iLocal_1272 = 1;
				func_306(Global_35, &(uLocal_472[iVar0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_ANTAGONIZE", "RE_SAF_GRI_V2_ANTAGONIZE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			}
			func_503(&(uLocal_472[2]), 750);
			func_504(0);
			func_311(&uLocal_1254);
		}
	}
	else if (func_314(&uLocal_1254, 2f))
	{
		if (bVar1270)
		{
			if (!bVar448)
			{
				func_174(11, 0, 0, "RE_HONOR_INTERVENED", &(uLocal_472[2]), 0, 1065353216, 0);
			}
		}
		func_487(&uLocal_1254);
		return 1;
	}
	return 0;
}

int func_318()
{
	if (func_167(Global_35, &uLocal_469, 4f, 1) || func_167(Global_35, &uLocal_472, 4f, 1))
	{
		return 1;
	}
	if (bVar1269)
	{
		return 0;
	}
	if (bVar1270)
	{
		set_ped_reset_flag(&(uLocal_472[2]), 290, true);
	}
	switch (iVar1313)
	{
		case 0:
			iLocal_1280 = 0;
			func_505(&uLocal_1285);
			set_ped_using_action_mode(&(uLocal_472[2]), true, -1, 0);
			iLocal_1315 = 1;
			break;
		case 1:
			if (func_506())
			{
				if (!func_507())
				{
					func_303();
					task_aim_at_entity(&(uLocal_472[2]), Global_35, -1, 0, 1);
				}
				func_311(&uLocal_847);
				switch (iVar1278)
				{
					case 0:
						func_508();
						func_175();
						iLocal_1315 = 2;
						break;
					case 1:
						iLocal_1315 = 5;
						break;
					default:
						return 1;
				}
				iLocal_1280 = iVar1278 + 1;
			}
			else
			{
				switch (iVar1312)
				{
					case 0:
						func_311(&uLocal_1282);
						iLocal_1314 = 1;
						break;
					case 1:
						if (func_314(&uLocal_1282, 5f))
						{
							switch (get_random_int_in_range(0, 3))
							{
								case 0:
									func_509("IDLE_01_LKOUT", 0, 1);
									break;
								case 1:
									func_509("IDLE_02_LKOUT", 0, 1);
									break;
								case 2:
									func_509("IDLE_03_LKOUT", 0, 1);
									break;
							}
							iLocal_1314 = 2;
						}
						break;
					case 2:
						if (has_anim_event_fired(&(uLocal_472[2]), 1934064415) || ((!func_510("IDLE_01_LKOUT") && !func_510("IDLE_02_LKOUT")) && !func_510("IDLE_03_LKOUT")))
						{
							func_509("BASE_LKOUT", 1, 1);
							iLocal_1314 = 0;
						}
						break;
				}
			}
			break;
		case 2:
			if (func_314(&uLocal_847, 1f))
			{
				if (func_507())
				{
					if (!func_511())
					{
						func_509("WARN_01_LKOUT", 0, 1);
						func_322("RE_SAF_GRI_V1_WARN_A", "RE_SAF_GRI_V2_WARN_A");
						start_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
						func_311(&uLocal_847);
						func_311(&uLocal_1388);
						iLocal_1315 = 3;
						iLocal_1314 = 0;
					}
				}
			}
			break;
		case 3:
			func_512();
			switch (func_513("WARN_01_LKOUT"))
			{
				case 2:
					task_turn_ped_to_face_entity(&(uLocal_472[2]), &(uLocal_472[0]), -1, -1082130432, -1082130432, -1082130432);
					stop_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
					iLocal_1315 = 1;
					break;
				case 1:
					func_509("WARN_02_LKOUT", 0, 1);
					func_322("RE_SAF_GRI_V1_WARN_B", "RE_SAF_GRI_V2_WARN_B");
					func_311(&uLocal_847);
					iLocal_1280 = iVar1278 + 1;
					iLocal_1315 = 6;
					iLocal_1314 = 0;
					break;
			}
			break;
		case 5:
			if (func_314(&uLocal_847, 1f))
			{
				if (func_507())
				{
					if (!func_511())
					{
						func_509("WARN_02_LKOUT", 0, 1);
						func_322("RE_SAF_GRI_V1_WARN_B", "RE_SAF_GRI_V2_WARN_B");
						start_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
						func_311(&uLocal_847);
						func_311(&uLocal_1388);
						iLocal_1315 = 6;
						iLocal_1314 = 0;
					}
				}
			}
			break;
		case 6:
			func_512();
			switch (func_513("WARN_02_LKOUT"))
			{
				case 2:
					task_turn_ped_to_face_entity(&(uLocal_472[2]), &(uLocal_472[0]), -1, -1082130432, -1082130432, -1082130432);
					stop_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
					iLocal_1315 = 1;
					break;
				case 1:
					stop_audio_scene("Savage_Fight_Focus_On_Player_Warning_scene");
					return 1;
			}
			break;
	}
	return 0;
}

int func_319()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!_0x6abad7b0a854f8fb(func_514(Global_35, 0, 1, 0)))
	{
		if (!get_ped_reset_flag(Global_35, 0))
		{
			return 0;
		}
	}
	if (get_player_target_entity(player_id(), &iVar1))
	{
		if (!is_entity_a_ped(iVar1) || !func_515(iVar0))
		{
			iVar1 = 0;
		}
	}
	if (!does_entity_exist(iVar1))
	{
		if (get_entity_player_is_free_aiming_at(player_id(), &iVar0))
		{
			if (!is_entity_a_ped(iVar0) || !func_515(iVar0))
			{
				iVar0 = 0;
			}
		}
	}
	if (does_entity_exist(iVar0) || does_entity_exist(iVar1))
	{
		if (!is_entity_dead(&(uLocal_472[2])))
		{
			if (func_516(&(uLocal_472[2]), &uLocal_1285, &iVar2, 0))
			{
				if (iVar2 == 131072)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(uLocal_476[iVar0])))
		{
			if (func_326(Global_35, &(uLocal_476[iVar0]), 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_321()
{
	if (!bVar1269)
	{
		if (!is_entity_dead(&(uLocal_472[2])))
		{
			func_309(&(uLocal_472[2]), Global_35);
			open_sequence_task(&iLocal_208);
			if (func_507())
			{
				task_aim_at_entity(0, Global_35, 1000, 1, 1);
				_0x2416ec2f31f75266(0, Global_35, 10000, 0, 1);
			}
			task_combat_hated_targets_around_ped(0, 40f, 0, 0);
			task_combat_ped(0, Global_35, 0, 0);
			func_45(&(uLocal_472[2]), &iLocal_208, 0, 0, 1, 1);
			func_517(2);
			if (does_entity_exist(Local_659[2]->f_8))
			{
				set_entity_visible(Local_659[2]->f_8, false);
			}
		}
		iLocal_1271 = 1;
	}
}

void func_322(char* sParam0, char* sParam1)
{
	func_306(&(uLocal_472[2]), Global_35, func_201(iVar441 == 0, sParam0, sParam1), 0, -1082130432, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
}

bool func_323(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_518(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_325(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_324(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (has_entity_been_damaged_by_entity(uParam0[iVar0], Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_325(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_519(iParam2, 1, iVar0);
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
			if (func_520(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_521(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_522(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_523(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_524(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_271(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_521(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_525(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_526(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_527(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_528(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_528(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_521(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_529(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_530(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_531(iParam2, 4000))
				{
					if ((func_532(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_533(iParam2, iParam0)) && func_534(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_532(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_533(iParam2, iParam0)) && func_534(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_535(iParam0, Global_1935630->f_41))
							{
								func_536();
								*uParam3 = 2;
								func_521(iParam0, iParam2, *uParam3);
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
						if (func_535(iParam0, Global_1935630->f_41))
						{
							func_536();
							*uParam3 = 2;
							func_521(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_537(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_538() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_536();
						*uParam3 = 2;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_539())
					{
						if (func_535(iParam0, Global_1935630->f_42))
						{
							func_536();
							*uParam3 = 2;
							func_521(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_540(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_521(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_541(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_542(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_543(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_544(iParam2, 4000))
				{
					if (func_545(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_521(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_546(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_521(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_547(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_521(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_326(int iParam0, int iParam1, bool bParam2)
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

bool func_327(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

bool func_328()
{
	if (func_310(&uLocal_835))
	{
		if (func_499(&uLocal_835) >= 3f)
		{
			return true;
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 16:
		case 32:
		case 64:
		case 128:
		case 2048:
			return false;
		default:
			break;
	}
	return true;
}

void func_330()
{
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		switch (iVar443)
		{
			case 0:
				func_306(&(uLocal_469[0]), Global_35, "SICK_BASTARD", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
			case 1:
				func_306(&(uLocal_469[0]), Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
		}
		if (!is_entity_dead(&(uLocal_469[1])))
		{
			stop_current_playing_speech(&(uLocal_469[1]), 1000);
		}
	}
	else if (!is_entity_dead(&(uLocal_469[1])))
	{
		switch (iVar443)
		{
			case 0:
				func_306(&(uLocal_469[1]), Global_35, "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
			case 1:
				func_306(&(uLocal_469[1]), Global_35, "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
		}
	}
}

void func_331(int* iParam0, int iParam1, bool bParam2)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	func_307(iParam1, iParam0, 831283580, 580546400, 0, 0);
	if (bParam2)
	{
		func_548(iParam1, -1034486097, 1);
	}
	else
	{
		func_548(iParam1, 942020339, 1);
	}
}

void func_332(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_549(uParam0);
		func_550(iParam1, uParam2);
	}
	func_551(*uParam0, 1, bParam4);
}

bool func_333(int iParam0, var uParam1)
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

int func_334(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	if (bParam3 && !func_294(uParam0, iParam1))
	{
		return func_552(uParam0, iParam1, bParam2);
	}
	else
	{
		_set_anim_scene_playback_list_bool(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			func_553(uParam0, 5, 1);
		}
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_5);
	}
	return 1;
}

void func_335(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!is_entity_dead(&(uLocal_472[iVar0])))
			{
				if (has_entity_been_damaged_by_entity(iParam0, &(uLocal_472[iVar0]), 1, 1))
				{
					func_186(iParam0, 0, 0);
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_336(int iParam0)
{
	bVar0 = has_anim_event_fired(&(uLocal_469[0]), 863546801);
	bVar1 = func_554();
	if (bVar1)
	{
		func_112(&iParam0, 2);
	}
	if (!func_138(7))
	{
		if (bVar0)
		{
			func_158(7);
		}
	}
	if (!func_138(28))
	{
		if (func_138(27))
		{
			func_555();
		}
	}
	else if (func_138(27))
	{
		func_556();
	}
	switch (iVar464)
	{
		case 0:
			if (iVar442 == 1)
			{
				if (func_138(6))
				{
					if (has_anim_event_fired(&(uLocal_469[0]), 2047678844))
					{
						func_158(3);
						func_557();
						func_311(&uLocal_838);
						func_305(uLocal_480[0]);
						iLocal_467 = 9;
					}
				}
				else if (is_entity_playing_anim(&(uLocal_469[0]), "script_re@campfire_massacre", "cry_idle_man", 1))
				{
					func_558(&(uLocal_469[0]), -2048655016, -1, 0, 124012004, -1082130432);
					iLocal_467 = 9;
					return 0;
				}
			}
			if ((iParam0 == 0 && !Local_14.f_46) && !func_138(0))
			{
				if ((iVar442 == 0 && func_559(&(uLocal_472[0]), &Local_772, "PED_SAVAGE1")) || (iVar442 == 1 && func_559(&(uLocal_469[0]), &Local_772, "PED_MALE")))
				{
					func_300(&Local_772, "OBJ_KNIFE", Local_659[4]->f_8, 0);
					_give_weapon_component_to_weapon_object(&(Local_659[4]->f_8), &(uLocal_472[0]), 752097756, false);
					Local_659[4]->f_8 = 0;
					func_161(0);
					iLocal_467 = 14;
					return 0;
				}
			}
			else if (func_560(0))
			{
				if (_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), -1) && !func_138(1))
				{
					set_ped_to_ragdoll(&(uLocal_469[0]), 1000, 1000, 0, false, false, false);
				}
				if (!is_entity_dead(&(uLocal_472[0])))
				{
					func_300(&Local_772, "PED_SAVAGE1", &(uLocal_472[0]), 0);
					func_561();
				}
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					set_blocking_of_non_temporary_events(&(uLocal_469[0]), false);
					open_sequence_task(&iLocal_208);
					if (_is_ped_carrying(&(uLocal_469[0])))
					{
						iVar2 = func_343(&(uLocal_469[0]));
						if (does_entity_exist(iVar2))
						{
							task_place_carried_entity_at_coord(0, iVar2, get_entity_coords(&(uLocal_469[0]), true, false) + get_entity_forward_vector(&(uLocal_469[0])), 2f, 3);
						}
					}
					_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
					func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
					func_305(uLocal_480[0]);
				}
				if (iVar442 == 1)
				{
					if (!is_entity_dead(&(uLocal_472[2])))
					{
						func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
					}
				}
				iLocal_467 = 14;
			}
			else if (func_142(iParam0, 1))
			{
				if (func_562(&(uLocal_472[0])) || func_563())
				{
					if (func_564())
					{
						if (!func_563())
						{
							func_334(&Local_772, 3, 1, 1);
							func_503(&(uLocal_469[0]), 1000);
							iLocal_467 = 2;
						}
						else if (!is_entity_dead(&(uLocal_469[0])))
						{
							if (!is_entity_dead(&(uLocal_472[2])))
							{
								func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
								func_300(&Local_793, "PED_LOOKOUT", &(uLocal_472[2]), 0);
							}
							set_ped_combat_attributes(&(uLocal_469[0]), 5, true);
							set_ped_combat_attributes(&(uLocal_469[0]), 17, false);
							set_ped_combat_attributes(&(uLocal_469[0]), 46, true);
							set_combat_float(&(uLocal_469[0]), 40, 1f);
							if (_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), -1) && !func_138(1))
							{
								set_ped_to_ragdoll(&(uLocal_469[0]), 1000, 1000, 0, false, false, false);
							}
							func_309(&(uLocal_469[0]), &(uLocal_472[0]));
							func_309(&(uLocal_469[0]), &(uLocal_472[1]));
							func_309(&(uLocal_469[0]), &(uLocal_472[2]));
							open_sequence_task(&iLocal_208);
							if (func_565() || has_anim_event_fired(&(uLocal_469[0]), 1651887863))
							{
								task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "BREAKOUT_THUG_A", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
								iLocal_1263 = iVar1260 + 1;
							}
							task_combat_hated_targets_in_area(0, func_23(&Local_14), 35f, 0, 0);
							iLocal_1263 = iVar1260 + 1;
							func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
							func_566(0);
							if (iVar442 == 0)
							{
								func_306(&(uLocal_469[0]), &(uLocal_469[0]), "FIGHT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_306(&(uLocal_469[0]), &(uLocal_469[0]), "FIGHT", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_467 = 4;
						}
						else
						{
							iLocal_467 = 13;
						}
						if (!is_entity_dead(&(uLocal_472[0])))
						{
							func_561();
						}
					}
					else
					{
						if (!is_entity_dead(&(uLocal_472[0])))
						{
							func_561();
						}
						func_567();
						iLocal_467 = 13;
					}
				}
				else if (func_564())
				{
					func_334(&Local_772, 4, 1, 1);
					func_503(&(uLocal_469[0]), 1000);
					set_ped_using_action_mode(&(uLocal_472[0]), true, -1, 0);
					iLocal_467 = 3;
				}
				else
				{
					if (!is_entity_dead(&(uLocal_472[0])))
					{
						func_561();
					}
					func_567();
					iLocal_467 = 13;
				}
			}
			break;
		case 2:
			if (!func_142(iParam0, 2))
			{
				if (func_568())
				{
					if ((!is_entity_dead(&(uLocal_469[1])) && !Local_14.f_46) && !func_138(5))
					{
						func_569();
						iLocal_467 = 5;
					}
					else
					{
						func_253(0, 2, 1);
						func_17();
						if (!Local_14.f_46)
						{
							func_569();
							func_17();
							func_570("RE_SAF_GRI_V1_MALE_RECOVER", &(uLocal_469[0]), 1077936128);
							iLocal_467 = 8;
						}
						else
						{
							iLocal_467 = 12;
						}
					}
				}
				if (!func_138(18))
				{
					if (!func_571(&(uLocal_472[0]), 1435919172))
					{
						if (!is_entity_dead(&(uLocal_472[0])))
						{
							func_561();
						}
						func_158(18);
					}
				}
			}
			else if (func_560(0))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					if (!func_560(0))
					{
						func_572(&(uLocal_469[0]), 1000, 1000);
					}
					if (bVar1)
					{
						task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
					}
					else
					{
						task_smart_flee_ped(&(uLocal_469[0]), Global_35, 1000f, -1, 0, 1077936128, 0);
					}
					func_566(0);
					iLocal_467 = 2;
				}
				if (!is_entity_dead(&(uLocal_472[0])))
				{
					func_561();
					iLocal_467 = 14;
				}
			}
			break;
		case 3:
			if (!func_142(iParam0, 2))
			{
				if ((!_0x3ab6c7b0bb0df4b1(&(uLocal_472[0]), -1) && !is_entity_dead(&(uLocal_469[0]))) && !func_138(4))
				{
					func_334(&Local_772, 3, 1, 1);
					func_503(&(uLocal_469[0]), 1000);
					iLocal_467 = 2;
				}
				else if (func_559(&(uLocal_472[0]), &Local_772, "PED_SAVAGE1"))
				{
					_0x2208438012482a1a(&(uLocal_472[0]), true, false);
					func_561();
					iLocal_467 = 14;
				}
			}
			else if (is_entity_dead(&(uLocal_469[0])) || !_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), Local_772.f_1))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					if (_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), -1) && !func_138(1))
					{
						set_ped_to_ragdoll(&(uLocal_469[0]), 1000, 1000, 0, false, false, false);
					}
					if (bVar1)
					{
						register_target(&(uLocal_469[0]), Global_35, 1);
						task_combat_hated_targets_in_area(&(uLocal_469[0]), func_23(&Local_14), 60f, 0, 0);
						task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
						iLocal_467 = 13;
					}
					else
					{
						task_smart_flee_ped(&(uLocal_469[0]), Global_35, 1000f, -1, 0, 1077936128, 0);
						iLocal_467 = 12;
					}
					func_566(0);
				}
				if (!is_entity_dead(&(uLocal_472[0])))
				{
					func_561();
					if (!is_entity_dead(&(uLocal_469[0])))
					{
						iLocal_467 = 14;
					}
				}
			}
			break;
		case 5:
			if (!func_142(iParam0, 2))
			{
				set_ped_can_play_gesture_anims(&(uLocal_469[0]), 0, 1);
				switch (iVar463)
				{
					case 0:
						if (iVar465 == 4)
						{
							if (!_0xb086c8c0f5701d14(&(uLocal_469[1])))
							{
								if (!func_138(10))
								{
									func_253(0, 2, 1);
									func_253(1, 2, 1);
									func_570("RE_SAF_GRI_V1_COUPLE_RECOVER", &(uLocal_469[0]), 1077936128);
									iLocal_466 = 1;
								}
								else if (!func_571(&(uLocal_469[0]), 713668775))
								{
									func_253(1, 2, 1);
									if (func_138(15))
									{
										task_turn_ped_to_face_entity(&(uLocal_469[1]), &(uLocal_469[0]), -1, -1082130432, -1082130432, -1082130432);
									}
									func_570("RE_SAF_GRI_V1_COUPLE_RECOVER", &(uLocal_469[0]), 1077936128);
									iLocal_466 = 1;
								}
							}
						}
						break;
					case 1:
						if (func_123(Local_772.f_1, 500) || func_138(10))
						{
							if (!func_138(15) || func_573(&(uLocal_469[1]), &(uLocal_469[0]), 0))
							{
								func_574();
								iLocal_466 = 2;
							}
						}
						break;
					case 2:
						if (_0x3ab6c7b0bb0df4b1(&(uLocal_469[0]), Local_814.f_1))
						{
							iLocal_467 = 6;
							iLocal_468 = 5;
						}
						break;
				}
			}
			else
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					open_sequence_task(&iLocal_208);
					if (is_entity_playing_anim(&(uLocal_469[0]), "script_re@campfire_massacre", "cry_idle_man", 1))
					{
						func_572(&(uLocal_469[0]), 1000, 1000);
					}
					task_smart_flee_ped(0, Global_35, 1000f, -1, 0, 2f, 0);
					func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
				}
				func_566(0);
				iLocal_467 = 14;
			}
			break;
		case 6:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
					func_331(uLocal_480[0], &(uLocal_469[0]), 0);
				}
				func_566(0);
				func_575();
				iLocal_467 = 13;
			}
			else
			{
				set_ped_can_play_gesture_anims(&(uLocal_469[0]), 0, 1);
				if (func_559(&(uLocal_469[0]), &Local_772, "PED_MALE"))
				{
					func_575();
					iLocal_461 = 3;
					return 0;
				}
			}
			break;
		case 7:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
					func_331(uLocal_480[0], &(uLocal_469[0]), 0);
				}
				func_566(0);
				iLocal_467 = 13;
			}
			else
			{
				set_ped_can_play_gesture_anims(&(uLocal_469[0]), 0, 1);
				if (!is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "MAN_UPPER_BODY_LINE02", 1))
				{
					iLocal_461 = 6;
					return 0;
				}
			}
			break;
		case 4:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					if (!func_560(0))
					{
						func_572(&(uLocal_469[0]), 1000, 1000);
					}
					if (bVar1)
					{
						func_309(&(uLocal_469[0]), Global_35);
						task_combat_hated_targets(&(uLocal_469[0]), -1f);
					}
					else
					{
						task_smart_flee_ped(&(uLocal_469[0]), Global_35, 1000f, -1, 0, 1077936128, 0);
					}
					if (bVar1)
					{
						iLocal_467 = 13;
					}
					else
					{
						iLocal_467 = 14;
					}
				}
				func_566(0);
				iLocal_467 = 14;
			}
			else if (func_29())
			{
				if (iVar1260 < 0 || (!func_571(&(uLocal_469[0]), 242628503) || get_sequence_progress(&(uLocal_469[0])) == iVar1260))
				{
					if (is_entity_dead(&(uLocal_469[1])))
					{
						if (iVar442 == 0)
						{
							func_576();
							func_306(&(uLocal_469[0]), &(uLocal_469[0]), "PANIC_HELP", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							return 1;
						}
						else
						{
							func_158(3);
							func_557();
							func_311(&uLocal_838);
							func_305(uLocal_480[0]);
							func_569();
							iLocal_467 = 9;
						}
					}
					else
					{
						func_577(&(uLocal_469[0]), &Local_814, "PED_MALE", "PBL_HUG", 1f, -1, 1045220557, 2, 0, 0);
						func_158(10);
						func_578();
						iLocal_467 = 5;
					}
				}
			}
			break;
		case 8:
			func_579();
			if (func_142(iParam0, 2))
			{
				if (bVar1)
				{
					func_306(&(uLocal_469[0]), Global_35, "CHALLENGE_THREATEN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
					iLocal_467 = 13;
				}
				else
				{
					task_smart_flee_ped(&(uLocal_469[0]), Global_35, 1000f, -1, 0, 1077936128, 0);
					iLocal_467 = 14;
				}
				func_566(0);
			}
			else if (func_559(&(uLocal_469[0]), &Local_772, "PED_MALE"))
			{
				if (iVar442 == 0)
				{
					func_306(&(uLocal_469[0]), &(uLocal_469[0]), "PANIC_HELP", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return 1;
				}
				else
				{
					func_158(3);
					_0xcef4c65de502d367(&(uLocal_469[0]), 1, 0, 1, 0);
					func_557();
					func_566(0);
					func_311(&uLocal_838);
					func_305(uLocal_480[0]);
					iLocal_467 = 9;
				}
			}
			break;
		case 9:
			if (func_142(iParam0, 2))
			{
				open_sequence_task(&iLocal_208);
				if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_IDLE_MAN", 1))
				{
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_BREAKOUT_MAN", 4f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
				else if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_ENTER_MAN", 1))
				{
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_BREAKOUT_MAN", 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
				else if (_is_ped_using_scenario_hash(&(uLocal_469[0]), -2048655016))
				{
					_0xf1c03a5352243a30(&(uLocal_469[0]));
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_BREAKOUT_MAN", 16f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
				if (bVar1)
				{
					task_combat_ped(0, Global_35, 0, 16);
				}
				else
				{
					task_smart_flee_ped(0, Global_35, 300f, -1, 0, 1077936128, 0);
				}
				func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
				func_566(0);
				if (bVar1)
				{
					func_306(&(uLocal_469[0]), Global_35, "CHALLENGE_THREATEN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_467 = 13;
				}
				else
				{
					iLocal_467 = 14;
				}
			}
			else if (func_580())
			{
				if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_IDLE_MAN", 1))
				{
					task_play_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 4f, -2f, -1, 0, 0f, false, 0, false, 0, false);
				}
				else if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_ENTER_MAN", 1))
				{
					task_play_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
				}
				else if (_is_ped_using_scenario_hash(&(uLocal_469[0]), -2048655016))
				{
					_0xf1c03a5352243a30(&(uLocal_469[0]));
					task_play_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 16f, -2f, -1, 8192, 0f, false, 0, false, 0, false);
				}
				iLocal_467 = 11;
			}
			break;
		case 11:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 1))
				{
					if (bVar1)
					{
						task_combat_ped(&(uLocal_469[0]), Global_35, 0, 16);
						iLocal_467 = 13;
					}
					else
					{
						task_smart_flee_ped(&(uLocal_469[0]), Global_35, 300f, -1, 0, 1077936128, 0);
						iLocal_467 = 14;
					}
					func_566(0);
				}
			}
			else if (!is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 1))
			{
				iLocal_461 = 6;
				return 0;
			}
			break;
		case 13:
			if (is_entity_dead(&(uLocal_469[0])) || !func_345(&(uLocal_469[0]), Global_35, 80f, 1))
			{
				func_305(uLocal_480[0]);
				if (!is_entity_dead(&(uLocal_469[0])))
				{
					task_wander_standard(&(uLocal_469[0]), 40000f, 0);
				}
				func_566(0);
				iLocal_467 = 14;
			}
			break;
		case 12:
			if (func_559(&(uLocal_469[0]), &Local_772, "PED_MALE"))
			{
				task_smart_flee_ped(&(uLocal_469[0]), Global_35, 1000f, -1, 0, 2f, 0);
				func_305(uLocal_480[0]);
				func_566(0);
				iLocal_467 = 14;
			}
			break;
		case 14:
			return 1;
	}
	return 0;
}

int func_337(int iParam0)
{
	if (!func_138(27))
	{
		if (func_138(28))
		{
			func_581();
		}
	}
	else if (func_138(28))
	{
		func_556();
	}
	if (!func_138(5))
	{
		if (has_anim_event_fired(&(uLocal_472[1]), 1157829655))
		{
			func_158(5);
		}
	}
	switch (iVar465)
	{
		case 0:
			if (iParam0 == 0)
			{
				if (iVar442 == 1 && (has_anim_event_fired(&(uLocal_472[1]), 741133106) || is_entity_dead(&(uLocal_472[1]))))
				{
					_0x923583741dc87bce(&(uLocal_469[1]), "default_female");
					_0x89f5e7adecccb49c(&(uLocal_469[1]), "intimidated_on_feet");
					iLocal_468 = 1;
				}
				else if (!is_entity_dead(&(uLocal_472[1])))
				{
					if (func_559(&(uLocal_472[1]), &Local_793, "PED_SAVAGE2"))
					{
						func_300(&Local_793, "OBJ_KNIFE", Local_659[5]->f_8, 0);
						_give_weapon_component_to_weapon_object(&(Local_659[5]->f_8), &(uLocal_472[1]), 752097756, false);
						Local_659[5]->f_8 = 0;
						func_161(1);
						func_517(1);
						iLocal_468 = 12;
						return 0;
					}
				}
			}
			else if (func_560(1))
			{
				if (!is_entity_dead(&(uLocal_472[1])))
				{
					func_582(0);
				}
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					task_smart_flee_ped(&(uLocal_469[1]), Global_35, 1000f, -1, 0, 2f, 0);
					func_305(uLocal_480[1]);
				}
				func_566(1);
				func_321();
				if (func_159())
				{
					func_160();
				}
				func_158(2);
				func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
				func_300(&Local_793, "PED_LOOKOUT", &(uLocal_472[2]), 0);
				iLocal_468 = 12;
			}
			else if (func_142(iParam0, 1))
			{
				if (func_562(&(uLocal_472[1])) || func_138(5))
				{
					func_582(0);
					if (!func_138(5))
					{
						func_334(&Local_793, 3, 1, 1);
						func_503(&(uLocal_469[1]), 1000);
						iLocal_468 = 2;
					}
					else
					{
						iLocal_468 = 11;
					}
				}
				else
				{
					func_158(6);
					func_334(&Local_793, 4, 1, 1);
					func_503(&(uLocal_469[1]), 1000);
					set_ped_using_action_mode(&(uLocal_472[1]), true, -1, 0);
					iLocal_468 = 3;
				}
				func_321();
				if (func_159())
				{
					func_160();
				}
				func_158(2);
				func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
				func_300(&Local_793, "PED_LOOKOUT", &(uLocal_472[2]), 0);
			}
			break;
		case 1:
			if (iParam0 != 0)
			{
				if (func_560(1))
				{
					if (!is_entity_dead(&(uLocal_469[1])))
					{
					}
					func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
					func_300(&Local_793, "PED_LOOKOUT", &(uLocal_472[2]), 0);
					func_321();
					iLocal_468 = 12;
				}
				else
				{
					if (has_anim_event_fired(&(uLocal_469[1]), 1139187155))
					{
						open_sequence_task(&iLocal_208);
						task_follow_nav_mesh_to_coord(0, func_583(&(uLocal_469[1]), Local_814.f_1, "PED_FEMALE", "PBL_HUG", 1), 1f, -1, 0.25f, 512, 40000f);
						task_cower(0, -1, &(uLocal_469[0]), 0);
						func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
						func_566(1);
						func_158(15);
						func_305(uLocal_480[1]);
					}
					else
					{
						func_334(&Local_793, 3, 1, 1);
						func_503(&(uLocal_469[1]), 1000);
					}
					if (!func_138(19))
					{
						func_300(&Local_793, "PED_SAVAGE2", &(uLocal_472[1]), 0);
						if (!is_entity_dead(&(uLocal_472[1])))
						{
							func_582(0);
						}
						else if (!_0x3ab6c7b0bb0df4b1(&(uLocal_472[1]), -1))
						{
							activate_physics(&(uLocal_472[1]));
						}
					}
					if (!is_entity_dead(&(uLocal_472[2])))
					{
						func_300(&Local_772, "PED_LOOKOUT", &(uLocal_472[2]), 0);
						func_300(&Local_793, "PED_LOOKOUT", &(uLocal_472[2]), 0);
						func_321();
					}
					else
					{
						activate_physics(&(uLocal_472[2]));
					}
					iLocal_468 = 2;
				}
			}
			else if (has_anim_event_fired(&(uLocal_469[1]), 64006052))
			{
				func_141();
				iLocal_468 = 12;
			}
			break;
		case 2:
			if (!func_142(iParam0, 2) && !Local_14.f_46)
			{
				if (func_568() && (is_entity_dead(&(uLocal_469[0])) || iVar464 == 5))
				{
					if (!is_entity_dead(&(uLocal_469[0])) && !Local_14.f_46)
					{
						func_584();
						iLocal_468 = 4;
					}
					else
					{
						if (!func_138(15))
						{
							func_253(1, 2, 1);
						}
						else
						{
							task_turn_ped_to_face_entity(&(uLocal_469[1]), &(uLocal_469[0]), -1, -1082130432, -1082130432, -1082130432);
						}
						func_566(1);
						if (!Local_14.f_46)
						{
							func_584();
							if (is_entity_dead(&(uLocal_469[0])))
							{
								func_570("RE_SAF_GRI_V1_FEMALE_RECOVER", &(uLocal_469[1]), 1077936128);
								iLocal_468 = 6;
							}
							else
							{
								iLocal_468 = 4;
							}
						}
						else
						{
							iLocal_468 = 10;
						}
					}
				}
			}
			else if (_0x3ab6c7b0bb0df4b1(&(uLocal_469[1]), -1))
			{
				if (!func_585(1, 2))
				{
					func_253(1, 2, 1);
				}
			}
			else if (func_560(1))
			{
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					task_smart_flee_ped(&(uLocal_469[1]), Global_35, 1000f, -1, 0, 1077936128, 0);
					if (iVar442 == 0)
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_566(1);
					func_305(uLocal_480[1]);
				}
				if (!is_entity_dead(&(uLocal_472[1])))
				{
					func_582(0);
				}
				iLocal_468 = 12;
			}
			break;
		case 3:
			if (!func_142(iParam0, 2))
			{
				if ((func_562(&(uLocal_472[1])) && !is_entity_dead(&(uLocal_469[1]))) && !func_138(5))
				{
					if (!is_entity_dead(&(uLocal_472[1])))
					{
						func_582(0);
					}
					func_334(&Local_793, 3, 1, 1);
					func_301(&(uLocal_472[1]), 1, 1);
					func_503(&(uLocal_469[1]), 1000);
					iLocal_468 = 2;
				}
				else if (func_559(&(uLocal_472[1]), &Local_793, "PED_SAVAGE2"))
				{
					_0x2208438012482a1a(&(uLocal_472[1]), true, false);
					if (does_entity_exist(Local_659[5]->f_8))
					{
						func_301(&(uLocal_472[1]), 1, 1);
						_give_weapon_component_to_weapon_object(&(Local_659[5]->f_8), &(uLocal_472[1]), 752097756, true);
					}
					func_582(0);
					iLocal_468 = 12;
				}
			}
			else if (!_0x3ab6c7b0bb0df4b1(&(uLocal_469[1]), Local_793.f_1))
			{
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					task_smart_flee_ped(&(uLocal_469[1]), Global_35, 1000f, -1, 0, 1077936128, 0);
					if (iVar442 == 0)
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_566(1);
					func_305(uLocal_480[1]);
				}
				if (!is_entity_dead(&(uLocal_472[1])))
				{
					func_582(0);
				}
				iLocal_468 = 12;
			}
			break;
		case 4:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					open_sequence_task(&iLocal_208);
					task_smart_flee_ped(0, Global_35, 1000f, -1, 0, 2f, 0);
					func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
					func_566(1);
					func_305(uLocal_480[1]);
				}
				iLocal_468 = 12;
			}
			else
			{
				set_ped_can_play_gesture_anims(&(uLocal_469[1]), 0, 1);
			}
			break;
		case 5:
			if (func_142(iParam0, 2))
			{
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					open_sequence_task(&iLocal_208);
					task_smart_flee_ped(0, Global_35, 1000f, -1, 0, 2f, 0);
					func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
				}
				func_566(1);
				iLocal_468 = 12;
			}
			else
			{
				set_ped_can_play_gesture_anims(&(uLocal_469[1]), 0, 1);
				if (func_559(&(uLocal_469[1]), &Local_793, "PED_FEMALE"))
				{
					Var0.f_4 = 1065353216;
					Var0.f_5 = 1065353216;
					Var0.f_9 = 1065353216;
					Var0.f_10 = 1065353216;
					Var0.f_14 = 1065353216;
					Var0.f_15 = 1065353216;
					Var0.f_17 = 1040187392;
					Var0.f_18 = 1040187392;
					Var0.f_19 = -1;
					Var0.f_26 = -1082130432;
					func_586(&Var0);
					func_587(&(uLocal_469[1]), &(uLocal_469[0]), &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
					func_566(1);
					_0x923583741dc87bce(&(uLocal_469[1]), "default_female");
					_0x89f5e7adecccb49c(&(uLocal_469[1]), "intimidated_on_feet");
					iLocal_468 = 12;
				}
			}
			break;
		case 6:
			if (func_142(iParam0, 2))
			{
				task_smart_flee_ped(&(uLocal_469[1]), Global_35, 1000f, -1, 0, 2f, 0);
				if (iVar442 == 0)
				{
					func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_566(1);
				func_588();
				iLocal_468 = 12;
			}
			else if (func_559(&(uLocal_469[1]), &Local_793, "PED_FEMALE"))
			{
				func_158(3);
				_0x923583741dc87bce(&(uLocal_469[1]), "default_female");
				_0x89f5e7adecccb49c(&(uLocal_469[1]), "intimidated_on_feet");
				open_sequence_task(&iLocal_208);
				if (func_589())
				{
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_APPROACH", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				}
				else
				{
					task_turn_ped_to_face_entity(0, &(uLocal_469[0]), 0, -1082130432, -1082130432, -1082130432);
					task_go_straight_to_coord(0, get_entity_coords(&(uLocal_469[0]), true, false), 1f, -1, 1193033728, 1.5f, 0);
					task_turn_ped_to_face_entity(0, &(uLocal_469[0]), 0, -1082130432, -1082130432, -1082130432);
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_ENTER_WOMAN", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				}
				task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 4f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
				func_311(&uLocal_838);
				if (iVar442 == 0)
				{
					func_306(&(uLocal_469[1]), Global_35, "RE_SAF_GRI_V1_SAVEDUS_ALMOST", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_305(uLocal_480[1]);
				func_588();
				func_566(1);
				iLocal_468 = 7;
			}
			break;
		case 7:
			if (func_142(iParam0, 2))
			{
				open_sequence_task(&iLocal_208);
				if (is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 1))
				{
					task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_BREAKOUT_WOMAN", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				}
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, 2f, 0);
				func_45(&(uLocal_469[1]), &iLocal_208, 0, 0, 1, 1);
				func_566(1);
				if (iVar442 == 0)
				{
					func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_305(uLocal_480[1]);
				iLocal_468 = 12;
			}
			else if (func_590())
			{
				iLocal_1355 = 1;
				iLocal_1356 = 1;
				func_591();
				iLocal_461 = 6;
				return 0;
			}
			break;
		case 8:
			if (!is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_GETUP", 1))
			{
				return 1;
			}
			break;
		case 10:
			if (func_559(&(uLocal_469[1]), &Local_793, "PED_FEMALE"))
			{
				if (!is_entity_dead(&(uLocal_469[1])))
				{
					task_smart_flee_ped(&(uLocal_469[1]), Global_35, 1000f, -1, 0, 2f, 0);
					func_566(1);
					if (iVar442 == 0)
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_306(&(uLocal_469[1]), &(uLocal_469[1]), "DONT_HURT_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_305(uLocal_480[1]);
				iLocal_468 = 12;
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_338()
{
	switch (iVar1391)
	{
		case 0:
			if (func_592(&(uLocal_469[1]), "DONT_KILL_ME", 1))
			{
				if (!bVar446)
				{
					trigger_music_event("RESAF_START");
					iLocal_448 = 1;
				}
				func_311(&uLocal_853);
				uLocal_1393 = iVar1391 + 1;
			}
			break;
		case 1:
			if (func_314(&uLocal_853, 1f))
			{
				if (func_592(&(uLocal_472[2]), "RE_SAF_GRI_V1_CIVS_LAUGHA", -1))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 2:
			if (func_314(&uLocal_853, 1f))
			{
				if (func_592(&(uLocal_469[1]), "DONT_KILL_ME", 2))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 3:
			if (!func_168(&(uLocal_472[2]), 1))
			{
				if (func_592(&(uLocal_472[2]), "RE_SAF_GRI_V1_CIVS_LAUGHB", -1))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 4:
			if (func_314(&uLocal_853, 1f))
			{
				if (func_592(&(uLocal_469[0]), "GENERIC_ANGRY_REACTION", 2))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 5:
			if (!func_168(&(uLocal_472[2]), 1))
			{
				if (func_592(&(uLocal_472[2]), "RE_SAF_GRI_V1_CIVS_LAUGHC", -1))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 6:
			break;
	}
}

void func_339()
{
	switch (iVar1391)
	{
		case 0:
			if (func_592(&(uLocal_469[1]), "DONT_KILL_ME", 1))
			{
				if (!bVar446)
				{
					trigger_music_event("RESAF_START");
					iLocal_448 = 1;
				}
				func_311(&uLocal_853);
				uLocal_1393 = iVar1391 + 1;
			}
			break;
		case 1:
			if (!func_168(&(uLocal_469[1]), 1))
			{
				if (func_592(&(uLocal_469[0]), "GENERIC_ANGRY_SHOUT", 1))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 2:
			if (!func_168(&(uLocal_469[0]), 1))
			{
				if (func_592(&(uLocal_469[1]), "GENERIC_FRIGHTENED_HIGH", 0))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 3:
			if (!func_168(&(uLocal_469[0]), 1))
			{
				if (func_592(&(uLocal_469[0]), "GENERIC_FRIGHTENED_HIGH", 0))
				{
					func_311(&uLocal_853);
					uLocal_1393 = iVar1391 + 1;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_340(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_391(iParam0, 13))
	{
		func_393(iParam0, 0);
	}
	else
	{
		func_394(iParam0, 0);
	}
	if (func_593(iParam0->f_6))
	{
		if (bParam2)
		{
			func_392(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_341(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_group_exist(*uParam0))
	{
		*uParam0 = create_group(iParam1);
		if (does_group_exist(*uParam0))
		{
			set_group_formation(*uParam0, iParam2);
			_0xd5bd1b5318a81994(*uParam0, iParam3);
			return true;
		}
	}
	return false;
}

void func_342(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!does_group_exist(*uParam1) || is_ped_dead_or_dying(*uParam0, true))
	{
		return;
	}
	set_ped_config_flag(*uParam0, 279, bParam3);
	if (bParam2)
	{
		set_ped_as_group_leader(*uParam0, *uParam1, false);
	}
	else
	{
		set_ped_as_group_member(*uParam0, *uParam1);
		set_ped_config_flag(*uParam0, 280, bParam4);
		_0xbad2a311667a50d7(*uParam0, iParam5);
	}
	_0x97c475212b327666(*uParam1, iParam6);
}

int func_343(int iParam0)
{
	iVar0 = func_594(iParam0);
	if (does_entity_exist(iVar0) && is_ped_injured(iVar0))
	{
		return iVar0;
	}
	return 0;
}

Vector3 func_344(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_595(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_345(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_346(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_347(int iParam0)
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

bool func_348(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (_is_mount_seat_free(iParam0, -1))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_349(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_596(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_350(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_entity_dead(iParam2))
			{
				if (func_597(iParam0, iParam1, 0) < func_597(iParam0, iParam2, 0))
				{
					return iParam1;
				}
				else
				{
					return iParam2;
				}
			}
		}
	}
	return 0;
}

float func_351(int iParam0, vector3 vParam1, int iParam4)
{
	return func_598(iParam0, vParam1, iParam4);
}

void func_352(int iParam0)
{
	if (func_172(iParam0, 0, 1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		clear_ped_secondary_task(iParam0);
	}
}

bool func_353(int iParam0, int iParam1)
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
	if (func_248(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_354()
{
	return Global_1572887->f_12;
}

int func_355(int iParam0)
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

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_357(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_599();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_600(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_601(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_602())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_603(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_599();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_604(iVar1);
		func_606(func_605(), 0, 4000);
		func_607(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_608(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_610(func_609(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_356(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_611(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_612(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_612(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_610(func_609(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_356(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_611(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_612(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_612(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_609(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_613(10, 1);
	}
}

void func_358(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

float func_359(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_614(Global_35, iParam0, bParam1, bParam2);
}

void func_360()
{
	func_332(uLocal_469[0], Local_874[0], &(Local_874[0]->f_21), 1, 0);
	func_332(uLocal_469[1], Local_874[1], &(Local_874[1]->f_21), 1, 0);
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		set_ped_config_flag(&(uLocal_469[0]), 413, true);
		set_ped_config_flag(&(uLocal_469[0]), 330, true);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[0]), 7, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[0]), 19, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[0]), 20, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[0]), 18, 2, 1);
	}
	if (!is_entity_dead(&(uLocal_469[1])))
	{
		set_ped_config_flag(&(uLocal_469[1]), 413, true);
		set_ped_config_flag(&(uLocal_469[1]), 330, true);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[1]), 7, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[1]), 19, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[1]), 20, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[1]), 20, 1, 1);
		_0xa3db37edf9a74635(player_id(), &(uLocal_469[1]), 18, 2, 1);
	}
	iLocal_859 = 1;
}

int func_361(int iParam0, var uParam1, int iParam2)
{
	if (is_entity_dead(iParam0) && !is_entity_dead(iParam2))
	{
		iParam0 = iParam2;
		iParam2 = 0;
		if (!bVar1344)
		{
			iLocal_1349 = 1;
			*uParam1 = 0;
		}
	}
	func_615();
	bVar1 = false;
	if (!bVar1344)
	{
		if (is_entity_dead(iParam2))
		{
			bVar1 = true;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				if (!func_616(iParam0))
				{
					if (func_617(iParam0, iParam2, bVar1))
					{
						*uParam1 = 2;
					}
					else
					{
						open_sequence_task(&iVar0);
						if (bVar1)
						{
							if (func_343(&(uLocal_469[0])) != &uLocal_469[1])
							{
								if (does_entity_exist(iParam2))
								{
									if (is_entity_dead(iParam2))
									{
										task_pickup_carriable_entity(0, iParam2);
									}
								}
							}
						}
						task_wander_standard(0, 40000f, 0);
						func_45(iParam0, &iVar0, 0, 0, 1, 1);
						if (!is_entity_dead(iParam2))
						{
							task_follow_and_converse_with_ped(iParam2, iParam0, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
						}
						func_311(&uLocal_1345);
						*uParam1 = 1;
					}
				}
				else if (_0x4e76cb57222a00e5(iParam0) == -1)
				{
					if (is_entity_dead(iParam2) || func_326(iParam2, get_mount(iParam0), 0))
					{
						_task_move_in_traffic(iParam0, -1f, 0, 0);
						*uParam1 = 3;
					}
					else
					{
						if (!func_345(iParam0, iParam2, 7f, 1))
						{
							open_sequence_task(&iVar0);
							task_go_to_entity(0, iParam2, -1, (7f + 3f), 1.75f, 2f, 0);
							func_45(iParam0, &iVar0, 0, 0, 1, 1);
						}
						open_sequence_task(&iVar0);
						if (func_616(iParam2))
						{
							task_dismount_animal(0, 0, 0, 0, 0, 0);
						}
						task_mount_animal(0, get_mount(iParam0), -1, 0, 1f, 1, 0, 0);
						func_45(iParam2, &iVar0, 0, 0, 1, 1);
						*uParam1 = 2;
					}
				}
				else
				{
					task_mount_animal(iParam0, get_mount(iParam0), -1, -1, 2f, 0, 0, 0);
					*uParam1 = 2;
				}
				break;
			case 1:
				if (func_314(&uLocal_1345, 5f))
				{
					if (func_617(iParam0, iParam2, bVar1))
					{
						*uParam1 = 2;
					}
					else
					{
						func_311(&uLocal_1345);
					}
				}
				break;
			case 2:
				if (func_616(iParam0) && _0x4e76cb57222a00e5(iParam0) == -1)
				{
					if (is_entity_dead(iParam2) || func_616(iParam2))
					{
						_task_move_in_traffic(iParam0, -1f, 0, 0);
						*uParam1 = 3;
					}
				}
				else if (!func_571(iParam0, 1435919172))
				{
					*uParam1 = 0;
				}
				break;
			case 3:
				if (!func_147(iParam0, func_23(&Local_14), 55f, 1, 1))
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

bool func_362(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_363(int iParam0, int iParam1)
{
	if (!func_362(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_364(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_365(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_618(vParam1, fParam5);
	fVar0 = func_619(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_366(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_112(&(uParam0->f_1), 16);
		func_365(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_618(vParam1, fParam5);
		fVar1 = func_619(fParam5, iParam4);
		fVar3 = func_620(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_620(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_367(float fParam0)
{
	fVar0 = func_621(fParam0);
	return fVar0;
}

float func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_369(float fParam0)
{
	fVar0 = func_621(fParam0);
	return fVar0;
}

float func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_371(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_372(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_622(0) };
	vVar3 = { func_595(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_373(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_374(int iParam0)
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

void func_375(int* iParam0)
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

void func_376(int iParam0)
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

void func_377(var uParam0)
{
	if (func_593(uParam0->f_162))
	{
		func_392(&(uParam0->f_162), 1, 1);
	}
	if (func_593(uParam0->f_163))
	{
		func_392(&(uParam0->f_163), 1, 1);
	}
	if (func_593(uParam0->f_164))
	{
		func_392(&(uParam0->f_164), 1, 1);
	}
	if (func_593(uParam0->f_165))
	{
		func_392(&(uParam0->f_165), 1, 1);
	}
}

void func_378(var uParam0)
{
	if (uParam0->f_170)
	{
		func_623();
	}
}

void func_379(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_624(32);
		func_383(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_380(var uParam0)
{
	if (func_625(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_626(uParam0->f_3);
		func_263(uParam0, 0, 1);
		func_627(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_628(0, 0);
		return true;
	}
	return false;
}

void func_381()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_382(int iParam0)
{
	if (!func_185(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_383(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_364(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_354() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

var func_384(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_385(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_629(sParam1));
}

int func_386(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_387(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

void func_388(var uParam0, int iParam1)
{
	func_630(uParam0, iParam1);
}

int func_389(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

void func_390(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_631((*uParam0)[0], func_216(7), sParam1, -163964935, 0, 0, 0, 1, 0);
	func_631((*uParam0)[1], func_216(10), sParam2, 648122183, 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_631((*uParam0)[2], func_216(12), sParam3, -1616532217, 0, 0, 0, 1, 0);
		if (is_string_null_or_empty(sParam3))
		{
			func_340((*uParam0)[2], 0, 0);
		}
	}
	if (is_string_null_or_empty(sParam1))
	{
		func_340((*uParam0)[0], 0, 0);
	}
	if (is_string_null_or_empty(sParam2))
	{
		func_340((*uParam0)[1], 0, 0);
	}
}

bool func_391(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_392(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_593(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_632(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_633(iVar0);
	*uParam0 = 0;
}

void func_393(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_394(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_395(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_396(int* iParam0, char* sParam1)
{
	if (func_593(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_634(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_394(iParam0, 1);
}

int func_397(int iParam0)
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

int func_398(int iParam0)
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

bool func_399(int iParam0, int iParam1, var uParam2)
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

Vector3 func_400(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_182(*(*uParam1)[iVar0]))
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

void func_401(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_198("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_402(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_403(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_182(vParam0))
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
		if (func_287(vParam0))
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
	func_635(iVar0, bParam8);
	return iVar0;
}

void func_404(int iParam0)
{
	if (!func_185(iParam0))
	{
		return;
	}
	func_636(iParam0);
}

void func_405(var uParam0, vector3 vParam1)
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

int func_406(int iParam0)
{
	if (func_113(iParam0, 2))
	{
		return 200;
	}
	if (func_113(iParam0, 4))
	{
		return 70;
	}
	if (func_113(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_407(int iParam0)
{
	if (func_64(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_448() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_64(iParam0, 2);
		bVar1 = func_64(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_269())
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

void func_408(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_113(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_409(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_113(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_113(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_410(int iParam0, int iParam1)
{
	iVar0 = (func_398(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_411(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_182(vParam1))
	{
		return false;
	}
	if (func_416(iParam0, vParam1))
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
	if (func_180(iParam0))
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

bool func_412(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_413(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_192(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_419(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_538();
			iParam4->f_2 = func_494(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_419(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_538();
		iParam4->f_2 = func_494(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_414(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_538() - *uParam0) >= iParam1;
	}
	return false;
}

int func_415(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_182(*uParam0->f_12[iVar0]))
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

bool func_416(int iParam0, vector3 vParam1)
{
	if (!func_64(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_637(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_64(iParam0, 33554432))
	{
		if (func_638(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_417(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_113(iParam0, 128))
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
	if (func_64(iParam0, 1) && !func_64(iParam0, 2))
	{
		if (func_64(iParam0, 4096) || func_64(iParam0, 2048))
		{
			if (func_639(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_199(&uParam0);
	if (!func_640())
	{
		return false;
	}
	return true;
}

bool func_419(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_641(vVar0, vParam0) > func_641(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_420(int iParam0)
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

int func_421(int iParam0)
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

int func_422(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_642(&iVar1, -2147483648);
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

int func_423()
{
	return get_player_group(get_player_index());
}

bool func_424(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_354() != -1)
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

bool func_425(int iParam0)
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

Vector3 func_426(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_427(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_102((fParam0 + fParam1));
}

int func_428(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_643(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_644(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_645(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_645(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_347(iVar0))
		{
			func_433(iVar0, &(uParam1->f_23), 0);
		}
		if (func_347(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_646(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_647(&(uParam1->f_22)));
			func_186(iVar0, func_648(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_649(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_650(&(uParam1->f_22)))
		{
			func_651(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_652(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_248(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_347(iVar0))
		{
			func_654(iVar0, !func_653(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_655(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_656(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_656(&(uParam1->f_22)));
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

bool func_429(int iParam0, int iParam1)
{
	if (func_657(iParam0) != -1)
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

void func_430(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_355(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_431(var uParam0)
{
	return func_248(*uParam0, 32);
}

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_433(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_172(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_434(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_435(int iParam0)
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

int func_436(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_658(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_659((386 + iVar28), 1);
			if (func_660(iParam0, &Var0, iVar5, 0))
			{
				if (func_661(iParam0, &Var6, iVar5))
				{
					Var29 = { func_662(iParam0, Var0, iVar5, 0) };
					func_663(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_664(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_665(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_666(iParam0, iParam1);
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

void func_437(int iParam0, int iParam1, float fParam2)
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

bool func_438(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_439(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_440(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_441(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	decor_set_int(iParam1, "HorseScriptCreator", get_hash_of_this_script_name());
}

char* func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BOOL_CRYING";
		case 1:
			return "BOOL_LOOP";
		case 2:
			return "BOOL_cower";
		default:
			break;
	}
	return "";
}

void func_443(var uParam0, char* sParam1, bool bParam2)
{
	if (func_293(uParam0, 0, 0, 0))
	{
		set_anim_scene_bool(uParam0->f_1, sParam1, bParam2, false);
	}
}

int func_444(var uParam0)
{
	return uParam0;
}

bool func_445(int iParam0)
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

int func_446(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_667(1);
	}
	else
	{
		iVar0 = func_668(iParam0);
	}
	return iVar0;
}

void func_447(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_669(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_670(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_448()
{
	return Global_1897952->f_41;
}

void func_449(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_113(iParam0, 8192))
	{
		iVar0 = func_670(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_450(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_383(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_451(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_64(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_671(262144, iVar0, 0, 1);
		}
	}
	if (func_64(iParam0, 128))
	{
		func_671(128, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 524288))
	{
		func_671(524288, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 536870912))
	{
		func_671(536870912, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 4194304))
	{
		func_671(4194304, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 8388608))
	{
		func_671(8388608, iVar0, 0, 1);
	}
}

void func_452(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_453(bool bParam0)
{
	if (!bParam0 && func_672(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_454()
{
	return Global_1310750->f_16037;
}

bool func_455(int iParam0)
{
	if (!func_185(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_456(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_185(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_673(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_674(Global_1393447, 1);
	func_675();
	func_676();
	func_677((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_538() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_678();
		if (iParam1 == -1)
		{
			if (func_142(iParam0, 1))
			{
				func_671(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_142(iParam0, 2))
			{
				func_671(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_142(iParam0, 4))
			{
				func_671(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_679(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_680(to_float(iVar0), 1, 0);
	}
	else
	{
		func_680((to_float(200) / 3f), 1, 0);
	}
}

bool func_458(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_459(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_460(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_461(int iParam0)
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

bool func_462()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_463(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_464(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_463(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_465() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_465()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_466(bool bParam0, bool bParam1, bool bParam2)
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

int func_467()
{
	return &Global_1899515;
}

int func_468(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_469(int iParam0)
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

bool func_470(int iParam0)
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

bool func_471(int iParam0)
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

bool func_472(int iParam0)
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

bool func_473(int iParam0)
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

bool func_474(int iParam0)
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

bool func_475(int iParam0)
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

bool func_476(bool bParam0, int iParam1, int iParam2)
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

bool func_477()
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

int func_478(int iParam0)
{
	if (!func_481(iParam0))
	{
		return -1;
	}
	return func_682(func_681(iParam0));
}

bool func_479(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_480(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_481(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_482(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_483(int iParam0)
{
	return func_64(iParam0, Global_1310750->f_16072 | 64);
}

int func_484(int iParam0)
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

int func_485(int iParam0)
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

bool func_486(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_487(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_488(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_489(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_490(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_489(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_192(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_311(&(iParam1->f_13));
		}
		if (func_683(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_684(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_490(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_549(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_685(*uParam0, 1, 1);
						}
					}
					else if (func_686(iParam1, 22))
					{
						func_685(*uParam0, 0, 1);
					}
				}
				if (func_687(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_688(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_689(iParam8);
					if (func_690(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_691(uParam3);
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
					func_692(iParam1, uParam3, fVar8);
					if (func_693(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_694(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_695(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_687(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_696(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_690(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_688(uParam0, func_687(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_689(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_694(uParam3, 0, 0, 1, 1);
					}
					func_697(iParam1, 1);
				}
				func_692(iParam1, uParam3, fVar8);
				if (func_695(uParam0, iParam1, fParam4, bVar6))
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
			func_550(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_491(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_698(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_306(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_492(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_354() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_493(int iParam0, bool bParam1)
{
	func_699(iParam0, &iVar0, &iVar1);
	if (!func_700(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_701(iVar0, iVar1);
}

float func_494(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_495(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_269())
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
				if (func_359(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_614(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_311(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_702(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_704(func_703(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_496(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_497(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_465() - fParam1);
	func_500(uParam0, 1);
	func_498(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_498(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_499(var uParam0)
{
	if (!func_310(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_312(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_465() - uParam0->f_1);
}

void func_500(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_501(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_293(uParam0, 0, 0, 0) && !is_string_null_or_empty(sParam2))
	{
		if (_0x005e6f28dd7ed58d(uParam0->f_1, sParam2))
		{
			return true;
		}
	}
	if (bParam3)
	{
		if (does_entity_exist(iParam1))
		{
			if (!_0x3ab6c7b0bb0df4b1(iParam1, -1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_705(iVar0, iParam0))
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_503(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_504(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_706(Local_1025[iVar0], bParam0, 0);
		iVar0++;
	}
}

void func_505(int iParam0)
{
	func_707(iParam0, 1);
	func_708(iParam0, 1);
	func_709(iParam0, 1);
}

bool func_506()
{
	if (func_147(Global_35, func_23(&Local_14), 30f, 1, 1))
	{
		if (func_710(&uLocal_472, &uLocal_1285, &uVar0, &uLocal_1281, 0, (iVar470 - 1), 3))
		{
			func_311(&uLocal_850);
		}
	}
	return (func_310(&uLocal_850) && !func_314(&uLocal_850, 3f));
}

bool func_507()
{
	if (!is_entity_dead(&(uLocal_472[2])))
	{
		return get_ped_reset_flag(&(uLocal_472[2]), 0);
	}
	return false;
}

void func_508()
{
	if (!bVar1271)
	{
		if ((!is_entity_dead(&(uLocal_469[0])) && !func_138(4)) && !does_blip_exist(&(uLocal_480[0])))
		{
			func_307(&(uLocal_469[0]), uLocal_480[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		if ((!is_entity_dead(&(uLocal_469[1])) && !func_138(5)) && !does_blip_exist(&(uLocal_480[1])))
		{
			func_307(&(uLocal_469[1]), uLocal_480[1], -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		iLocal_1273 = 1;
	}
}

void func_509(char* sParam0, bool bParam1, bool bParam2)
{
	iVar0 = 8208;
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam2)
	{
		iVar0 |= 67108864;
	}
	task_play_anim(&(uLocal_472[2]), func_80(), sParam0, 4f, -4f, -1, iVar0, 0f, false, 0, false, 0, false);
}

bool func_510(char* sParam0)
{
	return is_entity_playing_anim(&(uLocal_472[2]), func_80(), sParam0, 1);
}

bool func_511()
{
	return func_310(&uLocal_1254);
}

void func_512()
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
	func_711(&Var0, Global_35, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
	_0x66f9eb44342bb4c5(&(uLocal_472[2]), &Var0);
}

int func_513(char* sParam0)
{
	if (!bVar1389)
	{
		if (func_159())
		{
			if (func_502(0, &iVar0) && iVar0 == 2)
			{
				func_306(Global_35, &(uLocal_472[2]), "RE_SAF_GRI_V1_DEFUSE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_311(&uLocal_1388);
				func_127();
				iLocal_1392 = 1;
			}
		}
		else if (func_310(&uLocal_1388))
		{
			if (func_712(&uLocal_1388, 2f))
			{
				func_713();
			}
		}
		else
		{
			func_311(&uLocal_1388);
		}
	}
	else if (func_310(&uLocal_1388))
	{
		if (func_712(&uLocal_1388, 3f))
		{
			func_311(&uLocal_847);
		}
		else
		{
			return 0;
		}
	}
	if (!func_510(sParam0))
	{
		if (func_314(&uLocal_847, 3f))
		{
			if (!func_168(&(uLocal_472[2]), 0))
			{
				if (func_506())
				{
					if (iVar1312 > 1 || func_147(Global_35, func_23(&Local_14), 20f, 1, 1))
					{
						return 1;
					}
					else
					{
						if (func_159())
						{
							func_160();
						}
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
		}
	}
	return 0;
}

int func_514(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_515(int iParam0)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if ((((&uLocal_469[0] == iVar0 || &uLocal_469[1] == iVar0) || &uLocal_472[0] == iVar0) || &uLocal_472[1] == iVar0) || &uLocal_472[2] == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_516(int iParam0, int iParam1, int iParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_519(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_531(iParam1, 4000))
				{
					if ((func_532(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_533(iParam1, iParam0)) && func_534(iParam1, iParam0))
					{
						func_536();
						*iParam2 = 2;
						func_521(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_531(iParam1, 4000))
				{
					if ((func_532(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_533(iParam1, iParam0)) && func_534(iParam1, iParam0))
					{
						func_536();
						*iParam2 = 2;
						func_521(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_535(iParam0, Global_1935630->f_41))
							{
								func_536();
								*iParam2 = 2;
								func_521(iParam0, iParam1, *iParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_535(iParam0, Global_1935630->f_41))
						{
							func_536();
							*iParam2 = 2;
							func_521(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_539())
					{
						if (func_535(iParam0, Global_1935630->f_42))
						{
							func_536();
							*iParam2 = 2;
							func_521(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_525(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_526(Global_35, iParam0, iParam1))
					{
						func_536();
						*iParam2 = 4;
						func_521(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_527(Global_35, iParam0, iParam1))
					{
						func_536();
						*iParam2 = 256;
						func_521(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_714(iParam0, iParam1))
			{
				func_536();
				*iParam2 = 131072;
				func_521(iParam0, iParam1, *iParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_715(iParam0, iParam1))
			{
				func_536();
				*iParam2 = 262144;
				func_521(iParam0, iParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

void func_517(int iParam0)
{
	if (!is_bit_set(iVar1262, iParam0))
	{
		switch (iParam0)
		{
			case 0:
				func_716();
				Local_659[6]->f_8 = func_717(&Local_772, "Male_Scalp", 1);
				break;
			case 1:
				Local_659[7]->f_8 = func_717(&Local_793, "Female_Scalp", 1);
				break;
			case 2:
				break;
		}
		set_bit(&uLocal_1266, iParam0);
	}
}

int func_518(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_519(int iParam0, bool bParam1, int iParam2)
{
	func_718(iParam2);
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
		iParam0->f_13 = func_719(0);
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
							func_112(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_275(1))
						{
							func_112(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_275(1) || *iParam0 & 8192 != 0))
				{
					func_211(iParam0, 33554432);
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
			if (func_720(iParam0))
			{
				iParam0->f_15 = func_538();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_538() - iParam0->f_15) > 500)
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
	func_721(iParam0);
}

bool func_520(int iParam0, int iParam1)
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
			if (!func_722(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_723(iParam0, iVar2) <= func_724(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_725(iParam2, 1, 1, 1, 0))
	{
		func_112(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_726(iParam1, 1);
	func_381();
}

bool func_522(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_727(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_728(iParam1);
			if (func_729(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_730(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_726(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_726(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_523(int iParam0, int iParam1, int iParam2)
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
	if (func_731(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_728(iParam2);
		if (func_729(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_730(iParam2)
				{
					func_726(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_524(int iParam0, int iParam1)
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
	if (func_722(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_730(iParam1)
		{
			fVar3 = func_728(iParam1);
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

bool func_525(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_538();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_526(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_732(iParam2);
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
			if (func_534(iParam2, iParam1))
			{
				func_726(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_527(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_733(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_534(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_726(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_528(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_734(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_726(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_726(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_735(iParam1, vVar0, vVar4))
					{
						func_726(iParam2, 1);
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
					func_726(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_735(iParam1, vVar0, vVar7))
					{
						func_726(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_529(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_722(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_736(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_737(&(Global_1935630->f_34[iVar0])))
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
			if (func_738(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_739(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_740(iParam1, iParam0, fVar1, iVar0))
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

bool func_530(int iParam0, int iParam1)
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

bool func_531(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_538();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_532(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_741(iVar0, &iVar2))
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
	if (func_742(iVar0, iParam0))
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

int func_533(int iParam0, int iParam1)
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

bool func_534(int iParam0, int iParam1)
{
	if (func_743(iParam0))
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

bool func_535(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_614(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_536()
{
}

bool func_537(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_744(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_538();
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
						if (func_494(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_538();
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

int func_538()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_539()
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
	if ((func_538() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_540(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_724(iParam0);
	if (iParam0->f_12 > func_745(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_746(iParam1);
	iVar1 = func_747(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_541(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_748(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_542(int iParam0, int iParam1)
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
		if (func_749(iParam0, iParam1, 1))
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
					if (!func_750(iParam1, iParam0))
					{
						if (func_494(iVar4, Global_36, 1) < 7f)
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

bool func_543(int iParam0, int iParam1)
{
	if (!func_751(0))
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

bool func_544(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_538();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_545(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_546(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_538();
	}
	else if (func_538() - iParam1->f_4) > func_752(iParam1)
	{
		return func_753(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_547(int iParam0, int iParam1)
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

bool func_548(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _blip_set_modifier(iVar0, iParam1);
}

void func_549(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_550(int* iParam0, var uParam1)
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
	func_754(iParam0, uParam1, 1);
	func_694(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_551(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_552(var uParam0, int iParam1, bool bParam2)
{
	set_bit(&(uParam0->f_8), 4);
	uParam0->f_15[4] = iParam1;
	if (func_755(uParam0, iParam1))
	{
		return func_121(uParam0, iParam1);
	}
	else
	{
		func_297(uParam0, 4, 0);
		return 0;
	}
	if (bParam2)
	{
		func_553(uParam0, 4, 1);
	}
	return 1;
}

void func_553(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_293(uParam0, 0, 0, 0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != iParam1)
			{
				func_297(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			func_297(uParam0, iVar0, 0);
			iVar0++;
		}
	}
}

int func_554()
{
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		if (is_entity_dead(&(uLocal_469[1])))
		{
			if (func_327(Global_35, &(uLocal_469[1])) || is_entity_touching_entity(Global_35, &(uLocal_469[1])))
			{
				if (func_516(&(uLocal_469[0]), &uLocal_1285, &iVar0, 0))
				{
					if (iVar0 == 131072)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_555()
{
	if (&iLocal_867[0] == 0)
	{
		func_756();
		func_306(Global_35, &(uLocal_469[0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_MALE_RECOVER", "RE_SAF_GRI_V2_MALE_RECOVER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_556()
{
	if (&iLocal_867[0] == 0 || &iLocal_867[1] == 0)
	{
		func_575();
		func_306(Global_35, &(uLocal_469[0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_COUPLE_RECOVER", "RE_SAF_GRI_V2_COUPLE_RECOVER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_557()
{
	func_17();
	open_sequence_task(&iLocal_208);
	vVar0 = { func_757(&(uLocal_469[0]), &(uLocal_469[1])) };
	if (func_182(vVar0))
	{
		task_go_to_entity(0, &(uLocal_469[1]), -1, 1.5f, 1f, 2f, 0);
	}
	else
	{
		vVar3 = { vVar0 + func_758(vVar0, &(uLocal_469[0]), 1065353216) };
		task_follow_nav_mesh_to_coord(0, vVar3, 1f, -1, 1f, 2112, 40000f);
	}
	task_turn_ped_to_face_entity(0, &(uLocal_469[1]), 0, -1082130432, -1082130432, -1082130432);
	task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_ENTER_MAN", 4f, -1000f, -1, 16384, 0f, false, 0, false, 0, false);
	func_558(0, -2048655016, -1, 0, 124012004, -1082130432);
	func_45(&(uLocal_469[0]), &iLocal_208, 0, 0, 1, 1);
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

bool func_559(int iParam0, var uParam1, char* sParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_string_null_or_empty(sParam2))
		{
			if (func_501(uParam1, iParam0, sParam2, 1))
			{
				return true;
			}
		}
		return (has_anim_event_fired(iParam0, -1290628317) || !_0x3ab6c7b0bb0df4b1(iParam0, -1));
	}
	return true;
}

bool func_560(int iParam0)
{
	if (is_entity_dead(&(uLocal_469[iParam0])))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (func_138(4))
			{
				return false;
			}
			break;
		case 1:
			if (func_138(5))
			{
				return false;
			}
			break;
	}
	return (!_0x3ab6c7b0bb0df4b1(&(uLocal_469[iParam0]), -1) || is_ped_ragdoll(&(uLocal_469[iParam0])));
}

void func_561()
{
	if (func_563())
	{
		func_572(&(uLocal_472[0]), 1000, 1000);
	}
	open_sequence_task(&iLocal_208);
	if ((!func_138(1) && !func_563()) && !func_138(4))
	{
		task_play_anim(0, "script_re@campfire_massacre", "breakout_thug_a", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	func_759(&(uLocal_472[0]));
	func_309(&(uLocal_472[0]), Global_35);
	task_combat_ped(0, Global_35, 0, 0);
	task_combat_hated_targets_around_ped(0, 40f, 0, 0);
	func_45(&(uLocal_472[0]), &iLocal_208, 0, 0, 1, 1);
	func_517(0);
}

bool func_562(int iParam0)
{
	return (!_0x3ab6c7b0bb0df4b1(iParam0, -1) || is_ped_ragdoll(iParam0));
}

bool func_563()
{
	return (has_anim_event_fired(&(uLocal_469[0]), 863546801) || func_138(7));
}

bool func_564()
{
	if (func_138(11))
	{
		return false;
	}
	if (is_entity_dead(&(uLocal_469[0])))
	{
		return false;
	}
	return true;
}

bool func_565()
{
	if (!is_entity_dead(&(uLocal_469[0])))
	{
		return has_anim_event_fired(&(uLocal_469[0]), 863546801);
	}
	return false;
}

void func_566(int iParam0)
{
	if (!is_bit_set(iVar1262, iParam0))
	{
		switch (iParam0)
		{
			case 0:
				break;
			case 1:
				break;
		}
		set_bit(&uLocal_1265, iParam0);
	}
}

void func_567()
{
	if (does_entity_exist(Local_659[2]->f_8))
	{
		activate_physics(Local_659[2]->f_8);
	}
}

bool func_568()
{
	return func_29();
}

void func_569()
{
	func_706(Local_874[0], 0, 0);
	func_215(Local_874[0], 2, 0, 0);
	func_215(Local_874[0], 1, 0, 0);
	func_158(27);
}

void func_570(char* sParam0, var uParam1, int iParam2)
{
	func_311(&uLocal_1382);
	sLocal_1385 = sParam0;
	iLocal_1381 = iParam2;
	uLocal_1386 = uParam1;
}

bool func_571(int iParam0, int iParam1)
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

void func_572(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	func_70(&vVar0, 1, 10, 0);
	set_ped_to_ragdoll_with_fall(iParam0, iParam1, iParam2, 2, 0f, 0f, -1f, vVar0.z, vVar0, vVar0);
}

bool func_573(int iParam0, int iParam1, float fParam2)
{
	return func_760(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

void func_574()
{
	func_252(&Local_814, "PED_MALE", &(uLocal_469[0]), 0);
	func_252(&Local_814, "PED_FEMALE", &(uLocal_469[1]), 0);
	func_151(&Local_814);
	func_33(&Local_772);
	func_33(&Local_793);
}

void func_575()
{
	if (func_138(27))
	{
		func_761(27);
		func_706(Local_874[0], 0, 0);
		func_217(Local_874[0], 0, func_216(7));
	}
	if (func_138(28))
	{
		func_761(28);
		func_706(Local_874[1], 0, 0);
		func_217(Local_874[1], 0, func_216(7));
	}
}

void func_576()
{
	_0x923583741dc87bce(&(uLocal_469[0]), "default");
	_0x89f5e7adecccb49c(&(uLocal_469[0]), "action");
}

Vector3 func_577(int iParam0, var uParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9)
{
	return func_762(iParam0, uParam1->f_1, sParam2, sParam3, fParam4, iParam5, fParam6, iParam7, bParam8, bParam9);
}

void func_578()
{
	func_569();
	func_584();
}

void func_579()
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
	func_711(&Var0, &(uLocal_469[1]), 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
	_0x66f9eb44342bb4c5(&(uLocal_469[0]), &Var0);
}

bool func_580()
{
	switch (iVar1314)
	{
		case 0:
			if (is_ped_using_any_scenario(&(uLocal_469[0])))
			{
				func_756();
				func_763();
				iLocal_1316 = 1;
			}
			break;
		case 1:
			switch (func_764())
			{
				case -1:
					switch (iVar1262)
					{
						case 0:
							if (!func_168(&(uLocal_469[0]), 1))
							{
								func_169(&(uLocal_469[0]), &(uLocal_469[1]), "RE_SAF_GRI_V1_CRY_M2", "RE_SAF_GRI_V2_CRY_M2", -1, -1);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 1:
							if (!func_168(&(uLocal_469[0]), 0))
							{
								func_311(&uLocal_1251);
								iLocal_1264 = 4;
							}
							break;
						case 4:
							if (func_314(&uLocal_1251, 3f))
							{
								func_169(&(uLocal_469[0]), &(uLocal_469[1]), "RE_SAF_GRI_V1_CRY_M2_C", "RE_SAF_GRI_V2_CRY_M2_C", -1, -1);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 5:
							if (!func_168(&(uLocal_469[0]), 0))
							{
								func_311(&uLocal_1251);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 6:
							if (func_314(&uLocal_1251, 3f))
							{
								func_169(&(uLocal_469[0]), &(uLocal_469[1]), "RE_SAF_GRI_V1_MOURNE_M2", "RE_SAF_GRI_V2_MOURNE_M2", -1, -1);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 7:
							if (!func_168(&(uLocal_469[0]), 0))
							{
								func_311(&uLocal_1251);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 8:
							if (func_314(&uLocal_1251, 10f))
							{
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 9:
							return true;
					}
					break;
				case 0:
					func_311(&uLocal_1251);
					iLocal_1267 = 1;
					iLocal_1313 = 0;
					iLocal_1316 = 2;
					break;
				case 1:
					iLocal_1267 = 1;
					iLocal_1313 = 1;
					iLocal_1316 = 2;
					break;
			}
			break;
		case 2:
			if (iVar1311 == 0)
			{
				if (func_314(&uLocal_1251, 3f))
				{
					iLocal_1316 = 1;
				}
			}
			else if (!_0x916b8e075abc8b4e(&(uLocal_469[0]), 1))
			{
				_0xe7fa07624574b79a(&(uLocal_469[0]), Global_35, 3, 2, -1f, 100, 0, 0, 0);
			}
			else if (_0x916b8e075abc8b4e(&(uLocal_469[0]), 0))
			{
				func_311(&uLocal_1251);
				iLocal_1316 = 3;
			}
			break;
		case 3:
			if (func_314(&uLocal_1251, 3f))
			{
				func_306(&(uLocal_469[0]), &(uLocal_469[1]), func_201(iVar443 == 0, "LEAVE_NOW", "GET_AWAY_FROM_ME"), 0, -1082130432, func_704(iVar443 == 0, 1, 2), 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_311(&uLocal_1251);
				iLocal_1316 = 4;
			}
			break;
		case 4:
			if (func_314(&uLocal_1251, 2f))
			{
				if (!func_168(&(uLocal_469[0]), 0))
				{
					func_311(&uLocal_1251);
					_0x541e5b41dca45828(&(uLocal_469[0]), 2, 0);
					iLocal_1316 = 1;
				}
			}
			break;
	}
	return false;
}

void func_581()
{
	if (&iLocal_867[1] == 0)
	{
		func_588();
		func_306(Global_35, &(uLocal_469[1]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_FEMALE_RECOVER", "RE_SAF_GRI_V2_FEMALE_RECOVER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_582(int iParam0)
{
	open_sequence_task(&iLocal_208);
	set_ped_combat_attributes(&(uLocal_472[1]), 5, true);
	set_ped_combat_attributes(&(uLocal_472[1]), 17, false);
	set_ped_combat_attributes(&(uLocal_472[1]), 46, true);
	func_309(&(uLocal_472[1]), Global_35);
	task_combat_ped(0, Global_35, 0, 16);
	task_combat_hated_targets_around_ped(0, 40f, 0, 0);
	task_combat_ped(0, Global_35, 0, 16);
	func_45(&(uLocal_472[1]), &iLocal_208, 0, 0, 1, 1);
	func_517(1);
}

Vector3 func_583(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_584()
{
	func_706(Local_874[1], 0, 0);
	func_215(Local_874[1], 2, 0, 0);
	func_215(Local_874[1], 1, 0, 0);
	func_158(28);
}

bool func_585(int iParam0, int iParam1)
{
	sVar0 = func_442(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		switch (iParam0)
		{
			case 0:
				return get_anim_scene_bool(Local_772.f_1, sVar0);
			case 1:
				return get_anim_scene_bool(Local_793.f_1, sVar0);
			default:
				break;
		}
	}
	return false;
}

void func_586(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = -571529030;
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

void func_587(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_765(iParam0, iParam1, iParam18);
	}
}

void func_588()
{
	if (func_138(28))
	{
		func_761(28);
		func_706(Local_874[1], 0, 0);
		func_217(Local_874[1], 0, func_216(7));
	}
}

bool func_589()
{
	vVar0 = { -2.53f, 2.44f, 0f };
	vVar3 = { _get_object_offset_from_coords(Local_768, Local_768.f_3, vVar0) };
	vVar6 = { get_entity_coords(&(uLocal_469[0]), true, false) };
	if (func_766(vVar3, vVar6) < 0.5f)
	{
		return true;
	}
	return false;
}

bool func_590()
{
	switch (iVar1359)
	{
		case 0:
			if (is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 1))
			{
				func_311(&uLocal_838);
				func_767();
				iLocal_1361 = 1;
			}
			break;
		case 1:
			if (func_769(func_768()))
			{
				func_770(&(Local_874[1]->f_21));
				func_487(&uLocal_838);
				if (!bVar1356)
				{
					iLocal_1358 = 1;
					func_771();
				}
				else if (bVar1354)
				{
					iLocal_1359 = 1;
					func_771();
				}
				else
				{
					func_311(&uLocal_838);
				}
				iLocal_1361 = 2;
			}
			else if (!func_772())
			{
				if (iVar443 == 0)
				{
					if (!func_168(&(uLocal_469[1]), 0))
					{
						if (iVar1262 < 3)
						{
							if (has_anim_event_fired(&(uLocal_469[1]), 1078568255))
							{
								switch (iVar1262)
								{
									case 0:
										func_306(&(uLocal_469[1]), &(uLocal_469[1]), "RE_SAF_GRI_V1_CRY_F1", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										break;
									case 1:
										func_306(&(uLocal_469[1]), &(uLocal_469[1]), "RE_SAF_GRI_V1_MOURNE_F1", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										break;
									case 2:
										func_306(&(uLocal_469[1]), &(uLocal_469[1]), "RE_SAF_GRI_V1_MOURNE_02_F1", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										break;
								}
								iLocal_1264 = iVar1262 + 1;
							}
						}
						else
						{
							task_play_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_GETUP", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
							iLocal_468 = 8;
						}
					}
				}
				else
				{
					switch (iVar1262)
					{
						case 0:
							if (!func_168(&(uLocal_469[1]), 0))
							{
								func_306(&(uLocal_469[1]), &(uLocal_469[0]), "RE_SAF_GRI_V2_ALONE_F1", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 1:
							if (!func_168(&(uLocal_469[1]), 0))
							{
								func_311(&uLocal_1251);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 2:
							if (func_314(&uLocal_1251, 30f))
							{
								task_play_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_GETUP", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
								iLocal_1264 = iVar1262 + 1;
							}
							break;
						case 3:
							if (!is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_GETUP", 1))
							{
								iLocal_1264 = iVar1262 + 1;
								return true;
							}
							break;
						case 4:
							return true;
					}
				}
			}
			break;
		case 2:
			func_770(&(Local_874[1]->f_21));
			if (get_sequence_progress(&(uLocal_469[1])) == 1)
			{
				func_311(&uLocal_838);
				iLocal_1361 = 1;
			}
			else
			{
				switch (iVar443)
				{
					case 0:
						if (bVar1357)
						{
							func_173(&(uLocal_469[1]), Global_35, "GENERIC_AFRAID_REACTION", 670066839, 1);
						}
						else
						{
							func_173(&(uLocal_469[1]), Global_35, "LEAVE_ME", 670066839, 1);
						}
						break;
					case 1:
						if (bVar1357)
						{
							func_173(&(uLocal_469[1]), Global_35, "LEAVE_ME", 1741788518, 2);
						}
						else
						{
							func_173(&(uLocal_469[1]), Global_35, "RE_SAF_GRI_V2_ALONE_F2", 1741788518, -1);
						}
						break;
				}
			}
			break;
	}
	return false;
}

void func_591()
{
	if (!bVar1353 && !bVar1354)
	{
		func_215(Local_874[1], 0, 1, 0);
	}
	else
	{
		func_215(Local_874[1], 0, 0, 0);
	}
	if (!bVar1354)
	{
		func_215(Local_874[1], 1, 1, 0);
	}
}

bool func_592(int iParam0, char* sParam1, int iParam2)
{
	if (func_306(iParam0, iParam0, sParam1, 0, -1082130432, iParam2, 0, 0, 2, 0, 1, 1744022339, 1, 0, 0))
	{
		func_773(1891783641, iParam0, 1);
		return true;
	}
	return false;
}

bool func_593(int iParam0)
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

int func_594(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

Vector3 func_595(vector3 vParam0)
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

int func_596(int iParam0)
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
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_597(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_766(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false));
	}
	return vdist(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false));
}

float func_598(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		return func_766(get_entity_coords(iParam0, true, false), vParam1);
	}
	return vdist(get_entity_coords(iParam0, true, false), vParam1);
}

int func_599()
{
	iVar0 = func_774();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_600(int iParam0)
{
	if (func_354() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_192(absf(fVar1) < 1f, func_192(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_601(int iParam0)
{
	if (!func_775(iParam0))
	{
		return false;
	}
	return func_776(iParam0);
}

bool func_602()
{
	if (func_354() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_603(int iParam0, int iParam1, int iParam2)
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

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_605()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_606(int iParam0, bool bParam1, int iParam2)
{
	func_777((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_778(iParam0);
}

void func_607(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_779(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_608(bool bParam0)
{
	bVar3 = false;
	if (func_780(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_781(iVar5, &iVar2, &iVar0))
			{
				if (!func_782(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_783(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_784(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_599() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_599() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_785();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_609(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_611(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_612(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_786(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_613(int iParam0, int iParam1)
{
	if (!func_787(iParam0))
	{
		return 0;
	}
	if (!func_788())
	{
		return 0;
	}
	if (!func_789(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

float func_614(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_615()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(uLocal_469[iVar0])))
		{
			func_790(uLocal_469[iVar0], 1, 0, 0, 1, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_616(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_617(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iVar1345) || is_entity_dead(iVar1345))
	{
		iLocal_1350 = func_170(get_entity_coords(iParam0, true, false), 60f, iParam0, 1);
	}
	if (!is_entity_dead(iVar1345))
	{
		open_sequence_task(&iVar0);
		if (iParam0 == &uLocal_469[0])
		{
			func_576();
			if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_IDLE_MAN", 1))
			{
				task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 4f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_ENTER_MAN", 1))
			{
				task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else if (_is_ped_using_scenario_hash(&(uLocal_469[0]), -2048655016))
			{
				_0xf1c03a5352243a30(&(uLocal_469[0]));
				task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "CRY_GETUP_MAN", 16f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
		else if (iParam0 == &uLocal_469[1])
		{
			if (is_entity_playing_anim(&(uLocal_469[0]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 1))
			{
				task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_GETUP", 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
		if (!func_345(iParam0, iVar1345, 20f, 1))
		{
			if (!func_168(iParam0, 0))
			{
				func_791(0, -72209530, 1971704925);
			}
		}
		if (does_entity_exist(iVar1345))
		{
			if (bParam2)
			{
				if (does_entity_exist(iParam1))
				{
					if (is_entity_dead(iParam1))
					{
						if (func_343(iParam0) != iParam1)
						{
							if (vdist2(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false)) < (20f * 20f))
							{
								task_pickup_carriable_entity(0, iParam1);
								task_place_carried_entity_on_mount(0, iParam1, iVar1345, 2f);
							}
						}
						else
						{
							task_place_carried_entity_on_mount(0, iParam1, iVar1345, 2f);
						}
					}
				}
			}
			task_mount_animal(0, iVar1345, -1, -1, 1f, 8, 0, 0);
		}
		else
		{
			_task_smart_flee_style_coord(0, func_23(&Local_14), 3, 0, 1000f, -1, 0);
			task_wander_standard(0, 40000f, 0);
		}
		func_45(iParam0, &iVar0, 0, 0, 1, 1);
		if (!is_entity_dead(iParam1))
		{
			open_sequence_task(&iVar0);
			if (does_entity_exist(iVar1345))
			{
				if (!func_326(iParam1, iVar1345, 0))
				{
					if (func_616(iParam1))
					{
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
				}
				task_mount_animal(0, iVar1345, -1, 0, 1f, 8, 0, 0);
			}
			else
			{
				task_follow_to_offset_of_entity(0, iParam0, 0f, 0f, 0f, 2f, -1, 4f, 1, 1, 0, 0, 1);
			}
			func_45(iParam1, &iVar0, 3f, 3f, 1, 1);
		}
		return true;
	}
	return false;
}

float func_618(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_36, vParam0, true);
}

float func_619(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_368(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_620(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_621(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_622(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_595((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_623()
{
	func_792(23);
}

void func_624(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_625(var uParam0)
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

void func_626(int iParam0)
{
	iVar0 = func_793(iParam0);
	if (iVar0 != 0)
	{
		func_794(-1, 24, 0, iVar0);
	}
}

void func_627(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_610(func_609(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_64(iParam0, 2))
	{
		func_795(iParam0, func_446(iParam3));
	}
	if (func_64(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_448();
		}
		func_796(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_113(iParam0, 65536))
	{
		func_797(iParam0, iParam1);
		func_798(iParam0, func_220(iParam0, iParam1));
		func_624(128);
	}
	func_450(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_451(iParam0, 1);
	if (!bParam2)
	{
		func_624(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_799(524288);
	}
	if (func_800(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_800(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_628(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_801(&Global_0, 8);
	}
	if (!func_788() || func_354() != -1)
	{
		return;
	}
	func_801(&Global_0, 1);
}

char* func_629(char* sParam0)
{
	return sParam0;
}

void func_630(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_631(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_593(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_802(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_634(iParam0->f_6, iParam0->f_5, 0);
			}
			func_803(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_396(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

int func_632(int iParam0)
{
	return iParam0;
}

void func_633(int iParam0)
{
	if (!func_804(iParam0))
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

void func_634(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

int func_635(int iParam0, bool bParam1)
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

void func_636(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_637(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_182(vParam0))
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

bool func_638(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_182(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_639(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_182(*Global_1310750->f_16043[iVar0]))
		{
			if (func_181(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_640()
{
	iVar0 = func_805(func_281());
	if (iVar0 == 8)
	{
		iVar1 = func_282(func_281());
		if (func_284(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_806(func_667(0)))
	{
		return false;
	}
	if (func_807())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_641(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_642(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_643(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_808(&uParam1))
	{
		return 1;
	}
	if (!func_70(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_644(var uParam0)
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

int func_645(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_809(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_646(var uParam0)
{
	return func_248(*uParam0, 4);
}

bool func_647(var uParam0)
{
	return func_248(*uParam0, 64);
}

bool func_648(var uParam0)
{
	return func_248(*uParam0, 8);
}

bool func_649(var uParam0)
{
	return func_248(*uParam0, 128);
}

bool func_650(var uParam0)
{
	return func_248(*uParam0, 2048);
}

void func_651(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_652(var uParam0)
{
	return func_248(*uParam0, 1024);
}

bool func_653(var uParam0)
{
	return func_248(*uParam0, 256);
}

void func_654(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_655(var uParam0)
{
	return func_248(*uParam0, 512);
}

bool func_656(var uParam0)
{
	return func_248(*uParam0, 4096);
}

int func_657(int iParam0)
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

struct<5> func_658(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_810(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_784(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_662(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_811(bParam1) };
			if (bParam2 && func_812(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_660(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_660(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_661(iParam0, &Var5, 1728382685))
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
			Var0 = { func_813(bParam1) };
			switch (func_814(iParam0))
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
			if (func_815(iParam0, -1823706425))
			{
				Var0 = { func_662(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_815(iParam0, -1483207246))
			{
				Var0 = { func_662(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_816(Var0, &Var27, bParam1, 0))
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

int func_659(int iParam0, int iParam1)
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

bool func_660(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_817(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_661(int iParam0, var uParam1, int iParam2)
{
	if (func_818(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_662(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_782(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_819(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_663(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_820(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_816(*uParam1, &Var0, bParam6, 0))
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
	if (!func_664(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_819(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_664(bool bParam0)
{
	if (func_354() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_819(bParam0));
}

int func_665(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_821(iParam0))
	{
		return 0;
	}
	if (!func_664(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_666(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_518(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_667(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_822(1, 0, 0);
	}
	else
	{
		iVar0 = func_281();
	}
	return func_668(iVar0);
}

int func_668(int iParam0)
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

int func_669(int iParam0)
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

int func_670(int iParam0, int iParam1)
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

void func_671(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_402(Global_1310750[iVar0], iParam0))
		{
			if (!func_382(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_823(iVar0) < func_824(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_450(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_672(int iParam0)
{
	iVar0 = func_825(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_673(int iParam0)
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

void func_674(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_675()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_826(iVar0, 128))
		{
			func_827(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_676()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_826(iVar0, 128) && func_826(iVar0, 1))
		{
			func_827(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_677(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_678()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_64(iVar0, 16777216))
		{
			if (!func_828(iVar0))
			{
				func_829(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_679(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_383(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_383(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_383(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_383(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_383(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_383(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_383(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_680(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_465();
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

int func_681(int iParam0)
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

int func_682(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_683(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_830(iParam0, iParam1))
		{
			if (!func_142(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_694(uParam2, 0, 0, 1, 0);
				func_112(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_142(iParam1->f_10, 1))
		{
			func_831(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_211(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_684(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_142(iParam4, 32);
		func_754(iParam1, uParam2, 0);
		iVar5 = func_832(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_694(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_142(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_142(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_142(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_142(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_142(iParam4, 8388608) || func_142(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_142(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_142(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_686(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_686(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_142(iParam4, 67108864))
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
				iParam6 = func_833(uParam0);
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
			if (func_142(iParam4, 268435456))
			{
				iVar8 = func_834(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_835(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_686(iParam1, 23))
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
			if (func_142(iParam4, 2) || func_142(iParam4, 16))
			{
				func_685(*uParam0, 1, 1);
			}
			else
			{
				func_685(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_685(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_686(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_687(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_836(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_688(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_837(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_142(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_689(int iParam0)
{
	if (func_142(iParam0, 4))
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
	if (func_142(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_142(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_690(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_838(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_839(Global_35)) || func_840(Global_35)) || func_841(Global_35));
	fVar12 = -1f;
	if (func_310(&(iParam1->f_13)))
	{
		fVar12 = func_499(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_593((*uParam4)[iVar0]->f_6);
		func_842(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_843(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_844(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_694(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_845(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_754(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_846(iParam1, fParam6, iParam1->f_9))
					{
						func_311(&(iParam1->f_18));
						if (bVar6)
						{
							func_845(uParam4, 0, 0);
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
		func_847(iParam1, fParam2);
	}
	return bVar5;
}

void func_691(var uParam0)
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

void func_692(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_848((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_847(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_693(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_849(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_850(iParam1, 0);
				func_754(iParam1, uParam2, func_686(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_694(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_593((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_392(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_695(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_311(&(iParam1->f_18));
			return false;
		}
		else if (func_310(&(iParam1->f_18)))
		{
			func_487(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_310(&(iParam1->f_18)))
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
	return func_712(&(iParam1->f_18), fParam2);
	return true;
}

void func_696(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_842(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_697(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_698(int* iParam0)
{
	if (func_686(iParam0, 0))
	{
		if (func_851(iParam0))
		{
			func_697(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_699(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_700(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_852(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_853(iParam0))
	{
		return false;
	}
	if (func_854(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_855(iParam0, 1)) || func_856(32768))
	{
		if (!func_855(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_857())
	{
		return false;
	}
	return true;
}

void func_701(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_702(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_703(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_858(iParam0, &Var0);
}

int func_704(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_705(int iParam0, int iParam1)
{
	return &iLocal_870[iParam0] == iParam1;
}

void func_706(var uParam0, bool bParam1, bool bParam2)
{
	func_845(&(uParam0->f_21), bParam1, bParam2);
}

void func_707(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 512);
	}
	else
	{
		func_211(iParam0, 512);
	}
}

void func_708(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 2);
	}
	else
	{
		func_211(iParam0, 2);
	}
}

void func_709(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 8);
	}
	else
	{
		func_211(iParam0, 8);
	}
}

bool func_710(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_518(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_516(uParam0[*uParam3], iParam1, iParam2, 0))
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

void func_711(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
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

bool func_712(var uParam0, float fParam1)
{
	if (func_314(uParam0, fParam1))
	{
		func_487(uParam0);
		return true;
	}
	return false;
}

void func_713()
{
	if (!bVar1389 && !bVar1390)
	{
		func_340(Local_1025[2]->f_21[0], 1, 0);
		func_214(Local_1025[2]->f_21[0], 0);
		func_396(Local_1025[2]->f_21[0], func_216(8));
		iLocal_1391 = 1;
	}
}

bool func_714(int iParam0, int iParam1)
{
	fVar0 = func_859(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_860(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_861())
					{
						if (is_ped_facing_ped(Global_35, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_715(int iParam0, int iParam1)
{
	if (func_276(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_716()
{
	if (!func_138(14))
	{
		if (func_293(&Local_772, 0, 0, 0) && _0x3ab6c7b0bb0df4b1(Local_659[0]->f_8, -1))
		{
			remove_anim_scene_entity(Local_772.f_1, "OBJ_AXE", Local_659[0]->f_8);
		}
		if (func_138(12))
		{
			activate_physics(Local_659[0]->f_8);
		}
		else
		{
			freeze_entity_position(Local_659[0]->f_8, true);
		}
		func_158(14);
	}
}

int func_717(var uParam0, char* sParam1, bool bParam2)
{
	iVar0 = _get_anim_scene_object(uParam0->f_1, sParam1, bParam2);
	if (does_entity_exist(iVar0))
	{
		func_300(uParam0, sParam1, iVar0, 1);
		func_301(iVar0, 1, 1);
		activate_physics(iVar0);
		return iVar0;
	}
	return 0;
}

void func_718(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_862();
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
			func_863(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_719(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_720(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_354() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_864(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_864(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_747(iVar0) == -1)
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

void func_721(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_865(iParam0);
	}
}

bool func_722(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_747(iParam2);
	}
	else
	{
		iVar1 = func_746(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_747(iParam0);
	}
	else
	{
		iVar0 = func_746(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_142(*iParam1, 8388608))
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

float func_723(int iParam0, int iParam1)
{
	return func_614(iParam0, iParam1, 1, 1);
}

float func_724(int iParam0)
{
	return iParam0->f_26;
}

bool func_725(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_726(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_112(iParam0, 134217728);
	}
	else
	{
		func_211(iParam0, 134217728);
	}
}

bool func_727(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_614(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_866(iVar0, 0)))
		{
			if (func_867(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_728(int iParam0)
{
	return iParam0->f_17;
}

bool func_729(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_142(*iParam0, 4194304))
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

int func_730(int iParam0)
{
	return iParam0->f_18;
}

bool func_731(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_866(iVar0, 0)))
		{
			if (func_868(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_732(int iParam0)
{
	return iParam0->f_23;
}

int func_733(int iParam0)
{
	return iParam0->f_21;
}

int func_734(int iParam0)
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

bool func_735(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_760(iParam0, vParam4, 0.5f))
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

int func_736(int iParam0)
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
	if (func_869(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_737(int iParam0)
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

bool func_738(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_276(iParam1))
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

bool func_739(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_276(iParam1))
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

bool func_740(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_276(iParam1))
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

bool func_741(int iParam0, int iParam1)
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

bool func_742(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_870(iParam0, 1, 0, 0) != 2055893578)
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

bool func_743(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_744(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_494(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_745(int iParam0)
{
	return iParam0->f_24;
}

int func_746(int iParam0)
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

int func_747(int iParam0)
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

int func_748(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_741(Global_35, &iVar1))
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
		fVar2 = func_614(iParam0, player_ped_id(), 0, 1);
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
		if (func_614(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_749(int iParam0, int iParam1, bool bParam2)
{
	func_476(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_750(iParam1, iVar0))
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
				if (!bParam2 || !func_750(iParam1, iVar1))
				{
					if (func_494(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_750(int iParam0, int iParam1)
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

bool func_751(int iParam0)
{
	if (func_602())
	{
		return false;
	}
	return func_871((*Global_1347702)[58]->f_15, 1);
}

int func_752(int iParam0)
{
	return iParam0->f_20;
}

int func_753(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_754(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_392(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_872(iParam0, 0);
		}
	}
}

bool func_755(var uParam0, int iParam1)
{
	return func_873(uParam0, iParam1);
}

void func_756()
{
	if (func_138(27))
	{
		func_761(27);
		func_706(Local_874[0], 0, 0);
		func_217(Local_874[0], 0, func_216(7));
	}
}

Vector3 func_757(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1) || !does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	iVar0[0] = 0;
	iVar0[1] = 21030;
	iVar0[2] = 34606;
	iVar0[3] = 53675;
	iVar0[4] = 37873;
	iVar0[5] = 22798;
	iVar0[6] = 54187;
	iVar0[7] = 46065;
	iVar0[8] = 45454;
	iVar0[9] = 65478;
	iVar0[10] = 33646;
	iVar0[11] = 6884;
	vVar17 = { 0f, 0f, 0f };
	vVar20 = { get_entity_coords(iParam0, true, false) };
	iVar13 = 0;
	while (iVar13 < iVar0)
	{
		vVar14 = { get_ped_bone_coords(iParam1, &(iVar0[iVar13]), 0f, 0f, 0f) };
		if (func_182(vVar17) || vdist2(vVar14, vVar20) < vdist2(vVar17, vVar20))
		{
			vVar17 = { vVar14 };
		}
		iVar13++;
	}
	return vVar17;
}

Vector3 func_758(vector3 vParam0, int iParam3, int iParam4)
{
	return func_344(vParam0, get_entity_coords(iParam3, true, false), iParam4);
}

void func_759(int iParam0)
{
	set_ped_accuracy(iParam0, 100);
	set_ped_combat_range(iParam0, 0);
	set_ped_combat_attributes(iParam0, 0, false);
	set_ped_combat_movement(iParam0, 1);
	set_combat_float(iParam0, 12, 0.2f);
}

bool func_760(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_761(int iParam0)
{
	clear_bit(&uLocal_447, iParam0);
}

Vector3 func_762(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9)
{
	_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, !is_string_null_or_empty(sParam3), sParam3, iParam7);
	func_70(&vVar0, 1, 10, 0);
	if (!bParam8)
	{
		task_follow_nav_mesh_to_coord(func_874(bParam9, 0, iParam0), vVar0, fParam4, iParam5, fParam6, 512, vVar0.f_3.f_2);
	}
	else
	{
		task_follow_nav_mesh_to_coord(func_874(bParam9, 0, iParam0), vVar0, fParam4, iParam5, fParam6, 1, vVar0.f_3.f_2);
	}
	return vVar0;
}

void func_763()
{
	func_706(Local_874[0], 1, 0);
	func_217(Local_874[0], 1, func_216(10));
	func_215(Local_874[0], 2, 0, 0);
}

int func_764()
{
	switch (&iLocal_867[0])
	{
		case 0:
			func_306(Global_35, &(uLocal_469[0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_MALE_POS", "RE_SAF_GRI_V2_MALE_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			break;
		case 1:
			func_306(Global_35, &(uLocal_469[0]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_MALE_NEG", "RE_SAF_GRI_V2_MALE_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			break;
	}
	return &(iLocal_867[0]);
}

void func_765(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

float func_766(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_767()
{
	func_706(Local_874[1], 1, 0);
	func_217(Local_874[1], 1, func_216(10));
	func_215(Local_874[1], 2, 0, 0);
}

int func_768()
{
	switch (&iLocal_867[1])
	{
		case 0:
			func_306(Global_35, &(uLocal_469[1]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_FEMALE_POS", "RE_SAF_GRI_V2_FEMALE_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			break;
		case 1:
			func_306(Global_35, &(uLocal_469[1]), func_201(iVar443 == 0, "RE_SAF_GRI_V1_FEMALE_NEG", "RE_SAF_GRI_V2_FEMALE_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			break;
	}
	return &(iLocal_867[1]);
}

bool func_769(int iParam0)
{
	if (!bVar1354)
	{
		if (iParam0 != -1)
		{
			func_311(&uLocal_1352);
			if (iParam0 == 0)
			{
				iLocal_1355 = 1;
			}
			if (iParam0 == 1)
			{
				iLocal_1356 = 1;
			}
			iLocal_1357 = 1;
			func_706(Local_874[1], 0, 0);
		}
		else if (!bVar1355)
		{
			if (func_310(&uLocal_838))
			{
				if (func_314(&uLocal_838, 15f))
				{
					if (func_345(Global_35, &(uLocal_469[1]), 7f, 1))
					{
						if (is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 1))
						{
							return true;
						}
					}
				}
			}
		}
	}
	else if (func_314(&uLocal_1352, 2f))
	{
		if (is_entity_playing_anim(&(uLocal_469[1]), "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 1))
		{
			iLocal_1357 = 0;
			return true;
		}
	}
	return false;
}

void func_770(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_393((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

void func_771()
{
	open_sequence_task(&iVar0);
	task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", func_876(1, func_875(&(uLocal_469[1]), Global_35, 1060437492)), 2f, -2f, -1, 16384, 0f, false, 0, false, 0, false);
	task_play_anim(0, "SCRIPT_RE@CAMPFIRE_MASSACRE", "WOMAN_CRY_IDLE", 2f, -2f, -1, 16385, 0f, false, 0, false, 0, false);
	func_45(&(uLocal_469[1]), &iVar0, 0, 0, 1, 1);
}

bool func_772()
{
	return uVar1355;
}

void func_773(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_774()
{
	return Global_40.f_11095.f_35;
}

bool func_775(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_776(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_777(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_877(bParam1);
	}
}

void func_778(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_779(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_780(int iParam0)
{
	if (!func_878(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_781(int iParam0, int iParam1, int iParam2)
{
	if (!func_878(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_782(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_783(int iParam0)
{
	return iParam0;
}

int func_784(int iParam0)
{
	if (!func_782(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_785()
{
	iVar0 = func_599();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_786(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_787(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_788()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_789(int iParam0, int iParam1, var uParam2)
{
	if (!func_787(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_790(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (((_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, bParam6, bParam7) && (!bParam5 || !is_entity_dead(iVar0))) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == *uParam0)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, iParam1);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, iParam2);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, 0);
	}
	return 0;
}

void func_791(int iParam0, int iParam1, int iParam2)
{
	task_whistle_anim(iParam0, iParam1, iParam2);
}

void func_792(int iParam0)
{
	if (func_354() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_353(func_879(iVar0), 0))
		{
			if (is_ped_group_member(func_879(iVar0), func_423(), 1))
			{
				func_880(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_793(int iParam0)
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

void func_794(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_881() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_881();
					}
					func_882(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_211(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_795(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_669(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_670(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_796(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_113(iParam0, 8192))
	{
		iVar0 = func_670(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_797(int iParam0, int iParam1)
{
	iVar0 = (func_398(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_798(int iParam0, vector3 vParam1)
{
	if (func_64(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_182(vParam1))
	{
		return;
	}
	if (!func_185(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_182(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_412(vVar2, vParam1, 1f, 1))
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

void func_799(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_829(iVar0, iParam0);
		iVar0++;
	}
}

int func_800(int iParam0)
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

void func_801(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_802(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_803(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	if (bParam1)
	{
		func_883(iParam0, 4);
		func_884(iVar0, 1);
		func_885(iVar0, 1);
	}
	else
	{
		func_886(iParam0, 4);
		func_885(iVar0, 0);
	}
}

bool func_804(int iParam0)
{
	return func_887(iParam0, 2);
}

int func_805(int iParam0)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_806(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_807()
{
	return Global_1894899 & 2 != 0;
}

bool func_808(var uParam0)
{
	return func_248(*uParam0, 1);
}

void func_809(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_888(iParam1))
		{
			func_889(iParam0, 41788943);
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
			func_890(iParam0, 0, 1);
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
			func_891(iParam0, 0);
			bVar0 = true;
		}
		func_892(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<4> func_810(bool bParam0)
{
	return func_662(1328661203, func_893(), -1591664384, bParam0);
}

struct<4> func_811(bool bParam0)
{
	iVar0 = func_819(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_662(923904168, func_810(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_662(923904168, func_810(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_662(923904168, func_810(bParam0), -740156546, 0);
}

bool func_812(int iParam0, bool bParam1)
{
	if (func_814(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_601(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_813(bool bParam0)
{
	iVar0 = func_819(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_662(271701509, func_810(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_662(271701509, func_810(bParam0), 12999093, 0);
}

int func_814(int iParam0)
{
	if (!func_782(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_815(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_814(iParam0);
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

bool func_816(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_819(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_817(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_782(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_662(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_819(bParam6), &Var0, 0);
	return uVar4;
}

bool func_818(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_819(0);
	*uParam1 = { func_662(iParam0, func_811(0), iParam3, 0) };
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

int func_819(bool bParam0)
{
	if (func_354() == -1)
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

bool func_820(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_821(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_822(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_894(iVar2))
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

int func_823(int iParam0)
{
	if (func_185(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_824(int iParam0)
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

int func_825(int iParam0, int iParam1)
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

bool func_826(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_827(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_828(int iParam0)
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

void func_829(int iParam0, int iParam1)
{
	if (!func_185(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_830(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_874((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_831(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_848((*uParam0)[iVar0]))
		{
			func_393((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_832(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_895(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_593((*uParam2)[iVar0]->f_6))
		{
			func_393((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_833(var uParam0)
{
	iVar0 = func_374(*uParam0);
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

int func_834(var uParam0, int iParam1)
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

void func_835(int* iParam0, int* iParam1)
{
	if (!func_686(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_393(iParam1, 19);
			func_850(iParam0, 23);
			func_896(iParam1, 2);
		}
	}
}

bool func_836(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_897(16))
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
					func_898(16);
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

void func_837(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_895(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_838(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_839(int iParam0)
{
	return (func_899(iParam0, 4) || func_899(iParam0, 5));
}

int func_840(int iParam0)
{
	return func_899(iParam0, 7);
}

int func_841(int iParam0)
{
	return func_899(iParam0, 6);
}

void func_842(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_848(iParam1))
		{
			clear_bit(iParam1, 14);
			func_895(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_843(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_900(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_901(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_803(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_803(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_902(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_844(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_903(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_904(iParam1, 1))
	{
		func_905(iParam1, 1);
		return true;
	}
	return false;
}

void func_845(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_340((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_846(int* iParam0, float fParam1, bool bParam2)
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

void func_847(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_848(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_849(int iParam0)
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

void func_850(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_851(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_852(int iParam0, int iParam1)
{
	if (func_354() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_853(int iParam0)
{
	if (func_354() != -1)
	{
		if (func_855(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_855(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_854(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_855(iParam0, 65536) && !func_855(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_855(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_855(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_855(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_856(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_857()
{
	return Global_1905944->f_5694;
}

bool func_858(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_859(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_745(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_906(iParam0);
	}
	return func_745(iParam0);
}

float func_860(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_861()
{
	iVar0 = func_468(func_467());
	iVar1 = func_907(func_467());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_862()
{
	if (func_908())
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

void func_863(var uParam0, var uParam1)
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

int func_864(int iParam0)
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

void func_865(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_211(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_112(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_866(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_867(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_868(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_868(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_869(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_870(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_871(int iParam0, bool bParam1)
{
	switch (func_909(iParam0))
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

void func_872(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_487(&(iParam0->f_18));
}

bool func_873(var uParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	return !is_string_null_or_empty(StackVal);
}

int func_874(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_875(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_910(iParam0, vVar0, iParam2);
}

var func_876(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MAN_TO_PLR_", 24);
			break;
		case 1:
			StringCopy(&cVar0, "WOMAN_TO_PLR_", 24);
			break;
		default:
			return func_239("[RESAF]", "GET_DIRECTIONAL_CRY_ANIMATION: Invalid ePedIndex");
	}
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "F", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			if (func_911(&(uLocal_469[0]), Global_35))
			{
				StringConCat(&cVar0, "BACK_L", 24);
			}
			else
			{
				StringConCat(&cVar0, "BACK_R", 24);
			}
			break;
	}
	return func_912(cVar0);
}

void func_877(bool bParam0)
{
	func_913(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_878(int iParam0, var uParam1)
{
	if (!func_914(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_879(int iParam0)
{
	if (!func_915(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_880(int iParam0, int iParam1)
{
	if (!func_916(iParam0))
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

int func_881()
{
	return &Global_1899515;
}

void func_882(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_917(*uParam0);
	iVar1 = func_918(*uParam0);
	iVar2 = func_919(*uParam0);
	iVar3 = func_468(*uParam0);
	iVar4 = func_907(*uParam0);
	iVar5 = func_920(*uParam0);
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
	iVar6 = func_921(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_921(iVar1, iVar0);
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
	func_922(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_883(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_884(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_887(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_885(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_886(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_887(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_888(int iParam0)
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

void func_889(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_923(iParam0, iParam1))
		{
			if (func_924(iParam0, iParam1))
			{
				if (func_925(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_926(iParam0);
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

void func_890(int iParam0, int iParam1, bool bParam2)
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

void func_891(int iParam0, bool bParam1)
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

void func_892(int iParam0, int iParam1)
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

struct<4> func_893()
{
	return Var0;
}

bool func_894(int iParam0)
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

void func_895(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_593(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_392(&(iParam1->f_6), 0, 1);
	}
	if (!func_593(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_848(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_927(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_593(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_902(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_928(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_929(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_802(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_928(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_803(iParam1->f_6, 0, 1);
				}
				else
				{
					func_803(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_896(int* iParam0, int iParam1)
{
	if (!func_391(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_393(iParam0, 14);
		}
	}
}

bool func_897(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_898(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_899(int iParam0, int iParam1)
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

bool func_900(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_901(int iParam0, bool bParam1)
{
	if (bParam1 && !func_593(iParam0))
	{
		return false;
	}
	return !func_887(iParam0, 4);
}

void func_902(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_593(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	func_928(iParam0, 18, 0, 1);
	func_928(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_903(int iParam0, bool bParam1)
{
	if (bParam1 && !func_593(iParam0))
	{
		return false;
	}
	iVar0 = func_632(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_904(int iParam0, bool bParam1)
{
	if (bParam1 && !func_593(iParam0))
	{
		return false;
	}
	iVar0 = func_632(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_905(int iParam0, bool bParam1)
{
	if (bParam1 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

var func_906(int iParam0)
{
	return iParam0->f_25;
}

int func_907(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_908()
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

int func_909(int iParam0)
{
	if (!func_481(iParam0))
	{
		return -1;
	}
	return func_930(iParam0);
}

int func_910(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_931(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_932(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_911(int iParam0, int iParam1)
{
	return func_933(iParam0, get_entity_coords(iParam1, true, false));
}

var func_912(char[4] cParam0, char[4] cParam1, char[4] cParam2)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_913(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_914(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_915(int iParam0)
{
	return iParam0 > -1;
}

bool func_916(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_917(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_704(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_918(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_919(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_920(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_921(int iParam0, int iParam1)
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

void func_922(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_934(uParam0, iParam6);
	func_935(uParam0, iParam5);
	func_936(uParam0, iParam4);
	func_937(uParam0, iParam3);
	func_938(uParam0, iParam2);
	func_939(uParam0, iParam1);
}

bool func_923(int iParam0, int iParam1)
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

bool func_924(int iParam0, int iParam1)
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

bool func_925(int iParam0, int iParam1)
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
	if (!func_923(iParam0, iVar0))
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

void func_926(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_927(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_887(iVar0, 2))
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
				func_940(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_928(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_929(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_593(iParam0))
	{
		return;
	}
	iVar0 = func_632(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_930(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_941(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

float func_931(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_932(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_933(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_932(vVar0, vVar3, vParam1);
}

void func_934(var uParam0, int iParam1)
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

void func_935(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_936(var uParam0, int iParam1)
{
	iVar0 = func_918(*uParam0);
	iVar1 = func_917(*uParam0);
	if (iParam1 < 1 || iParam1 > func_921(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_937(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_938(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_939(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_940(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_884(iParam0, 1);
	func_885(iParam0, 1);
	func_886(iParam0, 128);
}

int func_941(int iParam0)
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

