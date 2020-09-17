void __EntryFunction__()
{
	if (has_force_cleanup_occurred(546))
	{
		func_1(Local_417.f_2);
		if (get_cause_of_most_recent_force_cleanup() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_417, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_417, &uScriptParam_0);
	while (Local_417.f_2154 == 0)
	{
		if (func_5(&Local_417))
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
	func_8(&Local_417, bParam0);
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	terminate_this_thread();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (bParam2)
		{
			func_9(uParam0, uParam0->f_106[iVar0], 0);
		}
		else
		{
			func_10(uParam0, uParam0->f_106[iVar0], 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		func_11(uParam0->f_1938[iVar0]);
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
	while (iVar0 < 6)
	{
		uParam0->f_95[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_18(uParam0->f_1938[iVar0], iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_104 = func_20(uParam0);
	_0xed9582b3da8f02b4(uParam0->f_104);
	func_21(uParam0, 0);
}

bool func_5(var uParam0)
{
	uParam0->f_15++;
	uParam0->f_2155 = func_22(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2155 || func_23(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2155;
	}
	uParam0->f_90 = get_distance_between_coords(Global_36, uParam0->f_3, false);
	uParam0->f_91 = get_distance_between_coords(Global_36, uParam0->f_3, true);
	uParam0->f_2156 = 0;
	uParam0->f_2145 = 0;
	uParam0->f_2146 = (uParam0->f_16 && get_interior_from_entity(Global_35) == uParam0->f_18);
	uParam0->f_2147 = (func_24(uParam0) || uParam0->f_2146);
	uParam0->f_2144 = is_sphere_visible(uParam0->f_3, 2f);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_91 < 8f;
	}
	else if (uParam0->f_2146)
	{
		uParam0->f_2145 = uParam0->f_91 < 5f;
	}
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_90 < 8f;
	}
	else if (uParam0->f_2147)
	{
		uParam0->f_2145 = uParam0->f_90 < 5f;
	}
	uParam0->f_103 = 0;
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
	uParam0->f_103 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_106[iVar0]->f_1 != 0)
		{
			func_30(uParam0, uParam0->f_106[iVar0]);
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
				while (iVar0 < 6)
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
				uParam0->f_2153 = 0f;
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (is_screen_faded_out())
			{
				_0x9851de7aec10b4e1(uParam0->f_3, 2f, 1, 0);
				func_21(uParam0, 5);
			}
			else if (uParam0->f_103 > 0)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					destroy_tracked_point(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_21(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_90 > 70f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_90 > 18f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_90 > uParam0->f_2152)
			{
				if (_is_tracked_point_valid(uParam0->f_17))
				{
					if (is_tracked_point_visible(uParam0->f_17))
					{
						uParam0->f_2153 = 0f;
					}
				}
				else if (would_entity_be_occluded(get_entity_model(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2153 = 0f;
				}
				uParam0->f_2153 = (uParam0->f_2153 + get_frame_time());
				if (uParam0->f_2153 > 1f)
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
			while (iVar0 < 6)
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
			if (uParam0->f_90 < 7f)
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			else if (uParam0->f_90 < 12f && is_ped_on_foot(Global_35))
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
				if (uParam0->f_93 == 0)
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
		while (iVar0 < 6)
		{
			func_56(uParam0, uParam0->f_106[iVar0]->f_11, 0);
			func_9(uParam0, uParam0->f_106[iVar0], 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_57(uParam0, uParam0->f_106[iVar0]);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_11(uParam0->f_1938[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
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
		if (uParam0->f_2150)
		{
			sVar1 = func_58(uParam0);
			if (!is_string_null_or_empty(sVar1))
			{
				_0x531a78d6bf27014b(sVar1);
				uParam0->f_2150 = 0;
			}
		}
	}
	func_12(uParam0);
	_0x7d4e70a67a651c71(uParam0->f_104);
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
		uParam0->f_95[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
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
			uParam0->f_105 = (uParam0->f_105 - 1);
			func_64(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		clear_bit(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
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
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0] != 0)
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
	func_67(uParam0, -55367021, 0);
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
	if (func_68() == 75)
	{
		func_69(-1014145132);
	}
	func_70(uParam0);
	if (func_68() == 75)
	{
		func_71(uParam0, 0, 0);
	}
	func_72(&Local_1);
}

int func_20(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!is_bit_set(uParam0->f_94, iVar0) && !is_bit_set(uParam0->f_93, iVar0))
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
	func_73(&(uParam0->f_12));
}

bool func_22(int iParam0)
{
	iVar0 = func_74(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_23(int iParam0)
{
	iVar0 = func_75(iParam0, 0);
	return _get_number_of_references_of_script_with_name_hash(iVar0) > 0;
}

bool func_24(var uParam0)
{
	if (uParam0->f_2146)
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
	if (!func_76(uParam0))
	{
		return 0f;
	}
	if (func_77(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_78() - uParam0->f_1);
}

void func_26(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_1938[iVar0] == 2)
		{
			func_79(uParam0->f_1938[iVar0], 0);
			Jump @124; //curOff = 42
		}
		else if (&uParam0->f_1938[iVar0] == 5)
		{
			uParam0->f_1938[iVar0]->f_2 = _get_anim_scene_progress(uParam0->f_1938[iVar0]->f_1);
			Jump @124; //curOff = 87
		}
		else if (&uParam0->f_1938[iVar0] == 3)
		{
			func_80(uParam0, uParam0->f_1938[iVar0]->f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	fVar1 = func_81(uParam0->f_1);
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
	if (func_82(uParam0->f_1, 262144))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!func_83(uParam0->f_1))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_84(uParam0->f_7, 4194304))
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
	if (!func_85(uParam0->f_8) && !func_22(uParam0->f_8))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && _get_number_of_references_of_script_with_name_hash(19547436) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_90 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_9(uParam0, uParam0->f_106[iVar0], 1);
				iVar0++;
			}
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2155)
	{
		if (func_86())
		{
			if (!func_87(uParam0->f_2))
			{
				if (func_88())
				{
					if (uParam0->f_2 == 0 && get_hash_of_this_script_name() == 1121120602)
					{
						return 0;
					}
					if (uParam0->f_90 < 10f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_89(269, 0))
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
	if (uParam0->f_90 < 15f)
	{
		if (uParam0->f_2150 == 0)
		{
			sVar0 = func_58(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0xd9130842d7226045(sVar0, 1);
			uParam0->f_2150 = 1;
		}
		return;
	}
	if (uParam0->f_90 > 25f)
	{
		if (uParam0->f_2150)
		{
			sVar0 = func_58(uParam0);
			if (is_string_null_or_empty(sVar0))
			{
				return;
			}
			_0x531a78d6bf27014b(sVar0);
			uParam0->f_2150 = 0;
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
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0] == 5 && uParam0->f_281[iVar0]->f_22 == 0f)
		{
			Jump @1049; //curOff = 59
		}
		else if (&uParam0->f_281[iVar0] == 1)
		{
			if (get_frame_count() > uParam0->f_281[iVar0]->f_2)
			{
				uParam0->f_281[iVar0] = 2;
			}
			Jump @1049; //curOff = 106
		}
		else if (&uParam0->f_281[iVar0] == 2)
		{
			request_model(uParam0->f_281[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_281[iVar0]->f_1))
			{
				if (func_90(uParam0->f_281[iVar0]->f_16))
				{
					uParam0->f_281[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_281[iVar0]->f_23 = 255f;
				uParam0->f_281[iVar0]->f_4 = create_object_no_offset(uParam0->f_281[iVar0]->f_1, uParam0->f_281[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_281[iVar0]->f_4, uParam0->f_281[iVar0]->f_19, 2, true);
				uParam0->f_281[iVar0] = 5;
				set_model_as_no_longer_needed(uParam0->f_281[iVar0]->f_1);
				if (uParam0->f_281[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_281[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_281[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_281[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 392
		}
		else if (&uParam0->f_281[iVar0] == 4)
		{
			request_model(uParam0->f_281[iVar0]->f_1, false);
			if (has_model_loaded(uParam0->f_281[iVar0]->f_1))
			{
				if (does_entity_exist(uParam0->f_281[iVar0]->f_4))
				{
					uParam0->f_281[iVar0]->f_16 = { get_entity_coords(uParam0->f_281[iVar0]->f_4, true, false) };
					uParam0->f_281[iVar0]->f_19 = { get_entity_rotation(uParam0->f_281[iVar0]->f_4, 2) };
					func_91(&(uParam0->f_281[iVar0]->f_4));
				}
				if (func_90(uParam0->f_281[iVar0]->f_16))
				{
					uParam0->f_281[iVar0]->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_281[iVar0]->f_4 = create_object_no_offset(uParam0->f_281[iVar0]->f_1, uParam0->f_281[iVar0]->f_16, false, true, false, false);
				set_entity_rotation(uParam0->f_281[iVar0]->f_4, uParam0->f_281[iVar0]->f_19, 2, true);
				uParam0->f_281[iVar0] = 5;
				uParam0->f_281[iVar0]->f_23 = 255f;
				set_model_as_no_longer_needed(uParam0->f_281[iVar0]->f_1);
				if (uParam0->f_281[iVar0]->f_13)
				{
					set_entity_visible(uParam0->f_281[iVar0]->f_4, false);
				}
				if (!decor_exist_on(uParam0->f_281[iVar0]->f_4, "MinigameObject"))
				{
					decor_set_bool(uParam0->f_281[iVar0]->f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 770
		}
		else if (&uParam0->f_281[iVar0] == 5 && uParam0->f_281[iVar0]->f_22 != 0f)
		{
			if (does_entity_exist(uParam0->f_281[iVar0]->f_4))
			{
				fVar1 = (get_frame_time() / uParam0->f_281[iVar0]->f_22);
				uParam0->f_281[iVar0]->f_23 = (uParam0->f_281[iVar0]->f_23 + (fVar1 * 255f));
				if (uParam0->f_281[iVar0]->f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if (uParam0->f_281[iVar0]->f_23 >= 255f)
				{
					uParam0->f_281[iVar0]->f_23 = 255f;
					reset_entity_alpha(uParam0->f_281[iVar0]->f_4);
					uParam0->f_281[iVar0]->f_22 = 0f;
				}
				else if (uParam0->f_281[iVar0]->f_22 < 0f)
				{
					set_entity_alpha(uParam0->f_281[iVar0]->f_4, floor(uParam0->f_281[iVar0]->f_23), true);
				}
				else
				{
					set_entity_alpha(uParam0->f_281[iVar0]->f_4, ceil(uParam0->f_281[iVar0]->f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	uVar0 = 6;
	iVar11 = 0;
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
			if ((has_model_loaded(uParam1->f_2) && get_frame_count() > uParam1->f_17) && !uParam0->f_2156)
			{
				uParam1->f_11 = func_92(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_entity_heading(uParam1->f_11, uParam1->f_10);
				set_model_as_no_longer_needed(uParam1->f_2);
				uParam1->f_12 = -1;
				func_93(uParam1->f_11, 0);
				iVar8 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (does_entity_exist(uParam1->f_11))
					{
						iVar8 = func_95(uParam0->f_1, func_94(uParam0));
						iVar11 = func_96(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar8);
					}
				}
				func_97(uParam0, &uVar0, &iVar7);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_98(uParam1->f_11, uParam0->f_1, iVar11, &uVar0, iVar7, &iVar9))
					{
						set_ambient_voice_name(uParam1->f_11, func_99(iVar9));
					}
					else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
					{
						set_ambient_voice_name(uParam1->f_11, func_99(iVar9));
					}
					else
					{
						iVar9 = 92;
					}
				}
				else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
				{
					set_ambient_voice_name(uParam1->f_11, func_99(iVar9));
				}
				else
				{
					iVar9 = 92;
				}
				func_101(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar8, iVar9);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, &(uParam0->f_23[uParam1->f_12]->f_2), 0, false, true, 0, false, -1f, false);
					}
				}
				uParam0->f_2156 = 1;
			}
			break;
		case 3:
			func_102(uParam0, uParam1);
			break;
		case 4:
			if (func_103(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_104(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_103++;
			if (!is_ped_injured(uParam1->f_11))
			{
				set_ped_can_leg_ik(uParam1->f_11, false);
			}
			bVar10 = func_105(uParam1);
			if (uParam1->f_14 && !bVar10)
			{
				func_106(uParam0, uParam1, 0);
			}
			else
			{
				func_107(uParam0, uParam1);
			}
			uParam1->f_14 = bVar10;
			break;
		case 6:
			func_108(uParam0, uParam1);
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
	return func_109(uParam0->f_3, fVar0, iParam1);
}

void func_32(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_110(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
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
				if (func_111(iParam0, get_entity_model(iVar1)))
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
		return func_112(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0, iVar0))
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
		return func_113(bParam1, bParam2, bParam3);
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
			if (func_114())
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
			func_115(uParam0);
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
	func_116(&iVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
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
	iVar9 = func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443);
	func_118(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!does_entity_exist(iVar9))
	{
		set_bit(&(uParam0->f_94), iParam1);
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
			func_119(uParam0);
			func_115(uParam0);
			break;
		case 1:
			func_119(uParam0);
			if (!func_120(uParam0))
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 2:
			if (_0x5c16855277819bbf() < uParam0->f_104)
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, uParam0->f_106[iParam1], 1, 1, 0, 1);
	if (is_bit_set(uParam0->f_94, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_121(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_122(uParam0->f_7);
	}
	uParam0->f_106[iParam1]->f_2 = iParam2;
	func_123(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -get_random_float_in_range(0.25f, 1.25f), 0f, &(uParam0->f_106[iParam1]->f_7), 0);
	uParam0->f_106[iParam1]->f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_124(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_106[iParam1]->f_10));
	uParam0->f_106[iParam1]->f_13 = iParam1;
	uParam0->f_106[iParam1]->f_15 = 1;
	uParam0->f_106[iParam1]->f_12 = iParam1;
	uParam0->f_95[iParam1] = iParam1;
	uParam0->f_105++;
	set_bit(&(uParam0->f_93), iParam1);
	func_104(uParam0->f_106[iParam1], 1);
	if (iParam3 > 0)
	{
		uParam0->f_106[iParam1]->f_17 = (get_frame_count() + iParam3);
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
	if (func_82(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

void func_44(int iParam0, int iParam1)
{
	if (!func_82(iParam0, iParam1))
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
	if (Local_1.f_378 != -1)
	{
		func_125(uParam0, Local_1.f_378);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_112(uParam0, iVar1))
		{
			iVar0 = func_126(iVar1);
			func_127(uParam0, iVar1, 0, &vVar5, &vVar2, 0, 1);
			func_129(uParam0, iVar0, func_128(), vVar5, vVar2, iVar1, 1);
			func_130(uParam0, iVar1, Local_1.f_5[iVar1]->f_59, 1);
		}
		iVar1++;
	}
	func_131(uParam0, 30, 0, 1, 1);
	func_131(uParam0, 31, 0, 2, 1);
}

bool func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0] != 0 && &uParam0->f_281[iVar0] != 5)
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
	if (!func_132(uParam0, Local_1.f_378))
	{
		Local_1.f_378 = (Local_1.f_378 + 1 % 6);
	}
	if (Local_1 < 14)
	{
		if (uParam0->f_2155)
		{
			func_133(&Local_1, 14);
		}
	}
	if (uParam0->f_2151 == 1)
	{
		func_133(&Local_1, 13);
		uParam0->f_2151 = 0;
	}
	if (Local_1 == 14)
	{
		func_134(&Local_1, uParam0);
	}
	if (func_135(uParam0, 5) < 2)
	{
		return;
	}
	if (uParam0->f_2145)
	{
		func_136(uParam0, &Local_1);
	}
	switch (Local_1)
	{
		case 0:
			func_133(&Local_1, 1);
			break;
		case 1:
			if (!func_132(uParam0, Local_1.f_378))
			{
				Local_1.f_378 = (Local_1.f_378 + 1 % 6);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				Local_1.f_5[iVar0]->f_58 = 0;
				if (func_132(uParam0, iVar0))
				{
					func_130(uParam0, iVar0, Local_1.f_5[iVar0]->f_59, 1);
				}
				iVar0++;
			}
			Local_1.f_385 = func_137(uParam0, Local_1.f_378);
			if (Local_1.f_385 != -1)
			{
				func_138(Local_1.f_5[Local_1.f_385], 5, get_random_float_in_range(0f, 1f), 0);
			}
			func_125(uParam0, Local_1.f_378);
			func_133(&Local_1, 3);
			break;
		case 3:
			if (!func_132(uParam0, Local_1.f_385))
			{
				Local_1.f_385 = func_137(uParam0, Local_1.f_378);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0) && iVar0 != Local_1.f_385)
				{
					func_138(Local_1.f_5[iVar0], 1, 0, 0);
				}
				iVar0++;
			}
			func_138(Local_1.f_5[Local_1.f_385], 5, get_random_float_in_range(0f, 1f), 0);
			func_133(&Local_1, 4);
			break;
		case 4:
			Local_1.f_384 = func_137(uParam0, Local_1.f_385);
			if (!func_132(uParam0, Local_1.f_384))
			{
				Local_1.f_384 = func_137(uParam0, Local_1.f_385);
				return;
			}
			func_138(Local_1.f_5[Local_1.f_384], 5, get_random_float_in_range(2f, 3f), 0);
			func_133(&Local_1, 5);
			break;
		case 5:
			if (!func_139(uParam0, Local_1.f_5[Local_1.f_385]))
			{
				return;
			}
			if (!func_139(uParam0, Local_1.f_5[Local_1.f_384]))
			{
				return;
			}
			func_138(Local_1.f_5[Local_1.f_378], 2, 0, 0);
			func_133(&Local_1, 6);
			break;
		case 6:
			if (func_139(uParam0, Local_1.f_5[Local_1.f_378]))
			{
				Local_1.f_387 = func_137(uParam0, Local_1.f_384);
				if (Local_1.f_387 != -1)
				{
					func_133(&Local_1, 7);
				}
			}
			break;
		case 7:
			if (func_140(&Local_1, uParam0))
			{
				func_133(&Local_1, 8);
			}
			break;
		case 8:
			if (func_141(&Local_1, uParam0))
			{
				func_133(&Local_1, 9);
			}
			break;
		case 9:
			if (func_142(&Local_1, uParam0))
			{
				func_133(&Local_1, 10);
			}
			break;
		case 10:
			if (func_143(&Local_1, uParam0))
			{
				func_133(&Local_1, 11);
			}
			break;
		case 11:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, Local_1.f_5[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					func_138(Local_1.f_5[iVar0], 12, 0, 0);
				}
				iVar0++;
			}
			func_133(&Local_1, 12);
			break;
		case 12:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, Local_1.f_5[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(Local_1.f_5[Local_1.f_388], 17, 0, 0);
			func_133(&Local_1, 13);
			break;
		case 13:
			if (func_145(&Local_1, uParam0))
			{
				func_133(&Local_1, 1);
			}
			break;
	}
}

int func_50()
{
	return Global_1899528->f_61;
}

bool func_51(var uParam0)
{
	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar3 = func_147(uParam0->f_1, iVar0, &uVar5, &uVar6, &iVar7, &iVar8);
		if (!is_entity_dead(iVar3))
		{
			Local_1.f_5[iVar0]->f_59 = uVar5;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				iVar2 = ((0 + iVar0 * 4) + iVar1);
				iVar4 = func_148(uParam0->f_1, iVar2);
				if (does_entity_exist(iVar4))
				{
					func_149(uParam0, iVar2, iVar4);
				}
				iVar1++;
			}
			func_71(uParam0, iVar0, 0);
			Local_1.f_5[iVar0]->f_1 = uVar6;
			func_101(uParam0, uParam0->f_106[iVar0], iVar3, iVar0, 1, 1, iVar7, iVar8);
		}
		iVar0++;
	}
	Local_1.f_378 = func_150();
	iVar4 = func_148(uParam0->f_1, 24);
	if (does_entity_exist(iVar4))
	{
		func_149(uParam0, 24, iVar4);
	}
	func_125(uParam0, Local_1.f_378);
	func_151();
	return true;
}

void func_52()
{
	func_151();
	func_152();
	func_153(-1);
	func_154(-1);
}

bool func_53(var uParam0)
{
	bVar2 = false;
	if (func_155() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!func_156(uParam0->f_106[iVar0]))
			{
				iVar1 = func_147(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!is_entity_dead(iVar1) && !decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, uParam0->f_106[iVar0], iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_156(uParam0->f_106[iVar0]))
		{
			if (func_157(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!decor_exist_on(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, uParam0->f_106[iVar0], iVar1, iVar0, 1, 0, -1, 92))
					{
						func_71(uParam0, iVar0, 0);
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
			if (func_132(uParam0, 4))
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
	while (iVar0 < 7)
	{
		if (func_158(uParam0, iVar0))
		{
			if (_0x3ab6c7b0bb0df4b1(iParam1, uParam0->f_1938[iVar0]->f_1))
			{
				func_80(uParam0, iVar0, bParam2);
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
	if (iParam2 == 1 && _does_anim_scene_exist(uParam0->f_1938[uParam1->f_20]->f_1))
	{
		remove_anim_scene_entity(uParam0->f_1938[uParam1->f_20]->f_1, &(uParam1->f_21), uParam1->f_11);
	}
	freeze_entity_position(uParam1->f_11, false);
	clear_bit(&(uParam0->f_1938[uParam1->f_20]->f_3), uParam1->f_13);
	if (uParam0->f_1938[uParam1->f_20]->f_3 == 0)
	{
		func_159(uParam0->f_1938[uParam1->f_20], 3);
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
	iVar0 = func_160(iParam0);
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
	iVar0 = func_160(iParam0);
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
	uParam0->f_281[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_281[iParam1]->f_5)) && uParam0->f_281[iParam1]->f_3 != -1)
	{
		func_161(uParam0, iParam1, 0);
	}
	uParam0->f_281[iParam1]->f_23 = 0f;
	uParam0->f_281[iParam1]->f_22 = 0f;
	StringCopy(&(uParam0->f_281[iParam1]->f_5), "", 64);
	uParam0->f_281[iParam1]->f_3 = -1;
	uParam0->f_281[iParam1]->f_14 = 0;
	func_91(&(uParam0->f_281[iParam1]->f_4));
	uParam0->f_281[iParam1]->f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_281[iParam1] = 0;
	if (!is_string_null_or_empty(&(uParam0->f_281[iParam1]->f_5)) && uParam0->f_281[iParam1]->f_3 != -1)
	{
		func_161(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_162(uParam0, iParam1);
	}
	StringCopy(&(uParam0->f_281[iParam1]->f_5), "", 64);
	uParam0->f_281[iParam1]->f_3 = -1;
	uParam0->f_281[iParam1]->f_23 = 0f;
	if (uParam0->f_281[iParam1]->f_15)
	{
		if (does_entity_exist(uParam0->f_281[iParam1]->f_4))
		{
			_0xc1193521e3b9fadd(uParam0->f_281[iParam1]->f_4, 0);
		}
	}
	uParam0->f_281[iParam1]->f_15 = 0;
	uParam0->f_281[iParam1]->f_14 = 0;
	func_163(&(uParam0->f_281[iParam1]->f_4), 1, 1);
	uParam0->f_281[iParam1]->f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_164(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

int func_68()
{
	return Global_1894899->f_2;
}

void func_69(int iParam0)
{
	iVar0 = func_165(iParam0, 1);
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

void func_70(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 6;
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
	uParam0->f_94 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!is_bit_set(iVar0, iVar2))
		{
			set_bit(&(uParam0->f_94), iVar2);
		}
		iVar2++;
	}
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		set_bit(&(uParam0->f_94), iParam1);
	}
	else
	{
		clear_bit(&(uParam0->f_94), iParam1);
	}
}

void func_72(int iParam0)
{
	func_166(&(iParam0->f_392));
	func_133(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iParam0->f_5[iVar0]->f_5 = iVar0;
		func_138(iParam0->f_5[iVar0], 1, 0, 0);
		func_166(&(iParam0->f_5[iVar0]->f_6));
		iParam0->f_5[iVar0]->f_30.f_24 = -1;
		func_166(&(iParam0->f_5[iVar0]->f_30));
		iVar0++;
	}
	iParam0->f_380 = 0;
	iParam0->f_381 = 0;
	iParam0->f_382 = 0;
}

void func_73(var uParam0)
{
	func_167(uParam0, 0f);
}

int func_74(int iParam0)
{
	if (!func_168(iParam0))
	{
		return -1;
	}
	return func_169(iParam0);
}

int func_75(int iParam0, int iParam1)
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

bool func_76(var uParam0)
{
	return func_170(*uParam0, 1);
}

bool func_77(var uParam0)
{
	return func_170(*uParam0, 2);
}

float func_78()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_79(var uParam0, bool bParam1)
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
	func_159(uParam0, 4);
	return 1;
}

void func_80(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return;
	}
	if (&uParam0->f_1938[iParam1] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0]->f_3 == uParam0->f_1938[iParam1]->f_1)
			{
				func_161(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		_delete_anim_scene(uParam0->f_1938[iParam1]->f_1);
	}
	func_11(uParam0->f_1938[iParam1]);
}

float func_81(int iParam0)
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

bool func_82(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

bool func_83(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return (!func_172() || is_bit_set(Global_40.f_7854, iParam0));
}

bool func_84(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_85(int iParam0)
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
		iVar0 = func_169(iParam0);
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

bool func_86()
{
	return Global_1898164->f_163;
}

bool func_87(int iParam0)
{
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_173(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

bool func_88()
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

bool func_89(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_175(5000))
		{
			return true;
		}
	}
	switch (func_176(0))
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

bool func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_91(int* iParam0)
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

int func_92(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_177(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_93(int iParam0, int iParam1)
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

int func_94(var uParam0)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_106)
	{
		if (&uParam0->f_106[iVar2])
		{
			iVar1 = uParam0->f_106[iVar2]->f_18;
			if (iVar1 != -1)
			{
				set_bit(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	iVar0 = func_178(iParam0);
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

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_179(iParam1, iParam2, iParam3);
	_set_ped_body_component(iParam0, iVar0);
	_update_ped_variation(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (&uParam0->f_106[iVar0])
		{
			(*uParam1)[*iParam2] = uParam0->f_106[iVar0]->f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

bool func_98(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	uVar0 = 3;
	iVar4 = 0;
	if (func_180(iParam0))
	{
		return false;
	}
	func_181(get_entity_model(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = uParam3[iVar7];
		if (!func_182(&uVar0, iVar6))
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
			if (func_182(&uVar0, iVar6))
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
		if (func_182(&uVar0, iVar6))
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

char* func_99(int iParam0)
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

bool func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uVar0 = 3;
	iVar4 = 0;
	func_183(get_entity_model(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_182(&uVar0, iVar6))
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
			if (func_182(&uVar0, iVar6))
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
		if (func_182(&uVar0, iVar6))
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

bool func_101(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
		uParam0->f_95[iParam3] = iParam3;
		set_bit(&(uParam0->f_93), iParam3);
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
		func_184(iParam2);
		func_104(uParam1, 4);
	}
	else
	{
		func_104(uParam1, 3);
	}
	uParam0->f_92++;
	return true;
}

int func_102(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			task_follow_nav_mesh_to_coord(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, 0, 40000f);
			func_185(uParam1);
			break;
		case 1:
			if (func_186(uParam1->f_11, 713668775))
			{
				func_185(uParam1);
			}
			break;
		case 2:
			if (!func_186(uParam1->f_11, 713668775))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2155)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (func_187(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_180(uParam1->f_11))
			{
				iVar0 = 4;
				if (!is_bit_set(uParam0->f_93, iVar0))
				{
					set_bit(&(uParam0->f_93), iVar0);
					uParam0->f_95[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
					func_185(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_188(uParam0, get_entity_coords(uParam1->f_11, true, false), &iVar0))
			{
				set_bit(&(uParam0->f_93), iVar0);
				uParam0->f_95[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!_does_scenario_point_exist(uParam0->f_23[uParam1->f_12]->f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				_task_use_scenario_point(uParam1->f_11, uParam0->f_23[uParam1->f_12]->f_10, 0, 0, true, false, 0, false, -1f, false);
				func_185(uParam1);
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
				func_185(uParam1);
			}
			break;
		case 4:
			if (func_6() == -1 && uParam0->f_1 == 0)
			{
				if (func_112(uParam0, 4))
				{
					func_35(uParam0->f_2);
				}
				else
				{
					func_1(uParam0->f_2);
				}
			}
			func_184(uParam1->f_11);
			func_189(uParam1);
			func_104(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_103(var uParam0, var uParam1)
{
	iVar6 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			if (Local_1.f_378 == -1)
			{
				Local_1.f_378 = uParam1->f_12;
			}
			if (!is_ped_male(uParam1->f_11))
			{
				Local_1.f_5[uParam1->f_12]->f_1 = 3;
			}
			else if (Local_1.f_5[uParam1->f_12]->f_1 == -1)
			{
				if (func_190())
				{
					Local_1.f_5[uParam1->f_12]->f_1 = 0;
				}
				else
				{
					Local_1.f_5[uParam1->f_12]->f_1 = 2;
				}
			}
			sVar7 = func_191(Local_1.f_5[uParam1->f_12]->f_1);
			if (func_192(uParam0, iVar6, sVar7, "PBL_NoCardsLoop", 2))
			{
				if (Local_1.f_5[uParam1->f_12]->f_59 == 0)
				{
					iVar8 = func_160(uParam0->f_2);
					if (iVar8 != -1)
					{
						iVar9 = func_193(2, (*Global_1392915)[iVar8]->f_10);
					}
					else
					{
						iVar9 = 100;
					}
					iVar9 = (iVar9 + get_random_int_in_range((-iVar9 / 5), (iVar9 / 5)));
					Local_1.f_5[uParam1->f_12]->f_59 = iVar9;
				}
				_0x99b2a2e3655deaf1(uParam1->f_11, "PokerSeatedNoCards");
				func_185(uParam1);
			}
			break;
		case 1:
			if (func_194(uParam0, iVar6))
			{
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				func_197(uParam0, iVar6, uParam1, "Seat_01");
				if (func_198(uParam0, iVar6, vVar3, vVar0))
				{
					func_185(uParam1);
				}
			}
			break;
		case 2:
			if (func_47(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_73(&(uParam0->f_4));
}

int func_105(var uParam0)
{
	if (!func_156(uParam0))
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

int func_106(var uParam0, var uParam1, bool bParam2)
{
	if (!func_199(uParam0, uParam1->f_11))
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
	if (!uParam0->f_2155)
	{
		decor_set_bool(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	_0xbc781d24aa11f179(uParam1->f_11);
	func_200(uParam0, uParam1->f_12, 1);
	func_201(uParam0, uParam1->f_20, 1);
	if (is_ped_ragdoll(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_104(uParam1, 7);
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_12;
	if (uParam0->f_2 == 27)
	{
		if (uParam0->f_2146 == 0 && Local_1.f_5[iVar0]->f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2 == 30)
	{
		if (uParam0->f_90 > 10f && Local_1.f_5[iVar0]->f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2147 == 0 && uParam0->f_2146 == 0)
	{
		if ((uParam0->f_90 > 10f || uParam0->f_2144 == 0) && Local_1.f_5[iVar0]->f_3 == 0)
		{
			return 1;
		}
	}
	Local_1.f_5[iVar0]->f_2 = (Local_1.f_5[iVar0]->f_2 + get_frame_time());
	if (!func_112(uParam0, iVar0))
	{
		Local_1.f_5[iVar0] = 0;
	}
	switch (&Local_1.f_5[iVar0])
	{
		case 1:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 2:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_205(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_206(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_207(uParam0, uParam1, &Local_1);
			break;
		case 7:
			if (iVar0 != Local_1.f_378)
			{
				func_208(uParam0, uParam1, &Local_1);
			}
			else
			{
				func_209(uParam0, uParam1, &Local_1);
			}
			break;
		case 8:
			func_210(uParam0, uParam1, &Local_1);
			break;
		case 9:
			func_211(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_212(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_213(uParam0, uParam1, &Local_1);
			break;
		case 18:
			func_214(uParam0, uParam1, &Local_1);
			break;
		case 19:
			func_215(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_216(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_217(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_218(uParam0, uParam1, &Local_1);
			break;
		case 16:
			func_219(uParam0, uParam1, &Local_1);
			break;
		case 15:
			func_220(uParam0, uParam1, &Local_1);
			break;
		case 17:
			func_221(uParam0, uParam1, &Local_1);
			break;
		case 20:
			func_222(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_108(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			clear_ped_tasks(uParam1->f_11, 1, 0);
			func_200(uParam0, uParam1->f_12, 0);
			func_223(uParam1->f_11);
			func_185(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			func_185(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_109(vector3 vParam0, float fParam3, bool bParam4)
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

void func_110(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_224());
	}
}

bool func_111(int iParam0, int iParam1)
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

bool func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (&uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_106[&uParam0->f_95[iParam1]] && uParam0->f_106[&uParam0->f_95[iParam1]]->f_1 == 5);
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
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

bool func_114()
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

void func_115(var uParam0)
{
	func_225(uParam0, uParam0->f_11 + 1);
}

void func_116(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_224());
	}
}

int func_117(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	iVar3 = create_itemset(true);
	if (!is_itemset_valid(iVar3))
	{
		return 0;
	}
	func_226(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_116(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = _0x886171a12f400b89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar3));
		if (!is_entity_dead(iVar4))
		{
			if (func_111(iParam0, get_entity_model(iVar4)))
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

int func_118(int iParam0, vector3 vParam1, var uParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_227(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, uParam4, iParam5, fParam6, iParam7, 0))
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

void func_119(var uParam0)
{
}

bool func_120(var uParam0)
{
	return true;
}

int func_121(int iParam0, int iParam1, int iParam2)
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

int func_122(int iParam0)
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

int func_123(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { _get_object_offset_from_coords(vVar0, fVar3, vParam6) };
	return 1;
}

int func_124(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
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

void func_125(var uParam0, int iParam1)
{
	func_230(uParam0, iParam1, 0, &vVar0, &vVar3, 1);
	func_129(uParam0, 24, func_231(24, 0), vVar0, vVar3, 0, 0);
}

int func_126(int iParam0)
{
	return (62 + iParam0);
}

int func_127(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
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
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
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
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
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
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
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
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (to_float(iParam5) * 0.006f));
	return 1;
}

int func_128()
{
	iVar0 = 1590697544;
	if (func_233(&iVar0, iLocal_0))
	{
		return iVar0;
	}
	return iVar0;
}

void func_129(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_281[iParam1] = 2;
	uParam0->f_281[iParam1]->f_16 = { vParam3 };
	uParam0->f_281[iParam1]->f_19 = { vParam6 };
	uParam0->f_281[iParam1]->f_1 = iParam2;
	uParam0->f_281[iParam1]->f_13 = iParam10;
	if (does_entity_exist(uParam0->f_281[iParam1]->f_4))
	{
		if (get_entity_model(uParam0->f_281[iParam1]->f_4) == iParam2)
		{
			if (!func_234(uParam0->f_281[iParam1]->f_16, get_entity_coords(uParam0->f_281[iParam1]->f_4, true, false)))
			{
				set_entity_coords(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_16, true, false, false, true);
			}
			set_entity_rotation(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_19, 2, true);
			uParam0->f_281[iParam1] = 5;
		}
		else
		{
			uParam0->f_281[iParam1] = 4;
		}
		if (uParam0->f_281[iParam1]->f_13)
		{
			set_entity_visible(uParam0->f_281[iParam1]->f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_281[iParam1] = 1;
		uParam0->f_281[iParam1]->f_2 = (get_frame_count() + iParam9);
	}
}

void func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_235(iParam2, &uVar1, &uVar11);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar6[iVar0] = func_236(&(uVar1[iVar0]), &(uVar11[iVar0]), 10);
		func_237(uParam0, iParam1, iVar0, &(uVar1[iVar0]), &(iVar6[iVar0]), 0, bParam3);
		iVar0++;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_231(iParam1, 0);
	}
	func_129(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, iParam3, iParam4);
}

bool func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (&uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_106[&uParam0->f_95[iParam1]]->f_1 != 0;
}

void func_133(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_73(&(iParam0->f_1));
}

void func_134(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			func_238(Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			func_153(2);
			func_239(iParam0->f_378);
			func_240(1);
			func_241(iParam0);
			if (func_68() == 75)
			{
				func_242(-1801221395, 0, 0f, 0, 0, 0f, 0, 0);
				func_242(-1983417035, 1, 0f, 0, 0, 0f, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (uParam1->f_106[iVar0]->f_12 != -1)
				{
					func_243(Global_1899750, uParam1->f_106[iVar0]->f_11, iVar0, 0);
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, iParam0->f_5[iVar0]))
					{
						return;
					}
					func_130(uParam1, iVar0, iParam0->f_5[iVar0]->f_59, 1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, iParam0, iVar0))
				{
					func_138(iParam0->f_5[iVar0], 11, get_random_float_in_range(0f, 1f), 0);
				}
				iVar2 = func_245(iVar0, 0);
				func_246(uParam1, iVar2, -0.25f);
				iVar2 = (62 + iVar0);
				func_246(uParam1, iVar2, -0.25f);
				iVar0++;
			}
			func_241(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, iParam0->f_5[iVar0]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(iParam0->f_5[iParam0->f_378], 20, 0, 0);
			func_241(iParam0);
			break;
		case 3:
			if (!func_139(uParam1, iParam0->f_5[iParam0->f_378]))
			{
				return;
			}
			if (func_50() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (uParam1->f_106[iVar0]->f_12 != -1)
					{
						func_247(uParam1->f_1, uParam1->f_106[iVar0]->f_11, iVar0, Local_1.f_5[iVar0]->f_59, Local_1.f_5[iVar0]->f_1, uParam1->f_106[iVar0]->f_18, uParam1->f_106[iVar0]->f_19);
					}
					else
					{
						func_247(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					func_235(Local_1.f_5[iVar0]->f_59, &uVar8, &uVar3);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						iVar2 = ((0 + iVar0 * 4) + iVar1);
						if (does_entity_exist(uParam1->f_281[iVar2]->f_4))
						{
							func_248(uParam1->f_1, uParam1->f_281[iVar2]->f_4, iVar2, &(uVar8[iVar1]), &(uVar3[iVar1]));
							uParam1->f_281[iVar2]->f_4 = 0;
							func_66(uParam1, iVar2, 0);
						}
						iVar1++;
					}
					iVar0++;
				}
				iVar2 = 24;
				if (does_entity_exist(uParam1->f_281[iVar2]->f_4))
				{
					func_248(uParam1->f_1, uParam1->f_281[iVar2]->f_4, iVar2, 0, 0);
					uParam1->f_281[iVar2]->f_4 = 0;
					func_66(uParam1, iVar2, 0);
				}
				func_240(3);
				func_241(iParam0);
			}
			break;
		case 4:
			func_240(4);
			func_241(iParam0);
			break;
		case 5:
			if (func_50() == 5)
			{
				func_3(uParam1, 1, 0);
				func_21(uParam1, 10);
				func_72(iParam0);
			}
			break;
	}
}

int func_135(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar1] && uParam0->f_106[iVar1]->f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_136(var uParam0, var uParam1)
{
	uParam1->f_391 = (uParam1->f_391 - get_frame_time());
	if (uParam1->f_391 > 0f)
	{
		return;
	}
	if (*uParam1 < 6)
	{
		return;
	}
	if (*uParam1 >= 14)
	{
		return;
	}
	iVar0 = func_249(uParam0, -1);
	if (iVar0 != -1)
	{
		if (is_ambient_speech_playing(uParam0->f_106[iVar0]->f_11))
		{
			return;
		}
		if (func_250(uParam0, uParam0->f_106[iVar0]->f_11, "POKER_BANTER"))
		{
			uParam1->f_391 = get_random_float_in_range(5f, 20f);
		}
	}
}

int func_137(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iParam1 = (iParam1 + 1 % 6);
		if (uParam0->f_106[iParam1] && uParam0->f_106[iParam1]->f_1 == 5)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = 0f;
}

bool func_139(var uParam0, var uParam1)
{
	if (!func_112(uParam0, uParam1->f_5))
	{
		return true;
	}
	return ((uParam1->f_3 == 100 || *uParam1 == 1) || *uParam1 == 0);
}

bool func_140(var uParam0, var uParam1)
{
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + get_random_float_in_range(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378], 8, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_141(var uParam0, var uParam1)
{
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + get_random_float_in_range(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378], 9, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_142(var uParam0, var uParam1)
{
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + get_random_float_in_range(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378], 10, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_143(var uParam0, var uParam1)
{
	iVar2 = uParam0->f_388;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					if (iVar2 == uParam0->f_388)
					{
						func_138(uParam0->f_5[iVar2], 15, fVar1, 0);
					}
					else
					{
						func_138(uParam0->f_5[iVar2], 16, fVar1, 0);
					}
					fVar1 = (fVar1 + get_random_float_in_range(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!func_139(uParam1, uParam0->f_5[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_144(var uParam0, var uParam1, int iParam2)
{
	if (!is_bit_set(uParam1->f_386, iParam2))
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

bool func_145(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				func_241(uParam0);
			}
			break;
		case 1:
			func_138(uParam0->f_5[uParam0->f_378], 20, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				return false;
			}
			uParam0->f_379 = uParam0->f_378;
			uParam0->f_378 = func_137(uParam1, uParam0->f_379);
			func_138(uParam0->f_5[uParam0->f_379], 18, 0, 0);
			func_241(uParam0);
			break;
		case 3:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_379]))
			{
				return false;
			}
			func_138(uParam0->f_5[uParam0->f_378], 19, 0, 0);
			func_241(uParam0);
			break;
		case 4:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_378]))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_146(int iParam0, int iParam1)
{
	func_242(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

int func_148(int iParam0, int iParam1)
{
	if (Global_1899528->f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return &(Global_1899528->f_61.f_101[iParam1]);
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_281[iParam1]->f_4))
	{
		uParam0->f_281[iParam1]->f_4 = iParam2;
	}
	if (does_entity_exist(uParam0->f_281[iParam1]->f_4))
	{
		uParam0->f_281[iParam1] = 5;
		uParam0->f_281[iParam1]->f_13 = 0;
		uParam0->f_281[iParam1]->f_1 = get_entity_model(uParam0->f_281[iParam1]->f_4);
		uParam0->f_281[iParam1]->f_16 = { get_entity_coords(uParam0->f_281[iParam1]->f_4, true, false) };
		uParam0->f_281[iParam1]->f_19 = { get_entity_rotation(uParam0->f_281[iParam1]->f_4, 2) };
		uParam0->f_281[iParam1]->f_23 = to_float(get_entity_alpha(uParam0->f_281[iParam1]->f_4));
		if (!decor_exist_on(uParam0->f_281[iParam1]->f_4, "MinigameObject"))
		{
			decor_set_bool(uParam0->f_281[iParam1]->f_4, "MinigameObject", true);
		}
	}
}

var func_150()
{
	return Global_1899528->f_61.f_5;
}

void func_151()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528->f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_152()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528->f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_153(int iParam0)
{
	Global_1899528->f_61.f_1 = iParam0;
}

void func_154(int iParam0)
{
	Global_1899528->f_61.f_2 = iParam0;
}

int func_155()
{
	return Global_1899528->f_61.f_1;
}

bool func_156(var uParam0)
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

bool func_157(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	fVar8 = (0.25f * 2f);
	if (!func_226(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = create_itemset(true);
	if (!is_itemset_valid(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_116(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = _0x886171a12f400b89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar7, iVar4));
		if (func_252(iParam0, iVar3) || iParam8 == 1)
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

bool func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return &uParam0->f_1938[iParam1] >= 4;
}

void func_159(var uParam0, int iParam1)
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

int func_160(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (is_string_null_or_empty(&(uParam0->f_281[iParam1]->f_5)))
	{
		return;
	}
	if (uParam0->f_281[iParam1]->f_3 == -1)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_281[iParam1]->f_4))
	{
		vVar0 = { get_entity_coords(uParam0->f_281[iParam1]->f_4, true, false) };
		vVar3 = { get_entity_rotation(uParam0->f_281[iParam1]->f_4, 2) };
		if (_does_anim_scene_exist(uParam0->f_281[iParam1]->f_3))
		{
			remove_anim_scene_entity(uParam0->f_281[iParam1]->f_3, &(uParam0->f_281[iParam1]->f_5), uParam0->f_281[iParam1]->f_4);
		}
		if (uParam0->f_281[iParam1]->f_15)
		{
			_0xc1193521e3b9fadd(uParam0->f_281[iParam1]->f_4, 0);
			uParam0->f_281[iParam1]->f_15 = 0;
		}
		if (bParam2)
		{
			func_162(uParam0, iParam1);
		}
		else if (!is_entity_attached(uParam0->f_281[iParam1]->f_4))
		{
			freeze_entity_position(uParam0->f_281[iParam1]->f_4, true);
			set_entity_coords(uParam0->f_281[iParam1]->f_4, vVar0, true, false, false, true);
			set_entity_rotation(uParam0->f_281[iParam1]->f_4, vVar3, 2, true);
			set_entity_collision(uParam0->f_281[iParam1]->f_4, false, false);
		}
	}
	uParam0->f_281[iParam1]->f_3 = -1;
	StringCopy(&(uParam0->f_281[iParam1]->f_5), "", 64);
}

void func_162(var uParam0, int iParam1)
{
	set_entity_collision(uParam0->f_281[iParam1]->f_4, true, false);
	if (is_entity_attached(uParam0->f_281[iParam1]->f_4))
	{
		func_253(uParam0->f_281[iParam1]->f_4, 1, 1);
	}
	freeze_entity_position(uParam0->f_281[iParam1]->f_4, false);
	set_entity_dynamic(uParam0->f_281[iParam1]->f_4, true);
	activate_physics(uParam0->f_281[iParam1]->f_4);
	set_entity_has_gravity(uParam0->f_281[iParam1]->f_4, true);
}

void func_163(int* iParam0, bool bParam1, bool bParam2)
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

void func_164(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_23[iParam1]->f_1 = iParam2;
	uParam0->f_23[iParam1]->f_2 = { func_254(sParam3) };
}

int func_165(int iParam0, int iParam1)
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

void func_166(var uParam0)
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

void func_167(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_78() - fParam1);
	func_255(uParam0, 1);
	func_256(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_168(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_169(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_257(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_171(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_172()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

var func_173(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_174(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_175(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_176(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_177(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_258(iParam1))
		{
			func_259(iParam0, 41788943);
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
			func_260(iParam0, 0, 1);
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
			func_261(iParam0, 0);
			bVar0 = true;
		}
		func_262(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_178(int iParam0)
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

int func_179(int iParam0, int iParam1, int iParam2)
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

bool func_180(int iParam0)
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

int func_181(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
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
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				if (iParam2 == 316456870)
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1043092861:
			case -855293722:
			case -216756988:
			case 368759504:
			case 1321911407:
			case 1633413521:
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				if (iParam2 == -855293722)
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case 68127406:
			case 629329300:
			case 1371088384:
			case 2106064285:
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				break;
			case 912158539:
			case 1263868216:
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 61);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
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
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
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
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
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
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
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
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
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
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
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
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 28);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
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
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 15);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
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
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case 1839440580:
			case 1934601404:
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_182(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(uParam0, iParam1);
}

int func_183(int iParam0, int iParam1, var uParam2, int iParam3)
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
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -951746023:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				break;
			case -2087759666:
			case -1789856687:
			case 1124384604:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case -1144663425:
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case 1901354405:
				func_263(uParam2, 82);
				*iParam3++;
				break;
			case 1022365451:
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case 1471623370:
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case 1767420034:
				func_263(uParam2, 86);
				*iParam3++;
				break;
			case 1536283262:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case -1938511850:
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				break;
			case -1345652903:
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				break;
			case -1796561521:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				break;
			case -1684080969:
				func_263(uParam2, 80);
				*iParam3++;
				break;
			case -956061568:
			case 918972034:
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			case -989220241:
			case -607723543:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case 549598920:
			case 1854820959:
			case 2133848994:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 34);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				break;
			case -439429058:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case 480011144:
			case 966958492:
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 74);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case -1766535683:
			case -669394275:
				func_263(uParam2, 87);
				*iParam3++;
				func_263(uParam2, 89);
				*iParam3++;
				func_263(uParam2, 90);
				*iParam3++;
				func_263(uParam2, 91);
				*iParam3++;
				break;
			case 964905443:
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_184(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "PedSeatedForMinigame", true);
}

void func_185(var uParam0)
{
	func_264(uParam0, uParam0->f_3 + 1);
}

bool func_186(int iParam0, int iParam1)
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

float func_187(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_188(var uParam0, vector3 vParam1, var uParam4)
{
	fVar2 = -1f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!is_bit_set(uParam0->f_94, iVar0) && !is_bit_set(uParam0->f_93, iVar0))
		{
			func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_265(vParam1, vVar3);
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

void func_189(var uParam0)
{
	uParam0->f_3 = 100;
}

bool func_190()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
		case 3:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_FEMALE";
		case 2:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_RELAXED";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
}

bool func_192(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_159(uParam0->f_1938[iParam1], 1);
	if (uParam0->f_1938[iParam1]->f_1 == -1 || !_does_anim_scene_exist(uParam0->f_1938[iParam1]->f_1))
	{
		uParam0->f_1938[iParam1]->f_1 = _create_anim_scene(sParam2, iParam4, sParam3, false, true);
		if (!_does_anim_scene_exist(uParam0->f_1938[iParam1]->f_1))
		{
			return false;
		}
		if (is_string_null_or_empty(sParam3))
		{
		}
		load_anim_scene(uParam0->f_1938[iParam1]->f_1);
	}
	StringCopy(&(uParam0->f_1938[iParam1]->f_12), sParam3, 64);
	if (_does_anim_scene_exist(uParam0->f_1938[iParam1]->f_1))
	{
		if (is_string_null_or_empty(sParam3))
		{
		}
		StringCopy(&(uParam0->f_1938[iParam1]->f_4), sParam2, 64);
		func_159(uParam0->f_1938[iParam1], 2);
		return true;
	}
	return false;
}

int func_193(int iParam0, int iParam1)
{
	return (iParam1 / func_266(iParam0, iParam1));
}

bool func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return &uParam0->f_1938[iParam1] == 4;
}

bool func_195(var uParam0, int iParam1, float fParam2)
{
	return func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, fParam2, 0);
}

int func_196(var uParam0, int iParam1, var uParam2)
{
	return func_267(uParam0->f_1, uParam0->f_6, iParam1, uParam2);
}

int func_197(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (is_entity_dead(uParam2->f_11))
	{
		return 0;
	}
	if (!func_268(uParam0, iParam1, uParam2->f_11) && _0x3ab6c7b0bb0df4b1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	set_bit(&(uParam0->f_1938[uParam2->f_20]->f_3), uParam2->f_13);
	if (_get_anim_scene_ped(uParam0->f_1938[iParam1]->f_1, sParam3, false) != uParam2->f_11)
	{
		set_anim_scene_entity(uParam0->f_1938[iParam1]->f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_198(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (!_is_anim_scene_started(uParam0->f_1938[iParam1]->f_1, false))
	{
		set_anim_scene_origin(uParam0->f_1938[iParam1]->f_1, vParam2, vParam5, 2);
		start_anim_scene(uParam0->f_1938[iParam1]->f_1);
		uParam0->f_1938[iParam1]->f_20 = { uParam0->f_1938[iParam1]->f_12 };
		StringCopy(&(uParam0->f_1938[iParam1]->f_12), "", 64);
		uParam0->f_1938[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_281[iVar0]->f_4, 1);
				uParam0->f_281[iVar0]->f_14 = 0;
				uParam0->f_281[iVar0]->f_15 = 1;
			}
			iVar0++;
		}
		func_159(uParam0->f_1938[iParam1], 5);
		return true;
	}
	if (!is_string_null_or_empty(&(uParam0->f_1938[iParam1]->f_12)))
	{
		if (!_0xdf7b5144e25cd3fe(uParam0->f_1938[iParam1]->f_1, &(uParam0->f_1938[iParam1]->f_12)))
		{
			return false;
		}
		if (!_0x23e33cb9f4a3f547(uParam0->f_1938[iParam1]->f_1, &(uParam0->f_1938[iParam1]->f_12)))
		{
			return false;
		}
		if (!is_string_null_or_empty(&(uParam0->f_1938[iParam1]->f_20)))
		{
			_0xae6ada8fe7e84acc(uParam0->f_1938[iParam1]->f_1, &(uParam0->f_1938[iParam1]->f_20));
		}
		_set_anim_scene_playback_list_bool(uParam0->f_1938[iParam1]->f_1, &(uParam0->f_1938[iParam1]->f_12), true);
		uParam0->f_1938[iParam1]->f_20 = { uParam0->f_1938[iParam1]->f_12 };
		StringCopy(&(uParam0->f_1938[iParam1]->f_12), "", 64);
		uParam0->f_1938[iParam1]->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0]->f_14 == 1)
			{
				_0xc1193521e3b9fadd(uParam0->f_281[iVar0]->f_4, 1);
				uParam0->f_281[iVar0]->f_14 = 0;
			}
			iVar0++;
		}
		func_159(uParam0->f_1938[iParam1], 5);
		return true;
	}
	return false;
}

bool func_199(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0] && uParam0->f_106[iVar0]->f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_200(var uParam0, var uParam1, bool bParam2)
{
	if (func_269(uParam0, &Local_1) && bParam2)
	{
		uParam0->f_2151 = 1;
	}
	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
}

void func_201(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0]->f_3 == uParam0->f_1938[iParam1]->f_1)
		{
			func_161(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	sVar8 = func_191(uParam2->f_5[iVar0]->f_1);
	switch (uParam1->f_3)
	{
		case 0:
			func_270(uParam2->f_5[iVar0], 1);
			break;
		case 1:
			if (func_192(uParam0, iVar1, sVar8, "PBL_NoCardsLoop", 2))
			{
				func_270(uParam2->f_5[iVar0], 1);
			}
			break;
		case 2:
			if (func_194(uParam0, iVar1))
			{
				func_195(uParam0, iVar0, &uVar2);
				func_196(uParam0, iVar0, &vVar5);
				func_197(uParam0, iVar1, uParam1, "Seat_01");
				if (func_198(uParam0, iVar1, uParam0->f_3, vVar5))
				{
					func_271(uParam2->f_5[iVar0], 1);
				}
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	uVar4 = 52;
	iVar118 = uParam1->f_12;
	iVar119 = (0 + iVar118);
	iVar120 = 6;
	if (iVar118 < 0 || iVar118 >= 6)
	{
		return;
	}
	sVar122 = func_191(uParam2->f_5[iVar118]->f_1);
	switch (uParam2->f_5[iVar118]->f_3)
	{
		case 0:
			uParam0->f_2149 = 1;
			func_272(&uVar4);
			func_273(&uVar4);
			func_166(&(uParam2->f_392));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_166(&(uParam2->f_5[iVar0]->f_6));
				uParam2->f_5[iVar0]->f_30.f_24 = -1;
				func_166(&(uParam2->f_5[iVar0]->f_30));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_274(&uVar4, &uVar2))
				{
					func_275(&(uParam2->f_392), &uVar2);
				}
				iVar0++;
			}
			uParam2->f_388 = -1;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&(uParam2->f_5[iVar0]->f_6), &uVar2);
					}
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&(uParam2->f_5[iVar0]->f_6), &uVar2);
					}
					if (_0x32a7c216344d623b(&(uParam2->f_5[iVar0]->f_6), &(uParam2->f_392), &(uParam2->f_5[iVar0]->f_30)))
					{
					}
					if (uParam2->f_388 != -1)
					{
						iVar1 = func_276(&(uParam2->f_5[uParam2->f_388]->f_30), &(uParam2->f_5[iVar0]->f_30));
						if (iVar1 == -1)
						{
							uParam2->f_388 = iVar0;
						}
					}
					else
					{
						uParam2->f_388 = iVar0;
					}
					func_130(uParam0, iVar0, uParam2->f_5[iVar0]->f_59, 1);
				}
				iVar0++;
			}
			if (uParam2->f_388 != -1)
			{
			}
			func_277(uParam0, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar121 = (25 + iVar0);
				func_65(uParam0, iVar121);
				iVar0++;
			}
			func_270(uParam2->f_5[iVar118], 1);
			break;
		case 1:
			func_278(uParam0, uParam2->f_378);
			if (func_192(uParam0, iVar119, sVar122, "PBL_ShuffleA", 2))
			{
				func_270(uParam2->f_5[iVar118], 1);
			}
			break;
		case 2:
			func_125(uParam0, uParam2->f_378);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_279(&iVar111, *uParam2->f_5[iVar0]->f_6[0], iLocal_0, 0))
					{
						iVar121 = (32 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
					if (func_279(&iVar111, *uParam2->f_5[iVar0]->f_6[1], iLocal_0, 0))
					{
						iVar121 = (38 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_279(&iVar111, *uParam2->f_392[iVar0], iLocal_0, 0))
				{
					iVar121 = (25 + iVar0);
					func_131(uParam0, iVar121, iVar111, 0, 1);
				}
				iVar0++;
			}
			func_270(uParam2->f_5[iVar118], 1);
			break;
		case 3:
			if (func_194(uParam0, iVar119) && func_47(uParam0))
			{
				func_280(uParam0, iVar119, 24, "Deck", 0);
				func_195(uParam0, uParam1->f_12, &vVar115);
				func_196(uParam0, uParam1->f_12, &vVar112);
				func_197(uParam0, iVar119, uParam1, "Seat_01");
				if (func_198(uParam0, iVar119, vVar115, vVar112))
				{
					func_270(uParam2->f_5[iVar118], 1);
				}
			}
			break;
		case 4:
			if (func_281(uParam0, iVar119) >= 1f)
			{
				func_270(uParam2->f_5[iVar118], 1);
			}
			break;
		case 5:
			if (func_282(uParam0, uParam2))
			{
				func_270(uParam2->f_5[iVar118], 1);
			}
			break;
		case 6:
			if (func_281(uParam0, iVar120) >= 1f || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_112(uParam0, iVar0))
					{
						if (iVar0 == iVar118)
						{
							func_138(uParam2->f_5[iVar0], 7, 0, 0);
						}
						else if (!func_22(uParam0->f_8))
						{
							func_138(uParam2->f_5[iVar0], 7, get_random_float_in_range(0f, 1f), 0);
						}
						else
						{
							func_271(uParam2->f_5[iVar0], 1);
						}
						uParam2->f_5[iVar0]->f_57 = 1;
					}
					else
					{
						uParam2->f_5[iVar0]->f_57 = 0;
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	iVar3 = uParam1->f_12;
	iVar4 = (0 + iVar3);
	if (iVar3 < 0 || iVar3 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar3]->f_1);
	iVar1 = func_245(iVar3, 0);
	switch (uParam2->f_5[iVar3]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar3]->f_2 > uParam2->f_5[iVar3]->f_4)
			{
				if (func_192(uParam0, iVar4, sVar11, "PBL_BlindA", 2))
				{
					func_130(uParam0, iVar3, uParam2->f_5[iVar3]->f_59, 1);
					if (!does_entity_exist(uParam0->f_281[func_126(iVar3)]->f_4))
					{
						func_283(uParam0, iVar3, uParam2->f_5[iVar3]->f_58, 1);
					}
					func_284(uParam0, iVar3, 0, &vVar5, &vVar8, 0, 1);
					func_65(uParam0, iVar1);
					func_129(uParam0, iVar1, func_128(), vVar5, vVar8, 0, 1);
					func_270(uParam2->f_5[iVar3], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar4))
			{
				return;
			}
			func_130(uParam0, iVar3, uParam2->f_5[iVar3]->f_59, 1);
			if (uParam2->f_385 == iVar3)
			{
				iVar0 = 1;
				uParam2->f_389 = iVar0;
			}
			else
			{
				iVar0 = 2;
				uParam2->f_389 = iVar0;
				uParam2->f_390 = iVar0;
			}
			uParam2->f_5[iVar3]->f_58 = (uParam2->f_5[iVar3]->f_58 + iVar0);
			uParam2->f_5[iVar3]->f_59 = (uParam2->f_5[iVar3]->f_59 - iVar0);
			if (uParam2->f_5[iVar3]->f_59 < 0)
			{
				uParam2->f_5[iVar3]->f_59 = 0;
			}
			iVar2 = func_236(0, iVar0, 10);
			iVar2 = func_285(iVar2, 1, 4);
			func_286(uParam0->f_281[iVar1]->f_4, iVar2, 4);
			func_287(uParam0, iVar1, 1);
			func_280(uParam0, iVar4, iVar1, func_288(44), 0);
			func_197(uParam0, iVar4, uParam0->f_106[iVar3], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar5);
			func_196(uParam0, uParam2->f_378, &vVar8);
			if (func_198(uParam0, iVar4, uParam0->f_3, vVar8))
			{
				func_289(uParam0, uParam1->f_11);
				func_270(uParam2->f_5[iVar3], 1);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar3], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar3], 1);
				return;
			}
			if (!func_291(uParam0, iVar4, "BlindA"))
			{
				func_270(uParam2->f_5[iVar3], 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar3]->f_2 > 0.01f)
			{
				vVar5 = { get_entity_coords(uParam0->f_281[iVar1]->f_4, true, false) };
				vVar8 = { get_entity_rotation(uParam0->f_281[iVar1]->f_4, 2) };
				func_292(uParam0, iVar3, uParam2->f_5[iVar3]->f_58, vVar5, vVar8, 1);
				func_65(uParam0, iVar1);
				uParam2->f_5[iVar3]->f_56 = 1;
				func_271(uParam2->f_5[iVar3], 1);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam1->f_12;
	iVar7 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar0]->f_1);
	switch (uParam2->f_5[iVar0]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar0]->f_2 > uParam2->f_5[iVar0]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_CheckA", 2))
				{
					func_270(uParam2->f_5[iVar0], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar0), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar0), func_288(38), 0);
				func_195(uParam0, uParam2->f_378, &uVar1);
				func_196(uParam0, uParam2->f_378, &vVar4);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar4))
				{
					func_270(uParam2->f_5[iVar0], 1);
					func_293(uParam0, uParam1->f_11);
				}
			}
			break;
		case 2:
			if (func_290(uParam1, "ActionDone") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar0], 1, 0, 0);
				return;
			}
			if (func_281(uParam0, iVar7) > 0.25f)
			{
				func_138(uParam2->f_5[iVar0], 1, 0, 0);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar0], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_271(uParam2->f_5[iVar0], 1);
			}
			break;
	}
}

void func_206(var uParam0, var uParam1, var uParam2)
{
	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4]->f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4]->f_61);
	switch (uParam2->f_5[iVar4]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4]->f_2 > uParam2->f_5[iVar4]->f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4]->f_59, 1);
					if (!does_entity_exist(uParam0->f_281[func_126(iVar4)]->f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4]->f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(uParam2->f_5[iVar4], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4]->f_59, 1);
			if (uParam2->f_5[iVar4]->f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4]->f_59;
			}
			iVar0 = get_random_int_in_range(1, iVar1);
			if (uParam2->f_5[iVar4]->f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4]->f_58);
			}
			uParam2->f_5[iVar4]->f_58 = (uParam2->f_5[iVar4]->f_58 + iVar0);
			uParam2->f_5[iVar4]->f_59 = (uParam2->f_5[iVar4]->f_59 - iVar0);
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286(uParam0->f_281[iVar2]->f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4]->f_61)), 0);
			func_197(uParam0, iVar5, uParam0->f_106[iVar4], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(uParam2->f_5[iVar4], 1);
				func_289(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar4], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar4], 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(uParam2->f_5[iVar4], 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4]->f_2 > 0.01f)
			{
				vVar6 = { get_entity_coords(uParam0->f_281[iVar2]->f_4, true, false) };
				vVar9 = { get_entity_rotation(uParam0->f_281[iVar2]->f_4, 2) };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4]->f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4]->f_56 = 1;
				func_271(uParam2->f_5[iVar4], 1);
			}
			break;
	}
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4]->f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4]->f_61);
	switch (uParam2->f_5[iVar4]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4]->f_2 > uParam2->f_5[iVar4]->f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4]->f_59, 1);
					if (!does_entity_exist(uParam0->f_281[func_126(iVar4)]->f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4]->f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(uParam2->f_5[iVar4], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4]->f_59, 1);
			if (uParam2->f_5[iVar4]->f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4]->f_59;
			}
			iVar0 = get_random_int_in_range(1, iVar1);
			if (uParam2->f_5[iVar4]->f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4]->f_58);
			}
			uParam2->f_5[iVar4]->f_58 = (uParam2->f_5[iVar4]->f_58 + iVar0);
			uParam2->f_5[iVar4]->f_59 = (uParam2->f_5[iVar4]->f_59 - iVar0);
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286(uParam0->f_281[iVar2]->f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4]->f_61)), 0);
			func_197(uParam0, iVar5, uParam0->f_106[iVar4], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(uParam2->f_5[iVar4], 1);
				func_294(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar4], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar4], 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(uParam2->f_5[iVar4], 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4]->f_2 > 0.01f)
			{
				vVar6 = { get_entity_coords(uParam0->f_281[iVar2]->f_4, true, false) };
				vVar9 = { get_entity_rotation(uParam0->f_281[iVar2]->f_4, 2) };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4]->f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4]->f_56 = 1;
				func_271(uParam2->f_5[iVar4], 1);
			}
			break;
	}
}

void func_208(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCards", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCards"))
			{
				func_270(uParam2->f_5[iVar6], 1);
			}
			break;
		case 3:
			if (!func_291(uParam0, iVar7, "PickupCards") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_271(uParam2->f_5[iVar6], 1);
			}
			break;
	}
}

void func_209(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCardsDealer", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCardsDealer"))
			{
				func_270(uParam2->f_5[iVar6], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_271(uParam2->f_5[iVar6], 1);
			}
			break;
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	iVar9 = uParam1->f_12;
	iVar10 = (0 + iVar9);
	if (iVar9 < 0 || iVar9 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar9]->f_1);
	switch (uParam2->f_5[iVar9]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar9]->f_2 > uParam2->f_5[iVar9]->f_4)
			{
				if (func_192(uParam0, iVar10, sVar11, "PBL_Flop", 2))
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						if (func_279(&iVar8, *uParam2->f_392[iVar6], iLocal_0, 0))
						{
							func_131(uParam0, iVar7, iVar8, 0, 1);
						}
						iVar6++;
					}
					func_270(uParam2->f_5[iVar9], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar10) && func_47(uParam0))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					iVar7 = (25 + iVar6);
					func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
					iVar6++;
				}
				iVar7 = 24;
				func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
				func_197(uParam0, iVar10, uParam0->f_106[iVar9], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar10, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar9], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_380 = 1;
				func_138(uParam2->f_5[iVar9], 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_380 = 1;
				func_271(uParam2->f_5[iVar9], 1);
				return;
			}
			if (!func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar9], 1);
			}
			break;
		case 3:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_380 = 1;
				func_138(uParam2->f_5[iVar9], 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				uParam2->f_380 = 1;
				func_271(uParam2->f_5[iVar9], 1);
			}
			break;
	}
}

void func_211(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_Turn", 2))
				{
					iVar8 = 28;
					if (func_279(&iVar9, *uParam2->f_392[3], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 28;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_381 = 1;
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_381 = 1;
				func_271(uParam2->f_5[iVar6], 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar6], 1);
			}
			break;
		case 3:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_381 = 1;
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_381 = 1;
				func_271(uParam2->f_5[iVar6], 1);
			}
			break;
	}
}

void func_212(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_River", 2))
				{
					iVar8 = 29;
					if (func_279(&iVar9, *uParam2->f_392[4], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 29;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6], 1);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6], 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar6], 1);
			}
			break;
		case 3:
			if (has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6], 1);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6], 1);
			}
			break;
	}
}

void func_213(var uParam0, var uParam1, var uParam2)
{
	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar7]->f_2 > uParam2->f_5[iVar7]->f_4)
			{
				uParam2->f_5[iVar7]->f_57 = 0;
				if (func_296(uParam0, uParam2->f_378, iVar7))
				{
					func_270(uParam2->f_5[iVar7], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, uParam0->f_106[iVar7], "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar1);
				func_196(uParam0, uParam1->f_12, &vVar4);
				if (func_198(uParam0, iVar8, uParam0->f_3, vVar4))
				{
					func_270(uParam2->f_5[iVar7], 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar7], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				iVar0 = (32 + iVar7);
				vVar1 = { get_entity_coords(uParam0->f_281[iVar0]->f_4, true, false) };
				vVar4 = { get_entity_rotation(uParam0->f_281[iVar0]->f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar1, vVar4, 0, 0);
				iVar0 = (38 + iVar7);
				vVar1 = { get_entity_coords(uParam0->f_281[iVar0]->f_4, true, false) };
				vVar4 = { get_entity_rotation(uParam0->f_281[iVar0]->f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar1, vVar4, 0, 0);
				func_270(uParam2->f_5[iVar7], 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7]->f_57 = 0;
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(uParam2->f_5[iVar7], 1, 0, 0);
			}
			break;
	}
}

void func_214(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_297(uParam0, iVar6, uParam2->f_378))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA"))
			{
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RecieveDeck", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if ((func_291(uParam0, iVar7, "NoCardsLoopA") || func_291(uParam0, iVar7, "RecieveDeckExit")) || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				if (func_190())
				{
					func_298(uParam0, uParam1->f_11);
				}
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_216(var uParam0, var uParam1, var uParam2)
{
	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7]->f_3)
	{
		case 0:
			uParam2->f_5[iVar7]->f_57 = 0;
			if (uParam2->f_5[iVar7]->f_2 > uParam2->f_5[iVar7]->f_4)
			{
				if (func_299(uParam0, uParam2->f_378, iVar7))
				{
					func_270(uParam2->f_5[iVar7], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, uParam0->f_106[iVar7], "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar8, vVar0, vVar3))
				{
					func_270(uParam2->f_5[iVar7], 1);
					if (get_random_int_in_range(0, 3) == 2)
					{
						func_300(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar7], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				iVar6 = (32 + iVar7);
				vVar0 = { get_entity_coords(uParam0->f_281[iVar6]->f_4, true, false) };
				vVar3 = { get_entity_rotation(uParam0->f_281[iVar6]->f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar0, vVar3, 0, 0);
				iVar6 = (38 + iVar7);
				vVar0 = { get_entity_coords(uParam0->f_281[iVar6]->f_4, true, false) };
				vVar3 = { get_entity_rotation(uParam0->f_281[iVar6]->f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar0, vVar3, 0, 0);
				func_270(uParam2->f_5[iVar7], 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7]->f_57 = 0;
				clear_bit(&(uParam2->f_386), iVar7);
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(uParam2->f_5[iVar7], 1, 0, 0);
			}
			break;
	}
}

void func_217(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_LossA", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_218(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_WinA", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_219(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealLoss", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
					if (func_190())
					{
						func_301(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, var uParam2)
{
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6]->f_1);
	switch (uParam2->f_5[iVar6]->f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6]->f_2 > uParam2->f_5[iVar6]->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealWin", 2))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6], 1, 0, 0);
			}
			break;
	}
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	iVar2 = uParam1->f_12;
	iVar9 = (0 + iVar2);
	switch (uParam2->f_5[iVar2]->f_3)
	{
		case 0:
			uParam2->f_388 = iVar2;
			if (uParam2->f_5[iVar2]->f_2 < uParam2->f_5[iVar2]->f_4)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = (62 + iVar0);
				func_65(uParam0, iVar1);
				if (func_132(uParam0, iVar0))
				{
					func_127(uParam0, iVar0, 0, &vVar3, &vVar6, 0, 1);
					func_302(uParam0, iVar1, func_128(), vVar3, vVar6);
					func_283(uParam0, iVar0, uParam2->f_5[iVar2]->f_58, 1);
				}
				iVar0++;
			}
			if (func_303(uParam0, iVar2))
			{
				func_270(uParam2->f_5[iVar2], 1);
			}
			break;
		case 1:
			if (func_304(uParam0, uParam2))
			{
				func_270(uParam2->f_5[iVar2], 1);
			}
			break;
		case 2:
			if (func_291(uParam0, iVar9, "TakePotA"))
			{
				func_305(uParam0, uParam1->f_11);
				func_270(uParam2->f_5[iVar2], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || func_281(uParam0, iVar9) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = func_245(iVar0, 0);
					func_246(uParam0, iVar1, -0.5f);
					iVar1 = (62 + iVar0);
					func_246(uParam0, iVar1, -0.5f);
					uParam2->f_5[iVar0]->f_58 = 0;
					iVar0++;
				}
				func_138(uParam2->f_5[iVar2], 1, 0, 0);
			}
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	iVar8 = uParam1->f_12;
	iVar9 = (0 + iVar8);
	if (iVar8 < 0 || iVar8 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar8]->f_1);
	switch (uParam2->f_5[iVar8]->f_3)
	{
		case 0:
			if (uParam0->f_2149 == 0)
			{
				func_138(uParam2->f_5[iVar8], 1, 0, 0);
				return;
			}
			if (uParam2->f_5[iVar8]->f_2 > uParam2->f_5[iVar8]->f_4)
			{
				if (func_192(uParam0, iVar9, sVar10, "PBL_Cleanup", 2))
				{
					func_270(uParam2->f_5[iVar8], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar9))
			{
				if (Local_1.f_380)
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
						iVar6++;
					}
				}
				else
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_287(uParam0, iVar7, 0);
						iVar6++;
					}
				}
				if (Local_1.f_381)
				{
					iVar7 = 28;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 28;
					func_287(uParam0, iVar7, 0);
				}
				if (Local_1.f_382)
				{
					iVar7 = 29;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 29;
					func_287(uParam0, iVar7, 0);
				}
				iVar7 = 30;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				iVar7 = 31;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				if (uParam2->f_5[iVar8]->f_57 == 1)
				{
					func_280(uParam0, iVar9, (32 + iVar8), func_288(32), 0);
					func_280(uParam0, iVar9, (38 + iVar8), func_288(38), 0);
				}
				func_197(uParam0, iVar9, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar9, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar8], 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar9, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar8], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || has_anim_event_fired(uParam1->f_11, 1426724047))
			{
				iVar6 = 0;
				while (iVar6 < 7)
				{
					iVar7 = (25 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 6)
				{
					iVar7 = (32 + iVar6);
					func_65(uParam0, iVar7);
					iVar7 = (38 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				func_125(uParam0, iVar8);
				uParam2->f_380 = 0;
				uParam2->f_381 = 0;
				uParam2->f_382 = 0;
				uParam0->f_2149 = 0;
				func_138(uParam2->f_5[iVar8], 1, 0, 0);
			}
			break;
	}
}

void func_223(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_remove(iParam0, "PedSeatedForMinigame");
}

char* func_224()
{
	return "unnamed";
}

void func_225(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_73(&(uParam0->f_12));
}

bool func_226(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*fParam6 = { _get_object_offset_from_coords(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (get_ground_z_for_3d_coord(*fParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			fParam6->f_2 = uVar3;
		}
	}
	return true;
}

bool func_227(int iParam0)
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

bool func_228(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
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
	if (!func_229(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*iParam7 = (fParam4 + fVar3);
	if (*iParam7 > 360f)
	{
		*iParam7 = (*iParam7 - 360f);
	}
	if (*iParam7 < -360f)
	{
		*iParam7 = (*iParam7 + 360f);
	}
	return true;
}

bool func_229(int iParam0, int iParam1, float fParam2)
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

int func_230(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam5)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	Var3 = 14;
	Var3.f_1 = 2;
	func_279(&uVar2, Var3, iLocal_0, 0);
	switch (iVar0)
	{
		case 24:
			if (func_307(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return 1647372804;
		case 68:
			return func_128();
		case 25:
			Var3 = 11;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 26:
			Var3 = 8;
			Var3.f_1 = 2;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 27:
			Var3 = 3;
			Var3.f_1 = 1;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 28:
			Var3 = 4;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 29:
			Var3 = 9;
			Var3.f_1 = 3;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 30:
			return uVar2;
		case 31:
			return uVar2;
		case 32:
			return uVar2;
		case 38:
			return uVar2;
		case 33:
			return uVar2;
		case 39:
			return uVar2;
		case 34:
			return uVar2;
		case 40:
			return uVar2;
		case 35:
			return uVar2;
		case 41:
			return uVar2;
		case 36:
			return uVar2;
		case 42:
			return uVar2;
		case 37:
			return uVar2;
		case 43:
			return uVar2;
		default:
			break;
	}
	return func_128();
}

void func_232(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vVar0.x = ((vParam4.x * cos(fParam3)) - (vParam4.y * sin(fParam3)));
	vVar0.f_1 = ((vParam4.x * sin(fParam3)) + (vParam4.y * cos(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

bool func_233(int iParam0, int iParam1)
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

bool func_234(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_235(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= func_308(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (func_308(iVar2) * 3 + func_308(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (func_308(iVar2) * 2 + func_308(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (func_308(iVar2) * 1 + func_308(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = func_309(iParam0, (iVar0 * func_308(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
		}
	}
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	fVar0 = (to_float(func_308(iParam0)) / to_float(10));
	iVar1 = ceil((to_float(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar6 = func_310(iParam1, iParam2);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_284(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	if (does_entity_exist(uParam0->f_281[iVar6]->f_4))
	{
		set_entity_coords(uParam0->f_281[iVar6]->f_4, vVar0, true, false, false, true);
		set_entity_rotation(uParam0->f_281[iVar6]->f_4, vVar3, 2, true);
		func_311(uParam0->f_281[iVar6]->f_4, iParam4, iParam5);
		func_312(uParam0->f_281[iVar6]->f_4, iParam3);
		set_entity_visible(uParam0->f_281[iVar6]->f_4, bParam6);
	}
	else
	{
		func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
		func_311(uParam0->f_281[iVar6]->f_4, iParam4, iParam5);
		func_312(uParam0->f_281[iVar6]->f_4, iParam3);
	}
}

void func_238(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

void func_239(var uParam0)
{
	Global_1899528->f_61.f_5 = uParam0;
}

void func_240(int iParam0)
{
	Global_1899528->f_61 = iParam0;
}

void func_241(int iParam0)
{
	func_313(iParam0, iParam0->f_4 + 1);
}

void func_242(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_314(iParam0, 0, 0);
	if (func_315(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_316(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_317(iParam0, 1);
			}
			else
			{
				func_318(iParam0, 1);
			}
		}
		else
		{
			func_319(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_320())
	{
	}
	else if (network_is_in_session())
	{
	}
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_244(var uParam0, int iParam1, int iParam2)
{
	if (!is_bit_set(iParam1->f_386, iParam2))
	{
		return false;
	}
	if (!iParam1->f_5[iParam2]->f_57)
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (44 + iParam0);
		case 1:
			return (50 + iParam0);
		case 2:
			return (56 + iParam0);
		default:
			break;
	}
	return (44 + iParam0);
}

void func_246(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (&uParam0->f_281[iParam1] != 5)
	{
		uParam0->f_281[iParam1]->f_22 = 0f;
	}
	else
	{
		uParam0->f_281[iParam1]->f_22 = fParam2;
	}
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528->f_61.f_1 = uParam0;
	if (iParam2 < 32)
	{
		Global_1899528->f_61.f_101[iParam2] = iParam1;
		Global_1899528->f_61.f_35[iParam2] = iParam3;
		Global_1899528->f_61.f_68[iParam2] = iParam4;
		if (does_entity_exist(iParam1))
		{
		}
	}
}

int func_249(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = get_random_int_in_range(0, 6);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_106[iVar1] && uParam0->f_106[iVar1]->f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_250(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_2145 == 0)
	{
		return false;
	}
	return func_321(iParam1, sParam2, -1454469014, 0, 1, 0, 0, 1);
}

var func_251(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar2 = get_random_int_in_range(0, 4);
	if (iParam2 == uParam0->f_388)
	{
		func_138(uParam0->f_5[iParam2], 3, iParam3, 0);
		uParam0->f_5[iParam2]->f_55 = 3;
		return uParam0->f_5[iParam2]->f_55;
	}
	switch (iVar2)
	{
		case 0:
			func_138(uParam0->f_5[iParam2], 3, iParam3, 0);
			uParam0->f_5[iParam2]->f_55 = 3;
			return uParam0->f_5[iParam2]->f_55;
		case 1:
			func_138(uParam0->f_5[iParam2], 6, iParam3, 0);
			uParam0->f_5[iParam2]->f_55 = 0;
			return uParam0->f_5[iParam2]->f_55;
		case 2:
			func_138(uParam0->f_5[iParam2], 4, iParam3, 0);
			uParam0->f_5[iParam2]->f_55 = 2;
			return uParam0->f_5[iParam2]->f_55;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0) && iVar0 != iParam2)
				{
					if (&uParam0->f_5[iVar0] != 12 && &uParam0->f_5[iVar0] != 11)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
			if (iVar1 >= 2 && iParam2 != uParam0->f_378)
			{
				func_138(uParam0->f_5[iParam2], 11, iParam3, 0);
				uParam0->f_5[iParam2]->f_55 = 4;
				return uParam0->f_5[iParam2]->f_55;
			}
			break;
	}
	func_138(uParam0->f_5[iParam2], 6, iParam3, 0);
	uParam0->f_5[iParam2]->f_55 = 0;
	return uParam0->f_5[iParam2]->f_55;
}

bool func_252(int iParam0, int iParam1)
{
	if (func_322(iParam1))
	{
		return false;
	}
	if (func_323(iParam1))
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
		if (func_324(iParam1))
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
		return func_324(iParam1);
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
		return func_324(iParam1);
	}
	return true;
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

struct<8> func_254(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_255(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_257(int iParam0)
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

bool func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_325(iParam0, iParam1))
		{
			if (func_326(iParam0, iParam1))
			{
				if (func_327(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_328(iParam0);
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

void func_260(int iParam0, int iParam1, bool bParam2)
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

void func_261(int iParam0, bool bParam1)
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

void func_262(int iParam0, int iParam1)
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

void func_263(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(uParam0, iParam1);
}

void func_264(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_73(&(uParam0->f_4));
}

float func_265(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_266(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 5;
			iVar0[2] = 10;
			iVar0[3] = 50;
			iVar0[4] = 100;
			iVar0[5] = 500;
			iVar11 = 6;
			iVar12 = 100;
			break;
		case 2:
		default:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 5;
			iVar0[3] = 10;
			iVar0[4] = 20;
			iVar0[5] = 50;
			iVar0[6] = 100;
			iVar0[7] = 200;
			iVar0[8] = 500;
			iVar11 = 9;
			iVar12 = 100;
			break;
	}
	iVar13 = (iVar11 - 1);
	while (iVar13 >= 0)
	{
		if ((iParam1 / &iVar0[iVar13]) >= iVar12 && (iParam1 % &iVar0[iVar13]) == 0)
		{
		}
		else
		{
			iVar13 = (iVar13 - 1);
		}
	}
	if (iVar13 < 0)
	{
		iVar13 = 0;
	}
	uVar14 = &iVar0[iVar13];
	return uVar14;
}

int func_267(int iParam0, float fParam1, int iParam2, var uParam3)
{
	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	fVar1 = (fParam1 + fVar0);
	if (fVar1 > 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -360f)
	{
		fVar1 = (fVar1 + 360f);
	}
	*uParam3 = { 0f, 0f, fVar1 };
	return 1;
}

bool func_268(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_1938[iParam1] > 4)
	{
		if (is_entity_dead(iParam2))
		{
			return false;
		}
		return _0x3ab6c7b0bb0df4b1(iParam2, uParam0->f_1938[iParam1]->f_1);
	}
	return false;
}

bool func_269(var uParam0, var uParam1)
{
	if (!uParam0->f_2149)
	{
		return false;
	}
	return (*uParam1 >= 3 && *uParam1 <= 13);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_3++;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_3 = 100;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_272(var uParam0)
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

void func_273(var uParam0)
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

bool func_274(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return false;
	}
	*uParam1 = { *(*uParam0)[uParam0->f_105] };
	uParam0->f_105++;
	return true;
}

int func_275(var uParam0, var uParam1)
{
	if (func_329(uParam0, *uParam1))
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

int func_276(var uParam0, var uParam1)
{
	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < func_309(5, func_309(uParam0->f_23, uParam1->f_23)))
		{
			if (uParam0[iVar0] > uParam1[iVar0])
			{
				return 1;
			}
			else if (uParam0[iVar0] < uParam1[iVar0])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

void func_277(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 69)
	{
		func_161(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

bool func_278(var uParam0, int iParam1)
{
	Var0 = { func_330(uParam0, iParam1) };
	return func_192(uParam0, 6, "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_DEAL", &Var0, 2);
}

bool func_279(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
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
							*iParam0 = 570384605;
							return true;
							Jump @2103; //curOff = 1365
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
							Jump @2103; //curOff = 1610
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
							Jump @2103; //curOff = 1855
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
							Jump @9231; //curOff = 2103
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
							Jump @9231; //curOff = 3120
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
							Jump @9231; //curOff = 4137
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
							Jump @9231; //curOff = 5154
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
							Jump @9231; //curOff = 6171
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
							Jump @9231; //curOff = 7187
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
							Jump @9231; //curOff = 8204
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
							Jump @9231; //curOff = 9221
							return false;
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

void func_280(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (iParam2 < 0 || iParam2 >= 69)
	{
		return;
	}
	if (&uParam0->f_1938[iParam1] < 4)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_281[iParam2]->f_4))
	{
		return;
	}
	if (uParam0->f_281[iParam2]->f_3 != -1 && uParam0->f_281[iParam2]->f_3 != uParam0->f_1938[iParam1]->f_1)
	{
		func_161(uParam0, iParam2, 0);
	}
	uParam0->f_281[iParam2]->f_3 = uParam0->f_1938[iParam1]->f_1;
	StringCopy(&(uParam0->f_281[iParam2]->f_5), sParam3, 64);
	set_entity_collision(uParam0->f_281[iParam2]->f_4, false, false);
	if (!is_entity_attached(uParam0->f_281[iParam2]->f_4))
	{
		freeze_entity_position(uParam0->f_281[iParam2]->f_4, true);
	}
	if (bParam4)
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_1938[iParam1]->f_1, sParam3, &Var0, false, 0, 2))
		{
			set_entity_coords(uParam0->f_281[iParam2]->f_4, Var0, true, false, false, true);
			set_entity_rotation(uParam0->f_281[iParam2]->f_4, Var0.f_3, 2, true);
		}
	}
	uParam0->f_281[iParam2]->f_14 = 1;
	set_anim_scene_entity(uParam0->f_1938[iParam1]->f_1, sParam3, uParam0->f_281[iParam2]->f_4, 0);
	set_entity_visible(uParam0->f_281[iParam2]->f_4, true);
}

float func_281(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0f;
	}
	if (&uParam0->f_1938[iParam1] == 5)
	{
		return uParam0->f_1938[iParam1]->f_2;
	}
	if (&uParam0->f_1938[iParam1] == 6)
	{
		return 1f;
	}
	return 0f;
}

bool func_282(var uParam0, var uParam1)
{
	iVar0 = 6;
	if (!func_194(uParam0, iVar0))
	{
		return false;
	}
	if (!func_132(uParam0, uParam1->f_378))
	{
		uParam1->f_378 = (uParam1->f_378 + 1 % 6);
		return false;
	}
	iVar9 = (uParam1->f_378 + 1 % 6);
	if (!func_47(uParam0))
	{
		return false;
	}
	uParam1->f_386 = 0;
	uParam1->f_391 = get_random_float_in_range(3f, 10f);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar9))
		{
			sVar2 = func_288((32 + iVar1));
			func_280(uParam0, iVar0, (32 + iVar9), sVar2, 0);
			sVar2 = func_288((38 + iVar1));
			func_280(uParam0, iVar0, (38 + iVar9), sVar2, 0);
			func_130(uParam0, iVar9, uParam1->f_5[iVar9]->f_59, 1);
			set_bit(&(uParam1->f_386), iVar9);
			uParam1->f_5[iVar9]->f_57 = 0;
		}
		else
		{
			uParam1->f_5[iVar9]->f_57 = 0;
		}
		iVar9 = (iVar9 + 1 % 6);
		iVar1++;
	}
	sVar2 = func_288(24);
	func_280(uParam0, iVar0, 24, sVar2, 0);
	func_197(uParam0, iVar0, uParam0->f_106[uParam1->f_378], "Plr");
	func_195(uParam0, uParam1->f_378, &vVar3);
	func_196(uParam0, uParam1->f_378, &vVar6);
	return func_198(uParam0, iVar0, vVar3, vVar6);
}

void func_283(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_331(iParam2);
	func_332(uParam0, iParam1, iVar0, func_309(iParam2, 4), 0, bParam3);
}

int func_284(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
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
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
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
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
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
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
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
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (to_float(iParam5) * 0.006f));
	return 1;
}

int func_285(int iParam0, int iParam1, int iParam2)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_331(iParam1);
	func_311(iParam0, func_309(iParam1, iParam2), 0);
	func_312(iParam0, iVar0);
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	set_entity_visible(uParam0->f_281[iParam1]->f_4, bParam2);
}

char* func_288(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 24:
			return "Deck";
		case 25:
			return "Board_Card_01";
		case 26:
			return "Board_Card_02";
		case 27:
			return "Board_Card_03";
		case 28:
			return "Board_Card_04";
		case 29:
			return "Board_Card_05";
		case 30:
			return "Board_Card_06";
		case 31:
			return "Board_Card_07";
		case 68:
			return "Chips_Prop";
		case 32:
			return "Seat_01_Card_01";
		case 38:
			return "Seat_01_Card_02";
		case 33:
			return "Seat_02_Card_01";
		case 39:
			return "Seat_02_Card_02";
		case 34:
			return "Seat_03_Card_01";
		case 40:
			return "Seat_03_Card_02";
		case 35:
			return "Seat_04_Card_01";
		case 41:
			return "Seat_04_Card_02";
		case 36:
			return "Seat_05_Card_01";
		case 42:
			return "Seat_05_Card_02";
		case 37:
			return "Seat_06_Card_01";
		case 43:
			return "Seat_06_Card_02";
		case 44:
			return "Seat_01_Chips_A";
		case 50:
			return "Seat_01_Chips_B";
		case 56:
			return "Seat_01_Chips_C";
		case 45:
			return "Seat_02_Chips_A";
		case 51:
			return "Seat_02_Chips_B";
		case 57:
			return "Seat_02_Chips_C";
		case 46:
			return "Seat_03_Chips_A";
		case 52:
			return "Seat_03_Chips_B";
		case 58:
			return "Seat_03_Chips_C";
		case 47:
			return "Seat_04_Chips_A";
		case 53:
			return "Seat_04_Chips_B";
		case 59:
			return "Seat_04_Chips_C";
		case 48:
			return "Seat_05_Chips_A";
		case 54:
			return "Seat_05_Chips_B";
		case 60:
			return "Seat_05_Chips_C";
		case 49:
			return "Seat_06_Chips_A";
		case 55:
			return "Seat_06_Chips_B";
		case 61:
			return "Seat_06_Chips_C";
		case 0:
			return "Seat_01_Stack_01";
		case 1:
			return "Seat_01_Stack_02";
		case 2:
			return "Seat_01_Stack_03";
		case 3:
			return "Seat_01_Stack_04";
		case 4:
			return "Seat_02_Stack_01";
		case 5:
			return "Seat_02_Stack_02";
		case 6:
			return "Seat_02_Stack_03";
		case 7:
			return "Seat_02_Stack_04";
		case 8:
			return "Seat_03_Stack_01";
		case 9:
			return "Seat_03_Stack_02";
		case 10:
			return "Seat_03_Stack_03";
		case 11:
			return "Seat_03_Stack_04";
		case 12:
			return "Seat_04_Stack_01";
		case 13:
			return "Seat_04_Stack_02";
		case 14:
			return "Seat_04_Stack_03";
		case 15:
			return "Seat_04_Stack_04";
		case 16:
			return "Seat_05_Stack_01";
		case 17:
			return "Seat_05_Stack_02";
		case 18:
			return "Seat_05_Stack_03";
		case 19:
			return "Seat_05_Stack_04";
		case 20:
			return "Seat_06_Stack_01";
		case 21:
			return "Seat_06_Stack_02";
		case 22:
			return "Seat_06_Stack_03";
		case 23:
			return "Seat_06_Stack_04";
		case 62:
			return "Seat_01_BetStack_A";
		case 63:
			return "Seat_02_BetStack_A";
		case 64:
			return "Seat_03_BetStack_A";
		case 65:
			return "Seat_04_BetStack_A";
		case 66:
			return "Seat_05_BetStack_A";
		case 67:
			return "Seat_06_BetStack_A";
		default:
			break;
	}
	return "";
}

bool func_289(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "MINIGAME_YES");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_290(var uParam0, char* sParam1)
{
	if (is_entity_dead(uParam0->f_11))
	{
		return false;
	}
	return has_anim_event_fired(uParam0->f_11, get_hash_key(sParam1));
}

bool func_291(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (&uParam0->f_1938[iParam1] == 5)
	{
		return _0x8d81e7824b7753f7(uParam0->f_1938[iParam1]->f_1, sParam2, 1);
	}
	return false;
}

void func_292(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9)
{
	iVar0 = func_331(iParam2);
	func_333(uParam0, iParam1, iVar0, vParam3, vParam6, func_309(iParam2, 4), 0, iParam9);
}

bool func_293(var uParam0, int iParam1)
{
	switch (get_random_int_in_range(0, 3))
	{
		case 0:
			return func_250(uParam0, iParam1, "POKER_CALL");
		case 1:
			return func_250(uParam0, iParam1, "MINIGAME_YES");
		case 2:
			return func_250(uParam0, iParam1, "VOCAL_FX_RESPOND");
		default:
			break;
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "MINIGAME_RAISE");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_295(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_DELIBERATING");
}

bool func_296(var uParam0, int iParam1, int iParam2)
{
	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam2]->f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_297(var uParam0, int iParam1, int iParam2)
{
	iVar1 = (0 + iParam1);
	iVar2 = (iParam2 - iParam1);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam1]->f_1);
	switch (iVar2 + 1)
	{
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_298(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "GENERIC_THANKS");
}

bool func_299(var uParam0, int iParam1, int iParam2)
{
	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam2]->f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_300(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "POKER_FOLD");
	}
	return func_250(uParam0, iParam1, "MINIGAME_NO");
}

bool func_301(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_LOSS_SMALL");
}

void func_302(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	uParam0->f_281[iParam1] = 5;
	uParam0->f_281[iParam1]->f_16 = { vParam3 };
	uParam0->f_281[iParam1]->f_19 = { vParam6 };
	uParam0->f_281[iParam1]->f_1 = iParam2;
	if (does_entity_exist(uParam0->f_281[iParam1]->f_4) && get_entity_model(uParam0->f_281[iParam1]->f_4) == iParam2)
	{
		set_entity_coords(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_16, true, false, false, true);
		set_entity_rotation(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_19, 2, true);
		uParam0->f_281[iParam1] = 5;
		return;
	}
	request_model(iParam2, false);
	while (!has_model_loaded(uParam0->f_281[iParam1]->f_1))
	{
		wait(0);
	}
	uParam0->f_281[iParam1]->f_4 = create_object(uParam0->f_281[iParam1]->f_1, uParam0->f_281[iParam1]->f_16, false, true, false, false, true);
	set_entity_coords(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_16, true, false, false, true);
	set_entity_rotation(uParam0->f_281[iParam1]->f_4, uParam0->f_281[iParam1]->f_19, 2, true);
	uParam0->f_281[iParam1] = 5;
	uParam0->f_281[iParam1]->f_23 = 255f;
	set_model_as_no_longer_needed(uParam0->f_281[iParam1]->f_1);
	set_entity_collision(uParam0->f_281[iParam1]->f_4, false, false);
	freeze_entity_position(uParam0->f_281[iParam1]->f_4, true);
}

bool func_303(var uParam0, int iParam1)
{
	iVar0 = (0 + iParam1);
	sVar1 = func_191(Local_1.f_5[iParam1]->f_1);
	return func_192(uParam0, iVar0, sVar1, "PBL_TakePotA", 2);
}

bool func_304(var uParam0, var uParam1)
{
	iVar2 = uParam1->f_388;
	iVar10 = (0 + uParam1->f_388);
	if (!func_47(uParam0))
	{
		return false;
	}
	if (!func_194(uParam0, iVar10))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar2))
		{
			iVar0 = func_126(iVar2);
			sVar3 = func_288((44 + iVar1));
			func_280(uParam0, iVar10, iVar0, sVar3, 0);
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
	sVar3 = func_334(0);
	func_197(uParam0, iVar10, uParam0->f_106[uParam1->f_388], sVar3);
	func_195(uParam0, uParam1->f_388, &vVar4);
	func_196(uParam0, uParam1->f_388, &vVar7);
	return func_198(uParam0, iVar10, vVar4, vVar7);
}

bool func_305(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_WIN_SMALL");
}

bool func_306(int iParam0, int iParam1, var uParam2)
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

bool func_307(var uParam0, int iParam1)
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

int func_308(int iParam0)
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

int func_309(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_310(int iParam0, int iParam1)
{
	return ((0 + (4 * iParam0)) + iParam1);
}

void func_311(int iParam0, int iParam1, int iParam2)
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

void func_312(int iParam0, int iParam1)
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

void func_313(int iParam0, var uParam1)
{
	iParam0->f_4 = uParam1;
	func_73(&(iParam0->f_1));
}

int func_314(int iParam0, bool bParam1, bool bParam2)
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

bool func_315(int iParam0)
{
	if (func_335(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_316(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_315(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_317(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_318(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_319(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_320()
{
	return true;
}

bool func_321(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_336(iParam0, &Var0);
}

bool func_322(int iParam0)
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

bool func_323(int iParam0)
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

bool func_324(int iParam0)
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
	fVar13 = func_337(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_337(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

bool func_325(int iParam0, int iParam1)
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

bool func_326(int iParam0, int iParam1)
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

bool func_327(int iParam0, int iParam1)
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
	if (!func_325(iParam0, iVar0))
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

void func_328(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_329(var uParam0, struct<2> Param1)
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

struct<4> func_330(var uParam0, int iParam1)
{
	StringCopy(&cVar1, "PBL_", 32);
	iVar5 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_132(uParam0, iVar5))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar5 = (iVar5 + 1 % 6);
		iVar0++;
	}
	return cVar1;
}

int func_331(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_308(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

void func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar6 = func_126(iParam1);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_127(uParam0, iParam1, 0, &vVar0, &vVar3, 0, 1);
	func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
	func_311(uParam0->f_281[iVar6]->f_4, iParam3, iParam4);
	func_312(uParam0->f_281[iVar6]->f_4, iParam2);
	set_entity_visible(uParam0->f_281[iVar6]->f_4, bParam5);
}

void func_333(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, bool bParam11)
{
	iVar0 = func_126(iParam1);
	if (iVar0 >= uParam0->f_281)
	{
		return;
	}
	func_302(uParam0, iVar0, func_128(), vParam3, vParam6);
	func_311(uParam0->f_281[iVar0]->f_4, iParam9, iParam10);
	func_312(uParam0->f_281[iVar0]->f_4, iParam2);
	set_entity_visible(uParam0->f_281[iVar0]->f_4, bParam11);
}

char* func_334(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Seat_01";
		case 1:
			return "Seat_02";
		case 2:
			return "Seat_03";
		case 3:
			return "Seat_04";
		case 4:
			return "Seat_05";
		case 5:
			return "Seat_06";
		case 6:
			return "Plr";
		default:
			break;
	}
	return "";
}

bool func_335(int iParam0)
{
	return iParam0 != 0;
}

bool func_336(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_337(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

