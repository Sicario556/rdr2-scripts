void __EntryFunction__()
{
	if (has_force_cleanup_occurred(546))
	{
		func_1(Local_306.f_2);
		if (get_cause_of_most_recent_force_cleanup() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_306, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_306, &uScriptParam_0);
	while (Local_306.f_2888 == 0)
	{
		if (func_5(&Local_306))
		{
			func_2(0);
		}
		wait(0);
	}
	func_2(0);
	terminate_this_thread();
}

void func_1(int iParam0)
{
	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

void func_2(bool bParam0)
{
	func_8(&Local_306, bParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	terminate_this_thread();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (bParam2)
		{
			func_9(uParam0, uParam0->f_94[iVar0], 0);
		}
		else
		{
			func_10(uParam0, uParam0->f_94[iVar0], 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2353)
	{
		func_11(uParam0->f_2353[iVar0]);
		iVar0++;
	}
	if (bParam1)
	{
		func_12(uParam0);
	}
	else
	{
		func_13(uParam0, 0);
	}
}

void func_4(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	if (func_6() == -1)
	{
		func_1(uParam0->f_2);
	}
	StringCopy(&cVar1, func_14(uParam1->f_1), 64);
	StringConCat(&cVar1, "_BlkVol", 64);
	uParam0->f_20 = _create_volume_sphere_with_custom_name(uParam1->f_3, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, &cVar1);
	StringConCat(&cVar1, "_AmbBlockVol", 64);
	uParam0->f_19 = _create_volume_sphere_with_custom_name(uParam1->f_3, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, &cVar1);
	func_15(uParam1->f_3, 1.5f, 0);
	func_16(uParam1->f_3, 2f, 0);
	uParam0->f_22 = _0x4c39c95ae5db1329(uParam0->f_20, 0, 15);
	_0x18262cafebb5fbe1(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_21 = _0x0eb78c2b156635b1(-432403087, uParam1->f_3, 0f, 0f, 0f, 4f, 4f, 4f);
		_0xbe551c2cc421185d(uParam0->f_21, 1);
		_0x5b23dff8e0948bb2(uParam0->f_21, 0);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_84[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		func_18(uParam0->f_2353[iVar0], iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_92 = func_20(uParam0);
	_0xed9582b3da8f02b4(uParam0->f_92);
	func_21(uParam0, 0);
}

bool func_5(var uParam0)
{
	uParam0->f_15++;
	uParam0->f_2889 = func_22(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2889 || func_23(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2889;
	}
	uParam0->f_79 = get_distance_between_coords(Global_36, uParam0->f_3, false);
	uParam0->f_80 = get_distance_between_coords(Global_36, uParam0->f_3, true);
	uParam0->f_2890 = 0;
	uParam0->f_2879 = 0;
	uParam0->f_2880 = (uParam0->f_16 && get_interior_from_entity(Global_35) == uParam0->f_18);
	uParam0->f_2881 = (func_24(uParam0) || uParam0->f_2880);
	uParam0->f_2878 = is_sphere_visible(uParam0->f_3, 2f);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_80 < 8f;
	}
	else if (uParam0->f_2880)
	{
		uParam0->f_2879 = uParam0->f_80 < 5f;
	}
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_79 < 8f;
	}
	else if (uParam0->f_2881)
	{
		uParam0->f_2879 = uParam0->f_79 < 5f;
	}
	uParam0->f_91 = 0;
	if (uParam0->f_10 == 13 && func_25(&(uParam0->f_12)) > 2f)
	{
		func_26(uParam0);
		return func_27(uParam0);
	}
	func_28(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_29(uParam0);
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_94[iVar0]->f_1 != 0)
		{
			func_30(uParam0, uParam0->f_94[iVar0]);
		}
		iVar0++;
	}
	func_26(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (func_31(uParam0, 0))
		{
			func_32(uParam0->f_1, uParam0->f_3, 1073741824, 0);
			func_1(uParam0->f_2);
			func_21(uParam0, 9);
		}
	}
	if (func_6() == -1)
	{
		if (!func_33(uParam0) || func_34(player_id(), 1, 0, 1))
		{
			func_1(uParam0->f_2);
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_36(uParam0) == 1)
			{
				func_21(uParam0, 1);
			}
			break;
		case 1:
			if (!func_37(uParam0->f_3, 2f))
			{
				func_21(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					func_39(uParam0, iVar0);
					iVar0++;
				}
				func_21(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0) == 1)
			{
				uParam0->f_17 = create_tracked_point();
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					set_tracked_point_info(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_2887 = 0f;
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (is_screen_faded_out())
			{
				_0x9851de7aec10b4e1(uParam0->f_3, 2f, 1, 0);
				func_21(uParam0, 5);
			}
			else if (uParam0->f_91 > 0)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					destroy_tracked_point(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_21(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_79 > 70f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_79 > 18f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_79 > uParam0->f_2886)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					if (is_tracked_point_visible(uParam0->f_17))
					{
						uParam0->f_2887 = 0f;
					}
				}
				else if (would_entity_be_occluded(get_entity_model(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2887 = 0f;
				}
				uParam0->f_2887 = (uParam0->f_2887 + get_frame_time());
				if (uParam0->f_2887 > 1f)
				{
					func_21(uParam0, 5);
				}
				else if (uParam0->f_16 && get_interior_from_entity(Global_35) != uParam0->f_18)
				{
					func_21(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_41(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (_is_tracked_point_valid(uParam0->f_17))
			{
				destroy_tracked_point(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			func_42(uParam0->f_2);
			func_43(uParam0->f_1, 16);
			func_44(uParam0->f_1, 4194304);
			func_21(uParam0, 6);
			break;
		case 6:
			func_45(uParam0->f_2);
			if (uParam0->f_79 < 7f)
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			else if (uParam0->f_79 < 12f && is_ped_on_foot(Global_35))
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				func_48(uParam0->f_2);
				func_21(uParam0, 8);
			}
			break;
		case 8:
			func_49(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_82 == 0)
				{
					func_21(uParam0, 11);
				}
			}
			break;
		case 10:
			set_ped_reset_flag(Global_35, 184, true);
			if (!bVar1 || func_50() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
				else
				{
					func_53(uParam0);
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			func_21(uParam0, 12);
			break;
		case 12:
			func_13(uParam0, 1);
			func_21(uParam0, 13);
			break;
	}
	func_54(uParam0);
	return func_27(uParam0);
}

int func_6()
{
	return Global_1572887->f_12;
}

bool func_7(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

void func_8(var uParam0, bool bParam1)
{
	func_55(uParam0);
	func_1(uParam0->f_2);
	if (_is_tracked_point_valid(uParam0->f_17))
	{
		destroy_tracked_point(uParam0->f_17);
	}
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	if (is_valid_interior(get_interior_at_coords(uParam0->f_3)))
	{
		unpin_interior(get_interior_at_coords(uParam0->f_3));
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		remove_scenario_blocking_area(uParam0->f_22, false);
		_0xa1cfb35069d23c23(uParam0->f_20);
	}
	if (_does_volume_exist(uParam0->f_19))
	{
		_0x74c2b3dc0b294102(uParam0->f_19);
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_56(uParam0, uParam0->f_94[iVar0]->f_11, 0);
			func_9(uParam0, uParam0->f_94[iVar0], 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_57(uParam0, uParam0->f_94[iVar0]);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		func_11(uParam0->f_2353[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&uParam0->f_23[iVar0] == 1)
		{
			if (_does_scenario_point_exist(uParam0->f_23[iVar0]->f_10))
			{
				_delete_scenario_point(uParam0->f_23[iVar0]->f_10);
			}
		}
		uParam0->f_23[iVar0] = 0;
		uParam0->f_23[iVar0]->f_10 = 0;
		iVar0++;
	}
	if (!func_22(uParam0->f_8))
	{
		if (uParam0->f_2884)
		{
			sVar1 = func_58(uParam0);
			if (!is_string_null_or_empty(sVar1))
			{
				_0x531a78d6bf27014b(sVar1);
				uParam0->f_2884 = 0;
			}
		}
	}
	func_12(uParam0);
	_0x7d4e70a67a651c71(uParam0->f_92);
	func_59(uParam0->f_20);
	func_59(uParam0->f_19);
	func_59(uParam0->f_21);
}

void func_9(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (does_entity_exist(uParam1->f_11))
	{
		func_60(uParam0, uParam1, 1);
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		_0xbc781d24aa11f179(uParam1->f_11);
		freeze_entity_position(uParam1->f_11, false);
		set_ped_config_flag(uParam1->f_11, 26, false);
		_0x949b2f9ed2917f5d(uParam1->f_11, 0);
		clear_ragdoll_blocking_flags(uParam1->f_11, 319488);
		if (bParam2)
		{
			func_63(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_84[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_10(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (iParam4 == 0)
	{
	}
	if (does_entity_exist(uParam1->f_11))
	{
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		set_ped_config_flag(uParam1->f_11, 26, false);
		_0x949b2f9ed2917f5d(uParam1->f_11, 0);
		_0xbc781d24aa11f179(uParam1->f_11);
		freeze_entity_position(uParam1->f_11, false);
		clear_ragdoll_blocking_flags(uParam1->f_11, 319488);
		if (is_ped_a_player(uParam1->f_11))
		{
			set_ped_leg_ik_mode(uParam1->f_11, 2);
		}
		else
		{
			set_ped_leg_ik_mode(uParam1->f_11, 1);
		}
		if (iParam2 == 0)
		{
			if (bParam5)
			{
				func_63(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_93 = (uParam0->f_93 - 1);
			func_64(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_84[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_11(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
	}
	func_18(uParam0, uParam0->f_28);
}

void func_12(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

void func_15(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_16(vector3 vParam0, float fParam3, int iParam4)
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

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 9:
		case 11:
		case 17:
		case 20:
			return true;
		default:
			break;
	}
	return false;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_20), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_4), "", 64);
	uParam0->f_28 = iParam1;
}

void func_19(var uParam0)
{
	func_67(uParam0, -1473436841, 0);
	switch (func_68())
	{
		case 38:
			iLocal_0 = 0;
			break;
		case 8:
			iLocal_0 = 2;
			break;
		case 105:
			iLocal_0 = 3;
			break;
		case 75:
			iLocal_0 = 4;
			break;
		case 5:
			iLocal_0 = 5;
			break;
		case 76:
			iLocal_0 = 7;
			break;
		case 92:
			iLocal_0 = 8;
			break;
		case 115:
			iLocal_0 = 6;
			break;
		default:
			iLocal_0 = 1;
			break;
	}
	func_69(uParam0);
	func_70(uParam0, 4, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_bit_set(uParam0->f_83, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_70(uParam0, 1, 1);
	}
	func_71(&Local_1);
}

int func_20(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_bit_set(uParam0->f_83, iVar0) && !is_bit_set(uParam0->f_82, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_21(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	func_72(&(uParam0->f_12));
}

bool func_22(int iParam0)
{
	iVar0 = func_73(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_23(int iParam0)
{
	iVar0 = func_74(iParam0, 0);
	return _get_number_of_references_of_script_with_name_hash(iVar0) > 0;
}

bool func_24(var uParam0)
{
	if (uParam0->f_2880)
	{
		return true;
	}
	switch (uParam0->f_2)
	{
		case 2:
			return is_entity_in_angled_area(Global_35, 2955.036f, 523.2607f, 41.28577f, 2926.294f, 522.7525f, 56.23881f, 18.5f, false, true, 0);
		case 0:
		case 23:
			return is_entity_in_angled_area(Global_35, -803.2272f, -1319.447f, 42.55078f, -834.1096f, -1319.633f, 50.82779f, 19.75f, false, true, 0);
		case 32:
			return is_entity_in_angled_area(Global_35, -306.259f, 792.0828f, 116.4818f, -312.7949f, 826.4695f, 126.7013f, 19.75f, false, true, 0);
		case 27:
			return is_entity_in_angled_area(Global_35, 2644.131f, -1227.63f, 52.23838f, 2622.243f, -1227.719f, 85.54826f, 18f, false, true, 0);
		default:
			break;
	}
	return false;
}

float func_25(var uParam0)
{
	if (!func_75(uParam0))
	{
		return 0f;
	}
	if (func_76(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_77() - uParam0->f_1);
}

void func_26(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (&uParam0->f_2353[iVar0] == 2)
		{
			func_78(uParam0->f_2353[iVar0], 0);
			Jump @125; //curOff = 43
		}
		else if (&uParam0->f_2353[iVar0] == 5)
		{
			uParam0->f_2353[iVar0]->f_2 = _get_anim_scene_progress(uParam0->f_2353[iVar0]->f_1);
			Jump @125; //curOff = 88
		}
		else if (&uParam0->f_2353[iVar0] == 3)
		{
			func_79(uParam0, uParam0->f_2353[iVar0]->f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	fVar1 = func_80(uParam0->f_1);
	if (uParam0->f_9 != 0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (is_entity_dead(Global_35) || Global_1935630->f_22)
	{
		if (is_screen_faded_out())
		{
			func_1(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141->f_1328)
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (func_81(uParam0->f_1, 262144))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!func_82(uParam0->f_1))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_83(uParam0->f_7, 4194304))
		{
			func_1(uParam0->f_2);
			return 1;
		}
		if (func_68() != uParam0->f_7)
		{
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!func_84(uParam0->f_8) && !func_22(uParam0->f_8))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && _get_number_of_references_of_script_with_name_hash(19547436) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_79 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_9(uParam0, uParam0->f_94[iVar0], 1);
				iVar0++;
			}
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2889)
	{
		if (func_85())
		{
			if (!func_86(uParam0->f_2))
			{
				if (func_87())
				{
					if (uParam0->f_2 == 0 && get_hash_of_this_script_name() == 1121120602)
					{
						return 0;
					}
					if (uParam0->f_79 < 10f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_88(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	if ((get_frame_count() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_79 < 15f)
	{
		if (uParam0->f_2884 == 0)
		{
			sVar0 = func_58(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0xd9130842d7226045(sVar0, 1);
			uParam0->f_2884 = 1;
		}
		return;
	}
	if (uParam0->f_79 > 25f)
	{
		if (uParam0->f_2884)
		{
			sVar0 = func_58(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0x531a78d6bf27014b(sVar0);
			uParam0->f_2884 = 0;
		}
	}
}

void func_29(var uParam0)
{
	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0] == 5 && uParam0->f_240[iVar0]->f_22 == 0f)
		{
			Jump @988; //curOff = 57
		}
		else if (&uParam0->f_240[iVar0] == 1)
		{
			if (get_frame_count() > uParam0->f_240[iVar0]->f_2)
			{
				uParam0->f_240[iVar0] = 2;
			}
			Jump @988; //curOff = 101
		}
		else if (&uParam0->f_240[iVar0] == 2)
		{
			request_model(uParam0->f_240[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_240[iVar0]->f_1))
			{
				if (func_89(uParam0->f_240[iVar0]->f_16))
				{
					uParam0->f_240[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_240[iVar0]->f_23 = 255f;
				uParam0->f_240[iVar0]->f_4 = create_object_no_offset(uParam0->f_240[iVar0]->f_1, uParam0->f_240[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_240[iVar0]->f_4, uParam0->f_240[iVar0]->f_19, 2, true);
				uParam0->f_240[iVar0] = 5;
				set_model_as_no_longer_needed(uParam0->f_240[iVar0]->f_1);
				if (uParam0->f_240[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_240[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_240[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_240[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 370
		}
		else if (&uParam0->f_240[iVar0] == 4)
		{
			request_model(uParam0->f_240[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_240[iVar0]->f_1))
			{
				if (does_entity_exist(uParam0->f_240[iVar0]->f_4))
				{
					uParam0->f_240[iVar0]->f_16 = { get_entity_coords(uParam0->f_240[iVar0]->f_4, true, false) };
					uParam0->f_240[iVar0]->f_19 = { get_entity_rotation(uParam0->f_240[iVar0]->f_4, 2) };
					func_90(&(uParam0->f_240[iVar0]->f_4));
				}
				if (func_89(uParam0->f_240[iVar0]->f_16))
				{
					uParam0->f_240[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_240[iVar0]->f_4 = create_object_no_offset(uParam0->f_240[iVar0]->f_1, uParam0->f_240[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_240[iVar0]->f_4, uParam0->f_240[iVar0]->f_19, 2, true);
				uParam0->f_240[iVar0] = 5;
				uParam0->f_240[iVar0]->f_23 = 255f;
				set_model_as_no_longer_needed(uParam0->f_240[iVar0]->f_1);
				if (uParam0->f_240[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_240[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_240[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_240[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 725
		}
		else if (&uParam0->f_240[iVar0] == 5 && uParam0->f_240[iVar0]->f_22 != 0f)
		{
			if (does_entity_exist(uParam0->f_240[iVar0]->f_4))
			{
				fVar1 = (get_frame_time() / uParam0->f_240[iVar0]->f_22);
				uParam0->f_240[iVar0]->f_23 = (uParam0->f_240[iVar0]->f_23 + (fVar1 * 255f));
				if (uParam0->f_240[iVar0]->f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if (uParam0->f_240[iVar0]->f_23 >= 255f)
				{
					uParam0->f_240[iVar0]->f_23 = 255f;
					reset_entity_alpha(uParam0->f_240[iVar0]->f_4);
					uParam0->f_240[iVar0]->f_22 = 0f;
				}
				else if (uParam0->f_240[iVar0]->f_22 < 0f)
				{
					set_entity_alpha(uParam0->f_240[iVar0]->f_4, floor(uParam0->f_240[iVar0]->f_23), true);
				}
				else
				{
					set_entity_alpha(uParam0->f_240[iVar0]->f_4, ceil(uParam0->f_240[iVar0]->f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	uVar0 = 5;
	iVar10 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (is_entity_dead(uParam1->f_11))
		{
			func_10(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = _0x3ab6c7b0bb0df4b1(uParam1->f_11, -1);
		set_ped_reset_flag(uParam1->f_11, 49, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			request_model(uParam1->f_2, false);
			if ((has_model_loaded(uParam1->f_2) && get_frame_count() > uParam1->f_17) && !uParam0->f_2890)
			{
				uParam1->f_11 = func_91(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_entity_heading(uParam1->f_11, uParam1->f_10);
				set_model_as_no_longer_needed(uParam1->f_2);
				uParam1->f_12 = -1;
				func_92(uParam1->f_11, 0);
				iVar7 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (does_entity_exist(uParam1->f_11))
					{
						iVar7 = func_94(uParam0->f_1, func_93(uParam0));
						iVar10 = func_95(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar7);
					}
				}
				func_96(uParam0, &uVar0, &iVar6);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_97(uParam1->f_11, uParam0->f_1, iVar10, &uVar0, iVar6, &iVar8))
					{
						set_ambient_voice_name(uParam1->f_11, func_98(iVar8));
					}
					else if (func_99(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
					{
						set_ambient_voice_name(uParam1->f_11, func_98(iVar8));
					}
					else
					{
						iVar8 = 92;
					}
				}
				else if (func_99(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
				{
					set_ambient_voice_name(uParam1->f_11, func_98(iVar8));
				}
				else
				{
					iVar8 = 92;
				}
				func_100(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar7, iVar8);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, &(uParam0->f_23[uParam1->f_12]->f_2), 0, false, true, 0, false, -1f, false);
					}
				}
				uParam0->f_2890 = 1;
			}
			break;
		case 3:
			func_101(uParam0, uParam1);
			break;
		case 4:
			if (func_102(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_103(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_91++;
			if (!is_ped_injured(uParam1->f_11))
			{
				set_ped_can_leg_ik(uParam1->f_11, false);
			}
			bVar9 = func_104(uParam1);
			if (uParam1->f_14 && !bVar9)
			{
				func_105(uParam0, uParam1, 0);
			}
			else
			{
				func_106(uParam0, uParam1);
			}
			uParam1->f_14 = bVar9;
			break;
		case 6:
			func_107(uParam0, uParam1);
			break;
		case 7:
			if (!is_ped_using_any_scenario(uParam1->f_11) || _0x0c3cb2e600c8977d(uParam1->f_11, 0))
			{
				_0xbc781d24aa11f179(uParam1->f_11);
				func_10(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

int func_31(var uParam0, int iParam1)
{
	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return func_108(uParam0->f_3, fVar0, iParam1);
}

void func_32(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_109(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!_does_volume_exist(iVar0))
	{
		return;
	}
	iVar5 = create_itemset(true);
	if (is_itemset_valid(iVar5))
	{
		iVar2 = _0x886171a12f400b89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar3, iVar5));
			if (!is_entity_dead(iVar1))
			{
				if (func_110(iParam0, get_entity_model(iVar1)))
				{
					if (!is_entity_attached(iVar1))
					{
						if ((func_6() != -1 && network_has_control_of_entity(iVar1)) || func_6() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && is_entity_upright(iVar1, 90f))
							{
								freeze_entity_position(iVar1, true);
								set_entity_can_be_damaged(iVar1, false);
							}
							else
							{
								freeze_entity_position(iVar1, false);
								set_entity_can_be_damaged(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		_0x20a4bf0e09bee146(iVar5);
		destroy_itemset(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_59(iVar0);
}

bool func_33(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return func_111(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_111(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_112(bParam1, bParam2, bParam3);
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

void func_35(int iParam0)
{
	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
}

int func_36(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_17(uParam0->f_2))
			{
				return 1;
			}
			if (func_113())
			{
				return 0;
			}
			if (!is_valid_interior(get_interior_at_coords(uParam0->f_3)))
			{
				return 1;
			}
			uParam0->f_18 = get_interior_at_coords(uParam0->f_3);
			pin_interior_in_memory(uParam0->f_18);
			uParam0->f_16 = 1;
			func_114(uParam0);
			break;
		case 1:
			if (is_interior_ready(uParam0->f_18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_37(vector3 vParam0, float fParam3)
{
	iVar1 = create_itemset(true);
	if (!is_itemset_valid(iVar1))
	{
		return false;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	func_115(&iVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
	iVar3 = _0x886171a12f400b89(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar4, iVar1));
		if (is_entity_dead(iVar0))
		{
			if (_get_carrier_as_human(iVar0) != Global_35)
			{
				func_59(iVar2);
				_0x20a4bf0e09bee146(iVar1);
				destroy_itemset(iVar1);
				return true;
			}
		}
		iVar4++;
	}
	func_59(iVar2);
	_0x20a4bf0e09bee146(iVar1);
	destroy_itemset(iVar1);
	return false;
}

int func_38(var uParam0)
{
	func_53(uParam0);
	func_32(uParam0->f_1, uParam0->f_3, 3f, 1);
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	iVar9 = func_116(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443);
	func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!does_entity_exist(iVar9))
	{
		set_bit(&(uParam0->f_83), iParam1);
		return;
	}
	iVar8 = _find_closest_active_scenario_point_of_type(vVar0, uParam0->f_23[iParam1]->f_1, 0.5f, 0, false);
	if (_does_scenario_point_exist(iVar8))
	{
		uParam0->f_23[iParam1]->f_10 = iVar8;
		uParam0->f_23[iParam1] = 0;
		vVar3 = { get_offset_from_entity_given_world_coords(iVar9, vVar0) };
		fVar7 = (get_entity_heading(iVar9) - fVar6);
		_set_scenario_point_coords(iVar8, vVar3, false);
		_set_scenario_point_heading(iVar8, fVar7, false);
		return;
	}
	if (uParam0->f_1 == 2)
	{
		iVar8 = _find_closest_active_scenario_point_of_type(vVar0, -2043611403, 0.5f, 0, false);
		if (_does_scenario_point_exist(iVar8))
		{
			uParam0->f_23[iParam1]->f_10 = iVar8;
			uParam0->f_23[iParam1] = 0;
			vVar3 = { get_offset_from_entity_given_world_coords(iVar9, vVar0) };
			fVar7 = (get_entity_heading(iVar9) - fVar6);
			_set_scenario_point_coords(iVar8, vVar3, false);
			_set_scenario_point_heading(iVar8, fVar7, false);
			return;
		}
	}
	if (!_does_scenario_point_exist(uParam0->f_23[iParam1]->f_10))
	{
		vVar3 = { get_offset_from_entity_given_world_coords(iVar9, vVar0) };
		fVar7 = (get_entity_heading(iVar9) - fVar6);
		uParam0->f_23[iParam1]->f_10 = create_scenario_point_attached_to_entity(iVar9, uParam0->f_23[iParam1]->f_1, vVar3, fVar7, 0, 0, 0);
		uParam0->f_23[iParam1] = 1;
		if (_does_scenario_point_exist(uParam0->f_23[iParam1]->f_10))
		{
		}
	}
}

int func_40(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			func_118(uParam0);
			func_114(uParam0);
			break;
		case 1:
			func_118(uParam0);
			if (!func_119(uParam0))
			{
				return 2;
			}
			func_114(uParam0);
			break;
		case 2:
			if (_0x5c16855277819bbf() < uParam0->f_92)
			{
				return 2;
			}
			func_114(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, uParam0->f_94[iParam1], 1, 1, 0, 1);
	if (is_bit_set(uParam0->f_83, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_120(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_121(uParam0->f_7);
	}
	uParam0->f_94[iParam1]->f_2 = iParam2;
	func_122(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -get_random_float_in_range(0.25f, 1.25f), 0f, &(uParam0->f_94[iParam1]->f_7), 0);
	uParam0->f_94[iParam1]->f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_123(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_94[iParam1]->f_10));
	uParam0->f_94[iParam1]->f_13 = iParam1;
	uParam0->f_94[iParam1]->f_15 = 1;
	uParam0->f_94[iParam1]->f_12 = iParam1;
	uParam0->f_84[iParam1] = iParam1;
	uParam0->f_93++;
	set_bit(&(uParam0->f_82), iParam1);
	func_103(uParam0->f_94[iParam1], 1);
	if (iParam3 > 0)
	{
		uParam0->f_94[iParam1]->f_17 = (get_frame_count() + iParam3);
	}
	return 1;
}

int func_42(int iParam0)
{
	if (func_6() != -1)
	{
		return 1;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return 0;
	}
	if ((*Global_1392915)[iVar0]->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		Global_1392915->f_121[iVar0]->f_15 = 1;
	}
	return Global_1392915->f_121[iVar0]->f_15;
}

void func_43(int iParam0, int iParam1)
{
	if (func_81(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

void func_44(int iParam0, int iParam1)
{
	if (!func_81(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

void func_45(int iParam0)
{
	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_16 == 0)
	{
		Global_1392915->f_121[iVar0]->f_16 = 1;
	}
}

void func_46(var uParam0)
{
	func_124(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 62, 1598471465, vVar1, vVar4, 0, 0);
	func_126(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 61, func_127(61, 0), vVar1, vVar4, 0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_128(uParam0, iVar0, &vVar1, &vVar4, 1);
		func_125(uParam0, (63 + iVar0), func_129(), vVar1, vVar4, iVar0, 0);
		iVar0++;
	}
}

bool func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0] != 0 && &uParam0->f_240[iVar0] != 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_48(int iParam0)
{
	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_16 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_16 = 0;
}

void func_49(var uParam0)
{
	if (Local_1 < 9)
	{
		if (func_22(uParam0->f_8))
		{
			func_130(&Local_1, 9);
		}
	}
	if (func_111(uParam0, 4))
	{
		if (func_6() == -1)
		{
			func_62(uParam0->f_2, uParam0->f_94[4]->f_11);
		}
		else
		{
			func_62(uParam0->f_2, 0);
		}
		if (uParam0->f_2885 == 1)
		{
			func_130(&Local_1, 7);
			uParam0->f_2885 = 0;
		}
	}
	switch (Local_1)
	{
		case 0:
			func_130(&Local_1, 1);
			break;
		case 1:
			if (uParam0->f_2885 == 1)
			{
				return;
			}
			if (!func_111(uParam0, 4))
			{
				return;
			}
			if (func_131(uParam0, 5) <= 1)
			{
				return;
			}
			uParam0->f_2883 = 1;
			func_132(uParam0, uParam0->f_94[4]->f_11, "MINIGAME_DEALER_PLACE_BET");
			func_130(&Local_1, 2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					func_133(Local_1.f_5[iVar0], 2, get_random_float_in_range(1f, 2f), 0);
				}
				iVar0++;
			}
			func_130(&Local_1, 3);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					if (!func_134(Local_1.f_5[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_130(&Local_1, 4);
			break;
		case 4:
			if (!func_135(&Local_1, uParam0))
			{
				return;
			}
			func_130(&Local_1, 5);
			break;
		case 5:
			func_136(&Local_1, uParam0);
			break;
		case 6:
			func_137(&Local_1, uParam0);
			break;
		case 7:
			func_138(&Local_1, uParam0);
			break;
		case 9:
			func_139(&Local_1, uParam0);
			break;
	}
}

int func_50()
{
	return Global_1899528->f_61;
}

bool func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar5 = func_140(uParam0->f_1, iVar0, &uVar1, &uVar2, &iVar3, &iVar4);
		if (!is_entity_dead(iVar5))
		{
			Local_1.f_5[iVar0]->f_10 = uVar1;
			func_70(uParam0, iVar0, 0);
			Local_1.f_5[iVar0]->f_1 = uVar2;
			func_100(uParam0, uParam0->f_94[iVar0], iVar5, iVar0, 1, 1, iVar3, iVar4);
		}
		iVar0++;
	}
	func_46(uParam0);
	func_141();
	return true;
}

void func_52()
{
	func_141();
	func_142();
	func_143(-1);
	func_144(-1);
}

bool func_53(var uParam0)
{
	bVar2 = false;
	if (func_145() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!func_146(uParam0->f_94[iVar0]))
			{
				iVar1 = func_140(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!is_entity_dead(iVar1) && !decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, uParam0->f_94[iVar0], iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_70(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_146(uParam0->f_94[iVar0]))
		{
			if (func_147(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, uParam0->f_94[iVar0], iVar1, iVar0, 1, 0, -1, 92))
					{
						func_70(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (uParam0->f_1 == 0)
		{
			if (func_148(uParam0, 4))
			{
				func_35(uParam0->f_2);
			}
			else
			{
				func_1(uParam0->f_2);
			}
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_54(var uParam0)
{
}

void func_55(var uParam0)
{
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_149(uParam0, iVar0))
		{
			if (_0x3ab6c7b0bb0df4b1(iParam1, uParam0->f_2353[iVar0]->f_1))
			{
				func_79(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
}

char* func_58(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 2:
			return "MGBLK_Sounds";
		case 1:
			return "MGDOM_Sounds";
		default:
			break;
	}
	return "";
}

void func_59(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (is_string_null_or_empty(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && _does_anim_scene_exist(uParam0->f_2353[uParam1->f_20]->f_1))
	{
		remove_anim_scene_entity(uParam0->f_2353[uParam1->f_20]->f_1, &(uParam1->f_21), uParam1->f_11);
	}
	freeze_entity_position(uParam1->f_11, false);
	clear_bit(&(uParam0->f_2353[uParam1->f_20]->f_3), uParam1->f_13);
	if (uParam0->f_2353[uParam1->f_20]->f_3 == 0)
	{
		func_150(uParam0->f_2353[uParam1->f_20], 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

int func_61(int iParam0)
{
	if (func_6() != -1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915->f_121[iVar0]->f_6;
}

void func_62(int iParam0, int iParam1)
{
	if (func_6() != -1)
	{
		return;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915->f_121[iVar0]->f_6 = iParam1;
}

void func_63(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_64(int* iParam0)
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

void func_65(var uParam0, int iParam1)
{
	uParam0->f_240[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_240[iParam1]->f_5)) && uParam0->f_240[iParam1]->f_3 != -1)
	{
		func_152(uParam0, iParam1, 0);
	}
	uParam0->f_240[iParam1]->f_23 = 0f;
	uParam0->f_240[iParam1]->f_22 = 0f;
	StringCopy(&(uParam0->f_240[iParam1]->f_5), "", 64);
	uParam0->f_240[iParam1]->f_3 = -1;
	uParam0->f_240[iParam1]->f_14 = 0;
	func_90(&(uParam0->f_240[iParam1]->f_4));
	uParam0->f_240[iParam1]->f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_240[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_240[iParam1]->f_5)) && uParam0->f_240[iParam1]->f_3 != -1)
	{
		func_152(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_153(uParam0, iParam1);
	}
	StringCopy(&(uParam0->f_240[iParam1]->f_5), "", 64);
	uParam0->f_240[iParam1]->f_3 = -1;
	uParam0->f_240[iParam1]->f_23 = 0f;
	if (uParam0->f_240[iParam1]->f_15)
	{
		if (does_entity_exist(uParam0->f_240[iParam1]->f_4))
		{
			_0xc1193521e3b9fadd(uParam0->f_240[iParam1]->f_4, 0);
		}
	}
	uParam0->f_240[iParam1]->f_15 = 0;
	uParam0->f_240[iParam1]->f_14 = 0;
	func_154(&(uParam0->f_240[iParam1]->f_4), 1, 1);
	uParam0->f_240[iParam1]->f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_155(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

int func_68()
{
	return Global_1894899->f_2;
}

void func_69(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 5;
	if (uParam0->f_1 == 0)
	{
		iVar4 = (iVar4 - 1);
	}
	if (uParam0->f_1 == 2)
	{
		iVar1 = get_random_int_in_range(3, iVar4);
	}
	else
	{
		iVar1 = get_random_int_in_range(1, iVar4);
	}
	if ((uParam0->f_1 == 2 && uParam0->f_7 == 75) || (uParam0->f_1 == 1 && uParam0->f_7 == 38))
	{
		set_bit(&iVar0, 0);
		iVar1 = (iVar1 - 1);
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_random_int_in_range(0, iVar4);
		while (is_bit_set(iVar0, iVar3))
		{
			iVar3 = (iVar3 + 1 % iVar4);
		}
		set_bit(&iVar0, iVar3);
		iVar2++;
	}
	uParam0->f_83 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!is_bit_set(iVar0, iVar2))
		{
			set_bit(&(uParam0->f_83), iVar2);
		}
		iVar2++;
	}
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		set_bit(&(uParam0->f_83), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_83), iParam1);
	}
}

void func_71(int iParam0)
{
	func_130(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iParam0->f_5[iVar0]->f_7 = iVar0;
		iParam0->f_5[iVar0]->f_8 = 0;
		iParam0->f_5[iVar0]->f_9 = 0;
		func_133(iParam0->f_5[iVar0], 1, 0, 0);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	func_156(uParam0, 0f);
}

int func_73(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_158(iParam0);
}

int func_74(int iParam0, int iParam1)
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

bool func_75(var uParam0)
{
	return func_159(*uParam0, 1);
}

bool func_76(var uParam0)
{
	return func_159(*uParam0, 2);
}

float func_77()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_78(var uParam0, bool bParam1)
{
	if (is_string_null_or_empty(&(uParam0->f_4)))
	{
		return 0;
	}
	if (!_does_anim_scene_exist(uParam0->f_1))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		return 0;
	}
	if (!_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		return 0;
	}
	if (is_string_null_or_empty(&(uParam0->f_12)))
	{
		return 1;
	}
	if (!_0xdf7b5144e25cd3fe(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (bParam1)
	{
	}
	uParam0->f_2 = 0f;
	func_150(uParam0, 4);
	return 1;
}

void func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return;
	}
	if (&uParam0->f_2353[iParam1] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0]->f_3 == uParam0->f_2353[iParam1]->f_1)
			{
				func_152(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		_delete_anim_scene(uParam0->f_2353[iParam1]->f_1);
	}
	func_11(uParam0->f_2353[iParam1]);
}

float func_80(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_81(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

bool func_82(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	return (!func_161() || is_bit_set(Global_40.f_7854, iParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_84(int iParam0)
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
		iVar0 = func_158(iParam0);
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

bool func_85()
{
	return Global_1898164->f_163;
}

bool func_86(int iParam0)
{
	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_162(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

bool func_87()
{
	if (func_6() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_22((*Global_1392915)[iVar0]->f_4))
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

bool func_88(int iParam0, bool bParam1)
{
	if (func_163(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_164(5000))
		{
			return true;
		}
	}
	switch (func_165(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_89(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_90(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
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
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

int func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_166(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_92(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

int func_93(var uParam0)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_94)
	{
		if (&uParam0->f_94[iVar2])
		{
			iVar1 = uParam0->f_94[iVar2]->f_18;
			if (iVar1 != -1)
			{
				set_bit(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_94(int iParam0, int iParam1)
{
	iVar0 = func_167(iParam0);
	iVar1 = get_random_int_in_range(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!is_bit_set(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_168(iParam1, iParam2, iParam3);
	_set_ped_body_component(iParam0, iVar0);
	_update_ped_variation(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_96(var uParam0, var uParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (&uParam0->f_94[iVar0])
		{
			(*uParam1)[*iParam2] = uParam0->f_94[iVar0]->f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

bool func_97(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	uVar0 = 3;
	iVar4 = 0;
	if (func_169(iParam0))
	{
		return false;
	}
	func_170(get_entity_model(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = uParam3[iVar7];
		if (!func_171(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam3[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = uParam3[iVar7];
			if (func_171(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if (uParam3[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = get_random_int_in_range(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_171(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if (uParam3[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam5 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

bool func_99(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uVar0 = 3;
	iVar4 = 0;
	func_172(get_entity_model(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_171(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_171(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = get_random_int_in_range(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_171(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam4 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_100(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	if (is_entity_dead(iParam2))
	{
		return false;
	}
	if (iParam5 == 0)
	{
		if (*uParam1 == 1)
		{
			return true;
		}
	}
	*uParam1 = 1;
	uParam1->f_11 = iParam2;
	uParam1->f_13 = iParam3;
	uParam1->f_14 = 0;
	uParam1->f_18 = iParam6;
	uParam1->f_19 = iParam7;
	uParam1->f_20 = 0;
	if (bParam4)
	{
		uParam1->f_12 = iParam3;
		uParam0->f_84[iParam3] = iParam3;
		set_bit(&(uParam0->f_82), iParam3);
	}
	else
	{
		uParam1->f_12 = -1;
	}
	if (!is_ped_a_player(iParam2))
	{
		if (!does_entity_belong_to_this_script(iParam2, true))
		{
			set_entity_as_mission_entity(iParam2, true, true);
		}
	}
	set_ped_relationship_group_hash(iParam2, -225988669);
	set_ped_can_use_auto_conversation_lookat(iParam2, true);
	set_ped_config_flag(iParam2, 453, true);
	set_ped_config_flag(iParam2, 130, false);
	set_ped_config_flag(iParam2, 168, true);
	set_ped_config_flag(iParam2, 458, true);
	set_ped_config_flag(iParam2, 26, true);
	set_ped_config_flag(iParam2, 146, false);
	_0xb8de69d9473b7593(iParam2, 0);
	set_ragdoll_blocking_flags(iParam2, 319488);
	if (uParam0->f_1 == 2)
	{
		add_entity_to_audio_mix_group(iParam2, "Poker_NPC_Group", 0f);
	}
	if (bParam4)
	{
		func_173(iParam2);
		func_103(uParam1, 4);
	}
	else
	{
		func_103(uParam1, 3);
	}
	uParam0->f_81++;
	return true;
}

int func_101(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			task_follow_nav_mesh_to_coord(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, 0, 40000f);
			func_174(uParam1);
			break;
		case 1:
			if (func_175(uParam1->f_11, 713668775))
			{
				func_174(uParam1);
			}
			break;
		case 2:
			if (!func_175(uParam1->f_11, 713668775))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2889)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (func_176(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_169(uParam1->f_11))
			{
				iVar0 = 4;
				if (!is_bit_set(uParam0->f_82, iVar0))
				{
					set_bit(&(uParam0->f_82), iVar0);
					uParam0->f_84[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
					func_174(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_177(uParam0, get_entity_coords(uParam1->f_11, true, false), &iVar0))
			{
				set_bit(&(uParam0->f_82), iVar0);
				uParam0->f_84[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
				func_174(uParam1);
			}
			else
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (is_ped_active_in_scenario(uParam1->f_11, 0))
			{
				func_174(uParam1);
			}
			break;
		case 4:
			if (func_6() == -1 && uParam0->f_1 == 0)
			{
				if (func_111(uParam0, 4))
				{
					func_35(uParam0->f_2);
				}
				else
				{
					func_1(uParam0->f_2);
				}
			}
			func_173(uParam1->f_11);
			func_178(uParam1);
			func_103(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_102(var uParam0, var uParam1)
{
	iVar8 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			remove_all_ped_weapons(uParam1->f_11, true, true);
			if (Local_1.f_5[uParam1->f_12]->f_1 == -1)
			{
				if (func_179())
				{
					Local_1.f_5[uParam1->f_12]->f_1 = 0;
				}
				else
				{
					Local_1.f_5[uParam1->f_12]->f_1 = 1;
				}
			}
			if (uParam1->f_12 != 4)
			{
				Local_1.f_5[uParam1->f_12]->f_10 = get_random_int_in_range(0, 200);
				func_180(uParam0, uParam1->f_12, Local_1.f_5[uParam1->f_12]->f_10);
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < 5)
				{
					func_128(uParam0, iVar7, &vVar1, &vVar4, 1);
					func_125(uParam0, (63 + iVar7), func_129(), vVar1, vVar4, iVar7, 0);
					iVar7++;
				}
			}
			if (uParam1->f_12 == 4)
			{
				sVar9 = func_181(iVar8, 0);
			}
			else
			{
				sVar9 = func_182(Local_1.f_5[uParam1->f_12]->f_1);
			}
			if (func_183(uParam0, iVar8, sVar9, "PBL_Idle", 2))
			{
				func_174(uParam1);
			}
			break;
		case 1:
			if (!func_184(uParam0, iVar8))
			{
				return 0;
			}
			_0x99b2a2e3655deaf1(uParam1->f_11, "BlackjackSeatedNoCards");
			if (uParam1->f_12 == 4)
			{
				if (_0x0b7cb1300cbfe19c(uParam1->f_11, 1))
				{
					stop_anim_playback(uParam1->f_11, 0, false);
				}
				if (!is_entity_attached_to_any_ped(uParam0->f_240[61]->f_4))
				{
					attach_entity_to_entity(uParam0->f_240[61]->f_4, uParam1->f_11, get_ped_bone_index(uParam0->f_94[4]->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				func_185(uParam0, iVar8, uParam1, "DEALER");
				if (!func_186(uParam0, iVar8, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return 0;
				}
			}
			else
			{
				func_185(uParam0, iVar8, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, uParam1->f_12, &vVar1, &fVar0, 0);
				if (!func_186(uParam0, iVar8, vVar1 + Vector(Local_1.f_300, 0f, 0f), 0f, 0f, fVar0))
				{
					return 0;
				}
			}
			func_174(uParam1);
			break;
		case 2:
			if (func_47(uParam0))
			{
				if (uParam1->f_12 != 4)
				{
					func_180(uParam0, uParam1->f_12, Local_1.f_5[uParam1->f_12]->f_10);
				}
				else
				{
					func_188(uParam0->f_240[63]->f_4, 10, 0);
					func_189(uParam0->f_240[63]->f_4, 1);
					func_188(uParam0->f_240[64]->f_4, 10, 0);
					func_189(uParam0->f_240[64]->f_4, 2);
					func_188(uParam0->f_240[65]->f_4, 8, 0);
					func_189(uParam0->f_240[65]->f_4, 1);
					func_188(uParam0->f_240[66]->f_4, 7, 0);
					func_189(uParam0->f_240[66]->f_4, 2);
					func_188(uParam0->f_240[67]->f_4, 6, 0);
					func_189(uParam0->f_240[67]->f_4, 3);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_72(&(uParam0->f_4));
}

int func_104(var uParam0)
{
	if (!func_146(uParam0))
	{
		return 0;
	}
	if (is_ped_ragdoll(uParam0->f_11))
	{
		return 0;
	}
	if (is_ped_using_any_scenario(uParam0->f_11))
	{
		return 0;
	}
	if (uParam0->f_16)
	{
		return 1;
	}
	if (is_task_move_network_active(uParam0->f_11))
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	if (!func_190(uParam0, uParam1->f_11))
	{
		return 0;
	}
	if (uParam1->f_1 == 7)
	{
		return 0;
	}
	if (bParam2)
	{
		if (is_task_move_network_active(uParam1->f_11))
		{
		}
	}
	if (_0x083d497d57b7400f(uParam1->f_11))
	{
		freeze_entity_position(uParam1->f_11, false);
	}
	if (!uParam0->f_2889)
	{
		decor_set_bool(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	_0xbc781d24aa11f179(uParam1->f_11);
	func_191(uParam0, uParam1->f_12, 1);
	func_192(uParam0, uParam1->f_20, 1);
	if (is_ped_ragdoll(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_103(uParam1, 7);
	}
	return 1;
}

int func_106(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_12;
	if (uParam0->f_2881 == 0 && uParam0->f_2880 == 0)
	{
		if (uParam0->f_79 > 8f && Local_1.f_5[iVar0]->f_5 == 0)
		{
			return 1;
		}
	}
	switch (&Local_1.f_5[iVar0])
	{
		case 2:
			func_193(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_194(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_195(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_196(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_197(uParam0, uParam1, &Local_1);
			break;
		case 7:
			func_198(uParam0, uParam1, &Local_1);
			break;
		case 1:
			func_199(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_200(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_201(uParam0, uParam1, &Local_1);
			break;
		case 8:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_205(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			clear_ped_tasks(uParam1->f_11, 1, 0);
			func_191(uParam0, uParam1->f_12, 0);
			func_206(uParam1->f_11);
			func_174(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			func_174(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_108(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (is_projectile_type_within_distance(vParam0, -1504859554, fParam3, false) || is_projectile_type_within_distance(vParam0, 1885857703, fParam3, false))
		{
			return 1;
		}
	}
	if ((((((is_explosion_in_sphere(25, vParam0, fParam3) || is_explosion_in_sphere(0, vParam0, fParam3)) || is_explosion_in_sphere(2, vParam0, fParam3)) || is_explosion_in_sphere(30, vParam0, fParam3)) || is_explosion_in_sphere(31, vParam0, fParam3)) || is_explosion_in_sphere(29, vParam0, fParam3)) || is_explosion_in_sphere(26, vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_207());
	}
}

bool func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 325252933:
					return true;
				case -1740828633:
				case 1609095284:
					return true;
				case -1510839859:
				case 1407600554:
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == -1243444973)
			{
				return true;
			}
			if (iParam1 == -289651159)
			{
				return true;
			}
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == 325252933)
			{
				return true;
			}
			if (iParam1 == -1763848034)
			{
				return true;
			}
			if (iParam1 == 2096698905)
			{
				return true;
			}
			if (iParam1 == 375867283)
			{
				return true;
			}
			if (iParam1 == 1999055955)
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == -1025740342)
			{
				return true;
			}
			if (iParam1 == -1937484496)
			{
				return true;
			}
			if (iParam1 == 463271055)
			{
				return true;
			}
			if (iParam1 == 1186910594)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == 264425748)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == -1618805595)
			{
				return true;
			}
			if (iParam1 == 1230724566)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (&uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_94[&uParam0->f_84[iParam1]] && uParam0->f_94[&uParam0->f_84[iParam1]]->f_1 == 5);
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
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

bool func_113()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_114(var uParam0)
{
	func_208(uParam0, uParam0->f_11 + 1);
}

void func_115(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_207());
	}
}

int func_116(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	iVar3 = create_itemset(true);
	if (!is_itemset_valid(iVar3))
	{
		return 0;
	}
	func_209(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_115(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = _0x886171a12f400b89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar3));
		if (!is_entity_dead(iVar4))
		{
			if (func_110(iParam0, get_entity_model(iVar4)))
			{
				if (get_entity_upright_value(iVar4) > 0.95f)
				{
					func_59(iVar2);
					_0x20a4bf0e09bee146(iVar3);
					destroy_itemset(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_59(iVar2);
	_0x20a4bf0e09bee146(iVar3);
	destroy_itemset(iVar3);
	return 0;
}

int func_117(int iParam0, vector3 vParam1, var uParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_210(iParam0))
	{
		return 0;
	}
	if (!func_187(iParam0, vParam1, uParam4, iParam5, fParam6, iParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { _get_object_offset_from_coords(*fParam6, *iParam7, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { _get_object_offset_from_coords(*fParam6, *iParam7, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

void func_118(var uParam0)
{
}

bool func_119(var uParam0)
{
	return true;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	iVar5 = 0;
	if (iParam0 == 3)
	{
		return 417416138;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return -951746023;
	}
	else if (iParam0 == 1)
	{
		return -726434422;
	}
	switch (iParam1)
	{
		case 76:
			iVar0[0] = -2087759666;
			iVar0[1] = -1789856687;
			iVar5 = 2;
			break;
		case 105:
			iVar0[0] = -1345652903;
			iVar5 = 1;
			break;
		case 38:
			if (iParam0 == 1)
			{
				iVar0[0] = -989220241;
				iVar0[1] = -607723543;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = 1022365451;
				iVar5 = 1;
			}
			break;
		case 115:
			iVar0[0] = 480011144;
			iVar0[1] = 966958492;
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = 413771941;
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = 2133848994;
				iVar0[1] = 1854820959;
				iVar0[2] = 549598920;
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = -1938511850;
				iVar0[1] = -1938511850;
				iVar5 = 2;
			}
			break;
		case 92:
			iVar0[0] = 918972034;
			iVar5 = 1;
			break;
		case 69:
			if (iParam0 == 1)
			{
				iVar0[0] = -439429058;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = -439429058;
				iVar5 = 1;
			}
			break;
		case 75:
			iVar0[0] = -2087759666;
			iVar0[1] = -1789856687;
			iVar0[2] = 1124384604;
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return &(iVar0[iParam2]);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return -669394275;
		case 5:
			return 1818250007;
		case 26:
			return 1709294431;
		case 76:
			return -1680931998;
		case 92:
			return 964905443;
		case 78:
			return -1486681919;
		case 38:
			return -1766535683;
		case 75:
			return -1680931998;
		default:
			break;
	}
	return 0;
}

int func_122(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_187(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { _get_object_offset_from_coords(vVar0, fVar3, vParam6) };
	return 1;
}

int func_123(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_211(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	*uParam3 = (fParam1 + fVar0);
	if (*uParam3 > 360f)
	{
		*uParam3 = (*uParam3 - 360f);
	}
	if (*uParam3 < -360f)
	{
		*uParam3 = (*uParam3 + 360f);
	}
	return 1;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bVar0 = true;
	vVar1 = { Vector(79.91527f, 35.75516f, -45.47359f) / Vector(100f, 100f, 100f) };
	vVar4 = { 0f, 0f, -22f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

void func_125(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_240[iParam1] = 2;
	uParam0->f_240[iParam1]->f_16 = { vParam3 };
	uParam0->f_240[iParam1]->f_19 = { vParam6 };
	uParam0->f_240[iParam1]->f_1 = iParam2;
	uParam0->f_240[iParam1]->f_13 = iParam10;
	if (does_entity_exist(uParam0->f_240[iParam1]->f_4))
	{
		if (get_entity_model(uParam0->f_240[iParam1]->f_4) == iParam2)
		{
			if (!func_213(uParam0->f_240[iParam1]->f_16, get_entity_coords(uParam0->f_240[iParam1]->f_4, true, false)))
			{
				set_entity_coords(uParam0->f_240[iParam1]->f_4, uParam0->f_240[iParam1]->f_16, true, false, false, true);
			}
			set_entity_rotation(uParam0->f_240[iParam1]->f_4, uParam0->f_240[iParam1]->f_19, 2, true);
			uParam0->f_240[iParam1] = 5;
		}
		else
		{
			uParam0->f_240[iParam1] = 4;
		}
		if (uParam0->f_240[iParam1]->f_13)
		{
			set_entity_visible(uParam0->f_240[iParam1]->f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_240[iParam1] = 1;
		uParam0->f_240[iParam1]->f_2 = (get_frame_count() + iParam9);
	}
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bVar0 = true;
	vVar1 = { 0.0537f, 0.3153f, 0.8006f };
	vVar4 = { 0.0247f, -0.0879f, 164.3123f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 62:
			return 1598471465;
		case 0:
		case 84:
		case 85:
		case 86:
		case 87:
			Var2 = 11;
			Var2.f_1 = 0;
			if (func_214(&uVar1, Var2, iLocal_0, 0))
			{
				return uVar1;
			}
			return -1360732541;
		case 61:
			if (func_215(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return 470485448;
		case 55:
		case 56:
		case 57:
		case 58:
			return func_129();
		case 60:
			return func_129();
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return func_129();
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return func_129();
		default:
			break;
	}
	return -1069761451;
	return 0;
}

int func_128(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		vVar1 = { Vector(84.27908f, 37.08674f, -34.37373f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { Vector(84.27908f, 38.90664f, -38.96327f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { Vector(84.27908f, 40.71551f, -43.35525f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { Vector(84.27908f, 42.49949f, -47.77074f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { Vector(84.27908f, 44.32357f, -52.2855f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bParam4)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam2, uParam3);
	}
	else
	{
		*uParam2 = { vVar1 };
		*uParam3 = { vVar4 };
	}
	return 1;
}

int func_129()
{
	iVar0 = 1590697544;
	if (func_216(&iVar0, iLocal_0))
	{
		return iVar0;
	}
	return iVar0;
}

void func_130(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_72(&(iParam0->f_1));
}

int func_131(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar1] && uParam0->f_94[iVar1]->f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_132(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_2879 == 0)
	{
		return false;
	}
	return func_217(iParam1, sParam2, -1454469014, 0, 1, 0, 0, 1);
}

void func_133(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_5 = 0;
	uParam0->f_6 = iParam2;
	func_72(&(uParam0->f_2));
}

bool func_134(var uParam0)
{
	return ((uParam0->f_5 == 100 || *uParam0 == 1) || *uParam0 == 0);
}

bool func_135(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			func_133(Local_1.f_5[4], 3, 0, 0);
			func_218(uParam0);
			break;
		case 1:
			if (!func_134(Local_1.f_5[4]))
			{
				return false;
			}
			func_218(uParam0);
			break;
		case 2:
			return true;
	}
	return false;
}

void func_136(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_219(uParam1, iParam0, iParam0->f_301))
			{
				iParam0->f_301++;
				if (iParam0->f_301 == 4)
				{
					func_130(iParam0, 6);
				}
				return;
			}
			iParam0->f_5[iParam0->f_301]->f_11 = func_220(iParam0, iParam0->f_301);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(iParam0->f_5[iParam0->f_301]))
			{
				return;
			}
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			if (iParam0->f_5[iParam0->f_301]->f_11 == 1)
			{
				func_133(iParam0->f_5[4], 4, 0, 0);
			}
			func_218(iParam0);
			break;
		case 2:
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			iParam0->f_301++;
			func_221(iParam0, 0);
			if (iParam0->f_301 == 4)
			{
				func_130(iParam0, 6);
			}
			break;
	}
}

void func_137(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			iParam0->f_301 = 4;
			func_133(iParam0->f_5[4], 5, 0, 0);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			iParam0->f_301 = 0;
			if (iParam0->f_5[4]->f_12.f_23 > 3)
			{
				func_130(iParam0, 7);
			}
			else
			{
				func_130(iParam0, 5);
			}
			break;
	}
}

void func_138(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 1:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 3);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(iParam0->f_5[4], 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 2:
			if (func_134(iParam0->f_5[4]))
			{
				func_221(iParam0, 1);
			}
			break;
		case 3:
			func_133(iParam0->f_5[4], 12, 0, 0);
			func_218(iParam0);
			break;
		case 4:
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			func_130(iParam0, 1);
			break;
	}
}

void func_139(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			func_222(Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_147(uParam1->f_1, uParam1->f_3, uParam1->f_6, iVar0, &iVar1, 1, 0))
				{
					if (!func_169(iVar1))
					{
						func_223(Global_1899750, iVar1, iVar0, 0);
					}
					set_ped_config_flag(iVar1, 113, true);
				}
				iVar0++;
			}
			func_224(4);
			func_143(0);
			func_225(1);
			func_218(iParam0);
			break;
		case 1:
			if (func_50() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (uParam1->f_94[iVar0]->f_12 != -1)
					{
						func_226(uParam1->f_1, uParam1->f_94[iVar0]->f_11, iVar0, Local_1.f_5[iVar0]->f_10, Local_1.f_5[iVar0]->f_1, uParam1->f_94[iVar0]->f_18, uParam1->f_94[iVar0]->f_19);
					}
					else
					{
						func_226(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					iVar0++;
				}
				func_225(3);
				func_218(iParam0);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam1, iVar0))
				{
					if (!func_134(iParam0->f_5[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_134(iParam0->f_5[4]))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 3:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 5);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(iParam0->f_5[4], 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 4:
			if (func_134(iParam0->f_5[4]))
			{
				func_221(iParam0, 3);
			}
			break;
		case 5:
			func_133(Local_1.f_5[4], 12, 0, 0);
			func_218(iParam0);
			break;
		case 6:
			if (func_134(Local_1.f_5[4]))
			{
				func_225(4);
				func_218(iParam0);
			}
			break;
		case 7:
			if (func_50() == 5)
			{
				func_3(uParam1, 1, 0);
				func_21(uParam1, 10);
				func_71(iParam0);
			}
			break;
	}
}

int func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1899528->f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	*uParam2 = &Global_1899528->f_61.f_7[iParam1];
	*uParam3 = &Global_1899528->f_61.f_14[iParam1];
	*uParam4 = &Global_1899528->f_61.f_21[iParam1];
	*uParam5 = &Global_1899528->f_61.f_28[iParam1];
	return &(Global_1899528->f_61.f_134[iParam1]);
}

void func_141()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528->f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_142()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528->f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_143(int iParam0)
{
	Global_1899528->f_61.f_1 = iParam0;
}

void func_144(int iParam0)
{
	Global_1899528->f_61.f_2 = iParam0;
}

int func_145()
{
	return Global_1899528->f_61.f_1;
}

bool func_146(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_11))
	{
		return false;
	}
	if (is_entity_dead(uParam0->f_11))
	{
		return false;
	}
	return true;
}

bool func_147(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	fVar8 = (0.25f * 2f);
	if (!func_209(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = create_itemset(true);
	if (!is_itemset_valid(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_115(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = _0x886171a12f400b89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar7, iVar4));
		if (func_227(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !is_ped_a_player(iVar3)))
			{
				func_59(iVar5);
				_0x20a4bf0e09bee146(iVar4);
				destroy_itemset(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	func_59(iVar5);
	_0x20a4bf0e09bee146(iVar4);
	destroy_itemset(iVar4);
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (&uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_94[&uParam0->f_84[iParam1]]->f_1 != 0;
}

bool func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return &uParam0->f_2353[iParam1] >= 4;
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	if (iParam1 == 1 || iParam1 == 4)
	{
		uParam0->f_2 = 0f;
	}
	*uParam0 = iParam1;
}

int func_151(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (is_string_null_or_empty(&(uParam0->f_240[iParam1]->f_5)))
	{
		return;
	}
	if (uParam0->f_240[iParam1]->f_3 == -1)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_240[iParam1]->f_4))
	{
		vVar0 = { get_entity_coords(uParam0->f_240[iParam1]->f_4, true, false) };
		vVar3 = { get_entity_rotation(uParam0->f_240[iParam1]->f_4, 2) };
		if (_does_anim_scene_exist(uParam0->f_240[iParam1]->f_3))
		{
			remove_anim_scene_entity(uParam0->f_240[iParam1]->f_3, &(uParam0->f_240[iParam1]->f_5), uParam0->f_240[iParam1]->f_4);
		}
		if (uParam0->f_240[iParam1]->f_15)
		{
			_0xc1193521e3b9fadd(uParam0->f_240[iParam1]->f_4, 0);
			uParam0->f_240[iParam1]->f_15 = 0;
		}
		if (bParam2)
		{
			func_153(uParam0, iParam1);
		}
		else if (!is_entity_attached(uParam0->f_240[iParam1]->f_4))
		{
			freeze_entity_position(uParam0->f_240[iParam1]->f_4, true);
			set_entity_coords(uParam0->f_240[iParam1]->f_4, vVar0, true, false, false, true);
			set_entity_rotation(uParam0->f_240[iParam1]->f_4, vVar3, 2, true);
			set_entity_collision(uParam0->f_240[iParam1]->f_4, false, false);
		}
	}
	uParam0->f_240[iParam1]->f_3 = -1;
	StringCopy(&(uParam0->f_240[iParam1]->f_5), "", 64);
}

void func_153(var uParam0, int iParam1)
{
	set_entity_collision(uParam0->f_240[iParam1]->f_4, true, false);
	if (is_entity_attached(uParam0->f_240[iParam1]->f_4))
	{
		func_228(uParam0->f_240[iParam1]->f_4, 1, 1);
	}
	freeze_entity_position(uParam0->f_240[iParam1]->f_4, false);
	set_entity_dynamic(uParam0->f_240[iParam1]->f_4, true);
	activate_physics(uParam0->f_240[iParam1]->f_4);
	set_entity_has_gravity(uParam0->f_240[iParam1]->f_4, true);
}

void func_154(int* iParam0, bool bParam1, bool bParam2)
{
	if (!does_entity_exist(*iParam0))
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
	if (bParam1)
	{
		if (is_entity_attached(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		_mark_object_for_deletion(*iParam0);
	}
	else
	{
		set_object_as_no_longer_needed(iParam0);
	}
}

void func_155(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_23[iParam1]->f_1 = iParam2;
	uParam0->f_23[iParam1]->f_2 = { func_229(sParam3) };
}

void func_156(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_77() - fParam1);
	func_230(uParam0, 1);
	func_231(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_157(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_158(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_232(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_160(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_161()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

var func_162(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_163(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_164(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_165(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_166(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_233(iParam1))
		{
			func_234(iParam0, 41788943);
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
			func_235(iParam0, 0, 1);
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
			func_236(iParam0, 0);
			bVar0 = true;
		}
		func_237(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return 12;
	}
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

bool func_169(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -1766535683:
		case -1680931998:
		case -1486681919:
		case -669394275:
		case 964905443:
		case 1709294431:
		case 1818250007:
			return true;
		default:
			break;
	}
	return false;
}

int func_170(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == -726434422)
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 316456870:
			case 436555239:
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				if (iParam2 == 316456870)
				{
					func_238(uParam3, 63);
					*iParam4++;
					func_238(uParam3, 64);
					*iParam4++;
				}
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1043092861:
			case -855293722:
			case -216756988:
			case 368759504:
			case 1321911407:
			case 1633413521:
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				if (iParam2 == -855293722)
				{
					func_238(uParam3, 63);
					*iParam4++;
					func_238(uParam3, 64);
					*iParam4++;
				}
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case 68127406:
			case 629329300:
			case 1371088384:
			case 2106064285:
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 41);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				break;
			case 912158539:
			case 1263868216:
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 61);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == -951746023)
	{
		switch (iParam2)
		{
			case -2029723322:
			case -1449777556:
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case 1700437490:
			case 1949514659:
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case -1582008655:
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case 1194574257:
			case 2093821155:
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 14);
				*iParam4++;
				func_238(uParam3, 17);
				*iParam4++;
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == -951746023)
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case -435547108:
			case -194891548:
			case -128698192:
			case 112776593:
			case 226255616:
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 29);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case 68127406:
			case 629329300:
			case 912158539:
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 28);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 41);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 15);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case 680401050:
			case 979024947:
			case 1174655877:
			case 1469806260:
			case 2098938291:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 29);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case 1839440580:
			case 1934601404:
				func_238(uParam3, 14);
				*iParam4++;
				func_238(uParam3, 17);
				*iParam4++;
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(uParam0, iParam1);
}

int func_172(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 417416138:
				func_238(uParam2, 43);
				*iParam3++;
				func_238(uParam2, 44);
				*iParam3++;
				func_238(uParam2, 54);
				*iParam3++;
				func_238(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_238(uParam2, 43);
				*iParam3++;
				func_238(uParam2, 44);
				*iParam3++;
				func_238(uParam2, 54);
				*iParam3++;
				func_238(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -951746023:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				func_238(uParam2, 82);
				*iParam3++;
				func_238(uParam2, 84);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				break;
			case -2087759666:
			case -1789856687:
			case 1124384604:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				func_238(uParam2, 82);
				*iParam3++;
				func_238(uParam2, 84);
				*iParam3++;
				break;
			case -1144663425:
				func_238(uParam2, 84);
				*iParam3++;
				break;
			case 1901354405:
				func_238(uParam2, 82);
				*iParam3++;
				break;
			case 1022365451:
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case 1471623370:
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case 1767420034:
				func_238(uParam2, 86);
				*iParam3++;
				break;
			case 1536283262:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case -1938511850:
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				break;
			case -1345652903:
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				break;
			case -1796561521:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				break;
			case -1684080969:
				func_238(uParam2, 80);
				*iParam3++;
				break;
			case -956061568:
			case 918972034:
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 62);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 79);
				*iParam3++;
				break;
			case -989220241:
			case -607723543:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case 549598920:
			case 1854820959:
			case 2133848994:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 34);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				break;
			case -439429058:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case 480011144:
			case 966958492:
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 74);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case -1766535683:
			case -669394275:
				func_238(uParam2, 87);
				*iParam3++;
				func_238(uParam2, 89);
				*iParam3++;
				func_238(uParam2, 90);
				*iParam3++;
				func_238(uParam2, 91);
				*iParam3++;
				break;
			case 964905443:
				func_238(uParam2, 62);
				*iParam3++;
				func_238(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_173(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "PedSeatedForMinigame", true);
}

void func_174(var uParam0)
{
	func_239(uParam0, uParam0->f_3 + 1);
}

bool func_175(int iParam0, int iParam1)
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

float func_176(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_177(var uParam0, vector3 vParam1, var uParam4)
{
	fVar2 = -1f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_bit_set(uParam0->f_83, iVar0) && !is_bit_set(uParam0->f_82, iVar0))
		{
			func_209(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_240(vParam1, vVar3);
			if (fVar1 < fVar2 || fVar2 == -1f)
			{
				fVar2 = fVar1;
				*uParam4 = iVar0;
			}
		}
		iVar0++;
	}
	return *uParam4 != -1;
}

void func_178(var uParam0)
{
	uParam0->f_3 = 100;
}

bool func_179()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	func_241(iParam2, &uVar1, &uVar6, 4, 10);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_242(uParam0, iParam1, iVar0, &(uVar1[iVar0]), &(uVar6[iVar0]), 0);
		iVar0++;
	}
}

char* func_181(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 4:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEALER";
		case 10:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEAL";
		case 11:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_CARDS";
		case 12:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_ORIGINAL_BETS";
		case 5:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_01";
		case 6:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_02";
		case 7:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_03";
		case 8:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_04";
		case 9:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SELF";
		case 13:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_CLEANUP";
		case 14:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_01";
		case 15:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_02";
		case 16:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_03";
		case 17:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_04";
		default:
			break;
	}
	return "";
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 1:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER_02";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
}

bool func_183(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_150(uParam0->f_2353[iParam1], 1);
	if (uParam0->f_2353[iParam1]->f_1 == -1 || !_does_anim_scene_exist(uParam0->f_2353[iParam1]->f_1))
	{
		uParam0->f_2353[iParam1]->f_1 = _create_anim_scene(sParam2, iParam4, sParam3, false, true);
		if (!_does_anim_scene_exist(uParam0->f_2353[iParam1]->f_1))
		{
			return false;
		}
		if (is_string_null_or_empty(sParam3))
		{
		}
		load_anim_scene(uParam0->f_2353[iParam1]->f_1);
	}
	StringCopy(&(uParam0->f_2353[iParam1]->f_12), sParam3, 64);
	if (_does_anim_scene_exist(uParam0->f_2353[iParam1]->f_1))
	{
		if (is_string_null_or_empty(sParam3))
		{
		}
		StringCopy(&(uParam0->f_2353[iParam1]->f_4), sParam2, 64);
		func_150(uParam0->f_2353[iParam1], 2);
		return true;
	}
	return false;
}

bool func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return &uParam0->f_2353[iParam1] == 4;
}

int func_185(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (is_entity_dead(uParam2->f_11))
	{
		return 0;
	}
	if (!func_243(uParam0, iParam1, uParam2->f_11) && _0x3ab6c7b0bb0df4b1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	set_bit(&(uParam0->f_2353[uParam2->f_20]->f_3), uParam2->f_13);
	if (_get_anim_scene_ped(uParam0->f_2353[iParam1]->f_1, sParam3, false) != uParam2->f_11)
	{
		set_anim_scene_entity(uParam0->f_2353[iParam1]->f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_186(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (!_is_anim_scene_started(uParam0->f_2353[iParam1]->f_1, false))
	{
		set_anim_scene_origin(uParam0->f_2353[iParam1]->f_1, vParam2, vParam5, 2);
		start_anim_scene(uParam0->f_2353[iParam1]->f_1);
		uParam0->f_2353[iParam1]->f_20 = { uParam0->f_2353[iParam1]->f_12 };
		StringCopy(&(uParam0->f_2353[iParam1]->f_12), "", 64);
		uParam0->f_2353[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_240[iVar0]->f_4, 1);
				uParam0->f_240[iVar0]->f_14 = 0;
				uParam0->f_240[iVar0]->f_15 = 1;
			}
			iVar0++;
		}
		func_150(uParam0->f_2353[iParam1], 5);
		return true;
	}
	if (!is_string_null_or_empty(&(uParam0->f_2353[iParam1]->f_12)))
	{
		if (!_0xdf7b5144e25cd3fe(uParam0->f_2353[iParam1]->f_1, &(uParam0->f_2353[iParam1]->f_12)))
		{
			return false;
		}
		if (!_0x23e33cb9f4a3f547(uParam0->f_2353[iParam1]->f_1, &(uParam0->f_2353[iParam1]->f_12)))
		{
			return false;
		}
		if (!is_string_null_or_empty(&(uParam0->f_2353[iParam1]->f_20)))
		{
			_0xae6ada8fe7e84acc(uParam0->f_2353[iParam1]->f_1, &(uParam0->f_2353[iParam1]->f_20));
		}
		_set_anim_scene_playback_list_bool(uParam0->f_2353[iParam1]->f_1, &(uParam0->f_2353[iParam1]->f_12), true);
		uParam0->f_2353[iParam1]->f_20 = { uParam0->f_2353[iParam1]->f_12 };
		StringCopy(&(uParam0->f_2353[iParam1]->f_12), "", 64);
		uParam0->f_2353[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_240[iVar0]->f_4, 1);
				uParam0->f_240[iVar0]->f_14 = 0;
			}
			iVar0++;
		}
		func_150(uParam0->f_2353[iParam1], 5);
		return true;
	}
	return false;
}

bool func_187(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	if (!func_244(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (get_ground_z_for_3d_coord(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_211(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*fParam7 = (fParam4 + fVar3);
	if (*fParam7 > 360f)
	{
		*fParam7 = (*fParam7 - 360f);
	}
	if (*fParam7 < -360f)
	{
		*fParam7 = (*fParam7 + 360f);
	}
	return true;
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				_0x669655ffb29ef1a9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_189(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			_set_object_texture_variation(iParam0, 3);
			break;
		case 1:
			_set_object_texture_variation(iParam0, 18);
			break;
		case 2:
			_set_object_texture_variation(iParam0, 21);
			break;
		case 3:
			_set_object_texture_variation(iParam0, 24);
			break;
		case 4:
			_set_object_texture_variation(iParam0, 27);
			break;
		case 5:
			_set_object_texture_variation(iParam0, 15);
			break;
		default:
			break;
	}
}

bool func_190(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar0] && uParam0->f_94[iVar0]->f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_191(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 4)
	{
		if (func_245(uParam0, &Local_1))
		{
			uParam0->f_2885 = 1;
		}
		func_1(uParam0->f_2);
		if (does_entity_exist(uParam0->f_240[61]->f_4))
		{
			func_228(uParam0->f_240[61]->f_4, 1, 1);
			func_152(uParam0, 61, 1);
			func_13(uParam0, 1);
		}
	}
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0]->f_3 == uParam0->f_2353[iParam1]->f_1)
		{
			func_152(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			sVar9 = func_182(uParam2->f_5[iVar0]->f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Bet", 2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			func_247(uParam0, iVar0, 0, &vVar2, &vVar5, 0, 1);
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				func_249((uParam0->f_240[(55 + iVar0)])->f_4, 5, 4);
				sVar9 = func_182(uParam2->f_5[iVar0]->f_1);
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			if (iVar0 == 4)
			{
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar8, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar8))
				{
					return;
				}
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_PLACE_BID");
			func_246(uParam2->f_5[iVar0]);
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle") || has_anim_event_fired(uParam1->f_11, -1921404755))
			{
				uParam2->f_5[iVar0]->f_9 = 1;
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)
{
	iVar2 = uParam1->f_12;
	iVar3 = 10;
	iVar4 = 4;
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2]);
		return;
	}
	switch (uParam2->f_5[iVar2]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2]);
			break;
		case 1:
			func_253(&(uParam2->f_193));
			func_254(&(uParam2->f_193));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_255(&(uParam2->f_5[iVar0]->f_12));
				uParam2->f_5[iVar0]->f_36 = 0;
				if (func_148(uParam0, iVar0))
				{
					if (func_256(&(uParam2->f_193), &uVar12))
					{
						func_257(&(uParam2->f_5[iVar0]->f_12), &uVar12);
					}
					if (func_256(&(uParam2->f_193), &uVar12))
					{
						func_257(&(uParam2->f_5[iVar0]->f_12), &uVar12);
					}
					uParam2->f_5[iVar0]->f_36 = func_258(&(uParam2->f_5[iVar0]->f_12), -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_148(uParam0, iVar0))
				{
					func_214(&iVar14, *uParam2->f_5[iVar0]->f_12[0], iLocal_0, 0);
					iVar1 = (11 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
					func_214(&iVar14, *uParam2->f_5[iVar0]->f_12[1], iLocal_0, 0);
					iVar1 = (15 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
				}
				iVar0++;
			}
			func_214(&iVar14, *uParam2->f_5[4]->f_12[0], iLocal_0, 0);
			iVar1 = 0;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			func_214(&iVar14, *uParam2->f_5[4]->f_12[1], iLocal_0, 0);
			iVar1 = 1;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			func_246(uParam2->f_5[iVar2]);
			break;
		case 2:
			if (func_25(&(uParam2->f_5[iVar2]->f_2)) < uParam2->f_5[iVar2]->f_6)
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_DEALER_CLOSED_BETS");
			sVar11 = func_181(iVar4, 0);
			if (!func_183(uParam0, iVar4, sVar11, "PBL_Shuffle", 2))
			{
				return;
			}
			func_260(uParam0);
			func_126(uParam0, &uVar5, &uVar8, 1);
			uParam2->f_303 = func_261(uParam0, 4);
			func_246(uParam2->f_5[iVar2]);
			break;
		case 3:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_184(uParam0, iVar4))
			{
				return;
			}
			func_250(uParam0, iVar4, 61, func_262(61), 0);
			func_185(uParam0, iVar4, uParam1, "DEALER");
			if (func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 4:
			if (func_263(uParam0, iVar4))
			{
				if (func_260(uParam0))
				{
					func_246(uParam2->f_5[iVar2]);
				}
			}
			break;
		case 5:
			if (!func_264(uParam0, uParam2))
			{
				return;
			}
			if (_0x0b7cb1300cbfe19c(uParam1->f_11, 1))
			{
				stop_anim_playback(uParam1->f_11, 0, false);
			}
			if (!is_entity_attached_to_any_ped(uParam0->f_240[61]->f_4))
			{
				attach_entity_to_entity(uParam0->f_240[61]->f_4, uParam1->f_11, get_ped_bone_index(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			func_246(uParam2->f_5[iVar2]);
			break;
		case 6:
			if (func_263(uParam0, iVar3))
			{
				func_133(uParam2->f_5[iVar2], 1, 0, 0);
			}
			break;
	}
}

void func_195(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (5 + uParam2->f_301);
	if (iVar0 != 4)
	{
		func_252(uParam2->f_5[iVar0]);
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			iVar5 = ((11 + (4 * uParam2->f_5[uParam2->f_301]->f_12.f_23)) + uParam2->f_301);
			if (func_256(&(uParam2->f_193), &Var2))
			{
				func_257(&(uParam2->f_5[uParam2->f_301]->f_12), &Var2);
				uParam2->f_5[uParam2->f_301]->f_36 = func_258(&(uParam2->f_5[uParam2->f_301]->f_12), -1);
			}
			func_214(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(uParam2->f_5[iVar0]);
			break;
		case 2:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			iVar5 = ((11 + (4 * (uParam2->f_5[uParam2->f_301]->f_12.f_23 - 1))) + uParam2->f_301);
			if (func_248(uParam0, iVar5))
			{
				if (func_265(uParam0, uParam2))
				{
					func_246(uParam2->f_5[iVar0]);
				}
			}
			break;
		case 4:
			if (!func_266(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 5:
			if (func_263(uParam0, iVar1))
			{
				sVar6 = func_267(uParam2->f_5[iVar0]->f_36);
				if (!is_string_null_or_empty(sVar6))
				{
					func_132(uParam0, uParam1->f_11, sVar6);
				}
				if (func_268(uParam2->f_5[uParam2->f_301]))
				{
					func_133(uParam2->f_5[iVar0], 1, 0, 0);
					return;
				}
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 6:
			func_133(uParam2->f_5[iVar0], 1, 0, 0);
			break;
	}
}

void func_196(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = 9;
	if (iVar0 != 4 || uParam2->f_5[iVar0]->f_12.f_23 > 11)
	{
		func_252(uParam2->f_5[iVar0]);
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			if (uParam2->f_5[4]->f_12.f_23 == 2)
			{
				if (func_269(uParam0))
				{
					func_246(uParam2->f_5[iVar0]);
				}
			}
			else
			{
				func_270(uParam2->f_5[iVar0], 4);
			}
			break;
		case 2:
			if (!func_271(uParam0))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 4:
			iVar5 = (0 + uParam2->f_5[4]->f_12.f_23);
			if (func_256(&(uParam2->f_193), &Var2))
			{
				func_257(&(uParam2->f_5[4]->f_12), &Var2);
				uParam2->f_5[4]->f_36 = func_258(&(uParam2->f_5[4]->f_12), -1);
			}
			func_214(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(uParam2->f_5[iVar0]);
			break;
		case 5:
			iVar5 = (0 + (uParam2->f_5[4]->f_12.f_23 - 1));
			if (func_248(uParam0, iVar5))
			{
				if (func_272(uParam0, uParam2))
				{
					func_246(uParam2->f_5[iVar0]);
				}
			}
			break;
		case 6:
			if (!func_273(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 7:
			if (func_263(uParam0, iVar1))
			{
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_197(var uParam0, var uParam1, var uParam2)
{
	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2]);
		return;
	}
	switch (uParam2->f_5[iVar2]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2]);
			break;
		case 1:
			if (func_274(uParam0, uParam2, 0))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2]);
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2]);
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { get_entity_coords(uParam0->f_240[iVar0]->f_4, true, false) };
				vVar7 = { get_entity_rotation(uParam0->f_240[iVar0]->f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(uParam2->f_5[uParam2->f_302]);
				uParam2->f_5[uParam2->f_302]->f_9 = 0;
				func_133(uParam2->f_5[iVar2], 1, 0, 0);
			}
			break;
	}
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2]);
		return;
	}
	if (uParam2->f_5[uParam2->f_302]->f_9 == 0)
	{
		func_252(uParam2->f_5[iVar2]);
		return;
	}
	if (uParam2->f_5[uParam2->f_302]->f_12.f_23 == 0)
	{
		func_252(uParam2->f_5[iVar2]);
		return;
	}
	switch (uParam2->f_5[iVar2]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2]);
			break;
		case 1:
			if (func_274(uParam0, uParam2, 1))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2]);
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2]);
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { get_entity_coords(uParam0->f_240[iVar0]->f_4, true, false) };
				vVar7 = { get_entity_rotation(uParam0->f_240[iVar0]->f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(uParam2->f_5[iVar2]);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(uParam2->f_5[uParam2->f_302]);
				uParam2->f_5[uParam2->f_302]->f_9 = 0;
				func_133(uParam2->f_5[iVar2], 1, 0, 0);
			}
			break;
	}
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + uParam1->f_12);
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (iVar0 == 4)
			{
				sVar6 = func_181(iVar1, 0);
			}
			else
			{
				sVar6 = func_182(uParam2->f_5[iVar0]->f_1);
			}
			if (func_183(uParam0, iVar1, sVar6, "PBL_Idle", 2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			if (iVar0 == 4)
			{
				if (_0x0b7cb1300cbfe19c(uParam1->f_11, 1))
				{
					stop_anim_playback(uParam1->f_11, 0, false);
				}
				if (!is_entity_attached_to_any_ped(uParam0->f_240[61]->f_4))
				{
					attach_entity_to_entity(uParam0->f_240[61]->f_4, uParam1->f_11, get_ped_bone_index(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
				{
					return;
				}
			}
			func_252(uParam2->f_5[iVar0]);
			break;
	}
}

void func_200(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = 11;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0], 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (uParam2->f_5[iVar2]->f_12.f_23 > 0)
		{
			set_bit(&iVar4, iVar2);
		}
		iVar2++;
	}
	if (iVar4 == 0)
	{
		func_133(uParam2->f_5[iVar0], 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			if (func_279(uParam0, uParam2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_280(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 1f || has_anim_event_fired(uParam1->f_11, -1921404755))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (uParam2->f_5[iVar2]->f_12.f_23 > 0)
					{
						func_259(uParam0, (84 + iVar2), func_127((84 + iVar2), 0), 0, 1);
						iVar3 = 0;
						while (iVar3 < 11)
						{
							iVar5 = func_277(iVar2, iVar3);
							func_281(uParam0, iVar5, -0.125f);
							iVar3++;
						}
					}
					iVar2++;
				}
				if (uParam2->f_5[4]->f_12.f_23 > 0)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = func_282(iVar3);
						func_281(uParam0, iVar5, -0.125f);
						iVar3++;
					}
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					func_255(&(uParam2->f_5[iVar2]->f_12));
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_201(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = 12;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0], 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam2->f_5[iVar2]->f_9)
		{
			set_bit(&iVar3, iVar2);
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		func_133(uParam2->f_5[iVar0], 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			if (func_283(uParam0, uParam2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_284(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					uParam2->f_5[iVar2]->f_9 = 0;
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			sVar6 = func_182(uParam2->f_5[iVar0]->f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Hit", 2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_HIT");
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			sVar6 = func_182(uParam2->f_5[iVar0]->f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Stand", 2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_STAND");
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			sVar9 = func_182(uParam2->f_5[iVar0]->f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Take", 2))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (func_25(&(uParam2->f_5[iVar0]->f_2)) < uParam2->f_5[iVar0]->f_6)
			{
				return;
			}
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				func_249((uParam0->f_240[(55 + iVar0)])->f_4, 5, 4);
				sVar9 = func_182(uParam2->f_5[iVar0]->f_1);
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar8, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar8))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				uParam2->f_5[iVar0]->f_9 = 0;
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = 13;
	iVar4 = 0;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0], 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0]->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0]);
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_111(uParam0, iVar2))
				{
					if (uParam2->f_5[iVar2]->f_12.f_23 > 0)
					{
						iVar4 = 1;
					}
				}
				iVar2++;
			}
			if (iVar4 == 0)
			{
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
				return;
			}
			if (func_285(uParam0, uParam2, 3))
			{
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 2:
			if (!func_286(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0]);
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 0.495f)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				func_246(uParam2->f_5[iVar0]);
			}
			break;
		case 4:
			if (func_263(uParam0, iVar1) || has_anim_event_fired(uParam1->f_11, -1921404755))
			{
				iVar3 = 0;
				while (iVar3 < 11)
				{
					iVar5 = func_282(iVar3);
					func_65(uParam0, iVar5);
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = func_277(iVar2, iVar3);
						func_65(uParam0, iVar5);
						iVar3++;
					}
					iVar2++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					func_255(&(uParam2->f_5[iVar2]->f_12));
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0], 1, 0, 0);
			}
			break;
	}
}

void func_206(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_remove(iParam0, "PedSeatedForMinigame");
}

char* func_207()
{
	return "unnamed";
}

void func_208(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_72(&(uParam0->f_12));
}

bool func_209(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	if (!func_244(iParam0, iParam5, &vVar0))
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

bool func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_211(int iParam0, int iParam1, float fParam2)
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
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 120f;
					return true;
				case 2:
					*fParam2 = 60f;
					return true;
				case 3:
					*fParam2 = 0f;
					return true;
				case 4:
					*fParam2 = -60f;
					return true;
				case 5:
					*fParam2 = -120f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return true;
				case 4:
					*fParam2 = 180f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 0f;
					return true;
				case 2:
					*fParam2 = 90f;
					return true;
				case 3:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return true;
				case 1:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

void func_212(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vVar0.x = ((vParam4.x * cos(fParam3)) - (vParam4.y * sin(fParam3)));
	vVar0.f_1 = ((vParam4.x * sin(fParam3)) + (vParam4.y * cos(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

bool func_213(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_214(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1909758928;
							return true;
						case 3:
							*iParam0 = 1162468676;
							return true;
						case 4:
							*iParam0 = -1354372995;
							return true;
						case 5:
							*iParam0 = 127662037;
							return true;
						case 6:
							*iParam0 = -858857622;
							return true;
						case 7:
							*iParam0 = -2062492572;
							return true;
						case 8:
							*iParam0 = -542504583;
							return true;
						case 9:
							*iParam0 = -1827263623;
							return true;
						case 10:
							*iParam0 = -674570242;
							return true;
						case 11:
							*iParam0 = 828828635;
							return true;
						case 12:
							*iParam0 = 1774527635;
							return true;
						case 13:
							*iParam0 = -880550872;
							return true;
						case 14:
							*iParam0 = 1118659955;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1377685326;
							return true;
						case 3:
							*iParam0 = 2122521996;
							return true;
						case 4:
							*iParam0 = -905735271;
							return true;
						case 5:
							*iParam0 = -2041734073;
							return true;
						case 6:
							*iParam0 = 1336229167;
							return true;
						case 7:
							*iParam0 = -142928476;
							return true;
						case 8:
							*iParam0 = 1949899020;
							return true;
						case 9:
							*iParam0 = -1016355603;
							return true;
						case 10:
							*iParam0 = -2060997082;
							return true;
						case 11:
							*iParam0 = 679836386;
							return true;
						case 12:
							*iParam0 = 205850401;
							return true;
						case 13:
							*iParam0 = -9762481;
							return true;
						case 14:
							*iParam0 = -1889013498;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 490528894;
							return true;
						case 3:
							*iParam0 = 1857377268;
							return true;
						case 4:
							*iParam0 = 306779471;
							return true;
						case 5:
							*iParam0 = -265576506;
							return true;
						case 6:
							*iParam0 = 1764499352;
							return true;
						case 7:
							*iParam0 = 343197067;
							return true;
						case 8:
							*iParam0 = 611917374;
							return true;
						case 9:
							*iParam0 = 1319922984;
							return true;
						case 10:
							*iParam0 = 1496774356;
							return true;
						case 11:
							*iParam0 = 241847248;
							return true;
						case 12:
							*iParam0 = 1715260480;
							return true;
						case 13:
							*iParam0 = -972291366;
							return true;
						case 14:
							*iParam0 = -983269631;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 890959011;
							return true;
						case 3:
							*iParam0 = -1889927490;
							return true;
						case 4:
							*iParam0 = 231465939;
							return true;
						case 5:
							*iParam0 = 551112092;
							return true;
						case 6:
							*iParam0 = -1081501637;
							return true;
						case 7:
							*iParam0 = -1816049069;
							return true;
						case 8:
							*iParam0 = 888381965;
							return true;
						case 9:
							*iParam0 = -804165125;
							return true;
						case 10:
							*iParam0 = -741495176;
							return true;
						case 11:
							*iParam0 = -1801783288;
							return true;
						case 12:
							*iParam0 = -2006996000;
							return true;
						case 13:
							*iParam0 = -1114933352;
							return true;
						case 14:
							*iParam0 = 1487250557;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2003217523;
							return true;
						case 3:
							*iParam0 = -399697037;
							return true;
						case 4:
							*iParam0 = -1518699789;
							return true;
						case 5:
							*iParam0 = -997552329;
							return true;
						case 6:
							*iParam0 = 1652001878;
							return true;
						case 7:
							*iParam0 = 186320325;
							return true;
						case 8:
							*iParam0 = -1326803989;
							return true;
						case 9:
							*iParam0 = 737551253;
							return true;
						case 10:
							*iParam0 = 668030318;
							return true;
						case 11:
							*iParam0 = 859105085;
							return true;
						case 12:
							*iParam0 = -594986572;
							return true;
						case 13:
							*iParam0 = -1754685568;
							return true;
						case 14:
							*iParam0 = 570384605;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 496728947;
							return true;
						case 3:
							*iParam0 = 1921848184;
							return true;
						case 4:
							*iParam0 = -546878645;
							return true;
						case 5:
							*iParam0 = -821118254;
							return true;
						case 6:
							*iParam0 = -361944149;
							return true;
						case 7:
							*iParam0 = -1874474629;
							return true;
						case 8:
							*iParam0 = -318877148;
							return true;
						case 9:
							*iParam0 = 932665613;
							return true;
						case 10:
							*iParam0 = -2038176093;
							return true;
						case 11:
							*iParam0 = -667785661;
							return true;
						case 12:
							*iParam0 = 208099752;
							return true;
						case 13:
							*iParam0 = -581256491;
							return true;
						case 14:
							*iParam0 = 894832080;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1051290148;
							return true;
						case 3:
							*iParam0 = -1005545109;
							return true;
						case 4:
							*iParam0 = 1821478065;
							return true;
						case 5:
							*iParam0 = 540188127;
							return true;
						case 6:
							*iParam0 = -1480085904;
							return true;
						case 7:
							*iParam0 = 825496160;
							return true;
						case 8:
							*iParam0 = -628192245;
							return true;
						case 9:
							*iParam0 = -215756895;
							return true;
						case 10:
							*iParam0 = 793896324;
							return true;
						case 11:
							*iParam0 = 1121466671;
							return true;
						case 12:
							*iParam0 = 1834923532;
							return true;
						case 13:
							*iParam0 = -1282408094;
							return true;
						case 14:
							*iParam0 = 383127860;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 684527193;
							return true;
						case 3:
							*iParam0 = -263420923;
							return true;
						case 4:
							*iParam0 = -249784185;
							return true;
						case 5:
							*iParam0 = 1143187053;
							return true;
						case 6:
							*iParam0 = 827657438;
							return true;
						case 7:
							*iParam0 = -1102425647;
							return true;
						case 8:
							*iParam0 = 853839925;
							return true;
						case 9:
							*iParam0 = -1261345136;
							return true;
						case 10:
							*iParam0 = -1516404361;
							return true;
						case 11:
							*iParam0 = 1432174202;
							return true;
						case 12:
							*iParam0 = 1131319157;
							return true;
						case 13:
							*iParam0 = 186094910;
							return true;
						case 14:
							*iParam0 = -1567460112;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 328068607;
							return true;
						case 3:
							*iParam0 = -1306858058;
							return true;
						case 4:
							*iParam0 = -1611982353;
							return true;
						case 5:
							*iParam0 = 739756370;
							return true;
						case 6:
							*iParam0 = 1801166233;
							return true;
						case 7:
							*iParam0 = -644313522;
							return true;
						case 8:
							*iParam0 = -832951172;
							return true;
						case 9:
							*iParam0 = 1988315838;
							return true;
						case 10:
							*iParam0 = -1001399461;
							return true;
						case 11:
							*iParam0 = 583972710;
							return true;
						case 12:
							*iParam0 = 854868500;
							return true;
						case 13:
							*iParam0 = 629055820;
							return true;
						case 14:
							*iParam0 = -833244723;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1280053851;
							return true;
						case 3:
							*iParam0 = -633466200;
							return true;
						case 4:
							*iParam0 = -1836575021;
							return true;
						case 5:
							*iParam0 = -1110186928;
							return true;
						case 6:
							*iParam0 = 1672340679;
							return true;
						case 7:
							*iParam0 = 2003108760;
							return true;
						case 8:
							*iParam0 = 1877192539;
							return true;
						case 9:
							*iParam0 = -1703049832;
							return true;
						case 10:
							*iParam0 = -1497400706;
							return true;
						case 11:
							*iParam0 = 1971631392;
							return true;
						case 12:
							*iParam0 = -2127206140;
							return true;
						case 13:
							*iParam0 = -2048927458;
							return true;
						case 14:
							*iParam0 = 1630107168;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -949698496;
							return true;
						case 3:
							*iParam0 = 355316014;
							return true;
						case 4:
							*iParam0 = 1604154240;
							return true;
						case 5:
							*iParam0 = -1789343904;
							return true;
						case 6:
							*iParam0 = -50867196;
							return true;
						case 7:
							*iParam0 = -1012504675;
							return true;
						case 8:
							*iParam0 = -159578860;
							return true;
						case 9:
							*iParam0 = 1097950533;
							return true;
						case 10:
							*iParam0 = -1819094497;
							return true;
						case 11:
							*iParam0 = 763417437;
							return true;
						case 12:
							*iParam0 = -1643922980;
							return true;
						case 13:
							*iParam0 = 1726242611;
							return true;
						case 14:
							*iParam0 = -982898598;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -597281244;
							return true;
						case 3:
							*iParam0 = 1859837183;
							return true;
						case 4:
							*iParam0 = -717777272;
							return true;
						case 5:
							*iParam0 = -384065410;
							return true;
						case 6:
							*iParam0 = -426226845;
							return true;
						case 7:
							*iParam0 = -1560133449;
							return true;
						case 8:
							*iParam0 = -1724719987;
							return true;
						case 9:
							*iParam0 = -1506573666;
							return true;
						case 10:
							*iParam0 = -833467841;
							return true;
						case 11:
							*iParam0 = 1913040302;
							return true;
						case 12:
							*iParam0 = -970236810;
							return true;
						case 13:
							*iParam0 = 990091302;
							return true;
						case 14:
							*iParam0 = 918658043;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -403301546;
							return true;
						case 3:
							*iParam0 = 1871423067;
							return true;
						case 4:
							*iParam0 = 1337869136;
							return true;
						case 5:
							*iParam0 = -1544981815;
							return true;
						case 6:
							*iParam0 = 1935838007;
							return true;
						case 7:
							*iParam0 = 1362450780;
							return true;
						case 8:
							*iParam0 = -311392807;
							return true;
						case 9:
							*iParam0 = 1979302072;
							return true;
						case 10:
							*iParam0 = 527759776;
							return true;
						case 11:
							*iParam0 = 972511286;
							return true;
						case 12:
							*iParam0 = 866723984;
							return true;
						case 13:
							*iParam0 = -1501906712;
							return true;
						case 14:
							*iParam0 = 1657044585;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 696549872;
							return true;
						case 3:
							*iParam0 = 1029329299;
							return true;
						case 4:
							*iParam0 = -204176389;
							return true;
						case 5:
							*iParam0 = -605490871;
							return true;
						case 6:
							*iParam0 = -752686013;
							return true;
						case 7:
							*iParam0 = -2098928623;
							return true;
						case 8:
							*iParam0 = 673396831;
							return true;
						case 9:
							*iParam0 = 61996838;
							return true;
						case 10:
							*iParam0 = 707385061;
							return true;
						case 11:
							*iParam0 = -1336887993;
							return true;
						case 12:
							*iParam0 = 1986014158;
							return true;
						case 13:
							*iParam0 = -1279519199;
							return true;
						case 14:
							*iParam0 = -404939929;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1766621235;
							return true;
						case 3:
							*iParam0 = 639465642;
							return true;
						case 4:
							*iParam0 = 538279577;
							return true;
						case 5:
							*iParam0 = 1589664504;
							return true;
						case 6:
							*iParam0 = 1277241365;
							return true;
						case 7:
							*iParam0 = 464078840;
							return true;
						case 8:
							*iParam0 = 1382365335;
							return true;
						case 9:
							*iParam0 = -1642414969;
							return true;
						case 10:
							*iParam0 = 51231304;
							return true;
						case 11:
							*iParam0 = 1283399627;
							return true;
						case 12:
							*iParam0 = 1832068833;
							return true;
						case 13:
							*iParam0 = -1516046037;
							return true;
						case 14:
							*iParam0 = 663524178;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -305746106;
							return true;
						case 3:
							*iParam0 = -208088591;
							return true;
						case 4:
							*iParam0 = 1937181298;
							return true;
						case 5:
							*iParam0 = 707745297;
							return true;
						case 6:
							*iParam0 = -318896190;
							return true;
						case 7:
							*iParam0 = -954744024;
							return true;
						case 8:
							*iParam0 = 930365499;
							return true;
						case 9:
							*iParam0 = -1247282198;
							return true;
						case 10:
							*iParam0 = 1370939361;
							return true;
						case 11:
							*iParam0 = -753399062;
							return true;
						case 12:
							*iParam0 = -977688234;
							return true;
						case 13:
							*iParam0 = -1596094065;
							return true;
						case 14:
							*iParam0 = -373053921;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1387954345;
							return true;
						case 3:
							*iParam0 = -1354962655;
							return true;
						case 4:
							*iParam0 = -804464549;
							return true;
						case 5:
							*iParam0 = 1348814278;
							return true;
						case 6:
							*iParam0 = 657062187;
							return true;
						case 7:
							*iParam0 = 1510162208;
							return true;
						case 8:
							*iParam0 = 2009701297;
							return true;
						case 9:
							*iParam0 = 1853223245;
							return true;
						case 10:
							*iParam0 = -1775176139;
							return true;
						case 11:
							*iParam0 = 617703278;
							return true;
						case 12:
							*iParam0 = -1298938137;
							return true;
						case 13:
							*iParam0 = -1941521224;
							return true;
						case 14:
							*iParam0 = -1676024061;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 391724922;
							return true;
						case 3:
							*iParam0 = 671459626;
							return true;
						case 4:
							*iParam0 = -1487277617;
							return true;
						case 5:
							*iParam0 = -907221559;
							return true;
						case 6:
							*iParam0 = -2131404875;
							return true;
						case 7:
							*iParam0 = 1136582530;
							return true;
						case 8:
							*iParam0 = -2120550211;
							return true;
						case 9:
							*iParam0 = -281297502;
							return true;
						case 10:
							*iParam0 = 892072825;
							return true;
						case 11:
							*iParam0 = 1611660243;
							return true;
						case 12:
							*iParam0 = -1248904689;
							return true;
						case 13:
							*iParam0 = -2000963135;
							return true;
						case 14:
							*iParam0 = -328923850;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2037189536;
							return true;
						case 3:
							*iParam0 = -2045530267;
							return true;
						case 4:
							*iParam0 = 2045295050;
							return true;
						case 5:
							*iParam0 = 1726116464;
							return true;
						case 6:
							*iParam0 = 136818655;
							return true;
						case 7:
							*iParam0 = 657382278;
							return true;
						case 8:
							*iParam0 = 1404937476;
							return true;
						case 9:
							*iParam0 = -1888826317;
							return true;
						case 10:
							*iParam0 = 681653557;
							return true;
						case 11:
							*iParam0 = -721735422;
							return true;
						case 12:
							*iParam0 = 965390753;
							return true;
						case 13:
							*iParam0 = 72733444;
							return true;
						case 14:
							*iParam0 = 2080330127;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -446539351;
							return true;
						case 3:
							*iParam0 = -1722641930;
							return true;
						case 4:
							*iParam0 = 243348692;
							return true;
						case 5:
							*iParam0 = -2096430697;
							return true;
						case 6:
							*iParam0 = 1941234074;
							return true;
						case 7:
							*iParam0 = 990323913;
							return true;
						case 8:
							*iParam0 = -1593509009;
							return true;
						case 9:
							*iParam0 = -1941079438;
							return true;
						case 10:
							*iParam0 = 948933843;
							return true;
						case 11:
							*iParam0 = -1393933166;
							return true;
						case 12:
							*iParam0 = 1865479666;
							return true;
						case 13:
							*iParam0 = 1475987833;
							return true;
						case 14:
							*iParam0 = 1464992706;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 940287542;
							return true;
						case 3:
							*iParam0 = 790418313;
							return true;
						case 4:
							*iParam0 = -2116754376;
							return true;
						case 5:
							*iParam0 = 1317169409;
							return true;
						case 6:
							*iParam0 = 1033660954;
							return true;
						case 7:
							*iParam0 = 124978929;
							return true;
						case 8:
							*iParam0 = -725520485;
							return true;
						case 9:
							*iParam0 = -1172744195;
							return true;
						case 10:
							*iParam0 = 1815096273;
							return true;
						case 11:
							*iParam0 = 1304006097;
							return true;
						case 12:
							*iParam0 = -1300766016;
							return true;
						case 13:
							*iParam0 = -250573840;
							return true;
						case 14:
							*iParam0 = -1824431250;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 80437487;
							return true;
						case 3:
							*iParam0 = -11479234;
							return true;
						case 4:
							*iParam0 = 1490589553;
							return true;
						case 5:
							*iParam0 = -1110583329;
							return true;
						case 6:
							*iParam0 = -1753679949;
							return true;
						case 7:
							*iParam0 = 1137688840;
							return true;
						case 8:
							*iParam0 = -1710863708;
							return true;
						case 9:
							*iParam0 = 2130883601;
							return true;
						case 10:
							*iParam0 = -1779427821;
							return true;
						case 11:
							*iParam0 = -48560774;
							return true;
						case 12:
							*iParam0 = -1378832890;
							return true;
						case 13:
							*iParam0 = -1337061193;
							return true;
						case 14:
							*iParam0 = -962473954;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -140928778;
							return true;
						case 3:
							*iParam0 = 1767974563;
							return true;
						case 4:
							*iParam0 = 701349000;
							return true;
						case 5:
							*iParam0 = -2012550923;
							return true;
						case 6:
							*iParam0 = -802659006;
							return true;
						case 7:
							*iParam0 = 1535788576;
							return true;
						case 8:
							*iParam0 = -539132616;
							return true;
						case 9:
							*iParam0 = -355413556;
							return true;
						case 10:
							*iParam0 = 125575728;
							return true;
						case 11:
							*iParam0 = 1392136522;
							return true;
						case 12:
							*iParam0 = -1089443358;
							return true;
						case 13:
							*iParam0 = 1496031634;
							return true;
						case 14:
							*iParam0 = -1494400830;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 877243702;
							return true;
						case 3:
							*iParam0 = -30406831;
							return true;
						case 4:
							*iParam0 = 1507721315;
							return true;
						case 5:
							*iParam0 = 220923946;
							return true;
						case 6:
							*iParam0 = 386780259;
							return true;
						case 7:
							*iParam0 = 679225015;
							return true;
						case 8:
							*iParam0 = -130832693;
							return true;
						case 9:
							*iParam0 = -1857759931;
							return true;
						case 10:
							*iParam0 = -1549381684;
							return true;
						case 11:
							*iParam0 = -1306599616;
							return true;
						case 12:
							*iParam0 = -1317905551;
							return true;
						case 13:
							*iParam0 = -1489968742;
							return true;
						case 14:
							*iParam0 = 274824986;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 345349862;
							return true;
						case 3:
							*iParam0 = 233738904;
							return true;
						case 4:
							*iParam0 = 1509393818;
							return true;
						case 5:
							*iParam0 = 60813080;
							return true;
						case 6:
							*iParam0 = -1588867364;
							return true;
						case 7:
							*iParam0 = -741971058;
							return true;
						case 8:
							*iParam0 = -1901598027;
							return true;
						case 9:
							*iParam0 = 216857924;
							return true;
						case 10:
							*iParam0 = -1696859616;
							return true;
						case 11:
							*iParam0 = 1250297936;
							return true;
						case 12:
							*iParam0 = -1324063231;
							return true;
						case 13:
							*iParam0 = 1618412160;
							return true;
						case 14:
							*iParam0 = -628673108;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1336484459;
							return true;
						case 3:
							*iParam0 = 776262968;
							return true;
						case 4:
							*iParam0 = 1952745955;
							return true;
						case 5:
							*iParam0 = -1067714914;
							return true;
						case 6:
							*iParam0 = 251115602;
							return true;
						case 7:
							*iParam0 = 1575451247;
							return true;
						case 8:
							*iParam0 = -746735956;
							return true;
						case 9:
							*iParam0 = 326673134;
							return true;
						case 10:
							*iParam0 = 1872027280;
							return true;
						case 11:
							*iParam0 = -1718732108;
							return true;
						case 12:
							*iParam0 = -1092024524;
							return true;
						case 13:
							*iParam0 = 2071887039;
							return true;
						case 14:
							*iParam0 = -1106339162;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1066627194;
							return true;
						case 3:
							*iParam0 = -799997502;
							return true;
						case 4:
							*iParam0 = 398382432;
							return true;
						case 5:
							*iParam0 = -766490354;
							return true;
						case 6:
							*iParam0 = 834493370;
							return true;
						case 7:
							*iParam0 = -627280631;
							return true;
						case 8:
							*iParam0 = -1689944957;
							return true;
						case 9:
							*iParam0 = -1081837586;
							return true;
						case 10:
							*iParam0 = 1994269490;
							return true;
						case 11:
							*iParam0 = 98506870;
							return true;
						case 12:
							*iParam0 = 828661392;
							return true;
						case 13:
							*iParam0 = -1902382615;
							return true;
						case 14:
							*iParam0 = -1749931149;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1612375921;
							return true;
						case 3:
							*iParam0 = -464036502;
							return true;
						case 4:
							*iParam0 = -1734626244;
							return true;
						case 5:
							*iParam0 = 1432065580;
							return true;
						case 6:
							*iParam0 = -269373164;
							return true;
						case 7:
							*iParam0 = -1462036161;
							return true;
						case 8:
							*iParam0 = 9214594;
							return true;
						case 9:
							*iParam0 = -449150372;
							return true;
						case 10:
							*iParam0 = -676777548;
							return true;
						case 11:
							*iParam0 = 2045572790;
							return true;
						case 12:
							*iParam0 = 247170975;
							return true;
						case 13:
							*iParam0 = 2011504438;
							return true;
						case 14:
							*iParam0 = 1380910900;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1327784484;
							return true;
						case 3:
							*iParam0 = -1496419081;
							return true;
						case 4:
							*iParam0 = 769946245;
							return true;
						case 5:
							*iParam0 = -744715350;
							return true;
						case 6:
							*iParam0 = -1578164439;
							return true;
						case 7:
							*iParam0 = 124531649;
							return true;
						case 8:
							*iParam0 = 28598465;
							return true;
						case 9:
							*iParam0 = 1620556079;
							return true;
						case 10:
							*iParam0 = 1251463005;
							return true;
						case 11:
							*iParam0 = -602401997;
							return true;
						case 12:
							*iParam0 = -363611516;
							return true;
						case 13:
							*iParam0 = -1631692560;
							return true;
						case 14:
							*iParam0 = -771839452;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 729415757;
							return true;
						case 3:
							*iParam0 = 946889695;
							return true;
						case 4:
							*iParam0 = 1738209787;
							return true;
						case 5:
							*iParam0 = 609774326;
							return true;
						case 6:
							*iParam0 = -814389520;
							return true;
						case 7:
							*iParam0 = -1586099842;
							return true;
						case 8:
							*iParam0 = 1273393517;
							return true;
						case 9:
							*iParam0 = -1140616583;
							return true;
						case 10:
							*iParam0 = 675667608;
							return true;
						case 11:
							*iParam0 = -359677198;
							return true;
						case 12:
							*iParam0 = 1703181487;
							return true;
						case 13:
							*iParam0 = -1127742830;
							return true;
						case 14:
							*iParam0 = -1294625031;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -238808491;
							return true;
						case 3:
							*iParam0 = -610087366;
							return true;
						case 4:
							*iParam0 = -2113376606;
							return true;
						case 5:
							*iParam0 = -1658822997;
							return true;
						case 6:
							*iParam0 = 458077008;
							return true;
						case 7:
							*iParam0 = -1479991672;
							return true;
						case 8:
							*iParam0 = -974205616;
							return true;
						case 9:
							*iParam0 = -1915480358;
							return true;
						case 10:
							*iParam0 = -1427302413;
							return true;
						case 11:
							*iParam0 = 1297056981;
							return true;
						case 12:
							*iParam0 = -1238217619;
							return true;
						case 13:
							*iParam0 = 1844773640;
							return true;
						case 14:
							*iParam0 = 1541545551;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 461545493;
							return true;
						case 3:
							*iParam0 = 760481963;
							return true;
						case 4:
							*iParam0 = -1747528191;
							return true;
						case 5:
							*iParam0 = 1706339276;
							return true;
						case 6:
							*iParam0 = -787395957;
							return true;
						case 7:
							*iParam0 = 1254414564;
							return true;
						case 8:
							*iParam0 = -973839534;
							return true;
						case 9:
							*iParam0 = 964732302;
							return true;
						case 10:
							*iParam0 = 1965573369;
							return true;
						case 11:
							*iParam0 = 1273174558;
							return true;
						case 12:
							*iParam0 = -1366850746;
							return true;
						case 13:
							*iParam0 = 640816886;
							return true;
						case 14:
							*iParam0 = 1582547899;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1806179115;
							return true;
						case 3:
							*iParam0 = 1395346866;
							return true;
						case 4:
							*iParam0 = -109213256;
							return true;
						case 5:
							*iParam0 = -1416742002;
							return true;
						case 6:
							*iParam0 = -1615357250;
							return true;
						case 7:
							*iParam0 = -486577432;
							return true;
						case 8:
							*iParam0 = 1488031426;
							return true;
						case 9:
							*iParam0 = -1158386201;
							return true;
						case 10:
							*iParam0 = -685512585;
							return true;
						case 11:
							*iParam0 = -545482240;
							return true;
						case 12:
							*iParam0 = 1170207075;
							return true;
						case 13:
							*iParam0 = 829062722;
							return true;
						case 14:
							*iParam0 = 913568525;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1372376306;
							return true;
						case 3:
							*iParam0 = -1994390239;
							return true;
						case 4:
							*iParam0 = 1200601581;
							return true;
						case 5:
							*iParam0 = -1632804958;
							return true;
						case 6:
							*iParam0 = -470085637;
							return true;
						case 7:
							*iParam0 = -53460943;
							return true;
						case 8:
							*iParam0 = 793294898;
							return true;
						case 9:
							*iParam0 = -525444146;
							return true;
						case 10:
							*iParam0 = 1136760211;
							return true;
						case 11:
							*iParam0 = -418497553;
							return true;
						case 12:
							*iParam0 = -2106116472;
							return true;
						case 13:
							*iParam0 = 677599687;
							return true;
						case 14:
							*iParam0 = 150094641;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 372300590;
							return true;
						case 3:
							*iParam0 = -1894075093;
							return true;
						case 4:
							*iParam0 = -807400872;
							return true;
						case 5:
							*iParam0 = 850233799;
							return true;
						case 6:
							*iParam0 = 1063877511;
							return true;
						case 7:
							*iParam0 = -1378538896;
							return true;
						case 8:
							*iParam0 = -125455747;
							return true;
						case 9:
							*iParam0 = -111972905;
							return true;
						case 10:
							*iParam0 = 861776066;
							return true;
						case 11:
							*iParam0 = 1904627018;
							return true;
						case 12:
							*iParam0 = -1833532042;
							return true;
						case 13:
							*iParam0 = -1778822384;
							return true;
						case 14:
							*iParam0 = 1868940630;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1059972971;
							return true;
						case 3:
							*iParam0 = 1245102704;
							return true;
						case 4:
							*iParam0 = 857443476;
							return true;
						case 5:
							*iParam0 = -1967131166;
							return true;
						case 6:
							*iParam0 = 2056035715;
							return true;
						case 7:
							*iParam0 = 692065755;
							return true;
						case 8:
							*iParam0 = 962251301;
							return true;
						case 9:
							*iParam0 = 487320741;
							return true;
						case 10:
							*iParam0 = 1501334946;
							return true;
						case 11:
							*iParam0 = 820339735;
							return true;
						case 12:
							*iParam0 = 285984845;
							return true;
						case 13:
							*iParam0 = 1972352444;
							return true;
						case 14:
							*iParam0 = 1101400672;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		default:
			return false;
	}
	switch (iParam3)
	{
		case 0:
			*iParam0 = -1360732541;
			return false;
		case 1:
			*iParam0 = 319638501;
			return false;
		case 2:
			*iParam0 = -97213200;
			return false;
		case 3:
			*iParam0 = 1884526773;
			return false;
		case 4:
			*iParam0 = -1797228166;
			return false;
		case 5:
			*iParam0 = -1385386118;
			return false;
		case 6:
			*iParam0 = -2065276132;
			return false;
		case 7:
			*iParam0 = -273401568;
			return false;
		case 8:
			*iParam0 = 188870715;
			return false;
		default:
			break;
	}
	return false;
	if (bParam4)
	{
	}
	return false;
}

bool func_215(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return true;
		case 1:
			*uParam0 = -291109262;
			return true;
		case 2:
			*uParam0 = 210029681;
			return true;
		case 3:
			*uParam0 = 2037482211;
			return true;
		case 4:
			*uParam0 = 877666613;
			return true;
		case 5:
			*uParam0 = -1127201651;
			return true;
		case 6:
			*uParam0 = 1941338030;
			return true;
		case 7:
			*uParam0 = 181651164;
			return true;
		case 8:
			*uParam0 = -1328475408;
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_216(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*iParam0 = -1587988328;
			return true;
		case 1:
			*iParam0 = -1993750510;
			return true;
		case 2:
			*iParam0 = 1069538232;
			return true;
		case 3:
			*iParam0 = 1590697544;
			return true;
		case 4:
			*iParam0 = 335130626;
			return true;
		case 5:
			*iParam0 = 855344262;
			return true;
		case 6:
			*iParam0 = -1884742536;
			return true;
		case 7:
			*iParam0 = -1499241424;
			return true;
		case 8:
			*iParam0 = -1499241424;
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_217(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_287(iParam0, &Var0);
}

void func_218(int iParam0)
{
	func_221(iParam0, iParam0->f_4 + 1);
}

bool func_219(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 5)
	{
		return false;
	}
	if (!uParam1->f_5[iParam2]->f_8)
	{
		return false;
	}
	return func_111(uParam0, iParam2);
}

int func_220(int iParam0, int iParam1)
{
	fVar0 = get_random_float_in_range(0f, 1f);
	bVar1 = func_288(&(iParam0->f_5[iParam1]->f_12), -1);
	iVar2 = 2;
	if (bVar1 == 0)
	{
		if (iParam0->f_5[iParam1]->f_36 < 11)
		{
			iVar2 = 1;
		}
		else if (iParam0->f_5[iParam1]->f_36 >= 17)
		{
			iVar2 = 1;
		}
	}
	else if (iParam0->f_5[iParam1]->f_36 >= 19)
	{
		iVar2 = 1;
	}
	else if (iParam0->f_5[iParam1]->f_36 <= 17)
	{
		iVar2 = 1;
	}
	if (iVar2 == 1 && get_random_float_in_range(0f, 1f) < 0.25f)
	{
		iVar2 = 2;
	}
	if (iVar2 == 1)
	{
		func_133(iParam0->f_5[iParam1], 8, fVar0, 0);
	}
	else
	{
		func_133(iParam0->f_5[iParam1], 13, fVar0, 0);
	}
	return iVar2;
}

void func_221(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
	func_72(&(iParam0->f_1));
}

void func_222(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

int func_223(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (&uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (is_bit_set(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	set_bit(&(uParam0->f_22), iParam2);
	clear_bit(&(uParam0->f_23), iParam2);
	return 1;
}

void func_224(int iParam0)
{
	Global_1899528->f_61.f_5 = iParam0;
}

void func_225(int iParam0)
{
	Global_1899528->f_61 = iParam0;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528->f_61.f_1 = uParam0;
	if (iParam2 < 6)
	{
		Global_1899528->f_61.f_134[iParam2] = iParam1;
		Global_1899528->f_61.f_7[iParam2] = iParam3;
		Global_1899528->f_61.f_14[iParam2] = iParam4;
		Global_1899528->f_61.f_21[iParam2] = iParam5;
		Global_1899528->f_61.f_28[iParam2] = iParam6;
		if (does_entity_exist(iParam1))
		{
		}
	}
}

bool func_227(int iParam0, int iParam1)
{
	if (func_289(iParam1))
	{
		return false;
	}
	if (func_290(iParam1))
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
		if (func_291(iParam1))
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
		return func_291(iParam1);
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
		return func_291(iParam1);
	}
	return true;
}

void func_228(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

struct<8> func_229(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_232(int iParam0)
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

bool func_233(int iParam0)
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

void func_234(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_292(iParam0, iParam1))
		{
			if (func_293(iParam0, iParam1))
			{
				if (func_294(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_295(iParam0);
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

void func_235(int iParam0, int iParam1, bool bParam2)
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

void func_236(int iParam0, bool bParam1)
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

void func_237(int iParam0, int iParam1)
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

void func_238(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(uParam0, iParam1);
}

void func_239(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_72(&(uParam0->f_4));
}

float func_240(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_241(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0 && iParam0 <= func_296(iVar2) * 2)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			else if (iParam0 <= (func_296(iVar2) * 3 + func_296(iVar3) * 1) && iVar2 != 0)
			{
				iVar0 = 3;
				iVar1 = 1;
			}
			else if (iParam0 <= (func_296(iVar2) * 2 + func_296(iVar3) * 2) && iVar2 != 0)
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else if (iParam0 <= (func_296(iVar2) * 1 + func_296(iVar3) * 3))
			{
				iVar0 = 1;
				iVar1 = 3;
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
		}
	}
	fVar4 = (IntToFloat(iParam0) / (((to_float(iVar0) * to_float(func_296(iVar2))) / to_float(iParam4)) + ((to_float(iVar1) * to_float(func_296(iVar3))) / to_float(iParam4))));
	iVar5 = ceil(fVar4);
	if (iVar5 > iParam4)
	{
		iVar5 = iParam4;
	}
	if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	iVar6 = 0;
	while (iVar6 < iParam3)
	{
		if (iVar6 < iVar0)
		{
			(*uParam1)[iVar6] = iVar2;
			(*uParam2)[iVar6] = iVar5;
		}
		else
		{
			(*uParam1)[iVar6] = iVar3;
			(*uParam2)[iVar6] = iVar5;
		}
		iVar6++;
	}
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar6 = func_297(iParam1, iParam2);
	if (iVar6 >= uParam0->f_240)
	{
		return;
	}
	func_247(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	func_125(uParam0, iVar6, func_129(), vVar0, vVar3, 0, 0);
	if (does_entity_exist(uParam0->f_240[iVar6]->f_4))
	{
		func_188(uParam0->f_240[iVar6]->f_4, iParam4, iParam5);
		func_189(uParam0->f_240[iVar6]->f_4, iParam3);
	}
}

bool func_243(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_2353[iParam1] > 4)
	{
		if (is_entity_dead(iParam2))
		{
			return false;
		}
		return _0x3ab6c7b0bb0df4b1(iParam2, uParam0->f_2353[iParam1]->f_1);
	}
	return false;
}

bool func_244(int iParam0, int iParam1, var uParam2)
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

bool func_245(var uParam0, var uParam1)
{
	if (!uParam0->f_2883)
	{
		return false;
	}
	return (*uParam1 >= 2 && *uParam1 <= 6);
}

void func_246(var uParam0)
{
	func_270(uParam0, uParam0->f_5 + 1);
}

int func_247(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.7925f, 0.0618f, 0.803f };
			vVar4 = { 0f, 0f, 68.7678f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.7855f, 0.1025f, 0.803f };
			vVar4 = { 0f, 0f, 68.7761f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7601f, 0.0273f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 68.7741f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.7523f, 0.0761f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 68.7658f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.3238f, -0.4005f, 0.803f };
			vVar4 = { 0f, 0f, 23.7677f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3477f, -0.3669f, 0.803f };
			vVar4 = { 0f, 0f, 23.776f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2765f, -0.4021f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 23.774f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3055f, -0.3621f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 23.7657f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.3352f, -0.3958f, 0.803f };
			vVar4 = { 0f, 0f, -21.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2945f, -0.3889f, 0.803f };
			vVar4 = { 0f, 0f, -21.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.3698f, -0.3634f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -21.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.321f, -0.3557f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -21.2343f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.7969f, 0.0725f, 0.803f };
			vVar4 = { 0f, 0f, -66.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.7632f, 0.0486f, 0.803f };
			vVar4 = { 0f, 0f, -66.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7984f, 0.1198f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -66.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.7584f, 0.0908f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -66.2343f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (to_float(iParam5) * 0.006f));
	return 1;
}

bool func_248(var uParam0, int iParam1)
{
	return &uParam0->f_240[iParam1] == 5;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam1);
	func_188(iParam0, func_299(iParam1, iParam2), 0);
	func_189(iParam0, iVar0);
}

void func_250(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (iParam2 < 0 || iParam2 >= 88)
	{
		return;
	}
	if (&uParam0->f_2353[iParam1] < 4)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_240[iParam2]->f_4))
	{
		return;
	}
	if (uParam0->f_240[iParam2]->f_3 != -1 && uParam0->f_240[iParam2]->f_3 != uParam0->f_2353[iParam1]->f_1)
	{
		func_152(uParam0, iParam2, 0);
	}
	uParam0->f_240[iParam2]->f_3 = uParam0->f_2353[iParam1]->f_1;
	StringCopy(&(uParam0->f_240[iParam2]->f_5), sParam3, 64);
	set_entity_collision(uParam0->f_240[iParam2]->f_4, false, false);
	if (!is_entity_attached(uParam0->f_240[iParam2]->f_4))
	{
		freeze_entity_position(uParam0->f_240[iParam2]->f_4, true);
	}
	if (bParam4)
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_2353[iParam1]->f_1, sParam3, &Var0, false, 0, 2))
		{
			set_entity_coords(uParam0->f_240[iParam2]->f_4, Var0, true, false, false, true);
			set_entity_rotation(uParam0->f_240[iParam2]->f_4, Var0.f_3, 2, true);
		}
	}
	uParam0->f_240[iParam2]->f_14 = 1;
	set_anim_scene_entity(uParam0->f_2353[iParam1]->f_1, sParam3, uParam0->f_240[iParam2]->f_4, 0);
	set_entity_visible(uParam0->f_240[iParam2]->f_4, true);
}

bool func_251(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (&uParam0->f_2353[iParam1] == 5)
	{
		return _0x8d81e7824b7753f7(uParam0->f_2353[iParam1]->f_1, sParam2, 1);
	}
	return false;
}

void func_252(var uParam0)
{
	uParam0->f_5 = 100;
	func_72(&(uParam0->f_2));
}

void func_253(var uParam0)
{
	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				Var0.f_1 = iVar2;
				Var0 = iVar3;
				*(*uParam0)[iVar4] = { Var0 };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

void func_254(var uParam0)
{
	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = get_random_int_in_range(0, uParam0->f_106);
			Var0 = { *(*uParam0)[iVar2] };
			*(*uParam0)[iVar2] = { *(*uParam0)[iVar3] };
			*(*uParam0)[iVar3] = { Var0 };
			iVar2++;
		}
		iVar4++;
	}
}

void func_255(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0] = -1;
		(*uParam0)[iVar0]->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

bool func_256(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return false;
	}
	*uParam1 = { *(*uParam0)[uParam0->f_105] };
	uParam0->f_105++;
	return true;
}

int func_257(var uParam0, var uParam1)
{
	if (func_300(uParam0, *uParam1))
	{
		return 0;
	}
	if (uParam0->f_23 == 11)
	{
		return 0;
	}
	*(*uParam0)[uParam0->f_23] = { *uParam1 };
	uParam0->f_23++;
	return 1;
}

int func_258(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = func_299(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + func_301(*(*uParam0)[iVar2]));
		if (uParam0[iVar2] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_127(iParam1, 0);
	}
	func_125(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, iParam3, iParam4);
}

bool func_260(var uParam0)
{
	Var0 = { func_302(uParam0) };
	sVar4 = func_181(10, 0);
	return func_183(uParam0, 10, sVar4, &Var0, 2);
}

int func_261(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = get_random_int_in_range(0, 5);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_94[iVar1] && uParam0->f_94[iVar1]->f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_262(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 59:
			return "HIT_CARD";
		case 55:
			return "S1_A01_CHIPS";
		case 56:
			return "S2_A01_CHIPS";
		case 57:
			return "S3_A01_CHIPS";
		case 58:
			return "S4_A01_CHIPS";
		case 60:
			return "PREPOSTGAMECHIPS";
		case 61:
			return "DECK";
		case 62:
			return "CADDY";
		case 63:
			return "CADDYSTACK0";
		case 64:
			return "CADDYSTACK1";
		case 65:
			return "CADDYSTACK2";
		case 66:
			return "CADDYSTACK3";
		case 67:
			return "CADDYSTACK4";
		case 0:
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
			iVar9 = (iVar0 - 0) + 1;
			if (iVar9 < 10)
			{
				StringCopy(&cVar1, "DLR_CARD_0", 64);
			}
			else
			{
				StringCopy(&cVar1, "DLR_CARD_", 64);
			}
			StringIntConCat(&cVar1, iVar9, 64);
			return func_303(cVar1);
		case 11:
		case 12:
		case 13:
		case 14:
			iVar9 = (iVar0 - 11) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A01", 64);
			return func_303(cVar1);
		case 15:
		case 16:
		case 17:
		case 18:
			iVar9 = (iVar0 - 15) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A02", 64);
			return func_303(cVar1);
		case 19:
		case 20:
		case 21:
		case 22:
			iVar9 = (iVar0 - 19) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A03", 64);
			return func_303(cVar1);
		case 23:
		case 24:
		case 25:
		case 26:
			iVar9 = (iVar0 - 23) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A04", 64);
			return func_303(cVar1);
		case 27:
		case 28:
		case 29:
		case 30:
			iVar9 = (iVar0 - 27) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A05", 64);
			return func_303(cVar1);
		case 31:
		case 32:
		case 33:
		case 34:
			iVar9 = (iVar0 - 31) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A06", 64);
			return func_303(cVar1);
		case 35:
		case 36:
		case 37:
		case 38:
			iVar9 = (iVar0 - 35) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A07", 64);
			return func_303(cVar1);
		case 39:
		case 40:
		case 41:
		case 42:
			iVar9 = (iVar0 - 39) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A08", 64);
			return func_303(cVar1);
		case 43:
		case 44:
		case 45:
		case 46:
			iVar9 = (iVar0 - 43) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A09", 64);
			return func_303(cVar1);
		case 47:
		case 48:
		case 49:
		case 50:
			iVar9 = (iVar0 - 47) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A10", 64);
			return func_303(cVar1);
		case 51:
		case 52:
		case 53:
		case 54:
			iVar9 = (iVar0 - 51) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A11", 64);
			return func_303(cVar1);
		case 68:
		case 69:
		case 70:
		case 71:
			iVar9 = (iVar0 - 68) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 72:
		case 73:
		case 74:
		case 75:
			iVar9 = (iVar0 - 72) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 76:
		case 77:
		case 78:
		case 79:
			iVar9 = (iVar0 - 76) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 80:
		case 81:
		case 82:
		case 83:
			iVar9 = (iVar0 - 80) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 84:
		case 85:
		case 86:
		case 87:
			iVar9 = (iVar0 - 84) + 1;
			StringCopy(&cVar1, "MGSOBJ_DISCARD_0", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			return func_303(cVar1);
		default:
			break;
	}
	return "";
}

bool func_263(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (&uParam0->f_2353[iParam1] == 5)
	{
		return uParam0->f_2353[iParam1]->f_2 >= 0.995f;
	}
	if (&uParam0->f_2353[iParam1] == 6)
	{
		return true;
	}
	return false;
}

bool func_264(var uParam0, var uParam1)
{
	iVar0 = 10;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	uParam1->f_301 = -1;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9))
		{
			StringCopy(&cVar1, func_262((11 + iVar9)), 64);
			func_250(uParam0, iVar0, (11 + iVar9), &cVar1, 0);
			StringCopy(&cVar1, func_262((15 + iVar9)), 64);
			func_250(uParam0, iVar0, (15 + iVar9), &cVar1, 0);
			uParam1->f_5[iVar9]->f_8 = 1;
			if (uParam1->f_301 == -1)
			{
				uParam1->f_301 = iVar9;
			}
		}
		else
		{
			uParam1->f_5[iVar9]->f_8 = 0;
		}
		iVar9++;
	}
	StringCopy(&cVar1, func_262(0), 64);
	func_250(uParam0, iVar0, 0, &cVar1, 0);
	StringCopy(&cVar1, func_262(1), 64);
	func_250(uParam0, iVar0, 1, &cVar1, 0);
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4], &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_265(var uParam0, var uParam1)
{
	Var0 = { func_305(uParam1->f_5[uParam1->f_301]->f_12.f_23, 0) };
	sVar4 = func_181((5 + uParam1->f_301), 0);
	return func_183(uParam0, (5 + uParam1->f_301), sVar4, &Var0, 2);
}

bool func_266(var uParam0, var uParam1)
{
	iVar1 = (5 + uParam1->f_301);
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = ((11 + (4 * (uParam1->f_5[uParam1->f_301]->f_12.f_23 - 1))) + uParam1->f_301);
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4], &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

var func_267(int iParam0)
{
	if (iParam0 < 1)
	{
		return "";
	}
	if (iParam0 > 21)
	{
		return "MINIGAME_BJACK_DEALER_BUST";
	}
	StringCopy(&cVar0, "MINIGAME_BJACK_DEALER_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	return func_306(cVar0);
}

bool func_268(var uParam0)
{
	if (uParam0->f_36 > 21)
	{
		return true;
	}
	return false;
}

bool func_269(var uParam0)
{
	sVar0 = func_181(9, 0);
	return func_183(uParam0, 9, sVar0, "PBL_Reveal", 2);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	func_72(&(uParam0->f_2));
}

bool func_271(var uParam0)
{
	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = 0;
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4], &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_272(var uParam0, var uParam1)
{
	Var0 = { func_307(uParam1->f_5[4]->f_12.f_23) };
	sVar4 = func_181(9, 0);
	return func_183(uParam0, 9, sVar4, &Var0, 2);
}

bool func_273(var uParam0, var uParam1)
{
	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = (0 + (uParam1->f_5[4]->f_12.f_23 - 1));
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4], &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_274(var uParam0, var uParam1, int iParam2)
{
	iVar0 = (14 + uParam1->f_302);
	sVar1 = func_181(iVar0, 0);
	if (iParam2 != 7)
	{
		uParam1->f_192 = iParam2;
	}
	switch (uParam1->f_192)
	{
		case 0:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_WIN", 2);
		case 1:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_LOSS", 2);
		case 2:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_01", 2);
		case 3:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_02", 2);
		case 4:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_03", 2);
		case 5:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_04", 2);
		default:
			break;
	}
	return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SELF", 2);
}

bool func_275(var uParam0, var uParam1)
{
	iVar4 = (14 + uParam1->f_302);
	if (!func_184(uParam0, iVar4))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (uParam1->f_5[uParam1->f_302]->f_12.f_23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam1->f_5[uParam1->f_302]->f_12.f_23)
		{
			iVar1 = func_277(uParam1->f_302, iVar0);
			if (iVar0 + 1 < 10)
			{
				StringCopy(&cVar2, "CARD_A0", 16);
				StringIntConCat(&cVar2, iVar0 + 1, 16);
			}
			else
			{
				StringCopy(&cVar2, "CARD_A", 16);
				IntToString(&cVar2, iVar0 + 1, 16);
			}
			func_250(uParam0, iVar4, iVar1, func_308(cVar2), 0);
			iVar0++;
		}
	}
	if (uParam1->f_192 == 1)
	{
		iVar1 = (55 + uParam1->f_302);
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	if (uParam1->f_192 == 0)
	{
		iVar1 = 60;
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	func_185(uParam0, iVar4, uParam0->f_94[4], "PLAYER");
	return func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

float func_276(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0f;
	}
	if (&uParam0->f_2353[iParam1] == 5)
	{
		return uParam0->f_2353[iParam1]->f_2;
	}
	if (&uParam0->f_2353[iParam1] == 6)
	{
		return 1f;
	}
	return 0f;
}

int func_277(int iParam0, int iParam1)
{
	iVar0 = ((11 + (4 * iParam1)) + iParam0);
	return iVar0;
}

void func_278(var uParam0)
{
	func_255(&(uParam0->f_12));
	uParam0->f_36 = 0;
}

bool func_279(var uParam0, var uParam1)
{
	Var0 = { func_309(uParam0, uParam1) };
	sVar4 = func_181(11, 0);
	return func_183(uParam0, 11, sVar4, &Var0, 2);
}

bool func_280(var uParam0, var uParam1)
{
	iVar0 = 11;
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	uParam1->f_304 = 0;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && uParam1->f_5[iVar9]->f_12.f_23 > 0)
		{
			iVar10 = 0;
			while (iVar10 < uParam1->f_5[iVar9]->f_12.f_23)
			{
				set_bit(&(uParam1->f_304), iVar9);
				iVar11 = ((11 + (4 * iVar10)) + iVar9);
				StringCopy(&cVar1, func_262(iVar11), 64);
				func_250(uParam0, iVar0, iVar11, &cVar1, 0);
				iVar10++;
			}
		}
		iVar9++;
	}
	if (uParam1->f_5[4]->f_12.f_23 > 0)
	{
		set_bit(&(uParam1->f_304), 4);
		iVar10 = 0;
		while (iVar10 < uParam1->f_5[4]->f_12.f_23)
		{
			iVar11 = (0 + iVar10);
			StringCopy(&cVar1, func_262(iVar11), 64);
			func_250(uParam0, iVar0, iVar11, &cVar1, 0);
			iVar10++;
		}
	}
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4], &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

void func_281(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (&uParam0->f_240[iParam1] != 5)
	{
		uParam0->f_240[iParam1]->f_22 = 0f;
	}
	else
	{
		uParam0->f_240[iParam1]->f_22 = fParam2;
	}
}

int func_282(int iParam0)
{
	iVar0 = (0 + iParam0);
	return iVar0;
}

bool func_283(var uParam0, var uParam1)
{
	Var0 = { func_310(uParam0, uParam1) };
	sVar4 = func_181(12, 0);
	return func_183(uParam0, 12, sVar4, &Var0, 2);
}

bool func_284(var uParam0, var uParam1)
{
	iVar0 = 12;
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && uParam1->f_5[iVar9]->f_9)
		{
			iVar10 = (55 + iVar9);
			StringCopy(&cVar1, func_262(iVar10), 64);
			func_250(uParam0, iVar0, iVar10, &cVar1, 0);
		}
		iVar9++;
	}
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4], &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_285(var uParam0, var uParam1, int iParam2)
{
	sVar0 = func_181(13, 0);
	if (iParam2 != 3)
	{
		uParam1->f_191 = iParam2;
	}
	switch (uParam1->f_191)
	{
		case 0:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
		case 1:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_Discard", 2);
		case 2:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_To_Shuffle", 2);
		default:
			break;
	}
	return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
}

bool func_286(var uParam0, var uParam1)
{
	iVar5 = 13;
	if (!func_184(uParam0, iVar5))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_bit_set(uParam1->f_304, iVar0) || uParam1->f_5[iVar0]->f_12.f_23 > 0)
		{
			iVar1 = (84 + iVar0);
			func_250(uParam0, iVar5, iVar1, func_262(iVar0), 0);
		}
		iVar0++;
	}
	if (uParam1->f_5[4]->f_12.f_23 > 0)
	{
		set_bit(&(uParam1->f_304), 4);
		iVar2 = 0;
		while (iVar2 < uParam1->f_5[4]->f_12.f_23)
		{
			iVar1 = (0 + iVar2);
			if (iVar2 + 1 < 10)
			{
				StringCopy(&cVar3, "0", 16);
				StringIntConCat(&cVar3, iVar2 + 1, 16);
			}
			else
			{
				IntToString(&cVar3, iVar2 + 1, 16);
			}
			StringConCat(&cVar3, "_CARD", 16);
			func_250(uParam0, iVar5, iVar1, func_308(cVar3), 0);
			iVar2++;
		}
	}
	func_185(uParam0, iVar5, uParam0->f_94[4], func_304(4));
	return func_186(uParam0, iVar5, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_287(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_288(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = func_299(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + func_301(*(*uParam0)[iVar2]));
		if (uParam0[iVar2] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar1 > 0;
}

bool func_289(int iParam0)
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

bool func_290(int iParam0)
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

bool func_291(int iParam0)
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
	fVar13 = func_311(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_311(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

bool func_292(int iParam0, int iParam1)
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

bool func_293(int iParam0, int iParam1)
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

bool func_294(int iParam0, int iParam1)
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
	if (!func_292(iParam0, iVar0))
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

void func_295(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

int func_297(int iParam0, int iParam1)
{
	return ((68 + (4 * iParam1)) + iParam0);
}

int func_298(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_296(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

int func_299(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_300(var uParam0, struct<2> Param1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_23)
	{
		if (uParam0[iVar0] == Param1 && (*uParam0)[iVar0]->f_1 == Param1.f_1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_301(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 10;
		case 13:
			return 10;
		case 14:
			return 11;
		default:
			break;
	}
	return 0;
}

struct<4> func_302(var uParam0)
{
	StringCopy(&cVar1, "PBL_DEAL_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

var func_303(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_304(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "Pre_PostGame_Blackjack_Player";
		case 4:
			return "Dealer";
		default:
			break;
	}
	return "";
}

struct<4> func_305(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 < 10)
		{
			StringCopy(&cVar0, "PBL_A0", 32);
		}
		else
		{
			StringCopy(&cVar0, "PBL_A", 32);
		}
	}
	else if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_B0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_B", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

var func_306(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

struct<4> func_307(int iParam0)
{
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

char* func_308(char[4] cParam0, char[4] cParam1)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

struct<4> func_309(var uParam0, var uParam1)
{
	StringCopy(&cVar1, "PBL_RETRIEVE_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && uParam1->f_5[iVar0]->f_12.f_23 > 0)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

struct<4> func_310(var uParam0, var uParam1)
{
	StringCopy(&cVar1, "PBL_LOSS_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && uParam1->f_5[iVar0]->f_9)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

float func_311(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

