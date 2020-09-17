void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_576 = -1;
	sLocal_825 = "DROWN";
	if (has_force_cleanup_occurred(523))
	{
		iLocal_829 = 1;
	}
	if (!bVar827)
	{
		Local_101.f_3 = func_1(&vScriptParam_0);
		Local_101.f_43 = func_2();
		Local_101.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&Local_101, 1);
		func_5();
		func_6();
	}
	while (true)
	{
		func_8(bVar827, 947, 0);
		if (bVar827)
		{
			wait(0);
		}
		else
		{
			switch (iVar791)
			{
				case 0:
					if (func_9())
					{
						iLocal_793 = 1;
					}
					break;
				case 1:
					if (func_10(&Local_101, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_11(&Local_101, &uLocal_370, &(Local_101.f_51.f_4));
						func_13(&Local_101, uVar368, 1905);
						func_14(&uLocal_577);
						func_15(Local_101.f_51, 15f, 1, 0, 0, 0, 0);
						iLocal_793 = 3;
					}
					else if (Local_101.f_160)
					{
						func_7();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17();
						func_18();
						func_19();
						func_20();
						func_21();
						func_22(uLocal_859[0], Local_101.f_51, 1.5f, 0, 0);
						func_23(uLocal_862[0], Local_101.f_51, 1.5f);
						func_22(uLocal_859[1], _get_object_offset_from_coords(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f, 0, 0);
						func_23(uLocal_862[1], _get_object_offset_from_coords(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f);
						func_24();
						if (!func_25(*Local_88[0]))
						{
							func_26(Local_101.f_51, &Local_88, 0, 0, 0, -1, 0);
						}
						else if (Local_88[0]->f_7 == 0)
						{
						}
						else
						{
							set_model_as_no_longer_needed(Local_88[0]->f_7);
						}
						iLocal_793 = 4;
					}
					break;
				case 4:
					if (!func_27(&Local_101, &uLocal_410, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (!Local_101.f_46)
					{
						func_28(&Local_295, uLocal_413[0], 0);
						if (func_29())
						{
							func_30(&uLocal_400, 2);
						}
						if (((func_31() || func_32(1056964608)) || func_33(iVar398, 2)) || func_33(iVar401, 256))
						{
							func_34(uLocal_413[0]);
							Local_101.f_46 = 1;
							if (iVar792 != 16384)
							{
								iLocal_371 = 6;
							}
							else
							{
								func_35();
								iLocal_371 = 7;
							}
						}
					}
					if (func_36())
					{
						Local_101.f_50 = 1;
						func_7();
					}
					if (func_37(&Local_101, &uLocal_410, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0) || func_38())
					{
						func_7();
					}
					break;
			}
			wait(Local_101.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899->f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_39(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_40("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5()
{
	if (func_41() == 10)
	{
		iLocal_17 = 1;
	}
	else
	{
		iLocal_17 = 0;
	}
}

void func_6()
{
	func_39(&(Local_101.f_5));
	func_42(&(Local_101.f_5), 1);
	func_43(&(Local_101.f_5), 0);
	func_44(&(Local_101.f_5), 10f);
	func_45(&(Local_101.f_5), 30);
	func_46(&(Local_101.f_5), 10f);
	func_47(&(Local_101.f_5), 1);
	func_48(&(Local_101.f_5), 0);
	func_42(&uLocal_796, 1);
	func_49(&uLocal_796, 0);
	func_50(&uLocal_796, 0);
	func_43(&uLocal_796, 0);
	func_44(&uLocal_796, 10f);
}

void func_7()
{
	if ((func_51(&(uLocal_410[1]), 0, 1) || func_33(iVar398, 524288)) || get_ped_config_flag(&(uLocal_410[1]), 11, true))
	{
		if (func_33(iVar398, 1024))
		{
			if (func_52())
			{
				func_53(87, iLocal_17, 3, 0, 95866989);
			}
			else
			{
				func_53(87, iLocal_17, 3, 0, 0);
			}
			func_54(106, 1, 0, 0, 12, 0, 0, 1);
			func_54(113, 1, 0, 0, 12, 0, 0, 1);
		}
	}
	if (func_33(iVar400, 32768))
	{
		_0x660a8f876df1d4f8(39);
	}
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		set_ped_can_play_gesture_anims(&(uLocal_410[0]), 1, 1);
	}
	if (iVar825 != 0)
	{
		if (_0x1ff441d7954f8709(iVar825))
		{
			_0xd2b9c78537ed5759(iVar825);
		}
	}
	func_56(&Local_101, &uLocal_410, &uLocal_413, iLocal_17, uVar368, func_55(&Local_101), 0, 1, 0, 1);
	remove_shocking_event(iVar831);
	remove_shocking_event(iVar832);
	remove_shocking_event(iVar833);
	remove_shocking_event(iVar834);
	func_57(Local_80);
	func_58();
	func_59(uLocal_859[0], 1);
	func_59(uLocal_862[0], 1);
	func_59(uLocal_859[1], 1);
	func_59(uLocal_862[1], 1);
	func_60(1024);
	remove_ptfx_asset();
	terminate_this_thread();
}

void func_8(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_61(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_9()
{
	switch (iVar790)
	{
		case 0:
			if (func_62(&Local_101))
			{
				iLocal_422 = func_2();
				if (iVar420 == -1)
				{
				}
				else
				{
					if (iVar420 == 76)
					{
					}
					else if (iVar420 == 105)
					{
					}
					func_63();
					func_64(&Local_305);
					func_65();
					func_66();
					func_67();
					func_68(&Local_88);
					request_ptfx_asset();
					request_model(199641577, false);
					func_69();
					iLocal_792 = 1;
				}
			}
			break;
		case 1:
			if (!func_70(&uLocal_791, uVar823))
			{
				return false;
			}
			if (!func_71(&Local_88))
			{
				return false;
			}
			if (!func_72(&Local_305))
			{
				return false;
			}
			if (!has_ptfx_asset_loaded())
			{
				return false;
			}
			if (!has_model_loaded(199641577))
			{
				return false;
			}
			if (!func_73())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_10(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_74(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_75(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_76(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_77(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_78(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 7:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
	}
}

Vector3 func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 11.01f;
				case 1:
					return 0f, 0f, 20f;
				case 2:
					return 0f, 0f, -144.98f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 24.45f;
				case 1:
					return 0f, 0f, 172f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 15.32f;
				case 1:
					return 0f, 0f, 65.77f;
				case 2:
					return 0f, 0f, -19.73f;
				case 3:
					return 0f, 0f, -16.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_13(var uParam0, var uParam1, int iParam2)
{
	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_14(var uParam0)
{
	uParam0->f_190 = 1;
	uParam0->f_182 = 1;
	if (iVar419 == 76)
	{
		if (iLocal_17 == 0)
		{
			StringCopy(&(uParam0->f_34), "RE_DM_VAL_V1_THANKS", 64);
			StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
			StringCopy(&(uParam0->f_10), "LINE01_VICTIM", 64);
		}
	}
	else if (iVar419 == 105)
	{
		StringCopy(&(uParam0->f_34), "RE_DM_RHD_V1_THANKS_ALT", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE03_VICTIM", 64);
	}
	else
	{
		StringCopy(&(uParam0->f_34), "RE_DM_VAL_V2_DROWN_THANKS", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE02_VICTIM", 64);
	}
	func_79(&(uParam0->f_2), &uLocal_18);
	uParam0->f_72 = func_80(Local_101.f_3);
}

void func_15(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_16()
{
	switch (iVar822)
	{
		case 0:
			iLocal_824 = 1;
			break;
		case 1:
			if (!func_81(Local_101.f_51, Local_101.f_51.f_3, &Local_305, &uLocal_410, 0, 0, -1, 1))
			{
				return false;
			}
			Local_80 = _create_anim_scene(Local_80.f_4, 64, "pblAll", false, true);
			iLocal_824 = 6;
			break;
		case 6:
			if (func_82())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	if (func_51(&(uLocal_410[1]), 0, 1))
	{
		_request_ped_emotional_preset(&(uLocal_410[1]), "Default_Angry");
	}
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		_request_ped_emotional_preset(&(uLocal_410[0]), "Default_Angry");
	}
}

void func_18()
{
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		set_ped_can_be_targetted(&(uLocal_410[0]), false);
		func_83(&(uLocal_410[0]), 1);
		set_ped_can_play_gesture_anims(&(uLocal_410[0]), 0, 1);
		set_ped_config_flag(&(uLocal_410[0]), 245, true);
	}
	if (func_51(&(uLocal_410[1]), 0, 1))
	{
		func_84(&(uLocal_410[1]), -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
		func_84(&(uLocal_410[1]), -618550132, -1, 0, 0, 1056964608, 1065353216, 0);
		set_entity_is_target_priority(&(uLocal_410[1]), true, 0f);
		add_relationship_group("m_relAttacker", &uLocal_865);
		set_ped_relationship_group_hash(&(uLocal_410[1]), iVar863);
		set_relationship_between_groups(4, iVar863, 1862763509);
		set_relationship_between_groups(4, 1862763509, iVar863);
		func_85(&(uLocal_410[1]), 0);
		func_83(&(uLocal_410[1]), 1);
		set_current_ped_weapon(&(uLocal_410[1]), -1569615261, true, 0, false, false);
		set_ped_config_flag(&(uLocal_410[1]), 249, true);
		set_ped_config_flag(&(uLocal_410[1]), 233, true);
		set_ped_config_flag(&(uLocal_410[1]), 245, true);
	}
	func_86();
	func_87(&(uLocal_410[0]), &Local_101, 0);
	func_87(&(uLocal_410[1]), &Local_101, 0);
}

void func_19()
{
	switch (func_41())
	{
		case 9:
			break;
		case 11:
			switch (Local_101.f_51.f_4)
			{
				case 0:
					*Local_88[0] = { 1435.678f, -1296.653f, 76.32323f };
					break;
			}
			break;
	}
}

void func_20()
{
	_0xa46e98bdc407e23d(Local_101.f_171, 4f, 4f, 3f);
	if (get_distance_between_coords(Local_101.f_51, vLocal_382, true) > 25f)
	{
		if (iLocal_17 == 0 && (Local_101.f_51.f_4 == 0 || Local_101.f_51.f_4 == 1))
		{
			if (Local_101.f_51.f_4 == 0)
			{
				func_88(&uLocal_416, &uLocal_417, -313.654f, 832.029f, 118.494f, 0f, 0f, 9f, 25f, 25f, 25f, 1, 0, 1, 0, 0);
			}
			else
			{
				func_88(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 20f, 30f, 30f, 30f, 1, 0, 1, 0, 0);
			}
		}
		else
		{
			func_88(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 0f, 25f, 25f, 25f, 0, 0, 1, 0, 0);
		}
	}
}

void func_21()
{
	if (_does_volume_exist(iVar417))
	{
		return;
	}
	if (iVar420 == 76)
	{
		iLocal_419 = _create_volume_aggregate();
		_0x39816f6f94f385ad(iVar417, -278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f);
		_0x39816f6f94f385ad(iVar417, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
		_0x39816f6f94f385ad(iVar417, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
		vLocal_376 = { _0xf70f00013a62f866(iVar417) };
	}
	else if (iVar420 == 105)
	{
		vLocal_376 = { 1357.908f, -1304.094f, 77.4f };
		iLocal_419 = _create_volume_box(vLocal_376, 0f, 0f, -20f, 11.367f, 15.188f, 8.228f);
	}
}

void func_22(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_89(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_23(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_89(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_24()
{
	set_anim_scene_origin(Local_80, Local_101.f_51, 0f, 0f, Local_101.f_51.f_3, 2);
	func_90(Local_101.f_51, 25f, 0);
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		set_anim_scene_entity(Local_80, "PED_VICTIM", &(uLocal_410[0]), 0);
	}
	if (func_51(&(uLocal_410[1]), 0, 1))
	{
		set_anim_scene_entity(Local_80, "PED_BADGUY", &(uLocal_410[1]), 0);
	}
	if (!is_string_null_or_empty(Local_80.f_4))
	{
		if (!_is_anim_scene_loaded(Local_80, true, false))
		{
			load_anim_scene(Local_80);
		}
	}
}

bool func_25(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_26(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_33((*iParam3)[iVar0]->f_11, 16))
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
					if (func_33((*iParam3)[iVar0]->f_11, 64))
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
					if (!func_33((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_33((*iParam3)[iVar0]->f_11, 128))
					{
						func_91(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_33((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_25((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_33((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_92((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_33((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_33((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_33((*iParam3)[iVar0]->f_11, 32))
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

bool func_27(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_94(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_95(&(uParam0->f_5));
			}
			func_96(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_97(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
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
					func_100(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_101(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_76(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_102(uParam0, uParam1[0]);
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

void func_28(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_103(0)) || (get_game_timer() - iParam0->f_7) > 3500)
		{
			if (does_blip_exist(*iParam0))
			{
				remove_blip(iParam0);
			}
			if (!func_25(iParam0->f_3))
			{
				*uParam1 = _blip_add_for_coord(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!is_entity_dead(iParam0->f_6))
			{
				*uParam1 = _blip_add_for_entity(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!is_string_null_or_empty(iParam0->f_9))
				{
					set_blip_name_from_text_file(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

bool func_29()
{
	if (!Local_101.f_48)
	{
		return false;
	}
	if (!func_104())
	{
		return false;
	}
	if (&Local_101.f_98[1] < 2.25f || (func_51(Global_1935630->f_41, 0, 1) && func_105(&(uLocal_410[1]), Global_1935630->f_41, 1, 1) < 2.25f))
	{
		return true;
	}
	return false;
}

void func_30(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

int func_31()
{
	if (iVar835 == 0)
	{
		if (func_107(&(uLocal_410[1]), 0, &(Local_101.f_5), &uLocal_794, 0, &(Local_101.f_98[1])))
		{
			return 1;
		}
	}
	else if (func_107(&(uLocal_410[0]), 0, &uLocal_796, &uLocal_795, 0, &(Local_101.f_98[0])))
	{
		return 1;
	}
	iLocal_837 = iVar835 + 1;
	if (iVar835 > 1)
	{
		iLocal_837 = 0;
	}
	return 0;
}

int func_32(float fParam0)
{
	if (!Local_101.f_48)
	{
		return 0;
	}
	if (!func_33(iVar397, 2048))
	{
		if (_does_anim_scene_exist(Local_80) && _is_anim_scene_started(Local_80, false))
		{
			if (&Local_101.f_98[1] < fParam0 || &Local_101.f_98[0] < fParam0)
			{
				return 1;
			}
			if (iVar368 > 1)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (func_51(Global_1935630->f_41, 0, 1))
					{
						if (func_105(Global_1935630->f_41, &(uLocal_410[1]), 1, 1) < fParam0 || func_105(Global_1935630->f_41, &(uLocal_410[0]), 1, 1) < fParam0)
						{
							vVar0 = { get_entity_coords(Global_1935630->f_41, true, false) };
							if (!func_25(vVar0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_34(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_35()
{
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		task_smart_flee_ped(&(uLocal_410[0]), Global_35, 1000f, -1, 1, 1077936128, 0);
		set_ped_keep_task(&(uLocal_410[0]), true);
	}
	if (!func_33(iVar398, 2048))
	{
		if (func_51(&(uLocal_410[1]), 0, 1))
		{
			task_smart_flee_ped(&(uLocal_410[1]), Global_35, 1000f, -1, 0, 1077936128, 0);
			set_ped_keep_task(&(uLocal_410[1]), true);
		}
	}
}

bool func_36()
{
	func_108();
	func_109();
	func_110();
	if (iVar369 > 1)
	{
		func_111();
	}
	func_112(&(uLocal_410[1]));
	func_113(&(uLocal_410[1]));
	func_114();
	func_115();
	func_116();
	if (!Local_101.f_46)
	{
		if (_does_anim_scene_exist(Local_80) && _is_anim_scene_started(Local_80, false))
		{
			func_82();
		}
	}
	switch (iVar369)
	{
		case 0:
			if (_is_anim_scene_loaded(Local_80, true, false) && func_117())
			{
				start_anim_scene(Local_80);
				_set_anim_scene_playback_list_bool(Local_80, "pblAll", true);
				iLocal_371 = 1;
			}
			break;
		case 1:
			if ((func_118(&Local_101, 0.75f, 60f, 20f, 1, 0, 0, -1082130432, 1, 1125515264, 0, 0) || &Local_101.f_98[1] < 45f) || &Local_101.f_98[0] < 45f)
			{
				_0x0d7fd6a55fd63aef(39, 3, 0);
				func_30(&uLocal_402, 32768);
				if (iVar368 == 9 || iVar368 == 11)
				{
					func_119();
				}
				else if (iVar368 == 10)
				{
					set_ped_config_flag(&(uLocal_410[1]), 6, true);
				}
				func_120(-998484125, 1114636288, 1101004800, 1108082688, -1082130432);
				func_121(1891783641, Local_101.f_51, 1);
				func_122();
				func_123(&Local_295, &(uLocal_410[0]), uLocal_413[0], 0f, 0f, 0f, 1065353216, 1, 5);
				Local_295.f_9 = "RE_INTER_STRANGER";
				func_124(&uLocal_838);
				func_99(&(Local_101.f_121));
				iLocal_371 = 2;
			}
			break;
		case 2:
			if (!bVar826)
			{
				if (((func_51(&(uLocal_410[0]), 0, 1) && !is_scripted_speech_playing(&(uLocal_410[0]))) && func_118(&Local_101, 1f, 50f, 35f, 1, 0, 0, -1082130432, 1, 1125515264, 0, 0)) && !func_125(Global_35, 1))
				{
					if (iVar420 == 76 && iLocal_17 == 0)
					{
					}
					else
					{
						func_126();
					}
					func_124(&uLocal_850);
					func_30(&uLocal_400, 1);
					iLocal_371 = 3;
				}
				else if (func_127(&uLocal_838) > 6f)
				{
					func_126();
				}
			}
			else
			{
				iLocal_371 = 4;
			}
			break;
		case 3:
			if (iLocal_17 == 1)
			{
				func_128();
				func_129();
				func_130();
				if (!_is_anim_scene_started(Local_80, false))
				{
					func_131();
					func_132();
					iLocal_371 = 5;
				}
			}
			else if (iLocal_17 == 0)
			{
				func_133();
				if (has_anim_event_fired(&(uLocal_410[0]), -647428130))
				{
					func_34(uLocal_413[0]);
					func_134();
				}
			}
			if (func_33(iVar398, 1024))
			{
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (func_33(iVar398, 4096))
			{
				func_132();
				func_131();
				iLocal_371 = 5;
			}
			break;
		case 5:
			if (iLocal_17 == 1)
			{
				func_129();
				func_130();
				func_135(5f, 1);
				if (&Local_101.f_98[0] > 40f && !_is_anim_scene_started(Local_80, false))
				{
					return true;
				}
			}
			else if (iLocal_17 == 0)
			{
				if (&Local_101.f_98[1] > 40f && !_is_anim_scene_started(Local_80, false))
				{
					if (func_52())
					{
						func_53(87, iLocal_17, 3, 0, 95866989);
					}
					else
					{
						func_53(87, iLocal_17, 3, 0, 0);
					}
					return true;
				}
			}
			break;
		case 6:
			Local_101.f_46 = 1;
			iLocal_372[1] = 9;
			iLocal_372[0] = 9;
			func_136(&(uLocal_410[0]), 0);
			func_136(&(uLocal_410[1]), 0);
			func_137();
			func_138();
			if (func_33(iVar398, 2))
			{
				if (func_104())
				{
					if (func_139(10f) && !func_33(iVar398, 1024))
					{
						iLocal_576 = 8;
					}
					else
					{
						func_138();
					}
				}
			}
			else
			{
				func_138();
			}
			if (iVar574 != -1)
			{
				set_anim_scene_bool(Local_80, "action", true, false);
				_set_anim_scene_playback_list_bool(Local_80, func_140(iVar574), true);
			}
			else
			{
				remove_anim_scene_entity(Local_80, "objTrough", uVar824);
			}
			if (func_33(iVar398, 2048))
			{
				func_30(&uLocal_400, 131072);
				iLocal_371 = 9;
			}
			else
			{
				iLocal_371 = 7;
				Jump @1678; //curOff = 1091
				func_141();
				if (func_33(iVar398, 64))
				{
					if (_0x3ec28da1ffac9ddd(&(uLocal_410[0]), Global_35, 1, 1))
					{
						func_142(&(uLocal_410[0]));
					}
					iLocal_371 = 8;
				}
				if (!func_33(iVar398, 16))
				{
					if (_0xcb690f680a3ea971(Global_35, 4))
					{
						set_ped_config_flag(&(uLocal_410[1]), 249, false);
						set_current_ped_weapon(&(uLocal_410[1]), get_best_ped_weapon(&(uLocal_410[1]), false, false), false, 0, false, false);
						func_143(&(uLocal_410[1]), 1101004800, 1103626240, 1103626240, -1082130432);
						func_30(&uLocal_400, 16);
					}
				}
				Jump @1678; //curOff = 1245
				func_141();
				if (!get_is_task_active(&(uLocal_410[0]), 3) || func_33(iVar398, 262144))
				{
					if (get_script_task_status(&(uLocal_410[0]), 2121492476, true) != 1 && get_script_task_status(&(uLocal_410[0]), 2121492476, true) != 0)
					{
						if (func_33(iVar398, 65536) || func_51(&(uLocal_410[1]), 2, 1))
						{
							stop_current_playing_ambient_speech(&(uLocal_410[0]), 0);
							stop_current_playing_speech(&(uLocal_410[0]), 0);
							func_132();
							func_144();
							iLocal_371 = 9;
						}
						else
						{
							if (func_145(&(uLocal_410[0]), uLocal_413[0], Global_35, &uLocal_790, &uLocal_577, &Local_101))
							{
								func_132();
								func_146(&uLocal_844);
								set_ped_can_play_gesture_anims(&(uLocal_410[0]), 1, 1);
								func_30(&uLocal_400, 256);
								func_147(13, 0, 0, "RE_HONOR_SAVED_VICTIM", &(uLocal_410[0]), 0, 1065353216, 0);
								iLocal_371 = 9;
							}
							Jump @1678; //curOff = 1490
							if (!func_33(iVar398, 65536))
							{
								if (does_entity_exist(&(uLocal_410[0])))
								{
									func_141();
									if (func_107(&(uLocal_410[0]), 0, &uLocal_796, &uLocal_795, 0, 0))
									{
										func_30(&uLocal_400, 65536);
									}
								}
							}
							if (func_148(&uLocal_844))
							{
								if (func_127(&uLocal_844) > 0.5f)
								{
									func_149(&(uLocal_410[0]), "SCREAM_SHOCKED", -1454469014, 0, 1, 0, 0, 1);
									func_146(&uLocal_844);
								}
							}
							if (&Local_101.f_98[0] > 35f)
							{
								if (!func_51(&(uLocal_410[1]), 0, 0))
								{
									return true;
								}
								else if (&Local_101.f_98[1] > 35f)
								{
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

int func_37(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_150())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return 1;
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
			else if (func_151(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_76(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_76(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_76(uParam0->f_3, 2) || iParam12 == 1)
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
					return 1;
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
				if (func_152(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_152(Global_36, vVar1) > fVar0)
				{
					return 1;
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
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

int func_38()
{
	if (Local_101.f_48)
	{
		if (func_153())
		{
			return 1;
		}
	}
	return 0;
}

void func_39(var uParam0)
{
	func_42(uParam0, 0);
	func_47(uParam0, 0);
	func_49(uParam0, 1);
	func_154(uParam0, 1);
	func_155(uParam0, 0);
	func_48(uParam0, 1);
	func_156(uParam0, 1, 1, 1);
}

var func_40(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_157(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_158(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_157(sVar0, iParam1, 0, 0, 1, 1);
}

int func_41()
{
	return Global_1897952->f_41;
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 16384);
	}
	else
	{
		func_96(&(uParam0->f_1), 16384);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 1024);
	}
	else
	{
		func_96(&(uParam0->f_1), 1024);
	}
}

void func_44(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 2048);
	}
	else
	{
		func_96(&(uParam0->f_1), 2048);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 256);
	}
	else
	{
		func_159(iParam0, 256);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 256);
	}
	else
	{
		func_96(&(uParam0->f_1), 256);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 4);
	}
	else
	{
		func_96(&(uParam0->f_1), 4);
	}
}

bool func_51(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_160(iParam0, iParam1);
}

bool func_52()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 != 0)
	{
		iVar0 = get_entity_model(iParam3);
		if (iVar0 != 0)
		{
			func_162(iParam0, iParam1, iVar0);
			func_164(iParam0, iParam1, func_163(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_162(iParam0, iParam1, iParam4);
		func_164(iParam0, iParam1, func_163(iParam3));
	}
	func_165(iParam0, iParam1, iParam2);
	func_167(iParam0, iParam1, func_166(1));
	func_169(iParam0, iParam1, func_168());
}

void func_54(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_170(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_161() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_55(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_56(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_171(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_172(uParam0->f_3, 524288);
		}
	}
	if (func_51(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_51(uParam1[iVar0], 0, 0))
			{
				func_173(uParam1[iVar0], bVar3);
				if (func_174(uParam0, (*uParam1)[iVar0]))
				{
					func_175((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_51(uParam1[iVar0], 0, 1))
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
							func_177(uParam1[iVar0], 1073741824, func_176(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_178(uParam0);
	}
	func_179(uParam0);
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_180(uParam0->f_3, uParam0->f_185);
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
		func_181(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_57(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (_does_anim_scene_exist(Param0))
	{
		_delete_anim_scene(Param0);
	}
	if (_does_anim_scene_exist(Param0.f_1))
	{
		_delete_anim_scene(Param0.f_1);
	}
	if (_does_anim_scene_exist(Param0.f_2))
	{
		_delete_anim_scene(Param0.f_2);
	}
	if (_does_anim_scene_exist(Param0.f_3))
	{
		_delete_anim_scene(Param0.f_3);
	}
}

void func_58()
{
	func_182(&uLocal_416, &uLocal_417);
	func_182(&uLocal_418, &uLocal_420);
}

void func_59(var uParam0, int iParam1)
{
	if (func_183(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_60(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_61(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_184(iVar0))
	{
		return false;
	}
	if (func_185(iVar0, 1) || func_185(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_62(var uParam0)
{
	iVar0 = func_186(uParam0->f_3);
	iVar1 = func_187(1);
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

void func_63()
{
	func_188(&(Local_305[0]->f_22));
	func_188(&(Local_305[1]->f_22));
	switch (iVar420)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0]->f_1 = 239173857;
					Local_305[0] = 5;
					StringCopy(&(Local_305[0]->f_23), "0546_A_F_M_Civ_White_15", 64);
					Local_305[0]->f_3 = 1056682093;
					Local_305[1]->f_1 = -1360462387;
					Local_305[1] = 22;
					StringCopy(&(Local_305[1]->f_23), "0585_A_M_M_Civ_White_09", 64);
					Local_305[1]->f_3 = -1645688396;
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0]->f_1 = 239173857;
					Local_305[0] = 5;
					StringCopy(&(Local_305[0]->f_23), "0537_A_F_M_Civ_White_06", 64);
					Local_305[0]->f_3 = 311089032;
					Local_305[1]->f_1 = -1360462387;
					Local_305[1] = 22;
					StringCopy(&(Local_305[1]->f_23), "0677_A_M_M_RhdTownfolk_02_WHITE_01", 64);
					Local_305[1]->f_3 = -806572609;
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					Local_305[0]->f_1 = 239173857;
					Local_305[0] = 5;
					StringCopy(&(Local_305[0]->f_23), "0863_A_F_M_Civ_Poor_White_AVOID_01", 64);
					Local_305[0]->f_3 = -555691071;
					Local_305[1]->f_1 = -1360462387;
					Local_305[1] = 22;
					StringCopy(&(Local_305[1]->f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
					Local_305[1]->f_3 = -175048441;
					break;
			}
			break;
	}
}

void func_64(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_189(&((*iParam0)[iVar0]->f_1));
		func_189(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_65()
{
	Local_67[0] = "script_re@drown_murder@drowned";
	Local_67[0]->f_1 = "brkout_female_v1_victim";
	func_79(&(Local_67[0]), &uLocal_18);
	Local_67[1] = "script_re@drown_murder@escape";
	Local_67[1]->f_1 = "brkout_male_attacker";
	func_79(&(Local_67[1]), &uLocal_18);
	Local_67[2] = "script_re@drown_murder@drowned";
	Local_67[2]->f_1 = "quick_drown_attacker";
	Local_67[3] = "script_re@drown_murder@drowned";
	Local_67[3]->f_1 = "quick_drown_victim";
	Local_67[4] = "script_re@drown_murder@drowned";
	Local_67[4]->f_1 = "quick_drown_trough";
	func_79(&(Local_67[2]), &uLocal_18);
}

void func_66()
{
	switch (iLocal_17)
	{
		case 0:
			Local_80.f_4 = "script@beat@town@drownMurder@drown";
			break;
		case 1:
			Local_80.f_4 = "script@beat@town@drownMurder@fightback";
			break;
	}
}

void func_67()
{
	Local_88[0]->f_7 = 1935100224;
	func_30(&(Local_88[0]->f_11), 8);
	func_30(&(Local_88[0]->f_11), 2);
	Local_88[0]->f_10 = 0;
}

void func_68(var uParam0)
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

void func_69()
{
	switch (func_2())
	{
		case 76:
			_request_scenario_type(830847823, 15, 0, 0);
			_request_scenario_type(2087366558, 15, 0, 0);
			break;
		case 105:
			_request_scenario_type(-719188272, 15, 0, 0);
			_request_scenario_type(2087366558, 15, 0, 0);
			break;
		case 92:
			_request_scenario_type(-22664287, 15, 0, 0);
			break;
	}
}

bool func_70(var uParam0, var uParam1)
{
	return true;
}

bool func_71(var uParam0)
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

bool func_72(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_190((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_73()
{
	switch (func_2())
	{
		case 76:
			if (_has_scenario_type_loaded(830847823, false) && _has_scenario_type_loaded(2087366558, false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 105:
			if (_has_scenario_type_loaded(-719188272, false) && _has_scenario_type_loaded(2087366558, false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 92:
			if (_has_scenario_type_loaded(-22664287, false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
	}
	return false;
}

int func_74(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_191(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_192(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_97(iParam0, 128))
			{
				if (!func_193(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_194(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_195(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_25(*uParam1))
				{
					return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_197(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_192(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_198(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_199(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_200(vdist(Global_36, *uParam1), iParam0))
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
			if (func_97(iParam0, 128))
			{
				if (!func_201(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_194(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_198(uParam1))
					{
						return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_202(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_192(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_40("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_40("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	if (func_76(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_203(iParam1, func_55(uParam0), &(uParam0->f_172)))
		{
			if (func_51(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_76(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_77(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_76(uParam0->f_3, 1) && !func_76(uParam0->f_3, 32))
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_76(uParam0->f_3, 2) && !func_76(uParam0->f_3, 32))
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_206(uParam0->f_171, 1);
	}
	if (func_76(uParam0->f_3, 1))
	{
		func_205(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_207(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_78(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_79(char* sParam0, var uParam1)
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

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
			return 50;
		case 2:
			return 30;
		case 3:
			return 60;
		case 4:
			return 60;
		case 10:
			return 50;
		case 79:
			return 50;
		case 14:
			return 50;
		case 80:
			return 50;
		case 82:
			return 50;
		case 87:
			return 50;
		case 90:
			return 50;
		case 27:
			return 50;
		case 28:
			return 60;
		case 31:
			return 50;
		case 32:
			return 50;
		case 33:
			return 50;
		case 34:
			return 50;
		case 37:
			return 30;
		case 97:
			return 30;
		case 38:
			return 30;
		case 39:
			return 30;
		case 40:
			return 30;
		case 100:
			return 30;
		case 102:
			return 30;
		case 45:
			return 50;
		case 48:
			return 50;
		case 49:
			return 50;
		case 50:
			return 50;
		case 106:
			return 60;
		case 107:
			return 60;
		case 54:
			return 60;
		case 109:
			return 50;
		case 62:
			return 50;
		case 115:
			return 50;
		case 119:
			return 50;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_81(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_208() || !func_209((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_82()
{
	iVar0 = 1;
	if (_is_anim_scene_loaded(Local_80, true, false))
	{
		if (!_0x23e33cb9f4a3f547(Local_80, "pblAll"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblAll");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutBack"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutBack");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutBackV2"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutBackV2");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutFront"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutFront");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutFrontV2"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutFrontV2");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutLeft"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutLeft");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutLeftV2"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutLeftV2");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutRight"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutRight");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblBreakoutRightV2"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblBreakoutRightV2");
			iVar0 = 0;
		}
		if (!_0x23e33cb9f4a3f547(Local_80, "pblQuickKill"))
		{
			_0xdf7b5144e25cd3fe(Local_80, "pblQuickKill");
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_83(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 138, bParam1);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_210(iParam3, 1);
	bVar1 = func_210(iParam3, 2);
	bVar2 = !func_210(iParam3, 4);
	bVar3 = func_210(iParam3, 8);
	bVar4 = !func_210(iParam3, 16);
	bVar5 = func_210(iParam3, 32);
	bVar6 = func_210(iParam3, 64);
	return func_211(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_85(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_212(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_86()
{
	Local_423 = { 0f, 0f, 0f };
	Local_423.f_3 = Global_35;
	Local_423.f_8 = 4;
	Local_423.f_19 = 4;
	Local_423.f_20 = 4;
	Local_423.f_21 = 4;
	Local_423.f_22 = 4;
	Local_423.f_17 = 4;
	Local_423.f_18 = 4;
	Local_423.f_7 = 7000;
}

int func_87(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_213(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_88(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_214(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_215(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_216(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_217(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = _0x4c39c95ae5db1329(*uParam0, 0, 15);
		}
	}
}

void func_89(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_183(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_183(uParam0))
		{
		}
	}
}

void func_90(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 32768;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_91(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_218(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_92(float fParam0)
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

void func_93(var uParam0, int iParam1)
{
	vVar0 = { func_219(uParam0) };
	iVar3 = func_180(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_94(var uParam0, var uParam1)
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

void func_95(var uParam0)
{
	func_49(uParam0, 1);
	func_45(uParam0, 20);
}

void func_96(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_97(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_98(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_204(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_220())
	{
		func_221(1);
	}
	func_222(iParam2, uParam0->f_43);
	func_223(iParam2, 0, 0, 0, 0);
	if (func_224(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_171(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_225(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_99(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_100(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_226())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_97(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_227(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_228(uParam0, bVar0);
		func_229(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_230(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
		}
	}
}

bool func_101(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_76(uParam2->f_3, 1))
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
			if (func_231())
			{
				fVar0 = 15f;
			}
		}
		if (func_232(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_233(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_232(uParam2, fVar1))
		{
			if (!func_234((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_235(uParam2->f_3, 2) && func_236(2))
		{
			return false;
		}
		if (func_76(iParam0, 4194304) || func_76(iParam0, 33554432))
		{
			if (func_237(1))
			{
				return false;
			}
		}
	}
	if (func_238(Global_35))
	{
		return false;
	}
	if (func_239(0, 1, 1) && !func_240(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_76(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_125(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_233(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_241())
		{
			return false;
		}
		iVar2 = func_242(func_2());
		if (func_243(iVar2))
		{
			if (func_244(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_245(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_246(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_102(var uParam0, int iParam1)
{
	if (func_247(uParam0->f_51))
	{
		func_248(uParam0->f_51, 0);
		fVar0 = func_249(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_250());
		bVar1 = func_176(!func_76(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_252(iVar2, func_251(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_103(float fParam0)
{
	return !func_253(fParam0, 1, 0, 0);
}

bool func_104()
{
	if (does_entity_exist(&(uLocal_410[0])))
	{
		if (has_anim_event_fired(&(uLocal_410[0]), 243556862))
		{
			if (!func_33(iVar398, 512))
			{
				set_ped_wetness_enabled_this_frame(&(uLocal_410[0]));
				set_ped_wetness_height(&(uLocal_410[0]), 2f);
				func_30(&uLocal_400, 512);
			}
			return true;
		}
	}
	return false;
}

float func_105(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_107(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_254(iParam2, 1, iVar0);
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
			if (func_255(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_256(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_257(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_258(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_259(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_233(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_256(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_260(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_261(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_263(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_263(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_256(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_264(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_265(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_266(iParam2, 4000))
				{
					if ((func_267(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_268(iParam2, iParam0)) && func_269(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_267(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_268(iParam2, iParam0)) && func_269(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_270(iParam0, Global_1935630->f_41))
							{
								func_271();
								*uParam3 = 2;
								func_256(iParam0, iParam2, *uParam3);
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
						if (func_270(iParam0, Global_1935630->f_41))
						{
							func_271();
							*uParam3 = 2;
							func_256(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_272(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_273() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_271();
						*uParam3 = 2;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_274())
					{
						if (func_270(iParam0, Global_1935630->f_42))
						{
							func_271();
							*uParam3 = 2;
							func_256(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_275(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_256(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_276(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_277(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_278(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_279(iParam2, 4000))
				{
					if (func_280(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_256(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_281(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_256(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_282(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_256(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_108()
{
	if (Local_101.f_48)
	{
		if (!func_148(&uLocal_853))
		{
			if (has_anim_event_fired(&(uLocal_410[0]), 243556862))
			{
				func_283(&(uLocal_410[0]), 67779789, -1f, 15f, 15f, -1082130432);
				func_124(&uLocal_853);
			}
		}
	}
}

void func_109()
{
	if (!Local_101.f_46)
	{
		return;
	}
	if (!func_33(iVar398, 32768))
	{
		if (does_entity_exist(&(uLocal_410[1])) && func_51(&(uLocal_410[0]), 0, 1))
		{
			if (!func_148(&uLocal_451))
			{
				func_124(&uLocal_451);
			}
			else if (func_127(&uLocal_451) > 3f)
			{
				if (!func_33(iVar398, 16384))
				{
					if (func_33(iVar401, 128))
					{
						if (!func_33(iVar398, 32768))
						{
							func_284(49);
							func_146(&uLocal_451);
							func_30(&uLocal_400, 32768);
						}
					}
					else if (!func_51(&(uLocal_410[1]), 0, 1))
					{
						if (func_51(&(uLocal_410[0]), 0, 1))
						{
							if (get_ped_config_flag(&(uLocal_410[1]), 11, true))
							{
								if (func_285(&(uLocal_410[1]), 2000, 0, 0) && !func_33(iVar398, 32768))
								{
									func_284(29);
									func_146(&uLocal_451);
									func_30(&uLocal_400, 32768);
								}
							}
							else if (has_entity_been_damaged_by_entity(&(uLocal_410[1]), Global_35, 1, 1) && !func_33(iVar398, 32768))
							{
								func_284(49);
								func_146(&uLocal_451);
								func_30(&uLocal_400, 32768);
							}
							else
							{
								func_146(&uLocal_451);
								func_30(&uLocal_400, 32768);
							}
						}
						else
						{
							func_146(&uLocal_451);
							func_30(&uLocal_400, 32768);
						}
					}
				}
			}
		}
	}
	else if (!func_33(iVar399, 1))
	{
		if (!func_148(&uLocal_451))
		{
			func_124(&uLocal_451);
		}
		else if (func_127(&uLocal_451) > 2f)
		{
			if (func_51(&(uLocal_410[0]), 0, 1))
			{
				func_286(&(uLocal_410[0]), 4);
				func_30(&uLocal_401, 1);
			}
		}
	}
}

void func_110()
{
	if (!func_33(iVar398, 32))
	{
		bVar0 = true;
		if (func_51(&(uLocal_410[1]), 0, 1))
		{
			if (!_has_ped_emotional_preset_loaded(&(uLocal_410[1]), "Default_Angry"))
			{
				_request_ped_emotional_preset(&(uLocal_410[1]), "Default_Angry");
				bVar0 = false;
			}
		}
		if (func_51(&(uLocal_410[0]), 0, 1))
		{
			if (!_has_ped_emotional_preset_loaded(&(uLocal_410[0]), "Default_Angry"))
			{
				_request_ped_emotional_preset(&(uLocal_410[0]), "Default_Angry");
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_30(&uLocal_400, 32);
		}
	}
}

void func_111()
{
	if (func_33(iVar398, 8388608))
	{
		if (!func_33(iVar399, 2))
		{
			if (func_33(iVar398, 1024))
			{
				func_147(4, 0, 0, "RE_HONOR_WATCHED_MURDER", &(uLocal_410[0]), 0, 1065353216, 0);
				func_30(&uLocal_401, 2);
			}
		}
	}
	if (func_33(iVar398, 8388608))
	{
		if (!func_33(iVar399, 8))
		{
			if (func_33(iVar398, 2048) && &iLocal_372[0] >= 7)
			{
				func_147(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", &(uLocal_410[0]), 0, 1065353216, 0);
				func_30(&uLocal_401, 8);
			}
		}
	}
	if (!func_33(iVar399, 4))
	{
		if (!func_33(iVar399, 8) && !func_33(iVar399, 2))
		{
			if (func_287())
			{
				func_147(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", &(uLocal_410[0]), 0, 1065353216, 0);
				func_30(&uLocal_401, 4);
			}
		}
	}
}

void func_112(int iParam0)
{
	if (bVar827 || iVar368 <= 1)
	{
		return;
	}
	if (!func_288())
	{
		if (!is_entity_dead(iParam0))
		{
			if (_is_ped_hogtied(iParam0))
			{
				if (func_289(Global_35))
				{
					if (func_290(Global_35) == func_291(iParam0))
					{
						set_ped_config_flag(iParam0, 6, false);
						iLocal_830 = 1;
					}
				}
			}
		}
	}
}

void func_113(int iParam0)
{
	if (bVar828)
	{
		return;
	}
	if (!func_288())
	{
		iLocal_831 = 1;
	}
	else if (!is_entity_dead(iParam0))
	{
		if (_is_ped_hogtied(iParam0))
		{
			if (func_289(Global_35))
			{
				if (func_290(Global_35) == func_291(iParam0))
				{
					decor_set_bool(iParam0, "bIgnoreLawMissionEntity", true);
					set_blocking_of_non_temporary_events(iParam0, false);
					iLocal_831 = 1;
				}
			}
		}
	}
}

void func_114()
{
	if (func_292(&(uLocal_410[1]), Local_101.f_51, 1) < 1.5f)
	{
		if (func_51(&(uLocal_410[1]), 0, 1))
		{
			set_ped_reset_flag(&(uLocal_410[1]), 47, true);
		}
	}
	func_293();
	func_294();
	switch (&iLocal_372[1])
	{
		case 0:
			iLocal_372[1] = 1;
			break;
		case 1:
			if (func_33(iVar398, 1))
			{
				if (iLocal_17 == 1)
				{
					iLocal_372[1] = 2;
				}
				else
				{
					_0x89f5e7adecccb49c(&(uLocal_410[1]), "Angry");
					iLocal_372[1] = 3;
				}
			}
			else if (bVar826)
			{
				iLocal_372[1] = 4;
			}
			break;
		case 2:
			if (!_is_anim_scene_started(Local_80, false))
			{
				iLocal_372[1] = 7;
			}
			if (func_33(iVar398, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 3:
			func_295();
			func_296();
			if (func_33(iVar398, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 4:
			func_295();
			func_296();
			if (!get_is_task_active(&(uLocal_410[1]), 3) || (_is_anim_scene_started(Local_80, false) && _0x005e6f28dd7ed58d(Local_80, "PED_BADGUY")))
			{
				func_30(&uLocal_400, 4096);
				func_297(&(uLocal_410[1]), 1f, 1, 1, 0, 0);
				set_ped_relationship_group_hash(&(uLocal_410[1]), -1976316465);
				iLocal_372[1] = 7;
			}
			break;
		case 7:
			func_295();
			if (iLocal_17 == 1)
			{
			}
			else if (iLocal_17 == 0)
			{
				func_296();
				if (!func_33(iVar401, 128))
				{
					if (func_33(iVar398, 16777216))
					{
						func_30(&uLocal_400, 33554432);
						func_298();
						Local_101.f_46 = 1;
						iLocal_372[1] = 9;
					}
				}
				else
				{
					iLocal_372[1] = 8;
				}
				func_298();
			}
			break;
		case 8:
			func_298();
			break;
		case 6:
			break;
		case 9:
			if (func_33(iVar398, 2048))
			{
				if (func_51(&(uLocal_410[1]), 0, 1))
				{
					func_299(&(uLocal_410[1]), 1, 0);
					func_30(&uLocal_400, 16384);
				}
				func_34(uLocal_413[1]);
			}
			else if (func_51(&(uLocal_410[1]), 0, 1))
			{
				func_300();
				if (iVar574 == -1)
				{
					if (_0x3ab6c7b0bb0df4b1(&(uLocal_410[1]), -1))
					{
						remove_anim_scene_entity(Local_80, "PED_BADGUY", &(uLocal_410[1]));
					}
					if (func_33(iVar401, 256) || func_33(iVar398, 16777216))
					{
						set_ped_combat_attributes(&(uLocal_410[1]), 93, true);
						set_ped_combat_attributes(&(uLocal_410[1]), 92, true);
						_0x8acc0506743a8a5c(&(uLocal_410[1]), 82540408, 1, -1082130432);
					}
					open_sequence_task(&iVar0);
					register_target(&(uLocal_410[1]), Global_35, 1);
					if (func_33(iVar398, 16777216) || func_33(iVar401, 256))
					{
						set_current_ped_weapon(&(uLocal_410[1]), -618550132, false, 0, false, false);
						if ((func_33(iVar398, 16777216) && &Local_101.f_98[1] > 5f) && !func_33(iVar401, 256))
						{
							task_react(0, Global_35, Global_36, "Default_Angry", 1f, 0, 4);
							task_follow_to_offset_of_entity(0, Global_35, 0f, 0.5f, 0f, 1f, 4000, 1f, 1, 1, 0, 0, 1);
						}
						else
						{
							task_react(0, Global_35, Global_36, "Default_Angry", 3f, 0, 4);
						}
						task_swap_weapon(0, 1, 1, 0, 0);
						task_combat_ped(0, Global_35, 1048576, 4096);
					}
					else if (_0xcb690f680a3ea971(Global_35, 4))
					{
						task_combat_ped(0, Global_35, 16384, 16);
					}
					else
					{
						task_react(0, Global_35, Global_36, "Default_Angry", 1.5f, 0, 4);
						task_combat_ped(0, Global_35, 0, 16);
					}
					func_301(&(uLocal_410[1]), &iVar0, 0, 0, 1, 1);
					set_ped_keep_task(&(uLocal_410[1]), true);
					func_302(&(uLocal_410[1]), uLocal_413[1], 831283580, 580546400, 0, 0);
					iLocal_372[1] = 14;
				}
				else
				{
					stop_current_playing_speech(&(uLocal_410[1]), 0);
					iLocal_372[1] = 10;
				}
			}
			else
			{
				iLocal_372[1] = 14;
			}
			break;
		case 10:
			func_300();
			if (!_0x3ab6c7b0bb0df4b1(&(uLocal_410[1]), -1))
			{
				if (_0x3ab6c7b0bb0df4b1(&(uLocal_410[1]), Local_80))
				{
					remove_anim_scene_entity(Local_80, "PED_BADGUY", &(uLocal_410[1]));
				}
				open_sequence_task(&iVar0);
				register_target(&(uLocal_410[1]), Global_35, 1);
				if (func_33(iVar401, 256))
				{
					set_ped_combat_attributes(&(uLocal_410[1]), 93, true);
					set_ped_combat_attributes(&(uLocal_410[1]), 92, true);
					_0x8acc0506743a8a5c(&(uLocal_410[1]), 82540408, 1, -1082130432);
					task_combat_ped(0, Global_35, 68157440, 4096);
				}
				else
				{
					task_combat_ped(0, Global_35, 16384, 16);
				}
				func_301(&(uLocal_410[1]), &iVar0, 0, 0, 1, 1);
				set_ped_keep_task(&(uLocal_410[1]), true);
				func_302(&(uLocal_410[1]), uLocal_413[1], 831283580, 580546400, 0, 0);
				iLocal_372[1] = 14;
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 14:
			if (Local_101.f_46)
			{
				func_300();
				func_303();
			}
			if (func_2() == 105)
			{
				bVar1 = func_304(&Local_101, &uLocal_410, 1, 1);
				if (!func_305(1024))
				{
					if (bVar1)
					{
						func_306(1024);
					}
				}
				else if (!bVar1)
				{
					func_60(1024);
				}
			}
			func_307();
			func_298();
			break;
		case 15:
			break;
	}
}

void func_115()
{
	func_308();
	switch (&iLocal_372[0])
	{
		case 0:
			iLocal_372[0] = 1;
			break;
		case 1:
			if (func_33(iVar398, 1))
			{
				if (iLocal_17 == 0)
				{
					iLocal_372[0] = 3;
				}
				else
				{
					iLocal_372[0] = 2;
				}
			}
			else if (bVar826)
			{
				iLocal_372[0] = 4;
			}
			break;
		case 2:
			if (func_309())
			{
				force_ped_motion_state(&(uLocal_410[0]), -530524, false, 0, false);
				func_310(&(uLocal_410[0]), -1905235087, 1097859072, 1101004800, 1101004800, -1082130432);
				func_297(&(uLocal_410[0]), 2f, 1, bVar395, &(uLocal_410[1]), 0);
				func_34(uLocal_413[0]);
				func_124(&uLocal_850);
				iLocal_372[0] = 7;
			}
			else if (has_anim_event_fired(&(uLocal_410[0]), 428295725))
			{
			}
			if (func_33(iVar398, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 3:
			if (has_anim_event_fired(&(uLocal_410[0]), -647428130))
			{
				func_34(uLocal_413[0]);
				func_134();
			}
			if (func_33(iVar398, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 7:
			if (iLocal_17 == 1)
			{
				_0x89f5e7adecccb49c(&(uLocal_410[0]), "Angry");
				iLocal_372[0] = 14;
			}
			else if (iLocal_17 == 0)
			{
				iLocal_372[0] = 14;
			}
			break;
		case 9:
			if (iVar574 == -1)
			{
				if (func_51(&(uLocal_410[0]), 0, 1))
				{
					if (has_anim_event_fired(&(uLocal_410[0]), -218438047))
					{
						if (!is_ped_running_ragdoll_task(&(uLocal_410[0])))
						{
							if (_0x3ab6c7b0bb0df4b1(&(uLocal_410[0]), -1))
							{
								remove_anim_scene_entity(Local_80, "PED_VICTIM", &(uLocal_410[0]));
							}
							set_ped_to_ragdoll(&(uLocal_410[0]), 1500, 4000, 0, false, false, false);
						}
					}
					else if (!is_ped_running_ragdoll_task(&(uLocal_410[0])))
					{
						if (_0x3ab6c7b0bb0df4b1(&(uLocal_410[0]), -1))
						{
							remove_anim_scene_entity(Local_80, "PED_VICTIM", &(uLocal_410[0]));
						}
						if (func_311())
						{
							iLocal_372[0] = 11;
						}
					}
				}
			}
			else
			{
				iLocal_372[0] = 10;
			}
			break;
		case 10:
			if (func_33(iVar398, 8))
			{
				func_312();
			}
			else if (iVar574 == -1)
			{
				if (func_51(&(uLocal_410[0]), 0, 1) && !func_33(iVar398, 1024))
				{
					if (!func_51(&(uLocal_410[1]), 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else
					{
						func_311();
						iLocal_372[0] = 11;
					}
				}
			}
			else if (!_0x3ab6c7b0bb0df4b1(&(uLocal_410[0]), -1))
			{
				if (func_51(&(uLocal_410[0]), 0, 1) && !func_33(iVar398, 1024))
				{
					if (!func_51(&(uLocal_410[1]), 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else if (func_311())
					{
						iLocal_372[0] = 11;
					}
				}
			}
			else
			{
				if (func_51(&(uLocal_410[1]), 0, 1))
				{
					set_ped_reset_flag(&(uLocal_410[0]), 36, true);
					set_ped_reset_flag(&(uLocal_410[0]), 31, true);
				}
				func_313();
				if (func_33(iVar400, 1024))
				{
					func_314(uLocal_410[0], 0, Global_35, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 11:
			if (!func_33(iVar398, 65536))
			{
				if (func_51(&(uLocal_410[0]), 0, 1) && !func_33(iVar398, 1024))
				{
					func_315();
					if (!func_51(&(uLocal_410[1]), 0, 1))
					{
						if (((!func_33(iVar398, 2048) && &Local_101.f_98[0] < 20f) && !func_233(player_id(), 1, 0, 1)) && !func_316())
						{
							if (!func_33(iVar398, 64))
							{
								if (!func_148(&uLocal_841))
								{
									func_317(&uLocal_841, 0);
								}
								_0x89f5e7adecccb49c(&(uLocal_410[0]), "Nervous");
								func_30(&uLocal_400, 64);
								iLocal_372[0] = 12;
							}
							else
							{
								iLocal_372[0] = 12;
							}
						}
						else
						{
							if (func_51(&(uLocal_410[0]), 0, 1))
							{
								func_318(func_80(87), 1);
							}
							func_132();
							iLocal_372[0] = 14;
						}
					}
				}
			}
			else if (func_311())
			{
				if (func_33(iVar398, 64) && !func_33(iVar398, 65536))
				{
					iLocal_371 = 8;
				}
				else
				{
					func_144();
					if (get_script_task_status(&(uLocal_410[0]), 518218985, true) != 1)
					{
						task_smart_flee_ped(&(uLocal_410[0]), Global_35, 200f, -1, 0, 1077936128, 0);
					}
					iLocal_372[0] = 16;
					iLocal_371 = 9;
				}
			}
			break;
		case 12:
			if (func_33(iVar398, 65536))
			{
				if (func_51(&(uLocal_410[0]), 0, 1))
				{
					task_smart_flee_ped(&(uLocal_410[0]), Global_35, 200f, -1, 0, 1077936128, 0);
					set_ped_keep_task(&(uLocal_410[0]), true);
					iLocal_372[0] = 14;
				}
			}
			else if (func_33(iVar398, 256))
			{
				func_320(Global_35, &(uLocal_410[0]), func_319(), 0, -1082130432, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
				func_142(&(uLocal_410[0]));
				_0x89f5e7adecccb49c(&(uLocal_410[0]), "Nervous");
				func_297(&(uLocal_410[0]), 2f, 1, 1, 0, 0);
				func_321();
				iLocal_372[0] = 14;
			}
			break;
		case 13:
			break;
		case 14:
			if (!func_33(iVar398, 65536))
			{
				if (func_107(&(uLocal_410[0]), 0, &uLocal_796, &uLocal_795, 0, &(Local_101.f_98[0])))
				{
					task_smart_flee_ped(&(uLocal_410[0]), Global_35, 200f, -1, 0, 1077936128, 0);
					func_30(&uLocal_400, 65536);
					iLocal_372[0] = 16;
				}
				else
				{
					if (!Local_101.f_46)
					{
						if (iLocal_17 == 1)
						{
							if (func_127(&uLocal_850) > 1f)
							{
								func_135(5f, 1);
							}
							func_322();
						}
					}
					if (_does_scenario_point_exist(iVar419))
					{
						if (_0x9c54041bb66bcf9e(&(uLocal_410[0]), iVar419))
						{
							if (!func_148(&uLocal_457))
							{
								func_124(&uLocal_457);
							}
							else if (func_127(&uLocal_457) > 30f)
							{
								func_323(&(uLocal_410[0]), Local_463[0], &Local_541, 1);
								iLocal_372[0] = 15;
							}
						}
					}
				}
			}
			else if (get_script_task_status(&(uLocal_410[0]), 518218985, true) != 1)
			{
				task_smart_flee_ped(&(uLocal_410[0]), Global_35, 200f, -1, 0, 1077936128, 0);
				iLocal_372[0] = 16;
			}
			break;
		case 15:
			break;
		case 16:
			func_324();
			break;
	}
}

void func_116()
{
	if (func_33(iVar398, 268435456) || iVar369 <= 2)
	{
		return;
	}
	if (!func_33(iVar398, 134217728))
	{
		if (func_33(iVar398, 1024))
		{
			func_325();
			func_30(&uLocal_400, 134217728);
		}
		else
		{
			func_326();
		}
	}
	else
	{
		func_326();
	}
}

bool func_117()
{
	if (!func_33(iVar398, 4))
	{
		switch (iVar396)
		{
			case 0:
				uLocal_827 = _0x6f3068258a499e52(199641577, Local_101.f_51, 9);
				uLocal_398 = iVar396 + 1;
				break;
			case 1:
				if (_0x1ff441d7954f8709(iVar825))
				{
					iLocal_826 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar825));
					set_anim_scene_entity(Local_80, "objTrough", iVar824, 0);
					func_30(&uLocal_400, 4);
					return true;
				}
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_118(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_228(uParam0, bVar1);
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
	if (uParam0->f_178 && func_226())
	{
		bVar1 = true;
		fVar3 = func_176(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_229(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_229(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_230(&(uParam0->f_121), iParam4, fParam1))
		{
			func_99(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_180(uParam0->f_3, uParam0->f_185), 0);
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
						func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_99(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_180(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_119()
{
	set_ped_config_flag(&(uLocal_410[1]), 6, true);
	func_327(uLocal_410[1], 0);
	func_325();
	func_30(&uLocal_401, 32);
}

void func_120(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	iLocal_834 = add_shocking_event_for_entity(iParam0, &(uLocal_410[1]), fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_121(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	trigger_sonar_blip(iParam0, vParam1);
}

void func_122()
{
	if (func_33(iVar400, 512))
	{
		return;
	}
	if (!func_104())
	{
		if (iVar420 == 76)
		{
			if (iLocal_17 == 0)
			{
				func_320(&(uLocal_410[0]), 0, "RE_DM_VAL_V1_WIFE_CALLOUT_B", "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
		}
		else if (iVar420 == 105)
		{
			func_149(&(uLocal_410[0]), "RE_DM_RHD_V1_WIFE_CALLOUT_A", 1744022339, 0, 1, &(Local_305[0]->f_23), 2, 1);
		}
		else if (iVar420 == 92)
		{
			func_320(&(uLocal_410[0]), 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		func_30(&uLocal_402, 512);
	}
	else
	{
		if (iVar420 == 76)
		{
			if (iLocal_17 == 0)
			{
			}
		}
		else if (iVar420 == 105)
		{
		}
		else if (iVar420 == 92)
		{
			func_320(&(uLocal_410[0]), 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		func_30(&uLocal_402, 512);
	}
}

void func_123(int iParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	iParam0->f_6 = uParam1;
	iParam0->f_3 = { vParam3 };
	iParam0->f_2 = 0;
	iParam0->f_7 = get_game_timer();
	*iParam0 = *uParam2;
	iParam0->f_8 = iParam8;
}

void func_124(var uParam0)
{
	func_328(uParam0, 0f);
}

bool func_125(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_329(iVar0) || func_330(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_126()
{
	if (func_33(iVar400, 4))
	{
		return;
	}
	if (iLocal_17 == 0)
	{
		if (!is_scripted_speech_playing(&(uLocal_410[0])))
		{
			func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("DEFENSIVE"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			func_121(1891783641, Local_101.f_51, 1);
			func_30(&uLocal_402, 4);
		}
	}
	else if (iLocal_17 == 1)
	{
		if (!is_scripted_speech_playing(&(uLocal_410[0])))
		{
			func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("HELP"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			func_121(1891783641, Local_101.f_51, 1);
			func_124(&uLocal_838);
			func_30(&uLocal_402, 4);
		}
	}
}

float func_127(var uParam0)
{
	if (!func_148(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_332(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_333() - uParam0->f_1);
}

void func_128()
{
	if (iVar369 > 1)
	{
		if (!Local_101.f_44)
		{
			if (iVar830 > 2)
			{
				if (_0x7f9b9791d4cb71f6(&(uLocal_410[1]), Global_35, true, 0) == 1 || _0x7f9b9791d4cb71f6(&(uLocal_410[0]), Global_35, true, 0) == 1)
				{
					func_132();
				}
			}
		}
		switch (iVar830)
		{
			case 0:
				if (has_anim_event_fired(&(uLocal_410[1]), func_334(15)))
				{
					if (func_127(&uLocal_850) > 1.5f)
					{
						func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("BERATE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_335(&uLocal_402, 64);
						func_124(&uLocal_850);
						uLocal_832 = iVar830 + 1;
					}
				}
				if (func_33(iVar400, 2))
				{
					if ((!func_104() && !is_scripted_speech_playing(&(uLocal_410[0]))) && !func_33(iVar400, 64))
					{
						func_149(&(uLocal_410[0]), "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
						func_30(&uLocal_400, 64);
					}
				}
				else if (func_104())
				{
				}
				else if (!func_33(iVar400, 1))
				{
					if (!is_scripted_speech_playing(&(uLocal_410[0])) && !is_ambient_speech_playing(&(uLocal_410[0])))
					{
						func_149(&(uLocal_410[0]), "SCREAM_SHOCKED", 1744022339, 0, 1, 0, 0, 1);
						func_30(&uLocal_402, 1);
					}
				}
				break;
			case 1:
				if (func_33(iVar400, 128) && func_33(iVar400, 64))
				{
					uLocal_832 = iVar830 + 1;
				}
				else
				{
					if (!func_33(iVar400, 128))
					{
						if (has_anim_event_fired(&(uLocal_410[1]), func_334(1)) && func_33(iVar400, 64))
						{
							func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("ANGRY"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							func_30(&uLocal_402, 128);
						}
					}
					if (iVar368 == 9)
					{
						if (func_104())
						{
							if (has_anim_event_fired(&(uLocal_410[0]), func_334(28)))
							{
								bVar0 = false;
							}
							else
							{
								bVar0 = true;
							}
						}
					}
					else if (func_104())
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						if (is_scripted_speech_playing(&(uLocal_410[0])) && !has_anim_event_fired(&(uLocal_410[0]), func_334(28)))
						{
						}
					}
					else if (!is_scripted_speech_playing(&(uLocal_410[0])) && !func_33(iVar400, 64))
					{
						func_121(1891783641, Local_101.f_51, 1);
						func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("STOP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_30(&uLocal_402, 64);
					}
				}
				break;
			case 2:
				if (has_anim_event_fired(&(uLocal_410[0]), func_334(16)) || _get_anim_scene_progress(Local_80) < 0.1f)
				{
					func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("STRUGGLE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					set_anim_scene_bool(Local_80, "action", true, false);
					uLocal_832 = iVar830 + 1;
				}
				break;
			case 3:
				if (!func_33(iVar400, 32))
				{
					if (has_anim_event_fired(&(uLocal_410[0]), -2104823024) || has_anim_event_fired(&(uLocal_410[0]), -1236939459))
					{
						func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("SCREAM"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_30(&uLocal_402, 32);
					}
				}
				if ((!func_33(iVar400, 8192) && _is_anim_scene_started(Local_80, false)) && _get_anim_scene_progress(Local_80) > 0.248558f)
				{
					func_121(1891783641, Local_101.f_51, 1);
					func_30(&uLocal_402, 8192);
				}
				if (has_anim_event_fired(&(uLocal_410[1]), -1236939459))
				{
					func_30(&uLocal_400, 2048);
				}
				if (has_anim_event_fired(&(uLocal_410[1]), func_334(3)))
				{
					func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("AGONY"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (has_anim_event_fired(&(uLocal_410[0]), func_334(4)))
				{
					func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("HEADBUTT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (has_anim_event_fired(&(uLocal_410[1]), func_334(5)))
				{
					func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("PAIN_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (has_anim_event_fired(&(uLocal_410[1]), func_334(6)))
				{
					func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("PAIN_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (has_anim_event_fired(&(uLocal_410[0]), func_334(7)))
				{
					func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("STOMP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
		}
	}
}

int func_129()
{
	if (func_33(iVar398, 2048))
	{
		return 1;
	}
	if (has_anim_event_fired(&(uLocal_410[1]), 1270344867))
	{
		func_30(&uLocal_400, 2048);
		return 1;
	}
	return 0;
}

void func_130()
{
	if (func_33(iVar398, 67108864))
	{
		return;
	}
	if (func_33(iVar398, 2048))
	{
		apply_ped_damage_pack(&(uLocal_410[1]), "PD_Blood_Spray_Front_att", 0f, 1f);
		apply_ped_damage_pack(&(uLocal_410[1]), "PD_Burst_lip", 0f, 1f);
		apply_ped_damage_pack(&(uLocal_410[1]), "PD_Nose_cut", 0f, 1f);
		func_30(&uLocal_400, 67108864);
	}
}

void func_131()
{
	func_44(&(Local_101.f_5), 15f);
	func_44(&uLocal_796, 15f);
}

void func_132()
{
	if (!Local_101.f_44)
	{
		Local_101.f_44 = 1;
		if (func_41() == 9)
		{
			if (iLocal_17 == 1)
			{
				func_164(87, iLocal_17, 7);
			}
		}
	}
}

void func_133()
{
	if (Local_101.f_46)
	{
		return;
	}
	switch (iVar830)
	{
		case 0:
			if (_is_anim_scene_started(Local_80, false) && _get_anim_scene_progress(Local_80) > 0.192647f)
			{
				func_121(1891783641, Local_101.f_51, 1);
				uLocal_832 = iVar830 + 1;
			}
			break;
		case 1:
			if (_is_anim_scene_started(Local_80, false) && _get_anim_scene_progress(Local_80) > 0.35701f)
			{
				func_121(1891783641, Local_101.f_51, 1);
				uLocal_832 = iVar830 + 1;
			}
			break;
		case 2:
			break;
	}
	if (!func_33(iVar400, 2))
	{
		func_124(&uLocal_847);
		func_30(&uLocal_402, 2);
	}
	else
	{
		if (!func_33(iVar398, 2097152))
		{
			if (func_127(&uLocal_847) > 0.75f || (func_253(0, 1, &(uLocal_410[1]), 1) && func_253(0, 1, &(uLocal_410[0]), 1)))
			{
				func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("ACCUSE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_121(1891783641, Local_101.f_51, 1);
				func_124(&uLocal_847);
				func_30(&uLocal_400, 2097152);
			}
		}
		else if (!func_33(iVar398, 4194304))
		{
			if (func_127(&uLocal_847) > 0.5f || (func_253(0, 1, &(uLocal_410[1]), 1) && func_253(0, 1, &(uLocal_410[0]), 1)))
			{
				set_anim_scene_bool(Local_80, "action", true, false);
				func_30(&uLocal_400, 4194304);
			}
		}
		if (has_anim_event_fired(&(uLocal_410[0]), func_334(14)))
		{
			func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("LET_GO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[1]), func_334(15)))
		{
			func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("BERATE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[0]), func_334(16)))
		{
			func_320(&(uLocal_410[0]), &(uLocal_410[1]), func_331("STRUGGLE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[1]), func_334(17)))
		{
			func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("MOCK"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[1]), func_334(26)))
		{
			func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("DROWNING_A_01"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[1]), func_334(27)))
		{
			func_320(&(uLocal_410[1]), &(uLocal_410[0]), func_331("DROWNING_B_01"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_410[1]), func_334(18)))
		{
			func_320(&(uLocal_410[1]), Global_35, func_331("DROWNED"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (!func_33(iVar398, 1024))
		{
			if (has_anim_event_fired(&(uLocal_410[1]), 707255528))
			{
				func_134();
			}
		}
	}
}

void func_134()
{
	if (!func_33(iVar398, 1024))
	{
		func_47(&(Local_101.f_5), 0);
		func_48(&(Local_101.f_5), 1);
		func_336(&(uLocal_410[0]), 1, 0);
		func_165(87, 2, 1);
		func_30(&uLocal_400, 1024);
	}
}

void func_135(float fParam0, int iParam1)
{
	if (func_33(iVar398, 256))
	{
		return;
	}
	if (!func_33(iVar398, 8))
	{
		if (func_292(Global_35, Local_101.f_51, 1) < 10f)
		{
			if (func_253(-3f, 1, &(uLocal_410[0]), 1))
			{
				if (func_337(&(uLocal_410[0]), Global_35, 1, fParam0, 0) || ((&Local_101.f_98[0] < fParam0 && iParam1 == 0) && !is_entity_occluded(&(uLocal_410[0]))))
				{
					func_320(&(uLocal_410[0]), Global_35, func_331("HANG_AROUND"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_30(&uLocal_402, 8);
				}
			}
		}
	}
}

void func_136(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_137()
{
	if (iVar832 != -1)
	{
		remove_shocking_event(iVar832);
	}
}

void func_138()
{
	if (func_338())
	{
		iVar0 = func_339(&(uLocal_410[1]), Global_35, 1060437492);
		if (func_104())
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 1;
					break;
				case 1:
					iLocal_576 = 3;
					break;
				case 3:
					iLocal_576 = 5;
					break;
				case 2:
					iLocal_576 = 7;
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 0;
					break;
				case 1:
					iLocal_576 = 2;
					break;
				case 3:
					iLocal_576 = 4;
					break;
				case 2:
					iLocal_576 = 6;
					break;
			}
		}
	}
	else if (!func_51(&(uLocal_410[0]), 0, 1))
	{
		if (func_51(&(uLocal_410[1]), 0, 1))
		{
			if (has_anim_event_fired(&(uLocal_410[1]), 1350074909))
			{
				iVar0 = func_339(&(uLocal_410[1]), Global_35, 1060437492);
				if (has_anim_event_fired(&(uLocal_410[1]), -1299051536))
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 1;
							break;
						case 1:
							iLocal_576 = 3;
							break;
						case 3:
							iLocal_576 = 5;
							break;
						case 2:
							iLocal_576 = 7;
							break;
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 0;
							break;
						case 1:
							iLocal_576 = 2;
							break;
						case 3:
							iLocal_576 = 4;
							break;
						case 2:
							iLocal_576 = 6;
							break;
					}
				}
			}
		}
	}
	else
	{
		iLocal_576 = -1;
	}
	if (iVar574 == 8)
	{
		func_30(&uLocal_400, 8);
	}
}

bool func_139(float fParam0)
{
	if (func_148(&uLocal_853))
	{
		if (func_127(&uLocal_853) >= fParam0)
		{
			return true;
		}
	}
	return false;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
		case 0:
			return "pblBreakoutFront";
		case 1:
			return "pblBreakoutFrontV2";
		case 2:
			return "pblBreakoutBack";
		case 3:
			return "pblBreakoutBackV2";
		case 4:
			return "pblBreakoutRight";
		case 5:
			return "pblBreakoutRightV2";
		case 6:
			return "pblBreakoutLeft";
		case 7:
			return "pblBreakoutLeftV2";
		case 8:
			return "pblQuickKill";
		default:
			break;
	}
	return "invalid playlist";
}

void func_141()
{
	if (func_33(iVar398, 65536))
	{
		return;
	}
	if (func_33(iVar398, 262144))
	{
		if (func_107(&(uLocal_410[0]), 0, &uLocal_796, &uLocal_795, 0, 0))
		{
			func_30(&uLocal_400, 65536);
		}
	}
	else if (func_51(&(uLocal_410[0]), 0, 1))
	{
		if (func_340())
		{
			if ((is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v1_victim", 1) && _get_entity_anim_current_time(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v1_victim") > 0.91f) || (is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v2_victim", 1) && _get_entity_anim_current_time(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v2_victim") > 0.91f))
			{
				func_321();
			}
		}
		else if (func_341(&uLocal_841, 2.5f))
		{
			func_48(&uLocal_796, 1);
			func_321();
		}
	}
}

void func_142(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		clear_entity_last_damage_entity(iParam0);
	}
}

void func_143(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	func_137();
	remove_shocking_event(iVar828);
	iLocal_833 = add_shocking_event_for_entity(513747494, iParam0, fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_144()
{
	if (!is_scripted_speech_playing(&(uLocal_410[0])))
	{
		if (iVar420 == 76)
		{
			func_320(&(uLocal_410[0]), Global_35, "RE_DM_VAL_V1_AGGRO_RESP", 0, -1082130432, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iVar420 == 92)
		{
			func_320(&(uLocal_410[0]), Global_35, "PANIC_HELP", 0, -1082130432, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iVar420 == 105)
		{
			func_320(&(uLocal_410[0]), Global_35, "RE_DM_RHD_V1_AGGRO_RESP", 0, -1082130432, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		func_30(&uLocal_402, 16384);
	}
}

bool func_145(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_342(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_146(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_161() != -1)
	{
		return;
	}
	if ((Global_36616 && func_212(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_343(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_344(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_345(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_344(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_148(var uParam0)
{
	return func_346(*uParam0, 1);
}

bool func_149(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_347(iParam0, &Var0);
}

bool func_150()
{
	if (!func_348(Global_1395482->f_1))
	{
		return false;
	}
	return func_349(Global_1395482->f_1, 32);
}

bool func_151(int iParam0)
{
	if (func_76(iParam0, 1))
	{
		return false;
	}
	return (1 == func_170(iParam0) || 2 == func_170(iParam0));
}

float func_152(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_153()
{
	if (func_2() != iVar420)
	{
		if (get_distance_between_coords(Global_36, Local_101.f_51, true) > 200f)
		{
			return true;
		}
	}
	return false;
}

void func_154(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 16);
	}
	else
	{
		func_159(iParam0, 67108864);
		func_159(iParam0, 16);
	}
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 128);
	}
	else
	{
		func_96(&(uParam0->f_1), 128);
	}
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_96(iParam0, 268435456);
	}
	else
	{
		func_159(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_96(iParam0, 1073741824);
	}
	else
	{
		func_159(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_96(iParam0, 536870912);
	}
	else
	{
		func_159(iParam0, 536870912);
	}
}

var func_157(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_158(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_350(sParam1));
}

void func_159(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_160(int iParam0, int iParam1)
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
	if (func_33(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_161()
{
	return Global_1572887->f_12;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_3 = iParam2;
}

int func_163(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = (get_entity_model(iParam0) + get_hash_of_this_script_name());
	_0xcb1a3864c524f784(iParam0, iVar0);
	return iVar0;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

int func_166(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_352(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_353(iVar0);
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_4 = iParam2;
}

int func_168()
{
	return &Global_1899515;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_5 = iParam2;
}

int func_170(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

char* func_171(int iParam0)
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

void func_172(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_173(int iParam0, bool bParam1)
{
	if (func_51(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_354(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_174(var uParam0, var uParam1)
{
	if (func_76(uParam0->f_3, 16777216))
	{
		if (func_355(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_175(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_176(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_177(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_51(iParam0, 0, 1)))
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
			fVar2 = func_176(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_356(&iParam0);
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

void func_178(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_357(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_358(uParam0);
	func_359(uParam0);
	func_360(uParam0);
	if (!func_361(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_248(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_362();
	}
	if (!func_363(uParam0->f_3) && !func_76(uParam0->f_3, 256))
	{
		func_54(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_364(uParam0->f_173);
	func_364(uParam0->f_172);
}

void func_179(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_180(int iParam0, int iParam1)
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

void func_181(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_161() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_182(var uParam0, var uParam1)
{
	if (_does_volume_exist(*uParam0))
	{
		_0x74c2b3dc0b294102(*uParam0);
		_0xa1cfb35069d23c23(*uParam0);
		_delete_volume(*uParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

bool func_183(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_184(int iParam0)
{
	if (((func_185(iParam0, 1) && func_185(iParam0, 2)) && func_185(iParam0, 8)) && func_185(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_186(int iParam0)
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

int func_187(bool bParam0)
{
	if (bParam0)
	{
		return func_365(Global_1359489->f_4);
	}
	get_group_size(func_366(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_366(), iVar3);
		if (func_367(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_188(var uParam0)
{
	func_30(uParam0, 256);
}

void func_189(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_190(var uParam0)
{
	if (!func_368(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_368(uParam0->f_12))
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

Vector3 func_191(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_204(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_369(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_370(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_192(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_76(iParam0, 32))
	{
		if (func_371(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_372(Global_35, &(uParam1->f_12)) };
				if (!func_25(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_373(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_249(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_250());
		if (func_374(Global_1310750[iParam0], 33554432))
		{
			func_252(iVar0, func_251(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_252(iVar0, func_251(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_76(iParam0, 1))
		{
			func_375(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_376(iParam0);
}

bool func_193(int iParam0, var uParam1)
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
			func_377(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_97(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_378(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_378(iParam0));
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

void func_194(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_379(iParam0))
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
			if (!func_76(iParam0, 1))
			{
				if (func_97(iParam0, 2))
				{
				}
			}
			func_380(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_381(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_381(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_151(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_195(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_369(iParam1))
	{
		if (!func_382(iParam1, iVar0))
		{
			vVar4 = { func_191(iParam1, iVar0) };
			if (!func_25(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_200(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_383(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_25(vVar4))
	{
	}
	return vVar1;
}

int func_196(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_40("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_197(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_369(iParam0))
	{
		vVar1 = { func_191(iParam0, iVar0) };
		if (func_384(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_198(var uParam0)
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

int func_199(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_385(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_386(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_25(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_387(uParam0);
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
	return func_196(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_200(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_194(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_76(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_201(var uParam0, bool bParam1)
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

bool func_202(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_388(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_389(iParam0, uParam2))
	{
		return false;
	}
	if (!func_390(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_391(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_203(int iParam0, int iParam1, var uParam2)
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

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_205(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_206(int iParam0, int iParam1)
{
	if (func_392(iParam0))
	{
		return;
	}
	if (func_393(iParam0) == iParam1)
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

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_159(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_208()
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

bool func_209(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_394(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_395(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_396(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_397(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_85(uParam0->f_11, 0);
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
					Var2 = { func_394(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_395(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_398(&(uParam0->f_22)));
					Var2 = { func_394(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_395(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_396(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_399(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_400(*uParam1, &(uParam0->f_23), 0);
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

bool func_210(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_211(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_401(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_401(iVar4) && iVar4 != iVar0)
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
	if (func_161() == -1 && !func_402(iVar0))
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
				if (func_402(-183018591))
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
		if (iParam0 != Global_35 && func_401(iVar0))
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
		func_403(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_404(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_405(iVar0))
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

int func_212(int iParam0)
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

bool func_213(int iParam0, var uParam1)
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

void func_214(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_250());
	}
}

void func_215(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_216(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_250());
	}
}

void func_217(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_218(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_406(*uParam0, 0f, 0f, 0f))
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

Vector3 func_219(var uParam0)
{
	return uParam0->f_51;
}

bool func_220()
{
	return &Global_1935436 == 2;
}

void func_221(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_222(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_76(iParam0, 2))
	{
		func_408(iParam0, func_407(iParam1));
	}
	else
	{
		func_409(iParam0, func_41());
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
	func_410(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_411(iParam0, 0);
	func_412(iParam0);
	func_413(1);
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
	if (!func_76(iParam0, 16))
	{
		func_223(iParam0, 0, 0, 0, 0);
	}
}

void func_223(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_414() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_204(iVar1) && !func_76(iVar1, iParam2)) && (!bParam3 || !func_240(iVar1))) && (!bParam4 || !func_415(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_416(iVar0);
			}
		}
		iVar0++;
	}
}

int func_224(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_225(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_374(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_76(uParam0->f_3, 1073741824))
			{
				func_417(2, -1, 0, 0, 0);
			}
			else
			{
				func_417(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_417(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_418(1, uParam0->f_177))
				{
					func_419(16, uParam0->f_177);
					func_420(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_421(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_417(8, -1, 0, 0, 0);
	}
}

int func_226()
{
	if (func_401(Global_1935630->f_44))
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
		else if (func_422())
		{
			return 1;
		}
	}
	return 0;
}

bool func_227(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_228(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_76(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_76(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_76(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_76(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_76(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_76(uParam0->f_3, 1))
		{
		}
		else if (func_76(uParam0->f_3, 2))
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

int func_229(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_423(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_424(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_333() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_230(var uParam0, int iParam1, float fParam2)
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
	func_99(uParam0);
	return true;
}

bool func_231()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_232(var uParam0, float fParam1)
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

int func_233(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_425(bParam1, bParam2, bParam3);
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

bool func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_426(func_168());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_235(int iParam0, int iParam1)
{
	return (func_224(iParam0) && iParam1) != 0;
}

bool func_236(int iParam0)
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
	if (iParam0 & 1 == 1 && func_427(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_428(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_429(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_430(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_431(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_432(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_433(iVar3))
	{
		return true;
	}
	return false;
}

bool func_237(bool bParam0)
{
	if (func_434(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0)
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

bool func_239(int iParam0, bool bParam1, bool bParam2)
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
		if (func_435())
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
		iVar0 = func_436(&(Global_1898164->f_1[0]));
		if (func_437(iVar0) && func_438((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_439(&(Global_1898164->f_1[0])))
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

bool func_240(int iParam0)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	if (func_305(64) && func_440(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_241()
{
	return Global_1894899 & 4 != 0;
}

int func_242(int iParam0)
{
	if (!func_441(iParam0))
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

bool func_243(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_244(vector3 vParam0, int iParam3)
{
	if (!func_243(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_245(vector3 vParam0)
{
	if (func_25(vParam0))
	{
		return false;
	}
	fVar0 = func_176(func_231(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_246(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_124(uParam0);
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
		func_124(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_148(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_442(uParam0, fParam2))
		{
			return true;
		}
		if (func_148(uParam0))
		{
			func_146(uParam0);
		}
	}
	return false;
}

bool func_247(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_248(vector3 vParam0, int iParam3)
{
	if (func_25(vParam0))
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
			if (func_384(vVar2, vParam0, 2f, 1))
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

float func_249(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0f;
	}
	if (!func_443(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_250()
{
	return "unnamed";
}

char* func_251(int iParam0)
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

int func_252(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_375(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_253(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_444(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_445(fParam0))
	{
		return false;
	}
	return true;
}

void func_254(int iParam0, bool bParam1, int iParam2)
{
	func_446(iParam2);
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
		iParam0->f_13 = func_447(0);
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
							func_96(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_237(1))
						{
							func_96(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_237(1) || *iParam0 & 8192 != 0))
				{
					func_159(iParam0, 33554432);
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
			if (func_448(iParam0))
			{
				iParam0->f_15 = func_273();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_273() - iParam0->f_15) > 500)
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
	func_449(iParam0);
}

bool func_255(int iParam0, int iParam1)
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
			if (!func_450(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_451(iParam0, iVar2) <= func_452(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_453(iParam2, 1, 1, 1, 0))
	{
		func_96(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_454(iParam1, 1);
	func_362();
}

bool func_257(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_455(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_456(iParam1);
			if (func_457(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_458(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_454(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_454(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_258(int iParam0, int iParam1, int iParam2)
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
	if (func_459(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_456(iParam2);
		if (func_457(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_458(iParam2)
				{
					func_454(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
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
	if (func_450(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_458(iParam1)
		{
			fVar3 = func_456(iParam1);
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

bool func_260(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_261(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_460(iParam2);
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
			if (func_269(iParam2, iParam1))
			{
				func_454(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_262(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_461(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_269(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_454(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_263(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_462(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_463(iParam1, vVar0, vVar4))
					{
						func_454(iParam2, 1);
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
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_463(iParam1, vVar0, vVar7))
					{
						func_454(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_264(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_450(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_464(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_465(&(Global_1935630->f_34[iVar0])))
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
			if (func_466(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_467(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_468(iParam1, iParam0, fVar1, iVar0))
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

bool func_265(int iParam0, int iParam1)
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

bool func_266(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_267(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_469(iVar0, &iVar2))
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
	if (func_470(iVar0, iParam0))
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

int func_268(int iParam0, int iParam1)
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

bool func_269(int iParam0, int iParam1)
{
	if (func_471(iParam0))
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

bool func_270(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_105(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_271()
{
}

bool func_272(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_472(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_273();
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
						if (func_292(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_273();
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

int func_273()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_274()
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
	if ((func_273() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_275(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_452(iParam0);
	if (iParam0->f_12 > func_473(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_474(iParam1);
	iVar1 = func_475(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_476(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_277(int iParam0, int iParam1)
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
		if (func_477(iParam0, iParam1, 1))
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
					if (!func_478(iParam1, iParam0))
					{
						if (func_292(iVar4, Global_36, 1) < 7f)
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

bool func_278(int iParam0, int iParam1)
{
	if (!func_479(0))
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

bool func_279(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_281(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_273();
	}
	else if (func_273() - iParam1->f_4) > func_480(iParam1)
	{
		return func_481(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_282(int iParam0, int iParam1)
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

void func_283(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	remove_shocking_event(iVar826);
	iLocal_835 = add_shocking_event_for_entity(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, 7f, 180f, false, false, -1, -1);
}

void func_284(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_482(iParam0);
	fVar1 = func_483(iParam0);
	if ((Global_1347477->f_117 || !func_484(31)) || !func_485(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_486(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_487(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_490(_create_var_string(6, func_488(iParam0), fVar1), "itemtype_textures", func_489(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_285(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_286(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = func_343(iParam1);
		decor_set_int(iParam0, "honor_bank", absi(iVar0));
	}
}

bool func_287()
{
	if (!func_33(iVar398, 536870912))
	{
		if (func_33(iVar398, 1))
		{
			if (!func_33(iVar398, 2048) && !func_33(iVar398, 1024))
			{
				if (!is_entity_occluded(&(uLocal_410[0])))
				{
					uLocal_396 = &Local_101.f_98[0];
					func_124(&uLocal_448);
					func_30(&uLocal_400, 536870912);
				}
			}
		}
	}
	else if (!Local_101.f_46)
	{
		if (func_127(&uLocal_448) > 10f)
		{
			if (&Local_101.f_98[0] > (fVar394 + 25f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_288()
{
	if (!func_491())
	{
		func_492(2);
	}
	else
	{
		func_493(2);
	}
	return func_494();
}

bool func_289(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

int func_290(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x4642182a298187d0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (_0x4642182a298187d0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_291(int iParam0)
{
	return iParam0;
}

float func_292(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_293()
{
	if (!func_33(iVar398, 524288))
	{
		if (func_150())
		{
			func_30(&uLocal_400, 524288);
		}
	}
}

void func_294()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iVar369 <= 0 || func_33(iVar401, 64)) || func_33(iVar401, 2048))
	{
		return;
	}
	if (((Local_101.f_46 || func_33(iVar401, 8)) || func_33(iVar401, 256)) || !func_51(&(uLocal_410[1]), 0, 1))
	{
		if (!func_33(iVar401, 64))
		{
			func_495(Local_463[1], &Local_506);
			func_30(&uLocal_403, 64);
		}
		return;
	}
	if (&iLocal_14[1] > 0)
	{
		iLocal_407[1] = func_497(uLocal_410[1], Local_463[1], 20f, &Local_506, &(Local_101.f_192), 0f, 1, 0, 0, func_496(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	}
	if (!func_33(iVar398, 1024) && !func_33(iVar398, 2048))
	{
		switch (&iLocal_14[1])
		{
			case 0:
				func_499(Local_506[0], func_498(7), "", -163964935, 0, 0, 0, 1, 0);
				func_499(Local_506[1], func_498(26), "", 648122183, 0, 0, 0, 1, 0);
				func_500(Local_506[0], 0, 0);
				func_500(Local_506[1], 1, 0);
				iLocal_14[1] = 1;
				break;
			case 1:
				switch (&iLocal_407[1])
				{
					case 0:
						break;
					case 1:
						func_320(Global_35, &(uLocal_410[1]), func_331("AIM"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						func_500(Local_506[0], 0, 0);
						func_500(Local_506[1], 0, 0);
						func_124(&uLocal_454);
						if (func_51(&(uLocal_410[0]), 0, 1))
						{
							func_147(12, 1682361219, 0, "RE_HONOR_INTERVENED", &(uLocal_410[0]), 0, 1065353216, 0);
						}
						iLocal_14[1] = 3;
						break;
				}
				break;
			case 3:
				if (func_127(&uLocal_454) > 1f && func_501())
				{
					func_30(&uLocal_403, 256);
					iLocal_14[1] = 4;
				}
				break;
			case 4:
				break;
		}
	}
	else if (iLocal_17 == 0)
	{
		if (func_33(iVar398, 1024))
		{
			if (!func_33(iVar401, 1))
			{
				if (!func_502(player_id(), uLocal_410[1]))
				{
					iLocal_404[1] = 0;
					func_495(Local_463[1], &Local_506);
					func_499(Local_506[0], func_498(7), "", -163964935, 0, 0, 0, 1, 0);
					func_499(Local_506[1], func_498(10), "", 648122183, 0, 0, 0, 1, 0);
					func_500(Local_506[0], 0, 0);
					func_500(Local_506[1], 1, 0);
					func_30(&uLocal_403, 1);
				}
				else
				{
					if (func_503(Local_506[0], 1, 0))
					{
						func_500(Local_506[0], 0, 0);
					}
					if (func_503(Local_506[1], 1, 0))
					{
						func_500(Local_506[1], 0, 0);
					}
				}
			}
			else
			{
				switch (&iLocal_404[1])
				{
					case 0:
						switch (&iLocal_407[1])
						{
							case 0:
								break;
							case 1:
								func_320(Global_35, &(uLocal_410[1]), func_331("INSULT"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
								func_500(Local_506[0], 0, 0);
								func_500(Local_506[1], 0, 0);
								func_124(&uLocal_454);
								if (func_51(&(uLocal_410[0]), 0, 1))
								{
									func_147(12, 1682361219, 0, "RE_HONOR_INTERVENED", &(uLocal_410[0]), 0, 1065353216, 0);
								}
								func_30(&uLocal_403, 128);
								iLocal_404[1] = &iLocal_404[1] + 1;
								break;
						}
						break;
					case 1:
						if (func_127(&uLocal_454) > 2.5f)
						{
							func_30(&uLocal_403, 256);
						}
						break;
					case 5:
						break;
				}
			}
		}
	}
	else if (func_33(iVar398, 2048))
	{
		if (!func_33(iVar401, 8))
		{
			func_495(Local_463[1], &Local_506);
			func_30(&uLocal_403, 8);
		}
	}
}

int func_295()
{
	if (func_33(iVar398, 8388608))
	{
		return 1;
	}
	if (func_33(iVar398, 1024))
	{
		if (func_504(&(uLocal_410[0]), 25f))
		{
			func_30(&uLocal_400, 8388608);
			return 1;
		}
	}
	else if (func_33(iVar398, 2048) && &iLocal_372[0] >= 7)
	{
		func_30(&uLocal_400, 8388608);
		return 1;
	}
	return 0;
}

int func_296()
{
	if (func_33(iVar398, 16777216))
	{
		return 1;
	}
	if (func_33(iVar398, 8388608))
	{
		if (func_292(&(uLocal_410[1]), Local_101.f_51, 1) < 25f)
		{
			if ((func_337(&(uLocal_410[1]), Global_35, 1, 15f, 0) && !is_entity_playing_anim(&(uLocal_410[1]), &(Local_67[2]), "action_attacker", 1)) && !func_125(Global_35, 1))
			{
				func_30(&uLocal_400, 16777216);
				return 1;
			}
		}
	}
	return 0;
}

void func_297(int iParam0, float fParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_51(iParam0, 0, 1))
	{
		return;
	}
	if (is_ped_male(iParam0))
	{
		func_505(1);
	}
	else
	{
		func_505(0);
	}
	func_506();
	bParam3 = bVar389;
	open_sequence_task(&iVar0);
	if (bParam5 && iParam0 == &uLocal_410[0])
	{
		task_react(0, &(uLocal_410[1]), get_entity_coords(&(uLocal_410[1]), true, false), "Default_Angry", 2.5f, 0, 4);
	}
	if (!func_25(*vLocal_385[0]))
	{
		task_follow_nav_mesh_to_coord(0, *vLocal_385[0], fParam1, -1, 2.5f, 4194305, 40000f);
	}
	if (!func_25(*vLocal_385[1]))
	{
		task_follow_nav_mesh_to_coord(0, *vLocal_385[1], fParam1, -1, 3f, 1, 40000f);
	}
	if (!func_25(*vLocal_385[2]))
	{
		task_follow_nav_mesh_to_coord(0, *vLocal_385[2], fParam1, -1, 1.5f, 1, 40000f);
	}
	if (bParam3)
	{
		task_follow_nav_mesh_to_coord(0, vLocal_379, fParam1, -1, 10f, 4, 40000f);
		task_follow_nav_mesh_to_coord(0, vLocal_382, 1f, 30000, 1.5f, 0, 40000f);
		if (iVar367 != -1)
		{
			uLocal_421 = func_507(iVar367, vLocal_382, uVar387, 0, -1f, 0);
			_task_use_scenario_point(0, uVar413, 0, -1, true, false, 0, false, -1f, false);
		}
		else
		{
			_task_use_nearest_scenario_to_coord(0, vLocal_382, 10f, 0, false, true, false, false);
		}
		task_wander_standard(0, 40000f, 0);
	}
	else
	{
		if (iParam4 != 0)
		{
			task_smart_flee_ped(0, iParam4, 500f, -1, 385, 2f, 0);
		}
		else
		{
			task_smart_flee_coord(0, get_entity_coords(iParam0, true, false), 500f, -1, 385, 2f);
		}
		task_wander_standard(0, 40000f, 0);
	}
	close_sequence_task(iVar0);
	task_perform_sequence(iParam0, iVar0);
	set_ped_keep_task(iParam0, bParam2);
	_0x2208438012482a1a(iParam0, false, false);
}

void func_298()
{
	if (!func_33(iVar398, 1048576))
	{
		if (func_508(Global_35) == &uLocal_410[1])
		{
			set_ped_config_flag(&(uLocal_410[1]), 6, false);
			func_30(&uLocal_400, 1048576);
		}
	}
}

void func_299(int iParam0, bool bParam1, bool bParam2)
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

void func_300()
{
	if (Local_101.f_46)
	{
		if (func_51(&(uLocal_410[1]), 0, 1))
		{
			if (!func_148(&uLocal_844))
			{
				func_124(&uLocal_844);
			}
			else if (!func_33(iVar400, 16))
			{
				fVar0 = func_127(&uLocal_844);
				if (fVar0 > 1f)
				{
					if ((func_51(&(uLocal_410[0]), 0, 1) || func_33(iVar398, 8)) || func_33(iVar398, 16777216))
					{
						if (func_509(fVar0))
						{
							if (iLocal_17 == 0)
							{
								if (iVar420 == 105)
								{
									func_320(&(uLocal_410[1]), Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_320(&(uLocal_410[1]), Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else
							{
								func_320(&(uLocal_410[1]), Global_35, "GENERIC_INSULT_MED_MALE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							func_83(&(uLocal_410[1]), 0);
							_0x66f9eb44342bb4c5(&(uLocal_410[1]), &Local_423);
							func_30(&uLocal_402, 16);
						}
					}
					else
					{
						if (!_is_ped_lassoed(&(uLocal_410[1])))
						{
							if (iVar420 == 105)
							{
								if ((func_33(iVar401, 256) && func_33(iVar398, 8388608)) && !func_51(&(uLocal_410[0]), 0, 1))
								{
									func_320(&(uLocal_410[1]), Global_35, "RE_DM_RHD_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_320(&(uLocal_410[1]), Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if (((iVar420 == 76 && func_33(iVar401, 256)) && func_33(iVar398, 8388608)) && !func_51(&(uLocal_410[0]), 0, 1))
							{
								func_320(&(uLocal_410[1]), Global_35, "RE_DM_VAL_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								func_320(&(uLocal_410[1]), Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							func_320(&(uLocal_410[1]), 0, "GENERIC_ANGRY_SHOUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1988073838, 1, 0, 0);
						}
						func_83(&(uLocal_410[1]), 0);
						_0x66f9eb44342bb4c5(&(uLocal_410[1]), &Local_423);
						func_30(&uLocal_402, 16);
					}
				}
			}
		}
	}
}

void func_301(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_302(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_303()
{
	if (!func_33(iVar398, 8192))
	{
		if (_does_volume_exist(iVar417))
		{
			if (func_227(Global_35, iVar417, 1, 0) && func_253(0, 1, &(uLocal_410[1]), 1))
			{
				if (!_is_ped_hogtied(&(uLocal_410[1])) && !func_33(iVar400, 65536))
				{
					if (iVar420 == 76)
					{
						func_320(&(uLocal_410[1]), Global_35, "STORM_OFF", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iVar420 == 105)
					{
						func_320(&(uLocal_410[1]), Global_35, "STORM_OFF", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_30(&uLocal_402, 65536);
				}
				_task_smart_flee_style_ped(&(uLocal_410[1]), Global_35, 2, 0, -1082130432, -1, 0);
				func_30(&uLocal_400, 8192);
			}
		}
	}
	else if (func_510(iVar417, vLocal_376) > 50f && _0x7f9b9791d4cb71f6(&(uLocal_410[1]), Global_35, false, 0) == 1)
	{
		task_combat_ped(&(uLocal_410[1]), Global_35, 0, 0);
		func_335(&uLocal_400, 8192);
	}
}

int func_304(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_51(uParam1[iVar0], 0, 0))
		{
			if (&uParam0->f_98[iVar0] < 3f)
			{
				if (is_ped_in_combat(uParam1[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_305(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

void func_306(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_307()
{
	if (!func_33(iVar400, 4096))
	{
		if (!func_33(iVar400, 2048))
		{
			if ((func_511(Global_35, 0) == func_291(&(uLocal_410[1])) || func_511(Global_35, 1) == func_291(&(uLocal_410[1]))) || func_511(Global_35, 2) == func_291(&(uLocal_410[1])))
			{
				if (!is_ambient_speech_playing(&(uLocal_410[1])) && !is_scripted_speech_playing(&(uLocal_410[1])))
				{
					func_30(&uLocal_402, 2048);
				}
			}
		}
		else if (!is_ambient_speech_playing(&(uLocal_410[1])) && !is_scripted_speech_playing(&(uLocal_410[1])))
		{
			if ((func_511(Global_35, 0) == func_291(&(uLocal_410[1])) || func_511(Global_35, 1) == func_291(&(uLocal_410[1]))) || func_511(Global_35, 2) == func_291(&(uLocal_410[1])))
			{
				uLocal_399 = iVar397 + 1;
				if (iVar397 > 60)
				{
					if (iVar420 == 105)
					{
						func_320(&(uLocal_410[1]), Global_35, "POST_THEFT", "", -1082130432, 1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_320(&(uLocal_410[1]), Global_35, "POST_THEFT", "", -1082130432, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_30(&uLocal_402, 4096);
				}
			}
		}
	}
}

void func_308()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iVar369 <= 0 || func_33(iVar401, 16)) || func_33(iVar401, 2048))
	{
		return;
	}
	if (func_33(iVar398, 65536) || !func_51(&(uLocal_410[0]), 0, 1))
	{
		if (!func_33(iVar401, 16))
		{
			func_495(Local_463[0], &Local_541);
			func_30(&uLocal_403, 16);
		}
		return;
	}
	if (&iLocal_14[0] > 0)
	{
		iLocal_407[0] = func_497(uLocal_410[0], Local_463[0], 20f, &Local_541, &(Local_101.f_192), 0f, 1, 0, 0, func_496(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	}
	if ((!func_33(iVar398, 1024) && !func_33(iVar398, 2048)) && !Local_101.f_46)
	{
		switch (&iLocal_14[0])
		{
			case 0:
				func_499(Local_541[0], func_498(7), "", -163964935, 0, 0, 0, 1, 0);
				func_499(Local_541[1], func_498(26), "", 648122183, 0, 0, 0, 1, 0);
				func_500(Local_541[0], 0, 0);
				func_500(Local_541[1], 1, 0);
				iLocal_14[0] = 1;
				break;
			case 1:
				if (!func_33(iVar398, 2048))
				{
					switch (&iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							func_320(Global_35, &(uLocal_410[0]), func_331("AIM"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_124(&uLocal_454);
							func_147(12, 1682361219, 0, "RE_HONOR_INTERVENED", &(uLocal_410[0]), 0, 1065353216, 0);
							iLocal_14[0] = 3;
							break;
					}
				}
				break;
			case 3:
				if (func_127(&uLocal_454) > 1f)
				{
					func_30(&uLocal_403, 256);
					iLocal_14[0] = 4;
				}
				break;
			case 4:
				break;
			case 7:
				break;
		}
	}
	else if (!Local_101.f_46)
	{
		if (!func_33(iVar401, 2))
		{
			if (!func_502(player_id(), uLocal_410[0]))
			{
				iLocal_404[0] = 0;
				func_495(Local_463[0], &Local_541);
				func_499(Local_541[0], func_498(7), "", -163964935, 0, 0, 0, 1, 0);
				func_499(Local_541[1], func_498(10), "", 648122183, 0, 0, 0, 1, 0);
				func_500(Local_541[0], 0, 0);
				func_500(Local_541[1], 0, 0);
				func_30(&uLocal_403, 2);
			}
			else
			{
				if (func_503(Local_541[0], 1, 0))
				{
					func_500(Local_541[0], 0, 0);
				}
				if (func_503(Local_541[1], 1, 0))
				{
					func_500(Local_541[1], 0, 0);
				}
			}
		}
		else
		{
			switch (&iLocal_404[0])
			{
				case 0:
					if (!func_51(&(uLocal_410[1]), 0, 1))
					{
						func_500(Local_541[0], 1, 0);
						func_500(Local_541[1], 1, 0);
						iLocal_404[0] = &iLocal_404[0] + 1;
					}
					break;
				case 1:
					switch (&iLocal_407[0])
					{
						case 0:
							func_320(Global_35, &(uLocal_410[0]), func_331("GRT_POS_WOMAN"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_500(Local_541[0], 0, 0);
							func_500(Local_541[1], 0, 0);
							func_124(&uLocal_454);
							func_30(&uLocal_403, 512);
							iLocal_404[0] = &iLocal_404[0] + 1;
							break;
						case 1:
							func_320(Global_35, &(uLocal_410[0]), func_331("GRT_NEG_WOMAN"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_500(Local_541[0], 0, 0);
							func_500(Local_541[1], 0, 0);
							func_124(&uLocal_454);
							func_30(&uLocal_403, 1024);
							iLocal_404[0] = &iLocal_404[0] + 1;
							break;
					}
					break;
				case 2:
					if ((func_127(&uLocal_454) > 1f && !is_scripted_speech_playing(Global_35)) && !is_scripted_speech_playing(&(uLocal_410[0])))
					{
						if (iVar420 == 76 && func_33(iVar401, 512))
						{
							func_320(&(uLocal_410[0]), Global_35, "PLAYER_LOITERING", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_320(&(uLocal_410[0]), Global_35, "GET_AWAY_FROM_ME", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_404[0] = &iLocal_404[0] + 1;
					}
					break;
				case 3:
					break;
			}
		}
	}
	else
	{
		if (!func_33(iVar401, 4))
		{
			if (!func_502(player_id(), uLocal_410[0]))
			{
				func_495(Local_463[0], &Local_541);
				func_499(Local_541[0], func_498(7), "", -163964935, 0, 0, 0, 1, 0);
				func_499(Local_541[1], func_498(10), "", 648122183, 0, 0, 0, 1, 0);
				func_500(Local_541[0], 1, 0);
				func_500(Local_541[1], 0, 0);
				iLocal_404[0] = 0;
				func_30(&uLocal_403, 4);
			}
			else
			{
				if (func_503(Local_541[0], 1, 0))
				{
					func_500(Local_541[0], 0, 0);
				}
				if (func_503(Local_541[1], 1, 0))
				{
					func_500(Local_541[1], 0, 0);
				}
			}
		}
		if (func_33(iVar401, 4))
		{
			switch (&iLocal_404[0])
			{
				case 0:
					if (func_340())
					{
						if (!func_503(Local_541[0], 1, 0))
						{
							func_500(Local_541[0], 1, 0);
						}
						if (func_503(Local_541[1], 1, 0))
						{
							func_500(Local_541[1], 0, 0);
						}
						iLocal_404[0] = &iLocal_404[0] + 1;
					}
					else if (!_0x3ab6c7b0bb0df4b1(&(uLocal_410[0]), -1))
					{
						if (func_503(Local_541[0], 1, 0))
						{
							func_500(Local_541[0], 0, 0);
						}
						if (func_503(Local_541[1], 1, 0))
						{
							func_500(Local_541[1], 0, 0);
						}
						iLocal_404[0] = &iLocal_404[0] + 1;
					}
					break;
				case 1:
					if (!func_33(iVar401, 32))
					{
						if (!_0x3ab6c7b0bb0df4b1(&(uLocal_410[0]), -1))
						{
							if (func_503(Local_541[0], 1, 0))
							{
								func_500(Local_541[0], 0, 0);
							}
							if (func_503(Local_541[1], 1, 0))
							{
								func_500(Local_541[1], 0, 0);
							}
						}
						else
						{
							switch (&iLocal_407[0])
							{
								case 0:
									func_320(Global_35, &(uLocal_410[0]), func_331("GRT_POS_ASK_IF_OK"), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									func_500(Local_541[0], 0, 0);
									func_500(Local_541[1], 0, 0);
									func_30(&uLocal_403, 32);
									break;
								case 1:
									break;
							}
						}
					}
					break;
				case 2:
					switch (&iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							break;
					}
					break;
				case 3:
					if (func_127(&uLocal_454) > 1f && !is_scripted_speech_playing(Global_35))
					{
						if (!is_entity_occluded(&(uLocal_410[0])))
						{
							if (iVar420 == 76)
							{
								func_320(&(uLocal_410[0]), Global_35, "RE_FM_VAL_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iVar420 == 105)
							{
								func_320(&(uLocal_410[0]), Global_35, "RE_FM_RHD_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_320(&(uLocal_410[0]), Global_35, "RELIEVED_REACT", 0, -1082130432, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
						iLocal_404[0] = &iLocal_404[0] + 1;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_309()
{
	if (!get_is_task_active(&(uLocal_410[0]), 3))
	{
		return true;
	}
	if (_is_anim_scene_started(Local_80, false) && _0x005e6f28dd7ed58d(Local_80, "PED_VICTIM"))
	{
		return true;
	}
	return false;
}

void func_310(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	iLocal_836 = add_shocking_event_for_entity(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, -1f, 180f, false, false, -1, -1);
}

bool func_311()
{
	if (is_entity_dead(&(uLocal_410[0])) || func_33(iVar398, 128))
	{
		return true;
	}
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		if (func_33(iVar398, 1024))
		{
			func_34(uLocal_413[0]);
			func_299(&(uLocal_410[0]), 1, 0);
			return true;
		}
	}
	if (!func_33(iVar400, 256))
	{
		if (!func_104())
		{
			func_30(&uLocal_402, 256);
		}
	}
	if (has_anim_event_fired(&(uLocal_410[0]), -1894130223))
	{
		return false;
	}
	else if (!is_ped_ragdoll(&(uLocal_410[0])))
	{
		open_sequence_task(&iVar0);
		if (func_51(&(uLocal_410[1]), 0, 1) && !func_33(iVar398, 2048))
		{
			task_smart_flee_ped(0, &(uLocal_410[1]), (20f / 2f), 7000, 1, 2f, 0);
			task_cower(0, 6000, &(uLocal_410[1]), 0);
			task_smart_flee_coord(0, Local_101.f_51, 200f, -1, true, 2f);
			task_smart_flee_ped(0, Global_35, 200f, -1, 0, 2f, 0);
			task_wander_standard(0, 40000f, 0);
			func_30(&uLocal_400, 1073741824);
		}
		else if (!func_33(iVar398, 65536) && !func_33(iVar398, 131072))
		{
			func_30(&uLocal_400, 64);
			func_335(&uLocal_400, 65536);
			task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			if ((func_33(iVar398, 131072) && !func_104()) && func_253(0, 1, &(uLocal_410[0]), 1))
			{
				func_149(&(uLocal_410[0]), "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			}
			task_smart_flee_ped(0, Global_35, 200f, -1, 0, 1077936128, 0);
		}
		func_301(&(uLocal_410[0]), &iVar0, 0, 0, 1, 1);
		force_entity_ai_and_animation_update(&(uLocal_410[0]), true);
		set_ped_keep_task(&(uLocal_410[0]), true);
		func_30(&uLocal_400, 128);
		return true;
	}
	return false;
}

void func_312()
{
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		if (is_ped_ragdoll(&(uLocal_410[0])) || !is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[3]), Local_67[3]->f_1, 1))
		{
			func_34(uLocal_413[0]);
			func_299(&(uLocal_410[0]), 1, 0);
		}
	}
}

void func_313()
{
	if (func_33(iVar400, 1024))
	{
		return;
	}
	if (!func_148(&uLocal_856))
	{
		func_124(&uLocal_856);
	}
	else if ((func_127(&uLocal_856) > 1.5f || iVar420 == 105) || iVar420 == 76)
	{
		switch (iVar420)
		{
			case 76:
				func_320(&(uLocal_410[0]), Global_35, "RE_DM_VAL_V1_RECOVER_B", 0, -1082130432, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 105:
				func_320(&(uLocal_410[0]), Global_35, "RE_DM_RHD_V1_RECOVER_A", 0, -1082130432, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 92:
				func_320(&(uLocal_410[0]), Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
		}
		func_30(&uLocal_402, 1024);
	}
}

void func_314(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_30(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_335(&(Var0.f_5), 1);
	if (!is_entity_dead(*uParam0))
	{
		_0x66f9eb44342bb4c5(*uParam0, &Var0);
	}
}

void func_315()
{
	if (!func_33(iVar398, -2147483648))
	{
		if (func_33(iVar398, 1073741824))
		{
			if (get_script_task_status(&(uLocal_410[0]), 242628503, true) == 1)
			{
				iVar0 = get_sequence_progress(&(uLocal_410[0]));
				if (iVar0 >= 2)
				{
					func_30(&uLocal_400, -2147483648);
				}
			}
		}
	}
}

bool func_316()
{
	if (func_33(iVar398, -2147483648))
	{
		return true;
	}
	return false;
}

void func_317(var uParam0, bool bParam1)
{
	if (bParam1 || !func_148(uParam0))
	{
		func_124(uParam0);
	}
}

void func_318(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return;
	}
	if (func_512(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_513())
	{
		iVar1 = 0;
	}
	func_514(iParam0, iVar1);
}

char* func_319()
{
	if (iVar420 == 76)
	{
		return "RE_DM_VAL_V1_PLAYER";
	}
	if (iVar420 == 105)
	{
		return "RE_DM_RHD_V1_PLAYER";
	}
	return "RE_DM_VAL_V2_DROWN_PLAYER";
}

bool func_320(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_515(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_321()
{
	if (!func_33(iVar398, 262144))
	{
		func_50(&uLocal_796, 1);
		func_49(&uLocal_796, 1);
		func_30(&uLocal_400, 262144);
	}
}

void func_322()
{
	if (iLocal_17 == 1 && !Local_101.f_46)
	{
		if (func_25(Local_866.f_6))
		{
			_get_anim_scene_entity_matrix(Local_80, "PED_VICTIM", &Local_866, true, "pblAll", 2);
		}
		else if (_0xb89fcff19dafff28(Local_80, "PED_VICTIM"))
		{
			if (func_292(&(uLocal_410[0]), Local_866.f_6, 1) < 3f)
			{
				set_ped_max_move_blend_ratio(&(uLocal_410[0]), 1.5f);
			}
		}
	}
}

void func_323(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (func_51(iParam0, 0, 1))
	{
		func_516(uParam2, 1, 1, 1, 0);
		func_495(iParam1, uParam2);
		func_517(iParam1, 0);
		_0xe737d5f14304a2ec(iParam0, get_player_index(), 120000);
		if (iParam0 == &uLocal_410[1])
		{
			_0x24c82ef607105faa(&(uLocal_410[1]), -920810745);
		}
		else if (iParam0 == &uLocal_410[0])
		{
			_0x24c82ef607105faa(&(uLocal_410[0]), 980351091);
		}
		set_blocking_of_non_temporary_events(iParam0, !bParam3);
		func_354(iParam0, 1088421888, 0, 0);
		set_ped_config_flag(iParam0, 315, true);
		func_182(&uLocal_418, &uLocal_420);
		func_30(&uLocal_403, 2048);
	}
}

void func_324()
{
	if (func_33(iVar398, 65536))
	{
		if (!func_33(iVar400, 16384))
		{
			if (!func_148(&uLocal_460))
			{
				func_124(&uLocal_460);
			}
			else if (func_127(&uLocal_460) > 1f && func_253(0, 1, &(uLocal_410[0]), 1))
			{
				func_144();
			}
		}
	}
}

void func_325()
{
	if (func_33(iVar398, 1024))
	{
		if (func_52())
		{
			func_518("REDM_GRT_J2", 1, 1);
		}
		else
		{
			func_518("REDM_GRT_A2", 1, 1);
		}
	}
	else if (func_52())
	{
		func_518("REDM_GRT_J1", 1, 1);
	}
	else
	{
		func_518("REDM_GRT_A1", 1, 1);
	}
}

void func_326()
{
	if (func_33(iVar399, 32))
	{
		if (!func_33(iVar398, 268435456))
		{
			if (func_153())
			{
				func_519();
				func_30(&uLocal_400, 268435456);
			}
		}
	}
}

int func_327(var uParam0, bool bParam1)
{
	if (!is_entity_dead(*uParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(*uParam0, 186, false);
			decor_set_bool(*uParam0, "bDeadOrAlive", true);
		}
		decor_set_bool(*uParam0, "bIsCriminal", true);
		func_493(4);
		return 1;
	}
	return 0;
}

void func_328(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_333() - fParam1);
	func_520(uParam0, 1);
	func_521(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_329(int iParam0)
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

int func_330(int iParam0)
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

char[] func_331(char* sParam0)
{
	StringCopy(&cVar0, "RE_DM_", 64);
	if (iVar419 == 76)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	else if (iVar419 == 105)
	{
		StringConCat(&cVar0, "RHD_", 64);
	}
	else if (iVar419 == 92)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	if (iLocal_17 == 0)
	{
		StringConCat(&cVar0, "V1_", 64);
	}
	else if (iLocal_17 == 1)
	{
		StringConCat(&cVar0, "V2_", 64);
	}
	if (!is_string_null_or_empty(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	uVar8 = func_522(cVar0);
	return uVar8;
}

bool func_332(var uParam0)
{
	return func_346(*uParam0, 2);
}

float func_333()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_334(int iParam0)
{
	switch (iVar419)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return 234475003;
						case 15:
							return 1194892292;
						case 17:
							return -1604552848;
						case 18:
							return -189454566;
						case 14:
							return 230997717;
						case 16:
							return -212649225;
						case 19:
							return -189454566;
					}
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return -526512643;
						case 15:
							return -1306145892;
						case 17:
							return 201003381;
						case 26:
							return -1934973985;
						case 27:
							return 1119428701;
						case 18:
							return 2080523210;
						case 19:
							return -189454566;
						case 14:
							return -184699597;
						case 16:
							return 2146050495;
					}
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					switch (iParam0)
					{
						case 15:
							return -146115896;
						case 1:
							return 1991258338;
						case 16:
							return 1017184366;
						case 3:
							return 2065234346;
						case 5:
							return 50580232;
						case 6:
							return -440627078;
						case 2:
							return -1960230997;
						case 4:
							return 1991705139;
						case 7:
							return -380506787;
						case 28:
							return -1652129750;
					}
					break;
			}
			break;
	}
	return -1;
}

void func_335(int iParam0, int iParam1)
{
	func_523(iParam0, iParam1);
}

void func_336(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_an_object(iParam0))
	{
		return;
	}
	else if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_524(iParam0);
		func_525(iVar0, _0xc346a546612c49a9(iParam0));
	}
	if (bParam1)
	{
		func_526(iParam0, 0);
	}
}

bool func_337(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_527(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_528(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_338()
{
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		if ((has_anim_event_fired(&(uLocal_410[0]), -2104823024) || func_340()) || is_entity_playing_anim(&(uLocal_410[0]), "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
		if (is_entity_playing_anim(&(uLocal_410[0]), "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
	}
	return false;
}

int func_339(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_529(iParam0, vVar0, iParam2);
}

bool func_340()
{
	if (func_51(&(uLocal_410[0]), 0, 1))
	{
		if ((is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v1_victim", 1) || is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_v2_victim", 1)) || is_entity_playing_anim(&(uLocal_410[0]), &(Local_67[0]), "brkout_female_quick_victim", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_341(var uParam0, float fParam1)
{
	if (func_442(uParam0, fParam1))
	{
		func_146(uParam0);
		return true;
	}
	return false;
}

bool func_342(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_51(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_51(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = func_105(iParam0, iParam2, 0, 1);
			task_look_at_entity(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_530(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432) || func_105(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				task_follow_to_offset_of_entity(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 0.1f, 1, 1, 0, 0, 1);
			}
			else
			{
				task_turn_ped_to_face_entity(iParam0, iParam2, 0, -1082130432, -1082130432, -1082130432);
			}
			if (uParam4->f_180)
			{
				if (func_531(iParam0, iParam2, 1) >= 16f)
				{
					task_go_to_entity(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					func_124(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (func_105(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				task_smart_flee_ped(iParam0, iParam2, 1000f, -1, 0, 1077936128, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (func_105(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_341(&(uParam4->f_191), uParam4->f_189) || func_531(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || func_530(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || has_entity_clear_los_to_entity(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						task_follow_and_converse_with_ped(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520, 1073741824);
					}
					else
					{
						func_532(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_337(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || func_532(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (func_253(0, 1, iParam0, uParam4->f_182))
				{
					if (!is_string_null_or_empty(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							task_play_anim(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = get_game_timer();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					func_533(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296, 0, 0, 0, 1);
					func_534(uParam4);
					if (uParam4->f_194 && !is_string_null_or_empty(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!is_string_null_or_empty(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!func_51(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (func_253(0, 1, iParam0, uParam4->f_182))
			{
				if (!is_string_null_or_empty(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						task_play_anim(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!is_string_null_or_empty(&(uParam4->f_26)))
					{
						task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				func_533(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (func_253(0, 1, iParam0, uParam4->f_182))
			{
				if (func_535(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, 992265328, 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((get_game_timer() - *uParam4) > 18000)
				{
					func_536(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_253(uParam4->f_187, 1, iParam0, uParam4->f_182) && !is_ambient_speech_playing(iParam0)) && !is_scripted_speech_playing(iParam0))
			{
				if (!is_string_null(&(uParam4->f_54)))
				{
					*uParam4 = get_game_timer();
					func_533(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_537(uParam4->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						func_538(uParam4->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_253(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (get_game_timer() - *uParam4) > uParam4->f_190))
			{
				if (does_blip_exist(*iParam1))
				{
					remove_blip(iParam1);
				}
				if (uParam4->f_78)
				{
					task_wander_standard(iParam0, 40000f, 0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_208)))
				{
					func_539(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (has_entity_been_damaged_by_entity(iParam0, Global_35, 1, 1))
	{
		task_smart_flee_ped(iParam0, Global_35, 1000f, -1, 0, 1077936128, 0);
		return true;
	}
	return false;
}

int func_343(int iParam0)
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

void func_344(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_540();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_541(iParam0);
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
	if (func_484(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_52())
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
	Global_40.f_11095.f_35 = func_542(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_540();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_543(iVar1);
		func_545(func_544(), 0, 4000);
		func_546(Global_40.f_11095.f_35);
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
		func_547(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_549(func_548(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_343(14))
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
					sParam4 = func_550(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_490(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_490(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_549(func_548(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_343(4))
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
					sParam4 = func_550(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_490(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_490(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_548(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_551(10, 1);
	}
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_346(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_347(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_348(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_349(int iParam0, int iParam1)
{
	if (!func_348(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

char* func_350(char* sParam0)
{
	return sParam0;
}

int func_351(int iParam0, int iParam1)
{
	iVar1 = func_552(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1 || &Global_17504.f_1003[iVar0] == -1)
		{
			Global_17504.f_1003[iVar0] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_352(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_553(iVar2))
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

int func_353(int iParam0)
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

int func_354(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_355(int iParam0)
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

void func_356(int* iParam0)
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

void func_357(int iParam0)
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

void func_358(var uParam0)
{
	if (func_554(uParam0->f_162))
	{
		func_536(&(uParam0->f_162), 1, 1);
	}
	if (func_554(uParam0->f_163))
	{
		func_536(&(uParam0->f_163), 1, 1);
	}
	if (func_554(uParam0->f_164))
	{
		func_536(&(uParam0->f_164), 1, 1);
	}
	if (func_554(uParam0->f_165))
	{
		func_536(&(uParam0->f_165), 1, 1);
	}
}

void func_359(var uParam0)
{
	if (uParam0->f_170)
	{
		func_555();
	}
}

void func_360(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_306(32);
		func_54(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_361(var uParam0)
{
	if (func_556(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_557(uParam0->f_3);
		func_225(uParam0, 0, 1);
		func_558(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_559(0, 0);
		return true;
	}
	return false;
}

void func_362()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_363(int iParam0)
{
	if (!func_204(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_364(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_365(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_523(&iVar1, -2147483648);
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

int func_366()
{
	return get_player_group(get_player_index());
}

bool func_367(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_161() != -1)
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

bool func_368(int iParam0)
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

int func_369(int iParam0)
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

int func_370(int iParam0)
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

bool func_371(int iParam0, int iParam1, var uParam2)
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

Vector3 func_372(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_25(*(*uParam1)[iVar0]))
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

void func_373(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_40("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_374(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_375(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_25(vParam0))
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
		if (func_247(vParam0))
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
	func_560(iVar0, bParam8);
	return iVar0;
}

void func_376(int iParam0)
{
	if (!func_204(iParam0))
	{
		return;
	}
	func_561(iParam0);
}

void func_377(var uParam0, vector3 vParam1)
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

int func_378(int iParam0)
{
	if (func_97(iParam0, 2))
	{
		return 200;
	}
	if (func_97(iParam0, 4))
	{
		return 70;
	}
	if (func_97(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_379(int iParam0)
{
	if (func_76(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_41() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_76(iParam0, 2);
		bVar1 = func_76(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_231())
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

void func_380(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_97(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_381(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_97(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_97(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_382(int iParam0, int iParam1)
{
	iVar0 = (func_370(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_383(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_25(vParam1))
	{
		return false;
	}
	if (func_388(iParam0, vParam1))
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
	if (func_151(iParam0))
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

bool func_384(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_385(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_176(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_391(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_273();
			iParam4->f_2 = func_292(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_391(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_273();
		iParam4->f_2 = func_292(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_386(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_273() - *uParam0) >= iParam1;
	}
	return false;
}

int func_387(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_25(*uParam0->f_12[iVar0]))
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

bool func_388(int iParam0, vector3 vParam1)
{
	if (!func_76(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_562(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_76(iParam0, 33554432))
	{
		if (func_563(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_389(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_97(iParam0, 128))
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
	if (func_76(iParam0, 1) && !func_76(iParam0, 2))
	{
		if (func_76(iParam0, 4096) || func_76(iParam0, 2048))
		{
			if (func_564(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_390(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_565())
	{
		return false;
	}
	return true;
}

bool func_391(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_566(vVar0, vParam0) > func_566(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_392(int iParam0)
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

int func_393(int iParam0)
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

Vector3 func_394(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_395(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_92((fParam0 + fParam1));
}

int func_396(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_567(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_568(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_569(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_569(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_570(iVar0))
		{
			func_400(iVar0, &(uParam1->f_23), 0);
		}
		if (func_570(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_571(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_572(&(uParam1->f_22)));
			func_299(iVar0, func_573(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_574(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_575(&(uParam1->f_22)))
		{
			func_576(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_577(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_33(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_570(iVar0))
		{
			func_579(iVar0, !func_578(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_580(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_581(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_581(&(uParam1->f_22)));
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

bool func_397(int iParam0, int iParam1)
{
	if (func_582(iParam0) != -1)
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

bool func_398(var uParam0)
{
	return func_33(*uParam0, 32);
}

int func_399(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_400(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_51(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_401(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_402(int iParam0)
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

bool func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_583(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_584((386 + iVar28), 1);
			if (func_585(iParam0, &Var0, iVar5, 0))
			{
				if (func_586(iParam0, &Var6, iVar5))
				{
					Var29 = { func_587(iParam0, Var0, iVar5, 0) };
					func_588(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_589(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_590(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_591(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

void func_404(int iParam0, int iParam1, float fParam2)
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

bool func_405(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_406(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_407(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_166(1);
	}
	else
	{
		iVar0 = func_353(iParam0);
	}
	return iVar0;
}

void func_408(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_592(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_593(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_409(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_97(iParam0, 8192))
	{
		iVar0 = func_593(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_410(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_54(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_411(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_76(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_594(262144, iVar0, 0, 1);
		}
	}
	if (func_76(iParam0, 128))
	{
		func_594(128, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 524288))
	{
		func_594(524288, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 536870912))
	{
		func_594(536870912, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 4194304))
	{
		func_594(4194304, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 8388608))
	{
		func_594(8388608, iVar0, 0, 1);
	}
}

void func_412(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_413(bool bParam0)
{
	if (!bParam0 && func_595(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_414()
{
	return Global_1310750->f_16037;
}

bool func_415(int iParam0)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_416(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_204(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_596(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_597(Global_1393447, 1);
	func_598();
	func_599();
	func_600((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_273() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_601();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_594(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_594(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_594(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_602(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_603(to_float(iVar0), 1, 0);
	}
	else
	{
		func_603((to_float(200) / 3f), 1, 0);
	}
}

bool func_418(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_419(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_420(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_421(int iParam0)
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

bool func_422()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_423(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_424(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_423(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_333() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_425(bool bParam0, bool bParam1, bool bParam2)
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

int func_426(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_427(int iParam0)
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

bool func_428(int iParam0)
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

bool func_429(int iParam0)
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

bool func_430(int iParam0)
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

bool func_431(int iParam0)
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

bool func_432(int iParam0)
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

bool func_433(int iParam0)
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

bool func_434(bool bParam0, int iParam1, int iParam2)
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

bool func_435()
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

int func_436(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_605(func_604(iParam0));
}

bool func_437(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_438(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_439(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_440(int iParam0)
{
	return func_76(iParam0, Global_1310750->f_16072 | 64);
}

bool func_441(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_442(var uParam0, float fParam1)
{
	if (!func_148(uParam0))
	{
		return false;
	}
	if (func_127(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_444(int iParam0, bool bParam1)
{
	if (func_51(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_445(float fParam0)
{
	if (func_606(1))
	{
		return true;
	}
	if (func_148(&uLocal_0) && !func_341(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_446(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_607();
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
			func_608(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_447(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_448(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_161() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_609(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_609(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_475(iVar0) == -1)
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

void func_449(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_610(iParam0);
	}
}

bool func_450(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_475(iParam2);
	}
	else
	{
		iVar1 = func_474(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_475(iParam0);
	}
	else
	{
		iVar0 = func_474(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
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

float func_451(int iParam0, int iParam1)
{
	return func_105(iParam0, iParam1, 1, 1);
}

float func_452(int iParam0)
{
	return iParam0->f_26;
}

bool func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 134217728);
	}
	else
	{
		func_159(iParam0, 134217728);
	}
}

bool func_455(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_105(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_611(iVar0, 0)))
		{
			if (func_612(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_456(int iParam0)
{
	return iParam0->f_17;
}

bool func_457(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
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

int func_458(int iParam0)
{
	return iParam0->f_18;
}

bool func_459(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_611(iVar0, 0)))
		{
			if (func_613(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_460(int iParam0)
{
	return iParam0->f_23;
}

int func_461(int iParam0)
{
	return iParam0->f_21;
}

int func_462(int iParam0)
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

bool func_463(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_614(iParam0, vParam4, 0.5f))
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

int func_464(int iParam0)
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
	if (func_285(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_465(int iParam0)
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

bool func_466(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_238(iParam1))
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

bool func_467(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_238(iParam1))
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

bool func_468(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_238(iParam1))
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

bool func_469(int iParam0, int iParam1)
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

bool func_470(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_615(iParam0, 1, 0, 0) != 2055893578)
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

bool func_471(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_472(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_292(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_473(int iParam0)
{
	return iParam0->f_24;
}

int func_474(int iParam0)
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

int func_475(int iParam0)
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

int func_476(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_469(Global_35, &iVar1))
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
		fVar2 = func_105(iParam0, player_ped_id(), 0, 1);
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
		if (func_105(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_477(int iParam0, int iParam1, bool bParam2)
{
	func_434(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_478(iParam1, iVar0))
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
				if (!bParam2 || !func_478(iParam1, iVar1))
				{
					if (func_292(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
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

bool func_479(int iParam0)
{
	if (func_52())
	{
		return false;
	}
	return func_616((*Global_1347702)[58]->f_15, 1);
}

int func_480(int iParam0)
{
	return iParam0->f_20;
}

int func_481(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_482(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_483(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_617(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_617(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_617(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_484(int iParam0)
{
	if (!func_618(iParam0))
	{
		return false;
	}
	return func_619(iParam0);
}

bool func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(18);
		case 2:
			return func_484(20);
		case 1:
			return func_484(19);
		default:
			break;
	}
	return true;
}

int func_486(int iParam0)
{
	return func_620(&(Global_40.f_11095.f_11[iParam0]));
}

void func_487(int iParam0, float fParam1, bool bParam2)
{
	if (func_161() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_484(31))
	{
		return;
	}
	iVar0 = func_486(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_486(iParam0);
	if (func_621(iParam0) && func_622(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_623(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_624(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_626(func_625(iParam0), 0);
					}
					func_627(iParam0, iVar2, iVar3);
					func_628(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_488(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

var func_490(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_629(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_491()
{
	if (func_52())
	{
		if (!func_630(69))
		{
			return false;
		}
	}
	else if (func_631())
	{
		if (!func_630(7))
		{
			return false;
		}
	}
	return true;
}

void func_492(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 - (Global_1395482->f_10 && iParam0));
}

void func_493(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 || iParam0);
}

bool func_494()
{
	return func_632(2);
}

void func_495(int* iParam0, var uParam1)
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
	func_633(iParam0, uParam1, 1);
	func_516(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_496(int iParam0, int iParam1, int iParam2)
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

int func_497(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_634(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_635(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_636(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_637(558))
				{
					func_626(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_498(int iParam0)
{
	if (func_638(iParam0))
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

void func_499(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_554(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_639(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_640(iParam0->f_6, iParam0->f_5, 0);
			}
			func_641(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_642(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_500(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_643(iParam0, 13))
	{
		func_644(iParam0, 0);
	}
	else
	{
		func_645(iParam0, 0);
	}
	if (func_554(iParam0->f_6))
	{
		if (bParam2)
		{
			func_536(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_501()
{
	if ((iLocal_17 == 1 && _is_anim_scene_started(Local_80, false)) && _0x8d81e7824b7753f7(Local_80, "action", 1))
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0, var uParam1)
{
	uVar0 = *uParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_503(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_554(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_646(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_504(int iParam0, float fParam1)
{
	if (is_entity_on_screen(iParam0) && func_337(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

void func_505(bool bParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					iLocal_397 = 1;
					vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
					if (bParam0)
					{
						vLocal_382 = { -304.634f, 811.7f, 120.976f };
						fLocal_395 = 112.808f;
						iLocal_375 = 830847823;
					}
					else
					{
						vLocal_382 = { -304.825f, 811.922f, 120.976f };
						fLocal_395 = -164.278f;
						iLocal_375 = 2087366558;
					}
					break;
				case 1:
					switch (Local_101.f_51.f_4)
					{
						case 0:
							*vLocal_385[0] = { -305.9674f, 825.1412f, 118.3967f };
							*vLocal_385[1] = { -302.6452f, 814.72f, 117.4108f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							iLocal_397 = 1;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = 2087366558;
							break;
						case 1:
							*vLocal_385[1] = { -225.7226f, 763.439f, 116.2204f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							iLocal_397 = 1;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = 2087366558;
							break;
						case 2:
							*vLocal_385[0] = { -275.3085f, 641.9633f, 112.379f };
							*vLocal_385[1] = { -230.2025f, 687.0725f, 112.3302f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							iLocal_397 = 1;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = 2087366558;
							break;
					}
					break;
			}
			break;
		case 105:
			vLocal_379 = { 1353.808f, -1377.04f, 79.50304f };
			iLocal_397 = 1;
			if (bParam0)
			{
				vLocal_382 = { 1348.383f, -1377.68f, 83.289f };
				fLocal_395 = -10.462f;
				iLocal_375 = -719188272;
			}
			else
			{
				vLocal_382 = { 1348.618f, -1376.747f, 83.289f };
				fLocal_395 = 158.583f;
				iLocal_375 = 2087366558;
			}
			break;
		case 92:
			vLocal_379 = { 2952.098f, 523.3885f, 44.46711f };
			vLocal_382 = { 2941.216f, 522.585f, 44.331f };
			fLocal_395 = 164.833f;
			iLocal_397 = 1;
			switch (Local_101.f_51.f_4)
			{
				case 0:
					*vLocal_385[0] = { 2970.667f, 462.3464f, 48.38306f };
					iLocal_375 = -22664287;
					break;
				case 1:
					break;
			}
			break;
	}
}

void func_506()
{
	if (!func_25(vLocal_382))
	{
		if (!_does_volume_exist(iVar416))
		{
			if (!is_sphere_visible(vLocal_382, 1f))
			{
				func_15(vLocal_382, 0.5f, 1, 0, 0, 0, 0);
			}
			func_88(&uLocal_418, &uLocal_420, vLocal_382, 0f, 0f, 0f, 0.5f, 0.5f, 0.5f, 0, 0, 1, 0, 0);
		}
	}
}

var func_507(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, iParam5, fParam6, iParam7);
}

int func_508(int iParam0)
{
	iVar0 = func_647(iParam0);
	if (does_entity_exist(iVar0) && is_ped_injured(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_509(float fParam0)
{
	if (!func_33(iVar397, 16777216))
	{
		return true;
	}
	else if (fParam0 > 4f)
	{
		return true;
	}
	else if ((&Local_101.f_98[1] < 4f && func_527(&(uLocal_410[1]), Global_35, 0)) && fParam0 > 2f)
	{
		return true;
	}
	return false;
}

float func_510(int iParam0, vector3 vParam1)
{
	if (_0xf256a75210c5c0eb(iParam0, vParam1))
	{
		return 0f;
	}
	iVar39 = -1;
	fVar40 = 9999999f;
	vVar42 = { _0xf70f00013a62f866(iParam0) };
	vVar45 = { _0x18675bc914891122(iParam0) };
	vVar48 = { _0x3e2a25b2416dd67e(iParam0) };
	fVar51 = (vVar48.x / 2f);
	fVar52 = (vVar48.y / 2f);
	vVar15.x = fVar51;
	vVar15.f_1 = fVar52;
	vVar18.x = -fVar51;
	vVar18.f_1 = -fVar52;
	vVar12 = { -fVar51, fVar52, 0f };
	vVar21 = { fVar51, -fVar52, 0f };
	vVar0 = { _get_object_offset_from_coords(vVar42, vVar45.z, vVar12) };
	vVar3 = { _get_object_offset_from_coords(vVar42, vVar45.z, vVar15) };
	vVar6 = { _get_object_offset_from_coords(vVar42, vVar45.z, vVar18) };
	vVar9 = { _get_object_offset_from_coords(vVar42, vVar45.z, vVar21) };
	fVar33[0] = vdist2(vVar0, vParam1);
	fVar33[1] = vdist2(vVar3, vParam1);
	fVar33[2] = vdist2(vVar6, vParam1);
	fVar33[3] = vdist2(vVar9, vParam1);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		if (&fVar33[iVar38] < fVar40)
		{
			iVar39 = iVar38;
			fVar40 = &fVar33[iVar38];
		}
		iVar38++;
	}
	vVar0.f_2 = vParam1.z;
	vVar3.f_2 = vParam1.z;
	vVar6.f_2 = vParam1.z;
	vVar9.f_2 = vParam1.z;
	if (iVar39 > -1)
	{
		switch (iVar39)
		{
			case 0:
				vVar24 = { vVar0 };
				vVar27 = { vVar3 };
				vVar30 = { vVar6 };
				break;
			case 1:
				vVar24 = { vVar3 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 2:
				vVar24 = { vVar6 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 3:
				vVar24 = { vVar9 };
				vVar27 = { vVar6 };
				vVar30 = { vVar3 };
				break;
		}
	}
	fVar41 = func_649(func_648(vVar24, vVar27, vParam1, 0), func_648(vVar24, vVar30, vParam1, 0));
	return fVar41;
}

int func_511(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar1 = _0x5463c962bc7777c3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_512(var uParam0)
{
	if (-1829635046 == func_650(81053684))
	{
		if (func_651(uParam0))
		{
			return true;
		}
	}
	else if (func_652(-525676072, uParam0))
	{
		if (func_651(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_513()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_514(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_653();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_542(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_542(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_654())
		{
			func_655(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_656())
		{
			func_655(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_657())
		{
			func_655(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_658())
	{
		func_655(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_549(func_548(661720433), iVar1);
	iVar10 = func_653();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

int func_515(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_231())
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
				if (func_659(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_105(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_124(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_660(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_661(func_149(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_516(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_554((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_536(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_517(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_146(&(iParam0->f_18));
}

void func_518(char* sParam0, bool bParam1, bool bParam2)
{
	if (!is_string_null_or_empty(sParam0))
	{
		Global_1395482->f_11 = { func_662(sParam0) };
		if (bParam1)
		{
			func_493(8);
		}
		if (bParam2)
		{
			func_493(16);
		}
	}
}

void func_519()
{
	func_663();
	func_664(uLocal_410[1]);
	set_ped_config_flag(&(uLocal_410[1]), 6, false);
}

void func_520(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_521(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_522(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_523(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_524(int iParam0)
{
	iVar0 = 0;
	if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_665(iParam0);
	}
	return iVar0;
}

void func_525(int iParam0, var uParam1)
{
	if (does_entity_exist(Global_35) && !Global_1935630->f_12)
	{
		iVar0 = func_666(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_667(iParam0))
			{
				iVar1 = 463;
			}
			iVar2 = func_668(iParam0);
			func_669(iVar1, iVar2, 1);
		}
	}
}

void func_526(int iParam0, int iParam1)
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

bool func_527(int iParam0, int iParam1, float fParam2)
{
	return func_614(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_528(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_529(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_670(vVar3, vVar6);
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
	if (func_671(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_530(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_292(iParam0, Global_36, 1);
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

float func_531(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_152(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_532(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, 0, 3f, 0.55f, -1082130432);
		task_turn_ped_to_face_entity(0, Global_35, iParam2, 2f, 0.2f, -1082130432);
		close_sequence_task(iVar0);
		if (bParam3)
		{
			_task_perform_sequence_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			task_perform_sequence(iParam0, iVar0);
		}
		clear_sequence_task(&iVar0);
		*uParam1 = 1;
	}
	if ((get_script_task_status(iParam0, 242628503, true) == 1 && get_sequence_progress(iParam0) == 1) || get_script_task_status(iParam0, 242628503, true) != 1)
	{
		return 1;
	}
	return 0;
}

bool func_533(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_672(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_320(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_534(var uParam0)
{
	if (uParam0->f_75 != 0)
	{
		func_537(uParam0->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		func_538(uParam0->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
	}
	if (func_673(uParam0->f_74, 0))
	{
		func_674(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_653() + uParam0->f_72);
			func_675(iVar0);
		}
		else
		{
			func_318(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_147(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216, 0);
	}
}

bool func_535(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_554(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_676(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_677(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_678(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_25(vParam2))
			{
				return false;
			}
			*uParam0 = func_679(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_639(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_680(1))
			{
				func_641(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_681(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_646(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_641(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_641(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_680(1))
		{
			func_641(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_554(*uParam0))
			{
				func_536(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_682(*uParam0, 1)) || (bParam17 && func_683(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_684(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_537(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_536(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_536(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_554(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_685(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_686(iVar0);
	*uParam0 = 0;
}

void func_537(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_687(iParam0, sParam4, iParam5);
	}
	func_688(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_538(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_689(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_687(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_688(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

var func_539(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_540()
{
	iVar0 = func_690();
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

int func_541(int iParam0)
{
	if (func_161() != -1)
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
	fVar1 = func_176(absf(fVar1) < 1f, func_176(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_542(int iParam0, int iParam1, int iParam2)
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

int func_543(int iParam0)
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

int func_544()
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

void func_545(int iParam0, bool bParam1, int iParam2)
{
	func_691((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_692(iParam0);
}

void func_546(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_693(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_547(bool bParam0)
{
	bVar3 = false;
	if (func_694(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_695(iVar5, &iVar2, &iVar0))
			{
				if (!func_673(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_696(iVar2);
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
							if (func_697(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_540() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_540() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_698();
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

struct<2> func_548(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_550(int iParam0)
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

int func_551(int iParam0, int iParam1)
{
	if (!func_699(iParam0))
	{
		return 0;
	}
	if (!func_700())
	{
		return 0;
	}
	if (!func_701(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_552(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_553(int iParam0)
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

bool func_554(int iParam0)
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

void func_555()
{
	func_702(23);
}

int func_556(var uParam0)
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

void func_557(int iParam0)
{
	iVar0 = func_703(iParam0);
	if (iVar0 != 0)
	{
		func_704(-1, 24, 0, iVar0);
	}
}

void func_558(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_549(func_548(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_76(iParam0, 2))
	{
		func_705(iParam0, func_407(iParam3));
	}
	if (func_76(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_41();
		}
		func_706(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_97(iParam0, 65536))
	{
		func_707(iParam0, iParam1);
		func_708(iParam0, func_191(iParam0, iParam1));
		func_306(128);
	}
	func_410(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_411(iParam0, 1);
	if (!bParam2)
	{
		func_306(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_709(524288);
	}
	if (func_710(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_710(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_559(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_711(&Global_0, 8);
	}
	if (!func_700() || func_161() != -1)
	{
		return;
	}
	func_711(&Global_0, 1);
}

int func_560(int iParam0, bool bParam1)
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

void func_561(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_562(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_25(vParam0))
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

bool func_563(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_25(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_564(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_25(*Global_1310750->f_16043[iVar0]))
		{
			if (func_152(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_565()
{
	iVar0 = func_712(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_242(func_2());
		if (func_244(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_713(func_166(0)))
	{
		return false;
	}
	if (func_714())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_566(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_567(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_715(&uParam1))
	{
		return 1;
	}
	if (!func_218(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_568(var uParam0)
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

int func_569(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_716(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_570(int iParam0)
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

bool func_571(var uParam0)
{
	return func_33(*uParam0, 4);
}

bool func_572(var uParam0)
{
	return func_33(*uParam0, 64);
}

bool func_573(var uParam0)
{
	return func_33(*uParam0, 8);
}

bool func_574(var uParam0)
{
	return func_33(*uParam0, 128);
}

bool func_575(var uParam0)
{
	return func_33(*uParam0, 2048);
}

void func_576(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_577(var uParam0)
{
	return func_33(*uParam0, 1024);
}

bool func_578(var uParam0)
{
	return func_33(*uParam0, 256);
}

void func_579(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_580(var uParam0)
{
	return func_33(*uParam0, 512);
}

bool func_581(var uParam0)
{
	return func_33(*uParam0, 4096);
}

int func_582(int iParam0)
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

struct<5> func_583(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_717(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_697(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_587(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_718(bParam1) };
			if (bParam2 && func_719(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_585(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_585(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_586(iParam0, &Var5, 1728382685))
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
			Var0 = { func_720(bParam1) };
			switch (func_721(iParam0))
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
			if (func_722(iParam0, -1823706425))
			{
				Var0 = { func_587(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_722(iParam0, -1483207246))
			{
				Var0 = { func_587(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_723(Var0, &Var27, bParam1, 0))
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

int func_584(int iParam0, int iParam1)
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

bool func_585(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_724(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_586(int iParam0, var uParam1, int iParam2)
{
	if (func_725(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_587(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_673(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_726(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_588(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_727(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_723(*uParam1, &Var0, bParam6, 0))
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
	if (!func_589(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_726(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_589(bool bParam0)
{
	if (func_161() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_726(bParam0));
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_728(iParam0))
	{
		return false;
	}
	if (!func_589(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_591(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_729(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_592(int iParam0)
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

int func_593(int iParam0, int iParam1)
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

void func_594(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_374(Global_1310750[iVar0], iParam0))
		{
			if (!func_363(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_730(iVar0) < func_731(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_410(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_595(int iParam0)
{
	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_596(int iParam0)
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

void func_597(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_598()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_733(iVar0, 128))
		{
			func_734(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_599()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_733(iVar0, 128) && func_733(iVar0, 1))
		{
			func_734(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_600(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_601()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_76(iVar0, 16777216))
		{
			if (!func_735(iVar0))
			{
				func_736(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_54(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_54(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_54(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_54(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_54(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_54(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_603(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_333();
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

int func_604(int iParam0)
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

int func_605(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_606(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_607()
{
	if (func_737())
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

void func_608(var uParam0, var uParam1)
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

int func_609(int iParam0)
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

void func_610(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_159(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_96(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_611(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_612(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_613(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_613(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_614(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_615(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_616(int iParam0, bool bParam1)
{
	switch (func_738(iParam0))
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

float func_617(int iParam0)
{
	iVar4 = func_482(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_620(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_739(iVar6) - func_739(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

bool func_618(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_619(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_620(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_623(float fParam0, float fParam1)
{
	iVar0 = func_620(fParam0);
	fVar1 = to_float(func_739(iVar0));
	fVar2 = to_float(func_739(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_624(int iParam0)
{
	if (func_740(iParam0, &iVar0))
	{
		return func_739(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_626(int iParam0, bool bParam1)
{
	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_744(iVar0, iVar1);
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_745(iParam0));
	sVar4 = func_747(func_746(iVar3, iParam2));
	sVar6 = func_748(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_749(iParam0));
	iVar8 = func_750(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_751(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_753(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_752(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_628(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_629(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_630(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_616((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_631()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_632(int iParam0)
{
	return (Global_1395482->f_10 && iParam0) != 0;
}

void func_633(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_536(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_517(iParam0, 0);
		}
	}
}

void func_634(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_635(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_634(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_176(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_124(&(iParam1->f_13));
		}
		if (func_754(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_755(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_635(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_756(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_757(*uParam0, 1, 1);
						}
					}
					else if (func_758(iParam1, 22))
					{
						func_757(*uParam0, 0, 1);
					}
				}
				if (func_759(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_760(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_761(iParam8);
					if (func_762(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_763(uParam3);
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
					func_764(iParam1, uParam3, fVar8);
					if (func_765(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_516(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_766(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_759(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_767(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_762(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_760(uParam0, func_759(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_761(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_516(uParam3, 0, 0, 1, 1);
					}
					func_768(iParam1, 1);
				}
				func_764(iParam1, uParam3, fVar8);
				if (func_766(uParam0, iParam1, fParam4, bVar6))
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
			func_495(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_636(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_769(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_320(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_637(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_161() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_638(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_639(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_640(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_641(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (bParam1)
	{
		func_770(iParam0, 4);
		func_771(iVar0, 1);
		func_772(iVar0, 1);
	}
	else
	{
		func_773(iParam0, 4);
		func_772(iVar0, 0);
	}
}

void func_642(int* iParam0, char* sParam1)
{
	if (func_554(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_640(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_645(iParam0, 1);
}

bool func_643(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_644(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_645(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_646(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	return !func_774(iParam0, 4);
}

int func_647(int iParam0)
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

float func_648(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9)
{
	if (bParam9)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		vParam6.f_2 = 0f;
	}
	fVar0 = vdist2(vParam0, vParam3);
	if (fVar0 == 0f)
	{
		return get_distance_between_coords(vParam6, vParam0, true);
	}
	fVar1 = (func_566(vParam6 - vParam0, vParam3 - vParam0) / fVar0);
	if (fVar1 < 0f)
	{
		return get_distance_between_coords(vParam6, vParam0, true);
	}
	else if (fVar1 > 1f)
	{
		return get_distance_between_coords(vParam6, vParam3, true);
	}
	vVar2 = { vParam0 + Vector(fVar1, fVar1, fVar1) * vParam3 - vParam0 };
	return get_distance_between_coords(vParam6, vVar2, true);
}

float func_649(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_650(int iParam0)
{
	iVar0 = func_776(func_775(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_651(var uParam0)
{
	if (func_652(81053684, uParam0))
	{
		return true;
	}
	if (func_652(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0, var uParam1)
{
	iVar1 = func_776(func_775(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_721(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_653()
{
	if (func_161() != -1)
	{
		return 0;
	}
	return func_777(661720433);
}

bool func_654()
{
	return Global_1347398->f_1 == 0;
}

void func_655(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_656()
{
	return Global_1347398->f_1 == 1000;
}

bool func_657()
{
	return Global_1347398->f_1 == 2000;
}

bool func_658()
{
	return Global_1347398->f_1 == 3000;
}

float func_659(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_105(Global_35, iParam0, bParam1, bParam2);
}

bool func_660(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_661(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_662(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_663()
{
	StringCopy(&(Global_1395482->f_11), "", 24);
	StringCopy(&(Global_1395482->f_14), "", 24);
	StringCopy(&(Global_1395482->f_17), "", 24);
	StringCopy(&(Global_1395482->f_76), "", 32);
	func_778();
	func_779();
	func_780();
	Global_1395482->f_115 = 0;
	Global_1395482->f_116 = 0;
	Global_1395482->f_114 = 0;
	Global_1395482->f_94 = 0;
	Global_1395482->f_72 = 0;
	Global_1395482->f_73 = 0;
	Global_1395482->f_74 = 0;
	Global_1395482->f_75 = 0;
	Global_1395482->f_117 = 0;
	Global_1395482->f_93 = 0;
	func_781();
	func_492(4);
}

int func_664(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		set_ped_config_flag(*uParam0, 186, true);
		decor_set_bool(*uParam0, "bDeadOrAlive", true);
		if (decor_exist_on(*uParam0, "bDeadOrAlive"))
		{
			decor_remove(*uParam0, "bDeadOrAlive");
		}
		if (decor_exist_on(*uParam0, "bIsCriminal"))
		{
			decor_remove(*uParam0, "bIsCriminal");
		}
		return 1;
	}
	return 0;
}

int func_665(int iParam0)
{
	return _0x964000d355219fc0(get_ped_index_from_entity_index(iParam0));
}

int func_666(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	Var1 = { func_783(iParam0) };
	if (stat_id_get_int(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_667(int iParam0)
{
	Var0 = { func_784(-1366121835, func_668(iParam0)) };
	return _stat_id_is_valid(&Var0);
}

int func_668(int iParam0)
{
	return iParam0;
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_785(iParam0, 1024))
	{
		return;
	}
	func_744(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

float func_670(vector3 vParam0, vector3 vParam3)
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

bool func_671(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_672(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_105(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_105(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_124(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_786(sParam1))
			{
				return 1;
			}
		}
		else if (func_787(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_673(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!func_788(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_789(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_790(iParam0, bParam2);
	iVar2 = 0;
	if (func_791(iParam0, 0, 0) == 0)
	{
		if (func_792(iParam0))
		{
			iVar5 = func_793(iParam0);
			iVar6 = func_794(iVar5);
			iVar7 = func_795(iVar6) + 1;
			func_796(iVar5);
			if (func_797(38))
			{
				func_626(483, 0);
			}
			else
			{
				func_626(482, 0);
			}
			if (iVar7 == func_798(iVar6))
			{
				func_674(func_799(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_700() && func_800(4))
				{
					if (func_700() && (func_801(38) || func_797(38)))
					{
						func_803(38, func_799(iVar6), 0, 0, func_802(), 0, -1, 0);
						func_804(2);
					}
					else
					{
						func_803(38, func_799(iVar6), 0, 0, func_802(), 0, -1, 0);
						func_804(1);
					}
				}
			}
			else if (func_700() && func_800(4))
			{
				if (func_700() && (func_801(38) || func_797(38)))
				{
					func_803(38, 0, 0, 0, func_802(), 0, -1, 0);
					func_804(2);
				}
				else
				{
					func_803(38, 0, 0, 0, func_802(), 0, -1, 0);
					func_804(1);
				}
			}
			if (func_700() && func_800(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_700() && (func_801(38) || func_797(38)))
					{
						func_805(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_805(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_697(iParam0) == -1037537535)
	{
		if ((!func_806(iParam0, 866047851) && !func_806(iParam0, -1979000645)) && !func_806(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_807(iParam0, 8388608) && !func_484(28))
	{
		func_808(28);
	}
	if (!bVar3)
	{
		if (func_806(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_721(iParam0) == -1447088266)
			{
				iVar1 = func_810(func_809(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_161() == -1)
					{
						func_811(iVar1);
					}
					if (func_589(0) && func_403(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_590(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_161() == -1)
					{
						func_811(iParam0);
					}
					if (func_589(0) && func_403(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_590(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_697(iParam0) == -427144552)
		{
			if (!func_812(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_697(iParam0) == 307971639 && func_728(iParam0))
		{
			if (!func_813(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_806(iParam0, 866047851))
		{
			func_814(iParam0);
		}
		else if (func_806(iParam0, 2000026003))
		{
			func_815(iParam0);
		}
		else if (func_806(iParam0, -103750053))
		{
			func_549(func_816(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_549(func_784(-717883113, 2091222383), iVar0);
		}
		else if (func_806(iParam0, -121341956) && !func_806(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_616((*Global_1835011)[4]->f_1, 1))
				{
					func_626(498, 0);
				}
			}
			if (func_806(iParam0, -2017733358) || func_806(iParam0, -1369131378))
			{
				func_817(iParam0);
			}
		}
		else if (func_806(iParam0, -136654233))
		{
			if (func_806(iParam0, -1021472396))
			{
			}
		}
		else if (func_806(iParam0, -1466706512) && func_806(iParam0, 1147021565))
		{
			func_626(484, 0);
		}
		else if (func_806(iParam0, 1147021565) && func_806(iParam0, -524514947))
		{
		}
		else if (func_806(iParam0, 554195525))
		{
		}
		else if (func_806(iParam0, 589988438))
		{
			if (func_818())
			{
				func_538(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_806(iParam0, 787083290) && func_806(iParam0, 949916894))
		{
			func_819(iParam0);
		}
		else if (func_806(iParam0, -1718133314))
		{
			func_820(iParam0);
		}
		else if (func_806(iParam0, -1738650224))
		{
			func_821(iParam0);
		}
		else if (func_806(iParam0, -1112814642) && func_806(iParam0, 949916894))
		{
			func_822(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_806(iParam0, 1841149704))
		{
			func_823();
		}
		else if (func_806(iParam0, 606799272))
		{
			func_824(iParam0, iParam1);
			func_825(iParam0);
		}
		else if (func_806(iParam0, -1112814642) && func_806(iParam0, -1697809989))
		{
			func_826(iParam0, 0, 0, 0);
		}
		else if (func_806(iParam0, -2017733358) || func_806(iParam0, -1369131378))
		{
			func_817(iParam0);
		}
		else if (func_806(iParam0, -1921346699))
		{
			if (func_161() != -1)
			{
				return 0;
			}
			func_827(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_806(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_828(215778062, 1, 0))
					{
						func_674(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_828(670273567, 1, 0))
					{
						func_674(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_828(-967317137, 1, 0))
					{
						func_674(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_828(526074061, 1, 0))
					{
						func_674(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_828(-1045488665, 1, 0))
					{
						func_674(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_828(471514780, 1, 0))
					{
						func_674(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_806(iParam0, -839724752) && func_807(iParam0, 4))
		{
			if (!func_797(42))
			{
				func_829(iParam0);
			}
		}
		else if (func_806(iParam0, 1399091007))
		{
			func_830(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_806(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_674(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_808(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_831(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_832(&iVar9, 0))
				{
					func_403(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_161() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_831(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_626(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_833();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_834();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_835();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_836();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_837();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_838(499813453, 854119837, 0);
				func_839(499813453, 0);
				func_840(1);
				break;
			case 2127812557:
				func_838(499813453, -1292544588, 0);
				func_839(499813453, 0);
				func_840(2);
				break;
			case 808991383:
				func_838(499813453, -1003325394, 0);
				func_839(499813453, 0);
				func_840(4);
				break;
			case 1134518629:
				func_838(666607663, -335460405, 0);
				func_839(666607663, 0);
				func_841(1);
				break;
			case 902940106:
				func_838(666607663, 903797617, 0);
				func_839(666607663, 0);
				func_841(2);
				break;
			case -418174898:
				func_838(666607663, 669728650, 0);
				func_839(666607663, 0);
				func_841(4);
				break;
			case -648114971:
				func_838(-220219788, 1214120047, 0);
				func_839(-220219788, 0);
				func_842(1);
				break;
			case 211153747:
				func_838(-220219788, 655769340, 0);
				func_839(-220219788, 0);
				func_842(2);
				break;
			case -32876996:
				func_838(-220219788, 885316185, 0);
				func_839(-220219788, 0);
				func_842(4);
				break;
			case 1191437462:
				func_838(218622660, -1491419385, 0);
				func_839(218622660, 0);
				func_843(1);
				break;
			case 1119149048:
				func_838(218622660, 1809565830, 0);
				func_839(218622660, 0);
				func_843(2);
				break;
			case 506073827:
				func_838(390004462, -628873767, 0);
				func_839(390004462, 0);
				func_844(1);
				break;
			case -1876986168:
				func_838(390004462, -405421956, 0);
				func_839(390004462, 0);
				func_844(2);
				break;
			case 2142623221:
				func_838(390004462, -1108972386, 0);
				func_839(390004462, 0);
				func_844(4);
				break;
			case 1508215381:
				func_838(6410548, 1053716392, 0);
				func_839(6410548, 0);
				func_845(1);
				break;
			case -888935280:
				func_838(6410548, 806507056, 0);
				func_839(6410548, 0);
				func_845(2);
				break;
			case -1252474566:
				func_838(6410548, 1571925350, 0);
				func_839(6410548, 0);
				func_845(4);
				break;
			case -1465702449:
				func_838(6410548, 1330352282, 0);
				func_839(6410548, 0);
				func_845(8);
				break;
			case -21093309:
				func_669(242, func_846(-21093309), 0);
				break;
			case 204375141:
				func_669(240, func_846(204375141), 0);
				break;
			case -417963070:
				func_669(241, func_846(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_847(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_626(488, 0);
				break;
			case 1613651027:
				func_626(491, 0);
				break;
			case -885810591:
				func_626(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_674(func_848(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_674(func_849(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_484(1))
				{
					func_626(487, 0);
				}
				break;
			case -898386032:
				func_626(486, 0);
				break;
			case -2035110427:
				if (func_161() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_626(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_850(&iVar10);
		if (!func_851(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_589(0))
		{
			return 1;
		}
		if (func_697(iParam0) == -1037537535)
		{
			func_852(iParam0);
		}
		if (func_806(iParam0, -1979000645))
		{
			func_853(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_589(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_674(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_854(iVar2, 0);
		}
	}
	Var35 = { func_855(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_856(iParam0);
	if (fParam6 > 0f)
	{
		if (func_806(iParam0, -839724752))
		{
			func_857(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_858(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_675(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_548(661720433) };
		stat_id_set_int(&Var0, iParam0, true);
	}
}

int func_676(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_774(iVar0, 2))
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
				func_859(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_677(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_678(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_774(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
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
		func_859(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_679(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_25(vParam2))
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
		if (func_774(iVar0, 2))
		{
			if (func_384(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_859(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_680(int iParam0)
{
	return _money_get_cash_balance();
}

void func_681(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	func_771(iVar0, bParam1);
}

bool func_682(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_683(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_684(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_860(iParam0);
	if (bParam3)
	{
		func_861(iParam0, sParam1, iParam2);
	}
}

int func_685(int iParam0)
{
	return iParam0;
}

void func_686(int iParam0)
{
	if (!func_862(iParam0))
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

void func_687(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_490(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_688(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_863())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_490(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_864(iVar0);
			func_865(iVar0, 0, 0);
		}
		func_490(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_549(func_548(1644987397), iVar1);
	}
}

int func_689(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_828(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_673(iVar25, 0) && func_806(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_690()
{
	return Global_40.f_11095.f_35;
}

void func_691(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_866(bParam1);
	}
}

void func_692(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_693(int iParam0)
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

bool func_694(int iParam0)
{
	if (!func_867(23, &vVar0))
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

bool func_695(int iParam0, int iParam1, int iParam2)
{
	if (!func_867(23, &Var0))
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

int func_696(int iParam0)
{
	return iParam0;
}

int func_697(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_698()
{
	iVar0 = func_540();
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

bool func_699(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_700()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_701(int iParam0, int iParam1, var uParam2)
{
	if (!func_699(iParam0))
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

void func_702(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_160(func_868(iVar0), 0))
		{
			if (is_ped_group_member(func_868(iVar0), func_366(), 1))
			{
				func_869(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_703(int iParam0)
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

void func_704(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_870() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_870();
					}
					func_871(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_159(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_705(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_592(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_593(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_706(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_97(iParam0, 8192))
	{
		iVar0 = func_593(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_707(int iParam0, int iParam1)
{
	iVar0 = (func_370(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_708(int iParam0, vector3 vParam1)
{
	if (func_76(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_25(vParam1))
	{
		return;
	}
	if (!func_204(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_25(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_384(vVar2, vParam1, 1f, 1))
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

void func_709(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_736(iVar0, iParam0);
		iVar0++;
	}
}

int func_710(int iParam0)
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

void func_711(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_712(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_713(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_714()
{
	return Global_1894899 & 2 != 0;
}

bool func_715(var uParam0)
{
	return func_33(*uParam0, 1);
}

void func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_872(iParam1))
		{
			func_873(iParam0, 41788943);
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
			func_874(iParam0, 0, 1);
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
			func_875(iParam0, 0);
			bVar0 = true;
		}
		func_876(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<4> func_717(bool bParam0)
{
	return func_587(1328661203, func_877(), -1591664384, bParam0);
}

struct<4> func_718(bool bParam0)
{
	iVar0 = func_726(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_587(923904168, func_717(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_587(923904168, func_717(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_587(923904168, func_717(bParam0), -740156546, 0);
}

bool func_719(int iParam0, bool bParam1)
{
	if (func_721(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_484(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_720(bool bParam0)
{
	iVar0 = func_726(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_587(271701509, func_717(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_587(271701509, func_717(bParam0), 12999093, 0);
}

int func_721(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_722(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_721(iParam0);
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

bool func_723(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_726(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_724(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_587(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_726(bParam6), &Var0, 0);
	return uVar4;
}

bool func_725(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_726(0);
	*uParam1 = { func_587(iParam0, func_718(0), iParam3, 0) };
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

int func_726(bool bParam0)
{
	if (func_161() == -1)
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

bool func_727(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_728(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_729(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_730(int iParam0)
{
	if (func_204(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_731(int iParam0)
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

int func_732(int iParam0, int iParam1)
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

bool func_733(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_734(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_735(int iParam0)
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

void func_736(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_737()
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

int func_738(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_878(iParam0);
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_740(int iParam0, int iParam1)
{
	return false;
}

bool func_741()
{
	return false;
}

void func_742(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_743(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_879(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_880(iParam0))
	{
		return false;
	}
	if (func_881(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_785(iParam0, 1)) || func_882(32768))
	{
		if (!func_785(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_883())
	{
		return false;
	}
	return true;
}

void func_744(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_726(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_726(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_726(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_746(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_747(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_748(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_749(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_751(int iParam0)
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

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

var func_753(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_754(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_884(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_516(uParam2, 0, 0, 1, 0);
				func_96(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_885(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_159(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_755(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_633(iParam1, uParam2, 0);
		iVar5 = func_886(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_516(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_758(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_758(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_887(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_888(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_889(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_758(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_757(*uParam0, 1, 1);
			}
			else
			{
				func_757(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_756(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_757(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_758(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_759(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_890(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_760(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_891(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_761(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_762(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_680(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_892(Global_35)) || func_893(Global_35)) || func_894(Global_35));
	fVar12 = -1f;
	if (func_148(&(iParam1->f_13)))
	{
		fVar12 = func_127(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_554((*uParam4)[iVar0]->f_6);
		func_895(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_896(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_897(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_516(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_898(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_633(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_899(iParam1, fParam6, iParam1->f_9))
					{
						func_124(&(iParam1->f_18));
						if (bVar6)
						{
							func_898(uParam4, 0, 0);
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
		func_900(iParam1, fParam2);
	}
	return bVar5;
}

void func_763(var uParam0)
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

void func_764(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_901((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_900(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_765(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_902(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_903(iParam1, 0);
				func_633(iParam1, uParam2, func_758(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_766(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_124(&(iParam1->f_18));
			return false;
		}
		else if (func_148(&(iParam1->f_18)))
		{
			func_146(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_148(&(iParam1->f_18)))
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
	return func_341(&(iParam1->f_18), fParam2);
	return true;
}

void func_767(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_895(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_768(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_769(int* iParam0)
{
	if (func_758(iParam0, 0))
	{
		if (func_904(iParam0))
		{
			func_768(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_770(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_771(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_774(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_772(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_773(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_774(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_775(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_905(iVar0);
}

int func_776(int iParam0, int iParam1)
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

var func_777(int iParam0)
{
	Var1 = { func_548(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

void func_778()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(Global_1395482->f_20[iVar0], "", 24);
		StringCopy(Global_1395482->f_36[iVar0], "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_52[iVar0], "", 24);
		StringCopy(Global_1395482->f_62[iVar0], "", 24);
		iVar0++;
	}
	Global_1395482->f_115 = 0;
	Global_1395482->f_114 = 0;
	Global_1395482->f_72 = 0;
	Global_1395482->f_73 = 0;
	Global_1395482->f_74 = 0;
	Global_1395482->f_75 = 0;
	func_906(Global_1395482->f_1, 8);
	func_906(Global_1395482->f_1, 16);
}

void func_779()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_95[iVar0], "", 32);
		Global_1395482->f_95[iVar0]->f_4 = 2;
		iVar0++;
	}
	Global_1395482->f_94 = 0;
	func_906(Global_1395482->f_1, 512);
}

void func_780()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(Global_1395482->f_80[iVar0], "", 32);
		iVar0++;
	}
	Global_1395482->f_93 = 0;
}

void func_781()
{
	_uilog_clear_cached_objective();
}

bool func_782(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

struct<2> func_783(int iParam0)
{
	Var0 = { func_784(-212244724, func_668(iParam0)) };
	if (_stat_id_is_valid(&Var0))
	{
		Var0 = { func_784(-1366121835, func_668(iParam0)) };
	}
	return Var0;
}

struct<2> func_784(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_785(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_786(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_787(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_907(cParam1, cParam0);
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

bool func_788(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_161() == -1)
	{
		if (func_908(iParam0) && func_909(iParam0))
		{
			func_910(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_789(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_911(iParam0, iParam1);
	Var0 = { func_583(iParam0, 0, 1) };
	iVar5 = func_912(iParam0, &Var0, 0, 0);
	iVar6 = func_913(iParam0, 0);
	if ((iVar5 > 1 && !func_914()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_806(iParam0, -2051813666))
		{
			func_626(583, 1);
		}
		else
		{
			func_626(582, 0);
		}
	}
	if (func_915(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_790(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_916(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_791(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_917(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_918(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_726(bParam2), iParam0, 0);
	return iVar2;
}

bool func_792(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_793(iParam0) != 0;
}

int func_793(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_919())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_920(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_794(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_795(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_919())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_794(iVar0))
		{
			if (func_828(func_920(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_796(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_284(48);
	func_559(0, -1);
}

bool func_797(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_616((*Global_1347702)[iParam0]->f_15, 1);
}

int func_798(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_799(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_800(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_616((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_801(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_437(iParam0))
	{
		return false;
	}
	return func_921((*Global_1347702)[iParam0]->f_15);
}

int func_802()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_828(func_922(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_803(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_700() && (func_801(38) || func_797(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_700() && (func_801(39) || func_797(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_923(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_700() && (func_801(41) || func_797(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_700() && (func_801(49) || func_797(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_923(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_924(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_925(iParam0, iVar13, iVar14))
	{
	}
	if (func_926(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_927(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_928(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_929(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_930(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_804(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_805(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_700() && (func_801(38) || func_797(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_700() && (func_801(39) || func_797(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_700() && (func_801(49) || func_797(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_700() && (func_801(38) || func_797(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_932(_create_var_string(2, sVar0), _create_var_string(2, func_931(func_799(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_700() && (func_801(39) || func_797(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_700() && (func_801(49) || func_797(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_806(int iParam0, int iParam1)
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

bool func_807(int iParam0, int iParam1)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_808(int iParam0)
{
	if (!func_618(iParam0))
	{
		return;
	}
	func_933(iParam0);
	func_934(iParam0);
}

int func_809(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_673(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_935(iVar0) || func_402(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_810(int iParam0, bool bParam1)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_811(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_401(iParam0))
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

bool func_812(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_810(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_161() == -1)
		{
			func_811(iVar0);
			if (iParam1 == 1248274121)
			{
				func_936(iVar0);
			}
		}
		if (!func_915(iParam0, &uVar1, 1, 0, 0))
		{
			func_910(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_937(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_403(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_403(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_403(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_52())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_405(iVar0))
				{
					func_403(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_403(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_938(Global_35, 2, 0, 1);
				if ((((func_401(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_484(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_401(iVar7) && func_484(24))
				{
					if (!func_403(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_403(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_403(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_626(480, 1);
	}
	return true;
}

bool func_813(int iParam0, int iParam1, int iParam2)
{
	if (!func_728(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_401(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_828(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_669(func_939(iParam0), func_846(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_161() == -1)
		{
			if (func_616((*Global_1835011)[14]->f_1, 1))
			{
				func_626(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_589(0))
	{
		if (func_590(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_851(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_814(int iParam0)
{
	if ((iParam0 == -615217896 && !func_940()) || iParam0 != -615217896)
	{
		if (func_941(Global_35, iParam0, &uVar0))
		{
			func_831(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_837();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_837();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_837();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_835();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_833();
			break;
	}
}

void func_815(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_833();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_834();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_835();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_836();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_837();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_942();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_943();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_816(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_817(int iParam0)
{
	bVar0 = func_806(iParam0, -2017733358);
	if (func_944() < 3)
	{
		if (bVar0)
		{
			if (func_946(func_945(iParam0), iParam0))
			{
				func_669(79, func_846(func_945(iParam0)), 1);
			}
			else
			{
				func_669(78, func_846(func_945(iParam0)), 1);
			}
		}
		else
		{
			func_669(80, func_846(func_947(iParam0)), 1);
		}
	}
}

bool func_818()
{
	if (((((func_948(839908568, 400) || func_948(-1134030454, 400)) || func_948(623353496, 400)) || func_948(-344413337, 400)) || func_948(-1664948962, 400)) || func_948(1795228059, 400))
	{
		return true;
	}
	return false;
}

void func_819(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_803(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_805(51, 0, 0, 0, 0, -1, 0);
			func_949(8192);
			break;
		case 581047644:
			func_803(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_805(51, 0, 0, 0, 0, -1, 0);
			func_949(524288);
			break;
		case -644199619:
			func_803(39, 0, 0, 0, 0, 0, 1, 0);
			func_805(39, 0, 0, 0, 0, -1, 0);
			func_950(16);
			break;
		case 684296857:
			func_803(41, 0, 0, 0, 0, 0, 1, 0);
			func_805(41, 0, 0, 0, 0, -1, 0);
			func_951(8);
			break;
		case 466137807:
			func_803(49, 0, 0, 0, 0, 0, 1, 0);
			func_805(49, 0, 0, 0, 0, -1, 0);
			func_952(16);
			break;
		case -1087522507:
			func_803(43, 0, 0, -1791518714, func_953(1), 0, -1, 0);
			func_954(1);
			break;
		case -405829000:
			func_803(43, 0, 0, -2087881550, func_953(2), 0, -1, 0);
			func_954(2);
			break;
		case 378660860:
			func_803(43, 0, 0, 1908068621, func_953(4), 0, -1, 0);
			func_954(4);
			break;
		case 1566111097:
			func_803(43, 0, 0, 1611247019, func_953(8), 0, -1, 0);
			func_954(8);
			break;
		case 1276007140:
			func_803(43, 0, 0, 1319635688, func_953(16), 0, -1, 0);
			func_954(16);
			break;
	}
}

void func_820(int iParam0)
{
	if (func_955() == 1)
	{
		if (func_797(39))
		{
			func_626(342, 0);
		}
		else
		{
			func_626(343, 0);
			func_950(1);
		}
	}
	if (func_955() >= 30)
	{
		func_626(344, 0);
	}
	func_803(39, 0, 0, 0, 0, 0, -1, 0);
	func_805(39, 0, 0, func_955(), 30, 1, 0);
}

void func_821(int iParam0)
{
	if (func_956() == 1)
	{
		if (func_797(49))
		{
			func_626(409, 0);
		}
		else
		{
			func_626(410, 0);
			func_952(1);
		}
	}
	if (func_956() >= 10)
	{
		func_626(411, 0);
	}
	func_803(49, 0, 0, 0, 0, 0, -1, 0);
	func_805(49, 0, 0, func_956(), 10, 1, 0);
}

void func_822(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_626(437, 0);
			func_626(440, 0);
			func_957(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_803(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(-949689219, 20), 1, 0);
			func_949(1);
			func_958(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_957(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_803(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(-1248968496, 20), 1, 0);
			func_949(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_957(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_803(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(1706369307, 20), 1, 0);
			func_949(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_957(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_803(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(1520110311, 20), 1, 0);
			func_949(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_626(438, 0);
			func_957(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_803(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(-1992824800, 20), 1, 0);
			func_949(32768);
			break;
		default:
			func_626(439, 0);
			break;
	}
}

void func_823()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_824(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_161() == -1)
	{
		if (!func_797(43))
		{
			if (iParam0 == 281887510)
			{
				func_626(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_626(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_626(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_626(400, 0);
			}
		}
		else if (func_806(iParam0, 412399755))
		{
			func_959(-1791518714);
			if (func_960() == 0)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_797(44))
		{
			if (iParam0 == -222563712)
			{
				func_626(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_626(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_626(401, 0);
			}
		}
		else if (func_806(iParam0, 709057512))
		{
			func_959(-2087881550);
			if (func_960() == 1)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_797(45))
		{
			if (iParam0 == 2116770557)
			{
				func_626(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_626(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_626(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_626(398, 0);
			}
		}
		else if (func_806(iParam0, -1478961327))
		{
			func_959(1908068621);
			if (func_960() == 2)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_964(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_965(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_284(48);
					}
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_797(46))
		{
			if (iParam0 == 2085530337)
			{
				func_626(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_626(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_626(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_626(406, 0);
			}
		}
		else if (func_806(iParam0, -1238404098))
		{
			func_959(1611247019);
			if (func_960() == 3)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_797(47))
		{
			if (iParam0 == -1521783510)
			{
				func_626(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_626(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_626(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_626(403, 0);
			}
		}
		else if (func_806(iParam0, 1160548794))
		{
			func_959(1319635688);
			if (func_960() == 4)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_825(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_964(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_965(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_284(48);
		}
	}
}

void func_826(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_828(func_966(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_967(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_968(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_827(int iParam0, int iParam1, int iParam2)
{
	if (func_161() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_538(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_538(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_538(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_538(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_538(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_538(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_538(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_538(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_538(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_538(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_538(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_538(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_538(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_969())
			{
				func_538(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_538(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_538(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_538(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_538(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_538(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_538(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_538(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_538(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_538(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_538(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_538(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_538(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_828(int iParam0, int iParam1, bool bParam2)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_970(iParam0, 1))
		{
			return false;
		}
	}
	return func_791(iParam0, 0, bParam2) >= iParam1;
}

void func_829(int iParam0)
{
	if (func_797(41))
	{
		func_626(363, 0);
	}
	else
	{
		func_626(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_971(-1865241121);
			func_972(-642026005);
			func_973(-642026005);
			func_559(0, 10);
			break;
		case -2108314374:
			func_971(2117142684);
			func_972(-940584364);
			func_973(-940584364);
			func_559(0, 10);
			break;
		case -1193798153:
			func_971(-1409326024);
			func_972(1972645282);
			func_973(1972645282);
			func_559(0, 10);
			break;
		case -787702678:
			func_971(-641744968);
			func_972(1667205433);
			func_973(1667205433);
			func_559(0, 10);
			break;
		case -804542901:
			func_971(-946988203);
			func_972(1362715885);
			func_973(1362715885);
			func_559(0, 10);
			break;
		case -1696275132:
			func_971(-646136018);
			func_972(1053540370);
			func_973(1053540370);
			func_559(0, 10);
			break;
		case -161595323:
			func_971(-955835837);
			func_972(-1100103852);
			func_973(-1100103852);
			func_559(0, 10);
			break;
		case -1114363619:
			func_971(-179276075);
			func_972(-1409869209);
			func_973(-1409869209);
			func_559(0, 10);
			break;
		case -368407134:
			func_971(-492711560);
			func_972(-1760235357);
			func_973(-1760235357);
			func_559(0, 10);
			break;
		case 1997759228:
			func_971(1764383959);
			func_972(-138366827);
			func_973(-138366827);
			func_559(0, 10);
			break;
		case 1265573293:
			func_971(317501533);
			func_972(-1261163843);
			func_973(-1261163843);
			func_559(0, 10);
			break;
		case -1030441283:
			func_971(817753087);
			func_972(-963523016);
			func_973(-963523016);
			func_559(0, 10);
			break;
		case -1490884871:
			func_971(576606016);
			func_972(560825326);
			func_973(560825326);
			func_559(0, 10);
			break;
		case -395458616:
			func_971(814934957);
			func_972(858269539);
			func_973(858269539);
			break;
	}
}

void func_830(int iParam0, int iParam1)
{
	func_974(iParam0, iParam1, &uVar0);
}

int func_831(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_583(iParam1, 1, 0) };
		iParam3 = func_905(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_975(iParam1, iParam2, func_776(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_976(1, (func_161() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_776(iParam3, 1)])
			{
				func_977(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_978(32768) && iParam1 != &Global_1946804->f_57[func_776(iParam3, 1)])
			{
				func_979();
				func_977(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_977(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_980(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_977(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_981(0);
			func_982(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_977(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_832(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_938(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_938(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_983("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_984(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_985(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_833()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_834()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_835()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_836()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_837()
{
	func_986();
	func_987();
	func_988();
}

void func_838(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_839(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_753(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_840(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_841(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_842(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_843(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_844(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_845(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_846(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_847(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_785(iParam0, 1024))
	{
		return;
	}
	func_744(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_848()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_919())
	{
		return func_849();
	}
	iVar4 = (func_919() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_919())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_989(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_920(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_849()
{
	iVar0 = get_random_int_in_range(0, func_919());
	return func_920(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_850(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_851(int iParam0, int iParam1, int iParam2)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_583(iParam0, 0, 1) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	return func_990(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_852(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	switch (func_721(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_991(81053684, 0) <= 0)
			{
				func_977(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_977(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_992(iParam0);
			if (func_993(iVar0))
			{
				func_994(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_977(30, iParam0, 0, 0, 0);
			}
			if (func_995() == -2125499975 || func_995() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_977(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_995() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_977(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_996(-525676072, 0))
			{
				if (func_997(-525676072, &iVar1))
				{
					func_977(33, iVar1, 0, 0, 0);
				}
			}
			func_977(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_998(99217379))
		{
			func_831(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_808(24);
		if (func_832(&iVar2, 0))
		{
			func_403(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_853(int iParam0)
{
	if (func_806(iParam0, 943695443))
	{
		func_999(0, iParam0);
	}
	else if (func_806(iParam0, -2096528786))
	{
		func_999(1, iParam0);
	}
	else if (func_806(iParam0, -1094167013))
	{
		func_999(2, iParam0);
	}
	else if (func_806(iParam0, 1936654645))
	{
		func_999(3, iParam0);
	}
	else if (func_806(iParam0, 1306489306))
	{
		func_999(4, iParam0);
	}
	else if (func_806(iParam0, 435762317))
	{
		func_999(5, iParam0);
	}
	else if (func_806(iParam0, 1259363210))
	{
		func_999(6, iParam0);
	}
	else if (func_806(iParam0, 881398259))
	{
		func_999(7, iParam0);
	}
	else if (func_806(iParam0, -541549214))
	{
		func_999(8, iParam0);
	}
	else if (func_806(iParam0, 130796156))
	{
		func_999(-1, iParam0);
	}
}

int func_854(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1000(&Var4, 1356624740);
	return func_1001(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_855(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return Var0;
	}
	if (func_806(iParam0, -305066475))
	{
		if (func_161() == -1)
		{
			if (func_806(iParam0, -537818634))
			{
				return func_548(189951448);
			}
			else
			{
				return func_548(1176172851);
			}
		}
	}
	else if (func_806(iParam0, -537818634))
	{
		return func_548(-963660207);
	}
	if (func_806(iParam0, 2084895747))
	{
		return func_548(1694039471);
	}
	return Var2;
}

void func_856(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_161() == -1)
			{
				if (func_616((*Global_1835011)[4]->f_1, 1))
				{
					func_626(109, 1);
				}
			}
			break;
	}
}

void func_857(int iParam0, char* sParam1)
{
	sVar0 = func_1003(func_1002(0));
	func_490(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1004(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_858(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_673(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1005())
	{
		func_1006(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1007(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1007(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_807(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_697(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1008(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1009(_create_var_string(10, &cVar2, _create_var_string(0, func_846(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_806(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_846(iParam0));
	}
	func_490(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = fParam5;
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
	_uiprompt_set_transport_mode(iVar0, fParam5);
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
	func_771(iParam0, 1);
	func_772(iParam0, 1);
	func_773(iParam0, 128);
}

void func_860(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_680(1) < iParam0)
	{
		iParam0 = func_680(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_548(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_861(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_490(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_862(int iParam0)
{
	return func_774(iParam0, 2);
}

bool func_863()
{
	if (func_940())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_864(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1010((Global_40.f_4283.f_325 + iParam0));
}

void func_865(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_863())
	{
		func_490(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_490(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_866(bool bParam0)
{
	func_1011(bParam0);
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

bool func_867(int iParam0, var uParam1)
{
	if (!func_1012(iParam0))
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

int func_868(int iParam0)
{
	if (!func_1013(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_869(int iParam0, int iParam1)
{
	if (!func_1014(iParam0))
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

int func_870()
{
	return &Global_1899515;
}

void func_871(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1015(*iParam0);
	iVar1 = func_1016(*iParam0);
	iVar2 = func_1017(*iParam0);
	iVar3 = func_426(*iParam0);
	iVar4 = func_1018(*iParam0);
	iVar5 = func_1019(*iParam0);
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
	iVar6 = func_1020(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1020(iVar1, iVar0);
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
	func_1021(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_872(int iParam0)
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

void func_873(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1022(iParam0, iParam1))
		{
			if (func_1023(iParam0, iParam1))
			{
				if (func_1024(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1025(iParam0);
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

void func_874(int iParam0, int iParam1, bool bParam2)
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

void func_875(int iParam0, bool bParam1)
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

void func_876(int iParam0, int iParam1)
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

struct<4> func_877()
{
	return Var0;
}

int func_878(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1026(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_879(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_880(int iParam0)
{
	if (func_161() != -1)
	{
		if (func_785(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_785(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_881(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_785(iParam0, 65536) && !func_785(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_785(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_785(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_882(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_883()
{
	return Global_1905944->f_5694;
}

bool func_884(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1027((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_885(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_901((*uParam0)[iVar0]))
		{
			func_644((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_886(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1028(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_554((*uParam2)[iVar0]->f_6))
		{
			func_644((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_887(var uParam0)
{
	iVar0 = func_355(*uParam0);
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

int func_888(var uParam0, int iParam1)
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

void func_889(int* iParam0, int* iParam1)
{
	if (!func_758(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_644(iParam1, 19);
			func_903(iParam0, 23);
			func_1029(iParam1, 2);
		}
	}
}

bool func_890(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1030(16))
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
					func_1031(16);
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

void func_891(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1028(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_892(int iParam0)
{
	return (func_1032(iParam0, 4) || func_1032(iParam0, 5));
}

int func_893(int iParam0)
{
	return func_1032(iParam0, 7);
}

int func_894(int iParam0)
{
	return func_1032(iParam0, 6);
}

void func_895(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_901(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1028(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_896(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1033(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_646(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_641(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_641(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1034(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_897(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_683(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1035(iParam1, 1))
	{
		func_1036(iParam1, 1);
		return true;
	}
	return false;
}

void func_898(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_500((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_899(int* iParam0, float fParam1, bool bParam2)
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

void func_900(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_901(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_902(int iParam0)
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

void func_903(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_904(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_905(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1037(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_906(int iParam0, int iParam1)
{
	if (!func_348(iParam0))
	{
		return;
	}
	if (func_349(iParam0, iParam1))
	{
		Global_1395482->f_2[iParam0] = (&Global_1395482->f_2[iParam0] - (Global_1395482->f_2[iParam0] && iParam1));
	}
}

void func_907(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_908(int iParam0)
{
	return func_697(iParam0) == -427144552;
}

bool func_909(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	if (func_807(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_915(iParam0, &uVar0, 1, 0, 0);
	}
	return func_828(iParam0, 1, 0);
}

void func_910(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_697(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_810(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_402(iVar0))
	{
		if (func_161() == -1)
		{
			func_811(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_791(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_858(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_911(int iParam0, int iParam1)
{
	if (func_806(iParam0, 58855631))
	{
		func_1038(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_912(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!func_589(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_726(bParam3), iParam0);
}

int func_913(int iParam0, bool bParam1)
{
	if (func_728(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_726(bParam1), iParam0, 0);
}

bool func_914()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_700())
	{
		return false;
	}
	if (!func_616((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_616((*Global_1835011)[2]->f_1, 1) && func_616((*Global_1347702)[120]->f_15, 1)) && !func_616((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_616((*Global_1835011)[37]->f_1, 1) && !func_616((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_616((*Global_1835011)[57]->f_1, 1) && !func_616((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_616((*Global_1835011)[26]->f_1, 1) && !func_616((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_616((*Global_1835011)[62]->f_1, 1) && func_616((*Global_1835011)[63]->f_1, 1)) && !func_616((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_616((*Global_1835011)[75]->f_1, 1) && !func_616((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_616((*Global_1835011)[76]->f_1, 1) && !func_616((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_616((*Global_1835011)[40]->f_1, 1) && func_616((*Global_1835011)[41]->f_1, 1)) && !func_616((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_616((*Global_1835011)[62]->f_1, 1) && func_616((*Global_1835011)[63]->f_1, 1)) && !func_616((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_616((*Global_1835011)[65]->f_1, 1) && func_616((*Global_1835011)[66]->f_1, 1)) && !func_616((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_915(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1039(&iParam0);
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (!func_589(0))
	{
		bParam3 = true;
	}
	if (func_908(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_718(0) };
			Var4.f_9 = -1591664384;
			if (!func_585(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_586(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_719(iParam0, 1))
			{
				if (!func_585(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_586(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1040(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_912(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_724(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_726(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_916(int iParam0, int iParam1)
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

int func_917(int iParam0, int iParam1)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_806(iParam0, 1399091007))
	{
		func_974(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_918(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1041(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1042(&Var0, func_718(0));
	}
	if (!func_1043(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_985(iVar14);
	return uVar15;
}

int func_919()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_920(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

bool func_921(int iParam0)
{
	iVar0 = func_738(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_923(int iParam0, int iParam1)
{
	if (!func_867(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_924(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_802() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1044(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1045(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_955() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1046(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_955(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1047(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_956() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1048(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_956(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_923(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_925(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_926(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_927(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_928(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1049(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_828(iVar2, 1, 0) || func_1051(func_1050(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_931(func_1049(iVar0))), func_931(func_1049(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_955() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1046() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_966(iParam3, func_1053(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_962(iVar2) - iParam7) >= func_923(iParam3, func_1054(iVar0));
				}
				else
				{
					bVar1 = func_962(iVar2) >= func_923(iParam3, func_1054(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_962(iVar2) + iParam7) >= func_923(iParam3, func_1054(iVar0));
			}
			else
			{
				bVar1 = func_962(iVar2) >= func_923(iParam3, func_1054(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1055(iVar2)), func_1055(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1056(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1057(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1057(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_956() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1048() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_966(iParam3, func_1053(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_962(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1059(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1059(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1060(iVar2)), func_1060(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_929(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1047() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_930(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_439(func_1061(0)) && ((func_1062(0) == 1 || func_1062(0) == 8) || func_1062(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

char* func_931(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_932(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_933(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_934(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1063(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1064(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1064(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1064(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1065(1);
			break;
		case 34:
			func_1066(1);
			break;
		case 35:
			func_1067(1);
			break;
		case 36:
			break;
		case 37:
			func_1068(0);
			break;
		case 38:
			func_1069(0);
			break;
		case 39:
			func_1070(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_700()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_626(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_700()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_626(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_700()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_626(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_700()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_626(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_161() == -1)
			{
				if (!func_998(99217379) || func_1071(99217379) == 2110595215)
				{
					if (func_52())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_828(iVar0, 1, 0))
					{
						func_851(iVar0, 1, 752097756);
					}
					func_831(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_161() == -1)
			{
				if (!func_828(1013902307, 1, 0))
				{
					func_851(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_161() == -1)
			{
				if (!func_828(1013902307, 1, 0))
				{
					func_851(1013902307, 1, 752097756);
				}
				if (!func_828(142640135, 1, 0))
				{
					func_851(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_161() == -1)
			{
				if (!func_828(786809402, 1, 0))
				{
					func_851(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_161() == -1)
			{
				if (!func_828(786809402, 1, 0))
				{
					func_851(786809402, 1, 752097756);
				}
				if (!func_828(-518019409, 1, 0))
				{
					func_851(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1072();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_935(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

void func_936(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_168();
	func_871(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_937(int iParam0)
{
	if (func_1073(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_938(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_939(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_484(50))
			{
				if (!func_484(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_484(51))
			{
				if (!func_484(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_940()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_941(int iParam0, int iParam1, var uParam2)
{
	if (!func_673(iParam1, 0))
	{
		return false;
	}
	if (func_697(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_161() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_721(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1074(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_806(iParam1, 866047851))
	{
		iVar5 = func_776(iVar4, 1);
		if (func_1075(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_721(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_806(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_652(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1076(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1076(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_721(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_806(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1077(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_942()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_943()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_944()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_828(func_1078(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_946(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_828(iVar0, 1, 0) && func_828(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_948(int iParam0, int iParam1)
{
	iVar0 = func_1079(iParam0);
	if (iVar0 != -15)
	{
		func_871(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1080(iVar0, 1);
	}
	return false;
}

void func_949(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_950(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_951(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_952(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_953(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_962(iVar9);
	iVar2 = func_962(iVar10);
	iVar3 = func_962(iVar11);
	iVar5 = func_963(iVar9);
	iVar6 = func_963(iVar10);
	iVar7 = func_963(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_962(iVar12);
		iVar8 = func_963(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_954(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_955()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1081(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_956()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_957(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar0) && func_1059(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar2))
		{
			*sParam2++;
		}
		if ((func_1059(iVar0) && func_1059(iVar1)) && func_1059(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar2))
		{
			*sParam2++;
		}
		if (func_1059(iVar3))
		{
			*sParam2++;
		}
		if (((func_1059(iVar0) && func_1059(iVar1)) && func_1059(iVar2)) && func_1059(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_958(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1082(1497516462);
			func_1083(2016141805);
			func_1083(1010885152);
			func_1083(-502324015);
			break;
		case 2016141805:
			func_1083(1497516462);
			func_1082(2016141805);
			func_1083(1010885152);
			func_1083(-502324015);
			break;
		case 1010885152:
			func_1083(1497516462);
			func_1083(2016141805);
			func_1082(1010885152);
			func_1083(-502324015);
			break;
		case -502324015:
			func_1083(1497516462);
			func_1083(2016141805);
			func_1083(1010885152);
			func_1082(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1083(-538889627);
			func_1083(-538880323);
			func_1083(-1056767524);
			func_1082(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1084();
			func_1082(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1085();
			func_1082(iParam0);
			break;
		case 2019386373:
			func_1083(-664252410);
			func_1083(2109952320);
			func_1082(2019386373);
			break;
		case -664252410:
			func_1083(2019386373);
			func_1083(2109952320);
			func_1082(-664252410);
			break;
		case 2109952320:
			func_1083(2019386373);
			func_1083(-664252410);
			func_1082(2109952320);
			break;
		case -1674179981:
			func_1083(-1835851517);
			func_1083(-1838352012);
			func_1082(-1674179981);
			break;
		case -1835851517:
			func_1083(-1674179981);
			func_1083(-1838352012);
			func_1082(-1835851517);
			break;
		case -1838352012:
			func_1083(-1674179981);
			func_1083(-1835851517);
			func_1082(-1838352012);
			break;
		case -1717960576:
			func_1083(210001842);
			func_1082(-1717960576);
			break;
		case 210001842:
			func_1083(-1717960576);
			func_1082(210001842);
			break;
		case -150493654:
			func_1083(-1271608261);
			func_1083(1846061697);
			func_1083(-1145519186);
			func_1082(-150493654);
			break;
		case -1271608261:
			func_1083(-150493654);
			func_1083(1846061697);
			func_1083(-1145519186);
			func_1082(-1271608261);
			break;
		case 1846061697:
			func_1083(-150493654);
			func_1083(-1271608261);
			func_1083(-1145519186);
			func_1082(1846061697);
			break;
		case -1145519186:
			func_1083(-150493654);
			func_1083(-1271608261);
			func_1083(1846061697);
			func_1082(-1145519186);
			break;
		case 1766284049:
			func_1083(280705402);
			func_1083(1926308480);
			func_1082(1766284049);
			break;
		case 280705402:
			func_1083(1766284049);
			func_1083(1926308480);
			func_1082(280705402);
			break;
		case 1926308480:
			func_1083(1766284049);
			func_1083(280705402);
			func_1082(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1083(439465264);
				func_1082(1609506757);
			}
			else
			{
				func_1083(1609506757);
				func_1083(439465264);
			}
			break;
		case 439465264:
			if (func_595(1609506757))
			{
				if (bParam1)
				{
					func_1082(439465264);
				}
				else
				{
					func_1083(439465264);
				}
			}
			break;
		case 1822001510:
			func_1083(-1612662716);
			func_1082(1822001510);
			break;
		case -1612662716:
			func_1083(1822001510);
			func_1082(-1612662716);
			break;
		case 1306158345:
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(1306158345);
			break;
		case 1952610440:
			func_1083(1306158345);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(1952610440);
			break;
		case -223469678:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(-223469678);
			break;
		case -404698347:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(1517904467);
			func_1082(-404698347);
			break;
		case 1517904467:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1082(1517904467);
			break;
		case 1376646519:
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(1376646519);
			break;
		case 931649776:
			func_1083(1376646519);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(931649776);
			break;
		case -434590080:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(-434590080);
			break;
		case 1743048395:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(449774763);
			func_1082(1743048395);
			break;
		case 449774763:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1082(449774763);
			break;
		case -1414537028:
			func_1083(38162571);
			func_1083(1350391819);
			func_1083(54073871);
			func_1082(-1414537028);
			break;
		case 38162571:
			func_1083(-1414537028);
			func_1083(1350391819);
			func_1083(54073871);
			func_1082(38162571);
			break;
		case 1350391819:
			func_1083(-1414537028);
			func_1083(38162571);
			func_1083(54073871);
			func_1082(1350391819);
			break;
		case 54073871:
			func_1083(-1414537028);
			func_1083(38162571);
			func_1083(1350391819);
			func_1082(54073871);
			break;
		case 198200492:
			func_1082(198200492);
			func_1083(-1124061431);
			func_1083(52706132);
			func_1083(-259123672);
			break;
		case -1124061431:
			func_1083(198200492);
			func_1082(-1124061431);
			func_1083(52706132);
			func_1083(-259123672);
			break;
		case 52706132:
			func_1083(198200492);
			func_1083(-1124061431);
			func_1082(52706132);
			func_1083(-259123672);
			break;
		case -259123672:
			func_1083(198200492);
			func_1083(-1124061431);
			func_1083(52706132);
			func_1082(-259123672);
			break;
		case -919512195:
			func_1082(-919512195);
			func_1083(-1925798111);
			func_1083(420709909);
			func_1083(1703426636);
			break;
		case -1925798111:
			func_1082(-1925798111);
			func_1083(-919512195);
			func_1083(420709909);
			func_1083(1703426636);
			break;
		case 420709909:
			func_1082(420709909);
			func_1083(-919512195);
			func_1083(-1925798111);
			func_1083(1703426636);
			break;
		case 1703426636:
			func_1082(1703426636);
			func_1083(-919512195);
			func_1083(-1925798111);
			func_1083(420709909);
			break;
		case -1223121209:
			func_1082(-1223121209);
			func_1083(630808005);
			break;
		case 630808005:
			func_1082(630808005);
			func_1083(-1223121209);
			break;
		case 1453909576:
			func_1082(1453909576);
			func_1083(1643531967);
			break;
		case 1643531967:
			func_1082(1643531967);
			func_1083(1453909576);
			break;
		case 0:
			func_1082(0);
			func_1083(473295046);
			func_1083(-1738165526);
			break;
		case 473295046:
			func_1082(473295046);
			func_1083(0);
			func_1083(-1738165526);
			break;
		case -1738165526:
			func_1082(-1738165526);
			func_1083(0);
			func_1083(473295046);
			break;
		case 932909855:
			func_1082(932909855);
			func_1083(2051822093);
			break;
		case 2051822093:
			func_1082(2051822093);
			func_1083(932909855);
			break;
		case 405586984:
			func_1082(405586984);
			func_1083(1509509592);
			func_1083(-959357075);
			func_1083(-1311865656);
			break;
		case 1509509592:
			func_1082(1509509592);
			func_1083(405586984);
			func_1083(-959357075);
			func_1083(-1311865656);
			break;
		case -959357075:
			func_1082(-959357075);
			func_1083(1509509592);
			func_1083(405586984);
			func_1083(-1311865656);
			break;
		case -1311865656:
			func_1082(-1311865656);
			func_1083(1509509592);
			func_1083(-959357075);
			func_1083(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1082(-524145696);
			}
			else
			{
				func_1083(-524145696);
			}
			func_1083(1626481264);
			func_1083(282809459);
			break;
		case 282809459:
			func_1082(282809459);
			func_1083(1626481264);
			func_1083(-524145696);
			break;
		case 1626481264:
			func_1082(1626481264);
			func_1083(-524145696);
			func_1083(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1082(885203519);
			}
			else
			{
				func_1083(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1082(-1080627546);
			}
			else
			{
				func_1083(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_595(iParam0))
				{
					func_1082(iParam0);
				}
			}
			else if (func_595(iParam0))
			{
				func_1083(iParam0);
			}
			break;
	}
}

void func_959(int iParam0)
{
	if (!func_1086(iParam0))
	{
		func_1088(func_1087(iParam0));
	}
}

int func_960()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1086(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_961(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_962(iVar9);
	iVar2 = func_962(iVar10);
	iVar3 = func_962(iVar11);
	iVar5 = func_963(iVar9);
	iVar6 = func_963(iVar10);
	iVar7 = func_963(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_962(iVar12);
		iVar8 = func_963(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_962(int iParam0)
{
	if (func_828(iParam0, 1, 0))
	{
		iVar0 = func_791(iParam0, 0, 0);
	}
	return iVar0;
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_964(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_965(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_966(int iParam0, int iParam1)
{
	if (!func_867(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_967(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_966(iParam1, 5) || iParam0 == func_966(iParam1, 6)) || iParam0 == func_966(iParam1, 7)) || iParam0 == func_966(iParam1, 8)) || iParam0 == func_966(iParam1, 9))
	{
		func_957(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_803(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_805(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_968(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_966(iParam1, 5) || iParam0 == func_966(iParam1, 6)) || iParam0 == func_966(iParam1, 7)) || iParam0 == func_966(iParam1, 8)) || iParam0 == func_966(iParam1, 9))
	{
		if (func_957(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_803(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_805(51, 0, 0, iVar0, func_923(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_803(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_805(51, 0, 0, iVar0, func_923(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_969()
{
	if (func_921((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_970(int iParam0, int iParam1)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_917(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_983("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_984(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_401(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_985(iVar1);
				return true;
			}
			iVar3++;
		}
		func_985(iVar1);
	}
	return false;
}

void func_971(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_972(int iParam0)
{
	if (!func_1089(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_973(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_974(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

bool func_975(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1090();
	if (iParam2 == 39)
	{
		Var0 = { func_583(iParam0, 1, 0) };
		iParam2 = func_776(func_905(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_806(iParam0, 866047851) && func_1075(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_978(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1091(func_1037(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1092(iParam2);
	func_1093(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1094(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1094(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1095(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1096(iParam0, iParam2, iParam1, func_161() != -1);
	if (bParam4)
	{
		func_1097(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1097(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1098(func_1037(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_976(bool bParam0, bool bParam1, bool bParam2)
{
	func_1099(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_977(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1100(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1101(Var0);
}

bool func_978(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_979()
{
	func_1102(&(Global_1946804->f_2776));
	func_1103(32768);
	func_1098(1108822547, 8, 6);
}

int func_980(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_776(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_981(int iParam0)
{
	if (func_1104(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1105(Var0);
}

void func_982(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1105(Var0);
}

bool func_983(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_726(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_984(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_985(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_986()
{
	if (func_1106())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1107(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1107(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(3, round((to_float(iVar8) * fVar10)), 0);
	func_1114(3, fVar9, fVar9 > 100f);
	return func_1115(fVar7, -100f, 100f);
}

float func_987()
{
	if (func_1106())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1107(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1107(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(2, round((to_float(iVar8) * fVar10)), 0);
	func_1114(2, fVar9, fVar9 > 100f);
	return func_1115(fVar7, -100f, 100f);
}

float func_988()
{
	if (func_1106())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1107(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1116())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1117())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1107(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(1, round((to_float(iVar8) * fVar10)), 0);
	func_1114(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1107(0);
	}
	return func_1115(fVar7, -100f, 100f);
}

bool func_989(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_990(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_673(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_915(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_589(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_726(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_991(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1118();
			}
			break;
	}
	return 0;
}

int func_992(int iParam0)
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

bool func_993(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_994(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_993(iParam0))
	{
		return;
	}
	if (func_1119(iParam0))
	{
		return;
	}
	if (!func_1120(iParam0))
	{
		func_1121(iParam0, 1, 0);
	}
	iVar0 = func_1122(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1123(iParam0, 512))
		{
			func_977(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1124() && !bParam1) && !func_239(0, 0, 1))
	{
		func_539(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1125(iParam0, 6);
	if (bParam2)
	{
		if (!func_239(0, 0, 1))
		{
			func_559(1, 4);
		}
	}
}

int func_995()
{
	return Global_1946804->f_1;
}

bool func_996(int iParam0, bool bParam1)
{
	return func_991(iParam0, 0) < func_1126(iParam0, bParam1);
}

bool func_997(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_721(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_998(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_776(iParam0, 1)] != &Global_1946804->f_57[func_776(iParam0, 1)];
}

void func_999(int iParam0, int iParam1)
{
	if (func_806(iParam1, 130796156))
	{
		func_1127(iParam1, 0);
	}
	else if (func_806(iParam1, 930141731))
	{
		func_1127(iParam1, 1);
		func_1128(iParam0);
	}
}

void func_1000(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1001(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1129(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1130(uParam2, iParam0, Var1);
	return 1;
}

int func_1002(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1004(int iParam0)
{
	if (!func_1131(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1005()
{
	return !&Global_1911774;
}

void func_1006(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1007(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1008(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1009(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_1010(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_548(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1011(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1012(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_1013(int iParam0)
{
	return iParam0 > -1;
}

bool func_1014(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1015(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_661(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1016(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1017(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1018(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1019(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1020(int iParam0, int iParam1)
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

void func_1021(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1132(iParam0, iParam6);
	func_1133(iParam0, iParam5);
	func_1134(iParam0, iParam4);
	func_1135(iParam0, iParam3);
	func_1136(iParam0, iParam2);
	func_1137(iParam0, iParam1);
}

bool func_1022(int iParam0, int iParam1)
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

bool func_1023(int iParam0, int iParam1)
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

bool func_1024(int iParam0, int iParam1)
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
	if (!func_1022(iParam0, iVar0))
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

void func_1025(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_1026(int iParam0)
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

int func_1027(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1028(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_554(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_536(&(iParam1->f_6), 0, 1);
	}
	if (!func_554(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_901(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_676(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_554(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1034(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1138(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1139(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_639(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1138(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_641(iParam1->f_6, 0, 1);
				}
				else
				{
					func_641(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1029(int* iParam0, int iParam1)
{
	if (!func_643(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_644(iParam0, 14);
		}
	}
}

bool func_1030(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1031(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1032(int iParam0, int iParam1)
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

bool func_1033(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1034(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	func_1138(iParam0, 18, 0, 1);
	func_1138(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1035(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1036(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_1037(int iParam0, int iParam1)
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

int func_1038(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1039(int iParam0)
{
	if (!func_673(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1040(int iParam0, var uParam1, bool bParam2)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_583(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_584((386 + iVar29), 1);
		if (func_585(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_586(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

struct<14> func_1041(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1042(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1043(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_726(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1044()
{
	return func_1140(Global_40.f_12019);
}

int func_1045()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_922(iVar1);
		if (func_828(iVar2, 1, 0) || func_1051(func_1050(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1046()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1141(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1047()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1056(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1048()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1051(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1053(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1055(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1056(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1057(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1058(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1059(int iParam0)
{
	if (func_1142(iParam0) && func_828(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1143(iParam0) && func_1144(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1060(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_846(iParam0));
}

int func_1061(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1062(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1063(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1064(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1065(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1066(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1067(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1068(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1069(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1070(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1071(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_776(iParam0, 1)]);
}

void func_1072()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1145();
		_unlock_set_unlocked(-1526891582, true);
		func_811(-916314281);
		func_851(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_811(494733111);
		func_851(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1073(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1074(int iParam0)
{
	Var0 = { func_583(iParam0, 1, 0) };
	return func_905(Var0.f_4);
}

int func_1075(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_806(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1076(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_776(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_978(524288))
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

bool func_1077(int iParam0)
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

int func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1079(int iParam0)
{
	return func_1146(iParam0, -1);
}

bool func_1080(int iParam0, bool bParam1)
{
	return func_1147(func_168(), iParam0, bParam1);
}

bool func_1081(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1082(int iParam0)
{
	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1083(int iParam0)
{
	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1084()
{
	func_1083(-939420910);
	func_1083(-1187950766);
	func_1083(356365161);
	func_1083(753127042);
	func_1083(-2038424081);
	func_1083(1884271742);
	func_1083(459290420);
}

void func_1085()
{
	func_1083(704802028);
	func_1083(588987611);
	func_1083(2008888900);
	func_1083(1649996811);
	func_1083(227918160);
	func_1083(168171957);
	func_1083(1193080109);
	func_1083(-491981251);
	func_1083(-639037538);
	func_1083(-618620429);
}

bool func_1086(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1088(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1089(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1090()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1091(int iParam0)
{
	func_1098(iParam0, 8, 6);
}

void func_1092(int iParam0)
{
	func_1148(&(Global_1946804->f_2589), iParam0);
}

void func_1093(int iParam0, int iParam1)
{
	func_1149(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1094(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1095(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_721(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1150(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1093(iVar1, iVar3);
		}
	}
	if (func_998(-1586649372) && func_1150(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1093(iVar1, iVar3);
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
						func_1093(iVar1, iVar3);
					}
				}
			}
			func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1151(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1151(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1093(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_721(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1077(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_721(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_806(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
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
						func_1093(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1077(&(Global_1946804->f_1497.f_1[iVar1])) || func_806(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
			}
			switch (func_721(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_721(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_721(&(uParam0->f_1[iVar1])) || func_806(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1096(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1152(0);
	if (iParam2 != 0 && func_1153(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1154(iParam0, func_1037(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1097(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_161() != -1;
	iVar7 = func_1152(0);
	if (func_978(32768))
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
			iVar5 = func_1037(iVar0, 1);
			if (func_1155(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1155(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1076(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1156(uParam0);
				if (iVar3 > 0)
				{
					if (!func_978(524288))
					{
						func_1100(524288);
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
							iVar5 = func_1037(iVar0, 1);
							if (func_1155(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1155(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1076(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1093(iVar0, iParam2);
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
					func_1103(524288);
				}
			}
		}
	}
}

void func_1098(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_776(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_776(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_776(iParam0, 1)])->f_10 && iParam1));
}

void func_1099(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1157(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_161() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1158(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1122(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1122(Global_40.f_7729);
				Global_1946804->f_1378 = func_1122(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1159(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1160(0, 1);
	}
}

void func_1100(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1101(struct<4> Param0)
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
			if (func_1161(Param0))
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
			func_1162(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1100(8);
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
			if (func_1161(Param0))
			{
				return;
			}
			func_1162(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1100(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_982(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1102(var uParam0)
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

void func_1103(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1104(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1105(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1161(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1161(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1162(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1100(8);
}

bool func_1106()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1107(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1108()
{
	fVar0 = func_1163(13);
	iVar1 = func_1164(fVar0);
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

float func_1109()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1110()
{
	if (func_940())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1111()
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

float func_1112()
{
	return Global_1955565->f_3;
}

void func_1113(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1165(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1114(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1165(iParam0, 2, 0, 0);
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

float func_1115(float fParam0, float fParam1, float fParam2)
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

bool func_1116()
{
	return func_1163(12) <= -99f;
}

bool func_1117()
{
	return func_1163(12) >= 99f;
}

int func_1118()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_721(iVar1) == -999503751)
		{
			if (func_1166() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1119(int iParam0)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	if (func_1123(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1120(int iParam0)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	if (func_1123(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1121(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_993(iParam0))
	{
		return;
	}
	if (!func_1120(iParam0))
	{
		func_1125(iParam0, 2);
		if (bParam2)
		{
			if (!func_239(0, 0, 1))
			{
				func_559(1, 4);
			}
		}
		if ((!func_1124() && !bParam1) && !func_239(0, 0, 1))
		{
			func_539(_create_var_string(10, "OUT_JOURN_ADD", func_1167(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1122(int iParam0)
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

bool func_1123(int iParam0, int iParam1)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1124()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1125(int iParam0, int iParam1)
{
	if (!func_993(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1126(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1127(int iParam0, bool bParam1)
{
	iVar0 = func_1168(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_808(50);
			}
			else
			{
				func_808(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_808(51);
			}
			else
			{
				func_808(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_833();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_833();
			}
			break;
		case 3:
			func_808(24);
			if (bParam1)
			{
				if (!func_1169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_833();
				}
			}
			break;
	}
}

void func_1128(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1170(0))
			{
				iVar0++;
			}
			if (func_1170(2))
			{
				iVar0++;
			}
			if (func_1170(4))
			{
				iVar0++;
			}
			if (!func_1171(16))
			{
				if (iVar0 == 1)
				{
					func_1172();
					func_626(456, 1);
					func_1173(16);
				}
			}
			if (!func_1171(32))
			{
				if (iVar0 >= 3)
				{
					func_1172();
					func_626(456, 1);
					func_1173(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1170(1))
			{
				iVar0++;
			}
			if (func_1170(3))
			{
				iVar0++;
			}
			if (func_1170(7))
			{
				iVar0++;
			}
			if (!func_1171(1))
			{
				if (iVar0 == 1)
				{
					func_1174();
					func_626(457, 1);
					func_1173(1);
				}
			}
			if (!func_1171(2))
			{
				if (iVar0 >= 3)
				{
					func_1174();
					func_626(457, 1);
					func_1173(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1170(5))
			{
				iVar0++;
			}
			if (func_1170(6))
			{
				iVar0++;
			}
			if (func_1170(8))
			{
				iVar0++;
			}
			if (!func_1171(4))
			{
				if (iVar0 == 1)
				{
					func_1175();
					func_626(455, 1);
					func_1173(4);
				}
			}
			if (!func_1171(8))
			{
				if (iVar0 >= 3)
				{
					func_1175();
					func_626(455, 1);
					func_1173(8);
				}
			}
			break;
	}
}

void func_1129(var uParam0)
{
	func_1000(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1000(uParam0, 617531372);
	}
	else
	{
		func_1000(uParam0, 291123060);
	}
}

void func_1130(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1176(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1131(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1132(int iParam0, int iParam1)
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

void func_1133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1134(int iParam0, int iParam1)
{
	iVar0 = func_1016(*iParam0);
	iVar1 = func_1015(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1020(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1135(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1136(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1137(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1138(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1139(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1140(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1141(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1142(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1143(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1144(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1177(&iVar0, 0, iVar95, &Var1) && !func_1177(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1178(iVar0, &Var1);
			if (func_673(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1145()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1179(Global_35, &uVar0);
	Var30 = { func_717(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1180(0);
	func_1181(7);
	func_1182(-1623728698, 1, 1, 0);
	if (func_995() == 1160113249)
	{
		func_1182(-763730846, 1, 1, 1);
		func_1182(-361635024, 1, 1, 1);
	}
	func_1183(Global_35, &uVar0);
}

int func_1146(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_726(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1132(&uVar6, iVar0);
	func_1133(&uVar6, iVar1);
	func_1134(&uVar6, iVar2);
	func_1135(&uVar6, iVar3);
	func_1136(&uVar6, iVar4);
	func_1137(&uVar6, iVar5);
	return uVar6;
}

bool func_1147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1184(iParam1) || !func_1184(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1148(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1185(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1185(uParam0->f_2[iVar0], 1))
				{
					func_1186(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1149(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1187(uParam0, 1))
	{
		func_1188(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1150(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1151(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1093(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1093(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1093(iVar2, iVar0);
		}
	}
}

int func_1152(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_995();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1153(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1154(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1155(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_776(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1156(var uParam0)
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

void func_1157(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_161() == -1)
	{
		func_1189(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1190(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1158(int iParam0, int iParam1)
{
	if (func_161() == -1)
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

void func_1159(int iParam0, bool bParam1, int iParam2)
{
	func_1191(&(Global_1946804->f_1378), iParam0);
	func_1192(2, iParam0, 6);
	if (bParam1)
	{
		func_1160(0, 1);
	}
}

void func_1160(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1193(0);
	}
	if (bParam0)
	{
		func_1100(8);
		func_1100(512);
	}
	else
	{
		func_1100(8);
		func_1100(16);
	}
}

bool func_1161(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1162(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1163(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1164(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1165(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1007(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1007(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1166()
{
	return Global_1946804->f_1497;
}

char* func_1167(int iParam0)
{
	iVar0 = func_1122(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1060(iVar0);
}

int func_1168(int iParam0)
{
	if (func_1194(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1195(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1196(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1197(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1169(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_828(func_1198(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1170(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_828(func_1199(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1171(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1172()
{
	if (func_161() != -1)
	{
		return;
	}
	func_851(1654063339, 1, 752097756);
	iVar0 = func_486(1);
	func_627(1, iVar0, 0);
}

void func_1173(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1174()
{
	if (func_161() != -1)
	{
		return;
	}
	func_851(1623931083, 1, 752097756);
	iVar0 = func_486(2);
	func_627(2, iVar0, 0);
}

void func_1175()
{
	if (func_161() != -1)
	{
		return;
	}
	func_851(-1845241476, 1, 752097756);
	iVar0 = func_486(0);
	func_627(0, iVar0, 0);
}

bool func_1176(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1177(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1200(iParam1) && !func_1201(iParam1))
	{
		iVar0 = func_1202(iParam1);
	}
	else
	{
		return false;
	}
	func_1203(uParam3);
	iVar5 = func_1204(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1178(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1205(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1206(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1179(int iParam0, int* iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_401(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1180(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_673(iVar1, 0))
		{
			func_1207(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1181(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_161() == -1)
	{
		func_1208(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_721(iVar2) != -999503751)
		{
			func_1209(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1210(iVar2, 0))
		{
			func_1211(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1182(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1212(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1213(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1214(0))
	{
		func_1215(iParam0, 1);
		if (func_995() == 1160113249)
		{
			func_1215(func_1214(-2125499975), 0);
		}
		else
		{
			func_1215(func_1214(1160113249), 0);
		}
	}
	func_1216();
	if (func_1217(iVar0))
	{
		_0x766315a564594401(func_726(0), iParam0, 0);
	}
	func_1211(iParam0, bParam3);
	if (bParam2)
	{
		func_1160(0, 0);
	}
}

void func_1183(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_402(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1184(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1019(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1018(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_426(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1015(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1016(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1017(iParam0);
	if (iVar5 < 1 || iVar5 > func_1020(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1185(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1186(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1187(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1188(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1189(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1190(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1191(var uParam0, int iParam1)
{
	if (func_161() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1189(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1190(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1192(int iParam0, int iParam1, int iParam2)
{
	if (func_161() == -1)
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

void func_1193(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1194(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1195(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1196(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1197(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1198(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1218(iParam0);
		case 1:
			return func_1219(iParam0);
		case 2:
			return func_1220(iParam0);
		case 3:
			return func_1221(iParam0);
	}
	return 0;
}

int func_1199(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1222(iParam0);
		case 1:
			return func_1223(iParam0);
		case 2:
			return func_1224(iParam0);
		case 3:
			return func_1225(iParam0);
		case 4:
			return func_1226(iParam0);
		case 5:
			return func_1227(iParam0);
		case 6:
			return func_1228(iParam0);
		case 7:
			return func_1229(iParam0);
		case 8:
			return func_1230(iParam0);
	}
	return 0;
}

bool func_1200(int iParam0)
{
	iParam0 = func_1231(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_1201(int iParam0)
{
	iParam0 = func_1231(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1200(iParam0))
	{
		return false;
	}
	iVar0 = func_1202(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_1202(int iParam0)
{
	iParam0 = func_1231(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

void func_1203(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1206(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1207(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_721(iParam0))
	{
		case -2061583405:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1216();
	}
	if (bParam1)
	{
		func_1160(0, 0);
	}
}

void func_1208(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1041(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1043(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_985(iVar0);
	}
}

void func_1209(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1233(iParam2, *uParam0);
	func_1234(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1210(int iParam0, int iParam1)
{
	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_726(0), &Var5, iParam1);
	return true;
}

void func_1211(int iParam0, bool bParam1)
{
	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_726(0), &Var5, bParam1);
}

bool func_1212(int iParam0)
{
	if (func_161() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1213(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1235(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1210(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_721(iParam0) != -999503751)
	{
		func_1209(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1214(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_995();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1215(int iParam0, int iParam1)
{
	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_726(0), &Var5);
	return 1;
}

void func_1216()
{
	if (func_161() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1217(int iParam0)
{
	return func_1237(func_1236(iParam0));
}

int func_1218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1231(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1232(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1235(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_721(iParam0) != -999503751)
		{
			func_1238(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_721(iParam0) != -999503751)
	{
		func_1238(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1210(iParam0, 1);
	return 1;
}

void func_1233(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1234(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1239(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_776(func_1074(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1240(uParam0);
	}
}

bool func_1235(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_1236(int iParam0)
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

bool func_1237(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1238(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1241(iParam1);
	func_1242(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1243(&(uParam0->f_26), iVar1);
		if (func_1244(uParam0->f_26, &iVar0))
		{
			func_1245(iVar0, iVar1);
		}
	}
}

void func_1239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1246(&(uParam0->f_3));
}

void func_1240(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1247(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1241(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1242(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1243(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1239(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1244(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1245(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1246(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1247(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1248(func_995());
	if (*uParam0)
	{
		func_1246(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_161() != -1, uParam2);
	*uParam0 = 1;
}

int func_1248(int iParam0)
{
	if (func_161() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

